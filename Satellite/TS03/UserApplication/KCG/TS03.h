/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GitHub/si-lansab/Satellite/TS03/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-18T21:20:02
*************************************************************$ */
#ifndef _TS03_H_
#define _TS03_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* TS03::ST_CameraBtnOn */ ST_CameraBtnOn;
  kcg_bool /* TS03::ST_DownloadBtn */ ST_DownloadBtn;
  kcg_bool /* TS03::TST_TakePicutreBtn */ TST_TakePicutreBtn;
} inC_TS03;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TS03::Layer1Active */ Layer1Active;
  kcg_bool /* TS03::Layer1Vixible */ Layer1Vixible;
  kcg_int /* TS03::StringSize */ StringSize;
  kcg_bool /* TS03::Emit2CDS */ Emit2CDS;
  kcg_real /* TS03::ST_BatteryLevel */ ST_BatteryLevel;
  kcg_int /* TS03::BatteryWarn */ BatteryWarn;
  kcg_int /* TS03::ST_MemoryGauge */ ST_MemoryGauge;
  kcg_int /* TS03::MemoryWarn */ MemoryWarn;
  kcg_int /* TS03::ST_CameraOnIndicator */ ST_CameraOnIndicator;
  kcg_int /* TS03::ST_MemoryDownloadIndicator */ ST_MemoryDownloadIndicator;
  kcg_bool /* TS03::TakePicture */ TakePicture;
  kcg_bool /* TS03::DownLoadPic */ DownLoadPic;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* Switch::_L3 */ _L3_2_1;
  SSM_ST_SM1 /* TS03Memory::SM1 */ _3_SM1_state_nxt_1;
  kcg_bool /* TS03Memory::SM1 */ _2_SM1_reset_act_1;
  kcg_bool /* TS03Memory::SM1 */ _1_SM1_reset_nxt_1;
  kcg_bool /* Switch::_L3 */ _L3_1_1;
  _4_SSM_ST_SM1 /* TS03Battery::SM1 */ SM1_state_nxt_1;
  kcg_bool /* TS03Battery::SM1 */ SM1_reset_act_1;
  kcg_bool /* TS03Battery::SM1 */ SM1_reset_nxt_1;
  kcg_bool /* TS03::_L12 */ _L12;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_TS03;

/* ===========  node initialization and cycle functions  =========== */
/* TS03 */
extern void TS03(inC_TS03 *inC, outC_TS03 *outC);

extern void TS03_reset(outC_TS03 *outC);

#endif /* _TS03_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TS03.h
** Generation date: 2014-11-18T21:20:02
*************************************************************$ */

