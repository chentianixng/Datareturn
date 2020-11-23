/*** Module Rte_Type, written by TTX-Mwcodegenerator/Contract_Header.py    ***/
/*** (Version 0.17.0, 18-Apr-2018) on Thu 20-Aug-2020 07:50:44             ***/
/*** IFSet version: 1.1.20                                                 ***/
/* PRQA S 0602 4                                                             */

/* double include prevention */
#ifndef RTE_TYPE_H
# define RTE_TYPE_H

# include "Rte.h"


/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

/* IFSet version                                                             */
#define IFSET_VERSION_VARIANT (1) 
#define IFSET_VERSION_MAJOR (1) 
#define IFSET_VERSION_MINOR (20) 

/* PRQA S 0380, 0602, 0777, 0779, 0786, 0787, 0791, 0639, 3449, 4901 EOF     */
/*   0380: Number of macro definitions exceeds 4095-program does not conform */
/*     (Justification: Known limitation by design.)                          */
/*   0602: Allow TTTech-python-C-libs and CGL; usage of names starting with  */
/* _.                                                                        */
/*   0639: number of members in struct: supported by used compilers,         */
/* unacceptable increase in complexity if split.                             */
/*   0777/0779: Allow usage of names from model longer than 31 chars.        */
/*   3449: Allow multiple declarations of external object or function.       */
/*   0786/0787/0791: Allow usage of macro identifiers which match in the     */
/* first 63 chars.                                                           */
#define RTE_E_NOT_UPDATED (0x40) 
#define Rte_TypeDef_Dem_EventIdType 
typedef uint16 Dem_EventIdType; 
# define Dem_EventIdType_LowerLimit (0U)
# define Dem_EventIdType_UpperLimit (65535U)
#define Rte_TypeDef_Dem_EventStatusExtendedType 
typedef uint8 Dem_EventStatusExtendedType; 
# define Dem_EventStatusExtendedType_LowerLimit (0U)
# define Dem_EventStatusExtendedType_UpperLimit (255U)
# ifndef DEM_UDS_STATUS_TF 
#  define DEM_UDS_STATUS_TF (1U)
# endif 
# ifndef DEM_UDS_STATUS_TFTOC 
#  define DEM_UDS_STATUS_TFTOC (2U)
# endif 
# ifndef DEM_UDS_STATUS_PDTC 
#  define DEM_UDS_STATUS_PDTC (4U)
# endif 
# ifndef DEM_UDS_STATUS_CDTC 
#  define DEM_UDS_STATUS_CDTC (8U)
# endif 
# ifndef DEM_UDS_STATUS_TNCSLC 
#  define DEM_UDS_STATUS_TNCSLC (16U)
# endif 
# ifndef DEM_UDS_STATUS_TFSLC 
#  define DEM_UDS_STATUS_TFSLC (32U)
# endif 
# ifndef DEM_UDS_STATUS_TNCTOC 
#  define DEM_UDS_STATUS_TNCTOC (64U)
# endif 
# ifndef DEM_UDS_STATUS_WIR 
#  define DEM_UDS_STATUS_WIR (128U)
# endif 
#define Rte_TypeDef_Dem_EventStatusType 
typedef uint8 Dem_EventStatusType; 
# define Dem_EventStatusType_LowerLimit (0U)
# define Dem_EventStatusType_UpperLimit (255U)
# ifndef DEM_EVENT_STATUS_PASSED 
#  define DEM_EVENT_STATUS_PASSED (0U)
# endif 
# ifndef DEM_EVENT_STATUS_FAILED 
#  define DEM_EVENT_STATUS_FAILED (1U)
# endif 
# ifndef DEM_EVENT_STATUS_PREPASSED 
#  define DEM_EVENT_STATUS_PREPASSED (2U)
# endif 
# ifndef DEM_EVENT_STATUS_PREFAILED 
#  define DEM_EVENT_STATUS_PREFAILED (3U)
# endif 
#define Rte_TypeDef_Dt_ARRAY5_ReleaseType 
typedef uint8 Dt_ARRAY5_ReleaseType[5]; 
#define Rte_TypeDef_Dt_ARRAY_16_uint8 
typedef uint8 Dt_ARRAY_16_uint8[16]; 
#define Rte_TypeDef_Dt_ARRAY_17_uint8 
typedef uint8 Dt_ARRAY_17_uint8[17]; 
#define Rte_TypeDef_Dt_ARRAY_200_uint8_1_0 
typedef uint8 Dt_ARRAY_200_uint8_1_0[200]; 
#define Rte_TypeDef_Dt_BOOL 
typedef uint8 Dt_BOOL; 
# define Dt_BOOL_LowerLimit (0U)
# define Dt_BOOL_UpperLimit (1U)
#define Rte_TypeDef_Dt_BuildRevision 
typedef uint32 Dt_BuildRevision; 
# define Dt_BuildRevision_LowerLimit (0U)
# define Dt_BuildRevision_UpperLimit (4294967295U)
#define Rte_TypeDef_Dt_ENUM_CLKSOURCE 
typedef uint8 Dt_ENUM_CLKSOURCE; 
# define Dt_ENUM_CLKSOURCE_LowerLimit (0U)
# define Dt_ENUM_CLKSOURCE_UpperLimit (255U)
# ifndef LOCAL 
#  define LOCAL (0U)
# endif 
# ifndef EGT 
#  define EGT (1U)
# endif 
#define Rte_TypeDef_Dt_ENUM_LCS_State 
typedef uint8 Dt_ENUM_LCS_State; 
# define Dt_ENUM_LCS_State_LowerLimit (0U)
# define Dt_ENUM_LCS_State_UpperLimit (255U)
# ifndef LCS_STATE_INIT 
#  define LCS_STATE_INIT (0U)
# endif 
# ifndef LCS_STATE_EST 
#  define LCS_STATE_EST (1U)
# endif 
# ifndef LCS_STATE_STA 
#  define LCS_STATE_STA (2U)
# endif 
# ifndef LCS_STATE_SBY 
#  define LCS_STATE_SBY (3U)
# endif 
# ifndef LCS_STATE_RUN 
#  define LCS_STATE_RUN (4U)
# endif 
# ifndef LCS_STATE_SHU 
#  define LCS_STATE_SHU (5U)
# endif 
# ifndef LCS_STATE_WPO 
#  define LCS_STATE_WPO (6U)
# endif 
# ifndef LCS_STATE_NOTPRESENT 
#  define LCS_STATE_NOTPRESENT (7U)
# endif 
#define Rte_TypeDef_Dt_ENUM_SWCID 
typedef uint8 Dt_ENUM_SWCID; 
# define Dt_ENUM_SWCID_LowerLimit (0U)
# define Dt_ENUM_SWCID_UpperLimit (255U)
# ifndef SWCID_INIT 
#  define SWCID_INIT (0U)
# endif 
# ifndef SWCID_CtApDiagnosticManager 
#  define SWCID_CtApDiagnosticManager (1U)
# endif 
# ifndef SWCID_CtApE2ETranASILB 
#  define SWCID_CtApE2ETranASILB (2U)
# endif 
# ifndef SWCID_CtApE2ETranASILD 
#  define SWCID_CtApE2ETranASILD (3U)
# endif 
# ifndef SWCID_CtApSafetyGuardian 
#  define SWCID_CtApSafetyGuardian (4U)
# endif 
# ifndef SWCID_CtApSysManager 
#  define SWCID_CtApSysManager (5U)
# endif 
# ifndef SWCID_CtApUltrasonicHandler 
#  define SWCID_CtApUltrasonicHandler (6U)
# endif 
# ifndef SWCID_CtCdEyeQCom 
#  define SWCID_CtCdEyeQCom (7U)
# endif 
# ifndef SWCID_CtApCoarseTrackMatching_FreeRunning 
#  define SWCID_CtApCoarseTrackMatching_FreeRunning (8U)
# endif 
# ifndef SWCID_CtApDR 
#  define SWCID_CtApDR (9U)
# endif 
# ifndef SWCID_CtApFreeSpaceFusion 
#  define SWCID_CtApFreeSpaceFusion (10U)
# endif 
# ifndef SWCID_CtApHighFrequencyPositioning 
#  define SWCID_CtApHighFrequencyPositioning (11U)
# endif 
# ifndef SWCID_CtApImageProcess_FreeRunning 
#  define SWCID_CtApImageProcess_FreeRunning (12U)
# endif 
# ifndef SWCID_CtApInertialProcess 
#  define SWCID_CtApInertialProcess (13U)
# endif 
# ifndef SWCID_CtApIntegratedPositioning 
#  define SWCID_CtApIntegratedPositioning (14U)
# endif 
# ifndef SWCID_CtApInteractionProcess 
#  define SWCID_CtApInteractionProcess (15U)
# endif 
# ifndef SWCID_CtApLaneFusion 
#  define SWCID_CtApLaneFusion (16U)
# endif 
# ifndef SWCID_CtApLocBuffer 
#  define SWCID_CtApLocBuffer (17U)
# endif 
# ifndef SWCID_CtApMap_FreeRunning 
#  define SWCID_CtApMap_FreeRunning (18U)
# endif 
# ifndef SWCID_CtApMapSourcing_FreeRunning 
#  define SWCID_CtApMapSourcing_FreeRunning (19U)
# endif 
# ifndef SWCID_CtApMeProcess 
#  define SWCID_CtApMeProcess (20U)
# endif 
# ifndef SWCID_CtApMiddleMapmatching 
#  define SWCID_CtApMiddleMapmatching (21U)
# endif 
# ifndef SWCID_CtApMirrorDataManager_FreeRunning 
#  define SWCID_CtApMirrorDataManager_FreeRunning (22U)
# endif 
# ifndef SWCID_CtApMotionControl 
#  define SWCID_CtApMotionControl (23U)
# endif 
# ifndef SWCID_CtApMwrProcess 
#  define SWCID_CtApMwrProcess (24U)
# endif 
# ifndef SWCID_CtApObstacleFusion 
#  define SWCID_CtApObstacleFusion (25U)
# endif 
# ifndef SWCID_CtApParkingLot 
#  define SWCID_CtApParkingLot (26U)
# endif 
# ifndef SWCID_CtApPathPlanner 
#  define SWCID_CtApPathPlanner (27U)
# endif 
# ifndef SWCID_CtApPathSolver_FreeRunning 
#  define SWCID_CtApPathSolver_FreeRunning (28U)
# endif 
# ifndef SWCID_CtApPrediction 
#  define SWCID_CtApPrediction (29U)
# endif 
# ifndef SWCID_CtApSOMEIPGW 
#  define SWCID_CtApSOMEIPGW (30U)
# endif 
# ifndef SWCID_CtApStateMonitor 
#  define SWCID_CtApStateMonitor (31U)
# endif 
# ifndef SWCID_CtApTrafficElementFusion 
#  define SWCID_CtApTrafficElementFusion (32U)
# endif 
# ifndef SWCID_CtApTransformer 
#  define SWCID_CtApTransformer (33U)
# endif 
# ifndef SWCID_CtApUltrasonicProcess 
#  define SWCID_CtApUltrasonicProcess (34U)
# endif 
# ifndef SWCID_CtApUSBCom 
#  define SWCID_CtApUSBCom (35U)
# endif 
# ifndef SWCID_APPLICATION_UPPERLIMIT 
#  define SWCID_APPLICATION_UPPERLIMIT (150U)
# endif 
# ifndef SWCID_PF_LOWERLIMIT 
#  define SWCID_PF_LOWERLIMIT (200U)
# endif 
# ifndef SWCID_CtCdMiddlewareQM_SH00 
#  define SWCID_CtCdMiddlewareQM_SH00 (201U)
# endif 
# ifndef SWCID_CtApMiddlewareASIL_SH00 
#  define SWCID_CtApMiddlewareASIL_SH00 (202U)
# endif 
# ifndef SWCID_CtApComQM 
#  define SWCID_CtApComQM (203U)
# endif 
# ifndef SWCID_CtCdLCSM_SH00 
#  define SWCID_CtCdLCSM_SH00 (204U)
# endif 
# ifndef SWCID_CtCdTimeMonitor_SH00 
#  define SWCID_CtCdTimeMonitor_SH00 (205U)
# endif 
# ifndef SWCID_CtApComASILB 
#  define SWCID_CtApComASILB (206U)
# endif 
# ifndef SWCID_CtCdErrorHandlerMaster_SH00 
#  define SWCID_CtCdErrorHandlerMaster_SH00 (208U)
# endif 
# ifndef SWCID_CtApPer_SH00 
#  define SWCID_CtApPer_SH00 (209U)
# endif 
# ifndef SWCID_CtApComASILD 
#  define SWCID_CtApComASILD (210U)
# endif 
# ifndef SWCID_CtCdErrorHandlerProxy_PH00 
#  define SWCID_CtCdErrorHandlerProxy_PH00 (211U)
# endif 
# ifndef SWCID_CtCdTimeMonitor_PH00 
#  define SWCID_CtCdTimeMonitor_PH00 (213U)
# endif 
# ifndef SWCID_CtCdLCSS_PH00 
#  define SWCID_CtCdLCSS_PH00 (214U)
# endif 
# ifndef SWCID_CtApStbMASIL_PH00 
#  define SWCID_CtApStbMASIL_PH00 (215U)
# endif 
# ifndef SWCID_CtApStbMASIL_SH00 
#  define SWCID_CtApStbMASIL_SH00 (216U)
# endif 
# ifndef SWCID_CtCdDebug_PH00 
#  define SWCID_CtCdDebug_PH00 (219U)
# endif 
# ifndef SWCID_CtApDSC_PH00 
#  define SWCID_CtApDSC_PH00 (220U)
# endif 
# ifndef SWCID_CtApHostSupervisionSlave_PH00 
#  define SWCID_CtApHostSupervisionSlave_PH00 (221U)
# endif 
# ifndef SWCID_CtApPer_PH00 
#  define SWCID_CtApPer_PH00 (222U)
# endif 
# ifndef SWCID_CtCdMiddlewareQM_PH00 
#  define SWCID_CtCdMiddlewareQM_PH00 (223U)
# endif 
# ifndef SWCID_CtCdCalibration_PH00 
#  define SWCID_CtCdCalibration_PH00 (224U)
# endif 
# ifndef SWCID_CtCdDebug_SH00 
#  define SWCID_CtCdDebug_SH00 (227U)
# endif 
# ifndef SWCID_CtApDSC_SH00 
#  define SWCID_CtApDSC_SH00 (230U)
# endif 
# ifndef SWCID_CtCdCalibration_SH00 
#  define SWCID_CtCdCalibration_SH00 (231U)
# endif 
# ifndef SWCID_CtApBISTQM_SH00 
#  define SWCID_CtApBISTQM_SH00 (232U)
# endif 
# ifndef SWCID_CtApBISTASIL_SH00 
#  define SWCID_CtApBISTASIL_SH00 (233U)
# endif 
# ifndef SWCID_CtApBswProxy_SH00 
#  define SWCID_CtApBswProxy_SH00 (234U)
# endif 
# ifndef SWCID_CtApHostSupervisionMaster_SH00 
#  define SWCID_CtApHostSupervisionMaster_SH00 (235U)
# endif 
# ifndef SWCID_PF_BSW 
#  define SWCID_PF_BSW (236U)
# endif 
# ifndef SWCID_PF_BSW_SAFE 
#  define SWCID_PF_BSW_SAFE (237U)
# endif 
# ifndef SWCID_PF_COM 
#  define SWCID_PF_COM (238U)
# endif 
# ifndef SWCID_PF_COM_SAFE 
#  define SWCID_PF_COM_SAFE (239U)
# endif 
# ifndef SWCID_PF_DRIVER 
#  define SWCID_PF_DRIVER (240U)
# endif 
# ifndef SWCID_PF_DRIVER_SAFE 
#  define SWCID_PF_DRIVER_SAFE (241U)
# endif 
# ifndef SWCID_PF_OS 
#  define SWCID_PF_OS (242U)
# endif 
# ifndef SWCID_PF_OS_SAFE 
#  define SWCID_PF_OS_SAFE (243U)
# endif 
# ifndef SWCID_PF_SIL 
#  define SWCID_PF_SIL (244U)
# endif 
# ifndef SWCID_PF_SW 
#  define SWCID_PF_SW (245U)
# endif 
# ifndef SWCID_PF_SW_SAFE 
#  define SWCID_PF_SW_SAFE (246U)
# endif 
# ifndef SWCID_CtApMiddlewareASIL_PH00 
#  define SWCID_CtApMiddlewareASIL_PH00 (247U)
# endif 
# ifndef SWCID_CtApBISTASIL_PH00 
#  define SWCID_CtApBISTASIL_PH00 (248U)
# endif 
# ifndef SWCID_CtApBISTQM_PH00 
#  define SWCID_CtApBISTQM_PH00 (249U)
# endif 
#define Rte_TypeDef_Dt_ENUM_VAR_HWVariant 
typedef uint8 Dt_ENUM_VAR_HWVariant; 
# define Dt_ENUM_VAR_HWVariant_LowerLimit (0U)
# define Dt_ENUM_VAR_HWVariant_UpperLimit (255U)
# ifndef VARIANT_UNKNOWN 
#  define VARIANT_UNKNOWN (0U)
# endif 
# ifndef ADAS 
#  define ADAS (1U)
# endif 
#define Rte_TypeDef_UINT_GAP_8 
typedef uint8 UINT_GAP_8; 
# define UINT_GAP_8_LowerLimit (0U)
# define UINT_GAP_8_UpperLimit (255U)
#define Rte_TypeDef_Dt_IFSET_VERSION 
typedef struct _Dt_IFSET_VERSION
  {
    uint8 DeMajor;
    uint8 DeMinor;
    uint8 DePatch;
    UINT_GAP_8 PaddingGap8_1;
  } Dt_IFSET_VERSION; 
