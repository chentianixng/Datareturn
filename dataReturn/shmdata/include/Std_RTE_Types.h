/**************************************************************************
 * Copyright (C) 2015 TTTech Automotive GmbH. All rights reserved.
 * Confidential proprietary
 * Schoenbrunnerstrasse 7, A--1040 Wien, Austria. office@tttech-automotive.com
 *  *
 * Name
 *    Std_RTE_Types.h
 *
 * Purpose
 *   Definition of Standard RTE Types for SWCs. 
 *
 * Revisions
  *    18-Mai-205  (EEB) Creation
 **************************************************************************/

#ifndef STD_RTE_TYPES_H__
#define STD_RTE_TYPES_H__
/**************************************************************************
 * INCLUDES
 **************************************************************************/
# include "Platform_Types.h"

/**************************************************************************
 *  GLOBAL CONSTANT MACROS and GLOBAL DATA TYPES
 **************************************************************************/

#ifndef Rte_TypeDef_Dt_BOOL
  #  define Rte_TypeDef_Dt_BOOL
  typedef uint8 Dt_BOOL; 
  # define Dt_BOOL_LowerLimit (0U)
  # define Dt_BOOL_UpperLimit (1U)
#endif /* Rte_TypeDef_Dt_BOOL_01 */
 
#ifndef Rte_TypeDef_Dt_UINT8_1_0
  # define Rte_TypeDef_Dt_UINT8_1_0
  typedef uint8 Dt_UINT8_1_0;
  # define Dt_UINT8_1_0_LowerLimit (0U)
  # define Dt_UINT8_1_0_UpperLimit (255U)
#endif /* Rte_TypeDef_Dt_UINT8_1_0 */
  
#ifndef Rte_TypeDef_Dt_UINT16_1_0
  #  define Rte_TypeDef_Dt_UINT16_1_0
  typedef uint16 Dt_UINT16_1_0;
  #  define Dt_UINT16_1_0_LowerLimit (0U)
  #  define Dt_UINT16_1_0_UpperLimit (65535U)
#endif /* Rte_TypeDef_Dt_UINT16_1_0 */

#ifndef Rte_TypeDef_Dt_UINT32_1_0
  #  define Rte_TypeDef_Dt_UINT32_1_0
  typedef uint32 Dt_UINT32_1_0;
  #  define Dt_UINT32_1_0_LowerLimit (0U)
  #  define Dt_UINT32_1_0_UpperLimit (4294967295U)
#endif /* Rte_TypeDef_Dt_UINT32_1_0 */ 
 
#ifndef Rte_TypeDef_Dt_SINT8_1_0
  #  define Rte_TypeDef_Dt_SINT8_1_0
  typedef sint8 Dt_SINT8_1_0;
  #  define Dt_SINT8_1_0_LowerLimit (-128)
  #  define Dt_SINT8_1_0_UpperLimit (127)
#endif /* Rte_TypeDef_Dt_SINT8_1_0 */

#ifndef Rte_TypeDef_Dt_SINT16_1_0
  #  define Rte_TypeDef_Dt_SINT16_1_0
  typedef sint16 Dt_SINT16_1_0;
  #  define Dt_SINT16_1_0_LowerLimit (-32768)
  #  define Dt_SINT16_1_0_UpperLimit (32767)
#endif /* Rte_TypeDef_Dt_SINT16_1_0 */

#ifndef Rte_TypeDef_Dt_SINT32_1_0
  #  define Rte_TypeDef_Dt_SINT32_1_0
  typedef sint32 Dt_SINT32_1_0;
  #  define Dt_SINT32_1_0_LowerLimit (-2147483648)
  #  define Dt_SINT32_1_0_UpperLimit (2147483647)
#endif /* Rte_TypeDef_Dt_SINT32_1_0 */
 

#ifndef Rte_TypeDef_Dt_FLOAT32
  #  define Rte_TypeDef_Dt_FLOAT32
  typedef float32 Dt_FLOAT32;
#endif /* Rte_TypeDef_Dt_FLOAT32 */

#endif  /* STD_RTE_TYPES_H__ */

/**************************************************************************
 *  END OF FILE: Std_RTE_Types.h
 **************************************************************************/
