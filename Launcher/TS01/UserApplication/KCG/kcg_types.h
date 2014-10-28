/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/github/si-lansab/Launcher/TS01/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-10-28T00:42:05
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

/* Main::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_Phase1_1_SM1,
  SSM_TR_Phase1_2_SM1,
  SSM_TR_Phase1_3_SM1,
  SSM_TR_Phase2_1_SM1,
  SSM_TR_Phase2_2_SM1,
  SSM_TR_Phase2_3_SM1,
  SSM_TR_Phase3_1_SM1,
  SSM_TR_Phase3_2_SM1,
  SSM_TR_Phase3_3_SM1,
  SSM_TR_Final_1_SM1,
  SSM_TR_Final_2_SM1,
  SSM_TR_Final_3_SM1,
  SSM_TR_Ground_1_SM1
} SSM_TR_SM1;
/* Main::SM1 */
typedef enum {
  SSM_st_Phase1_SM1,
  SSM_st_Phase2_SM1,
  SSM_st_AutoDestroy_SM1,
  SSM_st_Phase3_SM1,
  SSM_st_Final_SM1,
  SSM_st_Ground_SM1,
  SSM_st_Launched_SM1
} SSM_ST_SM1;
typedef kcg_char array_char_20[20];

/* T_String */
typedef array_char_20 T_String;

#ifndef kcg_copy_array_char_20
#define kcg_copy_array_char_20(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_20)))
#endif /* kcg_copy_array_char_20 */

#ifndef kcg_comp_array_char_20
extern kcg_bool kcg_comp_array_char_20(
  array_char_20 *kcg_c1,
  array_char_20 *kcg_c2);
#endif /* kcg_comp_array_char_20 */

#define kcg_comp_T_String kcg_comp_array_char_20

#define kcg_copy_T_String kcg_copy_array_char_20

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2014-10-28T00:42:05
*************************************************************$ */

