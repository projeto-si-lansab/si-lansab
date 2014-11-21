/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Pierre Mattei/Documents/Aeropace Engineering/Doutorado/disciplinas/2014/Cunha/projeto/2sdSprint/TS02/UserApplication/Simulation\kcg_s2c_config.txt
** Generation date: 2014-09-29T18:26:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OperationalScenario.h"

void OperationalScenario_reset(outC_OperationalScenario *outC)
{
  outC->init = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
  outC->init5 = kcg_true;
  /* 7 */ TestActuators_reset(&outC->Context_7);
  /* 11 */ ReadSensors_reset(&outC->Context_11);
  /* 2 */ controlAlgorithm_reset(&outC->Context_2);
  /* 6 */ TestActuators_reset(&outC->_2_Context_6);
  /* 10 */ ReadSensors_reset(&outC->Context_10);
  /* 1 */ controlAlgorithm_reset(&outC->_1_Context_1);
  /* 5 */ TestActuators_reset(&outC->Context_5);
  /* 9 */ ReadSensors_reset(&outC->Context_9);
  /* 4 */ TestActuators_reset(&outC->Context_4);
  /* 8 */ ReadSensors_reset(&outC->Context_8);
  /* 1 */ TestActuators_reset(&outC->Context_1);
  /* 6 */ ReadSensors_reset(&outC->Context_6);
}

