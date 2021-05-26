/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_GCC_YUPIK_H
#define _DT_BINDINGS_CLK_QCOM_GCC_YUPIK_H

/* GCC clocks */
#define GCC_GPLL0						0
#define GCC_GPLL0_OUT_EVEN					1
#define GCC_GPLL0_OUT_ODD					2
#define GCC_GPLL1						3
#define GCC_GPLL10						4
#define GCC_GPLL4						5
#define GCC_GPLL9						6
#define GCC_AGGRE_NOC_PCIE_0_AXI_CLK				7
#define GCC_AGGRE_NOC_PCIE_1_AXI_CLK				8
#define GCC_AGGRE_UFS_PHY_AXI_CLK				9
#define GCC_AGGRE_USB3_PRIM_AXI_CLK				10
#define GCC_AGGRE_USB3_SEC_AXI_CLK				11
#define GCC_CAMERA_AHB_CLK					12
#define GCC_CAMERA_HF_AXI_CLK					13
#define GCC_CAMERA_SF_AXI_CLK					14
#define GCC_CAMERA_XO_CLK					15
#define GCC_CFG_NOC_USB3_PRIM_AXI_CLK				16
#define GCC_CFG_NOC_USB3_SEC_AXI_CLK				17
#define GCC_DDRSS_GPU_AXI_CLK					18
#define GCC_DDRSS_PCIE_SF_CLK					19
#define GCC_DISP_AHB_CLK					20
#define GCC_DISP_GPLL0_CLK_SRC					21
#define GCC_DISP_HF_AXI_CLK					22
#define GCC_DISP_SF_AXI_CLK					23
#define GCC_DISP_XO_CLK						24
#define GCC_GP1_CLK						25
#define GCC_GP1_CLK_SRC						26
#define GCC_GP2_CLK						27
#define GCC_GP2_CLK_SRC						28
#define GCC_GP3_CLK						29
#define GCC_GP3_CLK_SRC						30
#define GCC_GPU_CFG_AHB_CLK					31
#define GCC_GPU_GPLL0_CLK_SRC					32
#define GCC_GPU_GPLL0_DIV_CLK_SRC				33
#define GCC_GPU_IREF_EN						34
#define GCC_GPU_MEMNOC_GFX_CLK					35
#define GCC_GPU_SNOC_DVM_GFX_CLK				36
#define GCC_PCIE0_PHY_RCHNG_CLK					37
#define GCC_PCIE1_PHY_RCHNG_CLK					38
#define GCC_PCIE_0_AUX_CLK					39
#define GCC_PCIE_0_AUX_CLK_SRC					40
#define GCC_PCIE_0_CFG_AHB_CLK					41
#define GCC_PCIE_0_MSTR_AXI_CLK					42
#define GCC_PCIE_0_PHY_RCHNG_CLK_SRC				43
#define GCC_PCIE_0_PIPE_CLK					44
#define GCC_PCIE_0_PIPE_CLK_SRC					45
#define GCC_PCIE_0_SLV_AXI_CLK					46
#define GCC_PCIE_0_SLV_Q2A_AXI_CLK				47
#define GCC_PCIE_1_AUX_CLK					48
#define GCC_PCIE_1_AUX_CLK_SRC					49
#define GCC_PCIE_1_CFG_AHB_CLK					50
#define GCC_PCIE_1_MSTR_AXI_CLK					51
#define GCC_PCIE_1_PHY_RCHNG_CLK_SRC				52
#define GCC_PCIE_1_PIPE_CLK					53
#define GCC_PCIE_1_PIPE_CLK_SRC					54
#define GCC_PCIE_1_SLV_AXI_CLK					55
#define GCC_PCIE_1_SLV_Q2A_AXI_CLK				56
#define GCC_PCIE_THROTTLE_CORE_CLK				57
#define GCC_PDM2_CLK						58
#define GCC_PDM2_CLK_SRC					59
#define GCC_PDM_AHB_CLK						60
#define GCC_PDM_XO4_CLK						61
#define GCC_QMIP_CAMERA_NRT_AHB_CLK				62
#define GCC_QMIP_CAMERA_RT_AHB_CLK				63
#define GCC_QMIP_DISP_AHB_CLK					64
#define GCC_QMIP_VIDEO_VCODEC_AHB_CLK				65
#define GCC_QUPV3_WRAP0_CORE_2X_CLK				66
#define GCC_QUPV3_WRAP0_CORE_CLK				67
#define GCC_QUPV3_WRAP0_S0_CLK					68
#define GCC_QUPV3_WRAP0_S0_CLK_SRC				69
#define GCC_QUPV3_WRAP0_S1_CLK					70
#define GCC_QUPV3_WRAP0_S1_CLK_SRC				71
#define GCC_QUPV3_WRAP0_S2_CLK					72
#define GCC_QUPV3_WRAP0_S2_CLK_SRC				73
#define GCC_QUPV3_WRAP0_S3_CLK					74
#define GCC_QUPV3_WRAP0_S3_CLK_SRC				75
#define GCC_QUPV3_WRAP0_S4_CLK					76
#define GCC_QUPV3_WRAP0_S4_CLK_SRC				77
#define GCC_QUPV3_WRAP0_S5_CLK					78
#define GCC_QUPV3_WRAP0_S5_CLK_SRC				79
#define GCC_QUPV3_WRAP0_S6_CLK					80
#define GCC_QUPV3_WRAP0_S6_CLK_SRC				81
#define GCC_QUPV3_WRAP0_S7_CLK					82
#define GCC_QUPV3_WRAP0_S7_CLK_SRC				83
#define GCC_QUPV3_WRAP1_CORE_2X_CLK				84
#define GCC_QUPV3_WRAP1_CORE_CLK				85
#define GCC_QUPV3_WRAP1_S0_CLK					86
#define GCC_QUPV3_WRAP1_S0_CLK_SRC				87
#define GCC_QUPV3_WRAP1_S1_CLK					88
#define GCC_QUPV3_WRAP1_S1_CLK_SRC				89
#define GCC_QUPV3_WRAP1_S2_CLK					90
#define GCC_QUPV3_WRAP1_S2_CLK_SRC				91
#define GCC_QUPV3_WRAP1_S3_CLK					92
#define GCC_QUPV3_WRAP1_S3_CLK_SRC				93
#define GCC_QUPV3_WRAP1_S4_CLK					94
#define GCC_QUPV3_WRAP1_S4_CLK_SRC				95
#define GCC_QUPV3_WRAP1_S5_CLK					96
#define GCC_QUPV3_WRAP1_S5_CLK_SRC				97
#define GCC_QUPV3_WRAP1_S6_CLK					98
#define GCC_QUPV3_WRAP1_S6_CLK_SRC				99
#define GCC_QUPV3_WRAP1_S7_CLK					100
#define GCC_QUPV3_WRAP1_S7_CLK_SRC				101
#define GCC_QUPV3_WRAP_0_M_AHB_CLK				102
#define GCC_QUPV3_WRAP_0_S_AHB_CLK				103
#define GCC_QUPV3_WRAP_1_M_AHB_CLK				104
#define GCC_QUPV3_WRAP_1_S_AHB_CLK				105
#define GCC_SDCC1_AHB_CLK					106
#define GCC_SDCC1_APPS_CLK					107
#define GCC_SDCC1_APPS_CLK_SRC					108
#define GCC_SDCC1_ICE_CORE_CLK					109
#define GCC_SDCC1_ICE_CORE_CLK_SRC				110
#define GCC_SDCC2_AHB_CLK					111
#define GCC_SDCC2_APPS_CLK					112
#define GCC_SDCC2_APPS_CLK_SRC					113
#define GCC_SDCC4_AHB_CLK					114
#define GCC_SDCC4_APPS_CLK					115
#define GCC_SDCC4_APPS_CLK_SRC					116
#define GCC_THROTTLE_PCIE_AHB_CLK				117
#define GCC_TITAN_NRT_THROTTLE_CORE_CLK				118
#define GCC_TITAN_RT_THROTTLE_CORE_CLK				119
#define GCC_UFS_1_CLKREF_EN					120
#define GCC_UFS_PHY_AHB_CLK					121
#define GCC_UFS_PHY_AXI_CLK					122
#define GCC_UFS_PHY_AXI_CLK_SRC					123
#define GCC_UFS_PHY_ICE_CORE_CLK				124
#define GCC_UFS_PHY_ICE_CORE_CLK_SRC				125
#define GCC_UFS_PHY_PHY_AUX_CLK					126
#define GCC_UFS_PHY_PHY_AUX_CLK_SRC				127
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK				128
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK_SRC				129
#define GCC_UFS_PHY_RX_SYMBOL_1_CLK				130
#define GCC_UFS_PHY_RX_SYMBOL_1_CLK_SRC				131
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK				132
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK_SRC				133
#define GCC_UFS_PHY_UNIPRO_CORE_CLK				134
#define GCC_UFS_PHY_UNIPRO_CORE_CLK_SRC				135
#define GCC_USB30_PRIM_MASTER_CLK				136
#define GCC_USB30_PRIM_MASTER_CLK_SRC				137
#define GCC_USB30_PRIM_MOCK_UTMI_CLK				138
#define GCC_USB30_PRIM_MOCK_UTMI_CLK_SRC			139
#define GCC_USB30_PRIM_MOCK_UTMI_POSTDIV_CLK_SRC		140
#define GCC_USB30_PRIM_SLEEP_CLK				141
#define GCC_USB30_SEC_MASTER_CLK				142
#define GCC_USB30_SEC_MASTER_CLK_SRC				143
#define GCC_USB30_SEC_MOCK_UTMI_CLK				144
#define GCC_USB30_SEC_MOCK_UTMI_CLK_SRC				145
#define GCC_USB30_SEC_MOCK_UTMI_POSTDIV_CLK_SRC			146
#define GCC_USB30_SEC_SLEEP_CLK					147
#define GCC_USB3_PRIM_PHY_AUX_CLK				148
#define GCC_USB3_PRIM_PHY_AUX_CLK_SRC				149
#define GCC_USB3_PRIM_PHY_COM_AUX_CLK				150
#define GCC_USB3_PRIM_PHY_PIPE_CLK				151
#define GCC_USB3_PRIM_PHY_PIPE_CLK_SRC				152
#define GCC_USB3_SEC_PHY_AUX_CLK				153
#define GCC_USB3_SEC_PHY_AUX_CLK_SRC				154
#define GCC_USB3_SEC_PHY_COM_AUX_CLK				155
#define GCC_USB3_SEC_PHY_PIPE_CLK				156
#define GCC_USB3_SEC_PHY_PIPE_CLK_SRC				157
#define GCC_VIDEO_AHB_CLK					158
#define GCC_VIDEO_AXI0_CLK					159
#define GCC_VIDEO_MVP_THROTTLE_CORE_CLK				160
#define GCC_VIDEO_XO_CLK					161
#define GCC_AGGRE_UFS_PHY_AXI_HW_CTL_CLK			162
#define GCC_UFS_PHY_AXI_HW_CTL_CLK				163
#define GCC_UFS_PHY_ICE_CORE_HW_CTL_CLK				164
#define GCC_UFS_PHY_PHY_AUX_HW_CTL_CLK				165
#define GCC_UFS_PHY_UNIPRO_CORE_HW_CTL_CLK			166

