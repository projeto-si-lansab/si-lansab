/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/github/si-lansab/Launcher/TS01/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-10-28T00:42:05
*************************************************************$ */
#ifndef _Main_H_
#define _Main_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* Main::AutoDestruct */ AutoDestruct;
  kcg_int /* Main::Manual_Override */ Manual_Override;
  kcg_bool /* Main::EnableRocketLaunch */ EnableRocketLaunch;
  kcg_bool /* Main::Manual_StartPhase2 */ Manual_StartPhase2;
  kcg_bool /* Main::Manual_StartPhase3 */ Manual_StartPhase3;
  kcg_bool /* Main::Manual_StartPhaseFinal */ Manual_StartPhaseFinal;
  kcg_bool /* Main::Manual_SatLaunch */ Manual_SatLaunch;
  kcg_bool /* Main::Manual_Notify */ Manual_Notify;
} inC_Main;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* Main::StringSize */ StringSize;
  kcg_bool /* Main::Emit2CDS */ Emit2CDS;
  kcg_bool /* Main::Layer1Active */ Layer1Active;
  kcg_bool /* Main::Layer1Visible */ Layer1Visible;
  kcg_real /* Main::Speed_Out */ Speed_Out;
  kcg_int /* Main::StringSizeSmall */ StringSizeSmall;
  kcg_real /* Main::Altitude_Out */ Altitude_Out;
  kcg_real /* Main::Inclination_Out */ Inclination_Out;
  T_String /* Main::Ph1_Label */ Ph1_Label;
  kcg_int /* Main::Ph1_Color */ Ph1_Color;
  T_String /* Main::Ph2_Label */ Ph2_Label;
  kcg_int /* Main::Ph2_Color */ Ph2_Color;
  T_String /* Main::Ph3_Label */ Ph3_Label;
  kcg_int /* Main::Ph3_Color */ Ph3_Color;
  T_String /* Main::PhF_Label */ PhF_Label;
  kcg_int /* Main::PhF_Color */ PhF_Color;
  kcg_real /* Main::Latitude_Out */ Latitude_Out;
  kcg_real /* Main::Longitude_Out */ Longitude_Out;
  kcg_bool /* Main::Auto_Txt_En */ Auto_Txt_En;
  kcg_bool /* Main::Manual_Txt_En */ Manual_Txt_En;
  kcg_bool /* Main::Destroyed_Label */ Destroyed_Label;
  kcg_bool /* Main::SatLaunched */ SatLaunched;
  kcg_bool /* Main::RocketDestroy */ RocketDestroy;
  kcg_bool /* Main::ControlCenterStatus */ ControlCenterStatus;
  kcg_bool /* Main::RocketLaunch */ RocketLaunch;
  kcg_int /* Main::Fuel_Out */ Fuel_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init4;
  kcg_bool init3;
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* linear::MemoryBasic::_L4 */ _L4_2;
  kcg_int /* linear::MemoryBasic::_L4 */ _L4_1;
  kcg_real /* Altitude_Status::_L19 */ _L19_6;
  kcg_real /* Inclination_Status::_L7 */ _L7_1;
  kcg_int /* Timer::IfBlock1::then::_L5 */ _L5_1_IfBlock1;
  kcg_int /* Timer::IfBlock1::then::_L5 */ _L5_2_IfBlock1;
  kcg_int /* Timer::IfBlock1::then::_L5 */ _L5_3_IfBlock1;
  kcg_int /* Timer::IfBlock1::then::_L5 */ _L5_4_IfBlock1;
  kcg_int /* Speed_Status::_L6 */ _L6_1;
  SSM_ST_SM1 /* Main::SM1 */ SM1_state_nxt;
  kcg_bool /* Main::SM1 */ SM1_reset_act;
  kcg_bool /* Main::SM1 */ SM1_reset_nxt;
  kcg_int /* Main::Acceleration */ Acceleration;
  kcg_real /* Main::InclinationIncrement */ InclinationIncrement;
  kcg_bool /* Main::_L3 */ _L3;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_Main;

/* ===========  node initialization and cycle functions  =========== */
/* Main */
extern void Main(inC_Main *inC, outC_Main *outC);

extern void Main_reset(outC_Main *outC);

#endif /* _Main_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Main.h
** Generation date: 2014-10-28T00:42:05
*************************************************************$ */

