/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GitHub/si-lansab/Satellite/TS03/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-18T21:20:02
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef unsigned char kcg_char;
#endif /* kcg_char */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* TS03Battery::SM1 */
typedef enum {
  _9_SSM_TR_no_trans_SM1,
  _8_SSM_TR_Empty_1_SM1,
  _7_SSM_TR_Full_1_SM1,
  _6_SSM_TR_Half_1_SM1,
  _5_SSM_TR_Half_2_SM1,
  SSM_TR_Low_1_SM1,
  SSM_TR_Low_2_SM1
} _10_SSM_TR_SM1;
/* TS03Battery::SM1 */
typedef enum {
  _3_SSM_st_Empty_SM1,
  _2_SSM_st_Full_SM1,
  _1_SSM_st_Half_SM1,
  SSM_st_Low_SM1
} _4_SSM_ST_SM1;
/* TS03Memory::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_Empty_1_SM1,
  SSM_TR_Full_1_SM1,
  SSM_TR_LowLevel_1_SM1,
  SSM_TR_LowLevel_2_SM1,
  SSM_TR_Half_1_SM1,
  SSM_TR_Half_2_SM1
} SSM_TR_SM1;
/* TS03Memory::SM1 */
typedef enum {
  SSM_st_Empty_SM1,
  SSM_st_Full_SM1,
  SSM_st_LowLevel_SM1,
  SSM_st_Half_SM1
} SSM_ST_SM1;
#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2014-11-18T21:20:02
*************************************************************$ */

