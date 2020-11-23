/*** Module Rte_CtApImageProcess_FreeRunning, written by TTX-              ***/
/*** Mwcodegenerator/Contract_Header.py (Version 0.17.0, 18-Apr-2018) on   ***/
/*** Thu 20-Aug-2020 07:50:44                                              ***/
/*** IFSet version: 1.1.20                                                 ***/
/* PRQA S 0602 6                                                             */

/** \file Rte_CtApImageProcess_FreeRunning.h */

/* double include prevention */
#ifndef RTE_CTAPIMAGEPROCESS_FREERUNNING_H
# define RTE_CTAPIMAGEPROCESS_FREERUNNING_H

#ifndef RTE_CORE
# ifdef RTE_APPLICATION_HEADER_FILE
#     error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
#endif /* ifndef RTE_CORE */

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Type.h"



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

/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#ifndef RTE_CORE
  # define Rte_InitValue_PpPFProvidedData_DeLCSPH00State (0U)
  # define Rte_InitValue_PpPFProvidedData_DeLCSSH00State (0U)
  # define Rte_InitValue_PpPFProvidedData_DeLCSSH01State (0U)
  # define Rte_InitValue_PpPFProvidedData_DeLCSSystemState (0U)
  # define Rte_InitValue_PpPFProvidedData_DeVARHWVariant (0U)
  # define Rte_InitValue_PpPfInformation_DeBuildRevision (0U)
#endif /* ifndef RTE_CORE */




/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
/** \brief get one entry from a queued RTE buffer
 *
 * \param data receive buffer for element 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Receive_CtApImageProcess_FreeRunning_PpDiagGlobalRead_DeFSPCleared] {1247796}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_CtApImageProcess_FreeRunning_PpDiagGlobalRead_DeFSPCleared (P2VAR(Dt_BOOL, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief get one entry from a queued RTE buffer
 *
 * \param data receive buffer for element 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeAdjust_command_0x5A09] {1247796}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeAdjust_command_0x5A09 (P2VAR(Dt_RECORD_Routine_Adjust_command_0x5A09_Call, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief get one entry from a queued RTE buffer
 *
 * \param data receive buffer for element 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeCheck_pre_condition_0x5A01] {1247796}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeCheck_pre_condition_0x5A01 (P2VAR(Dt_RECORD_Routine_Check_pre_condition_0x5A01_Call, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief get one entry from a queued RTE buffer
 *
 * \param data receive buffer for element 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeClose_EOL_view_0x5A05] {1247796}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeClose_EOL_view_0x5A05 (P2VAR(Dt_RECORD_Routine_Close_EOL_view_0x5A05_Call, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief get one entry from a queued RTE buffer
 *
 * \param data receive buffer for element 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeEnter_EOL_view_0x5A0C] {1247796}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeEnter_EOL_view_0x5A0C (P2VAR(Dt_RECORD_Routine_Enter_EOL_view_0x5A0C_Call, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief get one entry from a queued RTE buffer
 *
 * \param data receive buffer for element 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeEnter_service_calibration_view_0x5A06] {1247796}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeEnter_service_calibration_view_0x5A06 (P2VAR(Dt_RECORD_Routine_Enter_service_calibration_view_0x5A06_Call, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief get one entry from a queued RTE buffer
 *
 * \param data receive buffer for element 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DePoint_check_and_switch_to_next_view_0x5A07] {1247796}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DePoint_check_and_switch_to_next_view_0x5A07 (P2VAR(Dt_RECORD_Routine_Point_check_and_switch_to_next_view_0x5A07_Call, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief get one entry from a queued RTE buffer
 *
 * \param data receive buffer for element 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeRequest_calibration_error_code_0x5A0B] {1247796}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeRequest_calibration_error_code_0x5A0B (P2VAR(Dt_RECORD_Routine_Request_calibration_error_code_0x5A0B_Call, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief get one entry from a queued RTE buffer
 *
 * \param data receive buffer for element 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeSend_point_status_0x5A08] {1247796}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeSend_point_status_0x5A08 (P2VAR(Dt_RECORD_Routine_Send_point_status_0x5A08_Call, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief get one entry from a queued RTE buffer
 *
 * \param data receive buffer for element 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeStart_calibration_0x5A02] {1247796}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeStart_calibration_0x5A02 (P2VAR(Dt_RECORD_Routine_Start_calibration_0x5A02_Call, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_Config_100ms_PpBdImageProcessRead_BdSV_Normal] {1357185}
 **/
