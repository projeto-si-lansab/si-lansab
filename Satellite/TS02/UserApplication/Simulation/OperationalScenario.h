/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Pierre Mattei/Documents/Aeropace Engineering/Doutorado/disciplinas/2014/Cunha/projeto/2sdSprint/TS02/UserApplication/Simulation\kcg_s2c_config.txt
** Generation date: 2014-09-29T18:26:24
*************************************************************$ */
#ifndef _OperationalScenario_H_
#define _OperationalScenario_H_

#include "kcg_types.h"
#include "ReadSensors.h"
#include "TestActuators.h"
#include "controlAlgorithm.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* OperationalScenario::Power */ Power;
  kcg_int /* OperationalScenario::Telemetry */ Telemetry;
  kcg_int /* OperationalScenario::AttitudeReference */ AttitudeReference;
  kcg_bool /* OperationalScenario::takePict */ takePict;
  kcg_real /* OperationalScenario::picLocation */ picLocation;
  kcg_bool /* OperationalScenario::PassarFaseBtn */ PassarFaseBtn;
  kcg_bool /* OperationalScenario::Gyroscopes */ Gyroscopes;
  kcg_bool /* OperationalScenario::Accelerometers */ Accelerometers;
  kcg_bool /* OperationalScenario::SunSensor */ SunSensor;
  kcg_bool /* OperationalScenario::Reactionwheels */ Reactionwheels;
  kcg_bool /* OperationalScenario::MagneticTorquers */ MagneticTorquers;
  kcg_bool /* OperationalScenario::upDateSw */ upDateSw;
} inC_OperationalScenario;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* OperationalScenario::StartLaunchPhase */ StartLaunchPhase;
  kcg_bool /* OperationalScenario::StartAtAcquisition */ StartAtAcquisition;
  kcg_bool /* OperationalScenario::safeMode */ safeMode;
  kcg_bool /* OperationalScenario::RefAttitude */ RefAttitude;
  kcg_bool /* OperationalScenario::StartNormalPhase */ StartNormalPhase;
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
  kcg_bool /* OperationalScenario::AttitudeVisible */ AttitudeVisible;
  kcg_bool /* OperationalScenario::NormalPhaseVisible */ NormalPhaseVisible;
  kcg_bool /* OperationalScenario::SafeM */ SafeM;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init5;
  kcg_bool init4;
  kcg_bool init3;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* OperationalScenario::OpPhases::Launch::AtAcquisition */ AtAcquisition_OpPhases_Launch;
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
  kcg_bool /* OperationalScenario::ApertarBotao */ ApertarBotao;
  kcg_bool /* OperationalScenario::GroundVisibleLocal */ GroundVisibleLocal;
  kcg_bool /* OperationalScenario::AtAcquisition */ AtAcquisition;
  kcg_bool /* OperationalScenario::NPhase */ NPhase;
  kcg_bool /* OperationalScenario::upDateSw */ rem_upDateSw;
  kcg_bool /* OperationalScenario::MagneticTorquers */ rem_MagneticTorquers;
  kcg_bool /* OperationalScenario::Reactionwheels */ rem_Reactionwheels;
  kcg_bool /* OperationalScenario::SunSensor */ rem_SunSensor;
  kcg_bool /* OperationalScenario::Accelerometers */ rem_Accelerometers;
  kcg_bool /* OperationalScenario::Gyroscopes */ rem_Gyroscopes;
  kcg_real /* OperationalScenario::picLocation */ rem_picLocation;
  kcg_bool /* OperationalScenario::takePict */ rem_takePict;
  kcg_int /* OperationalScenario::AttitudeReference */ rem_AttitudeReference;
  kcg_int /* OperationalScenario::Telemetry */ rem_Telemetry;
  kcg_bool /* OperationalScenario::Power */ rem_Power;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_TestActuators /* 7 */ Context_7;
  outC_ReadSensors /* 11 */ Context_11;
  outC_controlAlgorithm /* 2 */ Context_2;
  outC_TestActuators /* 6 */ _2_Context_6;
  outC_ReadSensors /* 10 */ Context_10;
  outC_controlAlgorithm /* 1 */ _1_Context_1;
  outC_TestActuators /* 5 */ Context_5;
  outC_ReadSensors /* 9 */ Context_9;
  outC_TestActuators /* 4 */ Context_4;
  outC_ReadSensors /* 8 */ Context_8;
  outC_TestActuators /* 1 */ Context_1;
  outC_ReadSensors /* 6 */ Context_6;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_clock_OpPhases_AttitudeAcquisition;
  SSM_ST_NPhase_OpPhases_NormalPhase /* OperationalScenario::OpPhases::NormalPhase::NPhase */ NPhase_clock_OpPhases_NormalPhase;
  SSM_ST_OpPhases /* OperationalScenario::OpPhases */ OpPhases_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L27 */ _L27_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L26 */ _L26_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L25 */ _L25_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L24 */ _L24_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L23 */ _L23_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L22 */ _L22_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L21 */ _L21_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L20 */ _L20_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L19 */ _L19_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L18 */ _L18_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L16 */ _L16_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L15 */ _L15_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L13 */ _L13_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L8 */ _L8_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L7 */ _L7_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L4 */ _L4_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L2 */ _L2_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L1 */ _L1_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground */ Ground_weakb_clock_OpPhases;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L28 */ _L28_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L12 */ _L12_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L13 */ _L13_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L14 */ _L14_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L7 */ _L7_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L10 */ _L10_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L6 */ _L6_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L5 */ _L5_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L20 */ _L2024_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L16 */ _L1625_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L17 */ _L1726_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L19 */ _L1927_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L12 */ _L1228_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L13 */ _L1329_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L14 */ _L1430_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L15 */ _L1531_OpPhases_AttitudeAcquisition;
  SSM_TR_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_fired_OpPhases_AttitudeAcquisition;
  SSM_TR_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  SSM_ST_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_state_act_OpPhases_AttitudeAcquisition;
  SSM_ST_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ atacquisition_state_sel_OpPhases_AttitudeAcquisition;
  SSM_ST_atacquisition_OpPhases_AttitudeAcquisition /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ _7_atacquisition_clock_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L6 */ _L6_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L10 */ _L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L12 */ _L12_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L21 */ _L21_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L20 */ _L20_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L19 */ _L19_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L18 */ _L18_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L17 */ _L17_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L16 */ _L16_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L15 */ _L15_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L14 */ _L14_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L13 */ _L13_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L22 */ _L22_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L23 */ _L23_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L13 */ _L1323_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L12 */ _L1222_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L11 */ _L11_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L10 */ _L1021_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L8 */ _L8_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L7 */ _L7_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L6 */ _L620_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L5 */ _L5_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L15 */ _L1519_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L18 */ _L1818_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
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
  SSM_ST_NPhase_OpPhases_NormalPhase /* OperationalScenario::OpPhases::NormalPhase::NPhase */ _6_NPhase_clock_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L4 */ _L4_OpPhases_NormalPhase_NPhase_SafeMode;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload */ Payload_weakb_clock_OpPhases_NormalPhase_NPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L9 */ _L9_OpPhases_NormalPhase_NPhase_Payload;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L10 */ _L10_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L19 */ _L19_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L18 */ _L18_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L17 */ _L17_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L16 */ _L16_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L15 */ _L15_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L14 */ _L14_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L13 */ _L13_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L12 */ _L12_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L11 */ _L11_OpPhases_NormalPhase_NPhase_Payload;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L2 */ _L2_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L9 */ _L917_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L17 */ _L1716_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L16 */ _L1615_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L15 */ _L1514_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L14 */ _L1413_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L13 */ _L1312_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L12 */ _L1211_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L11 */ _L1110_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L10 */ _L109_OpPhases_NormalPhase_NPhase_AttControl;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L18 */ _L188_OpPhases_NormalPhase_NPhase_AttControl;
  SSM_ST_OpPhases /* OperationalScenario::OpPhases */ OpPhases_state_sel;
  SSM_TR_OpPhases /* OperationalScenario::OpPhases */ OpPhases_fired_strong;
  SSM_TR_OpPhases /* OperationalScenario::OpPhases */ OpPhases_fired;
  kcg_int /* OperationalScenario::color */ color;
  kcg_int /* OperationalScenario::color_2 */ color_2;
  kcg_int /* OperationalScenario::color3 */ color3;
  kcg_int /* OperationalScenario::color4 */ color4;
  kcg_bool /* OperationalScenario::AttitudeVisibleLocal */ AttitudeVisibleLocal;
  kcg_bool /* OperationalScenario::NormalPhaseVisibleLocal */ NormalPhaseVisibleLocal;
  kcg_bool /* OperationalScenario::_L7 */ _L7;
  kcg_bool /* OperationalScenario::_L8 */ _L8;
  kcg_bool /* OperationalScenario::_L9 */ _L9;
  kcg_bool /* OperationalScenario::_L11 */ _L11;
  kcg_int /* OperationalScenario::_L12 */ _L12;
  kcg_int /* OperationalScenario::_L13 */ _L13;
  kcg_int /* OperationalScenario::_L14 */ _L14;
  kcg_int /* OperationalScenario::_L15 */ _L15;
  kcg_bool /* OperationalScenario::_L16 */ _L16;
  kcg_bool /* OperationalScenario::_L19 */ _L19;
  kcg_bool /* OperationalScenario::_L20 */ _L20;
  kcg_bool /* OperationalScenario::_L22 */ _L22;
  kcg_bool /* OperationalScenario::_L26 */ _L26;
  kcg_bool /* OperationalScenario::_L27 */ _L27;
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
** Generation date: 2014-09-29T18:26:24
*************************************************************$ */

