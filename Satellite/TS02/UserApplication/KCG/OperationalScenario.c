/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Projeto SPOT/git/si-lansab/Satellite/TS02/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-22T23:48:34
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OperationalScenario.h"

void OperationalScenario_reset(outC_OperationalScenario *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
}

/* OperationalScenario */
void OperationalScenario(
  inC_OperationalScenario *inC,
  outC_OperationalScenario *outC)
{
  /* TestActuators::ActuatorsStatus */ kcg_bool last_ActuatorsStatus_1;
  /* TestActuators::MagneticTorquers */ kcg_bool last_MagneticTorquers_1;
  /* TestActuators::Reactionwheels */ kcg_bool last_Reactionwheels_1;
  /* ReadSensors::SensorsStatus */ kcg_bool last_SensorsStatus_6;
  /* ReadSensors::SunSensor */ kcg_bool last_SunSensor_6;
  /* ReadSensors::Accelerometers */ kcg_bool last_Accelerometers_6;
  /* ReadSensors::Gyroscopes */ kcg_bool last_Gyroscopes_6;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _81_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _80_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _79_OpPhases_state_nxt;
  /* OperationalScenario::LatSec */ kcg_int _78_LatSec;
  /* OperationalScenario::LatMin */ kcg_int _77_LatMin;
  /* OperationalScenario::LatDeg */ kcg_int _76_LatDeg;
  /* OperationalScenario::LongitudeSec */ kcg_int _75_LongitudeSec;
  /* OperationalScenario::LongitudeMin */ kcg_int _74_LongitudeMin;
  /* OperationalScenario::LongitudeDeg */ kcg_int _73_LongitudeDeg;
  /* OperationalScenario::anglerightlocal */ fr _72_anglerightlocal;
  /* OperationalScenario::angleleftlocal */ fr _71_angleleftlocal;
  /* OperationalScenario::SpinTgLocal */ kcg_real _70_SpinTgLocal;
  /* OperationalScenario::SpinRdLocal */ kcg_real _69_SpinRdLocal;
  /* OperationalScenario::LatitudeLocal */ kcg_real _68_LatitudeLocal;
  /* OperationalScenario::LongitudeLocal */ kcg_real _67_LongitudeLocal;
  /* OperationalScenario::FuelMeterLocal */ kcg_real _66_FuelMeterLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool _65_LaunchVisibleLocal;
  /* OperationalScenario::color_5 */ kcg_int _64_color_5;
  /* OperationalScenario::AcRdValueLocal */ kcg_real _63_AcRdValueLocal;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _62_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _61_AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _60_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _59_color4;
  /* OperationalScenario::color3 */ kcg_int _58_color3;
  /* OperationalScenario::color_2 */ kcg_int _57_color_2;
  /* OperationalScenario::color */ kcg_int color56;
  /* OperationalScenario::LaunchPhase */ kcg_bool _55_LaunchPhase;
  /* OperationalScenario::OpPhases::Ground */ kcg_bool br_2_guard_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _82_OpPhases_state_nxt;
  /* OperationalScenario::OpPhases */ kcg_bool _83_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _84_OpPhases_fired;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _85_OpPhases_state_nxt;
  /* OperationalScenario::OpPhases */ kcg_bool _86_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _87_OpPhases_fired;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _54_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _53_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _52_OpPhases_state_nxt;
  /* OperationalScenario::LatSec */ kcg_int _51_LatSec;
  /* OperationalScenario::LatMin */ kcg_int _50_LatMin;
  /* OperationalScenario::LatDeg */ kcg_int _49_LatDeg;
  /* OperationalScenario::LongitudeSec */ kcg_int _48_LongitudeSec;
  /* OperationalScenario::LongitudeMin */ kcg_int _47_LongitudeMin;
  /* OperationalScenario::LongitudeDeg */ kcg_int _46_LongitudeDeg;
  /* OperationalScenario::anglerightlocal */ fr _45_anglerightlocal;
  /* OperationalScenario::angleleftlocal */ fr _44_angleleftlocal;
  /* OperationalScenario::SpinTgLocal */ kcg_real _43_SpinTgLocal;
  /* OperationalScenario::SpinRdLocal */ kcg_real _42_SpinRdLocal;
  /* OperationalScenario::LatitudeLocal */ kcg_real _41_LatitudeLocal;
  /* OperationalScenario::LongitudeLocal */ kcg_real _40_LongitudeLocal;
  /* OperationalScenario::FuelMeterLocal */ kcg_real _39_FuelMeterLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool _38_LaunchVisibleLocal;
  /* OperationalScenario::color_5 */ kcg_int _37_color_5;
  /* OperationalScenario::AcRdValueLocal */ kcg_real _36_AcRdValueLocal;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _35_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _34_AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _33_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _32_color4;
  /* OperationalScenario::color3 */ kcg_int _31_color3;
  /* OperationalScenario::color_2 */ kcg_int _30_color_2;
  /* OperationalScenario::color */ kcg_int color29;
  /* OperationalScenario::LaunchPhase */ kcg_bool _28_LaunchPhase;
  /* OperationalScenario::OpPhases::Launch */ kcg_bool br_1_guard_OpPhases_Launch;
  /* OperationalScenario::OpPhases::Launch::AtAcquisition */ kcg_bool last_AtAcquisition_OpPhases_Launch;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _27_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _26_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _25_OpPhases_state_nxt;
  /* OperationalScenario::LatSec */ kcg_int _24_LatSec;
  /* OperationalScenario::LatMin */ kcg_int _23_LatMin;
  /* OperationalScenario::LatDeg */ kcg_int _22_LatDeg;
  /* OperationalScenario::LongitudeSec */ kcg_int _21_LongitudeSec;
  /* OperationalScenario::LongitudeMin */ kcg_int _20_LongitudeMin;
  /* OperationalScenario::LongitudeDeg */ kcg_int _19_LongitudeDeg;
  /* OperationalScenario::anglerightlocal */ fr _18_anglerightlocal;
  /* OperationalScenario::angleleftlocal */ fr _17_angleleftlocal;
  /* OperationalScenario::SpinTgLocal */ kcg_real _16_SpinTgLocal;
  /* OperationalScenario::SpinRdLocal */ kcg_real _15_SpinRdLocal;
  /* OperationalScenario::LatitudeLocal */ kcg_real _14_LatitudeLocal;
  /* OperationalScenario::LongitudeLocal */ kcg_real _13_LongitudeLocal;
  /* OperationalScenario::FuelMeterLocal */ kcg_real _12_FuelMeterLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool _11_LaunchVisibleLocal;
  /* OperationalScenario::color_5 */ kcg_int _10_color_5;
  /* OperationalScenario::AcRdValueLocal */ kcg_real _9_AcRdValueLocal;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _8_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _7_AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _6_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _5_color4;
  /* OperationalScenario::color3 */ kcg_int _4_color3;
  /* OperationalScenario::color_2 */ kcg_int _3_color_2;
  /* OperationalScenario::color */ kcg_int color2;
  /* OperationalScenario::LaunchPhase */ kcg_bool _1_LaunchPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition */ kcg_bool br_1_guard_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_nxt;
  /* OperationalScenario::LatSec */ kcg_int LatSec;
  /* OperationalScenario::LatMin */ kcg_int LatMin;
  /* OperationalScenario::LatDeg */ kcg_int LatDeg;
  /* OperationalScenario::LongitudeSec */ kcg_int LongitudeSec;
  /* OperationalScenario::LongitudeMin */ kcg_int LongitudeMin;
  /* OperationalScenario::LongitudeDeg */ kcg_int LongitudeDeg;
  /* OperationalScenario::anglerightlocal */ fr anglerightlocal;
  /* OperationalScenario::angleleftlocal */ fr angleleftlocal;
  /* OperationalScenario::SpinTgLocal */ kcg_real SpinTgLocal;
  /* OperationalScenario::SpinRdLocal */ kcg_real SpinRdLocal;
  /* OperationalScenario::LatitudeLocal */ kcg_real LatitudeLocal;
  /* OperationalScenario::LongitudeLocal */ kcg_real LongitudeLocal;
  /* OperationalScenario::FuelMeterLocal */ kcg_real FuelMeterLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool LaunchVisibleLocal;
  /* OperationalScenario::color_5 */ kcg_int color_5;
  /* OperationalScenario::AcRdValueLocal */ kcg_real AcRdValueLocal;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int color4;
  /* OperationalScenario::color3 */ kcg_int color3;
  /* OperationalScenario::color_2 */ kcg_int color_2;
  /* OperationalScenario::color */ kcg_int color;
  /* OperationalScenario::LaunchPhase */ kcg_bool LaunchPhase;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _96_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _95_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _94_OpPhases_state_act;
  /* OperationalScenario::OpPhases::Ground */ kcg_bool br_1_guard_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _93_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _92_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _91_OpPhases_state_act;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _90_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _89_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _88_OpPhases_state_act;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_act;
  /* OperationalScenario::LongitudeLocal */ kcg_real last_LongitudeLocal;
  /* OperationalScenario::LatSec */ kcg_int last_LatSec;
  /* OperationalScenario::LatMin */ kcg_int last_LatMin;
  /* OperationalScenario::LatDeg */ kcg_int last_LatDeg;
  /* OperationalScenario::LongitudeSec */ kcg_int last_LongitudeSec;
  /* OperationalScenario::LongitudeMin */ kcg_int last_LongitudeMin;
  /* OperationalScenario::LongitudeDeg */ kcg_int last_LongitudeDeg;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool last_GroundVisibleLocal;
  /* OperationalScenario::ApertarBotao */ kcg_bool last_ApertarBotao;
  /* OperationalScenario::LaunchPhase */ kcg_bool last_LaunchPhase;
  /* OperationalScenario::StartLaunchPhase */ kcg_bool last_StartLaunchPhase;
  /* OperationalScenario::upDateSw */ kcg_bool last_upDateSw;
  /* OperationalScenario::MagneticTorquers */ kcg_bool last_MagneticTorquers;
  /* OperationalScenario::Reactionwheels */ kcg_bool last_Reactionwheels;
  /* OperationalScenario::SunSensor */ kcg_bool last_SunSensor;
  /* OperationalScenario::Accelerometers */ kcg_bool last_Accelerometers;
  /* OperationalScenario::picLocation */ kcg_real last_picLocation;
  /* OperationalScenario::takePict */ kcg_bool last_takePict;
  /* OperationalScenario::AttitudeReference */ kcg_int last_AttitudeReference;
  /* OperationalScenario::Telemetry */ kcg_int last_Telemetry;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_sel;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_prv;
  
  if (outC->init2) {
    outC->OpPhases_state_sel = SSM_st_Launch_OpPhases;
  }
  else {
    outC->OpPhases_state_sel = outC->OpPhases_state_nxt;
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      _94_OpPhases_state_act = SSM_st_Ground_OpPhases;
      outC->OpPhases_state_act = _94_OpPhases_state_act;
      break;
    case SSM_st_Launch_OpPhases :
      _91_OpPhases_state_act = SSM_st_Launch_OpPhases;
      outC->OpPhases_state_act = _91_OpPhases_state_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _88_OpPhases_state_act = SSM_st_AttitudeAcquisition_OpPhases;
      outC->OpPhases_state_act = _88_OpPhases_state_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_state_act = SSM_st_NormalPhase_OpPhases;
      outC->OpPhases_state_act = OpPhases_state_act;
      break;
    
  }
  if (outC->init2) {
    OpPhases_reset_prv = kcg_false;
  }
  else {
    OpPhases_reset_prv = outC->OpPhases_reset_act;
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Launch_OpPhases :
      _92_OpPhases_reset_act = kcg_false;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _89_OpPhases_reset_act = kcg_false;
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_reset_act = kcg_false;
      break;
    
  }
  if (outC->init2) {
    last_StartLaunchPhase = kcg_false;
  }
  else {
    last_StartLaunchPhase = outC->StartLaunchPhase;
  }
  if (outC->init2) {
    last_LaunchPhase = kcg_false;
  }
  else {
    last_LaunchPhase = outC->LaunchPhase;
  }
  outC->_L22 = last_LaunchPhase;
  outC->StartLaunchPhase = outC->_L22;
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      br_1_guard_OpPhases_Ground = !outC->StartLaunchPhase;
      _95_OpPhases_reset_act = br_1_guard_OpPhases_Ground;
      outC->OpPhases_reset_act = _95_OpPhases_reset_act;
      break;
    case SSM_st_Launch_OpPhases :
      outC->OpPhases_reset_act = _92_OpPhases_reset_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->OpPhases_reset_act = _89_OpPhases_reset_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->OpPhases_reset_act = OpPhases_reset_act;
      break;
    
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      if (outC->OpPhases_reset_act) {
        outC->init4 = kcg_true;
      }
      break;
    
  }
  if (outC->init2) {
    OpPhases_reset_sel = kcg_false;
  }
  else {
    OpPhases_reset_sel = outC->OpPhases_reset_nxt;
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Launch_OpPhases :
      if (OpPhases_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (OpPhases_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    case SSM_st_NormalPhase_OpPhases :
      if (OpPhases_reset_sel) {
        outC->init3 = kcg_true;
      }
      break;
    
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      if (outC->init4) {
        last_MagneticTorquers_1 = kcg_true;
      }
      else {
        last_MagneticTorquers_1 = outC->MagneticTorquers_1;
      }
      break;
    
  }
  outC->_L32 = kcg_true;
  outC->MagneticTorquersLocal = outC->_L32;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L35_OpPhases_Ground = outC->MagneticTorquersLocal;
      outC->MagneticTorquers_1 = outC->_L35_OpPhases_Ground;
      if (outC->init4) {
        last_SunSensor_6 = kcg_true;
      }
      else {
        last_SunSensor_6 = outC->SunSensor_6;
      }
      break;
    
  }
  outC->SunSensorLocal = outC->_L32;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L33_OpPhases_Ground = outC->SunSensorLocal;
      outC->SunSensor_6 = outC->_L33_OpPhases_Ground;
      if (outC->init4) {
        last_Accelerometers_6 = kcg_true;
      }
      else {
        last_Accelerometers_6 = outC->Accelerometers_6;
      }
      break;
    
  }
  outC->_L31 = kcg_true;
  outC->AccelerometersLocal = outC->_L31;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L32_OpPhases_Ground = outC->AccelerometersLocal;
      outC->Accelerometers_6 = outC->_L32_OpPhases_Ground;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L100_OpPhases_NormalPhase = 1;
      outC->inc_7 = outC->_L100_OpPhases_NormalPhase;
      outC->_L112_OpPhases_NormalPhase = 180;
      outC->modulo_7 = outC->_L112_OpPhases_NormalPhase;
      outC->_L111_OpPhases_NormalPhase = 1;
      outC->inc_8 = outC->_L111_OpPhases_NormalPhase;
      outC->_L101_OpPhases_NormalPhase = 60;
      outC->modulo_8 = outC->_L101_OpPhases_NormalPhase;
      outC->_L104_OpPhases_NormalPhase = 9;
      outC->inc_9 = outC->_L104_OpPhases_NormalPhase;
      outC->_L114_OpPhases_NormalPhase = 60;
      outC->modulo_9 = outC->_L114_OpPhases_NormalPhase;
      outC->_L96_OpPhases_NormalPhase = 3;
      outC->inc_4 = outC->_L96_OpPhases_NormalPhase;
      outC->_L86_OpPhases_NormalPhase = 60;
      outC->modulo_4 = outC->_L86_OpPhases_NormalPhase;
      outC->_L97_OpPhases_NormalPhase = 1;
      outC->inc_5 = outC->_L97_OpPhases_NormalPhase;
      outC->_L80_OpPhases_NormalPhase = 60;
      outC->modulo_5 = outC->_L80_OpPhases_NormalPhase;
      outC->_L95_OpPhases_NormalPhase = 1;
      outC->inc_6 = outC->_L95_OpPhases_NormalPhase;
      outC->_L82_OpPhases_NormalPhase = 180;
      outC->modulo_6 = outC->_L82_OpPhases_NormalPhase;
      outC->_L94_OpPhases_NormalPhase = kcg_true;
      outC->Input1_4 = outC->_L94_OpPhases_NormalPhase;
      outC->_L4_4 = outC->Input1_4;
      outC->_L12_4 = outC->inc_4;
      if (outC->init3) {
        outC->_L8_4 = 0;
      }
      else {
        outC->_L8_4 = outC->_L2_4;
      }
      outC->_L1_4 = outC->_L12_4 + outC->_L8_4;
      if (outC->_L4_4) {
        outC->_L3_4 = outC->_L1_4;
      }
      else {
        outC->_L3_4 = outC->_L8_4;
      }
      outC->_L5_4 = outC->modulo_4;
      outC->_L2_4 = outC->_L3_4 % outC->_L5_4;
      outC->_L9_4 = outC->_L3_4 != outC->_L2_4;
      outC->rippleClock_4 = outC->_L9_4;
      outC->_L90_OpPhases_NormalPhase = outC->rippleClock_4;
      outC->Input1_6 = outC->_L90_OpPhases_NormalPhase;
      outC->_L4_6 = outC->Input1_6;
      outC->_L12_6 = outC->inc_6;
      if (outC->init3) {
        outC->_L8_6 = 0;
      }
      else {
        outC->_L8_6 = outC->_L2_6;
      }
      outC->_L1_6 = outC->_L12_6 + outC->_L8_6;
      if (outC->_L4_6) {
        outC->_L3_6 = outC->_L1_6;
      }
      else {
        outC->_L3_6 = outC->_L8_6;
      }
      outC->_L5_6 = outC->modulo_6;
      outC->_L2_6 = outC->_L3_6 % outC->_L5_6;
      outC->_L9_6 = outC->_L3_6 != outC->_L2_6;
      outC->rippleClock_6 = outC->_L9_6;
      outC->_L84_OpPhases_NormalPhase = outC->rippleClock_6;
      outC->_L79_OpPhases_NormalPhase = kcg_true;
      outC->Input1_5 = outC->_L79_OpPhases_NormalPhase;
      outC->_L4_5 = outC->Input1_5;
      outC->_L12_5 = outC->inc_5;
      if (outC->init3) {
        outC->_L8_5 = 0;
      }
      else {
        outC->_L8_5 = outC->_L2_5;
      }
      outC->_L1_5 = outC->_L12_5 + outC->_L8_5;
      if (outC->_L4_5) {
        outC->_L3_5 = outC->_L1_5;
      }
      else {
        outC->_L3_5 = outC->_L8_5;
      }
      outC->_L5_5 = outC->modulo_5;
      outC->_L2_5 = outC->_L3_5 % outC->_L5_5;
      outC->_L9_5 = outC->_L3_5 != outC->_L2_5;
      outC->rippleClock_5 = outC->_L9_5;
      outC->_L88_OpPhases_NormalPhase = outC->rippleClock_5;
      outC->_L113_OpPhases_NormalPhase = kcg_true;
      outC->Input1_9 = outC->_L113_OpPhases_NormalPhase;
      outC->_L4_9 = outC->Input1_9;
      outC->_L12_9 = outC->inc_9;
      if (outC->init3) {
        outC->_L8_9 = 0;
      }
      else {
        outC->_L8_9 = outC->_L2_9;
      }
      outC->_L1_9 = outC->_L12_9 + outC->_L8_9;
      if (outC->_L4_9) {
        outC->_L3_9 = outC->_L1_9;
      }
      else {
        outC->_L3_9 = outC->_L8_9;
      }
      outC->_L5_9 = outC->modulo_9;
      outC->_L2_9 = outC->_L3_9 % outC->_L5_9;
      outC->_L9_9 = outC->_L3_9 != outC->_L2_9;
      outC->rippleClock_9 = outC->_L9_9;
      outC->_L103_OpPhases_NormalPhase = outC->rippleClock_9;
      outC->_L108_OpPhases_NormalPhase = kcg_true;
      outC->Input1_8 = outC->_L108_OpPhases_NormalPhase;
      outC->_L4_8 = outC->Input1_8;
      outC->_L12_8 = outC->inc_8;
      if (outC->init3) {
        outC->_L8_8 = 0;
      }
      else {
        outC->_L8_8 = outC->_L2_8;
      }
      outC->_L1_8 = outC->_L12_8 + outC->_L8_8;
      if (outC->_L4_8) {
        outC->_L3_8 = outC->_L1_8;
      }
      else {
        outC->_L3_8 = outC->_L8_8;
      }
      outC->_L5_8 = outC->modulo_8;
      outC->_L2_8 = outC->_L3_8 % outC->_L5_8;
      outC->_L9_8 = outC->_L3_8 != outC->_L2_8;
      outC->rippleClock_8 = outC->_L9_8;
      outC->_L106_OpPhases_NormalPhase = outC->rippleClock_8;
      outC->Input1_7 = outC->_L103_OpPhases_NormalPhase;
      outC->_L4_7 = outC->Input1_7;
      outC->_L12_7 = outC->inc_7;
      if (outC->init3) {
        outC->_L8_7 = 0;
      }
      else {
        outC->_L8_7 = outC->_L2_7;
      }
      outC->_L1_7 = outC->_L12_7 + outC->_L8_7;
      if (outC->_L4_7) {
        outC->_L3_7 = outC->_L1_7;
      }
      else {
        outC->_L3_7 = outC->_L8_7;
      }
      outC->_L5_7 = outC->modulo_7;
      outC->_L2_7 = outC->_L3_7 % outC->_L5_7;
      outC->_L9_7 = outC->_L3_7 != outC->_L2_7;
      outC->rippleClock_7 = outC->_L9_7;
      outC->_L110_OpPhases_NormalPhase = outC->rippleClock_7;
      break;
    
  }
  last_LongitudeLocal = outC->LongitudeLocal;
  if (outC->init2) {
    last_LatSec = 0;
  }
  else {
    last_LatSec = outC->LatSec;
  }
  if (outC->init2) {
    last_LatMin = 0;
  }
  else {
    last_LatMin = outC->LatMin;
  }
  if (outC->init2) {
    last_LatDeg = 0;
  }
  else {
    last_LatDeg = outC->LatDeg;
  }
  if (outC->init2) {
    last_LongitudeSec = 0;
  }
  else {
    last_LongitudeSec = outC->LongitudeSec;
  }
  if (outC->init2) {
    last_LongitudeMin = 0;
  }
  else {
    last_LongitudeMin = outC->LongitudeMin;
  }
  if (outC->init2) {
    last_LongitudeDeg = 0;
  }
  else {
    last_LongitudeDeg = outC->LongitudeDeg;
  }
  if (outC->init2) {
    last_GroundVisibleLocal = kcg_true;
  }
  else {
    last_GroundVisibleLocal = outC->GroundVisibleLocal;
  }
  if (outC->init2) {
    last_ApertarBotao = kcg_false;
  }
  else {
    last_ApertarBotao = outC->ApertarBotao;
  }
  if (outC->init2) {
    last_upDateSw = kcg_false;
  }
  else {
    last_upDateSw = outC->rem_upDateSw;
  }
  if (outC->init2) {
    last_MagneticTorquers = kcg_true;
  }
  else {
    last_MagneticTorquers = outC->rem_MagneticTorquers;
  }
  if (outC->init2) {
    last_Reactionwheels = kcg_true;
  }
  else {
    last_Reactionwheels = outC->rem_Reactionwheels;
  }
  if (outC->init2) {
    last_SunSensor = kcg_true;
  }
  else {
    last_SunSensor = outC->rem_SunSensor;
  }
  if (outC->init2) {
    last_Accelerometers = kcg_true;
  }
  else {
    last_Accelerometers = outC->rem_Accelerometers;
  }
  if (outC->init2) {
    last_picLocation = 0.0;
  }
  else {
    last_picLocation = outC->rem_picLocation;
  }
  if (outC->init2) {
    last_takePict = kcg_false;
  }
  else {
    last_takePict = outC->rem_takePict;
  }
  if (outC->init2) {
    last_AttitudeReference = 0;
  }
  else {
    last_AttitudeReference = outC->rem_AttitudeReference;
  }
  if (outC->init2) {
    last_Telemetry = 0;
  }
  else {
    last_Telemetry = outC->rem_Telemetry;
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _76_LatDeg = last_LatDeg;
      outC->LatDeg = _76_LatDeg;
      break;
    case SSM_st_Launch_OpPhases :
      _49_LatDeg = last_LatDeg;
      outC->LatDeg = _49_LatDeg;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _22_LatDeg = last_LatDeg;
      outC->LatDeg = _22_LatDeg;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L107_OpPhases_NormalPhase = 80;
      outC->Count_7 = outC->_L2_7;
      outC->_L109_OpPhases_NormalPhase = outC->Count_7;
      outC->_L99_OpPhases_NormalPhase = outC->_L107_OpPhases_NormalPhase -
        outC->_L109_OpPhases_NormalPhase;
      LatDeg = outC->_L99_OpPhases_NormalPhase;
      outC->LatDeg = LatDeg;
      break;
    
  }
  outC->_L77 = outC->LatDeg;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _78_LatSec = last_LatSec;
      outC->LatSec = _78_LatSec;
      break;
    case SSM_st_Launch_OpPhases :
      _51_LatSec = last_LatSec;
      outC->LatSec = _51_LatSec;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _24_LatSec = last_LatSec;
      outC->LatSec = _24_LatSec;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->Count_8 = outC->_L2_8;
      outC->_L105_OpPhases_NormalPhase = outC->Count_8;
      LatSec = outC->_L105_OpPhases_NormalPhase;
      outC->LatSec = LatSec;
      break;
    
  }
  outC->_L73 = outC->LatSec;
  outC->_L76 = (kcg_real) outC->_L73;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _77_LatMin = last_LatMin;
      outC->LatMin = _77_LatMin;
      break;
    case SSM_st_Launch_OpPhases :
      _50_LatMin = last_LatMin;
      outC->LatMin = _50_LatMin;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _23_LatMin = last_LatMin;
      outC->LatMin = _23_LatMin;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->Count_9 = outC->_L2_9;
      outC->_L102_OpPhases_NormalPhase = outC->Count_9;
      LatMin = outC->_L102_OpPhases_NormalPhase;
      outC->LatMin = LatMin;
      break;
    
  }
  outC->_L72 = outC->LatMin;
  outC->_L75 = (kcg_real) outC->_L72;
  outC->_L74 = (kcg_real) outC->_L77;
  outC->SAT_Latitude_Sec_Value = outC->_L76;
  outC->SAT_Latitude_Min_Value = outC->_L75;
  outC->_L71 = inC->EjectionSignal;
  outC->_L7 = inC->PassarFaseBtn;
  outC->_L70 = outC->_L7 | outC->_L71;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _75_LongitudeSec = last_LongitudeSec;
      outC->LongitudeSec = _75_LongitudeSec;
      break;
    case SSM_st_Launch_OpPhases :
      _48_LongitudeSec = last_LongitudeSec;
      outC->LongitudeSec = _48_LongitudeSec;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _21_LongitudeSec = last_LongitudeSec;
      outC->LongitudeSec = _21_LongitudeSec;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->Count_5 = outC->_L2_5;
      outC->_L87_OpPhases_NormalPhase = outC->Count_5;
      LongitudeSec = outC->_L87_OpPhases_NormalPhase;
      outC->LongitudeSec = LongitudeSec;
      break;
    
  }
  outC->_L68 = outC->LongitudeSec;
  outC->_L69 = (kcg_real) outC->_L68;
  outC->SAT_Longitude_Sec_Value = outC->_L69;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _74_LongitudeMin = last_LongitudeMin;
      outC->LongitudeMin = _74_LongitudeMin;
      break;
    case SSM_st_Launch_OpPhases :
      _47_LongitudeMin = last_LongitudeMin;
      outC->LongitudeMin = _47_LongitudeMin;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _20_LongitudeMin = last_LongitudeMin;
      outC->LongitudeMin = _20_LongitudeMin;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->Count_4 = outC->_L2_4;
      outC->_L89_OpPhases_NormalPhase = outC->Count_4;
      LongitudeMin = outC->_L89_OpPhases_NormalPhase;
      outC->LongitudeMin = LongitudeMin;
      break;
    
  }
  outC->_L66 = outC->LongitudeMin;
  outC->_L67 = (kcg_real) outC->_L66;
  outC->SAT_Longitude_Min_Value = outC->_L67;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _73_LongitudeDeg = last_LongitudeDeg;
      outC->LongitudeDeg = _73_LongitudeDeg;
      break;
    case SSM_st_Launch_OpPhases :
      _46_LongitudeDeg = last_LongitudeDeg;
      outC->LongitudeDeg = _46_LongitudeDeg;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _19_LongitudeDeg = last_LongitudeDeg;
      outC->LongitudeDeg = _19_LongitudeDeg;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L81_OpPhases_NormalPhase = - 3;
      outC->Count_6 = outC->_L2_6;
      outC->_L83_OpPhases_NormalPhase = outC->Count_6;
      outC->_L98_OpPhases_NormalPhase = outC->_L81_OpPhases_NormalPhase -
        outC->_L83_OpPhases_NormalPhase;
      LongitudeDeg = outC->_L98_OpPhases_NormalPhase;
      outC->LongitudeDeg = LongitudeDeg;
      break;
    
  }
  outC->_L65 = outC->LongitudeDeg;
  outC->_L63 = (kcg_real) outC->_L65;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L54_OpPhases_Ground = 0.0;
      _72_anglerightlocal = outC->_L54_OpPhases_Ground;
      outC->anglerightlocal = _72_anglerightlocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L39_OpPhases_Launch = 0.0;
      _45_anglerightlocal = outC->_L39_OpPhases_Launch;
      outC->anglerightlocal = _45_anglerightlocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L143_OpPhases_AttitudeAcquisition = 0.0;
      _18_anglerightlocal = outC->_L143_OpPhases_AttitudeAcquisition;
      outC->anglerightlocal = _18_anglerightlocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      if (outC->init3) {
        outC->_L56_OpPhases_NormalPhase = 0.0;
      }
      else {
        outC->_L56_OpPhases_NormalPhase = outC->_L62_OpPhases_NormalPhase;
      }
      outC->_L59_OpPhases_NormalPhase = 1.0;
      outC->_L60_OpPhases_NormalPhase = outC->_L56_OpPhases_NormalPhase +
        outC->_L59_OpPhases_NormalPhase;
      outC->_L66_OpPhases_NormalPhase = - outC->_L60_OpPhases_NormalPhase;
      anglerightlocal = outC->_L66_OpPhases_NormalPhase;
      outC->anglerightlocal = anglerightlocal;
      break;
    
  }
  outC->_L56 = outC->anglerightlocal;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L53_OpPhases_Ground = 0.0;
      _71_angleleftlocal = outC->_L53_OpPhases_Ground;
      outC->angleleftlocal = _71_angleleftlocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L40_OpPhases_Launch = 0.0;
      _44_angleleftlocal = outC->_L40_OpPhases_Launch;
      outC->angleleftlocal = _44_angleleftlocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L144_OpPhases_AttitudeAcquisition = 0.0;
      _17_angleleftlocal = outC->_L144_OpPhases_AttitudeAcquisition;
      outC->angleleftlocal = _17_angleleftlocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      angleleftlocal = outC->_L60_OpPhases_NormalPhase;
      outC->angleleftlocal = angleleftlocal;
      break;
    
  }
  outC->_L55 = outC->angleleftlocal;
  outC->angleleft = outC->_L55;
  outC->angleright = outC->_L56;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L50_OpPhases_Ground = 0.0;
      _70_SpinTgLocal = outC->_L50_OpPhases_Ground;
      outC->SpinTgLocal = _70_SpinTgLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L38_OpPhases_Launch = 0.0;
      _43_SpinTgLocal = outC->_L38_OpPhases_Launch;
      outC->SpinTgLocal = _43_SpinTgLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (outC->init1) {
        outC->_L124_OpPhases_AttitudeAcquisition = 0.0;
      }
      else {
        outC->_L124_OpPhases_AttitudeAcquisition =
          outC->_L142_OpPhases_AttitudeAcquisition;
      }
      outC->_L125_OpPhases_AttitudeAcquisition = 1.0;
      outC->_L142_OpPhases_AttitudeAcquisition =
        outC->_L124_OpPhases_AttitudeAcquisition +
        outC->_L125_OpPhases_AttitudeAcquisition;
      outC->ClockTime_OpPhases_AttitudeAcquisition =
        outC->_L142_OpPhases_AttitudeAcquisition;
      outC->_L135_OpPhases_AttitudeAcquisition =
        outC->ClockTime_OpPhases_AttitudeAcquisition;
      outC->_L133_OpPhases_AttitudeAcquisition = 15.0;
      outC->LaunchTime_OpPhases_AttitudeAcquisition =
        outC->_L133_OpPhases_AttitudeAcquisition;
      outC->_L136_OpPhases_AttitudeAcquisition =
        outC->LaunchTime_OpPhases_AttitudeAcquisition;
      outC->_L138_OpPhases_AttitudeAcquisition = 0.5;
      outC->_L137_OpPhases_AttitudeAcquisition =
        outC->_L136_OpPhases_AttitudeAcquisition *
        outC->_L138_OpPhases_AttitudeAcquisition;
      outC->_L139_OpPhases_AttitudeAcquisition =
        outC->_L135_OpPhases_AttitudeAcquisition <
        outC->_L137_OpPhases_AttitudeAcquisition;
      outC->_L140_OpPhases_AttitudeAcquisition = 0.0;
      if (outC->init1) {
        outC->_L114_OpPhases_AttitudeAcquisition = 1.0;
      }
      else {
        outC->_L114_OpPhases_AttitudeAcquisition =
          outC->_L110_OpPhases_AttitudeAcquisition;
      }
      outC->_L108_OpPhases_AttitudeAcquisition = 1.0;
      outC->_L110_OpPhases_AttitudeAcquisition =
        outC->_L114_OpPhases_AttitudeAcquisition +
        outC->_L108_OpPhases_AttitudeAcquisition;
      if (outC->_L139_OpPhases_AttitudeAcquisition) {
        outC->_L130_OpPhases_AttitudeAcquisition =
          outC->_L140_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L130_OpPhases_AttitudeAcquisition =
          outC->_L110_OpPhases_AttitudeAcquisition;
      }
      _16_SpinTgLocal = outC->_L130_OpPhases_AttitudeAcquisition;
      outC->SpinTgLocal = _16_SpinTgLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L41_OpPhases_NormalPhase = 0.0;
      SpinTgLocal = outC->_L41_OpPhases_NormalPhase;
      outC->SpinTgLocal = SpinTgLocal;
      break;
    
  }
  outC->_L52 = outC->SpinTgLocal;
  outC->SpinTg = outC->_L52;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L49_OpPhases_Ground = 0.0;
      _69_SpinRdLocal = outC->_L49_OpPhases_Ground;
      outC->SpinRdLocal = _69_SpinRdLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L37_OpPhases_Launch = 0.0;
      _42_SpinRdLocal = outC->_L37_OpPhases_Launch;
      outC->SpinRdLocal = _42_SpinRdLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L119_OpPhases_AttitudeAcquisition = 10.0;
      if (outC->init1) {
        outC->_L120_OpPhases_AttitudeAcquisition = 1.0;
      }
      else {
        outC->_L120_OpPhases_AttitudeAcquisition =
          outC->_L121_OpPhases_AttitudeAcquisition;
      }
      outC->_L118_OpPhases_AttitudeAcquisition = 1.0;
      outC->_L121_OpPhases_AttitudeAcquisition =
        outC->_L120_OpPhases_AttitudeAcquisition +
        outC->_L118_OpPhases_AttitudeAcquisition;
      outC->_L117_OpPhases_AttitudeAcquisition =
        outC->_L119_OpPhases_AttitudeAcquisition /
        outC->_L121_OpPhases_AttitudeAcquisition;
      _15_SpinRdLocal = outC->_L117_OpPhases_AttitudeAcquisition;
      outC->SpinRdLocal = _15_SpinRdLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L42_OpPhases_NormalPhase = 0.0;
      SpinRdLocal = outC->_L42_OpPhases_NormalPhase;
      outC->SpinRdLocal = SpinRdLocal;
      break;
    
  }
  outC->_L51 = outC->SpinRdLocal;
  outC->SpinRd = outC->_L51;
  outC->SAT_Longitude_Value = outC->_L63;
  outC->SAT_Latitude_Value = outC->_L74;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L42_OpPhases_Ground = 100.0;
      _66_FuelMeterLocal = outC->_L42_OpPhases_Ground;
      outC->FuelMeterLocal = _66_FuelMeterLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L34_OpPhases_Launch = 100.0;
      _39_FuelMeterLocal = outC->_L34_OpPhases_Launch;
      outC->FuelMeterLocal = _39_FuelMeterLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (outC->init1) {
        outC->_L36_OpPhases_AttitudeAcquisition = 100.0;
      }
      else {
        outC->_L36_OpPhases_AttitudeAcquisition =
          outC->_L40_OpPhases_AttitudeAcquisition;
      }
      outC->_L31_OpPhases_AttitudeAcquisition = 10.0;
      outC->_L40_OpPhases_AttitudeAcquisition =
        outC->_L36_OpPhases_AttitudeAcquisition -
        outC->_L31_OpPhases_AttitudeAcquisition;
      _12_FuelMeterLocal = outC->_L40_OpPhases_AttitudeAcquisition;
      outC->FuelMeterLocal = _12_FuelMeterLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L21_OpPhases_NormalPhase = 0.0;
      FuelMeterLocal = outC->_L21_OpPhases_NormalPhase;
      outC->FuelMeterLocal = FuelMeterLocal;
      break;
    
  }
  outC->_L43 = outC->FuelMeterLocal;
  outC->_L45 = 25.0;
  outC->_L44 = outC->_L43 * outC->_L45;
  outC->_L46 = (kcg_int) outC->_L44;
  outC->FuelMeterGraphic = outC->_L46;
  outC->FuelMeter = outC->_L43;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L41_OpPhases_Ground = kcg_false;
      _65_LaunchVisibleLocal = outC->_L41_OpPhases_Ground;
      outC->LaunchVisibleLocal = _65_LaunchVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L33_OpPhases_Launch = kcg_true;
      _38_LaunchVisibleLocal = outC->_L33_OpPhases_Launch;
      outC->LaunchVisibleLocal = _38_LaunchVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L30_OpPhases_AttitudeAcquisition = kcg_false;
      _11_LaunchVisibleLocal = outC->_L30_OpPhases_AttitudeAcquisition;
      outC->LaunchVisibleLocal = _11_LaunchVisibleLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L19_OpPhases_NormalPhase = kcg_false;
      LaunchVisibleLocal = outC->_L19_OpPhases_NormalPhase;
      outC->LaunchVisibleLocal = LaunchVisibleLocal;
      break;
    
  }
  outC->_L42 = outC->LaunchVisibleLocal;
  outC->LaunchVisible = outC->_L42;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L39_OpPhases_Ground = 21;
      _64_color_5 = outC->_L39_OpPhases_Ground;
      outC->color_5 = _64_color_5;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L31_OpPhases_Launch = 21;
      _37_color_5 = outC->_L31_OpPhases_Launch;
      outC->color_5 = _37_color_5;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L28_OpPhases_AttitudeAcquisition = 21;
      _10_color_5 = outC->_L28_OpPhases_AttitudeAcquisition;
      outC->color_5 = _10_color_5;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L18_OpPhases_NormalPhase = 55;
      color_5 = outC->_L18_OpPhases_NormalPhase;
      outC->color_5 = color_5;
      break;
    
  }
  outC->_L41 = outC->color_5;
  outC->ColorIndex5 = outC->_L41;
  outC->_L36 = kcg_false;
  outC->AtNormalPhase = outC->_L36;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L37_OpPhases_Ground = 0.0;
      _63_AcRdValueLocal = outC->_L37_OpPhases_Ground;
      outC->AcRdValueLocal = _63_AcRdValueLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L29_OpPhases_Launch = 0.0;
      _36_AcRdValueLocal = outC->_L29_OpPhases_Launch;
      outC->AcRdValueLocal = _36_AcRdValueLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (outC->init1) {
        outC->_L26_OpPhases_AttitudeAcquisition = 1.0;
      }
      else {
        outC->_L26_OpPhases_AttitudeAcquisition =
          outC->_L25_OpPhases_AttitudeAcquisition;
      }
      outC->_L22_OpPhases_AttitudeAcquisition = 1.0;
      outC->_L23_OpPhases_AttitudeAcquisition =
        outC->_L26_OpPhases_AttitudeAcquisition +
        outC->_L22_OpPhases_AttitudeAcquisition;
      _9_AcRdValueLocal = outC->_L23_OpPhases_AttitudeAcquisition;
      outC->AcRdValueLocal = _9_AcRdValueLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L13_OpPhases_NormalPhase = 10.0;
      AcRdValueLocal = outC->_L13_OpPhases_NormalPhase;
      outC->AcRdValueLocal = AcRdValueLocal;
      break;
    
  }
  outC->_L38 = outC->AcRdValueLocal;
  outC->AcRdValue = outC->_L38;
  outC->AtAcquisition = outC->_L36;
  outC->_L34 = inC->Power;
  outC->ReactionwheelsLocal = outC->_L32;
  outC->PowerLocal = outC->_L34;
  outC->GyroscopesLocal = outC->_L31;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L16_OpPhases_Ground = kcg_false;
      _62_NormalPhaseVisibleLocal = outC->_L16_OpPhases_Ground;
      outC->NormalPhaseVisibleLocal = _62_NormalPhaseVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L13_OpPhases_Launch = kcg_false;
      _35_NormalPhaseVisibleLocal = outC->_L13_OpPhases_Launch;
      outC->NormalPhaseVisibleLocal = _35_NormalPhaseVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L16_OpPhases_AttitudeAcquisition = kcg_false;
      _8_NormalPhaseVisibleLocal = outC->_L16_OpPhases_AttitudeAcquisition;
      outC->NormalPhaseVisibleLocal = _8_NormalPhaseVisibleLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L12_OpPhases_NormalPhase = kcg_true;
      NormalPhaseVisibleLocal = outC->_L12_OpPhases_NormalPhase;
      outC->NormalPhaseVisibleLocal = NormalPhaseVisibleLocal;
      break;
    
  }
  outC->_L20 = outC->NormalPhaseVisibleLocal;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L15_OpPhases_Ground = kcg_false;
      _61_AttitudeVisibleLocal = outC->_L15_OpPhases_Ground;
      outC->AttitudeVisibleLocal = _61_AttitudeVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L12_OpPhases_Launch = kcg_false;
      _34_AttitudeVisibleLocal = outC->_L12_OpPhases_Launch;
      outC->AttitudeVisibleLocal = _34_AttitudeVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L19_OpPhases_AttitudeAcquisition = kcg_true;
      _7_AttitudeVisibleLocal = outC->_L19_OpPhases_AttitudeAcquisition;
      outC->AttitudeVisibleLocal = _7_AttitudeVisibleLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L10_OpPhases_NormalPhase = kcg_false;
      AttitudeVisibleLocal = outC->_L10_OpPhases_NormalPhase;
      outC->AttitudeVisibleLocal = AttitudeVisibleLocal;
      break;
    
  }
  outC->_L19 = outC->AttitudeVisibleLocal;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L13_OpPhases_Ground = kcg_true;
      _60_GroundVisibleLocal = outC->_L13_OpPhases_Ground;
      outC->GroundVisibleLocal = _60_GroundVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L14_OpPhases_Launch = kcg_false;
      _33_GroundVisibleLocal = outC->_L14_OpPhases_Launch;
      outC->GroundVisibleLocal = _33_GroundVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L17_OpPhases_AttitudeAcquisition = kcg_false;
      _6_GroundVisibleLocal = outC->_L17_OpPhases_AttitudeAcquisition;
      outC->GroundVisibleLocal = _6_GroundVisibleLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L11_OpPhases_NormalPhase = kcg_false;
      GroundVisibleLocal = outC->_L11_OpPhases_NormalPhase;
      outC->GroundVisibleLocal = GroundVisibleLocal;
      break;
    
  }
  outC->_L16 = outC->GroundVisibleLocal;
  outC->NormalPhaseVisible = outC->_L20;
  outC->AttitudeVisible = outC->_L19;
  outC->GroundVisible = outC->_L16;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L8_OpPhases_Ground = 21;
      _59_color4 = outC->_L8_OpPhases_Ground;
      outC->color4 = _59_color4;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L10_OpPhases_Launch = 21;
      _32_color4 = outC->_L10_OpPhases_Launch;
      outC->color4 = _32_color4;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L12_OpPhases_AttitudeAcquisition = 21;
      _5_color4 = outC->_L12_OpPhases_AttitudeAcquisition;
      outC->color4 = _5_color4;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L7_OpPhases_NormalPhase = 55;
      color4 = outC->_L7_OpPhases_NormalPhase;
      outC->color4 = color4;
      break;
    
  }
  outC->_L15 = outC->color4;
  outC->ColorIndex4 = outC->_L15;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L7_OpPhases_Ground = 21;
      _58_color3 = outC->_L7_OpPhases_Ground;
      outC->color3 = _58_color3;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L7_OpPhases_Launch = 21;
      _31_color3 = outC->_L7_OpPhases_Launch;
      outC->color3 = _31_color3;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L13_OpPhases_AttitudeAcquisition = 55;
      _4_color3 = outC->_L13_OpPhases_AttitudeAcquisition;
      outC->color3 = _4_color3;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L8_OpPhases_NormalPhase = 21;
      color3 = outC->_L8_OpPhases_NormalPhase;
      outC->color3 = color3;
      break;
    
  }
  outC->_L14 = outC->color3;
  outC->ColorIndex3 = outC->_L14;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L4_OpPhases_Ground = 55;
      _57_color_2 = outC->_L4_OpPhases_Ground;
      outC->color_2 = _57_color_2;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L6_OpPhases_Launch = 21;
      _30_color_2 = outC->_L6_OpPhases_Launch;
      outC->color_2 = _30_color_2;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L14_OpPhases_AttitudeAcquisition = 21;
      _3_color_2 = outC->_L14_OpPhases_AttitudeAcquisition;
      outC->color_2 = _3_color_2;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L6_OpPhases_NormalPhase = 21;
      color_2 = outC->_L6_OpPhases_NormalPhase;
      outC->color_2 = color_2;
      break;
    
  }
  outC->_L13 = outC->color_2;
  outC->ColorIndex2 = outC->_L13;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L2_OpPhases_Ground = 21;
      color56 = outC->_L2_OpPhases_Ground;
      outC->color = color56;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L5_OpPhases_Launch = 55;
      color29 = outC->_L5_OpPhases_Launch;
      outC->color = color29;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L15_OpPhases_AttitudeAcquisition = 21;
      color2 = outC->_L15_OpPhases_AttitudeAcquisition;
      outC->color = color2;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L5_OpPhases_NormalPhase = 21;
      color = outC->_L5_OpPhases_NormalPhase;
      outC->color = color;
      break;
    
  }
  outC->_L12 = outC->color;
  outC->ColorIndex = outC->_L12;
  outC->_L11 = kcg_true;
  outC->Emit2CDS = outC->_L11;
  outC->ApertarBotao = outC->_L70;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->Layer1Visible = outC->_L9;
  outC->Layer1Active = outC->_L8;
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      if (br_1_guard_OpPhases_Ground) {
        _96_OpPhases_fired_strong = SSM_TR_Ground_1_OpPhases;
      }
      else {
        _96_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      outC->OpPhases_fired_strong = _96_OpPhases_fired_strong;
      break;
    case SSM_st_Launch_OpPhases :
      _93_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      outC->OpPhases_fired_strong = _93_OpPhases_fired_strong;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _90_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      outC->OpPhases_fired_strong = _90_OpPhases_fired_strong;
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      outC->OpPhases_fired_strong = OpPhases_fired_strong;
      break;
    
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->Ground_weakb_clock_OpPhases = outC->OpPhases_fired_strong !=
        SSM_TR_no_trans_OpPhases;
      if (outC->Ground_weakb_clock_OpPhases) {
        _87_OpPhases_fired = outC->OpPhases_fired_strong;
        _86_OpPhases_reset_nxt = kcg_false;
        _85_OpPhases_state_nxt = SSM_st_Ground_OpPhases;
        _81_OpPhases_fired = _87_OpPhases_fired;
        _80_OpPhases_reset_nxt = _86_OpPhases_reset_nxt;
        _79_OpPhases_state_nxt = _85_OpPhases_state_nxt;
      }
      else {
        br_2_guard_OpPhases_Ground = kcg_true;
        if (br_2_guard_OpPhases_Ground) {
          _84_OpPhases_fired = SSM_TR_Ground_2_OpPhases;
        }
        else {
          _84_OpPhases_fired = SSM_TR_no_trans_OpPhases;
        }
        _83_OpPhases_reset_nxt = br_2_guard_OpPhases_Ground;
        if (br_2_guard_OpPhases_Ground) {
          _82_OpPhases_state_nxt = SSM_st_Launch_OpPhases;
        }
        else {
          _82_OpPhases_state_nxt = SSM_st_Ground_OpPhases;
        }
        _81_OpPhases_fired = _84_OpPhases_fired;
        _80_OpPhases_reset_nxt = _83_OpPhases_reset_nxt;
        _79_OpPhases_state_nxt = _82_OpPhases_state_nxt;
      }
      outC->_L46_OpPhases_Ground = 0.0;
      outC->_L45_OpPhases_Ground = 0.0;
      _67_LongitudeLocal = outC->_L46_OpPhases_Ground;
      _68_LatitudeLocal = outC->_L45_OpPhases_Ground;
      outC->_L34_OpPhases_Ground = outC->ReactionwheelsLocal;
      outC->_L31_OpPhases_Ground = outC->GyroscopesLocal;
      outC->_L30_OpPhases_Ground = outC->PowerLocal;
      if (outC->init4) {
        last_SensorsStatus_6 = kcg_true;
      }
      else {
        last_SensorsStatus_6 = outC->SensorsStatus_6;
      }
      if (outC->init4) {
        last_Gyroscopes_6 = kcg_true;
      }
      else {
        last_Gyroscopes_6 = outC->Gyroscopes_6;
      }
      outC->Gyroscopes_6 = outC->_L31_OpPhases_Ground;
      outC->_L2_68 = outC->Gyroscopes_6;
      outC->_L4_67 = outC->Accelerometers_6;
      outC->_L6_6 = outC->_L2_68 | outC->_L4_67;
      outC->_L5_66 = outC->SunSensor_6;
      outC->_L8_65 = outC->_L6_6 | outC->_L5_66;
      outC->SensorsStatus_6 = outC->_L8_65;
      outC->_L22_OpPhases_Ground = outC->SensorsStatus_6;
      outC->_L23_OpPhases_Ground = outC->_L30_OpPhases_Ground &
        outC->_L22_OpPhases_Ground;
      if (outC->init4) {
        last_ActuatorsStatus_1 = kcg_true;
      }
      else {
        last_ActuatorsStatus_1 = outC->ActuatorsStatus_1;
      }
      if (outC->init4) {
        last_Reactionwheels_1 = kcg_true;
      }
      else {
        last_Reactionwheels_1 = outC->Reactionwheels_1;
      }
      outC->Reactionwheels_1 = outC->_L34_OpPhases_Ground;
      outC->_L2_1 = outC->Reactionwheels_1;
      outC->_L3_1 = outC->MagneticTorquers_1;
      outC->_L4_1 = outC->_L2_1 | outC->_L3_1;
      outC->ActuatorsStatus_1 = outC->_L4_1;
      outC->_L24_OpPhases_Ground = outC->ActuatorsStatus_1;
      outC->_L27_OpPhases_Ground = outC->_L23_OpPhases_Ground &
        outC->_L24_OpPhases_Ground;
      _55_LaunchPhase = outC->_L27_OpPhases_Ground;
      outC->OpPhases_fired = _81_OpPhases_fired;
      outC->OpPhases_reset_nxt = _80_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _79_OpPhases_state_nxt;
      outC->LatitudeLocal = _68_LatitudeLocal;
      outC->LongitudeLocal = _67_LongitudeLocal;
      outC->LaunchPhase = _55_LaunchPhase;
      break;
    case SSM_st_Launch_OpPhases :
      _28_LaunchPhase = last_LaunchPhase;
      if (outC->init) {
        last_AtAcquisition_OpPhases_Launch = kcg_false;
      }
      else {
        last_AtAcquisition_OpPhases_Launch =
          outC->AtAcquisition_OpPhases_Launch;
      }
      outC->_L28_OpPhases_Launch = outC->ApertarBotao;
      outC->AtAcquisition_OpPhases_Launch = outC->_L28_OpPhases_Launch;
      br_1_guard_OpPhases_Launch = outC->AtAcquisition_OpPhases_Launch;
      if (br_1_guard_OpPhases_Launch) {
        _54_OpPhases_fired = SSM_TR_Launch_1_OpPhases;
      }
      else {
        _54_OpPhases_fired = SSM_TR_no_trans_OpPhases;
      }
      _53_OpPhases_reset_nxt = br_1_guard_OpPhases_Launch;
      if (br_1_guard_OpPhases_Launch) {
        _52_OpPhases_state_nxt = SSM_st_AttitudeAcquisition_OpPhases;
      }
      else {
        _52_OpPhases_state_nxt = SSM_st_Launch_OpPhases;
      }
      outC->_L36_OpPhases_Launch = 0.0;
      _41_LatitudeLocal = outC->_L36_OpPhases_Launch;
      outC->_L35_OpPhases_Launch = 0.0;
      _40_LongitudeLocal = outC->_L35_OpPhases_Launch;
      outC->OpPhases_fired = _54_OpPhases_fired;
      outC->OpPhases_reset_nxt = _53_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _52_OpPhases_state_nxt;
      outC->LatitudeLocal = _41_LatitudeLocal;
      outC->LongitudeLocal = _40_LongitudeLocal;
      outC->LaunchPhase = _28_LaunchPhase;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _1_LaunchPhase = last_LaunchPhase;
      outC->_L141_OpPhases_AttitudeAcquisition =
        outC->LaunchTime_OpPhases_AttitudeAcquisition;
      outC->_L24_OpPhases_AttitudeAcquisition =
        outC->_L23_OpPhases_AttitudeAcquisition >=
        outC->_L141_OpPhases_AttitudeAcquisition;
      outC->AtNormalPhaseLocal_OpPhases_AttitudeAcquisition =
        outC->_L24_OpPhases_AttitudeAcquisition;
      br_1_guard_OpPhases_AttitudeAcquisition =
        outC->AtNormalPhaseLocal_OpPhases_AttitudeAcquisition;
      if (br_1_guard_OpPhases_AttitudeAcquisition) {
        _27_OpPhases_fired = SSM_TR_AttitudeAcquisition_1_OpPhases;
      }
      else {
        _27_OpPhases_fired = SSM_TR_no_trans_OpPhases;
      }
      _26_OpPhases_reset_nxt = br_1_guard_OpPhases_AttitudeAcquisition;
      if (br_1_guard_OpPhases_AttitudeAcquisition) {
        _25_OpPhases_state_nxt = SSM_st_NormalPhase_OpPhases;
      }
      else {
        _25_OpPhases_state_nxt = SSM_st_AttitudeAcquisition_OpPhases;
      }
      outC->_L53_OpPhases_AttitudeAcquisition = 15.0;
      _13_LongitudeLocal = outC->_L53_OpPhases_AttitudeAcquisition;
      outC->_L43_OpPhases_AttitudeAcquisition = 0.0;
      _14_LatitudeLocal = outC->_L43_OpPhases_AttitudeAcquisition;
      outC->_L21_OpPhases_AttitudeAcquisition = 1.0;
      if (outC->_L24_OpPhases_AttitudeAcquisition) {
        outC->_L25_OpPhases_AttitudeAcquisition =
          outC->_L21_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L25_OpPhases_AttitudeAcquisition =
          outC->_L23_OpPhases_AttitudeAcquisition;
      }
      outC->OpPhases_fired = _27_OpPhases_fired;
      outC->OpPhases_reset_nxt = _26_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _25_OpPhases_state_nxt;
      outC->LatitudeLocal = _14_LatitudeLocal;
      outC->LongitudeLocal = _13_LongitudeLocal;
      outC->LaunchPhase = _1_LaunchPhase;
      break;
    case SSM_st_NormalPhase_OpPhases :
      LongitudeLocal = last_LongitudeLocal;
      LaunchPhase = last_LaunchPhase;
      OpPhases_fired = outC->OpPhases_fired_strong;
      OpPhases_reset_nxt = kcg_false;
      OpPhases_state_nxt = SSM_st_NormalPhase_OpPhases;
      outC->Probe1_OpPhases_NormalPhase = outC->_L106_OpPhases_NormalPhase;
      outC->_L57_OpPhases_NormalPhase = 90.0;
      outC->_L61_OpPhases_NormalPhase = outC->_L60_OpPhases_NormalPhase >=
        outC->_L57_OpPhases_NormalPhase;
      outC->_L58_OpPhases_NormalPhase = 89.0;
      if (outC->_L61_OpPhases_NormalPhase) {
        outC->_L62_OpPhases_NormalPhase = outC->_L58_OpPhases_NormalPhase;
      }
      else {
        outC->_L62_OpPhases_NormalPhase = outC->_L60_OpPhases_NormalPhase;
      }
      outC->_L40_OpPhases_NormalPhase = inC->Input13;
      outC->_L24_OpPhases_NormalPhase = 0.0;
      LatitudeLocal = outC->_L24_OpPhases_NormalPhase;
      outC->OpPhases_fired = OpPhases_fired;
      outC->OpPhases_reset_nxt = OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = OpPhases_state_nxt;
      outC->LatitudeLocal = LatitudeLocal;
      outC->LongitudeLocal = LongitudeLocal;
      outC->LaunchPhase = LaunchPhase;
      break;
    
  }
  outC->rem_Telemetry = inC->Telemetry;
  outC->rem_AttitudeReference = inC->AttitudeReference;
  outC->rem_takePict = inC->takePict;
  outC->rem_picLocation = inC->picLocation;
  outC->rem_Accelerometers = inC->Accelerometers;
  outC->rem_SunSensor = inC->SunSensor;
  outC->rem_Reactionwheels = inC->Reactionwheels;
  outC->rem_MagneticTorquers = inC->MagneticTorquers;
  outC->rem_upDateSw = inC->upDateSw;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Launch_OpPhases :
      outC->init = kcg_false;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->init1 = kcg_false;
      break;
    
  }
  outC->init2 = kcg_false;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->init4 = kcg_false;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->init3 = kcg_false;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** OperationalScenario.c
** Generation date: 2014-11-22T23:48:34
*************************************************************$ */

