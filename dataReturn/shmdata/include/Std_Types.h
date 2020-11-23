/******************************************************************************* 
 * Copyright (C) 2014 TTTech Automotive GmbH. All rights reserved              *
 * Schoenbrunnerstrasse 7, A-1040 Wien, Austria. office\tttech-automotive.com  * 
 ******************************************************************************/
/**
 *  \file 
 *      Std_Types.h
 *  \brief 
 *       Definition of Standard Types
 *
 *  \version
 *       17-Sep-2014  (eROF) Creation - take over from VxWorks
 *       05-Nov-2014  (eROF) QAC - Coding Guidelines 
 *		  	   
 */

#ifndef STD_TYPES_H__
#define STD_TYPES_H__

/**************************************************************************
 * INCLUDES
 **************************************************************************/

# include "Platform_Types.h"
# include "Compiler.h"

/**************************************************************************
 *  GLOBAL CONSTANT MACROS
 **************************************************************************/


# define STD_HIGH     1u /* Physical state 5V or 3.3V */
# define STD_LOW      0u /* Physical state 0V */

# define STD_ACTIVE   1u /* Logical state active */
# define STD_IDLE     0u /* Logical state idle */

# define STD_ON       1u
# define STD_OFF      0u

/**************************************************************************
 *  GLOBAL FUNCTION MACROS
 **************************************************************************/


/**************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **************************************************************************/

/* This typedef has been added for OSEK compliance */
# ifndef STATUSTYPEDEFINED
#  define STATUSTYPEDEFINED
#  define E_OK      0u
typedef unsigned char StatusType; /* OSEK compliance */
# endif

# define E_NOT_OK  1u

#  define E_PENDING 2u

typedef uint8 Std_ReturnType;

typedef struct
{
   uint16 vendorID;
   uint16 moduleID;
   uint8  instanceID;
   uint8  sw_major_version;
   uint8  sw_minor_version;
   uint8  sw_patch_version;
} Std_VersionInfoType;

/**************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **************************************************************************/


/**************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **************************************************************************/


#endif  /* STD_TYPES_H__ */

/**************************************************************************
 *  END OF FILE: Std_Types.h
 **************************************************************************/
