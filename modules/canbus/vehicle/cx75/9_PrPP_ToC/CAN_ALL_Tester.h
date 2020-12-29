#ifndef  _CAN_ALL_Tester_H
#define  _CAN_ALL_Tester_H

#include "project.h"


//CAN�з��ű������ñ�������������

//CAN�޷��ű�����define�ñ�����physical min-max
#define  CAN_ALL_Tester_u64DiagFuncReq_min 0
#define  CAN_ALL_Tester_u64DiagFuncReq_max 0x64
#define  CAN_ALL_Tester_u64DiagPhysReqToPAM_min 0
#define  CAN_ALL_Tester_u64DiagPhysReqToPAM_max 0x64
#define  CAN_ALL_Tester_u64DiagPhysReqToIPM_min 0
#define  CAN_ALL_Tester_u64DiagPhysReqToIPM_max 0x64
#define  CAN_ALL_Tester_u64DiagPhysReqToMRR_min 0
#define  CAN_ALL_Tester_u64DiagPhysReqToMRR_max 0x64

//CANfactor���ӷ�ĸ����
#define  CAN_ALL_Tester_u64DiagFuncReq_factor 1
#define  CAN_ALL_Tester_u64DiagPhysReqToPAM_factor 1
#define  CAN_ALL_Tester_u64DiagPhysReqToIPM_factor 1
#define  CAN_ALL_Tester_u64DiagPhysReqToMRR_factor 1

//#define  ��������_CH��CAN����ͨ���ţ�    �������+10��#define  �ṹ������_CH���ṹ��ͨ���ţ�  ������ţ�#define ��������_ID ��CAN����ID��  ����CAN ID��#define ��������_DT  (CAN��������)  ����ʱ�����á�MS��/10�� #define ��������_TorR(CAN���ķ��ͻ����)    ����1������0

//--Can_NR=1----Tester 1 th Data Frame ���ƣ�Tester_DiagFuncReq  ID��0X2015  ���ڣ�0ms  DLC��8�ֽ�Tester-->ABSESP
#define ALL_Tester_Tester_DiagFuncReq_CH 1
#define ALL_Tester_Tester_DiagFuncReq_FR 1
#define ALL_Tester_Tester_DiagFuncReq_ID 0XFFFFFFFF800007DF
#define ALL_Tester_Tester_DiagFuncReq_DT 0 //xxMS/10
#define ALL_Tester_Tester_DiagFuncReq_TorR 0
#define ALL_Tester_Tester_DiagFuncReq_Ay 0
#define ALL_Tester_Tester_DiagFuncReq_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_Tester_Tester_DiagFuncReq_LH 8//LENGTH <=8


//--Can_NR=2----Tester 2 th Data Frame ���ƣ�Tester_DiagReqToPAM  ID��0X1856  ���ڣ�0ms  DLC��8�ֽ�Tester-->PAM
#define ALL_Tester_Tester_DiagReqToPAM_CH 2
#define ALL_Tester_Tester_DiagReqToPAM_FR 2
#define ALL_Tester_Tester_DiagReqToPAM_ID 0XFFFFFFFF80000740
#define ALL_Tester_Tester_DiagReqToPAM_DT 0 //xxMS/10
#define ALL_Tester_Tester_DiagReqToPAM_TorR 0
#define ALL_Tester_Tester_DiagReqToPAM_Ay 0
#define ALL_Tester_Tester_DiagReqToPAM_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_Tester_Tester_DiagReqToPAM_LH 8//LENGTH <=8


//--Can_NR=3----Tester 3 th Data Frame ���ƣ�Tester_DiagReqToIPM  ID��0X1862  ���ڣ�0ms  DLC��8�ֽ�Tester-->IPM
#define ALL_Tester_Tester_DiagReqToIPM_CH 3
#define ALL_Tester_Tester_DiagReqToIPM_FR 3
#define ALL_Tester_Tester_DiagReqToIPM_ID 0XFFFFFFFF80000746
#define ALL_Tester_Tester_DiagReqToIPM_DT 0 //xxMS/10
#define ALL_Tester_Tester_DiagReqToIPM_TorR 0
#define ALL_Tester_Tester_DiagReqToIPM_Ay 0
#define ALL_Tester_Tester_DiagReqToIPM_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_Tester_Tester_DiagReqToIPM_LH 8//LENGTH <=8


//--Can_NR=4----Tester 4 th Data Frame ���ƣ�Tester_DiagReqToMRR  ID��0X1874  ���ڣ�0ms  DLC��8�ֽ�Tester-->MRR
#define ALL_Tester_Tester_DiagReqToMRR_CH 4
#define ALL_Tester_Tester_DiagReqToMRR_FR 4
#define ALL_Tester_Tester_DiagReqToMRR_ID 0XFFFFFFFF80000752
#define ALL_Tester_Tester_DiagReqToMRR_DT 0 //xxMS/10
#define ALL_Tester_Tester_DiagReqToMRR_TorR 0
#define ALL_Tester_Tester_DiagReqToMRR_Ay 0
#define ALL_Tester_Tester_DiagReqToMRR_IDE 0// Use standard ID length, 1=extended 0 = standard
#define ALL_Tester_Tester_DiagReqToMRR_LH 8//LENGTH <=8


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
//-----------------------4 CAN Data Frames-----------------------------------------------------------
typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[40];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[20];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[10];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[10];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[5];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint32_t R[2];                                      


