/**************************************************************************************
 * Copyright (C) 2019 TTTech Automotive GmbH. All rights reserved
 * Schoenbrunnerstrasse 7, A-1040 Wien, Austria. office\tttech-automotive.com
 **************************************************************************************/
/**
 *
 *  \file
 *      BusSignals_status.h
 *  \brief
 *      Defines macros to extract PDU and E2E status information for the data elements
 **************************************************************************************/

#ifndef BUSSIGNALS_STATUS_H_
#define BUSSIGNALS_STATUS_H_

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

/* PRQA S 3453, 0779 EOF                                                */
/* 3453: Allow Function-like macros. They are needed in this instance   */
/* 0779: Allow usage of names from model longer than 31 chars.          */
typedef enum _e_CpApCom_E2ESM_State
  { E2ESTATE_NOT_INITIALIZED = 0
  , E2ESTATE_MONITORING_INACTIV = 1
  , E2ESTATE_INITIALIZED = 2
  , E2ESTATE_NORMAL = 3
  , E2ESTATE_SAFESTATE = 4
  , E2ESTATE_SAFESTATEPERMANENT = 5
  } e_CpApCom_E2ESM_State;
typedef enum _e_CpApCom_E2ESM_PwRes
  { E2ERES_INITIAL = 0
  , E2ERES_OK = 1
  , E2ERES_OKSOMELOST = 2
  , E2ERES_NONEWDATA = 3
  , E2ERES_REPEATED = 4
  , E2ERES_WRONGSEQUENCE = 5
  , E2ERES_WRONGCRC = 6
  , E2ERES_BLOCKID_ERROR = 7
  } e_CpApCom_E2ESM_Res;
typedef enum _e_pdusm_PDU_State
  { PDUSTATE_NEVER_RECEIVED = 0
  , PDUSTATE_NOT_UPDATED = 1
  , PDUSTATE_IS_UPDATED = 2
  , PDUSTATE_TIMEOUT = 3
  , PDUSTATE_NEVER_RECEIVED_TIMEOUT = 4
  } e_pdusm_PDU_State;
/* --- Macros to extract status information --- */
#define GET_E2ESTATE(state) (((state)>>4u)&0x0Fu)
#define GET_E2ERES(state) ((state)&0x0Fu)
#define GET_PDUSTATE(state) ((state)&0x07u)
#define GET_PDUDTC(state) (((state)>>3u)&0x01u)
/* --- signals in PDU SG_TPMS_HSC3_FrP02, status from .DeStatus_TPMS_HSC3_FrP02 --- */
#define GET_STATUS_DeTPMS_HSC3_FrP02_SG_TPMS_HSC3_FrP02(ds) ((ds).DeStatus_TPMS_HSC3_FrP02)
#define GET_STATUS_DeTPMS_HSC3_FrP02_FLTireStsHSC4(ds) ((ds).DeStatus_TPMS_HSC3_FrP02)
#define GET_STATUS_DeTPMS_HSC3_FrP02_FRTireStsHSC4(ds) ((ds).DeStatus_TPMS_HSC3_FrP02)
#define GET_STATUS_DeTPMS_HSC3_FrP02_RLTireStsHSC4(ds) ((ds).DeStatus_TPMS_HSC3_FrP02)
#define GET_STATUS_DeTPMS_HSC3_FrP02_RRTireStsHSC4(ds) ((ds).DeStatus_TPMS_HSC3_FrP02)

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* BUSSIGNALS_STATUS_H_ */

