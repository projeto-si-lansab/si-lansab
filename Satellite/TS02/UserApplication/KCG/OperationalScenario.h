/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Paulo/ITA/237/TS02/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-09-19T10:39:11
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
  kcg_bool /* OperationalScenario::Emit2CDS */ Emit2CDS;
  kcg_int /* OperationalScenario::ColorIndex */ ColorIndex;
  kcg_int /* OperationalScenario::ColorIndex2 */ ColorIndex2;
  kcg_int /* OperationalScenario::ColorIndex3 */ ColorIndex3;
  kcg_int /* OperationalScenario::ColorIndex4 */ ColorIndex4;
  kcg_bool /* OperationalScenario::GroundVisible */ GroundVisible;
  kcg_bool /* OperationalScenario::LaunchVisible */ LaunchVisible;
  kcg_bool /* OperationalScenario::AttitudeVisible */ AttitudeVisible;
  kcg_bool /* OperationalScenario::NormalPhaseVisible */ NormalPhaseVisible;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
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
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_NPhase_OpPhases_NormalPhase /* OperationalScenario::OpPhases::NormalPhase::NPhase */ NPhase_clock_OpPhases_NormalPhase;
  SSM_ST_OpPhases /* OperationalScenario::OpPhases */ OpPhases_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* ReadSensors::_L1 */ _L1_3;
  kcg_bool /* ReadSensors::SensorsActive */ SensorsActive_3;
  kcg_bool /* ReadSensors::_L1 */ _L1_5;
  kcg_bool /* ReadSensors::SensorsActive */ SensorsActive_5;
  kcg_bool /* controlAlgorithm::_L1 */ _L1_14;
  kcg_bool /* controlAlgorithm::ControlAlgorithmActive */ ControlAlgorithmActive_1;
  kcg_bool /* upDateSw::_L1 */ _L1_1;
  kcg_bool /* upDateSw::Updating */ Updating_1;
  kcg_bool /* controlAlgorithm::_L1 */ _L1_23;
  kcg_bool /* controlAlgorithm::ControlAlgorithmActive */ ControlAlgorithmActive_2;
  kcg_bool /* upDateSw::_L1 */ _L1_2;
  kcg_bool /* upDateSw::Updating */ Updating_2;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L16 */ _L16_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L15 */ _L15_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L14 */ _L14_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L13 */ _L13_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L8 */ _L8_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L7 */ _L7_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L4 */ _L4_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L2 */ _L2_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L1 */ _L1_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L11 */ _L11_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L12 */ _L12_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L13 */ _L13_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L14 */ _L14_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L7 */ _L7_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L10 */ _L10_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L6 */ _L6_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L5 */ _L5_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L3 */ _L3_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L2 */ _L2_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L1 */ _L1_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L16 */ _L16_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L17 */ _L17_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L18 */ _L18_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L19 */ _L19_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L12 */ _L12_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L13 */ _L13_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L14 */ _L14_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L15 */ _L15_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L5 */ _L528_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L3 */ _L329_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L2 */ _L230_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L1 */ _L131_OpPhases_AttitudeAcquisition;
  SSM_TR_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_fired_OpPhases_AttitudeAcquisition;
  SSM_TR_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  SSM_ST_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_state_act_OpPhases_AttitudeAcquisition;
  SSM_ST_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_state_sel_OpPhases_AttitudeAcquisition;
  SSM_ST_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ _6_atacquisition_clock_OpPhases_AttitudeAcquisition;
  SSM_ST_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_clock_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L1 */ _L1_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L2 */ _L2_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L3 */ _L3_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L4 */ _L4_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L5 */ _L5_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L1 */ _L125_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L2 */ _L224_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L3 */ _L323_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L4 */ _L422_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L5 */ _L521_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L6 */ _L6_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L7 */ _L7_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L8 */ _L8_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L9 */ _L9_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L10 */ _L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L1 */ _L127_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L2 */ _L226_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L9 */ _L9_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L10 */ _L10_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L11 */ _L11_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L12 */ _L12_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L5 */ _L5_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L6 */ _L6_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L7 */ _L7_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L8 */ _L8_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L2 */ _L2_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L1 */ _L1_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::pMode */ pMode_OpPhases_NormalPhase;
  SSM_TR_NPhase_OpPhases_NormalPhase /* OperationalScenario::OpPhases::NormalPhase::NPhase */ NPhase_fired_OpPhases_NormalPhase;
  SSM_TR_NPhase_OpPhases_NormalPhase /* OperationalScenario::OpPhases::NormalPhase::NPhase */ NPhase_fired_strong_OpPhases_NormalPhase;
  SSM_ST_NPhase_OpPhases_NormalPhase /* OperationalScenario::OpPhases::NormalPhase::NPhase */ NPhase_state_act_OpPhases_NormalPhase;
  SSM_ST_NPhase_OpPhases_NormalPhase /* OperationalScenario::OpPhases::NormalPhase::NPhase */ NPhase_state_sel_OpPhases_NormalPhase;
  SSM_ST_NPhase_OpPhases_NormalPhase /* OperationalScenario::OpPhases::NormalPhase::NPhase */ _5_NPhase_clock_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L1 */ _L1_OpPhases_NormalPhase_NPhase_SafeMode;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L2 */ _L2_OpPhases_NormalPhase_NPhase_SafeMode;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L3 */ _L3_OpPhases_NormalPhase_NPhase_SafeMode;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L4 */ _L4_OpPhases_NormalPhase_NPhase_SafeMode;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L5 */ _L5_OpPhases_NormalPhase_NPhase_SafeMode;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload */ Payload_weakb_clock_OpPhases_NormalPhase_NPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L1 */ _L111_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L2 */ _L210_OpPhases_NormalPhase_NPhase_Payload;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L3 */ _L39_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L4 */ _L48_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L5 */ _L57_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L6 */ _L6_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L7 */ _L7_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L8 */ _L8_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L9 */ _L9_OpPhases_NormalPhase_NPhase_Payload;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L10 */ _L10_OpPhases_NormalPhase_NPhase_Payload;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L1 */ _L120_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L2 */ _L219_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L3 */ _L318_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L4 */ _L417_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L5 */ _L516_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L6 */ _L615_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L7 */ _L714_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L8 */ _L813_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L9 */ _L912_OpPhases_NormalPhase_NPhase_AttControl;
  SSM_ST_OpPhases /* OperationalScenario::OpPhases */ OpPhases_state_sel;
  SSM_TR_OpPhases /* OperationalScenario::OpPhases */ OpPhases_fired_strong;
  SSM_TR_OpPhases /* OperationalScenario::OpPhases */ OpPhases_fired;
  kcg_bool /* OperationalScenario::ApertarBotao */ ApertarBotao;
  kcg_int /* OperationalScenario::color */ color;
  kcg_int /* OperationalScenario::color_2 */ color_2;
  kcg_int /* OperationalScenario::color3 */ color3;
  kcg_int /* OperationalScenario::color4 */ color4;
  kcg_bool /* OperationalScenario::GroundVisibleLocal */ GroundVisibleLocal;
  kcg_bool /* OperationalScenario::LaunchVisibleLocal */ LaunchVisibleLocal;
  kcg_bool /* OperationalScenario::AttitudeVisibleLocal */ AttitudeVisibleLocal;
  kcg_bool /* OperationalScenario::NormalPhaseVisibleLocal */ NormalPhaseVisibleLocal;
  kcg_bool /* OperationalScenario::_L1 */ _L1;
  kcg_bool /* OperationalScenario::_L3 */ _L3;
  kcg_bool /* OperationalScenario::_L4 */ _L4;
  kcg_bool /* OperationalScenario::_L6 */ _L6;
  kcg_bool /* OperationalScenario::_L7 */ _L7;
  kcg_bool /* OperationalScenario::_L8 */ _L8;
  kcg_bool /* OperationalScenario::_L9 */ _L9;
  kcg_bool /* OperationalScenario::_L11 */ _L11;
  kcg_int /* OperationalScenario::_L12 */ _L12;
  kcg_int /* OperationalScenario::_L13 */ _L13;
  kcg_int /* OperationalScenario::_L14 */ _L14;
  kcg_int /* OperationalScenario::_L15 */ _L15;
  kcg_bool /* OperationalScenario::_L16 */ _L16;
  kcg_bool /* OperationalScenario::_L18 */ _L18;
  kcg_bool /* OperationalScenario::_L19 */ _L19;
  kcg_bool /* OperationalScenario::_L20 */ _L20;
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
** Generation date: 2014-09-19T10:39:11
*************************************************************$ */

