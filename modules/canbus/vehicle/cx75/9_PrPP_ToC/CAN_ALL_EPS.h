#ifndef  _CAN_ALL_EPS_H
#define  _CAN_ALL_EPS_H

#include "project.h"

//--Can_NR=1frame id is 0xFFFFFFFF80000175
//373 SAS_SteerWheelRotSpdStatus 1 "Invalid" 0 "Valid"
#define  CAN_ALL_EPS_cb1SAS_SteerWheelRotSpdStatus_Invalid 1
#define  CAN_ALL_EPS_cb1SAS_SteerWheelRotSpdStatus_Valid  0 
//373 SAS_TrimmingSts 1 "Trimmed" 0 "Not trimmed"
#define  CAN_ALL_EPS_cb1SAS_TrimmingSts_Trimmed 1
#define  CAN_ALL_EPS_cb1SAS_TrimmingSts_Not_trimmed  0 
//373 SAS_SASStsSnsr 1 "sensor value  valid" 0 "sensor value  Invalid"
#define  CAN_ALL_EPS_cb1SAS_SASStsSnsr_sensor_value__valid 1
#define  CAN_ALL_EPS_cb1SAS_SASStsSnsr_sensor_value__Invalid  0 
//373 SAS_Raw_SASStsSnsr 1 "sensor value  valid" 0 "sensor value  Invalid"
#define  CAN_ALL_EPS_cb1SAS_Raw_SASStsSnsr_sensor_value__valid 1
#define  CAN_ALL_EPS_cb1SAS_Raw_SASStsSnsr_sensor_value__Invalid  0 
//373 SAS_SASStsCal 1 "sensor calibrated" 0 "sensor not calibrated"
#define  CAN_ALL_EPS_cb1SAS_SASStsCal_sensor_calibrated 1
#define  CAN_ALL_EPS_cb1SAS_SASStsCal_sensor_not_calibrated  0 
//--Can_NR=2frame id is 0xFFFFFFFF80000176
//374 EPS_TosionBarTorqueValid 1 "Invalid" 0 "Vaild"
#define  CAN_ALL_EPS_cb1EPS_TosionBarTorqueValid_Invalid 1
#define  CAN_ALL_EPS_cb1EPS_TosionBarTorqueValid_Vaild  0 
//374 EPS_LKAResponseTorque 2047 "Invalid"
#define  CAN_ALL_EPS_ce11EPS_LKAResponseTorque_Invalid 2047
//374 EPS_LKAResponseTorqueValid 1 "Invalid" 0 "Vaild"
#define  CAN_ALL_EPS_cb1EPS_LKAResponseTorqueValid_Invalid 1
#define  CAN_ALL_EPS_cb1EPS_LKAResponseTorqueValid_Vaild  0 
//374 EPS_LKAControlStatus 3 "Control request not allowed_Permanent" 2 "Control request not allowed_Temporarily" 1 "Request honored" 0 "No request"
#define  CAN_ALL_EPS_ce2EPS_LKAControlStatus_Control_request_not_allowed_Permanent 3
#define  CAN_ALL_EPS_ce2EPS_LKAControlStatus_Control_request_not_allowed_Temporarily  2 
#define  CAN_ALL_EPS_ce2EPS_LKAControlStatus_Request_honored  1 
#define  CAN_ALL_EPS_ce2EPS_LKAControlStatus_No_request  0 
//374 EPS_PAM_SteeringSts_Reserved 1 "Steering Position is adjusting" 0 "Steering Position is OK"
#define  CAN_ALL_EPS_cb1EPS_PAM_SteeringSts_Reserved_Steering_Position_is_adjusting 1
#define  CAN_ALL_EPS_cb1EPS_PAM_SteeringSts_Reserved_Steering_Position_is_OK  0 
//374 EPS_LDWControlStatus 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Deactivated"
#define  CAN_ALL_EPS_ce2EPS_LDWControlStatus_Reserved 3
#define  CAN_ALL_EPS_ce2EPS_LDWControlStatus_Active  2 
#define  CAN_ALL_EPS_ce2EPS_LDWControlStatus_Inactive  1 
#define  CAN_ALL_EPS_ce2EPS_LDWControlStatus_Deactivated  0 
//374 EPS_EPSPAMInh 16 "EPS failure" 8 "Excess Angle Deviation" 4 "Abnormal CAN input" 2 "Driver Interference" 1 "Over Speed" 0 "Normal Operation"
#define  CAN_ALL_EPS_ce8EPS_EPSPAMInh_EPS_failure 16
#define  CAN_ALL_EPS_ce8EPS_EPSPAMInh_Excess_Angle_Deviation  8 
#define  CAN_ALL_EPS_ce8EPS_EPSPAMInh_Abnormal_CAN_input  4 
#define  CAN_ALL_EPS_ce8EPS_EPSPAMInh_Driver_Interference  2 
#define  CAN_ALL_EPS_ce8EPS_EPSPAMInh_Over_Speed  1 
#define  CAN_ALL_EPS_ce8EPS_EPSPAMInh_Normal_Operation  0 
//374 EPS_EPSPAMSts 7 "Failure" 6 "ADAS active" 5 "NRCD active" 4 "Reply for Control" 3 "Abort" 2 "Active" 1 "Available" 0 "Inhibit"
#define  CAN_ALL_EPS_ce4EPS_EPSPAMSts_Failure 7
#define  CAN_ALL_EPS_ce4EPS_EPSPAMSts_ADAS_active  6 
#define  CAN_ALL_EPS_ce4EPS_EPSPAMSts_NRCD_active  5 
#define  CAN_ALL_EPS_ce4EPS_EPSPAMSts_Reply_for_Control  4 
#define  CAN_ALL_EPS_ce4EPS_EPSPAMSts_Abort  3 
#define  CAN_ALL_EPS_ce4EPS_EPSPAMSts_Active  2 
#define  CAN_ALL_EPS_ce4EPS_EPSPAMSts_Available  1 
#define  CAN_ALL_EPS_ce4EPS_EPSPAMSts_Inhibit  0 

//CAN�з��ű������ñ�������������
#define  CAN_ALL_EPS_s16SAS_SteerWheelAngle_offset 32773.1092436975
#define  CAN_ALL_EPS_s16SAS_SteerWheelAngle_Nmax 32773.1092436975
#define  CAN_ALL_EPS_s16SAS_SteerWheelAngle_Pmax 32760.8907563025
#define  CAN_ALL_EPS_s16SAS_Raw_SteerWheelAngle_offset 32773.1092436975
#define  CAN_ALL_EPS_s16SAS_Raw_SteerWheelAngle_Nmax 32773.1092436975
#define  CAN_ALL_EPS_s16SAS_Raw_SteerWheelAngle_Pmax 32760.8907563025
#define  CAN_ALL_EPS_s14SAS_SteerWheelRotSpd_offset 8192
#define  CAN_ALL_EPS_s14SAS_SteerWheelRotSpd_Nmax 8192
#define  CAN_ALL_EPS_s14SAS_SteerWheelRotSpd_Pmax 8190
#define  CAN_ALL_EPS_s11EPS_TorsionBarTorque_offset 1024
#define  CAN_ALL_EPS_s11EPS_TorsionBarTorque_Nmax 1024
#define  CAN_ALL_EPS_s11EPS_TorsionBarTorque_Pmax 1022

//CAN�޷��ű�����define�ñ�����physical min-max
#define  CAN_ALL_EPS_u16SAS_SteerWheelAngle_min 0
#define  CAN_ALL_EPS_u16SAS_SteerWheelAngle_max 0xFFFE
#define  CAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle_min 0
#define  CAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle_max 0xFFFE
#define  CAN_ALL_EPS_u14SAS_SteerWheelRotSpd_min 0
#define  CAN_ALL_EPS_u14SAS_SteerWheelRotSpd_max 0x3FFE
#define  CAN_ALL_EPS_u1SAS_SteerWheelRotSpdStatus_min 0
#define  CAN_ALL_EPS_u1SAS_SteerWheelRotSpdStatus_max 0x1
#define  CAN_ALL_EPS_u1SAS_TrimmingSts_min 0
#define  CAN_ALL_EPS_u1SAS_TrimmingSts_max 0x1
#define  CAN_ALL_EPS_u1SAS_SASStsSnsr_min 0
#define  CAN_ALL_EPS_u1SAS_SASStsSnsr_max 0x1
#define  CAN_ALL_EPS_u1SAS_Raw_SASStsSnsr_min 0
#define  CAN_ALL_EPS_u1SAS_Raw_SASStsSnsr_max 0x1
#define  CAN_ALL_EPS_u1SAS_SASStsCal_min 0
#define  CAN_ALL_EPS_u1SAS_SASStsCal_max 0x1
#define  CAN_ALL_EPS_u4Rolling_counter_0x175_min 0
#define  CAN_ALL_EPS_u4Rolling_counter_0x175_max 0xF
#define  CAN_ALL_EPS_u8Checksum_0x175_min 0
#define  CAN_ALL_EPS_u8Checksum_0x175_max 0xFF
#define  CAN_ALL_EPS_u11EPS_TorsionBarTorque_min 0
#define  CAN_ALL_EPS_u11EPS_TorsionBarTorque_max 0x7FE
#define  CAN_ALL_EPS_u1EPS_TosionBarTorqueValid_min 0
#define  CAN_ALL_EPS_u1EPS_TosionBarTorqueValid_max 0x1
#define  CAN_ALL_EPS_u11EPS_LKAResponseTorque_min 0
#define  CAN_ALL_EPS_u11EPS_LKAResponseTorque_max 0x7FE
#define  CAN_ALL_EPS_u1EPS_LKAResponseTorqueValid_min 0
#define  CAN_ALL_EPS_u1EPS_LKAResponseTorqueValid_max 0x1
#define  CAN_ALL_EPS_u2EPS_LKAControlStatus_min 0
#define  CAN_ALL_EPS_u2EPS_LKAControlStatus_max 0x3
#define  CAN_ALL_EPS_u1EPS_PAM_SteeringSts_Reserved_min 0
#define  CAN_ALL_EPS_u1EPS_PAM_SteeringSts_Reserved_max 0x1
#define  CAN_ALL_EPS_u2EPS_LDWControlStatus_min 0
#define  CAN_ALL_EPS_u2EPS_LDWControlStatus_max 0x3
#define  CAN_ALL_EPS_u8EPS_EPSPAMInh_min 0
#define  CAN_ALL_EPS_u8EPS_EPSPAMInh_max 0xFF
#define  CAN_ALL_EPS_c3Reserve_2_24_26_min 0
#define  CAN_ALL_EPS_c3Reserve_2_24_26_max 0x7
#define  CAN_ALL_EPS_u4EPS_EPSPAMSts_min 0
#define  CAN_ALL_EPS_u4EPS_EPSPAMSts_max 0xF
#define  CAN_ALL_EPS_c8Reserve_2_40_47_min 0
#define  CAN_ALL_EPS_c8Reserve_2_40_47_max 0xFF
#define  CAN_ALL_EPS_u4Rolling_counter_0x176_min 0
#define  CAN_ALL_EPS_u4Rolling_counter_0x176_max 0xF
#define  CAN_ALL_EPS_u8Checksum_0x176_min 0
#define  CAN_ALL_EPS_u8Checksum_0x176_max 0xFF

