/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Projeto SPOT/git/si-lansab/Satellite/TS02/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-22T23:48:34
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
/* fr */
typedef kcg_real fr;

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2014-11-22T23:48:34
*************************************************************$ */

