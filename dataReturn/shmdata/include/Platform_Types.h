/******************************************************************************* 
 * Copyright (C) 2014 TTTech Automotive GmbH. All rights reserved              *
 * Schoenbrunnerstrasse 7, A-1040 Wien, Austria. office\tttech-automotive.com  * 
 ******************************************************************************/
/**
 *  \file 
 *      Platform_Types.h
 *  \brief 
 *       Definition of Platform Types for the ARM-Linux Cross-Compiler
 *
 *  \version
 *       17-Sep-2014  (eROF) Creation - take over from VxWorks
 *       05-Nov-2014  (eROF) QAC - Coding Guidelines 
 *       23-Feb-2015  (eSDJ) Added XCP related defines and data types
 *		  	   
 */

#ifndef PLATFORM_TYPES_H__
#define PLATFORM_TYPES_H__

/**************************************************************************
 * INCLUDES
 **************************************************************************/

/**************************************************************************
 *  GLOBAL CONSTANT MACROS
 **************************************************************************/

#define CPU_TYPE_8       8
#define CPU_TYPE_16      16
#define CPU_TYPE_32      32

#define MSB_FIRST        0    /* big endian bit ordering */
#define LSB_FIRST        1    /* little endian bit ordering */

#define HIGH_BYTE_FIRST  0    /* big endian byte ordering */
#define LOW_BYTE_FIRST   1    /* little endian byte ordering */

#ifndef TRUE
   #define TRUE   1u
#endif

#ifndef FALSE
   #define FALSE  0u
#endif

#define CPU_TYPE         CPU_TYPE_32

#define CPU_BIT_ORDER    LSB_FIRST        /*little endian bit ordering*/

#define CPU_BYTE_ORDER   LOW_BYTE_FIRST   /*little endian byte ordering*/

#ifndef C_CPUTYPE_32BIT
#define C_CPUTYPE_32BIT
#endif


#ifndef V_CPUTYPE_BITARRAY_32BIT
#define V_CPUTYPE_BITARRAY_32BIT
#endif


#ifndef C_CPUTYPE_LITTLEENDIAN
#define C_CPUTYPE_LITTLEENDIAN
#endif


#ifndef C_CPUTYPE_BITORDER_LSB2MSB
#define C_CPUTYPE_BITORDER_LSB2MSB
#endif


#ifndef V_DISABLE_USE_DUMMY_FUNCTIONS
#define V_DISABLE_USE_DUMMY_FUNCTIONS
#endif


#ifndef V_ENABLE_USE_DUMMY_STATEMENT
#define V_ENABLE_USE_DUMMY_STATEMENT
#endif

/**************************************************************************
 *  GLOBAL FUNCTION MACROS
 **************************************************************************/



/**************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **************************************************************************/

typedef unsigned char         boolean;       /*        TRUE .. FALSE         */

typedef signed char           sint8;         /*        -128 .. +127          */
typedef unsigned char         uint8;         /*           0 .. 255           */
typedef signed short          sint16;        /*      -32768 .. +32767        */
typedef unsigned short        uint16;        /*           0 .. 65535         */
typedef signed int            sint32;        /* -2147483648 .. +2147483647   */
typedef unsigned int          uint32;        /*           0 .. 4294967295    */

                                            /*  9223372036854775807           */
typedef unsigned long long    uint64;         /*           0 ..                 */
typedef signed long long      sint64;

typedef signed char           sint8_least;   /* At least 7 bit + 1 bit sign   */
typedef unsigned char         uint8_least;   /* At least 8 bit                */
typedef signed short          sint16_least;  /* At least 15 bit + 1 bit sign  */
typedef unsigned short        uint16_least;  /* At least 16 bit               */
typedef signed int            sint32_least;  /* At least 31 bit + 1 bit sign  */
typedef unsigned int          uint32_least;  /* At least 32 bit               */

typedef float                 float32;
typedef double                float64;

/**************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **************************************************************************/


/**************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **************************************************************************/


#endif  /* PLATFORM_TYPES_H__ */

/**************************************************************************
 *  END OF FILE: Platform_Types.h
 **************************************************************************/