//CANfactor���ӷ�ĸ����
#define  CAN_ALL_EPS_sm16SAS_Raw_SteerWheelAngle_factor 119
#define  CAN_ALL_EPS_sd16SAS_Raw_SteerWheelAngle_factor 5000
#define  CAN_ALL_EPS_sm14SAS_SteerWheelRotSpd_factor 1
#define  CAN_ALL_EPS_sd14SAS_SteerWheelRotSpd_factor 8
#define  CAN_ALL_EPS_u1SAS_TrimmingSts_factor 1
#define  CAN_ALL_EPS_u1SAS_SteerWheelRotSpdStatus_factor 1
#define  CAN_ALL_EPS_u4Rolling_counter_0x175_factor 1
#define  CAN_ALL_EPS_u1SAS_SASStsCal_factor 1
#define  CAN_ALL_EPS_u1SAS_Raw_SASStsSnsr_factor 1
#define  CAN_ALL_EPS_u1SAS_SASStsSnsr_factor 1
#define  CAN_ALL_EPS_u8Checksum_0x175_factor 1
#define  CAN_ALL_EPS_sm16SAS_SteerWheelAngle_factor 119
#define  CAN_ALL_EPS_sd16SAS_SteerWheelAngle_factor 5000
#define  CAN_ALL_EPS_sm11EPS_LKAResponseTorque_factor 1
#define  CAN_ALL_EPS_sd11EPS_LKAResponseTorque_factor 100
#define  CAN_ALL_EPS_u1EPS_TosionBarTorqueValid_factor 1
#define  CAN_ALL_EPS_u1EPS_LKAResponseTorqueValid_factor 1
#define  CAN_ALL_EPS_u2EPS_LDWControlStatus_factor 1
#define  CAN_ALL_EPS_u1EPS_PAM_SteeringSts_Reserved_factor 1
#define  CAN_ALL_EPS_u2EPS_LKAControlStatus_factor 1
#define  CAN_ALL_EPS_u8EPS_EPSPAMInh_factor 1
#define  CAN_ALL_EPS_u4Rolling_counter_0x176_factor 1
#define  CAN_ALL_EPS_u4EPS_EPSPAMSts_factor 1
#define  CAN_ALL_EPS_u8Checksum_0x176_factor 1
#define  CAN_ALL_EPS_sm11EPS_TorsionBarTorque_factor 1
#define  CAN_ALL_EPS_sd11EPS_TorsionBarTorque_factor 100

//#define  ��������_CH��CAN����ͨ���ţ�    �������+10��#define  �ṹ������_CH���ṹ��ͨ���ţ�  ������ţ�#define ��������_ID ��CAN����ID��  ����CAN ID��#define ��������_DT  (CAN��������)  ����ʱ�����á�MS��/10�� #define ��������_TorR(CAN���ķ��ͻ����)    ����1������0

//--Can_NR=1----EPS 1 th Data Frame ���ƣ�SAS_Sensor_0x175  ID��0X373  ���ڣ�10ms  DLC��8�ֽ�EPS-->MRR
#define ALL_EPS_SAS_Sensor_0x175_CH 1
#define ALL_EPS_SAS_Sensor_0x175_FR 1
#define ALL_EPS_SAS_Sensor_0x175_ID 0XFFFFFFFF80000175
#define ALL_EPS_SAS_Sensor_0x175_DT 1 //xxMS/10
#define ALL_EPS_SAS_Sensor_0x175_TorR 0
#define ALL_EPS_SAS_Sensor_0x175_Ay 0
#define ALL_EPS_SAS_Sensor_0x175_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_EPS_SAS_Sensor_0x175_LH 8//LENGTH <=8


//--Can_NR=2----EPS 2 th Data Frame ���ƣ�EPS_Advanced_0x176  ID��0X374  ���ڣ�10ms  DLC��8�ֽ�EPS-->IPM
#define ALL_EPS_EPS_Advanced_0x176_CH 2
#define ALL_EPS_EPS_Advanced_0x176_FR 2
#define ALL_EPS_EPS_Advanced_0x176_ID 0XFFFFFFFF80000176
#define ALL_EPS_EPS_Advanced_0x176_DT 1 //xxMS/10
#define ALL_EPS_EPS_Advanced_0x176_TorR 0
#define ALL_EPS_EPS_Advanced_0x176_Ay 0
#define ALL_EPS_EPS_Advanced_0x176_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_EPS_EPS_Advanced_0x176_LH 8//LENGTH <=8


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
//-----------------------2 CAN Data Frames-----------------------------------------------------------
typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[24];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[12];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[6];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[6];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[3];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint32_t R[2];                                      


//--Can_NR=1----EPS 1 the Data Frame ���ƣ�SAS_Sensor_0x175  ID��0x373  ���ڣ�10ms  λ����8�ֽ�EPS-->
  vuint32_t  CAN_ALL_EPS_uSAS_SteerWheelAngle:16;//0.7-->1.0 ���ƣ�SAS_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
  vuint32_t  CAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle:16;//2.7-->3.0 ���ƣ�SAS_Raw_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
//*****************32 bits split line
  vuint32_t  CAN_ALL_EPS_u16SAS_SteerWheelRotSpd:14;//4.7-->5.2 ���ƣ�SAS_SteerWheelRotSpd λ����14bit, logical min-max��-1024~1023.75 physical min-max��0x000~0x3FFE ���ȣ�0.125 ƫ������-8192 ��λ��deg_s 
  vuint32_t  CAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus:1;//5.1-->5.1 1 "Invalid" 0 "Valid" ���ƣ�SAS_SteerWheelRotSpdStatus λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_EPS_u1SAS_TrimmingSts:1;//5.0-->5.0 1 "Trimmed" 0 "Not trimmed" ���ƣ�SAS_TrimmingSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_EPS_u1SAS_SASStsSnsr:1;//6.7-->6.7 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_EPS_u1SAS_Raw_SASStsSnsr:1;//6.6-->6.6 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_Raw_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_EPS_u1SAS_SASStsCal:1;//6.5-->6.5 1 "sensor calibrated" 0 "sensor not calibrated" ���ƣ�SAS_SASStsCal λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_EPS_u1Rolling_counter_0x175:4;//6.3-->6.0 ���ƣ�Rolling_counter_0x175 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_EPS_u4Checksum_0x175:8;//7.7-->7.0 ���ƣ�Checksum_0x175 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=2----EPS 2 the Data Frame ���ƣ�EPS_Advanced_0x176  ID��0x374  ���ڣ�10ms  λ����8�ֽ�EPS-->
  vuint32_t  CAN_ALL_EPS_uEPS_TorsionBarTorque:11;//0.7-->1.5 ���ƣ�EPS_TorsionBarTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
  vuint32_t  CAN_ALL_EPS_u11EPS_TosionBarTorqueValid:1;//1.4-->1.4 1 "Invalid" 0 "Vaild" ���ƣ�EPS_TosionBarTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_EPS_u1EPS_LKAResponseTorque:11;//1.3-->2.1 2047 "Invalid" ���ƣ�EPS_LKAResponseTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
  vuint32_t  CAN_ALL_EPS_u11EPS_LKAResponseTorqueValid:1;//2.0-->2.0 1 "Invalid" 0 "Vaild" ���ƣ�EPS_LKAResponseTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_EPS_u1EPS_LKAControlStatus:2;//3.7-->3.6 3 "Control request not allowed_Permanent" 2 "Control request not allowed_Temporarily" 1 "Request honored" 0 "No request" ���ƣ�EPS_LKAControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c1EPS_PAM_SteeringSts_Reserved_2_29_29:1;//3.5-->3.5 1 "Steering Position is adjusting" 0 "Steering Position is OK" ���ƣ�EPS_PAM_SteeringSts_Reserved λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_EPS_u1EPS_LDWControlStatus:2;//3.4-->3.3 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Deactivated" ���ƣ�EPS_LDWControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c3Reserve_2_24_26:3;//3.2-->3.0
