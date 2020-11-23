/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_DataHandleType.h
 *           Config:  PerformanceHost00_Project.dpa
 *      ECU-Project:  PerformanceHost00_Project
 *
 *        Generator:  MICROSAR RTE Generator Version 4.20.0
 *                    RTE Core Version 1.20.0
 *          License:  CBD1800612
 *
 *      Description:  Header file containing Data Handle type declarations for component data structures
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DATA_HANDLE_TYPE_H
# define _RTE_DATA_HANDLE_TYPE_H


/**********************************************************************************************************************
 * Type definitions for implicit access to S/R communication
 *********************************************************************************************************************/
/* Types for Data Handles section */

typedef struct
{
  Dt_RECORD_BISTASILPH00_Parameter value;
} Rte_DE_Dt_RECORD_BISTASILPH00_Parameter;

typedef struct
{
  Dt_RECORD_CleaningInitLevel value;
} Rte_DE_Dt_RECORD_CleaningInitLevel;

typedef struct
{
  Dt_RECORD_DebugUnlocking value;
} Rte_DE_Dt_RECORD_DebugUnlocking;

typedef struct
{
  Dt_RECORD_EthComParam value;
} Rte_DE_Dt_RECORD_EthComParam;

typedef struct
{
  Dt_RECORD_PPSwitchLevels value;
} Rte_DE_Dt_RECORD_PPSwitchLevels;

typedef struct
{
  Dt_IFSET_VERSION value;
} Rte_DE_Dt_IFSET_VERSION;

typedef struct
{
  Dt_ENUM_LCS_State value;
} Rte_DE_Dt_ENUM_LCS_State;

typedef struct
{
  Dt_ENUM_VAR_HWVariant value;
} Rte_DE_Dt_ENUM_VAR_HWVariant;

typedef struct
{
  Dt_RECORD_StbmTimestamp value;
} Rte_DE_Dt_RECORD_StbmTimestamp;

typedef struct
{
  Dt_BuildRevision value;
} Rte_DE_Dt_BuildRevision;

typedef struct
{
  Dt_Record_Version value;
} Rte_DE_Dt_Record_Version;

typedef struct
{
  Dt_ARRAY5_ReleaseType value;
} Rte_DE_Dt_ARRAY5_ReleaseType;

typedef struct
{
  Dt_Enable value;
} Rte_DE_Dt_Enable;

typedef struct
{
  Dt_UINT32_1_0 value;
} Rte_DE_Dt_UINT32_1_0;

typedef struct
{
  Dt_ShutdownTrigger value;
} Rte_DE_Dt_ShutdownTrigger;

typedef struct
{
  Dt_RECORD_BISTQMPH00_Parameter value;
} Rte_DE_Dt_RECORD_BISTQMPH00_Parameter;

typedef struct
{
  Dt_RECORD_BistTestPointStruct value;
} Rte_DE_Dt_RECORD_BistTestPointStruct;

typedef struct
{
  Dt_ENUM_ShutDownStatus value;
} Rte_DE_Dt_ENUM_ShutDownStatus;

typedef struct
{
  Dt_RECORD_UserCLB value;
} Rte_DE_Dt_RECORD_UserCLB;

typedef struct
{
  Dt_ARRAY_512_uint8 value;
} Rte_DE_Dt_ARRAY_512_uint8;

typedef struct
{
  Dt_RECORD_WdgStatus value;
} Rte_DE_Dt_RECORD_WdgStatus;

typedef struct
{
  Dt_RECORD_ADASDecisionDS value;
} Rte_DE_Dt_RECORD_ADASDecisionDS;

typedef struct
{
  Dt_RECORD_SVParkingSlot value;
} Rte_DE_Dt_RECORD_SVParkingSlot;

typedef struct
{
  Dt_RECORD_SVLanes value;
} Rte_DE_Dt_RECORD_SVLanes;

typedef struct
{
  Dt_RECORD_BdData_4M value;
} Rte_DE_Dt_RECORD_BdData_4M;

typedef struct
{
  Dt_RECORD_MwrObjects value;
} Rte_DE_Dt_RECORD_MwrObjects;

typedef struct
{
  Dt_RECORD_PlannerDS value;
} Rte_DE_Dt_RECORD_PlannerDS;

typedef struct
{
  Dt_RECORD_Debug_Parameter_NormalLogging value;
} Rte_DE_Dt_RECORD_Debug_Parameter_NormalLogging;

