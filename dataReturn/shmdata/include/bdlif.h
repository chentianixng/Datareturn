/******************************************************************************* 
 * Copyright (C) 2018 TTTech Computertechnik AG Automotive. All rights reserved*
 * Schoenbrunnerstrasse 7, A-1040 Wien, Austria. office\tttech-automotive.com  * 
 ******************************************************************************/
/**
 *  \file 
 *    bdlif.h
 *  \brief 
 *    BDL Interface. An ASIL-D facade for the BDL Client Unit
 *
 *  \version
 *    14-May-2018 (BKR) BDL restriction in debug mode
 *		  	   
 */
 
#ifndef BDLIF_H_
#define BDLIF_H_

#include "Std_Types.h"
/**
 * \defgroup BDLIF_FunctionSpecifications BDL Interface
 * \brief BDL Interface. An ASIL-D facade for the BDL Client Unit
 * \{
 */

#ifdef __cplusplus
extern "C" {
#endif

/**
 * \brief BDL Transfer State
 *
 * BDL download/upload transfer state
 */
typedef struct {
    uint8 * pBuffer; /**< \brief buffer containing the block data */
    uint32  ID;      /**< \brief operation ID related to the SW-C */
    uint32  Offset;  /**< \brief offset where chunks are transferred to/from */
    uint32  BufferSize; /**< \brief buffer size */
    uint32  DataLength; /**< \brief length of the remaining data in buffer */
} BdlState;

/**
 * \brief BDL_QM_FrameReceived ASIL-D wrapper
 *
 * This function calls the BDL_QM_FrameReceived if and only if the debug mode is active.
 *
 * \param ID BDL_QM_FrameReceived ID
 * \param Frame BDL_QM_FrameReceived frame
 * \param Buffer BDL_QM_FrameReceived buffer
 * \param Buffer_Size BDL_QM_FrameReceived buffer_size
 * \return the return value from the BDL_QM_FrameReceived or 0 if debug mode not active
 */

uint8 BDLIF_FrameReceived (uint32 ID, const uint8 *frame, const uint8 *buffer, uint32 buffer_size);
/**
 * \brief BDL_QM_StartUpload ASIL-D wrapper
 *
 * This function calls the BDL_QM_StartUpload if and only if the debug mode is active.
 *
 * \param ID BDL_QM_StartUpload ID
 * \param State BDL_QM_StartUpload state
 * \param Buffer BDL_QM_StartUpload buffer
 * \param Buffer_Size BDL_QM_StartUpload buffer_size
 * \return the return value from the BDL_QM_StartUpload or 0 if debug mode not active
 */
uint8 BDLIF_StartUpload (uint32 ID, BdlState *state, const uint8 *buffer, uint32 buffer_size);

/**
 * \brief BDL_QM_ContinueUpload ASIL-D wrapper
 *
 * This function calls the BDL_QM_ContinueUpload if and only if the debug mode is active.
 *
 * \param State BDL_QM_ContinueUpload state
 * \param Frame BDL_QM_ContinueUpload frame
 * \return the return value from the BDL_QM_ContinueUpload or 0 if debug mode not active
 */
uint8 BDLIF_ContinueUpload (BdlState *state, const uint8 *frame);

/**
 * \}
 */

#ifdef __cplusplus
}
#endif
#endif