//*****************32 bits split line
  vuint32_t  CAN_ALL_EPS_u2EPS_EPSPAMInh:8;//4.7-->4.0 16 "EPS failure" 8 "Excess Angle Deviation" 4 "Abnormal CAN input" 2 "Driver Interference" 1 "Over Speed" 0 "Normal Operation" ���ƣ�EPS_EPSPAMInh λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c8Reserve_2_40_47:8;//5.7-->5.0
  vuint32_t  CAN_ALL_EPS_u8EPS_EPSPAMSts:4;//6.7-->6.4 7 "Failure" 6 "ADAS active" 5 "NRCD active" 4 "Reply for Control" 3 "Abort" 2 "Active" 1 "Available" 0 "Inhibit" ���ƣ�EPS_EPSPAMSts λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_EPS_u4Rolling_counter_0x176:4;//6.3-->6.0 ���ƣ�Rolling_counter_0x176 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_EPS_u4Checksum_0x176:8;//7.7-->7.0 ���ƣ�Checksum_0x176 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
    } B;
} CAN_ALL_FRAMES_EPS_tag;

typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[24];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[12];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[6];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[6];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[3];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint64_t R[1];                                      


//--Can_NR=1----EPS 1 the Data Frame ���ƣ�SAS_Sensor_0x175  ID��0x373  ���ڣ�10ms  λ����8�ֽ�EPS-->
  vuint64_t  CAN_ALL_EPS_uSAS_SteerWheelAngle:16;//0.7-->1.0 ���ƣ�SAS_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
  vuint64_t  CAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle:16;//2.7-->3.0 ���ƣ�SAS_Raw_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
//*****************32 bits split line
  vuint64_t  CAN_ALL_EPS_u16SAS_SteerWheelRotSpd:14;//4.7-->5.2 ���ƣ�SAS_SteerWheelRotSpd λ����14bit, logical min-max��-1024~1023.75 physical min-max��0x000~0x3FFE ���ȣ�0.125 ƫ������-8192 ��λ��deg_s 
  vuint64_t  CAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus:1;//5.1-->5.1 1 "Invalid" 0 "Valid" ���ƣ�SAS_SteerWheelRotSpdStatus λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_EPS_u1SAS_TrimmingSts:1;//5.0-->5.0 1 "Trimmed" 0 "Not trimmed" ���ƣ�SAS_TrimmingSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_EPS_u1SAS_SASStsSnsr:1;//6.7-->6.7 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_EPS_u1SAS_Raw_SASStsSnsr:1;//6.6-->6.6 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_Raw_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_EPS_u1SAS_SASStsCal:1;//6.5-->6.5 1 "sensor calibrated" 0 "sensor not calibrated" ���ƣ�SAS_SASStsCal λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_EPS_u1Rolling_counter_0x175:4;//6.3-->6.0 ���ƣ�Rolling_counter_0x175 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_EPS_u4Checksum_0x175:8;//7.7-->7.0 ���ƣ�Checksum_0x175 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=2----EPS 2 the Data Frame ���ƣ�EPS_Advanced_0x176  ID��0x374  ���ڣ�10ms  λ����8�ֽ�EPS-->
  vuint64_t  CAN_ALL_EPS_uEPS_TorsionBarTorque:11;//0.7-->1.5 ���ƣ�EPS_TorsionBarTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
  vuint64_t  CAN_ALL_EPS_u11EPS_TosionBarTorqueValid:1;//1.4-->1.4 1 "Invalid" 0 "Vaild" ���ƣ�EPS_TosionBarTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_EPS_u1EPS_LKAResponseTorque:11;//1.3-->2.1 2047 "Invalid" ���ƣ�EPS_LKAResponseTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
  vuint64_t  CAN_ALL_EPS_u11EPS_LKAResponseTorqueValid:1;//2.0-->2.0 1 "Invalid" 0 "Vaild" ���ƣ�EPS_LKAResponseTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_EPS_u1EPS_LKAControlStatus:2;//3.7-->3.6 3 "Control request not allowed_Permanent" 2 "Control request not allowed_Temporarily" 1 "Request honored" 0 "No request" ���ƣ�EPS_LKAControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c1EPS_PAM_SteeringSts_Reserved_2_29_29:1;//3.5-->3.5 1 "Steering Position is adjusting" 0 "Steering Position is OK" ���ƣ�EPS_PAM_SteeringSts_Reserved λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_EPS_u1EPS_LDWControlStatus:2;//3.4-->3.3 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Deactivated" ���ƣ�EPS_LDWControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c3Reserve_2_24_26:3;//3.2-->3.0
//*****************32 bits split line
  vuint64_t  CAN_ALL_EPS_u2EPS_EPSPAMInh:8;//4.7-->4.0 16 "EPS failure" 8 "Excess Angle Deviation" 4 "Abnormal CAN input" 2 "Driver Interference" 1 "Over Speed" 0 "Normal Operation" ���ƣ�EPS_EPSPAMInh λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c8Reserve_2_40_47:8;//5.7-->5.0
  vuint64_t  CAN_ALL_EPS_u8EPS_EPSPAMSts:4;//6.7-->6.4 7 "Failure" 6 "ADAS active" 5 "NRCD active" 4 "Reply for Control" 3 "Abort" 2 "Active" 1 "Available" 0 "Inhibit" ���ƣ�EPS_EPSPAMSts λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_EPS_u4Rolling_counter_0x176:4;//6.3-->6.0 ���ƣ�Rolling_counter_0x176 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_EPS_u4Checksum_0x176:8;//7.7-->7.0 ���ƣ�Checksum_0x176 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

    } B;
} CAN_ALL_FRAMES_EPS_tag;
extern CAN_ALL_FRAMES_EPS_tag CAN_ALL_FRAMES_EPS;
extern CAN_ALL_FRAMES_EPS_tag CAN_ALL_FRMes_EPS;
extern CAN_ALL_FRAMES_EPS_tag CAN_ALL_FRVar_EPS;
extern CAN_ALL_FRAMES_EPS_tag CAN_ALL_FRVarOld_EPS;

//--1 th CAN �������ݴ����ӳ���------------
                CAN1_noReceivedMessageTime[ALL_EPS_SAS_Sensor_0x175_CH]++;//Can_NR=1
                CAN1_noReceivedMessageTime[ALL_EPS_EPS_Advanced_0x176_CH]++;//Can_NR=2
typedef union {
    vuint8_t R;
    struct { //ALL_EPS ���ձ��Ĺ���
        vuint8_t ALL_EPS_SAS_Sensor_0x175: 1; //Can_NR=1
        vuint8_t ALL_EPS_EPS_Advanced_0x176: 1; //Can_NR=2
    } B;
} Error_CAN1_ALL_EPS_tag ;
extern Error_CAN1_ALL_EPS_tag Error_CAN1_ALL_EPS ;
typedef union {
    vuint8_t R;
    struct { //ALL_EPS ���ձ��Ĺ���
        vuint8_t ALL_EPS_SAS_Sensor_0x175T: 1; //Can_NR=1
        vuint8_t ALL_EPS_EPS_Advanced_0x176T: 1; //Can_NR=2
    } B;
}  D00CTR_def_CAN1_ALL_EPS_tag ;
extern  D00CTR_def_CAN1_ALL_EPS_tag D00CTR_def_CAN1_ALL_EPS ;


//--Can_NR=1----EPS 1 the Data Frame ���ƣ�SAS_Sensor_0x175  ID��0x373  ���ڣ�10ms  λ����8�ֽ�EPS-->

 vuint16_t VCAN_ALL_EPS_uSAS_SteerWheelAngle;//0.7-->1.0 ���ƣ�SAS_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
 vuint16_t VCAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle;//2.7-->3.0 ���ƣ�SAS_Raw_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
