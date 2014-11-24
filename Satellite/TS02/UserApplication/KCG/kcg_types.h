/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/ITA/TS02_2Sprint/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-23T22:42:18
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

/* truthtables::TruthTableValues */
typedef enum {
  T_truthtables,
  F_truthtables,
  X_truthtables
} TruthTableValues_truthtables;
/* OperationalScenario::OpPhases */
typedef enum {
  SSM_TR_no_trans_OpPhases,
  SSM_TR_Ground_1_OpPhases,
  SSM_TR_Ground_2_OpPhases,
  SSM_TR_Launch_1_OpPhases,
  SSM_TR_AttitudeAcquisition_1_OpPhases
} SSM_TR_OpPhases;
/* OperationalScenario::OpPhases */
typedef enum {
  SSM_st_Ground_OpPhases,
  SSM_st_Launch_OpPhases,
  SSM_st_AttitudeAcquisition_OpPhases,
  SSM_st_NormalPhase_OpPhases
} SSM_ST_OpPhases;
typedef struct { kcg_int k; kcg_real f; } struct__5707;

/* lut::LutIndex */
typedef struct__5707 LutIndex_lut;

typedef kcg_int array_int_4[4];

typedef struct { kcg_int idx; array_int_4 items; } struct__5715;

typedef kcg_real array_real_4[4];

typedef struct { kcg_int idx; array_real_4 items; } struct__5723;

#ifndef kcg_copy_struct__5707
#define kcg_copy_struct__5707(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5707)))
#endif /* kcg_copy_struct__5707 */

#ifndef kcg_copy_struct__5715
#define kcg_copy_struct__5715(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5715)))
#endif /* kcg_copy_struct__5715 */

#ifndef kcg_copy_struct__5723
#define kcg_copy_struct__5723(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5723)))
#endif /* kcg_copy_struct__5723 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_real_4
#define kcg_copy_array_real_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_4)))
#endif /* kcg_copy_array_real_4 */

#ifndef kcg_comp_struct__5707
extern kcg_bool kcg_comp_struct__5707(
  struct__5707 *kcg_c1,
  struct__5707 *kcg_c2);
#endif /* kcg_comp_struct__5707 */

#ifndef kcg_comp_struct__5715
extern kcg_bool kcg_comp_struct__5715(
  struct__5715 *kcg_c1,
  struct__5715 *kcg_c2);
#endif /* kcg_comp_struct__5715 */

#ifndef kcg_comp_struct__5723
extern kcg_bool kcg_comp_struct__5723(
  struct__5723 *kcg_c1,
  struct__5723 *kcg_c2);
#endif /* kcg_comp_struct__5723 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_real_4
extern kcg_bool kcg_comp_array_real_4(
  array_real_4 *kcg_c1,
  array_real_4 *kcg_c2);
#endif /* kcg_comp_array_real_4 */

#define kcg_comp_LutIndex_lut kcg_comp_struct__5707

#define kcg_copy_LutIndex_lut kcg_copy_struct__5707

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2014-11-23T22:42:18
*************************************************************$ */