//--Can_NR=1----Tester 1 the Data Frame ���ƣ�Tester_DiagFuncReq  ID��0x2015  ���ڣ�0ms  λ����8�ֽ�Tester-->
  vuint32_t exDiagFuncReq64High32:32;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
  vuint32_t exDiagFuncReq64Low32:32;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=2----Tester 2 the Data Frame ���ƣ�Tester_DiagReqToPAM  ID��0x1856  ���ڣ�0ms  λ����8�ֽ�Tester-->
  vuint32_t exDiagPhysReqToPAM64High32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
  vuint32_t exDiagPhysReqToPAM64Low32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=3----Tester 3 the Data Frame ���ƣ�Tester_DiagReqToIPM  ID��0x1862  ���ڣ�0ms  λ����8�ֽ�Tester-->
  vuint32_t exDiagPhysReqToIPM64High32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
  vuint32_t exDiagPhysReqToIPM64Low32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=4----Tester 4 the Data Frame ���ƣ�Tester_DiagReqToMRR  ID��0x1874  ���ڣ�0ms  λ����8�ֽ�Tester-->
  vuint32_t exDiagPhysReqToMRR64High32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
  vuint32_t exDiagPhysReqToMRR64Low32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
    } B;
} CAN_ALL_FRAMES_Tester_tag;

typedef union {
    //vuint8_t  By[192];   //Data buffer in Bytes (8 bits) 
    //vuint16_t H[96];     // Data buffer in Half-words (16 bits) 
    //vuint32_t W[48];     // Data buffer in words (32 bits) 
    //vuint32_t R[48];     // Data buffer in words (32 bits) 

     vuint8_t By[40];   // Data buffer in Bytes (8 bits)=(message number+1) *8 
     vuint16_t H[20];     // Data buffer in Half-words (16 bits)=(message number+1) *4 
     vuint32_t W[10];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint32_t R[10];     // Data buffer in words (32 bits)=(message number+1) *2 
     vuint64_t DR[5];     // Data buffer in words (32 bits)=(message number+1) *1 
     struct {
       vuint64_t R[1];                                      


//--Can_NR=1----Tester 1 the Data Frame ���ƣ�Tester_DiagFuncReq  ID��0x2015  ���ڣ�0ms  λ����8�ֽ�Tester-->
  vuint64_t exDiagFuncReq64:64;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
  //vuint64_t exDiagFuncReq64Low32:32;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=2----Tester 2 the Data Frame ���ƣ�Tester_DiagReqToPAM  ID��0x1856  ���ڣ�0ms  λ����8�ֽ�Tester-->
  vuint64_t exDiagPhysReqToPAM64:64;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
  //vuint64_t exDiagPhysReqToPAM64Low32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=3----Tester 3 the Data Frame ���ƣ�Tester_DiagReqToIPM  ID��0x1862  ���ڣ�0ms  λ����8�ֽ�Tester-->
  vuint64_t exDiagPhysReqToIPM64:64;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
  //vuint64_t exDiagPhysReqToIPM64Low32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

//--Can_NR=4----Tester 4 the Data Frame ���ƣ�Tester_DiagReqToMRR  ID��0x1874  ���ڣ�0ms  λ����8�ֽ�Tester-->
  vuint64_t exDiagPhysReqToMRR64:64;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
  //vuint64_t exDiagPhysReqToMRR64Low32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

    } B;
} CAN_ALL_FRAMES_Tester_tag;
extern CAN_ALL_FRAMES_Tester_tag CAN_ALL_FRAMES_Tester;
extern CAN_ALL_FRAMES_Tester_tag CAN_ALL_FRMes_Tester;
extern CAN_ALL_FRAMES_Tester_tag CAN_ALL_FRVar_Tester;
extern CAN_ALL_FRAMES_Tester_tag CAN_ALL_FRVarOld_Tester;


               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exDiagFuncReq64High32:2;
                                    vuint16_t exDiagFuncReq64Low32:2;
                               } B;
                            } exDiagFuncReq_tag;
                            extern exDiagFuncReq_tag exDiagFuncReq;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exDiagPhysReqToPAM64High32:2;
                                    vuint16_t exDiagPhysReqToPAM64Low32:2;
                               } B;
                            } exDiagPhysReqToPAM_tag;
                            extern exDiagPhysReqToPAM_tag exDiagPhysReqToPAM;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exDiagPhysReqToIPM64High32:2;
                                    vuint16_t exDiagPhysReqToIPM64Low32:2;
                               } B;
                            } exDiagPhysReqToIPM_tag;
                            extern exDiagPhysReqToIPM_tag exDiagPhysReqToIPM;

               typedef union {
                                vuint16_t R;
                                struct {
                                    vuint16_t exDiagPhysReqToMRR64High32:2;
                                    vuint16_t exDiagPhysReqToMRR64Low32:2;
                               } B;
                            } exDiagPhysReqToMRR_tag;
                            extern exDiagPhysReqToMRR_tag exDiagPhysReqToMRR;
//--1 th CAN �������ݴ����ӳ���------------
                CAN1_noReceivedMessageTime[ALL_Tester_Tester_DiagFuncReq_CH]++;//Can_NR=1
                CAN1_noReceivedMessageTime[ALL_Tester_Tester_DiagReqToPAM_CH]++;//Can_NR=2
                CAN1_noReceivedMessageTime[ALL_Tester_Tester_DiagReqToIPM_CH]++;//Can_NR=3
                CAN1_noReceivedMessageTime[ALL_Tester_Tester_DiagReqToMRR_CH]++;//Can_NR=4
typedef union {
    vuint8_t R;
    struct { //ALL_Tester ���ձ��Ĺ���
        vuint8_t ALL_Tester_Tester_DiagFuncReq: 1; //Can_NR=1
        vuint8_t ALL_Tester_Tester_DiagReqToPAM: 1; //Can_NR=2
        vuint8_t ALL_Tester_Tester_DiagReqToIPM: 1; //Can_NR=3
        vuint8_t ALL_Tester_Tester_DiagReqToMRR: 1; //Can_NR=4
    } B;
} Error_CAN1_ALL_Tester_tag ;
extern Error_CAN1_ALL_Tester_tag Error_CAN1_ALL_Tester ;
typedef union {
    vuint8_t R;
    struct { //ALL_Tester ���ձ��Ĺ���
        vuint8_t ALL_Tester_Tester_DiagFuncReqT: 1; //Can_NR=1
        vuint8_t ALL_Tester_Tester_DiagReqToPAMT: 1; //Can_NR=2
        vuint8_t ALL_Tester_Tester_DiagReqToIPMT: 1; //Can_NR=3
        vuint8_t ALL_Tester_Tester_DiagReqToMRRT: 1; //Can_NR=4
    } B;
}  D00CTR_def_CAN1_ALL_Tester_tag ;
extern  D00CTR_def_CAN1_ALL_Tester_tag D00CTR_def_CAN1_ALL_Tester ;