extern FUNC_P2CONST(Dt_RECORD_BdData_4M,AUTOMATIC, RTE_CODE) Rte_IRead_RCtApImageProcessFree_Config_100ms_PpBdImageProcessRead_BdSV_Normal (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpBdImageProcessRead_BdSV_Normal] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpBdImageProcessRead_BdSV_Normal (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpCOM_BMS_HSC1_100ms_DeBMS_HSC1_FrP11] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpCOM_BMS_HSC1_100ms_DeBMS_HSC1_FrP11 (P2VAR(Dt_RECORD_BMS_HSC1_FrP11, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_BMS_HSC1_100ms_DeBMS_HSC1_FrP11] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_BMS_HSC1_100ms_DeBMS_HSC1_FrP11 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_50ms_DeFICM_HSC4_FrP13] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_50ms_DeFICM_HSC4_FrP13 (P2VAR(Dt_RECORD_FICM_HSC4_FrP13, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_50ms_DeFICM_HSC4_FrP13] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_50ms_DeFICM_HSC4_FrP13 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP18_FrP35_AVM] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP18_FrP35_AVM (P2VAR(Dt_RECORD_FICM_HSC4_FrP18_FrP35_AVM, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP18_FrP35_AVM] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP18_FrP35_AVM (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP19] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP19 (P2VAR(Dt_RECORD_FICM_HSC4_FrP19, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP19] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP19 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_10ms_DeFICM_HSC4_FrP32] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_10ms_DeFICM_HSC4_FrP32 (P2VAR(Dt_RECORD_FICM_HSC4_FrP32, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_10ms_DeFICM_HSC4_FrP32] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_10ms_DeFICM_HSC4_FrP32 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP01] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP01 (P2VAR(Dt_RECORD_TPMS_HSC3_FrP01, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP01] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP01 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP02] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP02 (P2VAR(Dt_RECORD_TPMS_HSC3_FrP02, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP02] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP02 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpDiagCoding_DeCoding] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpDiagCoding_DeCoding (P2VAR(Dt_RECORD_Diag_Coding, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpDiagCoding_DeCoding] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpDiagCoding_DeCoding (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpDR_Merges_10ms_DeDR_List] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpDR_Merges_10ms_DeDR_List (P2VAR(Dt_RECORD_DeDR_List, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpDR_Merges_10ms_DeDR_List] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpDR_Merges_10ms_DeDR_List (void);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_100ms_PpDsImageProcessDataSet_DeADASDecisionDS] {1357185}
 **/
extern FUNC_P2CONST(Dt_RECORD_ADASDecisionDS,AUTOMATIC, RTE_CODE) Rte_IRead_RCtApImageProcessFree_100ms_PpDsImageProcessDataSet_DeADASDecisionDS (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_100ms_PpDsImageProcessDataSet_DeADASDecisionDS] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_100ms_PpDsImageProcessDataSet_DeADASDecisionDS (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpEcuSerialNumber_DeEcuSerialNumber] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpEcuSerialNumber_DeEcuSerialNumber (P2VAR(Dt_ARRAY_16_uint8, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpEcuSerialNumber_DeEcuSerialNumber] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpEcuSerialNumber_DeEcuSerialNumber (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpEthernetCom_AVCameraDirt_100ms_DeAVCameraDirt] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpEthernetCom_AVCameraDirt_100ms_DeAVCameraDirt (P2VAR(Dt_RECORD_AVCameraDirt, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpEthernetCom_AVCameraDirt_100ms_DeAVCameraDirt] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpEthernetCom_AVCameraDirt_100ms_DeAVCameraDirt (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpEthernetCom_AVData_Upload_Status_300ms_DeAVData_Upload_Status] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpEthernetCom_AVData_Upload_Status_300ms_DeAVData_Upload_Status (P2VAR(Dt_RECORD_AVData_Upload_Status, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpEthernetCom_AVData_Upload_Status_300ms_DeAVData_Upload_Status] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpEthernetCom_AVData_Upload_Status_300ms_DeAVData_Upload_Status (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpEyeQCom2ImageProcess_FreeRunning_300ms_DeEyeQ2ImageProcess] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpEyeQCom2ImageProcess_FreeRunning_300ms_DeEyeQ2ImageProcess (P2VAR(Dt_RECORD_EyeQ2ImageProcess, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpEyeQCom2ImageProcess_FreeRunning_300ms_DeEyeQ2ImageProcess] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpEyeQCom2ImageProcess_FreeRunning_300ms_DeEyeQ2ImageProcess (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpInertialProcess_IMUInfo2ImageProcess_10ms_DeInertialProcess_Info] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpInertialProcess_IMUInfo2ImageProcess_10ms_DeInertialProcess_Info (P2VAR(Dt_RECORD_FromGPS, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpInertialProcess_IMUInfo2ImageProcess_10ms_DeInertialProcess_Info] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpInertialProcess_IMUInfo2ImageProcess_10ms_DeInertialProcess_Info (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpParkingLot_Ctrl_40ms_DeSVCtrl] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpParkingLot_Ctrl_40ms_DeSVCtrl (P2VAR(Dt_RECORD_SVCtrl, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpParkingLot_Ctrl_40ms_DeSVCtrl] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpParkingLot_Ctrl_40ms_DeSVCtrl (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpPathPlanner_Planner2AllModules_100ms_DePlanner_PlannerEnvirInfo] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpPathPlanner_Planner2AllModules_100ms_DePlanner_PlannerEnvirInfo (P2VAR(Dt_RECORD_PlannerEnvirInfo, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpPathPlanner_Planner2AllModules_100ms_DePlanner_PlannerEnvirInfo] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpPathPlanner_Planner2AllModules_100ms_DePlanner_PlannerEnvirInfo (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcess_FreeRunning_Normal] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcess_FreeRunning_Normal (P2VAR(Dt_RECORD_ImageProcess_FreeRunning_Normal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcess_FreeRunning_Normal] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcess_FreeRunning_Normal (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcess_Normal] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcess_Normal (P2VAR(Dt_RECORD_ImageProcess_Normal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcess_Normal] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcess_Normal (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcessSec_Normal] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcessSec_Normal (P2VAR(Dt_RECORD_ImageProcessSec_Normal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcessSec_Normal] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcessSec_Normal (void);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeBuildDate] {1357185}
 **/
extern FUNC_P2CONST(Dt_RECORD_StbmTimestamp,AUTOMATIC, RTE_CODE) Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeBuildDate (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeBuildDate] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeBuildDate (void);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeBuildRevision] {1357185}
 **/
extern FUNC(Dt_BuildRevision, RTE_CODE) Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeBuildRevision (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeBuildRevision] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeBuildRevision (void);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPfInformation_DePlatformVersion] {1357185}
 **/
extern FUNC_P2CONST(Dt_Record_Version,AUTOMATIC, RTE_CODE) Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPfInformation_DePlatformVersion (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPfInformation_DePlatformVersion] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPfInformation_DePlatformVersion (void);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeReleaseType] {1357185}
 **/
extern FUNC_P2CONST(Dt_ARRAY5_ReleaseType,AUTOMATIC, RTE_CODE) Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeReleaseType (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeReleaseType] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeReleaseType (void);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeSystemVersion] {1357185}
 **/
extern FUNC_P2CONST(Dt_IFSET_VERSION,AUTOMATIC, RTE_CODE) Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeSystemVersion (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeSystemVersion] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPfInformation_DeSystemVersion (void);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeIFSETVersion] {1357185}
 **/
extern FUNC_P2CONST(Dt_IFSET_VERSION,AUTOMATIC, RTE_CODE) Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeIFSETVersion (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeIFSETVersion] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeIFSETVersion (void);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSPH00State] {1357185}
 **/
extern FUNC(Dt_ENUM_LCS_State, RTE_CODE) Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSPH00State (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSPH00State] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSPH00State (void);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSSH00State] {1357185}
 **/
extern FUNC(Dt_ENUM_LCS_State, RTE_CODE) Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSSH00State (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSSH00State] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSSH00State (void);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSSH01State] {1357185}
 **/
extern FUNC(Dt_ENUM_LCS_State, RTE_CODE) Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSSH01State (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSSH01State] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSSH01State (void);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSSystemState] {1357185}
 **/
extern FUNC(Dt_ENUM_LCS_State, RTE_CODE) Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSSystemState (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSSystemState] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeLCSSystemState (void);
/** \brief get a pointer to the RTE buffer where the consumer runnable can read the data
 *
 * \param void 
 *
 * \return readable RTE buffer
 * \decomposed_from [Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeVARHWVariant] {1357185}
 **/
extern FUNC(Dt_ENUM_VAR_HWVariant, RTE_CODE) Rte_IRead_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeVARHWVariant (void);
/** \brief current status of the data element
 *
 * \param void 
 *
 * \return status of the RTE buffer page (RTE_E_OK, error code)
 * \decomposed_from [Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeVARHWVariant] {1247091}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_IStatus_RCtApImageProcessFree_Config_100ms_PpPFProvidedData_DeVARHWVariant (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeFltActnReq] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeFltActnReq (P2VAR(Dt_RECORD_FltActnReq, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeFltActnReq] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeFltActnReq (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeFltIndicator] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeFltIndicator (P2VAR(Dt_RECORD_FltIndicator, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeFltIndicator] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeFltIndicator (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeStateMonitor_BKP] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeStateMonitor_BKP (P2VAR(Dt_RECORD_StateMonitor_BKP, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeStateMonitor_BKP] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeStateMonitor_BKP (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_DrivingModeSts_50ms_DeDrivingModeSts] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_DrivingModeSts_50ms_DeDrivingModeSts (P2VAR(Dt_RECORD_DrivingModeSts, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_DrivingModeSts_50ms_DeDrivingModeSts] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_DrivingModeSts_50ms_DeDrivingModeSts (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_MobileyeGenericSensor_10ms_DeMobileyeGenericSensor] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_MobileyeGenericSensor_10ms_DeMobileyeGenericSensor (P2VAR(Dt_RECORD_MobileyeGenericSensor, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_MobileyeGenericSensor_10ms_DeMobileyeGenericSensor] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_MobileyeGenericSensor_10ms_DeMobileyeGenericSensor (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_100ms_DeVMS_VCUStatus5] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_100ms_DeVMS_VCUStatus5 (P2VAR(Dt_RECORD_VCUStatus5, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_100ms_DeVMS_VCUStatus5] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_100ms_DeVMS_VCUStatus5 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_BKP] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_BKP (P2VAR(Dt_RECORD_VMS_BKP, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_BKP] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_BKP (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus10] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus10 (P2VAR(Dt_RECORD_VCUStatus10, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus10] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus10 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus2] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus2 (P2VAR(Dt_RECORD_VCUStatus2, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus2] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus2 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus9] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus9 (P2VAR(Dt_RECORD_VCUStatus9, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus9] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus9 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_200ms_DeVCUStatus8] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_200ms_DeVCUStatus8 (P2VAR(Dt_RECORD_VCUStatus8, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_200ms_DeVCUStatus8] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_200ms_DeVCUStatus8 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_200ms_DeVMS_VCUStatus7_200ms] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_200ms_DeVMS_VCUStatus7_200ms (P2VAR(Dt_RECORD_VCUStatus7, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_200ms_DeVMS_VCUStatus7_200ms] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_200ms_DeVMS_VCUStatus7_200ms (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_20ms_DeVMS_VCUStatus3] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_20ms_DeVMS_VCUStatus3 (P2VAR(Dt_RECORD_VCUStatus3, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_20ms_DeVMS_VCUStatus3] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_20ms_DeVMS_VCUStatus3 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_50ms_DeVMS_VCUStatus4] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_50ms_DeVMS_VCUStatus4 (P2VAR(Dt_RECORD_VCUStatus4, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_50ms_DeVMS_VCUStatus4] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_50ms_DeVMS_VCUStatus4 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUStatus1_10ms_DeVMS_VCUStatus1] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUStatus1_10ms_DeVMS_VCUStatus1 (P2VAR(Dt_RECORD_VCUStatus1, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUStatus1_10ms_DeVMS_VCUStatus1] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUStatus1_10ms_DeVMS_VCUStatus1 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUStatus6_50ms_DeVMS_VCUStatus6] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUStatus6_50ms_DeVMS_VCUStatus6 (P2VAR(Dt_RECORD_VCUStatus6, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUStatus6_50ms_DeVMS_VCUStatus6] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUStatus6_50ms_DeVMS_VCUStatus6 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicHandler_HSC1_PDC_50ms_DeIECU_HSC1_PDC_FrP00] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicHandler_HSC1_PDC_50ms_DeIECU_HSC1_PDC_FrP00 (P2VAR(Dt_RECORD_IECU_HSC1_PDC_FrP00, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicHandler_HSC1_PDC_50ms_DeIECU_HSC1_PDC_FrP00] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicHandler_HSC1_PDC_50ms_DeIECU_HSC1_PDC_FrP00 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP00] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP00 (P2VAR(Dt_RECORD_PDC_HSC2_FrP00, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP00] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP00 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP01] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP01 (P2VAR(Dt_RECORD_PDC_HSC2_FrP01, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP01] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP01 (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_BKP] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_BKP (P2VAR(Dt_RECORD_UltrasonicProcess_BKP, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_BKP] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_BKP (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_Dists] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_Dists (P2VAR(Dt_RECORD_UltrasonicDists, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_Dists] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_Dists (void);
/** \brief copy data from the RTE buffer to the buffer provided by the consumer
 *
 * \param data buffer provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Read_CtApImageProcess_FreeRunning_PpVehicleIdentificationNumber_DeVehicleIdentificationNumber] {1330078}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtApImageProcess_FreeRunning_PpVehicleIdentificationNumber_DeVehicleIdentificationNumber (P2VAR(Dt_ARRAY_17_uint8, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) data);
/** \brief update status of a data element
 *
 * \param void 
 *
 * \return TRUE if unread, FALSE if already seen
 * \decomposed_from [Rte_IsUpdated_CtApImageProcess_FreeRunning_PpVehicleIdentificationNumber_DeVehicleIdentificationNumber] {1247458}
 **/
extern FUNC(boolean, RTE_CODE) Rte_IsUpdated_CtApImageProcess_FreeRunning_PpVehicleIdentificationNumber_DeVehicleIdentificationNumber (void);
/** \brief store one entry in a queued RTE buffer
 *
 * \param data element to send 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeAdjust_command_0x5A09] {1247670}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeAdjust_command_0x5A09 (P2CONST(Dt_RECORD_Routine_Adjust_command_0x5A09_RetVal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief store one entry in a queued RTE buffer
 *
 * \param data element to send 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeCheck_pre_condition_0x5A01] {1247670}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeCheck_pre_condition_0x5A01 (P2CONST(Dt_RECORD_Routine_Check_pre_condition_0x5A01_RetVal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief store one entry in a queued RTE buffer
 *
 * \param data element to send 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeClose_EOL_view_0x5A05] {1247670}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeClose_EOL_view_0x5A05 (P2CONST(Dt_RECORD_Routine_Close_EOL_view_0x5A05_RetVal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief store one entry in a queued RTE buffer
 *
 * \param data element to send 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeEnter_EOL_view_0x5A0C] {1247670}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeEnter_EOL_view_0x5A0C (P2CONST(Dt_RECORD_Routine_Enter_EOL_view_0x5A0C_RetVal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief store one entry in a queued RTE buffer
 *
 * \param data element to send 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeEnter_service_calibration_view_0x5A06] {1247670}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeEnter_service_calibration_view_0x5A06 (P2CONST(Dt_RECORD_Routine_Enter_service_calibration_view_0x5A06_RetVal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief store one entry in a queued RTE buffer
 *
 * \param data element to send 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DePoint_check_and_switch_to_next_view_0x5A07] {1247670}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DePoint_check_and_switch_to_next_view_0x5A07 (P2CONST(Dt_RECORD_Routine_Point_check_and_switch_to_next_view_0x5A07_RetVal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief store one entry in a queued RTE buffer
 *
 * \param data element to send 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeRequest_calibration_error_code_0x5A0B] {1247670}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeRequest_calibration_error_code_0x5A0B (P2CONST(Dt_RECORD_Routine_Request_calibration_error_code_0x5A0B_RetVal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief store one entry in a queued RTE buffer
 *
 * \param data element to send 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeSend_point_status_0x5A08] {1247670}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeSend_point_status_0x5A08 (P2CONST(Dt_RECORD_Routine_Send_point_status_0x5A08_RetVal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief store one entry in a queued RTE buffer
 *
 * \param data element to send 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeStart_calibration_0x5A02] {1247670}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeStart_calibration_0x5A02 (P2CONST(Dt_RECORD_Routine_Start_calibration_0x5A02_RetVal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief provide a writeable RTE buffer
 *
 * \param void 
 *
 * \return pointer to RTE buffer
 * \decomposed_from [Rte_IWriteRef_RCtApImageProcessFree_Config_100ms_PpBdImageProcessWrite_BdSV_Normal] {1246847}
 **/
extern FUNC_P2VAR(Dt_RECORD_BdData_4M,AUTOMATIC, RTE_CODE) Rte_IWriteRef_RCtApImageProcessFree_Config_100ms_PpBdImageProcessWrite_BdSV_Normal (void);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeMeasuredValue_ImageProcess_FreeRunning] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeMeasuredValue_ImageProcess_FreeRunning (P2CONST(Dt_RECORD_MeasuredValue_ImageProcess_FreeRunning, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FaultCondition_60ms_DeBKP] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FaultCondition_60ms_DeBKP (P2CONST(Dt_RECORD_FaultCondition_BKP_FRP, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FaultCondition_60ms_DeFailureCondition] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FaultCondition_60ms_DeFailureCondition (P2CONST(Dt_RECORD_FailureCondition_FRP, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FaultCondition_60ms_DeFaultCondition] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FaultCondition_60ms_DeFaultCondition (P2CONST(Dt_RECORD_FaultCondition_FRP, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FaultCondition_60ms_DeTriggerCondition] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FaultCondition_60ms_DeTriggerCondition (P2CONST(Dt_RECORD_TriggerCondition_FRP, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FreeRunning2EyeQCom_100ms_DeImageProcess2EyeQ] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FreeRunning2EyeQCom_100ms_DeImageProcess2EyeQ (P2CONST(Dt_RECORD_ImageProcess2EyeQ, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FreeSpace_60ms_DeBKP] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FreeSpace_60ms_DeBKP (P2CONST(Dt_ARRAY_200_uint8_1_0, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FreeSpace_60ms_DeFreeSpcae] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FreeSpace_60ms_DeFreeSpcae (P2CONST(Dt_RECORD_SVFreeSpaces, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_HSC4_AVM_50ms_DeIECU_HSC4_FrP08_SV] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_HSC4_AVM_50ms_DeIECU_HSC4_FrP08_SV (P2CONST(Dt_RECORD_IECU_HSC4_FrP08_SV, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return void
 * \decomposed_from [Rte_IWrite_RCtApImageProcessFree_60ms_PpImageProcess_Lane_60ms_DeSVLanes] {1246460}
 **/
extern FUNC(void, RTE_CODE) Rte_IWrite_RCtApImageProcessFree_60ms_PpImageProcess_Lane_60ms_DeSVLanes (P2CONST(Dt_RECORD_SVLanes, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief provide a writeable RTE buffer
 *
 * \param void 
 *
 * \return pointer to RTE buffer
 * \decomposed_from [Rte_IWriteRef_RCtApImageProcessFree_60ms_PpImageProcess_Lane_60ms_DeSVLanes] {1246847}
 **/
extern FUNC_P2VAR(Dt_RECORD_SVLanes,AUTOMATIC, RTE_CODE) Rte_IWriteRef_RCtApImageProcessFree_60ms_PpImageProcess_Lane_60ms_DeSVLanes (void);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_Location_100ms_DeFLocation] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_Location_100ms_DeFLocation (P2CONST(Dt_RECORD_SVLocation, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_Obstacle_60ms_DeObstacle] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_Obstacle_60ms_DeObstacle (P2CONST(Dt_RECORD_SVObstacles, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return void
 * \decomposed_from [Rte_IWrite_RCtApImageProcessFree_20ms_PpImageProcess_ParkingLot_20ms_DeSVParkingSlot] {1246460}
 **/
extern FUNC(void, RTE_CODE) Rte_IWrite_RCtApImageProcessFree_20ms_PpImageProcess_ParkingLot_20ms_DeSVParkingSlot (P2CONST(Dt_RECORD_SVParkingSlot, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief provide a writeable RTE buffer
 *
 * \param void 
 *
 * \return pointer to RTE buffer
 * \decomposed_from [Rte_IWriteRef_RCtApImageProcessFree_20ms_PpImageProcess_ParkingLot_20ms_DeSVParkingSlot] {1246847}
 **/
extern FUNC_P2VAR(Dt_RECORD_SVParkingSlot,AUTOMATIC, RTE_CODE) Rte_IWriteRef_RCtApImageProcessFree_20ms_PpImageProcess_ParkingLot_20ms_DeSVParkingSlot (void);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_Position_init_status_60ms_DePosition_init_status] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_Position_init_status_60ms_DePosition_init_status (P2CONST(Dt_RECORD_Position_init_status, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_ReswevedA2B_50ms_DeReservedA2B] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_ReswevedA2B_50ms_DeReservedA2B (P2CONST(Dt_RECORD_ReservedA2B, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_Status_20ms_DeStatus] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_Status_20ms_DeStatus (P2CONST(Dt_RECORD_SVStatus, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_SVCameraFail_60ms_DeSurroundCameraFail] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_SVCameraFail_60ms_DeSurroundCameraFail (P2CONST(Dt_RECORD_SVCameraFail, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_SVData_Upload_status_300ms_DeSVData_Upload_status] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_SVData_Upload_status_300ms_DeSVData_Upload_status (P2CONST(Dt_RECORD_SVData_Upload_status, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningWrite_DeImageProcess_FreeRunning_Normal] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningWrite_DeImageProcess_FreeRunning_Normal (P2CONST(Dt_RECORD_ImageProcess_FreeRunning_Normal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningWrite_DeImageProcess_Normal] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningWrite_DeImageProcess_Normal (P2CONST(Dt_RECORD_ImageProcess_Normal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief copy data of an element from the buffer provided by the producer runnable into the RTE buffer
 *
 * \param data element data provided 
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Write_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningWrite_DeImageProcessSec_Normal] {1246332}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningWrite_DeImageProcessSec_Normal (P2CONST(Dt_RECORD_ImageProcessSec_Normal, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) data);
/** \brief call the runnable GetEventStatus
 *
 * \param EventId
 * \param EventStatusExtended
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Call_<s>_<p>_<f>] {1247618}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApImageProcess_FreeRunning_PpEventHandling_GetEventStatus( Dem_EventIdType EventId, P2VAR(Dem_EventStatusExtendedType, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) EventStatusExtended);
/** \brief call the runnable SetEventStatus
 *
 * \param EventId
 * \param EventStatus
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Call_<s>_<p>_<f>] {1247618}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApImageProcess_FreeRunning_PpEventHandling_SetEventStatus( Dem_EventIdType EventId, Dem_EventStatusType EventStatus);
/** \brief call the runnable SetSwcInfo
 *
 * \param swc_id
 * \param swc_info
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Call_<s>_<p>_<f>] {1247618}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApImageProcess_FreeRunning_PpPFServer_SetSwcInfo( Dt_ENUM_SWCID swc_id, P2CONST(Dt_RECORD_SWC_Identification, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_DATA) swc_info);
/** \brief call the runnable TS_GetEgtTime
 *
 * \param timestamp
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Call_<s>_<p>_<f>] {1247618}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApImageProcess_FreeRunning_PpPFServer_TS_GetEgtTime (P2VAR(Dt_RECORD_StbmTimestamp, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) timestamp);
/** \brief call the runnable TS_GetEgtTimestamp
 *
 * \param Timestamp
 * \param Clock
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Call_<s>_<p>_<f>] {1247618}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApImageProcess_FreeRunning_PpPFServer_TS_GetEgtTimestamp( P2VAR(Dt_RECORD_Timestamp, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) Timestamp, P2VAR(Dt_ENUM_CLKSOURCE, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) Clock);
/** \brief call the runnable TS_GetRemainingTimeBudget
 *
 * \param RemainingTimeBudget
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Call_<s>_<p>_<f>] {1247618}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApImageProcess_FreeRunning_PpPFServer_TS_GetRemainingTimeBudget (P2VAR(sint32, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) RemainingTimeBudget);
/** \brief call the runnable SomeipReceive
 *
 * \param DataBuffer
 * \param DataBufferSize
 * \param Timeout
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Call_<s>_<p>_<f>] {1247618}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApImageProcess_FreeRunning_PpSomeipEvent_SomeipReceive( P2VAR(Dt_Someip_DataBuffer, AUTOMATIC, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_VAR) DataBuffer, Dt_Someip_DataBufferSize DataBufferSize, Dt_Someip_Timeout Timeout);
/** \brief call the runnable SomeipSend
 *
 * \param DataBuffer
 * \param DataBufferSize
 * \param Timeout
 *
 * \return status of the operation (RTE_E_OK, error code)
 * \decomposed_from [Rte_Call_<s>_<p>_<f>] {1247618}
 **/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_CtApImageProcess_FreeRunning_PpSomeipEvent_SomeipSend( Dt_Someip_DataBuffer DataBuffer, Dt_Someip_DataBufferSize DataBufferSize, Dt_Someip_Timeout Timeout);





/**********************************************************************************************************************
 * Rte_IRead_<r>_<p>_<d>
 * Rte_IStatus_<r>_<p>_<d>
 * Rte_IWrite_<r>_<p>_<d>
 * Rte_IWriteRef_<r>_<p>_<d>
 * Rte_IInvalidate_<r>_<p>_<d>
 *********************************************************************************************************************/

#ifndef RTE_CORE 

/**********************************************************************************************************************
 * Rte_Receive_<p>_<d> (explicit S/R communication with isQueued = true)
 *********************************************************************************************************************/
# define Rte_Receive_PpDiagGlobalRead_DeFSPCleared Rte_Receive_CtApImageProcess_FreeRunning_PpDiagGlobalRead_DeFSPCleared
# define Rte_Receive_PpDiagImageProcess_FreeRunningRead_DeAdjust_command_0x5A09 Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeAdjust_command_0x5A09
# define Rte_Receive_PpDiagImageProcess_FreeRunningRead_DeCheck_pre_condition_0x5A01 Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeCheck_pre_condition_0x5A01
# define Rte_Receive_PpDiagImageProcess_FreeRunningRead_DeClose_EOL_view_0x5A05 Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeClose_EOL_view_0x5A05
# define Rte_Receive_PpDiagImageProcess_FreeRunningRead_DeEnter_EOL_view_0x5A0C Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeEnter_EOL_view_0x5A0C
# define Rte_Receive_PpDiagImageProcess_FreeRunningRead_DeEnter_service_calibration_view_0x5A06 Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeEnter_service_calibration_view_0x5A06
# define Rte_Receive_PpDiagImageProcess_FreeRunningRead_DePoint_check_and_switch_to_next_view_0x5A07 Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DePoint_check_and_switch_to_next_view_0x5A07
# define Rte_Receive_PpDiagImageProcess_FreeRunningRead_DeRequest_calibration_error_code_0x5A0B Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeRequest_calibration_error_code_0x5A0B
# define Rte_Receive_PpDiagImageProcess_FreeRunningRead_DeSend_point_status_0x5A08 Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeSend_point_status_0x5A08
# define Rte_Receive_PpDiagImageProcess_FreeRunningRead_DeStart_calibration_0x5A02 Rte_Receive_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningRead_DeStart_calibration_0x5A02


/**********************************************************************************************************************
 * Rte_Send_<p>_<d> (explicit S/R communication with isQueued = true)
 *********************************************************************************************************************/
# define Rte_Send_PpDiagImageProcess_FreeRunningWrite_DeAdjust_command_0x5A09 Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeAdjust_command_0x5A09
# define Rte_Send_PpDiagImageProcess_FreeRunningWrite_DeCheck_pre_condition_0x5A01 Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeCheck_pre_condition_0x5A01
# define Rte_Send_PpDiagImageProcess_FreeRunningWrite_DeClose_EOL_view_0x5A05 Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeClose_EOL_view_0x5A05
# define Rte_Send_PpDiagImageProcess_FreeRunningWrite_DeEnter_EOL_view_0x5A0C Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeEnter_EOL_view_0x5A0C
# define Rte_Send_PpDiagImageProcess_FreeRunningWrite_DeEnter_service_calibration_view_0x5A06 Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeEnter_service_calibration_view_0x5A06
# define Rte_Send_PpDiagImageProcess_FreeRunningWrite_DePoint_check_and_switch_to_next_view_0x5A07 Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DePoint_check_and_switch_to_next_view_0x5A07
# define Rte_Send_PpDiagImageProcess_FreeRunningWrite_DeRequest_calibration_error_code_0x5A0B Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeRequest_calibration_error_code_0x5A0B
# define Rte_Send_PpDiagImageProcess_FreeRunningWrite_DeSend_point_status_0x5A08 Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeSend_point_status_0x5A08
# define Rte_Send_PpDiagImageProcess_FreeRunningWrite_DeStart_calibration_0x5A02 Rte_Send_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeStart_calibration_0x5A02


/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_PpCOM_BMS_HSC1_100ms_DeBMS_HSC1_FrP11 Rte_Read_CtApImageProcess_FreeRunning_PpCOM_BMS_HSC1_100ms_DeBMS_HSC1_FrP11
# define Rte_Read_PpCOM_FICM_HSC4_50ms_DeFICM_HSC4_FrP13 Rte_Read_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_50ms_DeFICM_HSC4_FrP13
# define Rte_Read_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP18_FrP35_AVM Rte_Read_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP18_FrP35_AVM
# define Rte_Read_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP19 Rte_Read_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP19
# define Rte_Read_PpCOM_FICM_HSC4_AVM_10ms_DeFICM_HSC4_FrP32 Rte_Read_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_10ms_DeFICM_HSC4_FrP32
# define Rte_Read_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP01 Rte_Read_CtApImageProcess_FreeRunning_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP01
# define Rte_Read_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP02 Rte_Read_CtApImageProcess_FreeRunning_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP02
# define Rte_Read_PpDiagCoding_DeCoding Rte_Read_CtApImageProcess_FreeRunning_PpDiagCoding_DeCoding
# define Rte_Read_PpDR_Merges_10ms_DeDR_List Rte_Read_CtApImageProcess_FreeRunning_PpDR_Merges_10ms_DeDR_List
# define Rte_Read_PpEcuSerialNumber_DeEcuSerialNumber Rte_Read_CtApImageProcess_FreeRunning_PpEcuSerialNumber_DeEcuSerialNumber
# define Rte_Read_PpEthernetCom_AVCameraDirt_100ms_DeAVCameraDirt Rte_Read_CtApImageProcess_FreeRunning_PpEthernetCom_AVCameraDirt_100ms_DeAVCameraDirt
# define Rte_Read_PpEthernetCom_AVData_Upload_Status_300ms_DeAVData_Upload_Status Rte_Read_CtApImageProcess_FreeRunning_PpEthernetCom_AVData_Upload_Status_300ms_DeAVData_Upload_Status
# define Rte_Read_PpEyeQCom2ImageProcess_FreeRunning_300ms_DeEyeQ2ImageProcess Rte_Read_CtApImageProcess_FreeRunning_PpEyeQCom2ImageProcess_FreeRunning_300ms_DeEyeQ2ImageProcess
# define Rte_Read_PpInertialProcess_IMUInfo2ImageProcess_10ms_DeInertialProcess_Info Rte_Read_CtApImageProcess_FreeRunning_PpInertialProcess_IMUInfo2ImageProcess_10ms_DeInertialProcess_Info
# define Rte_Read_PpParkingLot_Ctrl_40ms_DeSVCtrl Rte_Read_CtApImageProcess_FreeRunning_PpParkingLot_Ctrl_40ms_DeSVCtrl
# define Rte_Read_PpPathPlanner_Planner2AllModules_100ms_DePlanner_PlannerEnvirInfo Rte_Read_CtApImageProcess_FreeRunning_PpPathPlanner_Planner2AllModules_100ms_DePlanner_PlannerEnvirInfo
# define Rte_Read_PpPdImageProcess_FreeRunningRead_DeImageProcess_FreeRunning_Normal Rte_Read_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcess_FreeRunning_Normal
# define Rte_Read_PpPdImageProcess_FreeRunningRead_DeImageProcess_Normal Rte_Read_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcess_Normal
# define Rte_Read_PpPdImageProcess_FreeRunningRead_DeImageProcessSec_Normal Rte_Read_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcessSec_Normal
# define Rte_Read_PpStateMonitor_FailureAction_50ms_DeFltActnReq Rte_Read_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeFltActnReq
# define Rte_Read_PpStateMonitor_FailureAction_50ms_DeFltIndicator Rte_Read_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeFltIndicator
# define Rte_Read_PpStateMonitor_FailureAction_50ms_DeStateMonitor_BKP Rte_Read_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeStateMonitor_BKP
# define Rte_Read_PpSysManager_DrivingModeSts_50ms_DeDrivingModeSts Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_DrivingModeSts_50ms_DeDrivingModeSts
# define Rte_Read_PpSysManager_MobileyeGenericSensor_10ms_DeMobileyeGenericSensor Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_MobileyeGenericSensor_10ms_DeMobileyeGenericSensor
# define Rte_Read_PpSysManager_VCUInfo_100ms_DeVMS_VCUStatus5 Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_100ms_DeVMS_VCUStatus5
# define Rte_Read_PpSysManager_VCUInfo_10ms_DeVMS_BKP Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_BKP
# define Rte_Read_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus10 Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus10
# define Rte_Read_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus2 Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus2
# define Rte_Read_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus9 Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus9
# define Rte_Read_PpSysManager_VCUInfo_200ms_DeVCUStatus8 Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_200ms_DeVCUStatus8
# define Rte_Read_PpSysManager_VCUInfo_200ms_DeVMS_VCUStatus7_200ms Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_200ms_DeVMS_VCUStatus7_200ms
# define Rte_Read_PpSysManager_VCUInfo_20ms_DeVMS_VCUStatus3 Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_20ms_DeVMS_VCUStatus3
# define Rte_Read_PpSysManager_VCUInfo_50ms_DeVMS_VCUStatus4 Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_50ms_DeVMS_VCUStatus4
# define Rte_Read_PpSysManager_VCUStatus1_10ms_DeVMS_VCUStatus1 Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUStatus1_10ms_DeVMS_VCUStatus1
# define Rte_Read_PpSysManager_VCUStatus6_50ms_DeVMS_VCUStatus6 Rte_Read_CtApImageProcess_FreeRunning_PpSysManager_VCUStatus6_50ms_DeVMS_VCUStatus6
# define Rte_Read_PpUltrasonicHandler_HSC1_PDC_50ms_DeIECU_HSC1_PDC_FrP00 Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicHandler_HSC1_PDC_50ms_DeIECU_HSC1_PDC_FrP00
# define Rte_Read_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP00 Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP00
# define Rte_Read_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP01 Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP01
# define Rte_Read_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_BKP Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_BKP
# define Rte_Read_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_Dists Rte_Read_CtApImageProcess_FreeRunning_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_Dists
# define Rte_Read_PpVehicleIdentificationNumber_DeVehicleIdentificationNumber Rte_Read_CtApImageProcess_FreeRunning_PpVehicleIdentificationNumber_DeVehicleIdentificationNumber


/**********************************************************************************************************************
 * Rte_IsUpdated_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_IsUpdated_PpCOM_BMS_HSC1_100ms_DeBMS_HSC1_FrP11 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_BMS_HSC1_100ms_DeBMS_HSC1_FrP11
# define Rte_IsUpdated_PpCOM_FICM_HSC4_50ms_DeFICM_HSC4_FrP13 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_50ms_DeFICM_HSC4_FrP13
# define Rte_IsUpdated_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP18_FrP35_AVM Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP18_FrP35_AVM
# define Rte_IsUpdated_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP19 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_100ms_DeFICM_HSC4_FrP19
# define Rte_IsUpdated_PpCOM_FICM_HSC4_AVM_10ms_DeFICM_HSC4_FrP32 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_FICM_HSC4_AVM_10ms_DeFICM_HSC4_FrP32
# define Rte_IsUpdated_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP01 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP01
# define Rte_IsUpdated_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP02 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpCOM_TPMS_HSC3_400ms_DeTPMS_HSC3_FrP02
# define Rte_IsUpdated_PpDiagCoding_DeCoding Rte_IsUpdated_CtApImageProcess_FreeRunning_PpDiagCoding_DeCoding
# define Rte_IsUpdated_PpDR_Merges_10ms_DeDR_List Rte_IsUpdated_CtApImageProcess_FreeRunning_PpDR_Merges_10ms_DeDR_List
# define Rte_IsUpdated_PpEcuSerialNumber_DeEcuSerialNumber Rte_IsUpdated_CtApImageProcess_FreeRunning_PpEcuSerialNumber_DeEcuSerialNumber
# define Rte_IsUpdated_PpEthernetCom_AVCameraDirt_100ms_DeAVCameraDirt Rte_IsUpdated_CtApImageProcess_FreeRunning_PpEthernetCom_AVCameraDirt_100ms_DeAVCameraDirt
# define Rte_IsUpdated_PpEthernetCom_AVData_Upload_Status_300ms_DeAVData_Upload_Status Rte_IsUpdated_CtApImageProcess_FreeRunning_PpEthernetCom_AVData_Upload_Status_300ms_DeAVData_Upload_Status
# define Rte_IsUpdated_PpEyeQCom2ImageProcess_FreeRunning_300ms_DeEyeQ2ImageProcess Rte_IsUpdated_CtApImageProcess_FreeRunning_PpEyeQCom2ImageProcess_FreeRunning_300ms_DeEyeQ2ImageProcess
# define Rte_IsUpdated_PpInertialProcess_IMUInfo2ImageProcess_10ms_DeInertialProcess_Info Rte_IsUpdated_CtApImageProcess_FreeRunning_PpInertialProcess_IMUInfo2ImageProcess_10ms_DeInertialProcess_Info
# define Rte_IsUpdated_PpParkingLot_Ctrl_40ms_DeSVCtrl Rte_IsUpdated_CtApImageProcess_FreeRunning_PpParkingLot_Ctrl_40ms_DeSVCtrl
# define Rte_IsUpdated_PpPathPlanner_Planner2AllModules_100ms_DePlanner_PlannerEnvirInfo Rte_IsUpdated_CtApImageProcess_FreeRunning_PpPathPlanner_Planner2AllModules_100ms_DePlanner_PlannerEnvirInfo
# define Rte_IsUpdated_PpPdImageProcess_FreeRunningRead_DeImageProcess_Normal Rte_IsUpdated_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcess_Normal
# define Rte_IsUpdated_PpPdImageProcess_FreeRunningRead_DeImageProcessSec_Normal Rte_IsUpdated_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningRead_DeImageProcessSec_Normal
# define Rte_IsUpdated_PpStateMonitor_FailureAction_50ms_DeFltActnReq Rte_IsUpdated_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeFltActnReq
# define Rte_IsUpdated_PpStateMonitor_FailureAction_50ms_DeFltIndicator Rte_IsUpdated_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeFltIndicator
# define Rte_IsUpdated_PpStateMonitor_FailureAction_50ms_DeStateMonitor_BKP Rte_IsUpdated_CtApImageProcess_FreeRunning_PpStateMonitor_FailureAction_50ms_DeStateMonitor_BKP
# define Rte_IsUpdated_PpSysManager_DrivingModeSts_50ms_DeDrivingModeSts Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_DrivingModeSts_50ms_DeDrivingModeSts
# define Rte_IsUpdated_PpSysManager_MobileyeGenericSensor_10ms_DeMobileyeGenericSensor Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_MobileyeGenericSensor_10ms_DeMobileyeGenericSensor
# define Rte_IsUpdated_PpSysManager_VCUInfo_100ms_DeVMS_VCUStatus5 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_100ms_DeVMS_VCUStatus5
# define Rte_IsUpdated_PpSysManager_VCUInfo_10ms_DeVMS_BKP Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_BKP
# define Rte_IsUpdated_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus10 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus10
# define Rte_IsUpdated_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus2 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus2
# define Rte_IsUpdated_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus9 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_10ms_DeVMS_VCUStatus9
# define Rte_IsUpdated_PpSysManager_VCUInfo_200ms_DeVCUStatus8 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_200ms_DeVCUStatus8
# define Rte_IsUpdated_PpSysManager_VCUInfo_200ms_DeVMS_VCUStatus7_200ms Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_200ms_DeVMS_VCUStatus7_200ms
# define Rte_IsUpdated_PpSysManager_VCUInfo_20ms_DeVMS_VCUStatus3 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_20ms_DeVMS_VCUStatus3
# define Rte_IsUpdated_PpSysManager_VCUInfo_50ms_DeVMS_VCUStatus4 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUInfo_50ms_DeVMS_VCUStatus4
# define Rte_IsUpdated_PpSysManager_VCUStatus1_10ms_DeVMS_VCUStatus1 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUStatus1_10ms_DeVMS_VCUStatus1
# define Rte_IsUpdated_PpSysManager_VCUStatus6_50ms_DeVMS_VCUStatus6 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpSysManager_VCUStatus6_50ms_DeVMS_VCUStatus6
# define Rte_IsUpdated_PpUltrasonicHandler_HSC1_PDC_50ms_DeIECU_HSC1_PDC_FrP00 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicHandler_HSC1_PDC_50ms_DeIECU_HSC1_PDC_FrP00
# define Rte_IsUpdated_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP00 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP00
# define Rte_IsUpdated_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP01 Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicHandler_PDC_CHCAN_50ms_DePDC_HSC2_FrP01
# define Rte_IsUpdated_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_BKP Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_BKP
# define Rte_IsUpdated_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_Dists Rte_IsUpdated_CtApImageProcess_FreeRunning_PpUltrasonicProcess_Dists_20ms_DeUltrasonicProcess_Dists


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PpDiagImageProcess_FreeRunningWrite_DeMeasuredValue_ImageProcess_FreeRunning Rte_Write_CtApImageProcess_FreeRunning_PpDiagImageProcess_FreeRunningWrite_DeMeasuredValue_ImageProcess_FreeRunning
# define Rte_Write_PpImageProcess_FaultCondition_60ms_DeBKP Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FaultCondition_60ms_DeBKP
# define Rte_Write_PpImageProcess_FaultCondition_60ms_DeFailureCondition Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FaultCondition_60ms_DeFailureCondition
# define Rte_Write_PpImageProcess_FaultCondition_60ms_DeFaultCondition Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FaultCondition_60ms_DeFaultCondition
# define Rte_Write_PpImageProcess_FaultCondition_60ms_DeTriggerCondition Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FaultCondition_60ms_DeTriggerCondition
# define Rte_Write_PpImageProcess_FreeRunning2EyeQCom_100ms_DeImageProcess2EyeQ Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FreeRunning2EyeQCom_100ms_DeImageProcess2EyeQ
# define Rte_Write_PpImageProcess_FreeSpace_60ms_DeBKP Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FreeSpace_60ms_DeBKP
# define Rte_Write_PpImageProcess_FreeSpace_60ms_DeFreeSpcae Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_FreeSpace_60ms_DeFreeSpcae
# define Rte_Write_PpImageProcess_HSC4_AVM_50ms_DeIECU_HSC4_FrP08_SV Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_HSC4_AVM_50ms_DeIECU_HSC4_FrP08_SV
# define Rte_Write_PpImageProcess_Location_100ms_DeFLocation Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_Location_100ms_DeFLocation
# define Rte_Write_PpImageProcess_Obstacle_60ms_DeObstacle Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_Obstacle_60ms_DeObstacle
# define Rte_Write_PpImageProcess_Position_init_status_60ms_DePosition_init_status Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_Position_init_status_60ms_DePosition_init_status
# define Rte_Write_PpImageProcess_ReswevedA2B_50ms_DeReservedA2B Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_ReswevedA2B_50ms_DeReservedA2B
# define Rte_Write_PpImageProcess_Status_20ms_DeStatus Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_Status_20ms_DeStatus
# define Rte_Write_PpImageProcess_SVCameraFail_60ms_DeSurroundCameraFail Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_SVCameraFail_60ms_DeSurroundCameraFail
# define Rte_Write_PpImageProcess_SVData_Upload_status_300ms_DeSVData_Upload_status Rte_Write_CtApImageProcess_FreeRunning_PpImageProcess_SVData_Upload_status_300ms_DeSVData_Upload_status
# define Rte_Write_PpPdImageProcess_FreeRunningWrite_DeImageProcess_FreeRunning_Normal Rte_Write_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningWrite_DeImageProcess_FreeRunning_Normal
# define Rte_Write_PpPdImageProcess_FreeRunningWrite_DeImageProcess_Normal Rte_Write_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningWrite_DeImageProcess_Normal
# define Rte_Write_PpPdImageProcess_FreeRunningWrite_DeImageProcessSec_Normal Rte_Write_CtApImageProcess_FreeRunning_PpPdImageProcess_FreeRunningWrite_DeImageProcessSec_Normal


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (C/S invocation)
 *********************************************************************************************************************/

# define Rte_Call_PpEventHandling_GetEventStatus Rte_Call_CtApImageProcess_FreeRunning_PpEventHandling_GetEventStatus
# define Rte_Call_PpEventHandling_SetEventStatus Rte_Call_CtApImageProcess_FreeRunning_PpEventHandling_SetEventStatus
# define Rte_Call_PpPFServer_SetSwcInfo Rte_Call_CtApImageProcess_FreeRunning_PpPFServer_SetSwcInfo
# define Rte_Call_PpPFServer_TS_GetEgtTime Rte_Call_CtApImageProcess_FreeRunning_PpPFServer_TS_GetEgtTime
# define Rte_Call_PpPFServer_TS_GetEgtTimestamp Rte_Call_CtApImageProcess_FreeRunning_PpPFServer_TS_GetEgtTimestamp
# define Rte_Call_PpPFServer_TS_GetRemainingTimeBudget Rte_Call_CtApImageProcess_FreeRunning_PpPFServer_TS_GetRemainingTimeBudget
# define Rte_Call_PpSomeipEvent_SomeipReceive Rte_Call_CtApImageProcess_FreeRunning_PpSomeipEvent_SomeipReceive
# define Rte_Call_PpSomeipEvent_SomeipSend Rte_Call_CtApImageProcess_FreeRunning_PpSomeipEvent_SomeipSend



#endif /* #ifndef RTE_CORE */ 

/** \brief Pre runnable wrapper: Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_100ms_Start,
 * Executed prior to RTE API call
 * \param void
 * \return void
 **/
extern FUNC(void, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_CODE) Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_100ms_Start(void); /* PRQA S 0850, 3449, 3451 */ /* MD_MSR_19.8 */

/** \brief Post runnable wrapper: Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_100ms_Return,
 * Executed after RTE API call
 * \param void
 * \return void
 **/
extern FUNC(void, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_CODE) Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_100ms_Return(void); /* PRQA S 0850, 3449, 3451 */ /* MD_MSR_19.8 */

/** \brief Pre runnable wrapper: Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_20ms_Start,
 * Executed prior to RTE API call
 * \param void
 * \return void
 **/
extern FUNC(void, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_CODE) Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_20ms_Start(void); /* PRQA S 0850, 3449, 3451 */ /* MD_MSR_19.8 */

/** \brief Post runnable wrapper: Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_20ms_Return,
 * Executed after RTE API call
 * \param void
 * \return void
 **/
extern FUNC(void, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_CODE) Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_20ms_Return(void); /* PRQA S 0850, 3449, 3451 */ /* MD_MSR_19.8 */

/** \brief Pre runnable wrapper: Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_60ms_Start,
 * Executed prior to RTE API call
 * \param void
 * \return void
 **/
extern FUNC(void, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_CODE) Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_60ms_Start(void); /* PRQA S 0850, 3449, 3451 */ /* MD_MSR_19.8 */

/** \brief Post runnable wrapper: Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_60ms_Return,
 * Executed after RTE API call
 * \param void
 * \return void
 **/
extern FUNC(void, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_CODE) Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_60ms_Return(void); /* PRQA S 0850, 3449, 3451 */ /* MD_MSR_19.8 */

/** \brief Pre runnable wrapper: Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_Config_100ms_Start,
 * Executed prior to RTE API call
 * \param void
 * \return void
 **/
extern FUNC(void, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_CODE) Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_Config_100ms_Start(void); /* PRQA S 0850, 3449, 3451 */ /* MD_MSR_19.8 */

/** \brief Post runnable wrapper: Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_Config_100ms_Return,
 * Executed after RTE API call
 * \param void
 * \return void
 **/
extern FUNC(void, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_CODE) Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_Config_100ms_Return(void); /* PRQA S 0850, 3449, 3451 */ /* MD_MSR_19.8 */

/** \brief Pre runnable wrapper: Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_RS_10ms_Start,
 * Executed prior to RTE API call
 * \param void
 * \return void
 **/
extern FUNC(void, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_CODE) Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_RS_10ms_Start(void); /* PRQA S 0850, 3449, 3451 */ /* MD_MSR_19.8 */

/** \brief Post runnable wrapper: Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_RS_10ms_Return,
 * Executed after RTE API call
 * \param void
 * \return void
 **/
extern FUNC(void, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_CODE) Rte_Runnable_CtApImageProcess_FreeRunning_RCtApImageProcessFree_RS_10ms_Return(void); /* PRQA S 0850, 3449, 3451 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: RCtApImageProcessFree_Init
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed once after the RTE is started
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RCtApImageProcessFree_Init RCtApImageProcessFree_Init
/** \brief Runnable entity: RCtApImageProcessFree_Init,
 * Executed once after the RTE is started
 * \param void
 * \return void
 **/
extern FUNC(void, RTE_CTAPIMAGEPROCESS_FREERUNNING_APPL_CODE) RCtApImageProcessFree_Init(void); /* PRQA S 0850, 3449, 3451 */ /* MD_MSR_19.8 */

/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#ifndef RTE_CORE
  # define RTE_E_PiPFServer_MW_E_TIMESTAMP (16U)
#endif /* ifndef RTE_CORE */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

/* begin Fileversion check */
#ifndef RTE_CORE
# ifndef SKIP_MAGIC_NUMBER
#  ifdef RTE_MAGIC_NUMBER
#   if RTE_MAGIC_NUMBER != 0
#    error "The magic number is different. Please check time and date of the generated RTE files!"
#   endif
#  else
#   define RTE_MAGIC_NUMBER 0
#  endif  /* RTE_MAGIC_NUMBER */
# endif  /* SKIP_MAGIC_NUMBER */
#endif /* ifndef RTE_CORE */
/* end Fileversion check */

#endif /* RTE_CTAPIMAGEPROCESS_FREERUNNING_H */
