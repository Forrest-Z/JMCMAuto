#ifndef  _CAN_ALL_SRS_H
#define  _CAN_ALL_SRS_H

#include "project.h"

//--Can_NR=1frame id is 0xFFFFFFFF80000350
//848 SRS_CrashOutputSts 1 "Crash" 0 "No crash"
#define  CAN_ALL_SRS_cb1SRS_CrashOutputSts_Crash 1
#define  CAN_ALL_SRS_cb1SRS_CrashOutputSts_No_crash  0 
//848 SRS_SBR_Driver 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off"
#define  CAN_ALL_SRS_ce2SRS_SBR_Driver_Fault_Reserved 3
#define  CAN_ALL_SRS_ce2SRS_SBR_Driver_Lamp_On  2 
#define  CAN_ALL_SRS_ce2SRS_SBR_Driver_Lamp_Flashing_Reserved  1 
#define  CAN_ALL_SRS_ce2SRS_SBR_Driver_Lamp_Off  0 
//848 SRS_SBR_PAMsenger 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off"
#define  CAN_ALL_SRS_ce2SRS_SBR_PAMsenger_Fault_Reserved 3
#define  CAN_ALL_SRS_ce2SRS_SBR_PAMsenger_Lamp_On  2 
#define  CAN_ALL_SRS_ce2SRS_SBR_PAMsenger_Lamp_Flashing_Reserved  1 
#define  CAN_ALL_SRS_ce2SRS_SBR_PAMsenger_Lamp_Off  0 
//848 SRS_SBR_SecondRowLeft 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off"
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowLeft_Fault_Reserved 3
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowLeft_Lamp_On  2 
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowLeft_Lamp_Flashing_Reserved  1 
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowLeft_Lamp_Off  0 
//848 SRS_SBR_SecondRowMid 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off"
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowMid_Fault_Reserved 3
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowMid_Lamp_On  2 
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowMid_Lamp_Flashing_Reserved  1 
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowMid_Lamp_Off  0 
//848 SRS_SBR_SecondRowRight 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off"
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowRight_Fault_Reserved 3
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowRight_Lamp_On  2 
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowRight_Lamp_Flashing_Reserved  1 
#define  CAN_ALL_SRS_ce2SRS_SBR_SecondRowRight_Lamp_Off  0 
//848 SRS_AirBagFailSts 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off"
#define  CAN_ALL_SRS_ce2SRS_AirBagFailSts_reserved 3
#define  CAN_ALL_SRS_ce2SRS_AirBagFailSts_lamp_on  2 
#define  CAN_ALL_SRS_ce2SRS_AirBagFailSts_lamp_flash  1 
#define  CAN_ALL_SRS_ce2SRS_AirBagFailSts_lamp_off  0 

//CAN�з��ű������ñ�������������

//CAN�޷��ű�����define�ñ�����physical min-max
#define  CAN_ALL_SRS_u1SRS_CrashOutputSts_min 0
#define  CAN_ALL_SRS_u1SRS_CrashOutputSts_max 0x1
#define  CAN_ALL_SRS_u2SRS_SBR_Driver_min 0
#define  CAN_ALL_SRS_u2SRS_SBR_Driver_max 0x3
#define  CAN_ALL_SRS_u2SRS_SBR_PAMsenger_min 0
#define  CAN_ALL_SRS_u2SRS_SBR_PAMsenger_max 0x3
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft_min 0
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft_max 0x3
#define  CAN_ALL_SRS_c3Reserve_1_0_2_min 0
#define  CAN_ALL_SRS_c3Reserve_1_0_2_max 0x7
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowMid_min 0
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowMid_max 0x3
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowRight_min 0
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowRight_max 0x3
#define  CAN_ALL_SRS_u2SRS_AirBagFailSts_min 0
#define  CAN_ALL_SRS_u2SRS_AirBagFailSts_max 0x3
#define  CAN_ALL_SRS_c1Reserve_1_9_9_min 0
#define  CAN_ALL_SRS_c1Reserve_1_9_9_max 0x1
#define  CAN_ALL_SRS_u4Rolling_counter_0x350_min 0
#define  CAN_ALL_SRS_u4Rolling_counter_0x350_max 0xF
#define  CAN_ALL_SRS_u8Checksum_0x350_min 0
#define  CAN_ALL_SRS_u8Checksum_0x350_max 0xFF

