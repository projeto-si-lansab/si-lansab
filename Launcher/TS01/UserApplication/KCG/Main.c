/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/github/si-lansab/Launcher/TS01/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-10-23T02:21:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Main.h"

void Main_reset(outC_Main *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
  outC->init4 = kcg_true;
}

/* Main */
void Main(inC_Main *inC, outC_Main *outC)
{
  /* Switch::_L1 */ kcg_bool _L1_8;
  /* Switch::_L3 */ kcg_bool _L3_8;
  /* Switch::_L4 */ kcg_bool _L4_8;
  /* Switch::_L5 */ kcg_bool _L5_8;
  /* Switch::Output1 */ kcg_bool Output1_8;
  /* Switch::Input1 */ kcg_bool Input1_8;
  /* Altitude_Status::_L6 */ kcg_real _L6_6;
  /* Altitude_Status::_L11 */ kcg_int _L11_6;
  /* Altitude_Status::_L15 */ kcg_real _L15_6;
  /* Altitude_Status::_L16 */ kcg_real _L16_6;
  /* Altitude_Status::_L17 */ kcg_real _L17_6;
  /* Altitude_Status::_L18 */ kcg_int _L18_6;
  /* Altitude_Status::_L20 */ kcg_real _L20_6;
  /* Altitude_Status::_L21 */ kcg_real _L21_6;
  /* Altitude_Status::_L22 */ kcg_real _L22_6;
  /* Altitude_Status::_L23 */ kcg_real _L23_6;
  /* Altitude_Status::_L24 */ kcg_real _L24_6;
  /* Altitude_Status::_L25 */ kcg_real _L25_6;
  /* Altitude_Status::_L26 */ kcg_bool _L26_6;
  /* Altitude_Status::_L27 */ kcg_real _L27_6;
  /* Altitude_Status::_L28 */ kcg_real _L28_6;
  /* Altitude_Status::_L29 */ kcg_real _L29_6;
  /* Altitude_Status::Altitude */ kcg_int Altitude_6;
  /* Altitude_Status::Inclination */ kcg_real Inclination_6;
  /* Altitude_Status::Speed */ kcg_int Speed_6;
  /* LatLong_Status::_L6 */ kcg_real _L6_1;
  /* LatLong_Status::_L7 */ kcg_real _L7_1;
  /* LatLong_Status::Longitude */ kcg_real Longitude_1;
  /* LatLong_Status::Latitude */ kcg_real Latitude_1;
  /* Inclination_Status::_L5 */ kcg_real _L5_1;
  /* Inclination_Status::_L8 */ kcg_real _L8_113;
  /* Inclination_Status::_L9 */ kcg_real _L9_1;
  /* Inclination_Status::_L10 */ kcg_bool _L10_1;
  /* Inclination_Status::_L11 */ kcg_real _L11_1;
  /* Inclination_Status::Inclination */ kcg_real Inclination_1;
  /* Inclination_Status::inclination_increment */ kcg_real inclination_increment_1;
  /* Fuel_Status::_L3 */ kcg_int _L3_2;
  /* Fuel_Status::_L9 */ kcg_real _L9_2;
  /* Fuel_Status::_L12 */ kcg_int _L12_2;
  /* Fuel_Status::_L10 */ kcg_int _L10_2;
  /* Fuel_Status::_L15 */ kcg_real _L15_2;
  /* Fuel_Status::_L16 */ kcg_real _L16_2;
  /* Fuel_Status::_L17 */ kcg_int _L17_2;
  /* Fuel_Status::_L19 */ kcg_int _L19_2;
  /* Fuel_Status::_L20 */ kcg_int _L20_2;
  /* Fuel_Status::_L21 */ kcg_int _L21_2;
  /* Fuel_Status::_L24 */ kcg_int _L24_2;
  /* Fuel_Status::_L23 */ kcg_int _L23_2;
  /* Fuel_Status::_L22 */ kcg_int _L22_2;
  /* Fuel_Status::_L25 */ kcg_int _L25_2;
  /* Fuel_Status::_L26 */ kcg_int _L26_2;
  /* Fuel_Status::_L27 */ kcg_bool _L27_2;
  /* Fuel_Status::_L28 */ kcg_int _L28_2;
  /* Fuel_Status::_L29 */ kcg_int _L29_2;
  /* Fuel_Status::Fuel */ kcg_int Fuel_2;
  /* Fuel_Status::Min_Altitude */ kcg_int Min_Altitude_2;
  /* Fuel_Status::Max_Altitude */ kcg_int Max_Altitude_2;
  /* Fuel_Status::Current_Altitude */ kcg_int Current_Altitude_2;
  /* Timer::CountFinished */ kcg_bool _11_CountFinished_1;
  /* Timer::IfBlock1::then::_L1 */ kcg_int _L1_1_IfBlock1;
  /* Timer::IfBlock1::then::_L2 */ kcg_int _L2_1_IfBlock1;
  /* Timer::IfBlock1::then::_L3 */ kcg_bool _L3_110_IfBlock1;
  /* Timer::IfBlock1::then::_L4 */ kcg_int _L4_1_IfBlock1;
  /* Timer::CountFinished */ kcg_bool CountFinished_1;
  /* Timer::IfBlock1::else::_L3 */ kcg_bool _L3_1_IfBlock1;
  /* Timer::IfBlock1 */ kcg_bool IfBlock1_clock_1;
  /* Timer::CountFinished */ kcg_bool _12_CountFinished_1;
  /* Timer::Count */ kcg_int Count_1;
  /* Timer::StartTimer */ kcg_bool StartTimer_1;
  /* Fuel_Status::_L3 */ kcg_int _L3_3;
  /* Fuel_Status::_L9 */ kcg_real _L9_3;
  /* Fuel_Status::_L12 */ kcg_int _L12_3;
  /* Fuel_Status::_L10 */ kcg_int _L10_3;
  /* Fuel_Status::_L15 */ kcg_real _L15_3;
  /* Fuel_Status::_L16 */ kcg_real _L16_3;
  /* Fuel_Status::_L17 */ kcg_int _L17_3;
  /* Fuel_Status::_L19 */ kcg_int _L19_3;
  /* Fuel_Status::_L20 */ kcg_int _L20_3;
  /* Fuel_Status::_L21 */ kcg_int _L21_3;
  /* Fuel_Status::_L24 */ kcg_int _L24_3;
  /* Fuel_Status::_L23 */ kcg_int _L23_3;
  /* Fuel_Status::_L22 */ kcg_int _L22_3;
  /* Fuel_Status::_L25 */ kcg_int _L25_3;
  /* Fuel_Status::_L26 */ kcg_int _L26_3;
  /* Fuel_Status::_L27 */ kcg_bool _L27_3;
  /* Fuel_Status::_L28 */ kcg_int _L28_3;
  /* Fuel_Status::_L29 */ kcg_int _L29_3;
  /* Fuel_Status::Fuel */ kcg_int Fuel_3;
  /* Fuel_Status::Min_Altitude */ kcg_int Min_Altitude_3;
  /* Fuel_Status::Max_Altitude */ kcg_int Max_Altitude_3;
  /* Fuel_Status::Current_Altitude */ kcg_int Current_Altitude_3;
  /* Timer::CountFinished */ kcg_bool _8_CountFinished_2;
  /* Timer::IfBlock1::then::_L1 */ kcg_int _L1_2_IfBlock1;
  /* Timer::IfBlock1::then::_L2 */ kcg_int _L2_2_IfBlock1;
  /* Timer::IfBlock1::then::_L3 */ kcg_bool _L3_27_IfBlock1;
  /* Timer::IfBlock1::then::_L4 */ kcg_int _L4_2_IfBlock1;
  /* Timer::CountFinished */ kcg_bool CountFinished_2;
  /* Timer::IfBlock1::else::_L3 */ kcg_bool _L3_2_IfBlock1;
  /* Timer::IfBlock1 */ kcg_bool IfBlock1_clock_2;
  /* Timer::CountFinished */ kcg_bool _9_CountFinished_2;
  /* Timer::Count */ kcg_int Count_2;
  /* Timer::StartTimer */ kcg_bool StartTimer_2;
  /* Fuel_Status::_L3 */ kcg_int _L3_4;
  /* Fuel_Status::_L9 */ kcg_real _L9_4;
  /* Fuel_Status::_L12 */ kcg_int _L12_4;
  /* Fuel_Status::_L10 */ kcg_int _L10_4;
  /* Fuel_Status::_L15 */ kcg_real _L15_4;
  /* Fuel_Status::_L16 */ kcg_real _L16_4;
  /* Fuel_Status::_L17 */ kcg_int _L17_4;
  /* Fuel_Status::_L19 */ kcg_int _L19_4;
  /* Fuel_Status::_L20 */ kcg_int _L20_4;
  /* Fuel_Status::_L21 */ kcg_int _L21_4;
  /* Fuel_Status::_L24 */ kcg_int _L24_4;
  /* Fuel_Status::_L23 */ kcg_int _L23_4;
  /* Fuel_Status::_L22 */ kcg_int _L22_4;
  /* Fuel_Status::_L25 */ kcg_int _L25_4;
  /* Fuel_Status::_L26 */ kcg_int _L26_4;
  /* Fuel_Status::_L27 */ kcg_bool _L27_4;
  /* Fuel_Status::_L28 */ kcg_int _L28_4;
  /* Fuel_Status::_L29 */ kcg_int _L29_4;
  /* Fuel_Status::Fuel */ kcg_int Fuel_4;
  /* Fuel_Status::Min_Altitude */ kcg_int Min_Altitude_4;
  /* Fuel_Status::Max_Altitude */ kcg_int Max_Altitude_4;
  /* Fuel_Status::Current_Altitude */ kcg_int Current_Altitude_4;
  /* Timer::CountFinished */ kcg_bool _5_CountFinished_3;
  /* Timer::IfBlock1::then::_L1 */ kcg_int _L1_3_IfBlock1;
  /* Timer::IfBlock1::then::_L2 */ kcg_int _L2_3_IfBlock1;
  /* Timer::IfBlock1::then::_L3 */ kcg_bool _L3_34_IfBlock1;
  /* Timer::IfBlock1::then::_L4 */ kcg_int _L4_3_IfBlock1;
  /* Timer::CountFinished */ kcg_bool CountFinished_3;
  /* Timer::IfBlock1::else::_L3 */ kcg_bool _L3_3_IfBlock1;
  /* Timer::IfBlock1 */ kcg_bool IfBlock1_clock_3;
  /* Timer::CountFinished */ kcg_bool _6_CountFinished_3;
  /* Timer::Count */ kcg_int Count_3;
  /* Timer::StartTimer */ kcg_bool StartTimer_3;
  /* Fuel_Status::_L3 */ kcg_int _L3_5;
  /* Fuel_Status::_L9 */ kcg_real _L9_5;
  /* Fuel_Status::_L12 */ kcg_int _L12_5;
  /* Fuel_Status::_L10 */ kcg_int _L10_5;
  /* Fuel_Status::_L15 */ kcg_real _L15_5;
  /* Fuel_Status::_L16 */ kcg_real _L16_5;
  /* Fuel_Status::_L17 */ kcg_int _L17_5;
  /* Fuel_Status::_L19 */ kcg_int _L19_5;
  /* Fuel_Status::_L20 */ kcg_int _L20_5;
  /* Fuel_Status::_L21 */ kcg_int _L21_5;
  /* Fuel_Status::_L24 */ kcg_int _L24_5;
  /* Fuel_Status::_L23 */ kcg_int _L23_5;
  /* Fuel_Status::_L22 */ kcg_int _L22_5;
  /* Fuel_Status::_L25 */ kcg_int _L25_5;
  /* Fuel_Status::_L26 */ kcg_int _L26_5;
  /* Fuel_Status::_L27 */ kcg_bool _L27_5;
  /* Fuel_Status::_L28 */ kcg_int _L28_5;
  /* Fuel_Status::_L29 */ kcg_int _L29_5;
  /* Fuel_Status::Fuel */ kcg_int Fuel_5;
  /* Fuel_Status::Min_Altitude */ kcg_int Min_Altitude_5;
  /* Fuel_Status::Max_Altitude */ kcg_int Max_Altitude_5;
  /* Fuel_Status::Current_Altitude */ kcg_int Current_Altitude_5;
  /* Timer::CountFinished */ kcg_bool _2_CountFinished_4;
  /* Timer::IfBlock1::then::_L1 */ kcg_int _L1_4_IfBlock1;
  /* Timer::IfBlock1::then::_L2 */ kcg_int _L2_4_IfBlock1;
  /* Timer::IfBlock1::then::_L3 */ kcg_bool _L3_41_IfBlock1;
  /* Timer::IfBlock1::then::_L4 */ kcg_int _L4_4_IfBlock1;
  /* Timer::CountFinished */ kcg_bool CountFinished_4;
  /* Timer::IfBlock1::else::_L3 */ kcg_bool _L3_4_IfBlock1;
  /* Timer::IfBlock1 */ kcg_bool IfBlock1_clock_4;
  /* Timer::CountFinished */ kcg_bool _3_CountFinished_4;
  /* Timer::Count */ kcg_int Count_4;
  /* Timer::StartTimer */ kcg_bool StartTimer_4;
  /* Speed_Status::_L4 */ kcg_int _L4_1;
  /* Speed_Status::_L8 */ kcg_int _L8_1;
  /* Speed_Status::Speed */ kcg_int Speed_1;
  /* Speed_Status::Acceleration */ kcg_int Acceleration_1;
  /* Main::SM1 */ SSM_TR_SM1 _145_SM1_fired;
  /* Main::SM1 */ kcg_bool _144_SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 _143_SM1_state_nxt;
  /* Main::MissionOngoing */ kcg_bool _142_MissionOngoing;
  /* Main::ChangeStage */ kcg_bool _141_ChangeStage;
  /* Main::StageFailed */ kcg_bool _140_StageFailed;
  /* Main::MissionSuccessful */ kcg_bool _139_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real _138_InclinationIncrement;
  /* Main::Acceleration */ kcg_int _137_Acceleration;
  /* Main::Fuel_Out */ kcg_int _136_Fuel_Out;
  /* Main::Destroyed_Label */ kcg_bool _135_Destroyed_Label;
  /* Main::PhF_Color */ kcg_int _134_PhF_Color;
  /* Main::PhF_Label */ T_String _133_PhF_Label;
  /* Main::Ph3_Color */ kcg_int _132_Ph3_Color;
  /* Main::Ph3_Label */ T_String _131_Ph3_Label;
  /* Main::Ph2_Color */ kcg_int _130_Ph2_Color;
  /* Main::Ph2_Label */ T_String _129_Ph2_Label;
  /* Main::Ph1_Color */ kcg_int _128_Ph1_Color;
  /* Main::Ph1_Label */ T_String _127_Ph1_Label;
  /* Main::Inclination_Out */ kcg_real _126_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real _125_Altitude_Out;
  /* Main::Speed_Out */ kcg_real _124_Speed_Out;
  /* Main::SM1::Phase1::_L78 */ kcg_bool _L78_SM1_Phase1;
  /* Main::SM1::Phase1::_L76 */ kcg_int _L76_SM1_Phase1;
  /* Main::SM1::Phase1::_L75 */ kcg_int _L75_SM1_Phase1;
  /* Main::SM1::Phase1::_L74 */ kcg_int _L74_SM1_Phase1;
  /* Main::SM1::Phase1::_L73 */ kcg_int _L73_SM1_Phase1;
  /* Main::SM1::Phase1::_L72 */ kcg_bool _L72_SM1_Phase1;
  /* Main::SM1::Phase1::_L70 */ kcg_bool _L70_SM1_Phase1;
  /* Main::SM1::Phase1::_L64 */ kcg_real _L64_SM1_Phase1;
  /* Main::SM1::Phase1::_L63 */ kcg_real _L63_SM1_Phase1;
  /* Main::SM1::Phase1::_L62 */ kcg_int _L62_SM1_Phase1;
  /* Main::SM1::Phase1::_L61 */ kcg_real _L61_SM1_Phase1;
  /* Main::SM1::Phase1::_L60 */ kcg_int _L60_SM1_Phase1;
  /* Main::SM1::Phase1::_L50 */ kcg_real _L50_SM1_Phase1;
  /* Main::SM1::Phase1::_L51 */ kcg_real _L51_SM1_Phase1;
  /* Main::SM1::Phase1::_L52 */ kcg_real _L52_SM1_Phase1;
  /* Main::SM1::Phase1::_L53 */ kcg_bool _L53_SM1_Phase1;
  /* Main::SM1::Phase1::_L54 */ kcg_real _L54_SM1_Phase1;
  /* Main::SM1::Phase1::_L55 */ kcg_int _L55_SM1_Phase1;
  /* Main::SM1::Phase1::_L56 */ kcg_real _L56_SM1_Phase1;
  /* Main::SM1::Phase1::_L34 */ kcg_int _L34_SM1_Phase1;
  /* Main::SM1::Phase1::_L33 */ T_String _L33_SM1_Phase1;
  /* Main::SM1::Phase1::_L31 */ T_String _L31_SM1_Phase1;
  /* Main::SM1::Phase1::_L32 */ kcg_int _L32_SM1_Phase1;
  /* Main::SM1::Phase1::IfBlock1 */ kcg_bool IfBlock1_clock_SM1_Phase1;
  /* Main::SM1::Phase1 */ kcg_bool Phase1_weakb_clock_SM1;
  /* Main::SM1::Phase1::IfBlock1::else::_L3 */ kcg_int _L3_SM1_Phase1_IfBlock1;
  /* Main::SM1::Phase1::IfBlock1::else::_L2 */ kcg_bool _L2_SM1_Phase1_IfBlock1;
  /* Main::SM1::Phase1::IfBlock1::else::_L1 */ kcg_int _L1_SM1_Phase1_IfBlock1;
  /* Main::SM1::Phase1::IfBlock1::else::_L4 */ kcg_bool _L4_SM1_Phase1_IfBlock1;
  /* Main::SM1::Phase1::IfBlock1::else::_L5 */ kcg_int _L5_SM1_Phase1_IfBlock1;
  /* Main::SM1::Phase1::IfBlock1::else::_L6 */ kcg_bool _L6_SM1_Phase1_IfBlock1;
  /* Main::SM1::Phase1::IfBlock1::else::_L9 */ kcg_bool _L9189_SM1_Phase1_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _164_ChangeStage;
  /* Main::StageFailed */ kcg_bool _165_StageFailed;
  /* Main::SM1::Phase1::IfBlock1::then::_L10 */ kcg_int _L10_SM1_Phase1_IfBlock1;
  /* Main::SM1::Phase1::IfBlock1::then::_L9 */ kcg_bool _L9_SM1_Phase1_IfBlock1;
  /* Main::SM1::Phase1::IfBlock1::then::_L11 */ kcg_int _L11_SM1_Phase1_IfBlock1;
  /* Main::SM1::Phase1::IfBlock1::then::_L15 */ kcg_bool _L15_SM1_Phase1_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _166_ChangeStage;
  /* Main::StageFailed */ kcg_bool _167_StageFailed;
  /* Main::SM1::Phase1 */ kcg_bool br_2_guard_SM1_Phase1;
  /* Main::SM1::Phase1 */ kcg_bool br_3_guard_SM1_Phase1;
  /* Main::SM1 */ SSM_ST_SM1 _158_SM1_state_nxt;
  /* Main::SM1 */ kcg_bool _159_SM1_reset_nxt;
  /* Main::SM1 */ SSM_TR_SM1 _160_SM1_fired;
  /* Main::SM1 */ SSM_ST_SM1 _161_SM1_state_nxt;
  /* Main::SM1 */ kcg_bool _162_SM1_reset_nxt;
  /* Main::SM1 */ SSM_TR_SM1 _163_SM1_fired;
  /* Main::SM1 */ SSM_TR_SM1 _123_SM1_fired;
  /* Main::SM1 */ kcg_bool _122_SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 _121_SM1_state_nxt;
  /* Main::MissionOngoing */ kcg_bool _120_MissionOngoing;
  /* Main::ChangeStage */ kcg_bool _119_ChangeStage;
  /* Main::StageFailed */ kcg_bool _118_StageFailed;
  /* Main::MissionSuccessful */ kcg_bool _117_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real _116_InclinationIncrement;
  /* Main::Acceleration */ kcg_int _115_Acceleration;
  /* Main::Fuel_Out */ kcg_int _114_Fuel_Out;
  /* Main::Destroyed_Label */ kcg_bool _113_Destroyed_Label;
  /* Main::PhF_Color */ kcg_int _112_PhF_Color;
  /* Main::PhF_Label */ T_String _111_PhF_Label;
  /* Main::Ph3_Color */ kcg_int _110_Ph3_Color;
  /* Main::Ph3_Label */ T_String _109_Ph3_Label;
  /* Main::Ph2_Color */ kcg_int _108_Ph2_Color;
  /* Main::Ph2_Label */ T_String _107_Ph2_Label;
  /* Main::Ph1_Color */ kcg_int _106_Ph1_Color;
  /* Main::Ph1_Label */ T_String _105_Ph1_Label;
  /* Main::Inclination_Out */ kcg_real _104_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real _103_Altitude_Out;
  /* Main::Speed_Out */ kcg_real _102_Speed_Out;
  /* Main::SM1::Phase2 */ kcg_bool br_3_guard_SM1_Phase2;
  /* Main::SM1::Phase2 */ kcg_bool br_2_guard_SM1_Phase2;
  /* Main::SM1::Phase2::_L58 */ kcg_bool _L58_SM1_Phase2;
  /* Main::SM1::Phase2::_L57 */ kcg_int _L57_SM1_Phase2;
  /* Main::SM1::Phase2::_L54 */ kcg_int _L54_SM1_Phase2;
  /* Main::SM1::Phase2::_L55 */ kcg_int _L55_SM1_Phase2;
  /* Main::SM1::Phase2::_L56 */ kcg_int _L56_SM1_Phase2;
  /* Main::SM1::Phase2::_L52 */ kcg_bool _L52_SM1_Phase2;
  /* Main::SM1::Phase2::_L50 */ kcg_bool _L50_SM1_Phase2;
  /* Main::SM1::Phase2::_L37 */ kcg_real _L37_SM1_Phase2;
  /* Main::SM1::Phase2::_L40 */ kcg_int _L40_SM1_Phase2;
  /* Main::SM1::Phase2::_L41 */ kcg_real _L41_SM1_Phase2;
  /* Main::SM1::Phase2::_L42 */ kcg_real _L42_SM1_Phase2;
  /* Main::SM1::Phase2::_L43 */ kcg_int _L43_SM1_Phase2;
  /* Main::SM1::Phase2::_L35 */ kcg_int _L35_SM1_Phase2;
  /* Main::SM1::Phase2::_L34 */ T_String _L34_SM1_Phase2;
  /* Main::SM1::Phase2::_L33 */ T_String _L33_SM1_Phase2;
  /* Main::SM1::Phase2::_L29 */ kcg_int _L29_SM1_Phase2;
  /* Main::SM1::Phase2::_L31 */ kcg_int _L31_SM1_Phase2;
  /* Main::SM1::Phase2::_L32 */ T_String _L32_SM1_Phase2;
  /* Main::SM1::Phase2::_L21 */ kcg_bool _L21_SM1_Phase2;
  /* Main::SM1::Phase2::_L22 */ kcg_real _L22_SM1_Phase2;
  /* Main::SM1::Phase2::_L23 */ kcg_real _L23_SM1_Phase2;
  /* Main::SM1::Phase2::_L24 */ kcg_real _L24_SM1_Phase2;
  /* Main::SM1::Phase2::_L25 */ kcg_real _L25_SM1_Phase2;
  /* Main::SM1::Phase2::_L26 */ kcg_real _L26_SM1_Phase2;
  /* Main::SM1::Phase2::_L20 */ kcg_int _L20_SM1_Phase2;
  /* Main::SM1::Phase2::IfBlock1 */ kcg_bool IfBlock1_clock_SM1_Phase2;
  /* Main::SM1::Phase2::IfBlock1::else::_L2 */ kcg_bool _L2_SM1_Phase2_IfBlock1;
  /* Main::SM1::Phase2::IfBlock1::else::_L1 */ kcg_int _L1_SM1_Phase2_IfBlock1;
  /* Main::SM1::Phase2::IfBlock1::else::_L4 */ kcg_bool _L4_SM1_Phase2_IfBlock1;
  /* Main::SM1::Phase2::IfBlock1::else::_L5 */ kcg_int _L5_SM1_Phase2_IfBlock1;
  /* Main::SM1::Phase2::IfBlock1::else::_L6 */ kcg_bool _L6_SM1_Phase2_IfBlock1;
  /* Main::SM1::Phase2::IfBlock1::else::_L7 */ kcg_int _L7_SM1_Phase2_IfBlock1;
  /* Main::SM1::Phase2::IfBlock1::else::_L10 */ kcg_bool _L10_SM1_Phase2_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _154_ChangeStage;
  /* Main::StageFailed */ kcg_bool _155_StageFailed;
  /* Main::SM1::Phase2::IfBlock1::then::_L9 */ kcg_bool _L9_SM1_Phase2_IfBlock1;
  /* Main::SM1::Phase2::IfBlock1::then::_L11 */ kcg_int _L11_SM1_Phase2_IfBlock1;
  /* Main::SM1::Phase2::IfBlock1::then::_L13 */ kcg_int _L13_SM1_Phase2_IfBlock1;
  /* Main::SM1::Phase2::IfBlock1::then::_L15 */ kcg_bool _L15_SM1_Phase2_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _156_ChangeStage;
  /* Main::StageFailed */ kcg_bool _157_StageFailed;
  /* Main::SM1 */ SSM_TR_SM1 _101_SM1_fired;
  /* Main::SM1 */ kcg_bool _100_SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 _99_SM1_state_nxt;
  /* Main::MissionOngoing */ kcg_bool _98_MissionOngoing;
  /* Main::ChangeStage */ kcg_bool _97_ChangeStage;
  /* Main::StageFailed */ kcg_bool _96_StageFailed;
  /* Main::MissionSuccessful */ kcg_bool _95_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real _94_InclinationIncrement;
  /* Main::Acceleration */ kcg_int _93_Acceleration;
  /* Main::Fuel_Out */ kcg_int _92_Fuel_Out;
  /* Main::Destroyed_Label */ kcg_bool _91_Destroyed_Label;
  /* Main::PhF_Color */ kcg_int _90_PhF_Color;
  /* Main::PhF_Label */ T_String _89_PhF_Label;
  /* Main::Ph3_Color */ kcg_int _88_Ph3_Color;
  /* Main::Ph3_Label */ T_String _87_Ph3_Label;
  /* Main::Ph2_Color */ kcg_int _86_Ph2_Color;
  /* Main::Ph2_Label */ T_String _85_Ph2_Label;
  /* Main::Ph1_Color */ kcg_int _84_Ph1_Color;
  /* Main::Ph1_Label */ T_String _83_Ph1_Label;
  /* Main::Inclination_Out */ kcg_real _82_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real _81_Altitude_Out;
  /* Main::Speed_Out */ kcg_real _80_Speed_Out;
  /* Main::SM1::AutoDestroy::_L51 */ kcg_bool _L51_SM1_AutoDestroy;
  /* Main::SM1::AutoDestroy::_L49 */ kcg_bool _L49_SM1_AutoDestroy;
  /* Main::SM1::AutoDestroy::_L35 */ kcg_int _L35_SM1_AutoDestroy;
  /* Main::SM1::AutoDestroy::_L36 */ T_String _L36_SM1_AutoDestroy;
  /* Main::SM1 */ SSM_TR_SM1 _79_SM1_fired;
  /* Main::SM1 */ kcg_bool _78_SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 _77_SM1_state_nxt;
  /* Main::MissionOngoing */ kcg_bool _76_MissionOngoing;
  /* Main::ChangeStage */ kcg_bool _75_ChangeStage;
  /* Main::StageFailed */ kcg_bool _74_StageFailed;
  /* Main::MissionSuccessful */ kcg_bool _73_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real _72_InclinationIncrement;
  /* Main::Acceleration */ kcg_int _71_Acceleration;
  /* Main::Fuel_Out */ kcg_int _70_Fuel_Out;
  /* Main::Destroyed_Label */ kcg_bool _69_Destroyed_Label;
  /* Main::PhF_Color */ kcg_int _68_PhF_Color;
  /* Main::PhF_Label */ T_String _67_PhF_Label;
  /* Main::Ph3_Color */ kcg_int _66_Ph3_Color;
  /* Main::Ph3_Label */ T_String _65_Ph3_Label;
  /* Main::Ph2_Color */ kcg_int _64_Ph2_Color;
  /* Main::Ph2_Label */ T_String _63_Ph2_Label;
  /* Main::Ph1_Color */ kcg_int _62_Ph1_Color;
  /* Main::Ph1_Label */ T_String _61_Ph1_Label;
  /* Main::Inclination_Out */ kcg_real _60_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real _59_Altitude_Out;
  /* Main::Speed_Out */ kcg_real _58_Speed_Out;
  /* Main::SM1::Phase3 */ kcg_bool br_3_guard_SM1_Phase3;
  /* Main::SM1::Phase3 */ kcg_bool br_2_guard_SM1_Phase3;
  /* Main::SM1::Phase3::_L56 */ kcg_bool _L56_SM1_Phase3;
  /* Main::SM1::Phase3::_L52 */ kcg_int _L52_SM1_Phase3;
  /* Main::SM1::Phase3::_L53 */ kcg_int _L53_SM1_Phase3;
  /* Main::SM1::Phase3::_L54 */ kcg_int _L54_SM1_Phase3;
  /* Main::SM1::Phase3::_L55 */ kcg_int _L55_SM1_Phase3;
  /* Main::SM1::Phase3::_L51 */ kcg_bool _L51_SM1_Phase3;
  /* Main::SM1::Phase3::_L49 */ kcg_bool _L49_SM1_Phase3;
  /* Main::SM1::Phase3::_L36 */ kcg_int _L36_SM1_Phase3;
  /* Main::SM1::Phase3::_L38 */ kcg_real _L38_SM1_Phase3;
  /* Main::SM1::Phase3::_L39 */ kcg_real _L39_SM1_Phase3;
  /* Main::SM1::Phase3::_L41 */ kcg_int _L41_SM1_Phase3;
  /* Main::SM1::Phase3::_L42 */ kcg_real _L42_SM1_Phase3;
  /* Main::SM1::Phase3::_L35 */ T_String _L35_SM1_Phase3;
  /* Main::SM1::Phase3::_L30 */ T_String _L30_SM1_Phase3;
  /* Main::SM1::Phase3::_L31 */ T_String _L31_SM1_Phase3;
  /* Main::SM1::Phase3::_L32 */ kcg_int _L32_SM1_Phase3;
  /* Main::SM1::Phase3::_L33 */ kcg_int _L33_SM1_Phase3;
  /* Main::SM1::Phase3::_L34 */ kcg_int _L34_SM1_Phase3;
  /* Main::SM1::Phase3::_L21 */ kcg_real _L21_SM1_Phase3;
  /* Main::SM1::Phase3::_L22 */ kcg_bool _L22_SM1_Phase3;
  /* Main::SM1::Phase3::_L23 */ kcg_real _L23_SM1_Phase3;
  /* Main::SM1::Phase3::_L24 */ kcg_real _L24_SM1_Phase3;
  /* Main::SM1::Phase3::_L25 */ kcg_real _L25_SM1_Phase3;
  /* Main::SM1::Phase3::_L26 */ kcg_real _L26_SM1_Phase3;
  /* Main::SM1::Phase3::_L20 */ kcg_int _L20_SM1_Phase3;
  /* Main::SM1::Phase3::IfBlock1 */ kcg_bool IfBlock1_clock_SM1_Phase3;
  /* Main::SM1::Phase3::IfBlock1::else::_L2 */ kcg_bool _L2_SM1_Phase3_IfBlock1;
  /* Main::SM1::Phase3::IfBlock1::else::_L1 */ kcg_int _L1_SM1_Phase3_IfBlock1;
  /* Main::SM1::Phase3::IfBlock1::else::_L4 */ kcg_bool _L4_SM1_Phase3_IfBlock1;
  /* Main::SM1::Phase3::IfBlock1::else::_L5 */ kcg_int _L5_SM1_Phase3_IfBlock1;
  /* Main::SM1::Phase3::IfBlock1::else::_L6 */ kcg_bool _L6_SM1_Phase3_IfBlock1;
  /* Main::SM1::Phase3::IfBlock1::else::_L8 */ kcg_int _L8_SM1_Phase3_IfBlock1;
  /* Main::SM1::Phase3::IfBlock1::else::_L10 */ kcg_bool _L10_SM1_Phase3_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _150_ChangeStage;
  /* Main::StageFailed */ kcg_bool _151_StageFailed;
  /* Main::SM1::Phase3::IfBlock1::then::_L9 */ kcg_bool _L9_SM1_Phase3_IfBlock1;
  /* Main::SM1::Phase3::IfBlock1::then::_L11 */ kcg_int _L11_SM1_Phase3_IfBlock1;
  /* Main::SM1::Phase3::IfBlock1::then::_L14 */ kcg_int _L14_SM1_Phase3_IfBlock1;
  /* Main::SM1::Phase3::IfBlock1::then::_L17 */ kcg_bool _L17_SM1_Phase3_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _152_ChangeStage;
  /* Main::StageFailed */ kcg_bool _153_StageFailed;
  /* Main::SM1 */ SSM_TR_SM1 _57_SM1_fired;
  /* Main::SM1 */ kcg_bool _56_SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 _55_SM1_state_nxt;
  /* Main::MissionOngoing */ kcg_bool _54_MissionOngoing;
  /* Main::ChangeStage */ kcg_bool _53_ChangeStage;
  /* Main::StageFailed */ kcg_bool _52_StageFailed;
  /* Main::MissionSuccessful */ kcg_bool _51_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real _50_InclinationIncrement;
  /* Main::Acceleration */ kcg_int _49_Acceleration;
  /* Main::Fuel_Out */ kcg_int _48_Fuel_Out;
  /* Main::Destroyed_Label */ kcg_bool _47_Destroyed_Label;
  /* Main::PhF_Color */ kcg_int _46_PhF_Color;
  /* Main::PhF_Label */ T_String _45_PhF_Label;
  /* Main::Ph3_Color */ kcg_int _44_Ph3_Color;
  /* Main::Ph3_Label */ T_String _43_Ph3_Label;
  /* Main::Ph2_Color */ kcg_int _42_Ph2_Color;
  /* Main::Ph2_Label */ T_String _41_Ph2_Label;
  /* Main::Ph1_Color */ kcg_int _40_Ph1_Color;
  /* Main::Ph1_Label */ T_String _39_Ph1_Label;
  /* Main::Inclination_Out */ kcg_real _38_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real _37_Altitude_Out;
  /* Main::Speed_Out */ kcg_real _36_Speed_Out;
  /* Main::SM1::Final */ kcg_bool br_3_guard_SM1_Final;
  /* Main::SM1::Final */ kcg_bool br_2_guard_SM1_Final;
  /* Main::SM1::Final::_L127 */ kcg_bool _L127_SM1_Final;
  /* Main::SM1::Final::_L123 */ kcg_int _L123_SM1_Final;
  /* Main::SM1::Final::_L124 */ kcg_int _L124_SM1_Final;
  /* Main::SM1::Final::_L125 */ kcg_int _L125_SM1_Final;
  /* Main::SM1::Final::_L126 */ kcg_int _L126_SM1_Final;
  /* Main::SM1::Final::_L122 */ kcg_int _L122_SM1_Final;
  /* Main::SM1::Final::_L121 */ T_String _L121_SM1_Final;
  /* Main::SM1::Final::_L84 */ kcg_bool _L84_SM1_Final;
  /* Main::SM1::Final::_L86 */ kcg_real _L86_SM1_Final;
  /* Main::SM1::Final::_L87 */ kcg_bool _L87_SM1_Final;
  /* Main::SM1::Final::_L88 */ kcg_real _L88_SM1_Final;
  /* Main::SM1::Final::_L89 */ kcg_bool _L89_SM1_Final;
  /* Main::SM1::Final::_L91 */ kcg_real _L91_SM1_Final;
  /* Main::SM1::Final::_L93 */ kcg_real _L93_SM1_Final;
  /* Main::SM1::Final::_L94 */ kcg_bool _L94_SM1_Final;
  /* Main::SM1::Final::_L95 */ kcg_int _L95_SM1_Final;
  /* Main::SM1::Final::_L96 */ kcg_int _L96_SM1_Final;
  /* Main::SM1::Final::_L97 */ kcg_int _L97_SM1_Final;
  /* Main::SM1::Final::_L98 */ kcg_int _L98_SM1_Final;
  /* Main::SM1::Final::_L99 */ kcg_bool _L99_SM1_Final;
  /* Main::SM1::Final::_L100 */ kcg_real _L100_SM1_Final;
  /* Main::SM1::Final::_L101 */ kcg_real _L101_SM1_Final;
  /* Main::SM1::Final::_L102 */ kcg_bool _L102_SM1_Final;
  /* Main::SM1::Final::_L103 */ kcg_int _L103_SM1_Final;
  /* Main::SM1::Final::_L106 */ kcg_real _L106_SM1_Final;
  /* Main::SM1::Final::_L107 */ kcg_real _L107_SM1_Final;
  /* Main::SM1::Final::_L108 */ kcg_int _L108_SM1_Final;
  /* Main::SM1::Final::_L109 */ kcg_real _L109_SM1_Final;
  /* Main::SM1::Final::_L110 */ kcg_real _L110_SM1_Final;
  /* Main::SM1::Final::_L111 */ kcg_int _L111_SM1_Final;
  /* Main::SM1::Final::_L112 */ kcg_real _L112_SM1_Final;
  /* Main::SM1::Final::_L82 */ kcg_bool _L82_SM1_Final;
  /* Main::SM1::Final::_L69 */ kcg_real _L69_SM1_Final;
  /* Main::SM1::Final::_L71 */ kcg_real _L71_SM1_Final;
  /* Main::SM1::Final::_L72 */ kcg_int _L72_SM1_Final;
  /* Main::SM1::Final::_L73 */ kcg_int _L73_SM1_Final;
  /* Main::SM1::Final::_L74 */ kcg_real _L74_SM1_Final;
  /* Main::SM1::Final::_L67 */ kcg_int _L67_SM1_Final;
  /* Main::SM1::Final::_L68 */ T_String _L68_SM1_Final;
  /* Main::SM1::Final::PhaseCompleted */ kcg_bool PhaseCompleted_SM1_Final;
  /* Main::SM1::Final::IfBlock1 */ kcg_bool IfBlock1_clock_SM1_Final;
  /* Main::SM1::Final::IfBlock1::else::_L2 */ kcg_bool _L2_SM1_Final_IfBlock1;
  /* Main::SM1::Final::IfBlock1::else::_L3 */ kcg_bool _L3_SM1_Final_IfBlock1;
  /* Main::SM1::Final::IfBlock1::else::_L4 */ kcg_bool _L4_SM1_Final_IfBlock1;
  /* Main::SM1::Final::IfBlock1::else::_L5 */ kcg_int _L5_SM1_Final_IfBlock1;
  /* Main::SM1::Final::IfBlock1::else::_L6 */ kcg_bool _L6_SM1_Final_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _146_ChangeStage;
  /* Main::StageFailed */ kcg_bool _147_StageFailed;
  /* Main::SM1::Final::IfBlock1::then::_L7 */ kcg_bool _L7_SM1_Final_IfBlock1;
  /* Main::SM1::Final::IfBlock1::then::_L8 */ kcg_bool _L8_SM1_Final_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _148_ChangeStage;
  /* Main::StageFailed */ kcg_bool _149_StageFailed;
  /* Main::SM1 */ SSM_TR_SM1 _35_SM1_fired;
  /* Main::SM1 */ kcg_bool _34_SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 _33_SM1_state_nxt;
  /* Main::MissionOngoing */ kcg_bool _32_MissionOngoing;
  /* Main::ChangeStage */ kcg_bool _31_ChangeStage;
  /* Main::StageFailed */ kcg_bool _30_StageFailed;
  /* Main::MissionSuccessful */ kcg_bool _29_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real _28_InclinationIncrement;
  /* Main::Acceleration */ kcg_int _27_Acceleration;
  /* Main::Fuel_Out */ kcg_int _26_Fuel_Out;
  /* Main::Destroyed_Label */ kcg_bool _25_Destroyed_Label;
  /* Main::PhF_Color */ kcg_int _24_PhF_Color;
  /* Main::PhF_Label */ T_String _23_PhF_Label;
  /* Main::Ph3_Color */ kcg_int _22_Ph3_Color;
  /* Main::Ph3_Label */ T_String _21_Ph3_Label;
  /* Main::Ph2_Color */ kcg_int _20_Ph2_Color;
  /* Main::Ph2_Label */ T_String _19_Ph2_Label;
  /* Main::Ph1_Color */ kcg_int _18_Ph1_Color;
  /* Main::Ph1_Label */ T_String _17_Ph1_Label;
  /* Main::Inclination_Out */ kcg_real _16_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real _15_Altitude_Out;
  /* Main::Speed_Out */ kcg_real _14_Speed_Out;
  /* Main::SM1::Ground::_L39 */ kcg_int _L39_SM1_Ground;
  /* Main::SM1::Ground::_L38 */ kcg_bool _L38_SM1_Ground;
  /* Main::SM1::Ground::_L31 */ kcg_bool _L31_SM1_Ground;
  /* Main::SM1::Ground::_L21 */ kcg_real _L21_SM1_Ground;
  /* Main::SM1::Ground::_L22 */ kcg_real _L22_SM1_Ground;
  /* Main::SM1::Ground::_L23 */ kcg_int _L23_SM1_Ground;
  /* Main::SM1::Ground::_L24 */ kcg_real _L24_SM1_Ground;
  /* Main::SM1::Ground::_L25 */ kcg_int _L25_SM1_Ground;
  /* Main::SM1::Ground::_L16 */ kcg_int _L16_SM1_Ground;
  /* Main::SM1::Ground::_L15 */ T_String _L15_SM1_Ground;
  /* Main::SM1::Ground::_L4 */ kcg_real _L4_SM1_Ground;
  /* Main::SM1::Ground::_L3 */ kcg_int _L3_SM1_Ground;
  /* Main::SM1 */ SSM_TR_SM1 SM1_fired;
  /* Main::SM1 */ kcg_bool SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 SM1_state_nxt;
  /* Main::MissionOngoing */ kcg_bool MissionOngoing;
  /* Main::ChangeStage */ kcg_bool ChangeStage;
  /* Main::StageFailed */ kcg_bool StageFailed;
  /* Main::MissionSuccessful */ kcg_bool MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real InclinationIncrement;
  /* Main::Acceleration */ kcg_int Acceleration;
  /* Main::Fuel_Out */ kcg_int Fuel_Out;
  /* Main::Destroyed_Label */ kcg_bool Destroyed_Label;
  /* Main::PhF_Color */ kcg_int PhF_Color;
  /* Main::PhF_Label */ T_String PhF_Label;
  /* Main::Ph3_Color */ kcg_int Ph3_Color;
  /* Main::Ph3_Label */ T_String Ph3_Label;
  /* Main::Ph2_Color */ kcg_int Ph2_Color;
  /* Main::Ph2_Label */ T_String Ph2_Label;
  /* Main::Ph1_Color */ kcg_int Ph1_Color;
  /* Main::Ph1_Label */ T_String Ph1_Label;
  /* Main::Inclination_Out */ kcg_real Inclination_Out;
  /* Main::Altitude_Out */ kcg_real Altitude_Out;
  /* Main::Speed_Out */ kcg_real Speed_Out;
  /* Main::SM1::Launched::_L8 */ kcg_bool _L8_SM1_Launched;
  /* Main::SM1::Launched::_L6 */ kcg_bool _L6_SM1_Launched;
  /* Main::SM1::Launched::_L5 */ kcg_int _L5_SM1_Launched;
  /* Main::SM1::Launched::_L4 */ T_String _L4_SM1_Launched;
  /* Main::SM1::Launched::_L1 */ kcg_bool _L1_SM1_Launched;
  /* Main::SM1 */ SSM_TR_SM1 _185_SM1_fired_strong;
  /* Main::SM1 */ kcg_bool _184_SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 _183_SM1_state_act;
  /* Main::SM1::Phase1 */ kcg_bool br_1_guard_SM1_Phase1;
  /* Main::SM1 */ SSM_TR_SM1 _182_SM1_fired_strong;
  /* Main::SM1 */ kcg_bool _181_SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 _180_SM1_state_act;
  /* Main::SM1::Phase2 */ kcg_bool br_1_guard_SM1_Phase2;
  /* Main::SM1 */ SSM_TR_SM1 _179_SM1_fired_strong;
  /* Main::SM1 */ kcg_bool _178_SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 _177_SM1_state_act;
  /* Main::SM1 */ SSM_TR_SM1 _176_SM1_fired_strong;
  /* Main::SM1 */ kcg_bool _175_SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 _174_SM1_state_act;
  /* Main::SM1::Phase3 */ kcg_bool br_1_guard_SM1_Phase3;
  /* Main::SM1 */ SSM_TR_SM1 _173_SM1_fired_strong;
  /* Main::SM1 */ kcg_bool _172_SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 _171_SM1_state_act;
  /* Main::SM1::Final */ kcg_bool br_1_guard_SM1_Final;
  /* Main::SM1 */ SSM_TR_SM1 _170_SM1_fired_strong;
  /* Main::SM1 */ kcg_bool _169_SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 _168_SM1_state_act;
  /* Main::SM1::Ground */ kcg_bool br_1_guard_SM1_Ground;
  /* Main::SM1 */ SSM_TR_SM1 SM1_fired_strong;
  /* Main::SM1 */ kcg_bool SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* Main::Fuel_Out */ kcg_int last_Fuel_Out;
  /* Main::Inclination_Out */ kcg_real last_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real last_Altitude_Out;
  /* Main::Speed_Out */ kcg_real last_Speed_Out;
  /* Main::MissionOngoing */ kcg_bool last_MissionOngoing;
  /* Main::MissionSuccessful */ kcg_bool last_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real last_InclinationIncrement;
  /* Main::Acceleration */ kcg_int last_Acceleration;
  /* Main::SM1 */ SSM_ST_SM1 SM1_state_sel;
  /* Main::SM1 */ SSM_ST_SM1 _188_SM1_state_act;
  /* Main::SM1 */ kcg_bool SM1_reset_sel;
  /* Main::SM1 */ kcg_bool SM1_reset_prv;
  /* Main::SM1 */ SSM_TR_SM1 _187_SM1_fired_strong;
  /* Main::SM1 */ SSM_TR_SM1 _186_SM1_fired;
  /* Main::Speed */ kcg_int Speed;
  /* Main::Altitude */ kcg_int Altitude;
  /* Main::Inclination */ kcg_real Inclination;
  /* Main::Destroyed */ kcg_bool Destroyed;
  /* Main::MissionStart */ kcg_bool MissionStart;
  /* Main::Latitude */ kcg_real Latitude;
  /* Main::Longitude */ kcg_real Longitude;
  /* Main::AutomaticMode */ kcg_bool AutomaticMode;
  /* Main::StageFailed */ kcg_bool _191_StageFailed;
  /* Main::ChangeStage */ kcg_bool _190_ChangeStage;
  /* Main::_L2 */ kcg_bool _L2;
  /* Main::_L4 */ kcg_bool _L4;
  /* Main::_L1 */ kcg_int _L1;
  /* Main::_L44 */ kcg_int _L44;
  /* Main::_L45 */ kcg_int _L45;
  /* Main::_L53 */ kcg_real _L53;
  /* Main::_L61 */ kcg_real _L61;
  /* Main::_L60 */ kcg_real _L60;
  /* Main::_L64 */ kcg_int _L64;
  /* Main::_L69 */ kcg_int _L69;
  /* Main::_L70 */ kcg_int _L70;
  /* Main::_L77 */ kcg_real _L77;
  /* Main::_L79 */ kcg_real _L79;
  /* Main::_L88 */ kcg_bool _L88;
  /* Main::_L89 */ kcg_real _L89;
  /* Main::_L90 */ kcg_bool _L90;
  /* Main::_L91 */ kcg_real _L91;
  /* Main::_L92 */ kcg_bool _L92;
  /* Main::_L93 */ kcg_bool _L93;
  /* Main::_L96 */ kcg_bool _L96;
  /* Main::_L104 */ kcg_real _L104;
  /* Main::_L105 */ kcg_real _L105;
  /* Main::_L109 */ kcg_bool _L109;
  /* Main::_L107 */ kcg_bool _L107;
  /* Main::_L110 */ kcg_int _L110;
  /* Main::_L111 */ kcg_bool _L111;
  /* Main::_L113 */ kcg_bool _L113;
  /* Main::_L114 */ kcg_int _L114;
  /* Main::_L115 */ kcg_bool _L115;
  /* Main::_L116 */ kcg_bool _L116;
  /* Main::_L117 */ kcg_bool _L117;
  /* Main::_L118 */ kcg_bool _L118;
  /* Main::_L119 */ kcg_bool _L119;
  /* Main::_L121 */ kcg_bool _L121;
  /* Main::_L122 */ kcg_real _L122;
  /* Main::_L123 */ kcg_real _L123;
  /* Main::_L125 */ kcg_bool _L125;
  /* Main::_L132 */ kcg_bool _L132;
  /* Main::_L133 */ kcg_bool _L133;
  /* Main::_L134 */ kcg_bool _L134;
  /* Main::_L135 */ kcg_bool _L135;
  /* Main::_L137 */ kcg_bool _L137;
  
  if (outC->init4) {
    SM1_state_sel = SSM_st_Ground_SM1;
  }
  else {
    SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_Launched_SM1 :
      SM1_state_act = SSM_st_Launched_SM1;
      break;
    
  }
  _L89 = STARTING_LATITUDE;
  _L6_1 = STARTING_LATITUDE;
  Latitude_1 = _L6_1;
  _L60 = Latitude_1;
  Latitude = _L60;
  _L104 = Latitude;
  _L88 = _L89 == _L104;
  _L7_1 = STARTING_LONGITUDE;
  Longitude_1 = _L7_1;
  _L61 = Longitude_1;
  Longitude = _L61;
  _L105 = Longitude;
  _L91 = STARTING_LONGITUDE;
  _L90 = _L105 == _L91;
  _L92 = _L88 & _L90;
  _L125 = inC->EnableRocketLaunch;
  _L93 = _L92 & _L125;
  MissionStart = _L93;
  switch (SM1_state_sel) {
    case SSM_st_Ground_SM1 :
      br_1_guard_SM1_Ground = MissionStart;
      if (br_1_guard_SM1_Ground) {
        _168_SM1_state_act = SSM_st_Phase1_SM1;
      }
      else {
        _168_SM1_state_act = SSM_st_Ground_SM1;
      }
      break;
    
  }
  _L96 = inC->AutoDestruct;
  Destroyed = _L96;
  switch (SM1_state_sel) {
    case SSM_st_Phase1_SM1 :
      br_1_guard_SM1_Phase1 = Destroyed;
      if (br_1_guard_SM1_Phase1) {
        _183_SM1_state_act = SSM_st_AutoDestroy_SM1;
      }
      else {
        _183_SM1_state_act = SSM_st_Phase1_SM1;
      }
      _188_SM1_state_act = _183_SM1_state_act;
      break;
    case SSM_st_Phase2_SM1 :
      br_1_guard_SM1_Phase2 = Destroyed;
      if (br_1_guard_SM1_Phase2) {
        _180_SM1_state_act = SSM_st_AutoDestroy_SM1;
      }
      else {
        _180_SM1_state_act = SSM_st_Phase2_SM1;
      }
      _188_SM1_state_act = _180_SM1_state_act;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _177_SM1_state_act = SSM_st_AutoDestroy_SM1;
      _188_SM1_state_act = _177_SM1_state_act;
      break;
    case SSM_st_Phase3_SM1 :
      br_1_guard_SM1_Phase3 = Destroyed;
      if (br_1_guard_SM1_Phase3) {
        _174_SM1_state_act = SSM_st_AutoDestroy_SM1;
      }
      else {
        _174_SM1_state_act = SSM_st_Phase3_SM1;
      }
      _188_SM1_state_act = _174_SM1_state_act;
      break;
    case SSM_st_Final_SM1 :
      br_1_guard_SM1_Final = Destroyed;
      if (br_1_guard_SM1_Final) {
        _171_SM1_state_act = SSM_st_AutoDestroy_SM1;
      }
      else {
        _171_SM1_state_act = SSM_st_Final_SM1;
      }
      _188_SM1_state_act = _171_SM1_state_act;
      break;
    case SSM_st_Ground_SM1 :
      _188_SM1_state_act = _168_SM1_state_act;
      break;
    case SSM_st_Launched_SM1 :
      _188_SM1_state_act = SM1_state_act;
      break;
    
  }
  _L110 = inC->Manual_Override;
  _L114 = A661_UNSELECTED;
  _L109 = _L110 == _L114;
  AutomaticMode = _L109;
  switch (_188_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      IfBlock1_clock_SM1_Phase1 = AutomaticMode;
      break;
    
  }
  if (outC->init4) {
    _L6_6 = 0.0;
  }
  else {
    _L6_6 = outC->_L19_6;
  }
  _L18_6 = (kcg_int) _L6_6;
  Altitude_6 = _L18_6;
  _L69 = Altitude_6;
  Altitude = _L69;
  switch (_188_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      if (IfBlock1_clock_SM1_Phase1) {
      }
      else {
        _L1_SM1_Phase1_IfBlock1 = Altitude;
        _L3_SM1_Phase1_IfBlock1 = PHASE1_MAX_ALTITUDE;
        _L2_SM1_Phase1_IfBlock1 = _L1_SM1_Phase1_IfBlock1 >
          _L3_SM1_Phase1_IfBlock1;
        StartTimer_1 = _L2_SM1_Phase1_IfBlock1;
        IfBlock1_clock_1 = StartTimer_1;
      }
      break;
    
  }
  if (outC->init4) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  switch (SM1_state_sel) {
    case SSM_st_Phase1_SM1 :
      _184_SM1_reset_act = br_1_guard_SM1_Phase1;
      outC->SM1_reset_act = _184_SM1_reset_act;
      break;
    case SSM_st_Phase2_SM1 :
      _181_SM1_reset_act = br_1_guard_SM1_Phase2;
      outC->SM1_reset_act = _181_SM1_reset_act;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _178_SM1_reset_act = kcg_false;
      outC->SM1_reset_act = _178_SM1_reset_act;
      break;
    case SSM_st_Phase3_SM1 :
      _175_SM1_reset_act = br_1_guard_SM1_Phase3;
      outC->SM1_reset_act = _175_SM1_reset_act;
      break;
    case SSM_st_Final_SM1 :
      _172_SM1_reset_act = br_1_guard_SM1_Final;
      outC->SM1_reset_act = _172_SM1_reset_act;
      break;
    case SSM_st_Ground_SM1 :
      _169_SM1_reset_act = br_1_guard_SM1_Ground;
      outC->SM1_reset_act = _169_SM1_reset_act;
      break;
    case SSM_st_Launched_SM1 :
      SM1_reset_act = kcg_false;
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  switch (_188_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      if (outC->SM1_reset_act) {
        outC->init3 = kcg_true;
      }
      break;
    case SSM_st_Phase2_SM1 :
      IfBlock1_clock_SM1_Phase2 = AutomaticMode;
      if (IfBlock1_clock_SM1_Phase2) {
      }
      else {
        _L1_SM1_Phase2_IfBlock1 = Altitude;
        _L7_SM1_Phase2_IfBlock1 = PHASE2_MAX_ALTITUDE;
        _L2_SM1_Phase2_IfBlock1 = _L1_SM1_Phase2_IfBlock1 >
          _L7_SM1_Phase2_IfBlock1;
        StartTimer_2 = _L2_SM1_Phase2_IfBlock1;
        IfBlock1_clock_2 = StartTimer_2;
      }
      break;
    
  }
  if (outC->init4) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  switch (SM1_state_sel) {
    case SSM_st_Phase2_SM1 :
      if (SM1_reset_sel) {
        outC->init2 = kcg_true;
      }
      break;
    
  }
  switch (_188_SM1_state_act) {
    case SSM_st_Phase3_SM1 :
      IfBlock1_clock_SM1_Phase3 = AutomaticMode;
      if (IfBlock1_clock_SM1_Phase3) {
      }
      else {
        _L1_SM1_Phase3_IfBlock1 = Altitude;
        _L8_SM1_Phase3_IfBlock1 = PHASE3_MAX_ALTITUDE;
        _L2_SM1_Phase3_IfBlock1 = _L1_SM1_Phase3_IfBlock1 >
          _L8_SM1_Phase3_IfBlock1;
        StartTimer_3 = _L2_SM1_Phase3_IfBlock1;
        IfBlock1_clock_3 = StartTimer_3;
      }
      break;
    
  }
  switch (SM1_state_sel) {
    case SSM_st_Phase3_SM1 :
      if (SM1_reset_sel) {
        outC->init1 = kcg_true;
      }
      break;
    
  }
  switch (_188_SM1_state_act) {
    case SSM_st_Final_SM1 :
      IfBlock1_clock_SM1_Final = AutomaticMode;
      break;
    
  }
  if (outC->init4) {
    _L5_1 = 0.0;
  }
  else {
    _L5_1 = outC->_L7_1;
  }
  _L11_1 = TARGET_ORBIT_INCLINATION;
  _L10_1 = _L5_1 > _L11_1;
  if (_L10_1) {
    _L9_1 = _L11_1;
  }
  else {
    _L9_1 = _L5_1;
  }
  Inclination_1 = _L9_1;
  _L53 = Inclination_1;
  Inclination = _L53;
  switch (_188_SM1_state_act) {
    case SSM_st_Final_SM1 :
      _L100_SM1_Final = Inclination;
      _L93_SM1_Final = TARGET_ORBIT_INCLINATION;
      _L84_SM1_Final = _L100_SM1_Final == _L93_SM1_Final;
      _L103_SM1_Final = Altitude;
      _L95_SM1_Final = TARGET_ORBIT_ALTITUDE;
      _L102_SM1_Final = _L103_SM1_Final > _L95_SM1_Final;
      break;
    
  }
  if (outC->init4) {
    _L4_1 = 0;
  }
  else {
    _L4_1 = outC->_L6_1;
  }
  Speed_1 = _L4_1;
  _L45 = Speed_1;
  Speed = _L45;
  switch (_188_SM1_state_act) {
    case SSM_st_Final_SM1 :
      _L111_SM1_Final = Speed;
      _L108_SM1_Final = TARGET_ORBIT_SPEED;
      _L89_SM1_Final = _L111_SM1_Final > _L108_SM1_Final;
      _L87_SM1_Final = _L102_SM1_Final & _L89_SM1_Final;
      _L99_SM1_Final = _L84_SM1_Final & _L87_SM1_Final;
      PhaseCompleted_SM1_Final = _L99_SM1_Final;
      if (IfBlock1_clock_SM1_Final) {
      }
      else {
        _L4_SM1_Final_IfBlock1 = PhaseCompleted_SM1_Final;
        StartTimer_4 = _L4_SM1_Final_IfBlock1;
        IfBlock1_clock_4 = StartTimer_4;
      }
      break;
    
  }
  switch (SM1_state_sel) {
    case SSM_st_Final_SM1 :
      if (SM1_reset_sel) {
        outC->init = kcg_true;
      }
      break;
    
  }
  _L79 = Inclination;
  Inclination_6 = _L79;
  switch (_188_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      _L76_SM1_Phase1 = 0;
      Min_Altitude_2 = _L76_SM1_Phase1;
      _L75_SM1_Phase1 = PHASE1_MAX_ALTITUDE;
      Max_Altitude_2 = _L75_SM1_Phase1;
      if (IfBlock1_clock_SM1_Phase1) {
      }
      else {
        _L5_SM1_Phase1_IfBlock1 = 10;
        Count_1 = _L5_SM1_Phase1_IfBlock1;
      }
      break;
    case SSM_st_Phase2_SM1 :
      _L55_SM1_Phase2 = PHASE1_MAX_ALTITUDE;
      Min_Altitude_3 = _L55_SM1_Phase2;
      _L57_SM1_Phase2 = PHASE2_MAX_ALTITUDE;
      Max_Altitude_3 = _L57_SM1_Phase2;
      if (IfBlock1_clock_SM1_Phase2) {
      }
      else {
        _L5_SM1_Phase2_IfBlock1 = 10;
        Count_2 = _L5_SM1_Phase2_IfBlock1;
      }
      break;
    case SSM_st_Phase3_SM1 :
      _L52_SM1_Phase3 = PHASE2_MAX_ALTITUDE;
      Min_Altitude_4 = _L52_SM1_Phase3;
      _L54_SM1_Phase3 = PHASE3_MAX_ALTITUDE;
      Max_Altitude_4 = _L54_SM1_Phase3;
      if (IfBlock1_clock_SM1_Phase3) {
      }
      else {
        _L5_SM1_Phase3_IfBlock1 = 10;
        Count_3 = _L5_SM1_Phase3_IfBlock1;
      }
      break;
    case SSM_st_Final_SM1 :
      _L123_SM1_Final = PHASE3_MAX_ALTITUDE;
      Min_Altitude_5 = _L123_SM1_Final;
      _L125_SM1_Final = TARGET_ORBIT_ALTITUDE;
      Max_Altitude_5 = _L125_SM1_Final;
      if (IfBlock1_clock_SM1_Final) {
      }
      else {
        _L5_SM1_Final_IfBlock1 = 10;
        Count_4 = _L5_SM1_Final_IfBlock1;
      }
      break;
    
  }
  last_Fuel_Out = outC->Fuel_Out;
  last_Inclination_Out = outC->Inclination_Out;
  last_Altitude_Out = outC->Altitude_Out;
  last_Speed_Out = outC->Speed_Out;
  last_MissionOngoing = outC->MissionOngoing;
  last_MissionSuccessful = outC->MissionSuccessful;
  last_InclinationIncrement = outC->InclinationIncrement;
  last_Acceleration = outC->Acceleration;
  _L137 = A661_FALSE;
  switch (_188_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      _L70_SM1_Phase1 = A661_FALSE;
      _139_MissionSuccessful = _L70_SM1_Phase1;
      outC->MissionSuccessful = _139_MissionSuccessful;
      break;
    case SSM_st_Phase2_SM1 :
      _L50_SM1_Phase2 = A661_FALSE;
      _117_MissionSuccessful = _L50_SM1_Phase2;
      outC->MissionSuccessful = _117_MissionSuccessful;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _L49_SM1_AutoDestroy = A661_FALSE;
      _95_MissionSuccessful = _L49_SM1_AutoDestroy;
      outC->MissionSuccessful = _95_MissionSuccessful;
      break;
    case SSM_st_Phase3_SM1 :
      _L49_SM1_Phase3 = A661_FALSE;
      _73_MissionSuccessful = _L49_SM1_Phase3;
      outC->MissionSuccessful = _73_MissionSuccessful;
      break;
    case SSM_st_Final_SM1 :
      _51_MissionSuccessful = last_MissionSuccessful;
      outC->MissionSuccessful = _51_MissionSuccessful;
      break;
    case SSM_st_Ground_SM1 :
      _L31_SM1_Ground = A661_FALSE;
      _29_MissionSuccessful = _L31_SM1_Ground;
      outC->MissionSuccessful = _29_MissionSuccessful;
      break;
    case SSM_st_Launched_SM1 :
      _L8_SM1_Launched = A661_TRUE;
      MissionSuccessful = _L8_SM1_Launched;
      outC->MissionSuccessful = MissionSuccessful;
      break;
    
  }
  _L135 = outC->MissionSuccessful;
  switch (_188_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      _L78_SM1_Phase1 = A661_TRUE;
      _142_MissionOngoing = _L78_SM1_Phase1;
      outC->MissionOngoing = _142_MissionOngoing;
      break;
    case SSM_st_Phase2_SM1 :
      _L58_SM1_Phase2 = A661_TRUE;
      _120_MissionOngoing = _L58_SM1_Phase2;
      outC->MissionOngoing = _120_MissionOngoing;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _98_MissionOngoing = last_MissionOngoing;
      outC->MissionOngoing = _98_MissionOngoing;
      break;
    case SSM_st_Phase3_SM1 :
      _L56_SM1_Phase3 = A661_TRUE;
      _76_MissionOngoing = _L56_SM1_Phase3;
      outC->MissionOngoing = _76_MissionOngoing;
      break;
    case SSM_st_Final_SM1 :
      _L127_SM1_Final = A661_TRUE;
      _54_MissionOngoing = _L127_SM1_Final;
      outC->MissionOngoing = _54_MissionOngoing;
      break;
    case SSM_st_Ground_SM1 :
      _32_MissionOngoing = _L31_SM1_Ground;
      outC->MissionOngoing = _32_MissionOngoing;
      break;
    case SSM_st_Launched_SM1 :
      _L6_SM1_Launched = A661_FALSE;
      MissionOngoing = _L6_SM1_Launched;
      outC->MissionOngoing = MissionOngoing;
      break;
    
  }
  _L133 = outC->MissionOngoing;
  _L115 = Destroyed;
  switch (_188_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      if (IfBlock1_clock_SM1_Phase1) {
        _L15_SM1_Phase1_IfBlock1 = A661_FALSE;
        _167_StageFailed = _L15_SM1_Phase1_IfBlock1;
        _140_StageFailed = _167_StageFailed;
      }
      else {
        if (IfBlock1_clock_1) {
          if (outC->init3) {
            _L2_1_IfBlock1 = 0;
          }
          else {
            _L2_1_IfBlock1 = outC->_L5_1_IfBlock1;
          }
          _L4_1_IfBlock1 = 1;
          outC->_L5_1_IfBlock1 = _L2_1_IfBlock1 + _L4_1_IfBlock1;
          _L1_1_IfBlock1 = Count_1;
          _L3_110_IfBlock1 = outC->_L5_1_IfBlock1 >= _L1_1_IfBlock1;
          _11_CountFinished_1 = _L3_110_IfBlock1;
          _12_CountFinished_1 = _11_CountFinished_1;
        }
        else {
          _L3_1_IfBlock1 = A661_FALSE;
          CountFinished_1 = _L3_1_IfBlock1;
          _12_CountFinished_1 = CountFinished_1;
        }
        _L4_SM1_Phase1_IfBlock1 = _12_CountFinished_1;
        _L6_SM1_Phase1_IfBlock1 = _L2_SM1_Phase1_IfBlock1 &
          _L4_SM1_Phase1_IfBlock1;
        _165_StageFailed = _L6_SM1_Phase1_IfBlock1;
        _140_StageFailed = _165_StageFailed;
      }
      _191_StageFailed = _140_StageFailed;
      break;
    case SSM_st_Phase2_SM1 :
      if (IfBlock1_clock_SM1_Phase2) {
        _L15_SM1_Phase2_IfBlock1 = A661_FALSE;
        _157_StageFailed = _L15_SM1_Phase2_IfBlock1;
        _118_StageFailed = _157_StageFailed;
      }
      else {
        if (IfBlock1_clock_2) {
          if (outC->init2) {
            _L2_2_IfBlock1 = 0;
          }
          else {
            _L2_2_IfBlock1 = outC->_L5_2_IfBlock1;
          }
          _L4_2_IfBlock1 = 1;
          outC->_L5_2_IfBlock1 = _L2_2_IfBlock1 + _L4_2_IfBlock1;
          _L1_2_IfBlock1 = Count_2;
          _L3_27_IfBlock1 = outC->_L5_2_IfBlock1 >= _L1_2_IfBlock1;
          _8_CountFinished_2 = _L3_27_IfBlock1;
          _9_CountFinished_2 = _8_CountFinished_2;
        }
        else {
          _L3_2_IfBlock1 = A661_FALSE;
          CountFinished_2 = _L3_2_IfBlock1;
          _9_CountFinished_2 = CountFinished_2;
        }
        _L4_SM1_Phase2_IfBlock1 = _9_CountFinished_2;
        _L6_SM1_Phase2_IfBlock1 = _L2_SM1_Phase2_IfBlock1 &
          _L4_SM1_Phase2_IfBlock1;
        _155_StageFailed = _L6_SM1_Phase2_IfBlock1;
        _118_StageFailed = _155_StageFailed;
      }
      _191_StageFailed = _118_StageFailed;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _96_StageFailed = _L49_SM1_AutoDestroy;
      _191_StageFailed = _96_StageFailed;
      break;
    case SSM_st_Phase3_SM1 :
      if (IfBlock1_clock_SM1_Phase3) {
        _L17_SM1_Phase3_IfBlock1 = A661_FALSE;
        _153_StageFailed = _L17_SM1_Phase3_IfBlock1;
        _74_StageFailed = _153_StageFailed;
      }
      else {
        if (IfBlock1_clock_3) {
          if (outC->init1) {
            _L2_3_IfBlock1 = 0;
          }
          else {
            _L2_3_IfBlock1 = outC->_L5_3_IfBlock1;
          }
          _L4_3_IfBlock1 = 1;
          outC->_L5_3_IfBlock1 = _L2_3_IfBlock1 + _L4_3_IfBlock1;
          _L1_3_IfBlock1 = Count_3;
          _L3_34_IfBlock1 = outC->_L5_3_IfBlock1 >= _L1_3_IfBlock1;
          _5_CountFinished_3 = _L3_34_IfBlock1;
          _6_CountFinished_3 = _5_CountFinished_3;
        }
        else {
          _L3_3_IfBlock1 = A661_FALSE;
          CountFinished_3 = _L3_3_IfBlock1;
          _6_CountFinished_3 = CountFinished_3;
        }
        _L4_SM1_Phase3_IfBlock1 = _6_CountFinished_3;
        _L6_SM1_Phase3_IfBlock1 = _L2_SM1_Phase3_IfBlock1 &
          _L4_SM1_Phase3_IfBlock1;
        _151_StageFailed = _L6_SM1_Phase3_IfBlock1;
        _74_StageFailed = _151_StageFailed;
      }
      _191_StageFailed = _74_StageFailed;
      break;
    case SSM_st_Final_SM1 :
      if (IfBlock1_clock_SM1_Final) {
        _L8_SM1_Final_IfBlock1 = A661_FALSE;
        _149_StageFailed = _L8_SM1_Final_IfBlock1;
        _52_StageFailed = _149_StageFailed;
      }
      else {
        if (IfBlock1_clock_4) {
          if (outC->init) {
            _L2_4_IfBlock1 = 0;
          }
          else {
            _L2_4_IfBlock1 = outC->_L5_4_IfBlock1;
          }
          _L4_4_IfBlock1 = 1;
          outC->_L5_4_IfBlock1 = _L2_4_IfBlock1 + _L4_4_IfBlock1;
          _L1_4_IfBlock1 = Count_4;
          _L3_41_IfBlock1 = outC->_L5_4_IfBlock1 >= _L1_4_IfBlock1;
          _2_CountFinished_4 = _L3_41_IfBlock1;
          _3_CountFinished_4 = _2_CountFinished_4;
        }
        else {
          _L3_4_IfBlock1 = A661_FALSE;
          CountFinished_4 = _L3_4_IfBlock1;
          _3_CountFinished_4 = CountFinished_4;
        }
        _L3_SM1_Final_IfBlock1 = _3_CountFinished_4;
        _L6_SM1_Final_IfBlock1 = _L4_SM1_Final_IfBlock1 &
          _L3_SM1_Final_IfBlock1;
        _147_StageFailed = _L6_SM1_Final_IfBlock1;
        _52_StageFailed = _147_StageFailed;
      }
      _191_StageFailed = _52_StageFailed;
      break;
    case SSM_st_Ground_SM1 :
      _30_StageFailed = _L31_SM1_Ground;
      _191_StageFailed = _30_StageFailed;
      break;
    case SSM_st_Launched_SM1 :
      StageFailed = _L6_SM1_Launched;
      _191_StageFailed = StageFailed;
      break;
    
  }
  _L117 = _191_StageFailed;
  _L116 = _L115 | _L117;
  _L132 = _L133 & _L116;
  if (_L135) {
    _L134 = _L137;
  }
  else {
    _L134 = _L132;
  }
  _L123 = Longitude;
  _L122 = Latitude;
  _L121 = MissionStart;
  outC->RocketLaunch = _L121;
  _L5_8 = A661_FALSE;
  if (outC->init4) {
    _L3_8 = _L5_8;
  }
  else {
    _L3_8 = outC->_L2_8;
  }
  Output1_8 = _L3_8;
  _L118 = Output1_8;
  _L119 = !_L118;
  outC->ControlCenterStatus = _L119;
  outC->RocketDestroy = _L134;
  _L113 = outC->MissionSuccessful;
  outC->SatLaunched = _L113;
  _L111 = AutomaticMode;
  _L107 = !_L111;
  outC->Manual_Txt_En = _L107;
  outC->Auto_Txt_En = _L111;
  switch (_188_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      _L56_SM1_Phase1 = Inclination;
      _L50_SM1_Phase1 = INCLINATION_PH1;
      _L53_SM1_Phase1 = _L56_SM1_Phase1 < _L50_SM1_Phase1;
      _L52_SM1_Phase1 = 0.3;
      _L51_SM1_Phase1 = 0.0;
      if (_L53_SM1_Phase1) {
        _L54_SM1_Phase1 = _L52_SM1_Phase1;
      }
      else {
        _L54_SM1_Phase1 = _L51_SM1_Phase1;
      }
      _138_InclinationIncrement = _L54_SM1_Phase1;
      outC->InclinationIncrement = _138_InclinationIncrement;
      break;
    case SSM_st_Phase2_SM1 :
      _L25_SM1_Phase2 = Inclination;
      _L23_SM1_Phase2 = INCLINATION_PH2;
      _L21_SM1_Phase2 = _L25_SM1_Phase2 < _L23_SM1_Phase2;
      _L24_SM1_Phase2 = 0.3;
      _L22_SM1_Phase2 = 0.0;
      if (_L21_SM1_Phase2) {
        _L26_SM1_Phase2 = _L24_SM1_Phase2;
      }
      else {
        _L26_SM1_Phase2 = _L22_SM1_Phase2;
      }
      _116_InclinationIncrement = _L26_SM1_Phase2;
      outC->InclinationIncrement = _116_InclinationIncrement;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _94_InclinationIncrement = last_InclinationIncrement;
      outC->InclinationIncrement = _94_InclinationIncrement;
      break;
    case SSM_st_Phase3_SM1 :
      _L26_SM1_Phase3 = Inclination;
      _L24_SM1_Phase3 = INCLINATION_PH3;
      _L22_SM1_Phase3 = _L26_SM1_Phase3 < _L24_SM1_Phase3;
      _L25_SM1_Phase3 = 0.7;
      _L23_SM1_Phase3 = 0.0;
      if (_L22_SM1_Phase3) {
        _L21_SM1_Phase3 = _L25_SM1_Phase3;
      }
      else {
        _L21_SM1_Phase3 = _L23_SM1_Phase3;
      }
      _72_InclinationIncrement = _L21_SM1_Phase3;
      outC->InclinationIncrement = _72_InclinationIncrement;
      break;
    case SSM_st_Final_SM1 :
      _L101_SM1_Final = Inclination;
      _L86_SM1_Final = TARGET_ORBIT_INCLINATION;
      _L110_SM1_Final = 0.0;
      _L112_SM1_Final = 6.0;
      if (_L102_SM1_Final) {
        _L106_SM1_Final = _L110_SM1_Final;
      }
      else {
        _L106_SM1_Final = _L112_SM1_Final;
      }
      _L107_SM1_Final = _L86_SM1_Final - _L106_SM1_Final;
      _L94_SM1_Final = _L101_SM1_Final < _L107_SM1_Final;
      _L88_SM1_Final = 3.0;
      _L109_SM1_Final = 0.0;
      if (_L94_SM1_Final) {
        _L91_SM1_Final = _L88_SM1_Final;
      }
      else {
        _L91_SM1_Final = _L109_SM1_Final;
      }
      _50_InclinationIncrement = _L91_SM1_Final;
      outC->InclinationIncrement = _50_InclinationIncrement;
      break;
    case SSM_st_Ground_SM1 :
      _L4_SM1_Ground = INCLINATION_NONE;
      _28_InclinationIncrement = _L4_SM1_Ground;
      outC->InclinationIncrement = _28_InclinationIncrement;
      break;
    case SSM_st_Launched_SM1 :
      InclinationIncrement = last_InclinationIncrement;
      outC->InclinationIncrement = InclinationIncrement;
      break;
    
  }
  _L77 = outC->InclinationIncrement;
  _L70 = Speed;
  switch (_188_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      _L55_SM1_Phase1 = ACCELERATION_PH1;
      _137_Acceleration = _L55_SM1_Phase1;
      outC->Acceleration = _137_Acceleration;
      break;
    case SSM_st_Phase2_SM1 :
      _L20_SM1_Phase2 = ACCELERATION_PH2;
      _115_Acceleration = _L20_SM1_Phase2;
      outC->Acceleration = _115_Acceleration;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _93_Acceleration = last_Acceleration;
      outC->Acceleration = _93_Acceleration;
      break;
    case SSM_st_Phase3_SM1 :
      _L20_SM1_Phase3 = ACCELERATION_PH3;
      _71_Acceleration = _L20_SM1_Phase3;
      outC->Acceleration = _71_Acceleration;
      break;
    case SSM_st_Final_SM1 :
      _L97_SM1_Final = ACCELERATION_NONE;
      _L98_SM1_Final = ACCELERATION_PH4;
      if (_L89_SM1_Final) {
        _L96_SM1_Final = _L97_SM1_Final;
      }
      else {
        _L96_SM1_Final = _L98_SM1_Final;
      }
      _49_Acceleration = _L96_SM1_Final;
      outC->Acceleration = _49_Acceleration;
      break;
    case SSM_st_Ground_SM1 :
      _L3_SM1_Ground = ACCELERATION_NONE;
      _27_Acceleration = _L3_SM1_Ground;
      outC->Acceleration = _27_Acceleration;
      break;
    case SSM_st_Launched_SM1 :
      Acceleration = last_Acceleration;
      outC->Acceleration = Acceleration;
      break;
    
  }
  _L64 = outC->Acceleration;
  outC->Latitude_Out = _L122;
  outC->Longitude_Out = _L123;
  switch (SM1_state_sel) {
    case SSM_st_Phase1_SM1 :
      if (br_1_guard_SM1_Phase1) {
        _185_SM1_fired_strong = SSM_TR_Phase1_1_SM1;
      }
      else {
        _185_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _187_SM1_fired_strong = _185_SM1_fired_strong;
      break;
    case SSM_st_Phase2_SM1 :
      if (br_1_guard_SM1_Phase2) {
        _182_SM1_fired_strong = SSM_TR_Phase2_1_SM1;
      }
      else {
        _182_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _187_SM1_fired_strong = _182_SM1_fired_strong;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _179_SM1_fired_strong = SSM_TR_no_trans_SM1;
      _187_SM1_fired_strong = _179_SM1_fired_strong;
      break;
    case SSM_st_Phase3_SM1 :
      if (br_1_guard_SM1_Phase3) {
        _176_SM1_fired_strong = SSM_TR_Phase3_1_SM1;
      }
      else {
        _176_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _187_SM1_fired_strong = _176_SM1_fired_strong;
      break;
    case SSM_st_Final_SM1 :
      if (br_1_guard_SM1_Final) {
        _173_SM1_fired_strong = SSM_TR_Final_1_SM1;
      }
      else {
        _173_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _187_SM1_fired_strong = _173_SM1_fired_strong;
      break;
    case SSM_st_Ground_SM1 :
      if (br_1_guard_SM1_Ground) {
        _170_SM1_fired_strong = SSM_TR_Ground_1_SM1;
      }
      else {
        _170_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _187_SM1_fired_strong = _170_SM1_fired_strong;
      break;
    case SSM_st_Launched_SM1 :
      SM1_fired_strong = SSM_TR_no_trans_SM1;
      _187_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  switch (_188_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      Phase1_weakb_clock_SM1 = _187_SM1_fired_strong != SSM_TR_no_trans_SM1;
      if (Phase1_weakb_clock_SM1) {
        _163_SM1_fired = _187_SM1_fired_strong;
        _162_SM1_reset_nxt = kcg_false;
        _161_SM1_state_nxt = SSM_st_Phase1_SM1;
      }
      if (IfBlock1_clock_SM1_Phase1) {
        _L11_SM1_Phase1_IfBlock1 = Altitude;
        _L10_SM1_Phase1_IfBlock1 = PHASE1_MAX_ALTITUDE;
        _L9_SM1_Phase1_IfBlock1 = _L11_SM1_Phase1_IfBlock1 >
          _L10_SM1_Phase1_IfBlock1;
        _166_ChangeStage = _L9_SM1_Phase1_IfBlock1;
        _141_ChangeStage = _166_ChangeStage;
      }
      else {
        _L9189_SM1_Phase1_IfBlock1 = inC->Manual_StartPhase2;
        _164_ChangeStage = _L9189_SM1_Phase1_IfBlock1;
        _141_ChangeStage = _164_ChangeStage;
      }
      if (Phase1_weakb_clock_SM1) {
        _145_SM1_fired = _163_SM1_fired;
        _144_SM1_reset_nxt = _162_SM1_reset_nxt;
        _143_SM1_state_nxt = _161_SM1_state_nxt;
      }
      else {
        br_3_guard_SM1_Phase1 = _141_ChangeStage;
        br_2_guard_SM1_Phase1 = _140_StageFailed;
        if (br_2_guard_SM1_Phase1) {
          _160_SM1_fired = SSM_TR_Phase1_2_SM1;
        }
        else if (br_3_guard_SM1_Phase1) {
          _160_SM1_fired = SSM_TR_Phase1_3_SM1;
        }
        else {
          _160_SM1_fired = SSM_TR_no_trans_SM1;
        }
        if (br_2_guard_SM1_Phase1) {
          _159_SM1_reset_nxt = kcg_true;
        }
        else {
          _159_SM1_reset_nxt = br_3_guard_SM1_Phase1;
        }
        if (br_2_guard_SM1_Phase1) {
          _158_SM1_state_nxt = SSM_st_AutoDestroy_SM1;
        }
        else if (br_3_guard_SM1_Phase1) {
          _158_SM1_state_nxt = SSM_st_Phase2_SM1;
        }
        else {
          _158_SM1_state_nxt = SSM_st_Phase1_SM1;
        }
        _145_SM1_fired = _160_SM1_fired;
        _144_SM1_reset_nxt = _159_SM1_reset_nxt;
        _143_SM1_state_nxt = _158_SM1_state_nxt;
      }
      _L74_SM1_Phase1 = Altitude;
      _L12_2 = Max_Altitude_2;
      _L19_2 = TANK_SPARE;
      _L10_2 = _L12_2 + _L19_2;
      _L21_2 = Min_Altitude_2;
      _L20_2 = _L10_2 - _L21_2;
      Current_Altitude_2 = _L74_SM1_Phase1;
      _L24_2 = Current_Altitude_2;
      _L23_2 = Min_Altitude_2;
      _L22_2 = _L24_2 - _L23_2;
      _L25_2 = _L20_2 - _L22_2;
      _L9_2 = (kcg_real) _L25_2 / (kcg_real) _L20_2;
      _L3_2 = TANK_FULL;
      _L16_2 = (kcg_real) _L3_2;
      _L15_2 = _L9_2 * _L16_2;
      _L17_2 = (kcg_int) _L15_2;
      _L28_2 = 0;
      _L27_2 = _L17_2 > _L28_2;
      _L29_2 = 0;
      if (_L27_2) {
        _L26_2 = _L17_2;
      }
      else {
        _L26_2 = _L29_2;
      }
      Fuel_2 = _L26_2;
      _L73_SM1_Phase1 = Fuel_2;
      _136_Fuel_Out = _L73_SM1_Phase1;
      _L72_SM1_Phase1 = A661_FALSE;
      _135_Destroyed_Label = _L72_SM1_Phase1;
      _L64_SM1_Phase1 = Inclination;
      _126_Inclination_Out = _L64_SM1_Phase1;
      _L60_SM1_Phase1 = Altitude;
      _L61_SM1_Phase1 = (kcg_real) _L60_SM1_Phase1;
      _125_Altitude_Out = _L61_SM1_Phase1;
      _L62_SM1_Phase1 = Speed;
      _L63_SM1_Phase1 = (kcg_real) _L62_SM1_Phase1;
      _124_Speed_Out = _L63_SM1_Phase1;
      _L34_SM1_Phase1 = YELLOW;
      kcg_copy_T_String(&_L33_SM1_Phase1, (T_String *) &PHASE_IN_PROCESS);
      kcg_copy_T_String(&_L31_SM1_Phase1, (T_String *) &PHASE_NOT_STARTED);
      kcg_copy_T_String(&_129_Ph2_Label, &_L31_SM1_Phase1);
      _L32_SM1_Phase1 = BLUE;
      kcg_copy_T_String(&_131_Ph3_Label, &_L31_SM1_Phase1);
      _134_PhF_Color = _L32_SM1_Phase1;
      kcg_copy_T_String(&_133_PhF_Label, &_L31_SM1_Phase1);
      _132_Ph3_Color = _L32_SM1_Phase1;
      _128_Ph1_Color = _L34_SM1_Phase1;
      kcg_copy_T_String(&_127_Ph1_Label, &_L33_SM1_Phase1);
      _130_Ph2_Color = _L32_SM1_Phase1;
      _186_SM1_fired = _145_SM1_fired;
      outC->SM1_reset_nxt = _144_SM1_reset_nxt;
      outC->SM1_state_nxt = _143_SM1_state_nxt;
      _190_ChangeStage = _141_ChangeStage;
      outC->Fuel_Out = _136_Fuel_Out;
      outC->Destroyed_Label = _135_Destroyed_Label;
      outC->PhF_Color = _134_PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &_133_PhF_Label);
      outC->Ph3_Color = _132_Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &_131_Ph3_Label);
      outC->Ph2_Color = _130_Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &_129_Ph2_Label);
      outC->Ph1_Color = _128_Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &_127_Ph1_Label);
      outC->Inclination_Out = _126_Inclination_Out;
      outC->Altitude_Out = _125_Altitude_Out;
      outC->Speed_Out = _124_Speed_Out;
      break;
    case SSM_st_Phase2_SM1 :
      if (IfBlock1_clock_SM1_Phase2) {
        _L11_SM1_Phase2_IfBlock1 = Altitude;
        _L13_SM1_Phase2_IfBlock1 = PHASE2_MAX_ALTITUDE;
        _L9_SM1_Phase2_IfBlock1 = _L11_SM1_Phase2_IfBlock1 >
          _L13_SM1_Phase2_IfBlock1;
        _156_ChangeStage = _L9_SM1_Phase2_IfBlock1;
        _119_ChangeStage = _156_ChangeStage;
      }
      else {
        _L10_SM1_Phase2_IfBlock1 = inC->Manual_StartPhase3;
        _154_ChangeStage = _L10_SM1_Phase2_IfBlock1;
        _119_ChangeStage = _154_ChangeStage;
      }
      br_3_guard_SM1_Phase2 = _119_ChangeStage;
      br_2_guard_SM1_Phase2 = _118_StageFailed;
      if (br_2_guard_SM1_Phase2) {
        _123_SM1_fired = SSM_TR_Phase2_2_SM1;
      }
      else if (br_3_guard_SM1_Phase2) {
        _123_SM1_fired = SSM_TR_Phase2_3_SM1;
      }
      else {
        _123_SM1_fired = SSM_TR_no_trans_SM1;
      }
      if (br_2_guard_SM1_Phase2) {
        _122_SM1_reset_nxt = kcg_true;
      }
      else {
        _122_SM1_reset_nxt = br_3_guard_SM1_Phase2;
      }
      if (br_2_guard_SM1_Phase2) {
        _121_SM1_state_nxt = SSM_st_AutoDestroy_SM1;
      }
      else if (br_3_guard_SM1_Phase2) {
        _121_SM1_state_nxt = SSM_st_Phase3_SM1;
      }
      else {
        _121_SM1_state_nxt = SSM_st_Phase2_SM1;
      }
      _L56_SM1_Phase2 = Altitude;
      _L12_3 = Max_Altitude_3;
      _L19_3 = TANK_SPARE;
      _L10_3 = _L12_3 + _L19_3;
      _L21_3 = Min_Altitude_3;
      _L20_3 = _L10_3 - _L21_3;
      Current_Altitude_3 = _L56_SM1_Phase2;
      _L24_3 = Current_Altitude_3;
      _L23_3 = Min_Altitude_3;
      _L22_3 = _L24_3 - _L23_3;
      _L25_3 = _L20_3 - _L22_3;
      _L9_3 = (kcg_real) _L25_3 / (kcg_real) _L20_3;
      _L3_3 = TANK_FULL;
      _L16_3 = (kcg_real) _L3_3;
      _L15_3 = _L9_3 * _L16_3;
      _L17_3 = (kcg_int) _L15_3;
      _L28_3 = 0;
      _L27_3 = _L17_3 > _L28_3;
      _L29_3 = 0;
      if (_L27_3) {
        _L26_3 = _L17_3;
      }
      else {
        _L26_3 = _L29_3;
      }
      Fuel_3 = _L26_3;
      _L54_SM1_Phase2 = Fuel_3;
      _114_Fuel_Out = _L54_SM1_Phase2;
      _L52_SM1_Phase2 = A661_FALSE;
      _113_Destroyed_Label = _L52_SM1_Phase2;
      _L43_SM1_Phase2 = Altitude;
      _L42_SM1_Phase2 = (kcg_real) _L43_SM1_Phase2;
      _L40_SM1_Phase2 = Speed;
      _L41_SM1_Phase2 = (kcg_real) _L40_SM1_Phase2;
      _102_Speed_Out = _L41_SM1_Phase2;
      _L37_SM1_Phase2 = Inclination;
      _103_Altitude_Out = _L42_SM1_Phase2;
      _104_Inclination_Out = _L37_SM1_Phase2;
      _L35_SM1_Phase2 = YELLOW;
      kcg_copy_T_String(&_L34_SM1_Phase2, (T_String *) &PHASE_IN_PROCESS);
      kcg_copy_T_String(&_L33_SM1_Phase2, (T_String *) &PHASE_COMPLETE);
      _L31_SM1_Phase2 = GREEN;
      _106_Ph1_Color = _L31_SM1_Phase2;
      kcg_copy_T_String(&_L32_SM1_Phase2, (T_String *) &PHASE_NOT_STARTED);
      _L29_SM1_Phase2 = BLUE;
      _110_Ph3_Color = _L29_SM1_Phase2;
      _108_Ph2_Color = _L35_SM1_Phase2;
      kcg_copy_T_String(&_111_PhF_Label, &_L32_SM1_Phase2);
      kcg_copy_T_String(&_107_Ph2_Label, &_L34_SM1_Phase2);
      _112_PhF_Color = _L29_SM1_Phase2;
      kcg_copy_T_String(&_105_Ph1_Label, &_L33_SM1_Phase2);
      kcg_copy_T_String(&_109_Ph3_Label, &_L32_SM1_Phase2);
      _186_SM1_fired = _123_SM1_fired;
      outC->SM1_reset_nxt = _122_SM1_reset_nxt;
      outC->SM1_state_nxt = _121_SM1_state_nxt;
      _190_ChangeStage = _119_ChangeStage;
      outC->Fuel_Out = _114_Fuel_Out;
      outC->Destroyed_Label = _113_Destroyed_Label;
      outC->PhF_Color = _112_PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &_111_PhF_Label);
      outC->Ph3_Color = _110_Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &_109_Ph3_Label);
      outC->Ph2_Color = _108_Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &_107_Ph2_Label);
      outC->Ph1_Color = _106_Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &_105_Ph1_Label);
      outC->Inclination_Out = _104_Inclination_Out;
      outC->Altitude_Out = _103_Altitude_Out;
      outC->Speed_Out = _102_Speed_Out;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _92_Fuel_Out = last_Fuel_Out;
      _82_Inclination_Out = last_Inclination_Out;
      _81_Altitude_Out = last_Altitude_Out;
      _80_Speed_Out = last_Speed_Out;
      _101_SM1_fired = _187_SM1_fired_strong;
      _100_SM1_reset_nxt = kcg_false;
      _99_SM1_state_nxt = SSM_st_AutoDestroy_SM1;
      _97_ChangeStage = _L49_SM1_AutoDestroy;
      _L51_SM1_AutoDestroy = !_L49_SM1_AutoDestroy;
      _91_Destroyed_Label = _L51_SM1_AutoDestroy;
      _L35_SM1_AutoDestroy = RED;
      _84_Ph1_Color = _L35_SM1_AutoDestroy;
      kcg_copy_T_String(&_L36_SM1_AutoDestroy, (T_String *) &PHASE_FAILED);
      kcg_copy_T_String(&_85_Ph2_Label, &_L36_SM1_AutoDestroy);
      _86_Ph2_Color = _L35_SM1_AutoDestroy;
      _90_PhF_Color = _L35_SM1_AutoDestroy;
      kcg_copy_T_String(&_83_Ph1_Label, &_L36_SM1_AutoDestroy);
      kcg_copy_T_String(&_87_Ph3_Label, &_L36_SM1_AutoDestroy);
      kcg_copy_T_String(&_89_PhF_Label, &_L36_SM1_AutoDestroy);
      _88_Ph3_Color = _L35_SM1_AutoDestroy;
      _186_SM1_fired = _101_SM1_fired;
      outC->SM1_reset_nxt = _100_SM1_reset_nxt;
      outC->SM1_state_nxt = _99_SM1_state_nxt;
      _190_ChangeStage = _97_ChangeStage;
      outC->Fuel_Out = _92_Fuel_Out;
      outC->Destroyed_Label = _91_Destroyed_Label;
      outC->PhF_Color = _90_PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &_89_PhF_Label);
      outC->Ph3_Color = _88_Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &_87_Ph3_Label);
      outC->Ph2_Color = _86_Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &_85_Ph2_Label);
      outC->Ph1_Color = _84_Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &_83_Ph1_Label);
      outC->Inclination_Out = _82_Inclination_Out;
      outC->Altitude_Out = _81_Altitude_Out;
      outC->Speed_Out = _80_Speed_Out;
      break;
    case SSM_st_Phase3_SM1 :
      if (IfBlock1_clock_SM1_Phase3) {
        _L11_SM1_Phase3_IfBlock1 = Altitude;
        _L14_SM1_Phase3_IfBlock1 = PHASE3_MAX_ALTITUDE;
        _L9_SM1_Phase3_IfBlock1 = _L11_SM1_Phase3_IfBlock1 >
          _L14_SM1_Phase3_IfBlock1;
        _152_ChangeStage = _L9_SM1_Phase3_IfBlock1;
        _75_ChangeStage = _152_ChangeStage;
      }
      else {
        _L10_SM1_Phase3_IfBlock1 = inC->Manual_StartPhaseFinal;
        _150_ChangeStage = _L10_SM1_Phase3_IfBlock1;
        _75_ChangeStage = _150_ChangeStage;
      }
      br_3_guard_SM1_Phase3 = _75_ChangeStage;
      br_2_guard_SM1_Phase3 = _74_StageFailed;
      if (br_2_guard_SM1_Phase3) {
        _79_SM1_fired = SSM_TR_Phase3_2_SM1;
      }
      else if (br_3_guard_SM1_Phase3) {
        _79_SM1_fired = SSM_TR_Phase3_3_SM1;
      }
      else {
        _79_SM1_fired = SSM_TR_no_trans_SM1;
      }
      if (br_2_guard_SM1_Phase3) {
        _78_SM1_reset_nxt = kcg_true;
      }
      else {
        _78_SM1_reset_nxt = br_3_guard_SM1_Phase3;
      }
      if (br_2_guard_SM1_Phase3) {
        _77_SM1_state_nxt = SSM_st_AutoDestroy_SM1;
      }
      else if (br_3_guard_SM1_Phase3) {
        _77_SM1_state_nxt = SSM_st_Final_SM1;
      }
      else {
        _77_SM1_state_nxt = SSM_st_Phase3_SM1;
      }
      _L55_SM1_Phase3 = Altitude;
      _L12_4 = Max_Altitude_4;
      _L19_4 = TANK_SPARE;
      _L10_4 = _L12_4 + _L19_4;
      _L21_4 = Min_Altitude_4;
      _L20_4 = _L10_4 - _L21_4;
      Current_Altitude_4 = _L55_SM1_Phase3;
      _L24_4 = Current_Altitude_4;
      _L23_4 = Min_Altitude_4;
      _L22_4 = _L24_4 - _L23_4;
      _L25_4 = _L20_4 - _L22_4;
      _L9_4 = (kcg_real) _L25_4 / (kcg_real) _L20_4;
      _L3_4 = TANK_FULL;
      _L16_4 = (kcg_real) _L3_4;
      _L15_4 = _L9_4 * _L16_4;
      _L17_4 = (kcg_int) _L15_4;
      _L28_4 = 0;
      _L27_4 = _L17_4 > _L28_4;
      _L29_4 = 0;
      if (_L27_4) {
        _L26_4 = _L17_4;
      }
      else {
        _L26_4 = _L29_4;
      }
      Fuel_4 = _L26_4;
      _L53_SM1_Phase3 = Fuel_4;
      _70_Fuel_Out = _L53_SM1_Phase3;
      _L51_SM1_Phase3 = A661_FALSE;
      _69_Destroyed_Label = _L51_SM1_Phase3;
      _L36_SM1_Phase3 = Speed;
      _L42_SM1_Phase3 = (kcg_real) _L36_SM1_Phase3;
      _L41_SM1_Phase3 = Altitude;
      _L39_SM1_Phase3 = (kcg_real) _L41_SM1_Phase3;
      _59_Altitude_Out = _L39_SM1_Phase3;
      _L38_SM1_Phase3 = Inclination;
      _60_Inclination_Out = _L38_SM1_Phase3;
      _58_Speed_Out = _L42_SM1_Phase3;
      kcg_copy_T_String(&_L35_SM1_Phase3, (T_String *) &PHASE_IN_PROCESS);
      _L34_SM1_Phase3 = GREEN;
      _64_Ph2_Color = _L34_SM1_Phase3;
      kcg_copy_T_String(&_L31_SM1_Phase3, (T_String *) &PHASE_COMPLETE);
      kcg_copy_T_String(&_61_Ph1_Label, &_L31_SM1_Phase3);
      _62_Ph1_Color = _L34_SM1_Phase3;
      _L33_SM1_Phase3 = YELLOW;
      _66_Ph3_Color = _L33_SM1_Phase3;
      _L32_SM1_Phase3 = BLUE;
      kcg_copy_T_String(&_63_Ph2_Label, &_L31_SM1_Phase3);
      kcg_copy_T_String(&_L30_SM1_Phase3, (T_String *) &PHASE_NOT_STARTED);
      kcg_copy_T_String(&_65_Ph3_Label, &_L35_SM1_Phase3);
      _68_PhF_Color = _L32_SM1_Phase3;
      kcg_copy_T_String(&_67_PhF_Label, &_L30_SM1_Phase3);
      _186_SM1_fired = _79_SM1_fired;
      outC->SM1_reset_nxt = _78_SM1_reset_nxt;
      outC->SM1_state_nxt = _77_SM1_state_nxt;
      _190_ChangeStage = _75_ChangeStage;
      outC->Fuel_Out = _70_Fuel_Out;
      outC->Destroyed_Label = _69_Destroyed_Label;
      outC->PhF_Color = _68_PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &_67_PhF_Label);
      outC->Ph3_Color = _66_Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &_65_Ph3_Label);
      outC->Ph2_Color = _64_Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &_63_Ph2_Label);
      outC->Ph1_Color = _62_Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &_61_Ph1_Label);
      outC->Inclination_Out = _60_Inclination_Out;
      outC->Altitude_Out = _59_Altitude_Out;
      outC->Speed_Out = _58_Speed_Out;
      break;
    case SSM_st_Final_SM1 :
      br_3_guard_SM1_Final = _52_StageFailed;
      if (IfBlock1_clock_SM1_Final) {
        _L7_SM1_Final_IfBlock1 = PhaseCompleted_SM1_Final;
        _148_ChangeStage = _L7_SM1_Final_IfBlock1;
        _53_ChangeStage = _148_ChangeStage;
      }
      else {
        _L2_SM1_Final_IfBlock1 = inC->Manual_SatLaunch;
        _146_ChangeStage = _L2_SM1_Final_IfBlock1;
        _53_ChangeStage = _146_ChangeStage;
      }
      br_2_guard_SM1_Final = _53_ChangeStage;
      if (br_2_guard_SM1_Final) {
        _57_SM1_fired = SSM_TR_Final_2_SM1;
      }
      else if (br_3_guard_SM1_Final) {
        _57_SM1_fired = SSM_TR_Final_3_SM1;
      }
      else {
        _57_SM1_fired = SSM_TR_no_trans_SM1;
      }
      if (br_2_guard_SM1_Final) {
        _56_SM1_reset_nxt = kcg_true;
      }
      else {
        _56_SM1_reset_nxt = br_3_guard_SM1_Final;
      }
      if (br_2_guard_SM1_Final) {
        _55_SM1_state_nxt = SSM_st_Launched_SM1;
      }
      else if (br_3_guard_SM1_Final) {
        _55_SM1_state_nxt = SSM_st_AutoDestroy_SM1;
      }
      else {
        _55_SM1_state_nxt = SSM_st_Final_SM1;
      }
      _L126_SM1_Final = Altitude;
      _L12_5 = Max_Altitude_5;
      _L19_5 = TANK_SPARE;
      _L10_5 = _L12_5 + _L19_5;
      _L21_5 = Min_Altitude_5;
      _L20_5 = _L10_5 - _L21_5;
      Current_Altitude_5 = _L126_SM1_Final;
      _L24_5 = Current_Altitude_5;
      _L23_5 = Min_Altitude_5;
      _L22_5 = _L24_5 - _L23_5;
      _L25_5 = _L20_5 - _L22_5;
      _L9_5 = (kcg_real) _L25_5 / (kcg_real) _L20_5;
      _L3_5 = TANK_FULL;
      _L16_5 = (kcg_real) _L3_5;
      _L15_5 = _L9_5 * _L16_5;
      _L17_5 = (kcg_int) _L15_5;
      _L28_5 = 0;
      _L27_5 = _L17_5 > _L28_5;
      _L29_5 = 0;
      if (_L27_5) {
        _L26_5 = _L17_5;
      }
      else {
        _L26_5 = _L29_5;
      }
      Fuel_5 = _L26_5;
      _L124_SM1_Final = Fuel_5;
      _48_Fuel_Out = _L124_SM1_Final;
      _L122_SM1_Final = YELLOW;
      _46_PhF_Color = _L122_SM1_Final;
      kcg_copy_T_String(&_L121_SM1_Final, (T_String *) &PHASE_IN_PROCESS);
      kcg_copy_T_String(&_45_PhF_Label, &_L121_SM1_Final);
      _L82_SM1_Final = A661_FALSE;
      _47_Destroyed_Label = _L82_SM1_Final;
      _L72_SM1_Final = Altitude;
      _L74_SM1_Final = (kcg_real) _L72_SM1_Final;
      _37_Altitude_Out = _L74_SM1_Final;
      _L73_SM1_Final = Speed;
      _L69_SM1_Final = Inclination;
      _38_Inclination_Out = _L69_SM1_Final;
      _L71_SM1_Final = (kcg_real) _L73_SM1_Final;
      _36_Speed_Out = _L71_SM1_Final;
      kcg_copy_T_String(&_L68_SM1_Final, (T_String *) &PHASE_COMPLETE);
      kcg_copy_T_String(&_41_Ph2_Label, &_L68_SM1_Final);
      kcg_copy_T_String(&_39_Ph1_Label, &_L68_SM1_Final);
      _L67_SM1_Final = GREEN;
      _44_Ph3_Color = _L67_SM1_Final;
      _40_Ph1_Color = _L67_SM1_Final;
      _42_Ph2_Color = _L67_SM1_Final;
      kcg_copy_T_String(&_43_Ph3_Label, &_L68_SM1_Final);
      _186_SM1_fired = _57_SM1_fired;
      outC->SM1_reset_nxt = _56_SM1_reset_nxt;
      outC->SM1_state_nxt = _55_SM1_state_nxt;
      _190_ChangeStage = _53_ChangeStage;
      outC->Fuel_Out = _48_Fuel_Out;
      outC->Destroyed_Label = _47_Destroyed_Label;
      outC->PhF_Color = _46_PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &_45_PhF_Label);
      outC->Ph3_Color = _44_Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &_43_Ph3_Label);
      outC->Ph2_Color = _42_Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &_41_Ph2_Label);
      outC->Ph1_Color = _40_Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &_39_Ph1_Label);
      outC->Inclination_Out = _38_Inclination_Out;
      outC->Altitude_Out = _37_Altitude_Out;
      outC->Speed_Out = _36_Speed_Out;
      break;
    case SSM_st_Ground_SM1 :
      _35_SM1_fired = _187_SM1_fired_strong;
      _34_SM1_reset_nxt = kcg_false;
      _33_SM1_state_nxt = SSM_st_Ground_SM1;
      _L39_SM1_Ground = TANK_FULL;
      _26_Fuel_Out = _L39_SM1_Ground;
      _L38_SM1_Ground = A661_FALSE;
      _25_Destroyed_Label = _L38_SM1_Ground;
      _31_ChangeStage = _L31_SM1_Ground;
      _L23_SM1_Ground = Speed;
      _L24_SM1_Ground = (kcg_real) _L23_SM1_Ground;
      _14_Speed_Out = _L24_SM1_Ground;
      _L25_SM1_Ground = Altitude;
      _L21_SM1_Ground = Inclination;
      _16_Inclination_Out = _L21_SM1_Ground;
      _L22_SM1_Ground = (kcg_real) _L25_SM1_Ground;
      _15_Altitude_Out = _L22_SM1_Ground;
      _L16_SM1_Ground = BLUE;
      kcg_copy_T_String(&_L15_SM1_Ground, (T_String *) &PHASE_NOT_STARTED);
      _20_Ph2_Color = _L16_SM1_Ground;
      _18_Ph1_Color = _L16_SM1_Ground;
      kcg_copy_T_String(&_23_PhF_Label, &_L15_SM1_Ground);
      kcg_copy_T_String(&_21_Ph3_Label, &_L15_SM1_Ground);
      kcg_copy_T_String(&_19_Ph2_Label, &_L15_SM1_Ground);
      kcg_copy_T_String(&_17_Ph1_Label, &_L15_SM1_Ground);
      _22_Ph3_Color = _L16_SM1_Ground;
      _24_PhF_Color = _L16_SM1_Ground;
      _186_SM1_fired = _35_SM1_fired;
      outC->SM1_reset_nxt = _34_SM1_reset_nxt;
      outC->SM1_state_nxt = _33_SM1_state_nxt;
      _190_ChangeStage = _31_ChangeStage;
      outC->Fuel_Out = _26_Fuel_Out;
      outC->Destroyed_Label = _25_Destroyed_Label;
      outC->PhF_Color = _24_PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &_23_PhF_Label);
      outC->Ph3_Color = _22_Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &_21_Ph3_Label);
      outC->Ph2_Color = _20_Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &_19_Ph2_Label);
      outC->Ph1_Color = _18_Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &_17_Ph1_Label);
      outC->Inclination_Out = _16_Inclination_Out;
      outC->Altitude_Out = _15_Altitude_Out;
      outC->Speed_Out = _14_Speed_Out;
      break;
    case SSM_st_Launched_SM1 :
      Fuel_Out = last_Fuel_Out;
      Inclination_Out = last_Inclination_Out;
      Altitude_Out = last_Altitude_Out;
      Speed_Out = last_Speed_Out;
      SM1_fired = _187_SM1_fired_strong;
      SM1_reset_nxt = kcg_false;
      SM1_state_nxt = SSM_st_Launched_SM1;
      ChangeStage = _L6_SM1_Launched;
      _L5_SM1_Launched = GREEN;
      kcg_copy_T_String(&_L4_SM1_Launched, (T_String *) &PHASE_COMPLETE);
      kcg_copy_T_String(&Ph2_Label, &_L4_SM1_Launched);
      Ph2_Color = _L5_SM1_Launched;
      Ph1_Color = _L5_SM1_Launched;
      Ph3_Color = _L5_SM1_Launched;
      _L1_SM1_Launched = A661_FALSE;
      Destroyed_Label = _L1_SM1_Launched;
      kcg_copy_T_String(&PhF_Label, &_L4_SM1_Launched);
      kcg_copy_T_String(&Ph1_Label, &_L4_SM1_Launched);
      kcg_copy_T_String(&Ph3_Label, &_L4_SM1_Launched);
      PhF_Color = _L5_SM1_Launched;
      _186_SM1_fired = SM1_fired;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      outC->SM1_state_nxt = SM1_state_nxt;
      _190_ChangeStage = ChangeStage;
      outC->Fuel_Out = Fuel_Out;
      outC->Destroyed_Label = Destroyed_Label;
      outC->PhF_Color = PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &PhF_Label);
      outC->Ph3_Color = Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &Ph3_Label);
      outC->Ph2_Color = Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &Ph2_Label);
      outC->Ph1_Color = Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &Ph1_Label);
      outC->Inclination_Out = Inclination_Out;
      outC->Altitude_Out = Altitude_Out;
      outC->Speed_Out = Speed_Out;
      break;
    
  }
  _L44 = STR_SIZE_SMALL;
  outC->StringSizeSmall = _L44;
  _L1 = STR_SIZE;
  if (outC->init4) {
    _L4 = kcg_true;
  }
  else {
    _L4 = outC->_L3;
  }
  outC->_L3 = kcg_false;
  outC->Layer1Visible = _L4;
  outC->Layer1Active = _L4;
  _L2 = kcg_true;
  outC->Emit2CDS = _L2;
  outC->StringSize = _L1;
  Acceleration_1 = _L64;
  _L8_1 = Acceleration_1;
  outC->_L6_1 = _L4_1 + _L8_1;
  inclination_increment_1 = _L77;
  _L8_113 = inclination_increment_1;
  outC->_L7_1 = _L5_1 + _L8_113;
  Speed_6 = _L70;
  _L29_6 = 0.0;
  _L22_6 = TARGET_ORBIT_INCLINATION;
  _L20_6 = Inclination_6;
  _L21_6 = _L22_6 - _L20_6;
  _L24_6 = 98.0;
  _L23_6 = _L21_6 / _L24_6;
  _L27_6 = 0.0;
  _L26_6 = _L23_6 < _L27_6;
  if (_L26_6) {
    _L28_6 = _L29_6;
  }
  else {
    _L28_6 = _L23_6;
  }
  _L11_6 = Speed_6;
  _L17_6 = (kcg_real) _L11_6;
  _L16_6 = 3.6;
  _L15_6 = _L17_6 / _L16_6;
  _L25_6 = _L15_6 * _L28_6;
  outC->_L19_6 = _L6_6 + _L25_6;
  Input1_8 = _L134;
  _L4_8 = !_L3_8;
  _L1_8 = Input1_8;
  if (_L1_8) {
    outC->_L2_8 = _L4_8;
  }
  else {
    outC->_L2_8 = _L3_8;
  }
  switch (_188_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      if (IfBlock1_clock_SM1_Phase1) {
      }
      else if (IfBlock1_clock_1) {
        outC->init3 = kcg_false;
      }
      break;
    case SSM_st_Phase2_SM1 :
      if (IfBlock1_clock_SM1_Phase2) {
      }
      else if (IfBlock1_clock_2) {
        outC->init2 = kcg_false;
      }
      break;
    case SSM_st_Phase3_SM1 :
      if (IfBlock1_clock_SM1_Phase3) {
      }
      else if (IfBlock1_clock_3) {
        outC->init1 = kcg_false;
      }
      break;
    case SSM_st_Final_SM1 :
      if (IfBlock1_clock_SM1_Final) {
      }
      else if (IfBlock1_clock_4) {
        outC->init = kcg_false;
      }
      break;
    
  }
  outC->init4 = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Main.c
** Generation date: 2014-10-23T02:21:18
*************************************************************$ */

