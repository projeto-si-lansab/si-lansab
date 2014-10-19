#ifndef _SP_FUNCTION_H_E300C8B4_166B_4D8B_A4D9_8249868D2635_
#define _SP_FUNCTION_H_E300C8B4_166B_4D8B_A4D9_8249868D2635_

#include "SP_Types.h"

typedef struct CInterfaceDescription
{
   void*    pvFunc;           /* pointer to C function */
   USIGN16  usCFuncNum;       /* access number of C function */
   USIGN16  usCFuncID;        /* unique ID of C function */
   USIGN16  usUsedStackSize;  /* stack size used by C function */
   USIGN8   ucMajorVersion;   /* major version number of C function */
   USIGN8   ucMinorVersion;   /* minor version number of C function */
   USIGN8   ucReserve[4];     /* reserve */
} CInterfaceDescription;   /* used in CInterfaceStructure (size: 16 byte) */

typedef struct CInterfaceStructure
{
   USIGN32                 ulVersionOfTable;
   USIGN32                 ulInterfaceElements;
   CInterfaceDescription*  pzCIfDescription;
} CInterfaceStructure;

CInterfaceStructure* SpxGetInterfaceStructure();

#endif	/* _SP_FUNCTION_H_E300C8B4_166B_4D8B_A4D9_8249868D2635_ */
