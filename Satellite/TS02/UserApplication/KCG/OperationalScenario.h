/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/ITA/TS02/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-09-18T22:42:16
*************************************************************$ */
#ifndef _OperationalScenario_H_
#define _OperationalScenario_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* OperationalScenario::Power */ Power;
  kcg_int /* OperationalScenario::Telemetry */ Telemetry;
  kcg_int /* OperationalScenario::AttitudeReference */ AttitudeReference;
  kcg_bool /* OperationalScenario::takePict */ takePict;
  kcg_real /* OperationalScenario::picLocation */ picLocation;
  kcg_bool /* OperationalScenario::PassarFaseBtn */ PassarFaseBtn;
} inC_OperationalScenario;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* OperationalScenario::StartLaunchPhase */ StartLaunchPhase;
  kcg_bool /* OperationalScenario::StartAtAcquisition */ StartAtAcquisition;
  kcg_bool /* OperationalScenario::safeMode */ safeMode;
  kcg_bool /* OperationalScenario::RefAttitude */ RefAttitude;
  kcg_bool /* OperationalScenario::NormalPhase */ NormalPhase;
  kcg_bool /* OperationalScenario::payMode */ payMode;
  kcg_real /* OperationalScenario::picture */ picture;
  kcg_bool /* OperationalScenario::Layer1Active */ Layer1Active;
  kcg_bool /* OperationalScenario::Layer1Visible */ Layer1Visible;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init3;
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* OperationalScenario::OpPhases::Ground::SM2 */ SM2_reset_nxt_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::SM2 */ SM2_reset_act_OpPhases_Ground;
  SSM_ST_SM2_OpPhases_Ground /* OperationalScenario::OpPhases::Ground::SM2 */ SM2_state_nxt_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::NPhase */ NPhase_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::RefAtt */ RefAtt_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::sMode */ sMode_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  SSM_ST_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::sMode */ sMode_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase */ NPhase_reset_nxt_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase */ NPhase_reset_act_OpPhases_NormalPhase;
  SSM_ST_NPhase_OpPhases_NormalPhase /* OperationalScenario::OpPhases::NormalPhase::NPhase */ NPhase_state_nxt_OpPhases_NormalPhase;
  SSM_ST_OpPhases /* OperationalScenario::OpPhases */ OpPhases_state_nxt;
  kcg_bool /* OperationalScenario::OpPhases */ OpPhases_reset_act;
  kcg_bool /* OperationalScenario::OpPhases */ OpPhases_reset_nxt;
  kcg_bool /* OperationalScenario::LaunchPhase */ LaunchPhase;
  kcg_bool /* OperationalScenario::AtAcquisition */ AtAcquisition;
  kcg_bool /* OperationalScenario::NPhase */ NPhase;
  kcg_real /* OperationalScenario::picLocation */ rem_picLocation;
  kcg_bool /* OperationalScenario::takePict */ rem_takePict;
  kcg_int /* OperationalScenario::AttitudeReference */ rem_AttitudeReference;
  kcg_int /* OperationalScenario::Telemetry */ rem_Telemetry;
  kcg_bool /* OperationalScenario::Power */ rem_Power;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_OperationalScenario;

/* ===========  node initialization and cycle functions  =========== */
/* OperationalScenario */
extern void OperationalScenario(
  inC_OperationalScenario *inC,
  outC_OperationalScenario *outC);

extern void OperationalScenario_reset(outC_OperationalScenario *outC);

#endif /* _OperationalScenario_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** OperationalScenario.h
** Generation date: 2014-09-18T22:42:16
*************************************************************$ */