//--Can_NR=1----Tester 1 the Data Frame ���ƣ�Tester_DiagFuncReq  ID��0x2015  ���ڣ�0ms  λ����8�ֽ�Tester-->

 vuint32_t VexDiagFuncReq64High32;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 vuint32_t VexDiagFuncReq64Low32;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=2----Tester 2 the Data Frame ���ƣ�Tester_DiagReqToPAM  ID��0x1856  ���ڣ�0ms  λ����8�ֽ�Tester-->

 vuint32_t VexDiagPhysReqToPAM64High32;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 vuint32_t VexDiagPhysReqToPAM64Low32;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=3----Tester 3 the Data Frame ���ƣ�Tester_DiagReqToIPM  ID��0x1862  ���ڣ�0ms  λ����8�ֽ�Tester-->

 vuint32_t VexDiagPhysReqToIPM64High32;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 vuint32_t VexDiagPhysReqToIPM64Low32;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=4----Tester 4 the Data Frame ���ƣ�Tester_DiagReqToMRR  ID��0x1874  ���ڣ�0ms  λ����8�ֽ�Tester-->

 vuint32_t VexDiagPhysReqToMRR64High32;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 vuint32_t VexDiagPhysReqToMRR64Low32;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//=======================================================(�ָ���)



//--Can_NR=1----Tester 1 the Data Frame ���ƣ�Tester_DiagFuncReq  ID��0x2015  ���ڣ�0ms  λ����8�ֽ�Tester-->

 extern  vuint32_t VexDiagFuncReq64High32;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 extern  vuint32_t VexDiagFuncReq64Low32;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=2----Tester 2 the Data Frame ���ƣ�Tester_DiagReqToPAM  ID��0x1856  ���ڣ�0ms  λ����8�ֽ�Tester-->

 extern  vuint32_t VexDiagPhysReqToPAM64High32;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 extern  vuint32_t VexDiagPhysReqToPAM64Low32;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=3----Tester 3 the Data Frame ���ƣ�Tester_DiagReqToIPM  ID��0x1862  ���ڣ�0ms  λ����8�ֽ�Tester-->

 extern  vuint32_t VexDiagPhysReqToIPM64High32;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 extern  vuint32_t VexDiagPhysReqToIPM64Low32;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=4----Tester 4 the Data Frame ���ƣ�Tester_DiagReqToMRR  ID��0x1874  ���ڣ�0ms  λ����8�ֽ�Tester-->

 extern  vuint32_t VexDiagPhysReqToMRR64High32;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 extern  vuint32_t VexDiagPhysReqToMRR64Low32;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//=======================64λԪ�ر���==============================(�ָ���)



//--Can_NR=1----Tester 1 the Data Frame ���ƣ�Tester_DiagFuncReq  ID��0x2015  ���ڣ�0ms  λ����8�ֽ�Tester-->

 vuint32_t VexDiagFuncReq64;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 //vuint32_t VexDiagFuncReq64Low32:32;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=2----Tester 2 the Data Frame ���ƣ�Tester_DiagReqToPAM  ID��0x1856  ���ڣ�0ms  λ����8�ֽ�Tester-->

 vuint32_t VexDiagPhysReqToPAM64;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 //vuint32_t VexDiagPhysReqToPAM64Low32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=3----Tester 3 the Data Frame ���ƣ�Tester_DiagReqToIPM  ID��0x1862  ���ڣ�0ms  λ����8�ֽ�Tester-->

 vuint32_t VexDiagPhysReqToIPM64;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 //vuint32_t VexDiagPhysReqToIPM64Low32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=4----Tester 4 the Data Frame ���ƣ�Tester_DiagReqToMRR  ID��0x1874  ���ڣ�0ms  λ����8�ֽ�Tester-->

 vuint32_t VexDiagPhysReqToMRR64;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 //vuint32_t VexDiagPhysReqToMRR64Low32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//=======================64λԪ�ر���==============================(�ָ���)



//--Can_NR=1----Tester 1 the Data Frame ���ƣ�Tester_DiagFuncReq  ID��0x2015  ���ڣ�0ms  λ����8�ֽ�Tester-->

 extern  vuint32_t VexDiagFuncReq64;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 //extern  vuint32_t VexDiagFuncReq64Low32:32;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=2----Tester 2 the Data Frame ���ƣ�Tester_DiagReqToPAM  ID��0x1856  ���ڣ�0ms  λ����8�ֽ�Tester-->

 extern  vuint32_t VexDiagPhysReqToPAM64;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 //extern  vuint32_t VexDiagPhysReqToPAM64Low32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=3----Tester 3 the Data Frame ���ƣ�Tester_DiagReqToIPM  ID��0x1862  ���ڣ�0ms  λ����8�ֽ�Tester-->

 extern  vuint32_t VexDiagPhysReqToIPM64;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 //extern  vuint32_t VexDiagPhysReqToIPM64Low32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=4----Tester 4 the Data Frame ���ƣ�Tester_DiagReqToMRR  ID��0x1874  ���ڣ�0ms  λ����8�ֽ�Tester-->

 extern  vuint32_t VexDiagPhysReqToMRR64;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
//*****************32 bits split line
 //extern  vuint32_t VexDiagPhysReqToMRR64Low32:32;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 


//--Can_NR=1----Tester 1 the Data Frame ���ƣ�Tester_DiagFuncReq  ID��0x2015  ���ڣ�0ms  λ����8�ֽ�Tester-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
         //vuint32_t VexDiagFuncReq64High32;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
        //*****************32 bits split line
         //vuint32_t VexDiagFuncReq64Low32;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

     } B;
}  Vu8_Tester_1_Tester_DiagFuncReq_DataBit_tag;
extern Vu8_Tester_1_Tester_DiagFuncReq_DataBit_tag Vu8_Tester_1_Tester_DiagFuncReq_DataBit;