/* OperationalScenario */
void OperationalScenario(
  inC_OperationalScenario *inC,
  outC_OperationalScenario *outC)
{
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _54_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _53_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _52_OpPhases_state_nxt;
  /* OperationalScenario::NPhase */ kcg_bool _51_NPhase;
  /* OperationalScenario::AtAcquisition */ kcg_bool _50_AtAcquisition;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _49_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _48_AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _47_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _46_color4;
  /* OperationalScenario::color3 */ kcg_int _45_color3;
  /* OperationalScenario::color_2 */ kcg_int _44_color_2;
  /* OperationalScenario::color */ kcg_int color43;
  /* OperationalScenario::LaunchPhase */ kcg_bool _42_LaunchPhase;
  /* OperationalScenario::SafeM */ kcg_bool SafeM41;
  /* OperationalScenario::picture */ kcg_real _40_picture;
  /* OperationalScenario::payMode */ kcg_bool _39_payMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _38_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _37_safeMode;
  /* OperationalScenario::OpPhases::Ground */ kcg_bool br_2_guard_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _105_OpPhases_state_nxt;
  /* OperationalScenario::OpPhases */ kcg_bool _106_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _107_OpPhases_fired;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _108_OpPhases_state_nxt;
  /* OperationalScenario::OpPhases */ kcg_bool _109_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _110_OpPhases_fired;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _36_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _35_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _34_OpPhases_state_nxt;
  /* OperationalScenario::NPhase */ kcg_bool _33_NPhase;
  /* OperationalScenario::AtAcquisition */ kcg_bool _32_AtAcquisition;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _31_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _30_AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _29_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _28_color4;
  /* OperationalScenario::color3 */ kcg_int _27_color3;
  /* OperationalScenario::color_2 */ kcg_int _26_color_2;
  /* OperationalScenario::color */ kcg_int color25;
  /* OperationalScenario::LaunchPhase */ kcg_bool _24_LaunchPhase;
  /* OperationalScenario::SafeM */ kcg_bool SafeM23;
  /* OperationalScenario::picture */ kcg_real _22_picture;
  /* OperationalScenario::payMode */ kcg_bool _21_payMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _20_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _19_safeMode;
  /* OperationalScenario::OpPhases::Launch::AtAcquisition */ kcg_bool last_AtAcquisition_OpPhases_Launch;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _18_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _17_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _16_OpPhases_state_nxt;
  /* OperationalScenario::NPhase */ kcg_bool _15_NPhase;
  /* OperationalScenario::AtAcquisition */ kcg_bool _14_AtAcquisition;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _13_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _12_AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _11_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _10_color4;
  /* OperationalScenario::color3 */ kcg_int _9_color3;
  /* OperationalScenario::color_2 */ kcg_int _8_color_2;
  /* OperationalScenario::color */ kcg_int color7;
  /* OperationalScenario::LaunchPhase */ kcg_bool _6_LaunchPhase;
  /* OperationalScenario::SafeM */ kcg_bool SafeM5;
  /* OperationalScenario::picture */ kcg_real _4_picture;
  /* OperationalScenario::payMode */ kcg_bool _3_payMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _2_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _1_safeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_prv_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_sel_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::sMode */ kcg_bool last_sMode_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode */ kcg_bool br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude */ kcg_bool _123_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude */ kcg_bool br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _99_atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _100_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _101_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors */ kcg_bool _124_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors */ kcg_bool _125_br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _102_atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _103_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _104_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::AtAcquisition */ kcg_bool _85_AtAcquisition;
  /* OperationalScenario::NPhase */ kcg_bool _86_NPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::sMode */ kcg_bool sMode_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::AtAcquisition */ kcg_bool _87_AtAcquisition;
  /* OperationalScenario::NPhase */ kcg_bool _88_NPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::sMode */ kcg_bool sMode89_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _90_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _91_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _92_atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::AtAcquisition */ kcg_bool _93_AtAcquisition;
  /* OperationalScenario::NPhase */ kcg_bool _94_NPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::sMode */ kcg_bool sMode95_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _96_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _97_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _98_atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_nxt;
  /* OperationalScenario::NPhase */ kcg_bool NPhase;
  /* OperationalScenario::AtAcquisition */ kcg_bool AtAcquisition;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool AttitudeVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int color4;
  /* OperationalScenario::color3 */ kcg_int color3;
  /* OperationalScenario::color_2 */ kcg_int color_2;
  /* OperationalScenario::color */ kcg_int color;
  /* OperationalScenario::LaunchPhase */ kcg_bool LaunchPhase;
  /* OperationalScenario::SafeM */ kcg_bool SafeM;
  /* OperationalScenario::picture */ kcg_real picture;
  /* OperationalScenario::payMode */ kcg_bool payMode;
  /* OperationalScenario::RefAttitude */ kcg_bool RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool safeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_prv_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_sel_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::sMode */ kcg_bool last_sMode_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode */ kcg_bool br_1_guard_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload */ kcg_bool _120_br_1_guard_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _79_NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _80_NPhase_reset_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _81_NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl */ kcg_bool _121_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl */ kcg_bool _122_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _82_NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _83_NPhase_reset_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _84_NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::safeMode */ kcg_bool _55_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _56_RefAttitude;
  /* OperationalScenario::payMode */ kcg_bool _57_payMode;
  /* OperationalScenario::picture */ kcg_real _58_picture;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _78_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _77_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _76_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _75_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _74_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _73_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload */ kcg_bool br_2_guard_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::safeMode */ kcg_bool _59_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _60_RefAttitude;
  /* OperationalScenario::payMode */ kcg_bool _61_payMode;
  /* OperationalScenario::picture */ kcg_real _62_picture;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _63_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _64_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _65_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::safeMode */ kcg_bool _66_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _67_RefAttitude;
  /* OperationalScenario::payMode */ kcg_bool _68_payMode;
  /* OperationalScenario::picture */ kcg_real _69_picture;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _70_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _71_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _72_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _119_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _118_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _117_OpPhases_state_act;
  /* OperationalScenario::OpPhases::Ground */ kcg_bool br_1_guard_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _116_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _115_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _114_OpPhases_state_act;
  /* OperationalScenario::OpPhases::Launch */ kcg_bool br_2_guard_OpPhases_Launch;
  /* OperationalScenario::OpPhases::Launch */ kcg_bool br_1_guard_OpPhases_Launch;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _113_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _112_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _111_OpPhases_state_act;
  /* OperationalScenario::OpPhases::AttitudeAcquisition */ kcg_bool _127_br_2_guard_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition */ kcg_bool _126_br_1_guard_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_act;
  /* OperationalScenario::NPhase */ kcg_bool last_NPhase;
  /* OperationalScenario::AtAcquisition */ kcg_bool last_AtAcquisition;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool last_GroundVisibleLocal;
  /* OperationalScenario::ApertarBotao */ kcg_bool last_ApertarBotao;
  /* OperationalScenario::LaunchPhase */ kcg_bool last_LaunchPhase;
  /* OperationalScenario::SafeM */ kcg_bool last_SafeM;
  /* OperationalScenario::picture */ kcg_real last_picture;
  /* OperationalScenario::payMode */ kcg_bool last_payMode;
  /* OperationalScenario::StartNormalPhase */ kcg_bool last_StartNormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool last_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool last_safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool last_StartAtAcquisition;
  /* OperationalScenario::StartLaunchPhase */ kcg_bool last_StartLaunchPhase;
  /* OperationalScenario::upDateSw */ kcg_bool last_upDateSw;
  /* OperationalScenario::MagneticTorquers */ kcg_bool last_MagneticTorquers;
  /* OperationalScenario::Reactionwheels */ kcg_bool last_Reactionwheels;
  /* OperationalScenario::SunSensor */ kcg_bool last_SunSensor;
  /* OperationalScenario::Accelerometers */ kcg_bool last_Accelerometers;
  /* OperationalScenario::Gyroscopes */ kcg_bool last_Gyroscopes;
  /* OperationalScenario::picLocation */ kcg_real last_picLocation;
  /* OperationalScenario::takePict */ kcg_bool last_takePict;
  /* OperationalScenario::AttitudeReference */ kcg_int last_AttitudeReference;
  /* OperationalScenario::Telemetry */ kcg_int last_Telemetry;
  /* OperationalScenario::Power */ kcg_bool last_Power;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_sel;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_prv;
  
  if (outC->init5) {
    outC->OpPhases_state_sel = SSM_st_Ground_OpPhases;
  }
  else {
    outC->OpPhases_state_sel = outC->OpPhases_state_nxt;
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_state_act = SSM_st_NormalPhase_OpPhases;
      break;
    
  }
  if (outC->init5) {
    last_StartNormalPhase = kcg_false;
  }
  else {
    last_StartNormalPhase = outC->StartNormalPhase;
  }
  if (outC->init5) {
    last_NPhase = kcg_false;
  }
  else {
    last_NPhase = outC->NPhase;
  }
  outC->_L27 = last_NPhase;
  outC->StartNormalPhase = outC->_L27;
  switch (outC->OpPhases_state_sel) {
    case SSM_st_AttitudeAcquisition_OpPhases :
      _126_br_1_guard_OpPhases_AttitudeAcquisition = outC->StartNormalPhase;
      if (_126_br_1_guard_OpPhases_AttitudeAcquisition) {
        _111_OpPhases_state_act = SSM_st_NormalPhase_OpPhases;
      }
      else {
        _111_OpPhases_state_act = SSM_st_AttitudeAcquisition_OpPhases;
      }
      break;
    
  }
  if (outC->init5) {
    last_StartAtAcquisition = kcg_false;
  }
  else {
    last_StartAtAcquisition = outC->StartAtAcquisition;
  }
  if (outC->init5) {
    last_AtAcquisition = kcg_false;
  }
  else {
    last_AtAcquisition = outC->AtAcquisition;
  }
  outC->_L26 = last_AtAcquisition;
  outC->StartAtAcquisition = outC->_L26;
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      _117_OpPhases_state_act = SSM_st_Ground_OpPhases;
      outC->OpPhases_state_act = _117_OpPhases_state_act;
      break;
    case SSM_st_Launch_OpPhases :
      br_1_guard_OpPhases_Launch = outC->StartAtAcquisition;
      if (br_1_guard_OpPhases_Launch) {
        _114_OpPhases_state_act = SSM_st_AttitudeAcquisition_OpPhases;
      }
      else {
        _114_OpPhases_state_act = SSM_st_Launch_OpPhases;
      }
      outC->OpPhases_state_act = _114_OpPhases_state_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->OpPhases_state_act = _111_OpPhases_state_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->OpPhases_state_act = OpPhases_state_act;
      break;
    
  }
  if (outC->init5) {
    OpPhases_reset_prv = kcg_false;
  }
  else {
    OpPhases_reset_prv = outC->OpPhases_reset_act;
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Launch_OpPhases :
      br_2_guard_OpPhases_Launch = !outC->StartAtAcquisition;
      if (br_1_guard_OpPhases_Launch) {
        _115_OpPhases_reset_act = kcg_true;
      }
      else {
        _115_OpPhases_reset_act = br_2_guard_OpPhases_Launch;
      }
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _127_br_2_guard_OpPhases_AttitudeAcquisition = !outC->StartNormalPhase;
      if (_126_br_1_guard_OpPhases_AttitudeAcquisition) {
        _112_OpPhases_reset_act = kcg_true;
      }
      else {
        _112_OpPhases_reset_act = _127_br_2_guard_OpPhases_AttitudeAcquisition;
      }
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_reset_act = kcg_false;
      break;
    
  }
  if (outC->init5) {
    last_StartLaunchPhase = kcg_false;
  }
  else {
    last_StartLaunchPhase = outC->StartLaunchPhase;
  }
  if (outC->init5) {
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
      _118_OpPhases_reset_act = br_1_guard_OpPhases_Ground;
      outC->OpPhases_reset_act = _118_OpPhases_reset_act;
      break;
    case SSM_st_Launch_OpPhases :
      outC->OpPhases_reset_act = _115_OpPhases_reset_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->OpPhases_reset_act = _112_OpPhases_reset_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->OpPhases_reset_act = OpPhases_reset_act;
      break;
    
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Launch_OpPhases :
      if (outC->OpPhases_reset_act) {
        outC->init = kcg_true;
      }
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (outC->OpPhases_reset_act) {
        outC->init3 = kcg_true;
      }
      break;
    case SSM_st_NormalPhase_OpPhases :
      if (outC->OpPhases_reset_act) {
        outC->init4 = kcg_true;
      }
      break;
    
  }
  if (outC->init5) {
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
    
  }
  if (outC->init5) {
    last_GroundVisibleLocal = kcg_true;
  }
  else {
    last_GroundVisibleLocal = outC->GroundVisibleLocal;
  }
  if (outC->init5) {
    last_ApertarBotao = kcg_false;
  }
  else {
    last_ApertarBotao = outC->ApertarBotao;
  }
  if (outC->init5) {
    last_SafeM = kcg_false;
  }
  else {
    last_SafeM = outC->SafeM;
  }
  if (outC->init5) {
    last_picture = 0.0;
  }
  else {
    last_picture = outC->picture;
  }
  if (outC->init5) {
    last_payMode = kcg_false;
  }
  else {
    last_payMode = outC->payMode;
  }
  if (outC->init5) {
    last_RefAttitude = kcg_false;
  }
  else {
    last_RefAttitude = outC->RefAttitude;
  }
  if (outC->init5) {
    last_safeMode = kcg_false;
  }
  else {
    last_safeMode = outC->safeMode;
  }
  if (outC->init5) {
    last_upDateSw = kcg_false;
  }
  else {
    last_upDateSw = outC->rem_upDateSw;
  }
  if (outC->init5) {
    last_MagneticTorquers = kcg_true;
  }
  else {
    last_MagneticTorquers = outC->rem_MagneticTorquers;
  }
  if (outC->init5) {
    last_Reactionwheels = kcg_true;
  }
  else {
    last_Reactionwheels = outC->rem_Reactionwheels;
  }
  if (outC->init5) {
    last_SunSensor = kcg_true;
  }
  else {
    last_SunSensor = outC->rem_SunSensor;
  }
  if (outC->init5) {
    last_Accelerometers = kcg_true;
  }
  else {
    last_Accelerometers = outC->rem_Accelerometers;
  }
  if (outC->init5) {
    last_Gyroscopes = kcg_true;
  }
  else {
    last_Gyroscopes = outC->rem_Gyroscopes;
  }
  if (outC->init5) {
    last_picLocation = 0.0;
  }
  else {
    last_picLocation = outC->rem_picLocation;
  }
  if (outC->init5) {
    last_takePict = kcg_false;
  }
  else {
    last_takePict = outC->rem_takePict;
  }
  if (outC->init5) {
    last_AttitudeReference = 0;
  }
  else {
    last_AttitudeReference = outC->rem_AttitudeReference;
  }
  if (outC->init5) {
    last_Telemetry = 0;
  }
  else {
    last_Telemetry = outC->rem_Telemetry;
  }
  if (outC->init5) {
    last_Power = kcg_true;
  }
  else {
    last_Power = outC->rem_Power;
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L16_OpPhases_Ground = kcg_false;
      _49_NormalPhaseVisibleLocal = outC->_L16_OpPhases_Ground;
      outC->NormalPhaseVisibleLocal = _49_NormalPhaseVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L13_OpPhases_Launch = kcg_false;
      _31_NormalPhaseVisibleLocal = outC->_L13_OpPhases_Launch;
      outC->NormalPhaseVisibleLocal = _31_NormalPhaseVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L1625_OpPhases_AttitudeAcquisition = kcg_false;
      _13_NormalPhaseVisibleLocal = outC->_L1625_OpPhases_AttitudeAcquisition;
      outC->NormalPhaseVisibleLocal = _13_NormalPhaseVisibleLocal;
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
      _48_AttitudeVisibleLocal = outC->_L15_OpPhases_Ground;
      outC->AttitudeVisibleLocal = _48_AttitudeVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L12_OpPhases_Launch = kcg_false;
      _30_AttitudeVisibleLocal = outC->_L12_OpPhases_Launch;
      outC->AttitudeVisibleLocal = _30_AttitudeVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L1927_OpPhases_AttitudeAcquisition = kcg_true;
      _12_AttitudeVisibleLocal = outC->_L1927_OpPhases_AttitudeAcquisition;
      outC->AttitudeVisibleLocal = _12_AttitudeVisibleLocal;
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
      _47_GroundVisibleLocal = outC->_L13_OpPhases_Ground;
      outC->GroundVisibleLocal = _47_GroundVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L14_OpPhases_Launch = kcg_false;
      _29_GroundVisibleLocal = outC->_L14_OpPhases_Launch;
      outC->GroundVisibleLocal = _29_GroundVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L1726_OpPhases_AttitudeAcquisition = kcg_false;
      _11_GroundVisibleLocal = outC->_L1726_OpPhases_AttitudeAcquisition;
      outC->GroundVisibleLocal = _11_GroundVisibleLocal;
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
      _46_color4 = outC->_L8_OpPhases_Ground;
      outC->color4 = _46_color4;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L10_OpPhases_Launch = 21;
      _28_color4 = outC->_L10_OpPhases_Launch;
      outC->color4 = _28_color4;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L1228_OpPhases_AttitudeAcquisition = 21;
      _10_color4 = outC->_L1228_OpPhases_AttitudeAcquisition;
      outC->color4 = _10_color4;
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
      _45_color3 = outC->_L7_OpPhases_Ground;
      outC->color3 = _45_color3;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L7_OpPhases_Launch = 21;
      _27_color3 = outC->_L7_OpPhases_Launch;
      outC->color3 = _27_color3;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L1329_OpPhases_AttitudeAcquisition = 55;
      _9_color3 = outC->_L1329_OpPhases_AttitudeAcquisition;
      outC->color3 = _9_color3;
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
      _44_color_2 = outC->_L4_OpPhases_Ground;
      outC->color_2 = _44_color_2;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L6_OpPhases_Launch = 21;
      _26_color_2 = outC->_L6_OpPhases_Launch;
      outC->color_2 = _26_color_2;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L1430_OpPhases_AttitudeAcquisition = 21;
      _8_color_2 = outC->_L1430_OpPhases_AttitudeAcquisition;
      outC->color_2 = _8_color_2;
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
      color43 = outC->_L2_OpPhases_Ground;
      outC->color = color43;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L5_OpPhases_Launch = 55;
      color25 = outC->_L5_OpPhases_Launch;
      outC->color = color25;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L1531_OpPhases_AttitudeAcquisition = 21;
      color7 = outC->_L1531_OpPhases_AttitudeAcquisition;
      outC->color = color7;
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
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _51_NPhase = last_NPhase;
      _50_AtAcquisition = last_AtAcquisition;
      SafeM41 = last_SafeM;
      _40_picture = last_picture;
      _39_payMode = last_payMode;
      _38_RefAttitude = last_RefAttitude;
      _37_safeMode = last_safeMode;
      break;
    
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      if (br_1_guard_OpPhases_Ground) {
        _119_OpPhases_fired_strong = SSM_TR_Ground_1_OpPhases;
      }
      else {
        _119_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      outC->OpPhases_fired_strong = _119_OpPhases_fired_strong;
      break;
    case SSM_st_Launch_OpPhases :
      if (br_1_guard_OpPhases_Launch) {
        _116_OpPhases_fired_strong = SSM_TR_Launch_1_OpPhases;
      }
      else if (br_2_guard_OpPhases_Launch) {
        _116_OpPhases_fired_strong = SSM_TR_Launch_2_OpPhases;
      }
      else {
        _116_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      outC->OpPhases_fired_strong = _116_OpPhases_fired_strong;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (_126_br_1_guard_OpPhases_AttitudeAcquisition) {
        _113_OpPhases_fired_strong = SSM_TR_AttitudeAcquisition_1_OpPhases;
      }
      else if (_127_br_2_guard_OpPhases_AttitudeAcquisition) {
        _113_OpPhases_fired_strong = SSM_TR_AttitudeAcquisition_2_OpPhases;
      }
      else {
        _113_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      outC->OpPhases_fired_strong = _113_OpPhases_fired_strong;
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
        _110_OpPhases_fired = outC->OpPhases_fired_strong;
        _109_OpPhases_reset_nxt = kcg_false;
        _108_OpPhases_state_nxt = SSM_st_Ground_OpPhases;
        _54_OpPhases_fired = _110_OpPhases_fired;
        _53_OpPhases_reset_nxt = _109_OpPhases_reset_nxt;
        _52_OpPhases_state_nxt = _108_OpPhases_state_nxt;
      }
      else {
        br_2_guard_OpPhases_Ground = outC->StartLaunchPhase;
        if (br_2_guard_OpPhases_Ground) {
          _107_OpPhases_fired = SSM_TR_Ground_2_OpPhases;
        }
        else {
          _107_OpPhases_fired = SSM_TR_no_trans_OpPhases;
        }
        _106_OpPhases_reset_nxt = br_2_guard_OpPhases_Ground;
        if (br_2_guard_OpPhases_Ground) {
          _105_OpPhases_state_nxt = SSM_st_Launch_OpPhases;
        }
        else {
          _105_OpPhases_state_nxt = SSM_st_Ground_OpPhases;
        }
        _54_OpPhases_fired = _107_OpPhases_fired;
        _53_OpPhases_reset_nxt = _106_OpPhases_reset_nxt;
        _52_OpPhases_state_nxt = _105_OpPhases_state_nxt;
      }
      outC->_L1_OpPhases_Ground = inC->Power;
      outC->_L18_OpPhases_Ground = !outC->_L1_OpPhases_Ground;
      outC->_L19_OpPhases_Ground = inC->Gyroscopes;
      outC->_L20_OpPhases_Ground = inC->Accelerometers;
      outC->_L21_OpPhases_Ground = inC->SunSensor;
      if (outC->OpPhases_reset_act) {
        /* 6 */ ReadSensors_reset(&outC->Context_6);
      }
      /* 6 */
      ReadSensors(
        outC->_L19_OpPhases_Ground,
        outC->_L20_OpPhases_Ground,
        outC->_L21_OpPhases_Ground,
        &outC->Context_6);
      outC->_L22_OpPhases_Ground = outC->Context_6.SensorsStatus;
      outC->_L23_OpPhases_Ground = outC->_L18_OpPhases_Ground &
        outC->_L22_OpPhases_Ground;
      outC->_L26_OpPhases_Ground = inC->Reactionwheels;
      outC->_L25_OpPhases_Ground = inC->MagneticTorquers;
      if (outC->OpPhases_reset_act) {
        /* 1 */ TestActuators_reset(&outC->Context_1);
      }
      /* 1 */
      TestActuators(
        outC->_L26_OpPhases_Ground,
        outC->_L25_OpPhases_Ground,
        &outC->Context_1);
      outC->_L24_OpPhases_Ground = outC->Context_1.ActuatorsStatus;
      outC->_L27_OpPhases_Ground = outC->_L23_OpPhases_Ground &
        outC->_L24_OpPhases_Ground;
      _42_LaunchPhase = outC->_L27_OpPhases_Ground;
      outC->OpPhases_fired = _54_OpPhases_fired;
      outC->OpPhases_reset_nxt = _53_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _52_OpPhases_state_nxt;
      outC->NPhase = _51_NPhase;
      outC->AtAcquisition = _50_AtAcquisition;
      outC->LaunchPhase = _42_LaunchPhase;
      outC->SafeM = SafeM41;
      outC->picture = _40_picture;
      outC->payMode = _39_payMode;
      outC->RefAttitude = _38_RefAttitude;
      outC->safeMode = _37_safeMode;
      break;
    case SSM_st_Launch_OpPhases :
      _33_NPhase = last_NPhase;
      _32_AtAcquisition = last_AtAcquisition;
      _24_LaunchPhase = last_LaunchPhase;
      SafeM23 = last_SafeM;
      _22_picture = last_picture;
      _21_payMode = last_payMode;
      _20_RefAttitude = last_RefAttitude;
      _19_safeMode = last_safeMode;
      if (outC->init) {
        last_AtAcquisition_OpPhases_Launch = kcg_false;
      }
      else {
        last_AtAcquisition_OpPhases_Launch =
          outC->AtAcquisition_OpPhases_Launch;
      }
      _36_OpPhases_fired = outC->OpPhases_fired_strong;
      _35_OpPhases_reset_nxt = kcg_false;
      _34_OpPhases_state_nxt = SSM_st_Launch_OpPhases;
      outC->_L28_OpPhases_Launch = outC->ApertarBotao;
      outC->AtAcquisition_OpPhases_Launch = outC->_L28_OpPhases_Launch;
      outC->OpPhases_fired = _36_OpPhases_fired;
      outC->OpPhases_reset_nxt = _35_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _34_OpPhases_state_nxt;
      outC->NPhase = _33_NPhase;
      outC->AtAcquisition = _32_AtAcquisition;
      outC->LaunchPhase = _24_LaunchPhase;
      outC->SafeM = SafeM23;
      outC->picture = _22_picture;
      outC->payMode = _21_payMode;
      outC->RefAttitude = _20_RefAttitude;
      outC->safeMode = _19_safeMode;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _6_LaunchPhase = last_LaunchPhase;
      _4_picture = last_picture;
      _3_payMode = last_payMode;
      _2_RefAttitude = last_RefAttitude;
      _1_safeMode = last_safeMode;
      if (outC->init3) {
        last_sMode_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        last_sMode_OpPhases_AttitudeAcquisition =
          outC->sMode_OpPhases_AttitudeAcquisition;
      }
      _18_OpPhases_fired = outC->OpPhases_fired_strong;
      _17_OpPhases_reset_nxt = kcg_false;
      _16_OpPhases_state_nxt = SSM_st_AttitudeAcquisition_OpPhases;
      outC->_L2024_OpPhases_AttitudeAcquisition =
        last_sMode_OpPhases_AttitudeAcquisition;
      SafeM5 = outC->_L2024_OpPhases_AttitudeAcquisition;
      if (outC->init3) {
        outC->atacquisition_state_sel_OpPhases_AttitudeAcquisition =
          SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
      }
      else {
        outC->atacquisition_state_sel_OpPhases_AttitudeAcquisition =
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
      }
      outC->_7_atacquisition_clock_OpPhases_AttitudeAcquisition =
        outC->atacquisition_state_sel_OpPhases_AttitudeAcquisition;
      switch (outC->_7_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          _124_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            !SafeM5;
          _125_br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            SafeM5;
          if (_124_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _102_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else if (_125_br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _102_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else {
            _102_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
          }
          outC->atacquisition_state_act_OpPhases_AttitudeAcquisition =
            _102_atacquisition_state_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          _123_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            SafeM5;
          if (_123_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _99_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else {
            _99_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition;
          }
          outC->atacquisition_state_act_OpPhases_AttitudeAcquisition =
            _99_atacquisition_state_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_SafeMode =
            !SafeM5;
          if (br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_SafeMode) {
            atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else {
            atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          }
          outC->atacquisition_state_act_OpPhases_AttitudeAcquisition =
            atacquisition_state_act_OpPhases_AttitudeAcquisition;
          break;
        
      }
      outC->atacquisition_clock_OpPhases_AttitudeAcquisition =
        outC->atacquisition_state_act_OpPhases_AttitudeAcquisition;
      switch (outC->_7_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          if (_124_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _104_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_readsensors_1_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else if (_125_br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _104_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_readsensors_2_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else {
            _104_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_no_trans_atacquisition_OpPhases_AttitudeAcquisition;
          }
          outC->atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
            _104_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            !SafeM5;
          if (_123_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _101_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_refAttitude_1_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else if (br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _101_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_refAttitude_2_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else {
            _101_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_no_trans_atacquisition_OpPhases_AttitudeAcquisition;
          }
          outC->atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
            _101_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          if (br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_SafeMode) {
            atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_SafeMode_1_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else {
            atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_no_trans_atacquisition_OpPhases_AttitudeAcquisition;
          }
          outC->atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
            atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          break;
        
      }
      switch (outC->atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          _98_atacquisition_fired_OpPhases_AttitudeAcquisition =
            outC->atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          _97_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition = kcg_false;
          _96_atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
          outC->_L1818_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            kcg_false;
          _94_NPhase =
            outC->_L1818_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
          _93_AtAcquisition =
            outC->_L1818_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
          outC->_L1021_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            inC->Gyroscopes;
          outC->_L1222_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            inC->Accelerometers;
          outC->_L8_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            inC->SunSensor;
          break;
        
      }
      if (outC->init3) {
        atacquisition_reset_prv_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        atacquisition_reset_prv_OpPhases_AttitudeAcquisition =
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition;
      }
      switch (outC->_7_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          if (_124_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _103_atacquisition_reset_act_OpPhases_AttitudeAcquisition =
              kcg_true;
          }
          else {
            _103_atacquisition_reset_act_OpPhases_AttitudeAcquisition =
              _125_br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
          }
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            _103_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          if (_123_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _100_atacquisition_reset_act_OpPhases_AttitudeAcquisition =
              kcg_true;
          }
          else {
            _100_atacquisition_reset_act_OpPhases_AttitudeAcquisition =
              br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            _100_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            atacquisition_reset_act_OpPhases_AttitudeAcquisition;
          break;
        
      }
      if (outC->OpPhases_reset_act) {
        /* 8 */ ReadSensors_reset(&outC->Context_8);
      }
      switch (outC->atacquisition_state_act_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          if (outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition) {
            /* 8 */ ReadSensors_reset(&outC->Context_8);
          }
          break;
        
      }
      switch (outC->atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          /* 8 */
          ReadSensors(
            outC->_L1021_OpPhases_AttitudeAcquisition_atacquisition_readsensors,
            outC->_L1222_OpPhases_AttitudeAcquisition_atacquisition_readsensors,
            outC->_L8_OpPhases_AttitudeAcquisition_atacquisition_readsensors,
            &outC->Context_8);
          outC->_L5_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            outC->Context_8.SensorsStatus;
          outC->_L11_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            inC->Reactionwheels;
          outC->_L7_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            inC->MagneticTorquers;
          break;
        
      }
      if (outC->OpPhases_reset_act) {
        /* 4 */ TestActuators_reset(&outC->Context_4);
      }
      switch (outC->atacquisition_state_act_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          if (outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition) {
            /* 4 */ TestActuators_reset(&outC->Context_4);
          }
          break;
        
      }
      switch (outC->atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          /* 4 */
          TestActuators(
            outC->_L11_OpPhases_AttitudeAcquisition_atacquisition_readsensors,
            outC->_L7_OpPhases_AttitudeAcquisition_atacquisition_readsensors,
            &outC->Context_4);
          outC->_L1323_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            outC->Context_4.ActuatorsStatus;
          outC->_L620_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            outC->_L5_OpPhases_AttitudeAcquisition_atacquisition_readsensors &
            outC->_L1323_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
          outC->_L1519_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            !outC->_L620_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
          sMode95_OpPhases_AttitudeAcquisition =
            outC->_L1519_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          _87_AtAcquisition = last_AtAcquisition;
          _92_atacquisition_fired_OpPhases_AttitudeAcquisition =
            outC->atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          _91_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition = kcg_false;
          _90_atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition;
          outC->_L18_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            inC->Gyroscopes;
          outC->_L21_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            inC->Accelerometers;
          outC->_L17_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            inC->SunSensor;
          break;
        
      }
      if (outC->OpPhases_reset_act) {
        /* 9 */ ReadSensors_reset(&outC->Context_9);
      }
      switch (outC->atacquisition_state_act_OpPhases_AttitudeAcquisition) {
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          if (outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition) {
            /* 9 */ ReadSensors_reset(&outC->Context_9);
          }
          break;
        
      }
      switch (outC->atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          /* 9 */
          ReadSensors(
            outC->_L18_OpPhases_AttitudeAcquisition_atacquisition_refAttitude,
            outC->_L21_OpPhases_AttitudeAcquisition_atacquisition_refAttitude,
            outC->_L17_OpPhases_AttitudeAcquisition_atacquisition_refAttitude,
            &outC->Context_9);
          outC->_L13_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            outC->Context_9.SensorsStatus;
          outC->_L20_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            inC->Reactionwheels;
          outC->_L19_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            inC->MagneticTorquers;
          break;
        
      }
      if (outC->OpPhases_reset_act) {
        /* 5 */ TestActuators_reset(&outC->Context_5);
      }
      switch (outC->atacquisition_state_act_OpPhases_AttitudeAcquisition) {
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          if (outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition) {
            /* 5 */ TestActuators_reset(&outC->Context_5);
          }
          break;
        
      }
      switch (outC->atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          /* 5 */
          TestActuators(
            outC->_L20_OpPhases_AttitudeAcquisition_atacquisition_refAttitude,
            outC->_L19_OpPhases_AttitudeAcquisition_atacquisition_refAttitude,
            &outC->Context_5);
          outC->_L15_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            outC->Context_5.ActuatorsStatus;
          outC->_L16_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            outC->_L13_OpPhases_AttitudeAcquisition_atacquisition_refAttitude &
            outC->_L15_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          outC->_L14_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            !outC->_L16_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          break;
        
      }
      if (outC->OpPhases_reset_act) {
        /* 1 */ controlAlgorithm_reset(&outC->_1_Context_1);
      }
      switch (outC->atacquisition_state_act_OpPhases_AttitudeAcquisition) {
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          if (outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition) {
            /* 1 */ controlAlgorithm_reset(&outC->_1_Context_1);
          }
          break;
        
      }
      switch (outC->atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_fired_OpPhases_AttitudeAcquisition =
            _98_atacquisition_fired_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          /* 1 */ controlAlgorithm(&outC->_1_Context_1);
          outC->_L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            outC->_1_Context_1.ControlAlgorithmActive;
          outC->_L12_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            !outC->_L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          outC->_L22_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            outC->_L14_OpPhases_AttitudeAcquisition_atacquisition_refAttitude |
            outC->_L12_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          outC->_L23_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            !outC->_L22_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          _88_NPhase =
            outC->_L23_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          sMode89_OpPhases_AttitudeAcquisition =
            outC->_L22_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          outC->atacquisition_fired_OpPhases_AttitudeAcquisition =
            _92_atacquisition_fired_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          _86_NPhase = last_NPhase;
          _85_AtAcquisition = last_AtAcquisition;
          atacquisition_fired_OpPhases_AttitudeAcquisition =
            outC->atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          atacquisition_reset_nxt_OpPhases_AttitudeAcquisition = kcg_false;
          atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          outC->_L6_OpPhases_AttitudeAcquisition_atacquisition_SafeMode =
            inC->upDateSw;
          sMode_OpPhases_AttitudeAcquisition =
            outC->_L6_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
          outC->atacquisition_fired_OpPhases_AttitudeAcquisition =
            atacquisition_fired_OpPhases_AttitudeAcquisition;
          break;
        
      }
      if (outC->init3) {
        atacquisition_reset_sel_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        atacquisition_reset_sel_OpPhases_AttitudeAcquisition =
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
      }
      switch (outC->atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition =
            _97_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            _96_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
          outC->sMode_OpPhases_AttitudeAcquisition =
            sMode95_OpPhases_AttitudeAcquisition;
          _15_NPhase = _94_NPhase;
          _14_AtAcquisition = _93_AtAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition =
            _91_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            _90_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
          outC->sMode_OpPhases_AttitudeAcquisition =
            sMode89_OpPhases_AttitudeAcquisition;
          _15_NPhase = _88_NPhase;
          _14_AtAcquisition = _87_AtAcquisition;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition =
            atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
          outC->sMode_OpPhases_AttitudeAcquisition =
            sMode_OpPhases_AttitudeAcquisition;
          _15_NPhase = _86_NPhase;
          _14_AtAcquisition = _85_AtAcquisition;
          break;
        
      }
      outC->OpPhases_fired = _18_OpPhases_fired;
      outC->OpPhases_reset_nxt = _17_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _16_OpPhases_state_nxt;
      outC->NPhase = _15_NPhase;
      outC->AtAcquisition = _14_AtAcquisition;
      outC->LaunchPhase = _6_LaunchPhase;
      outC->SafeM = SafeM5;
      outC->picture = _4_picture;
      outC->payMode = _3_payMode;
      outC->RefAttitude = _2_RefAttitude;
      outC->safeMode = _1_safeMode;
      break;
    case SSM_st_NormalPhase_OpPhases :
      NPhase = last_NPhase;
      AtAcquisition = last_AtAcquisition;
      LaunchPhase = last_LaunchPhase;
      SafeM = last_SafeM;
      if (outC->init4) {
        last_sMode_OpPhases_NormalPhase = kcg_false;
      }
      else {
        last_sMode_OpPhases_NormalPhase = outC->sMode_OpPhases_NormalPhase;
      }
      OpPhases_fired = outC->OpPhases_fired_strong;
      OpPhases_reset_nxt = kcg_false;
      OpPhases_state_nxt = SSM_st_NormalPhase_OpPhases;
      outC->_L2_OpPhases_NormalPhase = last_safeMode;
      outC->sMode_OpPhases_NormalPhase = outC->_L2_OpPhases_NormalPhase;
      outC->_L1_OpPhases_NormalPhase = last_payMode;
      outC->pMode_OpPhases_NormalPhase = outC->_L1_OpPhases_NormalPhase;
      if (outC->init4) {
        outC->NPhase_state_sel_OpPhases_NormalPhase =
          SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
      }
      else {
        outC->NPhase_state_sel_OpPhases_NormalPhase =
          outC->NPhase_state_nxt_OpPhases_NormalPhase;
      }
      outC->_6_NPhase_clock_OpPhases_NormalPhase =
        outC->NPhase_state_sel_OpPhases_NormalPhase;
      switch (outC->_6_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          _121_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl =
            outC->pMode_OpPhases_NormalPhase;
          _122_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl =
            outC->sMode_OpPhases_NormalPhase;
          if (_121_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _82_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_Payload_OpPhases_NormalPhase_NPhase;
          }
          else if (_122_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _82_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_SafeMode_OpPhases_NormalPhase_NPhase;
          }
          else {
            _82_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          }
          outC->NPhase_state_act_OpPhases_NormalPhase =
            _82_NPhase_state_act_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          _120_br_1_guard_OpPhases_NormalPhase_NPhase_Payload =
            !outC->pMode_OpPhases_NormalPhase;
          if (_120_br_1_guard_OpPhases_NormalPhase_NPhase_Payload) {
            _79_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          }
          else {
            _79_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_Payload_OpPhases_NormalPhase_NPhase;
          }
          outC->NPhase_state_act_OpPhases_NormalPhase =
            _79_NPhase_state_act_OpPhases_NormalPhase;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          br_1_guard_OpPhases_NormalPhase_NPhase_SafeMode =
            !outC->sMode_OpPhases_NormalPhase;
          if (br_1_guard_OpPhases_NormalPhase_NPhase_SafeMode) {
            NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          }
          else {
            NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_SafeMode_OpPhases_NormalPhase_NPhase;
          }
          outC->NPhase_state_act_OpPhases_NormalPhase =
            NPhase_state_act_OpPhases_NormalPhase;
          break;
        
      }
      outC->NPhase_clock_OpPhases_NormalPhase =
        outC->NPhase_state_act_OpPhases_NormalPhase;
      switch (outC->NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          _69_picture = last_picture;
          break;
        
      }
      switch (outC->_6_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          if (_121_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _84_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_AttControl_1_NPhase_OpPhases_NormalPhase;
          }
          else if (_122_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _84_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_AttControl_2_NPhase_OpPhases_NormalPhase;
          }
          else {
            _84_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          }
          outC->NPhase_fired_strong_OpPhases_NormalPhase =
            _84_NPhase_fired_strong_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          if (_120_br_1_guard_OpPhases_NormalPhase_NPhase_Payload) {
            _81_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_Payload_1_NPhase_OpPhases_NormalPhase;
          }
          else {
            _81_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          }
          outC->NPhase_fired_strong_OpPhases_NormalPhase =
            _81_NPhase_fired_strong_OpPhases_NormalPhase;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          if (br_1_guard_OpPhases_NormalPhase_NPhase_SafeMode) {
            NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_SafeMode_1_NPhase_OpPhases_NormalPhase;
          }
          else {
            NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          }
          outC->NPhase_fired_strong_OpPhases_NormalPhase =
            NPhase_fired_strong_OpPhases_NormalPhase;
          break;
        
      }
      switch (outC->NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          _72_NPhase_fired_OpPhases_NormalPhase =
            outC->NPhase_fired_strong_OpPhases_NormalPhase;
          _71_NPhase_reset_nxt_OpPhases_NormalPhase = kcg_false;
          _70_NPhase_state_nxt_OpPhases_NormalPhase =
            SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          outC->_L109_OpPhases_NormalPhase_NPhase_AttControl = inC->Gyroscopes;
          outC->_L1413_OpPhases_NormalPhase_NPhase_AttControl =
            inC->Accelerometers;
          outC->_L1312_OpPhases_NormalPhase_NPhase_AttControl = inC->SunSensor;
          break;
        
      }
      if (outC->init4) {
        NPhase_reset_prv_OpPhases_NormalPhase = kcg_false;
      }
      else {
        NPhase_reset_prv_OpPhases_NormalPhase =
          outC->NPhase_reset_act_OpPhases_NormalPhase;
      }
      switch (outC->_6_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          if (_121_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _83_NPhase_reset_act_OpPhases_NormalPhase = kcg_true;
          }
          else {
            _83_NPhase_reset_act_OpPhases_NormalPhase =
              _122_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl;
          }
          outC->NPhase_reset_act_OpPhases_NormalPhase =
            _83_NPhase_reset_act_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          _80_NPhase_reset_act_OpPhases_NormalPhase =
            _120_br_1_guard_OpPhases_NormalPhase_NPhase_Payload;
          outC->NPhase_reset_act_OpPhases_NormalPhase =
            _80_NPhase_reset_act_OpPhases_NormalPhase;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          NPhase_reset_act_OpPhases_NormalPhase =
            br_1_guard_OpPhases_NormalPhase_NPhase_SafeMode;
          outC->NPhase_reset_act_OpPhases_NormalPhase =
            NPhase_reset_act_OpPhases_NormalPhase;
          break;
        
      }
      if (outC->OpPhases_reset_act) {
        /* 10 */ ReadSensors_reset(&outC->Context_10);
      }
      switch (outC->NPhase_state_act_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          if (outC->NPhase_reset_act_OpPhases_NormalPhase) {
            /* 10 */ ReadSensors_reset(&outC->Context_10);
          }
          break;
        
      }
      switch (outC->NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          /* 10 */
          ReadSensors(
            outC->_L109_OpPhases_NormalPhase_NPhase_AttControl,
            outC->_L1413_OpPhases_NormalPhase_NPhase_AttControl,
            outC->_L1312_OpPhases_NormalPhase_NPhase_AttControl,
            &outC->Context_10);
          outC->_L1615_OpPhases_NormalPhase_NPhase_AttControl =
            outC->Context_10.SensorsStatus;
          outC->_L1211_OpPhases_NormalPhase_NPhase_AttControl =
            inC->Reactionwheels;
          outC->_L1110_OpPhases_NormalPhase_NPhase_AttControl =
            inC->MagneticTorquers;
          break;
        
      }
      if (outC->OpPhases_reset_act) {
        /* 6 */ TestActuators_reset(&outC->_2_Context_6);
      }
      switch (outC->NPhase_state_act_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          if (outC->NPhase_reset_act_OpPhases_NormalPhase) {
            /* 6 */ TestActuators_reset(&outC->_2_Context_6);
          }
          break;
        
      }
      switch (outC->NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          /* 6 */
          TestActuators(
            outC->_L1211_OpPhases_NormalPhase_NPhase_AttControl,
            outC->_L1110_OpPhases_NormalPhase_NPhase_AttControl,
            &outC->_2_Context_6);
          outC->_L1514_OpPhases_NormalPhase_NPhase_AttControl =
            outC->_2_Context_6.ActuatorsStatus;
          outC->_L1716_OpPhases_NormalPhase_NPhase_AttControl =
            outC->_L1615_OpPhases_NormalPhase_NPhase_AttControl &
            outC->_L1514_OpPhases_NormalPhase_NPhase_AttControl;
          outC->_L188_OpPhases_NormalPhase_NPhase_AttControl =
            !outC->_L1716_OpPhases_NormalPhase_NPhase_AttControl;
          _66_safeMode = outC->_L188_OpPhases_NormalPhase_NPhase_AttControl;
          outC->_L2_OpPhases_NormalPhase_NPhase_AttControl = inC->takePict;
          _68_payMode = outC->_L2_OpPhases_NormalPhase_NPhase_AttControl;
          break;
        
      }
      if (outC->OpPhases_reset_act) {
        /* 2 */ controlAlgorithm_reset(&outC->Context_2);
      }
      switch (outC->NPhase_state_act_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          if (outC->NPhase_reset_act_OpPhases_NormalPhase) {
            /* 2 */ controlAlgorithm_reset(&outC->Context_2);
          }
          break;
        
      }
      switch (outC->NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          /* 2 */ controlAlgorithm(&outC->Context_2);
          outC->_L917_OpPhases_NormalPhase_NPhase_AttControl =
            outC->Context_2.ControlAlgorithmActive;
          _67_RefAttitude = outC->_L917_OpPhases_NormalPhase_NPhase_AttControl;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          _60_RefAttitude = last_RefAttitude;
          outC->Payload_weakb_clock_OpPhases_NormalPhase_NPhase =
            outC->NPhase_fired_strong_OpPhases_NormalPhase !=
            SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          if (outC->Payload_weakb_clock_OpPhases_NormalPhase_NPhase) {
            _78_NPhase_fired_OpPhases_NormalPhase =
              outC->NPhase_fired_strong_OpPhases_NormalPhase;
            _77_NPhase_reset_nxt_OpPhases_NormalPhase = kcg_false;
            _76_NPhase_state_nxt_OpPhases_NormalPhase =
              SSM_st_Payload_OpPhases_NormalPhase_NPhase;
            _65_NPhase_fired_OpPhases_NormalPhase =
              _78_NPhase_fired_OpPhases_NormalPhase;
            _64_NPhase_reset_nxt_OpPhases_NormalPhase =
              _77_NPhase_reset_nxt_OpPhases_NormalPhase;
            _63_NPhase_state_nxt_OpPhases_NormalPhase =
              _76_NPhase_state_nxt_OpPhases_NormalPhase;
          }
          else {
            br_2_guard_OpPhases_NormalPhase_NPhase_Payload =
              outC->sMode_OpPhases_NormalPhase;
            if (br_2_guard_OpPhases_NormalPhase_NPhase_Payload) {
              _75_NPhase_fired_OpPhases_NormalPhase =
                SSM_TR_Payload_2_NPhase_OpPhases_NormalPhase;
            }
            else {
              _75_NPhase_fired_OpPhases_NormalPhase =
                SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
            }
            _74_NPhase_reset_nxt_OpPhases_NormalPhase =
              br_2_guard_OpPhases_NormalPhase_NPhase_Payload;
            if (br_2_guard_OpPhases_NormalPhase_NPhase_Payload) {
              _73_NPhase_state_nxt_OpPhases_NormalPhase =
                SSM_st_SafeMode_OpPhases_NormalPhase_NPhase;
            }
            else {
              _73_NPhase_state_nxt_OpPhases_NormalPhase =
                SSM_st_Payload_OpPhases_NormalPhase_NPhase;
            }
            _65_NPhase_fired_OpPhases_NormalPhase =
              _75_NPhase_fired_OpPhases_NormalPhase;
            _64_NPhase_reset_nxt_OpPhases_NormalPhase =
              _74_NPhase_reset_nxt_OpPhases_NormalPhase;
            _63_NPhase_state_nxt_OpPhases_NormalPhase =
              _73_NPhase_state_nxt_OpPhases_NormalPhase;
          }
          outC->_L19_OpPhases_NormalPhase_NPhase_Payload = inC->SunSensor;
          outC->_L18_OpPhases_NormalPhase_NPhase_Payload = inC->Gyroscopes;
          outC->_L17_OpPhases_NormalPhase_NPhase_Payload =
            inC->MagneticTorquers;
          outC->_L12_OpPhases_NormalPhase_NPhase_Payload = inC->Accelerometers;
          break;
        
      }
      if (outC->OpPhases_reset_act) {
        /* 11 */ ReadSensors_reset(&outC->Context_11);
      }
      switch (outC->NPhase_state_act_OpPhases_NormalPhase) {
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          if (outC->NPhase_reset_act_OpPhases_NormalPhase) {
            /* 11 */ ReadSensors_reset(&outC->Context_11);
          }
          break;
        
      }
      switch (outC->NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          /* 11 */
          ReadSensors(
            outC->_L18_OpPhases_NormalPhase_NPhase_Payload,
            outC->_L12_OpPhases_NormalPhase_NPhase_Payload,
            outC->_L19_OpPhases_NormalPhase_NPhase_Payload,
            &outC->Context_11);
          outC->_L15_OpPhases_NormalPhase_NPhase_Payload =
            outC->Context_11.SensorsStatus;
          outC->_L14_OpPhases_NormalPhase_NPhase_Payload = inC->Reactionwheels;
          break;
        
      }
      if (outC->OpPhases_reset_act) {
        /* 7 */ TestActuators_reset(&outC->Context_7);
      }
      switch (outC->NPhase_state_act_OpPhases_NormalPhase) {
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          if (outC->NPhase_reset_act_OpPhases_NormalPhase) {
            /* 7 */ TestActuators_reset(&outC->Context_7);
          }
          break;
        
      }
      switch (outC->NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          outC->NPhase_fired_OpPhases_NormalPhase =
            _72_NPhase_fired_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          /* 7 */
          TestActuators(
            outC->_L14_OpPhases_NormalPhase_NPhase_Payload,
            outC->_L17_OpPhases_NormalPhase_NPhase_Payload,
            &outC->Context_7);
          outC->_L11_OpPhases_NormalPhase_NPhase_Payload =
            outC->Context_7.ActuatorsStatus;
          outC->_L16_OpPhases_NormalPhase_NPhase_Payload =
            outC->_L15_OpPhases_NormalPhase_NPhase_Payload &
            outC->_L11_OpPhases_NormalPhase_NPhase_Payload;
          outC->_L13_OpPhases_NormalPhase_NPhase_Payload =
            !outC->_L16_OpPhases_NormalPhase_NPhase_Payload;
          _59_safeMode = outC->_L13_OpPhases_NormalPhase_NPhase_Payload;
          outC->_L10_OpPhases_NormalPhase_NPhase_Payload = 0.0;
          outC->_L9_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          _62_picture = outC->_L10_OpPhases_NormalPhase_NPhase_Payload;
          _61_payMode = outC->_L9_OpPhases_NormalPhase_NPhase_Payload;
          outC->NPhase_fired_OpPhases_NormalPhase =
            _65_NPhase_fired_OpPhases_NormalPhase;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          _58_picture = last_picture;
          _57_payMode = last_payMode;
          _56_RefAttitude = last_RefAttitude;
          NPhase_fired_OpPhases_NormalPhase =
            outC->NPhase_fired_strong_OpPhases_NormalPhase;
          NPhase_reset_nxt_OpPhases_NormalPhase = kcg_false;
          NPhase_state_nxt_OpPhases_NormalPhase =
            SSM_st_SafeMode_OpPhases_NormalPhase_NPhase;
          outC->_L4_OpPhases_NormalPhase_NPhase_SafeMode = kcg_false;
          _55_safeMode = outC->_L4_OpPhases_NormalPhase_NPhase_SafeMode;
          outC->NPhase_fired_OpPhases_NormalPhase =
            NPhase_fired_OpPhases_NormalPhase;
          break;
        
      }
      if (outC->init4) {
        NPhase_reset_sel_OpPhases_NormalPhase = kcg_false;
      }
      else {
        NPhase_reset_sel_OpPhases_NormalPhase =
          outC->NPhase_reset_nxt_OpPhases_NormalPhase;
      }
      switch (outC->NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_nxt_OpPhases_NormalPhase =
            _71_NPhase_reset_nxt_OpPhases_NormalPhase;
          outC->NPhase_state_nxt_OpPhases_NormalPhase =
            _70_NPhase_state_nxt_OpPhases_NormalPhase;
          picture = _69_picture;
          payMode = _68_payMode;
          RefAttitude = _67_RefAttitude;
          safeMode = _66_safeMode;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_nxt_OpPhases_NormalPhase =
            _64_NPhase_reset_nxt_OpPhases_NormalPhase;
          outC->NPhase_state_nxt_OpPhases_NormalPhase =
            _63_NPhase_state_nxt_OpPhases_NormalPhase;
          picture = _62_picture;
          payMode = _61_payMode;
          RefAttitude = _60_RefAttitude;
          safeMode = _59_safeMode;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_nxt_OpPhases_NormalPhase =
            NPhase_reset_nxt_OpPhases_NormalPhase;
          outC->NPhase_state_nxt_OpPhases_NormalPhase =
            NPhase_state_nxt_OpPhases_NormalPhase;
          picture = _58_picture;
          payMode = _57_payMode;
          RefAttitude = _56_RefAttitude;
          safeMode = _55_safeMode;
          break;
        
      }
      outC->OpPhases_fired = OpPhases_fired;
      outC->OpPhases_reset_nxt = OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = OpPhases_state_nxt;
      outC->NPhase = NPhase;
      outC->AtAcquisition = AtAcquisition;
      outC->LaunchPhase = LaunchPhase;
      outC->SafeM = SafeM;
      outC->picture = picture;
      outC->payMode = payMode;
      outC->RefAttitude = RefAttitude;
      outC->safeMode = safeMode;
      break;
    
  }
  outC->rem_Power = inC->Power;
  outC->rem_Telemetry = inC->Telemetry;
  outC->rem_AttitudeReference = inC->AttitudeReference;
  outC->rem_takePict = inC->takePict;
  outC->rem_picLocation = inC->picLocation;
  outC->rem_Gyroscopes = inC->Gyroscopes;
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
      outC->init3 = kcg_false;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->init4 = kcg_false;
      break;
    
  }
  outC->init5 = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** OperationalScenario.c
** Generation date: 2014-09-29T18:26:24
*************************************************************$ */

