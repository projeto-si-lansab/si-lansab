/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GitHub/si-lansab/Satellite/TS03/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-18T21:20:02
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TS03.h"

void TS03_reset(outC_TS03 *outC)
{
  outC->init = kcg_true;
}

/* TS03 */
void TS03(inC_TS03 *inC, outC_TS03 *outC)
{
  /* Switch::_L1 */ kcg_bool _L1_2_1;
  /* Switch::_L2 */ kcg_bool _L2_2_1;
  /* Switch::_L4 */ kcg_bool _L4_2_1;
  /* Switch::Output1 */ kcg_bool Output1_2_1;
  /* Switch::Input1 */ kcg_bool Input1_2_1;
  /* TS03Memory::MemoryGaugeOut */ kcg_int _86_MemoryGaugeOut_1;
  /* TS03Memory::IfBlock1::then::_L6 */ kcg_int _L6_1_IfBlock1;
  /* TS03Memory::IfBlock1::then::_L5 */ kcg_int _L5_185_IfBlock1;
  /* TS03Memory::IfBlock1::then::_L3 */ kcg_int _L3_184_IfBlock1;
  /* TS03Memory::MemoryGaugeOut */ kcg_int _83_MemoryGaugeOut_1;
  /* TS03Memory::IfBlock1::else */ kcg_bool _82_else_clock_1_IfBlock1;
  /* TS03Memory::IfBlock1::else::else::_L3 */ kcg_int _L3_181_IfBlock1;
  /* TS03Memory::MemoryGaugeOut */ kcg_int _80_MemoryGaugeOut_1;
  /* TS03Memory::IfBlock1::else::then::_L8 */ kcg_int _L8_1_IfBlock1;
  /* TS03Memory::IfBlock1::else::then::_L9 */ kcg_int _L9_1_IfBlock1;
  /* TS03Memory::IfBlock1::else::then::_L10 */ kcg_int _L10_1_IfBlock1;
  /* TS03Memory::MemoryGaugeOut */ kcg_int MemoryGaugeOut_1;
  /* TS03Memory::SM1 */ SSM_TR_SM1 _79_SM1_fired_1;
  /* TS03Memory::SM1 */ kcg_bool _78_SM1_reset_nxt_1;
  /* TS03Memory::SM1 */ SSM_ST_SM1 _77_SM1_state_nxt_1;
  /* TS03Memory::MemoryLowLevelWarn */ kcg_int _76_MemoryLowLevelWarn_1;
  /* TS03Memory::SM1::Empty::_L1 */ kcg_int _L1_1_SM1_Empty;
  /* TS03Memory::SM1 */ SSM_TR_SM1 _75_SM1_fired_1;
  /* TS03Memory::SM1 */ kcg_bool _74_SM1_reset_nxt_1;
  /* TS03Memory::SM1 */ SSM_ST_SM1 _73_SM1_state_nxt_1;
  /* TS03Memory::MemoryLowLevelWarn */ kcg_int _72_MemoryLowLevelWarn_1;
  /* TS03Memory::SM1::Full::_L1 */ kcg_int _L1_1_SM1_Full;
  /* TS03Memory::SM1 */ SSM_TR_SM1 _71_SM1_fired_1;
  /* TS03Memory::SM1 */ kcg_bool _70_SM1_reset_nxt_1;
  /* TS03Memory::SM1 */ SSM_ST_SM1 _69_SM1_state_nxt_1;
  /* TS03Memory::MemoryLowLevelWarn */ kcg_int _68_MemoryLowLevelWarn_1;
  /* TS03Memory::SM1::LowLevel::_L1 */ kcg_int _L1_1_SM1_LowLevel;
  /* TS03Memory::SM1 */ SSM_TR_SM1 _67_SM1_fired_1;
  /* TS03Memory::SM1 */ kcg_bool _66_SM1_reset_nxt_1;
  /* TS03Memory::SM1 */ SSM_ST_SM1 _65_SM1_state_nxt_1;
  /* TS03Memory::MemoryLowLevelWarn */ kcg_int MemoryLowLevelWarn_1;
  /* TS03Memory::SM1::Half::_L1 */ kcg_int _L1_1_SM1_Half;
  /* TS03Memory::SM1 */ SSM_TR_SM1 _64_SM1_fired_strong_1;
  /* TS03Memory::SM1 */ kcg_bool _63_SM1_reset_act_1;
  /* TS03Memory::SM1 */ SSM_ST_SM1 _62_SM1_state_act_1;
  /* TS03Memory::SM1::Empty */ kcg_bool _61_br_1_guard_1_SM1_Empty;
  /* TS03Memory::SM1 */ SSM_TR_SM1 _60_SM1_fired_strong_1;
  /* TS03Memory::SM1 */ kcg_bool _59_SM1_reset_act_1;
  /* TS03Memory::SM1 */ SSM_ST_SM1 _58_SM1_state_act_1;
  /* TS03Memory::SM1::Full */ kcg_bool _57_br_1_guard_1_SM1_Full;
  /* TS03Memory::SM1 */ SSM_TR_SM1 _56_SM1_fired_strong_1;
  /* TS03Memory::SM1 */ kcg_bool _55_SM1_reset_act_1;
  /* TS03Memory::SM1 */ SSM_ST_SM1 _54_SM1_state_act_1;
  /* TS03Memory::SM1::LowLevel */ kcg_bool br_2_guard_1_SM1_LowLevel;
  /* TS03Memory::SM1::LowLevel */ kcg_bool br_1_guard_1_SM1_LowLevel;
  /* TS03Memory::SM1 */ SSM_TR_SM1 _53_SM1_fired_strong_1;
  /* TS03Memory::SM1 */ kcg_bool _52_SM1_reset_act_1;
  /* TS03Memory::SM1 */ SSM_ST_SM1 _51_SM1_state_act_1;
  /* TS03Memory::SM1::Half */ kcg_bool _50_br_2_guard_1_SM1_Half;
  /* TS03Memory::SM1::Half */ kcg_bool _49_br_1_guard_1_SM1_Half;
  /* TS03Memory::IfBlock1 */ kcg_bool _48_IfBlock1_clock_1;
  /* TS03Memory::SM1 */ SSM_ST_SM1 _47_SM1_state_sel_1;
  /* TS03Memory::SM1 */ SSM_ST_SM1 _46_SM1_state_act_1;
  /* TS03Memory::SM1 */ kcg_bool _45_SM1_reset_sel_1;
  /* TS03Memory::SM1 */ kcg_bool _44_SM1_reset_prv_1;
  /* TS03Memory::SM1 */ SSM_TR_SM1 _43_SM1_fired_strong_1;
  /* TS03Memory::SM1 */ SSM_TR_SM1 _42_SM1_fired_1;
  /* TS03Memory::Empty */ kcg_bool Empty_1;
  /* TS03Memory::MaxSizeReached */ kcg_bool _41_MaxSizeReached_1;
  /* TS03Memory::_L3 */ kcg_bool _L3_1;
  /* TS03Memory::_L74 */ kcg_bool _L74_1;
  /* TS03Memory::_L77 */ kcg_int _L77_1;
  /* TS03Memory::_L78 */ kcg_int _L78_1;
  /* TS03Memory::_L79 */ kcg_bool _L79_1;
  /* TS03Memory::_L80 */ kcg_int _L80_1;
  /* TS03Memory::_L81 */ kcg_int _L81_1;
  /* TS03Memory::_L82 */ kcg_int _L82_1;
  /* TS03Memory::MemoryDownloadIndicator */ kcg_int MemoryDownloadIndicator_1;
  /* TS03Memory::MemoryLowLevelWarn */ kcg_int _87_MemoryLowLevelWarn_1;
  /* TS03Memory::MemoryGaugeOut */ kcg_int _88_MemoryGaugeOut_1;
  /* TS03Memory::MemoryGaugeIn */ kcg_int MemoryGaugeIn_1;
  /* TS03Memory::TST_TakePicture */ kcg_bool TST_TakePicture_1;
  /* TS03Memory::DownloadBtn */ kcg_bool DownloadBtn_1;
  /* Switch::_L1 */ kcg_bool _L1_1_1;
  /* Switch::_L2 */ kcg_bool _L2_1_1;
  /* Switch::_L4 */ kcg_bool _L4_1_1;
  /* Switch::Output1 */ kcg_bool Output1_1_1;
  /* Switch::Input1 */ kcg_bool Input1_1_1;
  /* TS03Battery::localLevel */ kcg_real _39_localLevel_1;
  /* TS03Battery::IfBlock1::then::_L4 */ kcg_real _L4_138_IfBlock1;
  /* TS03Battery::IfBlock1::then::_L3 */ kcg_real _L3_1_IfBlock1;
  /* TS03Battery::IfBlock1::then::_L2 */ kcg_real _L2_137_IfBlock1;
  /* TS03Battery::localLevel */ kcg_real _36_localLevel_1;
  /* TS03Battery::IfBlock1::else */ kcg_bool else_clock_1_IfBlock1;
  /* TS03Battery::IfBlock1::else::else::_L2 */ kcg_real _L2_135_IfBlock1;
  /* TS03Battery::localLevel */ kcg_real _34_localLevel_1;
  /* TS03Battery::IfBlock1::else::then::_L2 */ kcg_real _L2_1_IfBlock1;
  /* TS03Battery::IfBlock1::else::then::_L4 */ kcg_real _L4_1_IfBlock1;
  /* TS03Battery::IfBlock1::else::then::_L5 */ kcg_real _L5_1_IfBlock1;
  /* TS03Battery::localLevel */ kcg_real _33_localLevel_1;
  /* TS03Battery::SM1 */ _10_SSM_TR_SM1 _32_SM1_fired_1;
  /* TS03Battery::SM1 */ kcg_bool _31_SM1_reset_nxt_1;
  /* TS03Battery::SM1 */ _4_SSM_ST_SM1 _30_SM1_state_nxt_1;
  /* TS03Battery::LoadBattery */ kcg_bool _29_LoadBattery_1;
  /* TS03Battery::EmptyBattery */ kcg_bool _28_EmptyBattery_1;
  /* TS03Battery::LowLevelIndicatorOut */ kcg_int _27_LowLevelIndicatorOut_1;
  /* TS03Battery::SM1::Empty::_L7 */ kcg_int _L7_1_SM1_Empty;
  /* TS03Battery::SM1::Empty::_L5 */ kcg_bool _L5_1_SM1_Empty;
  /* TS03Battery::SM1::Empty::_L3 */ kcg_bool _L3_1_SM1_Empty;
  /* TS03Battery::SM1 */ _10_SSM_TR_SM1 _26_SM1_fired_1;
  /* TS03Battery::SM1 */ kcg_bool _25_SM1_reset_nxt_1;
  /* TS03Battery::SM1 */ _4_SSM_ST_SM1 _24_SM1_state_nxt_1;
  /* TS03Battery::LoadBattery */ kcg_bool _23_LoadBattery_1;
  /* TS03Battery::EmptyBattery */ kcg_bool _22_EmptyBattery_1;
  /* TS03Battery::LowLevelIndicatorOut */ kcg_int _21_LowLevelIndicatorOut_1;
  /* TS03Battery::SM1::Full::_L14 */ kcg_int _L14_1_SM1_Full;
  /* TS03Battery::SM1::Full::_L12 */ kcg_bool _L12_1_SM1_Full;
  /* TS03Battery::SM1::Full::_L13 */ kcg_bool _L13_1_SM1_Full;
  /* TS03Battery::SM1 */ _10_SSM_TR_SM1 _20_SM1_fired_1;
  /* TS03Battery::SM1 */ kcg_bool _19_SM1_reset_nxt_1;
  /* TS03Battery::SM1 */ _4_SSM_ST_SM1 _18_SM1_state_nxt_1;
  /* TS03Battery::LoadBattery */ kcg_bool _17_LoadBattery_1;
  /* TS03Battery::EmptyBattery */ kcg_bool _16_EmptyBattery_1;
  /* TS03Battery::LowLevelIndicatorOut */ kcg_int _15_LowLevelIndicatorOut_1;
  /* TS03Battery::SM1::Half::_L5 */ kcg_int _L5_1_SM1_Half;
  /* TS03Battery::SM1::Half::_L4 */ kcg_bool _L4_1_SM1_Half;
  /* TS03Battery::SM1::Half::_L3 */ kcg_bool _L3_1_SM1_Half;
  /* TS03Battery::SM1 */ _10_SSM_TR_SM1 _14_SM1_fired_1;
  /* TS03Battery::SM1 */ kcg_bool SM1_reset_nxt_1;
  /* TS03Battery::SM1 */ _4_SSM_ST_SM1 SM1_state_nxt_1;
  /* TS03Battery::LoadBattery */ kcg_bool _13_LoadBattery_1;
  /* TS03Battery::EmptyBattery */ kcg_bool _12_EmptyBattery_1;
  /* TS03Battery::LowLevelIndicatorOut */ kcg_int LowLevelIndicatorOut_1;
  /* TS03Battery::SM1::Low::_L5 */ kcg_int _L5_1_SM1_Low;
  /* TS03Battery::SM1::Low::_L3 */ kcg_bool _L3_1_SM1_Low;
  /* TS03Battery::SM1::Low::_L4 */ kcg_bool _L4_1_SM1_Low;
  /* TS03Battery::SM1 */ _10_SSM_TR_SM1 _11_SM1_fired_strong_1;
  /* TS03Battery::SM1 */ kcg_bool _10_SM1_reset_act_1;
  /* TS03Battery::SM1 */ _4_SSM_ST_SM1 _9_SM1_state_act_1;
  /* TS03Battery::SM1::Empty */ kcg_bool br_1_guard_1_SM1_Empty;
  /* TS03Battery::SM1 */ _10_SSM_TR_SM1 _8_SM1_fired_strong_1;
  /* TS03Battery::SM1 */ kcg_bool _7_SM1_reset_act_1;
  /* TS03Battery::SM1 */ _4_SSM_ST_SM1 _6_SM1_state_act_1;
  /* TS03Battery::SM1::Full */ kcg_bool br_1_guard_1_SM1_Full;
  /* TS03Battery::SM1 */ _10_SSM_TR_SM1 _5_SM1_fired_strong_1;
  /* TS03Battery::SM1 */ kcg_bool _4_SM1_reset_act_1;
  /* TS03Battery::SM1 */ _4_SSM_ST_SM1 _3_SM1_state_act_1;
  /* TS03Battery::SM1::Half */ kcg_bool br_2_guard_1_SM1_Half;
  /* TS03Battery::SM1::Half */ kcg_bool br_1_guard_1_SM1_Half;
  /* TS03Battery::SM1 */ _10_SSM_TR_SM1 _2_SM1_fired_strong_1;
  /* TS03Battery::SM1 */ kcg_bool SM1_reset_act_1;
  /* TS03Battery::SM1 */ _4_SSM_ST_SM1 _1_SM1_state_act_1;
  /* TS03Battery::SM1::Low */ kcg_bool br_2_guard_1_SM1_Low;
  /* TS03Battery::SM1::Low */ kcg_bool br_1_guard_1_SM1_Low;
  /* TS03Battery::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* TS03Battery::SM1 */ _4_SSM_ST_SM1 SM1_state_sel_1;
  /* TS03Battery::SM1 */ _4_SSM_ST_SM1 SM1_state_act_1;
  /* TS03Battery::SM1 */ kcg_bool SM1_reset_sel_1;
  /* TS03Battery::SM1 */ kcg_bool SM1_reset_prv_1;
  /* TS03Battery::SM1 */ _10_SSM_TR_SM1 SM1_fired_strong_1;
  /* TS03Battery::SM1 */ _10_SSM_TR_SM1 SM1_fired_1;
  /* TS03Battery::EmptyBattery */ kcg_bool EmptyBattery_1;
  /* TS03Battery::MaxSizeReached */ kcg_bool MaxSizeReached_1;
  /* TS03Battery::LoadBattery */ kcg_bool LoadBattery_1;
  /* TS03Battery::localLevel */ kcg_real localLevel_1;
  /* TS03Battery::CameraOn */ kcg_bool CameraOn_1;
  /* TS03Battery::_L20 */ kcg_bool _L20_1;
  /* TS03Battery::_L22 */ kcg_bool _L22_1;
  /* TS03Battery::_L29 */ kcg_real _L29_1;
  /* TS03Battery::_L30 */ kcg_real _L30_1;
  /* TS03Battery::_L31 */ kcg_real _L31_1;
  /* TS03Battery::_L32 */ kcg_bool _L32_1;
  /* TS03Battery::_L34 */ kcg_int _L34_1;
  /* TS03Battery::_L35 */ kcg_int _L35_1;
  /* TS03Battery::_L36 */ kcg_int _L36_1;
  /* TS03Battery::CameraOnIndicator */ kcg_int CameraOnIndicator_1;
  /* TS03Battery::LowLevelIndicatorOut */ kcg_int _40_LowLevelIndicatorOut_1;
  /* TS03Battery::BatteryLevelOut */ kcg_real BatteryLevelOut_1;
  /* TS03Battery::BatteryLevelIn */ kcg_real BatteryLevelIn_1;
  /* TS03Battery::BT_btn */ kcg_bool BT_btn_1;
  /* TS03::ST_MemoryGauge */ kcg_int last_ST_MemoryGauge;
  /* TS03::ST_BatteryLevel */ kcg_real last_ST_BatteryLevel;
  /* TS03::_L13 */ kcg_bool _L13;
  /* TS03::_L11 */ kcg_bool _L11;
  /* TS03::_L10 */ kcg_int _L10;
  /* TS03::_L26 */ kcg_bool _L26;
  /* TS03::_L52 */ kcg_real _L52;
  /* TS03::_L53 */ kcg_real _L53;
  /* TS03::_L54 */ kcg_int _L54;
  /* TS03::_L55 */ kcg_int _L55;
  /* TS03::_L56 */ kcg_bool _L56;
  /* TS03::_L57 */ kcg_int _L57;
  /* TS03::_L58 */ kcg_bool _L58;
  /* TS03::_L61 */ kcg_int _L61;
  /* TS03::_L62 */ kcg_int _L62;
  /* TS03::_L63 */ kcg_int _L63;
  
  if (outC->init) {
    last_ST_MemoryGauge = 0;
  }
  else {
    last_ST_MemoryGauge = outC->ST_MemoryGauge;
  }
  _L57 = last_ST_MemoryGauge;
  MemoryGaugeIn_1 = _L57;
  _L58 = inC->TST_TakePicutreBtn;
  TST_TakePicture_1 = _L58;
  if (outC->init) {
    last_ST_BatteryLevel = 0.0;
  }
  else {
    last_ST_BatteryLevel = outC->ST_BatteryLevel;
  }
  _L53 = last_ST_BatteryLevel;
  BatteryLevelIn_1 = _L53;
  if (outC->init) {
    _L1_1_1 = kcg_false;
  }
  else {
    _L1_1_1 = outC->_L3_1_1;
  }
  Output1_1_1 = _L1_1_1;
  _L22_1 = Output1_1_1;
  _L36_1 = GREEN;
  _L35_1 = GRAY50;
  if (_L22_1) {
    _L34_1 = _L36_1;
  }
  else {
    _L34_1 = _L35_1;
  }
  CameraOnIndicator_1 = _L34_1;
  _L63 = CameraOnIndicator_1;
  if (outC->init) {
    SM1_state_sel_1 = _2_SSM_st_Full_SM1;
  }
  else {
    SM1_state_sel_1 = outC->SM1_state_nxt_1;
  }
  switch (SM1_state_sel_1) {
    case _3_SSM_st_Empty_SM1 :
      br_1_guard_1_SM1_Empty = BatteryLevelIn_1 < BATTERY_EMPTY;
      if (br_1_guard_1_SM1_Empty) {
        _9_SM1_state_act_1 = SSM_st_Low_SM1;
      }
      else {
        _9_SM1_state_act_1 = _3_SSM_st_Empty_SM1;
      }
      SM1_state_act_1 = _9_SM1_state_act_1;
      break;
    case _2_SSM_st_Full_SM1 :
      br_1_guard_1_SM1_Full = BatteryLevelIn_1 > BATTERY_FULL;
      if (br_1_guard_1_SM1_Full) {
        _6_SM1_state_act_1 = _1_SSM_st_Half_SM1;
      }
      else {
        _6_SM1_state_act_1 = _2_SSM_st_Full_SM1;
      }
      SM1_state_act_1 = _6_SM1_state_act_1;
      break;
    case _1_SSM_st_Half_SM1 :
      br_1_guard_1_SM1_Half = BatteryLevelIn_1 <= BATTERY_FULL;
      br_2_guard_1_SM1_Half = BatteryLevelIn_1 >= BATTERY_LOW_LEVEL;
      if (br_1_guard_1_SM1_Half) {
        _3_SM1_state_act_1 = _2_SSM_st_Full_SM1;
      }
      else if (br_2_guard_1_SM1_Half) {
        _3_SM1_state_act_1 = SSM_st_Low_SM1;
      }
      else {
        _3_SM1_state_act_1 = _1_SSM_st_Half_SM1;
      }
      SM1_state_act_1 = _3_SM1_state_act_1;
      break;
    case SSM_st_Low_SM1 :
      br_1_guard_1_SM1_Low = BatteryLevelIn_1 < BATTERY_LOW_LEVEL;
      br_2_guard_1_SM1_Low = BatteryLevelIn_1 >= BATTERY_EMPTY;
      if (br_1_guard_1_SM1_Low) {
        _1_SM1_state_act_1 = _1_SSM_st_Half_SM1;
      }
      else if (br_2_guard_1_SM1_Low) {
        _1_SM1_state_act_1 = _3_SSM_st_Empty_SM1;
      }
      else {
        _1_SM1_state_act_1 = SSM_st_Low_SM1;
      }
      SM1_state_act_1 = _1_SM1_state_act_1;
      break;
    
  }
  switch (SM1_state_act_1) {
    case _3_SSM_st_Empty_SM1 :
      _L7_1_SM1_Empty = RED;
      _27_LowLevelIndicatorOut_1 = _L7_1_SM1_Empty;
      _40_LowLevelIndicatorOut_1 = _27_LowLevelIndicatorOut_1;
      break;
    case _2_SSM_st_Full_SM1 :
      _L14_1_SM1_Full = GRAY50;
      _21_LowLevelIndicatorOut_1 = _L14_1_SM1_Full;
      _40_LowLevelIndicatorOut_1 = _21_LowLevelIndicatorOut_1;
      break;
    case _1_SSM_st_Half_SM1 :
      _L5_1_SM1_Half = GRAY50;
      _15_LowLevelIndicatorOut_1 = _L5_1_SM1_Half;
      _40_LowLevelIndicatorOut_1 = _15_LowLevelIndicatorOut_1;
      break;
    case SSM_st_Low_SM1 :
      _L5_1_SM1_Low = YELLOW;
      LowLevelIndicatorOut_1 = _L5_1_SM1_Low;
      _40_LowLevelIndicatorOut_1 = LowLevelIndicatorOut_1;
      break;
    
  }
  _L54 = _40_LowLevelIndicatorOut_1;
  if (outC->init) {
    _L1_2_1 = kcg_false;
  }
  else {
    _L1_2_1 = outC->_L3_2_1;
  }
  Output1_2_1 = _L1_2_1;
  _L79_1 = Output1_2_1;
  _L82_1 = GREEN;
  _L81_1 = GRAY50;
  if (_L79_1) {
    _L80_1 = _L82_1;
  }
  else {
    _L80_1 = _L81_1;
  }
  MemoryDownloadIndicator_1 = _L80_1;
  _L62 = MemoryDownloadIndicator_1;
  if (outC->init) {
    _47_SM1_state_sel_1 = SSM_st_Empty_SM1;
  }
  else {
    _47_SM1_state_sel_1 = outC->_3_SM1_state_nxt_1;
  }
  switch (_47_SM1_state_sel_1) {
    case SSM_st_Empty_SM1 :
      _61_br_1_guard_1_SM1_Empty = MemoryGaugeIn_1 > 0;
      if (_61_br_1_guard_1_SM1_Empty) {
        _62_SM1_state_act_1 = SSM_st_Half_SM1;
      }
      else {
        _62_SM1_state_act_1 = SSM_st_Empty_SM1;
      }
      _46_SM1_state_act_1 = _62_SM1_state_act_1;
      break;
    case SSM_st_Full_SM1 :
      _57_br_1_guard_1_SM1_Full = MemoryGaugeIn_1 < MEMORY_FULL;
      if (_57_br_1_guard_1_SM1_Full) {
        _58_SM1_state_act_1 = SSM_st_LowLevel_SM1;
      }
      else {
        _58_SM1_state_act_1 = SSM_st_Full_SM1;
      }
      _46_SM1_state_act_1 = _58_SM1_state_act_1;
      break;
    case SSM_st_LowLevel_SM1 :
      br_1_guard_1_SM1_LowLevel = MemoryGaugeIn_1 >= MEMORY_FULL;
      br_2_guard_1_SM1_LowLevel = MemoryGaugeIn_1 <= MEMORY_LOW_LEVEL;
      if (br_1_guard_1_SM1_LowLevel) {
        _54_SM1_state_act_1 = SSM_st_Full_SM1;
      }
      else if (br_2_guard_1_SM1_LowLevel) {
        _54_SM1_state_act_1 = SSM_st_Half_SM1;
      }
      else {
        _54_SM1_state_act_1 = SSM_st_LowLevel_SM1;
      }
      _46_SM1_state_act_1 = _54_SM1_state_act_1;
      break;
    case SSM_st_Half_SM1 :
      _49_br_1_guard_1_SM1_Half = MemoryGaugeIn_1 == 0;
      _50_br_2_guard_1_SM1_Half = MemoryGaugeIn_1 > MEMORY_LOW_LEVEL;
      if (_49_br_1_guard_1_SM1_Half) {
        _51_SM1_state_act_1 = SSM_st_Empty_SM1;
      }
      else if (_50_br_2_guard_1_SM1_Half) {
        _51_SM1_state_act_1 = SSM_st_LowLevel_SM1;
      }
      else {
        _51_SM1_state_act_1 = SSM_st_Half_SM1;
      }
      _46_SM1_state_act_1 = _51_SM1_state_act_1;
      break;
    
  }
  switch (_46_SM1_state_act_1) {
    case SSM_st_Empty_SM1 :
      _L1_1_SM1_Empty = GRAY50;
      _76_MemoryLowLevelWarn_1 = _L1_1_SM1_Empty;
      _87_MemoryLowLevelWarn_1 = _76_MemoryLowLevelWarn_1;
      break;
    case SSM_st_Full_SM1 :
      _L1_1_SM1_Full = RED;
      _72_MemoryLowLevelWarn_1 = _L1_1_SM1_Full;
      _87_MemoryLowLevelWarn_1 = _72_MemoryLowLevelWarn_1;
      break;
    case SSM_st_LowLevel_SM1 :
      _L1_1_SM1_LowLevel = YELLOW;
      _68_MemoryLowLevelWarn_1 = _L1_1_SM1_LowLevel;
      _87_MemoryLowLevelWarn_1 = _68_MemoryLowLevelWarn_1;
      break;
    case SSM_st_Half_SM1 :
      _L1_1_SM1_Half = GRAY50;
      MemoryLowLevelWarn_1 = _L1_1_SM1_Half;
      _87_MemoryLowLevelWarn_1 = MemoryLowLevelWarn_1;
      break;
    
  }
  _L61 = _87_MemoryLowLevelWarn_1;
  _L56 = inC->ST_DownloadBtn;
  outC->DownLoadPic = _L56;
  outC->TakePicture = _L58;
  outC->ST_CameraOnIndicator = _L63;
  outC->MemoryWarn = _L61;
  outC->ST_MemoryDownloadIndicator = _L62;
  _L78_1 = MemoryGaugeIn_1;
  _L77_1 = MEMORY_FULL;
  _L74_1 = _L78_1 >= _L77_1;
  _41_MaxSizeReached_1 = _L74_1;
  _48_IfBlock1_clock_1 = TST_TakePicture_1 & !_41_MaxSizeReached_1;
  Empty_1 = _L79_1;
  if (_48_IfBlock1_clock_1) {
    _L5_185_IfBlock1 = MemoryGaugeIn_1;
    _L6_1_IfBlock1 = MEMORY_INCR;
    _L3_184_IfBlock1 = _L5_185_IfBlock1 + _L6_1_IfBlock1;
    _86_MemoryGaugeOut_1 = _L3_184_IfBlock1;
    _88_MemoryGaugeOut_1 = _86_MemoryGaugeOut_1;
  }
  else {
    _82_else_clock_1_IfBlock1 = Empty_1 & (MemoryGaugeIn_1 > 0);
    if (_82_else_clock_1_IfBlock1) {
      _L9_1_IfBlock1 = MemoryGaugeIn_1;
      _L10_1_IfBlock1 = MEMORY_INCR;
      _L8_1_IfBlock1 = _L9_1_IfBlock1 - _L10_1_IfBlock1;
      MemoryGaugeOut_1 = _L8_1_IfBlock1;
      _83_MemoryGaugeOut_1 = MemoryGaugeOut_1;
    }
    else {
      _L3_181_IfBlock1 = MemoryGaugeIn_1;
      _80_MemoryGaugeOut_1 = _L3_181_IfBlock1;
      _83_MemoryGaugeOut_1 = _80_MemoryGaugeOut_1;
    }
    _88_MemoryGaugeOut_1 = _83_MemoryGaugeOut_1;
  }
  _L55 = _88_MemoryGaugeOut_1;
  outC->ST_MemoryGauge = _L55;
  outC->BatteryWarn = _L54;
  CameraOn_1 = _L22_1;
  switch (SM1_state_act_1) {
    case _3_SSM_st_Empty_SM1 :
      _L5_1_SM1_Empty = kcg_true;
      _29_LoadBattery_1 = _L5_1_SM1_Empty;
      LoadBattery_1 = _29_LoadBattery_1;
      break;
    case _2_SSM_st_Full_SM1 :
      _L13_1_SM1_Full = kcg_false;
      _23_LoadBattery_1 = _L13_1_SM1_Full;
      LoadBattery_1 = _23_LoadBattery_1;
      break;
    case _1_SSM_st_Half_SM1 :
      _L3_1_SM1_Half = CameraOn_1;
      _L4_1_SM1_Half = !_L3_1_SM1_Half;
      _17_LoadBattery_1 = _L4_1_SM1_Half;
      LoadBattery_1 = _17_LoadBattery_1;
      break;
    case SSM_st_Low_SM1 :
      _L3_1_SM1_Low = CameraOn_1;
      _L4_1_SM1_Low = !_L3_1_SM1_Low;
      _13_LoadBattery_1 = _L4_1_SM1_Low;
      LoadBattery_1 = _13_LoadBattery_1;
      break;
    
  }
  _L30_1 = BatteryLevelIn_1;
  _L31_1 = BATTERY_FULL;
  _L32_1 = _L30_1 <= _L31_1;
  MaxSizeReached_1 = _L32_1;
  IfBlock1_clock_1 = LoadBattery_1 & !MaxSizeReached_1;
  switch (SM1_state_act_1) {
    case _3_SSM_st_Empty_SM1 :
      _L3_1_SM1_Empty = kcg_false;
      _28_EmptyBattery_1 = _L3_1_SM1_Empty;
      EmptyBattery_1 = _28_EmptyBattery_1;
      break;
    case _2_SSM_st_Full_SM1 :
      _L12_1_SM1_Full = kcg_true;
      _22_EmptyBattery_1 = _L12_1_SM1_Full;
      EmptyBattery_1 = _22_EmptyBattery_1;
      break;
    case _1_SSM_st_Half_SM1 :
      _16_EmptyBattery_1 = _L3_1_SM1_Half;
      EmptyBattery_1 = _16_EmptyBattery_1;
      break;
    case SSM_st_Low_SM1 :
      _12_EmptyBattery_1 = _L3_1_SM1_Low;
      EmptyBattery_1 = _12_EmptyBattery_1;
      break;
    
  }
  if (IfBlock1_clock_1) {
    _L4_138_IfBlock1 = BatteryLevelIn_1;
    _L2_137_IfBlock1 = BATTERY_INCR;
    _L3_1_IfBlock1 = _L4_138_IfBlock1 + _L2_137_IfBlock1;
    _39_localLevel_1 = _L3_1_IfBlock1;
    localLevel_1 = _39_localLevel_1;
  }
  else {
    else_clock_1_IfBlock1 = EmptyBattery_1 & (BatteryLevelIn_1 < BATTERY_EMPTY);
    if (else_clock_1_IfBlock1) {
      _L5_1_IfBlock1 = BatteryLevelIn_1;
      _L4_1_IfBlock1 = BATTERY_INCR;
      _L2_1_IfBlock1 = _L5_1_IfBlock1 - _L4_1_IfBlock1;
      _33_localLevel_1 = _L2_1_IfBlock1;
      _36_localLevel_1 = _33_localLevel_1;
    }
    else {
      _L2_135_IfBlock1 = BatteryLevelIn_1;
      _34_localLevel_1 = _L2_135_IfBlock1;
      _36_localLevel_1 = _34_localLevel_1;
    }
    localLevel_1 = _36_localLevel_1;
  }
  _L29_1 = localLevel_1;
  BatteryLevelOut_1 = _L29_1;
  _L52 = BatteryLevelOut_1;
  outC->ST_BatteryLevel = _L52;
  _L26 = inC->ST_CameraBtnOn;
  _L13 = kcg_true;
  if (outC->init) {
    _L11 = kcg_true;
  }
  else {
    _L11 = outC->_L12;
  }
  outC->_L12 = kcg_false;
  outC->Emit2CDS = _L13;
  outC->Layer1Vixible = _L11;
  outC->Layer1Active = _L11;
  _L10 = STR_SIZE;
  outC->StringSize = _L10;
  BT_btn_1 = _L26;
  _L20_1 = BT_btn_1;
  switch (SM1_state_sel_1) {
    case _3_SSM_st_Empty_SM1 :
      if (br_1_guard_1_SM1_Empty) {
        _11_SM1_fired_strong_1 = _8_SSM_TR_Empty_1_SM1;
      }
      else {
        _11_SM1_fired_strong_1 = _9_SSM_TR_no_trans_SM1;
      }
      SM1_fired_strong_1 = _11_SM1_fired_strong_1;
      break;
    case _2_SSM_st_Full_SM1 :
      if (br_1_guard_1_SM1_Full) {
        _8_SM1_fired_strong_1 = _7_SSM_TR_Full_1_SM1;
      }
      else {
        _8_SM1_fired_strong_1 = _9_SSM_TR_no_trans_SM1;
      }
      SM1_fired_strong_1 = _8_SM1_fired_strong_1;
      break;
    case _1_SSM_st_Half_SM1 :
      if (br_1_guard_1_SM1_Half) {
        _5_SM1_fired_strong_1 = _6_SSM_TR_Half_1_SM1;
      }
      else if (br_2_guard_1_SM1_Half) {
        _5_SM1_fired_strong_1 = _5_SSM_TR_Half_2_SM1;
      }
      else {
        _5_SM1_fired_strong_1 = _9_SSM_TR_no_trans_SM1;
      }
      SM1_fired_strong_1 = _5_SM1_fired_strong_1;
      break;
    case SSM_st_Low_SM1 :
      if (br_1_guard_1_SM1_Low) {
        _2_SM1_fired_strong_1 = SSM_TR_Low_1_SM1;
      }
      else if (br_2_guard_1_SM1_Low) {
        _2_SM1_fired_strong_1 = SSM_TR_Low_2_SM1;
      }
      else {
        _2_SM1_fired_strong_1 = _9_SSM_TR_no_trans_SM1;
      }
      SM1_fired_strong_1 = _2_SM1_fired_strong_1;
      break;
    
  }
  switch (SM1_state_act_1) {
    case _3_SSM_st_Empty_SM1 :
      _32_SM1_fired_1 = SM1_fired_strong_1;
      _31_SM1_reset_nxt_1 = kcg_false;
      _30_SM1_state_nxt_1 = _3_SSM_st_Empty_SM1;
      SM1_fired_1 = _32_SM1_fired_1;
      break;
    case _2_SSM_st_Full_SM1 :
      _26_SM1_fired_1 = SM1_fired_strong_1;
      _25_SM1_reset_nxt_1 = kcg_false;
      _24_SM1_state_nxt_1 = _2_SSM_st_Full_SM1;
      SM1_fired_1 = _26_SM1_fired_1;
      break;
    case _1_SSM_st_Half_SM1 :
      _20_SM1_fired_1 = SM1_fired_strong_1;
      _19_SM1_reset_nxt_1 = kcg_false;
      _18_SM1_state_nxt_1 = _1_SSM_st_Half_SM1;
      SM1_fired_1 = _20_SM1_fired_1;
      break;
    case SSM_st_Low_SM1 :
      _14_SM1_fired_1 = SM1_fired_strong_1;
      SM1_reset_nxt_1 = kcg_false;
      SM1_state_nxt_1 = SSM_st_Low_SM1;
      SM1_fired_1 = _14_SM1_fired_1;
      break;
    
  }
  if (outC->init) {
    SM1_reset_sel_1 = kcg_false;
  }
  else {
    SM1_reset_sel_1 = outC->SM1_reset_nxt_1;
  }
  switch (SM1_state_act_1) {
    case _3_SSM_st_Empty_SM1 :
      outC->SM1_reset_nxt_1 = _31_SM1_reset_nxt_1;
      outC->SM1_state_nxt_1 = _30_SM1_state_nxt_1;
      break;
    case _2_SSM_st_Full_SM1 :
      outC->SM1_reset_nxt_1 = _25_SM1_reset_nxt_1;
      outC->SM1_state_nxt_1 = _24_SM1_state_nxt_1;
      break;
    case _1_SSM_st_Half_SM1 :
      outC->SM1_reset_nxt_1 = _19_SM1_reset_nxt_1;
      outC->SM1_state_nxt_1 = _18_SM1_state_nxt_1;
      break;
    case SSM_st_Low_SM1 :
      outC->SM1_reset_nxt_1 = SM1_reset_nxt_1;
      outC->SM1_state_nxt_1 = SM1_state_nxt_1;
      break;
    
  }
  switch (SM1_state_sel_1) {
    case _3_SSM_st_Empty_SM1 :
      _10_SM1_reset_act_1 = br_1_guard_1_SM1_Empty;
      break;
    case _2_SSM_st_Full_SM1 :
      _7_SM1_reset_act_1 = br_1_guard_1_SM1_Full;
      break;
    case _1_SSM_st_Half_SM1 :
      if (br_1_guard_1_SM1_Half) {
        _4_SM1_reset_act_1 = kcg_true;
      }
      else {
        _4_SM1_reset_act_1 = br_2_guard_1_SM1_Half;
      }
      break;
    case SSM_st_Low_SM1 :
      if (br_1_guard_1_SM1_Low) {
        SM1_reset_act_1 = kcg_true;
      }
      else {
        SM1_reset_act_1 = br_2_guard_1_SM1_Low;
      }
      break;
    
  }
  if (outC->init) {
    SM1_reset_prv_1 = kcg_false;
  }
  else {
    SM1_reset_prv_1 = outC->SM1_reset_act_1;
  }
  switch (SM1_state_sel_1) {
    case _3_SSM_st_Empty_SM1 :
      outC->SM1_reset_act_1 = _10_SM1_reset_act_1;
      break;
    case _2_SSM_st_Full_SM1 :
      outC->SM1_reset_act_1 = _7_SM1_reset_act_1;
      break;
    case _1_SSM_st_Half_SM1 :
      outC->SM1_reset_act_1 = _4_SM1_reset_act_1;
      break;
    case SSM_st_Low_SM1 :
      outC->SM1_reset_act_1 = SM1_reset_act_1;
      break;
    
  }
  Input1_1_1 = _L20_1;
  _L4_1_1 = !_L1_1_1;
  _L2_1_1 = Input1_1_1;
  if (_L2_1_1) {
    outC->_L3_1_1 = _L4_1_1;
  }
  else {
    outC->_L3_1_1 = _L1_1_1;
  }
  DownloadBtn_1 = _L56;
  switch (_47_SM1_state_sel_1) {
    case SSM_st_Empty_SM1 :
      if (_61_br_1_guard_1_SM1_Empty) {
        _64_SM1_fired_strong_1 = SSM_TR_Empty_1_SM1;
      }
      else {
        _64_SM1_fired_strong_1 = SSM_TR_no_trans_SM1;
      }
      _43_SM1_fired_strong_1 = _64_SM1_fired_strong_1;
      break;
    case SSM_st_Full_SM1 :
      if (_57_br_1_guard_1_SM1_Full) {
        _60_SM1_fired_strong_1 = SSM_TR_Full_1_SM1;
      }
      else {
        _60_SM1_fired_strong_1 = SSM_TR_no_trans_SM1;
      }
      _43_SM1_fired_strong_1 = _60_SM1_fired_strong_1;
      break;
    case SSM_st_LowLevel_SM1 :
      if (br_1_guard_1_SM1_LowLevel) {
        _56_SM1_fired_strong_1 = SSM_TR_LowLevel_1_SM1;
      }
      else if (br_2_guard_1_SM1_LowLevel) {
        _56_SM1_fired_strong_1 = SSM_TR_LowLevel_2_SM1;
      }
      else {
        _56_SM1_fired_strong_1 = SSM_TR_no_trans_SM1;
      }
      _43_SM1_fired_strong_1 = _56_SM1_fired_strong_1;
      break;
    case SSM_st_Half_SM1 :
      if (_49_br_1_guard_1_SM1_Half) {
        _53_SM1_fired_strong_1 = SSM_TR_Half_1_SM1;
      }
      else if (_50_br_2_guard_1_SM1_Half) {
        _53_SM1_fired_strong_1 = SSM_TR_Half_2_SM1;
      }
      else {
        _53_SM1_fired_strong_1 = SSM_TR_no_trans_SM1;
      }
      _43_SM1_fired_strong_1 = _53_SM1_fired_strong_1;
      break;
    
  }
  switch (_46_SM1_state_act_1) {
    case SSM_st_Empty_SM1 :
      _79_SM1_fired_1 = _43_SM1_fired_strong_1;
      _78_SM1_reset_nxt_1 = kcg_false;
      _77_SM1_state_nxt_1 = SSM_st_Empty_SM1;
      _42_SM1_fired_1 = _79_SM1_fired_1;
      break;
    case SSM_st_Full_SM1 :
      _75_SM1_fired_1 = _43_SM1_fired_strong_1;
      _74_SM1_reset_nxt_1 = kcg_false;
      _73_SM1_state_nxt_1 = SSM_st_Full_SM1;
      _42_SM1_fired_1 = _75_SM1_fired_1;
      break;
    case SSM_st_LowLevel_SM1 :
      _71_SM1_fired_1 = _43_SM1_fired_strong_1;
      _70_SM1_reset_nxt_1 = kcg_false;
      _69_SM1_state_nxt_1 = SSM_st_LowLevel_SM1;
      _42_SM1_fired_1 = _71_SM1_fired_1;
      break;
    case SSM_st_Half_SM1 :
      _67_SM1_fired_1 = _43_SM1_fired_strong_1;
      _66_SM1_reset_nxt_1 = kcg_false;
      _65_SM1_state_nxt_1 = SSM_st_Half_SM1;
      _42_SM1_fired_1 = _67_SM1_fired_1;
      break;
    
  }
  if (outC->init) {
    _45_SM1_reset_sel_1 = kcg_false;
  }
  else {
    _45_SM1_reset_sel_1 = outC->_1_SM1_reset_nxt_1;
  }
  switch (_46_SM1_state_act_1) {
    case SSM_st_Empty_SM1 :
      outC->_1_SM1_reset_nxt_1 = _78_SM1_reset_nxt_1;
      outC->_3_SM1_state_nxt_1 = _77_SM1_state_nxt_1;
      break;
    case SSM_st_Full_SM1 :
      outC->_1_SM1_reset_nxt_1 = _74_SM1_reset_nxt_1;
      outC->_3_SM1_state_nxt_1 = _73_SM1_state_nxt_1;
      break;
    case SSM_st_LowLevel_SM1 :
      outC->_1_SM1_reset_nxt_1 = _70_SM1_reset_nxt_1;
      outC->_3_SM1_state_nxt_1 = _69_SM1_state_nxt_1;
      break;
    case SSM_st_Half_SM1 :
      outC->_1_SM1_reset_nxt_1 = _66_SM1_reset_nxt_1;
      outC->_3_SM1_state_nxt_1 = _65_SM1_state_nxt_1;
      break;
    
  }
  switch (_47_SM1_state_sel_1) {
    case SSM_st_Empty_SM1 :
      _63_SM1_reset_act_1 = _61_br_1_guard_1_SM1_Empty;
      break;
    case SSM_st_Full_SM1 :
      _59_SM1_reset_act_1 = _57_br_1_guard_1_SM1_Full;
      break;
    case SSM_st_LowLevel_SM1 :
      if (br_1_guard_1_SM1_LowLevel) {
        _55_SM1_reset_act_1 = kcg_true;
      }
      else {
        _55_SM1_reset_act_1 = br_2_guard_1_SM1_LowLevel;
      }
      break;
    case SSM_st_Half_SM1 :
      if (_49_br_1_guard_1_SM1_Half) {
        _52_SM1_reset_act_1 = kcg_true;
      }
      else {
        _52_SM1_reset_act_1 = _50_br_2_guard_1_SM1_Half;
      }
      break;
    
  }
  if (outC->init) {
    _44_SM1_reset_prv_1 = kcg_false;
  }
  else {
    _44_SM1_reset_prv_1 = outC->_2_SM1_reset_act_1;
  }
  switch (_47_SM1_state_sel_1) {
    case SSM_st_Empty_SM1 :
      outC->_2_SM1_reset_act_1 = _63_SM1_reset_act_1;
      break;
    case SSM_st_Full_SM1 :
      outC->_2_SM1_reset_act_1 = _59_SM1_reset_act_1;
      break;
    case SSM_st_LowLevel_SM1 :
      outC->_2_SM1_reset_act_1 = _55_SM1_reset_act_1;
      break;
    case SSM_st_Half_SM1 :
      outC->_2_SM1_reset_act_1 = _52_SM1_reset_act_1;
      break;
    
  }
  _L3_1 = DownloadBtn_1;
  Input1_2_1 = _L3_1;
  _L4_2_1 = !_L1_2_1;
  _L2_2_1 = Input1_2_1;
  if (_L2_2_1) {
    outC->_L3_2_1 = _L4_2_1;
  }
  else {
    outC->_L3_2_1 = _L1_2_1;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TS03.c
** Generation date: 2014-11-18T21:20:02
*************************************************************$ */

