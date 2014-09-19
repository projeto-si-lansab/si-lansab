/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/ITA/TS02/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-09-19T00:33:13
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "OperationalScenario.h"

void OperationalScenario_reset(outC_OperationalScenario *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
}

/* OperationalScenario */
void OperationalScenario(
  inC_OperationalScenario *inC,
  outC_OperationalScenario *outC)
{
  /* ReadSensors::_L1 */ kcg_bool _L1_3;
  /* ReadSensors::SensorsActive */ kcg_bool SensorsActive_3;
  /* ReadSensors::_L1 */ kcg_bool _L1_5;
  /* ReadSensors::SensorsActive */ kcg_bool SensorsActive_5;
  /* controlAlgorithm::_L1 */ kcg_bool _L1_12;
  /* controlAlgorithm::ControlAlgorithmActive */ kcg_bool ControlAlgorithmActive_1;
  /* upDateSw::_L1 */ kcg_bool _L1_1;
  /* upDateSw::Updating */ kcg_bool Updating_1;
  /* controlAlgorithm::_L1 */ kcg_bool _L1_21;
  /* controlAlgorithm::ControlAlgorithmActive */ kcg_bool ControlAlgorithmActive_2;
  /* upDateSw::_L1 */ kcg_bool _L1_2;
  /* upDateSw::Updating */ kcg_bool Updating_2;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _41_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _40_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _39_OpPhases_state_nxt;
  /* OperationalScenario::color4 */ kcg_int _38_color4;
  /* OperationalScenario::color3 */ kcg_int _37_color3;
  /* OperationalScenario::color_2 */ kcg_int _36_color_2;
  /* OperationalScenario::color */ kcg_int color35;
  /* OperationalScenario::picture */ kcg_real _34_picture;
  /* OperationalScenario::payMode */ kcg_bool _33_payMode;
  /* OperationalScenario::NormalPhase */ kcg_bool _32_NormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool _31_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _30_safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool _29_StartAtAcquisition;
  /* OperationalScenario::OpPhases::Ground::_L8 */ kcg_int _L8_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::_L7 */ kcg_int _L7_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::_L4 */ kcg_int _L4_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::_L2 */ kcg_int _L2_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::_L1 */ kcg_bool _L1_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _28_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _27_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _26_OpPhases_state_nxt;
  /* OperationalScenario::color4 */ kcg_int _25_color4;
  /* OperationalScenario::color3 */ kcg_int _24_color3;
  /* OperationalScenario::color_2 */ kcg_int _23_color_2;
  /* OperationalScenario::color */ kcg_int color22;
  /* OperationalScenario::picture */ kcg_real _21_picture;
  /* OperationalScenario::payMode */ kcg_bool _20_payMode;
  /* OperationalScenario::NormalPhase */ kcg_bool _19_NormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool _18_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _17_safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool _16_StartAtAcquisition;
  /* OperationalScenario::OpPhases::Launch::_L7 */ kcg_int _L7_OpPhases_Launch;
  /* OperationalScenario::OpPhases::Launch::_L10 */ kcg_int _L10_OpPhases_Launch;
  /* OperationalScenario::OpPhases::Launch::_L6 */ kcg_int _L6_OpPhases_Launch;
  /* OperationalScenario::OpPhases::Launch::_L5 */ kcg_int _L5_OpPhases_Launch;
  /* OperationalScenario::OpPhases::Launch::_L3 */ kcg_bool _L3_OpPhases_Launch;
  /* OperationalScenario::OpPhases::Launch::_L2 */ kcg_bool _L2_OpPhases_Launch;
  /* OperationalScenario::OpPhases::Launch::_L1 */ kcg_int _L1_OpPhases_Launch;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _15_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _14_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _13_OpPhases_state_nxt;
  /* OperationalScenario::color4 */ kcg_int _12_color4;
  /* OperationalScenario::color3 */ kcg_int _11_color3;
  /* OperationalScenario::color_2 */ kcg_int _10_color_2;
  /* OperationalScenario::color */ kcg_int color9;
  /* OperationalScenario::picture */ kcg_real _8_picture;
  /* OperationalScenario::payMode */ kcg_bool _7_payMode;
  /* OperationalScenario::NormalPhase */ kcg_bool _6_NormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool _5_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _4_safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool _3_StartAtAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::_L12 */ kcg_int _L12_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::_L13 */ kcg_int _L13_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::_L14 */ kcg_int _L14_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::_L15 */ kcg_int _L15_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::_L5 */ kcg_bool _L5141_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::_L3 */ kcg_bool _L3142_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::_L2 */ kcg_bool _L2143_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::_L1 */ kcg_int _L1144_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _113_atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _114_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_prv_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_sel_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _115_atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition atacquisition_state_sel_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _103_atacquisition_clock_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition atacquisition_clock_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::sMode */ kcg_bool last_sMode_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::RefAtt */ kcg_bool last_RefAtt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::NPhase */ kcg_bool last_NPhase_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode */ kcg_bool br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude */ kcg_bool _111_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _87_atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _88_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _89_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors */ kcg_bool _112_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors */ kcg_bool br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _90_atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _91_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _92_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L1 */ kcg_bool _L1_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L2 */ kcg_bool _L2_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L3 */ kcg_bool _L3_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L4 */ kcg_bool _L4_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L5 */ kcg_bool _L5_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::safeMode */ kcg_bool _72_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _73_RefAttitude;
  /* OperationalScenario::NormalPhase */ kcg_bool _74_NormalPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L1 */ kcg_bool _L1138_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L2 */ kcg_bool _L2137_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L3 */ kcg_bool _L3136_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L4 */ kcg_bool _L4135_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L5 */ kcg_bool _L5134_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L6 */ kcg_bool _L6_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L7 */ kcg_bool _L7_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L8 */ kcg_bool _L8_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L9 */ kcg_bool _L9_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L10 */ kcg_bool _L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _75_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _76_RefAttitude;
  /* OperationalScenario::NormalPhase */ kcg_bool _77_NormalPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _78_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _79_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _80_atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L1 */ kcg_bool _L1140_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L2 */ kcg_bool _L2139_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  /* OperationalScenario::safeMode */ kcg_bool _81_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _82_RefAttitude;
  /* OperationalScenario::NormalPhase */ kcg_bool _83_NormalPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _84_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _85_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _86_atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_nxt;
  /* OperationalScenario::color4 */ kcg_int color4;
  /* OperationalScenario::color3 */ kcg_int color3;
  /* OperationalScenario::color_2 */ kcg_int color_2;
  /* OperationalScenario::color */ kcg_int color;
  /* OperationalScenario::picture */ kcg_real picture;
  /* OperationalScenario::payMode */ kcg_bool payMode;
  /* OperationalScenario::NormalPhase */ kcg_bool NormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool StartAtAcquisition;
  /* OperationalScenario::OpPhases::NormalPhase::_L5 */ kcg_int _L5_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::_L6 */ kcg_int _L6_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::_L7 */ kcg_int _L7_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::_L8 */ kcg_int _L8_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::_L2 */ kcg_bool _L2_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::_L1 */ kcg_bool _L1_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::pMode */ kcg_bool pMode_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _107_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _108_NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_prv_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_sel_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _109_NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase NPhase_state_sel_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _102_NPhase_clock_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase NPhase_clock_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::sMode */ kcg_bool last_sMode_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode */ kcg_bool br_1_guard_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload */ kcg_bool _104_br_1_guard_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _66_NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _67_NPhase_reset_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _68_NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl */ kcg_bool _105_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl */ kcg_bool _106_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _69_NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _70_NPhase_reset_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _71_NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L1 */ kcg_bool _L1_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L2 */ kcg_bool _L2_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L3 */ kcg_bool _L3_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L4 */ kcg_bool _L4_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L5 */ kcg_bool _L5_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::safeMode */ kcg_bool _42_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _43_RefAttitude;
  /* OperationalScenario::payMode */ kcg_bool _44_payMode;
  /* OperationalScenario::picture */ kcg_real _45_picture;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _65_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _64_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _63_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _62_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _61_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _60_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload */ kcg_bool br_2_guard_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload */ kcg_bool Payload_weakb_clock_OpPhases_NormalPhase_NPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L1 */ kcg_bool _L1124_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L2 */ kcg_bool _L2123_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L3 */ kcg_real _L3122_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L4 */ kcg_bool _L4121_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L5 */ kcg_bool _L5120_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L6 */ kcg_bool _L6_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L7 */ kcg_bool _L7_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L8 */ kcg_bool _L8_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L9 */ kcg_bool _L9_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L10 */ kcg_real _L10_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::safeMode */ kcg_bool _46_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _47_RefAttitude;
  /* OperationalScenario::payMode */ kcg_bool _48_payMode;
  /* OperationalScenario::picture */ kcg_real _49_picture;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _50_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _51_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _52_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L1 */ kcg_int _L1133_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L2 */ kcg_bool _L2132_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L3 */ kcg_real _L3131_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L4 */ kcg_bool _L4130_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L5 */ kcg_bool _L5129_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L6 */ kcg_bool _L6128_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L7 */ kcg_bool _L7127_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L8 */ kcg_bool _L8126_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L9 */ kcg_bool _L9125_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::safeMode */ kcg_bool _53_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _54_RefAttitude;
  /* OperationalScenario::payMode */ kcg_bool _55_payMode;
  /* OperationalScenario::picture */ kcg_real _56_picture;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _57_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _58_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _59_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _101_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _100_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _99_OpPhases_state_act;
  /* OperationalScenario::OpPhases::Ground */ kcg_bool br_1_guard_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _98_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _97_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _96_OpPhases_state_act;
  /* OperationalScenario::OpPhases::Launch */ kcg_bool br_1_guard_OpPhases_Launch;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _95_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _94_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _93_OpPhases_state_act;
  /* OperationalScenario::OpPhases::AttitudeAcquisition */ kcg_bool _116_br_1_guard_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_act;
  /* OperationalScenario::OpPhases::NormalPhase */ kcg_bool _110_br_1_guard_OpPhases_NormalPhase;
  /* OperationalScenario::NPhase */ kcg_bool last_NPhase;
  /* OperationalScenario::AtAcquisition */ kcg_bool last_AtAcquisition;
  /* OperationalScenario::LaunchPhase */ kcg_bool last_LaunchPhase;
  /* OperationalScenario::picture */ kcg_real last_picture;
  /* OperationalScenario::payMode */ kcg_bool last_payMode;
  /* OperationalScenario::NormalPhase */ kcg_bool last_NormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool last_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool last_safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool last_StartAtAcquisition;
  /* OperationalScenario::StartLaunchPhase */ kcg_bool last_StartLaunchPhase;
  /* OperationalScenario::picLocation */ kcg_real last_picLocation;
  /* OperationalScenario::takePict */ kcg_bool last_takePict;
  /* OperationalScenario::AttitudeReference */ kcg_int last_AttitudeReference;
  /* OperationalScenario::Telemetry */ kcg_int last_Telemetry;
  /* OperationalScenario::Power */ kcg_bool last_Power;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_sel;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _119_OpPhases_state_act;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_sel;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_prv;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _118_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _117_OpPhases_fired;
  /* OperationalScenario::ApertarBotao */ kcg_bool ApertarBotao;
  /* OperationalScenario::color */ kcg_int color148;
  /* OperationalScenario::color_2 */ kcg_int _147_color_2;
  /* OperationalScenario::color3 */ kcg_int _146_color3;
  /* OperationalScenario::color4 */ kcg_int _145_color4;
  /* OperationalScenario::_L1 */ kcg_bool _L1;
  /* OperationalScenario::_L3 */ kcg_bool _L3;
  /* OperationalScenario::_L4 */ kcg_bool _L4;
  /* OperationalScenario::_L6 */ kcg_bool _L6;
  /* OperationalScenario::_L7 */ kcg_bool _L7;
  /* OperationalScenario::_L8 */ kcg_bool _L8;
  /* OperationalScenario::_L9 */ kcg_bool _L9;
  /* OperationalScenario::_L11 */ kcg_bool _L11;
  /* OperationalScenario::_L12 */ kcg_int _L12;
  /* OperationalScenario::_L13 */ kcg_int _L13;
  /* OperationalScenario::_L14 */ kcg_int _L14;
  /* OperationalScenario::_L15 */ kcg_int _L15;
  
  if (outC->init2) {
    OpPhases_state_sel = SSM_st_Ground_OpPhases;
  }
  else {
    OpPhases_state_sel = outC->OpPhases_state_nxt;
  }
  _L7 = inC->PassarFaseBtn;
  ApertarBotao = _L7;
  switch (OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      br_1_guard_OpPhases_Ground = ApertarBotao;
      if (br_1_guard_OpPhases_Ground) {
        _99_OpPhases_state_act = SSM_st_Launch_OpPhases;
      }
      else {
        _99_OpPhases_state_act = SSM_st_Ground_OpPhases;
      }
      _119_OpPhases_state_act = _99_OpPhases_state_act;
      break;
    case SSM_st_Launch_OpPhases :
      br_1_guard_OpPhases_Launch = ApertarBotao;
      if (br_1_guard_OpPhases_Launch) {
        _96_OpPhases_state_act = SSM_st_AttitudeAcquisition_OpPhases;
      }
      else {
        _96_OpPhases_state_act = SSM_st_Launch_OpPhases;
      }
      _119_OpPhases_state_act = _96_OpPhases_state_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _116_br_1_guard_OpPhases_AttitudeAcquisition = ApertarBotao;
      if (_116_br_1_guard_OpPhases_AttitudeAcquisition) {
        _93_OpPhases_state_act = SSM_st_NormalPhase_OpPhases;
      }
      else {
        _93_OpPhases_state_act = SSM_st_AttitudeAcquisition_OpPhases;
      }
      _119_OpPhases_state_act = _93_OpPhases_state_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      _110_br_1_guard_OpPhases_NormalPhase = ApertarBotao;
      if (_110_br_1_guard_OpPhases_NormalPhase) {
        OpPhases_state_act = SSM_st_Ground_OpPhases;
      }
      else {
        OpPhases_state_act = SSM_st_NormalPhase_OpPhases;
      }
      _119_OpPhases_state_act = OpPhases_state_act;
      break;
    
  }
  if (outC->init2) {
    OpPhases_reset_prv = kcg_false;
  }
  else {
    OpPhases_reset_prv = outC->OpPhases_reset_act;
  }
  switch (OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      _100_OpPhases_reset_act = br_1_guard_OpPhases_Ground;
      outC->OpPhases_reset_act = _100_OpPhases_reset_act;
      break;
    case SSM_st_Launch_OpPhases :
      _97_OpPhases_reset_act = br_1_guard_OpPhases_Launch;
      outC->OpPhases_reset_act = _97_OpPhases_reset_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _94_OpPhases_reset_act = _116_br_1_guard_OpPhases_AttitudeAcquisition;
      outC->OpPhases_reset_act = _94_OpPhases_reset_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_reset_act = _110_br_1_guard_OpPhases_NormalPhase;
      outC->OpPhases_reset_act = OpPhases_reset_act;
      break;
    
  }
  switch (_119_OpPhases_state_act) {
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (outC->OpPhases_reset_act) {
        outC->init = kcg_true;
      }
      break;
    case SSM_st_NormalPhase_OpPhases :
      if (outC->OpPhases_reset_act) {
        outC->init1 = kcg_true;
      }
      break;
    
  }
  if (outC->init2) {
    last_NPhase = kcg_false;
  }
  else {
    last_NPhase = outC->NPhase;
  }
  if (outC->init2) {
    last_AtAcquisition = kcg_false;
  }
  else {
    last_AtAcquisition = outC->AtAcquisition;
  }
  if (outC->init2) {
    last_LaunchPhase = kcg_false;
  }
  else {
    last_LaunchPhase = outC->LaunchPhase;
  }
  if (outC->init2) {
    last_picture = 0.0;
  }
  else {
    last_picture = outC->picture;
  }
  if (outC->init2) {
    last_payMode = kcg_false;
  }
  else {
    last_payMode = outC->payMode;
  }
  if (outC->init2) {
    last_NormalPhase = kcg_false;
  }
  else {
    last_NormalPhase = outC->NormalPhase;
  }
  if (outC->init2) {
    last_RefAttitude = kcg_false;
  }
  else {
    last_RefAttitude = outC->RefAttitude;
  }
  if (outC->init2) {
    last_safeMode = kcg_false;
  }
  else {
    last_safeMode = outC->safeMode;
  }
  if (outC->init2) {
    last_StartAtAcquisition = kcg_false;
  }
  else {
    last_StartAtAcquisition = outC->StartAtAcquisition;
  }
  if (outC->init2) {
    last_StartLaunchPhase = kcg_false;
  }
  else {
    last_StartLaunchPhase = outC->StartLaunchPhase;
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
  if (outC->init2) {
    last_Power = kcg_false;
  }
  else {
    last_Power = outC->rem_Power;
  }
  switch (_119_OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _L8_OpPhases_Ground = 21;
      _38_color4 = _L8_OpPhases_Ground;
      _145_color4 = _38_color4;
      break;
    case SSM_st_Launch_OpPhases :
      _L10_OpPhases_Launch = 21;
      _25_color4 = _L10_OpPhases_Launch;
      _145_color4 = _25_color4;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _L12_OpPhases_AttitudeAcquisition = 21;
      _12_color4 = _L12_OpPhases_AttitudeAcquisition;
      _145_color4 = _12_color4;
      break;
    case SSM_st_NormalPhase_OpPhases :
      _L7_OpPhases_NormalPhase = 55;
      color4 = _L7_OpPhases_NormalPhase;
      _145_color4 = color4;
      break;
    
  }
  _L15 = _145_color4;
  outC->ColorIndex4 = _L15;
  switch (_119_OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _L7_OpPhases_Ground = 21;
      _37_color3 = _L7_OpPhases_Ground;
      _146_color3 = _37_color3;
      break;
    case SSM_st_Launch_OpPhases :
      _L7_OpPhases_Launch = 21;
      _24_color3 = _L7_OpPhases_Launch;
      _146_color3 = _24_color3;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _L13_OpPhases_AttitudeAcquisition = 55;
      _11_color3 = _L13_OpPhases_AttitudeAcquisition;
      _146_color3 = _11_color3;
      break;
    case SSM_st_NormalPhase_OpPhases :
      _L8_OpPhases_NormalPhase = 21;
      color3 = _L8_OpPhases_NormalPhase;
      _146_color3 = color3;
      break;
    
  }
  _L14 = _146_color3;
  outC->ColorIndex3 = _L14;
  switch (_119_OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _L4_OpPhases_Ground = 55;
      _36_color_2 = _L4_OpPhases_Ground;
      _147_color_2 = _36_color_2;
      break;
    case SSM_st_Launch_OpPhases :
      _L6_OpPhases_Launch = 21;
      _23_color_2 = _L6_OpPhases_Launch;
      _147_color_2 = _23_color_2;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _L14_OpPhases_AttitudeAcquisition = 21;
      _10_color_2 = _L14_OpPhases_AttitudeAcquisition;
      _147_color_2 = _10_color_2;
      break;
    case SSM_st_NormalPhase_OpPhases :
      _L6_OpPhases_NormalPhase = 21;
      color_2 = _L6_OpPhases_NormalPhase;
      _147_color_2 = color_2;
      break;
    
  }
  _L13 = _147_color_2;
  outC->ColorIndex2 = _L13;
  switch (_119_OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _L2_OpPhases_Ground = 21;
      color35 = _L2_OpPhases_Ground;
      color148 = color35;
      break;
    case SSM_st_Launch_OpPhases :
      _L5_OpPhases_Launch = 55;
      color22 = _L5_OpPhases_Launch;
      color148 = color22;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _L15_OpPhases_AttitudeAcquisition = 21;
      color9 = _L15_OpPhases_AttitudeAcquisition;
      color148 = color9;
      break;
    case SSM_st_NormalPhase_OpPhases :
      _L5_OpPhases_NormalPhase = 21;
      color = _L5_OpPhases_NormalPhase;
      color148 = color;
      break;
    
  }
  _L12 = color148;
  outC->ColorIndex = _L12;
  _L11 = kcg_true;
  outC->Emit2CDS = _L11;
  _L3 = last_StartLaunchPhase;
  outC->LaunchPhase = _L3;
  _L1 = outC->LaunchPhase;
  outC->StartLaunchPhase = _L1;
  _L9 = kcg_true;
  _L8 = kcg_true;
  outC->Layer1Visible = _L9;
  outC->Layer1Active = _L8;
  _L6 = last_NormalPhase;
  outC->NPhase = _L6;
  _L4 = last_StartAtAcquisition;
  outC->AtAcquisition = _L4;
  switch (_119_OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _34_picture = last_picture;
      _33_payMode = last_payMode;
      _32_NormalPhase = last_NormalPhase;
      _31_RefAttitude = last_RefAttitude;
      _30_safeMode = last_safeMode;
      _29_StartAtAcquisition = last_StartAtAcquisition;
      break;
    
  }
  switch (OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      if (br_1_guard_OpPhases_Ground) {
        _101_OpPhases_fired_strong = SSM_TR_Ground_1_OpPhases;
      }
      else {
        _101_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      _118_OpPhases_fired_strong = _101_OpPhases_fired_strong;
      break;
    case SSM_st_Launch_OpPhases :
      if (br_1_guard_OpPhases_Launch) {
        _98_OpPhases_fired_strong = SSM_TR_Launch_1_OpPhases;
      }
      else {
        _98_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      _118_OpPhases_fired_strong = _98_OpPhases_fired_strong;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (_116_br_1_guard_OpPhases_AttitudeAcquisition) {
        _95_OpPhases_fired_strong = SSM_TR_AttitudeAcquisition_1_OpPhases;
      }
      else {
        _95_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      _118_OpPhases_fired_strong = _95_OpPhases_fired_strong;
      break;
    case SSM_st_NormalPhase_OpPhases :
      if (_110_br_1_guard_OpPhases_NormalPhase) {
        OpPhases_fired_strong = SSM_TR_NormalPhase_1_OpPhases;
      }
      else {
        OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      _118_OpPhases_fired_strong = OpPhases_fired_strong;
      break;
    
  }
  switch (_119_OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _41_OpPhases_fired = _118_OpPhases_fired_strong;
      _40_OpPhases_reset_nxt = kcg_false;
      _39_OpPhases_state_nxt = SSM_st_Ground_OpPhases;
      _L1_OpPhases_Ground = inC->Power;
      _117_OpPhases_fired = _41_OpPhases_fired;
      break;
    case SSM_st_Launch_OpPhases :
      _21_picture = last_picture;
      _20_payMode = last_payMode;
      _19_NormalPhase = last_NormalPhase;
      _18_RefAttitude = last_RefAttitude;
      _17_safeMode = last_safeMode;
      _28_OpPhases_fired = _118_OpPhases_fired_strong;
      _27_OpPhases_reset_nxt = kcg_false;
      _26_OpPhases_state_nxt = SSM_st_Launch_OpPhases;
      _L2_OpPhases_Launch = kcg_false;
      _16_StartAtAcquisition = _L2_OpPhases_Launch;
      _L1_3 = kcg_false;
      SensorsActive_3 = _L1_3;
      _L3_OpPhases_Launch = SensorsActive_3;
      _L1_OpPhases_Launch = inC->Telemetry;
      _117_OpPhases_fired = _28_OpPhases_fired;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _8_picture = last_picture;
      _7_payMode = last_payMode;
      _3_StartAtAcquisition = last_StartAtAcquisition;
      if (outC->init) {
        last_NPhase_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        last_NPhase_OpPhases_AttitudeAcquisition =
          outC->NPhase_OpPhases_AttitudeAcquisition;
      }
      if (outC->init) {
        last_RefAtt_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        last_RefAtt_OpPhases_AttitudeAcquisition =
          outC->RefAtt_OpPhases_AttitudeAcquisition;
      }
      if (outC->init) {
        last_sMode_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        last_sMode_OpPhases_AttitudeAcquisition =
          outC->sMode_OpPhases_AttitudeAcquisition;
      }
      _15_OpPhases_fired = _118_OpPhases_fired_strong;
      _14_OpPhases_reset_nxt = kcg_false;
      _13_OpPhases_state_nxt = SSM_st_AttitudeAcquisition_OpPhases;
      _L5141_OpPhases_AttitudeAcquisition = kcg_false;
      outC->NPhase_OpPhases_AttitudeAcquisition =
        _L5141_OpPhases_AttitudeAcquisition;
      _L3142_OpPhases_AttitudeAcquisition = last_RefAttitude;
      outC->RefAtt_OpPhases_AttitudeAcquisition =
        _L3142_OpPhases_AttitudeAcquisition;
      _L2143_OpPhases_AttitudeAcquisition = last_safeMode;
      outC->sMode_OpPhases_AttitudeAcquisition =
        _L2143_OpPhases_AttitudeAcquisition;
      if (outC->init) {
        atacquisition_state_sel_OpPhases_AttitudeAcquisition =
          SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
      }
      else {
        atacquisition_state_sel_OpPhases_AttitudeAcquisition =
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
      }
      _103_atacquisition_clock_OpPhases_AttitudeAcquisition =
        atacquisition_state_sel_OpPhases_AttitudeAcquisition;
      switch (_103_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          _112_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            !outC->sMode_OpPhases_AttitudeAcquisition;
          br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            outC->sMode_OpPhases_AttitudeAcquisition;
          if (_112_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _90_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else if (br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _90_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else {
            _90_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
          }
          _115_atacquisition_state_act_OpPhases_AttitudeAcquisition =
            _90_atacquisition_state_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          _111_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            outC->sMode_OpPhases_AttitudeAcquisition;
          if (_111_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _87_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else {
            _87_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition;
          }
          _115_atacquisition_state_act_OpPhases_AttitudeAcquisition =
            _87_atacquisition_state_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_SafeMode =
            !outC->sMode_OpPhases_AttitudeAcquisition;
          if (br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_SafeMode) {
            atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else {
            atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          }
          _115_atacquisition_state_act_OpPhases_AttitudeAcquisition =
            atacquisition_state_act_OpPhases_AttitudeAcquisition;
          break;
        
      }
      atacquisition_clock_OpPhases_AttitudeAcquisition =
        _115_atacquisition_state_act_OpPhases_AttitudeAcquisition;
      switch (atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          _83_NormalPhase = last_NormalPhase;
          _82_RefAttitude = last_RefAttitude;
          break;
        
      }
      switch (_103_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          if (_112_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _92_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_readsensors_1_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else if (br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _92_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_readsensors_2_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else {
            _92_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_no_trans_atacquisition_OpPhases_AttitudeAcquisition;
          }
          _114_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
            _92_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          if (_111_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _89_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_refAttitude_1_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else {
            _89_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_no_trans_atacquisition_OpPhases_AttitudeAcquisition;
          }
          _114_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
            _89_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
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
          _114_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
            atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          break;
        
      }
      switch (atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          _86_atacquisition_fired_OpPhases_AttitudeAcquisition =
            _114_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          _85_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition = kcg_false;
          _84_atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
          _L1140_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            kcg_false;
          _81_safeMode =
            _L1140_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
          _L1_5 = kcg_false;
          SensorsActive_5 = _L1_5;
          _L2139_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            SensorsActive_5;
          _113_atacquisition_fired_OpPhases_AttitudeAcquisition =
            _86_atacquisition_fired_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          _80_atacquisition_fired_OpPhases_AttitudeAcquisition =
            _114_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          _79_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition = kcg_false;
          _78_atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition;
          _L9_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          _L8_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          _L7_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          _L6_OpPhases_AttitudeAcquisition_atacquisition_refAttitude = kcg_true;
          _L5134_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_true;
          _L4135_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          _L3136_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          if (_L9_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _L2137_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
              _L6_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          else {
            _L2137_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
              _L4135_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          _77_NormalPhase =
            _L2137_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          if (_L7_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _L1138_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
              _L5134_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          else {
            _L1138_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
              _L3136_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          _75_safeMode =
            _L1138_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          _76_RefAttitude =
            _L8_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          _L1_12 = kcg_false;
          ControlAlgorithmActive_1 = _L1_12;
          _L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            ControlAlgorithmActive_1;
          _113_atacquisition_fired_OpPhases_AttitudeAcquisition =
            _80_atacquisition_fired_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          _74_NormalPhase = last_NormalPhase;
          _73_RefAttitude = last_RefAttitude;
          atacquisition_fired_OpPhases_AttitudeAcquisition =
            _114_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          atacquisition_reset_nxt_OpPhases_AttitudeAcquisition = kcg_false;
          atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          _L4_OpPhases_AttitudeAcquisition_atacquisition_SafeMode = kcg_false;
          _L3_OpPhases_AttitudeAcquisition_atacquisition_SafeMode = kcg_true;
          _L2_OpPhases_AttitudeAcquisition_atacquisition_SafeMode = kcg_false;
          if (_L4_OpPhases_AttitudeAcquisition_atacquisition_SafeMode) {
            _L1_OpPhases_AttitudeAcquisition_atacquisition_SafeMode =
              _L3_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
          }
          else {
            _L1_OpPhases_AttitudeAcquisition_atacquisition_SafeMode =
              _L2_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
          }
          _72_safeMode =
            _L1_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
          _L1_1 = kcg_false;
          Updating_1 = _L1_1;
          _L5_OpPhases_AttitudeAcquisition_atacquisition_SafeMode = Updating_1;
          _113_atacquisition_fired_OpPhases_AttitudeAcquisition =
            atacquisition_fired_OpPhases_AttitudeAcquisition;
          break;
        
      }
      if (outC->init) {
        atacquisition_reset_sel_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        atacquisition_reset_sel_OpPhases_AttitudeAcquisition =
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
      }
      switch (atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition =
            _85_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            _84_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
          _6_NormalPhase = _83_NormalPhase;
          _5_RefAttitude = _82_RefAttitude;
          _4_safeMode = _81_safeMode;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition =
            _79_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            _78_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
          _6_NormalPhase = _77_NormalPhase;
          _5_RefAttitude = _76_RefAttitude;
          _4_safeMode = _75_safeMode;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition =
            atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
          _6_NormalPhase = _74_NormalPhase;
          _5_RefAttitude = _73_RefAttitude;
          _4_safeMode = _72_safeMode;
          break;
        
      }
      switch (_103_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          if (_112_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _91_atacquisition_reset_act_OpPhases_AttitudeAcquisition = kcg_true;
          }
          else {
            _91_atacquisition_reset_act_OpPhases_AttitudeAcquisition =
              br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
          }
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          _88_atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            _111_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
          break;
        
      }
      if (outC->init) {
        atacquisition_reset_prv_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        atacquisition_reset_prv_OpPhases_AttitudeAcquisition =
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition;
      }
      switch (_103_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            _91_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            _88_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            atacquisition_reset_act_OpPhases_AttitudeAcquisition;
          break;
        
      }
      _L1144_OpPhases_AttitudeAcquisition = inC->AttitudeReference;
      _117_OpPhases_fired = _15_OpPhases_fired;
      break;
    case SSM_st_NormalPhase_OpPhases :
      NormalPhase = last_NormalPhase;
      StartAtAcquisition = last_StartAtAcquisition;
      if (outC->init1) {
        last_sMode_OpPhases_NormalPhase = kcg_false;
      }
      else {
        last_sMode_OpPhases_NormalPhase = outC->sMode_OpPhases_NormalPhase;
      }
      OpPhases_fired = _118_OpPhases_fired_strong;
      OpPhases_reset_nxt = kcg_false;
      OpPhases_state_nxt = SSM_st_NormalPhase_OpPhases;
      _L2_OpPhases_NormalPhase = last_safeMode;
      outC->sMode_OpPhases_NormalPhase = _L2_OpPhases_NormalPhase;
      _L1_OpPhases_NormalPhase = last_payMode;
      pMode_OpPhases_NormalPhase = _L1_OpPhases_NormalPhase;
      if (outC->init1) {
        NPhase_state_sel_OpPhases_NormalPhase =
          SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
      }
      else {
        NPhase_state_sel_OpPhases_NormalPhase =
          outC->NPhase_state_nxt_OpPhases_NormalPhase;
      }
      _102_NPhase_clock_OpPhases_NormalPhase =
        NPhase_state_sel_OpPhases_NormalPhase;
      switch (_102_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          _105_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl =
            pMode_OpPhases_NormalPhase;
          _106_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl =
            outC->sMode_OpPhases_NormalPhase;
          if (_105_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _69_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_Payload_OpPhases_NormalPhase_NPhase;
          }
          else if (_106_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _69_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_SafeMode_OpPhases_NormalPhase_NPhase;
          }
          else {
            _69_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          }
          _109_NPhase_state_act_OpPhases_NormalPhase =
            _69_NPhase_state_act_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          _104_br_1_guard_OpPhases_NormalPhase_NPhase_Payload =
            !pMode_OpPhases_NormalPhase;
          if (_104_br_1_guard_OpPhases_NormalPhase_NPhase_Payload) {
            _66_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          }
          else {
            _66_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_Payload_OpPhases_NormalPhase_NPhase;
          }
          _109_NPhase_state_act_OpPhases_NormalPhase =
            _66_NPhase_state_act_OpPhases_NormalPhase;
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
          _109_NPhase_state_act_OpPhases_NormalPhase =
            NPhase_state_act_OpPhases_NormalPhase;
          break;
        
      }
      NPhase_clock_OpPhases_NormalPhase =
        _109_NPhase_state_act_OpPhases_NormalPhase;
      switch (NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          _56_picture = last_picture;
          break;
        
      }
      switch (_102_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          if (_105_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _71_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_AttControl_1_NPhase_OpPhases_NormalPhase;
          }
          else if (_106_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _71_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_AttControl_2_NPhase_OpPhases_NormalPhase;
          }
          else {
            _71_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          }
          _108_NPhase_fired_strong_OpPhases_NormalPhase =
            _71_NPhase_fired_strong_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          if (_104_br_1_guard_OpPhases_NormalPhase_NPhase_Payload) {
            _68_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_Payload_1_NPhase_OpPhases_NormalPhase;
          }
          else {
            _68_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          }
          _108_NPhase_fired_strong_OpPhases_NormalPhase =
            _68_NPhase_fired_strong_OpPhases_NormalPhase;
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
          _108_NPhase_fired_strong_OpPhases_NormalPhase =
            NPhase_fired_strong_OpPhases_NormalPhase;
          break;
        
      }
      switch (NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          _59_NPhase_fired_OpPhases_NormalPhase =
            _108_NPhase_fired_strong_OpPhases_NormalPhase;
          _58_NPhase_reset_nxt_OpPhases_NormalPhase = kcg_false;
          _57_NPhase_state_nxt_OpPhases_NormalPhase =
            SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          _L8126_OpPhases_NormalPhase_NPhase_AttControl = kcg_false;
          _L7127_OpPhases_NormalPhase_NPhase_AttControl = kcg_false;
          _L6128_OpPhases_NormalPhase_NPhase_AttControl = kcg_true;
          _L5129_OpPhases_NormalPhase_NPhase_AttControl = kcg_false;
          if (_L7127_OpPhases_NormalPhase_NPhase_AttControl) {
            _L4130_OpPhases_NormalPhase_NPhase_AttControl =
              _L6128_OpPhases_NormalPhase_NPhase_AttControl;
          }
          else {
            _L4130_OpPhases_NormalPhase_NPhase_AttControl =
              _L5129_OpPhases_NormalPhase_NPhase_AttControl;
          }
          _53_safeMode = _L4130_OpPhases_NormalPhase_NPhase_AttControl;
          _L3131_OpPhases_NormalPhase_NPhase_AttControl = inC->picLocation;
          _L2132_OpPhases_NormalPhase_NPhase_AttControl = inC->takePict;
          _55_payMode = _L2132_OpPhases_NormalPhase_NPhase_AttControl;
          _54_RefAttitude = _L8126_OpPhases_NormalPhase_NPhase_AttControl;
          _L1_21 = kcg_false;
          ControlAlgorithmActive_2 = _L1_21;
          _L9125_OpPhases_NormalPhase_NPhase_AttControl =
            ControlAlgorithmActive_2;
          _L1133_OpPhases_NormalPhase_NPhase_AttControl = inC->Telemetry;
          _107_NPhase_fired_OpPhases_NormalPhase =
            _59_NPhase_fired_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          _47_RefAttitude = last_RefAttitude;
          Payload_weakb_clock_OpPhases_NormalPhase_NPhase =
            _108_NPhase_fired_strong_OpPhases_NormalPhase !=
            SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          if (Payload_weakb_clock_OpPhases_NormalPhase_NPhase) {
            _65_NPhase_fired_OpPhases_NormalPhase =
              _108_NPhase_fired_strong_OpPhases_NormalPhase;
            _64_NPhase_reset_nxt_OpPhases_NormalPhase = kcg_false;
            _63_NPhase_state_nxt_OpPhases_NormalPhase =
              SSM_st_Payload_OpPhases_NormalPhase_NPhase;
            _52_NPhase_fired_OpPhases_NormalPhase =
              _65_NPhase_fired_OpPhases_NormalPhase;
            _51_NPhase_reset_nxt_OpPhases_NormalPhase =
              _64_NPhase_reset_nxt_OpPhases_NormalPhase;
            _50_NPhase_state_nxt_OpPhases_NormalPhase =
              _63_NPhase_state_nxt_OpPhases_NormalPhase;
          }
          else {
            br_2_guard_OpPhases_NormalPhase_NPhase_Payload =
              outC->sMode_OpPhases_NormalPhase;
            if (br_2_guard_OpPhases_NormalPhase_NPhase_Payload) {
              _62_NPhase_fired_OpPhases_NormalPhase =
                SSM_TR_Payload_2_NPhase_OpPhases_NormalPhase;
            }
            else {
              _62_NPhase_fired_OpPhases_NormalPhase =
                SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
            }
            _61_NPhase_reset_nxt_OpPhases_NormalPhase =
              br_2_guard_OpPhases_NormalPhase_NPhase_Payload;
            if (br_2_guard_OpPhases_NormalPhase_NPhase_Payload) {
              _60_NPhase_state_nxt_OpPhases_NormalPhase =
                SSM_st_SafeMode_OpPhases_NormalPhase_NPhase;
            }
            else {
              _60_NPhase_state_nxt_OpPhases_NormalPhase =
                SSM_st_Payload_OpPhases_NormalPhase_NPhase;
            }
            _52_NPhase_fired_OpPhases_NormalPhase =
              _62_NPhase_fired_OpPhases_NormalPhase;
            _51_NPhase_reset_nxt_OpPhases_NormalPhase =
              _61_NPhase_reset_nxt_OpPhases_NormalPhase;
            _50_NPhase_state_nxt_OpPhases_NormalPhase =
              _60_NPhase_state_nxt_OpPhases_NormalPhase;
          }
          _L10_OpPhases_NormalPhase_NPhase_Payload = 0.0;
          _L9_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          _L8_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          _L7_OpPhases_NormalPhase_NPhase_Payload = kcg_true;
          _L6_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          _L5120_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          _L4121_OpPhases_NormalPhase_NPhase_Payload = kcg_true;
          _L3122_OpPhases_NormalPhase_NPhase_Payload = inC->picLocation;
          _49_picture = _L10_OpPhases_NormalPhase_NPhase_Payload;
          if (_L6_OpPhases_NormalPhase_NPhase_Payload) {
            _L2123_OpPhases_NormalPhase_NPhase_Payload =
              _L4121_OpPhases_NormalPhase_NPhase_Payload;
          }
          else {
            _L2123_OpPhases_NormalPhase_NPhase_Payload =
              _L5120_OpPhases_NormalPhase_NPhase_Payload;
          }
          _46_safeMode = _L2123_OpPhases_NormalPhase_NPhase_Payload;
          if (_L9_OpPhases_NormalPhase_NPhase_Payload) {
            _L1124_OpPhases_NormalPhase_NPhase_Payload =
              _L7_OpPhases_NormalPhase_NPhase_Payload;
          }
          else {
            _L1124_OpPhases_NormalPhase_NPhase_Payload =
              _L8_OpPhases_NormalPhase_NPhase_Payload;
          }
          _48_payMode = _L1124_OpPhases_NormalPhase_NPhase_Payload;
          _107_NPhase_fired_OpPhases_NormalPhase =
            _52_NPhase_fired_OpPhases_NormalPhase;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          _45_picture = last_picture;
          _44_payMode = last_payMode;
          _43_RefAttitude = last_RefAttitude;
          NPhase_fired_OpPhases_NormalPhase =
            _108_NPhase_fired_strong_OpPhases_NormalPhase;
          NPhase_reset_nxt_OpPhases_NormalPhase = kcg_false;
          NPhase_state_nxt_OpPhases_NormalPhase =
            SSM_st_SafeMode_OpPhases_NormalPhase_NPhase;
          _L4_OpPhases_NormalPhase_NPhase_SafeMode = kcg_false;
          _L3_OpPhases_NormalPhase_NPhase_SafeMode = kcg_false;
          _L2_OpPhases_NormalPhase_NPhase_SafeMode = kcg_true;
          if (_L3_OpPhases_NormalPhase_NPhase_SafeMode) {
            _L1_OpPhases_NormalPhase_NPhase_SafeMode =
              _L2_OpPhases_NormalPhase_NPhase_SafeMode;
          }
          else {
            _L1_OpPhases_NormalPhase_NPhase_SafeMode =
              _L4_OpPhases_NormalPhase_NPhase_SafeMode;
          }
          _42_safeMode = _L1_OpPhases_NormalPhase_NPhase_SafeMode;
          _L1_2 = kcg_false;
          Updating_2 = _L1_2;
          _L5_OpPhases_NormalPhase_NPhase_SafeMode = Updating_2;
          _107_NPhase_fired_OpPhases_NormalPhase =
            NPhase_fired_OpPhases_NormalPhase;
          break;
        
      }
      if (outC->init1) {
        NPhase_reset_sel_OpPhases_NormalPhase = kcg_false;
      }
      else {
        NPhase_reset_sel_OpPhases_NormalPhase =
          outC->NPhase_reset_nxt_OpPhases_NormalPhase;
      }
      switch (NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_nxt_OpPhases_NormalPhase =
            _58_NPhase_reset_nxt_OpPhases_NormalPhase;
          outC->NPhase_state_nxt_OpPhases_NormalPhase =
            _57_NPhase_state_nxt_OpPhases_NormalPhase;
          picture = _56_picture;
          payMode = _55_payMode;
          RefAttitude = _54_RefAttitude;
          safeMode = _53_safeMode;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_nxt_OpPhases_NormalPhase =
            _51_NPhase_reset_nxt_OpPhases_NormalPhase;
          outC->NPhase_state_nxt_OpPhases_NormalPhase =
            _50_NPhase_state_nxt_OpPhases_NormalPhase;
          picture = _49_picture;
          payMode = _48_payMode;
          RefAttitude = _47_RefAttitude;
          safeMode = _46_safeMode;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_nxt_OpPhases_NormalPhase =
            NPhase_reset_nxt_OpPhases_NormalPhase;
          outC->NPhase_state_nxt_OpPhases_NormalPhase =
            NPhase_state_nxt_OpPhases_NormalPhase;
          picture = _45_picture;
          payMode = _44_payMode;
          RefAttitude = _43_RefAttitude;
          safeMode = _42_safeMode;
          break;
        
      }
      switch (_102_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          if (_105_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _70_NPhase_reset_act_OpPhases_NormalPhase = kcg_true;
          }
          else {
            _70_NPhase_reset_act_OpPhases_NormalPhase =
              _106_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl;
          }
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          _67_NPhase_reset_act_OpPhases_NormalPhase =
            _104_br_1_guard_OpPhases_NormalPhase_NPhase_Payload;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          NPhase_reset_act_OpPhases_NormalPhase =
            br_1_guard_OpPhases_NormalPhase_NPhase_SafeMode;
          break;
        
      }
      if (outC->init1) {
        NPhase_reset_prv_OpPhases_NormalPhase = kcg_false;
      }
      else {
        NPhase_reset_prv_OpPhases_NormalPhase =
          outC->NPhase_reset_act_OpPhases_NormalPhase;
      }
      switch (_102_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_act_OpPhases_NormalPhase =
            _70_NPhase_reset_act_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_act_OpPhases_NormalPhase =
            _67_NPhase_reset_act_OpPhases_NormalPhase;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_act_OpPhases_NormalPhase =
            NPhase_reset_act_OpPhases_NormalPhase;
          break;
        
      }
      _117_OpPhases_fired = OpPhases_fired;
      break;
    
  }
  if (outC->init2) {
    OpPhases_reset_sel = kcg_false;
  }
  else {
    OpPhases_reset_sel = outC->OpPhases_reset_nxt;
  }
  switch (_119_OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->OpPhases_reset_nxt = _40_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _39_OpPhases_state_nxt;
      outC->picture = _34_picture;
      outC->payMode = _33_payMode;
      outC->NormalPhase = _32_NormalPhase;
      outC->RefAttitude = _31_RefAttitude;
      outC->safeMode = _30_safeMode;
      outC->StartAtAcquisition = _29_StartAtAcquisition;
      break;
    case SSM_st_Launch_OpPhases :
      outC->OpPhases_reset_nxt = _27_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _26_OpPhases_state_nxt;
      outC->picture = _21_picture;
      outC->payMode = _20_payMode;
      outC->NormalPhase = _19_NormalPhase;
      outC->RefAttitude = _18_RefAttitude;
      outC->safeMode = _17_safeMode;
      outC->StartAtAcquisition = _16_StartAtAcquisition;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->OpPhases_reset_nxt = _14_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _13_OpPhases_state_nxt;
      outC->picture = _8_picture;
      outC->payMode = _7_payMode;
      outC->NormalPhase = _6_NormalPhase;
      outC->RefAttitude = _5_RefAttitude;
      outC->safeMode = _4_safeMode;
      outC->StartAtAcquisition = _3_StartAtAcquisition;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->OpPhases_reset_nxt = OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = OpPhases_state_nxt;
      outC->picture = picture;
      outC->payMode = payMode;
      outC->NormalPhase = NormalPhase;
      outC->RefAttitude = RefAttitude;
      outC->safeMode = safeMode;
      outC->StartAtAcquisition = StartAtAcquisition;
      break;
    
  }
  outC->rem_Power = inC->Power;
  outC->rem_Telemetry = inC->Telemetry;
  outC->rem_AttitudeReference = inC->AttitudeReference;
  outC->rem_takePict = inC->takePict;
  outC->rem_picLocation = inC->picLocation;
  switch (_119_OpPhases_state_act) {
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->init = kcg_false;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->init1 = kcg_false;
      break;
    
  }
  outC->init2 = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** OperationalScenario.c
** Generation date: 2014-09-19T00:33:13
*************************************************************$ */

