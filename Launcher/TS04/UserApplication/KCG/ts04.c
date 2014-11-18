/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/hoffsi/dev/ita/scade/ce235/Launcher/TS04/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-10-24T11:03:18
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ts04.h"

void ts04_reset(outC_ts04 *outC)
{
  outC->init = kcg_true;
}

/* ts04 */
void ts04(inC_ts04 *inC, outC_ts04 *outC)
{
  /* cor_status2::_L4 */ kcg_int _L4_4_3;
  /* cor_status2::_L3 */ kcg_int _147__L3_4_3;
  /* cor_status2::_L2 */ kcg_bool _146__L2_4_3;
  /* cor_status2::_L1 */ kcg_int _145__L1_4_3;
  /* cor_status2::Output1 */ kcg_int Output1_4_3;
  /* cor_status2::Input1 */ kcg_bool Input1_4_3;
  /* cor_status2::_L4 */ kcg_int _L4_3_3;
  /* cor_status2::_L3 */ kcg_int _144__L3_3_3;
  /* cor_status2::_L2 */ kcg_bool _143__L2_3_3;
  /* cor_status2::_L1 */ kcg_int _142__L1_3_3;
  /* cor_status2::Output1 */ kcg_int Output1_3_3;
  /* cor_status2::Input1 */ kcg_bool Input1_3_3;
  /* cor_status2::_L4 */ kcg_int _L4_2_3;
  /* cor_status2::_L3 */ kcg_int _141__L3_2_3;
  /* cor_status2::_L2 */ kcg_bool _140__L2_2_3;
  /* cor_status2::_L1 */ kcg_int _139__L1_2_3;
  /* cor_status2::Output1 */ kcg_int Output1_2_3;
  /* cor_status2::Input1 */ kcg_bool Input1_2_3;
  /* cor_status2::_L4 */ kcg_int _L4_1_3;
  /* cor_status2::_L3 */ kcg_int _138__L3_1_3;
  /* cor_status2::_L2 */ kcg_bool _137__L2_1_3;
  /* cor_status2::_L1 */ kcg_int _136__L1_1_3;
  /* cor_status2::Output1 */ kcg_int Output1_1_3;
  /* cor_status2::Input1 */ kcg_bool Input1_1_3;
  /* ff::_L3 */ kcg_bool _L3_4_3;
  /* ff::_L2 */ kcg_bool _L2_4_3;
  /* ff::_L1 */ kcg_bool _L1_4_3;
  /* ff::Out */ kcg_bool Out_4_3;
  /* ff::Clcck */ kcg_bool Clcck_4_3;
  /* ff::In */ kcg_bool In_4_3;
  /* ff::_L3 */ kcg_bool _L3_3_3;
  /* ff::_L2 */ kcg_bool _L2_3_3;
  /* ff::_L1 */ kcg_bool _L1_3_3;
  /* ff::Out */ kcg_bool Out_3_3;
  /* ff::Clcck */ kcg_bool Clcck_3_3;
  /* ff::In */ kcg_bool In_3_3;
  /* ff::_L3 */ kcg_bool _L3_2_3;
  /* ff::_L2 */ kcg_bool _L2_2_3;
  /* ff::_L1 */ kcg_bool _L1_2_3;
  /* ff::Out */ kcg_bool Out_2_3;
  /* ff::Clcck */ kcg_bool Clcck_2_3;
  /* ff::In */ kcg_bool In_2_3;
  /* ff::_L3 */ kcg_bool _L3_1_3;
  /* ff::_L2 */ kcg_bool _L2_1_3;
  /* ff::_L1 */ kcg_bool _L1_1_3;
  /* ff::Out */ kcg_bool Out_1_3;
  /* ff::Clcck */ kcg_bool Clcck_1_3;
  /* ff::In */ kcg_bool In_1_3;
  /* juan::_L7 */ kcg_bool _L7_3;
  /* juan::_L6 */ kcg_bool _L6_3;
  /* juan::_L5 */ kcg_bool _L5_3;
  /* juan::_L4 */ kcg_bool _L4_3;
  /* juan::_L1 */ kcg_bool _L1_3;
  /* juan::_L10 */ kcg_bool _L10_3;
  /* juan::_L11 */ kcg_bool _L11_3;
  /* juan::_L12 */ kcg_bool _L12_3;
  /* juan::_L14 */ kcg_bool _L14_3;
  /* juan::_L15 */ kcg_int _L15_3;
  /* juan::_L16 */ kcg_int _L16_3;
  /* juan::_L18 */ kcg_int _L18_3;
  /* juan::_L20 */ kcg_int _L20_3;
  /* juan::color_fuel4 */ kcg_int color_fuel4_3;
  /* juan::color_fuel3 */ kcg_int color_fuel3_3;
  /* juan::color_fuel2 */ kcg_int color_fuel2_3;
  /* juan::color_fuel1 */ kcg_int color_fuel1_3;
  /* juan::fuel_stage1 */ kcg_bool fuel_stage1_3;
  /* juan::fuel_stage2 */ kcg_bool fuel_stage2_3;
  /* juan::fuel_stage3 */ kcg_bool fuel_stage3_3;
  /* juan::fuel_stage4 */ kcg_bool fuel_stage4_3;
  /* juan::verify_fuel */ kcg_bool verify_fuel_3;
  /* cor_status2::_L4 */ kcg_int _135__L4_1_1;
  /* cor_status2::_L3 */ kcg_int _134__L3_1_1;
  /* cor_status2::_L2 */ kcg_bool _133__L2_1_1;
  /* cor_status2::_L1 */ kcg_int _132__L1_1_1;
  /* cor_status2::Output1 */ kcg_int _131_Output1_1_1;
  /* cor_status2::Input1 */ kcg_bool _130_Input1_1_1;
  /* ff::_L3 */ kcg_bool _129__L3_1_1;
  /* ff::_L2 */ kcg_bool _128__L2_1_1;
  /* ff::_L1 */ kcg_bool _127__L1_1_1;
  /* ff::Out */ kcg_bool _126_Out_1_1;
  /* ff::Clcck */ kcg_bool _125_Clcck_1_1;
  /* ff::In */ kcg_bool _124_In_1_1;
  /* joaonones::_L1 */ kcg_bool _L1_1123;
  /* joaonones::_L2 */ kcg_int _L2_1122;
  /* joaonones::_L3 */ kcg_bool _L3_1121;
  /* joaonones::_L4 */ kcg_bool _L4_1120;
  /* joaonones::CorCameraFundo */ kcg_int CorCameraFundo_1;
  /* joaonones::StatusCamera */ kcg_bool StatusCamera_1;
  /* joaonones::VerificarCamera */ kcg_bool VerificarCamera_1;
  /* switch::_L1 */ kcg_bool _119__L1_1_1;
  /* switch::_L2 */ kcg_bool _118__L2_1_1;
  /* switch::_L4 */ kcg_bool _117__L4_1_1;
  /* switch::Output1 */ kcg_bool _116_Output1_1_1;
  /* switch::Input1 */ kcg_bool _115_Input1_1_1;
  /* ComandSatelite::_L1 */ kcg_bool _L1_1114;
  /* ComandSatelite::_L4 */ kcg_bool _L4_1113;
  /* ComandSatelite::_L5 */ kcg_bool _L5_1112;
  /* ComandSatelite::_L6 */ kcg_bool _L6_1111;
  /* ComandSatelite::sinal */ kcg_bool sinal_1;
  /* ComandSatelite::confirmacao */ kcg_bool confirmacao_1;
  /* ComandSatelite::enviarComando */ kcg_bool enviarComando_1;
  /* switch::_L1 */ kcg_bool _110__L1_1_1;
  /* switch::_L2 */ kcg_bool _109__L2_1_1;
  /* switch::_L4 */ kcg_bool _108__L4_1_1;
  /* switch::Output1 */ kcg_bool _107_Output1_1_1;
  /* switch::Input1 */ kcg_bool _106_Input1_1_1;
  /* cor_status2::_L4 */ kcg_int _105__L4_1_1;
  /* cor_status2::_L3 */ kcg_int _104__L3_1_1;
  /* cor_status2::_L2 */ kcg_bool _103__L2_1_1;
  /* cor_status2::_L1 */ kcg_int _102__L1_1_1;
  /* cor_status2::Output1 */ kcg_int _101_Output1_1_1;
  /* cor_status2::Input1 */ kcg_bool _100_Input1_1_1;
  /* alertas::_L19 */ kcg_bool _99__L19_1;
  /* alertas::_L26 */ kcg_int _L26_1;
  /* alertas::_L27 */ kcg_bool _98__L27_1;
  /* alertas::_L28 */ kcg_bool _L28_1;
  /* alertas::CorAlertaGeral */ kcg_int CorAlertaGeral_1;
  /* alertas::AlertaGeral */ kcg_bool AlertaGeral_1;
  /* cor_status2::_L4 */ kcg_int _97__L4_4_1;
  /* cor_status2::_L3 */ kcg_int _96__L3_4_1;
  /* cor_status2::_L2 */ kcg_bool _95__L2_4_1;
  /* cor_status2::_L1 */ kcg_int _94__L1_4_1;
  /* cor_status2::Output1 */ kcg_int _93_Output1_4_1;
  /* cor_status2::Input1 */ kcg_bool _92_Input1_4_1;
  /* cor_status2::_L4 */ kcg_int _91__L4_3_1;
  /* cor_status2::_L3 */ kcg_int _90__L3_3_1;
  /* cor_status2::_L2 */ kcg_bool _89__L2_3_1;
  /* cor_status2::_L1 */ kcg_int _88__L1_3_1;
  /* cor_status2::Output1 */ kcg_int _87_Output1_3_1;
  /* cor_status2::Input1 */ kcg_bool _86_Input1_3_1;
  /* cor_status2::_L4 */ kcg_int _85__L4_2_1;
  /* cor_status2::_L3 */ kcg_int _84__L3_2_1;
  /* cor_status2::_L2 */ kcg_bool _83__L2_2_1;
  /* cor_status2::_L1 */ kcg_int _82__L1_2_1;
  /* cor_status2::Output1 */ kcg_int _81_Output1_2_1;
  /* cor_status2::Input1 */ kcg_bool _80_Input1_2_1;
  /* cor_status2::_L4 */ kcg_int _79__L4_1_1;
  /* cor_status2::_L3 */ kcg_int _78__L3_1_1;
  /* cor_status2::_L2 */ kcg_bool _77__L2_1_1;
  /* cor_status2::_L1 */ kcg_int _76__L1_1_1;
  /* cor_status2::Output1 */ kcg_int _75_Output1_1_1;
  /* cor_status2::Input1 */ kcg_bool _74_Input1_1_1;
  /* ff::_L3 */ kcg_bool _73__L3_4_1;
  /* ff::_L2 */ kcg_bool _72__L2_4_1;
  /* ff::_L1 */ kcg_bool _71__L1_4_1;
  /* ff::Out */ kcg_bool Out_4_1;
  /* ff::Clcck */ kcg_bool Clcck_4_1;
  /* ff::In */ kcg_bool In_4_1;
  /* ff::_L3 */ kcg_bool _70__L3_3_1;
  /* ff::_L2 */ kcg_bool _69__L2_3_1;
  /* ff::_L1 */ kcg_bool _68__L1_3_1;
  /* ff::Out */ kcg_bool Out_3_1;
  /* ff::Clcck */ kcg_bool Clcck_3_1;
  /* ff::In */ kcg_bool In_3_1;
  /* ff::_L3 */ kcg_bool _67__L3_2_1;
  /* ff::_L2 */ kcg_bool _66__L2_2_1;
  /* ff::_L1 */ kcg_bool _65__L1_2_1;
  /* ff::Out */ kcg_bool Out_2_1;
  /* ff::Clcck */ kcg_bool Clcck_2_1;
  /* ff::In */ kcg_bool In_2_1;
  /* ff::_L3 */ kcg_bool _64__L3_1_1;
  /* ff::_L2 */ kcg_bool _63__L2_1_1;
  /* ff::_L1 */ kcg_bool _62__L1_1_1;
  /* ff::Out */ kcg_bool _61_Out_1_1;
  /* ff::Clcck */ kcg_bool _60_Clcck_1_1;
  /* ff::In */ kcg_bool _59_In_1_1;
  /* thiagoribeiro::_L10 */ kcg_bool _58__L10_1;
  /* thiagoribeiro::_L11 */ kcg_bool _57__L11_1;
  /* thiagoribeiro::_L12 */ kcg_bool _56__L12_1;
  /* thiagoribeiro::_L14 */ kcg_bool _L14_1;
  /* thiagoribeiro::_L15 */ kcg_int _55__L15_1;
  /* thiagoribeiro::_L16 */ kcg_int _54__L16_1;
  /* thiagoribeiro::_L18 */ kcg_int _53__L18_1;
  /* thiagoribeiro::_L20 */ kcg_int _L20_1;
  /* thiagoribeiro::_L21 */ kcg_bool _L21_1;
  /* thiagoribeiro::_L22 */ kcg_bool _52__L22_1;
  /* thiagoribeiro::_L23 */ kcg_bool _51__L23_1;
  /* thiagoribeiro::_L24 */ kcg_bool _50__L24_1;
  /* thiagoribeiro::_L25 */ kcg_bool _49__L25_1;
  /* thiagoribeiro::Estagio1CorFundo */ kcg_int Estagio1CorFundo_1;
  /* thiagoribeiro::Estagio2CorFundo */ kcg_int Estagio2CorFundo_1;
  /* thiagoribeiro::Estagio3CorFundo */ kcg_int Estagio3CorFundo_1;
  /* thiagoribeiro::Estagio4CorFundo */ kcg_int Estagio4CorFundo_1;
  /* thiagoribeiro::Estagio1_Ligado */ kcg_bool Estagio1_Ligado_1;
  /* thiagoribeiro::Estagio2_Ligado */ kcg_bool Estagio2_Ligado_1;
  /* thiagoribeiro::Estagio3_Ligado */ kcg_bool Estagio3_Ligado_1;
  /* thiagoribeiro::Estagio4_Ligado */ kcg_bool Estagio4_Ligado_1;
  /* thiagoribeiro::VerificarEstagios */ kcg_bool VerificarEstagios_1;
  /* cor_status2::_L4 */ kcg_int _48__L4_1_1;
  /* cor_status2::_L3 */ kcg_int _47__L3_1_1;
  /* cor_status2::_L2 */ kcg_bool _46__L2_1_1;
  /* cor_status2::_L1 */ kcg_int _45__L1_1_1;
  /* cor_status2::Output1 */ kcg_int _44_Output1_1_1;
  /* cor_status2::Input1 */ kcg_bool _43_Input1_1_1;
  /* ff::_L3 */ kcg_bool _42__L3_1_1;
  /* ff::_L2 */ kcg_bool _41__L2_1_1;
  /* ff::_L1 */ kcg_bool _40__L1_1_1;
  /* ff::Out */ kcg_bool Out_1_1;
  /* ff::Clcck */ kcg_bool Clcck_1_1;
  /* ff::In */ kcg_bool In_1_1;
  /* lucianoyukio::_L1 */ kcg_bool _L1_139;
  /* lucianoyukio::_L2 */ kcg_int _L2_138;
  /* lucianoyukio::_L3 */ kcg_bool _L3_137;
  /* lucianoyukio::_L4 */ kcg_bool _L4_136;
  /* lucianoyukio::CorComputadorFundo */ kcg_int CorComputadorFundo_1;
  /* lucianoyukio::StatusComputador */ kcg_bool StatusComputador_1;
  /* lucianoyukio::VerificarComputador */ kcg_bool VerificarComputador_1;
  /* digital::count_down::_L1 */ kcg_bool _35__L1_1_1;
  /* digital::count_down::_L2 */ kcg_int _34__L2_1_1;
  /* digital::count_down::_L3 */ kcg_int _33__L3_1_1;
  /* digital::count_down::_L7 */ kcg_int _L7_1_1;
  /* digital::count_down::_L8 */ kcg_int _L8_1_1;
  /* digital::count_down::_L13 */ kcg_int _L13_1_1;
  /* digital::count_down::cpt */ kcg_int cpt_1_1;
  /* digital::count_down::N */ kcg_int N_1_1;
  /* digital::count_down::Reset */ kcg_bool Reset_1_1;
  /* lucasamaral::val */ kcg_real val_1;
  /* lucasamaral::_L2 */ kcg_int _L2_1;
  /* lucasamaral::_L3 */ kcg_int _L3_1;
  /* lucasamaral::_L4 */ kcg_int _L4_132;
  /* lucasamaral::_L6 */ kcg_int _L6_131;
  /* lucasamaral::_L7 */ kcg_int _L7_130;
  /* lucasamaral::_L9 */ kcg_bool _L9_1;
  /* lucasamaral::_L10 */ kcg_int _29__L10_1;
  /* lucasamaral::_L11 */ kcg_real _28__L11_1;
  /* lucasamaral::_L12 */ kcg_bool _L12_1;
  /* lucasamaral::_L13 */ kcg_int _27__L13_1;
  /* lucasamaral::_L15 */ kcg_real _26__L15_1;
  /* lucasamaral::_L16 */ kcg_real _25__L16_1;
  /* lucasamaral::_L17 */ kcg_bool _L17_1;
  /* lucasamaral::_L18 */ kcg_real _L18_1;
  /* lucasamaral::_L19 */ kcg_real _L19_1;
  /* lucasamaral::FimContagem */ kcg_bool FimContagem_1;
  /* lucasamaral::ValContagem */ kcg_real ValContagem_1;
  /* lucasamaral::ToogleIniciar */ kcg_int ToogleIniciar_1;
  /* switch::_L1 */ kcg_bool _24__L1_6_1;
  /* switch::_L2 */ kcg_bool _23__L2_6_1;
  /* switch::_L4 */ kcg_bool _22__L4_6_1;
  /* switch::Output1 */ kcg_bool Output1_6_1;
  /* switch::Input1 */ kcg_bool Input1_6_1;
  /* enable::_L1 */ kcg_bool _L1_6_1;
  /* enable::_L2 */ kcg_int _L2_6_1;
  /* enable::_L3 */ kcg_int _L3_6_1;
  /* enable::_L4 */ kcg_int _L4_6_1;
  /* enable::_L5 */ kcg_bool _L5_6_1;
  /* enable::_L6 */ kcg_bool _L6_6_1;
  /* enable::Enabled */ kcg_int Enabled_6_1;
  /* enable::Status2 */ kcg_bool Status2_6_1;
  /* enable::Status1 */ kcg_bool Status1_6_1;
  /* enable::_L1 */ kcg_bool _21__L1_5_1;
  /* enable::_L2 */ kcg_int _20__L2_5_1;
  /* enable::_L3 */ kcg_int _L3_5_1;
  /* enable::_L4 */ kcg_int _19__L4_5_1;
  /* enable::_L5 */ kcg_bool _L5_5_1;
  /* enable::_L6 */ kcg_bool _L6_5_1;
  /* enable::Enabled */ kcg_int Enabled_5_1;
  /* enable::Status2 */ kcg_bool Status2_5_1;
  /* enable::Status1 */ kcg_bool Status1_5_1;
  /* switch::_L1 */ kcg_bool _L1_5_1;
  /* switch::_L2 */ kcg_bool _L2_5_1;
  /* switch::_L4 */ kcg_bool _L4_5_1;
  /* switch::Output1 */ kcg_bool Output1_5_1;
  /* switch::Input1 */ kcg_bool Input1_5_1;
  /* cor_status2::_L4 */ kcg_int _L4_4_1;
  /* cor_status2::_L3 */ kcg_int _L3_4_1;
  /* cor_status2::_L2 */ kcg_bool _L2_4_1;
  /* cor_status2::_L1 */ kcg_int _L1_4_1;
  /* cor_status2::Output1 */ kcg_int Output1_4_1;
  /* cor_status2::Input1 */ kcg_bool Input1_4_1;
  /* cor_status2::_L4 */ kcg_int _L4_3_1;
  /* cor_status2::_L3 */ kcg_int _L3_3_1;
  /* cor_status2::_L2 */ kcg_bool _L2_3_1;
  /* cor_status2::_L1 */ kcg_int _L1_3_1;
  /* cor_status2::Output1 */ kcg_int Output1_3_1;
  /* cor_status2::Input1 */ kcg_bool Input1_3_1;
  /* cor_status2::_L4 */ kcg_int _18__L4_2_1;
  /* cor_status2::_L3 */ kcg_int _17__L3_2_1;
  /* cor_status2::_L2 */ kcg_bool _16__L2_2_1;
  /* cor_status2::_L1 */ kcg_int _15__L1_2_1;
  /* cor_status2::Output1 */ kcg_int _14_Output1_2_1;
  /* cor_status2::Input1 */ kcg_bool _13_Input1_2_1;
  /* cor_status2::_L4 */ kcg_int _12__L4_1_1;
  /* cor_status2::_L3 */ kcg_int _11__L3_1_1;
  /* cor_status2::_L2 */ kcg_bool _10__L2_1_1;
  /* cor_status2::_L1 */ kcg_int _9__L1_1_1;
  /* cor_status2::Output1 */ kcg_int _8_Output1_1_1;
  /* cor_status2::Input1 */ kcg_bool _7_Input1_1_1;
  /* enable::_L1 */ kcg_bool _6__L1_2_1;
  /* enable::_L2 */ kcg_int _5__L2_2_1;
  /* enable::_L3 */ kcg_int _L3_2_1;
  /* enable::_L4 */ kcg_int _4__L4_2_1;
  /* enable::_L5 */ kcg_bool _L5_2_1;
  /* enable::_L6 */ kcg_bool _L6_2_1;
  /* enable::Enabled */ kcg_int Enabled_2_1;
  /* enable::Status2 */ kcg_bool Status2_2_1;
  /* enable::Status1 */ kcg_bool Status1_2_1;
  /* switch::_L1 */ kcg_bool _L1_2_1;
  /* switch::_L2 */ kcg_bool _L2_2_1;
  /* switch::_L4 */ kcg_bool _L4_2_1;
  /* switch::Output1 */ kcg_bool Output1_2_1;
  /* switch::Input1 */ kcg_bool Input1_2_1;
  /* switch::_L1 */ kcg_bool _3__L1_1_1;
  /* switch::_L2 */ kcg_bool _2__L2_1_1;
  /* switch::_L4 */ kcg_bool _1__L4_1_1;
  /* switch::Output1 */ kcg_bool Output1_1_1;
  /* switch::Input1 */ kcg_bool Input1_1_1;
  /* enable::_L1 */ kcg_bool _L1_1_1;
  /* enable::_L2 */ kcg_int _L2_1_1;
  /* enable::_L3 */ kcg_int _L3_1_1;
  /* enable::_L4 */ kcg_int _L4_1_1;
  /* enable::_L5 */ kcg_bool _L5_1_1;
  /* enable::_L6 */ kcg_bool _L6_1_1;
  /* enable::Enabled */ kcg_int Enabled_1_1;
  /* enable::Status2 */ kcg_bool Status2_1_1;
  /* enable::Status1 */ kcg_bool Status1_1_1;
  /* us18::dph4 */ kcg_bool dph4_1;
  /* us18::dph3 */ kcg_bool dph3_1;
  /* us18::dph2 */ kcg_bool dph2_1;
  /* us18::dph1 */ kcg_bool dph1_1;
  /* us18::_L29 */ kcg_bool _L29_1;
  /* us18::_L27 */ kcg_bool _L27_1;
  /* us18::_L25 */ kcg_bool _L25_1;
  /* us18::_L24 */ kcg_bool _L24_1;
  /* us18::_L23 */ kcg_bool _L23_1;
  /* us18::_L22 */ kcg_bool _L22_1;
  /* us18::_L16 */ kcg_bool _L16_1;
  /* us18::_L15 */ kcg_bool _L15_1;
  /* us18::_L13 */ kcg_bool _L13_1;
  /* us18::_L11 */ kcg_bool _L11_1;
  /* us18::_L10 */ kcg_bool _L10_1;
  /* us18::_L7 */ kcg_bool _L7_1;
  /* us18::_L6 */ kcg_bool _L6_1;
  /* us18::_L5 */ kcg_bool _L5_1;
  /* us18::_L4 */ kcg_bool _L4_1;
  /* us18::_L1 */ kcg_bool _L1_1;
  /* us18::_L33 */ kcg_bool _L33_1;
  /* us18::_L34 */ kcg_int _L34_1;
  /* us18::_L35 */ kcg_bool _L35_1;
  /* us18::_L36 */ kcg_bool _L36_1;
  /* us18::_L37 */ kcg_bool _L37_1;
  /* us18::_L38 */ kcg_int _L38_1;
  /* us18::_L39 */ kcg_int _L39_1;
  /* us18::_L48 */ kcg_int _L48_1;
  /* us18::_L49 */ kcg_int _L49_1;
  /* us18::_L50 */ kcg_int _L50_1;
  /* us18::_L51 */ kcg_bool _L51_1;
  /* us18::_L55 */ kcg_int _L55_1;
  /* us18::_L54 */ kcg_bool _L54_1;
  /* us18::_L56 */ kcg_bool _L56_1;
  /* us18::_L58 */ kcg_bool _L58_1;
  /* us18::_L57 */ kcg_int _L57_1;
  /* us18::_L60 */ kcg_bool _L60_1;
  /* us18::Ph4Enabled */ kcg_int Ph4Enabled_1;
  /* us18::Ph3Enabled */ kcg_int Ph3Enabled_1;
  /* us18::Ph2Enabled */ kcg_int Ph2Enabled_1;
  /* us18::Ph1Enabled */ kcg_int Ph1Enabled_1;
  /* us18::CorPh4 */ kcg_int CorPh4_1;
  /* us18::CorPh3 */ kcg_int CorPh3_1;
  /* us18::CorPh2 */ kcg_int CorPh2_1;
  /* us18::CorPh1 */ kcg_int CorPh1_1;
  /* us18::DesacoplarPh4 */ kcg_bool DesacoplarPh4_1;
  /* us18::DesacoplarPh3 */ kcg_bool DesacoplarPh3_1;
  /* us18::DesacoplarPh2 */ kcg_bool DesacoplarPh2_1;
  /* us18::DesacoplarPh1 */ kcg_bool DesacoplarPh1_1;
  /* us18::Automatico */ kcg_bool Automatico_1;
  /* ts04::_L8 */ kcg_bool _L8;
  /* ts04::_L7 */ kcg_bool _L7;
  /* ts04::_L3 */ kcg_int _L3;
  /* ts04::_L4 */ kcg_int _L4;
  /* ts04::_L5 */ kcg_int _L5;
  /* ts04::_L6 */ kcg_int _L6;
  /* ts04::_L2 */ kcg_bool _L2;
  /* ts04::_L1 */ kcg_bool _L1;
  /* ts04::_L9 */ kcg_bool _L9;
  /* ts04::_L10 */ kcg_bool _L10;
  /* ts04::_L14 */ kcg_int _L14;
  /* ts04::_L12 */ kcg_real _L12;
  /* ts04::_L13 */ kcg_bool _L13;
  /* ts04::_L17 */ kcg_int _L17;
  /* ts04::_L16 */ kcg_bool _L16;
  /* ts04::_L15 */ kcg_bool _L15;
  /* ts04::_L26 */ kcg_bool _L26;
  /* ts04::_L25 */ kcg_bool _L25;
  /* ts04::_L21 */ kcg_int _L21;
  /* ts04::_L22 */ kcg_int _L22;
  /* ts04::_L23 */ kcg_int _L23;
  /* ts04::_L24 */ kcg_int _L24;
  /* ts04::_L20 */ kcg_bool _L20;
  /* ts04::_L19 */ kcg_bool _L19;
  /* ts04::_L18 */ kcg_bool _L18;
  /* ts04::_L27 */ kcg_bool _L27;
  /* ts04::_L54 */ kcg_bool _L54;
  /* ts04::_L53 */ kcg_bool _L53;
  /* ts04::_L52 */ kcg_bool _L52;
  /* ts04::_L57 */ kcg_bool _L57;
  /* ts04::_L56 */ kcg_bool _L56;
  /* ts04::_L55 */ kcg_int _L55;
  /* ts04::_L66 */ kcg_bool _L66;
  /* ts04::_L65 */ kcg_bool _L65;
  /* ts04::_L64 */ kcg_bool _L64;
  /* ts04::_L63 */ kcg_bool _L63;
  /* ts04::_L59 */ kcg_int _L59;
  /* ts04::_L60 */ kcg_int _L60;
  /* ts04::_L61 */ kcg_int _L61;
  /* ts04::_L62 */ kcg_int _L62;
  /* ts04::_L58 */ kcg_bool _L58;
  /* ts04::_L67 */ kcg_bool _L67;
  /* ts04::_L69 */ kcg_int _L69;
  /* ts04::_L70 */ kcg_int _L70;
  /* ts04::_L71 */ kcg_bool _L71;
  /* ts04::_L72 */ kcg_int _L72;
  /* ts04::_L73 */ kcg_int _L73;
  /* ts04::_L74 */ kcg_int _L74;
  
  _L66 = inC->fuel_stage1;
  fuel_stage1_3 = _L66;
  _L64 = inC->fuel_stage2;
  fuel_stage2_3 = _L64;
  _L65 = inC->fuel_stage3;
  fuel_stage3_3 = _L65;
  _L58 = inC->fuel_stage4;
  fuel_stage4_3 = _L58;
  _L57 = inC->StatusCamera;
  StatusCamera_1 = _L57;
  _L54 = inC->confirmacaoDesacopl;
  confirmacao_1 = _L54;
  _L19 = inC->Estagio1_Ligado;
  Estagio1_Ligado_1 = _L19;
  _L20 = inC->Estagio2_Ligado;
  Estagio2_Ligado_1 = _L20;
  _L18 = inC->Estagio3_Ligado;
  Estagio3_Ligado_1 = _L18;
  _L25 = inC->Estagio4_Ligado;
  Estagio4_Ligado_1 = _L25;
  _L16 = inC->StatusComputador;
  StatusComputador_1 = _L16;
  _L1 = inC->DesacoplarPh4;
  DesacoplarPh4_1 = _L1;
  _L7 = inC->DesacoplarPh3;
  DesacoplarPh3_1 = _L7;
  _L8 = inC->DesacoplarPh2;
  DesacoplarPh2_1 = _L8;
  _L2 = inC->DesacoplarPh1;
  DesacoplarPh1_1 = _L2;
  if (outC->init) {
    _23__L2_6_1 = kcg_false;
  }
  else {
    _23__L2_6_1 = outC->_L3_6_1;
  }
  Output1_6_1 = _23__L2_6_1;
  _L58_1 = Output1_6_1;
  Status1_6_1 = _L58_1;
  _L1_6_1 = Status1_6_1;
  if (outC->init) {
    _2__L2_1_1 = kcg_false;
  }
  else {
    _2__L2_1_1 = outC->_L3_1_1;
  }
  Output1_1_1 = _2__L2_1_1;
  _L35_1 = Output1_1_1;
  Status2_6_1 = _L35_1;
  _L5_6_1 = Status2_6_1;
  _L6_6_1 = _L1_6_1 & _L5_6_1;
  _L4_6_1 = A661_TRUE;
  _L3_6_1 = A661_FALSE;
  if (_L6_6_1) {
    _L2_6_1 = _L4_6_1;
  }
  else {
    _L2_6_1 = _L3_6_1;
  }
  Enabled_6_1 = _L2_6_1;
  _L57_1 = Enabled_6_1;
  Ph4Enabled_1 = _L57_1;
  _L74 = Ph4Enabled_1;
  if (outC->init) {
    _L2_5_1 = kcg_false;
  }
  else {
    _L2_5_1 = outC->_L3_5_1;
  }
  Output1_5_1 = _L2_5_1;
  _L54_1 = Output1_5_1;
  Status1_5_1 = _L54_1;
  _21__L1_5_1 = Status1_5_1;
  Status2_5_1 = _L35_1;
  _L5_5_1 = Status2_5_1;
  _L6_5_1 = _21__L1_5_1 & _L5_5_1;
  _19__L4_5_1 = A661_TRUE;
  _L3_5_1 = A661_FALSE;
  if (_L6_5_1) {
    _20__L2_5_1 = _19__L4_5_1;
  }
  else {
    _20__L2_5_1 = _L3_5_1;
  }
  Enabled_5_1 = _20__L2_5_1;
  _L55_1 = Enabled_5_1;
  Ph3Enabled_1 = _L55_1;
  _L73 = Ph3Enabled_1;
  if (outC->init) {
    _L2_2_1 = kcg_false;
  }
  else {
    _L2_2_1 = outC->_L3_2_1;
  }
  Output1_2_1 = _L2_2_1;
  _L37_1 = Output1_2_1;
  Status1_2_1 = _L37_1;
  _6__L1_2_1 = Status1_2_1;
  Status2_2_1 = _L35_1;
  _L5_2_1 = Status2_2_1;
  _L6_2_1 = _6__L1_2_1 & _L5_2_1;
  _4__L4_2_1 = A661_TRUE;
  _L3_2_1 = A661_FALSE;
  if (_L6_2_1) {
    _5__L2_2_1 = _4__L4_2_1;
  }
  else {
    _5__L2_2_1 = _L3_2_1;
  }
  Enabled_2_1 = _5__L2_2_1;
  _L38_1 = Enabled_2_1;
  Ph2Enabled_1 = _L38_1;
  _L72 = Ph2Enabled_1;
  Status1_1_1 = _L35_1;
  _L1_1_1 = Status1_1_1;
  _L51_1 = kcg_true;
  Status2_1_1 = _L51_1;
  _L5_1_1 = Status2_1_1;
  _L6_1_1 = _L1_1_1 & _L5_1_1;
  _L4_1_1 = A661_TRUE;
  _L3_1_1 = A661_FALSE;
  if (_L6_1_1) {
    _L2_1_1 = _L4_1_1;
  }
  else {
    _L2_1_1 = _L3_1_1;
  }
  Enabled_1_1 = _L2_1_1;
  _L34_1 = Enabled_1_1;
  Ph1Enabled_1 = _L34_1;
  _L70 = Ph1Enabled_1;
  if (outC->init) {
    _L4_1 = kcg_false;
  }
  else {
    _L4_1 = outC->_L8_1;
  }
  dph4_1 = _L4_1;
  _L29_1 = dph4_1;
  Input1_4_1 = _L29_1;
  _L2_4_1 = Input1_4_1;
  _L4_4_1 = GREEN;
  _L1_4_1 = RED;
  if (_L2_4_1) {
    _L3_4_1 = _L4_4_1;
  }
  else {
    _L3_4_1 = _L1_4_1;
  }
  Output1_4_1 = _L3_4_1;
  _L50_1 = Output1_4_1;
  CorPh4_1 = _L50_1;
  _L3 = CorPh4_1;
  if (outC->init) {
    _L11_1 = kcg_false;
  }
  else {
    _L11_1 = outC->_L17_1;
  }
  dph3_1 = _L11_1;
  _L10_1 = dph3_1;
  Input1_3_1 = _L10_1;
  _L2_3_1 = Input1_3_1;
  _L4_3_1 = GREEN;
  _L1_3_1 = RED;
  if (_L2_3_1) {
    _L3_3_1 = _L4_3_1;
  }
  else {
    _L3_3_1 = _L1_3_1;
  }
  Output1_3_1 = _L3_3_1;
  _L49_1 = Output1_3_1;
  CorPh3_1 = _L49_1;
  _L4 = CorPh3_1;
  if (outC->init) {
    _L24_1 = kcg_false;
  }
  else {
    _L24_1 = outC->_L30_1;
  }
  dph2_1 = _L24_1;
  _L22_1 = dph2_1;
  _13_Input1_2_1 = _L22_1;
  _16__L2_2_1 = _13_Input1_2_1;
  _18__L4_2_1 = GREEN;
  _15__L1_2_1 = RED;
  if (_16__L2_2_1) {
    _17__L3_2_1 = _18__L4_2_1;
  }
  else {
    _17__L3_2_1 = _15__L1_2_1;
  }
  _14_Output1_2_1 = _17__L3_2_1;
  _L48_1 = _14_Output1_2_1;
  CorPh2_1 = _L48_1;
  _L5 = CorPh2_1;
  _L14 = inC->ToogleIniciar;
  ToogleIniciar_1 = _L14;
  _L3_1 = ToogleIniciar_1;
  _29__L10_1 = 0;
  _L9_1 = _L3_1 == _29__L10_1;
  Reset_1_1 = _L9_1;
  _35__L1_1_1 = Reset_1_1;
  _L4_132 = NUM_CYCLES;
  N_1_1 = _L4_132;
  _34__L2_1_1 = N_1_1;
  _L13_1_1 = outC->_L4_1_1;
  if (outC->init) {
    _L8_1_1 = _34__L2_1_1;
  }
  else {
    _L8_1_1 = _L13_1_1;
  }
  if (_35__L1_1_1) {
    _33__L3_1_1 = _34__L2_1_1;
  }
  else {
    _33__L3_1_1 = _L8_1_1;
  }
  cpt_1_1 = _33__L3_1_1;
  _L2_1 = cpt_1_1;
  _L6_131 = FREQ_PROCESSADOR;
  _L7_130 = _L2_1 / _L6_131;
  _27__L13_1 = 0;
  _L12_1 = _L7_130 == _27__L13_1;
  FimContagem_1 = _L12_1;
  _L13 = FimContagem_1;
  if (outC->init) {
    _71__L1_4_1 = kcg_false;
  }
  else {
    _71__L1_4_1 = outC->_L4_4_1;
  }
  _L26 = inC->VerificarEstagios;
  VerificarEstagios_1 = _L26;
  _L21_1 = VerificarEstagios_1;
  Clcck_4_1 = _L21_1;
  _72__L2_4_1 = Clcck_4_1;
  _49__L25_1 = Estagio1_Ligado_1;
  In_4_1 = _49__L25_1;
  _73__L3_4_1 = In_4_1;
  if (_72__L2_4_1) {
    outC->_L4_4_1 = _73__L3_4_1;
  }
  else {
    outC->_L4_4_1 = _71__L1_4_1;
  }
  Out_4_1 = outC->_L4_4_1;
  _L14_1 = Out_4_1;
  _92_Input1_4_1 = _L14_1;
  _95__L2_4_1 = _92_Input1_4_1;
  _97__L4_4_1 = GREEN;
  _94__L1_4_1 = RED;
  if (_95__L2_4_1) {
    _96__L3_4_1 = _97__L4_4_1;
  }
  else {
    _96__L3_4_1 = _94__L1_4_1;
  }
  _93_Output1_4_1 = _96__L3_4_1;
  _L20_1 = _93_Output1_4_1;
  Estagio1CorFundo_1 = _L20_1;
  _L24 = Estagio1CorFundo_1;
  if (outC->init) {
    _68__L1_3_1 = kcg_false;
  }
  else {
    _68__L1_3_1 = outC->_L4_3_1;
  }
  Clcck_3_1 = _L21_1;
  _69__L2_3_1 = Clcck_3_1;
  _50__L24_1 = Estagio2_Ligado_1;
  In_3_1 = _50__L24_1;
  _70__L3_3_1 = In_3_1;
  if (_69__L2_3_1) {
    outC->_L4_3_1 = _70__L3_3_1;
  }
  else {
    outC->_L4_3_1 = _68__L1_3_1;
  }
  Out_3_1 = outC->_L4_3_1;
  _56__L12_1 = Out_3_1;
  _86_Input1_3_1 = _56__L12_1;
  _89__L2_3_1 = _86_Input1_3_1;
  _91__L4_3_1 = GREEN;
  _88__L1_3_1 = RED;
  if (_89__L2_3_1) {
    _90__L3_3_1 = _91__L4_3_1;
  }
  else {
    _90__L3_3_1 = _88__L1_3_1;
  }
  _87_Output1_3_1 = _90__L3_3_1;
  _53__L18_1 = _87_Output1_3_1;
  Estagio2CorFundo_1 = _53__L18_1;
  _L23 = Estagio2CorFundo_1;
  if (outC->init) {
    _65__L1_2_1 = kcg_false;
  }
  else {
    _65__L1_2_1 = outC->_L4_2_1;
  }
  Clcck_2_1 = _L21_1;
  _66__L2_2_1 = Clcck_2_1;
  _51__L23_1 = Estagio3_Ligado_1;
  In_2_1 = _51__L23_1;
  _67__L3_2_1 = In_2_1;
  if (_66__L2_2_1) {
    outC->_L4_2_1 = _67__L3_2_1;
  }
  else {
    outC->_L4_2_1 = _65__L1_2_1;
  }
  Out_2_1 = outC->_L4_2_1;
  _57__L11_1 = Out_2_1;
  _80_Input1_2_1 = _57__L11_1;
  _83__L2_2_1 = _80_Input1_2_1;
  _85__L4_2_1 = GREEN;
  _82__L1_2_1 = RED;
  if (_83__L2_2_1) {
    _84__L3_2_1 = _85__L4_2_1;
  }
  else {
    _84__L3_2_1 = _82__L1_2_1;
  }
  _81_Output1_2_1 = _84__L3_2_1;
  _54__L16_1 = _81_Output1_2_1;
  Estagio3CorFundo_1 = _54__L16_1;
  _L22 = Estagio3CorFundo_1;
  if (outC->init) {
    _L1_4_3 = kcg_false;
  }
  else {
    _L1_4_3 = outC->_L4_4_3;
  }
  _L63 = inC->verify_fuel;
  verify_fuel_3 = _L63;
  _L6_3 = verify_fuel_3;
  Clcck_4_3 = _L6_3;
  _L2_4_3 = Clcck_4_3;
  _L7_3 = fuel_stage4_3;
  In_4_3 = _L7_3;
  _L3_4_3 = In_4_3;
  if (_L2_4_3) {
    outC->_L4_4_3 = _L3_4_3;
  }
  else {
    outC->_L4_4_3 = _L1_4_3;
  }
  Out_4_3 = outC->_L4_4_3;
  _L14_3 = Out_4_3;
  Input1_4_3 = _L14_3;
  _146__L2_4_3 = Input1_4_3;
  _L4_4_3 = GREEN;
  _145__L1_4_3 = RED;
  if (_146__L2_4_3) {
    _147__L3_4_3 = _L4_4_3;
  }
  else {
    _147__L3_4_3 = _145__L1_4_3;
  }
  Output1_4_3 = _147__L3_4_3;
  _L20_3 = Output1_4_3;
  color_fuel4_3 = _L20_3;
  _L62 = color_fuel4_3;
  if (outC->init) {
    _L1_3_3 = kcg_false;
  }
  else {
    _L1_3_3 = outC->_L4_3_3;
  }
  Clcck_3_3 = _L6_3;
  _L2_3_3 = Clcck_3_3;
  _L5_3 = fuel_stage3_3;
  In_3_3 = _L5_3;
  _L3_3_3 = In_3_3;
  if (_L2_3_3) {
    outC->_L4_3_3 = _L3_3_3;
  }
  else {
    outC->_L4_3_3 = _L1_3_3;
  }
  Out_3_3 = outC->_L4_3_3;
  _L12_3 = Out_3_3;
  Input1_3_3 = _L12_3;
  _143__L2_3_3 = Input1_3_3;
  _L4_3_3 = GREEN;
  _142__L1_3_3 = RED;
  if (_143__L2_3_3) {
    _144__L3_3_3 = _L4_3_3;
  }
  else {
    _144__L3_3_3 = _142__L1_3_3;
  }
  Output1_3_3 = _144__L3_3_3;
  _L18_3 = Output1_3_3;
  color_fuel3_3 = _L18_3;
  _L61 = color_fuel3_3;
  if (outC->init) {
    _L1_2_3 = kcg_false;
  }
  else {
    _L1_2_3 = outC->_L4_2_3;
  }
  Clcck_2_3 = _L6_3;
  _L2_2_3 = Clcck_2_3;
  _L1_3 = fuel_stage2_3;
  In_2_3 = _L1_3;
  _L3_2_3 = In_2_3;
  if (_L2_2_3) {
    outC->_L4_2_3 = _L3_2_3;
  }
  else {
    outC->_L4_2_3 = _L1_2_3;
  }
  Out_2_3 = outC->_L4_2_3;
  _L11_3 = Out_2_3;
  Input1_2_3 = _L11_3;
  _140__L2_2_3 = Input1_2_3;
  _L4_2_3 = GREEN;
  _139__L1_2_3 = RED;
  if (_140__L2_2_3) {
    _141__L3_2_3 = _L4_2_3;
  }
  else {
    _141__L3_2_3 = _139__L1_2_3;
  }
  Output1_2_3 = _141__L3_2_3;
  _L16_3 = Output1_2_3;
  color_fuel2_3 = _L16_3;
  _L60 = color_fuel2_3;
  outC->Desacoplado = _L1;
  outC->Ph4Enabled = _L74;
  outC->Ph3Enabled = _L73;
  outC->Ph2Enabled = _L72;
  outC->Ph1Enabled = _L70;
  _L71 = inC->LancAutomatico;
  if (outC->init) {
    _109__L2_1_1 = kcg_false;
  }
  else {
    _109__L2_1_1 = outC->_3__L3_1_1;
  }
  _107_Output1_1_1 = _109__L2_1_1;
  _98__L27_1 = _107_Output1_1_1;
  _L28_1 = !_98__L27_1;
  _100_Input1_1_1 = _L28_1;
  _103__L2_1_1 = _100_Input1_1_1;
  _105__L4_1_1 = GREEN;
  _102__L1_1_1 = RED;
  if (_103__L2_1_1) {
    _104__L3_1_1 = _105__L4_1_1;
  }
  else {
    _104__L3_1_1 = _102__L1_1_1;
  }
  _101_Output1_1_1 = _104__L3_1_1;
  _L26_1 = _101_Output1_1_1;
  CorAlertaGeral_1 = _L26_1;
  _L69 = CorAlertaGeral_1;
  outC->CorAlertaGeral = _L69;
  _L67 = inC->SelfDestructSignal;
  outC->SelfDestruct = _L67;
  if (outC->init) {
    _L1_1_3 = kcg_false;
  }
  else {
    _L1_1_3 = outC->_L4_1_3;
  }
  Clcck_1_3 = _L6_3;
  _L2_1_3 = Clcck_1_3;
  _L4_3 = fuel_stage1_3;
  In_1_3 = _L4_3;
  _L3_1_3 = In_1_3;
  if (_L2_1_3) {
    outC->_L4_1_3 = _L3_1_3;
  }
  else {
    outC->_L4_1_3 = _L1_1_3;
  }
  Out_1_3 = outC->_L4_1_3;
  _L10_3 = Out_1_3;
  Input1_1_3 = _L10_3;
  _137__L2_1_3 = Input1_1_3;
  _L4_1_3 = GREEN;
  _136__L1_1_3 = RED;
  if (_137__L2_1_3) {
    _138__L3_1_3 = _L4_1_3;
  }
  else {
    _138__L3_1_3 = _136__L1_1_3;
  }
  Output1_1_3 = _138__L3_1_3;
  _L15_3 = Output1_1_3;
  color_fuel1_3 = _L15_3;
  _L59 = color_fuel1_3;
  outC->color_fuel1 = _L59;
  outC->color_fuel3 = _L61;
  outC->color_fuel4 = _L62;
  outC->color_fuel2 = _L60;
  if (outC->init) {
    _127__L1_1_1 = kcg_false;
  }
  else {
    _127__L1_1_1 = outC->_5__L4_1_1;
  }
  _L56 = inC->VerificarCamera;
  VerificarCamera_1 = _L56;
  _L3_1121 = VerificarCamera_1;
  _125_Clcck_1_1 = _L3_1121;
  _128__L2_1_1 = _125_Clcck_1_1;
  _L4_1120 = StatusCamera_1;
  _124_In_1_1 = _L4_1120;
  _129__L3_1_1 = _124_In_1_1;
  if (_128__L2_1_1) {
    outC->_5__L4_1_1 = _129__L3_1_1;
  }
  else {
    outC->_5__L4_1_1 = _127__L1_1_1;
  }
  _126_Out_1_1 = outC->_5__L4_1_1;
  _L1_1123 = _126_Out_1_1;
  _130_Input1_1_1 = _L1_1123;
  _133__L2_1_1 = _130_Input1_1_1;
  _135__L4_1_1 = GREEN;
  _132__L1_1_1 = RED;
  if (_133__L2_1_1) {
    _134__L3_1_1 = _135__L4_1_1;
  }
  else {
    _134__L3_1_1 = _132__L1_1_1;
  }
  _131_Output1_1_1 = _134__L3_1_1;
  _L2_1122 = _131_Output1_1_1;
  CorCameraFundo_1 = _L2_1122;
  _L55 = CorCameraFundo_1;
  outC->CorCameraFundo = _L55;
  if (outC->init) {
    _118__L2_1_1 = kcg_false;
  }
  else {
    _118__L2_1_1 = outC->_4__L3_1_1;
  }
  _116_Output1_1_1 = _118__L2_1_1;
  _L4_1113 = _116_Output1_1_1;
  sinal_1 = _L4_1113;
  _L52 = sinal_1;
  outC->desacoplarSatelite = _L52;
  _L53 = inC->enviarComando;
  _L27 = inC->AlertaGeral;
  outC->Estagio1CorFundo = _L24;
  if (outC->init) {
    _62__L1_1_1 = kcg_false;
  }
  else {
    _62__L1_1_1 = outC->_2__L4_1_1;
  }
  _60_Clcck_1_1 = _L21_1;
  _63__L2_1_1 = _60_Clcck_1_1;
  _52__L22_1 = Estagio4_Ligado_1;
  _59_In_1_1 = _52__L22_1;
  _64__L3_1_1 = _59_In_1_1;
  if (_63__L2_1_1) {
    outC->_2__L4_1_1 = _64__L3_1_1;
  }
  else {
    outC->_2__L4_1_1 = _62__L1_1_1;
  }
  _61_Out_1_1 = outC->_2__L4_1_1;
  _58__L10_1 = _61_Out_1_1;
  _74_Input1_1_1 = _58__L10_1;
  _77__L2_1_1 = _74_Input1_1_1;
  _79__L4_1_1 = GREEN;
  _76__L1_1_1 = RED;
  if (_77__L2_1_1) {
    _78__L3_1_1 = _79__L4_1_1;
  }
  else {
    _78__L3_1_1 = _76__L1_1_1;
  }
  _75_Output1_1_1 = _78__L3_1_1;
  _55__L15_1 = _75_Output1_1_1;
  Estagio4CorFundo_1 = _55__L15_1;
  _L21 = Estagio4CorFundo_1;
  outC->Estagio4CorFundo = _L21;
  outC->Estagio2CorFundo = _L23;
  outC->Estagio3CorFundo = _L22;
  if (outC->init) {
    _40__L1_1_1 = kcg_false;
  }
  else {
    _40__L1_1_1 = outC->_1__L4_1_1;
  }
  _L15 = inC->VerificarComputador;
  VerificarComputador_1 = _L15;
  _L3_137 = VerificarComputador_1;
  Clcck_1_1 = _L3_137;
  _41__L2_1_1 = Clcck_1_1;
  _L4_136 = StatusComputador_1;
  In_1_1 = _L4_136;
  _42__L3_1_1 = In_1_1;
  if (_41__L2_1_1) {
    outC->_1__L4_1_1 = _42__L3_1_1;
  }
  else {
    outC->_1__L4_1_1 = _40__L1_1_1;
  }
  Out_1_1 = outC->_1__L4_1_1;
  _L1_139 = Out_1_1;
  _43_Input1_1_1 = _L1_139;
  _46__L2_1_1 = _43_Input1_1_1;
  _48__L4_1_1 = GREEN;
  _45__L1_1_1 = RED;
  if (_46__L2_1_1) {
    _47__L3_1_1 = _48__L4_1_1;
  }
  else {
    _47__L3_1_1 = _45__L1_1_1;
  }
  _44_Output1_1_1 = _47__L3_1_1;
  _L2_138 = _44_Output1_1_1;
  CorComputadorFundo_1 = _L2_138;
  _L17 = CorComputadorFundo_1;
  outC->CorComputadorFundo = _L17;
  outC->FimContagem = _L13;
  _28__L11_1 = (kcg_real) _L7_130;
  val_1 = _28__L11_1;
  _25__L16_1 = val_1;
  _L18_1 = 0.0;
  _L17_1 = _25__L16_1 < _L18_1;
  _L19_1 = val_1;
  if (_L17_1) {
    _26__L15_1 = _L18_1;
  }
  else {
    _26__L15_1 = _L19_1;
  }
  ValContagem_1 = _26__L15_1;
  _L12 = ValContagem_1;
  outC->ValContagem = _L12;
  if (outC->init) {
    _L10 = kcg_true;
  }
  else {
    _L10 = outC->_L11;
  }
  outC->_L11 = kcg_false;
  outC->LayerVisible = _L10;
  _L9 = kcg_true;
  outC->Emit2CDS = _L9;
  outC->CorPh4 = _L3;
  outC->CorPh2 = _L5;
  outC->CorPh3 = _L4;
  if (outC->init) {
    _L7_1 = kcg_false;
  }
  else {
    _L7_1 = outC->_L32_1;
  }
  dph1_1 = _L7_1;
  _L16_1 = dph1_1;
  _7_Input1_1_1 = _L16_1;
  _10__L2_1_1 = _7_Input1_1_1;
  _12__L4_1_1 = GREEN;
  _9__L1_1_1 = RED;
  if (_10__L2_1_1) {
    _11__L3_1_1 = _12__L4_1_1;
  }
  else {
    _11__L3_1_1 = _9__L1_1_1;
  }
  _8_Output1_1_1 = _11__L3_1_1;
  _L39_1 = _8_Output1_1_1;
  CorPh1_1 = _L39_1;
  _L6 = CorPh1_1;
  outC->CorPh1 = _L6;
  Automatico_1 = _L71;
  _L60_1 = DesacoplarPh3_1;
  _L56_1 = DesacoplarPh2_1;
  _L36_1 = DesacoplarPh1_1;
  _L33_1 = Automatico_1;
  _L27_1 = DesacoplarPh1_1;
  _L23_1 = dph1_1;
  outC->_L32_1 = _L27_1 | _L23_1;
  _L15_1 = DesacoplarPh2_1;
  _L25_1 = dph2_1;
  outC->_L30_1 = _L15_1 | _L25_1;
  _L1_1 = DesacoplarPh3_1;
  _L13_1 = dph3_1;
  outC->_L17_1 = _L1_1 | _L13_1;
  _L5_1 = DesacoplarPh4_1;
  _L6_1 = dph4_1;
  outC->_L8_1 = _L5_1 | _L6_1;
  Input1_1_1 = _L33_1;
  _1__L4_1_1 = !_2__L2_1_1;
  _3__L1_1_1 = Input1_1_1;
  if (_3__L1_1_1) {
    outC->_L3_1_1 = _1__L4_1_1;
  }
  else {
    outC->_L3_1_1 = _2__L2_1_1;
  }
  Input1_2_1 = _L36_1;
  _L4_2_1 = !_L2_2_1;
  _L1_2_1 = Input1_2_1;
  if (_L1_2_1) {
    outC->_L3_2_1 = _L4_2_1;
  }
  else {
    outC->_L3_2_1 = _L2_2_1;
  }
  Input1_5_1 = _L56_1;
  _L4_5_1 = !_L2_5_1;
  _L1_5_1 = Input1_5_1;
  if (_L1_5_1) {
    outC->_L3_5_1 = _L4_5_1;
  }
  else {
    outC->_L3_5_1 = _L2_5_1;
  }
  Input1_6_1 = _L60_1;
  _22__L4_6_1 = !_23__L2_6_1;
  _24__L1_6_1 = Input1_6_1;
  if (_24__L1_6_1) {
    outC->_L3_6_1 = _22__L4_6_1;
  }
  else {
    outC->_L3_6_1 = _23__L2_6_1;
  }
  _L7_1_1 = 1;
  outC->_L4_1_1 = _33__L3_1_1 - _L7_1_1;
  AlertaGeral_1 = _L27;
  _99__L19_1 = AlertaGeral_1;
  _106_Input1_1_1 = _99__L19_1;
  _108__L4_1_1 = !_109__L2_1_1;
  _110__L1_1_1 = _106_Input1_1_1;
  if (_110__L1_1_1) {
    outC->_3__L3_1_1 = _108__L4_1_1;
  }
  else {
    outC->_3__L3_1_1 = _109__L2_1_1;
  }
  enviarComando_1 = _L53;
  _L1_1114 = enviarComando_1;
  _L5_1112 = confirmacao_1;
  _L6_1111 = _L1_1114 | _L5_1112;
  _115_Input1_1_1 = _L6_1111;
  _117__L4_1_1 = !_118__L2_1_1;
  _119__L1_1_1 = _115_Input1_1_1;
  if (_119__L1_1_1) {
    outC->_4__L3_1_1 = _117__L4_1_1;
  }
  else {
    outC->_4__L3_1_1 = _118__L2_1_1;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ts04.c
** Generation date: 2014-10-24T11:03:18
*************************************************************$ */

