#ifndef  _CAN_ALL_MRR_H
#define  _CAN_ALL_MRR_H

#include "project.h"

//--Can_NR=2frame id is 0xFFFFFFFF80000239
//569 ShutdownMode 3 "initial" 2 "reserved" 1 "fast off" 0 "soft off"
#define  CAN_ALL_MRR_ce2ShutdownMode_initial 3
#define  CAN_ALL_MRR_ce2ShutdownMode_reserved  2 
#define  CAN_ALL_MRR_ce2ShutdownMode_fast_off  1 
#define  CAN_ALL_MRR_ce2ShutdownMode_soft_off  0 
//569 ACC_State 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode"
#define  CAN_ALL_MRR_ce3ACC_State_Failure_mode 7
#define  CAN_ALL_MRR_ce3ACC_State_Standstill  6 
#define  CAN_ALL_MRR_ce3ACC_State_Override  5 
#define  CAN_ALL_MRR_ce3ACC_State_Brake_Only_mode  4 
#define  CAN_ALL_MRR_ce3ACC_State_Active_Control_mode  3 
#define  CAN_ALL_MRR_ce3ACC_State_Stand_By_mode  2 
#define  CAN_ALL_MRR_ce3ACC_State_Passive_mode  1 
#define  CAN_ALL_MRR_ce3ACC_State_OFF_mode  0 
//569 ACC_BrakePreferred 1 "demand" 0 "no demand"
#define  CAN_ALL_MRR_cb1ACC_BrakePreferred_demand 1
#define  CAN_ALL_MRR_cb1ACC_BrakePreferred_no_demand  0 
//569 ACC_UpperComftBandReq 1 "demand" 0 "no demand"
#define  CAN_ALL_MRR_cb1ACC_UpperComftBandReq_demand 1
#define  CAN_ALL_MRR_cb1ACC_UpperComftBandReq_no_demand  0 
//569 ACC_DriveOff 1 "demand" 0 "no demand"
#define  CAN_ALL_MRR_cb1ACC_DriveOff_demand 1
#define  CAN_ALL_MRR_cb1ACC_DriveOff_no_demand  0 
//569 ACC_StandstillReq 1 "demand" 0 "no demand"
#define  CAN_ALL_MRR_cb1ACC_StandstillReq_demand 1
#define  CAN_ALL_MRR_cb1ACC_StandstillReq_no_demand  0 
//569 AEB_Req 1 "demand" 0 "no demand"
#define  CAN_ALL_MRR_cb1AEB_Req_demand 1
#define  CAN_ALL_MRR_cb1AEB_Req_no_demand  0 
//569 EBA_Req 1 "demand" 0 "no demand"
#define  CAN_ALL_MRR_cb1EBA_Req_demand 1
#define  CAN_ALL_MRR_cb1EBA_Req_no_demand  0 
//569 ABA_Level 3 "level 3" 2 "level 2" 1 "level 1" 0 "level 0"
#define  CAN_ALL_MRR_ce2ABA_Level_level_3 3
#define  CAN_ALL_MRR_ce2ABA_Level_level_2  2 
#define  CAN_ALL_MRR_ce2ABA_Level_level_1  1 
#define  CAN_ALL_MRR_ce2ABA_Level_level_0  0 
//569 ABA_Req 1 "demand" 0 "no demand"
#define  CAN_ALL_MRR_cb1ABA_Req_demand 1
#define  CAN_ALL_MRR_cb1ABA_Req_no_demand  0 
//569 AWB_Req 1 "demand" 0 "no demand"
#define  CAN_ALL_MRR_cb1AWB_Req_demand 1
#define  CAN_ALL_MRR_cb1AWB_Req_no_demand  0 
//569 ABP_Req 1 "demand" 0 "no demand"
#define  CAN_ALL_MRR_cb1ABP_Req_demand 1
#define  CAN_ALL_MRR_cb1ABP_Req_no_demand  0 
//569 AWB_Level 4 "level 4" 3 "level 3" 2 "level 2" 1 "level 1" 0 "no level"
#define  CAN_ALL_MRR_ce4AWB_Level_level_4 4
#define  CAN_ALL_MRR_ce4AWB_Level_level_3  3 
#define  CAN_ALL_MRR_ce4AWB_Level_level_2  2 
#define  CAN_ALL_MRR_ce4AWB_Level_level_1  1 
#define  CAN_ALL_MRR_ce4AWB_Level_no_level  0 
//--Can_NR=3frame id is 0xFFFFFFFF80000246
//582 vSetDis 511 "Invalid"
#define  CAN_ALL_MRR_ce9vSetDis_Invalid 511
//582 dxTarObj 7 "Distance_7" 6 "Distance_6" 5 "Distance_5" 4 "Distance_4" 3 "Distance_3" 2 "Distance_2" 1 "Distance_1" 0 "Distance_0"
#define  CAN_ALL_MRR_ce3dxTarObj_Distance_7 7
#define  CAN_ALL_MRR_ce3dxTarObj_Distance_6  6 
#define  CAN_ALL_MRR_ce3dxTarObj_Distance_5  5 
#define  CAN_ALL_MRR_ce3dxTarObj_Distance_4  4 
#define  CAN_ALL_MRR_ce3dxTarObj_Distance_3  3 
#define  CAN_ALL_MRR_ce3dxTarObj_Distance_2  2 
#define  CAN_ALL_MRR_ce3dxTarObj_Distance_1  1 
#define  CAN_ALL_MRR_ce3dxTarObj_Distance_0  0 
//582 TauGapSet 7 "tauGap_7" 6 "tauGap_6" 5 "tauGap_5" 4 "tauGap_4" 3 "tauGap_3" 2 "tauGap_2" 1 "tauGap_1" 0 "tauGap_0"
#define  CAN_ALL_MRR_ce3TauGapSet_tauGap_7 7
#define  CAN_ALL_MRR_ce3TauGapSet_tauGap_6  6 
#define  CAN_ALL_MRR_ce3TauGapSet_tauGap_5  5 
#define  CAN_ALL_MRR_ce3TauGapSet_tauGap_4  4 
#define  CAN_ALL_MRR_ce3TauGapSet_tauGap_3  3 
#define  CAN_ALL_MRR_ce3TauGapSet_tauGap_2  2 
#define  CAN_ALL_MRR_ce3TauGapSet_tauGap_1  1 
#define  CAN_ALL_MRR_ce3TauGapSet_tauGap_0  0 
//582 ObjValid 1 "target object detected" 0 "no object"
#define  CAN_ALL_MRR_cb1ObjValid_target_object_detected 1
#define  CAN_ALL_MRR_cb1ObjValid_no_object  0 
//582 MRR_FCW_Sensitive 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable"
#define  CAN_ALL_MRR_ce2MRR_FCW_Sensitive_level3_High_sensitive 3
#define  CAN_ALL_MRR_ce2MRR_FCW_Sensitive_level2_Normal  2 
#define  CAN_ALL_MRR_ce2MRR_FCW_Sensitive_level1_Low_sensitive  1 
#define  CAN_ALL_MRR_ce2MRR_FCW_Sensitive_Unavailable  0 
//582 TakeOverReq 1 "valid TakeOver request" 0 "no TakeOver request"
#define  CAN_ALL_MRR_cb1TakeOverReq_valid_TakeOver_request 1
#define  CAN_ALL_MRR_cb1TakeOverReq_no_TakeOver_request  0 
//582 ACCFailInfo 1 "error" 0 "no error"
#define  CAN_ALL_MRR_cb1ACCFailInfo_error 1
#define  CAN_ALL_MRR_cb1ACCFailInfo_no_error  0 
//582 ACCHMI_Mode 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode"
#define  CAN_ALL_MRR_ce3ACCHMI_Mode_Failure_mode 7
#define  CAN_ALL_MRR_ce3ACCHMI_Mode_Standstill  6 
#define  CAN_ALL_MRR_ce3ACCHMI_Mode_Override  5 
#define  CAN_ALL_MRR_ce3ACCHMI_Mode_Brake_Only_mode  4 
#define  CAN_ALL_MRR_ce3ACCHMI_Mode_Active_Control_mode  3 
#define  CAN_ALL_MRR_ce3ACCHMI_Mode_Stand_By_mode  2 
#define  CAN_ALL_MRR_ce3ACCHMI_Mode_Passive_mode  1 
#define  CAN_ALL_MRR_ce3ACCHMI_Mode_OFF_mode  0 
//582 FCW_latentWarning 1 "warning" 0 "no warning"
#define  CAN_ALL_MRR_cb1FCW_latentWarning_warning 1
#define  CAN_ALL_MRR_cb1FCW_latentWarning_no_warning  0 
//582 FCW_preWarning 1 "warning" 0 "no warning"
#define  CAN_ALL_MRR_cb1FCW_preWarning_warning 1
#define  CAN_ALL_MRR_cb1FCW_preWarning_no_warning  0 
//582 ACC_Startstop_infor 3 "ACC_SystemFailure" 2 "ACC_StartRequest" 1 "ACC_StopForbidden" 0 "ACC_StopAllowed"
#define  CAN_ALL_MRR_ce2ACC_Startstop_infor_ACC_SystemFailure 3
#define  CAN_ALL_MRR_ce2ACC_Startstop_infor_ACC_StartRequest  2 
#define  CAN_ALL_MRR_ce2ACC_Startstop_infor_ACC_StopForbidden  1 
#define  CAN_ALL_MRR_ce2ACC_Startstop_infor_ACC_StopAllowed  0 
//582 AEB_STATE 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable"
#define  CAN_ALL_MRR_ce3AEB_STATE_Reserved 5
#define  CAN_ALL_MRR_ce3AEB_STATE_Active  4 
#define  CAN_ALL_MRR_ce3AEB_STATE_Active_no_intervention  3 
#define  CAN_ALL_MRR_ce3AEB_STATE_Standby  2 
#define  CAN_ALL_MRR_ce3AEB_STATE_Off  1 
#define  CAN_ALL_MRR_ce3AEB_STATE_Unavailable  0 
//582 FCW_STATE 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable"
#define  CAN_ALL_MRR_ce3FCW_STATE_Reserved 5
#define  CAN_ALL_MRR_ce3FCW_STATE_Active  4 
#define  CAN_ALL_MRR_ce3FCW_STATE_Active_no_intervention  3 
#define  CAN_ALL_MRR_ce3FCW_STATE_Standby  2 
#define  CAN_ALL_MRR_ce3FCW_STATE_Off  1 
#define  CAN_ALL_MRR_ce3FCW_STATE_Unavailable  0 
//582 Textinfo 15 "Uncalibrated" 14 "ESP error" 13 "Override" 12 "Door open" 11 "Speed over 150kph" 10 "ESP off" 9 "Seatbelt unbuckled" 8 "No forward gear" 7 "EPB activate" 6 "ACC and PEBS error" 5 "MRR blindness" 4 "ACC Active" 3 "ACC is cancelled" 2 "ACC is switched off" 1 "ACC is switched on" 0 "No display"
#define  CAN_ALL_MRR_ce4Textinfo_Uncalibrated 15
#define  CAN_ALL_MRR_ce4Textinfo_ESP_error  14 
#define  CAN_ALL_MRR_ce4Textinfo_Override  13 
#define  CAN_ALL_MRR_ce4Textinfo_Door_open  12 
#define  CAN_ALL_MRR_ce4Textinfo_Speed_over_150kph  11 
#define  CAN_ALL_MRR_ce4Textinfo_ESP_off  10 
#define  CAN_ALL_MRR_ce4Textinfo_Seatbelt_unbuckled  9 
#define  CAN_ALL_MRR_ce4Textinfo_No_forward_gear  8 
#define  CAN_ALL_MRR_ce4Textinfo_EPB_activate  7 
#define  CAN_ALL_MRR_ce4Textinfo_ACC_and_PEBS_error  6 
#define  CAN_ALL_MRR_ce4Textinfo_MRR_blindness  5 
#define  CAN_ALL_MRR_ce4Textinfo_ACC_Active  4 
#define  CAN_ALL_MRR_ce4Textinfo_ACC_is_cancelled  3 
#define  CAN_ALL_MRR_ce4Textinfo_ACC_is_switched_off  2 
#define  CAN_ALL_MRR_ce4Textinfo_ACC_is_switched_on  1 
#define  CAN_ALL_MRR_ce4Textinfo_No_display  0 
//--Can_NR=4frame id is 0xFFFFFFFF80000279
//633 MRR_F_Obj_0x_class 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown"
#define  CAN_ALL_MRR_ce3MRR_F_Obj_0x_class_Two_wheeler 3
#define  CAN_ALL_MRR_ce3MRR_F_Obj_0x_class_Truck  2 
#define  CAN_ALL_MRR_ce3MRR_F_Obj_0x_class_Car  1 
#define  CAN_ALL_MRR_ce3MRR_F_Obj_0x_class_Unknown  0 
//633 MRR_FF_Obj_0x_class 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown"
#define  CAN_ALL_MRR_ce3MRR_FF_Obj_0x_class_Two_wheeler 3
#define  CAN_ALL_MRR_ce3MRR_FF_Obj_0x_class_Truck  2 
#define  CAN_ALL_MRR_ce3MRR_FF_Obj_0x_class_Car  1 
#define  CAN_ALL_MRR_ce3MRR_FF_Obj_0x_class_Unknown  0 
//633 MRR_PedDetection 1 "dectected" 0 "not dectected"
#define  CAN_ALL_MRR_cb1MRR_PedDetection_dectected 1
#define  CAN_ALL_MRR_cb1MRR_PedDetection_not_dectected  0 
//--Can_NR=5frame id is 0xFFFFFFFF80000480
//1152 MRR_L_Obj_0x_class 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown"
#define  CAN_ALL_MRR_ce3MRR_L_Obj_0x_class_Two_wheeler 3
#define  CAN_ALL_MRR_ce3MRR_L_Obj_0x_class_Truck  2 
#define  CAN_ALL_MRR_ce3MRR_L_Obj_0x_class_Car  1 
#define  CAN_ALL_MRR_ce3MRR_L_Obj_0x_class_Unknown  0 
//1152 MRR_R_Obj_0x_class 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown"
#define  CAN_ALL_MRR_ce3MRR_R_Obj_0x_class_Two_wheeler 3
#define  CAN_ALL_MRR_ce3MRR_R_Obj_0x_class_Truck  2 
#define  CAN_ALL_MRR_ce3MRR_R_Obj_0x_class_Car  1 
#define  CAN_ALL_MRR_ce3MRR_R_Obj_0x_class_Unknown  0 
//1152 MRR_RightTargrtDetection 1 "dectected" 0 "not dectected"
#define  CAN_ALL_MRR_cb1MRR_RightTargrtDetection_dectected 1
#define  CAN_ALL_MRR_cb1MRR_RightTargrtDetection_not_dectected  0 

//CAN�з��ű������ñ�������������
#define  CAN_ALL_MRR_s8ACC_TgtAxLowerLim_offset 127
#define  CAN_ALL_MRR_s8ACC_TgtAxLowerLim_Nmax 127
#define  CAN_ALL_MRR_s8ACC_TgtAxLowerLim_Pmax 0
#define  CAN_ALL_MRR_s11ACC_TgtAx_offset 100
#define  CAN_ALL_MRR_s11ACC_TgtAx_Nmax 100
#define  CAN_ALL_MRR_s11ACC_TgtAx_Pmax 155
#define  CAN_ALL_MRR_s16AEB_TgtAx_offset 320
#define  CAN_ALL_MRR_s16AEB_TgtAx_Nmax 320
#define  CAN_ALL_MRR_s16AEB_TgtAx_Pmax 320
#define  CAN_ALL_MRR_s9MRR_F_Object_dy_offset 240
#define  CAN_ALL_MRR_s9MRR_F_Object_dy_Nmax 240
#define  CAN_ALL_MRR_s9MRR_F_Object_dy_Pmax 240
#define  CAN_ALL_MRR_s9MRR_FF_Object_dy_offset 240
#define  CAN_ALL_MRR_s9MRR_FF_Object_dy_Nmax 240
#define  CAN_ALL_MRR_s9MRR_FF_Object_dy_Pmax 240
#define  CAN_ALL_MRR_s9MRR_L_Object_dy_offset 240
#define  CAN_ALL_MRR_s9MRR_L_Object_dy_Nmax 240
#define  CAN_ALL_MRR_s9MRR_L_Object_dy_Pmax 240
#define  CAN_ALL_MRR_s9MRR_R_Object_dy_offset 240
#define  CAN_ALL_MRR_s9MRR_R_Object_dy_Nmax 240
#define  CAN_ALL_MRR_s9MRR_R_Object_dy_Pmax 240

//CAN�޷��ű�����define�ñ�����physical min-max
#define  CAN_ALL_MRR_u8ACC_TgtAxUpperComftBand_min 0
#define  CAN_ALL_MRR_u8ACC_TgtAxUpperComftBand_max 0x40
#define  CAN_ALL_MRR_u8ACC_TgtAxLowerComftBand_min 0
#define  CAN_ALL_MRR_u8ACC_TgtAxLowerComftBand_max 0x40
#define  CAN_ALL_MRR_u8ACC_TgtAxUpperLim_min 0
#define  CAN_ALL_MRR_u8ACC_TgtAxUpperLim_max 0x7F
#define  CAN_ALL_MRR_u8ACC_TgtAxLowerLim_min 0
#define  CAN_ALL_MRR_u8ACC_TgtAxLowerLim_max 0x7F
#define  CAN_ALL_MRR_u11ACC_TgtAx_min 0
#define  CAN_ALL_MRR_u11ACC_TgtAx_max 0xFF
#define  CAN_ALL_MRR_c8Reserve_1_32_39_min 0
#define  CAN_ALL_MRR_c8Reserve_1_32_39_max 0xFF
#define  CAN_ALL_MRR_u4Rolling_counter_0x238_min 0
#define  CAN_ALL_MRR_u4Rolling_counter_0x238_max 0xF
#define  CAN_ALL_MRR_u8Checksum_0x238_min 0
#define  CAN_ALL_MRR_u8Checksum_0x238_max 0xFF
#define  CAN_ALL_MRR_u2ShutdownMode_min 0
#define  CAN_ALL_MRR_u2ShutdownMode_max 0x3
#define  CAN_ALL_MRR_u3ACC_State_min 0
#define  CAN_ALL_MRR_u3ACC_State_max 0x7
#define  CAN_ALL_MRR_u1ACC_BrakePreferred_min 0
#define  CAN_ALL_MRR_u1ACC_BrakePreferred_max 0x1
#define  CAN_ALL_MRR_c1Reserve_2_2_2_min 0
#define  CAN_ALL_MRR_c1Reserve_2_2_2_max 0x1
#define  CAN_ALL_MRR_u1ACC_UpperComftBandReq_min 0
#define  CAN_ALL_MRR_u1ACC_UpperComftBandReq_max 0x1
#define  CAN_ALL_MRR_u1ACC_DriveOff_min 0
#define  CAN_ALL_MRR_u1ACC_DriveOff_max 0x1
#define  CAN_ALL_MRR_u1ACC_StandstillReq_min 0
#define  CAN_ALL_MRR_u1ACC_StandstillReq_max 0x1
#define  CAN_ALL_MRR_u1AEB_Req_min 0
#define  CAN_ALL_MRR_u1AEB_Req_max 0x1
#define  CAN_ALL_MRR_u1EBA_Req_min 0
#define  CAN_ALL_MRR_u1EBA_Req_max 0x1
#define  CAN_ALL_MRR_u2ABA_Level_min 0
#define  CAN_ALL_MRR_u2ABA_Level_max 0x3
#define  CAN_ALL_MRR_c2Reserve_2_10_11_min 0
#define  CAN_ALL_MRR_c2Reserve_2_10_11_max 0x3
#define  CAN_ALL_MRR_u1ABA_Req_min 0
#define  CAN_ALL_MRR_u1ABA_Req_max 0x1
#define  CAN_ALL_MRR_u1AWB_Req_min 0
#define  CAN_ALL_MRR_u1AWB_Req_max 0x1
#define  CAN_ALL_MRR_u1ABP_Req_min 0
#define  CAN_ALL_MRR_u1ABP_Req_max 0x1
#define  CAN_ALL_MRR_u4AWB_Level_min 0
#define  CAN_ALL_MRR_u4AWB_Level_max 0xF
#define  CAN_ALL_MRR_c1Reserve_2_20_20_min 0
#define  CAN_ALL_MRR_c1Reserve_2_20_20_max 0x1
#define  CAN_ALL_MRR_u16AEB_TgtAx_min 0
#define  CAN_ALL_MRR_u16AEB_TgtAx_max 0x280
#define  CAN_ALL_MRR_u4Rolling_counter_0x239_min 0
#define  CAN_ALL_MRR_u4Rolling_counter_0x239_max 0xF
#define  CAN_ALL_MRR_u8Checksum_0x239_min 0
#define  CAN_ALL_MRR_u8Checksum_0x239_max 0xFF
#define  CAN_ALL_MRR_u9vSetDis_min 0
#define  CAN_ALL_MRR_u9vSetDis_max 0x1FF
#define  CAN_ALL_MRR_u3dxTarObj_min 0
#define  CAN_ALL_MRR_u3dxTarObj_max 0x7
#define  CAN_ALL_MRR_u3TauGapSet_min 0
#define  CAN_ALL_MRR_u3TauGapSet_max 0x7
#define  CAN_ALL_MRR_u1ObjValid_min 0
#define  CAN_ALL_MRR_u1ObjValid_max 0x1
#define  CAN_ALL_MRR_u2MRR_FCW_Sensitive_min 0
#define  CAN_ALL_MRR_u2MRR_FCW_Sensitive_max 0x3
#define  CAN_ALL_MRR_u1TakeOverReq_min 0
#define  CAN_ALL_MRR_u1TakeOverReq_max 0x1
#define  CAN_ALL_MRR_c1Reserve_3_21_21_min 0
#define  CAN_ALL_MRR_c1Reserve_3_21_21_max 0x1
#define  CAN_ALL_MRR_u1ACCFailInfo_min 0
#define  CAN_ALL_MRR_u1ACCFailInfo_max 0x1
#define  CAN_ALL_MRR_u3ACCHMI_Mode_min 0
#define  CAN_ALL_MRR_u3ACCHMI_Mode_max 0x7
#define  CAN_ALL_MRR_u1FCW_latentWarning_min 0
#define  CAN_ALL_MRR_u1FCW_latentWarning_max 0x1
#define  CAN_ALL_MRR_u1FCW_preWarning_min 0
#define  CAN_ALL_MRR_u1FCW_preWarning_max 0x1
#define  CAN_ALL_MRR_u2ACC_Startstop_infor_min 0
#define  CAN_ALL_MRR_u2ACC_Startstop_infor_max 0x3
#define  CAN_ALL_MRR_u3AEB_STATE_min 0
#define  CAN_ALL_MRR_u3AEB_STATE_max 0x7
#define  CAN_ALL_MRR_u3FCW_STATE_min 0
#define  CAN_ALL_MRR_u3FCW_STATE_max 0x7
#define  CAN_ALL_MRR_c1Reserve_3_24_24_min 0
#define  CAN_ALL_MRR_c1Reserve_3_24_24_max 0x1
#define  CAN_ALL_MRR_u8Obj_Speed_min 0
#define  CAN_ALL_MRR_u8Obj_Speed_max 0xFF
#define  CAN_ALL_MRR_c5Reserve_3_32_36_min 0
#define  CAN_ALL_MRR_c5Reserve_3_32_36_max 0x1F
#define  CAN_ALL_MRR_u4Textinfo_min 0
#define  CAN_ALL_MRR_u4Textinfo_max 0xF
#define  CAN_ALL_MRR_u4Rolling_counter_0x246_min 0
#define  CAN_ALL_MRR_u4Rolling_counter_0x246_max 0xF
#define  CAN_ALL_MRR_u8Checksum_0x246_min 0
#define  CAN_ALL_MRR_u8Checksum_0x246_max 0xFF
#define  CAN_ALL_MRR_u12MRR_F_Object_dx_min 0
#define  CAN_ALL_MRR_u12MRR_F_Object_dx_max 0xFFE
#define  CAN_ALL_MRR_u9MRR_F_Object_dy_min 0
#define  CAN_ALL_MRR_u9MRR_F_Object_dy_max 0x1E0
#define  CAN_ALL_MRR_u3MRR_F_Obj_0x_class_min 0
#define  CAN_ALL_MRR_u3MRR_F_Obj_0x_class_max 0x7
#define  CAN_ALL_MRR_u12MRR_FF_Object_dx_min 0
#define  CAN_ALL_MRR_u12MRR_FF_Object_dx_max 0xFFE
#define  CAN_ALL_MRR_u9MRR_FF_Object_dy_min 0
#define  CAN_ALL_MRR_u9MRR_FF_Object_dy_max 0x1E0
#define  CAN_ALL_MRR_u3MRR_FF_Obj_0x_class_min 0
#define  CAN_ALL_MRR_u3MRR_FF_Obj_0x_class_max 0x7
#define  CAN_ALL_MRR_u1MRR_PedDetection_min 0
#define  CAN_ALL_MRR_u1MRR_PedDetection_max 0x1
#define  CAN_ALL_MRR_u1MRR_FFTargrtDetection_min 0
#define  CAN_ALL_MRR_u1MRR_FFTargrtDetection_max 0x1
#define  CAN_ALL_MRR_c14Reserve_4_56_53_min 0
#define  CAN_ALL_MRR_c14Reserve_4_56_53_max 0x3FFF
#define  CAN_ALL_MRR_u12MRR_L_Object_dx_min 0
#define  CAN_ALL_MRR_u12MRR_L_Object_dx_max 0xFFE
#define  CAN_ALL_MRR_u9MRR_L_Object_dy_min 0
#define  CAN_ALL_MRR_u9MRR_L_Object_dy_max 0x1E0
#define  CAN_ALL_MRR_u3MRR_L_Obj_0x_class_min 0
#define  CAN_ALL_MRR_u3MRR_L_Obj_0x_class_max 0x7
#define  CAN_ALL_MRR_u12MRR_R_Object_dx_min 0
#define  CAN_ALL_MRR_u12MRR_R_Object_dx_max 0xFFE
#define  CAN_ALL_MRR_u9MRR_R_Object_dy_min 0
#define  CAN_ALL_MRR_u9MRR_R_Object_dy_max 0x1E0
#define  CAN_ALL_MRR_u3MRR_R_Obj_0x_class_min 0
#define  CAN_ALL_MRR_u3MRR_R_Obj_0x_class_max 0x7
#define  CAN_ALL_MRR_u1MRR_RightTargrtDetection_min 0
#define  CAN_ALL_MRR_u1MRR_RightTargrtDetection_max 0x1
#define  CAN_ALL_MRR_u1MRR_LeftTargrtDetection_min 0
#define  CAN_ALL_MRR_u1MRR_LeftTargrtDetection_max 0x1
#define  CAN_ALL_MRR_c14Reserve_5_56_53_min 0
#define  CAN_ALL_MRR_c14Reserve_5_56_53_max 0x3FFF
#define  CAN_ALL_MRR_u64DiagRespFromMRR_min 0
#define  CAN_ALL_MRR_u64DiagRespFromMRR_max 0x64

