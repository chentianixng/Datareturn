/******************************************************************************* 
 * Copyright (C) 2014 TTTech Automotive GmbH. All rights reserved              *
 * Schoenbrunnerstrasse 7, A-1040 Wien, Austria. office\tttech-automotive.com  * 
 ******************************************************************************/
/**
 *  \file 
 *       Compiler.h
 *  \brief 
 *       This file provides the AUTOSAR compiler abstraction for
 *       the ARM-Linux Cross-Compiler
 *
 *  \version
 *       17-Sep-2014  (eROF) Creation - take over from VxWorks
 *       05-Nov-2014  (eROF) QAC - Coding Guidelines 
 *		  	   
 */

/*
    Error Messages: 
        PRQA 3409: The replacement list of function-like macro 'FUNC_P2CONST', 'FUNC_P2VAR', ... is not enclosed in ().
        PRQA 3410: Macro parameter not enclosed in ()
        PRQA 3453: A function could probably be used instead of this function-like macro.
    Justification: 
        PRQA 349,PRQA 3410: Compile does not allow enclosing
        PRGY 3453: Macro has better performanse compared with function
*/
 
#ifndef COMPILER_H__
#define COMPILER_H__

/***************************************************************************
 * INCLUDES
 **************************************************************************/

# include "Compiler_Cfg.h"

/***************************************************************************
 *  GLOBAL CONSTANT MACROS
 **************************************************************************/

/* AUTOMATIC used for the declaration of local pointers */
# define AUTOMATIC

/* TYPEDEF shall be used within type definitions, where no memory qualifier can be specified.*/
# define TYPEDEF

/* STATIC define for abstraction of compiler keyword static*/
#  define STATIC     static

/* NULL_PTR define with a void pointer to zero definition*/
# ifndef NULL_PTR
#  define NULL_PTR  ((void *)0)
# endif

/* INLINE  define for abstraction of the keyword inline*/
# define INLINE     inline

/* LOCAL_INLINE define for abstraction of the keyword inline in functions with "static" scope.
   Different compilers may require a different sequence of the keywords "static" and "inline"
   if this is supported at all. */
# define LOCAL_INLINE    static inline

/* FUNC macro for the declaration and definition of functions, that ensures correct syntax of function declarations
   rettype     return type of the function
   memclass    classification of the function itself*/
# define FUNC(rettype, memclass) rettype memclass /* PRQA S 3410,3453 */ 

/* FUNC_P2CONST macro for declaration and definition of functions returning a pointer to a constant, that ensures
     correct syntax of function declarations.
   rettype     return type of the function
   ptrclass    defines the classification of the pointers distance
   memclass    classification of the function itself*/
# define FUNC_P2CONST(rettype, ptrclass, memclass) const rettype ptrclass * memclass /* PRQA S 3410,3453,3409  */

/* FUNC_P2VAR macro for the declaration and definition of functions returning a pointer to a variable, that ensures
     correct syntax of function declarations
   rettype     return type of the function
   ptrclass    defines the classification of the pointers distance
   memclass    classification of the function itself*/
# define FUNC_P2VAR(rettype, ptrclass, memclass) rettype ptrclass * memclass /* PRQA S 3410,3453,3409  */

/* P2VAR macro for the declaration and definition of pointers in RAM, pointing to variables
   ptrtype     type of the referenced variable memclass
   memclass    classification of the pointers variable itself
   ptrclass    defines the classification of the pointers distance
 */
# define P2VAR(ptrtype, memclass, ptrclass) memclass ptrtype ptrclass * /* PRQA S 3410,3453,3409  */

/* P2CONST macro for the declaration and definition of pointers in RAM pointing to constants
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
# define P2CONST(ptrtype, memclass, ptrclass) const memclass ptrtype ptrclass * /* PRQA S 3410,3453,3409  */

/* CONSTP2VAR macro for the declaration and definition of constant pointers accessing variables
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
# define CONSTP2VAR(ptrtype, memclass, ptrclass) memclass ptrtype ptrclass * const /* PRQA S 3410,3453,3409  */

/* CONSTP2CONST macro for the declaration and definition of constant pointers accessing constants
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
# define CONSTP2CONST(ptrtype, memclass, ptrclass) const memclass ptrtype ptrclass * const /* PRQA S 3410,3453,3409  */

/* CONSTP2FUNC macro for the type definition of pointers to functions
   rettype     return type of the function
   ptrclass    defines the classification of the pointer distance
   fctname     function name respectively name of the defined type
 */
# define CONSTP2FUNC(rettype, ptrclass, fctname) rettype (ptrclass * const fctname) /* PRQA S 3410, 3453 */ /* MD_Compiler_19.10 */

/* P2FUNC macro for the type definition of pointers to functions
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance
   fctname     function name respectivly name of the defined type
 */
# define P2FUNC(rettype, ptrclass, fctname) rettype (ptrclass * fctname) /* PRQA S 3410,3453 */

/* CONST macro for the declaration and definition of constants
   type        type of the constant
   memclass    classification of the constant itself
 */
# define CONST(type, memclass) const type memclass /* PRQA S 3410,3453 */

/* VAR macro for the declaration and definition of variables
   vartype        type of the variable
   memclass    classification of the variable itself
 */
# define VAR(vartype, memclass) vartype memclass /* PRQA S 3410,3453 */

#endif  /* COMPILER_H__ */

/***************************************************************************
 *  END OF FILE: Compiler.h
 **************************************************************************/