//--Can_NR=2----Tester 2 the Data Frame ���ƣ�Tester_DiagReqToPAM  ID��0x1856  ���ڣ�0ms  λ����8�ֽ�Tester-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
         //vuint32_t VexDiagPhysReqToPAM64High32;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
        //*****************32 bits split line
         //vuint32_t VexDiagPhysReqToPAM64Low32;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

     } B;
}  Vu8_Tester_2_Tester_DiagReqToPAM_DataBit_tag;
extern Vu8_Tester_2_Tester_DiagReqToPAM_DataBit_tag Vu8_Tester_2_Tester_DiagReqToPAM_DataBit;


//--Can_NR=3----Tester 3 the Data Frame ���ƣ�Tester_DiagReqToIPM  ID��0x1862  ���ڣ�0ms  λ����8�ֽ�Tester-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
         //vuint32_t VexDiagPhysReqToIPM64High32;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
        //*****************32 bits split line
         //vuint32_t VexDiagPhysReqToIPM64Low32;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

     } B;
}  Vu8_Tester_3_Tester_DiagReqToIPM_DataBit_tag;
extern Vu8_Tester_3_Tester_DiagReqToIPM_DataBit_tag Vu8_Tester_3_Tester_DiagReqToIPM_DataBit;


//--Can_NR=4----Tester 4 the Data Frame ���ƣ�Tester_DiagReqToMRR  ID��0x1874  ���ڣ�0ms  λ����8�ֽ�Tester-->

typedef union {
    vuint8_t R;
    struct { //64λԪ��λ�ر���
         //vuint32_t VexDiagPhysReqToMRR64High32;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
        //*****************32 bits split line
         //vuint32_t VexDiagPhysReqToMRR64Low32;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 

     } B;
}  Vu8_Tester_4_Tester_DiagReqToMRR_DataBit_tag;
extern Vu8_Tester_4_Tester_DiagReqToMRR_DataBit_tag Vu8_Tester_4_Tester_DiagReqToMRR_DataBit;

//--Can_NR=1----Tester 1 the Data Frame ���ƣ�Tester_DiagFuncReq  ID��0x2015  ���ڣ�0ms  λ����8�ֽ�Tester-->

                if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagFuncReq_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_Tester_Tester_DiagFuncReq_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_Tester.R[ 2*ALL_Tester_Tester_DiagFuncReq_FR+0] = CAN_ALL_FRMes_Tester.R[ 2*ALL_Tester_Tester_DiagFuncReq_FR+0]  ; 
                CAN_ALL_FRVar_Tester.R[ 2*ALL_Tester_Tester_DiagFuncReq_FR+1] = CAN_ALL_FRMes_Tester.R[ 2*ALL_Tester_Tester_DiagFuncReq_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagFuncReq_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagFuncReq_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_Tester_Tester_DiagFuncReq_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagFuncReq_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_Tester = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagFuncReq = 1 ;  //�������屨��CAN�������ź�
                exDiagFuncReq.R= CAN_ALL_Tester_uDiagFuncReq_min;//0.7-->7.0 ���ƣ�DiagFuncReq λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_Tester.B.exDiagFuncReq64High32=exDiagFuncReq.B.exDiagFuncReq64High32;
                CAN_ALL_FRVar_Tester.B.exDiagFuncReq64Low32=exDiagFuncReq.B.exDiagFuncReq64Low32;
                CAN_ALL_FRVar_Tester.R[2*ALL_Tester_Tester_DiagFuncReq_FR+0]=CAN_ALL_FRAMES_Tester.R[2*ALL_Tester_Tester_DiagFuncReq_FR+0];
                CAN_ALL_FRVar_Tester.R[2*ALL_Tester_Tester_DiagFuncReq_FR+1]=CAN_ALL_FRAMES_Tester.R[2*ALL_Tester_Tester_DiagFuncReq_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagFuncReq_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagFuncReq_CH]  == 1 ) {



                CAN_ALL_FRVar_Tester.B.exDiagFuncReq64High32=VexexDiagFuncReq64High32;
                CAN_ALL_FRVar_Tester.B.exDiagFuncReq64Low32=VexexDiagFuncReq64Low32;

                VexexDiagFuncReq64High32 = CAN_ALL_FRVar_Tester.B.exDiagFuncReq64High32;
                VexexDiagFuncReq64Low32= CAN_ALL_FRVar_Tester.B.exDiagFuncReq64Low32;

                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagFuncReq_FR+7] =Vu8_Tester_1_Tester_DiagFuncReq_Data7Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagFuncReq_FR+6] =Vu8_Tester_1_Tester_DiagFuncReq_Data6Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagFuncReq_FR+5] =Vu8_Tester_1_Tester_DiagFuncReq_Data5Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagFuncReq_FR+4] =Vu8_Tester_1_Tester_DiagFuncReq_Data4Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagFuncReq_FR+3] =Vu8_Tester_1_Tester_DiagFuncReq_Data3Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagFuncReq_FR+2] =Vu8_Tester_1_Tester_DiagFuncReq_Data2Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagFuncReq_FR+1] =Vu8_Tester_1_Tester_DiagFuncReq_Data1Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagFuncReq_FR+0] =Vu8_Tester_1_Tester_DiagFuncReq_Data0Bit.R;

                Vu8_Tester_1_Tester_DiagFuncReq_Data7Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagFuncReq_FR + 7];
                Vu8_Tester_1_Tester_DiagFuncReq_Data6Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagFuncReq_FR + 6];
                Vu8_Tester_1_Tester_DiagFuncReq_Data5Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagFuncReq_FR + 5];
                Vu8_Tester_1_Tester_DiagFuncReq_Data4Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagFuncReq_FR + 4];
                Vu8_Tester_1_Tester_DiagFuncReq_Data3Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagFuncReq_FR + 3];
                Vu8_Tester_1_Tester_DiagFuncReq_Data2Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagFuncReq_FR + 2];
                Vu8_Tester_1_Tester_DiagFuncReq_Data1Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagFuncReq_FR + 1];
                Vu8_Tester_1_Tester_DiagFuncReq_Data0Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagFuncReq_FR + 0];