#define Rte_TypeDef_Dt_ENUM_PdDatablockStatus 
typedef uint16 Dt_ENUM_PdDatablockStatus; 
# define Dt_ENUM_PdDatablockStatus_LowerLimit (0U)
# define Dt_ENUM_PdDatablockStatus_UpperLimit (65535U)
# ifndef DATABLOCK_INIT 
#  define DATABLOCK_INIT (0U)
# endif 
# ifndef DATABLOCK_OK 
#  define DATABLOCK_OK (1U)
# endif 
# ifndef DATABLOCK_NOT_OK 
#  define DATABLOCK_NOT_OK (2U)
# endif 
# ifndef DATABLOCK_WRONGCRC 
#  define DATABLOCK_WRONGCRC (3U)
# endif 
# ifndef DATABLOCK_ERASED 
#  define DATABLOCK_ERASED (4U)
# endif 
#define Rte_TypeDef_UINT_GAP_16 
typedef uint16 UINT_GAP_16; 
# define UINT_GAP_16_LowerLimit (0U)
# define UINT_GAP_16_UpperLimit (65535U)
#define Rte_TypeDef_Dt_RECORD_SW_Version 
typedef struct _Dt_RECORD_SW_Version
  {
    uint8 DeMajor;
    uint8 DeMinor;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_SW_Version; 
#define Rte_TypeDef_Dt_RECORD_PdVersion 
typedef struct _Dt_RECORD_PdVersion
  {
    Dt_RECORD_SW_Version DeExpectedVersion;
    Dt_RECORD_SW_Version DeVersion;
  } Dt_RECORD_PdVersion; 
#define Rte_TypeDef_Dt_ARRAY_128_uint8 
typedef uint8 Dt_ARRAY_128_uint8[128]; 
#define Rte_TypeDef_Dt_RECORD_ImageProcessDs 
typedef struct _Dt_RECORD_ImageProcessDs
  {
    Dt_ARRAY_128_uint8 data;
  } Dt_RECORD_ImageProcessDs; 
#define Rte_TypeDef_Dt_RECORD_ADASDecisionDS 
typedef struct _Dt_RECORD_ADASDecisionDS
  {
    Dt_ENUM_PdDatablockStatus DeStatus;
    UINT_GAP_16 PaddingGap16_1;
    Dt_RECORD_PdVersion DeVersion;
    Dt_RECORD_ImageProcessDs DeData;
  } Dt_RECORD_ADASDecisionDS; 
#define Rte_TypeDef_Dt_ARRAY_UINT64_1_0 
typedef uint32 Dt_ARRAY_UINT64_1_0[2]; 
#define Rte_TypeDef_Dt_RECORD_HEADER 
typedef struct _Dt_RECORD_HEADER
  {
    uint16 Counter;
    uint8 FrameID;
    UINT_GAP_8 PaddingGap8_1;
    Dt_ARRAY_UINT64_1_0 TimeStamp;
  } Dt_RECORD_HEADER; 
#define Rte_TypeDef_Dt_RECORD_AVCameraDirt 
typedef struct _Dt_RECORD_AVCameraDirt
  {
    Dt_RECORD_HEADER stHeader;
    uint8 AVCameraDirt;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_AVCameraDirt; 
#define Rte_TypeDef_Dt_RECORD_AVData_Upload_Status 
typedef struct _Dt_RECORD_AVData_Upload_Status
  {
    Dt_RECORD_HEADER stHeader;
    uint8 AVData_Upload_Status;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_AVData_Upload_Status; 
#define Rte_TypeDef_Dt_RECORD_BMS_HSC1_FrP11 
typedef struct _Dt_RECORD_BMS_HSC1_FrP11
  {
    boolean BMSOnbdChrgrPlugOn_h1HSC1;
    boolean BMSOfbdChrgrPlugOn_h1HSC1;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_BMS_HSC1_FrP11; 
#define Rte_TypeDef_Dt_ARRAY4694304_UINT8_1_0 
typedef uint8 Dt_ARRAY4694304_UINT8_1_0[4694304]; 
#define Rte_TypeDef_Dt_RECORD_BdData_4M 
typedef struct _Dt_RECORD_BdData_4M
  {
    Dt_ENUM_PdDatablockStatus DeStatus;
    UINT_GAP_16 PaddingGap16_1;
    Dt_RECORD_PdVersion DeVersion;
    Dt_ARRAY4694304_UINT8_1_0 DeData;
        /* BdSize: 4694304Byte (field added by MWC)                  */
  } Dt_RECORD_BdData_4M; 
#define Rte_TypeDef_Dt_ARRAY_5_uint32 
typedef uint32 Dt_ARRAY_5_uint32[5]; 
#define Rte_TypeDef_Dt_RECORD_DR_List 
typedef struct _Dt_RECORD_DR_List
  {
    Dt_RECORD_HEADER stHeader;
    uint8 count;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    float64 time_sec;
    float64 utm_x;
    float64 utm_y;
    float32 utm_z;
    float32 heading;
    float32 delta_x;
    float32 delta_y;
    float32 delta_z;
    float32 delta_yaw;
    float32 belif;
    Dt_ARRAY_5_uint32 reserved_int;
  } Dt_RECORD_DR_List; 
#define Rte_TypeDef_Dt_ARRAY_110_DR_List 
typedef Dt_RECORD_DR_List Dt_ARRAY_110_DR_List[110]; 
#define Rte_TypeDef_Dt_RECORD_DeDR_List 
typedef struct _Dt_RECORD_DeDR_List
  {
    Dt_RECORD_HEADER stHeader;
    UINT_GAP_16 PaddingGap16_1;
    UINT_GAP_16 PaddingGap16_2;
    float64 Origin_time;
    float64 Origin_utm_x;
    float64 Origin_utm_y;
    float64 Origin_utm_z;
    float32 Origin_utm_heading;
    UINT_GAP_16 PaddingGap16_3;
    UINT_GAP_16 PaddingGap16_4;
    Dt_ARRAY_110_DR_List DR_List;
  } Dt_RECORD_DeDR_List; 
#define Rte_TypeDef_Dt_UINT8_1_0 
typedef uint8 Dt_UINT8_1_0; 
# define Dt_UINT8_1_0_LowerLimit (0U)
# define Dt_UINT8_1_0_UpperLimit (255U)
#define Rte_TypeDef_Dt_RECORD_Diag_Coding 
typedef struct _Dt_RECORD_Diag_Coding
  {
    Dt_UINT8_1_0 FW_Dummy;
        /* Lnder Variante                                            */
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_Diag_Coding; 
#define Rte_TypeDef_Dt_ARRAY_10_uint8 
typedef uint8 Dt_ARRAY_10_uint8[10]; 
#define Rte_TypeDef_Dt_RECORD_DrivingModeSts 
typedef struct _Dt_RECORD_DrivingModeSts
  {
    Dt_RECORD_HEADER stHeader;
    uint8 nWarningLevel;
    uint8 nDrivingStatus;
    uint8 nDrivingMode;
    Dt_ARRAY_10_uint8 ngBKP;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_DrivingModeSts; 
#define Rte_TypeDef_Dt_RECORD_EyeQ2ImageProcess 
typedef struct _Dt_RECORD_EyeQ2ImageProcess
  {
    uint8 RSD_Message_reserved;
    uint8 Zero_byte;
    uint8 RSD_message_Version;
    uint8 RSD_Sync_ID;
    uint8 RSD_Payload_Byte_0;
    uint8 RSD_Payload_Byte_1;
    uint8 RSD_Payload_Byte_2;
    uint8 RSD_Payload_Byte_3;
    uint8 RSD_Payload_Byte_4;
    uint8 RSD_Payload_Byte_5;
    uint8 RSD_Payload_Byte_6;
    uint8 RSD_Payload_Byte_7;
    uint8 RSD_Payload_Byte_8;
    uint8 RSD_Payload_Byte_9;
    uint8 RSD_Payload_Byte_10;
    uint8 RSD_Payload_Byte_11;
    uint8 RSD_Payload_Byte_12;
    uint8 RSD_Payload_Byte_13;
    uint8 RSD_Payload_Byte_14;
    uint8 RSD_Payload_Byte_15;
    uint8 RSD_Payload_Byte_16;
    uint8 RSD_Payload_Byte_17;
    uint8 RSD_Payload_Byte_18;
    uint8 RSD_Payload_Byte_19;
    uint8 RSD_Payload_Byte_20;
    uint8 RSD_Payload_Byte_21;
    uint8 RSD_Payload_Byte_22;
    uint8 RSD_Payload_Byte_23;
    uint8 RSD_Payload_Byte_24;
    uint8 RSD_Payload_Byte_25;
    uint8 RSD_Payload_Byte_26;
    uint8 RSD_Payload_Byte_27;
    uint8 RSD_Payload_Byte_28;
    uint8 RSD_Payload_Byte_29;
    uint8 RSD_Payload_Byte_30;
    uint8 RSD_Payload_Byte_31;
    uint8 RSD_Payload_Byte_32;
    uint8 RSD_Payload_Byte_33;
    uint8 RSD_Payload_Byte_34;
    uint8 RSD_Payload_Byte_35;
    uint8 RSD_Payload_Byte_36;
    uint8 RSD_Payload_Byte_37;
    uint8 RSD_Payload_Byte_38;
    uint8 RSD_Payload_Byte_39;
    uint8 RSD_Payload_Byte_40;
    uint8 RSD_Payload_Byte_41;
    uint8 RSD_Payload_Byte_42;
    uint8 RSD_Payload_Byte_43;
    uint8 RSD_Payload_Byte_44;
    uint8 RSD_Payload_Byte_45;
    uint8 RSD_Payload_Byte_46;
    uint8 RSD_Payload_Byte_47;
    uint8 RSD_Payload_Byte_48;
    uint8 RSD_Payload_Byte_49;
    uint8 RSD_Payload_Byte_50;
    uint8 RSD_Payload_Byte_51;
    uint8 RSD_Payload_Byte_52;
    uint8 RSD_Payload_Byte_53;
    uint8 RSD_Payload_Byte_54;
    uint8 RSD_Payload_Byte_55;
    uint8 RSD_Payload_Byte_56;
    uint8 RSD_Payload_Byte_57;
    uint8 RSD_Payload_Byte_58;
    uint8 RSD_Payload_Byte_59;
    uint8 RSD_Payload_Byte_60;
    uint8 RSD_Payload_Byte_61;
    uint8 RSD_Payload_Byte_62;
    uint8 RSD_Payload_Byte_63;
    uint8 RSD_Payload_Byte_64;
    uint8 RSD_Payload_Byte_65;
    uint8 RSD_Payload_Byte_66;
    uint8 RSD_Payload_Byte_67;
    uint8 RSD_Payload_Byte_68;
    uint8 RSD_Payload_Byte_69;
    uint8 RSD_Payload_Byte_70;
    uint8 RSD_Payload_Byte_71;
    uint8 RSD_Payload_Byte_72;
    uint8 RSD_Payload_Byte_73;
    uint8 RSD_Payload_Byte_74;
    uint8 RSD_Payload_Byte_75;
    uint8 RSD_Payload_Byte_76;
    uint8 RSD_Payload_Byte_77;
    uint8 RSD_Payload_Byte_78;
    uint8 RSD_Payload_Byte_79;
    uint8 RSD_Payload_Byte_80;
    uint8 RSD_Payload_Byte_81;
    uint8 RSD_Payload_Byte_82;
    uint8 RSD_Payload_Byte_83;
    uint8 RSD_Payload_Byte_84;
    uint8 RSD_Payload_Byte_85;
    uint8 RSD_Payload_Byte_86;
    uint8 RSD_Payload_Byte_87;
    uint8 RSD_Payload_Byte_88;
    uint8 RSD_Payload_Byte_89;
    uint8 RSD_Payload_Byte_90;
    uint8 RSD_Payload_Byte_91;
    uint8 RSD_Payload_Byte_92;
    uint8 RSD_Payload_Byte_93;
    uint8 RSD_Payload_Byte_94;
    uint8 RSD_Payload_Byte_95;
    uint8 RSD_Payload_Byte_96;
    uint8 RSD_Payload_Byte_97;
    uint8 RSD_Payload_Byte_98;
    uint8 RSD_Payload_Byte_99;
    uint8 RSD_Payload_Byte_100;
    uint8 RSD_Payload_Byte_101;
    uint8 RSD_Payload_Byte_102;
    uint8 RSD_Payload_Byte_103;
    uint8 RSD_Payload_Byte_104;
    uint8 RSD_Payload_Byte_105;
    uint8 RSD_Payload_Byte_106;
    uint8 RSD_Payload_Byte_107;
    uint8 RSD_Payload_Byte_108;
    uint8 RSD_Payload_Byte_109;
    uint8 RSD_Payload_Byte_110;
    uint8 RSD_Payload_Byte_111;
    uint8 RSD_Payload_Byte_112;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_EyeQ2ImageProcess; 
#define Rte_TypeDef_Dt_RECORD_FICM_HSC4_FrP13 
typedef struct _Dt_RECORD_FICM_HSC4_FrP13
  {
    boolean CMDMODHSC4;
    boolean AlisysrdyHSC4;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_FICM_HSC4_FrP13; 
#define Rte_TypeDef_Dt_RECORD_FICM_HSC4_FrP18_FrP35_AVM 
typedef struct _Dt_RECORD_FICM_HSC4_FrP18_FrP35_AVM
  {
    boolean SurndViewSelnVHSC4;
    uint8 SurndViewSeln_oldHSC4;
    uint8 SurVwSlcHSC4;
    UINT_GAP_8 PaddingGap8_1;
  } Dt_RECORD_FICM_HSC4_FrP18_FrP35_AVM; 
#define Rte_TypeDef_Dt_RECORD_FICM_HSC4_FrP19 
typedef struct _Dt_RECORD_FICM_HSC4_FrP19
  {
    boolean AutoViewChgHSC4;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_FICM_HSC4_FrP19; 
#define Rte_TypeDef_Dt_RECORD_FICM_HSC4_FrP32 
typedef struct _Dt_RECORD_FICM_HSC4_FrP32
  {
    uint8 SurndViewSelnHSC4;
    UINT_GAP_8 PaddingGap8_1;
    uint16 SCREEN_COORD_AXHSC4;
    uint8 TOUCH_SCREEN_ACMDHSC4;
    UINT_GAP_8 PaddingGap8_2;
    uint16 SCREEN_COORD_AYHSC4;
    uint8 TOUCH_SCREEN_STATUSHSC4;
    UINT_GAP_8 PaddingGap8_3;
    uint16 SCREEN_COORD_BXHSC4;
    uint8 TOUCH_SCREEN_BCMDHSC4;
    UINT_GAP_8 PaddingGap8_4;
    uint16 SCREEN_COORD_BYHSC4;
  } Dt_RECORD_FICM_HSC4_FrP32; 
#define Rte_TypeDef_Dt_RECORD_FailureCondition_FRP 
typedef struct _Dt_RECORD_FailureCondition_FRP
  {
    Dt_RECORD_HEADER stHeader;
    uint32 nFailureConditionCode;
    uint32 nReserved;
  } Dt_RECORD_FailureCondition_FRP; 
#define Rte_TypeDef_Dt_RECORD_FaultCondition_BKP_FRP 
typedef struct _Dt_RECORD_FaultCondition_BKP_FRP
  {
    Dt_ARRAY_5_uint32 FaultCondition_BKP;
  } Dt_RECORD_FaultCondition_BKP_FRP; 
#define Rte_TypeDef_Dt_RECORD_FaultCondition_FRP 
typedef struct _Dt_RECORD_FaultCondition_FRP
  {
    Dt_RECORD_HEADER stHeader;
    uint32 nFaultConditionCode;
    uint32 nReserved;
  } Dt_RECORD_FaultCondition_FRP; 
#define Rte_TypeDef_Dt_RECORD_FltActnReq 
typedef struct _Dt_RECORD_FltActnReq
  {
    Dt_RECORD_HEADER stHeader;
    uint32 FltActnReq;
    uint32 Reserved;
  } Dt_RECORD_FltActnReq; 
#define Rte_TypeDef_Dt_RECORD_FltIndicator 
typedef struct _Dt_RECORD_FltIndicator
  {
    Dt_RECORD_HEADER stHeader;
    uint8 PilotFltSt;
    uint8 ACCtFltSt;
    uint8 ParkingtFltSt;
    uint8 SwDTCReq;
    uint8 DataRecReq;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    uint32 reserved;
  } Dt_RECORD_FltIndicator; 
#define Rte_TypeDef_Dt_ARRAY_9_float64 
typedef float64 Dt_ARRAY_9_float64[9]; 
#define Rte_TypeDef_Dt_RECORD_FromGPS 
typedef struct _Dt_RECORD_FromGPS
  {
    Dt_RECORD_HEADER stHeader;
    UINT_GAP_16 PaddingGap16_1;
    UINT_GAP_16 PaddingGap16_2;
    float64 fLatitude;
    float64 fLongitude;
    float32 fAltitude;
    float32 fAccX;
    float32 fAccY;
    float32 fAccZ;
    float32 fAngRateX;
    float32 fAngRateY;
    float32 fAngRateZ;
    float32 fVelNorth;
    float32 fVelWest;
    float32 fVelUp;
    float32 fHeading;
    float32 fPitch;
    float32 fRoll;
    uint8 nNavStatus;
    sint8 nInitStatusPosition;
    sint8 nInitstatusVel;
    sint8 nInitstatusRP;
    sint8 nInitstatusH;
    UINT_GAP_8 PaddingGap8_3;
    UINT_GAP_16 PaddingGap16_4;
    UINT_GAP_16 PaddingGap16_5;
    UINT_GAP_16 PaddingGap16_6;
    float64 dGPSTime;
    Dt_ARRAY_9_float64 stdstd;
    uint8 iGPSPositionMode;
    uint8 iGPSVelMode;
    uint8 iDaulAntennaOrientationMode;
    uint8 iSINSMode;
    Dt_ARRAY_16_uint8 bkp;
    UINT_GAP_16 PaddingGap16_7;
    UINT_GAP_16 PaddingGap16_8;
  } Dt_RECORD_FromGPS; 
#define Rte_TypeDef_Dt_RECORD_IECU_HSC1_PDC_FrP00 
typedef struct _Dt_RECORD_IECU_HSC1_PDC_FrP00
  {
    uint8 FrtObsDist_h1HSC1;
    uint8 RrObsDist_h1HSC1;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_IECU_HSC1_PDC_FrP00; 
#define Rte_TypeDef_Dt_RECORD_IECU_HSC4_FrP08_SV 
typedef struct _Dt_RECORD_IECU_HSC4_FrP08_SV
  {
    boolean HD_sysrdyHSC4;
    uint8 HD_CurViewHSC4;
    boolean HD_AVMsysrdyHSC4;
    uint8 HD_InfoDisplayHSC4;
    uint8 HD_VideoFmtStaHSC4;
    uint8 HD_ErrorDisplayHSC4;
    uint8 HD_AVMVideoFmtStaHSC4;
    uint8 HD_AVMCurViewHSC4;
    uint8 HD_AVMInfoDisplayHSC4;
    uint8 HD_AVMErrorDisplayHSC4;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_IECU_HSC4_FrP08_SV; 
#define Rte_TypeDef_Dt_RECORD_ImageProcess2EyeQ 
typedef struct _Dt_RECORD_ImageProcess2EyeQ
  {
    uint8 RSD_Sensor_Message_Reserved;
    uint8 RSD_EthernetCom_Received_Sync_ID;
    uint8 RSDS_Zero_Byte;
    uint8 RSDS_Version;
    uint8 RSDS_Cyclic_Counter;
    uint8 RSDS_Buffer_0;
    uint8 RSDS_Message_ID;
    uint8 RSDS_Type;
    boolean RSDS_B_Received;
    uint8 RSDS_P_Count;
    uint16 RSDS_CRC;
    uint8 RSDS_Message_Type;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    uint32 RSDS_Size;
    uint8 RSDS_Buffer_1;
    uint8 RSDS_Reserved_1;
    UINT_GAP_16 PaddingGap16_3;
  } Dt_RECORD_ImageProcess2EyeQ; 
#define Rte_TypeDef_Dt_ARRAY_150_uint8 
typedef uint8 Dt_ARRAY_150_uint8[150]; 
#define Rte_TypeDef_Dt_RECORD_ImageProcessSec_Normal 
typedef struct _Dt_RECORD_ImageProcessSec_Normal
  {
    Dt_ENUM_PdDatablockStatus DeStatus;
    UINT_GAP_16 PaddingGap16_1;
    Dt_RECORD_PdVersion DeVersion;
    Dt_ARRAY_150_uint8 DeData;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_ImageProcessSec_Normal; 
#define Rte_TypeDef_Dt_ARRAY_10_sint32 
typedef sint32 Dt_ARRAY_10_sint32[10]; 
#define Rte_TypeDef_Dt_ARRAY_10_float32 
typedef float32 Dt_ARRAY_10_float32[10]; 
#define Rte_TypeDef_Dt_RECORD_Save 
typedef struct _Dt_RECORD_Save
  {
    Dt_ARRAY_10_sint32 ngSignal;
    Dt_ARRAY_10_float32 fgSignal;
  } Dt_RECORD_Save; 
#define Rte_TypeDef_Dt_RECORD_ImageProcess_FreeRunning_Normal 
typedef struct _Dt_RECORD_ImageProcess_FreeRunning_Normal
  {
    Dt_ENUM_PdDatablockStatus DeStatus;
    UINT_GAP_16 PaddingGap16_1;
    Dt_RECORD_PdVersion DeVersion;
    Dt_RECORD_Save DeData;
  } Dt_RECORD_ImageProcess_FreeRunning_Normal; 
#define Rte_TypeDef_Dt_ARRAY_31_float32 
typedef float32 Dt_ARRAY_31_float32[31]; 
#define Rte_TypeDef_Dt_ARRAY_200_uint8 
typedef uint8 Dt_ARRAY_200_uint8[200]; 
#define Rte_TypeDef_Dt_RECORD_ImageProcessPERData 
typedef struct _Dt_RECORD_ImageProcessPERData
  {
    uint16 stHeader_Counter;
    uint8 stHeader_FrameID;
    UINT_GAP_8 PaddingGap8_1;
    Dt_ARRAY_UINT64_1_0 stHeader_TimeStamp;
    sint32 stCamInt_w;
    sint32 stCamInt_h;
    float32 stCamInt_cu;
    float32 stCamInt_cv;
    float32 stCamInt_skew_c;
    float32 stCamInt_skew_d;
    float32 stCamInt_skew_e;
    float32 stCamInt_fu_or_hfov_at_cu;
    float32 stCamInt_fu_or_hfov_at_cv;
    sint32 stCamInt_use_fov;
    sint32 stCamInt_lut;
    float32 stCamExt_rx;
    float32 stCamExt_ry;
    float32 stCamExt_rz;
    float32 stCamExt_tx;
    float32 stCamExt_ty;
    float32 stCamExt_tz;
    float32 stCarParam_eachPulseDist;
    uint8 stCarParam_frontWheelDriven;
    UINT_GAP_8 PaddingGap8_2;
    UINT_GAP_16 PaddingGap16_3;
    Dt_ARRAY_31_float32 stCarParam_reserved;
    Dt_ARRAY_200_uint8 stCarParam_gnMotionModelCalib_01;
    Dt_ARRAY_200_uint8 stCarParam_gnMotionModelCalib_02;
    Dt_ARRAY_200_uint8 stCarParam_gnMotionModelCalib_03;
    Dt_ARRAY_200_uint8 stCarParam_gnMotionModelCalib_04;
    Dt_ARRAY_200_uint8 stCarParam_gnMotionModelCalib_05;
    Dt_ARRAY_200_uint8 stCarParam_gnMotionModelCalib_06;
  } Dt_RECORD_ImageProcessPERData; 
#define Rte_TypeDef_Dt_RECORD_ImageProcess_Normal 
typedef struct _Dt_RECORD_ImageProcess_Normal
  {
    Dt_ENUM_PdDatablockStatus DeStatus;
    UINT_GAP_16 PaddingGap16_1;
    Dt_RECORD_PdVersion DeVersion;
    Dt_RECORD_ImageProcessPERData DeData;
  } Dt_RECORD_ImageProcess_Normal; 
#define Rte_TypeDef_Dt_RECORD_MeasuredValue_SvCamCalFail_0xb030 
typedef struct _Dt_RECORD_MeasuredValue_SvCamCalFail_0xb030
  {
    Dt_UINT8_1_0 Right_camera_calibration_fail;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 Rear_camera_calibration_fail;
    Dt_UINT8_1_0 Front_camera_calibration_fail;
    Dt_UINT8_1_0 Left_camera_calibration_fail;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_MeasuredValue_SvCamCalFail_0xb030; 
#define Rte_TypeDef_Dt_RECORD_MeasuredValue_SvCamDatafail_0xb036 
typedef struct _Dt_RECORD_MeasuredValue_SvCamDatafail_0xb036
  {
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 Front_camera_Hue_value;
    Dt_UINT8_1_0 Rear_camera_Hue_value;
    Dt_UINT8_1_0 Rear_camera_loss_signal;
    Dt_UINT8_1_0 Left_camera_loss_signal;
    Dt_UINT8_1_0 Right_camera_loss_signal;
    Dt_UINT8_1_0 Left_camera_Hue_value;
    Dt_UINT8_1_0 Front_camera_loss_signal;
    Dt_UINT8_1_0 Right_camera_Hue_value;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_MeasuredValue_SvCamDatafail_0xb036; 
#define Rte_TypeDef_Dt_SINT8_1_0 
typedef sint8 Dt_SINT8_1_0; 
# define Dt_SINT8_1_0_LowerLimit (-128U)
# define Dt_SINT8_1_0_UpperLimit (127U)
#define Rte_TypeDef_Dt_RECORD_MeasuredValue_SvCamTemperature_0xb031 
typedef struct _Dt_RECORD_MeasuredValue_SvCamTemperature_0xb031
  {
    Dt_SINT8_1_0 Front_camera_temperatureRange;
    Dt_SINT8_1_0 Right_camera_temperatureRange;
    Dt_SINT8_1_0 Left_camera_temperatureRange;
    Dt_UINT8_1_0 Reserved;
    Dt_SINT8_1_0 Rear_camera_temperatureRange;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_MeasuredValue_SvCamTemperature_0xb031; 
#define Rte_TypeDef_Dt_RECORD_MeasuredValue_RearviewMirrorStatu_0xb032 
typedef struct _Dt_RECORD_MeasuredValue_RearviewMirrorStatu_0xb032
  {
    Dt_UINT8_1_0 Left_rearview_mirror_is_not_folding;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 Right_rearview_mirror_is_not_folding;
    UINT_GAP_8 PaddingGap8_1;
  } Dt_RECORD_MeasuredValue_RearviewMirrorStatu_0xb032; 
#define Rte_TypeDef_Dt_RECORD_MeasuredValue_FrontCamFailsafe_0xb033 
typedef struct _Dt_RECORD_MeasuredValue_FrontCamFailsafe_0xb033
  {
    Dt_UINT8_1_0 Low_Illumination_Scene;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 CAM_LOW_FPS;
    Dt_UINT8_1_0 Image_freeze;
    Dt_UINT8_1_0 WET_CAMLENS;
    Dt_UINT8_1_0 ABCOLOR_CAM;
    Dt_UINT8_1_0 CAM_BLOCKED;
    Dt_UINT8_1_0 DIRTY_CAMLENS;
    Dt_UINT8_1_0 Direct_sunlight;
    Dt_UINT8_1_0 BLUR_IMG;
    Dt_UINT8_1_0 GROUND_REFLECT;
    UINT_GAP_8 PaddingGap8_1;
  } Dt_RECORD_MeasuredValue_FrontCamFailsafe_0xb033; 
#define Rte_TypeDef_Dt_RECORD_MeasuredValue_LeftCamFailsafe_0xb034 
typedef struct _Dt_RECORD_MeasuredValue_LeftCamFailsafe_0xb034
  {
    Dt_UINT8_1_0 Low_Illumination_Scene;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 CAM_LOW_FPS;
    Dt_UINT8_1_0 Image_freeze;
    Dt_UINT8_1_0 WET_CAMLENS;
    Dt_UINT8_1_0 ABCOLOR_CAM;
    Dt_UINT8_1_0 CAM_BLOCKED;
    Dt_UINT8_1_0 DIRTY_CAMLENS;
    Dt_UINT8_1_0 Direct_sunlight;
    Dt_UINT8_1_0 BLUR_IMG;
    Dt_UINT8_1_0 GROUND_REFLECT;
    UINT_GAP_8 PaddingGap8_1;
  } Dt_RECORD_MeasuredValue_LeftCamFailsafe_0xb034; 
#define Rte_TypeDef_Dt_RECORD_MeasuredValue_RightCamFailsafe_0xb035 
typedef struct _Dt_RECORD_MeasuredValue_RightCamFailsafe_0xb035
  {
    Dt_UINT8_1_0 Low_Illumination_Scene;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 CAM_LOW_FPS;
    Dt_UINT8_1_0 Image_freeze;
    Dt_UINT8_1_0 WET_CAMLENS;
    Dt_UINT8_1_0 ABCOLOR_CAM;
    Dt_UINT8_1_0 CAM_BLOCKED;
    Dt_UINT8_1_0 DIRTY_CAMLENS;
    Dt_UINT8_1_0 Direct_sunlight;
    Dt_UINT8_1_0 BLUR_IMG;
    Dt_UINT8_1_0 GROUND_REFLECT;
    UINT_GAP_8 PaddingGap8_1;
  } Dt_RECORD_MeasuredValue_RightCamFailsafe_0xb035; 
#define Rte_TypeDef_Dt_RECORD_MeasuredValue_RearCamFailsafe_0xb0cf 
typedef struct _Dt_RECORD_MeasuredValue_RearCamFailsafe_0xb0cf
  {
    Dt_UINT8_1_0 Low_Illumination_Scene;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 CAM_LOW_FPS;
    Dt_UINT8_1_0 Image_freeze;
    Dt_UINT8_1_0 WET_CAMLENS;
    Dt_UINT8_1_0 ABCOLOR_CAM;
    Dt_UINT8_1_0 CAM_BLOCKED;
    Dt_UINT8_1_0 DIRTY_CAMLENS;
    Dt_UINT8_1_0 Direct_sunlight;
    Dt_UINT8_1_0 BLUR_IMG;
    Dt_UINT8_1_0 GROUND_REFLECT;
    UINT_GAP_8 PaddingGap8_1;
  } Dt_RECORD_MeasuredValue_RearCamFailsafe_0xb0cf; 
#define Rte_TypeDef_Dt_RECORD_MeasuredValue_InputRteMsgErr_0xb0d0 
typedef struct _Dt_RECORD_MeasuredValue_InputRteMsgErr_0xb0d0
  {
    Dt_UINT8_1_0 CH_CAN_Speed_ERR;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 CH_CAN_Yawrate_ERR;
    UINT_GAP_8 PaddingGap8_1;
  } Dt_RECORD_MeasuredValue_InputRteMsgErr_0xb0d0; 
#define Rte_TypeDef_Dt_RECORD_MeasuredValue_FunctionERR_0xb0d1 
typedef struct _Dt_RECORD_MeasuredValue_FunctionERR_0xb0d1
  {
    Dt_UINT8_1_0 Freespace_fusion_error;
    Dt_UINT8_1_0 Freespace_other_error;
    Dt_UINT8_1_0 PLD_detection_error;
    Dt_UINT8_1_0 AVM_fusion_error;
    Dt_UINT8_1_0 AVM_other_error;
    Dt_UINT8_1_0 Freespace_detection_error;
    Dt_UINT8_1_0 AVM_model_run_error;
    Dt_UINT8_1_0 PLD_fusion_error;
    Dt_UINT8_1_0 PLD_stitching_error;
    Dt_UINT8_1_0 AVM_calibration_file_error;
    Dt_UINT8_1_0 Freespace_model_run_error;
    Dt_UINT8_1_0 Freespace_stitching_error;
    Dt_UINT8_1_0 AVM_car_color_profile_error;
    Dt_UINT8_1_0 OD_fusion_error;
    Dt_UINT8_1_0 AVM_car_model_error;
    Dt_UINT8_1_0 AVM_stitching_error;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 OD_other_error;
    Dt_UINT8_1_0 OD_detection_error;
    Dt_UINT8_1_0 AVM_bowl_model_error;
    Dt_UINT8_1_0 PLD_model_run_error;
    Dt_UINT8_1_0 AVM_mapping_file_error;
    Dt_UINT8_1_0 OD_model_run_error;
    Dt_UINT8_1_0 AVM_perspective_file_error;
    Dt_UINT8_1_0 OD_stitching_error;
    Dt_UINT8_1_0 PLD_other_error;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_MeasuredValue_FunctionERR_0xb0d1; 
#define Rte_TypeDef_Dt_RECORD_MeasuredValue_SurroundView_System_ERR_0xb0d2 
typedef struct _Dt_RECORD_MeasuredValue_SurroundView_System_ERR_0xb0d2
  {
    Dt_UINT8_1_0 AVM_memory_leak;
    Dt_UINT8_1_0 AVM_process_error;
    Dt_UINT8_1_0 AVM_visit_uncreated_data;
    Dt_UINT8_1_0 OD_dispatch_monitor_faild;
    Dt_UINT8_1_0 AVM_heartbeat_monitor_faild;
    Dt_UINT8_1_0 camera_service_visit_uncreated_data;
    Dt_UINT8_1_0 AVM_visit_released_data;
    Dt_UINT8_1_0 Freeapce_process_error;
    Dt_UINT8_1_0 PLD_memory_leak;
    Dt_UINT8_1_0 OD_memory_leak;
    Dt_UINT8_1_0 PLD_data_visit_timeout;
    Dt_UINT8_1_0 OD_abnormal_break;
    Dt_UINT8_1_0 Abnormal_recovery_faild;
    Dt_UINT8_1_0 Shared_data_read_and_write_monitor_wrong;
    Dt_UINT8_1_0 FS_data_read_write_conflict;
    Dt_UINT8_1_0 PLD_process_error;
    Dt_UINT8_1_0 FS_visit_released_data;
    Dt_UINT8_1_0 OD_data_read_write_conflict;
    Dt_UINT8_1_0 FS_data_write_fail;
    Dt_UINT8_1_0 camera_service_process_timeout;
    Dt_UINT8_1_0 OD_process_error;
    Dt_UINT8_1_0 FS_process_timeout;
    Dt_UINT8_1_0 OD_data_write_fail;
    Dt_UINT8_1_0 camera_service_data_visit_timeout;
    Dt_UINT8_1_0 OD_visit_released_data;
    Dt_UINT8_1_0 camera_service_data_read_fail;
    Dt_UINT8_1_0 CamSer_heartbeat_monitor_faild;
    Dt_UINT8_1_0 PLD_visit_uncreated_data;
    Dt_UINT8_1_0 AVM_memory_application_fail;
    Dt_UINT8_1_0 FS_abnormal_break;
    Dt_UINT8_1_0 AVM_process_timeout;
    Dt_UINT8_1_0 OD_data_visit_timeout;
    Dt_UINT8_1_0 Freespace_dispatch_monitor_faild;
    Dt_UINT8_1_0 PLD_data_write_fail;
    Dt_UINT8_1_0 AVM_abnormal_break;
    Dt_UINT8_1_0 OD_heartbeat_monitor_faild;
    Dt_UINT8_1_0 Shared_data_lifecycle_monitor_wrong;
    Dt_UINT8_1_0 FS_memory_leak;
    Dt_UINT8_1_0 AVM_data_read_write_conflict;
    Dt_UINT8_1_0 FS_data_read_fail;
    Dt_UINT8_1_0 CamSer_process_error;
    Dt_UINT8_1_0 Freespace_heartbeat_monitor_faild;
    Dt_UINT8_1_0 PLD_data_read_write_conflict;
    Dt_UINT8_1_0 OD_memory_application_fail;
    Dt_UINT8_1_0 AVM_dispatch_monitor_faild;
    Dt_UINT8_1_0 AVM_data_write_fail;
    Dt_UINT8_1_0 camera_service_visit_released_data;
    Dt_UINT8_1_0 PLD_data_read_fail;
    Dt_UINT8_1_0 PLD_abnormal_break;
    Dt_UINT8_1_0 OD_data_read_fail;
    Dt_UINT8_1_0 camera_service_abnormal_break;
    Dt_UINT8_1_0 PLD_visit_released_data;
    Dt_UINT8_1_0 FS_memory_application_fail;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 PLD_memory_application_fail;
    Dt_UINT8_1_0 PLD_process_timeout;
    Dt_UINT8_1_0 CamSer_dispatch_monitor_faild;
    Dt_UINT8_1_0 OD_process_timeout;
    Dt_UINT8_1_0 camera_service_memory_application_fail;
    Dt_UINT8_1_0 OD_visit_uncreated_data;
    Dt_UINT8_1_0 FS_data_visit_timeout;
    Dt_UINT8_1_0 camera_service_data_read_write_conflict;
    Dt_UINT8_1_0 PLD_dispatch_monitor_faild;
    Dt_UINT8_1_0 camera_service_data_write_fail;
    Dt_UINT8_1_0 PLD_heartbeat_monitor_faild;
    Dt_UINT8_1_0 AVM_data_visit_timeout;
    Dt_UINT8_1_0 FS_visit_uncreated_data;
    Dt_UINT8_1_0 AVM_data_read_fail;
    Dt_UINT8_1_0 camera_service_memory_leak;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_MeasuredValue_SurroundView_System_ERR_0xb0d2; 
#define Rte_TypeDef_Dt_RECORD_MeasuredValue_ImageProcess_FreeRunning 
typedef struct _Dt_RECORD_MeasuredValue_ImageProcess_FreeRunning
  {
    Dt_RECORD_MeasuredValue_SvCamCalFail_0xb030 SvCamCalFail_0xb030;
    Dt_RECORD_MeasuredValue_SvCamDatafail_0xb036 SvCamDatafail_0xb036;
    Dt_RECORD_MeasuredValue_SvCamTemperature_0xb031 SvCamTemperature_0xb031;
    Dt_RECORD_MeasuredValue_RearviewMirrorStatu_0xb032 RearviewMirrorStatu_0xb032;
    Dt_RECORD_MeasuredValue_FrontCamFailsafe_0xb033 FrontCamFailsafe_0xb033;
    Dt_RECORD_MeasuredValue_LeftCamFailsafe_0xb034 LeftCamFailsafe_0xb034;
    Dt_RECORD_MeasuredValue_RightCamFailsafe_0xb035 RightCamFailsafe_0xb035;
    Dt_RECORD_MeasuredValue_RearCamFailsafe_0xb0cf RearCamFailsafe_0xb0cf;
    Dt_RECORD_MeasuredValue_InputRteMsgErr_0xb0d0 InputRteMsgErr_0xb0d0;
    Dt_RECORD_MeasuredValue_FunctionERR_0xb0d1 FunctionERR_0xb0d1;
    Dt_RECORD_MeasuredValue_SurroundView_System_ERR_0xb0d2 SurroundView_System_ERR_0xb0d2;
  } Dt_RECORD_MeasuredValue_ImageProcess_FreeRunning; 
#define Rte_TypeDef_Dt_RECORD_MobileyeGenericSensor 
typedef struct _Dt_RECORD_MobileyeGenericSensor
  {
    float32 Steering_Wheel_Anglesecinfo;
    boolean Left_Blinksecinfo;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    float32 Yaw_Ratesecinfo;
    float32 Vehicle_Speedsecinfo;
    uint8 Wiperssecinfo;
    boolean Right_Blinksecinfo;
    boolean Reverse_Gearsecinfo;
    boolean High_Beamsecinfo;
    boolean Brakessecinfo;
    UINT_GAP_8 PaddingGap8_3;
    UINT_GAP_16 PaddingGap16_4;
    Dt_RECORD_HEADER stHeader;
  } Dt_RECORD_MobileyeGenericSensor; 
#define Rte_TypeDef_Dt_RECORD_PDC_HSC2_FrP00 
typedef struct _Dt_RECORD_PDC_HSC2_FrP00
  {
    uint8 PDCSysStsHSC2;
    uint8 RrPDCAudWrnngHSC2;
    uint8 FrtPDCAudWrnngHSC2;
    uint8 RrMidRObsRngHSC2;
    uint8 RrMidLObsRngHSC2;
    uint8 FrtMidRObsRngHSC2;
    uint8 FrtMidLObsRngHSC2;
    uint8 RRObsRngHSC2;
    uint8 RLObsRngHSC2;
    uint8 FRObsRngHSC2;
    uint8 FLObsRngHSC2;
    uint8 PDCCofignStsHSC2;
    uint8 FrtObsDist_h2HSC2;
    uint8 RrObsDist_h2HSC2;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_PDC_HSC2_FrP00; 
#define Rte_TypeDef_Dt_RECORD_PDC_HSC2_FrP01 
typedef struct _Dt_RECORD_PDC_HSC2_FrP01
  {
    uint16 RRSideObsDistHSC2;
    uint16 RLSideObsDistHSC2;
    uint16 FRSideObsDistHSC2;
    uint16 FLSideObsDistHSC2;
  } Dt_RECORD_PDC_HSC2_FrP01; 
#define Rte_TypeDef_Dt_RECORD_PlannerEnvirInfo 
typedef struct _Dt_RECORD_PlannerEnvirInfo
  {
    Dt_RECORD_HEADER stHeader;
    uint16 nDriveEnviorment;
    uint16 nCurrentBehavior;
    uint8 APACtlCmd;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    float32 fSpeed;
    boolean bScanningEnable;
    UINT_GAP_8 PaddingGap8_3;
    UINT_GAP_16 PaddingGap16_4;
    float32 fReserved;
    uint16 nReserved;
    UINT_GAP_16 PaddingGap16_5;
  } Dt_RECORD_PlannerEnvirInfo; 
#define Rte_TypeDef_Dt_RECORD_Position_init_status 
typedef struct _Dt_RECORD_Position_init_status
  {
    Dt_RECORD_HEADER stHeader;
    uint8 isPositionInitial;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_Position_init_status; 
#define Rte_TypeDef_Dt_ARRAY_3_uint8 
typedef uint8 Dt_ARRAY_3_uint8[3]; 
#define Rte_TypeDef_Dt_ARRAY_3_uint16 
typedef uint16 Dt_ARRAY_3_uint16[3]; 
#define Rte_TypeDef_Dt_ARRAY_3_float32 
typedef float32 Dt_ARRAY_3_float32[3]; 
#define Rte_TypeDef_Dt_RECORD_ReservedA2B 
typedef struct _Dt_RECORD_ReservedA2B
  {
    Dt_ARRAY_3_uint8 nReserved1;
    UINT_GAP_8 PaddingGap8_1;
    Dt_ARRAY_3_uint16 nReserved2;
    UINT_GAP_16 PaddingGap16_2;
    Dt_ARRAY_3_float32 fReserved;
  } Dt_RECORD_ReservedA2B; 
#define Rte_TypeDef_Dt_ENUM_DiagRoutineControl 
typedef uint8 Dt_ENUM_DiagRoutineControl; 
# define Dt_ENUM_DiagRoutineControl_LowerLimit (0U)
# define Dt_ENUM_DiagRoutineControl_UpperLimit (255U)
# ifndef ROUTINECONTROL_RESERVED 
#  define ROUTINECONTROL_RESERVED (0U)
# endif 
# ifndef ROUTINECONTROL_STARTROUTINE 
#  define ROUTINECONTROL_STARTROUTINE (1U)
# endif 
# ifndef ROUTINECONTROL_STOPROUTINE 
#  define ROUTINECONTROL_STOPROUTINE (2U)
# endif 
# ifndef ROUTINECONTROL_REQUESTROUTINERESULTS 
#  define ROUTINECONTROL_REQUESTROUTINERESULTS (3U)
# endif 
#define Rte_TypeDef_Dt_RECORD_Routine_Adjust_command_0x5A09_Call 
typedef struct _Dt_RECORD_Routine_Adjust_command_0x5A09_Call
  {
    Dt_UINT8_1_0 Direction;
    Dt_UINT8_1_0 Step_LSB;
    Dt_UINT8_1_0 Step_MSB;
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
  } Dt_RECORD_Routine_Adjust_command_0x5A09_Call; 
#define Rte_TypeDef_Dt_RECORD_Routine_Adjust_command_0x5A09_RetVal 
typedef struct _Dt_RECORD_Routine_Adjust_command_0x5A09_RetVal
  {
    Dt_UINT8_1_0 RetVal;
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_Routine_Adjust_command_0x5A09_RetVal; 
#define Rte_TypeDef_Dt_RECORD_Routine_Check_pre_condition_0x5A01_Call 
typedef struct _Dt_RECORD_Routine_Check_pre_condition_0x5A01_Call
  {
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_Routine_Check_pre_condition_0x5A01_Call; 
#define Rte_TypeDef_Dt_RECORD_Routine_Check_pre_condition_0x5A01_RetVal 
typedef struct _Dt_RECORD_Routine_Check_pre_condition_0x5A01_RetVal
  {
    Dt_UINT8_1_0 Front_Cam_Wrong_Assembly;
    Dt_UINT8_1_0 Con_Op_Failed;
    Dt_UINT8_1_0 Fl_Door_Open;
    Dt_UINT8_1_0 Rear_Cam_Video_Failed;
    Dt_UINT8_1_0 Left_Cam_Video_Failed;
    Dt_UINT8_1_0 Rr_Door_Open;
    Dt_UINT8_1_0 Low_Beam_On;
    Dt_UINT8_1_0 Rght_Cam_Wrong_Assembly;
    Dt_UINT8_1_0 Trunk_Door_Open;
    Dt_UINT8_1_0 Hood_Open;
    Dt_UINT8_1_0 Rght_Cam_Video_Failed;
    Dt_UINT8_1_0 Rear_Cam_Wrong_Assembly;
    Dt_UINT8_1_0 Fr_Door_Open;
    Dt_UINT8_1_0 Vehicle_Side_Light_Open;
    Dt_UINT8_1_0 Rl_Door_Open;
    Dt_UINT8_1_0 Routine_status;
    Dt_UINT8_1_0 Bat_Volt_Out_Of_Range;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 Direction_Indication_Lamp_Open;
    Dt_UINT8_1_0 High_Beam_On;
    Dt_UINT8_1_0 Left_Cam_Wrong_Assembly;
    Dt_UINT8_1_0 Front_Cam_Failed;
    Dt_UINT8_1_0 RetVal;
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
  } Dt_RECORD_Routine_Check_pre_condition_0x5A01_RetVal; 
#define Rte_TypeDef_Dt_RECORD_Routine_Close_EOL_view_0x5A05_Call 
typedef struct _Dt_RECORD_Routine_Close_EOL_view_0x5A05_Call
  {
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_Routine_Close_EOL_view_0x5A05_Call; 
#define Rte_TypeDef_Dt_RECORD_Routine_Close_EOL_view_0x5A05_RetVal 
typedef struct _Dt_RECORD_Routine_Close_EOL_view_0x5A05_RetVal
  {
    Dt_UINT8_1_0 RetVal;
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_Routine_Close_EOL_view_0x5A05_RetVal; 
#define Rte_TypeDef_Dt_RECORD_Routine_Enter_EOL_view_0x5A0C_Call 
typedef struct _Dt_RECORD_Routine_Enter_EOL_view_0x5A0C_Call
  {
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_Routine_Enter_EOL_view_0x5A0C_Call; 
#define Rte_TypeDef_Dt_RECORD_Routine_Enter_EOL_view_0x5A0C_RetVal 
typedef struct _Dt_RECORD_Routine_Enter_EOL_view_0x5A0C_RetVal
  {
    Dt_UINT8_1_0 Routine_status;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 HMI_view;
    Dt_UINT8_1_0 RetVal;
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_Routine_Enter_EOL_view_0x5A0C_RetVal; 
#define Rte_TypeDef_Dt_RECORD_Routine_Enter_service_calibration_view_0x5A06_Call 
typedef struct _Dt_RECORD_Routine_Enter_service_calibration_view_0x5A06_Call
  {
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_Routine_Enter_service_calibration_view_0x5A06_Call; 
#define Rte_TypeDef_Dt_RECORD_Routine_Enter_service_calibration_view_0x5A06_RetVal 
typedef struct _Dt_RECORD_Routine_Enter_service_calibration_view_0x5A06_RetVal
  {
    Dt_UINT8_1_0 Routine_status;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 HMI_view;
    Dt_UINT8_1_0 RetVal;
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_Routine_Enter_service_calibration_view_0x5A06_RetVal; 
#define Rte_TypeDef_Dt_RECORD_Routine_Point_check_and_switch_to_next_view_0x5A07_Call 
typedef struct _Dt_RECORD_Routine_Point_check_and_switch_to_next_view_0x5A07_Call
  {
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_Routine_Point_check_and_switch_to_next_view_0x5A07_Call; 
#define Rte_TypeDef_Dt_RECORD_Routine_Point_check_and_switch_to_next_view_0x5A07_RetVal 
typedef struct _Dt_RECORD_Routine_Point_check_and_switch_to_next_view_0x5A07_RetVal
  {
    Dt_UINT8_1_0 RetVal;
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_Routine_Point_check_and_switch_to_next_view_0x5A07_RetVal; 
#define Rte_TypeDef_Dt_RECORD_Routine_Request_calibration_error_code_0x5A0B_Call 
typedef struct _Dt_RECORD_Routine_Request_calibration_error_code_0x5A0B_Call
  {
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_Routine_Request_calibration_error_code_0x5A0B_Call; 
#define Rte_TypeDef_Dt_RECORD_Routine_Request_calibration_error_code_0x5A0B_RetVal 
typedef struct _Dt_RECORD_Routine_Request_calibration_error_code_0x5A0B_RetVal
  {
    Dt_UINT8_1_0 Routine_status;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 RetVal;
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
  } Dt_RECORD_Routine_Request_calibration_error_code_0x5A0B_RetVal; 
#define Rte_TypeDef_Dt_RECORD_Routine_Send_point_status_0x5A08_Call 
typedef struct _Dt_RECORD_Routine_Send_point_status_0x5A08_Call
  {
    Dt_UINT8_1_0 Point_status;
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_Routine_Send_point_status_0x5A08_Call; 
#define Rte_TypeDef_Dt_RECORD_Routine_Send_point_status_0x5A08_RetVal 
typedef struct _Dt_RECORD_Routine_Send_point_status_0x5A08_RetVal
  {
    Dt_UINT8_1_0 RetVal;
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_Routine_Send_point_status_0x5A08_RetVal; 
#define Rte_TypeDef_Dt_RECORD_Routine_Start_calibration_0x5A02_Call 
typedef struct _Dt_RECORD_Routine_Start_calibration_0x5A02_Call
  {
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_Routine_Start_calibration_0x5A02_Call; 
#define Rte_TypeDef_Dt_RECORD_Routine_Start_calibration_0x5A02_RetVal 
typedef struct _Dt_RECORD_Routine_Start_calibration_0x5A02_RetVal
  {
    Dt_UINT8_1_0 Calibration_result;
    Dt_UINT8_1_0 Routine_status;
    Dt_UINT8_1_0 Reserved;
    Dt_UINT8_1_0 RetVal;
    Dt_ENUM_DiagRoutineControl Routine_Control_Type;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_Routine_Start_calibration_0x5A02_RetVal; 
#define Rte_TypeDef_Dt_ARRAY_8_uint8 
typedef uint8 Dt_ARRAY_8_uint8[8]; 
#define Rte_TypeDef_Dt_RECORD_SVCameraFail 
typedef struct _Dt_RECORD_SVCameraFail
  {
    Dt_RECORD_HEADER stHeader;
    uint8 Front_SV_Camera_Status;
    uint8 Rear_SV_Camera_Status;
    uint8 Left_SV_Camera_Status;
    uint8 Right_SV_Camera_Status;
    Dt_ARRAY_8_uint8 nReserved;
  } Dt_RECORD_SVCameraFail; 
#define Rte_TypeDef_Dt_ARRAY_21_uint8 
typedef uint8 Dt_ARRAY_21_uint8[21]; 
#define Rte_TypeDef_Dt_RECORD_SVCtrl 
typedef struct _Dt_RECORD_SVCtrl
  {
    Dt_RECORD_HEADER stHeader;
    uint8 isParkingSearchFuncEnable;
    uint8 isParkinglotTrackingFuncEnable;
    uint8 isOfilmParkinglotTrackingID;
    uint8 isParkinglotTrackingID;
    uint8 isParkingFuncEnable;
    Dt_ARRAY_21_uint8 fReserved;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_SVCtrl; 
#define Rte_TypeDef_Dt_ARRAY_6_uint8 
typedef uint8 Dt_ARRAY_6_uint8[6]; 
#define Rte_TypeDef_Dt_RECORD_SVData_Upload_status 
typedef struct _Dt_RECORD_SVData_Upload_status
  {
    uint8 SVData_Upload_status;
    Dt_ARRAY_6_uint8 nReserved;
    UINT_GAP_8 PaddingGap8_1;
  } Dt_RECORD_SVData_Upload_status; 
#define Rte_TypeDef_Dt_RECORD_SVFreeSpace 
typedef struct _Dt_RECORD_SVFreeSpace
  {
    Dt_RECORD_HEADER stHeader;
    uint8 Is_Valid;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    float32 Existence_Prob;
    float32 Classification_Conf;
    uint8 Classification_Type;
    UINT_GAP_8 PaddingGap8_3;
    UINT_GAP_16 PaddingGap16_4;
    float32 fPointX;
    float32 fPointY;
    float32 fPointZ;
  } Dt_RECORD_SVFreeSpace; 
#define Rte_TypeDef_Dt_ARRAY_120_SVFreespace 
typedef Dt_RECORD_SVFreeSpace Dt_ARRAY_120_SVFreespace[120]; 
#define Rte_TypeDef_Dt_RECORD_SVFreeSpaces 
typedef struct _Dt_RECORD_SVFreeSpaces
  {
    Dt_RECORD_HEADER stHeader;
    Dt_ARRAY_UINT64_1_0 nImageTimeStamp;
    Dt_ARRAY_120_SVFreespace gstSVFreespaces;
    Dt_ARRAY_8_uint8 reseved;
    Dt_ARRAY_UINT64_1_0 t2;
  } Dt_RECORD_SVFreeSpaces; 
#define Rte_TypeDef_Dt_RECORD_Line 
typedef struct _Dt_RECORD_Line
  {
    uint8 nLineType;
        /* 0: undecided; 1: solid; 2: road edge; 3: dashed; 4:       */
        /* double line; 5: bott's dots; 6: barrier; 0x0F: invalid;   */
    uint8 nQuality;
        /* 0: low, 1: low, 2: medium; 3: high                        */
    UINT_GAP_16 PaddingGap16_1;
    float32 fWidth;
        /* in meter                                                  */
    float32 a;
        /* lane position                                             */
    float32 b;
        /* lane slope, heading angle                                 */
    float32 c;
        /* lane curvature                                            */
    float32 d;
        /* lane curvature derivative                                 */
    float32 x0;
        /* view range start                                          */
    float32 x1;
        /* view range end                                            */
    Dt_ARRAY_16_uint8 reserved;
  } Dt_RECORD_Line; 
#define Rte_TypeDef_Dt_RECORD_SVLanes 
typedef struct _Dt_RECORD_SVLanes
  {
    Dt_RECORD_HEADER stHeader;
    Dt_ARRAY_UINT64_1_0 nImageTimeStamp;
    Dt_ARRAY_UINT64_1_0 t2;
    float32 fLeftLaneProbability;
    float32 fRightLaneProbability;
    float32 fStopLineProbability;
    Dt_RECORD_Line stRightLine;
    Dt_RECORD_Line stLeftLine;
    Dt_RECORD_Line stStopLine;
    Dt_ARRAY_16_uint8 reseved;
  } Dt_RECORD_SVLanes; 
#define Rte_TypeDef_Dt_ARRAY_2_float32 
typedef float32 Dt_ARRAY_2_float32[2]; 
#define Rte_TypeDef_Dt_ARRAY_4_ARRAY_2_float32 
typedef Dt_ARRAY_2_float32 Dt_ARRAY_4_ARRAY_2_float32[4]; 
#define Rte_TypeDef_Dt_ARRAY_12_uint8 
typedef uint8 Dt_ARRAY_12_uint8[12]; 
#define Rte_TypeDef_Dt_RECORD_Space 
typedef struct _Dt_RECORD_Space
  {
    uint8 nValid;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    Dt_ARRAY_4_ARRAY_2_float32 gfPos;
    uint8 nQuality;
    uint8 nType;
    uint8 nParkingGarageID;
    UINT_GAP_8 PaddingGap8_3;
    float32 fLineWith;
    float32 fSita;
    Dt_ARRAY_UINT64_1_0 fIdentifierNum;
    Dt_ARRAY_12_uint8 fReserved;
  } Dt_RECORD_Space; 
#define Rte_TypeDef_Dt_ARRAY_8_Space 
typedef Dt_RECORD_Space Dt_ARRAY_8_Space[8]; 
#define Rte_TypeDef_Dt_RECORD_SVLocation 
typedef struct _Dt_RECORD_SVLocation
  {
    Dt_RECORD_HEADER stHeader;
    Dt_ARRAY_UINT64_1_0 nImageTimeStamp;
    UINT_GAP_16 PaddingGap16_1;
    UINT_GAP_16 PaddingGap16_2;
    float64 fLatitude;
    float64 fLongitude;
    float32 fHeading;
    uint32 nLatitudeQuality;
    uint32 nLongitudeQuality;
    uint32 nHeadingQuality;
    float32 fLatitudeVariance;
    float32 fLongitudeVariance;
    float32 fHeadingVariance;
    Dt_ARRAY_16_uint8 reseved;
    Dt_ARRAY_8_Space gstSpace5;
    Dt_ARRAY_UINT64_1_0 t2;
    UINT_GAP_16 PaddingGap16_3;
    UINT_GAP_16 PaddingGap16_4;
  } Dt_RECORD_SVLocation; 
#define Rte_TypeDef_Dt_ARRAY_10_uint32 
typedef uint32 Dt_ARRAY_10_uint32[10]; 
#define Rte_TypeDef_Dt_RECORD_SVObstacle 
typedef struct _Dt_RECORD_SVObstacle
  {
    uint16 nObjectID;
        /* 0:Main;1:Slave;2:Fisheye                                  */
    uint8 nType;
    uint8 nAge;
    uint8 nQuality;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    float32 fHeight;
    float32 fPiont1X;
    float32 fPiont1Y;
        /* EyeQ Timestamp                                            */
    float32 fPiont2X;
        /* 0: stop, 1: go, 2: undecided; 3: driver decision is       */
        /* required; 4-14: currently unused; 15: not calculated;     */
    float32 fPiont2Y;
        /* 0: no close car detected, 1: close car detected;          */
    float32 fRelVelocityX;
        /* indicate whether we detect a close cut in from right;     */
    float32 fRelVelocityY;
        /* indicate whether we detect a close cut in from left;      */
    float32 fAblVelocityX;
    float32 fAblVelocityY;
    float32 fAbsValY;
    uint8 nPoint1OnCar;
    uint8 nPoint2OnCar;
    UINT_GAP_16 PaddingGap16_3;
    Dt_ARRAY_10_uint32 fReserved;
    uint8 n3D;
    UINT_GAP_8 PaddingGap8_4;
    UINT_GAP_16 PaddingGap16_5;
    float32 fPoint3X;
    float32 fPoint3Y;
    float32 fPoint4X;
    float32 fPoint4Y;
  } Dt_RECORD_SVObstacle; 
#define Rte_TypeDef_Dt_ARRAY_20_SVObstacle 
typedef Dt_RECORD_SVObstacle Dt_ARRAY_20_SVObstacle[20]; 
#define Rte_TypeDef_Dt_RECORD_SVObstacles 
typedef struct _Dt_RECORD_SVObstacles
  {
    Dt_RECORD_HEADER stHeader;
    Dt_ARRAY_UINT64_1_0 nImageTimeStamp;
    uint8 nObjectNum;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    Dt_ARRAY_20_SVObstacle gstObjects;
    Dt_ARRAY_16_uint8 reseved;
    Dt_ARRAY_UINT64_1_0 t2;
  } Dt_RECORD_SVObstacles; 
#define Rte_TypeDef_Dt_RECORD_SVParkingSlot 
typedef struct _Dt_RECORD_SVParkingSlot
  {
    Dt_RECORD_HEADER stHeader;
    Dt_ARRAY_UINT64_1_0 nImageTimeStamp;
    Dt_ARRAY_8_Space gstSpaceFront;
    Dt_ARRAY_8_Space gstSpaceRight;
    Dt_ARRAY_8_Space gstSpaceLeft;
    Dt_ARRAY_8_Space gstSpaceRear;
    Dt_ARRAY_21_uint8 fReserved;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    Dt_ARRAY_UINT64_1_0 t2;
  } Dt_RECORD_SVParkingSlot; 
#define Rte_TypeDef_Dt_ARRAY_20_uint8 
typedef uint8 Dt_ARRAY_20_uint8[20]; 
#define Rte_TypeDef_Dt_RECORD_SVStatus 
typedef struct _Dt_RECORD_SVStatus
  {
    Dt_RECORD_HEADER stHeader;
    Dt_ARRAY_UINT64_1_0 t2;
    uint8 AVM_Availability;
    uint8 PLD_Availability;
    uint8 FreeSpace_Availability;
    uint8 OD_Availability;
    uint8 RMD_Availability;
    boolean Lane_Availability;
    Dt_ARRAY_20_uint8 fReserved;
    UINT_GAP_16 PaddingGap16_1;
  } Dt_RECORD_SVStatus; 
#define Rte_TypeDef_Dt_RECORD_SWVersion_ZStage 
typedef struct _Dt_RECORD_SWVersion_ZStage
  {
    uint8 DeVersion0;
    uint8 DeVersion1;
    uint8 DeVersion2;
    uint8 DeVersion3;
  } Dt_RECORD_SWVersion_ZStage; 
#define Rte_TypeDef_Dt_RECORD_BuildDate 
typedef struct _Dt_RECORD_BuildDate
  {
    uint16 DeYear;
    uint8 DeMonth;
    uint8 DeDay;
    uint8 DeHour;
    uint8 DeMinute;
    uint8 DeSecond;
    UINT_GAP_8 PaddingGap8_1;
  } Dt_RECORD_BuildDate; 
#define Rte_TypeDef_Dt_RECORD_SWC_Identification 
typedef struct _Dt_RECORD_SWC_Identification
  {
    Dt_RECORD_SWVersion_ZStage DeZStage;
        /* Version of the SW-C                                       */
    Dt_IFSET_VERSION DeSwcIFSET;
        /* IF-SET against the SW-C has been compiled.                */
    Dt_RECORD_SW_Version DePlatformVersion;
    Dt_RECORD_BuildDate DeBuildDatePlatform;
        /* 64-bit build number. UTC UNIX Timestamp of the build      */
    Dt_RECORD_SW_Version DeSWCVersion;
    Dt_RECORD_BuildDate DeBuildDateSWC;
  } Dt_RECORD_SWC_Identification; 
#define Rte_TypeDef_Dt_ARRAY_32_uint8 
typedef uint8 Dt_ARRAY_32_uint8[32]; 
#define Rte_TypeDef_Dt_RECORD_StateMonitor_BKP 
typedef struct _Dt_RECORD_StateMonitor_BKP
  {
    Dt_ARRAY_32_uint8 StateMonitor_BKP;
  } Dt_RECORD_StateMonitor_BKP; 
#define Rte_TypeDef_Dt_RECORD_StbmTimestamp 
typedef struct _Dt_RECORD_StbmTimestamp
  {
    uint8 status;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    uint32 nanoseconds;
    uint32 seconds;
    uint16 secondsHigh;
    UINT_GAP_16 PaddingGap16_3;
  } Dt_RECORD_StbmTimestamp; 
#define Rte_TypeDef_Dt_RECORD_TPMS_HSC3_FrP01 
typedef struct _Dt_RECORD_TPMS_HSC3_FrP01
  {
    boolean RRTireTemVHSC4;
    UINT_GAP_8 PaddingGap8_1;
    sint16 RRTireTemHSC4;
    boolean RRTirePrsVHSC4;
    UINT_GAP_8 PaddingGap8_2;
    uint16 RRTirePrsHSC4;
    boolean RLTireTemVHSC4;
    UINT_GAP_8 PaddingGap8_3;
    sint16 RLTireTemHSC4;
    boolean RLTirePrsVHSC4;
    UINT_GAP_8 PaddingGap8_4;
    uint16 RLTirePrsHSC4;
    boolean FRTireTemVHSC4;
    UINT_GAP_8 PaddingGap8_5;
    sint16 FRTireTemHSC4;
    boolean FRTirePrsVHSC4;
    UINT_GAP_8 PaddingGap8_6;
    uint16 FRTirePrsHSC4;
    boolean FLTireTemVHSC4;
    UINT_GAP_8 PaddingGap8_7;
    sint16 FLTireTemHSC4;
    boolean FLTirePrsVHSC4;
    UINT_GAP_8 PaddingGap8_8;
    uint16 FLTirePrsHSC4;
  } Dt_RECORD_TPMS_HSC3_FrP01; 
#define Rte_TypeDef_Dt_PduRxStatus 
typedef uint8 Dt_PduRxStatus; 
# define Dt_PduRxStatus_LowerLimit (0U)
# define Dt_PduRxStatus_UpperLimit (255U)
#define Rte_TypeDef_Dt_RECORD_Timestamp 
typedef struct _Dt_RECORD_Timestamp
  {
    uint32 DeTimestampHigh;
        /* [Call Cycle][/Call Cycle]                                 */
        /* [Signal Availability][/Signal Availability]               */
        /* [Min][/Min]                                               */
        /* [Max][/Max]                                               */
        /* [Logical][/Logical]                                       */
        /* [ASIL LEVEL][/ASIL LEVEL]                                 */
        /* [Init][/Init]                                             */
        /* [Description (short)][/Description (short)]               */
        /* [Unit][/Unit]                                             */
        /* [Accuracy][/Accuracy]                                     */
    uint32 DeTimestampLow;
        /* [Call Cycle][/Call Cycle]                                 */
        /* [Signal Availability][/Signal Availability]               */
        /* [Min][/Min]                                               */
        /* [Max][/Max]                                               */
        /* [Logical][/Logical]                                       */
        /* [ASIL LEVEL][/ASIL LEVEL]                                 */
        /* [Init][/Init]                                             */
        /* [Description (short)][/Description (short)]               */
        /* [Unit][/Unit]                                             */
        /* [Accuracy][/Accuracy]                                     */
  } Dt_RECORD_Timestamp; 
#define Rte_TypeDef_Dt_RECORD_TimestampMid 
typedef struct _Dt_RECORD_TimestampMid
  {
    Dt_RECORD_Timestamp DeTimestampEGT;
        /* [Call Cycle][/Call Cycle]                                 */
        /* [Init][/Init]                                             */
        /* [Unit][/Unit]                                             */
        /* [Logical][/Logical]                                       */
        /* [Signal Availability][/Signal Availability]               */
        /* [Min][/Min]                                               */
        /* [Max][/Max]                                               */
        /* [Accuracy][/Accuracy]                                     */
        /* [Description (short)][/Description (short)]               */
        /* [ASIL LEVEL][/ASIL LEVEL]                                 */
    Dt_RECORD_Timestamp DeTimestampMW_RX;
        /* [Call Cycle][/Call Cycle]                                 */
        /* [Init][/Init]                                             */
        /* [Unit][/Unit]                                             */
        /* [Logical][/Logical]                                       */
        /* [Signal Availability][/Signal Availability]               */
        /* [Min][/Min]                                               */
        /* [Max][/Max]                                               */
        /* [Accuracy][/Accuracy]                                     */
        /* [Description (short)][/Description (short)]               */
        /* [ASIL LEVEL][/ASIL LEVEL]                                 */
    Dt_RECORD_Timestamp DeTimestampMW_TX;
        /* [Call Cycle][/Call Cycle]                                 */
        /* [Init][/Init]                                             */
        /* [Unit][/Unit]                                             */
        /* [Logical][/Logical]                                       */
        /* [Signal Availability][/Signal Availability]               */
        /* [Min][/Min]                                               */
        /* [Max][/Max]                                               */
        /* [Accuracy][/Accuracy]                                     */
        /* [Description (short)][/Description (short)]               */
        /* [ASIL LEVEL][/ASIL LEVEL]                                 */
  } Dt_RECORD_TimestampMid; 
#define Rte_TypeDef_Dt_RECORD_TPMS_HSC3_FrP02 
typedef struct _Dt_RECORD_TPMS_HSC3_FrP02
  {
    Dt_PduRxStatus DeStatus_TPMS_HSC3_FrP02;
    uint8 FLTireStsHSC4;
    uint8 FRTireStsHSC4;
    uint8 RLTireStsHSC4;
    uint8 RRTireStsHSC4;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    Dt_RECORD_TimestampMid DeTimestamp;
  } Dt_RECORD_TPMS_HSC3_FrP02; 
#define Rte_TypeDef_Dt_RECORD_TriggerCondition_FRP 
typedef struct _Dt_RECORD_TriggerCondition_FRP
  {
    Dt_RECORD_HEADER stHeader;
    uint32 nTriggerConditionCode;
    uint32 nReserved;
  } Dt_RECORD_TriggerCondition_FRP; 
#define Rte_TypeDef_Dt_ARRAY_7_float32 
typedef float32 Dt_ARRAY_7_float32[7]; 
#define Rte_TypeDef_Dt_RECORD_UltrasonicDist 
typedef struct _Dt_RECORD_UltrasonicDist
  {
    Dt_ARRAY_7_float32 ExParam;
    boolean bOutRange;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    float32 fDist;
  } Dt_RECORD_UltrasonicDist; 
#define Rte_TypeDef_Dt_ARRAY_12_UltrasonicDist 
typedef Dt_RECORD_UltrasonicDist Dt_ARRAY_12_UltrasonicDist[12]; 
#define Rte_TypeDef_Dt_RECORD_UltrasonicDists 
typedef struct _Dt_RECORD_UltrasonicDists
  {
    Dt_RECORD_HEADER stHeader;
    Dt_ARRAY_12_UltrasonicDist gstProbes;
  } Dt_RECORD_UltrasonicDists; 
#define Rte_TypeDef_Dt_RECORD_UltrasonicProcess_BKP 
typedef struct _Dt_RECORD_UltrasonicProcess_BKP
  {
    Dt_ARRAY_10_uint32 UltrasonicProcess_BKP;
  } Dt_RECORD_UltrasonicProcess_BKP; 
#define Rte_TypeDef_Dt_RECORD_VCUStatus1 
typedef struct _Dt_RECORD_VCUStatus1
  {
    uint8 DrivemModeStssecinfo;
    boolean DriveModeReqsecinfo;
    UINT_GAP_16 PaddingGap16_1;
    float32 EnSpdsecinfo;
    float32 keep1secinfo;
    float32 EPSMotOtptToqsecinfo;
    uint8 SCUShiferLvrPossecinfo;
    boolean PtBrkPdlDscrtInptStsVsecinfo;
    boolean PtBrkPdlDscrtInptStssecinfo;
    UINT_GAP_8 PaddingGap8_2;
  } Dt_RECORD_VCUStatus1; 
#define Rte_TypeDef_Dt_RECORD_VCUStatus10 
typedef struct _Dt_RECORD_VCUStatus10
  {
    boolean RNonDrvnWhlRotlDistVHSC2;
    UINT_GAP_8 PaddingGap8_1;
    uint16 RNonDrvnWhlRotlDistPCHSC2;
    boolean RDrvnWhlRotlDistVHSC2;
    UINT_GAP_8 PaddingGap8_2;
    uint16 RDrvnWhlRotlDistPlsCtrHSC2;
    boolean LDrvnWhlRotlDistVHSC2;
    UINT_GAP_8 PaddingGap8_3;
    uint16 LNonDrvnWhlRotlDistPCHSC2;
    boolean LNonDrvnWhlRotlDistVHSC2;
    UINT_GAP_8 PaddingGap8_4;
    uint16 LDrvnWhlRotlDistPlsCtrHSC2;
    Dt_RECORD_HEADER stHeader;
    float32 fPtBrkPdlInptHSC4;
  } Dt_RECORD_VCUStatus10; 
#define Rte_TypeDef_Dt_RECORD_VCUStatus2 
typedef struct _Dt_RECORD_VCUStatus2
  {
    float32 StrgWhlAngHSC4;
    uint8 StrgWhlAngAlvRCHSC4;
    UINT_GAP_8 PaddingGap8_1;
    uint16 StrgWhlAngExtdPVHSC4;
    sint16 StrgWhlAngGrdHSC4;
    uint8 StrgWhlAngSnsrCalStsHSC4;
    uint8 StrgWhlAngSnsrChksmHSC4;
    boolean StrgWhlAngSnsrFltHSC4;
    boolean StrgWhlAngSnsrInidHSC4;
    boolean StrgWhlAngSnsrMultCapbHSC4;
    boolean StrgWhlAngVHSC4;
    Dt_RECORD_HEADER stHeader;
    uint8 SCUShifterLvrPos;
    UINT_GAP_8 PaddingGap8_2;
    UINT_GAP_16 PaddingGap16_3;
  } Dt_RECORD_VCUStatus2; 
#define Rte_TypeDef_Dt_ARRAY_4_float32 
typedef float32 Dt_ARRAY_4_float32[4]; 
#define Rte_TypeDef_Dt_RECORD_VCUStatus3 
typedef struct _Dt_RECORD_VCUStatus3
  {
    float32 SysVol_HSC4;
    uint8 EPBAppcnStsHSC4;
    boolean VehSpdAvgVHSC4;
    UINT_GAP_16 PaddingGap16_1;
    float32 VehSpdAvgHSC4;
    boolean VSELongtAccVHSC4;
    UINT_GAP_8 PaddingGap8_2;
    UINT_GAP_16 PaddingGap16_3;
    float32 VSELongtAccHSC4;
    boolean VehDynYawRateVHSC4;
    UINT_GAP_8 PaddingGap8_4;
    UINT_GAP_16 PaddingGap16_5;
    float32 VehDynYawRateHSC4;
    boolean AirbagDplHSC4;
    UINT_GAP_8 PaddingGap8_6;
    UINT_GAP_16 PaddingGap16_7;
    Dt_RECORD_HEADER stHeader;
    float32 APATrgtEPSStrgWhlAng;
    boolean APATrgtEPSStrgWhlAngV;
    UINT_GAP_8 PaddingGap8_8;
    UINT_GAP_16 PaddingGap16_9;
    float32 LKAReqToq;
    float32 APASCSAcclReqVal;
    float32 ACCAccReqVal;
    float32 AEBDclReqVal_sech2SecHS2;
    float32 VSELongtAcc;
    float32 DrvrStrgDlvrdToq;
    float32 ChLKARespToq;
    Dt_ARRAY_4_float32 bkp;
    uint8 ACCSysSts;
    uint8 TJAICASysSts;
    UINT_GAP_16 PaddingGap16_10;
  } Dt_RECORD_VCUStatus3; 
#define Rte_TypeDef_Dt_RECORD_VCUStatus4 
typedef struct _Dt_RECORD_VCUStatus4
  {
    boolean VehLckngStaHSC4;
    uint8 FrtPsngDoorOpenStsHSC4;
    uint8 DrvrDoorOpenStsHSC4;
    boolean VehInertiaSwTrigdHSC4;
    boolean BrkPdlDrvrAppdPrsV_HSC4;
    uint8 BrkPdlDrvrAppdPrsAlvRC_HSC4;
    uint16 BrkPdlDrvrAppdPrs_HSC4;
    uint8 RLDoorOpenStsHS2;
    uint8 RRDoorOpenStsHS2;
    UINT_GAP_16 PaddingGap16_1;
    Dt_RECORD_HEADER stHeader;
    uint8 BntOpenSts;
    uint8 LdSpcOpenSts;
    UINT_GAP_16 PaddingGap16_2;
    float32 LongdAccSnsrVal;
    Dt_ARRAY_4_float32 bkp;
  } Dt_RECORD_VCUStatus4; 
#define Rte_TypeDef_Dt_RECORD_VCUStatus5 
typedef struct _Dt_RECORD_VCUStatus5
  {
    float32 RdFrictionCoefficientHSC4;
    sint16 StrgWhlAngGrdLmtHSC4;
    UINT_GAP_16 PaddingGap16_1;
    float32 StrgWhlAngLmtHSC4;
    float32 VehAcceLmtHSC4;
    float32 VehDeceLmtHSC4;
    Dt_RECORD_HEADER stHeader;
    uint8 AutodDrvngSysSts;
    uint8 AIParkngSts;
    uint16 White_Body_Color;
  } Dt_RECORD_VCUStatus5; 
#define Rte_TypeDef_Dt_RECORD_VCUStatus6 
typedef struct _Dt_RECORD_VCUStatus6
  {
    boolean WhlGndVelLDrvnVsecinfo;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    float32 WhlGndVelLDrvnsecinfo;
    boolean WhlGndVelRDrvnVsecinfo;
    UINT_GAP_8 PaddingGap8_3;
    UINT_GAP_16 PaddingGap16_4;
    float32 WhlGndVelRDrvnsecinfo;
    boolean WhlGndVelLNonDrvnVsecinfo;
    UINT_GAP_8 PaddingGap8_5;
    UINT_GAP_16 PaddingGap16_6;
    float32 WhlGndVelLNonDrvnsecinfo;
    boolean WhlGndVelRNonDrvnVsecinfo;
    UINT_GAP_8 PaddingGap8_7;
    UINT_GAP_16 PaddingGap16_8;
    float32 WhlGndVelRNonDrvnsecinfo;
    Dt_RECORD_TimestampMid DeTimestamp;
  } Dt_RECORD_VCUStatus6; 
#define Rte_TypeDef_Dt_RECORD_VCUStatus7 
typedef struct _Dt_RECORD_VCUStatus7
  {
    float32 ACInCarTemHSC4;
    boolean FuelLvlPcntVHSC4;
    UINT_GAP_8 PaddingGap8_1;
    UINT_GAP_16 PaddingGap16_2;
    float32 FuelLvlPcntHSC4;
    uint8 AmbtLghtLvlHSC4;
    boolean OtsdAirTemCrValV_HSC4;
    UINT_GAP_16 PaddingGap16_3;
    float32 OtsdAirTemCrVal_HSC4;
    boolean BrkLghtsStaHSC4;
    boolean DangerousWrnngLghtStaHSC4;
    boolean DipdBeamLampsStaHSC4;
    boolean FrtFogLampStaHSC4;
    boolean HornStaHSC4;
    boolean LDircnLampsStaHSC4;
    boolean MainBeamLampsStaHSC4;
    boolean RDircnLampsStaHSC4;
    boolean RevsngLghtStaHSC4;
    boolean RrFogLampStaHSC4;
    boolean WidthLampAndTaillightStateHSC4;
    uint8 WiperStaHSC4;
    boolean WshrStaHSC4;
    UINT_GAP_8 PaddingGap8_4;
    UINT_GAP_16 PaddingGap16_5;
    Dt_RECORD_HEADER stHeader;
  } Dt_RECORD_VCUStatus7; 
#define Rte_TypeDef_Dt_RECORD_VCUStatus8 
typedef struct _Dt_RECORD_VCUStatus8
  {
    boolean TimeDspFmtHSC4;
    uint8 SecsOfMinuteHSC4;
    uint8 MinuteOfHourHSC4;
    uint8 HourOfDayHSC4;
    uint16 CalendarYearHSC4;
    uint8 CalendarMonthHSC4;
    uint8 CalendarDayHSC4;
    Dt_RECORD_HEADER stHeader;
  } Dt_RECORD_VCUStatus8; 
#define Rte_TypeDef_Dt_RECORD_VCUStatus9 
typedef struct _Dt_RECORD_VCUStatus9
  {
    uint8 VCUMainID;
    uint8 VCUAddonsID;
    uint8 Vehicleplatform;
    uint8 VCUstage;
    uint8 Projectname;
    uint8 Component;
    UINT_GAP_16 PaddingGap16_1;
    uint32 VehOdoHSC2;
    Dt_RECORD_HEADER stHeader;
    boolean EPTRdy;
    uint8 SysPwrMd;
    UINT_GAP_16 PaddingGap16_2;
  } Dt_RECORD_VCUStatus9; 
#define Rte_TypeDef_Dt_RECORD_VMS_BKP 
typedef struct _Dt_RECORD_VMS_BKP
  {
    Dt_ARRAY_10_float32 VMS_BKP;
  } Dt_RECORD_VMS_BKP; 
#define Rte_TypeDef_Dt_Record_Version 
typedef struct _Dt_Record_Version
  {
    uint8 DeMajor;
    uint8 DeMinor;
    uint8 DePatch;
    UINT_GAP_8 PaddingGap8_1;
  } Dt_Record_Version; 
#define Rte_TypeDef_Dt_Someip_DataBuffer 
typedef uint8 Dt_Someip_DataBuffer; 
# define Dt_Someip_DataBuffer_LowerLimit (0U)
# define Dt_Someip_DataBuffer_UpperLimit (255U)
#define Rte_TypeDef_Dt_Someip_DataBufferSize 
typedef uint32 Dt_Someip_DataBufferSize; 
# define Dt_Someip_DataBufferSize_LowerLimit (0U)
# define Dt_Someip_DataBufferSize_UpperLimit (4294967295U)
#define Rte_TypeDef_Dt_Someip_Timeout 
typedef uint32 Dt_Someip_Timeout; 
# define Dt_Someip_Timeout_LowerLimit (0U)
# define Dt_Someip_Timeout_UpperLimit (4294967295U)
typedef enum _Rnbl_IDs 
  { RCtApImageProcessFree_Init_ID = 15
  , RCtApImageProcessFree_100ms_ID = 90
  , RCtApImageProcessFree_20ms_ID = 91
  , RCtApImageProcessFree_60ms_ID = 92
  , RCtApImageProcessFree_Config_100ms_ID = 93
  , RCtApImageProcessFree_RS_10ms_ID = 94
  } Rte_Rnbl_IDs; 



/**********************************************************************************************************************
 * Constant value definitions
 *********************************************************************************************************************/




/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/




/* begin Fileversion check */
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 0
#    error "The magic number is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 0
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
/* end Fileversion check */

#endif /* RTE_TYPE_H */