//*****************32 bits split line
 vuint16_t VCAN_ALL_EPS_u16SAS_SteerWheelRotSpd;//4.7-->5.2 ���ƣ�SAS_SteerWheelRotSpd λ����14bit, logical min-max��-1024~1023.75 physical min-max��0x000~0x3FFE ���ȣ�0.125 ƫ������-8192 ��λ��deg_s 
 vuint8_t VCAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus;//5.1-->5.1 1 "Invalid" 0 "Valid" ���ƣ�SAS_SteerWheelRotSpdStatus λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1SAS_TrimmingSts;//5.0-->5.0 1 "Trimmed" 0 "Not trimmed" ���ƣ�SAS_TrimmingSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1SAS_SASStsSnsr;//6.7-->6.7 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1SAS_Raw_SASStsSnsr;//6.6-->6.6 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_Raw_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1SAS_SASStsCal;//6.5-->6.5 1 "sensor calibrated" 0 "sensor not calibrated" ���ƣ�SAS_SASStsCal λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1Rolling_counter_0x175;//6.3-->6.0 ���ƣ�Rolling_counter_0x175 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u4Checksum_0x175;//7.7-->7.0 ���ƣ�Checksum_0x175 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=2----EPS 2 the Data Frame ���ƣ�EPS_Advanced_0x176  ID��0x374  ���ڣ�10ms  λ����8�ֽ�EPS-->

 vuint16_t VCAN_ALL_EPS_uEPS_TorsionBarTorque;//0.7-->1.5 ���ƣ�EPS_TorsionBarTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
 vuint8_t VCAN_ALL_EPS_u11EPS_TosionBarTorqueValid;//1.4-->1.4 1 "Invalid" 0 "Vaild" ���ƣ�EPS_TosionBarTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint16_t VCAN_ALL_EPS_u1EPS_LKAResponseTorque;//1.3-->2.1 2047 "Invalid" ���ƣ�EPS_LKAResponseTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
 vuint8_t VCAN_ALL_EPS_u11EPS_LKAResponseTorqueValid;//2.0-->2.0 1 "Invalid" 0 "Vaild" ���ƣ�EPS_LKAResponseTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1EPS_LKAControlStatus;//3.7-->3.6 3 "Control request not allowed_Permanent" 2 "Control request not allowed_Temporarily" 1 "Request honored" 0 "No request" ���ƣ�EPS_LKAControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc1EPS_PAM_SteeringSts_Reserved_2_29_29;//3.5-->3.5 1 "Steering Position is adjusting" 0 "Steering Position is OK" ���ƣ�EPS_PAM_SteeringSts_Reserved λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1EPS_LDWControlStatus;//3.4-->3.3 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Deactivated" ���ƣ�EPS_LDWControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc3Reserve_2_24_26;//3.2-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_EPS_u2EPS_EPSPAMInh;//4.7-->4.0 16 "EPS failure" 8 "Excess Angle Deviation" 4 "Abnormal CAN input" 2 "Driver Interference" 1 "Over Speed" 0 "Normal Operation" ���ƣ�EPS_EPSPAMInh λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc8Reserve_2_40_47;//5.7-->5.0
 vuint8_t VCAN_ALL_EPS_u8EPS_EPSPAMSts;//6.7-->6.4 7 "Failure" 6 "ADAS active" 5 "NRCD active" 4 "Reply for Control" 3 "Abort" 2 "Active" 1 "Available" 0 "Inhibit" ���ƣ�EPS_EPSPAMSts λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u4Rolling_counter_0x176;//6.3-->6.0 ���ƣ�Rolling_counter_0x176 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u4Checksum_0x176;//7.7-->7.0 ���ƣ�Checksum_0x176 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//=======================================================(�ָ���)



//--Can_NR=1----EPS 1 the Data Frame ���ƣ�SAS_Sensor_0x175  ID��0x373  ���ڣ�10ms  λ����8�ֽ�EPS-->

 extern  vuint16_t VCAN_ALL_EPS_uSAS_SteerWheelAngle;//0.7-->1.0 ���ƣ�SAS_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
 extern  vuint16_t VCAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle;//2.7-->3.0 ���ƣ�SAS_Raw_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
//*****************32 bits split line
 extern  vuint16_t VCAN_ALL_EPS_u16SAS_SteerWheelRotSpd;//4.7-->5.2 ���ƣ�SAS_SteerWheelRotSpd λ����14bit, logical min-max��-1024~1023.75 physical min-max��0x000~0x3FFE ���ȣ�0.125 ƫ������-8192 ��λ��deg_s 
 extern  vuint8_t VCAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus;//5.1-->5.1 1 "Invalid" 0 "Valid" ���ƣ�SAS_SteerWheelRotSpdStatus λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1SAS_TrimmingSts;//5.0-->5.0 1 "Trimmed" 0 "Not trimmed" ���ƣ�SAS_TrimmingSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1SAS_SASStsSnsr;//6.7-->6.7 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1SAS_Raw_SASStsSnsr;//6.6-->6.6 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_Raw_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1SAS_SASStsCal;//6.5-->6.5 1 "sensor calibrated" 0 "sensor not calibrated" ���ƣ�SAS_SASStsCal λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1Rolling_counter_0x175;//6.3-->6.0 ���ƣ�Rolling_counter_0x175 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u4Checksum_0x175;//7.7-->7.0 ���ƣ�Checksum_0x175 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=2----EPS 2 the Data Frame ���ƣ�EPS_Advanced_0x176  ID��0x374  ���ڣ�10ms  λ����8�ֽ�EPS-->

 extern  vuint16_t VCAN_ALL_EPS_uEPS_TorsionBarTorque;//0.7-->1.5 ���ƣ�EPS_TorsionBarTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
 extern  vuint8_t VCAN_ALL_EPS_u11EPS_TosionBarTorqueValid;//1.4-->1.4 1 "Invalid" 0 "Vaild" ���ƣ�EPS_TosionBarTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint16_t VCAN_ALL_EPS_u1EPS_LKAResponseTorque;//1.3-->2.1 2047 "Invalid" ���ƣ�EPS_LKAResponseTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
 extern  vuint8_t VCAN_ALL_EPS_u11EPS_LKAResponseTorqueValid;//2.0-->2.0 1 "Invalid" 0 "Vaild" ���ƣ�EPS_LKAResponseTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1EPS_LKAControlStatus;//3.7-->3.6 3 "Control request not allowed_Permanent" 2 "Control request not allowed_Temporarily" 1 "Request honored" 0 "No request" ���ƣ�EPS_LKAControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc1EPS_PAM_SteeringSts_Reserved_2_29_29;//3.5-->3.5 1 "Steering Position is adjusting" 0 "Steering Position is OK" ���ƣ�EPS_PAM_SteeringSts_Reserved λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1EPS_LDWControlStatus;//3.4-->3.3 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Deactivated" ���ƣ�EPS_LDWControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc3Reserve_2_24_26;//3.2-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_EPS_u2EPS_EPSPAMInh;//4.7-->4.0 16 "EPS failure" 8 "Excess Angle Deviation" 4 "Abnormal CAN input" 2 "Driver Interference" 1 "Over Speed" 0 "Normal Operation" ���ƣ�EPS_EPSPAMInh λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc8Reserve_2_40_47;//5.7-->5.0
 extern  vuint8_t VCAN_ALL_EPS_u8EPS_EPSPAMSts;//6.7-->6.4 7 "Failure" 6 "ADAS active" 5 "NRCD active" 4 "Reply for Control" 3 "Abort" 2 "Active" 1 "Available" 0 "Inhibit" ���ƣ�EPS_EPSPAMSts λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u4Rolling_counter_0x176;//6.3-->6.0 ���ƣ�Rolling_counter_0x176 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u4Checksum_0x176;//7.7-->7.0 ���ƣ�Checksum_0x176 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//=======================64λԪ�ر���==============================(�ָ���)



//--Can_NR=1----EPS 1 the Data Frame ���ƣ�SAS_Sensor_0x175  ID��0x373  ���ڣ�10ms  λ����8�ֽ�EPS-->

 vuint16_t VCAN_ALL_EPS_uSAS_SteerWheelAngle;//0.7-->1.0 ���ƣ�SAS_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
 vuint16_t VCAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle;//2.7-->3.0 ���ƣ�SAS_Raw_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
//*****************32 bits split line
 vuint16_t VCAN_ALL_EPS_u16SAS_SteerWheelRotSpd;//4.7-->5.2 ���ƣ�SAS_SteerWheelRotSpd λ����14bit, logical min-max��-1024~1023.75 physical min-max��0x000~0x3FFE ���ȣ�0.125 ƫ������-8192 ��λ��deg_s 
 vuint8_t VCAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus;//5.1-->5.1 1 "Invalid" 0 "Valid" ���ƣ�SAS_SteerWheelRotSpdStatus λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1SAS_TrimmingSts;//5.0-->5.0 1 "Trimmed" 0 "Not trimmed" ���ƣ�SAS_TrimmingSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1SAS_SASStsSnsr;//6.7-->6.7 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1SAS_Raw_SASStsSnsr;//6.6-->6.6 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_Raw_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1SAS_SASStsCal;//6.5-->6.5 1 "sensor calibrated" 0 "sensor not calibrated" ���ƣ�SAS_SASStsCal λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1Rolling_counter_0x175;//6.3-->6.0 ���ƣ�Rolling_counter_0x175 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u4Checksum_0x175;//7.7-->7.0 ���ƣ�Checksum_0x175 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=2----EPS 2 the Data Frame ���ƣ�EPS_Advanced_0x176  ID��0x374  ���ڣ�10ms  λ����8�ֽ�EPS-->

 vuint16_t VCAN_ALL_EPS_uEPS_TorsionBarTorque;//0.7-->1.5 ���ƣ�EPS_TorsionBarTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
 vuint8_t VCAN_ALL_EPS_u11EPS_TosionBarTorqueValid;//1.4-->1.4 1 "Invalid" 0 "Vaild" ���ƣ�EPS_TosionBarTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint16_t VCAN_ALL_EPS_u1EPS_LKAResponseTorque;//1.3-->2.1 2047 "Invalid" ���ƣ�EPS_LKAResponseTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
 vuint8_t VCAN_ALL_EPS_u11EPS_LKAResponseTorqueValid;//2.0-->2.0 1 "Invalid" 0 "Vaild" ���ƣ�EPS_LKAResponseTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1EPS_LKAControlStatus;//3.7-->3.6 3 "Control request not allowed_Permanent" 2 "Control request not allowed_Temporarily" 1 "Request honored" 0 "No request" ���ƣ�EPS_LKAControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc1EPS_PAM_SteeringSts_Reserved_2_29_29;//3.5-->3.5 1 "Steering Position is adjusting" 0 "Steering Position is OK" ���ƣ�EPS_PAM_SteeringSts_Reserved λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u1EPS_LDWControlStatus;//3.4-->3.3 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Deactivated" ���ƣ�EPS_LDWControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc3Reserve_2_24_26;//3.2-->3.0