//--Can_NR=2----Tester 2 the Data Frame ���ƣ�Tester_DiagReqToPAM  ID��0x1856  ���ڣ�0ms  λ����8�ֽ�Tester-->

                if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToPAM_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToPAM_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_Tester.R[ 2*ALL_Tester_Tester_DiagReqToPAM_FR+0] = CAN_ALL_FRMes_Tester.R[ 2*ALL_Tester_Tester_DiagReqToPAM_FR+0]  ; 
                CAN_ALL_FRVar_Tester.R[ 2*ALL_Tester_Tester_DiagReqToPAM_FR+1] = CAN_ALL_FRMes_Tester.R[ 2*ALL_Tester_Tester_DiagReqToPAM_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToPAM_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagReqToPAM_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToPAM_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagReqToPAM_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_Tester = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagReqToPAM = 1 ;  //�������屨��CAN�������ź�
                exDiagPhysReqToPAM.R= CAN_ALL_Tester_uDiagPhysReqToPAM_min;//0.7-->7.0 ���ƣ�DiagPhysReqToPAM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_Tester.B.exDiagPhysReqToPAM64High32=exDiagPhysReqToPAM.B.exDiagPhysReqToPAM64High32;
                CAN_ALL_FRVar_Tester.B.exDiagPhysReqToPAM64Low32=exDiagPhysReqToPAM.B.exDiagPhysReqToPAM64Low32;
                CAN_ALL_FRVar_Tester.R[2*ALL_Tester_Tester_DiagReqToPAM_FR+0]=CAN_ALL_FRAMES_Tester.R[2*ALL_Tester_Tester_DiagReqToPAM_FR+0];
                CAN_ALL_FRVar_Tester.R[2*ALL_Tester_Tester_DiagReqToPAM_FR+1]=CAN_ALL_FRAMES_Tester.R[2*ALL_Tester_Tester_DiagReqToPAM_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagReqToPAM_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToPAM_CH]  == 1 ) {



                CAN_ALL_FRVar_Tester.B.exDiagPhysReqToPAM64High32=VexexDiagPhysReqToPAM64High32;
                CAN_ALL_FRVar_Tester.B.exDiagPhysReqToPAM64Low32=VexexDiagPhysReqToPAM64Low32;

                VexexDiagPhysReqToPAM64High32 = CAN_ALL_FRVar_Tester.B.exDiagPhysReqToPAM64High32;
                VexexDiagPhysReqToPAM64Low32= CAN_ALL_FRVar_Tester.B.exDiagPhysReqToPAM64Low32;

                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToPAM_FR+7] =Vu8_Tester_2_Tester_DiagReqToPAM_Data7Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToPAM_FR+6] =Vu8_Tester_2_Tester_DiagReqToPAM_Data6Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToPAM_FR+5] =Vu8_Tester_2_Tester_DiagReqToPAM_Data5Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToPAM_FR+4] =Vu8_Tester_2_Tester_DiagReqToPAM_Data4Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToPAM_FR+3] =Vu8_Tester_2_Tester_DiagReqToPAM_Data3Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToPAM_FR+2] =Vu8_Tester_2_Tester_DiagReqToPAM_Data2Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToPAM_FR+1] =Vu8_Tester_2_Tester_DiagReqToPAM_Data1Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToPAM_FR+0] =Vu8_Tester_2_Tester_DiagReqToPAM_Data0Bit.R;

                Vu8_Tester_2_Tester_DiagReqToPAM_Data7Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToPAM_FR + 7];
                Vu8_Tester_2_Tester_DiagReqToPAM_Data6Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToPAM_FR + 6];
                Vu8_Tester_2_Tester_DiagReqToPAM_Data5Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToPAM_FR + 5];
                Vu8_Tester_2_Tester_DiagReqToPAM_Data4Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToPAM_FR + 4];
                Vu8_Tester_2_Tester_DiagReqToPAM_Data3Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToPAM_FR + 3];
                Vu8_Tester_2_Tester_DiagReqToPAM_Data2Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToPAM_FR + 2];
                Vu8_Tester_2_Tester_DiagReqToPAM_Data1Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToPAM_FR + 1];
                Vu8_Tester_2_Tester_DiagReqToPAM_Data0Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToPAM_FR + 0];