//CANfactor���ӷ�ĸ����
#define  CAN_ALL_MRR_um8ACC_TgtAxLowerComftBand_factor 1
#define  CAN_ALL_MRR_ud8ACC_TgtAxLowerComftBand_factor 20
#define  CAN_ALL_MRR_um8ACC_TgtAxUpperLim_factor 1
#define  CAN_ALL_MRR_ud8ACC_TgtAxUpperLim_factor 10
#define  CAN_ALL_MRR_sm8ACC_TgtAxLowerLim_factor 1
#define  CAN_ALL_MRR_sd8ACC_TgtAxLowerLim_factor 10
#define  CAN_ALL_MRR_sm11ACC_TgtAx_factor 1
#define  CAN_ALL_MRR_sd11ACC_TgtAx_factor 20
#define  CAN_ALL_MRR_u4Rolling_counter_0x238_factor 1
#define  CAN_ALL_MRR_u8Checksum_0x238_factor 1
#define  CAN_ALL_MRR_um8ACC_TgtAxUpperComftBand_factor 1
#define  CAN_ALL_MRR_ud8ACC_TgtAxUpperComftBand_factor 20
#define  CAN_ALL_MRR_u1ACC_UpperComftBandReq_factor 1
#define  CAN_ALL_MRR_u1ACC_BrakePreferred_factor 1
#define  CAN_ALL_MRR_u1EBA_Req_factor 1
#define  CAN_ALL_MRR_u1AEB_Req_factor 1
#define  CAN_ALL_MRR_u1ACC_StandstillReq_factor 1
#define  CAN_ALL_MRR_u1ACC_DriveOff_factor 1
#define  CAN_ALL_MRR_u4AWB_Level_factor 1
#define  CAN_ALL_MRR_u1ABP_Req_factor 1
#define  CAN_ALL_MRR_u1AWB_Req_factor 1
#define  CAN_ALL_MRR_u1ABA_Req_factor 1
#define  CAN_ALL_MRR_sm16AEB_TgtAx_factor 1
#define  CAN_ALL_MRR_sd16AEB_TgtAx_factor 20
#define  CAN_ALL_MRR_u3ACC_State_factor 1
#define  CAN_ALL_MRR_u4Rolling_counter_0x239_factor 1
#define  CAN_ALL_MRR_u8Checksum_0x239_factor 1
#define  CAN_ALL_MRR_u2ShutdownMode_factor 1
#define  CAN_ALL_MRR_u2ABA_Level_factor 1
#define  CAN_ALL_MRR_u3TauGapSet_factor 1
#define  CAN_ALL_MRR_u3dxTarObj_factor 1
#define  CAN_ALL_MRR_u3ACCHMI_Mode_factor 1
#define  CAN_ALL_MRR_u1ACCFailInfo_factor 1
#define  CAN_ALL_MRR_u1TakeOverReq_factor 1
#define  CAN_ALL_MRR_u2MRR_FCW_Sensitive_factor 1
#define  CAN_ALL_MRR_u3AEB_STATE_factor 1
#define  CAN_ALL_MRR_u2ACC_Startstop_infor_factor 1
#define  CAN_ALL_MRR_u1FCW_preWarning_factor 1
#define  CAN_ALL_MRR_u1FCW_latentWarning_factor 1
#define  CAN_ALL_MRR_u3FCW_STATE_factor 1
#define  CAN_ALL_MRR_u8Obj_Speed_factor 1
#define  CAN_ALL_MRR_u4Rolling_counter_0x246_factor 1
#define  CAN_ALL_MRR_u4Textinfo_factor 1
#define  CAN_ALL_MRR_u8Checksum_0x246_factor 1
#define  CAN_ALL_MRR_um9vSetDis_factor 1
#define  CAN_ALL_MRR_ud9vSetDis_factor 2
#define  CAN_ALL_MRR_u1ObjValid_factor 1
#define  CAN_ALL_MRR_sm9MRR_F_Object_dy_factor 1
#define  CAN_ALL_MRR_sd9MRR_F_Object_dy_factor 16
#define  CAN_ALL_MRR_u3MRR_F_Obj_0x_class_factor 1
#define  CAN_ALL_MRR_um12MRR_FF_Object_dx_factor 1
#define  CAN_ALL_MRR_ud12MRR_FF_Object_dx_factor 16
#define  CAN_ALL_MRR_sm9MRR_FF_Object_dy_factor 1
#define  CAN_ALL_MRR_sd9MRR_FF_Object_dy_factor 16
#define  CAN_ALL_MRR_u3MRR_FF_Obj_0x_class_factor 1
#define  CAN_ALL_MRR_u1MRR_FFTargrtDetection_factor 1
#define  CAN_ALL_MRR_u1MRR_PedDetection_factor 1
#define  CAN_ALL_MRR_um12MRR_F_Object_dx_factor 1
#define  CAN_ALL_MRR_ud12MRR_F_Object_dx_factor 16
#define  CAN_ALL_MRR_sm9MRR_L_Object_dy_factor 1
#define  CAN_ALL_MRR_sd9MRR_L_Object_dy_factor 16
#define  CAN_ALL_MRR_u3MRR_L_Obj_0x_class_factor 1
#define  CAN_ALL_MRR_um12MRR_R_Object_dx_factor 1
#define  CAN_ALL_MRR_ud12MRR_R_Object_dx_factor 16
#define  CAN_ALL_MRR_sm9MRR_R_Object_dy_factor 1
#define  CAN_ALL_MRR_sd9MRR_R_Object_dy_factor 16
#define  CAN_ALL_MRR_u3MRR_R_Obj_0x_class_factor 1
#define  CAN_ALL_MRR_u1MRR_LeftTargrtDetection_factor 1
#define  CAN_ALL_MRR_u1MRR_RightTargrtDetection_factor 1
#define  CAN_ALL_MRR_um12MRR_L_Object_dx_factor 1
#define  CAN_ALL_MRR_ud12MRR_L_Object_dx_factor 16
#define  CAN_ALL_MRR_u64DiagRespFromMRR_factor 1

//#define  ��������_CH��CAN����ͨ���ţ�    �������+10��#define  �ṹ������_CH���ṹ��ͨ���ţ�  ������ţ�#define ��������_ID ��CAN����ID��  ����CAN ID��#define ��������_DT  (CAN��������)  ����ʱ�����á�MS��/10�� #define ��������_TorR(CAN���ķ��ͻ����)    ����1������0

//--Can_NR=1----MRR 1 th Data Frame ���ƣ�MRR_0x238  ID��0X568  ���ڣ�20ms  DLC��8�ֽ�MRR-->ABSESP
#define ALL_MRR_MRR_0x238_CH 1
#define ALL_MRR_MRR_0x238_FR 1
#define ALL_MRR_MRR_0x238_ID 0XFFFFFFFF80000238
#define ALL_MRR_MRR_0x238_DT 2 //xxMS/10
#define ALL_MRR_MRR_0x238_TorR 1
#define ALL_MRR_MRR_0x238_Ay 1
#define ALL_MRR_MRR_0x238_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_MRR_MRR_0x238_LH 8//LENGTH <=8


//--Can_NR=2----MRR 2 th Data Frame ���ƣ�MRR_0x239  ID��0X569  ���ڣ�20ms  DLC��8�ֽ�MRR-->ABSESP
#define ALL_MRR_MRR_0x239_CH 2
#define ALL_MRR_MRR_0x239_FR 2
#define ALL_MRR_MRR_0x239_ID 0XFFFFFFFF80000239
#define ALL_MRR_MRR_0x239_DT 2 //xxMS/10
#define ALL_MRR_MRR_0x239_TorR 1
#define ALL_MRR_MRR_0x239_Ay 2
#define ALL_MRR_MRR_0x239_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_MRR_MRR_0x239_LH 8//LENGTH <=8


//--Can_NR=3----MRR 3 th Data Frame ���ƣ�MRR_0x246  ID��0X582  ���ڣ�20ms  DLC��8�ֽ�MRR-->GW
#define ALL_MRR_MRR_0x246_CH 3
#define ALL_MRR_MRR_0x246_FR 3
#define ALL_MRR_MRR_0x246_ID 0XFFFFFFFF80000246
#define ALL_MRR_MRR_0x246_DT 2 //xxMS/10
#define ALL_MRR_MRR_0x246_TorR 1
#define ALL_MRR_MRR_0x246_Ay 3
#define ALL_MRR_MRR_0x246_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_MRR_MRR_0x246_LH 8//LENGTH <=8


//--Can_NR=4----MRR 4 th Data Frame ���ƣ�MRR_FrObj_0x279  ID��0X633  ���ڣ�100ms  DLC��8�ֽ�MRR-->GW
#define ALL_MRR_MRR_FrObj_0x279_CH 4
#define ALL_MRR_MRR_FrObj_0x279_FR 4
#define ALL_MRR_MRR_FrObj_0x279_ID 0XFFFFFFFF80000279
#define ALL_MRR_MRR_FrObj_0x279_DT 10 //xxMS/10
#define ALL_MRR_MRR_FrObj_0x279_TorR 1
#define ALL_MRR_MRR_FrObj_0x279_Ay 4
#define ALL_MRR_MRR_FrObj_0x279_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_MRR_MRR_FrObj_0x279_LH 8//LENGTH <=8


//--Can_NR=5----MRR 5 th Data Frame ���ƣ�MRR_FRObj_0x480  ID��0X1152  ���ڣ�100ms  DLC��8�ֽ�MRR-->GW
#define ALL_MRR_MRR_FRObj_0x480_CH 5
#define ALL_MRR_MRR_FRObj_0x480_FR 5
#define ALL_MRR_MRR_FRObj_0x480_ID 0XFFFFFFFF80000480
#define ALL_MRR_MRR_FRObj_0x480_DT 10 //xxMS/10
#define ALL_MRR_MRR_FRObj_0x480_TorR 1
#define ALL_MRR_MRR_FRObj_0x480_Ay 5
#define ALL_MRR_MRR_FRObj_0x480_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_MRR_MRR_FRObj_0x480_LH 8//LENGTH <=8


//--Can_NR=6----MRR 6 th Data Frame ���ƣ�MRR_DiagResp  ID��0X1882  ���ڣ�0ms  DLC��8�ֽ�MRR-->Tester
#define ALL_MRR_MRR_DiagResp_CH 6
#define ALL_MRR_MRR_DiagResp_FR 6
#define ALL_MRR_MRR_DiagResp_ID 0XFFFFFFFF8000075A
#define ALL_MRR_MRR_DiagResp_DT 0 //xxMS/10
#define ALL_MRR_MRR_DiagResp_TorR 1
#define ALL_MRR_MRR_DiagResp_Ay 6
#define ALL_MRR_MRR_DiagResp_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_MRR_MRR_DiagResp_LH 8//LENGTH <=8


 //---------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------

//��Intel����ת����Mot���ݵķ�����  1���ֽ�����˳���DaTA1toDATA8�任��DaTA8toDATA1������ͼ��
//                                  2����Bit����������������λ��������ʼλ
//                                  3�����ձ��������Bitλ�ã���Mot�������й�������е�Bit����
//------Intelת��ǰ�ֽڼ�����λ˳��-------------||---------ת�����ֽڼ�����λ˳��-----------=
// DATA Bit 7   6   5   4   3   2   1   0       ||  DATA Bit7   6   5   4   3   2   1   0   =
//------<-----<---------<-----------------<     ||--------->------------------->--------->--=
//  1(����) 1.8 1.7 1.6 1.5 1.4 1.3 1.2 1.1     ||  8(ת��) 8.8 8.7 8.6 8.5 8.4 8.3 8.2 8.1 =
//  2(����) 2.8 2.7 2.6 2.5 2.4 2.3 2.2 2.1     ||  7(ת��) 7.8 7.7 7.6 7.5 7.4 7.3 7.2 7.1 =
//  3(����) 3.8 3.7 3.6 3.5 3.4 3.3 3.2 3.1     ||  6(ת��) 6.8 6.7 6.6 6.5 6.4 6.3 6.2 6.1 =
//  4(����) 4.8 4.7 4.6 4.5 4.4 4.3 4.2 4.1     ||  5(ת��) 5.8 5.7 5.6 5.5 5.4 5.3 5.2 5.1 =
//---------------------------------------32Bit �ֽ���---------------------------------------=
//  5(����) 5.8 5.7 5.6 5.5 5.4 5.3 5.2 5.1     ||  4(ת��) 4.8 4.7 4.6 4.5 4.4 4.3 4.2 4.1 =
//  6(����) 6.8 6.7 6.6 6.5 6.4 6.3 6.2 6.1     ||  3(ת��) 3.8 3.7 3.6 3.5 3.4 3.3 3.2 3.1 =
//  7(����) 7.8 7.7 7.6 7.5 7.4 7.3 7.2 7.1     ||  2(ת��) 2.8 2.7 2.6 2.5 2.4 2.3 2.2 2.1 =
//  8(����) 8.8 8.7 8.6 8.5 8.4 8.3 8.2 8.1     ||  1(ת��) 1.8 1.7 1.6 1.5 1.4 1.3 1.2 1.1 =
//===========================================================================================

//---------------------------------------------------------------------------------------------------

//=========================================================================== 
//-----------------------6 CAN Data Frames-----------------------------------------------------------
typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[56];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[28];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[14];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[14];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[7];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint32_t R[2];                                      


//--Can_NR=1----MRR 1 the Data Frame ���ƣ�MRR_0x238  ID��0x568  ���ڣ�20ms  λ����8�ֽ�MRR-->
  vuint32_t  CAN_ALL_MRR_uACC_TgtAxUpperComftBand:8;//0.7-->0.0 ���ƣ�ACC_TgtAxUpperComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
  vuint32_t  CAN_ALL_MRR_u8ACC_TgtAxLowerComftBand:8;//1.7-->1.0 ���ƣ�ACC_TgtAxLowerComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
  vuint32_t  CAN_ALL_MRR_u8ACC_TgtAxUpperLim:8;//2.7-->2.0 ���ƣ�ACC_TgtAxUpperLim λ����8bit, logical min-max��0~12.7 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������0 ��λ��m_s3 
  vuint32_t  CAN_ALL_MRR_u8ACC_TgtAxLowerLim:8;//3.7-->3.0 ���ƣ�ACC_TgtAxLowerLim λ����8bit, logical min-max��-12.7~0 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������-127 ��λ��m_s3 
//*****************32 bits split line
  vuint32_t c8Reserve_1_32_39:8;//4.7-->4.0
  vuint32_t  CAN_ALL_MRR_u8ACC_TgtAx:11;//5.7-->6.5 ���ƣ�ACC_TgtAx λ����11bit, logical min-max��-5~7.75 physical min-max��0x000~0xFF ���ȣ�0.05 ƫ������-100 ��λ��m_s2 
  vuint32_t  CAN_ALL_MRR_u11Rolling_counter_0x238:4;//6.3-->6.0 ���ƣ�Rolling_counter_0x238 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u4Checksum_0x238:8;//7.7-->7.0 ���ƣ�Checksum_0x238 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=2----MRR 2 the Data Frame ���ƣ�MRR_0x239  ID��0x569  ���ڣ�20ms  λ����8�ֽ�MRR-->
  vuint32_t  CAN_ALL_MRR_uShutdownMode:2;//0.7-->0.6 3 "initial" 2 "reserved" 1 "fast off" 0 "soft off" ���ƣ�ShutdownMode λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u2ACC_State:3;//0.5-->0.3 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACC_State λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c1Reserve_2_2_2:1;//0.2-->0.2
  vuint32_t  CAN_ALL_MRR_u3ACC_BrakePreferred:1;//0.1-->0.1 1 "demand" 0 "no demand" ���ƣ�ACC_BrakePreferred λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1ACC_UpperComftBandReq:1;//0.0-->0.0 1 "demand" 0 "no demand" ���ƣ�ACC_UpperComftBandReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1ACC_DriveOff:1;//1.7-->1.7 1 "demand" 0 "no demand" ���ƣ�ACC_DriveOff λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1ACC_StandstillReq:1;//1.6-->1.6 1 "demand" 0 "no demand" ���ƣ�ACC_StandstillReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1AEB_Req:1;//1.5-->1.5 1 "demand" 0 "no demand" ���ƣ�AEB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1EBA_Req:1;//1.4-->1.4 1 "demand" 0 "no demand" ���ƣ�EBA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c2Reserve_2_10_11:2;//1.3-->1.2
  vuint32_t  CAN_ALL_MRR_u1ABA_Level:2;//1.1-->1.0 3 "level 3" 2 "level 2" 1 "level 1" 0 "level 0" ���ƣ�ABA_Level λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u2ABA_Req:1;//2.7-->2.7 1 "demand" 0 "no demand" ���ƣ�ABA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1AWB_Req:1;//2.6-->2.6 1 "demand" 0 "no demand" ���ƣ�AWB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1ABP_Req:1;//2.5-->2.5 1 "demand" 0 "no demand" ���ƣ�ABP_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c1Reserve_2_20_20:1;//2.4-->2.4
  vuint32_t  CAN_ALL_MRR_u1AWB_Level:4;//2.3-->2.0 4 "level 4" 3 "level 3" 2 "level 2" 1 "level 1" 0 "no level" ���ƣ�AWB_Level λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t exAEB_TgtAx16High8:8;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
//*****************32 bits split line
  vuint32_t exAEB_TgtAx16Low8:8;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
  vuint32_t  CAN_ALL_MRR_u16Rolling_counter_0x239:4;//6.3-->6.0 ���ƣ�Rolling_counter_0x239 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u4Checksum_0x239:8;//7.7-->7.0 ���ƣ�Checksum_0x239 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=3----MRR 3 the Data Frame ���ƣ�MRR_0x246  ID��0x582  ���ڣ�20ms  λ����8�ֽ�MRR-->
  vuint32_t  CAN_ALL_MRR_uvSetDis:9;//0.7-->1.7 511 "Invalid" ���ƣ�vSetDis λ����9bit, logical min-max��0~255.5 physical min-max��0x000~0x1FF ���ȣ�0.5 ƫ������0 ��λ��kph 
  vuint32_t  CAN_ALL_MRR_u9dxTarObj:3;//1.6-->1.4 7 "Distance_7" 6 "Distance_6" 5 "Distance_5" 4 "Distance_4" 3 "Distance_3" 2 "Distance_2" 1 "Distance_1" 0 "Distance_0" ���ƣ�dxTarObj λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u3TauGapSet:3;//1.3-->1.1 7 "tauGap_7" 6 "tauGap_6" 5 "tauGap_5" 4 "tauGap_4" 3 "tauGap_3" 2 "tauGap_2" 1 "tauGap_1" 0 "tauGap_0" ���ƣ�TauGapSet λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u3ObjValid:1;//1.0-->1.0 1 "target object detected" 0 "no object" ���ƣ�ObjValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1MRR_FCW_Sensitive:2;//2.7-->2.6 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" ���ƣ�MRR_FCW_Sensitive λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c1Reserve_3_21_21:1;//2.5-->2.5
  vuint32_t  CAN_ALL_MRR_u2TakeOverReq:1;//2.4-->2.4 1 "valid TakeOver request" 0 "no TakeOver request" ���ƣ�TakeOverReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1ACCFailInfo:1;//2.3-->2.3 1 "error" 0 "no error" ���ƣ�ACCFailInfo λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1ACCHMI_Mode:3;//2.2-->2.0 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACCHMI_Mode λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u3FCW_latentWarning:1;//3.7-->3.7 1 "warning" 0 "no warning" ���ƣ�FCW_latentWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1FCW_preWarning:1;//3.6-->3.6 1 "warning" 0 "no warning" ���ƣ�FCW_preWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1ACC_Startstop_infor:2;//3.5-->3.4 3 "ACC_SystemFailure" 2 "ACC_StartRequest" 1 "ACC_StopForbidden" 0 "ACC_StopAllowed" ���ƣ�ACC_Startstop_infor λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u2AEB_STATE:3;//3.3-->3.1 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�AEB_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c1Reserve_3_24_24:1;//3.0-->3.0