typedef struct
{
  Dt_RECORD_Debug_Parameter_NormalTracing value;
} Rte_DE_Dt_RECORD_Debug_Parameter_NormalTracing;

typedef struct
{
  Dt_RECORD_BISTQMPH00_Parameter_Normal value;
} Rte_DE_Dt_RECORD_BISTQMPH00_Parameter_Normal;

typedef struct
{
  Dt_RECORD_CoarseTrackMatching_Normal value;
} Rte_DE_Dt_RECORD_CoarseTrackMatching_Normal;

typedef struct
{
  Dt_RECORD_DR_Critical value;
} Rte_DE_Dt_RECORD_DR_Critical;

typedef struct
{
  Dt_RECORD_FreeSpaceFusion_Critical value;
} Rte_DE_Dt_RECORD_FreeSpaceFusion_Critical;

typedef struct
{
  Dt_RECORD_HighFrequencyPositioning_Critical value;
} Rte_DE_Dt_RECORD_HighFrequencyPositioning_Critical;

typedef struct
{
  Dt_RECORD_HighFrequencyPositioning_Normal value;
} Rte_DE_Dt_RECORD_HighFrequencyPositioning_Normal;

typedef struct
{
  Dt_RECORD_ImageProcessSec_Normal value;
} Rte_DE_Dt_RECORD_ImageProcessSec_Normal;

typedef struct
{
  Dt_RECORD_ImageProcess_FreeRunning_Normal value;
} Rte_DE_Dt_RECORD_ImageProcess_FreeRunning_Normal;

typedef struct
{
  Dt_RECORD_ImageProcess_Normal value;
} Rte_DE_Dt_RECORD_ImageProcess_Normal;

typedef struct
{
  Dt_RECORD_InertialProcess_Critical value;
} Rte_DE_Dt_RECORD_InertialProcess_Critical;

typedef struct
{
  Dt_RECORD_IntegratedPositioning_Critical value;
} Rte_DE_Dt_RECORD_IntegratedPositioning_Critical;

typedef struct
{
  Dt_RECORD_InteractionProcess_Critical value;
} Rte_DE_Dt_RECORD_InteractionProcess_Critical;

typedef struct
{
  Dt_RECORD_LaneFusionN_Critical value;
} Rte_DE_Dt_RECORD_LaneFusionN_Critical;

typedef struct
{
  Dt_RECORD_LocBuffer_Critical value;
} Rte_DE_Dt_RECORD_LocBuffer_Critical;

typedef struct
{
  Dt_RECORD_MapSourcing_FreeRunning_Normal value;
} Rte_DE_Dt_RECORD_MapSourcing_FreeRunning_Normal;

typedef struct
{
  Dt_RECORD_Map_FreeRunning_Normal value;
} Rte_DE_Dt_RECORD_Map_FreeRunning_Normal;

typedef struct
{
  Dt_RECORD_Map_Normal value;
} Rte_DE_Dt_RECORD_Map_Normal;

typedef struct
{
  Dt_RECORD_MeProcess_Critical value;
} Rte_DE_Dt_RECORD_MeProcess_Critical;

typedef struct
{
  Dt_RECORD_MiddleMapmatching_Critical value;
} Rte_DE_Dt_RECORD_MiddleMapmatching_Critical;

typedef struct
{
  Dt_RECORD_MirrorDataManager_FreeRunning_Normal value;
} Rte_DE_Dt_RECORD_MirrorDataManager_FreeRunning_Normal;

typedef struct
{
  Dt_RECORD_MotionControl_Critical value;
} Rte_DE_Dt_RECORD_MotionControl_Critical;

typedef struct
{
  Dt_RECORD_MwrProcess_Critical value;
} Rte_DE_Dt_RECORD_MwrProcess_Critical;

typedef struct
{
  Dt_RECORD_ObstacleFusion_Critical value;
} Rte_DE_Dt_RECORD_ObstacleFusion_Critical;

typedef struct
{
  Dt_RECORD_ParkingLot_Critical value;
} Rte_DE_Dt_RECORD_ParkingLot_Critical;

typedef struct
{
  Dt_RECORD_PathPlanner_Critical value;
} Rte_DE_Dt_RECORD_PathPlanner_Critical;