//CANfactor���ӷ�ĸ����
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowRight_factor 1
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowMid_factor 1
#define  CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft_factor 1
#define  CAN_ALL_SRS_u2SRS_SBR_PAMsenger_factor 1
#define  CAN_ALL_SRS_u4Rolling_counter_0x350_factor 1
#define  CAN_ALL_SRS_u2SRS_SBR_Driver_factor 1
#define  CAN_ALL_SRS_u8Checksum_0x350_factor 1
#define  CAN_ALL_SRS_u1SRS_CrashOutputSts_factor 1
#define  CAN_ALL_SRS_u2SRS_AirBagFailSts_factor 1

//#define  ��������_CH��CAN����ͨ���ţ�    �������+10��#define  �ṹ������_CH���ṹ��ͨ���ţ�  ������ţ�#define ��������_ID ��CAN����ID��  ����CAN ID��#define ��������_DT  (CAN��������)  ����ʱ�����á�MS��/10�� #define ��������_TorR(CAN���ķ��ͻ����)    ����1������0

//--Can_NR=1----SRS 1 th Data Frame ���ƣ�SRS_0x350  ID��0X848  ���ڣ�100ms  DLC��8�ֽ�SRS-->GW
#define ALL_SRS_SRS_0x350_CH 1
#define ALL_SRS_SRS_0x350_FR 1
#define ALL_SRS_SRS_0x350_ID 0XFFFFFFFF80000350
#define ALL_SRS_SRS_0x350_DT 10 //xxMS/10
#define ALL_SRS_SRS_0x350_TorR 0
#define ALL_SRS_SRS_0x350_Ay 0
#define ALL_SRS_SRS_0x350_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_SRS_SRS_0x350_LH 8//LENGTH <=8


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
//-----------------------1 CAN Data Frames-----------------------------------------------------------
typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[16];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[8];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[4];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[4];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[2];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint32_t R[2];                                      


//--Can_NR=1----SRS 1 the Data Frame ���ƣ�SRS_0x350  ID��0x848  ���ڣ�100ms  λ����8�ֽ�SRS-->
  vuint32_t  CAN_ALL_SRS_uSRS_CrashOutputSts:1;//0.7-->0.7 1 "Crash" 0 "No crash" ���ƣ�SRS_CrashOutputSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_SRS_u1SRS_SBR_Driver:2;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_Driver λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_SRS_u2SRS_SBR_PAMsenger:2;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_PAMsenger λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c3Reserve_1_0_2:3;//0.2-->0.0
  vuint32_t  CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft:2;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowLeft λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_SRS_u2SRS_SBR_SecondRowMid:2;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowMid λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_SRS_u2SRS_SBR_SecondRowRight:2;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowRight λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t c1Reserve_1_9_9:1;//1.1-->1.1
  vuint32_t  CAN_ALL_SRS_u2SRS_AirBagFailSts:2;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" ���ƣ�SRS_AirBagFailSts λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_SRS_u2Rolling_counter_0x350:4;//6.3-->6.0 ���ƣ�Rolling_counter_0x350 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint32_t  CAN_ALL_SRS_u4Checksum_0x350:8;//7.7-->7.0 ���ƣ�Checksum_0x350 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 
    } B;
} CAN_ALL_FRAMES_SRS_tag;

typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[16];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[8];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[4];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[4];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[2];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint64_t R[1];                                      