//*****************32 bits split line
  vuint32_t  CAN_ALL_MRR_u3FCW_STATE:3;//4.7-->4.5 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�FCW_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c5Reserve_3_32_36:5;//4.4-->4.0
  vuint32_t  CAN_ALL_MRR_u3Obj_Speed:8;//5.7-->5.0 ���ƣ�Obj_Speed λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u8Textinfo:4;//6.7-->6.4 15 "Uncalibrated" 14 "ESP error" 13 "Override" 12 "Door open" 11 "Speed over 150kph" 10 "ESP off" 9 "Seatbelt unbuckled" 8 "No forward gear" 7 "EPB activate" 6 "ACC and PEBS error" 5 "MRR blindness" 4 "ACC Active" 3 "ACC is cancelled" 2 "ACC is switched off" 1 "ACC is switched on" 0 "No display" ���ƣ�Textinfo λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u4Rolling_counter_0x246:4;//6.3-->6.0 ���ƣ�Rolling_counter_0x246 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u4Checksum_0x246:8;//7.7-->7.0 ���ƣ�Checksum_0x246 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=4----MRR 4 the Data Frame ���ƣ�MRR_FrObj_0x279  ID��0x633  ���ڣ�100ms  λ����8�ֽ�MRR-->
  vuint32_t  CAN_ALL_MRR_uMRR_F_Object_dx:12;//0.7-->1.4 ���ƣ�MRR_F_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u12MRR_F_Object_dy:9;//1.3-->2.3 ���ƣ�MRR_F_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u9MRR_F_Obj_0x_class:3;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_F_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t exMRR_FF_Object_dx12High4:8;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
//*****************32 bits split line
  vuint32_t exMRR_FF_Object_dx12Low8:4;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u12MRR_FF_Object_dy:9;//4.3-->5.3 ���ƣ�MRR_FF_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u9MRR_FF_Obj_0x_class:3;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_FF_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u3MRR_PedDetection:1;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_PedDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1MRR_FFTargrtDetection:1;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_FFTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c14Reserve_4_56_53:14;//6.5-->7.0

//--Can_NR=5----MRR 5 the Data Frame ���ƣ�MRR_FRObj_0x480  ID��0x1152  ���ڣ�100ms  λ����8�ֽ�MRR-->
  vuint32_t  CAN_ALL_MRR_uMRR_L_Object_dx:12;//0.7-->1.4 ���ƣ�MRR_L_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u12MRR_L_Object_dy:9;//1.3-->2.3 ���ƣ�MRR_L_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u9MRR_L_Obj_0x_class:3;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_L_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t exMRR_R_Object_dx12High4:8;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
//*****************32 bits split line
  vuint32_t exMRR_R_Object_dx12Low8:4;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u12MRR_R_Object_dy:9;//4.3-->5.3 ���ƣ�MRR_R_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u9MRR_R_Obj_0x_class:3;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_R_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u3MRR_RightTargrtDetection:1;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_RightTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_MRR_u1MRR_LeftTargrtDetection:1;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_LeftTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c14Reserve_5_56_53:14;//6.5-->7.0

//--Can_NR=6----MRR 6 the Data Frame ���ƣ�MRR_DiagResp  ID��0x1882  ���ڣ�0ms  λ����8�ֽ�MRR-->
  vuint32_t exDiagRespFromMRR64High32:32;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
  vuint32_t exDiagRespFromMRR64Low32:32;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
    } B;
} CAN_ALL_FRAMES_MRR_tag;

typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[56];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[28];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[14];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[14];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[7];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint64_t R[1];                                      


//--Can_NR=1----MRR 1 the Data Frame ���ƣ�MRR_0x238  ID��0x568  ���ڣ�20ms  λ����8�ֽ�MRR-->
  vuint64_t  CAN_ALL_MRR_uACC_TgtAxUpperComftBand:8;//0.7-->0.0 ���ƣ�ACC_TgtAxUpperComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
  vuint64_t  CAN_ALL_MRR_u8ACC_TgtAxLowerComftBand:8;//1.7-->1.0 ���ƣ�ACC_TgtAxLowerComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
  vuint64_t  CAN_ALL_MRR_u8ACC_TgtAxUpperLim:8;//2.7-->2.0 ���ƣ�ACC_TgtAxUpperLim λ����8bit, logical min-max��0~12.7 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������0 ��λ��m_s3 
  vuint64_t  CAN_ALL_MRR_u8ACC_TgtAxLowerLim:8;//3.7-->3.0 ���ƣ�ACC_TgtAxLowerLim λ����8bit, logical min-max��-12.7~0 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������-127 ��λ��m_s3 
//*****************32 bits split line
  vuint64_t c8Reserve_1_32_39:8;//4.7-->4.0
  vuint64_t  CAN_ALL_MRR_u8ACC_TgtAx:11;//5.7-->6.5 ���ƣ�ACC_TgtAx λ����11bit, logical min-max��-5~7.75 physical min-max��0x000~0xFF ���ȣ�0.05 ƫ������-100 ��λ��m_s2 
  vuint64_t  CAN_ALL_MRR_u11Rolling_counter_0x238:4;//6.3-->6.0 ���ƣ�Rolling_counter_0x238 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u4Checksum_0x238:8;//7.7-->7.0 ���ƣ�Checksum_0x238 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=2----MRR 2 the Data Frame ���ƣ�MRR_0x239  ID��0x569  ���ڣ�20ms  λ����8�ֽ�MRR-->
  vuint64_t  CAN_ALL_MRR_uShutdownMode:2;//0.7-->0.6 3 "initial" 2 "reserved" 1 "fast off" 0 "soft off" ���ƣ�ShutdownMode λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u2ACC_State:3;//0.5-->0.3 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACC_State λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c1Reserve_2_2_2:1;//0.2-->0.2
  vuint64_t  CAN_ALL_MRR_u3ACC_BrakePreferred:1;//0.1-->0.1 1 "demand" 0 "no demand" ���ƣ�ACC_BrakePreferred λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1ACC_UpperComftBandReq:1;//0.0-->0.0 1 "demand" 0 "no demand" ���ƣ�ACC_UpperComftBandReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1ACC_DriveOff:1;//1.7-->1.7 1 "demand" 0 "no demand" ���ƣ�ACC_DriveOff λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1ACC_StandstillReq:1;//1.6-->1.6 1 "demand" 0 "no demand" ���ƣ�ACC_StandstillReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1AEB_Req:1;//1.5-->1.5 1 "demand" 0 "no demand" ���ƣ�AEB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1EBA_Req:1;//1.4-->1.4 1 "demand" 0 "no demand" ���ƣ�EBA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c2Reserve_2_10_11:2;//1.3-->1.2
  vuint64_t  CAN_ALL_MRR_u1ABA_Level:2;//1.1-->1.0 3 "level 3" 2 "level 2" 1 "level 1" 0 "level 0" ���ƣ�ABA_Level λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u2ABA_Req:1;//2.7-->2.7 1 "demand" 0 "no demand" ���ƣ�ABA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1AWB_Req:1;//2.6-->2.6 1 "demand" 0 "no demand" ���ƣ�AWB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1ABP_Req:1;//2.5-->2.5 1 "demand" 0 "no demand" ���ƣ�ABP_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c1Reserve_2_20_20:1;//2.4-->2.4
  vuint64_t  CAN_ALL_MRR_u1AWB_Level:4;//2.3-->2.0 4 "level 4" 3 "level 3" 2 "level 2" 1 "level 1" 0 "no level" ���ƣ�AWB_Level λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t exAEB_TgtAx16:16;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
//*****************32 bits split line
  //vuint64_t exAEB_TgtAx16Low8:8;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
  vuint64_t  CAN_ALL_MRR_u16Rolling_counter_0x239:4;//6.3-->6.0 ���ƣ�Rolling_counter_0x239 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u4Checksum_0x239:8;//7.7-->7.0 ���ƣ�Checksum_0x239 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=3----MRR 3 the Data Frame ���ƣ�MRR_0x246  ID��0x582  ���ڣ�20ms  λ����8�ֽ�MRR-->
  vuint64_t  CAN_ALL_MRR_uvSetDis:9;//0.7-->1.7 511 "Invalid" ���ƣ�vSetDis λ����9bit, logical min-max��0~255.5 physical min-max��0x000~0x1FF ���ȣ�0.5 ƫ������0 ��λ��kph 
  vuint64_t  CAN_ALL_MRR_u9dxTarObj:3;//1.6-->1.4 7 "Distance_7" 6 "Distance_6" 5 "Distance_5" 4 "Distance_4" 3 "Distance_3" 2 "Distance_2" 1 "Distance_1" 0 "Distance_0" ���ƣ�dxTarObj λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u3TauGapSet:3;//1.3-->1.1 7 "tauGap_7" 6 "tauGap_6" 5 "tauGap_5" 4 "tauGap_4" 3 "tauGap_3" 2 "tauGap_2" 1 "tauGap_1" 0 "tauGap_0" ���ƣ�TauGapSet λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u3ObjValid:1;//1.0-->1.0 1 "target object detected" 0 "no object" ���ƣ�ObjValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1MRR_FCW_Sensitive:2;//2.7-->2.6 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" ���ƣ�MRR_FCW_Sensitive λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c1Reserve_3_21_21:1;//2.5-->2.5
  vuint64_t  CAN_ALL_MRR_u2TakeOverReq:1;//2.4-->2.4 1 "valid TakeOver request" 0 "no TakeOver request" ���ƣ�TakeOverReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1ACCFailInfo:1;//2.3-->2.3 1 "error" 0 "no error" ���ƣ�ACCFailInfo λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1ACCHMI_Mode:3;//2.2-->2.0 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACCHMI_Mode λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u3FCW_latentWarning:1;//3.7-->3.7 1 "warning" 0 "no warning" ���ƣ�FCW_latentWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1FCW_preWarning:1;//3.6-->3.6 1 "warning" 0 "no warning" ���ƣ�FCW_preWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1ACC_Startstop_infor:2;//3.5-->3.4 3 "ACC_SystemFailure" 2 "ACC_StartRequest" 1 "ACC_StopForbidden" 0 "ACC_StopAllowed" ���ƣ�ACC_Startstop_infor λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u2AEB_STATE:3;//3.3-->3.1 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�AEB_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c1Reserve_3_24_24:1;//3.0-->3.0
//*****************32 bits split line
  vuint64_t  CAN_ALL_MRR_u3FCW_STATE:3;//4.7-->4.5 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�FCW_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c5Reserve_3_32_36:5;//4.4-->4.0
  vuint64_t  CAN_ALL_MRR_u3Obj_Speed:8;//5.7-->5.0 ���ƣ�Obj_Speed λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u8Textinfo:4;//6.7-->6.4 15 "Uncalibrated" 14 "ESP error" 13 "Override" 12 "Door open" 11 "Speed over 150kph" 10 "ESP off" 9 "Seatbelt unbuckled" 8 "No forward gear" 7 "EPB activate" 6 "ACC and PEBS error" 5 "MRR blindness" 4 "ACC Active" 3 "ACC is cancelled" 2 "ACC is switched off" 1 "ACC is switched on" 0 "No display" ���ƣ�Textinfo λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u4Rolling_counter_0x246:4;//6.3-->6.0 ���ƣ�Rolling_counter_0x246 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u4Checksum_0x246:8;//7.7-->7.0 ���ƣ�Checksum_0x246 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=4----MRR 4 the Data Frame ���ƣ�MRR_FrObj_0x279  ID��0x633  ���ڣ�100ms  λ����8�ֽ�MRR-->
  vuint64_t  CAN_ALL_MRR_uMRR_F_Object_dx:12;//0.7-->1.4 ���ƣ�MRR_F_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u12MRR_F_Object_dy:9;//1.3-->2.3 ���ƣ�MRR_F_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u9MRR_F_Obj_0x_class:3;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_F_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t exMRR_FF_Object_dx12:12;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
//*****************32 bits split line
  //vuint64_t exMRR_FF_Object_dx12Low8:4;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u12MRR_FF_Object_dy:9;//4.3-->5.3 ���ƣ�MRR_FF_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u9MRR_FF_Obj_0x_class:3;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_FF_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u3MRR_PedDetection:1;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_PedDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1MRR_FFTargrtDetection:1;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_FFTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c14Reserve_4_56_53:14;//6.5-->7.0

//--Can_NR=5----MRR 5 the Data Frame ���ƣ�MRR_FRObj_0x480  ID��0x1152  ���ڣ�100ms  λ����8�ֽ�MRR-->
  vuint64_t  CAN_ALL_MRR_uMRR_L_Object_dx:12;//0.7-->1.4 ���ƣ�MRR_L_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u12MRR_L_Object_dy:9;//1.3-->2.3 ���ƣ�MRR_L_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u9MRR_L_Obj_0x_class:3;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_L_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t exMRR_R_Object_dx12:12;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
//*****************32 bits split line
  //vuint64_t exMRR_R_Object_dx12Low8:4;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u12MRR_R_Object_dy:9;//4.3-->5.3 ���ƣ�MRR_R_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u9MRR_R_Obj_0x_class:3;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_R_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u3MRR_RightTargrtDetection:1;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_RightTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_MRR_u1MRR_LeftTargrtDetection:1;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_LeftTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c14Reserve_5_56_53:14;//6.5-->7.0

//--Can_NR=6----MRR 6 the Data Frame ���ƣ�MRR_DiagResp  ID��0x1882  ���ڣ�0ms  λ����8�ֽ�MRR-->
  vuint64_t exDiagRespFromMRR64:64;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
  //vuint64_t exDiagRespFromMRR64Low32:32;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

    } B;
} CAN_ALL_FRAMES_MRR_tag;
extern CAN_ALL_FRAMES_MRR_tag CAN_ALL_FRAMES_MRR;
extern CAN_ALL_FRAMES_MRR_tag CAN_ALL_FRMes_MRR;
extern CAN_ALL_FRAMES_MRR_tag CAN_ALL_FRVar_MRR;
extern CAN_ALL_FRAMES_MRR_tag CAN_ALL_FRVarOld_MRR;


               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exAEB_TgtAx16High8:8;
                                    vuint16_t exAEB_TgtAx16Low8:8;
                               } B;
                            } exAEB_TgtAx_tag;
                            extern exAEB_TgtAx_tag exAEB_TgtAx;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exMRR_FF_Object_dx12High4:4;
                                    vuint16_t exMRR_FF_Object_dx12Low8:8;
                               } B;
                            } exMRR_FF_Object_dx_tag;
                            extern exMRR_FF_Object_dx_tag exMRR_FF_Object_dx;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exMRR_R_Object_dx12High4:4;
                                    vuint16_t exMRR_R_Object_dx12Low8:8;
                               } B;
                            } exMRR_R_Object_dx_tag;
                            extern exMRR_R_Object_dx_tag exMRR_R_Object_dx;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exDiagRespFromMRR64High32:2;
                                    vuint16_t exDiagRespFromMRR64Low32:2;
                               } B;
                            } exDiagRespFromMRR_tag;
                            extern exDiagRespFromMRR_tag exDiagRespFromMRR;
//--1 th CAN �������ݴ����ӳ���------------
                CAN1_noReceivedMessageTime[ALL_MRR_MRR_0x238_CH]++;//Can_NR=1
                CAN1_noReceivedMessageTime[ALL_MRR_MRR_0x239_CH]++;//Can_NR=2
                CAN1_noReceivedMessageTime[ALL_MRR_MRR_0x246_CH]++;//Can_NR=3
                CAN1_noReceivedMessageTime[ALL_MRR_MRR_FrObj_0x279_CH]++;//Can_NR=4
                CAN1_noReceivedMessageTime[ALL_MRR_MRR_FRObj_0x480_CH]++;//Can_NR=5
                CAN1_noReceivedMessageTime[ALL_MRR_MRR_DiagResp_CH]++;//Can_NR=6
typedef union {
    vuint8_t R;
    struct { //ALL_MRR ���ձ��Ĺ���
        vuint8_t ALL_MRR_MRR_0x238: 1; //Can_NR=1
        vuint8_t ALL_MRR_MRR_0x239: 1; //Can_NR=2
        vuint8_t ALL_MRR_MRR_0x246: 1; //Can_NR=3
        vuint8_t ALL_MRR_MRR_FrObj_0x279: 1; //Can_NR=4
        vuint8_t ALL_MRR_MRR_FRObj_0x480: 1; //Can_NR=5
        vuint8_t ALL_MRR_MRR_DiagResp: 1; //Can_NR=6
    } B;
} Error_CAN1_ALL_MRR_tag ;
extern Error_CAN1_ALL_MRR_tag Error_CAN1_ALL_MRR ;
typedef union {
    vuint8_t R;
    struct { //ALL_MRR ���ձ��Ĺ���
        vuint8_t ALL_MRR_MRR_0x238T: 1; //Can_NR=1
        vuint8_t ALL_MRR_MRR_0x239T: 1; //Can_NR=2
        vuint8_t ALL_MRR_MRR_0x246T: 1; //Can_NR=3
        vuint8_t ALL_MRR_MRR_FrObj_0x279T: 1; //Can_NR=4
        vuint8_t ALL_MRR_MRR_FRObj_0x480T: 1; //Can_NR=5
        vuint8_t ALL_MRR_MRR_DiagRespT: 1; //Can_NR=6
    } B;
}  D00CTR_def_CAN1_ALL_MRR_tag ;
extern  D00CTR_def_CAN1_ALL_MRR_tag D00CTR_def_CAN1_ALL_MRR ;


//--Can_NR=1----MRR 1 the Data Frame ���ƣ�MRR_0x238  ID��0x568  ���ڣ�20ms  λ����8�ֽ�MRR-->

 vuint8_t VCAN_ALL_MRR_uACC_TgtAxUpperComftBand;//0.7-->0.0 ���ƣ�ACC_TgtAxUpperComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
 vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxLowerComftBand;//1.7-->1.0 ���ƣ�ACC_TgtAxLowerComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
 vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxUpperLim;//2.7-->2.0 ���ƣ�ACC_TgtAxUpperLim λ����8bit, logical min-max��0~12.7 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������0 ��λ��m_s3 
 vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxLowerLim;//3.7-->3.0 ���ƣ�ACC_TgtAxLowerLim λ����8bit, logical min-max��-12.7~0 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������-127 ��λ��m_s3 
//*****************32 bits split line
 vuint8_t Vc8Reserve_1_32_39;//4.7-->4.0
 vuint16_t VCAN_ALL_MRR_u8ACC_TgtAx;//5.7-->6.5 ���ƣ�ACC_TgtAx λ����11bit, logical min-max��-5~7.75 physical min-max��0x000~0xFF ���ȣ�0.05 ƫ������-100 ��λ��m_s2 
 vuint8_t VCAN_ALL_MRR_u11Rolling_counter_0x238;//6.3-->6.0 ���ƣ�Rolling_counter_0x238 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u4Checksum_0x238;//7.7-->7.0 ���ƣ�Checksum_0x238 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=2----MRR 2 the Data Frame ���ƣ�MRR_0x239  ID��0x569  ���ڣ�20ms  λ����8�ֽ�MRR-->

 vuint8_t VCAN_ALL_MRR_uShutdownMode;//0.7-->0.6 3 "initial" 2 "reserved" 1 "fast off" 0 "soft off" ���ƣ�ShutdownMode λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u2ACC_State;//0.5-->0.3 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACC_State λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc1Reserve_2_2_2;//0.2-->0.2
 vuint8_t VCAN_ALL_MRR_u3ACC_BrakePreferred;//0.1-->0.1 1 "demand" 0 "no demand" ���ƣ�ACC_BrakePreferred λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ACC_UpperComftBandReq;//0.0-->0.0 1 "demand" 0 "no demand" ���ƣ�ACC_UpperComftBandReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ACC_DriveOff;//1.7-->1.7 1 "demand" 0 "no demand" ���ƣ�ACC_DriveOff λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ACC_StandstillReq;//1.6-->1.6 1 "demand" 0 "no demand" ���ƣ�ACC_StandstillReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1AEB_Req;//1.5-->1.5 1 "demand" 0 "no demand" ���ƣ�AEB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1EBA_Req;//1.4-->1.4 1 "demand" 0 "no demand" ���ƣ�EBA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc2Reserve_2_10_11;//1.3-->1.2
 vuint8_t VCAN_ALL_MRR_u1ABA_Level;//1.1-->1.0 3 "level 3" 2 "level 2" 1 "level 1" 0 "level 0" ���ƣ�ABA_Level λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u2ABA_Req;//2.7-->2.7 1 "demand" 0 "no demand" ���ƣ�ABA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1AWB_Req;//2.6-->2.6 1 "demand" 0 "no demand" ���ƣ�AWB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ABP_Req;//2.5-->2.5 1 "demand" 0 "no demand" ���ƣ�ABP_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc1Reserve_2_20_20;//2.4-->2.4
 vuint8_t VCAN_ALL_MRR_u1AWB_Level;//2.3-->2.0 4 "level 4" 3 "level 3" 2 "level 2" 1 "level 1" 0 "no level" ���ƣ�AWB_Level λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VexAEB_TgtAx16High8;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