//*****************32 bits split line
 vuint8_t VCAN_ALL_EPS_u2EPS_EPSPAMInh;//4.7-->4.0 16 "EPS failure" 8 "Excess Angle Deviation" 4 "Abnormal CAN input" 2 "Driver Interference" 1 "Over Speed" 0 "Normal Operation" ���ƣ�EPS_EPSPAMInh λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc8Reserve_2_40_47;//5.7-->5.0
 vuint8_t VCAN_ALL_EPS_u8EPS_EPSPAMSts;//6.7-->6.4 7 "Failure" 6 "ADAS active" 5 "NRCD active" 4 "Reply for Control" 3 "Abort" 2 "Active" 1 "Available" 0 "Inhibit" ���ƣ�EPS_EPSPAMSts λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u4Rolling_counter_0x176;//6.3-->6.0 ���ƣ�Rolling_counter_0x176 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_EPS_u4Checksum_0x176;//7.7-->7.0 ���ƣ�Checksum_0x176 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//=======================64λԪ�ر���==============================(�ָ���)



//--Can_NR=1----EPS 1 the Data Frame ���ƣ�SAS_Sensor_0x175  ID��0x373  ���ڣ�10ms  λ����8�ֽ�EPS-->

 extern  vuint16_t VCAN_ALL_EPS_uSAS_SteerWheelAngle;//0.7-->1.0 ���ƣ�SAS_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
 extern  vuint16_t VCAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle;//2.7-->3.0 ���ƣ�SAS_Raw_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
//*****************32 bits split line
 extern  vuint16_t VCAN_ALL_EPS_u16SAS_SteerWheelRotSpd;//4.7-->5.2 ���ƣ�SAS_SteerWheelRotSpd λ����14bit, logical min-max��-1024~1023.75 physical min-max��0x000~0x3FFE ���ȣ�0.125 ƫ������-8192 ��λ��deg_s 
 extern  vuint8_t VCAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus;//5.1-->5.1 1 "Invalid" 0 "Valid" ���ƣ�SAS_SteerWheelRotSpdStatus λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1SAS_TrimmingSts;//5.0-->5.0 1 "Trimmed" 0 "Not trimmed" ���ƣ�SAS_TrimmingSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1SAS_SASStsSnsr;//6.7-->6.7 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1SAS_Raw_SASStsSnsr;//6.6-->6.6 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_Raw_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1SAS_SASStsCal;//6.5-->6.5 1 "sensor calibrated" 0 "sensor not calibrated" ���ƣ�SAS_SASStsCal λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1Rolling_counter_0x175;//6.3-->6.0 ���ƣ�Rolling_counter_0x175 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u4Checksum_0x175;//7.7-->7.0 ���ƣ�Checksum_0x175 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=2----EPS 2 the Data Frame ���ƣ�EPS_Advanced_0x176  ID��0x374  ���ڣ�10ms  λ����8�ֽ�EPS-->

 extern  vuint16_t VCAN_ALL_EPS_uEPS_TorsionBarTorque;//0.7-->1.5 ���ƣ�EPS_TorsionBarTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
 extern  vuint8_t VCAN_ALL_EPS_u11EPS_TosionBarTorqueValid;//1.4-->1.4 1 "Invalid" 0 "Vaild" ���ƣ�EPS_TosionBarTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint16_t VCAN_ALL_EPS_u1EPS_LKAResponseTorque;//1.3-->2.1 2047 "Invalid" ���ƣ�EPS_LKAResponseTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
 extern  vuint8_t VCAN_ALL_EPS_u11EPS_LKAResponseTorqueValid;//2.0-->2.0 1 "Invalid" 0 "Vaild" ���ƣ�EPS_LKAResponseTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1EPS_LKAControlStatus;//3.7-->3.6 3 "Control request not allowed_Permanent" 2 "Control request not allowed_Temporarily" 1 "Request honored" 0 "No request" ���ƣ�EPS_LKAControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc1EPS_PAM_SteeringSts_Reserved_2_29_29;//3.5-->3.5 1 "Steering Position is adjusting" 0 "Steering Position is OK" ���ƣ�EPS_PAM_SteeringSts_Reserved λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u1EPS_LDWControlStatus;//3.4-->3.3 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Deactivated" ���ƣ�EPS_LDWControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc3Reserve_2_24_26;//3.2-->3.0
//*****************32 bits split line
 extern  vuint8_t VCAN_ALL_EPS_u2EPS_EPSPAMInh;//4.7-->4.0 16 "EPS failure" 8 "Excess Angle Deviation" 4 "Abnormal CAN input" 2 "Driver Interference" 1 "Over Speed" 0 "Normal Operation" ���ƣ�EPS_EPSPAMInh λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc8Reserve_2_40_47;//5.7-->5.0
 extern  vuint8_t VCAN_ALL_EPS_u8EPS_EPSPAMSts;//6.7-->6.4 7 "Failure" 6 "ADAS active" 5 "NRCD active" 4 "Reply for Control" 3 "Abort" 2 "Active" 1 "Available" 0 "Inhibit" ���ƣ�EPS_EPSPAMSts λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u4Rolling_counter_0x176;//6.3-->6.0 ���ƣ�Rolling_counter_0x176 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_EPS_u4Checksum_0x176;//7.7-->7.0 ���ƣ�Checksum_0x176 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=1----EPS 1 the Data Frame ���ƣ�SAS_Sensor_0x175  ID��0x373  ���ڣ�10ms  λ����8�ֽ�EPS-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
         //vuint16_t VCAN_ALL_EPS_uSAS_SteerWheelAngle;//0.7-->1.0 ���ƣ�SAS_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
         //vuint16_t VCAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle;//2.7-->3.0 ���ƣ�SAS_Raw_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
        //*****************32 bits split line
         //vuint16_t VCAN_ALL_EPS_u16SAS_SteerWheelRotSpd;//4.7-->5.2 ���ƣ�SAS_SteerWheelRotSpd λ����14bit, logical min-max��-1024~1023.75 physical min-max��0x000~0x3FFE ���ȣ�0.125 ƫ������-8192 ��λ��deg_s 
        vuint8_t VCAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus;//5.1-->5.1 1 "Invalid" 0 "Valid" ���ƣ�SAS_SteerWheelRotSpdStatus λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_EPS_u1SAS_TrimmingSts;//5.0-->5.0 1 "Trimmed" 0 "Not trimmed" ���ƣ�SAS_TrimmingSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_EPS_u1SAS_SASStsSnsr;//6.7-->6.7 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_EPS_u1SAS_Raw_SASStsSnsr;//6.6-->6.6 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_Raw_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_EPS_u1SAS_SASStsCal;//6.5-->6.5 1 "sensor calibrated" 0 "sensor not calibrated" ���ƣ�SAS_SASStsCal λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_EPS_u1Rolling_counter_0x175;//6.3-->6.0 ���ƣ�Rolling_counter_0x175 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
         //vuint8_t VCAN_ALL_EPS_u4Checksum_0x175;//7.7-->7.0 ���ƣ�Checksum_0x175 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

     } B;
}  Vu8_EPS_1_SAS_Sensor_0x175_DataBit_tag;
extern Vu8_EPS_1_SAS_Sensor_0x175_DataBit_tag Vu8_EPS_1_SAS_Sensor_0x175_DataBit;


//--Can_NR=2----EPS 2 the Data Frame ���ƣ�EPS_Advanced_0x176  ID��0x374  ���ڣ�10ms  λ����8�ֽ�EPS-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
         //vuint16_t VCAN_ALL_EPS_uEPS_TorsionBarTorque;//0.7-->1.5 ���ƣ�EPS_TorsionBarTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
        vuint8_t VCAN_ALL_EPS_u11EPS_TosionBarTorqueValid;//1.4-->1.4 1 "Invalid" 0 "Vaild" ���ƣ�EPS_TosionBarTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
         //vuint16_t VCAN_ALL_EPS_u1EPS_LKAResponseTorque;//1.3-->2.1 2047 "Invalid" ���ƣ�EPS_LKAResponseTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
        vuint8_t VCAN_ALL_EPS_u11EPS_LKAResponseTorqueValid;//2.0-->2.0 1 "Invalid" 0 "Vaild" ���ƣ�EPS_LKAResponseTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_EPS_u1EPS_LKAControlStatus;//3.7-->3.6 3 "Control request not allowed_Permanent" 2 "Control request not allowed_Temporarily" 1 "Request honored" 0 "No request" ���ƣ�EPS_LKAControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t Vc1EPS_PAM_SteeringSts_Reserved_2_29_29;//3.5-->3.5 1 "Steering Position is adjusting" 0 "Steering Position is OK" ���ƣ�EPS_PAM_SteeringSts_Reserved λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_EPS_u1EPS_LDWControlStatus;//3.4-->3.3 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Deactivated" ���ƣ�EPS_LDWControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t Vc3Reserve_2_24_26;//3.2-->3.0
        //*****************32 bits split line
         //vuint8_t VCAN_ALL_EPS_u2EPS_EPSPAMInh;//4.7-->4.0 16 "EPS failure" 8 "Excess Angle Deviation" 4 "Abnormal CAN input" 2 "Driver Interference" 1 "Over Speed" 0 "Normal Operation" ���ƣ�EPS_EPSPAMInh λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
         //vuint8_t Vc8Reserve_2_40_47;//5.7-->5.0
        vuint8_t VCAN_ALL_EPS_u8EPS_EPSPAMSts;//6.7-->6.4 7 "Failure" 6 "ADAS active" 5 "NRCD active" 4 "Reply for Control" 3 "Abort" 2 "Active" 1 "Available" 0 "Inhibit" ���ƣ�EPS_EPSPAMSts λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_EPS_u4Rolling_counter_0x176;//6.3-->6.0 ���ƣ�Rolling_counter_0x176 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
         //vuint8_t VCAN_ALL_EPS_u4Checksum_0x176;//7.7-->7.0 ���ƣ�Checksum_0x176 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

     } B;
}  Vu8_EPS_2_EPS_Advanced_0x176_DataBit_tag;
extern Vu8_EPS_2_EPS_Advanced_0x176_DataBit_tag Vu8_EPS_2_EPS_Advanced_0x176_DataBit;

