/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/ITA/TS02/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-10-20T10:22:01
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
  kcg_bool /* OperationalScenario::Accelerometers */ Accelerometers;
  kcg_bool /* OperationalScenario::SunSensor */ SunSensor;
  kcg_bool /* OperationalScenario::Reactionwheels */ Reactionwheels;
  kcg_bool /* OperationalScenario::MagneticTorquers */ MagneticTorquers;
  kcg_bool /* OperationalScenario::upDateSw */ upDateSw;
  kcg_bool /* OperationalScenario::Gyroscopes */ Gyroscopes;
} inC_OperationalScenario;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* OperationalScenario::StartLaunchPhase */ StartLaunchPhase;
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
  kcg_real /* OperationalScenario::AcRdValue */ AcRdValue;
  kcg_int /* OperationalScenario::ColorIndex5 */ ColorIndex5;
  kcg_bool /* OperationalScenario::LaunchVisible */ LaunchVisible;
  kcg_real /* OperationalScenario::FuelMeter */ FuelMeter;
  kcg_int /* OperationalScenario::FuelMeterGraphic */ FuelMeterGraphic;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init3;
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* TestActuators::ActuatorsStatus */ ActuatorsStatus_1;
  kcg_bool /* TestActuators::MagneticTorquers */ MagneticTorquers_1;
  kcg_bool /* TestActuators::Reactionwheels */ Reactionwheels_1;
  kcg_bool /* ReadSensors::SensorsStatus */ SensorsStatus_6;
  kcg_bool /* ReadSensors::SunSensor */ SunSensor_6;
  kcg_bool /* ReadSensors::Accelerometers */ Accelerometers_6;
  kcg_bool /* ReadSensors::Gyroscopes */ Gyroscopes_6;
  kcg_bool /* OperationalScenario::OpPhases::Launch::AtAcquisition */ AtAcquisition_OpPhases_Launch;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L37 */ _L37_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L25 */ _L25_OpPhases_AttitudeAcquisition;
  SSM_ST_OpPhases /* OperationalScenario::OpPhases */ OpPhases_state_nxt;
  kcg_bool /* OperationalScenario::OpPhases */ OpPhases_reset_act;
  kcg_bool /* OperationalScenario::OpPhases */ OpPhases_reset_nxt;
  kcg_bool /* OperationalScenario::LaunchPhase */ LaunchPhase;
  kcg_bool /* OperationalScenario::ApertarBotao */ ApertarBotao;
  kcg_bool /* OperationalScenario::GroundVisibleLocal */ GroundVisibleLocal;
  kcg_bool /* OperationalScenario::upDateSw */ rem_upDateSw;
  kcg_bool /* OperationalScenario::MagneticTorquers */ rem_MagneticTorquers;
  kcg_bool /* OperationalScenario::Reactionwheels */ rem_Reactionwheels;
  kcg_bool /* OperationalScenario::SunSensor */ rem_SunSensor;
  kcg_bool /* OperationalScenario::Accelerometers */ rem_Accelerometers;
  kcg_real /* OperationalScenario::picLocation */ rem_picLocation;
  kcg_bool /* OperationalScenario::takePict */ rem_takePict;
  kcg_int /* OperationalScenario::AttitudeReference */ rem_AttitudeReference;
  kcg_int /* OperationalScenario::Telemetry */ rem_Telemetry;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_OpPhases /* OperationalScenario::OpPhases */ OpPhases_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TestActuators::_L2 */ _L2_1;
  kcg_bool /* TestActuators::_L3 */ _L3_1;
  kcg_bool /* TestActuators::_L4 */ _L4_1;
  kcg_bool /* ReadSensors::_L2 */ _L2_6;
  kcg_bool /* ReadSensors::_L4 */ _L4_6;
  kcg_bool /* ReadSensors::_L5 */ _L5_6;
  kcg_bool /* ReadSensors::_L6 */ _L6_6;
  kcg_bool /* ReadSensors::_L8 */ _L8_6;
  kcg_real /* OperationalScenario::OpPhases::Ground::_L42 */ _L42_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L41 */ _L41_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L39 */ _L39_OpPhases_Ground;
  kcg_real /* OperationalScenario::OpPhases::Ground::_L37 */ _L37_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L35 */ _L35_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L34 */ _L34_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L33 */ _L33_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L32 */ _L32_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L31 */ _L31_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L30 */ _L30_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L27 */ _L27_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L24 */ _L24_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L23 */ _L23_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L22 */ _L22_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L16 */ _L16_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L15 */ _L15_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground::_L13 */ _L13_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L8 */ _L8_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L7 */ _L7_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L4 */ _L4_OpPhases_Ground;
  kcg_int /* OperationalScenario::OpPhases::Ground::_L2 */ _L2_OpPhases_Ground;
  kcg_bool /* OperationalScenario::OpPhases::Ground */ Ground_weakb_clock_OpPhases;
  kcg_real /* OperationalScenario::OpPhases::Launch::_L34 */ _L34_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L33 */ _L33_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L31 */ _L31_OpPhases_Launch;
  kcg_real /* OperationalScenario::OpPhases::Launch::_L29 */ _L29_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L28 */ _L28_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L12 */ _L12_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L13 */ _L13_OpPhases_Launch;
  kcg_bool /* OperationalScenario::OpPhases::Launch::_L14 */ _L14_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L7 */ _L7_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L10 */ _L10_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L6 */ _L6_OpPhases_Launch;
  kcg_int /* OperationalScenario::OpPhases::Launch::_L5 */ _L5_OpPhases_Launch;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L40 */ _L40_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L39 */ _L39_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L31 */ _L31_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L32 */ _L32_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L35 */ _L35_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L36 */ _L36_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L30 */ _L30_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L28 */ _L28_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L21 */ _L21_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L22 */ _L22_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L23 */ _L23_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L24 */ _L24_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L26 */ _L26_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::AttitudeAcquisition::_L27 */ _L27_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L16 */ _L16_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L17 */ _L17_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::_L19 */ _L19_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L12 */ _L12_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L13 */ _L13_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L14 */ _L14_OpPhases_AttitudeAcquisition;
  kcg_int /* OperationalScenario::OpPhases::AttitudeAcquisition::_L15 */ _L15_OpPhases_AttitudeAcquisition;
  kcg_bool /* OperationalScenario::OpPhases::AttitudeAcquisition::AtNormalPhaseLocal */ AtNormalPhaseLocal_OpPhases_AttitudeAcquisition;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L21 */ _L21_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L19 */ _L19_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L18 */ _L18_OpPhases_NormalPhase;
  kcg_real /* OperationalScenario::OpPhases::NormalPhase::_L13 */ _L13_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L10 */ _L10_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L11 */ _L11_OpPhases_NormalPhase;
  kcg_bool /* OperationalScenario::OpPhases::NormalPhase::_L12 */ _L12_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L5 */ _L5_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L6 */ _L6_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L7 */ _L7_OpPhases_NormalPhase;
  kcg_int /* OperationalScenario::OpPhases::NormalPhase::_L8 */ _L8_OpPhases_NormalPhase;
  SSM_ST_OpPhases /* OperationalScenario::OpPhases */ OpPhases_state_sel;
  SSM_TR_OpPhases /* OperationalScenario::OpPhases */ OpPhases_fired_strong;
  SSM_TR_OpPhases /* OperationalScenario::OpPhases */ OpPhases_fired;
  kcg_int /* OperationalScenario::color */ color;
  kcg_int /* OperationalScenario::color_2 */ color_2;
  kcg_int /* OperationalScenario::color3 */ color3;
  kcg_int /* OperationalScenario::color4 */ color4;
  kcg_bool /* OperationalScenario::AttitudeVisibleLocal */ AttitudeVisibleLocal;
  kcg_bool /* OperationalScenario::NormalPhaseVisibleLocal */ NormalPhaseVisibleLocal;
  kcg_bool /* OperationalScenario::AtAcquisition */ AtAcquisition;
  kcg_bool /* OperationalScenario::GyroscopesLocal */ GyroscopesLocal;
  kcg_bool /* OperationalScenario::AccelerometersLocal */ AccelerometersLocal;
  kcg_bool /* OperationalScenario::PowerLocal */ PowerLocal;
  kcg_bool /* OperationalScenario::SunSensorLocal */ SunSensorLocal;
  kcg_bool /* OperationalScenario::ReactionwheelsLocal */ ReactionwheelsLocal;
  kcg_bool /* OperationalScenario::MagneticTorquersLocal */ MagneticTorquersLocal;
  kcg_real /* OperationalScenario::AcRdValueLocal */ AcRdValueLocal;
  kcg_bool /* OperationalScenario::AtNormalPhase */ AtNormalPhase;
  kcg_int /* OperationalScenario::color_5 */ color_5;
  kcg_bool /* OperationalScenario::LaunchVisibleLocal */ LaunchVisibleLocal;
  kcg_real /* OperationalScenario::FuelMeterLocal */ FuelMeterLocal;
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
  kcg_bool /* OperationalScenario::_L31 */ _L31;
  kcg_bool /* OperationalScenario::_L32 */ _L32;
  kcg_bool /* OperationalScenario::_L34 */ _L34;
  kcg_bool /* OperationalScenario::_L36 */ _L36;
  kcg_real /* OperationalScenario::_L38 */ _L38;
  kcg_int /* OperationalScenario::_L41 */ _L41;
  kcg_bool /* OperationalScenario::_L42 */ _L42;
  kcg_real /* OperationalScenario::_L43 */ _L43;
  kcg_real /* OperationalScenario::_L44 */ _L44;
  kcg_real /* OperationalScenario::_L45 */ _L45;
  kcg_int /* OperationalScenario::_L46 */ _L46;
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
** Generation date: 2014-10-20T10:22:01
*************************************************************$ */