//*****************32 bits split line
 vuint8_t VexAEB_TgtAx16Low8;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
 vuint8_t VCAN_ALL_MRR_u16Rolling_counter_0x239;//6.3-->6.0 ���ƣ�Rolling_counter_0x239 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u4Checksum_0x239;//7.7-->7.0 ���ƣ�Checksum_0x239 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=3----MRR 3 the Data Frame ���ƣ�MRR_0x246  ID��0x582  ���ڣ�20ms  λ����8�ֽ�MRR-->

 vuint16_t VCAN_ALL_MRR_uvSetDis;//0.7-->1.7 511 "Invalid" ���ƣ�vSetDis λ����9bit, logical min-max��0~255.5 physical min-max��0x000~0x1FF ���ȣ�0.5 ƫ������0 ��λ��kph 
 vuint8_t VCAN_ALL_MRR_u9dxTarObj;//1.6-->1.4 7 "Distance_7" 6 "Distance_6" 5 "Distance_5" 4 "Distance_4" 3 "Distance_3" 2 "Distance_2" 1 "Distance_1" 0 "Distance_0" ���ƣ�dxTarObj λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u3TauGapSet;//1.3-->1.1 7 "tauGap_7" 6 "tauGap_6" 5 "tauGap_5" 4 "tauGap_4" 3 "tauGap_3" 2 "tauGap_2" 1 "tauGap_1" 0 "tauGap_0" ���ƣ�TauGapSet λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u3ObjValid;//1.0-->1.0 1 "target object detected" 0 "no object" ���ƣ�ObjValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1MRR_FCW_Sensitive;//2.7-->2.6 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" ���ƣ�MRR_FCW_Sensitive λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc1Reserve_3_21_21;//2.5-->2.5
 vuint8_t VCAN_ALL_MRR_u2TakeOverReq;//2.4-->2.4 1 "valid TakeOver request" 0 "no TakeOver request" ���ƣ�TakeOverReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ACCFailInfo;//2.3-->2.3 1 "error" 0 "no error" ���ƣ�ACCFailInfo λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ACCHMI_Mode;//2.2-->2.0 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACCHMI_Mode λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u3FCW_latentWarning;//3.7-->3.7 1 "warning" 0 "no warning" ���ƣ�FCW_latentWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1FCW_preWarning;//3.6-->3.6 1 "warning" 0 "no warning" ���ƣ�FCW_preWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ACC_Startstop_infor;//3.5-->3.4 3 "ACC_SystemFailure" 2 "ACC_StartRequest" 1 "ACC_StopForbidden" 0 "ACC_StopAllowed" ���ƣ�ACC_Startstop_infor λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u2AEB_STATE;//3.3-->3.1 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�AEB_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc1Reserve_3_24_24;//3.0-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_MRR_u3FCW_STATE;//4.7-->4.5 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�FCW_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc5Reserve_3_32_36;//4.4-->4.0
 vuint8_t VCAN_ALL_MRR_u3Obj_Speed;//5.7-->5.0 ���ƣ�Obj_Speed λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u8Textinfo;//6.7-->6.4 15 "Uncalibrated" 14 "ESP error" 13 "Override" 12 "Door open" 11 "Speed over 150kph" 10 "ESP off" 9 "Seatbelt unbuckled" 8 "No forward gear" 7 "EPB activate" 6 "ACC and PEBS error" 5 "MRR blindness" 4 "ACC Active" 3 "ACC is cancelled" 2 "ACC is switched off" 1 "ACC is switched on" 0 "No display" ���ƣ�Textinfo λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u4Rolling_counter_0x246;//6.3-->6.0 ���ƣ�Rolling_counter_0x246 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u4Checksum_0x246;//7.7-->7.0 ���ƣ�Checksum_0x246 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=4----MRR 4 the Data Frame ���ƣ�MRR_FrObj_0x279  ID��0x633  ���ڣ�100ms  λ����8�ֽ�MRR-->

 vuint16_t VCAN_ALL_MRR_uMRR_F_Object_dx;//0.7-->1.4 ���ƣ�MRR_F_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 vuint16_t VCAN_ALL_MRR_u12MRR_F_Object_dy;//1.3-->2.3 ���ƣ�MRR_F_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u9MRR_F_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_F_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VexMRR_FF_Object_dx12High4;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
//*****************32 bits split line
 vuint8_t VexMRR_FF_Object_dx12Low8;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 vuint16_t VCAN_ALL_MRR_u12MRR_FF_Object_dy;//4.3-->5.3 ���ƣ�MRR_FF_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u9MRR_FF_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_FF_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u3MRR_PedDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_PedDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1MRR_FFTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_FFTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint16_t Vc14Reserve_4_56_53;//6.5-->7.0


//--Can_NR=5----MRR 5 the Data Frame ���ƣ�MRR_FRObj_0x480  ID��0x1152  ���ڣ�100ms  λ����8�ֽ�MRR-->

 vuint16_t VCAN_ALL_MRR_uMRR_L_Object_dx;//0.7-->1.4 ���ƣ�MRR_L_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 vuint16_t VCAN_ALL_MRR_u12MRR_L_Object_dy;//1.3-->2.3 ���ƣ�MRR_L_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u9MRR_L_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_L_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VexMRR_R_Object_dx12High4;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
//*****************32 bits split line
 vuint8_t VexMRR_R_Object_dx12Low8;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 vuint16_t VCAN_ALL_MRR_u12MRR_R_Object_dy;//4.3-->5.3 ���ƣ�MRR_R_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u9MRR_R_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_R_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u3MRR_RightTargrtDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_RightTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1MRR_LeftTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_LeftTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint16_t Vc14Reserve_5_56_53;//6.5-->7.0


//--Can_NR=6----MRR 6 the Data Frame ���ƣ�MRR_DiagResp  ID��0x1882  ���ڣ�0ms  λ����8�ֽ�MRR-->

 vuint32_t VexDiagRespFromMRR64High32;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 vuint32_t VexDiagRespFromMRR64Low32;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//=======================================================(�ָ���)



//--Can_NR=1----MRR 1 the Data Frame ���ƣ�MRR_0x238  ID��0x568  ���ڣ�20ms  λ����8�ֽ�MRR-->

 extern  vuint8_t VCAN_ALL_MRR_uACC_TgtAxUpperComftBand;//0.7-->0.0 ���ƣ�ACC_TgtAxUpperComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
 extern  vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxLowerComftBand;//1.7-->1.0 ���ƣ�ACC_TgtAxLowerComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
 extern  vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxUpperLim;//2.7-->2.0 ���ƣ�ACC_TgtAxUpperLim λ����8bit, logical min-max��0~12.7 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������0 ��λ��m_s3 
 extern  vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxLowerLim;//3.7-->3.0 ���ƣ�ACC_TgtAxLowerLim λ����8bit, logical min-max��-12.7~0 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������-127 ��λ��m_s3 
//*****************32 bits split line
 extern  vuint8_t Vc8Reserve_1_32_39;//4.7-->4.0
 extern  vuint16_t VCAN_ALL_MRR_u8ACC_TgtAx;//5.7-->6.5 ���ƣ�ACC_TgtAx λ����11bit, logical min-max��-5~7.75 physical min-max��0x000~0xFF ���ȣ�0.05 ƫ������-100 ��λ��m_s2 
 extern  vuint8_t VCAN_ALL_MRR_u11Rolling_counter_0x238;//6.3-->6.0 ���ƣ�Rolling_counter_0x238 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u4Checksum_0x238;//7.7-->7.0 ���ƣ�Checksum_0x238 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=2----MRR 2 the Data Frame ���ƣ�MRR_0x239  ID��0x569  ���ڣ�20ms  λ����8�ֽ�MRR-->

 extern  vuint8_t VCAN_ALL_MRR_uShutdownMode;//0.7-->0.6 3 "initial" 2 "reserved" 1 "fast off" 0 "soft off" ���ƣ�ShutdownMode λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u2ACC_State;//0.5-->0.3 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACC_State λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc1Reserve_2_2_2;//0.2-->0.2
 extern  vuint8_t VCAN_ALL_MRR_u3ACC_BrakePreferred;//0.1-->0.1 1 "demand" 0 "no demand" ���ƣ�ACC_BrakePreferred λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ACC_UpperComftBandReq;//0.0-->0.0 1 "demand" 0 "no demand" ���ƣ�ACC_UpperComftBandReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ACC_DriveOff;//1.7-->1.7 1 "demand" 0 "no demand" ���ƣ�ACC_DriveOff λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ACC_StandstillReq;//1.6-->1.6 1 "demand" 0 "no demand" ���ƣ�ACC_StandstillReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1AEB_Req;//1.5-->1.5 1 "demand" 0 "no demand" ���ƣ�AEB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1EBA_Req;//1.4-->1.4 1 "demand" 0 "no demand" ���ƣ�EBA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc2Reserve_2_10_11;//1.3-->1.2
 extern  vuint8_t VCAN_ALL_MRR_u1ABA_Level;//1.1-->1.0 3 "level 3" 2 "level 2" 1 "level 1" 0 "level 0" ���ƣ�ABA_Level λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u2ABA_Req;//2.7-->2.7 1 "demand" 0 "no demand" ���ƣ�ABA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1AWB_Req;//2.6-->2.6 1 "demand" 0 "no demand" ���ƣ�AWB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ABP_Req;//2.5-->2.5 1 "demand" 0 "no demand" ���ƣ�ABP_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc1Reserve_2_20_20;//2.4-->2.4
 extern  vuint8_t VCAN_ALL_MRR_u1AWB_Level;//2.3-->2.0 4 "level 4" 3 "level 3" 2 "level 2" 1 "level 1" 0 "no level" ���ƣ�AWB_Level λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VexAEB_TgtAx16High8;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
//*****************32 bits split line
 extern  vuint8_t VexAEB_TgtAx16Low8;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
 extern  vuint8_t VCAN_ALL_MRR_u16Rolling_counter_0x239;//6.3-->6.0 ���ƣ�Rolling_counter_0x239 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u4Checksum_0x239;//7.7-->7.0 ���ƣ�Checksum_0x239 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=3----MRR 3 the Data Frame ���ƣ�MRR_0x246  ID��0x582  ���ڣ�20ms  λ����8�ֽ�MRR-->

 extern  vuint16_t VCAN_ALL_MRR_uvSetDis;//0.7-->1.7 511 "Invalid" ���ƣ�vSetDis λ����9bit, logical min-max��0~255.5 physical min-max��0x000~0x1FF ���ȣ�0.5 ƫ������0 ��λ��kph 
 extern  vuint8_t VCAN_ALL_MRR_u9dxTarObj;//1.6-->1.4 7 "Distance_7" 6 "Distance_6" 5 "Distance_5" 4 "Distance_4" 3 "Distance_3" 2 "Distance_2" 1 "Distance_1" 0 "Distance_0" ���ƣ�dxTarObj λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u3TauGapSet;//1.3-->1.1 7 "tauGap_7" 6 "tauGap_6" 5 "tauGap_5" 4 "tauGap_4" 3 "tauGap_3" 2 "tauGap_2" 1 "tauGap_1" 0 "tauGap_0" ���ƣ�TauGapSet λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u3ObjValid;//1.0-->1.0 1 "target object detected" 0 "no object" ���ƣ�ObjValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1MRR_FCW_Sensitive;//2.7-->2.6 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" ���ƣ�MRR_FCW_Sensitive λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc1Reserve_3_21_21;//2.5-->2.5
 extern  vuint8_t VCAN_ALL_MRR_u2TakeOverReq;//2.4-->2.4 1 "valid TakeOver request" 0 "no TakeOver request" ���ƣ�TakeOverReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ACCFailInfo;//2.3-->2.3 1 "error" 0 "no error" ���ƣ�ACCFailInfo λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ACCHMI_Mode;//2.2-->2.0 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACCHMI_Mode λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u3FCW_latentWarning;//3.7-->3.7 1 "warning" 0 "no warning" ���ƣ�FCW_latentWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1FCW_preWarning;//3.6-->3.6 1 "warning" 0 "no warning" ���ƣ�FCW_preWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ACC_Startstop_infor;//3.5-->3.4 3 "ACC_SystemFailure" 2 "ACC_StartRequest" 1 "ACC_StopForbidden" 0 "ACC_StopAllowed" ���ƣ�ACC_Startstop_infor λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u2AEB_STATE;//3.3-->3.1 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�AEB_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc1Reserve_3_24_24;//3.0-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_MRR_u3FCW_STATE;//4.7-->4.5 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�FCW_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc5Reserve_3_32_36;//4.4-->4.0
 extern  vuint8_t VCAN_ALL_MRR_u3Obj_Speed;//5.7-->5.0 ���ƣ�Obj_Speed λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u8Textinfo;//6.7-->6.4 15 "Uncalibrated" 14 "ESP error" 13 "Override" 12 "Door open" 11 "Speed over 150kph" 10 "ESP off" 9 "Seatbelt unbuckled" 8 "No forward gear" 7 "EPB activate" 6 "ACC and PEBS error" 5 "MRR blindness" 4 "ACC Active" 3 "ACC is cancelled" 2 "ACC is switched off" 1 "ACC is switched on" 0 "No display" ���ƣ�Textinfo λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u4Rolling_counter_0x246;//6.3-->6.0 ���ƣ�Rolling_counter_0x246 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u4Checksum_0x246;//7.7-->7.0 ���ƣ�Checksum_0x246 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=4----MRR 4 the Data Frame ���ƣ�MRR_FrObj_0x279  ID��0x633  ���ڣ�100ms  λ����8�ֽ�MRR-->

 extern  vuint16_t VCAN_ALL_MRR_uMRR_F_Object_dx;//0.7-->1.4 ���ƣ�MRR_F_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 extern  vuint16_t VCAN_ALL_MRR_u12MRR_F_Object_dy;//1.3-->2.3 ���ƣ�MRR_F_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u9MRR_F_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_F_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VexMRR_FF_Object_dx12High4;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
//*****************32 bits split line
 extern  vuint8_t VexMRR_FF_Object_dx12Low8;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 extern  vuint16_t VCAN_ALL_MRR_u12MRR_FF_Object_dy;//4.3-->5.3 ���ƣ�MRR_FF_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u9MRR_FF_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_FF_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u3MRR_PedDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_PedDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1MRR_FFTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_FFTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint16_t Vc14Reserve_4_56_53;//6.5-->7.0


//--Can_NR=5----MRR 5 the Data Frame ���ƣ�MRR_FRObj_0x480  ID��0x1152  ���ڣ�100ms  λ����8�ֽ�MRR-->

 extern  vuint16_t VCAN_ALL_MRR_uMRR_L_Object_dx;//0.7-->1.4 ���ƣ�MRR_L_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 extern  vuint16_t VCAN_ALL_MRR_u12MRR_L_Object_dy;//1.3-->2.3 ���ƣ�MRR_L_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u9MRR_L_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_L_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VexMRR_R_Object_dx12High4;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
//*****************32 bits split line
 extern  vuint8_t VexMRR_R_Object_dx12Low8;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 extern  vuint16_t VCAN_ALL_MRR_u12MRR_R_Object_dy;//4.3-->5.3 ���ƣ�MRR_R_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u9MRR_R_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_R_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u3MRR_RightTargrtDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_RightTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1MRR_LeftTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_LeftTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint16_t Vc14Reserve_5_56_53;//6.5-->7.0


//--Can_NR=6----MRR 6 the Data Frame ���ƣ�MRR_DiagResp  ID��0x1882  ���ڣ�0ms  λ����8�ֽ�MRR-->

 extern  vuint32_t VexDiagRespFromMRR64High32;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 extern  vuint32_t VexDiagRespFromMRR64Low32;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//=======================64λԪ�ر���==============================(�ָ���)



//--Can_NR=1----MRR 1 the Data Frame ���ƣ�MRR_0x238  ID��0x568  ���ڣ�20ms  λ����8�ֽ�MRR-->

 vuint8_t VCAN_ALL_MRR_uACC_TgtAxUpperComftBand;//0.7-->0.0 ���ƣ�ACC_TgtAxUpperComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
 vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxLowerComftBand;//1.7-->1.0 ���ƣ�ACC_TgtAxLowerComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
 vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxUpperLim;//2.7-->2.0 ���ƣ�ACC_TgtAxUpperLim λ����8bit, logical min-max��0~12.7 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������0 ��λ��m_s3 
 vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxLowerLim;//3.7-->3.0 ���ƣ�ACC_TgtAxLowerLim λ����8bit, logical min-max��-12.7~0 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������-127 ��λ��m_s3 
//*****************32 bits split line
 vuint8_t Vc8Reserve_1_32_39;//4.7-->4.0
 vuint16_t VCAN_ALL_MRR_u8ACC_TgtAx;//5.7-->6.5 ���ƣ�ACC_TgtAx λ����11bit, logical min-max��-5~7.75 physical min-max��0x000~0xFF ���ȣ�0.05 ƫ������-100 ��λ��m_s2 
 vuint8_t VCAN_ALL_MRR_u11Rolling_counter_0x238;//6.3-->6.0 ���ƣ�Rolling_counter_0x238 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u4Checksum_0x238;//7.7-->7.0 ���ƣ�Checksum_0x238 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=2----MRR 2 the Data Frame ���ƣ�MRR_0x239  ID��0x569  ���ڣ�20ms  λ����8�ֽ�MRR-->

 vuint8_t VCAN_ALL_MRR_uShutdownMode;//0.7-->0.6 3 "initial" 2 "reserved" 1 "fast off" 0 "soft off" ���ƣ�ShutdownMode λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u2ACC_State;//0.5-->0.3 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACC_State λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc1Reserve_2_2_2;//0.2-->0.2
 vuint8_t VCAN_ALL_MRR_u3ACC_BrakePreferred;//0.1-->0.1 1 "demand" 0 "no demand" ���ƣ�ACC_BrakePreferred λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ACC_UpperComftBandReq;//0.0-->0.0 1 "demand" 0 "no demand" ���ƣ�ACC_UpperComftBandReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ACC_DriveOff;//1.7-->1.7 1 "demand" 0 "no demand" ���ƣ�ACC_DriveOff λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ACC_StandstillReq;//1.6-->1.6 1 "demand" 0 "no demand" ���ƣ�ACC_StandstillReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1AEB_Req;//1.5-->1.5 1 "demand" 0 "no demand" ���ƣ�AEB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1EBA_Req;//1.4-->1.4 1 "demand" 0 "no demand" ���ƣ�EBA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc2Reserve_2_10_11;//1.3-->1.2
 vuint8_t VCAN_ALL_MRR_u1ABA_Level;//1.1-->1.0 3 "level 3" 2 "level 2" 1 "level 1" 0 "level 0" ���ƣ�ABA_Level λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u2ABA_Req;//2.7-->2.7 1 "demand" 0 "no demand" ���ƣ�ABA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1AWB_Req;//2.6-->2.6 1 "demand" 0 "no demand" ���ƣ�AWB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ABP_Req;//2.5-->2.5 1 "demand" 0 "no demand" ���ƣ�ABP_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc1Reserve_2_20_20;//2.4-->2.4
 vuint8_t VCAN_ALL_MRR_u1AWB_Level;//2.3-->2.0 4 "level 4" 3 "level 3" 2 "level 2" 1 "level 1" 0 "no level" ���ƣ�AWB_Level λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint16_t VexAEB_TgtAx16;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
//*****************32 bits split line
 //vuint8_t VexAEB_TgtAx16Low8:8;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
 vuint8_t VCAN_ALL_MRR_u16Rolling_counter_0x239;//6.3-->6.0 ���ƣ�Rolling_counter_0x239 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u4Checksum_0x239;//7.7-->7.0 ���ƣ�Checksum_0x239 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=3----MRR 3 the Data Frame ���ƣ�MRR_0x246  ID��0x582  ���ڣ�20ms  λ����8�ֽ�MRR-->

 vuint16_t VCAN_ALL_MRR_uvSetDis;//0.7-->1.7 511 "Invalid" ���ƣ�vSetDis λ����9bit, logical min-max��0~255.5 physical min-max��0x000~0x1FF ���ȣ�0.5 ƫ������0 ��λ��kph 
 vuint8_t VCAN_ALL_MRR_u9dxTarObj;//1.6-->1.4 7 "Distance_7" 6 "Distance_6" 5 "Distance_5" 4 "Distance_4" 3 "Distance_3" 2 "Distance_2" 1 "Distance_1" 0 "Distance_0" ���ƣ�dxTarObj λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u3TauGapSet;//1.3-->1.1 7 "tauGap_7" 6 "tauGap_6" 5 "tauGap_5" 4 "tauGap_4" 3 "tauGap_3" 2 "tauGap_2" 1 "tauGap_1" 0 "tauGap_0" ���ƣ�TauGapSet λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u3ObjValid;//1.0-->1.0 1 "target object detected" 0 "no object" ���ƣ�ObjValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1MRR_FCW_Sensitive;//2.7-->2.6 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" ���ƣ�MRR_FCW_Sensitive λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc1Reserve_3_21_21;//2.5-->2.5
 vuint8_t VCAN_ALL_MRR_u2TakeOverReq;//2.4-->2.4 1 "valid TakeOver request" 0 "no TakeOver request" ���ƣ�TakeOverReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ACCFailInfo;//2.3-->2.3 1 "error" 0 "no error" ���ƣ�ACCFailInfo λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ACCHMI_Mode;//2.2-->2.0 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACCHMI_Mode λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u3FCW_latentWarning;//3.7-->3.7 1 "warning" 0 "no warning" ���ƣ�FCW_latentWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1FCW_preWarning;//3.6-->3.6 1 "warning" 0 "no warning" ���ƣ�FCW_preWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1ACC_Startstop_infor;//3.5-->3.4 3 "ACC_SystemFailure" 2 "ACC_StartRequest" 1 "ACC_StopForbidden" 0 "ACC_StopAllowed" ���ƣ�ACC_Startstop_infor λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u2AEB_STATE;//3.3-->3.1 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�AEB_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc1Reserve_3_24_24;//3.0-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_MRR_u3FCW_STATE;//4.7-->4.5 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�FCW_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc5Reserve_3_32_36;//4.4-->4.0
 vuint8_t VCAN_ALL_MRR_u3Obj_Speed;//5.7-->5.0 ���ƣ�Obj_Speed λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u8Textinfo;//6.7-->6.4 15 "Uncalibrated" 14 "ESP error" 13 "Override" 12 "Door open" 11 "Speed over 150kph" 10 "ESP off" 9 "Seatbelt unbuckled" 8 "No forward gear" 7 "EPB activate" 6 "ACC and PEBS error" 5 "MRR blindness" 4 "ACC Active" 3 "ACC is cancelled" 2 "ACC is switched off" 1 "ACC is switched on" 0 "No display" ���ƣ�Textinfo λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u4Rolling_counter_0x246;//6.3-->6.0 ���ƣ�Rolling_counter_0x246 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u4Checksum_0x246;//7.7-->7.0 ���ƣ�Checksum_0x246 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=4----MRR 4 the Data Frame ���ƣ�MRR_FrObj_0x279  ID��0x633  ���ڣ�100ms  λ����8�ֽ�MRR-->

 vuint16_t VCAN_ALL_MRR_uMRR_F_Object_dx;//0.7-->1.4 ���ƣ�MRR_F_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 vuint16_t VCAN_ALL_MRR_u12MRR_F_Object_dy;//1.3-->2.3 ���ƣ�MRR_F_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u9MRR_F_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_F_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint16_t VexMRR_FF_Object_dx12;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
//*****************32 bits split line
 //vuint8_t VexMRR_FF_Object_dx12Low8:4;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 vuint16_t VCAN_ALL_MRR_u12MRR_FF_Object_dy;//4.3-->5.3 ���ƣ�MRR_FF_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u9MRR_FF_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_FF_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u3MRR_PedDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_PedDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1MRR_FFTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_FFTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint16_t Vc14Reserve_4_56_53;//6.5-->7.0


//--Can_NR=5----MRR 5 the Data Frame ���ƣ�MRR_FRObj_0x480  ID��0x1152  ���ڣ�100ms  λ����8�ֽ�MRR-->

 vuint16_t VCAN_ALL_MRR_uMRR_L_Object_dx;//0.7-->1.4 ���ƣ�MRR_L_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 vuint16_t VCAN_ALL_MRR_u12MRR_L_Object_dy;//1.3-->2.3 ���ƣ�MRR_L_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u9MRR_L_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_L_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint16_t VexMRR_R_Object_dx12;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