//--Can_NR=1----EPS 1 the Data Frame ���ƣ�SAS_Sensor_0x175  ID��0x373  ���ڣ�10ms  λ����8�ֽ�EPS-->

                if ( CAN1_ReceivedMessage [ALL_EPS_SAS_Sensor_0x175_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_EPS_SAS_Sensor_0x175_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_EPS.R[ 2*ALL_EPS_SAS_Sensor_0x175_FR+0] = CAN_ALL_FRMes_EPS.R[ 2*ALL_EPS_SAS_Sensor_0x175_FR+0]  ; 
                CAN_ALL_FRVar_EPS.R[ 2*ALL_EPS_SAS_Sensor_0x175_FR+1] = CAN_ALL_FRMes_EPS.R[ 2*ALL_EPS_SAS_Sensor_0x175_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_EPS_SAS_Sensor_0x175_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_EPS_SAS_Sensor_0x175_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_EPS_SAS_Sensor_0x175_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_EPS_SAS_Sensor_0x175_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_EPS = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_EPS.B.ALL_EPS_SAS_Sensor_0x175 = 1 ;  //�������屨��CAN�������ź�
                CAN_ALL_FRVar_EPS.R[2*ALL_EPS_SAS_Sensor_0x175_FR+0]=CAN_ALL_FRAMES_EPS.R[2*ALL_EPS_SAS_Sensor_0x175_FR+0];
                CAN_ALL_FRVar_EPS.R[2*ALL_EPS_SAS_Sensor_0x175_FR+1]=CAN_ALL_FRAMES_EPS.R[2*ALL_EPS_SAS_Sensor_0x175_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_EPS_SAS_Sensor_0x175_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_EPS_SAS_Sensor_0x175_CH]  == 1 ) {


                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_uSAS_SteerWheelAngle= CAN_ALL_EPS_uSAS_SteerWheelAngle_min;//0.7-->1.0 ���ƣ�SAS_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle= CAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle_min;//2.7-->3.0 ���ƣ�SAS_Raw_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u16SAS_SteerWheelRotSpd= CAN_ALL_EPS_u16SAS_SteerWheelRotSpd_min;//4.7-->5.2 ���ƣ�SAS_SteerWheelRotSpd λ����14bit, logical min-max��-1024~1023.75 physical min-max��0x000~0x3FFE ���ȣ�0.125 ƫ������-8192 ��λ��deg_s 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus= CAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus_min;//5.1-->5.1 1 "Invalid" 0 "Valid" ���ƣ�SAS_SteerWheelRotSpdStatus λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u1SAS_TrimmingSts= CAN_ALL_EPS_u1SAS_TrimmingSts_min;//5.0-->5.0 1 "Trimmed" 0 "Not trimmed" ���ƣ�SAS_TrimmingSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u1SAS_SASStsSnsr= CAN_ALL_EPS_u1SAS_SASStsSnsr_min;//6.7-->6.7 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u1SAS_Raw_SASStsSnsr= CAN_ALL_EPS_u1SAS_Raw_SASStsSnsr_min;//6.6-->6.6 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_Raw_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u1SAS_SASStsCal= CAN_ALL_EPS_u1SAS_SASStsCal_min;//6.5-->6.5 1 "sensor calibrated" 0 "sensor not calibrated" ���ƣ�SAS_SASStsCal λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u1Rolling_counter_0x175= CAN_ALL_EPS_u1Rolling_counter_0x175_min;//6.3-->6.0 ���ƣ�Rolling_counter_0x175 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u4Checksum_0x175= CAN_ALL_EPS_u4Checksum_0x175_min;//7.7-->7.0 ���ƣ�Checksum_0x175 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_uSAS_SteerWheelAngle=VCAN_ALL_EPS_uSAS_SteerWheelAngle;//0.7-->1.0 ���ƣ�SAS_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle=VCAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle;//2.7-->3.0 ���ƣ�SAS_Raw_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u16SAS_SteerWheelRotSpd=VCAN_ALL_EPS_u16SAS_SteerWheelRotSpd;//4.7-->5.2 ���ƣ�SAS_SteerWheelRotSpd λ����14bit, logical min-max��-1024~1023.75 physical min-max��0x000~0x3FFE ���ȣ�0.125 ƫ������-8192 ��λ��deg_s 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus=VCAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus;//5.1-->5.1 1 "Invalid" 0 "Valid" ���ƣ�SAS_SteerWheelRotSpdStatus λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1SAS_TrimmingSts=VCAN_ALL_EPS_u1SAS_TrimmingSts;//5.0-->5.0 1 "Trimmed" 0 "Not trimmed" ���ƣ�SAS_TrimmingSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1SAS_SASStsSnsr=VCAN_ALL_EPS_u1SAS_SASStsSnsr;//6.7-->6.7 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1SAS_Raw_SASStsSnsr=VCAN_ALL_EPS_u1SAS_Raw_SASStsSnsr;//6.6-->6.6 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_Raw_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1SAS_SASStsCal=VCAN_ALL_EPS_u1SAS_SASStsCal;//6.5-->6.5 1 "sensor calibrated" 0 "sensor not calibrated" ���ƣ�SAS_SASStsCal λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1Rolling_counter_0x175=VCAN_ALL_EPS_u1Rolling_counter_0x175;//6.3-->6.0 ���ƣ�Rolling_counter_0x175 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u4Checksum_0x175=VCAN_ALL_EPS_u4Checksum_0x175;//7.7-->7.0 ���ƣ�Checksum_0x175 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                VCAN_ALL_EPS_uSAS_SteerWheelAngle=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_uSAS_SteerWheelAngle;//0.7-->1.0 ���ƣ�SAS_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
                VCAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u16SAS_Raw_SteerWheelAngle;//2.7-->3.0 ���ƣ�SAS_Raw_SteerWheelAngle λ����16bit, logical min-max��-780~779.7092 physical min-max��0x000~0xFFFE ���ȣ�0.0238 ƫ������-32773.1092436975 ��λ��deg 
                VCAN_ALL_EPS_u16SAS_SteerWheelRotSpd=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u16SAS_SteerWheelRotSpd;//4.7-->5.2 ���ƣ�SAS_SteerWheelRotSpd λ����14bit, logical min-max��-1024~1023.75 physical min-max��0x000~0x3FFE ���ȣ�0.125 ƫ������-8192 ��λ��deg_s 
                VCAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u14SAS_SteerWheelRotSpdStatus;//5.1-->5.1 1 "Invalid" 0 "Valid" ���ƣ�SAS_SteerWheelRotSpdStatus λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_EPS_u1SAS_TrimmingSts=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1SAS_TrimmingSts;//5.0-->5.0 1 "Trimmed" 0 "Not trimmed" ���ƣ�SAS_TrimmingSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_EPS_u1SAS_SASStsSnsr=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1SAS_SASStsSnsr;//6.7-->6.7 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_EPS_u1SAS_Raw_SASStsSnsr=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1SAS_Raw_SASStsSnsr;//6.6-->6.6 1 "sensor value  valid" 0 "sensor value  Invalid" ���ƣ�SAS_Raw_SASStsSnsr λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_EPS_u1SAS_SASStsCal=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1SAS_SASStsCal;//6.5-->6.5 1 "sensor calibrated" 0 "sensor not calibrated" ���ƣ�SAS_SASStsCal λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_EPS_u1Rolling_counter_0x175=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1Rolling_counter_0x175;//6.3-->6.0 ���ƣ�Rolling_counter_0x175 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_EPS_u4Checksum_0x175=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u4Checksum_0x175;//7.7-->7.0 ���ƣ�Checksum_0x175 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_SAS_Sensor_0x175_FR+7] =Vu8_EPS_1_SAS_Sensor_0x175_Data7Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_SAS_Sensor_0x175_FR+6] =Vu8_EPS_1_SAS_Sensor_0x175_Data6Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_SAS_Sensor_0x175_FR+5] =Vu8_EPS_1_SAS_Sensor_0x175_Data5Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_SAS_Sensor_0x175_FR+4] =Vu8_EPS_1_SAS_Sensor_0x175_Data4Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_SAS_Sensor_0x175_FR+3] =Vu8_EPS_1_SAS_Sensor_0x175_Data3Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_SAS_Sensor_0x175_FR+2] =Vu8_EPS_1_SAS_Sensor_0x175_Data2Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_SAS_Sensor_0x175_FR+1] =Vu8_EPS_1_SAS_Sensor_0x175_Data1Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_SAS_Sensor_0x175_FR+0] =Vu8_EPS_1_SAS_Sensor_0x175_Data0Bit.R;

                Vu8_EPS_1_SAS_Sensor_0x175_Data7Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_SAS_Sensor_0x175_FR + 7];
                Vu8_EPS_1_SAS_Sensor_0x175_Data6Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_SAS_Sensor_0x175_FR + 6];
                Vu8_EPS_1_SAS_Sensor_0x175_Data5Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_SAS_Sensor_0x175_FR + 5];
                Vu8_EPS_1_SAS_Sensor_0x175_Data4Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_SAS_Sensor_0x175_FR + 4];
                Vu8_EPS_1_SAS_Sensor_0x175_Data3Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_SAS_Sensor_0x175_FR + 3];
                Vu8_EPS_1_SAS_Sensor_0x175_Data2Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_SAS_Sensor_0x175_FR + 2];
                Vu8_EPS_1_SAS_Sensor_0x175_Data1Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_SAS_Sensor_0x175_FR + 1];
                Vu8_EPS_1_SAS_Sensor_0x175_Data0Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_SAS_Sensor_0x175_FR + 0];