//--Can_NR=1----SRS 1 the Data Frame ���ƣ�SRS_0x350  ID��0x848  ���ڣ�100ms  λ����8�ֽ�SRS-->
  vuint64_t  CAN_ALL_SRS_uSRS_CrashOutputSts:1;//0.7-->0.7 1 "Crash" 0 "No crash" ���ƣ�SRS_CrashOutputSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_SRS_u1SRS_SBR_Driver:2;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_Driver λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_SRS_u2SRS_SBR_PAMsenger:2;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_PAMsenger λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c3Reserve_1_0_2:3;//0.2-->0.0
  vuint64_t  CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft:2;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowLeft λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_SRS_u2SRS_SBR_SecondRowMid:2;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowMid λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_SRS_u2SRS_SBR_SecondRowRight:2;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowRight λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t c1Reserve_1_9_9:1;//1.1-->1.1
  vuint64_t  CAN_ALL_SRS_u2SRS_AirBagFailSts:2;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" ���ƣ�SRS_AirBagFailSts λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_SRS_u2Rolling_counter_0x350:4;//6.3-->6.0 ���ƣ�Rolling_counter_0x350 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
  vuint64_t  CAN_ALL_SRS_u4Checksum_0x350:8;//7.7-->7.0 ���ƣ�Checksum_0x350 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

    } B;
} CAN_ALL_FRAMES_SRS_tag;
extern CAN_ALL_FRAMES_SRS_tag CAN_ALL_FRAMES_SRS;
extern CAN_ALL_FRAMES_SRS_tag CAN_ALL_FRMes_SRS;
extern CAN_ALL_FRAMES_SRS_tag CAN_ALL_FRVar_SRS;
extern CAN_ALL_FRAMES_SRS_tag CAN_ALL_FRVarOld_SRS;

//--1 th CAN �������ݴ����ӳ���------------
                CAN1_noReceivedMessageTime[ALL_SRS_SRS_0x350_CH]++;//Can_NR=1
typedef union {
    vuint8_t R;
    struct { //ALL_SRS ���ձ��Ĺ���
        vuint8_t ALL_SRS_SRS_0x350: 1; //Can_NR=1
    } B;
} Error_CAN1_ALL_SRS_tag ;
extern Error_CAN1_ALL_SRS_tag Error_CAN1_ALL_SRS ;
typedef union {
    vuint8_t R;
    struct { //ALL_SRS ���ձ��Ĺ���
        vuint8_t ALL_SRS_SRS_0x350T: 1; //Can_NR=1
    } B;
}  D00CTR_def_CAN1_ALL_SRS_tag ;
extern  D00CTR_def_CAN1_ALL_SRS_tag D00CTR_def_CAN1_ALL_SRS ;


//--Can_NR=1----SRS 1 the Data Frame ���ƣ�SRS_0x350  ID��0x848  ���ڣ�100ms  λ����8�ֽ�SRS-->

 vuint8_t VCAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" ���ƣ�SRS_CrashOutputSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_Driver λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_PAMsenger λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc3Reserve_1_0_2;//0.2-->0.0
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowLeft λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowMid λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowRight λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc1Reserve_1_9_9;//1.1-->1.1
 vuint8_t VCAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" ���ƣ�SRS_AirBagFailSts λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 ���ƣ�Rolling_counter_0x350 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 ���ƣ�Checksum_0x350 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//=======================================================(�ָ���)



//--Can_NR=1----SRS 1 the Data Frame ���ƣ�SRS_0x350  ID��0x848  ���ڣ�100ms  λ����8�ֽ�SRS-->

 extern  vuint8_t VCAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" ���ƣ�SRS_CrashOutputSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_Driver λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_PAMsenger λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc3Reserve_1_0_2;//0.2-->0.0
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowLeft λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowMid λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowRight λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc1Reserve_1_9_9;//1.1-->1.1
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" ���ƣ�SRS_AirBagFailSts λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 ���ƣ�Rolling_counter_0x350 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 ���ƣ�Checksum_0x350 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//=======================64λԪ�ر���==============================(�ָ���)