//*****************32 bits split line
 //vuint8_t VexMRR_R_Object_dx12Low8:4;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 vuint16_t VCAN_ALL_MRR_u12MRR_R_Object_dy;//4.3-->5.3 ���ƣ�MRR_R_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u9MRR_R_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_R_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u3MRR_RightTargrtDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_RightTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_MRR_u1MRR_LeftTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_LeftTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint16_t Vc14Reserve_5_56_53;//6.5-->7.0


//--Can_NR=6----MRR 6 the Data Frame ���ƣ�MRR_DiagResp  ID��0x1882  ���ڣ�0ms  λ����8�ֽ�MRR-->

 vuint32_t VexDiagRespFromMRR64;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 //vuint32_t VexDiagRespFromMRR64Low32:32;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//=======================64λԪ�ر���==============================(�ָ���)



//--Can_NR=1----MRR 1 the Data Frame ���ƣ�MRR_0x238  ID��0x568  ���ڣ�20ms  λ����8�ֽ�MRR-->

 extern  vuint8_t VCAN_ALL_MRR_uACC_TgtAxUpperComftBand;//0.7-->0.0 ���ƣ�ACC_TgtAxUpperComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
 extern  vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxLowerComftBand;//1.7-->1.0 ���ƣ�ACC_TgtAxLowerComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
 extern  vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxUpperLim;//2.7-->2.0 ���ƣ�ACC_TgtAxUpperLim λ����8bit, logical min-max��0~12.7 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������0 ��λ��m_s3 
 extern  vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxLowerLim;//3.7-->3.0 ���ƣ�ACC_TgtAxLowerLim λ����8bit, logical min-max��-12.7~0 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������-127 ��λ��m_s3 
//*****************32 bits split line
 extern  vuint8_t Vc8Reserve_1_32_39;//4.7-->4.0
 extern  vuint16_t VCAN_ALL_MRR_u8ACC_TgtAx;//5.7-->6.5 ���ƣ�ACC_TgtAx λ����11bit, logical min-max��-5~7.75 physical min-max��0x000~0xFF ���ȣ�0.05 ƫ������-100 ��λ��m_s2 
 extern  vuint8_t VCAN_ALL_MRR_u11Rolling_counter_0x238;//6.3-->6.0 ���ƣ�Rolling_counter_0x238 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u4Checksum_0x238;//7.7-->7.0 ���ƣ�Checksum_0x238 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=2----MRR 2 the Data Frame ���ƣ�MRR_0x239  ID��0x569  ���ڣ�20ms  λ����8�ֽ�MRR-->

 extern  vuint8_t VCAN_ALL_MRR_uShutdownMode;//0.7-->0.6 3 "initial" 2 "reserved" 1 "fast off" 0 "soft off" ���ƣ�ShutdownMode λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u2ACC_State;//0.5-->0.3 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACC_State λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc1Reserve_2_2_2;//0.2-->0.2
 extern  vuint8_t VCAN_ALL_MRR_u3ACC_BrakePreferred;//0.1-->0.1 1 "demand" 0 "no demand" ���ƣ�ACC_BrakePreferred λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ACC_UpperComftBandReq;//0.0-->0.0 1 "demand" 0 "no demand" ���ƣ�ACC_UpperComftBandReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ACC_DriveOff;//1.7-->1.7 1 "demand" 0 "no demand" ���ƣ�ACC_DriveOff λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ACC_StandstillReq;//1.6-->1.6 1 "demand" 0 "no demand" ���ƣ�ACC_StandstillReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1AEB_Req;//1.5-->1.5 1 "demand" 0 "no demand" ���ƣ�AEB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1EBA_Req;//1.4-->1.4 1 "demand" 0 "no demand" ���ƣ�EBA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc2Reserve_2_10_11;//1.3-->1.2
 extern  vuint8_t VCAN_ALL_MRR_u1ABA_Level;//1.1-->1.0 3 "level 3" 2 "level 2" 1 "level 1" 0 "level 0" ���ƣ�ABA_Level λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u2ABA_Req;//2.7-->2.7 1 "demand" 0 "no demand" ���ƣ�ABA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1AWB_Req;//2.6-->2.6 1 "demand" 0 "no demand" ���ƣ�AWB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ABP_Req;//2.5-->2.5 1 "demand" 0 "no demand" ���ƣ�ABP_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc1Reserve_2_20_20;//2.4-->2.4
 extern  vuint8_t VCAN_ALL_MRR_u1AWB_Level;//2.3-->2.0 4 "level 4" 3 "level 3" 2 "level 2" 1 "level 1" 0 "no level" ���ƣ�AWB_Level λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint16_t VexAEB_TgtAx16;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
//*****************32 bits split line
 //extern  vuint8_t VexAEB_TgtAx16Low8:8;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
 extern  vuint8_t VCAN_ALL_MRR_u16Rolling_counter_0x239;//6.3-->6.0 ���ƣ�Rolling_counter_0x239 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u4Checksum_0x239;//7.7-->7.0 ���ƣ�Checksum_0x239 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=3----MRR 3 the Data Frame ���ƣ�MRR_0x246  ID��0x582  ���ڣ�20ms  λ����8�ֽ�MRR-->

 extern  vuint16_t VCAN_ALL_MRR_uvSetDis;//0.7-->1.7 511 "Invalid" ���ƣ�vSetDis λ����9bit, logical min-max��0~255.5 physical min-max��0x000~0x1FF ���ȣ�0.5 ƫ������0 ��λ��kph 
 extern  vuint8_t VCAN_ALL_MRR_u9dxTarObj;//1.6-->1.4 7 "Distance_7" 6 "Distance_6" 5 "Distance_5" 4 "Distance_4" 3 "Distance_3" 2 "Distance_2" 1 "Distance_1" 0 "Distance_0" ���ƣ�dxTarObj λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u3TauGapSet;//1.3-->1.1 7 "tauGap_7" 6 "tauGap_6" 5 "tauGap_5" 4 "tauGap_4" 3 "tauGap_3" 2 "tauGap_2" 1 "tauGap_1" 0 "tauGap_0" ���ƣ�TauGapSet λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u3ObjValid;//1.0-->1.0 1 "target object detected" 0 "no object" ���ƣ�ObjValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1MRR_FCW_Sensitive;//2.7-->2.6 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" ���ƣ�MRR_FCW_Sensitive λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc1Reserve_3_21_21;//2.5-->2.5
 extern  vuint8_t VCAN_ALL_MRR_u2TakeOverReq;//2.4-->2.4 1 "valid TakeOver request" 0 "no TakeOver request" ���ƣ�TakeOverReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ACCFailInfo;//2.3-->2.3 1 "error" 0 "no error" ���ƣ�ACCFailInfo λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ACCHMI_Mode;//2.2-->2.0 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACCHMI_Mode λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u3FCW_latentWarning;//3.7-->3.7 1 "warning" 0 "no warning" ���ƣ�FCW_latentWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1FCW_preWarning;//3.6-->3.6 1 "warning" 0 "no warning" ���ƣ�FCW_preWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1ACC_Startstop_infor;//3.5-->3.4 3 "ACC_SystemFailure" 2 "ACC_StartRequest" 1 "ACC_StopForbidden" 0 "ACC_StopAllowed" ���ƣ�ACC_Startstop_infor λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u2AEB_STATE;//3.3-->3.1 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�AEB_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc1Reserve_3_24_24;//3.0-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_MRR_u3FCW_STATE;//4.7-->4.5 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�FCW_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc5Reserve_3_32_36;//4.4-->4.0
 extern  vuint8_t VCAN_ALL_MRR_u3Obj_Speed;//5.7-->5.0 ���ƣ�Obj_Speed λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u8Textinfo;//6.7-->6.4 15 "Uncalibrated" 14 "ESP error" 13 "Override" 12 "Door open" 11 "Speed over 150kph" 10 "ESP off" 9 "Seatbelt unbuckled" 8 "No forward gear" 7 "EPB activate" 6 "ACC and PEBS error" 5 "MRR blindness" 4 "ACC Active" 3 "ACC is cancelled" 2 "ACC is switched off" 1 "ACC is switched on" 0 "No display" ���ƣ�Textinfo λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u4Rolling_counter_0x246;//6.3-->6.0 ���ƣ�Rolling_counter_0x246 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u4Checksum_0x246;//7.7-->7.0 ���ƣ�Checksum_0x246 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=4----MRR 4 the Data Frame ���ƣ�MRR_FrObj_0x279  ID��0x633  ���ڣ�100ms  λ����8�ֽ�MRR-->

 extern  vuint16_t VCAN_ALL_MRR_uMRR_F_Object_dx;//0.7-->1.4 ���ƣ�MRR_F_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 extern  vuint16_t VCAN_ALL_MRR_u12MRR_F_Object_dy;//1.3-->2.3 ���ƣ�MRR_F_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u9MRR_F_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_F_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint16_t VexMRR_FF_Object_dx12;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
//*****************32 bits split line
 //extern  vuint8_t VexMRR_FF_Object_dx12Low8:4;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 extern  vuint16_t VCAN_ALL_MRR_u12MRR_FF_Object_dy;//4.3-->5.3 ���ƣ�MRR_FF_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u9MRR_FF_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_FF_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u3MRR_PedDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_PedDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1MRR_FFTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_FFTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint16_t Vc14Reserve_4_56_53;//6.5-->7.0


//--Can_NR=5----MRR 5 the Data Frame ���ƣ�MRR_FRObj_0x480  ID��0x1152  ���ڣ�100ms  λ����8�ֽ�MRR-->

 extern  vuint16_t VCAN_ALL_MRR_uMRR_L_Object_dx;//0.7-->1.4 ���ƣ�MRR_L_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 extern  vuint16_t VCAN_ALL_MRR_u12MRR_L_Object_dy;//1.3-->2.3 ���ƣ�MRR_L_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u9MRR_L_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_L_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint16_t VexMRR_R_Object_dx12;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
//*****************32 bits split line
 //extern  vuint8_t VexMRR_R_Object_dx12Low8:4;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
 extern  vuint16_t VCAN_ALL_MRR_u12MRR_R_Object_dy;//4.3-->5.3 ���ƣ�MRR_R_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u9MRR_R_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_R_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u3MRR_RightTargrtDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_RightTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_MRR_u1MRR_LeftTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_LeftTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint16_t Vc14Reserve_5_56_53;//6.5-->7.0


//--Can_NR=6----MRR 6 the Data Frame ���ƣ�MRR_DiagResp  ID��0x1882  ���ڣ�0ms  λ����8�ֽ�MRR-->

 extern  vuint32_t VexDiagRespFromMRR64;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 //extern  vuint32_t VexDiagRespFromMRR64Low32:32;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=1----MRR 1 the Data Frame ���ƣ�MRR_0x238  ID��0x568  ���ڣ�20ms  λ����8�ֽ�MRR-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
         //vuint8_t VCAN_ALL_MRR_uACC_TgtAxUpperComftBand;//0.7-->0.0 ���ƣ�ACC_TgtAxUpperComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
         //vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxLowerComftBand;//1.7-->1.0 ���ƣ�ACC_TgtAxLowerComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
         //vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxUpperLim;//2.7-->2.0 ���ƣ�ACC_TgtAxUpperLim λ����8bit, logical min-max��0~12.7 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������0 ��λ��m_s3 
         //vuint8_t VCAN_ALL_MRR_u8ACC_TgtAxLowerLim;//3.7-->3.0 ���ƣ�ACC_TgtAxLowerLim λ����8bit, logical min-max��-12.7~0 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������-127 ��λ��m_s3 
        //*****************32 bits split line
         //vuint8_t Vc8Reserve_1_32_39;//4.7-->4.0
         //vuint16_t VCAN_ALL_MRR_u8ACC_TgtAx;//5.7-->6.5 ���ƣ�ACC_TgtAx λ����11bit, logical min-max��-5~7.75 physical min-max��0x000~0xFF ���ȣ�0.05 ƫ������-100 ��λ��m_s2 
        vuint8_t VCAN_ALL_MRR_u11Rolling_counter_0x238;//6.3-->6.0 ���ƣ�Rolling_counter_0x238 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
         //vuint8_t VCAN_ALL_MRR_u4Checksum_0x238;//7.7-->7.0 ���ƣ�Checksum_0x238 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

     } B;
}  Vu8_MRR_1_MRR_0x238_DataBit_tag;
extern Vu8_MRR_1_MRR_0x238_DataBit_tag Vu8_MRR_1_MRR_0x238_DataBit;


//--Can_NR=2----MRR 2 the Data Frame ���ƣ�MRR_0x239  ID��0x569  ���ڣ�20ms  λ����8�ֽ�MRR-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
        vuint8_t VCAN_ALL_MRR_uShutdownMode;//0.7-->0.6 3 "initial" 2 "reserved" 1 "fast off" 0 "soft off" ���ƣ�ShutdownMode λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u2ACC_State;//0.5-->0.3 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACC_State λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t Vc1Reserve_2_2_2;//0.2-->0.2
        vuint8_t VCAN_ALL_MRR_u3ACC_BrakePreferred;//0.1-->0.1 1 "demand" 0 "no demand" ���ƣ�ACC_BrakePreferred λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1ACC_UpperComftBandReq;//0.0-->0.0 1 "demand" 0 "no demand" ���ƣ�ACC_UpperComftBandReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1ACC_DriveOff;//1.7-->1.7 1 "demand" 0 "no demand" ���ƣ�ACC_DriveOff λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1ACC_StandstillReq;//1.6-->1.6 1 "demand" 0 "no demand" ���ƣ�ACC_StandstillReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1AEB_Req;//1.5-->1.5 1 "demand" 0 "no demand" ���ƣ�AEB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1EBA_Req;//1.4-->1.4 1 "demand" 0 "no demand" ���ƣ�EBA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t Vc2Reserve_2_10_11;//1.3-->1.2
        vuint8_t VCAN_ALL_MRR_u1ABA_Level;//1.1-->1.0 3 "level 3" 2 "level 2" 1 "level 1" 0 "level 0" ���ƣ�ABA_Level λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u2ABA_Req;//2.7-->2.7 1 "demand" 0 "no demand" ���ƣ�ABA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1AWB_Req;//2.6-->2.6 1 "demand" 0 "no demand" ���ƣ�AWB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1ABP_Req;//2.5-->2.5 1 "demand" 0 "no demand" ���ƣ�ABP_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t Vc1Reserve_2_20_20;//2.4-->2.4
        vuint8_t VCAN_ALL_MRR_u1AWB_Level;//2.3-->2.0 4 "level 4" 3 "level 3" 2 "level 2" 1 "level 1" 0 "no level" ���ƣ�AWB_Level λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
         //vuint8_t VexAEB_TgtAx16High8;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
        //*****************32 bits split line
         //vuint8_t VexAEB_TgtAx16Low8;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
        vuint8_t VCAN_ALL_MRR_u16Rolling_counter_0x239;//6.3-->6.0 ���ƣ�Rolling_counter_0x239 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
         //vuint8_t VCAN_ALL_MRR_u4Checksum_0x239;//7.7-->7.0 ���ƣ�Checksum_0x239 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

     } B;
}  Vu8_MRR_2_MRR_0x239_DataBit_tag;
extern Vu8_MRR_2_MRR_0x239_DataBit_tag Vu8_MRR_2_MRR_0x239_DataBit;


//--Can_NR=3----MRR 3 the Data Frame ���ƣ�MRR_0x246  ID��0x582  ���ڣ�20ms  λ����8�ֽ�MRR-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
         //vuint16_t VCAN_ALL_MRR_uvSetDis;//0.7-->1.7 511 "Invalid" ���ƣ�vSetDis λ����9bit, logical min-max��0~255.5 physical min-max��0x000~0x1FF ���ȣ�0.5 ƫ������0 ��λ��kph 
        vuint8_t VCAN_ALL_MRR_u9dxTarObj;//1.6-->1.4 7 "Distance_7" 6 "Distance_6" 5 "Distance_5" 4 "Distance_4" 3 "Distance_3" 2 "Distance_2" 1 "Distance_1" 0 "Distance_0" ���ƣ�dxTarObj λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u3TauGapSet;//1.3-->1.1 7 "tauGap_7" 6 "tauGap_6" 5 "tauGap_5" 4 "tauGap_4" 3 "tauGap_3" 2 "tauGap_2" 1 "tauGap_1" 0 "tauGap_0" ���ƣ�TauGapSet λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u3ObjValid;//1.0-->1.0 1 "target object detected" 0 "no object" ���ƣ�ObjValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1MRR_FCW_Sensitive;//2.7-->2.6 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" ���ƣ�MRR_FCW_Sensitive λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t Vc1Reserve_3_21_21;//2.5-->2.5
        vuint8_t VCAN_ALL_MRR_u2TakeOverReq;//2.4-->2.4 1 "valid TakeOver request" 0 "no TakeOver request" ���ƣ�TakeOverReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1ACCFailInfo;//2.3-->2.3 1 "error" 0 "no error" ���ƣ�ACCFailInfo λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1ACCHMI_Mode;//2.2-->2.0 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACCHMI_Mode λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u3FCW_latentWarning;//3.7-->3.7 1 "warning" 0 "no warning" ���ƣ�FCW_latentWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1FCW_preWarning;//3.6-->3.6 1 "warning" 0 "no warning" ���ƣ�FCW_preWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1ACC_Startstop_infor;//3.5-->3.4 3 "ACC_SystemFailure" 2 "ACC_StartRequest" 1 "ACC_StopForbidden" 0 "ACC_StopAllowed" ���ƣ�ACC_Startstop_infor λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u2AEB_STATE;//3.3-->3.1 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�AEB_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t Vc1Reserve_3_24_24;//3.0-->3.0
        //*****************32 bits split line
        vuint8_t VCAN_ALL_MRR_u3FCW_STATE;//4.7-->4.5 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�FCW_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t Vc5Reserve_3_32_36;//4.4-->4.0
         //vuint8_t VCAN_ALL_MRR_u3Obj_Speed;//5.7-->5.0 ���ƣ�Obj_Speed λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u8Textinfo;//6.7-->6.4 15 "Uncalibrated" 14 "ESP error" 13 "Override" 12 "Door open" 11 "Speed over 150kph" 10 "ESP off" 9 "Seatbelt unbuckled" 8 "No forward gear" 7 "EPB activate" 6 "ACC and PEBS error" 5 "MRR blindness" 4 "ACC Active" 3 "ACC is cancelled" 2 "ACC is switched off" 1 "ACC is switched on" 0 "No display" ���ƣ�Textinfo λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u4Rolling_counter_0x246;//6.3-->6.0 ���ƣ�Rolling_counter_0x246 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
         //vuint8_t VCAN_ALL_MRR_u4Checksum_0x246;//7.7-->7.0 ���ƣ�Checksum_0x246 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

     } B;
}  Vu8_MRR_3_MRR_0x246_DataBit_tag;
extern Vu8_MRR_3_MRR_0x246_DataBit_tag Vu8_MRR_3_MRR_0x246_DataBit;


//--Can_NR=4----MRR 4 the Data Frame ���ƣ�MRR_FrObj_0x279  ID��0x633  ���ڣ�100ms  λ����8�ֽ�MRR-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
         //vuint16_t VCAN_ALL_MRR_uMRR_F_Object_dx;//0.7-->1.4 ���ƣ�MRR_F_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
         //vuint16_t VCAN_ALL_MRR_u12MRR_F_Object_dy;//1.3-->2.3 ���ƣ�MRR_F_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u9MRR_F_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_F_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
         //vuint8_t VexMRR_FF_Object_dx12High4;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
        //*****************32 bits split line
        vuint8_t VexMRR_FF_Object_dx12Low8;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
         //vuint16_t VCAN_ALL_MRR_u12MRR_FF_Object_dy;//4.3-->5.3 ���ƣ�MRR_FF_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u9MRR_FF_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_FF_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u3MRR_PedDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_PedDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1MRR_FFTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_FFTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
         //vuint16_t Vc14Reserve_4_56_53;//6.5-->7.0

     } B;
}  Vu8_MRR_4_MRR_FrObj_0x279_DataBit_tag;
extern Vu8_MRR_4_MRR_FrObj_0x279_DataBit_tag Vu8_MRR_4_MRR_FrObj_0x279_DataBit;


//--Can_NR=5----MRR 5 the Data Frame ���ƣ�MRR_FRObj_0x480  ID��0x1152  ���ڣ�100ms  λ����8�ֽ�MRR-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
         //vuint16_t VCAN_ALL_MRR_uMRR_L_Object_dx;//0.7-->1.4 ���ƣ�MRR_L_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
         //vuint16_t VCAN_ALL_MRR_u12MRR_L_Object_dy;//1.3-->2.3 ���ƣ�MRR_L_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u9MRR_L_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_L_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
         //vuint8_t VexMRR_R_Object_dx12High4;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
        //*****************32 bits split line
        vuint8_t VexMRR_R_Object_dx12Low8;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
         //vuint16_t VCAN_ALL_MRR_u12MRR_R_Object_dy;//4.3-->5.3 ���ƣ�MRR_R_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u9MRR_R_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_R_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u3MRR_RightTargrtDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_RightTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_MRR_u1MRR_LeftTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_LeftTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
         //vuint16_t Vc14Reserve_5_56_53;//6.5-->7.0

     } B;
}  Vu8_MRR_5_MRR_FRObj_0x480_DataBit_tag;
extern Vu8_MRR_5_MRR_FRObj_0x480_DataBit_tag Vu8_MRR_5_MRR_FRObj_0x480_DataBit;


//--Can_NR=6----MRR 6 the Data Frame ���ƣ�MRR_DiagResp  ID��0x1882  ���ڣ�0ms  λ����8�ֽ�MRR-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
         //vuint32_t VexDiagRespFromMRR64High32;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
        //*****************32 bits split line
         //vuint32_t VexDiagRespFromMRR64Low32;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

     } B;
}  Vu8_MRR_6_MRR_DiagResp_DataBit_tag;
extern Vu8_MRR_6_MRR_DiagResp_DataBit_tag Vu8_MRR_6_MRR_DiagResp_DataBit;