//--Can_NR=2----EPS 2 the Data Frame ���ƣ�EPS_Advanced_0x176  ID��0x374  ���ڣ�10ms  λ����8�ֽ�EPS-->

                if ( CAN1_ReceivedMessage [ALL_EPS_EPS_Advanced_0x176_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_EPS_EPS_Advanced_0x176_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_EPS.R[ 2*ALL_EPS_EPS_Advanced_0x176_FR+0] = CAN_ALL_FRMes_EPS.R[ 2*ALL_EPS_EPS_Advanced_0x176_FR+0]  ; 
                CAN_ALL_FRVar_EPS.R[ 2*ALL_EPS_EPS_Advanced_0x176_FR+1] = CAN_ALL_FRMes_EPS.R[ 2*ALL_EPS_EPS_Advanced_0x176_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_EPS_EPS_Advanced_0x176_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_EPS_EPS_Advanced_0x176_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_EPS_EPS_Advanced_0x176_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_EPS_EPS_Advanced_0x176_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_EPS = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_EPS.B.ALL_EPS_EPS_Advanced_0x176 = 1 ;  //�������屨��CAN�������ź�
                CAN_ALL_FRVar_EPS.R[2*ALL_EPS_EPS_Advanced_0x176_FR+0]=CAN_ALL_FRAMES_EPS.R[2*ALL_EPS_EPS_Advanced_0x176_FR+0];
                CAN_ALL_FRVar_EPS.R[2*ALL_EPS_EPS_Advanced_0x176_FR+1]=CAN_ALL_FRAMES_EPS.R[2*ALL_EPS_EPS_Advanced_0x176_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_EPS_EPS_Advanced_0x176_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_EPS_EPS_Advanced_0x176_CH]  == 1 ) {


                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_uEPS_TorsionBarTorque= CAN_ALL_EPS_uEPS_TorsionBarTorque_min;//0.7-->1.5 ���ƣ�EPS_TorsionBarTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u11EPS_TosionBarTorqueValid= CAN_ALL_EPS_u11EPS_TosionBarTorqueValid_min;//1.4-->1.4 1 "Invalid" 0 "Vaild" ���ƣ�EPS_TosionBarTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u1EPS_LKAResponseTorque= CAN_ALL_EPS_u1EPS_LKAResponseTorque_min;//1.3-->2.1 2047 "Invalid" ���ƣ�EPS_LKAResponseTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u11EPS_LKAResponseTorqueValid= CAN_ALL_EPS_u11EPS_LKAResponseTorqueValid_min;//2.0-->2.0 1 "Invalid" 0 "Vaild" ���ƣ�EPS_LKAResponseTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u1EPS_LKAControlStatus= CAN_ALL_EPS_u1EPS_LKAControlStatus_min;//3.7-->3.6 3 "Control request not allowed_Permanent" 2 "Control request not allowed_Temporarily" 1 "Request honored" 0 "No request" ���ƣ�EPS_LKAControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B.c1EPS_PAM_SteeringSts_Reserved_2_29_29= CAN_ALL_EPS_c1EPS_PAM_SteeringSts_Reserved_2_29_29_min;//3.5-->3.5 1 "Steering Position is adjusting" 0 "Steering Position is OK" ���ƣ�EPS_PAM_SteeringSts_Reserved λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u1EPS_LDWControlStatus= CAN_ALL_EPS_u1EPS_LDWControlStatus_min;//3.4-->3.3 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Deactivated" ���ƣ�EPS_LDWControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B.c3Reserve_2_24_26= CAN_ALL_EPS_c3Reserve_2_24_26_min;//3.2-->3.0
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u2EPS_EPSPAMInh= CAN_ALL_EPS_u2EPS_EPSPAMInh_min;//4.7-->4.0 16 "EPS failure" 8 "Excess Angle Deviation" 4 "Abnormal CAN input" 2 "Driver Interference" 1 "Over Speed" 0 "Normal Operation" ���ƣ�EPS_EPSPAMInh λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B.c8Reserve_2_40_47= CAN_ALL_EPS_c8Reserve_2_40_47_min;//5.7-->5.0
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u8EPS_EPSPAMSts= CAN_ALL_EPS_u8EPS_EPSPAMSts_min;//6.7-->6.4 7 "Failure" 6 "ADAS active" 5 "NRCD active" 4 "Reply for Control" 3 "Abort" 2 "Active" 1 "Available" 0 "Inhibit" ���ƣ�EPS_EPSPAMSts λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u4Rolling_counter_0x176= CAN_ALL_EPS_u4Rolling_counter_0x176_min;//6.3-->6.0 ���ƣ�Rolling_counter_0x176 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_EPS.B. CAN_ALL_EPS_u4Checksum_0x176= CAN_ALL_EPS_u4Checksum_0x176_min;//7.7-->7.0 ���ƣ�Checksum_0x176 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_uEPS_TorsionBarTorque=VCAN_ALL_EPS_uEPS_TorsionBarTorque;//0.7-->1.5 ���ƣ�EPS_TorsionBarTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u11EPS_TosionBarTorqueValid=VCAN_ALL_EPS_u11EPS_TosionBarTorqueValid;//1.4-->1.4 1 "Invalid" 0 "Vaild" ���ƣ�EPS_TosionBarTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1EPS_LKAResponseTorque=VCAN_ALL_EPS_u1EPS_LKAResponseTorque;//1.3-->2.1 2047 "Invalid" ���ƣ�EPS_LKAResponseTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u11EPS_LKAResponseTorqueValid=VCAN_ALL_EPS_u11EPS_LKAResponseTorqueValid;//2.0-->2.0 1 "Invalid" 0 "Vaild" ���ƣ�EPS_LKAResponseTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1EPS_LKAControlStatus=VCAN_ALL_EPS_u1EPS_LKAControlStatus;//3.7-->3.6 3 "Control request not allowed_Permanent" 2 "Control request not allowed_Temporarily" 1 "Request honored" 0 "No request" ���ƣ�EPS_LKAControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B.c1EPS_PAM_SteeringSts_Reserved_2_29_29=Vc1EPS_PAM_SteeringSts_Reserved_2_29_29;//3.5-->3.5 1 "Steering Position is adjusting" 0 "Steering Position is OK" ���ƣ�EPS_PAM_SteeringSts_Reserved λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1EPS_LDWControlStatus=VCAN_ALL_EPS_u1EPS_LDWControlStatus;//3.4-->3.3 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Deactivated" ���ƣ�EPS_LDWControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B.c3Reserve_2_24_26=Vc3Reserve_2_24_26;//3.2-->3.0
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u2EPS_EPSPAMInh=VCAN_ALL_EPS_u2EPS_EPSPAMInh;//4.7-->4.0 16 "EPS failure" 8 "Excess Angle Deviation" 4 "Abnormal CAN input" 2 "Driver Interference" 1 "Over Speed" 0 "Normal Operation" ���ƣ�EPS_EPSPAMInh λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B.c8Reserve_2_40_47=Vc8Reserve_2_40_47;//5.7-->5.0
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u8EPS_EPSPAMSts=VCAN_ALL_EPS_u8EPS_EPSPAMSts;//6.7-->6.4 7 "Failure" 6 "ADAS active" 5 "NRCD active" 4 "Reply for Control" 3 "Abort" 2 "Active" 1 "Available" 0 "Inhibit" ���ƣ�EPS_EPSPAMSts λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u4Rolling_counter_0x176=VCAN_ALL_EPS_u4Rolling_counter_0x176;//6.3-->6.0 ���ƣ�Rolling_counter_0x176 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u4Checksum_0x176=VCAN_ALL_EPS_u4Checksum_0x176;//7.7-->7.0 ���ƣ�Checksum_0x176 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                VCAN_ALL_EPS_uEPS_TorsionBarTorque=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_uEPS_TorsionBarTorque;//0.7-->1.5 ���ƣ�EPS_TorsionBarTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
                VCAN_ALL_EPS_u11EPS_TosionBarTorqueValid=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u11EPS_TosionBarTorqueValid;//1.4-->1.4 1 "Invalid" 0 "Vaild" ���ƣ�EPS_TosionBarTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_EPS_u1EPS_LKAResponseTorque=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1EPS_LKAResponseTorque;//1.3-->2.1 2047 "Invalid" ���ƣ�EPS_LKAResponseTorque λ����11bit, logical min-max��-10.24~10.22 physical min-max��0x000~0x7FE ���ȣ�0.01 ƫ������-1024 ��λ��Nm 
                VCAN_ALL_EPS_u11EPS_LKAResponseTorqueValid=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u11EPS_LKAResponseTorqueValid;//2.0-->2.0 1 "Invalid" 0 "Vaild" ���ƣ�EPS_LKAResponseTorqueValid λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_EPS_u1EPS_LKAControlStatus=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1EPS_LKAControlStatus;//3.7-->3.6 3 "Control request not allowed_Permanent" 2 "Control request not allowed_Temporarily" 1 "Request honored" 0 "No request" ���ƣ�EPS_LKAControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                Vc1EPS_PAM_SteeringSts_Reserved_2_29_29=CAN_ALL_FRVar_EPS.B.c1EPS_PAM_SteeringSts_Reserved_2_29_29;//3.5-->3.5 1 "Steering Position is adjusting" 0 "Steering Position is OK" ���ƣ�EPS_PAM_SteeringSts_Reserved λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_EPS_u1EPS_LDWControlStatus=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u1EPS_LDWControlStatus;//3.4-->3.3 3 "Reserved" 2 "Active" 1 "Inactive" 0 "Deactivated" ���ƣ�EPS_LDWControlStatus λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                Vc3Reserve_2_24_26=CAN_ALL_FRVar_EPS.B.c3Reserve_2_24_26;//3.2-->3.0
                VCAN_ALL_EPS_u2EPS_EPSPAMInh=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u2EPS_EPSPAMInh;//4.7-->4.0 16 "EPS failure" 8 "Excess Angle Deviation" 4 "Abnormal CAN input" 2 "Driver Interference" 1 "Over Speed" 0 "Normal Operation" ���ƣ�EPS_EPSPAMInh λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
                Vc8Reserve_2_40_47=CAN_ALL_FRVar_EPS.B.c8Reserve_2_40_47;//5.7-->5.0
                VCAN_ALL_EPS_u8EPS_EPSPAMSts=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u8EPS_EPSPAMSts;//6.7-->6.4 7 "Failure" 6 "ADAS active" 5 "NRCD active" 4 "Reply for Control" 3 "Abort" 2 "Active" 1 "Available" 0 "Inhibit" ���ƣ�EPS_EPSPAMSts λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_EPS_u4Rolling_counter_0x176=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u4Rolling_counter_0x176;//6.3-->6.0 ���ƣ�Rolling_counter_0x176 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_EPS_u4Checksum_0x176=CAN_ALL_FRVar_EPS.B. CAN_ALL_EPS_u4Checksum_0x176;//7.7-->7.0 ���ƣ�Checksum_0x176 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_EPS_Advanced_0x176_FR+7] =Vu8_EPS_2_EPS_Advanced_0x176_Data7Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_EPS_Advanced_0x176_FR+6] =Vu8_EPS_2_EPS_Advanced_0x176_Data6Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_EPS_Advanced_0x176_FR+5] =Vu8_EPS_2_EPS_Advanced_0x176_Data5Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_EPS_Advanced_0x176_FR+4] =Vu8_EPS_2_EPS_Advanced_0x176_Data4Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_EPS_Advanced_0x176_FR+3] =Vu8_EPS_2_EPS_Advanced_0x176_Data3Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_EPS_Advanced_0x176_FR+2] =Vu8_EPS_2_EPS_Advanced_0x176_Data2Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_EPS_Advanced_0x176_FR+1] =Vu8_EPS_2_EPS_Advanced_0x176_Data1Bit.R;
                CAN_ALL_FRVar_EPS.By[ 8*ALL_EPS_EPS_Advanced_0x176_FR+0] =Vu8_EPS_2_EPS_Advanced_0x176_Data0Bit.R;

                Vu8_EPS_2_EPS_Advanced_0x176_Data7Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_EPS_Advanced_0x176_FR + 7];
                Vu8_EPS_2_EPS_Advanced_0x176_Data6Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_EPS_Advanced_0x176_FR + 6];
                Vu8_EPS_2_EPS_Advanced_0x176_Data5Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_EPS_Advanced_0x176_FR + 5];
                Vu8_EPS_2_EPS_Advanced_0x176_Data4Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_EPS_Advanced_0x176_FR + 4];
                Vu8_EPS_2_EPS_Advanced_0x176_Data3Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_EPS_Advanced_0x176_FR + 3];
                Vu8_EPS_2_EPS_Advanced_0x176_Data2Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_EPS_Advanced_0x176_FR + 2];
                Vu8_EPS_2_EPS_Advanced_0x176_Data1Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_EPS_Advanced_0x176_FR + 1];
                Vu8_EPS_2_EPS_Advanced_0x176_Data0Bit.R=CAN_ALL_FRVar_EPS.By[8 * ALL_EPS_EPS_Advanced_0x176_FR + 0];


