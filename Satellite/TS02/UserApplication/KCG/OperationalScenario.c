/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Paulo/ITA/237/TS02/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-09-19T10:39:11
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
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _51_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _50_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _49_OpPhases_state_nxt;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _48_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _47_AttitudeVisibleLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool _46_LaunchVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _45_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _44_color4;
  /* OperationalScenario::color3 */ kcg_int _43_color3;
  /* OperationalScenario::color_2 */ kcg_int _42_color_2;
  /* OperationalScenario::color */ kcg_int color41;
  /* OperationalScenario::picture */ kcg_real _40_picture;
  /* OperationalScenario::payMode */ kcg_bool _39_payMode;
  /* OperationalScenario::NormalPhase */ kcg_bool _38_NormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool _37_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _36_safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool _35_StartAtAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _34_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _33_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _32_OpPhases_state_nxt;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _31_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _30_AttitudeVisibleLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool _29_LaunchVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _28_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _27_color4;
  /* OperationalScenario::color3 */ kcg_int _26_color3;
  /* OperationalScenario::color_2 */ kcg_int _25_color_2;
  /* OperationalScenario::color */ kcg_int color24;
  /* OperationalScenario::picture */ kcg_real _23_picture;
  /* OperationalScenario::payMode */ kcg_bool _22_payMode;
  /* OperationalScenario::NormalPhase */ kcg_bool _21_NormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool _20_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _19_safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool _18_StartAtAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _17_OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool _16_OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _15_OpPhases_state_nxt;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool _14_NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool _13_AttitudeVisibleLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool _12_LaunchVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool _11_GroundVisibleLocal;
  /* OperationalScenario::color4 */ kcg_int _10_color4;
  /* OperationalScenario::color3 */ kcg_int _9_color3;
  /* OperationalScenario::color_2 */ kcg_int _8_color_2;
  /* OperationalScenario::color */ kcg_int color7;
  /* OperationalScenario::picture */ kcg_real _6_picture;
  /* OperationalScenario::payMode */ kcg_bool _5_payMode;
  /* OperationalScenario::NormalPhase */ kcg_bool _4_NormalPhase;
  /* OperationalScenario::RefAttitude */ kcg_bool _3_RefAttitude;
  /* OperationalScenario::safeMode */ kcg_bool _2_safeMode;
  /* OperationalScenario::StartAtAcquisition */ kcg_bool _1_StartAtAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_prv_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_sel_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::sMode */ kcg_bool last_sMode_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::RefAtt */ kcg_bool last_RefAtt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::NPhase */ kcg_bool last_NPhase_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::SafeMode */ kcg_bool br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::refAttitude */ kcg_bool _116_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _97_atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _98_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _99_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors */ kcg_bool _117_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition::readsensors */ kcg_bool br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _100_atacquisition_state_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _101_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _102_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::safeMode */ kcg_bool _82_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _83_RefAttitude;
  /* OperationalScenario::NormalPhase */ kcg_bool _84_NormalPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::safeMode */ kcg_bool _85_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _86_RefAttitude;
  /* OperationalScenario::NormalPhase */ kcg_bool _87_NormalPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _88_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _89_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _90_atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::safeMode */ kcg_bool _91_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _92_RefAttitude;
  /* OperationalScenario::NormalPhase */ kcg_bool _93_NormalPhase;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_ST_atacquisition_OpPhases_AttitudeAcquisition _94_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ kcg_bool _95_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases::AttitudeAcquisition::atacquisition */ SSM_TR_atacquisition_OpPhases_AttitudeAcquisition _96_atacquisition_fired_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_nxt;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_nxt;
  /* OperationalScenario::NormalPhaseVisibleLocal */ kcg_bool NormalPhaseVisibleLocal;
  /* OperationalScenario::AttitudeVisibleLocal */ kcg_bool AttitudeVisibleLocal;
  /* OperationalScenario::LaunchVisibleLocal */ kcg_bool LaunchVisibleLocal;
  /* OperationalScenario::GroundVisibleLocal */ kcg_bool GroundVisibleLocal;
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
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_prv_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_sel_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::sMode */ kcg_bool last_sMode_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::SafeMode */ kcg_bool br_1_guard_OpPhases_NormalPhase_NPhase_SafeMode;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload */ kcg_bool _112_br_1_guard_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _76_NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _77_NPhase_reset_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _78_NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl */ kcg_bool _113_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::AttControl */ kcg_bool _114_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _79_NPhase_state_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _80_NPhase_reset_act_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _81_NPhase_fired_strong_OpPhases_NormalPhase;
  /* OperationalScenario::safeMode */ kcg_bool _52_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _53_RefAttitude;
  /* OperationalScenario::payMode */ kcg_bool _54_payMode;
  /* OperationalScenario::picture */ kcg_real _55_picture;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _75_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _74_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _73_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _72_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _71_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _70_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase::Payload */ kcg_bool br_2_guard_OpPhases_NormalPhase_NPhase_Payload;
  /* OperationalScenario::safeMode */ kcg_bool _56_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _57_RefAttitude;
  /* OperationalScenario::payMode */ kcg_bool _58_payMode;
  /* OperationalScenario::picture */ kcg_real _59_picture;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _60_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _61_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _62_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::safeMode */ kcg_bool _63_safeMode;
  /* OperationalScenario::RefAttitude */ kcg_bool _64_RefAttitude;
  /* OperationalScenario::payMode */ kcg_bool _65_payMode;
  /* OperationalScenario::picture */ kcg_real _66_picture;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_ST_NPhase_OpPhases_NormalPhase _67_NPhase_state_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ kcg_bool _68_NPhase_reset_nxt_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases::NormalPhase::NPhase */ SSM_TR_NPhase_OpPhases_NormalPhase _69_NPhase_fired_OpPhases_NormalPhase;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _111_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _110_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _109_OpPhases_state_act;
  /* OperationalScenario::OpPhases::Ground */ kcg_bool br_1_guard_OpPhases_Ground;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _108_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _107_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _106_OpPhases_state_act;
  /* OperationalScenario::OpPhases::Launch */ kcg_bool br_1_guard_OpPhases_Launch;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases _105_OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool _104_OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases _103_OpPhases_state_act;
  /* OperationalScenario::OpPhases::AttitudeAcquisition */ kcg_bool _118_br_1_guard_OpPhases_AttitudeAcquisition;
  /* OperationalScenario::OpPhases */ SSM_TR_OpPhases OpPhases_fired_strong;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_act;
  /* OperationalScenario::OpPhases */ SSM_ST_OpPhases OpPhases_state_act;
  /* OperationalScenario::OpPhases::NormalPhase */ kcg_bool _115_br_1_guard_OpPhases_NormalPhase;
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
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_sel;
  /* OperationalScenario::OpPhases */ kcg_bool OpPhases_reset_prv;
  
  if (outC->init2) {
    outC->OpPhases_state_sel = SSM_st_Ground_OpPhases;
  }
  else {
    outC->OpPhases_state_sel = outC->OpPhases_state_nxt;
  }
  outC->_L7 = inC->PassarFaseBtn;
  outC->ApertarBotao = outC->_L7;
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      br_1_guard_OpPhases_Ground = outC->ApertarBotao;
      if (br_1_guard_OpPhases_Ground) {
        _109_OpPhases_state_act = SSM_st_Launch_OpPhases;
      }
      else {
        _109_OpPhases_state_act = SSM_st_Ground_OpPhases;
      }
      outC->OpPhases_state_act = _109_OpPhases_state_act;
      break;
    case SSM_st_Launch_OpPhases :
      br_1_guard_OpPhases_Launch = outC->ApertarBotao;
      if (br_1_guard_OpPhases_Launch) {
        _106_OpPhases_state_act = SSM_st_AttitudeAcquisition_OpPhases;
      }
      else {
        _106_OpPhases_state_act = SSM_st_Launch_OpPhases;
      }
      outC->OpPhases_state_act = _106_OpPhases_state_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _118_br_1_guard_OpPhases_AttitudeAcquisition = outC->ApertarBotao;
      if (_118_br_1_guard_OpPhases_AttitudeAcquisition) {
        _103_OpPhases_state_act = SSM_st_NormalPhase_OpPhases;
      }
      else {
        _103_OpPhases_state_act = SSM_st_AttitudeAcquisition_OpPhases;
      }
      outC->OpPhases_state_act = _103_OpPhases_state_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      _115_br_1_guard_OpPhases_NormalPhase = outC->ApertarBotao;
      if (_115_br_1_guard_OpPhases_NormalPhase) {
        OpPhases_state_act = SSM_st_Ground_OpPhases;
      }
      else {
        OpPhases_state_act = SSM_st_NormalPhase_OpPhases;
      }
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
    case SSM_st_Ground_OpPhases :
      _110_OpPhases_reset_act = br_1_guard_OpPhases_Ground;
      outC->OpPhases_reset_act = _110_OpPhases_reset_act;
      break;
    case SSM_st_Launch_OpPhases :
      _107_OpPhases_reset_act = br_1_guard_OpPhases_Launch;
      outC->OpPhases_reset_act = _107_OpPhases_reset_act;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _104_OpPhases_reset_act = _118_br_1_guard_OpPhases_AttitudeAcquisition;
      outC->OpPhases_reset_act = _104_OpPhases_reset_act;
      break;
    case SSM_st_NormalPhase_OpPhases :
      OpPhases_reset_act = _115_br_1_guard_OpPhases_NormalPhase;
      outC->OpPhases_reset_act = OpPhases_reset_act;
      break;
    
  }
  switch (outC->OpPhases_state_act) {
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
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L16_OpPhases_Ground = kcg_false;
      _48_NormalPhaseVisibleLocal = outC->_L16_OpPhases_Ground;
      outC->NormalPhaseVisibleLocal = _48_NormalPhaseVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L13_OpPhases_Launch = kcg_false;
      _31_NormalPhaseVisibleLocal = outC->_L13_OpPhases_Launch;
      outC->NormalPhaseVisibleLocal = _31_NormalPhaseVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L16_OpPhases_AttitudeAcquisition = kcg_false;
      _14_NormalPhaseVisibleLocal = outC->_L16_OpPhases_AttitudeAcquisition;
      outC->NormalPhaseVisibleLocal = _14_NormalPhaseVisibleLocal;
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
      _47_AttitudeVisibleLocal = outC->_L15_OpPhases_Ground;
      outC->AttitudeVisibleLocal = _47_AttitudeVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L12_OpPhases_Launch = kcg_false;
      _30_AttitudeVisibleLocal = outC->_L12_OpPhases_Launch;
      outC->AttitudeVisibleLocal = _30_AttitudeVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L19_OpPhases_AttitudeAcquisition = kcg_true;
      _13_AttitudeVisibleLocal = outC->_L19_OpPhases_AttitudeAcquisition;
      outC->AttitudeVisibleLocal = _13_AttitudeVisibleLocal;
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
      outC->_L14_OpPhases_Ground = kcg_false;
      _46_LaunchVisibleLocal = outC->_L14_OpPhases_Ground;
      outC->LaunchVisibleLocal = _46_LaunchVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L11_OpPhases_Launch = kcg_true;
      _29_LaunchVisibleLocal = outC->_L11_OpPhases_Launch;
      outC->LaunchVisibleLocal = _29_LaunchVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L18_OpPhases_AttitudeAcquisition = kcg_false;
      _12_LaunchVisibleLocal = outC->_L18_OpPhases_AttitudeAcquisition;
      outC->LaunchVisibleLocal = _12_LaunchVisibleLocal;
      break;
    case SSM_st_NormalPhase_OpPhases :
      outC->_L9_OpPhases_NormalPhase = kcg_false;
      LaunchVisibleLocal = outC->_L9_OpPhases_NormalPhase;
      outC->LaunchVisibleLocal = LaunchVisibleLocal;
      break;
    
  }
  outC->_L18 = outC->LaunchVisibleLocal;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L13_OpPhases_Ground = kcg_true;
      _45_GroundVisibleLocal = outC->_L13_OpPhases_Ground;
      outC->GroundVisibleLocal = _45_GroundVisibleLocal;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L14_OpPhases_Launch = kcg_false;
      _28_GroundVisibleLocal = outC->_L14_OpPhases_Launch;
      outC->GroundVisibleLocal = _28_GroundVisibleLocal;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L17_OpPhases_AttitudeAcquisition = kcg_false;
      _11_GroundVisibleLocal = outC->_L17_OpPhases_AttitudeAcquisition;
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
  outC->LaunchVisible = outC->_L18;
  outC->GroundVisible = outC->_L16;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->_L8_OpPhases_Ground = 21;
      _44_color4 = outC->_L8_OpPhases_Ground;
      outC->color4 = _44_color4;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L10_OpPhases_Launch = 21;
      _27_color4 = outC->_L10_OpPhases_Launch;
      outC->color4 = _27_color4;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L12_OpPhases_AttitudeAcquisition = 21;
      _10_color4 = outC->_L12_OpPhases_AttitudeAcquisition;
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
      _43_color3 = outC->_L7_OpPhases_Ground;
      outC->color3 = _43_color3;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L7_OpPhases_Launch = 21;
      _26_color3 = outC->_L7_OpPhases_Launch;
      outC->color3 = _26_color3;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L13_OpPhases_AttitudeAcquisition = 55;
      _9_color3 = outC->_L13_OpPhases_AttitudeAcquisition;
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
      _42_color_2 = outC->_L4_OpPhases_Ground;
      outC->color_2 = _42_color_2;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L6_OpPhases_Launch = 21;
      _25_color_2 = outC->_L6_OpPhases_Launch;
      outC->color_2 = _25_color_2;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L14_OpPhases_AttitudeAcquisition = 21;
      _8_color_2 = outC->_L14_OpPhases_AttitudeAcquisition;
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
      color41 = outC->_L2_OpPhases_Ground;
      outC->color = color41;
      break;
    case SSM_st_Launch_OpPhases :
      outC->_L5_OpPhases_Launch = 55;
      color24 = outC->_L5_OpPhases_Launch;
      outC->color = color24;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->_L15_OpPhases_AttitudeAcquisition = 21;
      color7 = outC->_L15_OpPhases_AttitudeAcquisition;
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
  outC->_L3 = last_StartLaunchPhase;
  outC->LaunchPhase = outC->_L3;
  outC->_L1 = outC->LaunchPhase;
  outC->StartLaunchPhase = outC->_L1;
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_true;
  outC->Layer1Visible = outC->_L9;
  outC->Layer1Active = outC->_L8;
  outC->_L6 = last_NormalPhase;
  outC->NPhase = outC->_L6;
  outC->_L4 = last_StartAtAcquisition;
  outC->AtAcquisition = outC->_L4;
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _40_picture = last_picture;
      _39_payMode = last_payMode;
      _38_NormalPhase = last_NormalPhase;
      _37_RefAttitude = last_RefAttitude;
      _36_safeMode = last_safeMode;
      _35_StartAtAcquisition = last_StartAtAcquisition;
      break;
    
  }
  switch (outC->OpPhases_state_sel) {
    case SSM_st_Ground_OpPhases :
      if (br_1_guard_OpPhases_Ground) {
        _111_OpPhases_fired_strong = SSM_TR_Ground_1_OpPhases;
      }
      else {
        _111_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      outC->OpPhases_fired_strong = _111_OpPhases_fired_strong;
      break;
    case SSM_st_Launch_OpPhases :
      if (br_1_guard_OpPhases_Launch) {
        _108_OpPhases_fired_strong = SSM_TR_Launch_1_OpPhases;
      }
      else {
        _108_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      outC->OpPhases_fired_strong = _108_OpPhases_fired_strong;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      if (_118_br_1_guard_OpPhases_AttitudeAcquisition) {
        _105_OpPhases_fired_strong = SSM_TR_AttitudeAcquisition_1_OpPhases;
      }
      else {
        _105_OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      outC->OpPhases_fired_strong = _105_OpPhases_fired_strong;
      break;
    case SSM_st_NormalPhase_OpPhases :
      if (_115_br_1_guard_OpPhases_NormalPhase) {
        OpPhases_fired_strong = SSM_TR_NormalPhase_1_OpPhases;
      }
      else {
        OpPhases_fired_strong = SSM_TR_no_trans_OpPhases;
      }
      outC->OpPhases_fired_strong = OpPhases_fired_strong;
      break;
    
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      _51_OpPhases_fired = outC->OpPhases_fired_strong;
      _50_OpPhases_reset_nxt = kcg_false;
      _49_OpPhases_state_nxt = SSM_st_Ground_OpPhases;
      outC->_L1_OpPhases_Ground = inC->Power;
      outC->OpPhases_fired = _51_OpPhases_fired;
      break;
    case SSM_st_Launch_OpPhases :
      _23_picture = last_picture;
      _22_payMode = last_payMode;
      _21_NormalPhase = last_NormalPhase;
      _20_RefAttitude = last_RefAttitude;
      _19_safeMode = last_safeMode;
      _34_OpPhases_fired = outC->OpPhases_fired_strong;
      _33_OpPhases_reset_nxt = kcg_false;
      _32_OpPhases_state_nxt = SSM_st_Launch_OpPhases;
      outC->_L2_OpPhases_Launch = kcg_false;
      _18_StartAtAcquisition = outC->_L2_OpPhases_Launch;
      outC->_L1_3 = kcg_false;
      outC->SensorsActive_3 = outC->_L1_3;
      outC->_L3_OpPhases_Launch = outC->SensorsActive_3;
      outC->_L1_OpPhases_Launch = inC->Telemetry;
      outC->OpPhases_fired = _34_OpPhases_fired;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      _6_picture = last_picture;
      _5_payMode = last_payMode;
      _1_StartAtAcquisition = last_StartAtAcquisition;
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
      _17_OpPhases_fired = outC->OpPhases_fired_strong;
      _16_OpPhases_reset_nxt = kcg_false;
      _15_OpPhases_state_nxt = SSM_st_AttitudeAcquisition_OpPhases;
      outC->_L528_OpPhases_AttitudeAcquisition = kcg_false;
      outC->NPhase_OpPhases_AttitudeAcquisition =
        outC->_L528_OpPhases_AttitudeAcquisition;
      outC->_L329_OpPhases_AttitudeAcquisition = last_RefAttitude;
      outC->RefAtt_OpPhases_AttitudeAcquisition =
        outC->_L329_OpPhases_AttitudeAcquisition;
      outC->_L230_OpPhases_AttitudeAcquisition = last_safeMode;
      outC->sMode_OpPhases_AttitudeAcquisition =
        outC->_L230_OpPhases_AttitudeAcquisition;
      if (outC->init) {
        outC->atacquisition_state_sel_OpPhases_AttitudeAcquisition =
          SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
      }
      else {
        outC->atacquisition_state_sel_OpPhases_AttitudeAcquisition =
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
      }
      outC->_6_atacquisition_clock_OpPhases_AttitudeAcquisition =
        outC->atacquisition_state_sel_OpPhases_AttitudeAcquisition;
      switch (outC->_6_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          _117_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            !outC->sMode_OpPhases_AttitudeAcquisition;
          br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            outC->sMode_OpPhases_AttitudeAcquisition;
          if (_117_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _100_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else if (br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _100_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else {
            _100_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
          }
          outC->atacquisition_state_act_OpPhases_AttitudeAcquisition =
            _100_atacquisition_state_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          _116_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            outC->sMode_OpPhases_AttitudeAcquisition;
          if (_116_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _97_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          }
          else {
            _97_atacquisition_state_act_OpPhases_AttitudeAcquisition =
              SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition;
          }
          outC->atacquisition_state_act_OpPhases_AttitudeAcquisition =
            _97_atacquisition_state_act_OpPhases_AttitudeAcquisition;
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
          outC->atacquisition_state_act_OpPhases_AttitudeAcquisition =
            atacquisition_state_act_OpPhases_AttitudeAcquisition;
          break;
        
      }
      outC->atacquisition_clock_OpPhases_AttitudeAcquisition =
        outC->atacquisition_state_act_OpPhases_AttitudeAcquisition;
      switch (outC->atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          _93_NormalPhase = last_NormalPhase;
          _92_RefAttitude = last_RefAttitude;
          break;
        
      }
      switch (outC->_6_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          if (_117_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _102_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_readsensors_1_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else if (br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _102_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_readsensors_2_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else {
            _102_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_no_trans_atacquisition_OpPhases_AttitudeAcquisition;
          }
          outC->atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
            _102_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          if (_116_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            _99_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_refAttitude_1_atacquisition_OpPhases_AttitudeAcquisition;
          }
          else {
            _99_atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
              SSM_TR_no_trans_atacquisition_OpPhases_AttitudeAcquisition;
          }
          outC->atacquisition_fired_strong_OpPhases_AttitudeAcquisition =
            _99_atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
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
          _96_atacquisition_fired_OpPhases_AttitudeAcquisition =
            outC->atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          _95_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition = kcg_false;
          _94_atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition;
          outC->_L127_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            kcg_false;
          _91_safeMode =
            outC->_L127_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
          outC->_L1_5 = kcg_false;
          outC->SensorsActive_5 = outC->_L1_5;
          outC->_L226_OpPhases_AttitudeAcquisition_atacquisition_readsensors =
            outC->SensorsActive_5;
          outC->atacquisition_fired_OpPhases_AttitudeAcquisition =
            _96_atacquisition_fired_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          _90_atacquisition_fired_OpPhases_AttitudeAcquisition =
            outC->atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          _89_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition = kcg_false;
          _88_atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition;
          outC->_L9_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          outC->_L8_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          outC->_L7_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          outC->_L6_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_true;
          outC->_L521_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_true;
          outC->_L422_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          outC->_L323_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            kcg_false;
          if (outC->_L9_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            outC->_L224_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
              outC->_L6_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          else {
            outC->_L224_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
              outC->_L422_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          _87_NormalPhase =
            outC->_L224_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          if (outC->_L7_OpPhases_AttitudeAcquisition_atacquisition_refAttitude) {
            outC->_L125_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
              outC->_L521_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          else {
            outC->_L125_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
              outC->_L323_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          }
          _85_safeMode =
            outC->_L125_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          _86_RefAttitude =
            outC->_L8_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
          outC->_L1_14 = kcg_false;
          outC->ControlAlgorithmActive_1 = outC->_L1_14;
          outC->_L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude =
            outC->ControlAlgorithmActive_1;
          outC->atacquisition_fired_OpPhases_AttitudeAcquisition =
            _90_atacquisition_fired_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          _84_NormalPhase = last_NormalPhase;
          _83_RefAttitude = last_RefAttitude;
          atacquisition_fired_OpPhases_AttitudeAcquisition =
            outC->atacquisition_fired_strong_OpPhases_AttitudeAcquisition;
          atacquisition_reset_nxt_OpPhases_AttitudeAcquisition = kcg_false;
          atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition;
          outC->_L4_OpPhases_AttitudeAcquisition_atacquisition_SafeMode =
            kcg_false;
          outC->_L3_OpPhases_AttitudeAcquisition_atacquisition_SafeMode =
            kcg_true;
          outC->_L2_OpPhases_AttitudeAcquisition_atacquisition_SafeMode =
            kcg_false;
          if (outC->_L4_OpPhases_AttitudeAcquisition_atacquisition_SafeMode) {
            outC->_L1_OpPhases_AttitudeAcquisition_atacquisition_SafeMode =
              outC->_L3_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
          }
          else {
            outC->_L1_OpPhases_AttitudeAcquisition_atacquisition_SafeMode =
              outC->_L2_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
          }
          _82_safeMode =
            outC->_L1_OpPhases_AttitudeAcquisition_atacquisition_SafeMode;
          outC->_L1_1 = kcg_false;
          outC->Updating_1 = outC->_L1_1;
          outC->_L5_OpPhases_AttitudeAcquisition_atacquisition_SafeMode =
            outC->Updating_1;
          outC->atacquisition_fired_OpPhases_AttitudeAcquisition =
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
      switch (outC->atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition =
            _95_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            _94_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
          _4_NormalPhase = _93_NormalPhase;
          _3_RefAttitude = _92_RefAttitude;
          _2_safeMode = _91_safeMode;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition =
            _89_atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            _88_atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
          _4_NormalPhase = _87_NormalPhase;
          _3_RefAttitude = _86_RefAttitude;
          _2_safeMode = _85_safeMode;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_nxt_OpPhases_AttitudeAcquisition =
            atacquisition_reset_nxt_OpPhases_AttitudeAcquisition;
          outC->atacquisition_state_nxt_OpPhases_AttitudeAcquisition =
            atacquisition_state_nxt_OpPhases_AttitudeAcquisition;
          _4_NormalPhase = _84_NormalPhase;
          _3_RefAttitude = _83_RefAttitude;
          _2_safeMode = _82_safeMode;
          break;
        
      }
      switch (outC->_6_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          if (_117_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors) {
            _101_atacquisition_reset_act_OpPhases_AttitudeAcquisition =
              kcg_true;
          }
          else {
            _101_atacquisition_reset_act_OpPhases_AttitudeAcquisition =
              br_2_guard_OpPhases_AttitudeAcquisition_atacquisition_readsensors;
          }
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          _98_atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            _116_br_1_guard_OpPhases_AttitudeAcquisition_atacquisition_refAttitude;
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
      switch (outC->_6_atacquisition_clock_OpPhases_AttitudeAcquisition) {
        case SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            _101_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            _98_atacquisition_reset_act_OpPhases_AttitudeAcquisition;
          break;
        case SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition :
          outC->atacquisition_reset_act_OpPhases_AttitudeAcquisition =
            atacquisition_reset_act_OpPhases_AttitudeAcquisition;
          break;
        
      }
      outC->_L131_OpPhases_AttitudeAcquisition = inC->AttitudeReference;
      outC->OpPhases_fired = _17_OpPhases_fired;
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
      OpPhases_fired = outC->OpPhases_fired_strong;
      OpPhases_reset_nxt = kcg_false;
      OpPhases_state_nxt = SSM_st_NormalPhase_OpPhases;
      outC->_L2_OpPhases_NormalPhase = last_safeMode;
      outC->sMode_OpPhases_NormalPhase = outC->_L2_OpPhases_NormalPhase;
      outC->_L1_OpPhases_NormalPhase = last_payMode;
      outC->pMode_OpPhases_NormalPhase = outC->_L1_OpPhases_NormalPhase;
      if (outC->init1) {
        outC->NPhase_state_sel_OpPhases_NormalPhase =
          SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
      }
      else {
        outC->NPhase_state_sel_OpPhases_NormalPhase =
          outC->NPhase_state_nxt_OpPhases_NormalPhase;
      }
      outC->_5_NPhase_clock_OpPhases_NormalPhase =
        outC->NPhase_state_sel_OpPhases_NormalPhase;
      switch (outC->_5_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          _113_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl =
            outC->pMode_OpPhases_NormalPhase;
          _114_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl =
            outC->sMode_OpPhases_NormalPhase;
          if (_113_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _79_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_Payload_OpPhases_NormalPhase_NPhase;
          }
          else if (_114_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _79_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_SafeMode_OpPhases_NormalPhase_NPhase;
          }
          else {
            _79_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          }
          outC->NPhase_state_act_OpPhases_NormalPhase =
            _79_NPhase_state_act_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          _112_br_1_guard_OpPhases_NormalPhase_NPhase_Payload =
            !outC->pMode_OpPhases_NormalPhase;
          if (_112_br_1_guard_OpPhases_NormalPhase_NPhase_Payload) {
            _76_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          }
          else {
            _76_NPhase_state_act_OpPhases_NormalPhase =
              SSM_st_Payload_OpPhases_NormalPhase_NPhase;
          }
          outC->NPhase_state_act_OpPhases_NormalPhase =
            _76_NPhase_state_act_OpPhases_NormalPhase;
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
          _66_picture = last_picture;
          break;
        
      }
      switch (outC->_5_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          if (_113_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _81_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_AttControl_1_NPhase_OpPhases_NormalPhase;
          }
          else if (_114_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _81_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_AttControl_2_NPhase_OpPhases_NormalPhase;
          }
          else {
            _81_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          }
          outC->NPhase_fired_strong_OpPhases_NormalPhase =
            _81_NPhase_fired_strong_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          if (_112_br_1_guard_OpPhases_NormalPhase_NPhase_Payload) {
            _78_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_Payload_1_NPhase_OpPhases_NormalPhase;
          }
          else {
            _78_NPhase_fired_strong_OpPhases_NormalPhase =
              SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          }
          outC->NPhase_fired_strong_OpPhases_NormalPhase =
            _78_NPhase_fired_strong_OpPhases_NormalPhase;
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
          _69_NPhase_fired_OpPhases_NormalPhase =
            outC->NPhase_fired_strong_OpPhases_NormalPhase;
          _68_NPhase_reset_nxt_OpPhases_NormalPhase = kcg_false;
          _67_NPhase_state_nxt_OpPhases_NormalPhase =
            SSM_st_AttControl_OpPhases_NormalPhase_NPhase;
          outC->_L813_OpPhases_NormalPhase_NPhase_AttControl = kcg_false;
          outC->_L714_OpPhases_NormalPhase_NPhase_AttControl = kcg_false;
          outC->_L615_OpPhases_NormalPhase_NPhase_AttControl = kcg_true;
          outC->_L516_OpPhases_NormalPhase_NPhase_AttControl = kcg_false;
          if (outC->_L714_OpPhases_NormalPhase_NPhase_AttControl) {
            outC->_L417_OpPhases_NormalPhase_NPhase_AttControl =
              outC->_L615_OpPhases_NormalPhase_NPhase_AttControl;
          }
          else {
            outC->_L417_OpPhases_NormalPhase_NPhase_AttControl =
              outC->_L516_OpPhases_NormalPhase_NPhase_AttControl;
          }
          _63_safeMode = outC->_L417_OpPhases_NormalPhase_NPhase_AttControl;
          outC->_L318_OpPhases_NormalPhase_NPhase_AttControl = inC->picLocation;
          outC->_L219_OpPhases_NormalPhase_NPhase_AttControl = inC->takePict;
          _65_payMode = outC->_L219_OpPhases_NormalPhase_NPhase_AttControl;
          _64_RefAttitude = outC->_L813_OpPhases_NormalPhase_NPhase_AttControl;
          outC->_L1_23 = kcg_false;
          outC->ControlAlgorithmActive_2 = outC->_L1_23;
          outC->_L912_OpPhases_NormalPhase_NPhase_AttControl =
            outC->ControlAlgorithmActive_2;
          outC->_L120_OpPhases_NormalPhase_NPhase_AttControl = inC->Telemetry;
          outC->NPhase_fired_OpPhases_NormalPhase =
            _69_NPhase_fired_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          _57_RefAttitude = last_RefAttitude;
          outC->Payload_weakb_clock_OpPhases_NormalPhase_NPhase =
            outC->NPhase_fired_strong_OpPhases_NormalPhase !=
            SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
          if (outC->Payload_weakb_clock_OpPhases_NormalPhase_NPhase) {
            _75_NPhase_fired_OpPhases_NormalPhase =
              outC->NPhase_fired_strong_OpPhases_NormalPhase;
            _74_NPhase_reset_nxt_OpPhases_NormalPhase = kcg_false;
            _73_NPhase_state_nxt_OpPhases_NormalPhase =
              SSM_st_Payload_OpPhases_NormalPhase_NPhase;
            _62_NPhase_fired_OpPhases_NormalPhase =
              _75_NPhase_fired_OpPhases_NormalPhase;
            _61_NPhase_reset_nxt_OpPhases_NormalPhase =
              _74_NPhase_reset_nxt_OpPhases_NormalPhase;
            _60_NPhase_state_nxt_OpPhases_NormalPhase =
              _73_NPhase_state_nxt_OpPhases_NormalPhase;
          }
          else {
            br_2_guard_OpPhases_NormalPhase_NPhase_Payload =
              outC->sMode_OpPhases_NormalPhase;
            if (br_2_guard_OpPhases_NormalPhase_NPhase_Payload) {
              _72_NPhase_fired_OpPhases_NormalPhase =
                SSM_TR_Payload_2_NPhase_OpPhases_NormalPhase;
            }
            else {
              _72_NPhase_fired_OpPhases_NormalPhase =
                SSM_TR_no_trans_NPhase_OpPhases_NormalPhase;
            }
            _71_NPhase_reset_nxt_OpPhases_NormalPhase =
              br_2_guard_OpPhases_NormalPhase_NPhase_Payload;
            if (br_2_guard_OpPhases_NormalPhase_NPhase_Payload) {
              _70_NPhase_state_nxt_OpPhases_NormalPhase =
                SSM_st_SafeMode_OpPhases_NormalPhase_NPhase;
            }
            else {
              _70_NPhase_state_nxt_OpPhases_NormalPhase =
                SSM_st_Payload_OpPhases_NormalPhase_NPhase;
            }
            _62_NPhase_fired_OpPhases_NormalPhase =
              _72_NPhase_fired_OpPhases_NormalPhase;
            _61_NPhase_reset_nxt_OpPhases_NormalPhase =
              _71_NPhase_reset_nxt_OpPhases_NormalPhase;
            _60_NPhase_state_nxt_OpPhases_NormalPhase =
              _70_NPhase_state_nxt_OpPhases_NormalPhase;
          }
          outC->_L10_OpPhases_NormalPhase_NPhase_Payload = 0.0;
          outC->_L9_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          outC->_L8_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          outC->_L7_OpPhases_NormalPhase_NPhase_Payload = kcg_true;
          outC->_L6_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          outC->_L57_OpPhases_NormalPhase_NPhase_Payload = kcg_false;
          outC->_L48_OpPhases_NormalPhase_NPhase_Payload = kcg_true;
          outC->_L39_OpPhases_NormalPhase_NPhase_Payload = inC->picLocation;
          _59_picture = outC->_L10_OpPhases_NormalPhase_NPhase_Payload;
          if (outC->_L6_OpPhases_NormalPhase_NPhase_Payload) {
            outC->_L210_OpPhases_NormalPhase_NPhase_Payload =
              outC->_L48_OpPhases_NormalPhase_NPhase_Payload;
          }
          else {
            outC->_L210_OpPhases_NormalPhase_NPhase_Payload =
              outC->_L57_OpPhases_NormalPhase_NPhase_Payload;
          }
          _56_safeMode = outC->_L210_OpPhases_NormalPhase_NPhase_Payload;
          if (outC->_L9_OpPhases_NormalPhase_NPhase_Payload) {
            outC->_L111_OpPhases_NormalPhase_NPhase_Payload =
              outC->_L7_OpPhases_NormalPhase_NPhase_Payload;
          }
          else {
            outC->_L111_OpPhases_NormalPhase_NPhase_Payload =
              outC->_L8_OpPhases_NormalPhase_NPhase_Payload;
          }
          _58_payMode = outC->_L111_OpPhases_NormalPhase_NPhase_Payload;
          outC->NPhase_fired_OpPhases_NormalPhase =
            _62_NPhase_fired_OpPhases_NormalPhase;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          _55_picture = last_picture;
          _54_payMode = last_payMode;
          _53_RefAttitude = last_RefAttitude;
          NPhase_fired_OpPhases_NormalPhase =
            outC->NPhase_fired_strong_OpPhases_NormalPhase;
          NPhase_reset_nxt_OpPhases_NormalPhase = kcg_false;
          NPhase_state_nxt_OpPhases_NormalPhase =
            SSM_st_SafeMode_OpPhases_NormalPhase_NPhase;
          outC->_L4_OpPhases_NormalPhase_NPhase_SafeMode = kcg_false;
          outC->_L3_OpPhases_NormalPhase_NPhase_SafeMode = kcg_false;
          outC->_L2_OpPhases_NormalPhase_NPhase_SafeMode = kcg_true;
          if (outC->_L3_OpPhases_NormalPhase_NPhase_SafeMode) {
            outC->_L1_OpPhases_NormalPhase_NPhase_SafeMode =
              outC->_L2_OpPhases_NormalPhase_NPhase_SafeMode;
          }
          else {
            outC->_L1_OpPhases_NormalPhase_NPhase_SafeMode =
              outC->_L4_OpPhases_NormalPhase_NPhase_SafeMode;
          }
          _52_safeMode = outC->_L1_OpPhases_NormalPhase_NPhase_SafeMode;
          outC->_L1_2 = kcg_false;
          outC->Updating_2 = outC->_L1_2;
          outC->_L5_OpPhases_NormalPhase_NPhase_SafeMode = outC->Updating_2;
          outC->NPhase_fired_OpPhases_NormalPhase =
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
      switch (outC->NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_nxt_OpPhases_NormalPhase =
            _68_NPhase_reset_nxt_OpPhases_NormalPhase;
          outC->NPhase_state_nxt_OpPhases_NormalPhase =
            _67_NPhase_state_nxt_OpPhases_NormalPhase;
          picture = _66_picture;
          payMode = _65_payMode;
          RefAttitude = _64_RefAttitude;
          safeMode = _63_safeMode;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_nxt_OpPhases_NormalPhase =
            _61_NPhase_reset_nxt_OpPhases_NormalPhase;
          outC->NPhase_state_nxt_OpPhases_NormalPhase =
            _60_NPhase_state_nxt_OpPhases_NormalPhase;
          picture = _59_picture;
          payMode = _58_payMode;
          RefAttitude = _57_RefAttitude;
          safeMode = _56_safeMode;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_nxt_OpPhases_NormalPhase =
            NPhase_reset_nxt_OpPhases_NormalPhase;
          outC->NPhase_state_nxt_OpPhases_NormalPhase =
            NPhase_state_nxt_OpPhases_NormalPhase;
          picture = _55_picture;
          payMode = _54_payMode;
          RefAttitude = _53_RefAttitude;
          safeMode = _52_safeMode;
          break;
        
      }
      switch (outC->_5_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          if (_113_br_1_guard_OpPhases_NormalPhase_NPhase_AttControl) {
            _80_NPhase_reset_act_OpPhases_NormalPhase = kcg_true;
          }
          else {
            _80_NPhase_reset_act_OpPhases_NormalPhase =
              _114_br_2_guard_OpPhases_NormalPhase_NPhase_AttControl;
          }
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          _77_NPhase_reset_act_OpPhases_NormalPhase =
            _112_br_1_guard_OpPhases_NormalPhase_NPhase_Payload;
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
      switch (outC->_5_NPhase_clock_OpPhases_NormalPhase) {
        case SSM_st_AttControl_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_act_OpPhases_NormalPhase =
            _80_NPhase_reset_act_OpPhases_NormalPhase;
          break;
        case SSM_st_Payload_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_act_OpPhases_NormalPhase =
            _77_NPhase_reset_act_OpPhases_NormalPhase;
          break;
        case SSM_st_SafeMode_OpPhases_NormalPhase_NPhase :
          outC->NPhase_reset_act_OpPhases_NormalPhase =
            NPhase_reset_act_OpPhases_NormalPhase;
          break;
        
      }
      outC->OpPhases_fired = OpPhases_fired;
      break;
    
  }
  if (outC->init2) {
    OpPhases_reset_sel = kcg_false;
  }
  else {
    OpPhases_reset_sel = outC->OpPhases_reset_nxt;
  }
  switch (outC->OpPhases_state_act) {
    case SSM_st_Ground_OpPhases :
      outC->OpPhases_reset_nxt = _50_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _49_OpPhases_state_nxt;
      outC->picture = _40_picture;
      outC->payMode = _39_payMode;
      outC->NormalPhase = _38_NormalPhase;
      outC->RefAttitude = _37_RefAttitude;
      outC->safeMode = _36_safeMode;
      outC->StartAtAcquisition = _35_StartAtAcquisition;
      break;
    case SSM_st_Launch_OpPhases :
      outC->OpPhases_reset_nxt = _33_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _32_OpPhases_state_nxt;
      outC->picture = _23_picture;
      outC->payMode = _22_payMode;
      outC->NormalPhase = _21_NormalPhase;
      outC->RefAttitude = _20_RefAttitude;
      outC->safeMode = _19_safeMode;
      outC->StartAtAcquisition = _18_StartAtAcquisition;
      break;
    case SSM_st_AttitudeAcquisition_OpPhases :
      outC->OpPhases_reset_nxt = _16_OpPhases_reset_nxt;
      outC->OpPhases_state_nxt = _15_OpPhases_state_nxt;
      outC->picture = _6_picture;
      outC->payMode = _5_payMode;
      outC->NormalPhase = _4_NormalPhase;
      outC->RefAttitude = _3_RefAttitude;
      outC->safeMode = _2_safeMode;
      outC->StartAtAcquisition = _1_StartAtAcquisition;
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
  switch (outC->OpPhases_state_act) {
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
** Generation date: 2014-09-19T10:39:11
*************************************************************$ */