//--Can_NR=1----MRR 1 the Data Frame ���ƣ�MRR_0x238  ID��0x568  ���ڣ�20ms  λ����8�ֽ�MRR-->

                if ( CAN1_ReceivedMessage [ALL_MRR_MRR_0x238_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_MRR_MRR_0x238_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_MRR.R[ 2*ALL_MRR_MRR_0x238_FR+0] = CAN_ALL_FRMes_MRR.R[ 2*ALL_MRR_MRR_0x238_FR+0]  ; 
                CAN_ALL_FRVar_MRR.R[ 2*ALL_MRR_MRR_0x238_FR+1] = CAN_ALL_FRMes_MRR.R[ 2*ALL_MRR_MRR_0x238_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_MRR_MRR_0x238_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_MRR_MRR_0x238_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_MRR_MRR_0x238_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_MRR_MRR_0x238_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_MRR = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_MRR.B.ALL_MRR_MRR_0x238 = 1 ;  //�������屨��CAN�������ź�
                CAN_ALL_FRVar_MRR.R[2*ALL_MRR_MRR_0x238_FR+0]=CAN_ALL_FRAMES_MRR.R[2*ALL_MRR_MRR_0x238_FR+0];
                CAN_ALL_FRVar_MRR.R[2*ALL_MRR_MRR_0x238_FR+1]=CAN_ALL_FRAMES_MRR.R[2*ALL_MRR_MRR_0x238_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_MRR_MRR_0x238_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_MRR_MRR_0x238_CH]  == 1 ) {


                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_uACC_TgtAxUpperComftBand= CAN_ALL_MRR_uACC_TgtAxUpperComftBand_min;//0.7-->0.0 ���ƣ�ACC_TgtAxUpperComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u8ACC_TgtAxLowerComftBand= CAN_ALL_MRR_u8ACC_TgtAxLowerComftBand_min;//1.7-->1.0 ���ƣ�ACC_TgtAxLowerComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u8ACC_TgtAxUpperLim= CAN_ALL_MRR_u8ACC_TgtAxUpperLim_min;//2.7-->2.0 ���ƣ�ACC_TgtAxUpperLim λ����8bit, logical min-max��0~12.7 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������0 ��λ��m_s3 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u8ACC_TgtAxLowerLim= CAN_ALL_MRR_u8ACC_TgtAxLowerLim_min;//3.7-->3.0 ���ƣ�ACC_TgtAxLowerLim λ����8bit, logical min-max��-12.7~0 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������-127 ��λ��m_s3 
                CAN_ALL_FRAMES_MRR.B.c8Reserve_1_32_39= CAN_ALL_MRR_c8Reserve_1_32_39_min;//4.7-->4.0
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u8ACC_TgtAx= CAN_ALL_MRR_u8ACC_TgtAx_min;//5.7-->6.5 ���ƣ�ACC_TgtAx λ����11bit, logical min-max��-5~7.75 physical min-max��0x000~0xFF ���ȣ�0.05 ƫ������-100 ��λ��m_s2 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u11Rolling_counter_0x238= CAN_ALL_MRR_u11Rolling_counter_0x238_min;//6.3-->6.0 ���ƣ�Rolling_counter_0x238 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u4Checksum_0x238= CAN_ALL_MRR_u4Checksum_0x238_min;//7.7-->7.0 ���ƣ�Checksum_0x238 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_uACC_TgtAxUpperComftBand=VCAN_ALL_MRR_uACC_TgtAxUpperComftBand;//0.7-->0.0 ���ƣ�ACC_TgtAxUpperComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u8ACC_TgtAxLowerComftBand=VCAN_ALL_MRR_u8ACC_TgtAxLowerComftBand;//1.7-->1.0 ���ƣ�ACC_TgtAxLowerComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u8ACC_TgtAxUpperLim=VCAN_ALL_MRR_u8ACC_TgtAxUpperLim;//2.7-->2.0 ���ƣ�ACC_TgtAxUpperLim λ����8bit, logical min-max��0~12.7 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������0 ��λ��m_s3 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u8ACC_TgtAxLowerLim=VCAN_ALL_MRR_u8ACC_TgtAxLowerLim;//3.7-->3.0 ���ƣ�ACC_TgtAxLowerLim λ����8bit, logical min-max��-12.7~0 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������-127 ��λ��m_s3 
                CAN_ALL_FRVar_MRR.B.c8Reserve_1_32_39=Vc8Reserve_1_32_39;//4.7-->4.0
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u8ACC_TgtAx=VCAN_ALL_MRR_u8ACC_TgtAx;//5.7-->6.5 ���ƣ�ACC_TgtAx λ����11bit, logical min-max��-5~7.75 physical min-max��0x000~0xFF ���ȣ�0.05 ƫ������-100 ��λ��m_s2 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u11Rolling_counter_0x238=VCAN_ALL_MRR_u11Rolling_counter_0x238;//6.3-->6.0 ���ƣ�Rolling_counter_0x238 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u4Checksum_0x238=VCAN_ALL_MRR_u4Checksum_0x238;//7.7-->7.0 ���ƣ�Checksum_0x238 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                VCAN_ALL_MRR_uACC_TgtAxUpperComftBand=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_uACC_TgtAxUpperComftBand;//0.7-->0.0 ���ƣ�ACC_TgtAxUpperComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
                VCAN_ALL_MRR_u8ACC_TgtAxLowerComftBand=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u8ACC_TgtAxLowerComftBand;//1.7-->1.0 ���ƣ�ACC_TgtAxLowerComftBand λ����8bit, logical min-max��0~3.2 physical min-max��0x000~0x40 ���ȣ�0.05 ƫ������0 ��λ��m_s2 
                VCAN_ALL_MRR_u8ACC_TgtAxUpperLim=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u8ACC_TgtAxUpperLim;//2.7-->2.0 ���ƣ�ACC_TgtAxUpperLim λ����8bit, logical min-max��0~12.7 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������0 ��λ��m_s3 
                VCAN_ALL_MRR_u8ACC_TgtAxLowerLim=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u8ACC_TgtAxLowerLim;//3.7-->3.0 ���ƣ�ACC_TgtAxLowerLim λ����8bit, logical min-max��-12.7~0 physical min-max��0x000~0x7F ���ȣ�0.1 ƫ������-127 ��λ��m_s3 
                Vc8Reserve_1_32_39=CAN_ALL_FRVar_MRR.B.c8Reserve_1_32_39;//4.7-->4.0
                VCAN_ALL_MRR_u8ACC_TgtAx=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u8ACC_TgtAx;//5.7-->6.5 ���ƣ�ACC_TgtAx λ����11bit, logical min-max��-5~7.75 physical min-max��0x000~0xFF ���ȣ�0.05 ƫ������-100 ��λ��m_s2 
                VCAN_ALL_MRR_u11Rolling_counter_0x238=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u11Rolling_counter_0x238;//6.3-->6.0 ���ƣ�Rolling_counter_0x238 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u4Checksum_0x238=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u4Checksum_0x238;//7.7-->7.0 ���ƣ�Checksum_0x238 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x238_FR+7] =Vu8_MRR_1_MRR_0x238_Data7Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x238_FR+6] =Vu8_MRR_1_MRR_0x238_Data6Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x238_FR+5] =Vu8_MRR_1_MRR_0x238_Data5Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x238_FR+4] =Vu8_MRR_1_MRR_0x238_Data4Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x238_FR+3] =Vu8_MRR_1_MRR_0x238_Data3Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x238_FR+2] =Vu8_MRR_1_MRR_0x238_Data2Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x238_FR+1] =Vu8_MRR_1_MRR_0x238_Data1Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x238_FR+0] =Vu8_MRR_1_MRR_0x238_Data0Bit.R;

                Vu8_MRR_1_MRR_0x238_Data7Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x238_FR + 7];
                Vu8_MRR_1_MRR_0x238_Data6Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x238_FR + 6];
                Vu8_MRR_1_MRR_0x238_Data5Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x238_FR + 5];
                Vu8_MRR_1_MRR_0x238_Data4Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x238_FR + 4];
                Vu8_MRR_1_MRR_0x238_Data3Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x238_FR + 3];
                Vu8_MRR_1_MRR_0x238_Data2Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x238_FR + 2];
                Vu8_MRR_1_MRR_0x238_Data1Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x238_FR + 1];
                Vu8_MRR_1_MRR_0x238_Data0Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x238_FR + 0];



//--Can_NR=2----MRR 2 the Data Frame ���ƣ�MRR_0x239  ID��0x569  ���ڣ�20ms  λ����8�ֽ�MRR-->

                if ( CAN1_ReceivedMessage [ALL_MRR_MRR_0x239_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_MRR_MRR_0x239_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_MRR.R[ 2*ALL_MRR_MRR_0x239_FR+0] = CAN_ALL_FRMes_MRR.R[ 2*ALL_MRR_MRR_0x239_FR+0]  ; 
                CAN_ALL_FRVar_MRR.R[ 2*ALL_MRR_MRR_0x239_FR+1] = CAN_ALL_FRMes_MRR.R[ 2*ALL_MRR_MRR_0x239_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_MRR_MRR_0x239_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_MRR_MRR_0x239_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_MRR_MRR_0x239_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_MRR_MRR_0x239_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_MRR = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_MRR.B.ALL_MRR_MRR_0x239 = 1 ;  //�������屨��CAN�������ź�
                exAEB_TgtAx.R= CAN_ALL_MRR_u4AEB_TgtAx_min;//3.7-->4.0 ���ƣ�AEB_TgtAx λ����16bit, logical min-max��-16~16 physical min-max��0x000~0x280 ���ȣ�0.05 ƫ������-320 ��λ��m_s2 
                CAN_ALL_FRVar_MRR.B.exAEB_TgtAx16High8=exAEB_TgtAx.B.exAEB_TgtAx16High8;
                CAN_ALL_FRVar_MRR.B.exAEB_TgtAx16Low8=exAEB_TgtAx.B.exAEB_TgtAx16Low8;
                CAN_ALL_FRVar_MRR.R[2*ALL_MRR_MRR_0x239_FR+0]=CAN_ALL_FRAMES_MRR.R[2*ALL_MRR_MRR_0x239_FR+0];
                CAN_ALL_FRVar_MRR.R[2*ALL_MRR_MRR_0x239_FR+1]=CAN_ALL_FRAMES_MRR.R[2*ALL_MRR_MRR_0x239_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_MRR_MRR_0x239_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_MRR_MRR_0x239_CH]  == 1 ) {


                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_uShutdownMode= CAN_ALL_MRR_uShutdownMode_min;//0.7-->0.6 3 "initial" 2 "reserved" 1 "fast off" 0 "soft off" ���ƣ�ShutdownMode λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u2ACC_State= CAN_ALL_MRR_u2ACC_State_min;//0.5-->0.3 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACC_State λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B.c1Reserve_2_2_2= CAN_ALL_MRR_c1Reserve_2_2_2_min;//0.2-->0.2
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u3ACC_BrakePreferred= CAN_ALL_MRR_u3ACC_BrakePreferred_min;//0.1-->0.1 1 "demand" 0 "no demand" ���ƣ�ACC_BrakePreferred λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1ACC_UpperComftBandReq= CAN_ALL_MRR_u1ACC_UpperComftBandReq_min;//0.0-->0.0 1 "demand" 0 "no demand" ���ƣ�ACC_UpperComftBandReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1ACC_DriveOff= CAN_ALL_MRR_u1ACC_DriveOff_min;//1.7-->1.7 1 "demand" 0 "no demand" ���ƣ�ACC_DriveOff λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1ACC_StandstillReq= CAN_ALL_MRR_u1ACC_StandstillReq_min;//1.6-->1.6 1 "demand" 0 "no demand" ���ƣ�ACC_StandstillReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1AEB_Req= CAN_ALL_MRR_u1AEB_Req_min;//1.5-->1.5 1 "demand" 0 "no demand" ���ƣ�AEB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1EBA_Req= CAN_ALL_MRR_u1EBA_Req_min;//1.4-->1.4 1 "demand" 0 "no demand" ���ƣ�EBA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B.c2Reserve_2_10_11= CAN_ALL_MRR_c2Reserve_2_10_11_min;//1.3-->1.2
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1ABA_Level= CAN_ALL_MRR_u1ABA_Level_min;//1.1-->1.0 3 "level 3" 2 "level 2" 1 "level 1" 0 "level 0" ���ƣ�ABA_Level λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u2ABA_Req= CAN_ALL_MRR_u2ABA_Req_min;//2.7-->2.7 1 "demand" 0 "no demand" ���ƣ�ABA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1AWB_Req= CAN_ALL_MRR_u1AWB_Req_min;//2.6-->2.6 1 "demand" 0 "no demand" ���ƣ�AWB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1ABP_Req= CAN_ALL_MRR_u1ABP_Req_min;//2.5-->2.5 1 "demand" 0 "no demand" ���ƣ�ABP_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B.c1Reserve_2_20_20= CAN_ALL_MRR_c1Reserve_2_20_20_min;//2.4-->2.4
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1AWB_Level= CAN_ALL_MRR_u1AWB_Level_min;//2.3-->2.0 4 "level 4" 3 "level 3" 2 "level 2" 1 "level 1" 0 "no level" ���ƣ�AWB_Level λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u16Rolling_counter_0x239= CAN_ALL_MRR_u16Rolling_counter_0x239_min;//6.3-->6.0 ���ƣ�Rolling_counter_0x239 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u4Checksum_0x239= CAN_ALL_MRR_u4Checksum_0x239_min;//7.7-->7.0 ���ƣ�Checksum_0x239 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_uShutdownMode=VCAN_ALL_MRR_uShutdownMode;//0.7-->0.6 3 "initial" 2 "reserved" 1 "fast off" 0 "soft off" ���ƣ�ShutdownMode λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u2ACC_State=VCAN_ALL_MRR_u2ACC_State;//0.5-->0.3 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACC_State λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.c1Reserve_2_2_2=Vc1Reserve_2_2_2;//0.2-->0.2
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3ACC_BrakePreferred=VCAN_ALL_MRR_u3ACC_BrakePreferred;//0.1-->0.1 1 "demand" 0 "no demand" ���ƣ�ACC_BrakePreferred λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ACC_UpperComftBandReq=VCAN_ALL_MRR_u1ACC_UpperComftBandReq;//0.0-->0.0 1 "demand" 0 "no demand" ���ƣ�ACC_UpperComftBandReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ACC_DriveOff=VCAN_ALL_MRR_u1ACC_DriveOff;//1.7-->1.7 1 "demand" 0 "no demand" ���ƣ�ACC_DriveOff λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ACC_StandstillReq=VCAN_ALL_MRR_u1ACC_StandstillReq;//1.6-->1.6 1 "demand" 0 "no demand" ���ƣ�ACC_StandstillReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1AEB_Req=VCAN_ALL_MRR_u1AEB_Req;//1.5-->1.5 1 "demand" 0 "no demand" ���ƣ�AEB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1EBA_Req=VCAN_ALL_MRR_u1EBA_Req;//1.4-->1.4 1 "demand" 0 "no demand" ���ƣ�EBA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.c2Reserve_2_10_11=Vc2Reserve_2_10_11;//1.3-->1.2
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ABA_Level=VCAN_ALL_MRR_u1ABA_Level;//1.1-->1.0 3 "level 3" 2 "level 2" 1 "level 1" 0 "level 0" ���ƣ�ABA_Level λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u2ABA_Req=VCAN_ALL_MRR_u2ABA_Req;//2.7-->2.7 1 "demand" 0 "no demand" ���ƣ�ABA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1AWB_Req=VCAN_ALL_MRR_u1AWB_Req;//2.6-->2.6 1 "demand" 0 "no demand" ���ƣ�AWB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ABP_Req=VCAN_ALL_MRR_u1ABP_Req;//2.5-->2.5 1 "demand" 0 "no demand" ���ƣ�ABP_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.c1Reserve_2_20_20=Vc1Reserve_2_20_20;//2.4-->2.4
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1AWB_Level=VCAN_ALL_MRR_u1AWB_Level;//2.3-->2.0 4 "level 4" 3 "level 3" 2 "level 2" 1 "level 1" 0 "no level" ���ƣ�AWB_Level λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.exAEB_TgtAx16High8=VexexAEB_TgtAx16High8;
                CAN_ALL_FRVar_MRR.B.exAEB_TgtAx16Low8=VexexAEB_TgtAx16Low8;
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u16Rolling_counter_0x239=VCAN_ALL_MRR_u16Rolling_counter_0x239;//6.3-->6.0 ���ƣ�Rolling_counter_0x239 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u4Checksum_0x239=VCAN_ALL_MRR_u4Checksum_0x239;//7.7-->7.0 ���ƣ�Checksum_0x239 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                VCAN_ALL_MRR_uShutdownMode=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_uShutdownMode;//0.7-->0.6 3 "initial" 2 "reserved" 1 "fast off" 0 "soft off" ���ƣ�ShutdownMode λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u2ACC_State=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u2ACC_State;//0.5-->0.3 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACC_State λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                Vc1Reserve_2_2_2=CAN_ALL_FRVar_MRR.B.c1Reserve_2_2_2;//0.2-->0.2
                VCAN_ALL_MRR_u3ACC_BrakePreferred=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3ACC_BrakePreferred;//0.1-->0.1 1 "demand" 0 "no demand" ���ƣ�ACC_BrakePreferred λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1ACC_UpperComftBandReq=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ACC_UpperComftBandReq;//0.0-->0.0 1 "demand" 0 "no demand" ���ƣ�ACC_UpperComftBandReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1ACC_DriveOff=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ACC_DriveOff;//1.7-->1.7 1 "demand" 0 "no demand" ���ƣ�ACC_DriveOff λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1ACC_StandstillReq=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ACC_StandstillReq;//1.6-->1.6 1 "demand" 0 "no demand" ���ƣ�ACC_StandstillReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1AEB_Req=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1AEB_Req;//1.5-->1.5 1 "demand" 0 "no demand" ���ƣ�AEB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1EBA_Req=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1EBA_Req;//1.4-->1.4 1 "demand" 0 "no demand" ���ƣ�EBA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                Vc2Reserve_2_10_11=CAN_ALL_FRVar_MRR.B.c2Reserve_2_10_11;//1.3-->1.2
                VCAN_ALL_MRR_u1ABA_Level=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ABA_Level;//1.1-->1.0 3 "level 3" 2 "level 2" 1 "level 1" 0 "level 0" ���ƣ�ABA_Level λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u2ABA_Req=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u2ABA_Req;//2.7-->2.7 1 "demand" 0 "no demand" ���ƣ�ABA_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1AWB_Req=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1AWB_Req;//2.6-->2.6 1 "demand" 0 "no demand" ���ƣ�AWB_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1ABP_Req=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ABP_Req;//2.5-->2.5 1 "demand" 0 "no demand" ���ƣ�ABP_Req λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                Vc1Reserve_2_20_20=CAN_ALL_FRVar_MRR.B.c1Reserve_2_20_20;//2.4-->2.4
                VCAN_ALL_MRR_u1AWB_Level=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1AWB_Level;//2.3-->2.0 4 "level 4" 3 "level 3" 2 "level 2" 1 "level 1" 0 "no level" ���ƣ�AWB_Level λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                VexexAEB_TgtAx16High8 = CAN_ALL_FRVar_MRR.B.exAEB_TgtAx16High8;
                VexexAEB_TgtAx16Low8= CAN_ALL_FRVar_MRR.B.exAEB_TgtAx16Low8;
                VCAN_ALL_MRR_u16Rolling_counter_0x239=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u16Rolling_counter_0x239;//6.3-->6.0 ���ƣ�Rolling_counter_0x239 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u4Checksum_0x239=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u4Checksum_0x239;//7.7-->7.0 ���ƣ�Checksum_0x239 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x239_FR+7] =Vu8_MRR_2_MRR_0x239_Data7Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x239_FR+6] =Vu8_MRR_2_MRR_0x239_Data6Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x239_FR+5] =Vu8_MRR_2_MRR_0x239_Data5Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x239_FR+4] =Vu8_MRR_2_MRR_0x239_Data4Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x239_FR+3] =Vu8_MRR_2_MRR_0x239_Data3Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x239_FR+2] =Vu8_MRR_2_MRR_0x239_Data2Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x239_FR+1] =Vu8_MRR_2_MRR_0x239_Data1Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x239_FR+0] =Vu8_MRR_2_MRR_0x239_Data0Bit.R;

                Vu8_MRR_2_MRR_0x239_Data7Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x239_FR + 7];
                Vu8_MRR_2_MRR_0x239_Data6Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x239_FR + 6];
                Vu8_MRR_2_MRR_0x239_Data5Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x239_FR + 5];
                Vu8_MRR_2_MRR_0x239_Data4Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x239_FR + 4];
                Vu8_MRR_2_MRR_0x239_Data3Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x239_FR + 3];
                Vu8_MRR_2_MRR_0x239_Data2Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x239_FR + 2];
                Vu8_MRR_2_MRR_0x239_Data1Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x239_FR + 1];
                Vu8_MRR_2_MRR_0x239_Data0Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x239_FR + 0];



