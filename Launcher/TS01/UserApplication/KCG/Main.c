/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/github/si-lansab/Launcher/TS01/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-10-28T00:42:05
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
  /* linear::MemoryBasic::_L2 */ kcg_bool _L2_2;
  /* linear::MemoryBasic::_L5 */ kcg_bool _L5_2;
  /* linear::MemoryBasic::_L6 */ kcg_bool _L6_2;
  /* linear::MemoryBasic::_L7 */ kcg_bool _L7_2;
  /* linear::MemoryBasic::Memorized */ kcg_bool Memorized_2;
  /* linear::MemoryBasic::Write */ kcg_bool Write_2;
  /* linear::MemoryBasic::Init */ kcg_bool Init_2;
  /* linear::MemoryBasic::BM_Input */ kcg_bool BM_Input_2;
  /* linear::MemoryBasic::_L2 */ kcg_int _L2_1;
  /* linear::MemoryBasic::_L5 */ kcg_bool _L5_116;
  /* linear::MemoryBasic::_L6 */ kcg_int _L6_115;
  /* linear::MemoryBasic::_L7 */ kcg_int _L7_114;
  /* linear::MemoryBasic::Memorized */ kcg_int Memorized_1;
  /* linear::MemoryBasic::Write */ kcg_bool Write_1;
  /* linear::MemoryBasic::Init */ kcg_int Init_1;
  /* linear::MemoryBasic::BM_Input */ kcg_int BM_Input_1;
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
  /* Main::SM1 */ SSM_TR_SM1 _136_SM1_fired;
  /* Main::SM1 */ kcg_bool _135_SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 _134_SM1_state_nxt;
  /* Main::ChangeStage */ kcg_bool _133_ChangeStage;
  /* Main::StageFailed */ kcg_bool _132_StageFailed;
  /* Main::MissionSuccessful */ kcg_bool _131_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real _130_InclinationIncrement;
  /* Main::Acceleration */ kcg_int _129_Acceleration;
  /* Main::Fuel_Out */ kcg_int _128_Fuel_Out;
  /* Main::PhF_Color */ kcg_int _127_PhF_Color;
  /* Main::PhF_Label */ T_String _126_PhF_Label;
  /* Main::Ph3_Color */ kcg_int _125_Ph3_Color;
  /* Main::Ph3_Label */ T_String _124_Ph3_Label;
  /* Main::Ph2_Color */ kcg_int _123_Ph2_Color;
  /* Main::Ph2_Label */ T_String _122_Ph2_Label;
  /* Main::Ph1_Color */ kcg_int _121_Ph1_Color;
  /* Main::Ph1_Label */ T_String _120_Ph1_Label;
  /* Main::Inclination_Out */ kcg_real _119_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real _118_Altitude_Out;
  /* Main::Speed_Out */ kcg_real _117_Speed_Out;
  /* Main::SM1::Phase1::_L76 */ kcg_int _L76_SM1_Phase1;
  /* Main::SM1::Phase1::_L75 */ kcg_int _L75_SM1_Phase1;
  /* Main::SM1::Phase1::_L74 */ kcg_int _L74_SM1_Phase1;
  /* Main::SM1::Phase1::_L73 */ kcg_int _L73_SM1_Phase1;
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
  /* Main::SM1::Phase1::IfBlock1::else::_L9 */ kcg_bool _L9180_SM1_Phase1_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _155_ChangeStage;
  /* Main::StageFailed */ kcg_bool _156_StageFailed;
  /* Main::SM1::Phase1::IfBlock1::then::_L10 */ kcg_int _L10_SM1_Phase1_IfBlock1;
  /* Main::SM1::Phase1::IfBlock1::then::_L9 */ kcg_bool _L9_SM1_Phase1_IfBlock1;
  /* Main::SM1::Phase1::IfBlock1::then::_L11 */ kcg_int _L11_SM1_Phase1_IfBlock1;
  /* Main::SM1::Phase1::IfBlock1::then::_L15 */ kcg_bool _L15_SM1_Phase1_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _157_ChangeStage;
  /* Main::StageFailed */ kcg_bool _158_StageFailed;
  /* Main::SM1::Phase1 */ kcg_bool br_2_guard_SM1_Phase1;
  /* Main::SM1::Phase1 */ kcg_bool br_3_guard_SM1_Phase1;
  /* Main::SM1 */ SSM_ST_SM1 _149_SM1_state_nxt;
  /* Main::SM1 */ kcg_bool _150_SM1_reset_nxt;
  /* Main::SM1 */ SSM_TR_SM1 _151_SM1_fired;
  /* Main::SM1 */ SSM_ST_SM1 _152_SM1_state_nxt;
  /* Main::SM1 */ kcg_bool _153_SM1_reset_nxt;
  /* Main::SM1 */ SSM_TR_SM1 _154_SM1_fired;
  /* Main::SM1 */ SSM_TR_SM1 _116_SM1_fired;
  /* Main::SM1 */ kcg_bool _115_SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 _114_SM1_state_nxt;
  /* Main::ChangeStage */ kcg_bool _113_ChangeStage;
  /* Main::StageFailed */ kcg_bool _112_StageFailed;
  /* Main::MissionSuccessful */ kcg_bool _111_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real _110_InclinationIncrement;
  /* Main::Acceleration */ kcg_int _109_Acceleration;
  /* Main::Fuel_Out */ kcg_int _108_Fuel_Out;
  /* Main::PhF_Color */ kcg_int _107_PhF_Color;
  /* Main::PhF_Label */ T_String _106_PhF_Label;
  /* Main::Ph3_Color */ kcg_int _105_Ph3_Color;
  /* Main::Ph3_Label */ T_String _104_Ph3_Label;
  /* Main::Ph2_Color */ kcg_int _103_Ph2_Color;
  /* Main::Ph2_Label */ T_String _102_Ph2_Label;
  /* Main::Ph1_Color */ kcg_int _101_Ph1_Color;
  /* Main::Ph1_Label */ T_String _100_Ph1_Label;
  /* Main::Inclination_Out */ kcg_real _99_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real _98_Altitude_Out;
  /* Main::Speed_Out */ kcg_real _97_Speed_Out;
  /* Main::SM1::Phase2 */ kcg_bool br_3_guard_SM1_Phase2;
  /* Main::SM1::Phase2 */ kcg_bool br_2_guard_SM1_Phase2;
  /* Main::SM1::Phase2::_L57 */ kcg_int _L57_SM1_Phase2;
  /* Main::SM1::Phase2::_L54 */ kcg_int _L54_SM1_Phase2;
  /* Main::SM1::Phase2::_L55 */ kcg_int _L55_SM1_Phase2;
  /* Main::SM1::Phase2::_L56 */ kcg_int _L56_SM1_Phase2;
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
  /* Main::ChangeStage */ kcg_bool _145_ChangeStage;
  /* Main::StageFailed */ kcg_bool _146_StageFailed;
  /* Main::SM1::Phase2::IfBlock1::then::_L9 */ kcg_bool _L9_SM1_Phase2_IfBlock1;
  /* Main::SM1::Phase2::IfBlock1::then::_L11 */ kcg_int _L11_SM1_Phase2_IfBlock1;
  /* Main::SM1::Phase2::IfBlock1::then::_L13 */ kcg_int _L13_SM1_Phase2_IfBlock1;
  /* Main::SM1::Phase2::IfBlock1::then::_L15 */ kcg_bool _L15_SM1_Phase2_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _147_ChangeStage;
  /* Main::StageFailed */ kcg_bool _148_StageFailed;
  /* Main::SM1 */ SSM_TR_SM1 _96_SM1_fired;
  /* Main::SM1 */ kcg_bool _95_SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 _94_SM1_state_nxt;
  /* Main::ChangeStage */ kcg_bool _93_ChangeStage;
  /* Main::StageFailed */ kcg_bool _92_StageFailed;
  /* Main::MissionSuccessful */ kcg_bool _91_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real _90_InclinationIncrement;
  /* Main::Acceleration */ kcg_int _89_Acceleration;
  /* Main::Fuel_Out */ kcg_int _88_Fuel_Out;
  /* Main::PhF_Color */ kcg_int _87_PhF_Color;
  /* Main::PhF_Label */ T_String _86_PhF_Label;
  /* Main::Ph3_Color */ kcg_int _85_Ph3_Color;
  /* Main::Ph3_Label */ T_String _84_Ph3_Label;
  /* Main::Ph2_Color */ kcg_int _83_Ph2_Color;
  /* Main::Ph2_Label */ T_String _82_Ph2_Label;
  /* Main::Ph1_Color */ kcg_int _81_Ph1_Color;
  /* Main::Ph1_Label */ T_String _80_Ph1_Label;
  /* Main::Inclination_Out */ kcg_real _79_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real _78_Altitude_Out;
  /* Main::Speed_Out */ kcg_real _77_Speed_Out;
  /* Main::SM1::AutoDestroy::_L53 */ kcg_bool _L53_SM1_AutoDestroy;
  /* Main::SM1::AutoDestroy::_L49 */ kcg_bool _L49_SM1_AutoDestroy;
  /* Main::SM1::AutoDestroy::_L35 */ kcg_int _L35_SM1_AutoDestroy;
  /* Main::SM1::AutoDestroy::_L36 */ T_String _L36_SM1_AutoDestroy;
  /* Main::SM1 */ SSM_TR_SM1 _76_SM1_fired;
  /* Main::SM1 */ kcg_bool _75_SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 _74_SM1_state_nxt;
  /* Main::ChangeStage */ kcg_bool _73_ChangeStage;
  /* Main::StageFailed */ kcg_bool _72_StageFailed;
  /* Main::MissionSuccessful */ kcg_bool _71_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real _70_InclinationIncrement;
  /* Main::Acceleration */ kcg_int _69_Acceleration;
  /* Main::Fuel_Out */ kcg_int _68_Fuel_Out;
  /* Main::PhF_Color */ kcg_int _67_PhF_Color;
  /* Main::PhF_Label */ T_String _66_PhF_Label;
  /* Main::Ph3_Color */ kcg_int _65_Ph3_Color;
  /* Main::Ph3_Label */ T_String _64_Ph3_Label;
  /* Main::Ph2_Color */ kcg_int _63_Ph2_Color;
  /* Main::Ph2_Label */ T_String _62_Ph2_Label;
  /* Main::Ph1_Color */ kcg_int _61_Ph1_Color;
  /* Main::Ph1_Label */ T_String _60_Ph1_Label;
  /* Main::Inclination_Out */ kcg_real _59_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real _58_Altitude_Out;
  /* Main::Speed_Out */ kcg_real _57_Speed_Out;
  /* Main::SM1::Phase3 */ kcg_bool br_3_guard_SM1_Phase3;
  /* Main::SM1::Phase3 */ kcg_bool br_2_guard_SM1_Phase3;
  /* Main::SM1::Phase3::_L52 */ kcg_int _L52_SM1_Phase3;
  /* Main::SM1::Phase3::_L53 */ kcg_int _L53_SM1_Phase3;
  /* Main::SM1::Phase3::_L54 */ kcg_int _L54_SM1_Phase3;
  /* Main::SM1::Phase3::_L55 */ kcg_int _L55_SM1_Phase3;
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
  /* Main::ChangeStage */ kcg_bool _141_ChangeStage;
  /* Main::StageFailed */ kcg_bool _142_StageFailed;
  /* Main::SM1::Phase3::IfBlock1::then::_L9 */ kcg_bool _L9_SM1_Phase3_IfBlock1;
  /* Main::SM1::Phase3::IfBlock1::then::_L11 */ kcg_int _L11_SM1_Phase3_IfBlock1;
  /* Main::SM1::Phase3::IfBlock1::then::_L14 */ kcg_int _L14_SM1_Phase3_IfBlock1;
  /* Main::SM1::Phase3::IfBlock1::then::_L17 */ kcg_bool _L17_SM1_Phase3_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _143_ChangeStage;
  /* Main::StageFailed */ kcg_bool _144_StageFailed;
  /* Main::SM1 */ SSM_TR_SM1 _56_SM1_fired;
  /* Main::SM1 */ kcg_bool _55_SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 _54_SM1_state_nxt;
  /* Main::ChangeStage */ kcg_bool _53_ChangeStage;
  /* Main::StageFailed */ kcg_bool _52_StageFailed;
  /* Main::MissionSuccessful */ kcg_bool _51_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real _50_InclinationIncrement;
  /* Main::Acceleration */ kcg_int _49_Acceleration;
  /* Main::Fuel_Out */ kcg_int _48_Fuel_Out;
  /* Main::PhF_Color */ kcg_int _47_PhF_Color;
  /* Main::PhF_Label */ T_String _46_PhF_Label;
  /* Main::Ph3_Color */ kcg_int _45_Ph3_Color;
  /* Main::Ph3_Label */ T_String _44_Ph3_Label;
  /* Main::Ph2_Color */ kcg_int _43_Ph2_Color;
  /* Main::Ph2_Label */ T_String _42_Ph2_Label;
  /* Main::Ph1_Color */ kcg_int _41_Ph1_Color;
  /* Main::Ph1_Label */ T_String _40_Ph1_Label;
  /* Main::Inclination_Out */ kcg_real _39_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real _38_Altitude_Out;
  /* Main::Speed_Out */ kcg_real _37_Speed_Out;
  /* Main::SM1::Final */ kcg_bool br_3_guard_SM1_Final;
  /* Main::SM1::Final */ kcg_bool br_2_guard_SM1_Final;
  /* Main::SM1::Final::_L129 */ kcg_bool _L129_SM1_Final;
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
  /* Main::ChangeStage */ kcg_bool _137_ChangeStage;
  /* Main::StageFailed */ kcg_bool _138_StageFailed;
  /* Main::SM1::Final::IfBlock1::then::_L7 */ kcg_bool _L7_SM1_Final_IfBlock1;
  /* Main::SM1::Final::IfBlock1::then::_L8 */ kcg_bool _L8_SM1_Final_IfBlock1;
  /* Main::ChangeStage */ kcg_bool _139_ChangeStage;
  /* Main::StageFailed */ kcg_bool _140_StageFailed;
  /* Main::SM1 */ SSM_TR_SM1 _36_SM1_fired;
  /* Main::SM1 */ kcg_bool _35_SM1_reset_nxt;
  /* Main::SM1 */ SSM_ST_SM1 _34_SM1_state_nxt;
  /* Main::ChangeStage */ kcg_bool _33_ChangeStage;
  /* Main::StageFailed */ kcg_bool _32_StageFailed;
  /* Main::MissionSuccessful */ kcg_bool _31_MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real _30_InclinationIncrement;
  /* Main::Acceleration */ kcg_int _29_Acceleration;
  /* Main::Fuel_Out */ kcg_int _28_Fuel_Out;
  /* Main::PhF_Color */ kcg_int _27_PhF_Color;
  /* Main::PhF_Label */ T_String _26_PhF_Label;
  /* Main::Ph3_Color */ kcg_int _25_Ph3_Color;
  /* Main::Ph3_Label */ T_String _24_Ph3_Label;
  /* Main::Ph2_Color */ kcg_int _23_Ph2_Color;
  /* Main::Ph2_Label */ T_String _22_Ph2_Label;
  /* Main::Ph1_Color */ kcg_int _21_Ph1_Color;
  /* Main::Ph1_Label */ T_String _20_Ph1_Label;
  /* Main::Inclination_Out */ kcg_real _19_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real _18_Altitude_Out;
  /* Main::Speed_Out */ kcg_real _17_Speed_Out;
  /* Main::SM1::Ground::_L39 */ kcg_int _L39_SM1_Ground;
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
  /* Main::ChangeStage */ kcg_bool ChangeStage;
  /* Main::StageFailed */ kcg_bool StageFailed;
  /* Main::MissionSuccessful */ kcg_bool MissionSuccessful;
  /* Main::InclinationIncrement */ kcg_real InclinationIncrement;
  /* Main::Acceleration */ kcg_int Acceleration;
  /* Main::Fuel_Out */ kcg_int Fuel_Out;
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
  /* Main::SM1 */ SSM_TR_SM1 _176_SM1_fired_strong;
  /* Main::SM1 */ kcg_bool _175_SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 _174_SM1_state_act;
  /* Main::SM1::Phase1 */ kcg_bool br_1_guard_SM1_Phase1;
  /* Main::SM1 */ SSM_TR_SM1 _173_SM1_fired_strong;
  /* Main::SM1 */ kcg_bool _172_SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 _171_SM1_state_act;
  /* Main::SM1::Phase2 */ kcg_bool br_1_guard_SM1_Phase2;
  /* Main::SM1 */ SSM_TR_SM1 _170_SM1_fired_strong;
  /* Main::SM1 */ kcg_bool _169_SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 _168_SM1_state_act;
  /* Main::SM1 */ SSM_TR_SM1 _167_SM1_fired_strong;
  /* Main::SM1 */ kcg_bool _166_SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 _165_SM1_state_act;
  /* Main::SM1::Phase3 */ kcg_bool br_1_guard_SM1_Phase3;
  /* Main::SM1 */ SSM_TR_SM1 _164_SM1_fired_strong;
  /* Main::SM1 */ kcg_bool _163_SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 _162_SM1_state_act;
  /* Main::SM1::Final */ kcg_bool br_1_guard_SM1_Final;
  /* Main::SM1 */ SSM_TR_SM1 _161_SM1_fired_strong;
  /* Main::SM1 */ kcg_bool _160_SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 _159_SM1_state_act;
  /* Main::SM1::Ground */ kcg_bool br_1_guard_SM1_Ground;
  /* Main::SM1 */ SSM_TR_SM1 SM1_fired_strong;
  /* Main::SM1 */ kcg_bool SM1_reset_act;
  /* Main::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* Main::Fuel_Out */ kcg_int last_Fuel_Out;
  /* Main::Inclination_Out */ kcg_real last_Inclination_Out;
  /* Main::Altitude_Out */ kcg_real last_Altitude_Out;
  /* Main::Speed_Out */ kcg_real last_Speed_Out;
  /* Main::InclinationIncrement */ kcg_real last_InclinationIncrement;
  /* Main::Acceleration */ kcg_int last_Acceleration;
  /* Main::SM1 */ SSM_ST_SM1 SM1_state_sel;
  /* Main::SM1 */ SSM_ST_SM1 _179_SM1_state_act;
  /* Main::SM1 */ kcg_bool SM1_reset_sel;
  /* Main::SM1 */ kcg_bool SM1_reset_prv;
  /* Main::SM1 */ SSM_TR_SM1 _178_SM1_fired_strong;
  /* Main::SM1 */ SSM_TR_SM1 _177_SM1_fired;
  /* Main::Speed */ kcg_int Speed;
  /* Main::Altitude */ kcg_int Altitude;
  /* Main::Inclination */ kcg_real Inclination;
  /* Main::Manual_Destroy */ kcg_bool Manual_Destroy;
  /* Main::MissionStart */ kcg_bool MissionStart;
  /* Main::Latitude */ kcg_real Latitude;
  /* Main::Longitude */ kcg_real Longitude;
  /* Main::AutomaticMode */ kcg_bool AutomaticMode;
  /* Main::MissionSuccessful */ kcg_bool _183_MissionSuccessful;
  /* Main::StageFailed */ kcg_bool _182_StageFailed;
  /* Main::ChangeStage */ kcg_bool _181_ChangeStage;
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
  /* Main::_L111 */ kcg_bool _L111;
  /* Main::_L113 */ kcg_bool _L113;
  /* Main::_L114 */ kcg_int _L114;
  /* Main::_L117 */ kcg_bool _L117;
  /* Main::_L119 */ kcg_bool _L119;
  /* Main::_L121 */ kcg_bool _L121;
  /* Main::_L122 */ kcg_real _L122;
  /* Main::_L123 */ kcg_real _L123;
  /* Main::_L125 */ kcg_bool _L125;
  /* Main::_L134 */ kcg_bool _L134;
  /* Main::_L135 */ kcg_bool _L135;
  /* Main::_L137 */ kcg_bool _L137;
  /* Main::_L139 */ kcg_bool _L139;
  /* Main::_L140 */ kcg_int _L140;
  /* Main::_L142 */ kcg_int _L142;
  /* Main::_L144 */ kcg_bool _L144;
  /* Main::_L145 */ kcg_bool _L145;
  
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
        _159_SM1_state_act = SSM_st_Phase1_SM1;
      }
      else {
        _159_SM1_state_act = SSM_st_Ground_SM1;
      }
      break;
    
  }
  _L96 = inC->AutoDestruct;
  Manual_Destroy = _L96;
  switch (SM1_state_sel) {
    case SSM_st_Phase1_SM1 :
      br_1_guard_SM1_Phase1 = Manual_Destroy;
      if (br_1_guard_SM1_Phase1) {
        _174_SM1_state_act = SSM_st_AutoDestroy_SM1;
      }
      else {
        _174_SM1_state_act = SSM_st_Phase1_SM1;
      }
      _179_SM1_state_act = _174_SM1_state_act;
      break;
    case SSM_st_Phase2_SM1 :
      br_1_guard_SM1_Phase2 = Manual_Destroy;
      if (br_1_guard_SM1_Phase2) {
        _171_SM1_state_act = SSM_st_AutoDestroy_SM1;
      }
      else {
        _171_SM1_state_act = SSM_st_Phase2_SM1;
      }
      _179_SM1_state_act = _171_SM1_state_act;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _168_SM1_state_act = SSM_st_AutoDestroy_SM1;
      _179_SM1_state_act = _168_SM1_state_act;
      break;
    case SSM_st_Phase3_SM1 :
      br_1_guard_SM1_Phase3 = Manual_Destroy;
      if (br_1_guard_SM1_Phase3) {
        _165_SM1_state_act = SSM_st_AutoDestroy_SM1;
      }
      else {
        _165_SM1_state_act = SSM_st_Phase3_SM1;
      }
      _179_SM1_state_act = _165_SM1_state_act;
      break;
    case SSM_st_Final_SM1 :
      br_1_guard_SM1_Final = Manual_Destroy;
      if (br_1_guard_SM1_Final) {
        _162_SM1_state_act = SSM_st_AutoDestroy_SM1;
      }
      else {
        _162_SM1_state_act = SSM_st_Final_SM1;
      }
      _179_SM1_state_act = _162_SM1_state_act;
      break;
    case SSM_st_Ground_SM1 :
      _179_SM1_state_act = _159_SM1_state_act;
      break;
    case SSM_st_Launched_SM1 :
      _179_SM1_state_act = SM1_state_act;
      break;
    
  }
  Init_1 = A661_UNSELECTED;
  _L7_114 = Init_1;
  if (outC->init4) {
    _L6_115 = _L7_114;
  }
  else {
    _L6_115 = outC->_L4_1;
  }
  _L139 = inC->Manual_Notify;
  Write_1 = _L139;
  _L5_116 = Write_1;
  _L142 = inC->Manual_Override;
  BM_Input_1 = _L142;
  _L2_1 = BM_Input_1;
  if (_L5_116) {
    outC->_L4_1 = _L2_1;
  }
  else {
    outC->_L4_1 = _L6_115;
  }
  Memorized_1 = outC->_L4_1;
  _L140 = Memorized_1;
  _L114 = A661_UNSELECTED;
  _L109 = _L140 == _L114;
  AutomaticMode = _L109;
  switch (_179_SM1_state_act) {
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
  switch (_179_SM1_state_act) {
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
      _175_SM1_reset_act = br_1_guard_SM1_Phase1;
      outC->SM1_reset_act = _175_SM1_reset_act;
      break;
    case SSM_st_Phase2_SM1 :
      _172_SM1_reset_act = br_1_guard_SM1_Phase2;
      outC->SM1_reset_act = _172_SM1_reset_act;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _169_SM1_reset_act = kcg_false;
      outC->SM1_reset_act = _169_SM1_reset_act;
      break;
    case SSM_st_Phase3_SM1 :
      _166_SM1_reset_act = br_1_guard_SM1_Phase3;
      outC->SM1_reset_act = _166_SM1_reset_act;
      break;
    case SSM_st_Final_SM1 :
      _163_SM1_reset_act = br_1_guard_SM1_Final;
      outC->SM1_reset_act = _163_SM1_reset_act;
      break;
    case SSM_st_Ground_SM1 :
      _160_SM1_reset_act = br_1_guard_SM1_Ground;
      outC->SM1_reset_act = _160_SM1_reset_act;
      break;
    case SSM_st_Launched_SM1 :
      SM1_reset_act = kcg_false;
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  switch (_179_SM1_state_act) {
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
  switch (_179_SM1_state_act) {
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
  switch (_179_SM1_state_act) {
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
  switch (_179_SM1_state_act) {
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
  switch (_179_SM1_state_act) {
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
  _L121 = MissionStart;
  Write_2 = _L121;
  Init_2 = kcg_false;
  _L79 = Inclination;
  Inclination_6 = _L79;
  switch (_179_SM1_state_act) {
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
  last_InclinationIncrement = outC->InclinationIncrement;
  last_Acceleration = outC->Acceleration;
  switch (_179_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      _L70_SM1_Phase1 = A661_FALSE;
      _131_MissionSuccessful = _L70_SM1_Phase1;
      _183_MissionSuccessful = _131_MissionSuccessful;
      break;
    case SSM_st_Phase2_SM1 :
      _L50_SM1_Phase2 = A661_FALSE;
      _111_MissionSuccessful = _L50_SM1_Phase2;
      _183_MissionSuccessful = _111_MissionSuccessful;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _L49_SM1_AutoDestroy = A661_FALSE;
      _91_MissionSuccessful = _L49_SM1_AutoDestroy;
      _183_MissionSuccessful = _91_MissionSuccessful;
      break;
    case SSM_st_Phase3_SM1 :
      _L49_SM1_Phase3 = A661_FALSE;
      _71_MissionSuccessful = _L49_SM1_Phase3;
      _183_MissionSuccessful = _71_MissionSuccessful;
      break;
    case SSM_st_Final_SM1 :
      _L129_SM1_Final = A661_FALSE;
      _51_MissionSuccessful = _L129_SM1_Final;
      _183_MissionSuccessful = _51_MissionSuccessful;
      break;
    case SSM_st_Ground_SM1 :
      _L31_SM1_Ground = A661_FALSE;
      _31_MissionSuccessful = _L31_SM1_Ground;
      _183_MissionSuccessful = _31_MissionSuccessful;
      break;
    case SSM_st_Launched_SM1 :
      _L8_SM1_Launched = A661_TRUE;
      MissionSuccessful = _L8_SM1_Launched;
      _183_MissionSuccessful = MissionSuccessful;
      break;
    
  }
  _L135 = _183_MissionSuccessful;
  _L137 = A661_FALSE;
  switch (_179_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      if (IfBlock1_clock_SM1_Phase1) {
        _L15_SM1_Phase1_IfBlock1 = A661_FALSE;
        _158_StageFailed = _L15_SM1_Phase1_IfBlock1;
        _132_StageFailed = _158_StageFailed;
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
        _156_StageFailed = _L6_SM1_Phase1_IfBlock1;
        _132_StageFailed = _156_StageFailed;
      }
      _182_StageFailed = _132_StageFailed;
      break;
    case SSM_st_Phase2_SM1 :
      if (IfBlock1_clock_SM1_Phase2) {
        _L15_SM1_Phase2_IfBlock1 = A661_FALSE;
        _148_StageFailed = _L15_SM1_Phase2_IfBlock1;
        _112_StageFailed = _148_StageFailed;
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
        _146_StageFailed = _L6_SM1_Phase2_IfBlock1;
        _112_StageFailed = _146_StageFailed;
      }
      _182_StageFailed = _112_StageFailed;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _L53_SM1_AutoDestroy = A661_TRUE;
      _92_StageFailed = _L53_SM1_AutoDestroy;
      _182_StageFailed = _92_StageFailed;
      break;
    case SSM_st_Phase3_SM1 :
      if (IfBlock1_clock_SM1_Phase3) {
        _L17_SM1_Phase3_IfBlock1 = A661_FALSE;
        _144_StageFailed = _L17_SM1_Phase3_IfBlock1;
        _72_StageFailed = _144_StageFailed;
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
        _142_StageFailed = _L6_SM1_Phase3_IfBlock1;
        _72_StageFailed = _142_StageFailed;
      }
      _182_StageFailed = _72_StageFailed;
      break;
    case SSM_st_Final_SM1 :
      if (IfBlock1_clock_SM1_Final) {
        _L8_SM1_Final_IfBlock1 = A661_FALSE;
        _140_StageFailed = _L8_SM1_Final_IfBlock1;
        _52_StageFailed = _140_StageFailed;
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
        _138_StageFailed = _L6_SM1_Final_IfBlock1;
        _52_StageFailed = _138_StageFailed;
      }
      _182_StageFailed = _52_StageFailed;
      break;
    case SSM_st_Ground_SM1 :
      _32_StageFailed = _L31_SM1_Ground;
      _182_StageFailed = _32_StageFailed;
      break;
    case SSM_st_Launched_SM1 :
      _L6_SM1_Launched = A661_FALSE;
      StageFailed = _L6_SM1_Launched;
      _182_StageFailed = StageFailed;
      break;
    
  }
  _L117 = _182_StageFailed;
  if (_L135) {
    _L134 = _L137;
  }
  else {
    _L134 = _L117;
  }
  outC->Destroyed_Label = _L134;
  _L145 = A661_TRUE;
  _L7_2 = Init_2;
  if (outC->init4) {
    _L6_2 = _L7_2;
  }
  else {
    _L6_2 = outC->_L4_2;
  }
  _L5_2 = Write_2;
  BM_Input_2 = _L145;
  _L2_2 = BM_Input_2;
  if (_L5_2) {
    outC->_L4_2 = _L2_2;
  }
  else {
    outC->_L4_2 = _L6_2;
  }
  Memorized_2 = outC->_L4_2;
  _L144 = Memorized_2;
  _L123 = Longitude;
  _L122 = Latitude;
  outC->RocketLaunch = _L144;
  _L119 = !_L134;
  outC->ControlCenterStatus = _L119;
  outC->RocketDestroy = _L134;
  _L113 = _183_MissionSuccessful;
  outC->SatLaunched = _L113;
  _L111 = AutomaticMode;
  _L107 = !_L111;
  outC->Manual_Txt_En = _L107;
  outC->Auto_Txt_En = _L111;
  switch (_179_SM1_state_act) {
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
      _130_InclinationIncrement = _L54_SM1_Phase1;
      outC->InclinationIncrement = _130_InclinationIncrement;
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
      _110_InclinationIncrement = _L26_SM1_Phase2;
      outC->InclinationIncrement = _110_InclinationIncrement;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _90_InclinationIncrement = last_InclinationIncrement;
      outC->InclinationIncrement = _90_InclinationIncrement;
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
      _70_InclinationIncrement = _L21_SM1_Phase3;
      outC->InclinationIncrement = _70_InclinationIncrement;
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
      _30_InclinationIncrement = _L4_SM1_Ground;
      outC->InclinationIncrement = _30_InclinationIncrement;
      break;
    case SSM_st_Launched_SM1 :
      InclinationIncrement = last_InclinationIncrement;
      outC->InclinationIncrement = InclinationIncrement;
      break;
    
  }
  _L77 = outC->InclinationIncrement;
  _L70 = Speed;
  switch (_179_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      _L55_SM1_Phase1 = ACCELERATION_PH1;
      _129_Acceleration = _L55_SM1_Phase1;
      outC->Acceleration = _129_Acceleration;
      break;
    case SSM_st_Phase2_SM1 :
      _L20_SM1_Phase2 = ACCELERATION_PH2;
      _109_Acceleration = _L20_SM1_Phase2;
      outC->Acceleration = _109_Acceleration;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _89_Acceleration = last_Acceleration;
      outC->Acceleration = _89_Acceleration;
      break;
    case SSM_st_Phase3_SM1 :
      _L20_SM1_Phase3 = ACCELERATION_PH3;
      _69_Acceleration = _L20_SM1_Phase3;
      outC->Acceleration = _69_Acceleration;
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
      _29_Acceleration = _L3_SM1_Ground;
      outC->Acceleration = _29_Acceleration;
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
        _176_SM1_fired_strong = SSM_TR_Phase1_1_SM1;
      }
      else {
        _176_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _178_SM1_fired_strong = _176_SM1_fired_strong;
      break;
    case SSM_st_Phase2_SM1 :
      if (br_1_guard_SM1_Phase2) {
        _173_SM1_fired_strong = SSM_TR_Phase2_1_SM1;
      }
      else {
        _173_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _178_SM1_fired_strong = _173_SM1_fired_strong;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _170_SM1_fired_strong = SSM_TR_no_trans_SM1;
      _178_SM1_fired_strong = _170_SM1_fired_strong;
      break;
    case SSM_st_Phase3_SM1 :
      if (br_1_guard_SM1_Phase3) {
        _167_SM1_fired_strong = SSM_TR_Phase3_1_SM1;
      }
      else {
        _167_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _178_SM1_fired_strong = _167_SM1_fired_strong;
      break;
    case SSM_st_Final_SM1 :
      if (br_1_guard_SM1_Final) {
        _164_SM1_fired_strong = SSM_TR_Final_1_SM1;
      }
      else {
        _164_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _178_SM1_fired_strong = _164_SM1_fired_strong;
      break;
    case SSM_st_Ground_SM1 :
      if (br_1_guard_SM1_Ground) {
        _161_SM1_fired_strong = SSM_TR_Ground_1_SM1;
      }
      else {
        _161_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      _178_SM1_fired_strong = _161_SM1_fired_strong;
      break;
    case SSM_st_Launched_SM1 :
      SM1_fired_strong = SSM_TR_no_trans_SM1;
      _178_SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  switch (_179_SM1_state_act) {
    case SSM_st_Phase1_SM1 :
      Phase1_weakb_clock_SM1 = _178_SM1_fired_strong != SSM_TR_no_trans_SM1;
      if (Phase1_weakb_clock_SM1) {
        _154_SM1_fired = _178_SM1_fired_strong;
        _153_SM1_reset_nxt = kcg_false;
        _152_SM1_state_nxt = SSM_st_Phase1_SM1;
      }
      if (IfBlock1_clock_SM1_Phase1) {
        _L11_SM1_Phase1_IfBlock1 = Altitude;
        _L10_SM1_Phase1_IfBlock1 = PHASE1_MAX_ALTITUDE;
        _L9_SM1_Phase1_IfBlock1 = _L11_SM1_Phase1_IfBlock1 >
          _L10_SM1_Phase1_IfBlock1;
        _157_ChangeStage = _L9_SM1_Phase1_IfBlock1;
        _133_ChangeStage = _157_ChangeStage;
      }
      else {
        _L9180_SM1_Phase1_IfBlock1 = inC->Manual_StartPhase2;
        _155_ChangeStage = _L9180_SM1_Phase1_IfBlock1;
        _133_ChangeStage = _155_ChangeStage;
      }
      if (Phase1_weakb_clock_SM1) {
        _136_SM1_fired = _154_SM1_fired;
        _135_SM1_reset_nxt = _153_SM1_reset_nxt;
        _134_SM1_state_nxt = _152_SM1_state_nxt;
      }
      else {
        br_3_guard_SM1_Phase1 = _133_ChangeStage;
        br_2_guard_SM1_Phase1 = _132_StageFailed;
        if (br_2_guard_SM1_Phase1) {
          _151_SM1_fired = SSM_TR_Phase1_2_SM1;
        }
        else if (br_3_guard_SM1_Phase1) {
          _151_SM1_fired = SSM_TR_Phase1_3_SM1;
        }
        else {
          _151_SM1_fired = SSM_TR_no_trans_SM1;
        }
        if (br_2_guard_SM1_Phase1) {
          _150_SM1_reset_nxt = kcg_true;
        }
        else {
          _150_SM1_reset_nxt = br_3_guard_SM1_Phase1;
        }
        if (br_2_guard_SM1_Phase1) {
          _149_SM1_state_nxt = SSM_st_AutoDestroy_SM1;
        }
        else if (br_3_guard_SM1_Phase1) {
          _149_SM1_state_nxt = SSM_st_Phase2_SM1;
        }
        else {
          _149_SM1_state_nxt = SSM_st_Phase1_SM1;
        }
        _136_SM1_fired = _151_SM1_fired;
        _135_SM1_reset_nxt = _150_SM1_reset_nxt;
        _134_SM1_state_nxt = _149_SM1_state_nxt;
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
      _128_Fuel_Out = _L73_SM1_Phase1;
      _L64_SM1_Phase1 = Inclination;
      _119_Inclination_Out = _L64_SM1_Phase1;
      _L60_SM1_Phase1 = Altitude;
      _L61_SM1_Phase1 = (kcg_real) _L60_SM1_Phase1;
      _118_Altitude_Out = _L61_SM1_Phase1;
      _L62_SM1_Phase1 = Speed;
      _L63_SM1_Phase1 = (kcg_real) _L62_SM1_Phase1;
      _117_Speed_Out = _L63_SM1_Phase1;
      _L34_SM1_Phase1 = YELLOW;
      kcg_copy_T_String(&_L33_SM1_Phase1, (T_String *) &PHASE_IN_PROCESS);
      kcg_copy_T_String(&_L31_SM1_Phase1, (T_String *) &PHASE_NOT_STARTED);
      kcg_copy_T_String(&_122_Ph2_Label, &_L31_SM1_Phase1);
      _L32_SM1_Phase1 = BLUE;
      kcg_copy_T_String(&_124_Ph3_Label, &_L31_SM1_Phase1);
      _127_PhF_Color = _L32_SM1_Phase1;
      kcg_copy_T_String(&_126_PhF_Label, &_L31_SM1_Phase1);
      _125_Ph3_Color = _L32_SM1_Phase1;
      _121_Ph1_Color = _L34_SM1_Phase1;
      kcg_copy_T_String(&_120_Ph1_Label, &_L33_SM1_Phase1);
      _123_Ph2_Color = _L32_SM1_Phase1;
      _177_SM1_fired = _136_SM1_fired;
      outC->SM1_reset_nxt = _135_SM1_reset_nxt;
      outC->SM1_state_nxt = _134_SM1_state_nxt;
      _181_ChangeStage = _133_ChangeStage;
      outC->Fuel_Out = _128_Fuel_Out;
      outC->PhF_Color = _127_PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &_126_PhF_Label);
      outC->Ph3_Color = _125_Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &_124_Ph3_Label);
      outC->Ph2_Color = _123_Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &_122_Ph2_Label);
      outC->Ph1_Color = _121_Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &_120_Ph1_Label);
      outC->Inclination_Out = _119_Inclination_Out;
      outC->Altitude_Out = _118_Altitude_Out;
      outC->Speed_Out = _117_Speed_Out;
      break;
    case SSM_st_Phase2_SM1 :
      if (IfBlock1_clock_SM1_Phase2) {
        _L11_SM1_Phase2_IfBlock1 = Altitude;
        _L13_SM1_Phase2_IfBlock1 = PHASE2_MAX_ALTITUDE;
        _L9_SM1_Phase2_IfBlock1 = _L11_SM1_Phase2_IfBlock1 >
          _L13_SM1_Phase2_IfBlock1;
        _147_ChangeStage = _L9_SM1_Phase2_IfBlock1;
        _113_ChangeStage = _147_ChangeStage;
      }
      else {
        _L10_SM1_Phase2_IfBlock1 = inC->Manual_StartPhase3;
        _145_ChangeStage = _L10_SM1_Phase2_IfBlock1;
        _113_ChangeStage = _145_ChangeStage;
      }
      br_3_guard_SM1_Phase2 = _113_ChangeStage;
      br_2_guard_SM1_Phase2 = _112_StageFailed;
      if (br_2_guard_SM1_Phase2) {
        _116_SM1_fired = SSM_TR_Phase2_2_SM1;
      }
      else if (br_3_guard_SM1_Phase2) {
        _116_SM1_fired = SSM_TR_Phase2_3_SM1;
      }
      else {
        _116_SM1_fired = SSM_TR_no_trans_SM1;
      }
      if (br_2_guard_SM1_Phase2) {
        _115_SM1_reset_nxt = kcg_true;
      }
      else {
        _115_SM1_reset_nxt = br_3_guard_SM1_Phase2;
      }
      if (br_2_guard_SM1_Phase2) {
        _114_SM1_state_nxt = SSM_st_AutoDestroy_SM1;
      }
      else if (br_3_guard_SM1_Phase2) {
        _114_SM1_state_nxt = SSM_st_Phase3_SM1;
      }
      else {
        _114_SM1_state_nxt = SSM_st_Phase2_SM1;
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
      _108_Fuel_Out = _L54_SM1_Phase2;
      _L43_SM1_Phase2 = Altitude;
      _L42_SM1_Phase2 = (kcg_real) _L43_SM1_Phase2;
      _L40_SM1_Phase2 = Speed;
      _L41_SM1_Phase2 = (kcg_real) _L40_SM1_Phase2;
      _97_Speed_Out = _L41_SM1_Phase2;
      _L37_SM1_Phase2 = Inclination;
      _98_Altitude_Out = _L42_SM1_Phase2;
      _99_Inclination_Out = _L37_SM1_Phase2;
      _L35_SM1_Phase2 = YELLOW;
      kcg_copy_T_String(&_L34_SM1_Phase2, (T_String *) &PHASE_IN_PROCESS);
      kcg_copy_T_String(&_L33_SM1_Phase2, (T_String *) &PHASE_COMPLETE);
      _L31_SM1_Phase2 = GREEN;
      _101_Ph1_Color = _L31_SM1_Phase2;
      kcg_copy_T_String(&_L32_SM1_Phase2, (T_String *) &PHASE_NOT_STARTED);
      _L29_SM1_Phase2 = BLUE;
      _105_Ph3_Color = _L29_SM1_Phase2;
      _103_Ph2_Color = _L35_SM1_Phase2;
      kcg_copy_T_String(&_106_PhF_Label, &_L32_SM1_Phase2);
      kcg_copy_T_String(&_102_Ph2_Label, &_L34_SM1_Phase2);
      _107_PhF_Color = _L29_SM1_Phase2;
      kcg_copy_T_String(&_100_Ph1_Label, &_L33_SM1_Phase2);
      kcg_copy_T_String(&_104_Ph3_Label, &_L32_SM1_Phase2);
      _177_SM1_fired = _116_SM1_fired;
      outC->SM1_reset_nxt = _115_SM1_reset_nxt;
      outC->SM1_state_nxt = _114_SM1_state_nxt;
      _181_ChangeStage = _113_ChangeStage;
      outC->Fuel_Out = _108_Fuel_Out;
      outC->PhF_Color = _107_PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &_106_PhF_Label);
      outC->Ph3_Color = _105_Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &_104_Ph3_Label);
      outC->Ph2_Color = _103_Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &_102_Ph2_Label);
      outC->Ph1_Color = _101_Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &_100_Ph1_Label);
      outC->Inclination_Out = _99_Inclination_Out;
      outC->Altitude_Out = _98_Altitude_Out;
      outC->Speed_Out = _97_Speed_Out;
      break;
    case SSM_st_AutoDestroy_SM1 :
      _88_Fuel_Out = last_Fuel_Out;
      _79_Inclination_Out = last_Inclination_Out;
      _78_Altitude_Out = last_Altitude_Out;
      _77_Speed_Out = last_Speed_Out;
      _96_SM1_fired = _178_SM1_fired_strong;
      _95_SM1_reset_nxt = kcg_false;
      _94_SM1_state_nxt = SSM_st_AutoDestroy_SM1;
      _93_ChangeStage = _L49_SM1_AutoDestroy;
      _L35_SM1_AutoDestroy = RED;
      _81_Ph1_Color = _L35_SM1_AutoDestroy;
      kcg_copy_T_String(&_L36_SM1_AutoDestroy, (T_String *) &PHASE_FAILED);
      kcg_copy_T_String(&_82_Ph2_Label, &_L36_SM1_AutoDestroy);
      _83_Ph2_Color = _L35_SM1_AutoDestroy;
      _87_PhF_Color = _L35_SM1_AutoDestroy;
      kcg_copy_T_String(&_80_Ph1_Label, &_L36_SM1_AutoDestroy);
      kcg_copy_T_String(&_84_Ph3_Label, &_L36_SM1_AutoDestroy);
      kcg_copy_T_String(&_86_PhF_Label, &_L36_SM1_AutoDestroy);
      _85_Ph3_Color = _L35_SM1_AutoDestroy;
      _177_SM1_fired = _96_SM1_fired;
      outC->SM1_reset_nxt = _95_SM1_reset_nxt;
      outC->SM1_state_nxt = _94_SM1_state_nxt;
      _181_ChangeStage = _93_ChangeStage;
      outC->Fuel_Out = _88_Fuel_Out;
      outC->PhF_Color = _87_PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &_86_PhF_Label);
      outC->Ph3_Color = _85_Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &_84_Ph3_Label);
      outC->Ph2_Color = _83_Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &_82_Ph2_Label);
      outC->Ph1_Color = _81_Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &_80_Ph1_Label);
      outC->Inclination_Out = _79_Inclination_Out;
      outC->Altitude_Out = _78_Altitude_Out;
      outC->Speed_Out = _77_Speed_Out;
      break;
    case SSM_st_Phase3_SM1 :
      if (IfBlock1_clock_SM1_Phase3) {
        _L11_SM1_Phase3_IfBlock1 = Altitude;
        _L14_SM1_Phase3_IfBlock1 = PHASE3_MAX_ALTITUDE;
        _L9_SM1_Phase3_IfBlock1 = _L11_SM1_Phase3_IfBlock1 >
          _L14_SM1_Phase3_IfBlock1;
        _143_ChangeStage = _L9_SM1_Phase3_IfBlock1;
        _73_ChangeStage = _143_ChangeStage;
      }
      else {
        _L10_SM1_Phase3_IfBlock1 = inC->Manual_StartPhaseFinal;
        _141_ChangeStage = _L10_SM1_Phase3_IfBlock1;
        _73_ChangeStage = _141_ChangeStage;
      }
      br_3_guard_SM1_Phase3 = _73_ChangeStage;
      br_2_guard_SM1_Phase3 = _72_StageFailed;
      if (br_2_guard_SM1_Phase3) {
        _76_SM1_fired = SSM_TR_Phase3_2_SM1;
      }
      else if (br_3_guard_SM1_Phase3) {
        _76_SM1_fired = SSM_TR_Phase3_3_SM1;
      }
      else {
        _76_SM1_fired = SSM_TR_no_trans_SM1;
      }
      if (br_2_guard_SM1_Phase3) {
        _75_SM1_reset_nxt = kcg_true;
      }
      else {
        _75_SM1_reset_nxt = br_3_guard_SM1_Phase3;
      }
      if (br_2_guard_SM1_Phase3) {
        _74_SM1_state_nxt = SSM_st_AutoDestroy_SM1;
      }
      else if (br_3_guard_SM1_Phase3) {
        _74_SM1_state_nxt = SSM_st_Final_SM1;
      }
      else {
        _74_SM1_state_nxt = SSM_st_Phase3_SM1;
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
      _68_Fuel_Out = _L53_SM1_Phase3;
      _L36_SM1_Phase3 = Speed;
      _L42_SM1_Phase3 = (kcg_real) _L36_SM1_Phase3;
      _L41_SM1_Phase3 = Altitude;
      _L39_SM1_Phase3 = (kcg_real) _L41_SM1_Phase3;
      _58_Altitude_Out = _L39_SM1_Phase3;
      _L38_SM1_Phase3 = Inclination;
      _59_Inclination_Out = _L38_SM1_Phase3;
      _57_Speed_Out = _L42_SM1_Phase3;
      kcg_copy_T_String(&_L35_SM1_Phase3, (T_String *) &PHASE_IN_PROCESS);
      _L34_SM1_Phase3 = GREEN;
      _63_Ph2_Color = _L34_SM1_Phase3;
      kcg_copy_T_String(&_L31_SM1_Phase3, (T_String *) &PHASE_COMPLETE);
      kcg_copy_T_String(&_60_Ph1_Label, &_L31_SM1_Phase3);
      _61_Ph1_Color = _L34_SM1_Phase3;
      _L33_SM1_Phase3 = YELLOW;
      _65_Ph3_Color = _L33_SM1_Phase3;
      _L32_SM1_Phase3 = BLUE;
      kcg_copy_T_String(&_62_Ph2_Label, &_L31_SM1_Phase3);
      kcg_copy_T_String(&_L30_SM1_Phase3, (T_String *) &PHASE_NOT_STARTED);
      kcg_copy_T_String(&_64_Ph3_Label, &_L35_SM1_Phase3);
      _67_PhF_Color = _L32_SM1_Phase3;
      kcg_copy_T_String(&_66_PhF_Label, &_L30_SM1_Phase3);
      _177_SM1_fired = _76_SM1_fired;
      outC->SM1_reset_nxt = _75_SM1_reset_nxt;
      outC->SM1_state_nxt = _74_SM1_state_nxt;
      _181_ChangeStage = _73_ChangeStage;
      outC->Fuel_Out = _68_Fuel_Out;
      outC->PhF_Color = _67_PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &_66_PhF_Label);
      outC->Ph3_Color = _65_Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &_64_Ph3_Label);
      outC->Ph2_Color = _63_Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &_62_Ph2_Label);
      outC->Ph1_Color = _61_Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &_60_Ph1_Label);
      outC->Inclination_Out = _59_Inclination_Out;
      outC->Altitude_Out = _58_Altitude_Out;
      outC->Speed_Out = _57_Speed_Out;
      break;
    case SSM_st_Final_SM1 :
      br_3_guard_SM1_Final = _52_StageFailed;
      if (IfBlock1_clock_SM1_Final) {
        _L7_SM1_Final_IfBlock1 = PhaseCompleted_SM1_Final;
        _139_ChangeStage = _L7_SM1_Final_IfBlock1;
        _53_ChangeStage = _139_ChangeStage;
      }
      else {
        _L2_SM1_Final_IfBlock1 = inC->Manual_SatLaunch;
        _137_ChangeStage = _L2_SM1_Final_IfBlock1;
        _53_ChangeStage = _137_ChangeStage;
      }
      br_2_guard_SM1_Final = _53_ChangeStage;
      if (br_2_guard_SM1_Final) {
        _56_SM1_fired = SSM_TR_Final_2_SM1;
      }
      else if (br_3_guard_SM1_Final) {
        _56_SM1_fired = SSM_TR_Final_3_SM1;
      }
      else {
        _56_SM1_fired = SSM_TR_no_trans_SM1;
      }
      if (br_2_guard_SM1_Final) {
        _55_SM1_reset_nxt = kcg_true;
      }
      else {
        _55_SM1_reset_nxt = br_3_guard_SM1_Final;
      }
      if (br_2_guard_SM1_Final) {
        _54_SM1_state_nxt = SSM_st_Launched_SM1;
      }
      else if (br_3_guard_SM1_Final) {
        _54_SM1_state_nxt = SSM_st_AutoDestroy_SM1;
      }
      else {
        _54_SM1_state_nxt = SSM_st_Final_SM1;
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
      _47_PhF_Color = _L122_SM1_Final;
      kcg_copy_T_String(&_L121_SM1_Final, (T_String *) &PHASE_IN_PROCESS);
      kcg_copy_T_String(&_46_PhF_Label, &_L121_SM1_Final);
      _L72_SM1_Final = Altitude;
      _L74_SM1_Final = (kcg_real) _L72_SM1_Final;
      _38_Altitude_Out = _L74_SM1_Final;
      _L73_SM1_Final = Speed;
      _L69_SM1_Final = Inclination;
      _39_Inclination_Out = _L69_SM1_Final;
      _L71_SM1_Final = (kcg_real) _L73_SM1_Final;
      _37_Speed_Out = _L71_SM1_Final;
      kcg_copy_T_String(&_L68_SM1_Final, (T_String *) &PHASE_COMPLETE);
      kcg_copy_T_String(&_42_Ph2_Label, &_L68_SM1_Final);
      kcg_copy_T_String(&_40_Ph1_Label, &_L68_SM1_Final);
      _L67_SM1_Final = GREEN;
      _45_Ph3_Color = _L67_SM1_Final;
      _41_Ph1_Color = _L67_SM1_Final;
      _43_Ph2_Color = _L67_SM1_Final;
      kcg_copy_T_String(&_44_Ph3_Label, &_L68_SM1_Final);
      _177_SM1_fired = _56_SM1_fired;
      outC->SM1_reset_nxt = _55_SM1_reset_nxt;
      outC->SM1_state_nxt = _54_SM1_state_nxt;
      _181_ChangeStage = _53_ChangeStage;
      outC->Fuel_Out = _48_Fuel_Out;
      outC->PhF_Color = _47_PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &_46_PhF_Label);
      outC->Ph3_Color = _45_Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &_44_Ph3_Label);
      outC->Ph2_Color = _43_Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &_42_Ph2_Label);
      outC->Ph1_Color = _41_Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &_40_Ph1_Label);
      outC->Inclination_Out = _39_Inclination_Out;
      outC->Altitude_Out = _38_Altitude_Out;
      outC->Speed_Out = _37_Speed_Out;
      break;
    case SSM_st_Ground_SM1 :
      _36_SM1_fired = _178_SM1_fired_strong;
      _35_SM1_reset_nxt = kcg_false;
      _34_SM1_state_nxt = SSM_st_Ground_SM1;
      _L39_SM1_Ground = TANK_FULL;
      _28_Fuel_Out = _L39_SM1_Ground;
      _33_ChangeStage = _L31_SM1_Ground;
      _L23_SM1_Ground = Speed;
      _L24_SM1_Ground = (kcg_real) _L23_SM1_Ground;
      _17_Speed_Out = _L24_SM1_Ground;
      _L25_SM1_Ground = Altitude;
      _L21_SM1_Ground = Inclination;
      _19_Inclination_Out = _L21_SM1_Ground;
      _L22_SM1_Ground = (kcg_real) _L25_SM1_Ground;
      _18_Altitude_Out = _L22_SM1_Ground;
      _L16_SM1_Ground = BLUE;
      kcg_copy_T_String(&_L15_SM1_Ground, (T_String *) &PHASE_NOT_STARTED);
      _23_Ph2_Color = _L16_SM1_Ground;
      _21_Ph1_Color = _L16_SM1_Ground;
      kcg_copy_T_String(&_26_PhF_Label, &_L15_SM1_Ground);
      kcg_copy_T_String(&_24_Ph3_Label, &_L15_SM1_Ground);
      kcg_copy_T_String(&_22_Ph2_Label, &_L15_SM1_Ground);
      kcg_copy_T_String(&_20_Ph1_Label, &_L15_SM1_Ground);
      _25_Ph3_Color = _L16_SM1_Ground;
      _27_PhF_Color = _L16_SM1_Ground;
      _177_SM1_fired = _36_SM1_fired;
      outC->SM1_reset_nxt = _35_SM1_reset_nxt;
      outC->SM1_state_nxt = _34_SM1_state_nxt;
      _181_ChangeStage = _33_ChangeStage;
      outC->Fuel_Out = _28_Fuel_Out;
      outC->PhF_Color = _27_PhF_Color;
      kcg_copy_T_String(&outC->PhF_Label, &_26_PhF_Label);
      outC->Ph3_Color = _25_Ph3_Color;
      kcg_copy_T_String(&outC->Ph3_Label, &_24_Ph3_Label);
      outC->Ph2_Color = _23_Ph2_Color;
      kcg_copy_T_String(&outC->Ph2_Label, &_22_Ph2_Label);
      outC->Ph1_Color = _21_Ph1_Color;
      kcg_copy_T_String(&outC->Ph1_Label, &_20_Ph1_Label);
      outC->Inclination_Out = _19_Inclination_Out;
      outC->Altitude_Out = _18_Altitude_Out;
      outC->Speed_Out = _17_Speed_Out;
      break;
    case SSM_st_Launched_SM1 :
      Fuel_Out = last_Fuel_Out;
      Inclination_Out = last_Inclination_Out;
      Altitude_Out = last_Altitude_Out;
      Speed_Out = last_Speed_Out;
      SM1_fired = _178_SM1_fired_strong;
      SM1_reset_nxt = kcg_false;
      SM1_state_nxt = SSM_st_Launched_SM1;
      ChangeStage = _L6_SM1_Launched;
      _L5_SM1_Launched = GREEN;
      kcg_copy_T_String(&_L4_SM1_Launched, (T_String *) &PHASE_COMPLETE);
      kcg_copy_T_String(&Ph2_Label, &_L4_SM1_Launched);
      Ph2_Color = _L5_SM1_Launched;
      Ph1_Color = _L5_SM1_Launched;
      Ph3_Color = _L5_SM1_Launched;
      kcg_copy_T_String(&PhF_Label, &_L4_SM1_Launched);
      kcg_copy_T_String(&Ph1_Label, &_L4_SM1_Launched);
      kcg_copy_T_String(&Ph3_Label, &_L4_SM1_Launched);
      PhF_Color = _L5_SM1_Launched;
      _177_SM1_fired = SM1_fired;
      outC->SM1_reset_nxt = SM1_reset_nxt;
      outC->SM1_state_nxt = SM1_state_nxt;
      _181_ChangeStage = ChangeStage;
      outC->Fuel_Out = Fuel_Out;
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
  switch (_179_SM1_state_act) {
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
** Generation date: 2014-10-28T00:42:05
*************************************************************$ */

