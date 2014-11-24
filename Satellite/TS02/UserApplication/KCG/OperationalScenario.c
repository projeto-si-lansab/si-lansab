/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/ITA/TS02_2Sprint/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-23T21:47:49
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OperationalScenario.h"

void OperationalScenario_reset(outC_OperationalScenario *outC)
{
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  outC->init = kcg_true;
}

/* OperationalScenario */
void OperationalScenario(
  inC_OperationalScenario *inC,
  outC_OperationalScenario *outC)
{
  kcg_int i1;
  kcg_int i;
  /* TestActuators::ActuatorsStatus */ kcg_bool last_ActuatorsStatus_1;
  /* TestActuators::MagneticTorquers */ kcg_bool last_MagneticTorquers_1;
  /* TestActuators::Reactionwheels */ kcg_bool last_Reactionwheels_1;
  /* ReadSensors::SensorsStatus */ kcg_bool last_SensorsStatus_6;
  /* ReadSensors::SunSensor */ kcg_bool last_SunSensor_6;
  /* ReadSensors::Accelerometers */ kcg_bool last_Accelerometers_6;
  /* ReadSensors::Gyroscopes */ kcg_bool last_Gyroscopes_6;
  /* OperationalScenario */ kcg_real _2_fby_OperationalScenario;
  /* OperationalScenario */ kcg_int fby_OperationalScenario;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _66_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _65_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _64_OpPhases_state_nxt;
  /* OperationalScenario::TorqueTgLocal */ kcg_real _63_TorqueTgLocal;
  /* OperationalScenario::TorqueRdLocal */ kcg_real _62_TorqueRdLocal;
  /* OperationalScenario::SpinTgLocal */ kcg_real _61_SpinTgLocal;
  /* OperationalScenario::SpinRdLocal */ kcg_real _60_SpinRdLocal;
  /* OperationalScenario::LatitudeLocal */ kcg_real _59_LatitudeLocal;
  /* OperationalScenario::LongitudeLocal */ kcg_real _58_LongitudeLocal;
  /* OperationalScenario::FuelMeterLocal */ kcg_real _57_FuelMeterLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool _56_LaunchVisibleLocal;
  /* OperationalScenario::color_5 */ kcg_int _55_color_5;
  /* OperationalScenario::AltitudeValueLocal */ kcg_real _54_AltitudeValueLocal;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _53_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _52_AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _51_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _50_color4;
  /* OperationalScenario::color3 */ kcg_int _49_color3;
  /* OperationalScenario::color_2 */ kcg_int _48_color_2;
  /* OperationalScenario::color */ kcg_int color47;
  /* OperationalScenario::LaunchPhase */ kcg_bool _46_LaunchPhase;
  /* OperationalScenario::OpPhases::Ground */ kcg_bool br_2_guard_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _67_OpPhases_state_nxt;
  /* OperationalScenario::OpPhases */ kcg_bool _68_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _69_OpPhases_fired;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _70_OpPhases_state_nxt;
  /* OperationalScenario::OpPhases */ kcg_bool _71_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _72_OpPhases_fired;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _45_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _44_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _43_OpPhases_state_nxt;
  /* OperationalScenario::TorqueTgLocal */ kcg_real _42_TorqueTgLocal;
  /* OperationalScenario::TorqueRdLocal */ kcg_real _41_TorqueRdLocal;
  /* OperationalScenario::SpinTgLocal */ kcg_real _40_SpinTgLocal;
  /* OperationalScenario::SpinRdLocal */ kcg_real _39_SpinRdLocal;
  /* OperationalScenario::LatitudeLocal */ kcg_real _38_LatitudeLocal;
  /* OperationalScenario::LongitudeLocal */ kcg_real _37_LongitudeLocal;
  /* OperationalScenario::FuelMeterLocal */ kcg_real _36_FuelMeterLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool _35_LaunchVisibleLocal;
  /* OperationalScenario::color_5 */ kcg_int _34_color_5;
  /* OperationalScenario::AltitudeValueLocal */ kcg_real _33_AltitudeValueLocal;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _32_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _31_AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _30_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _29_color4;
  /* OperationalScenario::color3 */ kcg_int _28_color3;
  /* OperationalScenario::color_2 */ kcg_int _27_color_2;
  /* OperationalScenario::color */ kcg_int color26;
  /* OperationalScenario::LaunchPhase */ kcg_bool _25_LaunchPhase;
  /* OperationalScenario::OpPhases::Launch */ kcg_bool br_1_guard_OpPhases_Launch;
  /* OperationalScenario::OpPhases::Launch::AtAcquisition */ kcg_bool last_AtAcquisition_OpPhases_Launch;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _24_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _23_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _22_OpPhases_state_nxt;
  /* OperationalScenario::TorqueTgLocal */ kcg_real _21_TorqueTgLocal;
  /* OperationalScenario::TorqueRdLocal */ kcg_real _20_TorqueRdLocal;
  /* OperationalScenario::SpinTgLocal */ kcg_real _19_SpinTgLocal;
  /* OperationalScenario::SpinRdLocal */ kcg_real _18_SpinRdLocal;
  /* OperationalScenario::LatitudeLocal */ kcg_real _17_LatitudeLocal;
  /* OperationalScenario::LongitudeLocal */ kcg_real _16_LongitudeLocal;
  /* OperationalScenario::FuelMeterLocal */ kcg_real _15_FuelMeterLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool _14_LaunchVisibleLocal;
  /* OperationalScenario::color_5 */ kcg_int _13_color_5;
  /* OperationalScenario::AltitudeValueLocal */ kcg_real _12_AltitudeValueLocal;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _11_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _10_AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _9_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _8_color4;
  /* OperationalScenario::color3 */ kcg_int _7_color3;
  /* OperationalScenario::color_2 */ kcg_int _6_color_2;
  /* OperationalScenario::color */ kcg_int color5;
  /* OperationalScenario::LaunchPhase */ kcg_bool _3_LaunchPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition */ kcg_bool br_1_guard_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_nxt;
  /* OperationalScenario::TorqueTgLocal */ kcg_real TorqueTgLocal;
  /* OperationalScenario::TorqueRdLocal */ kcg_real TorqueRdLocal;
  /* OperationalScenario::SpinTgLocal */ kcg_real SpinTgLocal;
  /* OperationalScenario::SpinRdLocal */ kcg_real SpinRdLocal;
  /* OperationalScenario::LatitudeLocal */ kcg_real LatitudeLocal;
  /* OperationalScenario::LongitudeLocal */ kcg_real LongitudeLocal;
  /* OperationalScenario::FuelMeterLocal */ kcg_real FuelMeterLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool LaunchVisibleLocal;
  /* OperationalScenario::color_5 */ kcg_int color_5;
  /* OperationalScenario::AltitudeValueLocal */ kcg_real AltitudeValueLocal;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int color4;
  /* OperationalScenario::color3 */ kcg_int color3;
  /* OperationalScenario::color_2 */ kcg_int color_2;
  /* OperationalScenario::color */ kcg_int color;
  /* OperationalScenario::LaunchPhase */ kcg_bool LaunchPhase;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _81_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _80_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _79_OpPhases_state_act;
  /* OperationalScenario::OpPhases::Ground */ kcg_bool br_1_guard_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _78_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _77_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _76_OpPhases_state_act;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _75_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _74_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _73_OpPhases_state_act;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_act;
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
  
  if (outC->init3) {
    outC->OpPhases_state_sel = SSM_st_Ground_OpPhases;
  }
  else {
    outC->OpPhases_state_sel = outC->OpPhases_state_nxt;
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      _79_OpPhases_state_act = SSM_st_Ground_OpPhases;
      outC->OpPhases_state_act = _79_OpPhases_state_act;
      break;
    case SSM_st_Launch_OpPhases :
      _76_OpPhases_state_act = SSM_st_Launch_OpPhases;
      outC->OpPhases_state_act = _76_OpPhases_state_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _73_OpPhases_state_act = SSM_st_AttitudeAcquisition_OpPhases;
      outC->OpPhases_state_act = _73_OpPhases_state_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_state_act = SSM_st_NormalPhase_OpPhases;
      outC->OpPhases_state_act = OpPhases_state_act;
      break;
    
  }
  if (outC->init3) {
    OpPhases_reset_prv = kcg_false;
  }
  else {
    OpPhases_reset_prv = outC->OpPhases_reset_act;
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Launch_OpPhases :
      _77_OpPhases_reset_act = kcg_false;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _74_OpPhases_reset_act = kcg_false;
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_reset_act = kcg_false;
      break;
    
  }
  if (outC->init3) {
    last_StartLaunchPhase = kcg_false;
  }
  else {
    last_StartLaunchPhase = outC->StartLaunchPhase;
  }
  if (outC->init3) {
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
      _80_OpPhases_reset_act = br_1_guard_OpPhases_Ground;
      outC->OpPhases_reset_act = _80_OpPhases_reset_act;
      break;
    case SSM_st_Launch_OpPhases :
      outC->OpPhases_reset_act = _77_OpPhases_reset_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->OpPhases_reset_act = _74_OpPhases_reset_act;
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
  if (outC->init3) {
    OpPhases_reset_sel = kcg_false;
  }
  else {
    OpPhases_reset_sel = outC->OpPhases_reset_nxt;
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Launch_OpPhases :
      if (OpPhases_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (OpPhases_reset_sel) {
        outC->init2 = kcg_true;
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
      _2_fby_OperationalScenario = 0.0;
      fby_OperationalScenario = 0;
      break;
    
  }
  if (outC->init3) {
    last_GroundVisibleLocal = kcg_true;
  }
  else {
    last_GroundVisibleLocal = outC->GroundVisibleLocal;
  }
  if (outC->init3) {
    last_ApertarBotao = kcg_false;
  }
  else {
    last_ApertarBotao = outC->ApertarBotao;
  }
  if (outC->init3) {
    last_upDateSw = kcg_false;
  }
  else {
    last_upDateSw = outC->rem_upDateSw;
  }
  if (outC->init3) {
    last_MagneticTorquers = kcg_true;
  }
  else {
    last_MagneticTorquers = outC->rem_MagneticTorquers;
  }
  if (outC->init3) {
    last_Reactionwheels = kcg_true;
  }
  else {
    last_Reactionwheels = outC->rem_Reactionwheels;
  }
  if (outC->init3) {
    last_SunSensor = kcg_true;
  }
  else {
    last_SunSensor = outC->rem_SunSensor;
  }
  if (outC->init3) {
    last_Accelerometers = kcg_true;
  }
  else {
    last_Accelerometers = outC->rem_Accelerometers;
  }
  if (outC->init3) {
    last_picLocation = 0.0;
  }
  else {
    last_picLocation = outC->rem_picLocation;
  }
  if (outC->init3) {
    last_takePict = kcg_false;
  }
  else {
    last_takePict = outC->rem_takePict;
  }
  if (outC->init3) {
    last_AttitudeReference = 0;
  }
  else {
    last_AttitudeReference = outC->rem_AttitudeReference;
  }
  if (outC->init3) {
    last_Telemetry = 0;
  }
  else {
    last_Telemetry = outC->rem_Telemetry;
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L54_OpPhases_Ground = 0.0;
      _63_TorqueTgLocal = outC->_L54_OpPhases_Ground;
      outC->TorqueTgLocal = _63_TorqueTgLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L39_OpPhases_Launch = 0.0;
      _42_TorqueTgLocal = outC->_L39_OpPhases_Launch;
      outC->TorqueTgLocal = _42_TorqueTgLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (outC->init2) {
        outC->_L306_OpPhases_AttitudeAcquisition = 0.0;
      }
      else {
        outC->_L306_OpPhases_AttitudeAcquisition =
          outC->_L130_OpPhases_AttitudeAcquisition;
      }
      _21_TorqueTgLocal = outC->_L306_OpPhases_AttitudeAcquisition;
      outC->TorqueTgLocal = _21_TorqueTgLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L44_OpPhases_NormalPhase = 0.0;
      TorqueTgLocal = outC->_L44_OpPhases_NormalPhase;
      outC->TorqueTgLocal = TorqueTgLocal;
      break;
    
  }
  outC->_L54 = outC->TorqueTgLocal;
  outC->TorqueTg = outC->_L54;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L53_OpPhases_Ground = 0.0;
      _62_TorqueRdLocal = outC->_L53_OpPhases_Ground;
      outC->TorqueRdLocal = _62_TorqueRdLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L40_OpPhases_Launch = 0.0;
      _41_TorqueRdLocal = outC->_L40_OpPhases_Launch;
      outC->TorqueRdLocal = _41_TorqueRdLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (outC->init2) {
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
      outC->_L181_OpPhases_AttitudeAcquisition =
        outC->ClockTime_OpPhases_AttitudeAcquisition;
      outC->_L133_OpPhases_AttitudeAcquisition = 30.0;
      outC->LaunchTime_OpPhases_AttitudeAcquisition =
        outC->_L133_OpPhases_AttitudeAcquisition;
      outC->_L177_OpPhases_AttitudeAcquisition =
        outC->LaunchTime_OpPhases_AttitudeAcquisition;
      outC->_L186_OpPhases_AttitudeAcquisition =
        outC->_L181_OpPhases_AttitudeAcquisition /
        outC->_L177_OpPhases_AttitudeAcquisition;
      outC->_L178_OpPhases_AttitudeAcquisition = 0.8;
      outC->_L187_OpPhases_AttitudeAcquisition =
        outC->_L186_OpPhases_AttitudeAcquisition <
        outC->_L178_OpPhases_AttitudeAcquisition;
      outC->_L310_OpPhases_AttitudeAcquisition = 0.0;
      if (outC->init2) {
        outC->_L308_OpPhases_AttitudeAcquisition = 0.0;
      }
      else {
        outC->_L308_OpPhases_AttitudeAcquisition =
          outC->_L190_OpPhases_AttitudeAcquisition;
      }
      if (outC->_L187_OpPhases_AttitudeAcquisition) {
        outC->_L309_OpPhases_AttitudeAcquisition =
          outC->_L310_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L309_OpPhases_AttitudeAcquisition =
          outC->_L308_OpPhases_AttitudeAcquisition;
      }
      _20_TorqueRdLocal = outC->_L309_OpPhases_AttitudeAcquisition;
      outC->TorqueRdLocal = _20_TorqueRdLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L43_OpPhases_NormalPhase = 0.0;
      TorqueRdLocal = outC->_L43_OpPhases_NormalPhase;
      outC->TorqueRdLocal = TorqueRdLocal;
      break;
    
  }
  outC->_L53 = outC->TorqueRdLocal;
  outC->TorqueRd = outC->_L53;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L50_OpPhases_Ground = 0.0;
      _61_SpinTgLocal = outC->_L50_OpPhases_Ground;
      outC->SpinTgLocal = _61_SpinTgLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L38_OpPhases_Launch = 0.0;
      _40_SpinTgLocal = outC->_L38_OpPhases_Launch;
      outC->SpinTgLocal = _40_SpinTgLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L135_OpPhases_AttitudeAcquisition =
        outC->ClockTime_OpPhases_AttitudeAcquisition;
      outC->_L136_OpPhases_AttitudeAcquisition =
        outC->LaunchTime_OpPhases_AttitudeAcquisition;
      outC->_L138_OpPhases_AttitudeAcquisition = 0.8;
      outC->_L137_OpPhases_AttitudeAcquisition =
        outC->_L136_OpPhases_AttitudeAcquisition *
        outC->_L138_OpPhases_AttitudeAcquisition;
      outC->_L301_OpPhases_AttitudeAcquisition =
        outC->_L135_OpPhases_AttitudeAcquisition <=
        outC->_L137_OpPhases_AttitudeAcquisition;
      outC->_L140_OpPhases_AttitudeAcquisition = 0.0;
      outC->_L300_OpPhases_AttitudeAcquisition = 50.0;
      outC->_L298_OpPhases_AttitudeAcquisition =
        outC->_L135_OpPhases_AttitudeAcquisition -
        outC->_L137_OpPhases_AttitudeAcquisition;
      outC->_L303_OpPhases_AttitudeAcquisition = 0.0;
      outC->_L302_OpPhases_AttitudeAcquisition =
        outC->_L298_OpPhases_AttitudeAcquisition ==
        outC->_L303_OpPhases_AttitudeAcquisition;
      outC->_L305_OpPhases_AttitudeAcquisition = 1.0;
      if (outC->_L302_OpPhases_AttitudeAcquisition) {
        outC->_L304_OpPhases_AttitudeAcquisition =
          outC->_L305_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L304_OpPhases_AttitudeAcquisition =
          outC->_L298_OpPhases_AttitudeAcquisition;
      }
      outC->_L299_OpPhases_AttitudeAcquisition =
        outC->_L300_OpPhases_AttitudeAcquisition /
        outC->_L304_OpPhases_AttitudeAcquisition;
      if (outC->_L301_OpPhases_AttitudeAcquisition) {
        outC->_L130_OpPhases_AttitudeAcquisition =
          outC->_L140_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L130_OpPhases_AttitudeAcquisition =
          outC->_L299_OpPhases_AttitudeAcquisition;
      }
      _19_SpinTgLocal = outC->_L130_OpPhases_AttitudeAcquisition;
      outC->SpinTgLocal = _19_SpinTgLocal;
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
      _60_SpinRdLocal = outC->_L49_OpPhases_Ground;
      outC->SpinRdLocal = _60_SpinRdLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L37_OpPhases_Launch = 0.0;
      _39_SpinRdLocal = outC->_L37_OpPhases_Launch;
      outC->SpinRdLocal = _39_SpinRdLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L179_OpPhases_AttitudeAcquisition = 0.1;
      outC->_L176_OpPhases_AttitudeAcquisition =
        outC->_L186_OpPhases_AttitudeAcquisition <
        outC->_L179_OpPhases_AttitudeAcquisition;
      outC->_L184_OpPhases_AttitudeAcquisition = 2.4;
      outC->_L172_OpPhases_AttitudeAcquisition = 0.2;
      outC->_L174_OpPhases_AttitudeAcquisition =
        outC->_L186_OpPhases_AttitudeAcquisition <
        outC->_L172_OpPhases_AttitudeAcquisition;
      outC->_L175_OpPhases_AttitudeAcquisition = 52.4;
      outC->_L173_OpPhases_AttitudeAcquisition = 0.4;
      outC->_L191_OpPhases_AttitudeAcquisition =
        outC->_L186_OpPhases_AttitudeAcquisition <
        outC->_L173_OpPhases_AttitudeAcquisition;
      outC->_L180_OpPhases_AttitudeAcquisition = 38.7;
      outC->_L182_OpPhases_AttitudeAcquisition = 2.9;
      outC->_L291_OpPhases_AttitudeAcquisition = 46.1;
      outC->_L293_OpPhases_AttitudeAcquisition = 0.8;
      outC->_L292_OpPhases_AttitudeAcquisition =
        outC->_L186_OpPhases_AttitudeAcquisition -
        outC->_L293_OpPhases_AttitudeAcquisition;
      outC->_L295_OpPhases_AttitudeAcquisition = 180.5;
      outC->_L294_OpPhases_AttitudeAcquisition =
        outC->_L292_OpPhases_AttitudeAcquisition *
        outC->_L295_OpPhases_AttitudeAcquisition;
      outC->_L297_OpPhases_AttitudeAcquisition =
        outC->_L291_OpPhases_AttitudeAcquisition -
        outC->_L294_OpPhases_AttitudeAcquisition;
      if (outC->_L187_OpPhases_AttitudeAcquisition) {
        outC->_L189_OpPhases_AttitudeAcquisition =
          outC->_L182_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L189_OpPhases_AttitudeAcquisition =
          outC->_L297_OpPhases_AttitudeAcquisition;
      }
      if (outC->_L191_OpPhases_AttitudeAcquisition) {
        outC->_L185_OpPhases_AttitudeAcquisition =
          outC->_L180_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L185_OpPhases_AttitudeAcquisition =
          outC->_L189_OpPhases_AttitudeAcquisition;
      }
      if (outC->_L174_OpPhases_AttitudeAcquisition) {
        outC->_L188_OpPhases_AttitudeAcquisition =
          outC->_L175_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L188_OpPhases_AttitudeAcquisition =
          outC->_L185_OpPhases_AttitudeAcquisition;
      }
      if (outC->_L176_OpPhases_AttitudeAcquisition) {
        outC->_L190_OpPhases_AttitudeAcquisition =
          outC->_L184_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L190_OpPhases_AttitudeAcquisition =
          outC->_L188_OpPhases_AttitudeAcquisition;
      }
      _18_SpinRdLocal = outC->_L190_OpPhases_AttitudeAcquisition;
      outC->SpinRdLocal = _18_SpinRdLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L42_OpPhases_NormalPhase = 10.0;
      SpinRdLocal = outC->_L42_OpPhases_NormalPhase;
      outC->SpinRdLocal = SpinRdLocal;
      break;
    
  }
  outC->_L51 = outC->SpinRdLocal;
  outC->SpinRd = outC->_L51;
  switch (outC->OpPhases_state_sel) {
    case SSM_st_NormalPhase_OpPhases :
      if (OpPhases_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L45_OpPhases_Ground = 0.0;
      _59_LatitudeLocal = outC->_L45_OpPhases_Ground;
      outC->LatitudeLocal = _59_LatitudeLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L36_OpPhases_Launch = 0.0;
      _38_LatitudeLocal = outC->_L36_OpPhases_Launch;
      outC->LatitudeLocal = _38_LatitudeLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L43_OpPhases_AttitudeAcquisition = 0.0;
      _17_LatitudeLocal = outC->_L43_OpPhases_AttitudeAcquisition;
      outC->LatitudeLocal = _17_LatitudeLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      if (outC->init) {
        for (i1 = 0; i1 < 4; i1++) {
          outC->fby__L62_OpPhases_NormalPhase.items[i1] =
            fby_OperationalScenario;
        }
        outC->fby__L62_OpPhases_NormalPhase.idx = 0;
      }
      outC->_L62_OpPhases_NormalPhase =
        outC->fby__L62_OpPhases_NormalPhase.items[outC->fby__L62_OpPhases_NormalPhase.idx];
      outC->_L65_OpPhases_NormalPhase = 1;
      outC->_L64_OpPhases_NormalPhase = outC->_L62_OpPhases_NormalPhase +
        outC->_L65_OpPhases_NormalPhase;
      outC->_L63_OpPhases_NormalPhase = 18;
      outC->_L45_OpPhases_NormalPhase = outC->_L64_OpPhases_NormalPhase %
        outC->_L63_OpPhases_NormalPhase;
      outC->fby__L62_OpPhases_NormalPhase.items[outC->fby__L62_OpPhases_NormalPhase.idx] =
        outC->_L45_OpPhases_NormalPhase;
      outC->fby__L62_OpPhases_NormalPhase.idx =
        (outC->fby__L62_OpPhases_NormalPhase.idx + 1) % 4;
      outC->_L54_OpPhases_NormalPhase = 0.0;
      outC->_L55_OpPhases_NormalPhase = 10.2606042998;
      outC->_L56_OpPhases_NormalPhase = 19.2836282906;
      outC->_L57_OpPhases_NormalPhase = 25.9807621135;
      outC->_L59_OpPhases_NormalPhase = 29.5442325904;
      outC->_L60_OpPhases_NormalPhase = 29.5442325904;
      outC->_L61_OpPhases_NormalPhase = 25.9807621135;
      outC->_L72_OpPhases_NormalPhase = 19.2836282906;
      outC->_L66_OpPhases_NormalPhase = 10.2606042998;
      outC->_L68_OpPhases_NormalPhase = 0.0;
      outC->_L67_OpPhases_NormalPhase = - 10.2606042998;
      outC->_L69_OpPhases_NormalPhase = - 19.2836282906;
      outC->_L77_OpPhases_NormalPhase = - 25.9807621135;
      outC->_L74_OpPhases_NormalPhase = - 29.5442325904;
      outC->_L79_OpPhases_NormalPhase = - 29.5442325904;
      outC->_L82_OpPhases_NormalPhase = - 25.9807621135;
      outC->_L78_OpPhases_NormalPhase = - 19.2836282906;
      outC->_L83_OpPhases_NormalPhase = - 10.2606042998;
      outC->_L81_OpPhases_NormalPhase = 0.0;
      switch (outC->_L45_OpPhases_NormalPhase) {
        case 0 :
          outC->_L53_OpPhases_NormalPhase = outC->_L54_OpPhases_NormalPhase;
          break;
        case 1 :
          outC->_L53_OpPhases_NormalPhase = outC->_L55_OpPhases_NormalPhase;
          break;
        case 2 :
          outC->_L53_OpPhases_NormalPhase = outC->_L56_OpPhases_NormalPhase;
          break;
        case 3 :
          outC->_L53_OpPhases_NormalPhase = outC->_L57_OpPhases_NormalPhase;
          break;
        case 4 :
          outC->_L53_OpPhases_NormalPhase = outC->_L59_OpPhases_NormalPhase;
          break;
        case 5 :
          outC->_L53_OpPhases_NormalPhase = outC->_L60_OpPhases_NormalPhase;
          break;
        case 6 :
          outC->_L53_OpPhases_NormalPhase = outC->_L61_OpPhases_NormalPhase;
          break;
        case 7 :
          outC->_L53_OpPhases_NormalPhase = outC->_L72_OpPhases_NormalPhase;
          break;
        case 8 :
          outC->_L53_OpPhases_NormalPhase = outC->_L66_OpPhases_NormalPhase;
          break;
        case 9 :
          outC->_L53_OpPhases_NormalPhase = outC->_L68_OpPhases_NormalPhase;
          break;
        case 10 :
          outC->_L53_OpPhases_NormalPhase = outC->_L67_OpPhases_NormalPhase;
          break;
        case 11 :
          outC->_L53_OpPhases_NormalPhase = outC->_L69_OpPhases_NormalPhase;
          break;
        case 12 :
          outC->_L53_OpPhases_NormalPhase = outC->_L77_OpPhases_NormalPhase;
          break;
        case 13 :
          outC->_L53_OpPhases_NormalPhase = outC->_L74_OpPhases_NormalPhase;
          break;
        case 14 :
          outC->_L53_OpPhases_NormalPhase = outC->_L79_OpPhases_NormalPhase;
          break;
        case 15 :
          outC->_L53_OpPhases_NormalPhase = outC->_L82_OpPhases_NormalPhase;
          break;
        case 16 :
          outC->_L53_OpPhases_NormalPhase = outC->_L78_OpPhases_NormalPhase;
          break;
        case 17 :
          outC->_L53_OpPhases_NormalPhase = outC->_L83_OpPhases_NormalPhase;
          break;
        
        default :
          outC->_L53_OpPhases_NormalPhase = outC->_L81_OpPhases_NormalPhase;
      }
      LatitudeLocal = outC->_L53_OpPhases_NormalPhase;
      outC->LatitudeLocal = LatitudeLocal;
      break;
    
  }
  outC->_L50 = outC->LatitudeLocal;
  switch (outC->OpPhases_state_sel) {
    case SSM_st_NormalPhase_OpPhases :
      if (OpPhases_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L46_OpPhases_Ground = - 50.0;
      _58_LongitudeLocal = outC->_L46_OpPhases_Ground;
      outC->LongitudeLocal = _58_LongitudeLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L35_OpPhases_Launch = - 50.0;
      _37_LongitudeLocal = outC->_L35_OpPhases_Launch;
      outC->LongitudeLocal = _37_LongitudeLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L53_OpPhases_AttitudeAcquisition = - 50.0;
      _16_LongitudeLocal = outC->_L53_OpPhases_AttitudeAcquisition;
      outC->LongitudeLocal = _16_LongitudeLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      if (outC->init) {
        for (i = 0; i < 4; i++) {
          outC->fby__L32_OpPhases_NormalPhase.items[i] =
            _2_fby_OperationalScenario;
        }
        outC->fby__L32_OpPhases_NormalPhase.idx = 0;
      }
      outC->_L32_OpPhases_NormalPhase =
        outC->fby__L32_OpPhases_NormalPhase.items[outC->fby__L32_OpPhases_NormalPhase.idx];
      outC->_L30_OpPhases_NormalPhase = 20.0;
      outC->_L28_OpPhases_NormalPhase = outC->_L32_OpPhases_NormalPhase +
        outC->_L30_OpPhases_NormalPhase;
      LongitudeLocal = outC->_L28_OpPhases_NormalPhase;
      outC->LongitudeLocal = LongitudeLocal;
      break;
    
  }
  outC->_L49 = outC->LongitudeLocal;
  outC->SAT_Longitude_Value = outC->_L49;
  outC->SAT_Latitude_Value = outC->_L50;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L42_OpPhases_Ground = 100.0;
      _57_FuelMeterLocal = outC->_L42_OpPhases_Ground;
      outC->FuelMeterLocal = _57_FuelMeterLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L34_OpPhases_Launch = 100.0;
      _36_FuelMeterLocal = outC->_L34_OpPhases_Launch;
      outC->FuelMeterLocal = _36_FuelMeterLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L311_OpPhases_AttitudeAcquisition =
        outC->ClockTime_OpPhases_AttitudeAcquisition;
      outC->_L313_OpPhases_AttitudeAcquisition =
        outC->LaunchTime_OpPhases_AttitudeAcquisition;
      outC->_L312_OpPhases_AttitudeAcquisition =
        outC->_L311_OpPhases_AttitudeAcquisition /
        outC->_L313_OpPhases_AttitudeAcquisition;
      outC->_L314_OpPhases_AttitudeAcquisition = 0.8;
      outC->_L315_OpPhases_AttitudeAcquisition =
        outC->_L312_OpPhases_AttitudeAcquisition <
        outC->_L314_OpPhases_AttitudeAcquisition;
      outC->_L317_OpPhases_AttitudeAcquisition = 100.0;
      outC->_L323_OpPhases_AttitudeAcquisition = 100.0;
      outC->_L318_OpPhases_AttitudeAcquisition = 0.8;
      outC->_L319_OpPhases_AttitudeAcquisition =
        outC->_L312_OpPhases_AttitudeAcquisition -
        outC->_L318_OpPhases_AttitudeAcquisition;
      outC->_L321_OpPhases_AttitudeAcquisition = 500.0;
      outC->_L320_OpPhases_AttitudeAcquisition =
        outC->_L319_OpPhases_AttitudeAcquisition *
        outC->_L321_OpPhases_AttitudeAcquisition;
      outC->_L324_OpPhases_AttitudeAcquisition =
        outC->_L323_OpPhases_AttitudeAcquisition -
        outC->_L320_OpPhases_AttitudeAcquisition;
      if (outC->_L315_OpPhases_AttitudeAcquisition) {
        outC->_L316_OpPhases_AttitudeAcquisition =
          outC->_L317_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L316_OpPhases_AttitudeAcquisition =
          outC->_L324_OpPhases_AttitudeAcquisition;
      }
      _15_FuelMeterLocal = outC->_L316_OpPhases_AttitudeAcquisition;
      outC->FuelMeterLocal = _15_FuelMeterLocal;
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
      _56_LaunchVisibleLocal = outC->_L41_OpPhases_Ground;
      outC->LaunchVisibleLocal = _56_LaunchVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L33_OpPhases_Launch = kcg_true;
      _35_LaunchVisibleLocal = outC->_L33_OpPhases_Launch;
      outC->LaunchVisibleLocal = _35_LaunchVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L30_OpPhases_AttitudeAcquisition = kcg_false;
      _14_LaunchVisibleLocal = outC->_L30_OpPhases_AttitudeAcquisition;
      outC->LaunchVisibleLocal = _14_LaunchVisibleLocal;
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
      _55_color_5 = outC->_L39_OpPhases_Ground;
      outC->color_5 = _55_color_5;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L31_OpPhases_Launch = 21;
      _34_color_5 = outC->_L31_OpPhases_Launch;
      outC->color_5 = _34_color_5;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L28_OpPhases_AttitudeAcquisition = 21;
      _13_color_5 = outC->_L28_OpPhases_AttitudeAcquisition;
      outC->color_5 = _13_color_5;
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
      _54_AltitudeValueLocal = outC->_L37_OpPhases_Ground;
      outC->AltitudeValueLocal = _54_AltitudeValueLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L29_OpPhases_Launch = 0.0;
      _33_AltitudeValueLocal = outC->_L29_OpPhases_Launch;
      outC->AltitudeValueLocal = _33_AltitudeValueLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L235_OpPhases_AttitudeAcquisition =
        outC->ClockTime_OpPhases_AttitudeAcquisition;
      outC->_L230_OpPhases_AttitudeAcquisition =
        outC->LaunchTime_OpPhases_AttitudeAcquisition;
      outC->_L241_OpPhases_AttitudeAcquisition =
        outC->_L235_OpPhases_AttitudeAcquisition /
        outC->_L230_OpPhases_AttitudeAcquisition;
      outC->_L223_OpPhases_AttitudeAcquisition = 0.1;
      outC->_L233_OpPhases_AttitudeAcquisition =
        outC->_L241_OpPhases_AttitudeAcquisition <
        outC->_L223_OpPhases_AttitudeAcquisition;
      outC->_L254_OpPhases_AttitudeAcquisition = 38.0;
      outC->_L255_OpPhases_AttitudeAcquisition =
        outC->_L241_OpPhases_AttitudeAcquisition *
        outC->_L254_OpPhases_AttitudeAcquisition;
      outC->_L260_OpPhases_AttitudeAcquisition = 0.1;
      outC->_L259_OpPhases_AttitudeAcquisition =
        outC->_L255_OpPhases_AttitudeAcquisition /
        outC->_L260_OpPhases_AttitudeAcquisition;
      outC->_L236_OpPhases_AttitudeAcquisition = 0.2;
      outC->_L240_OpPhases_AttitudeAcquisition =
        outC->_L241_OpPhases_AttitudeAcquisition <
        outC->_L236_OpPhases_AttitudeAcquisition;
      outC->_L263_OpPhases_AttitudeAcquisition = 0.1;
      outC->_L262_OpPhases_AttitudeAcquisition =
        outC->_L241_OpPhases_AttitudeAcquisition -
        outC->_L263_OpPhases_AttitudeAcquisition;
      outC->_L264_OpPhases_AttitudeAcquisition = 690.0;
      outC->_L261_OpPhases_AttitudeAcquisition =
        outC->_L262_OpPhases_AttitudeAcquisition *
        outC->_L264_OpPhases_AttitudeAcquisition;
      outC->_L266_OpPhases_AttitudeAcquisition = 38.0;
      outC->_L265_OpPhases_AttitudeAcquisition =
        outC->_L261_OpPhases_AttitudeAcquisition +
        outC->_L266_OpPhases_AttitudeAcquisition;
      outC->_L234_OpPhases_AttitudeAcquisition = 0.4;
      outC->_L228_OpPhases_AttitudeAcquisition =
        outC->_L241_OpPhases_AttitudeAcquisition <
        outC->_L234_OpPhases_AttitudeAcquisition;
      outC->_L273_OpPhases_AttitudeAcquisition = 0.2;
      outC->_L267_OpPhases_AttitudeAcquisition =
        outC->_L241_OpPhases_AttitudeAcquisition -
        outC->_L273_OpPhases_AttitudeAcquisition;
      outC->_L269_OpPhases_AttitudeAcquisition = 615.0;
      outC->_L271_OpPhases_AttitudeAcquisition =
        outC->_L267_OpPhases_AttitudeAcquisition *
        outC->_L269_OpPhases_AttitudeAcquisition;
      outC->_L270_OpPhases_AttitudeAcquisition = 107.0;
      outC->_L268_OpPhases_AttitudeAcquisition =
        outC->_L271_OpPhases_AttitudeAcquisition +
        outC->_L270_OpPhases_AttitudeAcquisition;
      outC->_L222_OpPhases_AttitudeAcquisition = 0.8;
      outC->_L239_OpPhases_AttitudeAcquisition =
        outC->_L241_OpPhases_AttitudeAcquisition <
        outC->_L222_OpPhases_AttitudeAcquisition;
      outC->_L284_OpPhases_AttitudeAcquisition = 0.4;
      outC->_L282_OpPhases_AttitudeAcquisition =
        outC->_L241_OpPhases_AttitudeAcquisition -
        outC->_L284_OpPhases_AttitudeAcquisition;
      outC->_L280_OpPhases_AttitudeAcquisition = 1225.0;
      outC->_L279_OpPhases_AttitudeAcquisition =
        outC->_L282_OpPhases_AttitudeAcquisition *
        outC->_L280_OpPhases_AttitudeAcquisition;
      outC->_L281_OpPhases_AttitudeAcquisition = 230.0;
      outC->_L283_OpPhases_AttitudeAcquisition =
        outC->_L279_OpPhases_AttitudeAcquisition +
        outC->_L281_OpPhases_AttitudeAcquisition;
      outC->_L288_OpPhases_AttitudeAcquisition = 0.8;
      outC->_L289_OpPhases_AttitudeAcquisition =
        outC->_L241_OpPhases_AttitudeAcquisition -
        outC->_L288_OpPhases_AttitudeAcquisition;
      outC->_L287_OpPhases_AttitudeAcquisition = 150.0;
      outC->_L285_OpPhases_AttitudeAcquisition =
        outC->_L289_OpPhases_AttitudeAcquisition *
        outC->_L287_OpPhases_AttitudeAcquisition;
      outC->_L290_OpPhases_AttitudeAcquisition = 720.0;
      outC->_L286_OpPhases_AttitudeAcquisition =
        outC->_L285_OpPhases_AttitudeAcquisition +
        outC->_L290_OpPhases_AttitudeAcquisition;
      if (outC->_L239_OpPhases_AttitudeAcquisition) {
        outC->_L227_OpPhases_AttitudeAcquisition =
          outC->_L283_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L227_OpPhases_AttitudeAcquisition =
          outC->_L286_OpPhases_AttitudeAcquisition;
      }
      if (outC->_L228_OpPhases_AttitudeAcquisition) {
        outC->_L238_OpPhases_AttitudeAcquisition =
          outC->_L268_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L238_OpPhases_AttitudeAcquisition =
          outC->_L227_OpPhases_AttitudeAcquisition;
      }
      if (outC->_L240_OpPhases_AttitudeAcquisition) {
        outC->_L226_OpPhases_AttitudeAcquisition =
          outC->_L265_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L226_OpPhases_AttitudeAcquisition =
          outC->_L238_OpPhases_AttitudeAcquisition;
      }
      if (outC->_L233_OpPhases_AttitudeAcquisition) {
        outC->_L231_OpPhases_AttitudeAcquisition =
          outC->_L259_OpPhases_AttitudeAcquisition;
      }
      else {
        outC->_L231_OpPhases_AttitudeAcquisition =
          outC->_L226_OpPhases_AttitudeAcquisition;
      }
      _12_AltitudeValueLocal = outC->_L231_OpPhases_AttitudeAcquisition;
      outC->AltitudeValueLocal = _12_AltitudeValueLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L13_OpPhases_NormalPhase = 750.0;
      AltitudeValueLocal = outC->_L13_OpPhases_NormalPhase;
      outC->AltitudeValueLocal = AltitudeValueLocal;
      break;
    
  }
  outC->_L38 = outC->AltitudeValueLocal;
  outC->AltitudeValue = outC->_L38;
  outC->AtAcquisition = outC->_L36;
  outC->_L34 = inC->Power;
  outC->ReactionwheelsLocal = outC->_L32;
  outC->PowerLocal = outC->_L34;
  outC->GyroscopesLocal = outC->_L31;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L16_OpPhases_Ground = kcg_false;
      _53_NormalPhaseVisibleLocal = outC->_L16_OpPhases_Ground;
      outC->NormalPhaseVisibleLocal = _53_NormalPhaseVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L13_OpPhases_Launch = kcg_false;
      _32_NormalPhaseVisibleLocal = outC->_L13_OpPhases_Launch;
      outC->NormalPhaseVisibleLocal = _32_NormalPhaseVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L16_OpPhases_AttitudeAcquisition = kcg_false;
      _11_NormalPhaseVisibleLocal = outC->_L16_OpPhases_AttitudeAcquisition;
      outC->NormalPhaseVisibleLocal = _11_NormalPhaseVisibleLocal;
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
      _52_AttitudeVisibleLocal = outC->_L15_OpPhases_Ground;
      outC->AttitudeVisibleLocal = _52_AttitudeVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L12_OpPhases_Launch = kcg_false;
      _31_AttitudeVisibleLocal = outC->_L12_OpPhases_Launch;
      outC->AttitudeVisibleLocal = _31_AttitudeVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L19_OpPhases_AttitudeAcquisition = kcg_true;
      _10_AttitudeVisibleLocal = outC->_L19_OpPhases_AttitudeAcquisition;
      outC->AttitudeVisibleLocal = _10_AttitudeVisibleLocal;
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
      _51_GroundVisibleLocal = outC->_L13_OpPhases_Ground;
      outC->GroundVisibleLocal = _51_GroundVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L14_OpPhases_Launch = kcg_false;
      _30_GroundVisibleLocal = outC->_L14_OpPhases_Launch;
      outC->GroundVisibleLocal = _30_GroundVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L17_OpPhases_AttitudeAcquisition = kcg_false;
      _9_GroundVisibleLocal = outC->_L17_OpPhases_AttitudeAcquisition;
      outC->GroundVisibleLocal = _9_GroundVisibleLocal;
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
      _50_color4 = outC->_L8_OpPhases_Ground;
      outC->color4 = _50_color4;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L10_OpPhases_Launch = 21;
      _29_color4 = outC->_L10_OpPhases_Launch;
      outC->color4 = _29_color4;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L12_OpPhases_AttitudeAcquisition = 21;
      _8_color4 = outC->_L12_OpPhases_AttitudeAcquisition;
      outC->color4 = _8_color4;
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
      _49_color3 = outC->_L7_OpPhases_Ground;
      outC->color3 = _49_color3;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L7_OpPhases_Launch = 21;
      _28_color3 = outC->_L7_OpPhases_Launch;
      outC->color3 = _28_color3;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L13_OpPhases_AttitudeAcquisition = 55;
      _7_color3 = outC->_L13_OpPhases_AttitudeAcquisition;
      outC->color3 = _7_color3;
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
      _48_color_2 = outC->_L4_OpPhases_Ground;
      outC->color_2 = _48_color_2;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L6_OpPhases_Launch = 21;
      _27_color_2 = outC->_L6_OpPhases_Launch;
      outC->color_2 = _27_color_2;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L14_OpPhases_AttitudeAcquisition = 21;
      _6_color_2 = outC->_L14_OpPhases_AttitudeAcquisition;
      outC->color_2 = _6_color_2;
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
      color47 = outC->_L2_OpPhases_Ground;
      outC->color = color47;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L5_OpPhases_Launch = 55;
      color26 = outC->_L5_OpPhases_Launch;
      outC->color = color26;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L15_OpPhases_AttitudeAcquisition = 21;
      color5 = outC->_L15_OpPhases_AttitudeAcquisition;
      outC->color = color5;
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
  outC->_L7 = inC->PassarFaseBtn;
  outC->ApertarBotao = outC->_L7;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->Layer1Visible = outC->_L9;
  outC->Layer1Active = outC->_L8;
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      if (br_1_guard_OpPhases_Ground) {
        _81_OpPhases_fired_strong = SSM_TR_Ground_1_OpPhases;
      }
      else {
        _81_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      outC->OpPhases_fired_strong = _81_OpPhases_fired_strong;
      break;
    case SSM_st_Launch_OpPhases :
      _78_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      outC->OpPhases_fired_strong = _78_OpPhases_fired_strong;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _75_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      outC->OpPhases_fired_strong = _75_OpPhases_fired_strong;
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
        _72_OpPhases_fired = outC->OpPhases_fired_strong;
        _71_OpPhases_reset_nxt = kcg_false;
        _70_OpPhases_state_nxt = SSM_st_Ground_OpPhases;
        _66_OpPhases_fired = _72_OpPhases_fired;
        _65_OpPhases_reset_nxt = _71_OpPhases_reset_nxt;
        _64_OpPhases_state_nxt = _70_OpPhases_state_nxt;
      }
      else {
        br_2_guard_OpPhases_Ground = outC->StartLaunchPhase;
        if (br_2_guard_OpPhases_Ground) {
          _69_OpPhases_fired = SSM_TR_Ground_2_OpPhases;
        }
        else {
          _69_OpPhases_fired = SSM_TR_no_trans_OpPhases;
        }
        _68_OpPhases_reset_nxt = br_2_guard_OpPhases_Ground;
        if (br_2_guard_OpPhases_Ground) {
          _67_OpPhases_state_nxt = SSM_st_Launch_OpPhases;
        }
        else {
          _67_OpPhases_state_nxt = SSM_st_Ground_OpPhases;
        }
        _66_OpPhases_fired = _69_OpPhases_fired;
        _65_OpPhases_reset_nxt = _68_OpPhases_reset_nxt;
        _64_OpPhases_state_nxt = _67_OpPhases_state_nxt;
      }
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
      outC->_L2_6 = outC->Gyroscopes_6;
      outC->_L4_6 = outC->Accelerometers_6;
      outC->_L6_6 = outC->_L2_6 | outC->_L4_6;
      outC->_L5_6 = outC->SunSensor_6;
      outC->_L8_6 = outC->_L6_6 | outC->_L5_6;
      outC->SensorsStatus_6 = outC->_L8_6;
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
      _46_LaunchPhase = outC->_L27_OpPhases_Ground;
      outC->OpPhases_fired = _66_OpPhases_fired;
      outC->OpPhases_reset_nxt = _65_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _64_OpPhases_state_nxt;
      outC->LaunchPhase = _46_LaunchPhase;
      break;
    case SSM_st_Launch_OpPhases :
      _25_LaunchPhase = last_LaunchPhase;
      if (outC->init1) {
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
        _45_OpPhases_fired = SSM_TR_Launch_1_OpPhases;
      }
      else {
        _45_OpPhases_fired = SSM_TR_no_trans_OpPhases;
      }
      _44_OpPhases_reset_nxt = br_1_guard_OpPhases_Launch;
      if (br_1_guard_OpPhases_Launch) {
        _43_OpPhases_state_nxt = SSM_st_AttitudeAcquisition_OpPhases;
      }
      else {
        _43_OpPhases_state_nxt = SSM_st_Launch_OpPhases;
      }
      outC->OpPhases_fired = _45_OpPhases_fired;
      outC->OpPhases_reset_nxt = _44_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _43_OpPhases_state_nxt;
      outC->LaunchPhase = _25_LaunchPhase;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _3_LaunchPhase = last_LaunchPhase;
      outC->_L193_OpPhases_AttitudeAcquisition =
        outC->ClockTime_OpPhases_AttitudeAcquisition;
      outC->_L194_OpPhases_AttitudeAcquisition =
        outC->LaunchTime_OpPhases_AttitudeAcquisition;
      outC->_L192_OpPhases_AttitudeAcquisition =
        outC->_L193_OpPhases_AttitudeAcquisition ==
        outC->_L194_OpPhases_AttitudeAcquisition;
      outC->AtNormalPhaseLocal_OpPhases_AttitudeAcquisition =
        outC->_L192_OpPhases_AttitudeAcquisition;
      br_1_guard_OpPhases_AttitudeAcquisition =
        outC->AtNormalPhaseLocal_OpPhases_AttitudeAcquisition;
      if (br_1_guard_OpPhases_AttitudeAcquisition) {
        _24_OpPhases_fired = SSM_TR_AttitudeAcquisition_1_OpPhases;
      }
      else {
        _24_OpPhases_fired = SSM_TR_no_trans_OpPhases;
      }
      _23_OpPhases_reset_nxt = br_1_guard_OpPhases_AttitudeAcquisition;
      if (br_1_guard_OpPhases_AttitudeAcquisition) {
        _22_OpPhases_state_nxt = SSM_st_NormalPhase_OpPhases;
      }
      else {
        _22_OpPhases_state_nxt = SSM_st_AttitudeAcquisition_OpPhases;
      }
      outC->OpPhases_fired = _24_OpPhases_fired;
      outC->OpPhases_reset_nxt = _23_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _22_OpPhases_state_nxt;
      outC->LaunchPhase = _3_LaunchPhase;
      break;
    case SSM_st_NormalPhase_OpPhases :
      LaunchPhase = last_LaunchPhase;
      OpPhases_fired = outC->OpPhases_fired_strong;
      OpPhases_reset_nxt = kcg_false;
      OpPhases_state_nxt = SSM_st_NormalPhase_OpPhases;
      outC->_L38_OpPhases_NormalPhase = - 180.0;
      outC->_L36_OpPhases_NormalPhase = 180.0;
      outC->_L33_OpPhases_NormalPhase = outC->_L28_OpPhases_NormalPhase >=
        outC->_L36_OpPhases_NormalPhase;
      if (outC->_L33_OpPhases_NormalPhase) {
        outC->_L35_OpPhases_NormalPhase = outC->_L38_OpPhases_NormalPhase;
      }
      else {
        outC->_L35_OpPhases_NormalPhase = outC->_L28_OpPhases_NormalPhase;
      }
      outC->fby__L32_OpPhases_NormalPhase.items[outC->fby__L32_OpPhases_NormalPhase.idx] =
        outC->_L35_OpPhases_NormalPhase;
      outC->fby__L32_OpPhases_NormalPhase.idx =
        (outC->fby__L32_OpPhases_NormalPhase.idx + 1) % 4;
      outC->OpPhases_fired = OpPhases_fired;
      outC->OpPhases_reset_nxt = OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = OpPhases_state_nxt;
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
      outC->init1 = kcg_false;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->init2 = kcg_false;
      break;
    
  }
  outC->init3 = kcg_false;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->init4 = kcg_false;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->init = kcg_false;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** OperationalScenario.c
** Generation date: 2014-11-23T21:47:49
*************************************************************$ */

