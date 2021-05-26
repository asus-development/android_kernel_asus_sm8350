// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 *
 */

#include <linux/haven/hh_mem_notifier.h>
#include <linux/list.h>
#include <linux/module.h>
#include <linux/mutex.h>
#include <linux/notifier.h>
#include <linux/slab.h>

struct mem_notifier_entry {
	hh_mem_notifier_handler handler;
	void *data;
};

static DEFINE_MUTEX(mem_notifier_entries_lock);
static struct mem_notifier_entry mem_notifier_entries[HH_MEM_NOTIFIER_TAG_MAX];

static bool hh_mem_notifier_tag_valid(enum hh_mem_notifier_tag tag)
{
	return tag >= 0 && tag < HH_MEM_NOTIFIER_TAG_MAX;
}

/**
 * hh_mem_notifier_register: Bind a callback and arbitrary data to a particular
 *                           notification tag. The callback will be invoked when
 *                           the Haven MEM_SHARED and MEM_RELEASED notifications
 *                           involving the tag that was registered with arrive
 *                           at the VM.
 * @tag: The tag for which the caller would like to receive MEM_SHARED and
 *       MEM_RELEASED notifications for
 * @handler: The handler that will be invoked when a MEM_SHARED or MEM_RELEASED
 *           notification pertaining to @tag arrives at the VM. The handler will
 *           also be invoked with a pointer to caller specific data, as well as
 *           the original MEM_SHARED/MEM_RELEASED payload from the resource
 *           manager.
 * @data: The data that should be passed to @handler when it is invoked
 *
 * On success, the function will return a cookie. Otherwise, the function will
 * return an error, and thus, callers should use IS_ERR() to check for any
 * errors. The cookie must be used when unregistering the handler from the
 * tag.
 */
void *hh_mem_notifier_register(enum hh_mem_notifier_tag tag,
			       hh_mem_notifier_handler handler, void *data)
{
	struct mem_notifier_entry *entry;

	if (!hh_mem_notifier_tag_valid(tag) || !handler)
		return ERR_PTR(-EINVAL);

	mutex_lock(&mem_notifier_entries_lock);
	entry = &mem_notifier_entries[tag];
	if (entry->handler) {
		mutex_unlock(&mem_notifier_entries_lock);
		return ERR_PTR(-EEXIST);
	}
	entry->handler = handler;
	entry->data = data;
	mutex_unlock(&mem_notifier_entries_lock);

	return entry;
}
EXPORT_SYMBOL(hh_mem_notifier_register);

/**
 * hh_mem_notifier_unregister: Unregister for memory notifier notifications
 *                             with respect to a particular tag.
 * @cookie: The cookie returned by hh_mem_notifier_register
 *
 * On success, the function will unbind the handler specified in
 * hh_mem_notifier_register from the tag, preventing the handler from being
 * invoked when subsequent MEM_SHARED/MEM_RELEASED notifications pertaining
 * to the tag arrive.
 */
void hh_mem_notifier_unregister(void *cookie)
{
	struct mem_notifier_entry *entry = cookie;

	if (!cookie)
		return;

	mutex_lock(&mem_notifier_entries_lock);
	entry->handler = NULL;
	entry->data = NULL;
	mutex_unlock(&mem_notifier_entries_lock);
}
EXPORT_SYMBOL(hh_mem_notifier_unregister);

static enum hh_mem_notifier_tag hh_mem_notifier_get_tag(unsigned long action,
							void *msg)
{
	if (action == HH_RM_NOTIF_MEM_SHARED)
		return
		((struct hh_rm_notif_mem_shared_payload *)msg)->mem_info_tag;
	else if (action == HH_RM_NOTIF_MEM_RELEASED)
		return
		((struct hh_rm_notif_mem_released_payload *)msg)->mem_info_tag;

	return ((struct hh_rm_notif_mem_accepted_payload *)msg)->mem_info_tag;
}

static int hh_mem_notifier_call(struct notifier_block *nb, unsigned long action,
				void *msg)
{
	struct mem_notifier_entry *entry;
	enum hh_mem_notifier_tag tag;
	hh_mem_notifier_handler handler = NULL;
	void *data;

	if ((action != HH_RM_NOTIF_MEM_SHARED) &&
	    (action != HH_RM_NOTIF_MEM_RELEASED) &&
	    (action != HH_RM_NOTIF_MEM_ACCEPTED))
		return NOTIFY_DONE;

	tag = hh_mem_notifier_get_tag(action, msg);
	if (!hh_mem_notifier_tag_valid(tag))
		return NOTIFY_DONE;

	mutex_lock(&mem_notifier_entries_lock);
	entry = &mem_notifier_entries[tag];
	handler = entry->handler;
	data = entry->data;
	mutex_unlock(&mem_notifier_entries_lock);

	if (handler)
		handler(tag, action, data, msg);

	return NOTIFY_OK;
}

static struct notifier_block hh_mem_notifier_blk = {
	.notifier_call = hh_mem_notifier_call,
};

static int __init hh_mem_notifier_init(void)
{
	int ret = hh_rm_register_notifier(&hh_mem_notifier_blk);

	if (ret)
		pr_err("%s: registration with RM notifier failed rc: %d\n",
		       __func__, ret);
	return ret;
}
module_init(hh_mem_notifier_init);

static void __exit hh_mem_notifier_exit(void)
{
	hh_rm_unregister_notifier(&hh_mem_notifier_blk);
}
module_exit(hh_mem_notifier_exit);

MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Qualcomm Technologies, Inc. Haven Memory Notifier");