/* GCC power domains */
#define GCC_PCIE_0_GDSC						0
#define GCC_PCIE_1_GDSC						1
#define GCC_UFS_PHY_GDSC					2
#define GCC_USB30_PRIM_GDSC					3
#define GCC_USB30_SEC_GDSC					4

/* GCC resets */
#define GCC_PCIE_0_BCR						0
#define GCC_PCIE_0_PHY_BCR					1
#define GCC_PCIE_1_BCR						2
#define GCC_PCIE_1_PHY_BCR					3
#define GCC_QUSB2PHY_PRIM_BCR					4
#define GCC_QUSB2PHY_SEC_BCR					5
#define GCC_SDCC1_BCR						6
#define GCC_SDCC2_BCR						7
#define GCC_SDCC4_BCR						8
#define GCC_UFS_PHY_BCR						9
#define GCC_USB30_PRIM_BCR					10
#define GCC_USB30_SEC_BCR					11
#define GCC_USB3_DP_PHY_PRIM_BCR				12
#define GCC_USB3_PHY_PRIM_BCR					13
#define GCC_USB3PHY_PHY_PRIM_BCR				14
#define GCC_USB_PHY_CFG_AHB2PHY_BCR				15
#define GCC_VIDEO_AXI0_CLK_ARES					16

#endif