//--Can_NR=1----SRS 1 the Data Frame ���ƣ�SRS_0x350  ID��0x848  ���ڣ�100ms  λ����8�ֽ�SRS-->

 vuint8_t VCAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" ���ƣ�SRS_CrashOutputSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_Driver λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_PAMsenger λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc3Reserve_1_0_2;//0.2-->0.0
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowLeft λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowMid λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowRight λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t Vc1Reserve_1_9_9;//1.1-->1.1
 vuint8_t VCAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" ���ƣ�SRS_AirBagFailSts λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 ���ƣ�Rolling_counter_0x350 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 vuint8_t VCAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 ���ƣ�Checksum_0x350 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//=======================64λԪ�ر���==============================(�ָ���)



//--Can_NR=1----SRS 1 the Data Frame ���ƣ�SRS_0x350  ID��0x848  ���ڣ�100ms  λ����8�ֽ�SRS-->

 extern  vuint8_t VCAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" ���ƣ�SRS_CrashOutputSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_Driver λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_PAMsenger λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc3Reserve_1_0_2;//0.2-->0.0
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowLeft λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowMid λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowRight λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t Vc1Reserve_1_9_9;//1.1-->1.1
 extern  vuint8_t VCAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" ���ƣ�SRS_AirBagFailSts λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 ���ƣ�Rolling_counter_0x350 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
 extern  vuint8_t VCAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 ���ƣ�Checksum_0x350 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=1----SRS 1 the Data Frame ���ƣ�SRS_0x350  ID��0x848  ���ڣ�100ms  λ����8�ֽ�SRS-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
        vuint8_t VCAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" ���ƣ�SRS_CrashOutputSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_Driver λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_PAMsenger λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t Vc3Reserve_1_0_2;//0.2-->0.0
        vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowLeft λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowMid λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowRight λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t Vc1Reserve_1_9_9;//1.1-->1.1
        vuint8_t VCAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" ���ƣ�SRS_AirBagFailSts λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
        vuint8_t VCAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 ���ƣ�Rolling_counter_0x350 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
         //vuint8_t VCAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 ���ƣ�Checksum_0x350 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

     } B;
}  Vu8_SRS_1_SRS_0x350_DataBit_tag;
extern Vu8_SRS_1_SRS_0x350_DataBit_tag Vu8_SRS_1_SRS_0x350_DataBit;

