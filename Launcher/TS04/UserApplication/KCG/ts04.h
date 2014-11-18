/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/hoffsi/dev/ita/scade/ce235/Launcher/TS04/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-10-24T11:03:18
*************************************************************$ */
#ifndef _ts04_H_
#define _ts04_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* ts04::DesacoplarPh1 */ DesacoplarPh1;
  kcg_bool /* ts04::DesacoplarPh2 */ DesacoplarPh2;
  kcg_bool /* ts04::DesacoplarPh3 */ DesacoplarPh3;
  kcg_bool /* ts04::DesacoplarPh4 */ DesacoplarPh4;
  kcg_int /* ts04::ToogleIniciar */ ToogleIniciar;
  kcg_bool /* ts04::StatusComputador */ StatusComputador;
  kcg_bool /* ts04::VerificarComputador */ VerificarComputador;
  kcg_bool /* ts04::Estagio1_Ligado */ Estagio1_Ligado;
  kcg_bool /* ts04::Estagio2_Ligado */ Estagio2_Ligado;
  kcg_bool /* ts04::Estagio3_Ligado */ Estagio3_Ligado;
  kcg_bool /* ts04::Estagio4_Ligado */ Estagio4_Ligado;
  kcg_bool /* ts04::VerificarEstagios */ VerificarEstagios;
  kcg_bool /* ts04::AlertaGeral */ AlertaGeral;
  kcg_bool /* ts04::fuel_stage2 */ fuel_stage2;
  kcg_bool /* ts04::fuel_stage3 */ fuel_stage3;
  kcg_bool /* ts04::fuel_stage4 */ fuel_stage4;
  kcg_bool /* ts04::verify_fuel */ verify_fuel;
  kcg_bool /* ts04::confirmacaoDesacopl */ confirmacaoDesacopl;
  kcg_bool /* ts04::enviarComando */ enviarComando;
  kcg_bool /* ts04::StatusCamera */ StatusCamera;
  kcg_bool /* ts04::VerificarCamera */ VerificarCamera;
  kcg_bool /* ts04::fuel_stage1 */ fuel_stage1;
  kcg_bool /* ts04::SelfDestructSignal */ SelfDestructSignal;
  kcg_bool /* ts04::LancAutomatico */ LancAutomatico;
} inC_ts04;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* ts04::CorPh1 */ CorPh1;
  kcg_int /* ts04::CorPh2 */ CorPh2;
  kcg_int /* ts04::CorPh3 */ CorPh3;
  kcg_int /* ts04::CorPh4 */ CorPh4;
  kcg_bool /* ts04::Emit2CDS */ Emit2CDS;
  kcg_bool /* ts04::LayerVisible */ LayerVisible;
  kcg_bool /* ts04::FimContagem */ FimContagem;
  kcg_real /* ts04::ValContagem */ ValContagem;
  kcg_int /* ts04::CorComputadorFundo */ CorComputadorFundo;
  kcg_int /* ts04::Estagio1CorFundo */ Estagio1CorFundo;
  kcg_int /* ts04::Estagio2CorFundo */ Estagio2CorFundo;
  kcg_int /* ts04::Estagio3CorFundo */ Estagio3CorFundo;
  kcg_int /* ts04::Estagio4CorFundo */ Estagio4CorFundo;
  kcg_int /* ts04::color_fuel4 */ color_fuel4;
  kcg_int /* ts04::color_fuel3 */ color_fuel3;
  kcg_int /* ts04::color_fuel2 */ color_fuel2;
  kcg_int /* ts04::color_fuel1 */ color_fuel1;
  kcg_bool /* ts04::desacoplarSatelite */ desacoplarSatelite;
  kcg_int /* ts04::CorCameraFundo */ CorCameraFundo;
  kcg_bool /* ts04::SelfDestruct */ SelfDestruct;
  kcg_int /* ts04::CorAlertaGeral */ CorAlertaGeral;
  kcg_int /* ts04::Ph1Enabled */ Ph1Enabled;
  kcg_int /* ts04::Ph2Enabled */ Ph2Enabled;
  kcg_int /* ts04::Ph3Enabled */ Ph3Enabled;
  kcg_int /* ts04::Ph4Enabled */ Ph4Enabled;
  kcg_bool /* ts04::Desacoplado */ Desacoplado;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* ff::_L4 */ _L4_4_3;
  kcg_bool /* ff::_L4 */ _L4_3_3;
  kcg_bool /* ff::_L4 */ _L4_2_3;
  kcg_bool /* ff::_L4 */ _L4_1_3;
  kcg_bool /* ff::_L4 */ _5__L4_1_1;
  kcg_bool /* switch::_L3 */ _4__L3_1_1;
  kcg_bool /* switch::_L3 */ _3__L3_1_1;
  kcg_bool /* ff::_L4 */ _L4_4_1;
  kcg_bool /* ff::_L4 */ _L4_3_1;
  kcg_bool /* ff::_L4 */ _L4_2_1;
  kcg_bool /* ff::_L4 */ _2__L4_1_1;
  kcg_bool /* ff::_L4 */ _1__L4_1_1;
  kcg_int /* digital::count_down::_L4 */ _L4_1_1;
  kcg_bool /* switch::_L3 */ _L3_6_1;
  kcg_bool /* switch::_L3 */ _L3_5_1;
  kcg_bool /* switch::_L3 */ _L3_2_1;
  kcg_bool /* switch::_L3 */ _L3_1_1;
  kcg_bool /* us18::_L32 */ _L32_1;
  kcg_bool /* us18::_L30 */ _L30_1;
  kcg_bool /* us18::_L17 */ _L17_1;
  kcg_bool /* us18::_L8 */ _L8_1;
  kcg_bool /* ts04::_L11 */ _L11;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ts04;

/* ===========  node initialization and cycle functions  =========== */
/* ts04 */
extern void ts04(inC_ts04 *inC, outC_ts04 *outC);

extern void ts04_reset(outC_ts04 *outC);

#endif /* _ts04_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ts04.h
** Generation date: 2014-10-24T11:03:18
*************************************************************$ */