//--Can_NR=3----MRR 3 the Data Frame ���ƣ�MRR_0x246  ID��0x582  ���ڣ�20ms  λ����8�ֽ�MRR-->

                if ( CAN1_ReceivedMessage [ALL_MRR_MRR_0x246_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_MRR_MRR_0x246_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_MRR.R[ 2*ALL_MRR_MRR_0x246_FR+0] = CAN_ALL_FRMes_MRR.R[ 2*ALL_MRR_MRR_0x246_FR+0]  ; 
                CAN_ALL_FRVar_MRR.R[ 2*ALL_MRR_MRR_0x246_FR+1] = CAN_ALL_FRMes_MRR.R[ 2*ALL_MRR_MRR_0x246_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_MRR_MRR_0x246_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_MRR_MRR_0x246_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_MRR_MRR_0x246_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_MRR_MRR_0x246_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_MRR = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_MRR.B.ALL_MRR_MRR_0x246 = 1 ;  //�������屨��CAN�������ź�
                CAN_ALL_FRVar_MRR.R[2*ALL_MRR_MRR_0x246_FR+0]=CAN_ALL_FRAMES_MRR.R[2*ALL_MRR_MRR_0x246_FR+0];
                CAN_ALL_FRVar_MRR.R[2*ALL_MRR_MRR_0x246_FR+1]=CAN_ALL_FRAMES_MRR.R[2*ALL_MRR_MRR_0x246_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_MRR_MRR_0x246_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_MRR_MRR_0x246_CH]  == 1 ) {


                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_uvSetDis= CAN_ALL_MRR_uvSetDis_min;//0.7-->1.7 511 "Invalid" ���ƣ�vSetDis λ����9bit, logical min-max��0~255.5 physical min-max��0x000~0x1FF ���ȣ�0.5 ƫ������0 ��λ��kph 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u9dxTarObj= CAN_ALL_MRR_u9dxTarObj_min;//1.6-->1.4 7 "Distance_7" 6 "Distance_6" 5 "Distance_5" 4 "Distance_4" 3 "Distance_3" 2 "Distance_2" 1 "Distance_1" 0 "Distance_0" ���ƣ�dxTarObj λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u3TauGapSet= CAN_ALL_MRR_u3TauGapSet_min;//1.3-->1.1 7 "tauGap_7" 6 "tauGap_6" 5 "tauGap_5" 4 "tauGap_4" 3 "tauGap_3" 2 "tauGap_2" 1 "tauGap_1" 0 "tauGap_0" ���ƣ�TauGapSet λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u3ObjValid= CAN_ALL_MRR_u3ObjValid_min;//1.0-->1.0 1 "target object detected" 0 "no object" ���ƣ�ObjValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1MRR_FCW_Sensitive= CAN_ALL_MRR_u1MRR_FCW_Sensitive_min;//2.7-->2.6 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" ���ƣ�MRR_FCW_Sensitive λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B.c1Reserve_3_21_21= CAN_ALL_MRR_c1Reserve_3_21_21_min;//2.5-->2.5
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u2TakeOverReq= CAN_ALL_MRR_u2TakeOverReq_min;//2.4-->2.4 1 "valid TakeOver request" 0 "no TakeOver request" ���ƣ�TakeOverReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1ACCFailInfo= CAN_ALL_MRR_u1ACCFailInfo_min;//2.3-->2.3 1 "error" 0 "no error" ���ƣ�ACCFailInfo λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1ACCHMI_Mode= CAN_ALL_MRR_u1ACCHMI_Mode_min;//2.2-->2.0 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACCHMI_Mode λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u3FCW_latentWarning= CAN_ALL_MRR_u3FCW_latentWarning_min;//3.7-->3.7 1 "warning" 0 "no warning" ���ƣ�FCW_latentWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1FCW_preWarning= CAN_ALL_MRR_u1FCW_preWarning_min;//3.6-->3.6 1 "warning" 0 "no warning" ���ƣ�FCW_preWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1ACC_Startstop_infor= CAN_ALL_MRR_u1ACC_Startstop_infor_min;//3.5-->3.4 3 "ACC_SystemFailure" 2 "ACC_StartRequest" 1 "ACC_StopForbidden" 0 "ACC_StopAllowed" ���ƣ�ACC_Startstop_infor λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u2AEB_STATE= CAN_ALL_MRR_u2AEB_STATE_min;//3.3-->3.1 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�AEB_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B.c1Reserve_3_24_24= CAN_ALL_MRR_c1Reserve_3_24_24_min;//3.0-->3.0
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u3FCW_STATE= CAN_ALL_MRR_u3FCW_STATE_min;//4.7-->4.5 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�FCW_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B.c5Reserve_3_32_36= CAN_ALL_MRR_c5Reserve_3_32_36_min;//4.4-->4.0
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u3Obj_Speed= CAN_ALL_MRR_u3Obj_Speed_min;//5.7-->5.0 ���ƣ�Obj_Speed λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u8Textinfo= CAN_ALL_MRR_u8Textinfo_min;//6.7-->6.4 15 "Uncalibrated" 14 "ESP error" 13 "Override" 12 "Door open" 11 "Speed over 150kph" 10 "ESP off" 9 "Seatbelt unbuckled" 8 "No forward gear" 7 "EPB activate" 6 "ACC and PEBS error" 5 "MRR blindness" 4 "ACC Active" 3 "ACC is cancelled" 2 "ACC is switched off" 1 "ACC is switched on" 0 "No display" ���ƣ�Textinfo λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u4Rolling_counter_0x246= CAN_ALL_MRR_u4Rolling_counter_0x246_min;//6.3-->6.0 ���ƣ�Rolling_counter_0x246 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u4Checksum_0x246= CAN_ALL_MRR_u4Checksum_0x246_min;//7.7-->7.0 ���ƣ�Checksum_0x246 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_uvSetDis=VCAN_ALL_MRR_uvSetDis;//0.7-->1.7 511 "Invalid" ���ƣ�vSetDis λ����9bit, logical min-max��0~255.5 physical min-max��0x000~0x1FF ���ȣ�0.5 ƫ������0 ��λ��kph 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u9dxTarObj=VCAN_ALL_MRR_u9dxTarObj;//1.6-->1.4 7 "Distance_7" 6 "Distance_6" 5 "Distance_5" 4 "Distance_4" 3 "Distance_3" 2 "Distance_2" 1 "Distance_1" 0 "Distance_0" ���ƣ�dxTarObj λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3TauGapSet=VCAN_ALL_MRR_u3TauGapSet;//1.3-->1.1 7 "tauGap_7" 6 "tauGap_6" 5 "tauGap_5" 4 "tauGap_4" 3 "tauGap_3" 2 "tauGap_2" 1 "tauGap_1" 0 "tauGap_0" ���ƣ�TauGapSet λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3ObjValid=VCAN_ALL_MRR_u3ObjValid;//1.0-->1.0 1 "target object detected" 0 "no object" ���ƣ�ObjValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1MRR_FCW_Sensitive=VCAN_ALL_MRR_u1MRR_FCW_Sensitive;//2.7-->2.6 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" ���ƣ�MRR_FCW_Sensitive λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.c1Reserve_3_21_21=Vc1Reserve_3_21_21;//2.5-->2.5
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u2TakeOverReq=VCAN_ALL_MRR_u2TakeOverReq;//2.4-->2.4 1 "valid TakeOver request" 0 "no TakeOver request" ���ƣ�TakeOverReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ACCFailInfo=VCAN_ALL_MRR_u1ACCFailInfo;//2.3-->2.3 1 "error" 0 "no error" ���ƣ�ACCFailInfo λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ACCHMI_Mode=VCAN_ALL_MRR_u1ACCHMI_Mode;//2.2-->2.0 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACCHMI_Mode λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3FCW_latentWarning=VCAN_ALL_MRR_u3FCW_latentWarning;//3.7-->3.7 1 "warning" 0 "no warning" ���ƣ�FCW_latentWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1FCW_preWarning=VCAN_ALL_MRR_u1FCW_preWarning;//3.6-->3.6 1 "warning" 0 "no warning" ���ƣ�FCW_preWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ACC_Startstop_infor=VCAN_ALL_MRR_u1ACC_Startstop_infor;//3.5-->3.4 3 "ACC_SystemFailure" 2 "ACC_StartRequest" 1 "ACC_StopForbidden" 0 "ACC_StopAllowed" ���ƣ�ACC_Startstop_infor λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u2AEB_STATE=VCAN_ALL_MRR_u2AEB_STATE;//3.3-->3.1 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�AEB_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.c1Reserve_3_24_24=Vc1Reserve_3_24_24;//3.0-->3.0
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3FCW_STATE=VCAN_ALL_MRR_u3FCW_STATE;//4.7-->4.5 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�FCW_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.c5Reserve_3_32_36=Vc5Reserve_3_32_36;//4.4-->4.0
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3Obj_Speed=VCAN_ALL_MRR_u3Obj_Speed;//5.7-->5.0 ���ƣ�Obj_Speed λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u8Textinfo=VCAN_ALL_MRR_u8Textinfo;//6.7-->6.4 15 "Uncalibrated" 14 "ESP error" 13 "Override" 12 "Door open" 11 "Speed over 150kph" 10 "ESP off" 9 "Seatbelt unbuckled" 8 "No forward gear" 7 "EPB activate" 6 "ACC and PEBS error" 5 "MRR blindness" 4 "ACC Active" 3 "ACC is cancelled" 2 "ACC is switched off" 1 "ACC is switched on" 0 "No display" ���ƣ�Textinfo λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u4Rolling_counter_0x246=VCAN_ALL_MRR_u4Rolling_counter_0x246;//6.3-->6.0 ���ƣ�Rolling_counter_0x246 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u4Checksum_0x246=VCAN_ALL_MRR_u4Checksum_0x246;//7.7-->7.0 ���ƣ�Checksum_0x246 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                VCAN_ALL_MRR_uvSetDis=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_uvSetDis;//0.7-->1.7 511 "Invalid" ���ƣ�vSetDis λ����9bit, logical min-max��0~255.5 physical min-max��0x000~0x1FF ���ȣ�0.5 ƫ������0 ��λ��kph 
                VCAN_ALL_MRR_u9dxTarObj=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u9dxTarObj;//1.6-->1.4 7 "Distance_7" 6 "Distance_6" 5 "Distance_5" 4 "Distance_4" 3 "Distance_3" 2 "Distance_2" 1 "Distance_1" 0 "Distance_0" ���ƣ�dxTarObj λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u3TauGapSet=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3TauGapSet;//1.3-->1.1 7 "tauGap_7" 6 "tauGap_6" 5 "tauGap_5" 4 "tauGap_4" 3 "tauGap_3" 2 "tauGap_2" 1 "tauGap_1" 0 "tauGap_0" ���ƣ�TauGapSet λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u3ObjValid=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3ObjValid;//1.0-->1.0 1 "target object detected" 0 "no object" ���ƣ�ObjValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1MRR_FCW_Sensitive=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1MRR_FCW_Sensitive;//2.7-->2.6 3 "level3 High sensitive" 2 "level2 Normal" 1 "level1 Low sensitive" 0 "Unavailable" ���ƣ�MRR_FCW_Sensitive λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                Vc1Reserve_3_21_21=CAN_ALL_FRVar_MRR.B.c1Reserve_3_21_21;//2.5-->2.5
                VCAN_ALL_MRR_u2TakeOverReq=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u2TakeOverReq;//2.4-->2.4 1 "valid TakeOver request" 0 "no TakeOver request" ���ƣ�TakeOverReq λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1ACCFailInfo=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ACCFailInfo;//2.3-->2.3 1 "error" 0 "no error" ���ƣ�ACCFailInfo λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1ACCHMI_Mode=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ACCHMI_Mode;//2.2-->2.0 7 "Failure mode" 6 "Standstill" 5 "Override" 4 "Brake_Only mode" 3 "Active_Control mode" 2 "Stand_By mode" 1 "Passive mode" 0 "OFF mode" ���ƣ�ACCHMI_Mode λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u3FCW_latentWarning=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3FCW_latentWarning;//3.7-->3.7 1 "warning" 0 "no warning" ���ƣ�FCW_latentWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1FCW_preWarning=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1FCW_preWarning;//3.6-->3.6 1 "warning" 0 "no warning" ���ƣ�FCW_preWarning λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1ACC_Startstop_infor=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1ACC_Startstop_infor;//3.5-->3.4 3 "ACC_SystemFailure" 2 "ACC_StartRequest" 1 "ACC_StopForbidden" 0 "ACC_StopAllowed" ���ƣ�ACC_Startstop_infor λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u2AEB_STATE=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u2AEB_STATE;//3.3-->3.1 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�AEB_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                Vc1Reserve_3_24_24=CAN_ALL_FRVar_MRR.B.c1Reserve_3_24_24;//3.0-->3.0
                VCAN_ALL_MRR_u3FCW_STATE=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3FCW_STATE;//4.7-->4.5 5 "Reserved" 4 "Active" 3 "Active_no intervention" 2 "Standby" 1 "Off" 0 "Unavailable" ���ƣ�FCW_STATE λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                Vc5Reserve_3_32_36=CAN_ALL_FRVar_MRR.B.c5Reserve_3_32_36;//4.4-->4.0
                VCAN_ALL_MRR_u3Obj_Speed=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3Obj_Speed;//5.7-->5.0 ���ƣ�Obj_Speed λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u8Textinfo=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u8Textinfo;//6.7-->6.4 15 "Uncalibrated" 14 "ESP error" 13 "Override" 12 "Door open" 11 "Speed over 150kph" 10 "ESP off" 9 "Seatbelt unbuckled" 8 "No forward gear" 7 "EPB activate" 6 "ACC and PEBS error" 5 "MRR blindness" 4 "ACC Active" 3 "ACC is cancelled" 2 "ACC is switched off" 1 "ACC is switched on" 0 "No display" ���ƣ�Textinfo λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u4Rolling_counter_0x246=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u4Rolling_counter_0x246;//6.3-->6.0 ���ƣ�Rolling_counter_0x246 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u4Checksum_0x246=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u4Checksum_0x246;//7.7-->7.0 ���ƣ�Checksum_0x246 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x246_FR+7] =Vu8_MRR_3_MRR_0x246_Data7Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x246_FR+6] =Vu8_MRR_3_MRR_0x246_Data6Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x246_FR+5] =Vu8_MRR_3_MRR_0x246_Data5Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x246_FR+4] =Vu8_MRR_3_MRR_0x246_Data4Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x246_FR+3] =Vu8_MRR_3_MRR_0x246_Data3Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x246_FR+2] =Vu8_MRR_3_MRR_0x246_Data2Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x246_FR+1] =Vu8_MRR_3_MRR_0x246_Data1Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_0x246_FR+0] =Vu8_MRR_3_MRR_0x246_Data0Bit.R;

                Vu8_MRR_3_MRR_0x246_Data7Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x246_FR + 7];
                Vu8_MRR_3_MRR_0x246_Data6Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x246_FR + 6];
                Vu8_MRR_3_MRR_0x246_Data5Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x246_FR + 5];
                Vu8_MRR_3_MRR_0x246_Data4Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x246_FR + 4];
                Vu8_MRR_3_MRR_0x246_Data3Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x246_FR + 3];
                Vu8_MRR_3_MRR_0x246_Data2Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x246_FR + 2];
                Vu8_MRR_3_MRR_0x246_Data1Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x246_FR + 1];
                Vu8_MRR_3_MRR_0x246_Data0Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_0x246_FR + 0];



//--Can_NR=4----MRR 4 the Data Frame ���ƣ�MRR_FrObj_0x279  ID��0x633  ���ڣ�100ms  λ����8�ֽ�MRR-->

                if ( CAN1_ReceivedMessage [ALL_MRR_MRR_FrObj_0x279_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_MRR_MRR_FrObj_0x279_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_MRR.R[ 2*ALL_MRR_MRR_FrObj_0x279_FR+0] = CAN_ALL_FRMes_MRR.R[ 2*ALL_MRR_MRR_FrObj_0x279_FR+0]  ; 
                CAN_ALL_FRVar_MRR.R[ 2*ALL_MRR_MRR_FrObj_0x279_FR+1] = CAN_ALL_FRMes_MRR.R[ 2*ALL_MRR_MRR_FrObj_0x279_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_MRR_MRR_FrObj_0x279_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_MRR_MRR_FrObj_0x279_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_MRR_MRR_FrObj_0x279_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_MRR_MRR_FrObj_0x279_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_MRR = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_MRR.B.ALL_MRR_MRR_FrObj_0x279 = 1 ;  //�������屨��CAN�������ź�
                exMRR_FF_Object_dx.R= CAN_ALL_MRR_u3MRR_FF_Object_dx_min;//3.7-->4.4 ���ƣ�MRR_FF_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.exMRR_FF_Object_dx12High4=exMRR_FF_Object_dx.B.exMRR_FF_Object_dx12High4;
                CAN_ALL_FRVar_MRR.B.exMRR_FF_Object_dx12Low8=exMRR_FF_Object_dx.B.exMRR_FF_Object_dx12Low8;
                CAN_ALL_FRVar_MRR.R[2*ALL_MRR_MRR_FrObj_0x279_FR+0]=CAN_ALL_FRAMES_MRR.R[2*ALL_MRR_MRR_FrObj_0x279_FR+0];
                CAN_ALL_FRVar_MRR.R[2*ALL_MRR_MRR_FrObj_0x279_FR+1]=CAN_ALL_FRAMES_MRR.R[2*ALL_MRR_MRR_FrObj_0x279_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_MRR_MRR_FrObj_0x279_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_MRR_MRR_FrObj_0x279_CH]  == 1 ) {


                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_uMRR_F_Object_dx= CAN_ALL_MRR_uMRR_F_Object_dx_min;//0.7-->1.4 ���ƣ�MRR_F_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u12MRR_F_Object_dy= CAN_ALL_MRR_u12MRR_F_Object_dy_min;//1.3-->2.3 ���ƣ�MRR_F_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u9MRR_F_Obj_0x_class= CAN_ALL_MRR_u9MRR_F_Obj_0x_class_min;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_F_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u12MRR_FF_Object_dy= CAN_ALL_MRR_u12MRR_FF_Object_dy_min;//4.3-->5.3 ���ƣ�MRR_FF_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u9MRR_FF_Obj_0x_class= CAN_ALL_MRR_u9MRR_FF_Obj_0x_class_min;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_FF_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u3MRR_PedDetection= CAN_ALL_MRR_u3MRR_PedDetection_min;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_PedDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1MRR_FFTargrtDetection= CAN_ALL_MRR_u1MRR_FFTargrtDetection_min;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_FFTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B.c14Reserve_4_56_53= CAN_ALL_MRR_c14Reserve_4_56_53_min;//6.5-->7.0

                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_uMRR_F_Object_dx=VCAN_ALL_MRR_uMRR_F_Object_dx;//0.7-->1.4 ���ƣ�MRR_F_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u12MRR_F_Object_dy=VCAN_ALL_MRR_u12MRR_F_Object_dy;//1.3-->2.3 ���ƣ�MRR_F_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u9MRR_F_Obj_0x_class=VCAN_ALL_MRR_u9MRR_F_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_F_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.exMRR_FF_Object_dx12High4=VexexMRR_FF_Object_dx12High4;
                CAN_ALL_FRVar_MRR.B.exMRR_FF_Object_dx12Low8=VexexMRR_FF_Object_dx12Low8;
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u12MRR_FF_Object_dy=VCAN_ALL_MRR_u12MRR_FF_Object_dy;//4.3-->5.3 ���ƣ�MRR_FF_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u9MRR_FF_Obj_0x_class=VCAN_ALL_MRR_u9MRR_FF_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_FF_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3MRR_PedDetection=VCAN_ALL_MRR_u3MRR_PedDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_PedDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1MRR_FFTargrtDetection=VCAN_ALL_MRR_u1MRR_FFTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_FFTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.c14Reserve_4_56_53=Vc14Reserve_4_56_53;//6.5-->7.0

                VCAN_ALL_MRR_uMRR_F_Object_dx=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_uMRR_F_Object_dx;//0.7-->1.4 ���ƣ�MRR_F_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u12MRR_F_Object_dy=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u12MRR_F_Object_dy;//1.3-->2.3 ���ƣ�MRR_F_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
                VCAN_ALL_MRR_u9MRR_F_Obj_0x_class=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u9MRR_F_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_F_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                VexexMRR_FF_Object_dx12High4 = CAN_ALL_FRVar_MRR.B.exMRR_FF_Object_dx12High4;
                VexexMRR_FF_Object_dx12Low8= CAN_ALL_FRVar_MRR.B.exMRR_FF_Object_dx12Low8;
                VCAN_ALL_MRR_u12MRR_FF_Object_dy=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u12MRR_FF_Object_dy;//4.3-->5.3 ���ƣ�MRR_FF_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
                VCAN_ALL_MRR_u9MRR_FF_Obj_0x_class=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u9MRR_FF_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_FF_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u3MRR_PedDetection=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3MRR_PedDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_PedDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1MRR_FFTargrtDetection=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1MRR_FFTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_FFTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                Vc14Reserve_4_56_53=CAN_ALL_FRVar_MRR.B.c14Reserve_4_56_53;//6.5-->7.0

                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FrObj_0x279_FR+7] =Vu8_MRR_4_MRR_FrObj_0x279_Data7Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FrObj_0x279_FR+6] =Vu8_MRR_4_MRR_FrObj_0x279_Data6Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FrObj_0x279_FR+5] =Vu8_MRR_4_MRR_FrObj_0x279_Data5Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FrObj_0x279_FR+4] =Vu8_MRR_4_MRR_FrObj_0x279_Data4Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FrObj_0x279_FR+3] =Vu8_MRR_4_MRR_FrObj_0x279_Data3Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FrObj_0x279_FR+2] =Vu8_MRR_4_MRR_FrObj_0x279_Data2Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FrObj_0x279_FR+1] =Vu8_MRR_4_MRR_FrObj_0x279_Data1Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FrObj_0x279_FR+0] =Vu8_MRR_4_MRR_FrObj_0x279_Data0Bit.R;

                Vu8_MRR_4_MRR_FrObj_0x279_Data7Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FrObj_0x279_FR + 7];
                Vu8_MRR_4_MRR_FrObj_0x279_Data6Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FrObj_0x279_FR + 6];
                Vu8_MRR_4_MRR_FrObj_0x279_Data5Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FrObj_0x279_FR + 5];
                Vu8_MRR_4_MRR_FrObj_0x279_Data4Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FrObj_0x279_FR + 4];
                Vu8_MRR_4_MRR_FrObj_0x279_Data3Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FrObj_0x279_FR + 3];
                Vu8_MRR_4_MRR_FrObj_0x279_Data2Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FrObj_0x279_FR + 2];
                Vu8_MRR_4_MRR_FrObj_0x279_Data1Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FrObj_0x279_FR + 1];
                Vu8_MRR_4_MRR_FrObj_0x279_Data0Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FrObj_0x279_FR + 0];