//--2 th CAN ���ĳ�ʼ���ӳ���------------
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_EPS_SAS_Sensor_0x175_CH];//Can_NR=1
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_EPS_EPS_Advanced_0x176_CH];//Can_NR=2

//--Can_NR=1----EPS 1 the Data Frame ���ƣ�SAS_Sensor_0x175  ID��0x373  ���ڣ�10ms  λ����8�ֽ�EPS-->

                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH]ID.B.ID_STD= ALL_EPS_SAS_Sensor_0x175_ID;
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].CS.B.IDE = ALL_EPS_SAS_Sensor_0x175_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].CS.B.DLC =ALL_EPS_SAS_Sensor_0x175_LH; 

//--Can_NR=2----EPS 2 the Data Frame ���ƣ�EPS_Advanced_0x176  ID��0x374  ���ڣ�10ms  λ����8�ֽ�EPS-->

                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH]ID.B.ID_STD= ALL_EPS_EPS_Advanced_0x176_ID;
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].CS.B.IDE = ALL_EPS_EPS_Advanced_0x176_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].CS.B.DLC =ALL_EPS_EPS_Advanced_0x176_LH; 
//--3 th CAN ���Ľ����ж��ӳ���------------

//--Can_NR=1----EPS 1 the Data Frame ���ƣ�SAS_Sensor_0x175  ID��0x373  ���ڣ�10ms  λ����8�ֽ�EPS-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_EPS_SAS_Sensor_0x175_CH]  == 0) {
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+0] = CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[0]; 
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+1] = CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[1];
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+2] = CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[2];
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+3] = CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[3];
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+4] = CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[4];
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+5] = CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[5];
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+6] = CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[6];
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+7] = CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[7];
               Error_CAN1.B.ALL_EPS = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_EPS.B.ALL_EPS_SAS_Sensor_0x175 = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_EPS_SAS_Sensor_0x175_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_EPS_SAS_Sensor_0x175_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_EPS_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=2----EPS 2 the Data Frame ���ƣ�EPS_Advanced_0x176  ID��0x374  ���ڣ�10ms  λ����8�ֽ�EPS-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_EPS_EPS_Advanced_0x176_CH]  == 0) {
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+0] = CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[0]; 
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+1] = CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[1];
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+2] = CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[2];
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+3] = CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[3];
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+4] = CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[4];
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+5] = CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[5];
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+6] = CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[6];
                CAN_ALL_FRMes_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+7] = CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[7];
               Error_CAN1.B.ALL_EPS = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_EPS.B.ALL_EPS_EPS_Advanced_0x176 = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_EPS_EPS_Advanced_0x176_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_EPS_EPS_Advanced_0x176_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_EPS_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  
//--4 th CAN ���ķ����ӳ���------------                    

//--Can_NR=1----EPS 1 the Data Frame ���ƣ�SAS_Sensor_0x175  ID��0x373  ���ڣ�10ms  λ����8�ֽ�EPS-->
                 if ( ( Pit0Ctr_10MS % ALL_EPS_SAS_Sensor_0x175_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_EPS_SAS_Sensor_0x175_CH] ;
                if ( D00CTR_def_CAN1_ALL_EPS.B.ALL_EPS_SAS_Sensor_0x175T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[0] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+0];
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[1] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+1];
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[2] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+2];
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[3] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+3];
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[4] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+4];
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[5] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+5];
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[6] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+6];
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].DATA.B[7] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_SAS_Sensor_0x175_FR+7];
                CAN1.MB[ALL_EPS_SAS_Sensor_0x175_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_EPS_SAS_Sensor_0x175_Ay] = ALL_EPS_SAS_Sensor_0x175_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_EPS.B.ALL_EPS_SAS_Sensor_0x175T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_EPS_SAS_Sensor_0x175_DT ) == 0 ) {


//--Can_NR=2----EPS 2 the Data Frame ���ƣ�EPS_Advanced_0x176  ID��0x374  ���ڣ�10ms  λ����8�ֽ�EPS-->
                 if ( ( Pit0Ctr_10MS % ALL_EPS_EPS_Advanced_0x176_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_EPS_EPS_Advanced_0x176_CH] ;
                if ( D00CTR_def_CAN1_ALL_EPS.B.ALL_EPS_EPS_Advanced_0x176T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[0] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+0];
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[1] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+1];
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[2] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+2];
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[3] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+3];
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[4] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+4];
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[5] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+5];
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[6] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+6];
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].DATA.B[7] = CAN_ALL_FRVar_EPS.By[8*ALL_EPS_EPS_Advanced_0x176_FR+7];
                CAN1.MB[ALL_EPS_EPS_Advanced_0x176_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_EPS_EPS_Advanced_0x176_Ay] = ALL_EPS_EPS_Advanced_0x176_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_EPS.B.ALL_EPS_EPS_Advanced_0x176T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_EPS_EPS_Advanced_0x176_DT ) == 0 ) {


//=========================================================

#endif // _CAN_ALL_EPS_H 