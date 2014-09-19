/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/vsmon_000/Documents/code/si-lansab/Satellite/TS02/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-09-18T22:19:01
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
}

/* OperationalScenario */
void OperationalScenario(
  inC_OperationalScenario *inC,
  outC_OperationalScenario *outC)
{
  /* TakePicture::_L1 */ kcg_bool _L1_16;
  /* TakePicture::TakingPicture */ kcg_bool TakingPicture_1;
  /* TestActuators::_L1 */ kcg_bool _L1_15;
  /* TestActuators::TestingActuators */ kcg_bool TestingActuators_1;
  /* ReadSensors::_L1 */ kcg_bool _L1_14;
  /* ReadSensors::SensorsActive */ kcg_bool SensorsActive_1;
  /* ReadSensors::_L1 */ kcg_bool _L1_23;
  /* ReadSensors::SensorsActive */ kcg_bool SensorsActive_2;
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
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _36_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _35_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _34_OpPhases_state_nxt;
  /* OperationalScenario::picture */ kcg_real _33_picture;
  /* OperationalScenario::payMode */ kcg_bool _32_payMode;
  /* OperationalScenario::NormalPhase */ kcg_bool _31_NormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool _30_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _29_safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool _28_StartAtAcquisition;
  /* OperationalScenario::StartLaunchPhase */ kcg_bool _27_StartLaunchPhase;
  /* OperationalScenario::OpPhases::Ground::_L1 */ kcg_bool _L1_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::PowerOn */ kcg_bool PowerOn_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_TR_SM2_OpPhases_Ground _121_SM2_fired_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_TR_SM2_OpPhases_Ground _122_SM2_fired_strong_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ kcg_bool SM2_reset_prv_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ kcg_bool SM2_reset_sel_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_ST_SM2_OpPhases_Ground _123_SM2_state_act_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_ST_SM2_OpPhases_Ground SM2_state_sel_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_ST_SM2_OpPhases_Ground _107_SM2_clock_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_ST_SM2_OpPhases_Ground SM2_clock_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2::SafeMode */ kcg_bool br_1_guard_OpPhases_Ground_SM2_SafeMode;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_ST_SM2_OpPhases_Ground SM2_state_act_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ kcg_bool SM2_reset_act_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_TR_SM2_OpPhases_Ground SM2_fired_strong_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2::SupportMode */ kcg_bool _120_br_1_guard_OpPhases_Ground_SM2_SupportMode;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_ST_SM2_OpPhases_Ground _93_SM2_state_act_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ kcg_bool _94_SM2_reset_act_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_TR_SM2_OpPhases_Ground _95_SM2_fired_strong_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2::SafeMode::_L1 */ kcg_int _L1_OpPhases_Ground_SM2_SafeMode;
  /* OperationalScenario::OpPhases::Ground::SM2::SafeMode::_L4 */ kcg_bool _L4_OpPhases_Ground_SM2_SafeMode;
  /* OperationalScenario::OpPhases::Ground::SM2::SafeMode::_L5 */ kcg_bool _L5_OpPhases_Ground_SM2_SafeMode;
  /* OperationalScenario::OpPhases::Ground::SM2::SafeMode::_L6 */ kcg_bool _L6_OpPhases_Ground_SM2_SafeMode;
  /* OperationalScenario::OpPhases::Ground::SM2::SafeMode::_L7 */ kcg_bool _L7_OpPhases_Ground_SM2_SafeMode;
  /* OperationalScenario::OpPhases::Ground::SM2::SafeMode::_L8 */ kcg_bool _L8_OpPhases_Ground_SM2_SafeMode;
  /* OperationalScenario::StartLaunchPhase */ kcg_bool _88_StartLaunchPhase;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_ST_SM2_OpPhases_Ground SM2_state_nxt_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ kcg_bool SM2_reset_nxt_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_TR_SM2_OpPhases_Ground SM2_fired_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2::SupportMode::DiagnosticPass */ kcg_bool DiagnosticPass_clock_OpPhases_Ground_SM2_SupportMode;
  /* OperationalScenario::OpPhases::Ground::SM2::SupportMode::_L1 */ kcg_int _L1_OpPhases_Ground_SM2_SupportMode;
  /* OperationalScenario::OpPhases::Ground::SM2::SupportMode::_L2 */ kcg_bool _L2_OpPhases_Ground_SM2_SupportMode;
  /* OperationalScenario::OpPhases::Ground::SM2::SupportMode::_L3 */ kcg_bool _L3_OpPhases_Ground_SM2_SupportMode;
  /* OperationalScenario::OpPhases::Ground::SM2::SupportMode::_L4 */ kcg_bool _L4_OpPhases_Ground_SM2_SupportMode;
  /* OperationalScenario::StartLaunchPhase */ kcg_bool _89_StartLaunchPhase;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_ST_SM2_OpPhases_Ground _90_SM2_state_nxt_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ kcg_bool _91_SM2_reset_nxt_OpPhases_Ground;
  /* OperationalScenario::OpPhases::Ground::SM2 */ SSM_TR_SM2_OpPhases_Ground _92_SM2_fired_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _26_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _25_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _24_OpPhases_state_nxt;
  /* OperationalScenario::picture */ kcg_real _23_picture;
  /* OperationalScenario::payMode */ kcg_bool _22_payMode;
  /* OperationalScenario::NormalPhase */ kcg_bool _21_NormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool _20_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _19_safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool _18_StartAtAcquisition;
  /* OperationalScenario::StartLaunchPhase */ kcg_bool _17_StartLaunchPhase;
  /* OperationalScenario::OpPhases::Launch::_L3 */ kcg_bool _L3_OpPhases_Launch;
  /* OperationalScenario::OpPhases::Launch::_L2 */ kcg_bool _L2_OpPhases_Launch;
  /* OperationalScenario::OpPhases::Launch::_L1 */ kcg_int _L1_OpPhases_Launch;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _16_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _15_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _14_OpPhases_state_nxt;
  /* OperationalScenario::picture */ kcg_real _13_picture;
  /* OperationalScenario::payMode */ kcg_bool _12_payMode;
  /* OperationalScenario::NormalPhase */ kcg_bool _11_NormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool _10_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _9_safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool _8_StartAtAcquisition;
  /* OperationalScenario::StartLaunchPhase */ kcg_bool _7_StartLaunchPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::_L5 */ kcg_bool _L5148_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::_L3 */ kcg_bool _L3149_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::_L2 */ kcg_bool _L2150_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::_L1 */ kcg_int _L1151_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _116_atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _117_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_prv_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_sel_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _118_atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition atacquisition_state_sel_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _106_atacquisition_clock_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition atacquisition_clock_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::sMode */ kcg_bool last_sMode_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::RefAtt */ kcg_bool last_RefAtt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::NPhase */ kcg_bool last_NPhase_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode */ kcg_bool br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude */ kcg_bool _114_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _82_atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _83_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _84_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors */ kcg_bool _115_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors */ kcg_bool br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _85_atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _86_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _87_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L1 */ kcg_bool _L1_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L2 */ kcg_bool _L2_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L3 */ kcg_bool _L3_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L4 */ kcg_bool _L4_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode::_L5 */ kcg_bool _L5_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::safeMode */ kcg_bool _67_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _68_RefAttitude;
  /* OperationalScenario::NormalPhase */ kcg_bool _69_NormalPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L1 */ kcg_bool _L1145_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L2 */ kcg_bool _L2144_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L3 */ kcg_bool _L3143_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L4 */ kcg_bool _L4142_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L5 */ kcg_bool _L5141_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L6 */ kcg_bool _L6_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L7 */ kcg_bool _L7_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L8 */ kcg_bool _L8_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L9 */ kcg_bool _L9_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude::_L10 */ kcg_bool _L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _70_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _71_RefAttitude;
  /* OperationalScenario::NormalPhase */ kcg_bool _72_NormalPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _73_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _74_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _75_atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L1 */ kcg_bool _L1147_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors::_L2 */ kcg_bool _L2146_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  /* OperationalScenario::safeMode */ kcg_bool _76_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _77_RefAttitude;
  /* OperationalScenario::NormalPhase */ kcg_bool _78_NormalPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _79_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _80_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _81_atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_nxt;
  /* OperationalScenario::picture */ kcg_real picture;
  /* OperationalScenario::payMode */ kcg_bool payMode;
  /* OperationalScenario::NormalPhase */ kcg_bool NormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool StartAtAcquisition;
  /* OperationalScenario::StartLaunchPhase */ kcg_bool StartLaunchPhase;
  /* OperationalScenario::OpPhases::NormalPhase::_L2 */ kcg_bool _L2_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::_L1 */ kcg_bool _L1_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::pMode */ kcg_bool pMode_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _111_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _112_NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_prv_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_sel_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _113_NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase NPhase_state_sel_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _105_NPhase_clock_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase NPhase_clock_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::sMode */ kcg_bool last_sMode_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode */ kcg_bool br_1_guard_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload */ kcg_bool _108_br_1_guard_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _61_NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _62_NPhase_reset_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _63_NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl */ kcg_bool _109_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl */ kcg_bool _110_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _64_NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _65_NPhase_reset_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _66_NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L1 */ kcg_bool _L1_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L2 */ kcg_bool _L2_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L3 */ kcg_bool _L3_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L4 */ kcg_bool _L4_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode::_L5 */ kcg_bool _L5_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::safeMode */ kcg_bool _37_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _38_RefAttitude;
  /* OperationalScenario::payMode */ kcg_bool _39_payMode;
  /* OperationalScenario::picture */ kcg_real _40_picture;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _60_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _59_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _58_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _57_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _56_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _55_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload */ kcg_bool br_2_guard_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload */ kcg_bool Payload_weakb_clock_OpPhases_NormalPhase_NPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L1 */ kcg_bool _L1131_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L2 */ kcg_bool _L2130_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L3 */ kcg_real _L3129_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L4 */ kcg_bool _L4128_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L5 */ kcg_bool _L5127_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L6 */ kcg_bool _L6_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L7 */ kcg_bool _L7_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L8 */ kcg_bool _L8_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L9 */ kcg_bool _L9_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload::_L10 */ kcg_real _L10_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::safeMode */ kcg_bool _41_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _42_RefAttitude;
  /* OperationalScenario::payMode */ kcg_bool _43_payMode;
  /* OperationalScenario::picture */ kcg_real _44_picture;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _45_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _46_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _47_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L1 */ kcg_int _L1140_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L2 */ kcg_bool _L2139_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L3 */ kcg_real _L3138_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L4 */ kcg_bool _L4137_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L5 */ kcg_bool _L5136_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L6 */ kcg_bool _L6135_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L7 */ kcg_bool _L7134_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L8 */ kcg_bool _L8133_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl::_L9 */ kcg_bool _L9132_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::safeMode */ kcg_bool _48_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _49_RefAttitude;
  /* OperationalScenario::payMode */ kcg_bool _50_payMode;
  /* OperationalScenario::picture */ kcg_real _51_picture;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _52_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _53_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _54_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _104_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _103_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _102_OpPhases_state_act;
  /* OperationalScenario::OpPhases::Ground */ kcg_bool br_1_guard_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _101_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _100_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _99_OpPhases_state_act;
  /* OperationalScenario::OpPhases::Launch */ kcg_bool br_1_guard_OpPhases_Launch;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _98_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _97_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _96_OpPhases_state_act;
  /* OperationalScenario::OpPhases::AttitudeAcquisition */ kcg_bool _119_br_1_guard_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_act;
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
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _126_OpPhases_state_act;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_sel;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_prv;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _125_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _124_OpPhases_fired;
  /* OperationalScenario::_L1 */ kcg_bool _L1;
  /* OperationalScenario::_L3 */ kcg_bool _L3;
  /* OperationalScenario::_L4 */ kcg_bool _L4;
  /* OperationalScenario::_L6 */ kcg_bool _L6;
  /* OperationalScenario::_L7 */ kcg_bool _L7;
  
  if (outC->init3) {
    OpPhases_state_sel = SSM_st_Ground_OpPhases;
  }
  else {
    OpPhases_state_sel = outC->OpPhases_state_nxt;
  }
  switch (OpPhases_state_sel) {
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_state_act = SSM_st_NormalPhase_OpPhases;
      break;
    
  }
  if (outC->init3) {
    last_NPhase = kcg_false;
  }
  else {
    last_NPhase = outC->NPhase;
  }
  if (outC->init3) {
    last_NormalPhase = kcg_false;
  }
  else {
    last_NormalPhase = outC->NormalPhase;
  }
  _L6 = last_NormalPhase;
  outC->NPhase = _L6;
  switch (OpPhases_state_sel) {
    case SSM_st_AttitudeAcquisition_OpPhases :
      _119_br_1_guard_OpPhases_AttitudeAcquisition = outC->NPhase;
      if (_119_br_1_guard_OpPhases_AttitudeAcquisition) {
        _96_OpPhases_state_act = SSM_st_NormalPhase_OpPhases;
      }
      else {
        _96_OpPhases_state_act = SSM_st_AttitudeAcquisition_OpPhases;
      }
      break;
    
  }
  if (outC->init3) {
    last_AtAcquisition = kcg_false;
  }
  else {
    last_AtAcquisition = outC->AtAcquisition;
  }
  if (outC->init3) {
    last_StartAtAcquisition = kcg_false;
  }
  else {
    last_StartAtAcquisition = outC->StartAtAcquisition;
  }
  _L4 = last_StartAtAcquisition;
  outC->AtAcquisition = _L4;
  switch (OpPhases_state_sel) {
    case SSM_st_Launch_OpPhases :
      br_1_guard_OpPhases_Launch = outC->AtAcquisition;
      if (br_1_guard_OpPhases_Launch) {
        _99_OpPhases_state_act = SSM_st_AttitudeAcquisition_OpPhases;
      }
      else {
        _99_OpPhases_state_act = SSM_st_Launch_OpPhases;
      }
      break;
    
  }
  if (outC->init3) {
    last_LaunchPhase = kcg_false;
  }
  else {
    last_LaunchPhase = outC->LaunchPhase;
  }
  if (outC->init3) {
    last_StartLaunchPhase = kcg_false;
  }
  else {
    last_StartLaunchPhase = outC->StartLaunchPhase;
  }
  _L3 = last_StartLaunchPhase;
  outC->LaunchPhase = _L3;
  switch (OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      br_1_guard_OpPhases_Ground = outC->LaunchPhase;
      if (br_1_guard_OpPhases_Ground) {
        _102_OpPhases_state_act = SSM_st_Launch_OpPhases;
      }
      else {
        _102_OpPhases_state_act = SSM_st_Ground_OpPhases;
      }
      _126_OpPhases_state_act = _102_OpPhases_state_act;
      break;
    case SSM_st_Launch_OpPhases :
      _126_OpPhases_state_act = _99_OpPhases_state_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _126_OpPhases_state_act = _96_OpPhases_state_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      _126_OpPhases_state_act = OpPhases_state_act;
      break;
    
  }
  if (outC->init3) {
    OpPhases_reset_prv = kcg_false;
  }
  else {
    OpPhases_reset_prv = outC->OpPhases_reset_act;
  }
  switch (OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      _103_OpPhases_reset_act = br_1_guard_OpPhases_Ground;
      outC->OpPhases_reset_act = _103_OpPhases_reset_act;
      break;
    case SSM_st_Launch_OpPhases :
      _100_OpPhases_reset_act = br_1_guard_OpPhases_Launch;
      outC->OpPhases_reset_act = _100_OpPhases_reset_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _97_OpPhases_reset_act = _119_br_1_guard_OpPhases_AttitudeAcquisition;
      outC->OpPhases_reset_act = _97_OpPhases_reset_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_reset_act = kcg_false;
      outC->OpPhases_reset_act = OpPhases_reset_act;
      break;
    
  }
  switch (_126_OpPhases_state_act) {
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (outC->OpPhases_reset_act) {
        outC->init1 = kcg_true;
      }
      break;
    case SSM_st_NormalPhase_OpPhases :
      if (outC->OpPhases_reset_act) {
        outC->init2 = kcg_true;
      }
      break;
    
  }
  if (outC->init3) {
    last_picture = 0.0;
  }
  else {
    last_picture = outC->picture;
  }
  if (outC->init3) {
    last_payMode = kcg_false;
  }
  else {
    last_payMode = outC->payMode;
  }
  if (outC->init3) {
    last_RefAttitude = kcg_false;
  }
  else {
    last_RefAttitude = outC->RefAttitude;
  }
  if (outC->init3) {
    last_safeMode = kcg_false;
  }
  else {
    last_safeMode = outC->safeMode;
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
  if (outC->init3) {
    last_Power = kcg_false;
  }
  else {
    last_Power = outC->rem_Power;
  }
  _L7 = inC->PassarFaseBtn;
  _L1 = outC->LaunchPhase;
  switch (_126_OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _33_picture = last_picture;
      _32_payMode = last_payMode;
      _31_NormalPhase = last_NormalPhase;
      _30_RefAttitude = last_RefAttitude;
      _29_safeMode = last_safeMode;
      _28_StartAtAcquisition = last_StartAtAcquisition;
      break;
    
  }
  switch (OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      if (br_1_guard_OpPhases_Ground) {
        _104_OpPhases_fired_strong = SSM_TR_Ground_1_OpPhases;
      }
      else {
        _104_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      _125_OpPhases_fired_strong = _104_OpPhases_fired_strong;
      break;
    case SSM_st_Launch_OpPhases :
      if (br_1_guard_OpPhases_Launch) {
        _101_OpPhases_fired_strong = SSM_TR_Launch_1_OpPhases;
      }
      else {
        _101_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      _125_OpPhases_fired_strong = _101_OpPhases_fired_strong;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (_119_br_1_guard_OpPhases_AttitudeAcquisition) {
        _98_OpPhases_fired_strong = SSM_TR_AttitudeAcquisition_1_OpPhases;
      }
      else {
        _98_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      _125_OpPhases_fired_strong = _98_OpPhases_fired_strong;
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      _125_OpPhases_fired_strong = OpPhases_fired_strong;
      break;
    
  }
  switch (_126_OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _36_OpPhases_fired = _125_OpPhases_fired_strong;
      _35_OpPhases_reset_nxt = kcg_false;
      _34_OpPhases_state_nxt = SSM_st_Ground_OpPhases;
      _L1_OpPhases_Ground = inC->Power;
      PowerOn_OpPhases_Ground = _L1_OpPhases_Ground;
      if (outC->init) {
        SM2_state_sel_OpPhases_Ground = SSM_st_SupportMode_OpPhases_Ground_SM2;
      }
      else {
        SM2_state_sel_OpPhases_Ground = outC->SM2_state_nxt_OpPhases_Ground;
      }
      _107_SM2_clock_OpPhases_Ground = SM2_state_sel_OpPhases_Ground;
      switch (_107_SM2_clock_OpPhases_Ground) {
        case SSM_st_SupportMode_OpPhases_Ground_SM2 :
          _120_br_1_guard_OpPhases_Ground_SM2_SupportMode =
            !PowerOn_OpPhases_Ground;
          if (_120_br_1_guard_OpPhases_Ground_SM2_SupportMode) {
            _93_SM2_state_act_OpPhases_Ground =
              SSM_st_SafeMode_OpPhases_Ground_SM2;
          }
          else {
            _93_SM2_state_act_OpPhases_Ground =
              SSM_st_SupportMode_OpPhases_Ground_SM2;
          }
          _123_SM2_state_act_OpPhases_Ground =
            _93_SM2_state_act_OpPhases_Ground;
          break;
        case SSM_st_SafeMode_OpPhases_Ground_SM2 :
          br_1_guard_OpPhases_Ground_SM2_SafeMode = PowerOn_OpPhases_Ground;
          if (br_1_guard_OpPhases_Ground_SM2_SafeMode) {
            SM2_state_act_OpPhases_Ground =
              SSM_st_SupportMode_OpPhases_Ground_SM2;
          }
          else {
            SM2_state_act_OpPhases_Ground = SSM_st_SafeMode_OpPhases_Ground_SM2;
          }
          _123_SM2_state_act_OpPhases_Ground = SM2_state_act_OpPhases_Ground;
          break;
        
      }
      SM2_clock_OpPhases_Ground = _123_SM2_state_act_OpPhases_Ground;
      switch (SM2_clock_OpPhases_Ground) {
        case SSM_st_SupportMode_OpPhases_Ground_SM2 :
          _89_StartLaunchPhase = kcg_false;
          break;
        
      }
      switch (_107_SM2_clock_OpPhases_Ground) {
        case SSM_st_SupportMode_OpPhases_Ground_SM2 :
          if (_120_br_1_guard_OpPhases_Ground_SM2_SupportMode) {
            _95_SM2_fired_strong_OpPhases_Ground =
              SSM_TR_SupportMode_1_SM2_OpPhases_Ground;
          }
          else {
            _95_SM2_fired_strong_OpPhases_Ground =
              SSM_TR_no_trans_SM2_OpPhases_Ground;
          }
          _122_SM2_fired_strong_OpPhases_Ground =
            _95_SM2_fired_strong_OpPhases_Ground;
          break;
        case SSM_st_SafeMode_OpPhases_Ground_SM2 :
          if (br_1_guard_OpPhases_Ground_SM2_SafeMode) {
            SM2_fired_strong_OpPhases_Ground =
              SSM_TR_SafeMode_1_SM2_OpPhases_Ground;
          }
          else {
            SM2_fired_strong_OpPhases_Ground =
              SSM_TR_no_trans_SM2_OpPhases_Ground;
          }
          _122_SM2_fired_strong_OpPhases_Ground =
            SM2_fired_strong_OpPhases_Ground;
          break;
        
      }
      switch (SM2_clock_OpPhases_Ground) {
        case SSM_st_SupportMode_OpPhases_Ground_SM2 :
          _92_SM2_fired_OpPhases_Ground = _122_SM2_fired_strong_OpPhases_Ground;
          _91_SM2_reset_nxt_OpPhases_Ground = kcg_false;
          _90_SM2_state_nxt_OpPhases_Ground =
            SSM_st_SupportMode_OpPhases_Ground_SM2;
          _L1_16 = kcg_false;
          TakingPicture_1 = _L1_16;
          _L4_OpPhases_Ground_SM2_SupportMode = TakingPicture_1;
          _L1_15 = kcg_false;
          TestingActuators_1 = _L1_15;
          _L3_OpPhases_Ground_SM2_SupportMode = TestingActuators_1;
          _L1_14 = kcg_false;
          SensorsActive_1 = _L1_14;
          _L2_OpPhases_Ground_SM2_SupportMode = SensorsActive_1;
          DiagnosticPass_clock_OpPhases_Ground_SM2_SupportMode = kcg_true;
          _L1_OpPhases_Ground_SM2_SupportMode = inC->Telemetry;
          _121_SM2_fired_OpPhases_Ground = _92_SM2_fired_OpPhases_Ground;
          break;
        case SSM_st_SafeMode_OpPhases_Ground_SM2 :
          SM2_fired_OpPhases_Ground = _122_SM2_fired_strong_OpPhases_Ground;
          SM2_reset_nxt_OpPhases_Ground = kcg_false;
          SM2_state_nxt_OpPhases_Ground = SSM_st_SafeMode_OpPhases_Ground_SM2;
          _L7_OpPhases_Ground_SM2_SafeMode = kcg_true;
          _L6_OpPhases_Ground_SM2_SafeMode = kcg_false;
          _L4_OpPhases_Ground_SM2_SafeMode = inC->PassarFaseBtn;
          if (_L4_OpPhases_Ground_SM2_SafeMode) {
            _L5_OpPhases_Ground_SM2_SafeMode = _L7_OpPhases_Ground_SM2_SafeMode;
          }
          else {
            _L5_OpPhases_Ground_SM2_SafeMode = _L6_OpPhases_Ground_SM2_SafeMode;
          }
          _88_StartLaunchPhase = _L5_OpPhases_Ground_SM2_SafeMode;
          _L1_23 = kcg_false;
          SensorsActive_2 = _L1_23;
          _L8_OpPhases_Ground_SM2_SafeMode = SensorsActive_2;
          _L1_OpPhases_Ground_SM2_SafeMode = inC->Telemetry;
          _121_SM2_fired_OpPhases_Ground = SM2_fired_OpPhases_Ground;
          break;
        
      }
      if (outC->init) {
        SM2_reset_sel_OpPhases_Ground = kcg_false;
      }
      else {
        SM2_reset_sel_OpPhases_Ground = outC->SM2_reset_nxt_OpPhases_Ground;
      }
      switch (SM2_clock_OpPhases_Ground) {
        case SSM_st_SupportMode_OpPhases_Ground_SM2 :
          outC->SM2_reset_nxt_OpPhases_Ground =
            _91_SM2_reset_nxt_OpPhases_Ground;
          outC->SM2_state_nxt_OpPhases_Ground =
            _90_SM2_state_nxt_OpPhases_Ground;
          _27_StartLaunchPhase = _89_StartLaunchPhase;
          break;
        case SSM_st_SafeMode_OpPhases_Ground_SM2 :
          outC->SM2_reset_nxt_OpPhases_Ground = SM2_reset_nxt_OpPhases_Ground;
          outC->SM2_state_nxt_OpPhases_Ground = SM2_state_nxt_OpPhases_Ground;
          _27_StartLaunchPhase = _88_StartLaunchPhase;
          break;
        
      }
      switch (_107_SM2_clock_OpPhases_Ground) {
        case SSM_st_SupportMode_OpPhases_Ground_SM2 :
          _94_SM2_reset_act_OpPhases_Ground =
            _120_br_1_guard_OpPhases_Ground_SM2_SupportMode;
          break;
        case SSM_st_SafeMode_OpPhases_Ground_SM2 :
          SM2_reset_act_OpPhases_Ground =
            br_1_guard_OpPhases_Ground_SM2_SafeMode;
          break;
        
      }
      if (outC->init) {
        SM2_reset_prv_OpPhases_Ground = kcg_false;
      }
      else {
        SM2_reset_prv_OpPhases_Ground = outC->SM2_reset_act_OpPhases_Ground;
      }
      switch (_107_SM2_clock_OpPhases_Ground) {
        case SSM_st_SupportMode_OpPhases_Ground_SM2 :
          outC->SM2_reset_act_OpPhases_Ground =
            _94_SM2_reset_act_OpPhases_Ground;
          break;
        case SSM_st_SafeMode_OpPhases_Ground_SM2 :
          outC->SM2_reset_act_OpPhases_Ground = SM2_reset_act_OpPhases_Ground;
          break;
        
      }
      _124_OpPhases_fired = _36_OpPhases_fired;
      break;
    case SSM_st_Launch_OpPhases :
      _23_picture = last_picture;
      _22_payMode = last_payMode;
      _21_NormalPhase = last_NormalPhase;
      _20_RefAttitude = last_RefAttitude;
      _19_safeMode = last_safeMode;
      _17_StartLaunchPhase = kcg_false;
      _26_OpPhases_fired = _125_OpPhases_fired_strong;
      _25_OpPhases_reset_nxt = kcg_false;
      _24_OpPhases_state_nxt = SSM_st_Launch_OpPhases;
      _L2_OpPhases_Launch = kcg_false;
      _18_StartAtAcquisition = _L2_OpPhases_Launch;
      _L1_3 = kcg_false;
      SensorsActive_3 = _L1_3;
      _L3_OpPhases_Launch = SensorsActive_3;
      _L1_OpPhases_Launch = inC->Telemetry;
      _124_OpPhases_fired = _26_OpPhases_fired;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _13_picture = last_picture;
      _12_payMode = last_payMode;
      _8_StartAtAcquisition = last_StartAtAcquisition;
      _7_StartLaunchPhase = kcg_false;
      if (outC->init1) {
        last_NPhase_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        last_NPhase_OpPhases_AttitudeAcquisition =
          outC->NPhase_OpPhases_AttitudeAcquisition;
      }
      if (outC->init1) {
        last_RefAtt_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        last_RefAtt_OpPhases_AttitudeAcquisition =
          outC->RefAtt_OpPhases_AttitudeAcquisition;
      }
      if (outC->init1) {
        last_sMode_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        last_sMode_OpPhases_AttitudeAcquisition =
          outC->sMode_OpPhases_AttitudeAcquisition;
      }
      _16_OpPhases_fired = _125_OpPhases_fired_strong;
      _15_OpPhases_reset_nxt = kcg_false;
      _14_OpPhases_state_nxt = SSM_st_AttitudeAcquisition_OpPhases;
      _L5148_OpPhases_AttitudeAcquisition = kcg_false;
      outC->NPhase_OpPhases_AttitudeAcquisition =
        _L5148_OpPhases_AttitudeAcquisition;
      _L3149_OpPhases_AttitudeAcquisition = last_RefAttitude;
      outC->RefAtt_OpPhases_AttitudeAcquisition =
        _L3149_OpPhases_AttitudeAcquisition;
      _L2150_OpPhases_AttitudeAcquisition = last_safeMode;
      outC->sMode_OpPhases_AttitudeAcquisition =
        _L2150_OpPhases_AttitudeAcquisition;
      if (outC->init1) {
        atacquisition_state_sel_OpPhases_AttitudeAcquisition =
          SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
      }
      else {
        atacquisition_state_sel_OpPhases_AttitudeAcquisition =
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
      }
      _106_atacquisition_clock_OpPhases_AttitudeAcquisition =
        atacquisition_state_sel_OpPhases_AttitudeAcquisition;
      switch (_106_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          _115_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            !outC->sMode_OpPhases_AttitudeAcquisition;
          br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            outC->sMode_OpPhases_AttitudeAcquisition;
          if (_115_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _85_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else if (br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _85_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else {
            _85_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
          }
          _118_atacquisition_state_act_OpPhases_AttitudeAcquisition =
            _85_atacquisition_state_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          _114_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            outC->sMode_OpPhases_AttitudeAcquisition;
          if (_114_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _82_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else {
            _82_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition;
          }
          _118_atacquisition_state_act_OpPhases_AttitudeAcquisition =
            _82_atacquisition_state_act_OpPhases_AttitudeAcquisition;
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
          _118_atacquisition_state_act_OpPhases_AttitudeAcquisition =
            atacquisition_state_act_OpPhases_AttitudeAcquisition;
          break;
        
      }
      atacquisition_clock_OpPhases_AttitudeAcquisition =
        _118_atacquisition_state_act_OpPhases_AttitudeAcquisition;
      switch (atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          _78_NormalPhase = last_NormalPhase;
          _77_RefAttitude = last_RefAttitude;
          break;
        
      }
      switch (_106_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          if (_115_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _87_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_readsensors_1_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else if (br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _87_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_readsensors_2_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else {
            _87_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_no_trans_atacquisition_OpPhases_AttitudeAcquisition;
          }
          _117_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
            _87_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          if (_114_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _84_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_refAttitude_1_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else {
            _84_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_no_trans_atacquisition_OpPhases_AttitudeAcquisition;
          }
          _117_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
            _84_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
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
          _117_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
            atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          break;
        
      }
      switch (atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          _81_atacquisition_fired_OpPhases_AttitudeAcquisition =
            _117_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          _80_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition = kcg_false;
          _79_atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
          _L1147_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            kcg_false;
          _76_safeMode =
            _L1147_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
          _L1_5 = kcg_false;
          SensorsActive_5 = _L1_5;
          _L2146_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            SensorsActive_5;
          _116_atacquisition_fired_OpPhases_AttitudeAcquisition =
            _81_atacquisition_fired_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          _75_atacquisition_fired_OpPhases_AttitudeAcquisition =
            _117_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          _74_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition = kcg_false;
          _73_atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition;
          _L9_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          _L8_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          _L7_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          _L6_OpPhases_AttitudeAcquisition_atacquisition_refAttitude = kcg_true;
          _L5141_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_true;
          _L4142_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          _L3143_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          if (_L9_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _L2144_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
              _L6_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          else {
            _L2144_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
              _L4142_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          _72_NormalPhase =
            _L2144_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          if (_L7_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _L1145_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
              _L5141_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          else {
            _L1145_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
              _L3143_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          _70_safeMode =
            _L1145_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          _71_RefAttitude =
            _L8_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          _L1_12 = kcg_false;
          ControlAlgorithmActive_1 = _L1_12;
          _L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            ControlAlgorithmActive_1;
          _116_atacquisition_fired_OpPhases_AttitudeAcquisition =
            _75_atacquisition_fired_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          _69_NormalPhase = last_NormalPhase;
          _68_RefAttitude = last_RefAttitude;
          atacquisition_fired_OpPhases_AttitudeAcquisition =
            _117_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
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
          _67_safeMode =
            _L1_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
          _L1_1 = kcg_false;
          Updating_1 = _L1_1;
          _L5_OpPhases_AttitudeAcquisition_atacquisition_SafeMode = Updating_1;
          _116_atacquisition_fired_OpPhases_AttitudeAcquisition =
            atacquisition_fired_OpPhases_AttitudeAcquisition;
          break;
        
      }
      if (outC->init1) {
        atacquisition_reset_sel_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        atacquisition_reset_sel_OpPhases_AttitudeAcquisition =
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
      }
      switch (atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition =
            _80_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            _79_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
          _11_NormalPhase = _78_NormalPhase;
          _10_RefAttitude = _77_RefAttitude;
          _9_safeMode = _76_safeMode;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition =
            _74_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            _73_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
          _11_NormalPhase = _72_NormalPhase;
          _10_RefAttitude = _71_RefAttitude;
          _9_safeMode = _70_safeMode;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition =
            atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
          _11_NormalPhase = _69_NormalPhase;
          _10_RefAttitude = _68_RefAttitude;
          _9_safeMode = _67_safeMode;
          break;
        
      }
      switch (_106_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          if (_115_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _86_atacquisition_reset_act_OpPhases_AttitudeAcquisition = kcg_true;
          }
          else {
            _86_atacquisition_reset_act_OpPhases_AttitudeAcquisition =
              br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
          }
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          _83_atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            _114_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
          break;
        
      }
      if (outC->init1) {
        atacquisition_reset_prv_OpPhases_AttitudeAcquisition = kcg_false;
      }
      else {
        atacquisition_reset_prv_OpPhases_AttitudeAcquisition =
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition;
      }
      switch (_106_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            _86_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            _83_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            atacquisition_reset_act_OpPhases_AttitudeAcquisition;
          break;
        
      }
      _L1151_OpPhases_AttitudeAcquisition = inC->AttitudeReference;
      _124_OpPhases_fired = _16_OpPhases_fired;
      break;
    case SSM_st_NormalPhase_OpPhases :
      NormalPhase = last_NormalPhase;
      StartAtAcquisition = last_StartAtAcquisition;
      StartLaunchPhase = kcg_false;
      if (outC->init2) {
        last_sMode_OpPhases_NormalPhase = kcg_false;
      }
      else {
        last_sMode_OpPhases_NormalPhase = outC->sMode_OpPhases_NormalPhase;
      }
      OpPhases_fired = _125_OpPhases_fired_strong;
      OpPhases_reset_nxt = kcg_false;
      OpPhases_state_nxt = SSM_st_NormalPhase_OpPhases;
      _L2_OpPhases_NormalPhase = last_safeMode;
      outC->sMode_OpPhases_NormalPhase = _L2_OpPhases_NormalPhase;
      _L1_OpPhases_NormalPhase = last_payMode;
      pMode_OpPhases_NormalPhase = _L1_OpPhases_NormalPhase;
      if (outC->init2) {
        NPhase_state_sel_OpPhases_NormalPhase =
          SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
      }
      else {
        NPhase_state_sel_OpPhases_NormalPhase =
          outC->NPhase_state_nxt_OpPhases_NormalPhase;
      }
      _105_NPhase_clock_OpPhases_NormalPhase =
        NPhase_state_sel_OpPhases_NormalPhase;
      switch (_105_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          _109_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl =
            pMode_OpPhases_NormalPhase;
          _110_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl =
            outC->sMode_OpPhases_NormalPhase;
          if (_109_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _64_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_Payload_OpPhases_NormalPhase_NPhase;
          }
          else if (_110_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _64_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_SafeMode_OpPhases_NormalPhase_NPhase;
          }
          else {
            _64_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          }
          _113_NPhase_state_act_OpPhases_NormalPhase =
            _64_NPhase_state_act_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          _108_br_1_guard_OpPhases_NormalPhase_NPhase_Payload =
            !pMode_OpPhases_NormalPhase;
          if (_108_br_1_guard_OpPhases_NormalPhase_NPhase_Payload) {
            _61_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          }
          else {
            _61_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_Payload_OpPhases_NormalPhase_NPhase;
          }
          _113_NPhase_state_act_OpPhases_NormalPhase =
            _61_NPhase_state_act_OpPhases_NormalPhase;
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
          _113_NPhase_state_act_OpPhases_NormalPhase =
            NPhase_state_act_OpPhases_NormalPhase;
          break;
        
      }
      NPhase_clock_OpPhases_NormalPhase =
        _113_NPhase_state_act_OpPhases_NormalPhase;
      switch (NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          _51_picture = last_picture;
          break;
        
      }
      switch (_105_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          if (_109_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _66_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_AttControl_1_NPhase_OpPhases_NormalPhase;
          }
          else if (_110_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _66_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_AttControl_2_NPhase_OpPhases_NormalPhase;
          }
          else {
            _66_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          }
          _112_NPhase_fired_strong_OpPhases_NormalPhase =
            _66_NPhase_fired_strong_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          if (_108_br_1_guard_OpPhases_NormalPhase_NPhase_Payload) {
            _63_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_Payload_1_NPhase_OpPhases_NormalPhase;
          }
          else {
            _63_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          }
          _112_NPhase_fired_strong_OpPhases_NormalPhase =
            _63_NPhase_fired_strong_OpPhases_NormalPhase;
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
          _112_NPhase_fired_strong_OpPhases_NormalPhase =
            NPhase_fired_strong_OpPhases_NormalPhase;
          break;
        
      }
      switch (NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          _54_NPhase_fired_OpPhases_NormalPhase =
            _112_NPhase_fired_strong_OpPhases_NormalPhase;
          _53_NPhase_reset_nxt_OpPhases_NormalPhase = kcg_false;
          _52_NPhase_state_nxt_OpPhases_NormalPhase =
            SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          _L8133_OpPhases_NormalPhase_NPhase_AttControl = kcg_false;
          _L7134_OpPhases_NormalPhase_NPhase_AttControl = kcg_false;
          _L6135_OpPhases_NormalPhase_NPhase_AttControl = kcg_true;
          _L5136_OpPhases_NormalPhase_NPhase_AttControl = kcg_false;
          if (_L7134_OpPhases_NormalPhase_NPhase_AttControl) {
            _L4137_OpPhases_NormalPhase_NPhase_AttControl =
              _L6135_OpPhases_NormalPhase_NPhase_AttControl;
          }
          else {
            _L4137_OpPhases_NormalPhase_NPhase_AttControl =
              _L5136_OpPhases_NormalPhase_NPhase_AttControl;
          }
          _48_safeMode = _L4137_OpPhases_NormalPhase_NPhase_AttControl;
          _L3138_OpPhases_NormalPhase_NPhase_AttControl = inC->picLocation;
          _L2139_OpPhases_NormalPhase_NPhase_AttControl = inC->takePict;
          _50_payMode = _L2139_OpPhases_NormalPhase_NPhase_AttControl;
          _49_RefAttitude = _L8133_OpPhases_NormalPhase_NPhase_AttControl;
          _L1_21 = kcg_false;
          ControlAlgorithmActive_2 = _L1_21;
          _L9132_OpPhases_NormalPhase_NPhase_AttControl =
            ControlAlgorithmActive_2;
          _L1140_OpPhases_NormalPhase_NPhase_AttControl = inC->Telemetry;
          _111_NPhase_fired_OpPhases_NormalPhase =
            _54_NPhase_fired_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          _42_RefAttitude = last_RefAttitude;
          Payload_weakb_clock_OpPhases_NormalPhase_NPhase =
            _112_NPhase_fired_strong_OpPhases_NormalPhase !=
            SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          if (Payload_weakb_clock_OpPhases_NormalPhase_NPhase) {
            _60_NPhase_fired_OpPhases_NormalPhase =
              _112_NPhase_fired_strong_OpPhases_NormalPhase;
            _59_NPhase_reset_nxt_OpPhases_NormalPhase = kcg_false;
            _58_NPhase_state_nxt_OpPhases_NormalPhase =
              SSM_st_Payload_OpPhases_NormalPhase_NPhase;
            _47_NPhase_fired_OpPhases_NormalPhase =
              _60_NPhase_fired_OpPhases_NormalPhase;
            _46_NPhase_reset_nxt_OpPhases_NormalPhase =
              _59_NPhase_reset_nxt_OpPhases_NormalPhase;
            _45_NPhase_state_nxt_OpPhases_NormalPhase =
              _58_NPhase_state_nxt_OpPhases_NormalPhase;
          }
          else {
            br_2_guard_OpPhases_NormalPhase_NPhase_Payload =
              outC->sMode_OpPhases_NormalPhase;
            if (br_2_guard_OpPhases_NormalPhase_NPhase_Payload) {
              _57_NPhase_fired_OpPhases_NormalPhase =
                SSM_TR_Payload_2_NPhase_OpPhases_NormalPhase;
            }
            else {
              _57_NPhase_fired_OpPhases_NormalPhase =
                SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
            }
            _56_NPhase_reset_nxt_OpPhases_NormalPhase =
              br_2_guard_OpPhases_NormalPhase_NPhase_Payload;
            if (br_2_guard_OpPhases_NormalPhase_NPhase_Payload) {
              _55_NPhase_state_nxt_OpPhases_NormalPhase =
                SSM_st_SafeMode_OpPhases_NormalPhase_NPhase;
            }
            else {
              _55_NPhase_state_nxt_OpPhases_NormalPhase =
                SSM_st_Payload_OpPhases_NormalPhase_NPhase;
            }
            _47_NPhase_fired_OpPhases_NormalPhase =
              _57_NPhase_fired_OpPhases_NormalPhase;
            _46_NPhase_reset_nxt_OpPhases_NormalPhase =
              _56_NPhase_reset_nxt_OpPhases_NormalPhase;
            _45_NPhase_state_nxt_OpPhases_NormalPhase =
              _55_NPhase_state_nxt_OpPhases_NormalPhase;
          }
          _L10_OpPhases_NormalPhase_NPhase_Payload = 0.0;
          _L9_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          _L8_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          _L7_OpPhases_NormalPhase_NPhase_Payload = kcg_true;
          _L6_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          _L5127_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          _L4128_OpPhases_NormalPhase_NPhase_Payload = kcg_true;
          _L3129_OpPhases_NormalPhase_NPhase_Payload = inC->picLocation;
          _44_picture = _L10_OpPhases_NormalPhase_NPhase_Payload;
          if (_L6_OpPhases_NormalPhase_NPhase_Payload) {
            _L2130_OpPhases_NormalPhase_NPhase_Payload =
              _L4128_OpPhases_NormalPhase_NPhase_Payload;
          }
          else {
            _L2130_OpPhases_NormalPhase_NPhase_Payload =
              _L5127_OpPhases_NormalPhase_NPhase_Payload;
          }
          _41_safeMode = _L2130_OpPhases_NormalPhase_NPhase_Payload;
          if (_L9_OpPhases_NormalPhase_NPhase_Payload) {
            _L1131_OpPhases_NormalPhase_NPhase_Payload =
              _L7_OpPhases_NormalPhase_NPhase_Payload;
          }
          else {
            _L1131_OpPhases_NormalPhase_NPhase_Payload =
              _L8_OpPhases_NormalPhase_NPhase_Payload;
          }
          _43_payMode = _L1131_OpPhases_NormalPhase_NPhase_Payload;
          _111_NPhase_fired_OpPhases_NormalPhase =
            _47_NPhase_fired_OpPhases_NormalPhase;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          _40_picture = last_picture;
          _39_payMode = last_payMode;
          _38_RefAttitude = last_RefAttitude;
          NPhase_fired_OpPhases_NormalPhase =
            _112_NPhase_fired_strong_OpPhases_NormalPhase;
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
          _37_safeMode = _L1_OpPhases_NormalPhase_NPhase_SafeMode;
          _L1_2 = kcg_false;
          Updating_2 = _L1_2;
          _L5_OpPhases_NormalPhase_NPhase_SafeMode = Updating_2;
          _111_NPhase_fired_OpPhases_NormalPhase =
            NPhase_fired_OpPhases_NormalPhase;
          break;
        
      }
      if (outC->init2) {
        NPhase_reset_sel_OpPhases_NormalPhase = kcg_false;
      }
      else {
        NPhase_reset_sel_OpPhases_NormalPhase =
          outC->NPhase_reset_nxt_OpPhases_NormalPhase;
      }
      switch (NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_nxt_OpPhases_NormalPhase =
            _53_NPhase_reset_nxt_OpPhases_NormalPhase;
          outC->NPhase_state_nxt_OpPhases_NormalPhase =
            _52_NPhase_state_nxt_OpPhases_NormalPhase;
          picture = _51_picture;
          payMode = _50_payMode;
          RefAttitude = _49_RefAttitude;
          safeMode = _48_safeMode;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_nxt_OpPhases_NormalPhase =
            _46_NPhase_reset_nxt_OpPhases_NormalPhase;
          outC->NPhase_state_nxt_OpPhases_NormalPhase =
            _45_NPhase_state_nxt_OpPhases_NormalPhase;
          picture = _44_picture;
          payMode = _43_payMode;
          RefAttitude = _42_RefAttitude;
          safeMode = _41_safeMode;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_nxt_OpPhases_NormalPhase =
            NPhase_reset_nxt_OpPhases_NormalPhase;
          outC->NPhase_state_nxt_OpPhases_NormalPhase =
            NPhase_state_nxt_OpPhases_NormalPhase;
          picture = _40_picture;
          payMode = _39_payMode;
          RefAttitude = _38_RefAttitude;
          safeMode = _37_safeMode;
          break;
        
      }
      switch (_105_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          if (_109_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _65_NPhase_reset_act_OpPhases_NormalPhase = kcg_true;
          }
          else {
            _65_NPhase_reset_act_OpPhases_NormalPhase =
              _110_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl;
          }
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          _62_NPhase_reset_act_OpPhases_NormalPhase =
            _108_br_1_guard_OpPhases_NormalPhase_NPhase_Payload;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          NPhase_reset_act_OpPhases_NormalPhase =
            br_1_guard_OpPhases_NormalPhase_NPhase_SafeMode;
          break;
        
      }
      if (outC->init2) {
        NPhase_reset_prv_OpPhases_NormalPhase = kcg_false;
      }
      else {
        NPhase_reset_prv_OpPhases_NormalPhase =
          outC->NPhase_reset_act_OpPhases_NormalPhase;
      }
      switch (_105_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_act_OpPhases_NormalPhase =
            _65_NPhase_reset_act_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_act_OpPhases_NormalPhase =
            _62_NPhase_reset_act_OpPhases_NormalPhase;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_act_OpPhases_NormalPhase =
            NPhase_reset_act_OpPhases_NormalPhase;
          break;
        
      }
      _124_OpPhases_fired = OpPhases_fired;
      break;
    
  }
  if (outC->init3) {
    OpPhases_reset_sel = kcg_false;
  }
  else {
    OpPhases_reset_sel = outC->OpPhases_reset_nxt;
  }
  switch (_126_OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->OpPhases_reset_nxt = _35_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _34_OpPhases_state_nxt;
      outC->picture = _33_picture;
      outC->payMode = _32_payMode;
      outC->NormalPhase = _31_NormalPhase;
      outC->RefAttitude = _30_RefAttitude;
      outC->safeMode = _29_safeMode;
      outC->StartAtAcquisition = _28_StartAtAcquisition;
      outC->StartLaunchPhase = _27_StartLaunchPhase;
      break;
    case SSM_st_Launch_OpPhases :
      outC->OpPhases_reset_nxt = _25_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _24_OpPhases_state_nxt;
      outC->picture = _23_picture;
      outC->payMode = _22_payMode;
      outC->NormalPhase = _21_NormalPhase;
      outC->RefAttitude = _20_RefAttitude;
      outC->safeMode = _19_safeMode;
      outC->StartAtAcquisition = _18_StartAtAcquisition;
      outC->StartLaunchPhase = _17_StartLaunchPhase;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->OpPhases_reset_nxt = _15_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _14_OpPhases_state_nxt;
      outC->picture = _13_picture;
      outC->payMode = _12_payMode;
      outC->NormalPhase = _11_NormalPhase;
      outC->RefAttitude = _10_RefAttitude;
      outC->safeMode = _9_safeMode;
      outC->StartAtAcquisition = _8_StartAtAcquisition;
      outC->StartLaunchPhase = _7_StartLaunchPhase;
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
      outC->StartLaunchPhase = StartLaunchPhase;
      break;
    
  }
  outC->rem_Power = inC->Power;
  outC->rem_Telemetry = inC->Telemetry;
  outC->rem_AttitudeReference = inC->AttitudeReference;
  outC->rem_takePict = inC->takePict;
  outC->rem_picLocation = inC->picLocation;
  switch (_126_OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->init = kcg_false;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->init1 = kcg_false;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->init2 = kcg_false;
      break;
    
  }
  outC->init3 = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** OperationalScenario.c
** Generation date: 2014-09-18T22:19:01
*************************************************************$ */