//--Can_NR=1----SRS 1 the Data Frame ���ƣ�SRS_0x350  ID��0x848  ���ڣ�100ms  λ����8�ֽ�SRS-->

                if ( CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_SRS.R[ 2*ALL_SRS_SRS_0x350_FR+0] = CAN_ALL_FRMes_SRS.R[ 2*ALL_SRS_SRS_0x350_FR+0]  ; 
                CAN_ALL_FRVar_SRS.R[ 2*ALL_SRS_SRS_0x350_FR+1] = CAN_ALL_FRMes_SRS.R[ 2*ALL_SRS_SRS_0x350_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_SRS_SRS_0x350_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_SRS_SRS_0x350_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_SRS = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_SRS.B.ALL_SRS_SRS_0x350 = 1 ;  //�������屨��CAN�������ź�
                CAN_ALL_FRVar_SRS.R[2*ALL_SRS_SRS_0x350_FR+0]=CAN_ALL_FRAMES_SRS.R[2*ALL_SRS_SRS_0x350_FR+0];
                CAN_ALL_FRVar_SRS.R[2*ALL_SRS_SRS_0x350_FR+1]=CAN_ALL_FRAMES_SRS.R[2*ALL_SRS_SRS_0x350_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_SRS_SRS_0x350_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH]  == 1 ) {


                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_uSRS_CrashOutputSts= CAN_ALL_SRS_uSRS_CrashOutputSts_min;//0.7-->0.7 1 "Crash" 0 "No crash" ���ƣ�SRS_CrashOutputSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u1SRS_SBR_Driver= CAN_ALL_SRS_u1SRS_SBR_Driver_min;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_Driver λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u2SRS_SBR_PAMsenger= CAN_ALL_SRS_u2SRS_SBR_PAMsenger_min;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_PAMsenger λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_SRS.B.c3Reserve_1_0_2= CAN_ALL_SRS_c3Reserve_1_0_2_min;//0.2-->0.0
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft= CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft_min;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowLeft λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowMid= CAN_ALL_SRS_u2SRS_SBR_SecondRowMid_min;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowMid λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowRight= CAN_ALL_SRS_u2SRS_SBR_SecondRowRight_min;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowRight λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_SRS.B.c1Reserve_1_9_9= CAN_ALL_SRS_c1Reserve_1_9_9_min;//1.1-->1.1
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u2SRS_AirBagFailSts= CAN_ALL_SRS_u2SRS_AirBagFailSts_min;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" ���ƣ�SRS_AirBagFailSts λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u2Rolling_counter_0x350= CAN_ALL_SRS_u2Rolling_counter_0x350_min;//6.3-->6.0 ���ƣ�Rolling_counter_0x350 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRAMES_SRS.B. CAN_ALL_SRS_u4Checksum_0x350= CAN_ALL_SRS_u4Checksum_0x350_min;//7.7-->7.0 ���ƣ�Checksum_0x350 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_uSRS_CrashOutputSts=VCAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" ���ƣ�SRS_CrashOutputSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u1SRS_SBR_Driver=VCAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_Driver λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_PAMsenger=VCAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_PAMsenger λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_SRS.B.c3Reserve_1_0_2=Vc3Reserve_1_0_2;//0.2-->0.0
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft=VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowLeft λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowMid=VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowMid λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowRight=VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowRight λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_SRS.B.c1Reserve_1_9_9=Vc1Reserve_1_9_9;//1.1-->1.1
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_AirBagFailSts=VCAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" ���ƣ�SRS_AirBagFailSts λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2Rolling_counter_0x350=VCAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 ���ƣ�Rolling_counter_0x350 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u4Checksum_0x350=VCAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 ���ƣ�Checksum_0x350 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                VCAN_ALL_SRS_uSRS_CrashOutputSts=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_uSRS_CrashOutputSts;//0.7-->0.7 1 "Crash" 0 "No crash" ���ƣ�SRS_CrashOutputSts λ����1bit, logical min-max��0~1 physical min-max��0x000~0x1 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_SRS_u1SRS_SBR_Driver=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u1SRS_SBR_Driver;//0.6-->0.5 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_Driver λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_SRS_u2SRS_SBR_PAMsenger=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_PAMsenger;//0.4-->0.3 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_PAMsenger λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                Vc3Reserve_1_0_2=CAN_ALL_FRVar_SRS.B.c3Reserve_1_0_2;//0.2-->0.0
                VCAN_ALL_SRS_u2SRS_SBR_SecondRowLeft=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowLeft;//1.7-->1.6 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowLeft λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_SRS_u2SRS_SBR_SecondRowMid=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowMid;//1.5-->1.4 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowMid λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_SRS_u2SRS_SBR_SecondRowRight=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_SBR_SecondRowRight;//1.3-->1.2 3 "Fault_Reserved" 2 "Lamp On" 1 "Lamp Flashing_Reserved" 0 "Lamp Off" ���ƣ�SRS_SBR_SecondRowRight λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                Vc1Reserve_1_9_9=CAN_ALL_FRVar_SRS.B.c1Reserve_1_9_9;//1.1-->1.1
                VCAN_ALL_SRS_u2SRS_AirBagFailSts=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2SRS_AirBagFailSts;//1.0-->2.7 3 "reserved" 2 "lamp on" 1 "lamp flash" 0 "lamp off" ���ƣ�SRS_AirBagFailSts λ����2bit, logical min-max��0~3 physical min-max��0x000~0x3 ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_SRS_u2Rolling_counter_0x350=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u2Rolling_counter_0x350;//6.3-->6.0 ���ƣ�Rolling_counter_0x350 λ����4bit, logical min-max��0~15 physical min-max��0x000~0xF ���ȣ�1 ƫ������0 ��λ�� 
                VCAN_ALL_SRS_u4Checksum_0x350=CAN_ALL_FRVar_SRS.B. CAN_ALL_SRS_u4Checksum_0x350;//7.7-->7.0 ���ƣ�Checksum_0x350 λ����8bit, logical min-max��0~255 physical min-max��0x000~0xFF ���ȣ�1 ƫ������0 ��λ�� 

                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+7] =Vu8_SRS_1_SRS_0x350_Data7Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+6] =Vu8_SRS_1_SRS_0x350_Data6Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+5] =Vu8_SRS_1_SRS_0x350_Data5Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+4] =Vu8_SRS_1_SRS_0x350_Data4Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+3] =Vu8_SRS_1_SRS_0x350_Data3Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+2] =Vu8_SRS_1_SRS_0x350_Data2Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+1] =Vu8_SRS_1_SRS_0x350_Data1Bit.R;
                CAN_ALL_FRVar_SRS.By[ 8*ALL_SRS_SRS_0x350_FR+0] =Vu8_SRS_1_SRS_0x350_Data0Bit.R;

                Vu8_SRS_1_SRS_0x350_Data7Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 7];
                Vu8_SRS_1_SRS_0x350_Data6Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 6];
                Vu8_SRS_1_SRS_0x350_Data5Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 5];
                Vu8_SRS_1_SRS_0x350_Data4Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 4];
                Vu8_SRS_1_SRS_0x350_Data3Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 3];
                Vu8_SRS_1_SRS_0x350_Data2Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 2];
                Vu8_SRS_1_SRS_0x350_Data1Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 1];
                Vu8_SRS_1_SRS_0x350_Data0Bit.R=CAN_ALL_FRVar_SRS.By[8 * ALL_SRS_SRS_0x350_FR + 0];