typedef struct
{
  Dt_RECORD_PathPlanner_Normal value;
} Rte_DE_Dt_RECORD_PathPlanner_Normal;

typedef struct
{
  Dt_RECORD_PathSolver_FreeRunning_Normal value;
} Rte_DE_Dt_RECORD_PathSolver_FreeRunning_Normal;

typedef struct
{
  Dt_RECORD_Prediction_Critical value;
} Rte_DE_Dt_RECORD_Prediction_Critical;

typedef struct
{
  Dt_RECORD_StateMonitor_Critical value;
} Rte_DE_Dt_RECORD_StateMonitor_Critical;

typedef struct
{
  Dt_RECORD_TrafficElementFusion_Critical value;
} Rte_DE_Dt_RECORD_TrafficElementFusion_Critical;

typedef struct
{
  Dt_RECORD_Transformer_Critical value;
} Rte_DE_Dt_RECORD_Transformer_Critical;

typedef struct
{
  Dt_RECORD_USBCom_Critical value;
} Rte_DE_Dt_RECORD_USBCom_Critical;

typedef struct
{
  Dt_RECORD_UltrasonicProcess_Critical value;
} Rte_DE_Dt_RECORD_UltrasonicProcess_Critical;

typedef struct
{
  Dt_UINT16_1_0 value;
} Rte_DE_Dt_UINT16_1_0;

typedef struct
{
  Dt_RECORD_DebugInfoConfig value;
} Rte_DE_Dt_RECORD_DebugInfoConfig;

typedef struct
{
  Dt_RECORD_EHConfig value;
} Rte_DE_Dt_RECORD_EHConfig;

typedef struct
{
  Dt_RECORD_EH_Status value;
} Rte_DE_Dt_RECORD_EH_Status;

typedef struct
{
  Dt_RECORD_SensorExtrinsicDSParameter value;
} Rte_DE_Dt_RECORD_SensorExtrinsicDSParameter;

typedef struct
{
  Dt_ENUM_PerWriteAllStatus value;
} Rte_DE_Dt_ENUM_PerWriteAllStatus;

typedef struct
{
  Dt_RECORD_UTCInfo value;
} Rte_DE_Dt_RECORD_UTCInfo;

typedef struct
{
  Dt_RECORD_Transform value;
} Rte_DE_Dt_RECORD_Transform;

typedef struct
{
  Dt_RECORD_UltrasonicProcess_BKP value;
} Rte_DE_Dt_RECORD_UltrasonicProcess_BKP;

typedef struct
{
  Dt_RECORD_UltrasonicDists value;
} Rte_DE_Dt_RECORD_UltrasonicDists;

typedef struct
{
  Dt_RECORD_FreeSpace value;
} Rte_DE_Dt_RECORD_FreeSpace;

typedef struct
{
  Dt_RECORD_UltrasonicParkingSlot value;
} Rte_DE_Dt_RECORD_UltrasonicParkingSlot;

typedef struct
{
  Dt_RECORD_Em_event_status_t value;
} Rte_DE_Dt_RECORD_Em_event_status_t;

typedef struct
{
  Dt_BOOL value;
} Rte_DE_Dt_BOOL;

typedef struct
{
  Dt_ARRAY6_UINT32_1_0 value;
} Rte_DE_Dt_ARRAY6_UINT32_1_0;

typedef struct
{
  Dt_RECORD_IFE2EP_CRC value;
} Rte_DE_Dt_RECORD_IFE2EP_CRC;

typedef struct
{
  Dt_RECORD_IFE2EP_Sequence value;
} Rte_DE_Dt_RECORD_IFE2EP_Sequence;

typedef struct
{
  Dt_RECORD_IFInjectValueToTRPH00 value;
} Rte_DE_Dt_RECORD_IFInjectValueToTRPH00;

typedef struct
{
  Dt_RECORD_IFWdgMTest value;
} Rte_DE_Dt_RECORD_IFWdgMTest;

typedef struct
{
  uint16 value;
} Rte_DE_uint16;

typedef struct
{
  Dt_ARRAY_6_EHReport value;
} Rte_DE_Dt_ARRAY_6_EHReport;

typedef struct
{
  Dt_ENUM_PerWriteAllStatus value;
  Std_ReturnType status;
} Rte_DES_Dt_ENUM_PerWriteAllStatus;

#endif /* _RTE_DATA_HANDLE_TYPE_H */