//--Can_NR=3----Tester 3 the Data Frame ���ƣ�Tester_DiagReqToIPM  ID��0x1862  ���ڣ�0ms  λ����8�ֽ�Tester-->

                if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToIPM_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToIPM_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_Tester.R[ 2*ALL_Tester_Tester_DiagReqToIPM_FR+0] = CAN_ALL_FRMes_Tester.R[ 2*ALL_Tester_Tester_DiagReqToIPM_FR+0]  ; 
                CAN_ALL_FRVar_Tester.R[ 2*ALL_Tester_Tester_DiagReqToIPM_FR+1] = CAN_ALL_FRMes_Tester.R[ 2*ALL_Tester_Tester_DiagReqToIPM_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToIPM_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagReqToIPM_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToIPM_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagReqToIPM_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_Tester = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagReqToIPM = 1 ;  //�������屨��CAN�������ź�
                exDiagPhysReqToIPM.R= CAN_ALL_Tester_uDiagPhysReqToIPM_min;//0.7-->7.0 ���ƣ�DiagPhysReqToIPM λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_Tester.B.exDiagPhysReqToIPM64High32=exDiagPhysReqToIPM.B.exDiagPhysReqToIPM64High32;
                CAN_ALL_FRVar_Tester.B.exDiagPhysReqToIPM64Low32=exDiagPhysReqToIPM.B.exDiagPhysReqToIPM64Low32;
                CAN_ALL_FRVar_Tester.R[2*ALL_Tester_Tester_DiagReqToIPM_FR+0]=CAN_ALL_FRAMES_Tester.R[2*ALL_Tester_Tester_DiagReqToIPM_FR+0];
                CAN_ALL_FRVar_Tester.R[2*ALL_Tester_Tester_DiagReqToIPM_FR+1]=CAN_ALL_FRAMES_Tester.R[2*ALL_Tester_Tester_DiagReqToIPM_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagReqToIPM_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToIPM_CH]  == 1 ) {



                CAN_ALL_FRVar_Tester.B.exDiagPhysReqToIPM64High32=VexexDiagPhysReqToIPM64High32;
                CAN_ALL_FRVar_Tester.B.exDiagPhysReqToIPM64Low32=VexexDiagPhysReqToIPM64Low32;

                VexexDiagPhysReqToIPM64High32 = CAN_ALL_FRVar_Tester.B.exDiagPhysReqToIPM64High32;
                VexexDiagPhysReqToIPM64Low32= CAN_ALL_FRVar_Tester.B.exDiagPhysReqToIPM64Low32;

                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToIPM_FR+7] =Vu8_Tester_3_Tester_DiagReqToIPM_Data7Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToIPM_FR+6] =Vu8_Tester_3_Tester_DiagReqToIPM_Data6Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToIPM_FR+5] =Vu8_Tester_3_Tester_DiagReqToIPM_Data5Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToIPM_FR+4] =Vu8_Tester_3_Tester_DiagReqToIPM_Data4Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToIPM_FR+3] =Vu8_Tester_3_Tester_DiagReqToIPM_Data3Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToIPM_FR+2] =Vu8_Tester_3_Tester_DiagReqToIPM_Data2Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToIPM_FR+1] =Vu8_Tester_3_Tester_DiagReqToIPM_Data1Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToIPM_FR+0] =Vu8_Tester_3_Tester_DiagReqToIPM_Data0Bit.R;

                Vu8_Tester_3_Tester_DiagReqToIPM_Data7Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToIPM_FR + 7];
                Vu8_Tester_3_Tester_DiagReqToIPM_Data6Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToIPM_FR + 6];
                Vu8_Tester_3_Tester_DiagReqToIPM_Data5Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToIPM_FR + 5];
                Vu8_Tester_3_Tester_DiagReqToIPM_Data4Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToIPM_FR + 4];
                Vu8_Tester_3_Tester_DiagReqToIPM_Data3Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToIPM_FR + 3];
                Vu8_Tester_3_Tester_DiagReqToIPM_Data2Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToIPM_FR + 2];
                Vu8_Tester_3_Tester_DiagReqToIPM_Data1Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToIPM_FR + 1];
                Vu8_Tester_3_Tester_DiagReqToIPM_Data0Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToIPM_FR + 0];



//--Can_NR=4----Tester 4 the Data Frame ���ƣ�Tester_DiagReqToMRR  ID��0x1874  ���ڣ�0ms  λ����8�ֽ�Tester-->

                if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToMRR_CH]  == 1 ) {
                CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToMRR_CH]  = 0 ; //�����Ѵ���
                CAN_ALL_FRVar_Tester.R[ 2*ALL_Tester_Tester_DiagReqToMRR_FR+0] = CAN_ALL_FRMes_Tester.R[ 2*ALL_Tester_Tester_DiagReqToMRR_FR+0]  ; 
                CAN_ALL_FRVar_Tester.R[ 2*ALL_Tester_Tester_DiagReqToMRR_FR+1] = CAN_ALL_FRMes_Tester.R[ 2*ALL_Tester_Tester_DiagReqToMRR_FR+1]  ;
                } else { //if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToMRR_CH]  == 1 ) {
                if ( CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagReqToMRR_CH] >= DT_Pit2000ms_5MS) { 
                CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToMRR_CH]  = 0 ; //�����Ѵ���
                CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagReqToMRR_CH] = DT_Pit2000ms_5MS ;
                Error_CAN1.B.ALL_Tester = 1 ;  //����CAN�������ź�
                Error_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagReqToMRR = 1 ;  //�������屨��CAN�������ź�
                exDiagPhysReqToMRR.R= CAN_ALL_Tester_uDiagPhysReqToMRR_min;//0.7-->7.0 ���ƣ�DiagPhysReqToMRR λ����64bit, logical min-max��0~100 physical min-max��0x000~0x64 ���ȣ�1 ƫ������0 ��λ�� 
                CAN_ALL_FRVar_Tester.B.exDiagPhysReqToMRR64High32=exDiagPhysReqToMRR.B.exDiagPhysReqToMRR64High32;
                CAN_ALL_FRVar_Tester.B.exDiagPhysReqToMRR64Low32=exDiagPhysReqToMRR.B.exDiagPhysReqToMRR64Low32;
                CAN_ALL_FRVar_Tester.R[2*ALL_Tester_Tester_DiagReqToMRR_FR+0]=CAN_ALL_FRAMES_Tester.R[2*ALL_Tester_Tester_DiagReqToMRR_FR+0];
                CAN_ALL_FRVar_Tester.R[2*ALL_Tester_Tester_DiagReqToMRR_FR+1]=CAN_ALL_FRAMES_Tester.R[2*ALL_Tester_Tester_DiagReqToMRR_FR+1];
                } //if ( CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagReqToMRR_CH] >= DT_Pit2000ms_5MS) { 
                 } //if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToMRR_CH]  == 1 ) {



                CAN_ALL_FRVar_Tester.B.exDiagPhysReqToMRR64High32=VexexDiagPhysReqToMRR64High32;
                CAN_ALL_FRVar_Tester.B.exDiagPhysReqToMRR64Low32=VexexDiagPhysReqToMRR64Low32;

                VexexDiagPhysReqToMRR64High32 = CAN_ALL_FRVar_Tester.B.exDiagPhysReqToMRR64High32;
                VexexDiagPhysReqToMRR64Low32= CAN_ALL_FRVar_Tester.B.exDiagPhysReqToMRR64Low32;

                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToMRR_FR+7] =Vu8_Tester_4_Tester_DiagReqToMRR_Data7Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToMRR_FR+6] =Vu8_Tester_4_Tester_DiagReqToMRR_Data6Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToMRR_FR+5] =Vu8_Tester_4_Tester_DiagReqToMRR_Data5Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToMRR_FR+4] =Vu8_Tester_4_Tester_DiagReqToMRR_Data4Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToMRR_FR+3] =Vu8_Tester_4_Tester_DiagReqToMRR_Data3Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToMRR_FR+2] =Vu8_Tester_4_Tester_DiagReqToMRR_Data2Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToMRR_FR+1] =Vu8_Tester_4_Tester_DiagReqToMRR_Data1Bit.R;
                CAN_ALL_FRVar_Tester.By[ 8*ALL_Tester_Tester_DiagReqToMRR_FR+0] =Vu8_Tester_4_Tester_DiagReqToMRR_Data0Bit.R;

                Vu8_Tester_4_Tester_DiagReqToMRR_Data7Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToMRR_FR + 7];
                Vu8_Tester_4_Tester_DiagReqToMRR_Data6Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToMRR_FR + 6];
                Vu8_Tester_4_Tester_DiagReqToMRR_Data5Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToMRR_FR + 5];
                Vu8_Tester_4_Tester_DiagReqToMRR_Data4Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToMRR_FR + 4];
                Vu8_Tester_4_Tester_DiagReqToMRR_Data3Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToMRR_FR + 3];
                Vu8_Tester_4_Tester_DiagReqToMRR_Data2Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToMRR_FR + 2];
                Vu8_Tester_4_Tester_DiagReqToMRR_Data1Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToMRR_FR + 1];
                Vu8_Tester_4_Tester_DiagReqToMRR_Data0Bit.R=CAN_ALL_FRVar_Tester.By[8 * ALL_Tester_Tester_DiagReqToMRR_FR + 0];


