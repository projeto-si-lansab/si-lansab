/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config E:/GitHub/si-lansab/Satellite/TS05/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-10-21T04:11:26
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

/* OperationMode */
typedef enum {
  OPMODE_GROUND_SAFE,
  OPMODE_GROUND_SUPPORT,
  OPMODE_LAUNCH,
  OPMODE_ATTITUDE_CONTROL,
  OPMODE_ATTITUDE_SAFE,
  OPMODE_NORMAL_SAFE,
  OPMODE_NORMAL_ATTITUDE,
  OPMODE_NORMAL_PAYLOAD
} OperationMode;
/* us11::Initialization */
typedef enum {
  SSM_TR_no_trans_Initialization,
  SSM_TR_Off_1_Initialization,
  SSM_TR_Ejected_1_Initialization,
  SSM_TR_Initializing_1_Initialization,
  SSM_TR_Initializing_2_Initialization,
  SSM_TR_Initializing_3_Initialization,
  SSM_TR_Fail_1_Initialization
} SSM_TR_Initialization;
/* us11::Initialization */
typedef enum {
  SSM_st_Off_Initialization,
  SSM_st_Ejected_Initialization,
  SSM_st_Initializing_Initialization,
  SSM_st_Initialized_Initialization,
  SSM_st_Fail_Initialization
} SSM_ST_Initialization;
/* rhuan::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_Validando_1_SM1,
  SSM_TR_Validando_2_SM1,
  SSM_TR_Funcionando_1_SM1,
  SSM_TR_Erro_1_SM1
} SSM_TR_SM1;
/* rhuan::SM1 */
typedef enum {
  SSM_st_Validando_SM1,
  SSM_st_Funcionando_SM1,
  SSM_st_Erro_SM1
} SSM_ST_SM1;
/* us14::AutoVerifyUS14 */
typedef enum {
  SSM_TR_no_trans_AutoVerifyUS14,
  SSM_TR_Ativo_1_AutoVerifyUS14,
  SSM_TR_NaoAtivo_1_AutoVerifyUS14
} SSM_TR_AutoVerifyUS14;
/* us14::AutoVerifyUS14 */
typedef enum {
  SSM_st_Ativo_AutoVerifyUS14,
  SSM_st_NaoAtivo_AutoVerifyUS14
} SSM_ST_AutoVerifyUS14;
/* us14::StateCamera */
typedef enum {
  SSM_TR_no_trans_StateCamera,
  SSM_TR_Off_1_StateCamera,
  SSM_TR_Off_2_StateCamera,
  SSM_TR_Off_3_StateCamera,
  SSM_TR_TurningOn_1_StateCamera,
  SSM_TR_TurningOn_2_StateCamera,
  SSM_TR_TurningOn_3_StateCamera,
  SSM_TR_On_1_StateCamera,
  SSM_TR_On_2_StateCamera,
  SSM_TR_On_3_StateCamera,
  SSM_TR_TurningOff_1_StateCamera,
  SSM_TR_TurningOff_2_StateCamera,
  SSM_TR_TurningOff_3_StateCamera,
  SSM_TR_Fail_1_StateCamera
} SSM_TR_StateCamera;
/* us14::StateCamera */
typedef enum {
  SSM_st_Off_StateCamera,
  SSM_st_TurningOn_StateCamera,
  SSM_st_On_StateCamera,
  SSM_st_TurningOff_StateCamera,
  SSM_st_Fail_StateCamera
} SSM_ST_StateCamera;
/* us14::StatePropellers */
typedef enum {
  SSM_TR_no_trans_StatePropellers,
  SSM_TR_Off_1_StatePropellers,
  SSM_TR_Off_2_StatePropellers,
  SSM_TR_TurningOn_1_StatePropellers,
  SSM_TR_TurningOn_2_StatePropellers,
  SSM_TR_On_1_StatePropellers,
  SSM_TR_On_2_StatePropellers,
  SSM_TR_TurningOff_1_StatePropellers,
  SSM_TR_TurningOff_2_StatePropellers
} SSM_TR_StatePropellers;
/* us14::StatePropellers */
typedef enum {
  SSM_st_Off_StatePropellers,
  SSM_st_TurningOn_StatePropellers,
  SSM_st_On_StatePropellers,
  SSM_st_TurningOff_StatePropellers
} SSM_ST_StatePropellers;
/* us14::StateHorizonSensor */
typedef enum {
  SSM_TR_no_trans_StateHorizonSensor,
  SSM_TR_Off_1_StateHorizonSensor,
  SSM_TR_Off_2_StateHorizonSensor,
  SSM_TR_Off_3_StateHorizonSensor,
  SSM_TR_TurningOn_1_StateHorizonSensor,
  SSM_TR_TurningOn_2_StateHorizonSensor,
  SSM_TR_TurningOn_3_StateHorizonSensor,
  SSM_TR_On_1_StateHorizonSensor,
  SSM_TR_On_2_StateHorizonSensor,
  SSM_TR_On_3_StateHorizonSensor,
  SSM_TR_TurningOff_1_StateHorizonSensor,
  SSM_TR_TurningOff_2_StateHorizonSensor,
  SSM_TR_TurningOff_3_StateHorizonSensor,
  SSM_TR_Fail_1_StateHorizonSensor
} SSM_TR_StateHorizonSensor;
/* us14::StateHorizonSensor */
typedef enum {
  SSM_st_Off_StateHorizonSensor,
  SSM_st_TurningOn_StateHorizonSensor,
  SSM_st_On_StateHorizonSensor,
  SSM_st_TurningOff_StateHorizonSensor,
  SSM_st_Fail_StateHorizonSensor
} SSM_ST_StateHorizonSensor;
/* us14::ManualOperation */
typedef enum {
  SSM_TR_no_trans_ManualOperation,
  SSM_TR_Enabled_1_ManualOperation,
  SSM_TR_Enabled_2_ManualOperation,
  SSM_TR_Disabled_1_ManualOperation,
  SSM_TR_Disabled_2_ManualOperation
} SSM_TR_ManualOperation;
/* us14::ManualOperation */
typedef enum {
  SSM_st_Enabled_ManualOperation,
  SSM_st_Disabled_ManualOperation
} SSM_ST_ManualOperation;
/* us14::StateGyroscope */
typedef enum {
  SSM_TR_no_trans_StateGyroscope,
  SSM_TR_Off_1_StateGyroscope,
  SSM_TR_Off_2_StateGyroscope,
  SSM_TR_Off_3_StateGyroscope,
  SSM_TR_On_1_StateGyroscope,
  SSM_TR_On_2_StateGyroscope,
  SSM_TR_On_3_StateGyroscope,
  SSM_TR_TurningOff_1_StateGyroscope,
  SSM_TR_TurningOff_2_StateGyroscope,
  SSM_TR_TurningOff_3_StateGyroscope,
  SSM_TR_Fail_1_StateGyroscope,
  SSM_TR_TurningOn_1_StateGyroscope,
  SSM_TR_TurningOn_2_StateGyroscope,
  SSM_TR_TurningOn_3_StateGyroscope
} SSM_TR_StateGyroscope;
/* us14::StateGyroscope */
typedef enum {
  SSM_st_Off_StateGyroscope,
  SSM_st_On_StateGyroscope,
  SSM_st_TurningOff_StateGyroscope,
  SSM_st_Fail_StateGyroscope,
  SSM_st_TurningOn_StateGyroscope
} SSM_ST_StateGyroscope;
/* ts05::DebugOrDeploy */
typedef enum {
  SSM_TR_no_trans_DebugOrDeploy,
  SSM_TR_Debug_1_DebugOrDeploy
} SSM_TR_DebugOrDeploy;
/* ts05::DebugOrDeploy */
typedef enum {
  SSM_st_Debug_DebugOrDeploy,
  SSM_st_Deploy_DebugOrDeploy
} SSM_ST_DebugOrDeploy;
typedef kcg_char array_char_13[13];

/* String_ES */
typedef array_char_13 String_ES;

typedef kcg_char array_char_16[16];

/* String_SS */
typedef array_char_16 String_SS;

#ifndef kcg_copy_array_char_13
#define kcg_copy_array_char_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_13)))
#endif /* kcg_copy_array_char_13 */

#ifndef kcg_copy_array_char_16
#define kcg_copy_array_char_16(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_16)))
#endif /* kcg_copy_array_char_16 */

#ifndef kcg_comp_array_char_13
extern kcg_bool kcg_comp_array_char_13(
  array_char_13 *kcg_c1,
  array_char_13 *kcg_c2);
#endif /* kcg_comp_array_char_13 */

#ifndef kcg_comp_array_char_16
extern kcg_bool kcg_comp_array_char_16(
  array_char_16 *kcg_c1,
  array_char_16 *kcg_c2);
#endif /* kcg_comp_array_char_16 */

#define kcg_comp_String_ES kcg_comp_array_char_13

#define kcg_copy_String_ES kcg_copy_array_char_13

#define kcg_comp_String_SS kcg_comp_array_char_16

#define kcg_copy_String_SS kcg_copy_array_char_16

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2014-10-21T04:11:26
*************************************************************$ */