//--Can_NR=5----MRR 5 the Data Frame ���ƣ�MRR_FRObj_0x480  ID��0x1152  ���ڣ�100ms  λ����8�ֽ�MRR-->

                if ( CAN1_ReceivedMessage [ALL_MRR_MRR_FRObj_0x480_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_MRR_MRR_FRObj_0x480_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_MRR.R[ 2*ALL_MRR_MRR_FRObj_0x480_FR+0] = CAN_ALL_FRMes_MRR.R[ 2*ALL_MRR_MRR_FRObj_0x480_FR+0]  ; 
                CAN_ALL_FRVar_MRR.R[ 2*ALL_MRR_MRR_FRObj_0x480_FR+1] = CAN_ALL_FRMes_MRR.R[ 2*ALL_MRR_MRR_FRObj_0x480_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_MRR_MRR_FRObj_0x480_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_MRR_MRR_FRObj_0x480_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_MRR_MRR_FRObj_0x480_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_MRR_MRR_FRObj_0x480_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_MRR = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_MRR.B.ALL_MRR_MRR_FRObj_0x480 = 1 ;  //�������屨��CAN�������ź�
                exMRR_R_Object_dx.R= CAN_ALL_MRR_u3MRR_R_Object_dx_min;//3.7-->4.4 ���ƣ�MRR_R_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.exMRR_R_Object_dx12High4=exMRR_R_Object_dx.B.exMRR_R_Object_dx12High4;
                CAN_ALL_FRVar_MRR.B.exMRR_R_Object_dx12Low8=exMRR_R_Object_dx.B.exMRR_R_Object_dx12Low8;
                CAN_ALL_FRVar_MRR.R[2*ALL_MRR_MRR_FRObj_0x480_FR+0]=CAN_ALL_FRAMES_MRR.R[2*ALL_MRR_MRR_FRObj_0x480_FR+0];
                CAN_ALL_FRVar_MRR.R[2*ALL_MRR_MRR_FRObj_0x480_FR+1]=CAN_ALL_FRAMES_MRR.R[2*ALL_MRR_MRR_FRObj_0x480_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_MRR_MRR_FRObj_0x480_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_MRR_MRR_FRObj_0x480_CH]  == 1 ) {


                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_uMRR_L_Object_dx= CAN_ALL_MRR_uMRR_L_Object_dx_min;//0.7-->1.4 ���ƣ�MRR_L_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u12MRR_L_Object_dy= CAN_ALL_MRR_u12MRR_L_Object_dy_min;//1.3-->2.3 ���ƣ�MRR_L_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u9MRR_L_Obj_0x_class= CAN_ALL_MRR_u9MRR_L_Obj_0x_class_min;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_L_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u12MRR_R_Object_dy= CAN_ALL_MRR_u12MRR_R_Object_dy_min;//4.3-->5.3 ���ƣ�MRR_R_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u9MRR_R_Obj_0x_class= CAN_ALL_MRR_u9MRR_R_Obj_0x_class_min;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_R_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u3MRR_RightTargrtDetection= CAN_ALL_MRR_u3MRR_RightTargrtDetection_min;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_RightTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B. CAN_ALL_MRR_u1MRR_LeftTargrtDetection= CAN_ALL_MRR_u1MRR_LeftTargrtDetection_min;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_LeftTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_MRR.B.c14Reserve_5_56_53= CAN_ALL_MRR_c14Reserve_5_56_53_min;//6.5-->7.0

                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_uMRR_L_Object_dx=VCAN_ALL_MRR_uMRR_L_Object_dx;//0.7-->1.4 ���ƣ�MRR_L_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u12MRR_L_Object_dy=VCAN_ALL_MRR_u12MRR_L_Object_dy;//1.3-->2.3 ���ƣ�MRR_L_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u9MRR_L_Obj_0x_class=VCAN_ALL_MRR_u9MRR_L_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_L_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.exMRR_R_Object_dx12High4=VexexMRR_R_Object_dx12High4;
                CAN_ALL_FRVar_MRR.B.exMRR_R_Object_dx12Low8=VexexMRR_R_Object_dx12Low8;
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u12MRR_R_Object_dy=VCAN_ALL_MRR_u12MRR_R_Object_dy;//4.3-->5.3 ���ƣ�MRR_R_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u9MRR_R_Obj_0x_class=VCAN_ALL_MRR_u9MRR_R_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_R_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3MRR_RightTargrtDetection=VCAN_ALL_MRR_u3MRR_RightTargrtDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_RightTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1MRR_LeftTargrtDetection=VCAN_ALL_MRR_u1MRR_LeftTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_LeftTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.c14Reserve_5_56_53=Vc14Reserve_5_56_53;//6.5-->7.0

                VCAN_ALL_MRR_uMRR_L_Object_dx=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_uMRR_L_Object_dx;//0.7-->1.4 ���ƣ�MRR_L_Object_dx λ����12bit, logical min-max��0~255.875 physical min-max��0x000~0xFFE ���ȣ�0.0625 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u12MRR_L_Object_dy=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u12MRR_L_Object_dy;//1.3-->2.3 ���ƣ�MRR_L_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
                VCAN_ALL_MRR_u9MRR_L_Obj_0x_class=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u9MRR_L_Obj_0x_class;//2.2-->2.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_L_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                VexexMRR_R_Object_dx12High4 = CAN_ALL_FRVar_MRR.B.exMRR_R_Object_dx12High4;
                VexexMRR_R_Object_dx12Low8= CAN_ALL_FRVar_MRR.B.exMRR_R_Object_dx12Low8;
                VCAN_ALL_MRR_u12MRR_R_Object_dy=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u12MRR_R_Object_dy;//4.3-->5.3 ���ƣ�MRR_R_Object_dy λ����9bit, logical min-max��-15~15 physical min-max��0x000~0x1E0 ���ȣ�0.0625 ƫ������-240 ��λ�� 
                VCAN_ALL_MRR_u9MRR_R_Obj_0x_class=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u9MRR_R_Obj_0x_class;//5.2-->5.0 3 "Two_wheeler" 2 "Truck" 1 "Car" 0 "Unknown" ���ƣ�MRR_R_Obj_0x_class λ����3bit, logical min-max��0~7 physical min-max��0x000~0x7 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u3MRR_RightTargrtDetection=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u3MRR_RightTargrtDetection;//6.7-->6.7 1 "dectected" 0 "not dectected" ���ƣ�MRR_RightTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_MRR_u1MRR_LeftTargrtDetection=CAN_ALL_FRVar_MRR.B. CAN_ALL_MRR_u1MRR_LeftTargrtDetection;//6.6-->6.6 1 "dectected" 0 "not dectected" ���ƣ�MRR_LeftTargrtDetection λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                Vc14Reserve_5_56_53=CAN_ALL_FRVar_MRR.B.c14Reserve_5_56_53;//6.5-->7.0

                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FRObj_0x480_FR+7] =Vu8_MRR_5_MRR_FRObj_0x480_Data7Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FRObj_0x480_FR+6] =Vu8_MRR_5_MRR_FRObj_0x480_Data6Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FRObj_0x480_FR+5] =Vu8_MRR_5_MRR_FRObj_0x480_Data5Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FRObj_0x480_FR+4] =Vu8_MRR_5_MRR_FRObj_0x480_Data4Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FRObj_0x480_FR+3] =Vu8_MRR_5_MRR_FRObj_0x480_Data3Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FRObj_0x480_FR+2] =Vu8_MRR_5_MRR_FRObj_0x480_Data2Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FRObj_0x480_FR+1] =Vu8_MRR_5_MRR_FRObj_0x480_Data1Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_FRObj_0x480_FR+0] =Vu8_MRR_5_MRR_FRObj_0x480_Data0Bit.R;

                Vu8_MRR_5_MRR_FRObj_0x480_Data7Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FRObj_0x480_FR + 7];
                Vu8_MRR_5_MRR_FRObj_0x480_Data6Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FRObj_0x480_FR + 6];
                Vu8_MRR_5_MRR_FRObj_0x480_Data5Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FRObj_0x480_FR + 5];
                Vu8_MRR_5_MRR_FRObj_0x480_Data4Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FRObj_0x480_FR + 4];
                Vu8_MRR_5_MRR_FRObj_0x480_Data3Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FRObj_0x480_FR + 3];
                Vu8_MRR_5_MRR_FRObj_0x480_Data2Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FRObj_0x480_FR + 2];
                Vu8_MRR_5_MRR_FRObj_0x480_Data1Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FRObj_0x480_FR + 1];
                Vu8_MRR_5_MRR_FRObj_0x480_Data0Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_FRObj_0x480_FR + 0];



//--Can_NR=6----MRR 6 the Data Frame ���ƣ�MRR_DiagResp  ID��0x1882  ���ڣ�0ms  λ����8�ֽ�MRR-->

                if ( CAN1_ReceivedMessage [ALL_MRR_MRR_DiagResp_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_MRR_MRR_DiagResp_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_MRR.R[ 2*ALL_MRR_MRR_DiagResp_FR+0] = CAN_ALL_FRMes_MRR.R[ 2*ALL_MRR_MRR_DiagResp_FR+0]  ; 
                CAN_ALL_FRVar_MRR.R[ 2*ALL_MRR_MRR_DiagResp_FR+1] = CAN_ALL_FRMes_MRR.R[ 2*ALL_MRR_MRR_DiagResp_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_MRR_MRR_DiagResp_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_MRR_MRR_DiagResp_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_MRR_MRR_DiagResp_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_MRR_MRR_DiagResp_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_MRR = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_MRR.B.ALL_MRR_MRR_DiagResp = 1 ;  //�������屨��CAN�������ź�
                exDiagRespFromMRR.R= CAN_ALL_MRR_uDiagRespFromMRR_min;//0.7-->7.0 ���ƣ�DiagRespFromMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_MRR.B.exDiagRespFromMRR64High32=exDiagRespFromMRR.B.exDiagRespFromMRR64High32;
                CAN_ALL_FRVar_MRR.B.exDiagRespFromMRR64Low32=exDiagRespFromMRR.B.exDiagRespFromMRR64Low32;
                CAN_ALL_FRVar_MRR.R[2*ALL_MRR_MRR_DiagResp_FR+0]=CAN_ALL_FRAMES_MRR.R[2*ALL_MRR_MRR_DiagResp_FR+0];
                CAN_ALL_FRVar_MRR.R[2*ALL_MRR_MRR_DiagResp_FR+1]=CAN_ALL_FRAMES_MRR.R[2*ALL_MRR_MRR_DiagResp_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_MRR_MRR_DiagResp_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_MRR_MRR_DiagResp_CH]  == 1 ) {



                CAN_ALL_FRVar_MRR.B.exDiagRespFromMRR64High32=VexexDiagRespFromMRR64High32;
                CAN_ALL_FRVar_MRR.B.exDiagRespFromMRR64Low32=VexexDiagRespFromMRR64Low32;

                VexexDiagRespFromMRR64High32 = CAN_ALL_FRVar_MRR.B.exDiagRespFromMRR64High32;
                VexexDiagRespFromMRR64Low32= CAN_ALL_FRVar_MRR.B.exDiagRespFromMRR64Low32;

                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_DiagResp_FR+7] =Vu8_MRR_6_MRR_DiagResp_Data7Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_DiagResp_FR+6] =Vu8_MRR_6_MRR_DiagResp_Data6Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_DiagResp_FR+5] =Vu8_MRR_6_MRR_DiagResp_Data5Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_DiagResp_FR+4] =Vu8_MRR_6_MRR_DiagResp_Data4Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_DiagResp_FR+3] =Vu8_MRR_6_MRR_DiagResp_Data3Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_DiagResp_FR+2] =Vu8_MRR_6_MRR_DiagResp_Data2Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_DiagResp_FR+1] =Vu8_MRR_6_MRR_DiagResp_Data1Bit.R;
                CAN_ALL_FRVar_MRR.By[ 8*ALL_MRR_MRR_DiagResp_FR+0] =Vu8_MRR_6_MRR_DiagResp_Data0Bit.R;

                Vu8_MRR_6_MRR_DiagResp_Data7Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_DiagResp_FR + 7];
                Vu8_MRR_6_MRR_DiagResp_Data6Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_DiagResp_FR + 6];
                Vu8_MRR_6_MRR_DiagResp_Data5Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_DiagResp_FR + 5];
                Vu8_MRR_6_MRR_DiagResp_Data4Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_DiagResp_FR + 4];
                Vu8_MRR_6_MRR_DiagResp_Data3Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_DiagResp_FR + 3];
                Vu8_MRR_6_MRR_DiagResp_Data2Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_DiagResp_FR + 2];
                Vu8_MRR_6_MRR_DiagResp_Data1Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_DiagResp_FR + 1];
                Vu8_MRR_6_MRR_DiagResp_Data0Bit.R=CAN_ALL_FRVar_MRR.By[8 * ALL_MRR_MRR_DiagResp_FR + 0];


//--2 th CAN ���ĳ�ʼ���ӳ���------------
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_MRR_MRR_0x238_CH];//Can_NR=1
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_MRR_MRR_0x239_CH];//Can_NR=2
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_MRR_MRR_0x246_CH];//Can_NR=3
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_MRR_MRR_FrObj_0x279_CH];//Can_NR=4
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_MRR_MRR_FRObj_0x480_CH];//Can_NR=5
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_MRR_MRR_DiagResp_CH];//Can_NR=6

//--Can_NR=1----MRR 1 the Data Frame ���ƣ�MRR_0x238  ID��0x568  ���ڣ�20ms  λ����8�ֽ�MRR-->

                CAN1.MB[ALL_MRR_MRR_0x238_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_MRR_MRR_0x238_CH]ID.B.ID_STD= ALL_MRR_MRR_0x238_ID;
                CAN1.MB[ALL_MRR_MRR_0x238_CH].CS.B.IDE = ALL_MRR_MRR_0x238_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_MRR_MRR_0x238_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_MRR_MRR_0x238_CH].CS.B.DLC =ALL_MRR_MRR_0x238_LH; 

//--Can_NR=2----MRR 2 the Data Frame ���ƣ�MRR_0x239  ID��0x569  ���ڣ�20ms  λ����8�ֽ�MRR-->

                CAN1.MB[ALL_MRR_MRR_0x239_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_MRR_MRR_0x239_CH]ID.B.ID_STD= ALL_MRR_MRR_0x239_ID;
                CAN1.MB[ALL_MRR_MRR_0x239_CH].CS.B.IDE = ALL_MRR_MRR_0x239_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_MRR_MRR_0x239_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_MRR_MRR_0x239_CH].CS.B.DLC =ALL_MRR_MRR_0x239_LH; 

//--Can_NR=3----MRR 3 the Data Frame ���ƣ�MRR_0x246  ID��0x582  ���ڣ�20ms  λ����8�ֽ�MRR-->

                CAN1.MB[ALL_MRR_MRR_0x246_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_MRR_MRR_0x246_CH]ID.B.ID_STD= ALL_MRR_MRR_0x246_ID;
                CAN1.MB[ALL_MRR_MRR_0x246_CH].CS.B.IDE = ALL_MRR_MRR_0x246_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_MRR_MRR_0x246_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_MRR_MRR_0x246_CH].CS.B.DLC =ALL_MRR_MRR_0x246_LH; 

//--Can_NR=4----MRR 4 the Data Frame ���ƣ�MRR_FrObj_0x279  ID��0x633  ���ڣ�100ms  λ����8�ֽ�MRR-->

                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH]ID.B.ID_STD= ALL_MRR_MRR_FrObj_0x279_ID;
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].CS.B.IDE = ALL_MRR_MRR_FrObj_0x279_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].CS.B.DLC =ALL_MRR_MRR_FrObj_0x279_LH; 

//--Can_NR=5----MRR 5 the Data Frame ���ƣ�MRR_FRObj_0x480  ID��0x1152  ���ڣ�100ms  λ����8�ֽ�MRR-->

                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].ID.R= ALL_MRR_MRR_FRObj_0x480_ID;
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].CS.B.IDE = ALL_MRR_MRR_FRObj_0x480_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].CS.B.DLC =ALL_MRR_MRR_FRObj_0x480_LH; 

//--Can_NR=6----MRR 6 the Data Frame ���ƣ�MRR_DiagResp  ID��0x1882  ���ڣ�0ms  λ����8�ֽ�MRR-->

                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].ID.R= ALL_MRR_MRR_DiagResp_ID;
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].CS.B.IDE = ALL_MRR_MRR_DiagResp_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].CS.B.DLC =ALL_MRR_MRR_DiagResp_LH; 
//--3 th CAN ���Ľ����ж��ӳ���------------

//--Can_NR=1----MRR 1 the Data Frame ���ƣ�MRR_0x238  ID��0x568  ���ڣ�20ms  λ����8�ֽ�MRR-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_MRR_MRR_0x238_CH]  == 0) {
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x238_FR+0] = CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[0]; 
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x238_FR+1] = CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[1];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x238_FR+2] = CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[2];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x238_FR+3] = CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[3];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x238_FR+4] = CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[4];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x238_FR+5] = CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[5];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x238_FR+6] = CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[6];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x238_FR+7] = CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[7];
               Error_CAN1.B.ALL_MRR = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_MRR.B.ALL_MRR_MRR_0x238 = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_MRR_MRR_0x238_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_MRR_MRR_0x238_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_MRR_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=2----MRR 2 the Data Frame ���ƣ�MRR_0x239  ID��0x569  ���ڣ�20ms  λ����8�ֽ�MRR-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_MRR_MRR_0x239_CH]  == 0) {
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x239_FR+0] = CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[0]; 
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x239_FR+1] = CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[1];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x239_FR+2] = CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[2];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x239_FR+3] = CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[3];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x239_FR+4] = CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[4];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x239_FR+5] = CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[5];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x239_FR+6] = CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[6];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x239_FR+7] = CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[7];
               Error_CAN1.B.ALL_MRR = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_MRR.B.ALL_MRR_MRR_0x239 = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_MRR_MRR_0x239_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_MRR_MRR_0x239_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_MRR_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=3----MRR 3 the Data Frame ���ƣ�MRR_0x246  ID��0x582  ���ڣ�20ms  λ����8�ֽ�MRR-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_MRR_MRR_0x246_CH]  == 0) {
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x246_FR+0] = CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[0]; 
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x246_FR+1] = CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[1];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x246_FR+2] = CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[2];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x246_FR+3] = CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[3];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x246_FR+4] = CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[4];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x246_FR+5] = CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[5];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x246_FR+6] = CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[6];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_0x246_FR+7] = CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[7];
               Error_CAN1.B.ALL_MRR = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_MRR.B.ALL_MRR_MRR_0x246 = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_MRR_MRR_0x246_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_MRR_MRR_0x246_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_MRR_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=4----MRR 4 the Data Frame ���ƣ�MRR_FrObj_0x279  ID��0x633  ���ڣ�100ms  λ����8�ֽ�MRR-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_MRR_MRR_FrObj_0x279_CH]  == 0) {
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+0] = CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[0]; 
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+1] = CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[1];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+2] = CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[2];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+3] = CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[3];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+4] = CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[4];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+5] = CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[5];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+6] = CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[6];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+7] = CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[7];
               Error_CAN1.B.ALL_MRR = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_MRR.B.ALL_MRR_MRR_FrObj_0x279 = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_MRR_MRR_FrObj_0x279_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_MRR_MRR_FrObj_0x279_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_MRR_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=5----MRR 5 the Data Frame ���ƣ�MRR_FRObj_0x480  ID��0x1152  ���ڣ�100ms  λ����8�ֽ�MRR-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_MRR_MRR_FRObj_0x480_CH]  == 0) {
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+0] = CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[0]; 
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+1] = CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[1];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+2] = CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[2];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+3] = CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[3];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+4] = CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[4];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+5] = CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[5];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+6] = CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[6];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+7] = CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[7];
               Error_CAN1.B.ALL_MRR = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_MRR.B.ALL_MRR_MRR_FRObj_0x480 = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_MRR_MRR_FRObj_0x480_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_MRR_MRR_FRObj_0x480_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_MRR_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=6----MRR 6 the Data Frame ���ƣ�MRR_DiagResp  ID��0x1882  ���ڣ�0ms  λ����8�ֽ�MRR-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_MRR_MRR_DiagResp_CH]  == 0) {
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+0] = CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[0]; 
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+1] = CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[1];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+2] = CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[2];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+3] = CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[3];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+4] = CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[4];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+5] = CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[5];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+6] = CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[6];
                CAN_ALL_FRMes_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+7] = CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[7];
               Error_CAN1.B.ALL_MRR = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_MRR.B.ALL_MRR_MRR_DiagResp = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_MRR_MRR_DiagResp_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_MRR_MRR_DiagResp_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_MRR_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  
//--4 th CAN ���ķ����ӳ���------------                    

//--Can_NR=1----MRR 1 the Data Frame ���ƣ�MRR_0x238  ID��0x568  ���ڣ�20ms  λ����8�ֽ�MRR-->
                 if ( ( Pit0Ctr_10MS % ALL_MRR_MRR_0x238_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_MRR_MRR_0x238_CH] ;
                if ( D00CTR_def_CAN1_ALL_MRR.B.ALL_MRR_MRR_0x238T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[0] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x238_FR+0];
                CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[1] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x238_FR+1];
                CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[2] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x238_FR+2];
                CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[3] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x238_FR+3];
                CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[4] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x238_FR+4];
                CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[5] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x238_FR+5];
                CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[6] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x238_FR+6];
                CAN1.MB[ALL_MRR_MRR_0x238_CH].DATA.B[7] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x238_FR+7];
                CAN1.MB[ALL_MRR_MRR_0x238_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_MRR_MRR_0x238_Ay] = ALL_MRR_MRR_0x238_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_MRR.B.ALL_MRR_MRR_0x238T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_MRR_MRR_0x238_DT ) == 0 ) {


//--Can_NR=2----MRR 2 the Data Frame ���ƣ�MRR_0x239  ID��0x569  ���ڣ�20ms  λ����8�ֽ�MRR-->
                 if ( ( Pit0Ctr_10MS % ALL_MRR_MRR_0x239_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_MRR_MRR_0x239_CH] ;
                if ( D00CTR_def_CAN1_ALL_MRR.B.ALL_MRR_MRR_0x239T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[0] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x239_FR+0];
                CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[1] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x239_FR+1];
                CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[2] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x239_FR+2];
                CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[3] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x239_FR+3];
                CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[4] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x239_FR+4];
                CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[5] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x239_FR+5];
                CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[6] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x239_FR+6];
                CAN1.MB[ALL_MRR_MRR_0x239_CH].DATA.B[7] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x239_FR+7];
                CAN1.MB[ALL_MRR_MRR_0x239_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_MRR_MRR_0x239_Ay] = ALL_MRR_MRR_0x239_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_MRR.B.ALL_MRR_MRR_0x239T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_MRR_MRR_0x239_DT ) == 0 ) {


//--Can_NR=3----MRR 3 the Data Frame ���ƣ�MRR_0x246  ID��0x582  ���ڣ�20ms  λ����8�ֽ�MRR-->
                 if ( ( Pit0Ctr_10MS % ALL_MRR_MRR_0x246_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_MRR_MRR_0x246_CH] ;
                if ( D00CTR_def_CAN1_ALL_MRR.B.ALL_MRR_MRR_0x246T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[0] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x246_FR+0];
                CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[1] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x246_FR+1];
                CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[2] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x246_FR+2];
                CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[3] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x246_FR+3];
                CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[4] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x246_FR+4];
                CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[5] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x246_FR+5];
                CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[6] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x246_FR+6];
                CAN1.MB[ALL_MRR_MRR_0x246_CH].DATA.B[7] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_0x246_FR+7];
                CAN1.MB[ALL_MRR_MRR_0x246_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_MRR_MRR_0x246_Ay] = ALL_MRR_MRR_0x246_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_MRR.B.ALL_MRR_MRR_0x246T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_MRR_MRR_0x246_DT ) == 0 ) {


//--Can_NR=4----MRR 4 the Data Frame ���ƣ�MRR_FrObj_0x279  ID��0x633  ���ڣ�100ms  λ����8�ֽ�MRR-->
                 if ( ( Pit0Ctr_10MS % ALL_MRR_MRR_FrObj_0x279_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_MRR_MRR_FrObj_0x279_CH] ;
                if ( D00CTR_def_CAN1_ALL_MRR.B.ALL_MRR_MRR_FrObj_0x279T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[0] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+0];
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[1] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+1];
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[2] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+2];
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[3] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+3];
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[4] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+4];
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[5] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+5];
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[6] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+6];
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].DATA.B[7] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FrObj_0x279_FR+7];
                CAN1.MB[ALL_MRR_MRR_FrObj_0x279_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_MRR_MRR_FrObj_0x279_Ay] = ALL_MRR_MRR_FrObj_0x279_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_MRR.B.ALL_MRR_MRR_FrObj_0x279T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_MRR_MRR_FrObj_0x279_DT ) == 0 ) {


//--Can_NR=5----MRR 5 the Data Frame ���ƣ�MRR_FRObj_0x480  ID��0x1152  ���ڣ�100ms  λ����8�ֽ�MRR-->
                 if ( ( Pit0Ctr_10MS % ALL_MRR_MRR_FRObj_0x480_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_MRR_MRR_FRObj_0x480_CH] ;
                if ( D00CTR_def_CAN1_ALL_MRR.B.ALL_MRR_MRR_FRObj_0x480T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[0] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+0];
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[1] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+1];
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[2] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+2];
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[3] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+3];
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[4] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+4];
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[5] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+5];
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[6] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+6];
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].DATA.B[7] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_FRObj_0x480_FR+7];
                CAN1.MB[ALL_MRR_MRR_FRObj_0x480_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_MRR_MRR_FRObj_0x480_Ay] = ALL_MRR_MRR_FRObj_0x480_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_MRR.B.ALL_MRR_MRR_FRObj_0x480T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_MRR_MRR_FRObj_0x480_DT ) == 0 ) {


//--Can_NR=6----MRR 6 the Data Frame ���ƣ�MRR_DiagResp  ID��0x1882  ���ڣ�0ms  λ����8�ֽ�MRR-->
                 if ( ( Pit0Ctr_10MS % ALL_MRR_MRR_DiagResp_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_MRR_MRR_DiagResp_CH] ;
                if ( D00CTR_def_CAN1_ALL_MRR.B.ALL_MRR_MRR_DiagRespT == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[0] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+0];
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[1] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+1];
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[2] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+2];
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[3] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+3];
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[4] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+4];
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[5] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+5];
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[6] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+6];
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].DATA.B[7] = CAN_ALL_FRVar_MRR.By[8*ALL_MRR_MRR_DiagResp_FR+7];
                CAN1.MB[ALL_MRR_MRR_DiagResp_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_MRR_MRR_DiagResp_Ay] = ALL_MRR_MRR_DiagResp_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_MRR.B.ALL_MRR_MRR_DiagRespT == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_MRR_MRR_DiagResp_DT ) == 0 ) {


//=========================================================

#endif // _CAN_ALL_MRR_H 