//--2 th CAN ���ĳ�ʼ���ӳ���------------
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_Tester_Tester_DiagFuncReq_CH];//Can_NR=1
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_Tester_Tester_DiagReqToPAM_CH];//Can_NR=2
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_Tester_Tester_DiagReqToIPM_CH];//Can_NR=3
                CAN1.IMASK1.R  |= CAN_IFLAG[ALL_Tester_Tester_DiagReqToMRR_CH];//Can_NR=4

//--Can_NR=1----Tester 1 the Data Frame ���ƣ�Tester_DiagFuncReq  ID��0x2015  ���ڣ�0ms  λ����8�ֽ�Tester-->

                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].ID.R= ALL_Tester_Tester_DiagFuncReq_ID;
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].CS.B.IDE = ALL_Tester_Tester_DiagFuncReq_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].CS.B.DLC =ALL_Tester_Tester_DiagFuncReq_LH; 

//--Can_NR=2----Tester 2 the Data Frame ���ƣ�Tester_DiagReqToPAM  ID��0x1856  ���ڣ�0ms  λ����8�ֽ�Tester-->

                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].ID.R= ALL_Tester_Tester_DiagReqToPAM_ID;
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].CS.B.IDE = ALL_Tester_Tester_DiagReqToPAM_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].CS.B.DLC =ALL_Tester_Tester_DiagReqToPAM_LH; 

//--Can_NR=3----Tester 3 the Data Frame ���ƣ�Tester_DiagReqToIPM  ID��0x1862  ���ڣ�0ms  λ����8�ֽ�Tester-->

                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].ID.R= ALL_Tester_Tester_DiagReqToIPM_ID;
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].CS.B.IDE = ALL_Tester_Tester_DiagReqToIPM_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].CS.B.DLC =ALL_Tester_Tester_DiagReqToIPM_LH; 

//--Can_NR=4----Tester 4 the Data Frame ���ƣ�Tester_DiagReqToMRR  ID��0x1874  ���ڣ�0ms  λ����8�ֽ�Tester-->

                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].CS.B.CODE = 4;//R=4,T=8 
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].ID.R= ALL_Tester_Tester_DiagReqToMRR_ID;
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].CS.B.IDE = ALL_Tester_Tester_DiagReqToMRR_IDE; // Use standard ID length, 1=extended 0 = standard
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].CS.B.RTR = 0;  //Data frame, not remote Tx request frame 
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].CS.B.DLC =ALL_Tester_Tester_DiagReqToMRR_LH; 
//--3 th CAN ���Ľ����ж��ӳ���------------

//--Can_NR=1----Tester 1 the Data Frame ���ƣ�Tester_DiagFuncReq  ID��0x2015  ���ڣ�0ms  λ����8�ֽ�Tester-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagFuncReq_CH]  == 0) {
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+0] = CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[0]; 
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+1] = CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[1];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+2] = CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[2];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+3] = CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[3];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+4] = CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[4];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+5] = CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[5];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+6] = CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[6];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+7] = CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[7];
               Error_CAN1.B.ALL_Tester = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagFuncReq = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_Tester_Tester_DiagFuncReq_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagFuncReq_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_Tester_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=2----Tester 2 the Data Frame ���ƣ�Tester_DiagReqToPAM  ID��0x1856  ���ڣ�0ms  λ����8�ֽ�Tester-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToPAM_CH]  == 0) {
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+0] = CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[0]; 
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+1] = CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[1];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+2] = CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[2];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+3] = CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[3];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+4] = CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[4];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+5] = CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[5];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+6] = CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[6];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+7] = CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[7];
               Error_CAN1.B.ALL_Tester = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagReqToPAM = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToPAM_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagReqToPAM_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_Tester_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=3----Tester 3 the Data Frame ���ƣ�Tester_DiagReqToIPM  ID��0x1862  ���ڣ�0ms  λ����8�ֽ�Tester-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToIPM_CH]  == 0) {
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+0] = CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[0]; 
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+1] = CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[1];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+2] = CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[2];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+3] = CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[3];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+4] = CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[4];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+5] = CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[5];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+6] = CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[6];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+7] = CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[7];
               Error_CAN1.B.ALL_Tester = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagReqToIPM = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToIPM_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagReqToIPM_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_Tester_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  