//--2 th CAN ���ĳ�ʼ���ӳ���------------
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_SRS_SRS_0x350_CH];//Can_NR=1

//--Can_NR=1----SRS 1 the Data Frame ���ƣ�SRS_0x350  ID��0x848  ���ڣ�100ms  λ����8�ֽ�SRS-->

                CAN1.MB[ALL_SRS_SRS_0x350_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_SRS_SRS_0x350_CH].ID.R= ALL_SRS_SRS_0x350_ID;
                CAN1.MB[ALL_SRS_SRS_0x350_CH].CS.B.IDE = ALL_SRS_SRS_0x350_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_SRS_SRS_0x350_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_SRS_SRS_0x350_CH].CS.B.DLC =ALL_SRS_SRS_0x350_LH; 
//--3 th CAN ���Ľ����ж��ӳ���------------

//--Can_NR=1----SRS 1 the Data Frame ���ƣ�SRS_0x350  ID��0x848  ���ڣ�100ms  λ����8�ֽ�SRS-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH]  == 0) {
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+0] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[0]; 
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+1] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[1];
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+2] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[2];
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+3] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[3];
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+4] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[4];
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+5] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[5];
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+6] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[6];
                CAN_ALL_FRMes_SRS.By[8*ALL_SRS_SRS_0x350_FR+7] = CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[7];
               Error_CAN1.B.ALL_SRS = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_SRS.B.ALL_SRS_SRS_0x350 = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_SRS_SRS_0x350_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_SRS_SRS_0x350_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_SRS_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  
//--4 th CAN ���ķ����ӳ���------------                    

//--Can_NR=1----SRS 1 the Data Frame ���ƣ�SRS_0x350  ID��0x848  ���ڣ�100ms  λ����8�ֽ�SRS-->
                 if ( ( Pit0Ctr_10MS % ALL_SRS_SRS_0x350_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_SRS_SRS_0x350_CH] ;
                if ( D00CTR_def_CAN1_ALL_SRS.B.ALL_SRS_SRS_0x350T == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[0] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+0];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[1] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+1];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[2] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+2];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[3] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+3];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[4] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+4];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[5] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+5];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[6] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+6];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].DATA.B[7] = CAN_ALL_FRVar_SRS.By[8*ALL_SRS_SRS_0x350_FR+7];
                CAN1.MB[ALL_SRS_SRS_0x350_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_SRS_SRS_0x350_Ay] = ALL_SRS_SRS_0x350_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_SRS.B.ALL_SRS_SRS_0x350T == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_SRS_SRS_0x350_DT ) == 0 ) {


//=========================================================

#endif // _CAN_ALL_SRS_H 