//--Can_NR=4----Tester 4 the Data Frame ���ƣ�Tester_DiagReqToMRR  ID��0x1874  ���ڣ�0ms  λ����8�ֽ�Tester-->

                if (CAN1.IFLAG1.B.BUFXXI) {
                if ( CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToMRR_CH]  == 0) {
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+0] = CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[0]; 
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+1] = CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[1];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+2] = CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[2];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+3] = CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[3];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+4] = CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[4];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+5] = CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[5];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+6] = CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[6];
                CAN_ALL_FRMes_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+7] = CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[7];
               Error_CAN1.B.ALL_Tester = 0 ;  //����CAN�����ź�
               Error_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagReqToMRR = 0 ;  //�������屨��CAN�����ź�
                CAN1_ReceivedMessage [ALL_Tester_Tester_DiagReqToMRR_CH] = 1 ; //ReceivedMessage=1
                CAN1_noReceivedMessageTime [ALL_Tester_Tester_DiagReqToMRR_CH] = 0 ;  //noReceivedMessage=0
                } //if ( CAN1_ReceivedMessage [ALL_Tester_CH]  == 0 ) {
                } //if (CAN1.IFLAG1.B.BUFXXI) {  
//--4 th CAN ���ķ����ӳ���------------                    

//--Can_NR=1----Tester 1 the Data Frame ���ƣ�Tester_DiagFuncReq  ID��0x2015  ���ڣ�0ms  λ����8�ֽ�Tester-->
                 if ( ( Pit0Ctr_10MS % ALL_Tester_Tester_DiagFuncReq_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_Tester_Tester_DiagFuncReq_CH] ;
                if ( D00CTR_def_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagFuncReqT == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[0] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+0];
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[1] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+1];
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[2] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+2];
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[3] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+3];
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[4] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+4];
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[5] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+5];
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[6] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+6];
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].DATA.B[7] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagFuncReq_FR+7];
                CAN1.MB[ALL_Tester_Tester_DiagFuncReq_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_Tester_Tester_DiagFuncReq_Ay] = ALL_Tester_Tester_DiagFuncReq_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagFuncReqT == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_Tester_Tester_DiagFuncReq_DT ) == 0 ) {


//--Can_NR=2----Tester 2 the Data Frame ���ƣ�Tester_DiagReqToPAM  ID��0x1856  ���ڣ�0ms  λ����8�ֽ�Tester-->
                 if ( ( Pit0Ctr_10MS % ALL_Tester_Tester_DiagReqToPAM_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_Tester_Tester_DiagReqToPAM_CH] ;
                if ( D00CTR_def_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagReqToPAMT == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[0] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+0];
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[1] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+1];
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[2] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+2];
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[3] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+3];
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[4] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+4];
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[5] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+5];
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[6] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+6];
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].DATA.B[7] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToPAM_FR+7];
                CAN1.MB[ALL_Tester_Tester_DiagReqToPAM_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_Tester_Tester_DiagReqToPAM_Ay] = ALL_Tester_Tester_DiagReqToPAM_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagReqToPAMT == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_Tester_Tester_DiagReqToPAM_DT ) == 0 ) {


//--Can_NR=3----Tester 3 the Data Frame ���ƣ�Tester_DiagReqToIPM  ID��0x1862  ���ڣ�0ms  λ����8�ֽ�Tester-->
                 if ( ( Pit0Ctr_10MS % ALL_Tester_Tester_DiagReqToIPM_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_Tester_Tester_DiagReqToIPM_CH] ;
                if ( D00CTR_def_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagReqToIPMT == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[0] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+0];
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[1] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+1];
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[2] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+2];
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[3] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+3];
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[4] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+4];
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[5] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+5];
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[6] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+6];
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].DATA.B[7] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToIPM_FR+7];
                CAN1.MB[ALL_Tester_Tester_DiagReqToIPM_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_Tester_Tester_DiagReqToIPM_Ay] = ALL_Tester_Tester_DiagReqToIPM_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagReqToIPMT == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_Tester_Tester_DiagReqToIPM_DT ) == 0 ) {


//--Can_NR=4----Tester 4 the Data Frame ���ƣ�Tester_DiagReqToMRR  ID��0x1874  ���ڣ�0ms  λ����8�ֽ�Tester-->
                 if ( ( Pit0Ctr_10MS % ALL_Tester_Tester_DiagReqToMRR_DT ) == 0 ) {
                 CAN1.IFLAG2.R = CAN_IFLAG[ALL_Tester_Tester_DiagReqToMRR_CH] ;
                if ( D00CTR_def_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagReqToMRRT == 1 ) { //CAN transmit valid
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[0] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+0];
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[1] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+1];
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[2] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+2];
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[3] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+3];
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[4] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+4];
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[5] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+5];
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[6] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+6];
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].DATA.B[7] = CAN_ALL_FRVar_Tester.By[8*ALL_Tester_Tester_DiagReqToMRR_FR+7];
                CAN1.MB[ALL_Tester_Tester_DiagReqToMRR_CH].CS.B.SRR = 1;   // Tx frame (not req'd for standard frame)
                CAN1_Trans_Ayyay[ALL_Tester_Tester_DiagReqToMRR_Ay] = ALL_Tester_Tester_DiagReqToMRR_CH + 0x80 ; //CAN channel number + 0x80��ʾ������Ч 
                 } //if ( D00CTR_def_CAN1_ALL_Tester.B.ALL_Tester_Tester_DiagReqToMRRT == 1 ) { //CAN transmit valid
                } //if ( ( Pit0Ctr_10MS % ALL_Tester_Tester_DiagReqToMRR_DT ) == 0 ) {


//=========================================================

#endif // _CAN_ALL_Tester_H 