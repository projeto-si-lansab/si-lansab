/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GitHub/si-lansab/Satellite/TS05/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-04T20:38:53
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ts05.h"

void ts05_reset(outC_ts05 *outC)
{
  outC->init = kcg_true;
  outC->init1 = kcg_true;
  outC->init2 = kcg_true;
  outC->init3 = kcg_true;
}

/* ts05 */
void ts05(inC_ts05 *inC, outC_ts05 *outC)
{
  /* linear::MemoryBasic::_L2 */ kcg_bool _434__L2_5_1;
  /* linear::MemoryBasic::_L5 */ kcg_bool _433__L5_5_1;
  /* linear::MemoryBasic::_L6 */ kcg_bool _432__L6_5_1;
  /* linear::MemoryBasic::_L7 */ kcg_bool _431__L7_5_1;
  /* linear::MemoryBasic::Memorized */ kcg_bool _430_Memorized_5_1;
  /* linear::MemoryBasic::Write */ kcg_bool _429_Write_5_1;
  /* linear::MemoryBasic::Init */ kcg_bool _428_Init_5_1;
  /* linear::MemoryBasic::BM_Input */ kcg_bool _427_BM_Input_5_1;
  /* linear::MemoryBasic::_L2 */ kcg_bool _L2_4_1;
  /* linear::MemoryBasic::_L5 */ kcg_bool _L5_4_1;
  /* linear::MemoryBasic::_L6 */ kcg_bool _L6_4_1;
  /* linear::MemoryBasic::_L7 */ kcg_bool _L7_4_1;
  /* linear::MemoryBasic::Memorized */ kcg_bool Memorized_4_1;
  /* linear::MemoryBasic::Write */ kcg_bool Write_4_1;
  /* linear::MemoryBasic::Init */ kcg_bool Init_4_1;
  /* linear::MemoryBasic::BM_Input */ kcg_bool BM_Input_4_1;
  /* linear::MemoryBasic::_L2 */ kcg_bool _426__L2_3_1;
  /* linear::MemoryBasic::_L5 */ kcg_bool _425__L5_3_1;
  /* linear::MemoryBasic::_L6 */ kcg_bool _424__L6_3_1;
  /* linear::MemoryBasic::_L7 */ kcg_bool _423__L7_3_1;
  /* linear::MemoryBasic::Memorized */ kcg_bool _422_Memorized_3_1;
  /* linear::MemoryBasic::Write */ kcg_bool _421_Write_3_1;
  /* linear::MemoryBasic::Init */ kcg_bool _420_Init_3_1;
  /* linear::MemoryBasic::BM_Input */ kcg_bool _419_BM_Input_3_1;
  /* linear::MemoryBasic::_L2 */ OperationMode _418__L2_2_1;
  /* linear::MemoryBasic::_L5 */ kcg_bool _417__L5_2_1;
  /* linear::MemoryBasic::_L6 */ OperationMode _416__L6_2_1;
  /* linear::MemoryBasic::_L7 */ OperationMode _415__L7_2_1;
  /* linear::MemoryBasic::Memorized */ OperationMode _414_Memorized_2_1;
  /* linear::MemoryBasic::Write */ kcg_bool _413_Write_2_1;
  /* linear::MemoryBasic::Init */ OperationMode _412_Init_2_1;
  /* linear::MemoryBasic::BM_Input */ OperationMode _411_BM_Input_2_1;
  /* us14::AutoVerifyUS14 */ SSM_TR_AutoVerifyUS14 _410_AutoVerifyUS14_fired_1;
  /* us14::AutoVerifyUS14 */ kcg_bool _409_AutoVerifyUS14_reset_nxt_1;
  /* us14::AutoVerifyUS14 */ SSM_ST_AutoVerifyUS14 _408_AutoVerifyUS14_state_nxt_1;
  /* us14::Fails */ kcg_bool _407_Fails_1;
  /* us14::SAT_Fix_Equipments */ kcg_bool _406_SAT_Fix_Equipments_1;
  /* us14::SAT_Auto_Verify */ kcg_bool _405_SAT_Auto_Verify_1;
  /* us14::CDS_Auto_Verify_Test */ kcg_int _404_CDS_Auto_Verify_Test_1;
  /* us14::CDS_Auto_Verify_Label */ String_ES _403_CDS_Auto_Verify_Label_1;
  /* us14::CDS_Auto_Verify_Contorno */ kcg_int _402_CDS_Auto_Verify_Contorno_1;
  /* us14::AutoVerifyUS14::Ativo::_L42 */ kcg_bool _L42_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L40 */ kcg_bool _L40_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L19 */ kcg_int _L19_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L38 */ String_ES _L38_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L37 */ String_ES _L37_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L36 */ kcg_int _L36_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L34 */ String_ES _L34_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L33 */ kcg_int _L33_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L26 */ kcg_int _L26_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L21 */ kcg_int _L21_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L20 */ kcg_int _L20_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L18 */ kcg_bool _L18_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L17 */ kcg_bool _L17_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L16 */ kcg_bool _L16_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L15 */ kcg_bool _L15_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo::_L14 */ kcg_bool _L14_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14::Ativo */ kcg_bool Ativo_weakb_clock_1_AutoVerifyUS14;
  /* us14::AutoVerifyUS14::Ativo */ kcg_bool br_1_guard_1_AutoVerifyUS14_Ativo;
  /* us14::AutoVerifyUS14 */ SSM_ST_AutoVerifyUS14 _401_AutoVerifyUS14_state_nxt_1;
  /* us14::AutoVerifyUS14 */ kcg_bool _400_AutoVerifyUS14_reset_nxt_1;
  /* us14::AutoVerifyUS14 */ SSM_TR_AutoVerifyUS14 _399_AutoVerifyUS14_fired_1;
  /* us14::AutoVerifyUS14 */ SSM_ST_AutoVerifyUS14 _398_AutoVerifyUS14_state_nxt_1;
  /* us14::AutoVerifyUS14 */ kcg_bool _397_AutoVerifyUS14_reset_nxt_1;
  /* us14::AutoVerifyUS14 */ SSM_TR_AutoVerifyUS14 _396_AutoVerifyUS14_fired_1;
  /* us14::AutoVerifyUS14 */ SSM_TR_AutoVerifyUS14 _395_AutoVerifyUS14_fired_1;
  /* us14::AutoVerifyUS14 */ kcg_bool AutoVerifyUS14_reset_nxt_1;
  /* us14::AutoVerifyUS14 */ SSM_ST_AutoVerifyUS14 AutoVerifyUS14_state_nxt_1;
  /* us14::Fails */ kcg_bool _394_Fails_1;
  /* us14::SAT_Fix_Equipments */ kcg_bool SAT_Fix_Equipments_1;
  /* us14::SAT_Auto_Verify */ kcg_bool SAT_Auto_Verify_1;
  /* us14::CDS_Auto_Verify_Test */ kcg_int CDS_Auto_Verify_Test_1;
  /* us14::CDS_Auto_Verify_Label */ String_ES CDS_Auto_Verify_Label_1;
  /* us14::CDS_Auto_Verify_Contorno */ kcg_int CDS_Auto_Verify_Contorno_1;
  /* us14::AutoVerifyUS14::NaoAtivo::_L13 */ kcg_bool _L13_1_AutoVerifyUS14_NaoAtivo;
  /* us14::AutoVerifyUS14::NaoAtivo::_L11 */ kcg_bool _L11_1_AutoVerifyUS14_NaoAtivo;
  /* us14::AutoVerifyUS14::NaoAtivo::_L10 */ kcg_bool _L10_1_AutoVerifyUS14_NaoAtivo;
  /* us14::AutoVerifyUS14::NaoAtivo::_L8 */ String_ES _L8_1_AutoVerifyUS14_NaoAtivo;
  /* us14::AutoVerifyUS14::NaoAtivo::_L6 */ kcg_int _L6_1_AutoVerifyUS14_NaoAtivo;
  /* us14::AutoVerifyUS14::NaoAtivo::_L4 */ kcg_int _L4_1_AutoVerifyUS14_NaoAtivo;
  /* us14::AutoVerifyUS14 */ SSM_TR_AutoVerifyUS14 _393_AutoVerifyUS14_fired_strong_1;
  /* us14::AutoVerifyUS14 */ kcg_bool _392_AutoVerifyUS14_reset_act_1;
  /* us14::AutoVerifyUS14 */ SSM_ST_AutoVerifyUS14 _391_AutoVerifyUS14_state_act_1;
  /* us14::AutoVerifyUS14 */ SSM_TR_AutoVerifyUS14 _390_AutoVerifyUS14_fired_strong_1;
  /* us14::AutoVerifyUS14 */ kcg_bool AutoVerifyUS14_reset_act_1;
  /* us14::AutoVerifyUS14 */ SSM_ST_AutoVerifyUS14 _389_AutoVerifyUS14_state_act_1;
  /* us14::AutoVerifyUS14::NaoAtivo */ kcg_bool br_1_guard_1_AutoVerifyUS14_NaoAtivo;
  /* us14::StateCamera */ SSM_TR_StateCamera _388_StateCamera_fired_1;
  /* us14::StateCamera */ kcg_bool _387_StateCamera_reset_nxt_1;
  /* us14::StateCamera */ SSM_ST_StateCamera _386_StateCamera_state_nxt_1;
  /* us14::CameraButton_Fail */ kcg_bool _385_CameraButton_Fail_1;
  /* us14::Toggle_CameraTo */ kcg_bool _384_Toggle_CameraTo_1;
  /* us14::Camera_Toggling */ kcg_bool _383_Camera_Toggling_1;
  /* us14::CDS_ES_CameraButton_Label */ String_ES _382_CDS_ES_CameraButton_Label_1;
  /* us14::CDS_ES_CameraButton_Contour */ kcg_int _381_CDS_ES_CameraButton_Contour_1;
  /* us14::StateCamera::Off::_L7 */ kcg_bool _L7_1_StateCamera_Off;
  /* us14::StateCamera::Off::_L6 */ kcg_bool _L6_1_StateCamera_Off;
  /* us14::StateCamera::Off::_L4 */ kcg_bool _L4_1_StateCamera_Off;
  /* us14::StateCamera::Off::_L2 */ String_ES _L2_1_StateCamera_Off;
  /* us14::StateCamera::Off::_L1 */ kcg_int _L1_1_StateCamera_Off;
  /* us14::StateCamera */ SSM_TR_StateCamera _380_StateCamera_fired_1;
  /* us14::StateCamera */ kcg_bool _379_StateCamera_reset_nxt_1;
  /* us14::StateCamera */ SSM_ST_StateCamera _378_StateCamera_state_nxt_1;
  /* us14::CameraButton_Fail */ kcg_bool _377_CameraButton_Fail_1;
  /* us14::Toggle_CameraTo */ kcg_bool _376_Toggle_CameraTo_1;
  /* us14::Camera_Toggling */ kcg_bool _375_Camera_Toggling_1;
  /* us14::CDS_ES_CameraButton_Label */ String_ES _374_CDS_ES_CameraButton_Label_1;
  /* us14::CDS_ES_CameraButton_Contour */ kcg_int _373_CDS_ES_CameraButton_Contour_1;
  /* us14::StateCamera::TurningOn::_L19 */ kcg_bool _L19_1_StateCamera_TurningOn;
  /* us14::StateCamera::TurningOn::_L17 */ kcg_bool _L17_1_StateCamera_TurningOn;
  /* us14::StateCamera::TurningOn::_L16 */ kcg_bool _L16_1_StateCamera_TurningOn;
  /* us14::StateCamera::TurningOn::_L14 */ String_ES _L14_1_StateCamera_TurningOn;
  /* us14::StateCamera::TurningOn::_L15 */ kcg_int _L15_1_StateCamera_TurningOn;
  /* us14::StateCamera */ SSM_TR_StateCamera _372_StateCamera_fired_1;
  /* us14::StateCamera */ kcg_bool _371_StateCamera_reset_nxt_1;
  /* us14::StateCamera */ SSM_ST_StateCamera _370_StateCamera_state_nxt_1;
  /* us14::CameraButton_Fail */ kcg_bool _369_CameraButton_Fail_1;
  /* us14::Toggle_CameraTo */ kcg_bool _368_Toggle_CameraTo_1;
  /* us14::Camera_Toggling */ kcg_bool _367_Camera_Toggling_1;
  /* us14::CDS_ES_CameraButton_Label */ String_ES _366_CDS_ES_CameraButton_Label_1;
  /* us14::CDS_ES_CameraButton_Contour */ kcg_int _365_CDS_ES_CameraButton_Contour_1;
  /* us14::StateCamera::On::_L9 */ kcg_bool _L9_1_StateCamera_On;
  /* us14::StateCamera::On::_L7 */ kcg_bool _L7_1_StateCamera_On;
  /* us14::StateCamera::On::_L6 */ kcg_bool _L6_1_StateCamera_On;
  /* us14::StateCamera::On::_L4 */ kcg_int _L4_1_StateCamera_On;
  /* us14::StateCamera::On::_L5 */ String_ES _L5_1_StateCamera_On;
  /* us14::StateCamera */ SSM_TR_StateCamera _364_StateCamera_fired_1;
  /* us14::StateCamera */ kcg_bool _363_StateCamera_reset_nxt_1;
  /* us14::StateCamera */ SSM_ST_StateCamera _362_StateCamera_state_nxt_1;
  /* us14::CameraButton_Fail */ kcg_bool _361_CameraButton_Fail_1;
  /* us14::Toggle_CameraTo */ kcg_bool _360_Toggle_CameraTo_1;
  /* us14::Camera_Toggling */ kcg_bool _359_Camera_Toggling_1;
  /* us14::CDS_ES_CameraButton_Label */ String_ES _358_CDS_ES_CameraButton_Label_1;
  /* us14::CDS_ES_CameraButton_Contour */ kcg_int _357_CDS_ES_CameraButton_Contour_1;
  /* us14::StateCamera::TurningOff::_L31 */ kcg_bool _L31_1_StateCamera_TurningOff;
  /* us14::StateCamera::TurningOff::_L29 */ kcg_bool _L29_1_StateCamera_TurningOff;
  /* us14::StateCamera::TurningOff::_L28 */ kcg_bool _L28_1_StateCamera_TurningOff;
  /* us14::StateCamera::TurningOff::_L26 */ kcg_int _L26_1_StateCamera_TurningOff;
  /* us14::StateCamera::TurningOff::_L27 */ String_ES _L27_1_StateCamera_TurningOff;
  /* us14::StateCamera */ SSM_TR_StateCamera _356_StateCamera_fired_1;
  /* us14::StateCamera */ kcg_bool StateCamera_reset_nxt_1;
  /* us14::StateCamera */ SSM_ST_StateCamera StateCamera_state_nxt_1;
  /* us14::CameraButton_Fail */ kcg_bool _355_CameraButton_Fail_1;
  /* us14::Toggle_CameraTo */ kcg_bool _354_Toggle_CameraTo_1;
  /* us14::Camera_Toggling */ kcg_bool _353_Camera_Toggling_1;
  /* us14::CDS_ES_CameraButton_Label */ String_ES CDS_ES_CameraButton_Label_1;
  /* us14::CDS_ES_CameraButton_Contour */ kcg_int CDS_ES_CameraButton_Contour_1;
  /* us14::StateCamera::Fail::_L11 */ kcg_bool _L11_1_StateCamera_Fail;
  /* us14::StateCamera::Fail::_L7 */ String_ES _L7_1_StateCamera_Fail;
  /* us14::StateCamera::Fail::_L6 */ kcg_int _L6_1_StateCamera_Fail;
  /* us14::StateCamera::Fail::_L1 */ kcg_bool _L1_1_StateCamera_Fail;
  /* us14::StateCamera::Fail::_L3 */ kcg_bool _L3_1_StateCamera_Fail;
  /* us14::StateCamera */ SSM_TR_StateCamera _352_StateCamera_fired_strong_1;
  /* us14::StateCamera */ kcg_bool _351_StateCamera_reset_act_1;
  /* us14::StateCamera */ SSM_ST_StateCamera _350_StateCamera_state_act_1;
  /* us14::StateCamera::Off */ kcg_bool br_3_guard_1_StateCamera_Off;
  /* us14::StateCamera::Off */ kcg_bool br_2_guard_1_StateCamera_Off;
  /* us14::StateCamera::Off */ kcg_bool br_1_guard_1_StateCamera_Off;
  /* us14::StateCamera */ SSM_TR_StateCamera _349_StateCamera_fired_strong_1;
  /* us14::StateCamera */ kcg_bool _348_StateCamera_reset_act_1;
  /* us14::StateCamera */ SSM_ST_StateCamera _347_StateCamera_state_act_1;
  /* us14::StateCamera::TurningOn */ kcg_bool _346_br_3_guard_1_StateCamera_TurningOn;
  /* us14::StateCamera::TurningOn */ kcg_bool _345_br_2_guard_1_StateCamera_TurningOn;
  /* us14::StateCamera::TurningOn */ kcg_bool _344_br_1_guard_1_StateCamera_TurningOn;
  /* us14::StateCamera */ SSM_TR_StateCamera _343_StateCamera_fired_strong_1;
  /* us14::StateCamera */ kcg_bool _342_StateCamera_reset_act_1;
  /* us14::StateCamera */ SSM_ST_StateCamera _341_StateCamera_state_act_1;
  /* us14::StateCamera::On */ kcg_bool br_3_guard_1_StateCamera_On;
  /* us14::StateCamera::On */ kcg_bool br_2_guard_1_StateCamera_On;
  /* us14::StateCamera::On */ kcg_bool br_1_guard_1_StateCamera_On;
  /* us14::StateCamera */ SSM_TR_StateCamera _340_StateCamera_fired_strong_1;
  /* us14::StateCamera */ kcg_bool _339_StateCamera_reset_act_1;
  /* us14::StateCamera */ SSM_ST_StateCamera _338_StateCamera_state_act_1;
  /* us14::StateCamera::TurningOff */ kcg_bool br_3_guard_1_StateCamera_TurningOff;
  /* us14::StateCamera::TurningOff */ kcg_bool br_2_guard_1_StateCamera_TurningOff;
  /* us14::StateCamera::TurningOff */ kcg_bool br_1_guard_1_StateCamera_TurningOff;
  /* us14::StateCamera */ SSM_TR_StateCamera _337_StateCamera_fired_strong_1;
  /* us14::StateCamera */ kcg_bool StateCamera_reset_act_1;
  /* us14::StateCamera */ SSM_ST_StateCamera _336_StateCamera_state_act_1;
  /* us14::StateCamera::Fail */ kcg_bool br_1_guard_1_StateCamera_Fail;
  /* us14::StatePropellers */ SSM_TR_StatePropellers _335_StatePropellers_fired_1;
  /* us14::StatePropellers */ kcg_bool _334_StatePropellers_reset_nxt_1;
  /* us14::StatePropellers */ SSM_ST_StatePropellers _333_StatePropellers_state_nxt_1;
  /* us14::Toggle_PropellersTo */ kcg_bool _332_Toggle_PropellersTo_1;
  /* us14::Propellers_Toggling */ kcg_bool _331_Propellers_Toggling_1;
  /* us14::CDS_ES_PropellersButton_Label */ String_ES _330_CDS_ES_PropellersButton_Label_1;
  /* us14::CDS_ES_PropellersButton_Contour */ kcg_int _329_CDS_ES_PropellersButton_Contour_1;
  /* us14::StatePropellers::Off::_L7 */ kcg_bool _L7_1_StatePropellers_Off;
  /* us14::StatePropellers::Off::_L5 */ kcg_bool _L5_1_StatePropellers_Off;
  /* us14::StatePropellers::Off::_L1 */ kcg_int _L1_1_StatePropellers_Off;
  /* us14::StatePropellers::Off::_L3 */ String_ES _L3_1_StatePropellers_Off;
  /* us14::StatePropellers */ SSM_TR_StatePropellers _328_StatePropellers_fired_1;
  /* us14::StatePropellers */ kcg_bool _327_StatePropellers_reset_nxt_1;
  /* us14::StatePropellers */ SSM_ST_StatePropellers _326_StatePropellers_state_nxt_1;
  /* us14::Toggle_PropellersTo */ kcg_bool _325_Toggle_PropellersTo_1;
  /* us14::Propellers_Toggling */ kcg_bool _324_Propellers_Toggling_1;
  /* us14::CDS_ES_PropellersButton_Label */ String_ES _323_CDS_ES_PropellersButton_Label_1;
  /* us14::CDS_ES_PropellersButton_Contour */ kcg_int _322_CDS_ES_PropellersButton_Contour_1;
  /* us14::StatePropellers::TurningOn::_L17 */ kcg_bool _L17_1_StatePropellers_TurningOn;
  /* us14::StatePropellers::TurningOn::_L16 */ kcg_bool _L16_1_StatePropellers_TurningOn;
  /* us14::StatePropellers::TurningOn::_L14 */ String_ES _L14_1_StatePropellers_TurningOn;
  /* us14::StatePropellers::TurningOn::_L15 */ kcg_int _L15_1_StatePropellers_TurningOn;
  /* us14::StatePropellers */ SSM_TR_StatePropellers _321_StatePropellers_fired_1;
  /* us14::StatePropellers */ kcg_bool _320_StatePropellers_reset_nxt_1;
  /* us14::StatePropellers */ SSM_ST_StatePropellers _319_StatePropellers_state_nxt_1;
  /* us14::Toggle_PropellersTo */ kcg_bool _318_Toggle_PropellersTo_1;
  /* us14::Propellers_Toggling */ kcg_bool _317_Propellers_Toggling_1;
  /* us14::CDS_ES_PropellersButton_Label */ String_ES _316_CDS_ES_PropellersButton_Label_1;
  /* us14::CDS_ES_PropellersButton_Contour */ kcg_int _315_CDS_ES_PropellersButton_Contour_1;
  /* us14::StatePropellers::On::_L7 */ kcg_bool _L7_1_StatePropellers_On;
  /* us14::StatePropellers::On::_L6 */ kcg_bool _L6_1_StatePropellers_On;
  /* us14::StatePropellers::On::_L4 */ String_ES _L4_1_StatePropellers_On;
  /* us14::StatePropellers::On::_L5 */ kcg_int _L5_1_StatePropellers_On;
  /* us14::StatePropellers */ SSM_TR_StatePropellers _314_StatePropellers_fired_1;
  /* us14::StatePropellers */ kcg_bool StatePropellers_reset_nxt_1;
  /* us14::StatePropellers */ SSM_ST_StatePropellers StatePropellers_state_nxt_1;
  /* us14::Toggle_PropellersTo */ kcg_bool _313_Toggle_PropellersTo_1;
  /* us14::Propellers_Toggling */ kcg_bool _312_Propellers_Toggling_1;
  /* us14::CDS_ES_PropellersButton_Label */ String_ES CDS_ES_PropellersButton_Label_1;
  /* us14::CDS_ES_PropellersButton_Contour */ kcg_int CDS_ES_PropellersButton_Contour_1;
  /* us14::StatePropellers::TurningOff::_L33 */ kcg_bool _L33_1_StatePropellers_TurningOff;
  /* us14::StatePropellers::TurningOff::_L32 */ kcg_bool _L32_1_StatePropellers_TurningOff;
  /* us14::StatePropellers::TurningOff::_L30 */ String_ES _L30_1_StatePropellers_TurningOff;
  /* us14::StatePropellers::TurningOff::_L31 */ kcg_int _L31_1_StatePropellers_TurningOff;
  /* us14::StatePropellers */ SSM_TR_StatePropellers _311_StatePropellers_fired_strong_1;
  /* us14::StatePropellers */ kcg_bool _310_StatePropellers_reset_act_1;
  /* us14::StatePropellers */ SSM_ST_StatePropellers _309_StatePropellers_state_act_1;
  /* us14::StatePropellers::Off */ kcg_bool br_2_guard_1_StatePropellers_Off;
  /* us14::StatePropellers::Off */ kcg_bool br_1_guard_1_StatePropellers_Off;
  /* us14::StatePropellers */ SSM_TR_StatePropellers _308_StatePropellers_fired_strong_1;
  /* us14::StatePropellers */ kcg_bool _307_StatePropellers_reset_act_1;
  /* us14::StatePropellers */ SSM_ST_StatePropellers _306_StatePropellers_state_act_1;
  /* us14::StatePropellers::TurningOn */ kcg_bool _305_br_2_guard_1_StatePropellers_TurningOn;
  /* us14::StatePropellers::TurningOn */ kcg_bool _304_br_1_guard_1_StatePropellers_TurningOn;
  /* us14::StatePropellers */ SSM_TR_StatePropellers _303_StatePropellers_fired_strong_1;
  /* us14::StatePropellers */ kcg_bool _302_StatePropellers_reset_act_1;
  /* us14::StatePropellers */ SSM_ST_StatePropellers _301_StatePropellers_state_act_1;
  /* us14::StatePropellers::On */ kcg_bool br_2_guard_1_StatePropellers_On;
  /* us14::StatePropellers::On */ kcg_bool br_1_guard_1_StatePropellers_On;
  /* us14::StatePropellers */ SSM_TR_StatePropellers _300_StatePropellers_fired_strong_1;
  /* us14::StatePropellers */ kcg_bool StatePropellers_reset_act_1;
  /* us14::StatePropellers */ SSM_ST_StatePropellers _299_StatePropellers_state_act_1;
  /* us14::StatePropellers::TurningOff */ kcg_bool br_2_guard_1_StatePropellers_TurningOff;
  /* us14::StatePropellers::TurningOff */ kcg_bool br_1_guard_1_StatePropellers_TurningOff;
  /* us14::StateHorizonSensor */ SSM_TR_StateHorizonSensor _298_StateHorizonSensor_fired_1;
  /* us14::StateHorizonSensor */ kcg_bool _297_StateHorizonSensor_reset_nxt_1;
  /* us14::StateHorizonSensor */ SSM_ST_StateHorizonSensor _296_StateHorizonSensor_state_nxt_1;
  /* us14::HorizonSensorButton_Fail */ kcg_bool _295_HorizonSensorButton_Fail_1;
  /* us14::Toggle_HorizonSensorTo */ kcg_bool _294_Toggle_HorizonSensorTo_1;
  /* us14::HorizonSensor_Toggling */ kcg_bool _293_HorizonSensor_Toggling_1;
  /* us14::CDS_ES_HorizonSensorButton_Label */ String_ES _292_CDS_ES_HorizonSensorButton_Label_1;
  /* us14::CDS_ES_HorizonSensorButton_Contour */ kcg_int _291_CDS_ES_HorizonSensorButton_Contour_1;
  /* us14::StateHorizonSensor::Off::_L6 */ kcg_bool _L6_1_StateHorizonSensor_Off;
  /* us14::StateHorizonSensor::Off::_L5 */ kcg_bool _L5_1_StateHorizonSensor_Off;
  /* us14::StateHorizonSensor::Off::_L3 */ kcg_bool _L3_1_StateHorizonSensor_Off;
  /* us14::StateHorizonSensor::Off::_L2 */ String_ES _L2_1_StateHorizonSensor_Off;
  /* us14::StateHorizonSensor::Off::_L1 */ kcg_int _L1_1_StateHorizonSensor_Off;
  /* us14::StateHorizonSensor */ SSM_TR_StateHorizonSensor _290_StateHorizonSensor_fired_1;
  /* us14::StateHorizonSensor */ kcg_bool _289_StateHorizonSensor_reset_nxt_1;
  /* us14::StateHorizonSensor */ SSM_ST_StateHorizonSensor _288_StateHorizonSensor_state_nxt_1;
  /* us14::HorizonSensorButton_Fail */ kcg_bool _287_HorizonSensorButton_Fail_1;
  /* us14::Toggle_HorizonSensorTo */ kcg_bool _286_Toggle_HorizonSensorTo_1;
  /* us14::HorizonSensor_Toggling */ kcg_bool _285_HorizonSensor_Toggling_1;
  /* us14::CDS_ES_HorizonSensorButton_Label */ String_ES _284_CDS_ES_HorizonSensorButton_Label_1;
  /* us14::CDS_ES_HorizonSensorButton_Contour */ kcg_int _283_CDS_ES_HorizonSensorButton_Contour_1;
  /* us14::StateHorizonSensor::TurningOn::_L18 */ kcg_bool _L18_1_StateHorizonSensor_TurningOn;
  /* us14::StateHorizonSensor::TurningOn::_L16 */ kcg_bool _L16_1_StateHorizonSensor_TurningOn;
  /* us14::StateHorizonSensor::TurningOn::_L15 */ kcg_bool _L15_1_StateHorizonSensor_TurningOn;
  /* us14::StateHorizonSensor::TurningOn::_L13 */ String_ES _L13_1_StateHorizonSensor_TurningOn;
  /* us14::StateHorizonSensor::TurningOn::_L14 */ kcg_int _L14_1_StateHorizonSensor_TurningOn;
  /* us14::StateHorizonSensor */ SSM_TR_StateHorizonSensor _282_StateHorizonSensor_fired_1;
  /* us14::StateHorizonSensor */ kcg_bool _281_StateHorizonSensor_reset_nxt_1;
  /* us14::StateHorizonSensor */ SSM_ST_StateHorizonSensor _280_StateHorizonSensor_state_nxt_1;
  /* us14::HorizonSensorButton_Fail */ kcg_bool _279_HorizonSensorButton_Fail_1;
  /* us14::Toggle_HorizonSensorTo */ kcg_bool _278_Toggle_HorizonSensorTo_1;
  /* us14::HorizonSensor_Toggling */ kcg_bool _277_HorizonSensor_Toggling_1;
  /* us14::CDS_ES_HorizonSensorButton_Label */ String_ES _276_CDS_ES_HorizonSensorButton_Label_1;
  /* us14::CDS_ES_HorizonSensorButton_Contour */ kcg_int _275_CDS_ES_HorizonSensorButton_Contour_1;
  /* us14::StateHorizonSensor::On::_L9 */ kcg_bool _L9_1_StateHorizonSensor_On;
  /* us14::StateHorizonSensor::On::_L7 */ kcg_bool _L7_1_StateHorizonSensor_On;
  /* us14::StateHorizonSensor::On::_L5 */ kcg_bool _L5_1_StateHorizonSensor_On;
  /* us14::StateHorizonSensor::On::_L3 */ kcg_int _L3_1_StateHorizonSensor_On;
  /* us14::StateHorizonSensor::On::_L4 */ String_ES _L4_1_StateHorizonSensor_On;
  /* us14::StateHorizonSensor */ SSM_TR_StateHorizonSensor _274_StateHorizonSensor_fired_1;
  /* us14::StateHorizonSensor */ kcg_bool _273_StateHorizonSensor_reset_nxt_1;
  /* us14::StateHorizonSensor */ SSM_ST_StateHorizonSensor _272_StateHorizonSensor_state_nxt_1;
  /* us14::HorizonSensorButton_Fail */ kcg_bool _271_HorizonSensorButton_Fail_1;
  /* us14::Toggle_HorizonSensorTo */ kcg_bool _270_Toggle_HorizonSensorTo_1;
  /* us14::HorizonSensor_Toggling */ kcg_bool _269_HorizonSensor_Toggling_1;
  /* us14::CDS_ES_HorizonSensorButton_Label */ String_ES _268_CDS_ES_HorizonSensorButton_Label_1;
  /* us14::CDS_ES_HorizonSensorButton_Contour */ kcg_int _267_CDS_ES_HorizonSensorButton_Contour_1;
  /* us14::StateHorizonSensor::TurningOff::_L31 */ kcg_bool _L31_1_StateHorizonSensor_TurningOff;
  /* us14::StateHorizonSensor::TurningOff::_L29 */ kcg_bool _L29_1_StateHorizonSensor_TurningOff;
  /* us14::StateHorizonSensor::TurningOff::_L28 */ kcg_bool _L28_1_StateHorizonSensor_TurningOff;
  /* us14::StateHorizonSensor::TurningOff::_L26 */ String_ES _L26_1_StateHorizonSensor_TurningOff;
  /* us14::StateHorizonSensor::TurningOff::_L27 */ kcg_int _L27_1_StateHorizonSensor_TurningOff;
  /* us14::StateHorizonSensor */ SSM_TR_StateHorizonSensor _266_StateHorizonSensor_fired_1;
  /* us14::StateHorizonSensor */ kcg_bool StateHorizonSensor_reset_nxt_1;
  /* us14::StateHorizonSensor */ SSM_ST_StateHorizonSensor StateHorizonSensor_state_nxt_1;
  /* us14::HorizonSensorButton_Fail */ kcg_bool _265_HorizonSensorButton_Fail_1;
  /* us14::Toggle_HorizonSensorTo */ kcg_bool _264_Toggle_HorizonSensorTo_1;
  /* us14::HorizonSensor_Toggling */ kcg_bool _263_HorizonSensor_Toggling_1;
  /* us14::CDS_ES_HorizonSensorButton_Label */ String_ES CDS_ES_HorizonSensorButton_Label_1;
  /* us14::CDS_ES_HorizonSensorButton_Contour */ kcg_int CDS_ES_HorizonSensorButton_Contour_1;
  /* us14::StateHorizonSensor::Fail::_L18 */ kcg_bool _L18_1_StateHorizonSensor_Fail;
  /* us14::StateHorizonSensor::Fail::_L7 */ String_ES _L7_1_StateHorizonSensor_Fail;
  /* us14::StateHorizonSensor::Fail::_L6 */ kcg_int _L6_1_StateHorizonSensor_Fail;
  /* us14::StateHorizonSensor::Fail::_L1 */ kcg_bool _L1_1_StateHorizonSensor_Fail;
  /* us14::StateHorizonSensor::Fail::_L3 */ kcg_bool _L3_1_StateHorizonSensor_Fail;
  /* us14::StateHorizonSensor */ SSM_TR_StateHorizonSensor _262_StateHorizonSensor_fired_strong_1;
  /* us14::StateHorizonSensor */ kcg_bool _261_StateHorizonSensor_reset_act_1;
  /* us14::StateHorizonSensor */ SSM_ST_StateHorizonSensor _260_StateHorizonSensor_state_act_1;
  /* us14::StateHorizonSensor::Off */ kcg_bool _259_br_3_guard_1_StateHorizonSensor_Off;
  /* us14::StateHorizonSensor::Off */ kcg_bool _258_br_2_guard_1_StateHorizonSensor_Off;
  /* us14::StateHorizonSensor::Off */ kcg_bool _257_br_1_guard_1_StateHorizonSensor_Off;
  /* us14::StateHorizonSensor */ SSM_TR_StateHorizonSensor _256_StateHorizonSensor_fired_strong_1;
  /* us14::StateHorizonSensor */ kcg_bool _255_StateHorizonSensor_reset_act_1;
  /* us14::StateHorizonSensor */ SSM_ST_StateHorizonSensor _254_StateHorizonSensor_state_act_1;
  /* us14::StateHorizonSensor::TurningOn */ kcg_bool _253_br_3_guard_1_StateHorizonSensor_TurningOn;
  /* us14::StateHorizonSensor::TurningOn */ kcg_bool _252_br_2_guard_1_StateHorizonSensor_TurningOn;
  /* us14::StateHorizonSensor::TurningOn */ kcg_bool _251_br_1_guard_1_StateHorizonSensor_TurningOn;
  /* us14::StateHorizonSensor */ SSM_TR_StateHorizonSensor _250_StateHorizonSensor_fired_strong_1;
  /* us14::StateHorizonSensor */ kcg_bool _249_StateHorizonSensor_reset_act_1;
  /* us14::StateHorizonSensor */ SSM_ST_StateHorizonSensor _248_StateHorizonSensor_state_act_1;
  /* us14::StateHorizonSensor::On */ kcg_bool _247_br_3_guard_1_StateHorizonSensor_On;
  /* us14::StateHorizonSensor::On */ kcg_bool _246_br_2_guard_1_StateHorizonSensor_On;
  /* us14::StateHorizonSensor::On */ kcg_bool _245_br_1_guard_1_StateHorizonSensor_On;
  /* us14::StateHorizonSensor */ SSM_TR_StateHorizonSensor _244_StateHorizonSensor_fired_strong_1;
  /* us14::StateHorizonSensor */ kcg_bool _243_StateHorizonSensor_reset_act_1;
  /* us14::StateHorizonSensor */ SSM_ST_StateHorizonSensor _242_StateHorizonSensor_state_act_1;
  /* us14::StateHorizonSensor::TurningOff */ kcg_bool br_3_guard_1_StateHorizonSensor_TurningOff;
  /* us14::StateHorizonSensor::TurningOff */ kcg_bool br_2_guard_1_StateHorizonSensor_TurningOff;
  /* us14::StateHorizonSensor::TurningOff */ kcg_bool _241_br_1_guard_1_StateHorizonSensor_TurningOff;
  /* us14::StateHorizonSensor */ SSM_TR_StateHorizonSensor _240_StateHorizonSensor_fired_strong_1;
  /* us14::StateHorizonSensor */ kcg_bool StateHorizonSensor_reset_act_1;
  /* us14::StateHorizonSensor */ SSM_ST_StateHorizonSensor _239_StateHorizonSensor_state_act_1;
  /* us14::StateHorizonSensor::Fail */ kcg_bool br_1_guard_1_StateHorizonSensor_Fail;
  /* us14::ManualOperation */ SSM_TR_ManualOperation _238_ManualOperation_fired_1;
  /* us14::ManualOperation */ kcg_bool _237_ManualOperation_reset_nxt_1;
  /* us14::ManualOperation */ SSM_ST_ManualOperation _236_ManualOperation_state_nxt_1;
  /* us14::AutoVerifyButton_Enabled */ kcg_bool _235_AutoVerifyButton_Enabled_1;
  /* us14::CameraButton_Enabled */ kcg_bool _234_CameraButton_Enabled_1;
  /* us14::PropellersButton_Enabled */ kcg_bool _233_PropellersButton_Enabled_1;
  /* us14::HorizonSensorButton_Enabled */ kcg_bool _232_HorizonSensorButton_Enabled_1;
  /* us14::GyroscopeButton_Enabled */ kcg_bool _231_GyroscopeButton_Enabled_1;
  /* us14::ManualOperation::Enabled::_L3 */ kcg_bool _L3_1_ManualOperation_Enabled;
  /* us14::ManualOperation */ SSM_TR_ManualOperation _230_ManualOperation_fired_1;
  /* us14::ManualOperation */ kcg_bool ManualOperation_reset_nxt_1;
  /* us14::ManualOperation */ SSM_ST_ManualOperation ManualOperation_state_nxt_1;
  /* us14::AutoVerifyButton_Enabled */ kcg_bool _229_AutoVerifyButton_Enabled_1;
  /* us14::CameraButton_Enabled */ kcg_bool _228_CameraButton_Enabled_1;
  /* us14::PropellersButton_Enabled */ kcg_bool _227_PropellersButton_Enabled_1;
  /* us14::HorizonSensorButton_Enabled */ kcg_bool _226_HorizonSensorButton_Enabled_1;
  /* us14::GyroscopeButton_Enabled */ kcg_bool _225_GyroscopeButton_Enabled_1;
  /* us14::ManualOperation::Disabled::_L2 */ kcg_bool _L2_1_ManualOperation_Disabled;
  /* us14::ManualOperation */ SSM_TR_ManualOperation _224_ManualOperation_fired_strong_1;
  /* us14::ManualOperation */ kcg_bool _223_ManualOperation_reset_act_1;
  /* us14::ManualOperation */ SSM_ST_ManualOperation _222_ManualOperation_state_act_1;
  /* us14::ManualOperation::Enabled */ kcg_bool br_2_guard_1_ManualOperation_Enabled;
  /* us14::ManualOperation::Enabled */ kcg_bool br_1_guard_1_ManualOperation_Enabled;
  /* us14::ManualOperation */ SSM_TR_ManualOperation _221_ManualOperation_fired_strong_1;
  /* us14::ManualOperation */ kcg_bool ManualOperation_reset_act_1;
  /* us14::ManualOperation */ SSM_ST_ManualOperation _220_ManualOperation_state_act_1;
  /* us14::ManualOperation::Disabled */ kcg_bool br_2_guard_1_ManualOperation_Disabled;
  /* us14::ManualOperation::Disabled */ kcg_bool br_1_guard_1_ManualOperation_Disabled;
  /* us14::StateGyroscope */ SSM_TR_StateGyroscope _219_StateGyroscope_fired_1;
  /* us14::StateGyroscope */ kcg_bool _218_StateGyroscope_reset_nxt_1;
  /* us14::StateGyroscope */ SSM_ST_StateGyroscope _217_StateGyroscope_state_nxt_1;
  /* us14::GyroscopeButton_Fail */ kcg_bool _216_GyroscopeButton_Fail_1;
  /* us14::Toggle_GyroscopeTo */ kcg_bool _215_Toggle_GyroscopeTo_1;
  /* us14::Gyroscope_Toggling */ kcg_bool _214_Gyroscope_Toggling_1;
  /* us14::CDS_ES_GyroscopeButton_Label */ String_ES _213_CDS_ES_GyroscopeButton_Label_1;
  /* us14::CDS_ES_GyroscopeButton_Contour */ kcg_int _212_CDS_ES_GyroscopeButton_Contour_1;
  /* us14::StateGyroscope::Off::_L9 */ kcg_bool _L9_1_StateGyroscope_Off;
  /* us14::StateGyroscope::Off::_L7 */ kcg_bool _L7_1_StateGyroscope_Off;
  /* us14::StateGyroscope::Off::_L5 */ kcg_bool _L5_1_StateGyroscope_Off;
  /* us14::StateGyroscope::Off::_L3 */ String_ES _L3_1_StateGyroscope_Off;
  /* us14::StateGyroscope::Off::_L1 */ kcg_int _L1_1_StateGyroscope_Off;
  /* us14::StateGyroscope */ SSM_TR_StateGyroscope _211_StateGyroscope_fired_1;
  /* us14::StateGyroscope */ kcg_bool _210_StateGyroscope_reset_nxt_1;
  /* us14::StateGyroscope */ SSM_ST_StateGyroscope _209_StateGyroscope_state_nxt_1;
  /* us14::GyroscopeButton_Fail */ kcg_bool _208_GyroscopeButton_Fail_1;
  /* us14::Toggle_GyroscopeTo */ kcg_bool _207_Toggle_GyroscopeTo_1;
  /* us14::Gyroscope_Toggling */ kcg_bool _206_Gyroscope_Toggling_1;
  /* us14::CDS_ES_GyroscopeButton_Label */ String_ES _205_CDS_ES_GyroscopeButton_Label_1;
  /* us14::CDS_ES_GyroscopeButton_Contour */ kcg_int _204_CDS_ES_GyroscopeButton_Contour_1;
  /* us14::StateGyroscope::On::_L8 */ kcg_bool _L8_1_StateGyroscope_On;
  /* us14::StateGyroscope::On::_L6 */ kcg_bool _L6_1_StateGyroscope_On;
  /* us14::StateGyroscope::On::_L5 */ kcg_bool _L5_1_StateGyroscope_On;
  /* us14::StateGyroscope::On::_L3 */ String_ES _L3_1_StateGyroscope_On;
  /* us14::StateGyroscope::On::_L4 */ kcg_int _L4_1_StateGyroscope_On;
  /* us14::StateGyroscope */ SSM_TR_StateGyroscope _203_StateGyroscope_fired_1;
  /* us14::StateGyroscope */ kcg_bool _202_StateGyroscope_reset_nxt_1;
  /* us14::StateGyroscope */ SSM_ST_StateGyroscope _201_StateGyroscope_state_nxt_1;
  /* us14::GyroscopeButton_Fail */ kcg_bool _200_GyroscopeButton_Fail_1;
  /* us14::Toggle_GyroscopeTo */ kcg_bool _199_Toggle_GyroscopeTo_1;
  /* us14::Gyroscope_Toggling */ kcg_bool _198_Gyroscope_Toggling_1;
  /* us14::CDS_ES_GyroscopeButton_Label */ String_ES _197_CDS_ES_GyroscopeButton_Label_1;
  /* us14::CDS_ES_GyroscopeButton_Contour */ kcg_int _196_CDS_ES_GyroscopeButton_Contour_1;
  /* us14::StateGyroscope::TurningOff::_L30 */ kcg_bool _L30_1_StateGyroscope_TurningOff;
  /* us14::StateGyroscope::TurningOff::_L28 */ kcg_bool _L28_1_StateGyroscope_TurningOff;
  /* us14::StateGyroscope::TurningOff::_L27 */ kcg_bool _L27_1_StateGyroscope_TurningOff;
  /* us14::StateGyroscope::TurningOff::_L25 */ kcg_int _L25_1_StateGyroscope_TurningOff;
  /* us14::StateGyroscope::TurningOff::_L26 */ String_ES _L26_1_StateGyroscope_TurningOff;
  /* us14::StateGyroscope */ SSM_TR_StateGyroscope _195_StateGyroscope_fired_1;
  /* us14::StateGyroscope */ kcg_bool _194_StateGyroscope_reset_nxt_1;
  /* us14::StateGyroscope */ SSM_ST_StateGyroscope _193_StateGyroscope_state_nxt_1;
  /* us14::GyroscopeButton_Fail */ kcg_bool _192_GyroscopeButton_Fail_1;
  /* us14::Toggle_GyroscopeTo */ kcg_bool _191_Toggle_GyroscopeTo_1;
  /* us14::Gyroscope_Toggling */ kcg_bool _190_Gyroscope_Toggling_1;
  /* us14::CDS_ES_GyroscopeButton_Label */ String_ES _189_CDS_ES_GyroscopeButton_Label_1;
  /* us14::CDS_ES_GyroscopeButton_Contour */ kcg_int _188_CDS_ES_GyroscopeButton_Contour_1;
  /* us14::StateGyroscope::Fail::_L10 */ kcg_bool _L10_1_StateGyroscope_Fail;
  /* us14::StateGyroscope::Fail::_L7 */ String_ES _L7_1_StateGyroscope_Fail;
  /* us14::StateGyroscope::Fail::_L6 */ kcg_int _L6_1_StateGyroscope_Fail;
  /* us14::StateGyroscope::Fail::_L1 */ kcg_bool _L1_1_StateGyroscope_Fail;
  /* us14::StateGyroscope::Fail::_L3 */ kcg_bool _L3_1_StateGyroscope_Fail;
  /* us14::StateGyroscope */ SSM_TR_StateGyroscope _187_StateGyroscope_fired_1;
  /* us14::StateGyroscope */ kcg_bool StateGyroscope_reset_nxt_1;
  /* us14::StateGyroscope */ SSM_ST_StateGyroscope StateGyroscope_state_nxt_1;
  /* us14::GyroscopeButton_Fail */ kcg_bool _186_GyroscopeButton_Fail_1;
  /* us14::Toggle_GyroscopeTo */ kcg_bool _185_Toggle_GyroscopeTo_1;
  /* us14::Gyroscope_Toggling */ kcg_bool _184_Gyroscope_Toggling_1;
  /* us14::CDS_ES_GyroscopeButton_Label */ String_ES CDS_ES_GyroscopeButton_Label_1;
  /* us14::CDS_ES_GyroscopeButton_Contour */ kcg_int CDS_ES_GyroscopeButton_Contour_1;
  /* us14::StateGyroscope::TurningOn::_L19 */ kcg_bool _L19_1_StateGyroscope_TurningOn;
  /* us14::StateGyroscope::TurningOn::_L17 */ kcg_bool _L17_1_StateGyroscope_TurningOn;
  /* us14::StateGyroscope::TurningOn::_L16 */ kcg_bool _L16_1_StateGyroscope_TurningOn;
  /* us14::StateGyroscope::TurningOn::_L15 */ String_ES _L15_1_StateGyroscope_TurningOn;
  /* us14::StateGyroscope::TurningOn::_L14 */ kcg_int _L14_1_StateGyroscope_TurningOn;
  /* us14::StateGyroscope */ SSM_TR_StateGyroscope _183_StateGyroscope_fired_strong_1;
  /* us14::StateGyroscope */ kcg_bool _182_StateGyroscope_reset_act_1;
  /* us14::StateGyroscope */ SSM_ST_StateGyroscope _181_StateGyroscope_state_act_1;
  /* us14::StateGyroscope::Off */ kcg_bool br_3_guard_1_StateGyroscope_Off;
  /* us14::StateGyroscope::Off */ kcg_bool br_2_guard_1_StateGyroscope_Off;
  /* us14::StateGyroscope::Off */ kcg_bool br_1_guard_1_StateGyroscope_Off;
  /* us14::StateGyroscope */ SSM_TR_StateGyroscope _180_StateGyroscope_fired_strong_1;
  /* us14::StateGyroscope */ kcg_bool _179_StateGyroscope_reset_act_1;
  /* us14::StateGyroscope */ SSM_ST_StateGyroscope _178_StateGyroscope_state_act_1;
  /* us14::StateGyroscope::On */ kcg_bool br_3_guard_1_StateGyroscope_On;
  /* us14::StateGyroscope::On */ kcg_bool br_2_guard_1_StateGyroscope_On;
  /* us14::StateGyroscope::On */ kcg_bool br_1_guard_1_StateGyroscope_On;
  /* us14::StateGyroscope */ SSM_TR_StateGyroscope _177_StateGyroscope_fired_strong_1;
  /* us14::StateGyroscope */ kcg_bool _176_StateGyroscope_reset_act_1;
  /* us14::StateGyroscope */ SSM_ST_StateGyroscope _175_StateGyroscope_state_act_1;
  /* us14::StateGyroscope::TurningOff */ kcg_bool _174_br_3_guard_1_StateGyroscope_TurningOff;
  /* us14::StateGyroscope::TurningOff */ kcg_bool _173_br_2_guard_1_StateGyroscope_TurningOff;
  /* us14::StateGyroscope::TurningOff */ kcg_bool _172_br_1_guard_1_StateGyroscope_TurningOff;
  /* us14::StateGyroscope */ SSM_TR_StateGyroscope _171_StateGyroscope_fired_strong_1;
  /* us14::StateGyroscope */ kcg_bool _170_StateGyroscope_reset_act_1;
  /* us14::StateGyroscope */ SSM_ST_StateGyroscope _169_StateGyroscope_state_act_1;
  /* us14::StateGyroscope::Fail */ kcg_bool br_1_guard_1_StateGyroscope_Fail;
  /* us14::StateGyroscope */ SSM_TR_StateGyroscope _168_StateGyroscope_fired_strong_1;
  /* us14::StateGyroscope */ kcg_bool StateGyroscope_reset_act_1;
  /* us14::StateGyroscope */ SSM_ST_StateGyroscope _167_StateGyroscope_state_act_1;
  /* us14::StateGyroscope::TurningOn */ kcg_bool br_3_guard_1_StateGyroscope_TurningOn;
  /* us14::StateGyroscope::TurningOn */ kcg_bool br_2_guard_1_StateGyroscope_TurningOn;
  /* us14::StateGyroscope::TurningOn */ kcg_bool br_1_guard_1_StateGyroscope_TurningOn;
  /* us14::StateGyroscope */ SSM_ST_StateGyroscope StateGyroscope_state_sel_1;
  /* us14::StateGyroscope */ SSM_ST_StateGyroscope StateGyroscope_state_act_1;
  /* us14::StateGyroscope */ kcg_bool StateGyroscope_reset_sel_1;
  /* us14::StateGyroscope */ kcg_bool StateGyroscope_reset_prv_1;
  /* us14::StateGyroscope */ SSM_TR_StateGyroscope StateGyroscope_fired_strong_1;
  /* us14::StateGyroscope */ SSM_TR_StateGyroscope StateGyroscope_fired_1;
  /* us14::ManualOperation */ SSM_ST_ManualOperation ManualOperation_state_sel_1;
  /* us14::ManualOperation */ SSM_ST_ManualOperation ManualOperation_state_act_1;
  /* us14::ManualOperation */ kcg_bool ManualOperation_reset_sel_1;
  /* us14::ManualOperation */ kcg_bool ManualOperation_reset_prv_1;
  /* us14::ManualOperation */ SSM_TR_ManualOperation ManualOperation_fired_strong_1;
  /* us14::ManualOperation */ SSM_TR_ManualOperation ManualOperation_fired_1;
  /* us14::StateHorizonSensor */ SSM_ST_StateHorizonSensor StateHorizonSensor_state_sel_1;
  /* us14::StateHorizonSensor */ SSM_ST_StateHorizonSensor StateHorizonSensor_state_act_1;
  /* us14::StateHorizonSensor */ kcg_bool StateHorizonSensor_reset_sel_1;
  /* us14::StateHorizonSensor */ kcg_bool StateHorizonSensor_reset_prv_1;
  /* us14::StateHorizonSensor */ SSM_TR_StateHorizonSensor StateHorizonSensor_fired_strong_1;
  /* us14::StateHorizonSensor */ SSM_TR_StateHorizonSensor StateHorizonSensor_fired_1;
  /* us14::StatePropellers */ SSM_ST_StatePropellers StatePropellers_state_sel_1;
  /* us14::StatePropellers */ SSM_ST_StatePropellers StatePropellers_state_act_1;
  /* us14::StatePropellers */ kcg_bool StatePropellers_reset_sel_1;
  /* us14::StatePropellers */ kcg_bool StatePropellers_reset_prv_1;
  /* us14::StatePropellers */ SSM_TR_StatePropellers StatePropellers_fired_strong_1;
  /* us14::StatePropellers */ SSM_TR_StatePropellers StatePropellers_fired_1;
  /* us14::StateCamera */ SSM_ST_StateCamera StateCamera_state_sel_1;
  /* us14::StateCamera */ SSM_ST_StateCamera StateCamera_state_act_1;
  /* us14::StateCamera */ kcg_bool StateCamera_reset_sel_1;
  /* us14::StateCamera */ kcg_bool StateCamera_reset_prv_1;
  /* us14::StateCamera */ SSM_TR_StateCamera StateCamera_fired_strong_1;
  /* us14::StateCamera */ SSM_TR_StateCamera StateCamera_fired_1;
  /* us14::AutoVerifyUS14 */ SSM_ST_AutoVerifyUS14 AutoVerifyUS14_state_sel_1;
  /* us14::AutoVerifyUS14 */ SSM_ST_AutoVerifyUS14 AutoVerifyUS14_state_act_1;
  /* us14::AutoVerifyUS14 */ kcg_bool AutoVerifyUS14_reset_sel_1;
  /* us14::AutoVerifyUS14 */ kcg_bool AutoVerifyUS14_reset_prv_1;
  /* us14::AutoVerifyUS14 */ SSM_TR_AutoVerifyUS14 AutoVerifyUS14_fired_strong_1;
  /* us14::AutoVerifyUS14 */ SSM_TR_AutoVerifyUS14 AutoVerifyUS14_fired_1;
  /* us14::Toggle_Gyroscope */ kcg_bool Toggle_Gyroscope_1;
  /* us14::Gyroscope_On */ kcg_bool Gyroscope_On_1;
  /* us14::Gyroscope_Off */ kcg_bool Gyroscope_Off_1;
  /* us14::GyroscopeButton_Enabled */ kcg_bool GyroscopeButton_Enabled_1;
  /* us14::Operating */ kcg_bool Operating_1;
  /* us14::Toggle_HorizonSensor */ kcg_bool Toggle_HorizonSensor_1;
  /* us14::HorizonSensor_Off */ kcg_bool HorizonSensor_Off_1;
  /* us14::HorizonSensor_On */ kcg_bool HorizonSensor_On_1;
  /* us14::Toggle_Propellers */ kcg_bool Toggle_Propellers_1;
  /* us14::Propellers_Off */ kcg_bool Propellers_Off_1;
  /* us14::Propellers_On */ kcg_bool Propellers_On_1;
  /* us14::Toggle_Camera */ kcg_bool Toggle_Camera_1;
  /* us14::Camera_Off */ kcg_bool Camera_Off_1;
  /* us14::Camera_On */ kcg_bool Camera_On_1;
  /* us14::HorizonSensorButton_Enabled */ kcg_bool HorizonSensorButton_Enabled_1;
  /* us14::PropellersButton_Enabled */ kcg_bool PropellersButton_Enabled_1;
  /* us14::CameraButton_Enabled */ kcg_bool CameraButton_Enabled_1;
  /* us14::Gyroscope_Toggling */ kcg_bool Gyroscope_Toggling_1;
  /* us14::HorizonSensor_Toggling */ kcg_bool HorizonSensor_Toggling_1;
  /* us14::Propellers_Toggling */ kcg_bool Propellers_Toggling_1;
  /* us14::Camera_Toggling */ kcg_bool Camera_Toggling_1;
  /* us14::Toggle_CameraTo */ kcg_bool Toggle_CameraTo_1;
  /* us14::Toggle_GyroscopeTo */ kcg_bool Toggle_GyroscopeTo_1;
  /* us14::Toggle_HorizonSensorTo */ kcg_bool Toggle_HorizonSensorTo_1;
  /* us14::Toggle_PropellersTo */ kcg_bool Toggle_PropellersTo_1;
  /* us14::GyroscopeButton_Fail */ kcg_bool GyroscopeButton_Fail_1;
  /* us14::HorizonSensorButton_Fail */ kcg_bool HorizonSensorButton_Fail_1;
  /* us14::CameraButton_Fail */ kcg_bool CameraButton_Fail_1;
  /* us14::Camera_Fail */ kcg_bool Camera_Fail_1;
  /* us14::Gyroscope_fail */ kcg_bool Gyroscope_fail_1;
  /* us14::HorizonSensor_Fail */ kcg_bool HorizonSensor_Fail_1;
  /* us14::AutoVerifyButton_Enabled */ kcg_bool AutoVerifyButton_Enabled_1;
  /* us14::Fails */ kcg_bool Fails_1;
  /* us14::_L33 */ kcg_bool _L33_1;
  /* us14::_L43 */ kcg_bool _166__L43_1;
  /* us14::_L42 */ kcg_bool _165__L42_1;
  /* us14::_L41 */ kcg_bool _164__L41_1;
  /* us14::_L40 */ kcg_bool _L40_1;
  /* us14::_L39 */ kcg_bool _L39_1;
  /* us14::_L38 */ kcg_bool _L38_1;
  /* us14::_L35 */ kcg_bool _L35_1;
  /* us14::_L44 */ kcg_bool _L44_1;
  /* us14::_L57 */ kcg_bool _L57_1;
  /* us14::_L58 */ kcg_bool _L58_1;
  /* us14::_L70 */ kcg_bool _L70_1;
  /* us14::_L69 */ kcg_bool _L69_1;
  /* us14::_L68 */ kcg_bool _L68_1;
  /* us14::_L67 */ kcg_bool _L67_1;
  /* us14::_L65 */ kcg_bool _L65_1;
  /* us14::_L61 */ kcg_bool _L61_1;
  /* us14::_L83 */ kcg_bool _L83_1;
  /* us14::_L82 */ kcg_bool _L82_1;
  /* us14::_L81 */ kcg_bool _L81_1;
  /* us14::_L80 */ kcg_bool _L80_1;
  /* us14::_L78 */ kcg_bool _L78_1;
  /* us14::_L74 */ kcg_bool _L74_1;
  /* us14::_L96 */ kcg_bool _L96_1;
  /* us14::_L95 */ kcg_bool _L95_1;
  /* us14::_L94 */ kcg_bool _L94_1;
  /* us14::_L93 */ kcg_bool _L93_1;
  /* us14::_L91 */ kcg_bool _L91_1;
  /* us14::_L87 */ kcg_bool _L87_1;
  /* us14::_L98 */ kcg_bool _L98_1;
  /* us14::_L99 */ kcg_bool _L99_1;
  /* us14::_L100 */ kcg_bool _L100_1;
  /* us14::_L101 */ kcg_bool _L101_1;
  /* us14::_L102 */ kcg_bool _L102_1;
  /* us14::_L103 */ kcg_bool _L103_1;
  /* us14::_L104 */ kcg_bool _L104_1;
  /* us14::_L105 */ kcg_bool _L105_1;
  /* us14::_L106 */ kcg_bool _L106_1;
  /* us14::_L107 */ kcg_bool _L107_1;
  /* us14::_L108 */ kcg_bool _L108_1;
  /* us14::_L109 */ kcg_bool _L109_1;
  /* us14::_L110 */ kcg_bool _L110_1;
  /* us14::_L111 */ kcg_bool _L111_1;
  /* us14::_L112 */ kcg_bool _L112_1;
  /* us14::_L123 */ kcg_bool _L123_1;
  /* us14::_L122 */ OperationMode _L122_1;
  /* us14::_L121 */ kcg_bool _L121_1;
  /* us14::_L120 */ kcg_bool _L120_1;
  /* us14::_L119 */ kcg_bool _L119_1;
  /* us14::_L124 */ kcg_int _L124_1;
  /* us14::_L125 */ kcg_int _L125_1;
  /* us14::_L126 */ kcg_int _L126_1;
  /* us14::_L129 */ kcg_int _L129_1;
  /* us14::_L128 */ kcg_int _L128_1;
  /* us14::_L127 */ kcg_int _L127_1;
  /* us14::_L132 */ kcg_int _L132_1;
  /* us14::_L131 */ kcg_int _L131_1;
  /* us14::_L130 */ kcg_int _L130_1;
  /* us14::_L138 */ kcg_int _L138_1;
  /* us14::_L137 */ kcg_int _L137_1;
  /* us14::_L136 */ kcg_int _L136_1;
  /* us14::_L139 */ kcg_bool _L139_1;
  /* us14::_L140 */ kcg_bool _L140_1;
  /* us14::_L142 */ kcg_bool _L142_1;
  /* us14::_L141 */ kcg_bool _L141_1;
  /* us14::_L144 */ kcg_bool _L144_1;
  /* us14::_L143 */ kcg_bool _L143_1;
  /* us14::_L148 */ kcg_bool _L148_1;
  /* us14::_L147 */ kcg_bool _L147_1;
  /* us14::_L149 */ kcg_bool _L149_1;
  /* us14::_L150 */ kcg_bool _L150_1;
  /* us14::_L151 */ kcg_bool _L151_1;
  /* us14::_L152 */ kcg_bool _L152_1;
  /* us14::_L155 */ OperationMode _L155_1;
  /* us14::_L160 */ kcg_bool _L160_1;
  /* us14::_L161 */ kcg_bool _L161_1;
  /* us14::_L162 */ kcg_bool _L162_1;
  /* us14::_L163 */ kcg_bool _L163_1;
  /* us14::_L164 */ kcg_bool _L164_1;
  /* us14::_L165 */ kcg_bool _L165_1;
  /* us14::_L166 */ kcg_bool _L166_1;
  /* us14::_L167 */ kcg_bool _L167_1;
  /* us14::_L170 */ kcg_bool _L170_1;
  /* us14::_L171 */ kcg_bool _L171_1;
  /* us14::_L172 */ kcg_bool _L172_1;
  /* us14::_L174 */ kcg_bool _L174_1;
  /* us14::_L175 */ kcg_bool _L175_1;
  /* us14::_L176 */ kcg_bool _L176_1;
  /* us14::_L177 */ kcg_bool _L177_1;
  /* us14::_L178 */ kcg_bool _L178_1;
  /* us14::_L180 */ kcg_bool _L180_1;
  /* us14::_L182 */ kcg_bool _L182_1;
  /* us14::_L183 */ kcg_bool _L183_1;
  /* us14::_L184 */ kcg_bool _L184_1;
  /* us14::_L185 */ kcg_bool _L185_1;
  /* us14::_L186 */ kcg_int _L186_1;
  /* us14::_L187 */ kcg_int _L187_1;
  /* us14::_L188 */ kcg_int _L188_1;
  /* us14::_L190 */ kcg_bool _L190_1;
  /* us14::_L192 */ kcg_bool _L192_1;
  /* us14::_L193 */ kcg_bool _L193_1;
  /* us14::_L194 */ kcg_bool _L194_1;
  /* us14::_L196 */ kcg_bool _L196_1;
  /* us14::_L195 */ kcg_bool _L195_1;
  /* us14::CDS_AutoVerifyButton_Enabled */ kcg_int CDS_AutoVerifyButton_Enabled_1;
  /* us14::SAT_Fix_Equipments */ kcg_bool _435_SAT_Fix_Equipments_1;
  /* us14::SAT_Auto_Verify */ kcg_bool _436_SAT_Auto_Verify_1;
  /* us14::CDS_Auto_Verify_Test */ kcg_int _437_CDS_Auto_Verify_Test_1;
  /* us14::CDS_Auto_Verify_Label */ String_ES _438_CDS_Auto_Verify_Label_1;
  /* us14::CDS_Auto_Verify_Contorno */ kcg_int _439_CDS_Auto_Verify_Contorno_1;
  /* us14::SAT_CameraState_ToggleTo */ kcg_bool SAT_CameraState_ToggleTo_1;
  /* us14::SAT_CameraState_Toggle */ kcg_bool SAT_CameraState_Toggle_1;
  /* us14::SAT_PropellersState_ToggleTo */ kcg_bool SAT_PropellersState_ToggleTo_1;
  /* us14::SAT_PropellersState_Toggle */ kcg_bool SAT_PropellersState_Toggle_1;
  /* us14::SAT_HorizonSensorState_ToggleTo */ kcg_bool SAT_HorizonSensorState_ToggleTo_1;
  /* us14::SAT_HorizonSensorState_Toggle */ kcg_bool SAT_HorizonSensorState_Toggle_1;
  /* us14::SAT_GyroscopeState_ToggleTo */ kcg_bool SAT_GyroscopeState_ToggleTo_1;
  /* us14::SAT_GyroscopeState_Toggle */ kcg_bool SAT_GyroscopeState_Toggle_1;
  /* us14::CDS_ES_CameraButton_Label */ String_ES _440_CDS_ES_CameraButton_Label_1;
  /* us14::CDS_ES_CameraButton_Contour */ kcg_int _441_CDS_ES_CameraButton_Contour_1;
  /* us14::CDS_ES_CameraButton_Enabled */ kcg_int CDS_ES_CameraButton_Enabled_1;
  /* us14::CDS_ES_PropellersButton_Label */ String_ES _442_CDS_ES_PropellersButton_Label_1;
  /* us14::CDS_ES_PropellersButton_Contour */ kcg_int _443_CDS_ES_PropellersButton_Contour_1;
  /* us14::CDS_ES_PropellersButton_Enabled */ kcg_int CDS_ES_PropellersButton_Enabled_1;
  /* us14::CDS_ES_HorizonSensorButton_Label */ String_ES _444_CDS_ES_HorizonSensorButton_Label_1;
  /* us14::CDS_ES_HorizonSensorButton_Contour */ kcg_int _445_CDS_ES_HorizonSensorButton_Contour_1;
  /* us14::CDS_ES_HorizonSensorButton_Enabled */ kcg_int CDS_ES_HorizonSensorButton_Enabled_1;
  /* us14::CDS_ES_GyroscopeButton_Label */ String_ES _446_CDS_ES_GyroscopeButton_Label_1;
  /* us14::CDS_ES_GyroscopeButton_Contour */ kcg_int _447_CDS_ES_GyroscopeButton_Contour_1;
  /* us14::CDS_ES_GyroscopeButton_Enabled */ kcg_int CDS_ES_GyroscopeButton_Enabled_1;
  /* us14::SAT_Fix_Response */ kcg_bool SAT_Fix_Response_1;
  /* us14::CDS_Auto_Verify */ kcg_bool CDS_Auto_Verify_1;
  /* us14::SAT_HorizonSensorState_Fail */ kcg_bool SAT_HorizonSensorState_Fail_1;
  /* us14::SAT_GyroscopeState_Fail */ kcg_bool SAT_GyroscopeState_Fail_1;
  /* us14::SAT_CameraState_Fail */ kcg_bool SAT_CameraState_Fail_1;
  /* us14::SAT_CameraState_Value */ kcg_bool SAT_CameraState_Value_1;
  /* us14::SAT_CameraState_Update */ kcg_bool SAT_CameraState_Update_1;
  /* us14::CDS_ES_CameraButton_Pressed */ kcg_bool CDS_ES_CameraButton_Pressed_1;
  /* us14::SAT_PropellersState_Value */ kcg_bool SAT_PropellersState_Value_1;
  /* us14::SAT_PropellersState_Update */ kcg_bool SAT_PropellersState_Update_1;
  /* us14::CDS_ES_PropellersButton_Pressed */ kcg_bool CDS_ES_PropellersButton_Pressed_1;
  /* us14::SAT_HorizonSensorState_Value */ kcg_bool SAT_HorizonSensorState_Value_1;
  /* us14::SAT_HorizonSensorState_Update */ kcg_bool SAT_HorizonSensorState_Update_1;
  /* us14::CDS_ES_HorizonSensorButton_Pressed */ kcg_bool CDS_ES_HorizonSensorButton_Pressed_1;
  /* us14::SAT_GyroscopeState_Value */ kcg_bool SAT_GyroscopeState_Value_1;
  /* us14::SAT_GyroscopeState_Update */ kcg_bool SAT_GyroscopeState_Update_1;
  /* us14::CDS_ES_GyroscopeButton_Pressed */ kcg_bool CDS_ES_GyroscopeButton_Pressed_1;
  /* us14::SAT_OperationMode_Value */ OperationMode SAT_OperationMode_Value_1;
  /* us14::SAT_OperationMode_Update */ kcg_bool SAT_OperationMode_Update_1;
  /* pwlinear::ClockCounter::_L2 */ kcg_int _L2_2_1_1;
  /* pwlinear::ClockCounter::_L6 */ kcg_int _L6_2_1_1;
  /* pwlinear::ClockCounter::_L7 */ kcg_int _L7_2_1_1;
  /* pwlinear::ClockCounter::_L8 */ kcg_int _L8_2_1_1;
  /* pwlinear::ClockCounter::_L11 */ kcg_int _L11_2_1_1;
  /* pwlinear::ClockCounter::_L13 */ kcg_bool _L13_2_1_1;
  /* pwlinear::ClockCounter::_L16 */ kcg_int _L16_2_1_1;
  /* pwlinear::ClockCounter::Count */ kcg_int Count_2_1_1;
  /* pwlinear::ClockCounter::Reset */ kcg_bool Reset_2_1_1;
  /* TimedSwitcher::Count */ kcg_int last_Count_1_1;
  /* TimedSwitcher::_L1 */ kcg_real _L1_1_1;
  /* TimedSwitcher::_L2 */ kcg_int _161__L2_1_1;
  /* TimedSwitcher::_L3 */ kcg_int _L3_1_1;
  /* TimedSwitcher::_L4 */ kcg_real _L4_1_1;
  /* TimedSwitcher::_L5 */ kcg_int _160__L5_1_1;
  /* TimedSwitcher::_L6 */ kcg_int _159__L6_1_1;
  /* TimedSwitcher::_L11 */ kcg_int _158__L11_1_1;
  /* TimedSwitcher::_L12 */ kcg_int _157__L12_1_1;
  /* TimedSwitcher::_L13 */ kcg_real _L13_1_1;
  /* TimedSwitcher::_L8 */ kcg_bool _L8_1_1;
  /* TimedSwitcher::IncAt */ kcg_int IncAt_1_1;
  /* TimedSwitcher::ResetAt */ kcg_int ResetAt_1_1;
  /* rhuan::SM1 */ SSM_TR_SM1 _156_SM1_fired_1;
  /* rhuan::SM1 */ kcg_bool _155_SM1_reset_nxt_1;
  /* rhuan::SM1 */ SSM_ST_SM1 _154_SM1_state_nxt_1;
  /* rhuan::load_fail */ kcg_bool _153_load_fail_1;
  /* rhuan::display_load_picture_btn_enabled */ kcg_int _152_display_load_picture_btn_enabled_1;
  /* rhuan::display_load_picture_btn_border */ kcg_int _151_display_load_picture_btn_border_1;
  /* rhuan::SM1::Validando::_L19 */ kcg_int _L19_1_SM1_Validando;
  /* rhuan::SM1::Validando::_L17 */ kcg_int _L17_1_SM1_Validando;
  /* rhuan::SM1::Validando::_L14 */ kcg_bool _L14_1_SM1_Validando;
  /* rhuan::SM1::Validando::_L13 */ kcg_bool _L13_1_SM1_Validando;
  /* rhuan::SM1::Validando::_L12 */ kcg_bool _L12_1_SM1_Validando;
  /* rhuan::SM1::Validando::_L10 */ kcg_bool _L10_1_SM1_Validando;
  /* rhuan::SM1::Validando::_L5 */ kcg_int _L5_1_SM1_Validando;
  /* rhuan::SM1::Validando::_L2 */ kcg_int _L2_1_SM1_Validando;
  /* rhuan::SM1::Validando */ kcg_bool Validando_weakb_clock_1_SM1;
  /* rhuan::SM1::Validando */ kcg_bool br_2_guard_1_SM1_Validando;
  /* rhuan::SM1 */ SSM_ST_SM1 _150_SM1_state_nxt_1;
  /* rhuan::SM1 */ kcg_bool _149_SM1_reset_nxt_1;
  /* rhuan::SM1 */ SSM_TR_SM1 _148_SM1_fired_1;
  /* rhuan::SM1 */ SSM_ST_SM1 _147_SM1_state_nxt_1;
  /* rhuan::SM1 */ kcg_bool _146_SM1_reset_nxt_1;
  /* rhuan::SM1 */ SSM_TR_SM1 _145_SM1_fired_1;
  /* rhuan::SM1 */ SSM_TR_SM1 _144_SM1_fired_1;
  /* rhuan::SM1 */ kcg_bool _143_SM1_reset_nxt_1;
  /* rhuan::SM1 */ SSM_ST_SM1 _142_SM1_state_nxt_1;
  /* rhuan::load_fail */ kcg_bool _141_load_fail_1;
  /* rhuan::display_load_picture_btn_enabled */ kcg_int _140_display_load_picture_btn_enabled_1;
  /* rhuan::display_load_picture_btn_border */ kcg_int _139_display_load_picture_btn_border_1;
  /* rhuan::SM1::Funcionando::_L5 */ kcg_int _L5_1_SM1_Funcionando;
  /* rhuan::SM1::Funcionando::_L3 */ kcg_bool _L3_1_SM1_Funcionando;
  /* rhuan::SM1::Funcionando::_L1 */ kcg_int _L1_1_SM1_Funcionando;
  /* rhuan::SM1 */ SSM_TR_SM1 _138_SM1_fired_1;
  /* rhuan::SM1 */ kcg_bool SM1_reset_nxt_1;
  /* rhuan::SM1 */ SSM_ST_SM1 SM1_state_nxt_1;
  /* rhuan::load_fail */ kcg_bool _137_load_fail_1;
  /* rhuan::display_load_picture_btn_enabled */ kcg_int display_load_picture_btn_enabled_1;
  /* rhuan::display_load_picture_btn_border */ kcg_int display_load_picture_btn_border_1;
  /* rhuan::SM1::Erro::_L6 */ kcg_int _L6_1_SM1_Erro;
  /* rhuan::SM1::Erro::_L3 */ kcg_bool _L3_1_SM1_Erro;
  /* rhuan::SM1::Erro::_L1 */ kcg_int _L1_1_SM1_Erro;
  /* rhuan::SM1 */ SSM_TR_SM1 _136_SM1_fired_strong_1;
  /* rhuan::SM1 */ kcg_bool _135_SM1_reset_act_1;
  /* rhuan::SM1 */ SSM_ST_SM1 _134_SM1_state_act_1;
  /* rhuan::SM1::Validando */ kcg_bool br_1_guard_1_SM1_Validando;
  /* rhuan::SM1 */ SSM_TR_SM1 _133_SM1_fired_strong_1;
  /* rhuan::SM1 */ kcg_bool _132_SM1_reset_act_1;
  /* rhuan::SM1 */ SSM_ST_SM1 _131_SM1_state_act_1;
  /* rhuan::SM1::Funcionando */ kcg_bool br_1_guard_1_SM1_Funcionando;
  /* rhuan::SM1 */ SSM_TR_SM1 _130_SM1_fired_strong_1;
  /* rhuan::SM1 */ kcg_bool SM1_reset_act_1;
  /* rhuan::SM1 */ SSM_ST_SM1 _129_SM1_state_act_1;
  /* rhuan::SM1::Erro */ kcg_bool br_1_guard_1_SM1_Erro;
  /* rhuan::SM1 */ SSM_ST_SM1 SM1_state_sel_1;
  /* rhuan::SM1 */ SSM_ST_SM1 SM1_state_act_1;
  /* rhuan::SM1 */ kcg_bool SM1_reset_sel_1;
  /* rhuan::SM1 */ kcg_bool SM1_reset_prv_1;
  /* rhuan::SM1 */ SSM_TR_SM1 SM1_fired_strong_1;
  /* rhuan::SM1 */ SSM_TR_SM1 SM1_fired_1;
  /* rhuan::load_success */ kcg_bool load_success_1;
  /* rhuan::load_fail */ kcg_bool load_fail_1;
  /* rhuan::_L1 */ kcg_bool _L1_1128;
  /* rhuan::_L2 */ kcg_bool _L2_1127;
  /* rhuan::cam_take_picture */ kcg_bool cam_take_picture_1;
  /* rhuan::display_load_picture_btn_enabled */ kcg_int _162_display_load_picture_btn_enabled_1;
  /* rhuan::display_load_picture_btn_border */ kcg_int _163_display_load_picture_btn_border_1;
  /* rhuan::display_load_picture_btn */ kcg_bool display_load_picture_btn_1;
  /* rhuan::cam_picture_loaded */ kcg_bool cam_picture_loaded_1;
  /* linear::MemoryBasic::_L2 */ kcg_real _L2_8_1;
  /* linear::MemoryBasic::_L5 */ kcg_bool _L5_8_1;
  /* linear::MemoryBasic::_L6 */ kcg_real _L6_8_1;
  /* linear::MemoryBasic::_L7 */ kcg_real _L7_8_1;
  /* linear::MemoryBasic::Memorized */ kcg_real Memorized_8_1;
  /* linear::MemoryBasic::Write */ kcg_bool Write_8_1;
  /* linear::MemoryBasic::Init */ kcg_real Init_8_1;
  /* linear::MemoryBasic::BM_Input */ kcg_real BM_Input_8_1;
  /* linear::MemoryBasic::_L2 */ kcg_real _L2_7_1;
  /* linear::MemoryBasic::_L5 */ kcg_bool _L5_7_1;
  /* linear::MemoryBasic::_L6 */ kcg_real _L6_7_1;
  /* linear::MemoryBasic::_L7 */ kcg_real _L7_7_1;
  /* linear::MemoryBasic::Memorized */ kcg_real Memorized_7_1;
  /* linear::MemoryBasic::Write */ kcg_bool Write_7_1;
  /* linear::MemoryBasic::Init */ kcg_real Init_7_1;
  /* linear::MemoryBasic::BM_Input */ kcg_real BM_Input_7_1;
  /* linear::MemoryBasic::_L2 */ kcg_real _L2_5_1;
  /* linear::MemoryBasic::_L5 */ kcg_bool _L5_5_1;
  /* linear::MemoryBasic::_L6 */ kcg_real _L6_5_1;
  /* linear::MemoryBasic::_L7 */ kcg_real _L7_5_1;
  /* linear::MemoryBasic::Memorized */ kcg_real Memorized_5_1;
  /* linear::MemoryBasic::Write */ kcg_bool Write_5_1;
  /* linear::MemoryBasic::Init */ kcg_real Init_5_1;
  /* linear::MemoryBasic::BM_Input */ kcg_real BM_Input_5_1;
  /* linear::MemoryBasic::_L2 */ kcg_real _L2_3_1;
  /* linear::MemoryBasic::_L5 */ kcg_bool _L5_3_1;
  /* linear::MemoryBasic::_L6 */ kcg_real _L6_3_1;
  /* linear::MemoryBasic::_L7 */ kcg_real _L7_3_1;
  /* linear::MemoryBasic::Memorized */ kcg_real Memorized_3_1;
  /* linear::MemoryBasic::Write */ kcg_bool Write_3_1;
  /* linear::MemoryBasic::Init */ kcg_real Init_3_1;
  /* linear::MemoryBasic::BM_Input */ kcg_real BM_Input_3_1;
  /* linear::MemoryBasic::_L2 */ kcg_real _L2_2_1;
  /* linear::MemoryBasic::_L5 */ kcg_bool _126__L5_2_1;
  /* linear::MemoryBasic::_L6 */ kcg_real _L6_2_1;
  /* linear::MemoryBasic::_L7 */ kcg_real _L7_2_1;
  /* linear::MemoryBasic::Memorized */ kcg_real Memorized_2_1;
  /* linear::MemoryBasic::Write */ kcg_bool Write_2_1;
  /* linear::MemoryBasic::Init */ kcg_real Init_2_1;
  /* linear::MemoryBasic::BM_Input */ kcg_real BM_Input_2_1;
  /* linear::MemoryBasic::_L2 */ kcg_real _L2_1_1;
  /* linear::MemoryBasic::_L5 */ kcg_bool _125__L5_1_1;
  /* linear::MemoryBasic::_L6 */ kcg_real _L6_1_1;
  /* linear::MemoryBasic::_L7 */ kcg_real _L7_1_1;
  /* linear::MemoryBasic::Memorized */ kcg_real Memorized_1_1;
  /* linear::MemoryBasic::Write */ kcg_bool Write_1_1;
  /* linear::MemoryBasic::Init */ kcg_real Init_1_1;
  /* linear::MemoryBasic::BM_Input */ kcg_real BM_Input_1_1;
  /* us01::_L13 */ kcg_bool _124__L13_1;
  /* us01::_L14 */ kcg_real _123__L14_1;
  /* us01::_L15 */ kcg_bool _122__L15_1;
  /* us01::_L16 */ kcg_real _L16_1;
  /* us01::_L17 */ kcg_bool _L17_1;
  /* us01::_L18 */ kcg_real _L18_1;
  /* us01::_L19 */ kcg_bool _L19_1;
  /* us01::_L20 */ kcg_real _L20_1;
  /* us01::_L21 */ kcg_bool _L21_1;
  /* us01::_L22 */ kcg_real _121__L22_1;
  /* us01::_L23 */ kcg_bool _120__L23_1;
  /* us01::_L24 */ kcg_real _L24_1;
  /* us01::_L41 */ kcg_real _L41_1;
  /* us01::_L42 */ kcg_real _L42_1;
  /* us01::_L43 */ kcg_real _L43_1;
  /* us01::_L45 */ kcg_real _L45_1;
  /* us01::_L47 */ kcg_real _L47_1;
  /* us01::_L48 */ kcg_real _L48_1;
  /* us01::CDS_SI_Period_Value */ kcg_real CDS_SI_Period_Value_1;
  /* us01::CDS_SI_DeclinationAngle_Value */ kcg_real CDS_SI_DeclinationAngle_Value_1;
  /* us01::CDS_SI_Longitude_Value */ kcg_real CDS_SI_Longitude_Value_1;
  /* us01::CDS_SI_Latitude_Value */ kcg_real CDS_SI_Latitude_Value_1;
  /* us01::CDS_SI_Altitude_Value */ kcg_real CDS_SI_Altitude_Value_1;
  /* us01::CDS_SI_AirSpeed_Value */ kcg_real CDS_SI_AirSpeed_Value_1;
  /* us01::SAT_Period_Value */ kcg_real SAT_Period_Value_1;
  /* us01::SAT_Period_Update */ kcg_bool SAT_Period_Update_1;
  /* us01::SAT_DeclinationAngle_Value */ kcg_real SAT_DeclinationAngle_Value_1;
  /* us01::SAT_DeclinationAngle_Update */ kcg_bool SAT_DeclinationAngle_Update_1;
  /* us01::SAT_Longitude_Value */ kcg_real SAT_Longitude_Value_1;
  /* us01::SAT_Longitude_Update */ kcg_bool SAT_Longitude_Update_1;
  /* us01::SAT_Latitude_Value */ kcg_real SAT_Latitude_Value_1;
  /* us01::SAT_Latitude_Update */ kcg_bool SAT_Latitude_Update_1;
  /* us01::SAT_Altitude_Value */ kcg_real SAT_Altitude_Value_1;
  /* us01::SAT_Altitude_Update */ kcg_bool SAT_Altitude_Update_1;
  /* us01::SAT_AirSpeed_Value */ kcg_real SAT_AirSpeed_Value_1;
  /* us01::SAT_AirSpeed_Update */ kcg_bool SAT_AirSpeed_Update_1;
  /* us11::Initialization */ SSM_TR_Initialization _115_Initialization_fired_2;
  /* us11::Initialization */ kcg_bool _114_Initialization_reset_nxt_2;
  /* us11::Initialization */ SSM_ST_Initialization _113_Initialization_state_nxt_2;
  /* us11::timeout */ kcg_bool _112_timeout_2;
  /* us11::CDS_SS_InitializationButton_Label */ String_SS _111_CDS_SS_InitializationButton_Label_2;
  /* us11::CDS_SS_InitializationButton_Contour */ kcg_int _110_CDS_SS_InitializationButton_Contour_2;
  /* us11::CDS_SS_InitializationButton_Enabled */ kcg_int _109_CDS_SS_InitializationButton_Enabled_2;
  /* us11::CDS_SS_EjectionLED_Color */ kcg_int _108_CDS_SS_EjectionLED_Color_2;
  /* us11::Initialization::Off::_L14 */ kcg_bool _L14_2_Initialization_Off;
  /* us11::Initialization::Off::_L13 */ String_SS _L13_2_Initialization_Off;
  /* us11::Initialization::Off::_L12 */ kcg_int _L12_2_Initialization_Off;
  /* us11::Initialization::Off::_L11 */ kcg_int _L11_2_Initialization_Off;
  /* us11::Initialization::Off::_L10 */ kcg_int _L10_2_Initialization_Off;
  /* us11::Initialization */ SSM_TR_Initialization _107_Initialization_fired_2;
  /* us11::Initialization */ kcg_bool _106_Initialization_reset_nxt_2;
  /* us11::Initialization */ SSM_ST_Initialization _105_Initialization_state_nxt_2;
  /* us11::timeout */ kcg_bool _104_timeout_2;
  /* us11::CDS_SS_InitializationButton_Label */ String_SS _103_CDS_SS_InitializationButton_Label_2;
  /* us11::CDS_SS_InitializationButton_Contour */ kcg_int _102_CDS_SS_InitializationButton_Contour_2;
  /* us11::CDS_SS_InitializationButton_Enabled */ kcg_int _101_CDS_SS_InitializationButton_Enabled_2;
  /* us11::CDS_SS_EjectionLED_Color */ kcg_int _100_CDS_SS_EjectionLED_Color_2;
  /* us11::Initialization::Ejected::_L10 */ kcg_bool _L10_2_Initialization_Ejected;
  /* us11::Initialization::Ejected::_L8 */ kcg_int _L8_2_Initialization_Ejected;
  /* us11::Initialization::Ejected::_L4 */ kcg_int _L4_2_Initialization_Ejected;
  /* us11::Initialization::Ejected::_L5 */ String_SS _L5_2_Initialization_Ejected;
  /* us11::Initialization::Ejected::_L7 */ kcg_int _L7_2_Initialization_Ejected;
  /* us11::Initialization */ SSM_TR_Initialization _99_Initialization_fired_2;
  /* us11::Initialization */ kcg_bool _98_Initialization_reset_nxt_2;
  /* us11::Initialization */ SSM_ST_Initialization _97_Initialization_state_nxt_2;
  /* us11::timeout */ kcg_bool _96_timeout_2;
  /* us11::CDS_SS_InitializationButton_Label */ String_SS _95_CDS_SS_InitializationButton_Label_2;
  /* us11::CDS_SS_InitializationButton_Contour */ kcg_int _94_CDS_SS_InitializationButton_Contour_2;
  /* us11::CDS_SS_InitializationButton_Enabled */ kcg_int _93_CDS_SS_InitializationButton_Enabled_2;
  /* us11::CDS_SS_EjectionLED_Color */ kcg_int _92_CDS_SS_EjectionLED_Color_2;
  /* us11::Initialization::Initializing::_L23 */ kcg_bool _L23_2_Initialization_Initializing;
  /* us11::Initialization::Initializing::_L22 */ kcg_int _L22_2_Initialization_Initializing;
  /* us11::Initialization::Initializing::_L17 */ kcg_int _L17_2_Initialization_Initializing;
  /* us11::Initialization::Initializing::_L18 */ kcg_int _L18_2_Initialization_Initializing;
  /* us11::Initialization::Initializing::_L13 */ kcg_int _L13_2_Initialization_Initializing;
  /* us11::Initialization::Initializing::_L14 */ kcg_int _L14_2_Initialization_Initializing;
  /* us11::Initialization::Initializing::_L15 */ kcg_int _L15_2_Initialization_Initializing;
  /* us11::Initialization::Initializing::_L16 */ String_SS _L16_2_Initialization_Initializing;
  /* us11::Initialization::Initializing */ kcg_bool Initializing_weakb_clock_2_Initialization;
  /* us11::Initialization::Initializing */ kcg_bool br_3_guard_2_Initialization_Initializing;
  /* us11::Initialization */ SSM_ST_Initialization _91_Initialization_state_nxt_2;
  /* us11::Initialization */ kcg_bool _90_Initialization_reset_nxt_2;
  /* us11::Initialization */ SSM_TR_Initialization _89_Initialization_fired_2;
  /* us11::Initialization */ SSM_ST_Initialization _88_Initialization_state_nxt_2;
  /* us11::Initialization */ kcg_bool _87_Initialization_reset_nxt_2;
  /* us11::Initialization */ SSM_TR_Initialization _86_Initialization_fired_2;
  /* us11::Initialization */ SSM_TR_Initialization _85_Initialization_fired_2;
  /* us11::Initialization */ kcg_bool _84_Initialization_reset_nxt_2;
  /* us11::Initialization */ SSM_ST_Initialization _83_Initialization_state_nxt_2;
  /* us11::timeout */ kcg_bool _82_timeout_2;
  /* us11::CDS_SS_InitializationButton_Label */ String_SS _81_CDS_SS_InitializationButton_Label_2;
  /* us11::CDS_SS_InitializationButton_Contour */ kcg_int _80_CDS_SS_InitializationButton_Contour_2;
  /* us11::CDS_SS_InitializationButton_Enabled */ kcg_int _79_CDS_SS_InitializationButton_Enabled_2;
  /* us11::CDS_SS_EjectionLED_Color */ kcg_int _78_CDS_SS_EjectionLED_Color_2;
  /* us11::Initialization::Initialized::_L6 */ kcg_bool _L6_2_Initialization_Initialized;
  /* us11::Initialization::Initialized::_L2 */ kcg_int _L2_2_Initialization_Initialized;
  /* us11::Initialization::Initialized::_L3 */ kcg_int _L3_2_Initialization_Initialized;
  /* us11::Initialization::Initialized::_L4 */ kcg_int _L4_2_Initialization_Initialized;
  /* us11::Initialization::Initialized::_L5 */ String_SS _L5_2_Initialization_Initialized;
  /* us11::Initialization */ SSM_TR_Initialization _77_Initialization_fired_2;
  /* us11::Initialization */ kcg_bool Initialization_reset_nxt_2;
  /* us11::Initialization */ SSM_ST_Initialization Initialization_state_nxt_2;
  /* us11::timeout */ kcg_bool _76_timeout_2;
  /* us11::CDS_SS_InitializationButton_Label */ String_SS CDS_SS_InitializationButton_Label_2;
  /* us11::CDS_SS_InitializationButton_Contour */ kcg_int CDS_SS_InitializationButton_Contour_2;
  /* us11::CDS_SS_InitializationButton_Enabled */ kcg_int CDS_SS_InitializationButton_Enabled_2;
  /* us11::CDS_SS_EjectionLED_Color */ kcg_int CDS_SS_EjectionLED_Color_2;
  /* us11::Initialization::Fail::_L6 */ kcg_bool _L6_2_Initialization_Fail;
  /* us11::Initialization::Fail::_L2 */ String_SS _L2_2_Initialization_Fail;
  /* us11::Initialization::Fail::_L3 */ kcg_int _L3_2_Initialization_Fail;
  /* us11::Initialization::Fail::_L4 */ kcg_int _L4_2_Initialization_Fail;
  /* us11::Initialization::Fail::_L5 */ kcg_int _L5_2_Initialization_Fail;
  /* us11::Initialization */ SSM_TR_Initialization _75_Initialization_fired_strong_2;
  /* us11::Initialization */ kcg_bool _74_Initialization_reset_act_2;
  /* us11::Initialization */ SSM_ST_Initialization _73_Initialization_state_act_2;
  /* us11::Initialization::Off */ kcg_bool br_1_guard_2_Initialization_Off;
  /* us11::Initialization */ SSM_TR_Initialization _72_Initialization_fired_strong_2;
  /* us11::Initialization */ kcg_bool _71_Initialization_reset_act_2;
  /* us11::Initialization */ SSM_ST_Initialization _70_Initialization_state_act_2;
  /* us11::Initialization::Ejected */ kcg_bool br_1_guard_2_Initialization_Ejected;
  /* us11::Initialization */ SSM_TR_Initialization _69_Initialization_fired_strong_2;
  /* us11::Initialization */ kcg_bool _68_Initialization_reset_act_2;
  /* us11::Initialization */ SSM_ST_Initialization _67_Initialization_state_act_2;
  /* us11::Initialization::Initializing */ kcg_bool br_2_guard_2_Initialization_Initializing;
  /* us11::Initialization::Initializing */ kcg_bool br_1_guard_2_Initialization_Initializing;
  /* us11::Initialization */ SSM_TR_Initialization _66_Initialization_fired_strong_2;
  /* us11::Initialization */ kcg_bool _65_Initialization_reset_act_2;
  /* us11::Initialization */ SSM_ST_Initialization _64_Initialization_state_act_2;
  /* us11::Initialization */ SSM_TR_Initialization _63_Initialization_fired_strong_2;
  /* us11::Initialization */ kcg_bool Initialization_reset_act_2;
  /* us11::Initialization */ SSM_ST_Initialization _62_Initialization_state_act_2;
  /* us11::Initialization::Fail */ kcg_bool br_1_guard_2_Initialization_Fail;
  /* us11::Initialization */ SSM_ST_Initialization Initialization_state_sel_2;
  /* us11::Initialization */ SSM_ST_Initialization Initialization_state_act_2;
  /* us11::Initialization */ kcg_bool Initialization_reset_sel_2;
  /* us11::Initialization */ kcg_bool Initialization_reset_prv_2;
  /* us11::Initialization */ SSM_TR_Initialization Initialization_fired_strong_2;
  /* us11::Initialization */ SSM_TR_Initialization Initialization_fired_2;
  /* us11::timeout */ kcg_bool timeout_2;
  /* us11::Ejected */ kcg_bool Ejected_2;
  /* us11::Initialize */ kcg_bool Initialize_2;
  /* us11::Fail */ kcg_bool Fail_2;
  /* us11::Success */ kcg_bool Success_2;
  /* us11::_L87 */ kcg_bool _L87_2;
  /* us11::_L88 */ kcg_bool _L88_2;
  /* us11::_L89 */ kcg_int _L89_2;
  /* us11::_L92 */ kcg_bool _L92_2;
  /* us11::_L93 */ kcg_bool _L93_2;
  /* us11::_L95 */ kcg_bool _L95_2;
  /* us11::_L97 */ kcg_bool _L97_2;
  /* us11::SAT_Initialize */ kcg_bool SAT_Initialize_2;
  /* us11::CDS_SS_InitializationButton_Label */ String_SS _116_CDS_SS_InitializationButton_Label_2;
  /* us11::CDS_SS_InitializationButton_Contour */ kcg_int _117_CDS_SS_InitializationButton_Contour_2;
  /* us11::CDS_SS_InitializationButton_Enabled */ kcg_int _118_CDS_SS_InitializationButton_Enabled_2;
  /* us11::CDS_SS_EjectionLED_Color */ kcg_int _119_CDS_SS_EjectionLED_Color_2;
  /* us11::CDS_SS_InitializationButton_Pressed */ kcg_bool CDS_SS_InitializationButton_Pressed_2;
  /* us11::SAT_Initialization_Signal */ kcg_int SAT_Initialization_Signal_2;
  /* us11::SAT_Ejection_Signal */ kcg_bool SAT_Ejection_Signal_2;
  /* TEST_SAT_Signal::_L5 */ kcg_int _L5_4;
  /* TEST_SAT_Signal::_L4 */ kcg_int _L4_4;
  /* TEST_SAT_Signal::_L3 */ kcg_int _L3_4;
  /* TEST_SAT_Signal::_L2 */ kcg_int _L2_4;
  /* TEST_SAT_Signal::_L1 */ kcg_int _L1_4;
  /* TEST_SAT_Signal::_L6 */ kcg_bool _L6_4;
  /* TEST_SAT_Signal::_L7 */ kcg_bool _L7_4;
  /* TEST_SAT_Signal::CDS_Color */ kcg_int CDS_Color_4;
  /* TEST_SAT_Signal::NewState */ kcg_bool NewState_4;
  /* TEST_SAT_Signal::Notify */ kcg_bool Notify_4;
  /* TEST_SAT_Signal::_L5 */ kcg_int _L5_3;
  /* TEST_SAT_Signal::_L4 */ kcg_int _L4_3;
  /* TEST_SAT_Signal::_L3 */ kcg_int _L3_3;
  /* TEST_SAT_Signal::_L2 */ kcg_int _L2_3;
  /* TEST_SAT_Signal::_L1 */ kcg_int _L1_3;
  /* TEST_SAT_Signal::_L6 */ kcg_bool _L6_3;
  /* TEST_SAT_Signal::_L7 */ kcg_bool _L7_3;
  /* TEST_SAT_Signal::CDS_Color */ kcg_int CDS_Color_3;
  /* TEST_SAT_Signal::NewState */ kcg_bool NewState_3;
  /* TEST_SAT_Signal::Notify */ kcg_bool Notify_3;
  /* TEST_SAT_Signal::_L5 */ kcg_int _L5_2;
  /* TEST_SAT_Signal::_L4 */ kcg_int _L4_2;
  /* TEST_SAT_Signal::_L3 */ kcg_int _L3_2;
  /* TEST_SAT_Signal::_L2 */ kcg_int _L2_2;
  /* TEST_SAT_Signal::_L1 */ kcg_int _L1_2;
  /* TEST_SAT_Signal::_L6 */ kcg_bool _L6_2;
  /* TEST_SAT_Signal::_L7 */ kcg_bool _L7_2;
  /* TEST_SAT_Signal::CDS_Color */ kcg_int CDS_Color_2;
  /* TEST_SAT_Signal::NewState */ kcg_bool NewState_2;
  /* TEST_SAT_Signal::Notify */ kcg_bool Notify_2;
  /* TEST_SAT_Signal::_L5 */ kcg_int _L5_161;
  /* TEST_SAT_Signal::_L4 */ kcg_int _L4_1;
  /* TEST_SAT_Signal::_L3 */ kcg_int _L3_1;
  /* TEST_SAT_Signal::_L2 */ kcg_int _L2_1;
  /* TEST_SAT_Signal::_L1 */ kcg_int _L1_1;
  /* TEST_SAT_Signal::_L6 */ kcg_bool _L6_1;
  /* TEST_SAT_Signal::_L7 */ kcg_bool _L7_1;
  /* TEST_SAT_Signal::CDS_Color */ kcg_int CDS_Color_1;
  /* TEST_SAT_Signal::NewState */ kcg_bool NewState_1;
  /* TEST_SAT_Signal::Notify */ kcg_bool Notify_1;
  /* linear::MemoryBasic::_L2 */ kcg_int _L2_5;
  /* linear::MemoryBasic::_L5 */ kcg_bool _L5_5;
  /* linear::MemoryBasic::_L6 */ kcg_int _L6_5;
  /* linear::MemoryBasic::_L7 */ kcg_int _L7_5;
  /* linear::MemoryBasic::Memorized */ kcg_int Memorized_5;
  /* linear::MemoryBasic::Write */ kcg_bool Write_5;
  /* linear::MemoryBasic::Init */ kcg_int Init_5;
  /* linear::MemoryBasic::BM_Input */ kcg_int BM_Input_5;
  /* mayara::_L5 */ kcg_bool _60__L5_1_1;
  /* mayara::_L10 */ kcg_bool _59__L10_1_1;
  /* mayara::_L11 */ kcg_int _58__L11_1_1;
  /* mayara::_L12 */ kcg_int _57__L12_1_1;
  /* mayara::Output4 */ kcg_int _56_Output4_1_1;
  /* mayara::Output3 */ kcg_int _55_Output3_1_1;
  /* mayara::Output2 */ kcg_bool _54_Output2_1_1;
  /* mayara::Output1 */ kcg_bool _53_Output1_1_1;
  /* mayara::Input4 */ kcg_int _52_Input4_1_1;
  /* mayara::Input3 */ kcg_int _51_Input3_1_1;
  /* mayara::Input2 */ kcg_bool _50_Input2_1_1;
  /* mayara::Input1 */ kcg_bool _49_Input1_1_1;
  /* mayara_test_operator::Probe1 */ kcg_bool _48_Probe1_1;
  /* mayara_test_operator::Probe2 */ kcg_bool _47_Probe2_1;
  /* mayara_test_operator::Probe3 */ kcg_int _46_Probe3_1;
  /* mayara_test_operator::Probe4 */ kcg_int _45_Probe4_1;
  /* mayara_test_operator::_L5 */ kcg_bool _L5_144;
  /* mayara_test_operator::_L13 */ kcg_bool _43__L13_1;
  /* mayara_test_operator::_L14 */ kcg_int _42__L14_1;
  /* mayara_test_operator::_L15 */ kcg_int _41__L15_1;
  /* mayara_test_operator::_L22 */ kcg_bool _40__L22_1;
  /* mayara_test_operator::_L23 */ kcg_bool _39__L23_1;
  /* mayara_test_operator::_L25 */ kcg_int _38__L25_1;
  /* mayara_test_operator::_L26 */ kcg_int _37__L26_1;
  /* leonardo::_L5 */ kcg_bool _L5_2_1;
  /* leonardo::_L10 */ kcg_bool _L10_2_1;
  /* leonardo::_L11 */ kcg_int _L11_2_1;
  /* leonardo::_L12 */ kcg_int _L12_2_1;
  /* leonardo::Output4 */ kcg_int Output4_2_1;
  /* leonardo::Output3 */ kcg_int Output3_2_1;
  /* leonardo::Output2 */ kcg_bool Output2_2_1;
  /* leonardo::Output1 */ kcg_bool Output1_2_1;
  /* leonardo::Input4 */ kcg_int Input4_2_1;
  /* leonardo::Input3 */ kcg_int Input3_2_1;
  /* leonardo::Input2 */ kcg_bool Input2_2_1;
  /* leonardo::Input1 */ kcg_bool Input1_2_1;
  /* leonardo_test_operator::Probe1 */ kcg_bool _36_Probe1_1;
  /* leonardo_test_operator::Probe2 */ kcg_bool _35_Probe2_1;
  /* leonardo_test_operator::Probe3 */ kcg_int _34_Probe3_1;
  /* leonardo_test_operator::Probe4 */ kcg_int _33_Probe4_1;
  /* leonardo_test_operator::_L5 */ kcg_bool _L5_132;
  /* leonardo_test_operator::_L13 */ kcg_bool _31__L13_1;
  /* leonardo_test_operator::_L14 */ kcg_int _30__L14_1;
  /* leonardo_test_operator::_L15 */ kcg_int _29__L15_1;
  /* leonardo_test_operator::_L22 */ kcg_bool _28__L22_1;
  /* leonardo_test_operator::_L23 */ kcg_bool _27__L23_1;
  /* leonardo_test_operator::_L25 */ kcg_int _26__L25_1;
  /* leonardo_test_operator::_L26 */ kcg_int _25__L26_1;
  /* kalil::_L5 */ kcg_bool _24__L5_1_1;
  /* kalil::_L10 */ kcg_bool _23__L10_1_1;
  /* kalil::_L11 */ kcg_int _22__L11_1_1;
  /* kalil::_L12 */ kcg_int _21__L12_1_1;
  /* kalil::Output4 */ kcg_int _20_Output4_1_1;
  /* kalil::Output3 */ kcg_int _19_Output3_1_1;
  /* kalil::Output2 */ kcg_bool _18_Output2_1_1;
  /* kalil::Output1 */ kcg_bool _17_Output1_1_1;
  /* kalil::Input4 */ kcg_int _16_Input4_1_1;
  /* kalil::Input3 */ kcg_int _15_Input3_1_1;
  /* kalil::Input2 */ kcg_bool _14_Input2_1_1;
  /* kalil::Input1 */ kcg_bool _13_Input1_1_1;
  /* kalil_test_operator::Probe1 */ kcg_bool _12_Probe1_1;
  /* kalil_test_operator::Probe2 */ kcg_bool _11_Probe2_1;
  /* kalil_test_operator::Probe3 */ kcg_int _10_Probe3_1;
  /* kalil_test_operator::Probe4 */ kcg_int _9_Probe4_1;
  /* kalil_test_operator::_L5 */ kcg_bool _L5_18;
  /* kalil_test_operator::_L13 */ kcg_bool _7__L13_1;
  /* kalil_test_operator::_L14 */ kcg_int _6__L14_1;
  /* kalil_test_operator::_L15 */ kcg_int _5__L15_1;
  /* kalil_test_operator::_L22 */ kcg_bool _4__L22_1;
  /* kalil_test_operator::_L23 */ kcg_bool _3__L23_1;
  /* kalil_test_operator::_L25 */ kcg_int _2__L25_1;
  /* kalil_test_operator::_L26 */ kcg_int _1__L26_1;
  /* gustavoloureiro::_L5 */ kcg_bool _L5_1_1;
  /* gustavoloureiro::_L10 */ kcg_bool _L10_1_1;
  /* gustavoloureiro::_L11 */ kcg_int _L11_1_1;
  /* gustavoloureiro::_L12 */ kcg_int _L12_1_1;
  /* gustavoloureiro::Output4 */ kcg_int Output4_1_1;
  /* gustavoloureiro::Output3 */ kcg_int Output3_1_1;
  /* gustavoloureiro::Output2 */ kcg_bool Output2_1_1;
  /* gustavoloureiro::Output1 */ kcg_bool Output1_1_1;
  /* gustavoloureiro::Input4 */ kcg_int Input4_1_1;
  /* gustavoloureiro::Input3 */ kcg_int Input3_1_1;
  /* gustavoloureiro::Input2 */ kcg_bool Input2_1_1;
  /* gustavoloureiro::Input1 */ kcg_bool Input1_1_1;
  /* gustavoloureiro_test_operator::Probe1 */ kcg_bool Probe1_1;
  /* gustavoloureiro_test_operator::Probe2 */ kcg_bool Probe2_1;
  /* gustavoloureiro_test_operator::Probe3 */ kcg_int Probe3_1;
  /* gustavoloureiro_test_operator::Probe4 */ kcg_int Probe4_1;
  /* gustavoloureiro_test_operator::_L5 */ kcg_bool _L5_1;
  /* gustavoloureiro_test_operator::_L13 */ kcg_bool _L13_1;
  /* gustavoloureiro_test_operator::_L14 */ kcg_int _L14_1;
  /* gustavoloureiro_test_operator::_L15 */ kcg_int _L15_1;
  /* gustavoloureiro_test_operator::_L22 */ kcg_bool _L22_1;
  /* gustavoloureiro_test_operator::_L23 */ kcg_bool _L23_1;
  /* gustavoloureiro_test_operator::_L25 */ kcg_int _L25_1;
  /* gustavoloureiro_test_operator::_L26 */ kcg_int _L26_1;
  /* ts05::DebugOrDeploy */ SSM_TR_DebugOrDeploy _498_DebugOrDeploy_fired;
  /* ts05::DebugOrDeploy */ kcg_bool _497_DebugOrDeploy_reset_nxt;
  /* ts05::DebugOrDeploy */ SSM_ST_DebugOrDeploy _496_DebugOrDeploy_state_nxt;
  /* ts05::Testable_SAT_Period_Value */ kcg_real _495_Testable_SAT_Period_Value;
  /* ts05::Testable_SAT_Period_Update */ kcg_bool _494_Testable_SAT_Period_Update;
  /* ts05::Testable_SAT_DeclinationAngle_Value */ kcg_real _493_Testable_SAT_DeclinationAngle_Value;
  /* ts05::Testable_SAT_DeclinationAngle_Update */ kcg_bool _492_Testable_SAT_DeclinationAngle_Update;
  /* ts05::Testable_SAT_Longitude_Value */ kcg_real _491_Testable_SAT_Longitude_Value;
  /* ts05::Testable_SAT_Longitude_Update */ kcg_bool _490_Testable_SAT_Longitude_Update;
  /* ts05::Testable_SAT_Latitude_Value */ kcg_real _489_Testable_SAT_Latitude_Value;
  /* ts05::Testable_SAT_Latitude_Update */ kcg_bool _488_Testable_SAT_Latitude_Update;
  /* ts05::Testable_SAT_Altitude_Value */ kcg_real _487_Testable_SAT_Altitude_Value;
  /* ts05::Testable_SAT_Altitude_Update */ kcg_bool _486_Testable_SAT_Altitude_Update;
  /* ts05::Testable_SAT_AirSpeed_Value */ kcg_real _485_Testable_SAT_AirSpeed_Value;
  /* ts05::Testable_SAT_AirSpeed_Update */ kcg_bool _484_Testable_SAT_AirSpeed_Update;
  /* ts05::Testable_SAT_CameraState_Update */ kcg_bool _483_Testable_SAT_CameraState_Update;
  /* ts05::Testable_SAT_CameraState_Value */ kcg_bool _482_Testable_SAT_CameraState_Value;
  /* ts05::Testable_SAT_PropellersState_Update */ kcg_bool _481_Testable_SAT_PropellersState_Update;
  /* ts05::Testable_SAT_PropellersState_Value */ kcg_bool _480_Testable_SAT_PropellersState_Value;
  /* ts05::Testable_SAT_HorizonSensorState_Update */ kcg_bool _479_Testable_SAT_HorizonSensorState_Update;
  /* ts05::Testable_SAT_HorizonSensorState_Value */ kcg_bool _478_Testable_SAT_HorizonSensorState_Value;
  /* ts05::Testable_SAT_GyroscopeState_Value */ kcg_bool _477_Testable_SAT_GyroscopeState_Value;
  /* ts05::Testable_SAT_GyroscopeState_Update */ kcg_bool _476_Testable_SAT_GyroscopeState_Update;
  /* ts05::Testable_SAT_OperationMode_Value */ OperationMode _475_Testable_SAT_OperationMode_Value;
  /* ts05::Testable_SAT_OperationMode_Update */ kcg_bool _474_Testable_SAT_OperationMode_Update;
  /* ts05::Testable_SAT_Ejection_Signal */ kcg_bool _473_Testable_SAT_Ejection_Signal;
  /* ts05::Testable_SAT_Initialization_Signal */ kcg_int _472_Testable_SAT_Initialization_Signal;
  /* ts05::TEST_SAT_CameraState_Signal */ kcg_int _471_TEST_SAT_CameraState_Signal;
  /* ts05::TEST_SAT_PropellersState_Signal */ kcg_int _470_TEST_SAT_PropellersState_Signal;
  /* ts05::TEST_SAT_HorizonSensorState_Signal */ kcg_int _469_TEST_SAT_HorizonSensorState_Signal;
  /* ts05::TEST_SAT_GyroscopeState_Signal */ kcg_int _468_TEST_SAT_GyroscopeState_Signal;
  /* ts05::TEST_SAT_Initialize_Signal */ kcg_int _467_TEST_SAT_Initialize_Signal;
  /* ts05::TEST_SI_Enabled */ kcg_int _466_TEST_SI_Enabled;
  /* ts05::TEST_SI_Visible */ kcg_bool _465_TEST_SI_Visible;
  /* ts05::TEST_ES_Enabled */ kcg_int _464_TEST_ES_Enabled;
  /* ts05::TEST_ES_Visible */ kcg_bool _463_TEST_ES_Visible;
  /* ts05::TEST_SS_Enabled */ kcg_int _462_TEST_SS_Enabled;
  /* ts05::TEST_SS_Visible */ kcg_bool _461_TEST_SS_Visible;
  /* ts05::TEST_DebugSelector_Enabled */ kcg_int _460_TEST_DebugSelector_Enabled;
  /* ts05::TEST_DebugSelector_Visible */ kcg_bool _459_TEST_DebugSelector_Visible;
  /* ts05::SAT_CameraState_ToggleTo */ kcg_bool _458_SAT_CameraState_ToggleTo;
  /* ts05::SAT_CameraState_Toggle */ kcg_bool _457_SAT_CameraState_Toggle;
  /* ts05::SAT_PropellersState_ToggleTo */ kcg_bool _456_SAT_PropellersState_ToggleTo;
  /* ts05::SAT_PropellersState_Toggle */ kcg_bool _455_SAT_PropellersState_Toggle;
  /* ts05::SAT_HorizonSensorState_ToggleTo */ kcg_bool _454_SAT_HorizonSensorState_ToggleTo;
  /* ts05::SAT_HorizonSensorState_Toggle */ kcg_bool _453_SAT_HorizonSensorState_Toggle;
  /* ts05::SAT_GyroscopeState_ToggleTo */ kcg_bool _452_SAT_GyroscopeState_ToggleTo;
  /* ts05::SAT_GyroscopeState_Toggle */ kcg_bool _451_SAT_GyroscopeState_Toggle;
  /* ts05::SAT_Initialize */ kcg_bool _450_SAT_Initialize;
  /* ts05::DebugOrDeploy::Debug::_L355 */ kcg_int _L355_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L352 */ kcg_int _L352_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L351 */ kcg_int _L351_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L350 */ kcg_int _L350_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L344 */ kcg_int _L344_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L343 */ kcg_int _L343_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L342 */ kcg_int _L342_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L335 */ kcg_bool _L335_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L336 */ kcg_int _L336_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L337 */ kcg_int _L337_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L338 */ kcg_int _L338_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L339 */ kcg_int _L339_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L340 */ kcg_bool _L340_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L341 */ kcg_bool _L341_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L327 */ kcg_bool _L327_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L328 */ kcg_bool _L328_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L329 */ kcg_bool _L329_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L330 */ kcg_bool _L330_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L331 */ kcg_bool _L331_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L332 */ kcg_bool _L332_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L333 */ kcg_bool _L333_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L334 */ kcg_bool _L334_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L223 */ kcg_bool _L223_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L222 */ kcg_bool _L222_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L213 */ OperationMode _L213_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L212 */ kcg_bool _L212_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L211 */ kcg_int _L211_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L210 */ kcg_real _L210_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L209 */ kcg_bool _L209_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L208 */ kcg_real _L208_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L207 */ kcg_bool _L207_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L206 */ kcg_real _L206_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L205 */ kcg_bool _L205_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L204 */ kcg_real _L204_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L203 */ kcg_bool _L203_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L202 */ kcg_real _L202_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L201 */ kcg_bool _L201_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L200 */ kcg_real _L200_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L199 */ kcg_bool _L199_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L186 */ kcg_int _L186_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L179 */ kcg_bool _L179_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L180 */ kcg_int _L180_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L181 */ kcg_int _L181_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L183 */ kcg_int _L183_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L184 */ kcg_bool _L184_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L185 */ kcg_bool _L185_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L171 */ kcg_int _L171_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L170 */ kcg_int _L170_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L169 */ kcg_int _L169_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L168 */ kcg_bool _L168_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L167 */ kcg_bool _L167_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L166 */ kcg_bool _L166_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L165 */ kcg_int _L165_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L163 */ kcg_int _L163_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L162 */ kcg_bool _L162_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L157 */ kcg_int _L157_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L156 */ kcg_bool _L156_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L155 */ kcg_int _L155_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L154 */ kcg_bool _L154_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L153 */ kcg_int _L153_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L152 */ kcg_bool _L152_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L151 */ kcg_int _L151_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L150 */ kcg_bool _L150_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L149 */ kcg_int _L149_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L148 */ kcg_bool _L148_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L145 */ kcg_bool _L145_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L146 */ kcg_bool _L146_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L147 */ kcg_bool _L147_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L142 */ kcg_bool _L142_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L143 */ kcg_bool _L143_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L144 */ kcg_bool _L144_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L136 */ kcg_bool _L136_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L137 */ kcg_bool _L137_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L138 */ kcg_bool _L138_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L135 */ kcg_bool _L135_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L134 */ kcg_bool _L134_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L133 */ kcg_bool _L133_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L121 */ OperationMode _L121_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L122 */ OperationMode _L122_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L123 */ OperationMode _L123_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L124 */ OperationMode _L124_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L125 */ OperationMode _L125_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L126 */ OperationMode _L126_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L127 */ OperationMode _L127_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L128 */ OperationMode _L128_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L129 */ OperationMode _L129_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L93 */ kcg_int _L93_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L92 */ kcg_bool _L92_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L55 */ kcg_int _L55_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L56 */ kcg_bool _L56_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L57 */ kcg_bool _L57_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L58 */ kcg_int _L58_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L59 */ kcg_bool _L59_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L60 */ kcg_int _L60_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L61 */ kcg_int _L61_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::_L62 */ kcg_int _L62_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy::Debug::DebugSelectedInterface */ kcg_int DebugSelectedInterface_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy */ SSM_TR_DebugOrDeploy DebugOrDeploy_fired;
  /* ts05::DebugOrDeploy */ kcg_bool DebugOrDeploy_reset_nxt;
  /* ts05::DebugOrDeploy */ SSM_ST_DebugOrDeploy DebugOrDeploy_state_nxt;
  /* ts05::Testable_SAT_Period_Value */ kcg_real Testable_SAT_Period_Value;
  /* ts05::Testable_SAT_Period_Update */ kcg_bool Testable_SAT_Period_Update;
  /* ts05::Testable_SAT_DeclinationAngle_Value */ kcg_real Testable_SAT_DeclinationAngle_Value;
  /* ts05::Testable_SAT_DeclinationAngle_Update */ kcg_bool Testable_SAT_DeclinationAngle_Update;
  /* ts05::Testable_SAT_Longitude_Value */ kcg_real Testable_SAT_Longitude_Value;
  /* ts05::Testable_SAT_Longitude_Update */ kcg_bool Testable_SAT_Longitude_Update;
  /* ts05::Testable_SAT_Latitude_Value */ kcg_real Testable_SAT_Latitude_Value;
  /* ts05::Testable_SAT_Latitude_Update */ kcg_bool Testable_SAT_Latitude_Update;
  /* ts05::Testable_SAT_Altitude_Value */ kcg_real Testable_SAT_Altitude_Value;
  /* ts05::Testable_SAT_Altitude_Update */ kcg_bool Testable_SAT_Altitude_Update;
  /* ts05::Testable_SAT_AirSpeed_Value */ kcg_real Testable_SAT_AirSpeed_Value;
  /* ts05::Testable_SAT_AirSpeed_Update */ kcg_bool Testable_SAT_AirSpeed_Update;
  /* ts05::Testable_SAT_CameraState_Update */ kcg_bool Testable_SAT_CameraState_Update;
  /* ts05::Testable_SAT_CameraState_Value */ kcg_bool Testable_SAT_CameraState_Value;
  /* ts05::Testable_SAT_PropellersState_Update */ kcg_bool Testable_SAT_PropellersState_Update;
  /* ts05::Testable_SAT_PropellersState_Value */ kcg_bool Testable_SAT_PropellersState_Value;
  /* ts05::Testable_SAT_HorizonSensorState_Update */ kcg_bool _449_Testable_SAT_HorizonSensorState_Update;
  /* ts05::Testable_SAT_HorizonSensorState_Value */ kcg_bool Testable_SAT_HorizonSensorState_Value;
  /* ts05::Testable_SAT_GyroscopeState_Value */ kcg_bool Testable_SAT_GyroscopeState_Value;
  /* ts05::Testable_SAT_GyroscopeState_Update */ kcg_bool Testable_SAT_GyroscopeState_Update;
  /* ts05::Testable_SAT_OperationMode_Value */ OperationMode Testable_SAT_OperationMode_Value;
  /* ts05::Testable_SAT_OperationMode_Update */ kcg_bool Testable_SAT_OperationMode_Update;
  /* ts05::Testable_SAT_Ejection_Signal */ kcg_bool Testable_SAT_Ejection_Signal;
  /* ts05::Testable_SAT_Initialization_Signal */ kcg_int Testable_SAT_Initialization_Signal;
  /* ts05::TEST_SAT_CameraState_Signal */ kcg_int TEST_SAT_CameraState_Signal;
  /* ts05::TEST_SAT_PropellersState_Signal */ kcg_int TEST_SAT_PropellersState_Signal;
  /* ts05::TEST_SAT_HorizonSensorState_Signal */ kcg_int TEST_SAT_HorizonSensorState_Signal;
  /* ts05::TEST_SAT_GyroscopeState_Signal */ kcg_int TEST_SAT_GyroscopeState_Signal;
  /* ts05::TEST_SAT_Initialize_Signal */ kcg_int TEST_SAT_Initialize_Signal;
  /* ts05::TEST_SI_Enabled */ kcg_int TEST_SI_Enabled;
  /* ts05::TEST_SI_Visible */ kcg_bool TEST_SI_Visible;
  /* ts05::TEST_ES_Enabled */ kcg_int TEST_ES_Enabled;
  /* ts05::TEST_ES_Visible */ kcg_bool TEST_ES_Visible;
  /* ts05::TEST_SS_Enabled */ kcg_int TEST_SS_Enabled;
  /* ts05::TEST_SS_Visible */ kcg_bool TEST_SS_Visible;
  /* ts05::TEST_DebugSelector_Enabled */ kcg_int TEST_DebugSelector_Enabled;
  /* ts05::TEST_DebugSelector_Visible */ kcg_bool TEST_DebugSelector_Visible;
  /* ts05::SAT_CameraState_ToggleTo */ kcg_bool SAT_CameraState_ToggleTo;
  /* ts05::SAT_CameraState_Toggle */ kcg_bool SAT_CameraState_Toggle;
  /* ts05::SAT_PropellersState_ToggleTo */ kcg_bool SAT_PropellersState_ToggleTo;
  /* ts05::SAT_PropellersState_Toggle */ kcg_bool SAT_PropellersState_Toggle;
  /* ts05::SAT_HorizonSensorState_ToggleTo */ kcg_bool _448_SAT_HorizonSensorState_ToggleTo;
  /* ts05::SAT_HorizonSensorState_Toggle */ kcg_bool SAT_HorizonSensorState_Toggle;
  /* ts05::SAT_GyroscopeState_ToggleTo */ kcg_bool SAT_GyroscopeState_ToggleTo;
  /* ts05::SAT_GyroscopeState_Toggle */ kcg_bool SAT_GyroscopeState_Toggle;
  /* ts05::SAT_Initialize */ kcg_bool SAT_Initialize;
  /* ts05::DebugOrDeploy::Deploy::_L111 */ kcg_int _L111_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L110 */ kcg_bool _L110_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L109 */ kcg_int _L109_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L108 */ kcg_bool _L108_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L107 */ kcg_bool _L107_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L106 */ kcg_bool _L106_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L105 */ kcg_bool _L105_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L104 */ kcg_bool _L104_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L103 */ kcg_bool _L103_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L102 */ kcg_bool _L102_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L101 */ kcg_bool _L101_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L100 */ kcg_bool _L100_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L99 */ kcg_bool _L99_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L98 */ kcg_bool _L98_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L97 */ kcg_bool _L97_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L96 */ kcg_bool _L96_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L95 */ kcg_bool _L95_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L94 */ kcg_bool _L94_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L93 */ kcg_bool _L93_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L92 */ kcg_bool _L92_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L91 */ OperationMode _L91_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L90 */ kcg_bool _L90_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L89 */ kcg_real _L89_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L88 */ kcg_bool _L88_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L87 */ kcg_real _L87_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L86 */ kcg_bool _L86_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L85 */ kcg_real _L85_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L84 */ kcg_bool _L84_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L83 */ kcg_real _L83_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L82 */ kcg_bool _L82_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L81 */ kcg_real _L81_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L80 */ kcg_bool _L80_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L79 */ kcg_real _L79_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L78 */ kcg_bool _L78_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L76 */ kcg_int _L76_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L77 */ kcg_bool _L77_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L60 */ kcg_bool _L60_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L61 */ kcg_int _L61_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L42 */ kcg_bool _L42_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L43 */ kcg_int _L43_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L38 */ kcg_bool _L38_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy::Deploy::_L39 */ kcg_int _L39_DebugOrDeploy_Deploy;
  /* ts05::DebugOrDeploy */ SSM_TR_DebugOrDeploy _501_DebugOrDeploy_fired_strong;
  /* ts05::DebugOrDeploy */ kcg_bool _500_DebugOrDeploy_reset_act;
  /* ts05::DebugOrDeploy */ SSM_ST_DebugOrDeploy _499_DebugOrDeploy_state_act;
  /* ts05::DebugOrDeploy::Debug */ kcg_bool br_1_guard_DebugOrDeploy_Debug;
  /* ts05::DebugOrDeploy */ SSM_TR_DebugOrDeploy DebugOrDeploy_fired_strong;
  /* ts05::DebugOrDeploy */ kcg_bool DebugOrDeploy_reset_act;
  /* ts05::DebugOrDeploy */ SSM_ST_DebugOrDeploy DebugOrDeploy_state_act;
  /* ts05::DebugOrDeploy */ SSM_ST_DebugOrDeploy DebugOrDeploy_state_sel;
  /* ts05::DebugOrDeploy */ SSM_ST_DebugOrDeploy _504_DebugOrDeploy_state_act;
  /* ts05::DebugOrDeploy */ kcg_bool DebugOrDeploy_reset_sel;
  /* ts05::DebugOrDeploy */ kcg_bool DebugOrDeploy_reset_prv;
  /* ts05::DebugOrDeploy */ SSM_TR_DebugOrDeploy _503_DebugOrDeploy_fired_strong;
  /* ts05::DebugOrDeploy */ SSM_TR_DebugOrDeploy _502_DebugOrDeploy_fired;
  /* ts05::deploy */ kcg_bool deploy;
  /* ts05::Testable_SAT_Initialization_Signal */ kcg_int _533_Testable_SAT_Initialization_Signal;
  /* ts05::Testable_SAT_Ejection_Signal */ kcg_bool _532_Testable_SAT_Ejection_Signal;
  /* ts05::Testable_SAT_OperationMode_Update */ kcg_bool _531_Testable_SAT_OperationMode_Update;
  /* ts05::Testable_SAT_OperationMode_Value */ OperationMode _530_Testable_SAT_OperationMode_Value;
  /* ts05::Testable_SAT_GyroscopeState_Update */ kcg_bool _529_Testable_SAT_GyroscopeState_Update;
  /* ts05::Testable_SAT_GyroscopeState_Value */ kcg_bool _528_Testable_SAT_GyroscopeState_Value;
  /* ts05::Testable_SAT_HorizonSensorState_Value */ kcg_bool _527_Testable_SAT_HorizonSensorState_Value;
  /* ts05::Testable_SAT_HorizonSensorState_Update */ kcg_bool _526_Testable_SAT_HorizonSensorState_Update;
  /* ts05::Testable_SAT_PropellersState_Value */ kcg_bool _525_Testable_SAT_PropellersState_Value;
  /* ts05::Testable_SAT_PropellersState_Update */ kcg_bool _524_Testable_SAT_PropellersState_Update;
  /* ts05::Testable_SAT_CameraState_Value */ kcg_bool _523_Testable_SAT_CameraState_Value;
  /* ts05::Testable_SAT_CameraState_Update */ kcg_bool _522_Testable_SAT_CameraState_Update;
  /* ts05::Testable_SAT_AirSpeed_Update */ kcg_bool _521_Testable_SAT_AirSpeed_Update;
  /* ts05::Testable_SAT_AirSpeed_Value */ kcg_real _520_Testable_SAT_AirSpeed_Value;
  /* ts05::Testable_SAT_Altitude_Update */ kcg_bool _519_Testable_SAT_Altitude_Update;
  /* ts05::Testable_SAT_Altitude_Value */ kcg_real _518_Testable_SAT_Altitude_Value;
  /* ts05::Testable_SAT_Latitude_Update */ kcg_bool _517_Testable_SAT_Latitude_Update;
  /* ts05::Testable_SAT_Latitude_Value */ kcg_real _516_Testable_SAT_Latitude_Value;
  /* ts05::Testable_SAT_Longitude_Update */ kcg_bool _515_Testable_SAT_Longitude_Update;
  /* ts05::Testable_SAT_Longitude_Value */ kcg_real _514_Testable_SAT_Longitude_Value;
  /* ts05::Testable_SAT_DeclinationAngle_Update */ kcg_bool _513_Testable_SAT_DeclinationAngle_Update;
  /* ts05::Testable_SAT_DeclinationAngle_Value */ kcg_real _512_Testable_SAT_DeclinationAngle_Value;
  /* ts05::Testable_SAT_Period_Update */ kcg_bool _511_Testable_SAT_Period_Update;
  /* ts05::Testable_SAT_Period_Value */ kcg_real _510_Testable_SAT_Period_Value;
  /* ts05::Testable_SAT_GyroscopeState_Toggle */ kcg_bool _509_Testable_SAT_GyroscopeState_Toggle;
  /* ts05::Testable_SAT_GyroscopeState_ToggleTo */ kcg_bool Testable_SAT_GyroscopeState_ToggleTo;
  /* ts05::Testable_SAT_CameraState_ToggleTo */ kcg_bool _508_Testable_SAT_CameraState_ToggleTo;
  /* ts05::Testable_SAT_CameraState_Toggle */ kcg_bool Testable_SAT_CameraState_Toggle;
  /* ts05::Testable_SAT_HorizonSensorState_ToggleTo */ kcg_bool _507_Testable_SAT_HorizonSensorState_ToggleTo;
  /* ts05::Testable_SAT_HorizonSensorState_Toggle */ kcg_bool _506_Testable_SAT_HorizonSensorState_Toggle;
  /* ts05::Testable_SAT_PropellersState_ToggleTo */ kcg_bool _505_Testable_SAT_PropellersState_ToggleTo;
  /* ts05::Testable_SAT_PropellersState_Toggle */ kcg_bool Testable_SAT_PropellersState_Toggle;
  /* ts05::Testable_SAT_Initialize */ kcg_bool Testable_SAT_Initialize;
  /* ts05::_L3 */ kcg_bool _L3;
  /* ts05::_L14 */ kcg_bool _L14;
  /* ts05::_L30 */ kcg_bool _L30;
  /* ts05::_L43 */ kcg_bool _L43;
  /* ts05::_L42 */ kcg_int _L42;
  /* ts05::_L38 */ kcg_int _L38;
  /* ts05::_L39 */ kcg_int _L39;
  /* ts05::_L40 */ kcg_int _L40;
  /* ts05::_L41 */ String_SS _L41;
  /* ts05::_L37 */ kcg_int _L37;
  /* ts05::_L36 */ kcg_bool _L36;
  /* ts05::_L56 */ kcg_bool _L56;
  /* ts05::_L57 */ kcg_bool _L57;
  /* ts05::_L59 */ kcg_bool _L59;
  /* ts05::_L60 */ kcg_bool _L60;
  /* ts05::_L61 */ kcg_bool _L61;
  /* ts05::_L62 */ kcg_bool _L62;
  /* ts05::_L64 */ kcg_bool _L64;
  /* ts05::_L65 */ OperationMode _L65;
  /* ts05::_L66 */ kcg_bool _L66;
  /* ts05::_L67 */ kcg_bool _L67;
  /* ts05::_L68 */ kcg_bool _L68;
  /* ts05::_L69 */ kcg_bool _L69;
  /* ts05::_L70 */ kcg_bool _L70;
  /* ts05::_L71 */ kcg_bool _L71;
  /* ts05::_L72 */ kcg_int _L72;
  /* ts05::_L73 */ kcg_bool _L73;
  /* ts05::_L74 */ kcg_real _L74;
  /* ts05::_L75 */ kcg_bool _L75;
  /* ts05::_L76 */ kcg_real _L76;
  /* ts05::_L77 */ kcg_bool _L77;
  /* ts05::_L78 */ kcg_real _L78;
  /* ts05::_L79 */ kcg_bool _L79;
  /* ts05::_L80 */ kcg_real _L80;
  /* ts05::_L81 */ kcg_bool _L81;
  /* ts05::_L82 */ kcg_real _L82;
  /* ts05::_L83 */ kcg_bool _L83;
  /* ts05::_L84 */ kcg_real _L84;
  /* ts05::_L90 */ kcg_real _L90;
  /* ts05::_L89 */ kcg_real _L89;
  /* ts05::_L88 */ kcg_real _L88;
  /* ts05::_L87 */ kcg_real _L87;
  /* ts05::_L86 */ kcg_real _L86;
  /* ts05::_L85 */ kcg_real _L85;
  /* ts05::_L99 */ kcg_bool _L99;
  /* ts05::_L101 */ kcg_int _L101;
  /* ts05::_L100 */ kcg_int _L100;
  /* ts05::_L103 */ kcg_bool _L103;
  /* ts05::_L104 */ kcg_bool _L104;
  /* ts05::_L105 */ kcg_bool _L105;
  /* ts05::_L132 */ kcg_int _L132;
  /* ts05::_L127 */ String_ES _L127;
  /* ts05::_L126 */ kcg_int _L126;
  /* ts05::_L125 */ kcg_bool _L125;
  /* ts05::_L124 */ kcg_bool _L124;
  /* ts05::_L123 */ kcg_bool _L123;
  /* ts05::_L122 */ kcg_bool _L122;
  /* ts05::_L121 */ kcg_bool _L121;
  /* ts05::_L120 */ kcg_bool _L120;
  /* ts05::_L119 */ kcg_bool _L119;
  /* ts05::_L118 */ kcg_bool _L118;
  /* ts05::_L117 */ String_ES _L117;
  /* ts05::_L116 */ kcg_int _L116;
  /* ts05::_L115 */ kcg_int _L115;
  /* ts05::_L114 */ String_ES _L114;
  /* ts05::_L113 */ kcg_int _L113;
  /* ts05::_L112 */ kcg_int _L112;
  /* ts05::_L111 */ String_ES _L111;
  /* ts05::_L110 */ kcg_int _L110;
  /* ts05::_L109 */ kcg_int _L109;
  /* ts05::_L108 */ String_ES _L108;
  /* ts05::_L107 */ kcg_int _L107;
  /* ts05::_L106 */ kcg_int _L106;
  /* ts05::_L136 */ kcg_bool _L136;
  /* ts05::_L137 */ kcg_bool _L137;
  /* ts05::_L138 */ kcg_bool _L138;
  /* ts05::_L139 */ kcg_bool _L139;
  /* ts05::_L140 */ kcg_bool _L140;
  /* ts05::_L141 */ kcg_bool _L141;
  /* ts05::_L142 */ kcg_int _L142;
  /* ts05::_L143 */ kcg_bool _L143;
  
  if (outC->init3) {
    SM1_state_sel_1 = SSM_st_Funcionando_SM1;
  }
  else {
    SM1_state_sel_1 = outC->SM1_state_nxt_1;
  }
  _L104 = inC->display_load_picture_btn;
  display_load_picture_btn_1 = _L104;
  switch (SM1_state_sel_1) {
    case SSM_st_Funcionando_SM1 :
      br_1_guard_1_SM1_Funcionando = display_load_picture_btn_1;
      if (br_1_guard_1_SM1_Funcionando) {
        _131_SM1_state_act_1 = SSM_st_Validando_SM1;
      }
      else {
        _131_SM1_state_act_1 = SSM_st_Funcionando_SM1;
      }
      break;
    case SSM_st_Erro_SM1 :
      br_1_guard_1_SM1_Erro = display_load_picture_btn_1;
      if (br_1_guard_1_SM1_Erro) {
        _129_SM1_state_act_1 = SSM_st_Validando_SM1;
      }
      else {
        _129_SM1_state_act_1 = SSM_st_Erro_SM1;
      }
      break;
    
  }
  _L103 = inC->cam_picture_loaded;
  cam_picture_loaded_1 = _L103;
  _L2_1127 = cam_picture_loaded_1;
  load_success_1 = _L2_1127;
  switch (SM1_state_sel_1) {
    case SSM_st_Validando_SM1 :
      br_1_guard_1_SM1_Validando = load_success_1;
      if (br_1_guard_1_SM1_Validando) {
        _134_SM1_state_act_1 = SSM_st_Funcionando_SM1;
      }
      else {
        _134_SM1_state_act_1 = SSM_st_Validando_SM1;
      }
      SM1_state_act_1 = _134_SM1_state_act_1;
      break;
    case SSM_st_Funcionando_SM1 :
      SM1_state_act_1 = _131_SM1_state_act_1;
      break;
    case SSM_st_Erro_SM1 :
      SM1_state_act_1 = _129_SM1_state_act_1;
      break;
    
  }
  if (outC->init3) {
    SM1_reset_prv_1 = kcg_false;
  }
  else {
    SM1_reset_prv_1 = outC->SM1_reset_act_1;
  }
  switch (SM1_state_sel_1) {
    case SSM_st_Validando_SM1 :
      _135_SM1_reset_act_1 = br_1_guard_1_SM1_Validando;
      outC->SM1_reset_act_1 = _135_SM1_reset_act_1;
      break;
    case SSM_st_Funcionando_SM1 :
      _132_SM1_reset_act_1 = br_1_guard_1_SM1_Funcionando;
      outC->SM1_reset_act_1 = _132_SM1_reset_act_1;
      break;
    case SSM_st_Erro_SM1 :
      SM1_reset_act_1 = br_1_guard_1_SM1_Erro;
      outC->SM1_reset_act_1 = SM1_reset_act_1;
      break;
    
  }
  switch (SM1_state_act_1) {
    case SSM_st_Validando_SM1 :
      if (outC->SM1_reset_act_1) {
        outC->init2 = kcg_true;
      }
      break;
    
  }
  if (outC->init3) {
    Initialization_state_sel_2 = SSM_st_Off_Initialization;
  }
  else {
    Initialization_state_sel_2 = outC->Initialization_state_nxt_2;
  }
  _L36 = inC->CDS_SS_InitializationButton_Pressed;
  CDS_SS_InitializationButton_Pressed_2 = _L36;
  _L88_2 = CDS_SS_InitializationButton_Pressed_2;
  Initialize_2 = _L88_2;
  switch (Initialization_state_sel_2) {
    case SSM_st_Initialized_Initialization :
      _64_Initialization_state_act_2 = SSM_st_Initialized_Initialization;
      break;
    case SSM_st_Fail_Initialization :
      br_1_guard_2_Initialization_Fail = Initialize_2;
      if (br_1_guard_2_Initialization_Fail) {
        _62_Initialization_state_act_2 = SSM_st_Initializing_Initialization;
      }
      else {
        _62_Initialization_state_act_2 = SSM_st_Fail_Initialization;
      }
      break;
    
  }
  if (outC->init3) {
    DebugOrDeploy_state_sel = SSM_st_Debug_DebugOrDeploy;
  }
  else {
    DebugOrDeploy_state_sel = outC->DebugOrDeploy_state_nxt;
  }
  switch (DebugOrDeploy_state_sel) {
    case SSM_st_Deploy_DebugOrDeploy :
      DebugOrDeploy_state_act = SSM_st_Deploy_DebugOrDeploy;
      break;
    
  }
  _L30 = kcg_true;
  deploy = _L30;
  switch (DebugOrDeploy_state_sel) {
    case SSM_st_Debug_DebugOrDeploy :
      br_1_guard_DebugOrDeploy_Debug = deploy;
      if (br_1_guard_DebugOrDeploy_Debug) {
        _499_DebugOrDeploy_state_act = SSM_st_Deploy_DebugOrDeploy;
      }
      else {
        _499_DebugOrDeploy_state_act = SSM_st_Debug_DebugOrDeploy;
      }
      _504_DebugOrDeploy_state_act = _499_DebugOrDeploy_state_act;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _504_DebugOrDeploy_state_act = DebugOrDeploy_state_act;
      break;
    
  }
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L56_DebugOrDeploy_Debug = inC->TEST_SAT_Initialization_Fail;
      _L55_DebugOrDeploy_Debug = 2;
      _L57_DebugOrDeploy_Debug = inC->TEST_SAT_Initialization_Success;
      _L58_DebugOrDeploy_Debug = 1;
      _L60_DebugOrDeploy_Debug = 0;
      if (_L57_DebugOrDeploy_Debug) {
        _L62_DebugOrDeploy_Debug = _L58_DebugOrDeploy_Debug;
      }
      else {
        _L62_DebugOrDeploy_Debug = _L60_DebugOrDeploy_Debug;
      }
      if (_L56_DebugOrDeploy_Debug) {
        _L61_DebugOrDeploy_Debug = _L55_DebugOrDeploy_Debug;
      }
      else {
        _L61_DebugOrDeploy_Debug = _L62_DebugOrDeploy_Debug;
      }
      _472_Testable_SAT_Initialization_Signal = _L61_DebugOrDeploy_Debug;
      _533_Testable_SAT_Initialization_Signal =
        _472_Testable_SAT_Initialization_Signal;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L111_DebugOrDeploy_Deploy = inC->SAT_Initialization_Signal;
      Testable_SAT_Initialization_Signal = _L111_DebugOrDeploy_Deploy;
      _533_Testable_SAT_Initialization_Signal =
        Testable_SAT_Initialization_Signal;
      break;
    
  }
  _L37 = _533_Testable_SAT_Initialization_Signal;
  SAT_Initialization_Signal_2 = _L37;
  _L89_2 = SAT_Initialization_Signal_2;
  _L92_2 = kcg_true;
  _L93_2 = kcg_false;
  switch (_L89_2) {
    case 1 :
      _L95_2 = _L92_2;
      break;
    
    default :
      _L95_2 = _L93_2;
  }
  Success_2 = _L95_2;
  switch (Initialization_state_sel_2) {
    case SSM_st_Initializing_Initialization :
      br_1_guard_2_Initialization_Initializing = Success_2;
      break;
    
  }
  switch (_L89_2) {
    case 2 :
      _L97_2 = _L92_2;
      break;
    
    default :
      _L97_2 = _L93_2;
  }
  Fail_2 = _L97_2;
  switch (Initialization_state_sel_2) {
    case SSM_st_Ejected_Initialization :
      br_1_guard_2_Initialization_Ejected = Initialize_2;
      if (br_1_guard_2_Initialization_Ejected) {
        _70_Initialization_state_act_2 = SSM_st_Initializing_Initialization;
      }
      else {
        _70_Initialization_state_act_2 = SSM_st_Ejected_Initialization;
      }
      break;
    case SSM_st_Initializing_Initialization :
      br_2_guard_2_Initialization_Initializing = Fail_2;
      if (br_1_guard_2_Initialization_Initializing) {
        _67_Initialization_state_act_2 = SSM_st_Initialized_Initialization;
      }
      else if (br_2_guard_2_Initialization_Initializing) {
        _67_Initialization_state_act_2 = SSM_st_Fail_Initialization;
      }
      else {
        _67_Initialization_state_act_2 = SSM_st_Initializing_Initialization;
      }
      break;
    
  }
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L59_DebugOrDeploy_Debug = inC->TEST_SAT_Ejection_Signal;
      _473_Testable_SAT_Ejection_Signal = _L59_DebugOrDeploy_Debug;
      _532_Testable_SAT_Ejection_Signal = _473_Testable_SAT_Ejection_Signal;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L110_DebugOrDeploy_Deploy = inC->SAT_Ejection_Signal;
      Testable_SAT_Ejection_Signal = _L110_DebugOrDeploy_Deploy;
      _532_Testable_SAT_Ejection_Signal = Testable_SAT_Ejection_Signal;
      break;
    
  }
  _L43 = _532_Testable_SAT_Ejection_Signal;
  SAT_Ejection_Signal_2 = _L43;
  _L87_2 = SAT_Ejection_Signal_2;
  Ejected_2 = _L87_2;
  switch (Initialization_state_sel_2) {
    case SSM_st_Off_Initialization :
      br_1_guard_2_Initialization_Off = Ejected_2;
      if (br_1_guard_2_Initialization_Off) {
        _73_Initialization_state_act_2 = SSM_st_Ejected_Initialization;
      }
      else {
        _73_Initialization_state_act_2 = SSM_st_Off_Initialization;
      }
      Initialization_state_act_2 = _73_Initialization_state_act_2;
      break;
    case SSM_st_Ejected_Initialization :
      Initialization_state_act_2 = _70_Initialization_state_act_2;
      break;
    case SSM_st_Initializing_Initialization :
      Initialization_state_act_2 = _67_Initialization_state_act_2;
      break;
    case SSM_st_Initialized_Initialization :
      Initialization_state_act_2 = _64_Initialization_state_act_2;
      break;
    case SSM_st_Fail_Initialization :
      Initialization_state_act_2 = _62_Initialization_state_act_2;
      break;
    
  }
  if (outC->init3) {
    Initialization_reset_prv_2 = kcg_false;
  }
  else {
    Initialization_reset_prv_2 = outC->Initialization_reset_act_2;
  }
  switch (Initialization_state_sel_2) {
    case SSM_st_Off_Initialization :
      _74_Initialization_reset_act_2 = br_1_guard_2_Initialization_Off;
      outC->Initialization_reset_act_2 = _74_Initialization_reset_act_2;
      break;
    case SSM_st_Ejected_Initialization :
      _71_Initialization_reset_act_2 = br_1_guard_2_Initialization_Ejected;
      outC->Initialization_reset_act_2 = _71_Initialization_reset_act_2;
      break;
    case SSM_st_Initializing_Initialization :
      if (br_1_guard_2_Initialization_Initializing) {
        _68_Initialization_reset_act_2 = kcg_true;
      }
      else {
        _68_Initialization_reset_act_2 =
          br_2_guard_2_Initialization_Initializing;
      }
      outC->Initialization_reset_act_2 = _68_Initialization_reset_act_2;
      break;
    case SSM_st_Initialized_Initialization :
      _65_Initialization_reset_act_2 = kcg_false;
      outC->Initialization_reset_act_2 = _65_Initialization_reset_act_2;
      break;
    case SSM_st_Fail_Initialization :
      Initialization_reset_act_2 = br_1_guard_2_Initialization_Fail;
      outC->Initialization_reset_act_2 = Initialization_reset_act_2;
      break;
    
  }
  switch (Initialization_state_act_2) {
    case SSM_st_Initializing_Initialization :
      if (outC->Initialization_reset_act_2) {
        outC->init1 = kcg_true;
      }
      break;
    
  }
  _L143 = inC->SAT_Fix_Response;
  SAT_Fix_Response_1 = _L143;
  _L139 = inC->CDS_Auto_Verify;
  CDS_Auto_Verify_1 = _L139;
  _L138 = inC->SAT_HorizonSensorState_Fail;
  SAT_HorizonSensorState_Fail_1 = _L138;
  _L137 = inC->SAT_GyroscopeState_Fail;
  SAT_GyroscopeState_Fail_1 = _L137;
  _L136 = inC->SAT_CameraState_Fail;
  SAT_CameraState_Fail_1 = _L136;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L155_DebugOrDeploy_Debug = inC->TEST_SAT_CameraState_Value;
      _L147_DebugOrDeploy_Debug = kcg_true;
      _L146_DebugOrDeploy_Debug = kcg_false;
      switch (_L155_DebugOrDeploy_Debug) {
        case 1 :
          _L145_DebugOrDeploy_Debug = _L147_DebugOrDeploy_Debug;
          break;
        
        default :
          _L145_DebugOrDeploy_Debug = _L146_DebugOrDeploy_Debug;
      }
      _482_Testable_SAT_CameraState_Value = _L145_DebugOrDeploy_Debug;
      _523_Testable_SAT_CameraState_Value = _482_Testable_SAT_CameraState_Value;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L99_DebugOrDeploy_Deploy = inC->SAT_CameraState_Value;
      Testable_SAT_CameraState_Value = _L99_DebugOrDeploy_Deploy;
      _523_Testable_SAT_CameraState_Value = Testable_SAT_CameraState_Value;
      break;
    
  }
  _L57 = _523_Testable_SAT_CameraState_Value;
  SAT_CameraState_Value_1 = _L57;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L154_DebugOrDeploy_Debug = inC->TEST_SAT_CameraState_Update;
      _483_Testable_SAT_CameraState_Update = _L154_DebugOrDeploy_Debug;
      _522_Testable_SAT_CameraState_Update =
        _483_Testable_SAT_CameraState_Update;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L98_DebugOrDeploy_Deploy = inC->SAT_CameraState_Update;
      Testable_SAT_CameraState_Update = _L98_DebugOrDeploy_Deploy;
      _522_Testable_SAT_CameraState_Update = Testable_SAT_CameraState_Update;
      break;
    
  }
  _L56 = _522_Testable_SAT_CameraState_Update;
  SAT_CameraState_Update_1 = _L56;
  _L71 = inC->CDS_ES_CameraButton_Pressed;
  CDS_ES_CameraButton_Pressed_1 = _L71;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L153_DebugOrDeploy_Debug = inC->TEST_SAT_PropellersState_Value;
      _L144_DebugOrDeploy_Debug = kcg_true;
      _L142_DebugOrDeploy_Debug = kcg_false;
      switch (_L153_DebugOrDeploy_Debug) {
        case 1 :
          _L143_DebugOrDeploy_Debug = _L144_DebugOrDeploy_Debug;
          break;
        
        default :
          _L143_DebugOrDeploy_Debug = _L142_DebugOrDeploy_Debug;
      }
      _480_Testable_SAT_PropellersState_Value = _L143_DebugOrDeploy_Debug;
      _525_Testable_SAT_PropellersState_Value =
        _480_Testable_SAT_PropellersState_Value;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L97_DebugOrDeploy_Deploy = inC->SAT_PropellersState_Value;
      Testable_SAT_PropellersState_Value = _L97_DebugOrDeploy_Deploy;
      _525_Testable_SAT_PropellersState_Value =
        Testable_SAT_PropellersState_Value;
      break;
    
  }
  _L67 = _525_Testable_SAT_PropellersState_Value;
  SAT_PropellersState_Value_1 = _L67;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L152_DebugOrDeploy_Debug = inC->TEST_SAT_PropellersState_Update;
      _481_Testable_SAT_PropellersState_Update = _L152_DebugOrDeploy_Debug;
      _524_Testable_SAT_PropellersState_Update =
        _481_Testable_SAT_PropellersState_Update;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L96_DebugOrDeploy_Deploy = inC->SAT_PropellersState_Update;
      Testable_SAT_PropellersState_Update = _L96_DebugOrDeploy_Deploy;
      _524_Testable_SAT_PropellersState_Update =
        Testable_SAT_PropellersState_Update;
      break;
    
  }
  _L66 = _524_Testable_SAT_PropellersState_Update;
  SAT_PropellersState_Update_1 = _L66;
  _L70 = inC->CDS_ES_PropellersButton_Pressed;
  CDS_ES_PropellersButton_Pressed_1 = _L70;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L151_DebugOrDeploy_Debug = inC->TEST_SAT_HorizonSensorState_Value;
      _L137_DebugOrDeploy_Debug = kcg_true;
      _L138_DebugOrDeploy_Debug = kcg_false;
      switch (_L151_DebugOrDeploy_Debug) {
        case 1 :
          _L136_DebugOrDeploy_Debug = _L137_DebugOrDeploy_Debug;
          break;
        
        default :
          _L136_DebugOrDeploy_Debug = _L138_DebugOrDeploy_Debug;
      }
      _478_Testable_SAT_HorizonSensorState_Value = _L136_DebugOrDeploy_Debug;
      _527_Testable_SAT_HorizonSensorState_Value =
        _478_Testable_SAT_HorizonSensorState_Value;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L95_DebugOrDeploy_Deploy = inC->SAT_HorizonSensorState_Value;
      Testable_SAT_HorizonSensorState_Value = _L95_DebugOrDeploy_Deploy;
      _527_Testable_SAT_HorizonSensorState_Value =
        Testable_SAT_HorizonSensorState_Value;
      break;
    
  }
  _L62 = _527_Testable_SAT_HorizonSensorState_Value;
  SAT_HorizonSensorState_Value_1 = _L62;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L150_DebugOrDeploy_Debug = inC->TEST_SAT_HorizonSensorState_Update;
      _479_Testable_SAT_HorizonSensorState_Update = _L150_DebugOrDeploy_Debug;
      _526_Testable_SAT_HorizonSensorState_Update =
        _479_Testable_SAT_HorizonSensorState_Update;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L94_DebugOrDeploy_Deploy = inC->SAT_HorizonSensorState_Update;
      _449_Testable_SAT_HorizonSensorState_Update = _L94_DebugOrDeploy_Deploy;
      _526_Testable_SAT_HorizonSensorState_Update =
        _449_Testable_SAT_HorizonSensorState_Update;
      break;
    
  }
  _L61 = _526_Testable_SAT_HorizonSensorState_Update;
  SAT_HorizonSensorState_Update_1 = _L61;
  _L69 = inC->CDS_ES_HorizonSensorButton_Pressed;
  CDS_ES_HorizonSensorButton_Pressed_1 = _L69;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L149_DebugOrDeploy_Debug = inC->TEST_SAT_GyroscopeState_Value;
      _L134_DebugOrDeploy_Debug = kcg_true;
      _L135_DebugOrDeploy_Debug = kcg_false;
      switch (_L149_DebugOrDeploy_Debug) {
        case 1 :
          _L133_DebugOrDeploy_Debug = _L134_DebugOrDeploy_Debug;
          break;
        
        default :
          _L133_DebugOrDeploy_Debug = _L135_DebugOrDeploy_Debug;
      }
      _477_Testable_SAT_GyroscopeState_Value = _L133_DebugOrDeploy_Debug;
      _528_Testable_SAT_GyroscopeState_Value =
        _477_Testable_SAT_GyroscopeState_Value;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L93_DebugOrDeploy_Deploy = inC->SAT_GyroscopeState_Value;
      Testable_SAT_GyroscopeState_Value = _L93_DebugOrDeploy_Deploy;
      _528_Testable_SAT_GyroscopeState_Value =
        Testable_SAT_GyroscopeState_Value;
      break;
    
  }
  _L60 = _528_Testable_SAT_GyroscopeState_Value;
  SAT_GyroscopeState_Value_1 = _L60;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L148_DebugOrDeploy_Debug = inC->TEST_SAT_GyroscopeState_Update;
      _476_Testable_SAT_GyroscopeState_Update = _L148_DebugOrDeploy_Debug;
      _529_Testable_SAT_GyroscopeState_Update =
        _476_Testable_SAT_GyroscopeState_Update;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L92_DebugOrDeploy_Deploy = inC->SAT_GyroscopeState_Update;
      Testable_SAT_GyroscopeState_Update = _L92_DebugOrDeploy_Deploy;
      _529_Testable_SAT_GyroscopeState_Update =
        Testable_SAT_GyroscopeState_Update;
      break;
    
  }
  _L59 = _529_Testable_SAT_GyroscopeState_Update;
  SAT_GyroscopeState_Update_1 = _L59;
  _L68 = inC->CDS_ES_GyroscopeButton_Pressed;
  CDS_ES_GyroscopeButton_Pressed_1 = _L68;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L93_DebugOrDeploy_Debug = inC->TEST_SAT_OperationMode_Value;
      _L126_DebugOrDeploy_Debug = OPMODE_GROUND_SAFE;
      _L123_DebugOrDeploy_Debug = OPMODE_GROUND_SUPPORT;
      _L127_DebugOrDeploy_Debug = OPMODE_LAUNCH;
      _L122_DebugOrDeploy_Debug = OPMODE_ATTITUDE_CONTROL;
      _L128_DebugOrDeploy_Debug = OPMODE_ATTITUDE_SAFE;
      _L129_DebugOrDeploy_Debug = OPMODE_NORMAL_SAFE;
      _L124_DebugOrDeploy_Debug = OPMODE_NORMAL_ATTITUDE;
      _L121_DebugOrDeploy_Debug = OPMODE_NORMAL_PAYLOAD;
      switch (_L93_DebugOrDeploy_Debug) {
        case 1 :
          _L125_DebugOrDeploy_Debug = _L126_DebugOrDeploy_Debug;
          break;
        case 2 :
          _L125_DebugOrDeploy_Debug = _L123_DebugOrDeploy_Debug;
          break;
        case 3 :
          _L125_DebugOrDeploy_Debug = _L127_DebugOrDeploy_Debug;
          break;
        case 4 :
          _L125_DebugOrDeploy_Debug = _L122_DebugOrDeploy_Debug;
          break;
        case 5 :
          _L125_DebugOrDeploy_Debug = _L128_DebugOrDeploy_Debug;
          break;
        case 6 :
          _L125_DebugOrDeploy_Debug = _L129_DebugOrDeploy_Debug;
          break;
        case 7 :
          _L125_DebugOrDeploy_Debug = _L124_DebugOrDeploy_Debug;
          break;
        case 8 :
          _L125_DebugOrDeploy_Debug = _L121_DebugOrDeploy_Debug;
          break;
        
        default :
          _L125_DebugOrDeploy_Debug = _L126_DebugOrDeploy_Debug;
      }
      if (outC->init) {
        _L213_DebugOrDeploy_Debug = OPMODE_GROUND_SAFE;
      }
      else {
        _L213_DebugOrDeploy_Debug = _L125_DebugOrDeploy_Debug;
      }
      _475_Testable_SAT_OperationMode_Value = _L213_DebugOrDeploy_Debug;
      _530_Testable_SAT_OperationMode_Value =
        _475_Testable_SAT_OperationMode_Value;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L91_DebugOrDeploy_Deploy = inC->SAT_OperationMode_Value;
      Testable_SAT_OperationMode_Value = _L91_DebugOrDeploy_Deploy;
      _530_Testable_SAT_OperationMode_Value = Testable_SAT_OperationMode_Value;
      break;
    
  }
  _L65 = _530_Testable_SAT_OperationMode_Value;
  SAT_OperationMode_Value_1 = _L65;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L210_DebugOrDeploy_Debug = inC->TEST_SAT_Period_Value;
      _495_Testable_SAT_Period_Value = _L210_DebugOrDeploy_Debug;
      _510_Testable_SAT_Period_Value = _495_Testable_SAT_Period_Value;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L89_DebugOrDeploy_Deploy = inC->SAT_Period_Value;
      Testable_SAT_Period_Value = _L89_DebugOrDeploy_Deploy;
      _510_Testable_SAT_Period_Value = Testable_SAT_Period_Value;
      break;
    
  }
  _L84 = _510_Testable_SAT_Period_Value;
  SAT_Period_Value_1 = _L84;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L209_DebugOrDeploy_Debug = inC->TEST_SAT_Period_Update;
      _494_Testable_SAT_Period_Update = _L209_DebugOrDeploy_Debug;
      _511_Testable_SAT_Period_Update = _494_Testable_SAT_Period_Update;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L88_DebugOrDeploy_Deploy = inC->SAT_Period_Update;
      Testable_SAT_Period_Update = _L88_DebugOrDeploy_Deploy;
      _511_Testable_SAT_Period_Update = Testable_SAT_Period_Update;
      break;
    
  }
  _L83 = _511_Testable_SAT_Period_Update;
  SAT_Period_Update_1 = _L83;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L208_DebugOrDeploy_Debug = inC->TEST_SAT_DeclinationAngle_Value;
      _493_Testable_SAT_DeclinationAngle_Value = _L208_DebugOrDeploy_Debug;
      _512_Testable_SAT_DeclinationAngle_Value =
        _493_Testable_SAT_DeclinationAngle_Value;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L87_DebugOrDeploy_Deploy = inC->SAT_DeclinationAngle_Value;
      Testable_SAT_DeclinationAngle_Value = _L87_DebugOrDeploy_Deploy;
      _512_Testable_SAT_DeclinationAngle_Value =
        Testable_SAT_DeclinationAngle_Value;
      break;
    
  }
  _L78 = _512_Testable_SAT_DeclinationAngle_Value;
  SAT_DeclinationAngle_Value_1 = _L78;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L207_DebugOrDeploy_Debug = inC->TEST_SAT_DeclinationAngle_Update;
      _492_Testable_SAT_DeclinationAngle_Update = _L207_DebugOrDeploy_Debug;
      _513_Testable_SAT_DeclinationAngle_Update =
        _492_Testable_SAT_DeclinationAngle_Update;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L86_DebugOrDeploy_Deploy = inC->SAT_DeclinationAngle_Update;
      Testable_SAT_DeclinationAngle_Update = _L86_DebugOrDeploy_Deploy;
      _513_Testable_SAT_DeclinationAngle_Update =
        Testable_SAT_DeclinationAngle_Update;
      break;
    
  }
  _L77 = _513_Testable_SAT_DeclinationAngle_Update;
  SAT_DeclinationAngle_Update_1 = _L77;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L206_DebugOrDeploy_Debug = inC->TEST_SAT_Longitude_Value;
      _491_Testable_SAT_Longitude_Value = _L206_DebugOrDeploy_Debug;
      _514_Testable_SAT_Longitude_Value = _491_Testable_SAT_Longitude_Value;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L85_DebugOrDeploy_Deploy = inC->SAT_Longitude_Value;
      Testable_SAT_Longitude_Value = _L85_DebugOrDeploy_Deploy;
      _514_Testable_SAT_Longitude_Value = Testable_SAT_Longitude_Value;
      break;
    
  }
  _L82 = _514_Testable_SAT_Longitude_Value;
  SAT_Longitude_Value_1 = _L82;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L205_DebugOrDeploy_Debug = inC->TEST_SAT_Longitude_Update;
      _490_Testable_SAT_Longitude_Update = _L205_DebugOrDeploy_Debug;
      _515_Testable_SAT_Longitude_Update = _490_Testable_SAT_Longitude_Update;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L84_DebugOrDeploy_Deploy = inC->SAT_Longitude_Update;
      Testable_SAT_Longitude_Update = _L84_DebugOrDeploy_Deploy;
      _515_Testable_SAT_Longitude_Update = Testable_SAT_Longitude_Update;
      break;
    
  }
  _L81 = _515_Testable_SAT_Longitude_Update;
  SAT_Longitude_Update_1 = _L81;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L204_DebugOrDeploy_Debug = inC->TEST_SAT_Latitude_Value;
      _489_Testable_SAT_Latitude_Value = _L204_DebugOrDeploy_Debug;
      _516_Testable_SAT_Latitude_Value = _489_Testable_SAT_Latitude_Value;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L83_DebugOrDeploy_Deploy = inC->SAT_Latitude_Value;
      Testable_SAT_Latitude_Value = _L83_DebugOrDeploy_Deploy;
      _516_Testable_SAT_Latitude_Value = Testable_SAT_Latitude_Value;
      break;
    
  }
  _L80 = _516_Testable_SAT_Latitude_Value;
  SAT_Latitude_Value_1 = _L80;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L203_DebugOrDeploy_Debug = inC->TEST_SAT_Latitude_Update;
      _488_Testable_SAT_Latitude_Update = _L203_DebugOrDeploy_Debug;
      _517_Testable_SAT_Latitude_Update = _488_Testable_SAT_Latitude_Update;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L82_DebugOrDeploy_Deploy = inC->SAT_Latitude_Update;
      Testable_SAT_Latitude_Update = _L82_DebugOrDeploy_Deploy;
      _517_Testable_SAT_Latitude_Update = Testable_SAT_Latitude_Update;
      break;
    
  }
  _L79 = _517_Testable_SAT_Latitude_Update;
  SAT_Latitude_Update_1 = _L79;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L202_DebugOrDeploy_Debug = inC->TEST_SAT_Altitude_Value;
      _487_Testable_SAT_Altitude_Value = _L202_DebugOrDeploy_Debug;
      _518_Testable_SAT_Altitude_Value = _487_Testable_SAT_Altitude_Value;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L81_DebugOrDeploy_Deploy = inC->SAT_Altitude_Value;
      Testable_SAT_Altitude_Value = _L81_DebugOrDeploy_Deploy;
      _518_Testable_SAT_Altitude_Value = Testable_SAT_Altitude_Value;
      break;
    
  }
  _L76 = _518_Testable_SAT_Altitude_Value;
  SAT_Altitude_Value_1 = _L76;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L201_DebugOrDeploy_Debug = inC->TEST_SAT_Altitude_Update;
      _486_Testable_SAT_Altitude_Update = _L201_DebugOrDeploy_Debug;
      _519_Testable_SAT_Altitude_Update = _486_Testable_SAT_Altitude_Update;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L80_DebugOrDeploy_Deploy = inC->SAT_Altitude_Update;
      Testable_SAT_Altitude_Update = _L80_DebugOrDeploy_Deploy;
      _519_Testable_SAT_Altitude_Update = Testable_SAT_Altitude_Update;
      break;
    
  }
  _L75 = _519_Testable_SAT_Altitude_Update;
  SAT_Altitude_Update_1 = _L75;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L200_DebugOrDeploy_Debug = inC->TEST_SAT_AirSpeed_Value;
      _485_Testable_SAT_AirSpeed_Value = _L200_DebugOrDeploy_Debug;
      _520_Testable_SAT_AirSpeed_Value = _485_Testable_SAT_AirSpeed_Value;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L79_DebugOrDeploy_Deploy = inC->SAT_AirSpeed_Value;
      Testable_SAT_AirSpeed_Value = _L79_DebugOrDeploy_Deploy;
      _520_Testable_SAT_AirSpeed_Value = Testable_SAT_AirSpeed_Value;
      break;
    
  }
  _L74 = _520_Testable_SAT_AirSpeed_Value;
  SAT_AirSpeed_Value_1 = _L74;
  if (outC->init3) {
    StateCamera_state_sel_1 = SSM_st_Off_StateCamera;
  }
  else {
    StateCamera_state_sel_1 = outC->StateCamera_state_nxt_1;
  }
  _420_Init_3_1 = kcg_false;
  _423__L7_3_1 = _420_Init_3_1;
  if (outC->init3) {
    _424__L6_3_1 = _423__L7_3_1;
  }
  else {
    _424__L6_3_1 = outC->_5__L4_3_1;
  }
  _L190_1 = SAT_Fix_Response_1;
  _421_Write_3_1 = _L190_1;
  _425__L5_3_1 = _421_Write_3_1;
  _L178_1 = SAT_CameraState_Fail_1;
  _419_BM_Input_3_1 = _L178_1;
  _426__L2_3_1 = _419_BM_Input_3_1;
  if (_425__L5_3_1) {
    outC->_5__L4_3_1 = _426__L2_3_1;
  }
  else {
    outC->_5__L4_3_1 = _424__L6_3_1;
  }
  _422_Memorized_3_1 = outC->_5__L4_3_1;
  _L192_1 = _422_Memorized_3_1;
  Camera_Fail_1 = _L192_1;
  switch (StateCamera_state_sel_1) {
    case SSM_st_Fail_StateCamera :
      br_1_guard_1_StateCamera_Fail = !Camera_Fail_1;
      if (br_1_guard_1_StateCamera_Fail) {
        _336_StateCamera_state_act_1 = SSM_st_Off_StateCamera;
      }
      else {
        _336_StateCamera_state_act_1 = SSM_st_Fail_StateCamera;
      }
      break;
    
  }
  _L110_1 = SAT_CameraState_Update_1;
  _L111_1 = SAT_CameraState_Value_1;
  _L93_1 = !_L111_1;
  _L95_1 = kcg_false;
  if (_L110_1) {
    _L87_1 = _L93_1;
  }
  else {
    _L87_1 = _L95_1;
  }
  Camera_Off_1 = _L87_1;
  switch (StateCamera_state_sel_1) {
    case SSM_st_TurningOff_StateCamera :
      br_1_guard_1_StateCamera_TurningOff = Camera_Off_1;
      break;
    
  }
  _L91_1 = kcg_false;
  if (_L110_1) {
    _L94_1 = _L111_1;
  }
  else {
    _L94_1 = _L91_1;
  }
  Camera_On_1 = _L94_1;
  switch (StateCamera_state_sel_1) {
    case SSM_st_TurningOff_StateCamera :
      br_2_guard_1_StateCamera_TurningOff = Camera_On_1;
      br_3_guard_1_StateCamera_TurningOff = Camera_Fail_1;
      if (br_1_guard_1_StateCamera_TurningOff) {
        _338_StateCamera_state_act_1 = SSM_st_Off_StateCamera;
      }
      else if (br_2_guard_1_StateCamera_TurningOff) {
        _338_StateCamera_state_act_1 = SSM_st_On_StateCamera;
      }
      else if (br_3_guard_1_StateCamera_TurningOff) {
        _338_StateCamera_state_act_1 = SSM_st_Fail_StateCamera;
      }
      else {
        _338_StateCamera_state_act_1 = SSM_st_TurningOff_StateCamera;
      }
      break;
    
  }
  _L109_1 = CDS_ES_CameraButton_Pressed_1;
  if (outC->init3) {
    ManualOperation_state_sel_1 = SSM_st_Disabled_ManualOperation;
  }
  else {
    ManualOperation_state_sel_1 = outC->ManualOperation_state_nxt_1;
  }
  _412_Init_2_1 = OPMODE_GROUND_SAFE;
  _415__L7_2_1 = _412_Init_2_1;
  if (outC->init3) {
    _416__L6_2_1 = _415__L7_2_1;
  }
  else {
    _416__L6_2_1 = outC->_4__L4_2_1;
  }
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L92_DebugOrDeploy_Debug = inC->TEST_SAT_OperationMode_Update;
      if (outC->init) {
        _L212_DebugOrDeploy_Debug = kcg_true;
      }
      else {
        _L212_DebugOrDeploy_Debug = _L92_DebugOrDeploy_Debug;
      }
      _474_Testable_SAT_OperationMode_Update = _L212_DebugOrDeploy_Debug;
      _531_Testable_SAT_OperationMode_Update =
        _474_Testable_SAT_OperationMode_Update;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L90_DebugOrDeploy_Deploy = inC->SAT_OperationMode_Update;
      Testable_SAT_OperationMode_Update = _L90_DebugOrDeploy_Deploy;
      _531_Testable_SAT_OperationMode_Update =
        Testable_SAT_OperationMode_Update;
      break;
    
  }
  _L64 = _531_Testable_SAT_OperationMode_Update;
  SAT_OperationMode_Update_1 = _L64;
  _L119_1 = SAT_OperationMode_Update_1;
  _413_Write_2_1 = _L119_1;
  _417__L5_2_1 = _413_Write_2_1;
  _L122_1 = SAT_OperationMode_Value_1;
  _411_BM_Input_2_1 = _L122_1;
  _418__L2_2_1 = _411_BM_Input_2_1;
  if (_417__L5_2_1) {
    outC->_4__L4_2_1 = _418__L2_2_1;
  }
  else {
    outC->_4__L4_2_1 = _416__L6_2_1;
  }
  _414_Memorized_2_1 = outC->_4__L4_2_1;
  _L155_1 = _414_Memorized_2_1;
  _L120_1 = kcg_false;
  _L123_1 = kcg_true;
  switch (_L155_1) {
    case OPMODE_GROUND_SAFE :
      _L121_1 = _L120_1;
      break;
    case OPMODE_GROUND_SUPPORT :
      _L121_1 = _L123_1;
      break;
    case OPMODE_LAUNCH :
      _L121_1 = _L120_1;
      break;
    case OPMODE_ATTITUDE_CONTROL :
      _L121_1 = _L123_1;
      break;
    case OPMODE_ATTITUDE_SAFE :
      _L121_1 = _L120_1;
      break;
    case OPMODE_NORMAL_SAFE :
      _L121_1 = _L120_1;
      break;
    case OPMODE_NORMAL_ATTITUDE :
      _L121_1 = _L123_1;
      break;
    case OPMODE_NORMAL_PAYLOAD :
      _L121_1 = _L123_1;
      break;
    
  }
  Operating_1 = _L121_1;
  switch (ManualOperation_state_sel_1) {
    case SSM_st_Enabled_ManualOperation :
      br_1_guard_1_ManualOperation_Enabled = !Operating_1;
      if (br_1_guard_1_ManualOperation_Enabled) {
        _222_ManualOperation_state_act_1 = SSM_st_Disabled_ManualOperation;
      }
      else {
        _222_ManualOperation_state_act_1 = SSM_st_Enabled_ManualOperation;
      }
      ManualOperation_state_act_1 = _222_ManualOperation_state_act_1;
      break;
    case SSM_st_Disabled_ManualOperation :
      br_1_guard_1_ManualOperation_Disabled = Operating_1;
      if (br_1_guard_1_ManualOperation_Disabled) {
        _220_ManualOperation_state_act_1 = SSM_st_Enabled_ManualOperation;
      }
      else {
        _220_ManualOperation_state_act_1 = SSM_st_Disabled_ManualOperation;
      }
      ManualOperation_state_act_1 = _220_ManualOperation_state_act_1;
      break;
    
  }
  switch (ManualOperation_state_act_1) {
    case SSM_st_Enabled_ManualOperation :
      _L3_1_ManualOperation_Enabled = kcg_true;
      _234_CameraButton_Enabled_1 = _L3_1_ManualOperation_Enabled;
      CameraButton_Enabled_1 = _234_CameraButton_Enabled_1;
      break;
    case SSM_st_Disabled_ManualOperation :
      _L2_1_ManualOperation_Disabled = kcg_false;
      _228_CameraButton_Enabled_1 = _L2_1_ManualOperation_Disabled;
      CameraButton_Enabled_1 = _228_CameraButton_Enabled_1;
      break;
    
  }
  _L108_1 = CameraButton_Enabled_1;
  _L96_1 = _L109_1 & _L108_1;
  Toggle_Camera_1 = _L96_1;
  switch (StateCamera_state_sel_1) {
    case SSM_st_Off_StateCamera :
      br_1_guard_1_StateCamera_Off = Toggle_Camera_1;
      br_2_guard_1_StateCamera_Off = Camera_On_1;
      br_3_guard_1_StateCamera_Off = Camera_Fail_1;
      if (br_1_guard_1_StateCamera_Off) {
        _350_StateCamera_state_act_1 = SSM_st_TurningOn_StateCamera;
      }
      else if (br_2_guard_1_StateCamera_Off) {
        _350_StateCamera_state_act_1 = SSM_st_On_StateCamera;
      }
      else if (br_3_guard_1_StateCamera_Off) {
        _350_StateCamera_state_act_1 = SSM_st_Fail_StateCamera;
      }
      else {
        _350_StateCamera_state_act_1 = SSM_st_Off_StateCamera;
      }
      StateCamera_state_act_1 = _350_StateCamera_state_act_1;
      break;
    case SSM_st_TurningOn_StateCamera :
      _344_br_1_guard_1_StateCamera_TurningOn = Camera_On_1;
      _345_br_2_guard_1_StateCamera_TurningOn = Camera_Off_1;
      _346_br_3_guard_1_StateCamera_TurningOn = Camera_Fail_1;
      if (_344_br_1_guard_1_StateCamera_TurningOn) {
        _347_StateCamera_state_act_1 = SSM_st_On_StateCamera;
      }
      else if (_345_br_2_guard_1_StateCamera_TurningOn) {
        _347_StateCamera_state_act_1 = SSM_st_Off_StateCamera;
      }
      else if (_346_br_3_guard_1_StateCamera_TurningOn) {
        _347_StateCamera_state_act_1 = SSM_st_Fail_StateCamera;
      }
      else {
        _347_StateCamera_state_act_1 = SSM_st_TurningOn_StateCamera;
      }
      StateCamera_state_act_1 = _347_StateCamera_state_act_1;
      break;
    case SSM_st_On_StateCamera :
      br_1_guard_1_StateCamera_On = Toggle_Camera_1;
      br_2_guard_1_StateCamera_On = Camera_Off_1;
      br_3_guard_1_StateCamera_On = Camera_Fail_1;
      if (br_1_guard_1_StateCamera_On) {
        _341_StateCamera_state_act_1 = SSM_st_TurningOff_StateCamera;
      }
      else if (br_2_guard_1_StateCamera_On) {
        _341_StateCamera_state_act_1 = SSM_st_Off_StateCamera;
      }
      else if (br_3_guard_1_StateCamera_On) {
        _341_StateCamera_state_act_1 = SSM_st_Fail_StateCamera;
      }
      else {
        _341_StateCamera_state_act_1 = SSM_st_On_StateCamera;
      }
      StateCamera_state_act_1 = _341_StateCamera_state_act_1;
      break;
    case SSM_st_TurningOff_StateCamera :
      StateCamera_state_act_1 = _338_StateCamera_state_act_1;
      break;
    case SSM_st_Fail_StateCamera :
      StateCamera_state_act_1 = _336_StateCamera_state_act_1;
      break;
    
  }
  switch (StateCamera_state_act_1) {
    case SSM_st_Off_StateCamera :
      _L6_1_StateCamera_Off = kcg_true;
      _384_Toggle_CameraTo_1 = _L6_1_StateCamera_Off;
      Toggle_CameraTo_1 = _384_Toggle_CameraTo_1;
      break;
    case SSM_st_TurningOn_StateCamera :
      _L17_1_StateCamera_TurningOn = kcg_true;
      _376_Toggle_CameraTo_1 = _L17_1_StateCamera_TurningOn;
      Toggle_CameraTo_1 = _376_Toggle_CameraTo_1;
      break;
    case SSM_st_On_StateCamera :
      _L7_1_StateCamera_On = kcg_false;
      _368_Toggle_CameraTo_1 = _L7_1_StateCamera_On;
      Toggle_CameraTo_1 = _368_Toggle_CameraTo_1;
      break;
    case SSM_st_TurningOff_StateCamera :
      _L29_1_StateCamera_TurningOff = kcg_false;
      _360_Toggle_CameraTo_1 = _L29_1_StateCamera_TurningOff;
      Toggle_CameraTo_1 = _360_Toggle_CameraTo_1;
      break;
    case SSM_st_Fail_StateCamera :
      _L3_1_StateCamera_Fail = kcg_false;
      _354_Toggle_CameraTo_1 = _L3_1_StateCamera_Fail;
      Toggle_CameraTo_1 = _354_Toggle_CameraTo_1;
      break;
    
  }
  _L161_1 = Toggle_CameraTo_1;
  SAT_CameraState_ToggleTo_1 = _L161_1;
  _L125 = SAT_CameraState_ToggleTo_1;
  _508_Testable_SAT_CameraState_ToggleTo = _L125;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L329_DebugOrDeploy_Debug = _508_Testable_SAT_CameraState_ToggleTo;
      NewState_4 = _L329_DebugOrDeploy_Debug;
      break;
    
  }
  if (outC->init3) {
    StatePropellers_state_sel_1 = SSM_st_Off_StatePropellers;
  }
  else {
    StatePropellers_state_sel_1 = outC->StatePropellers_state_nxt_1;
  }
  _L105_1 = SAT_PropellersState_Update_1;
  _L106_1 = SAT_PropellersState_Value_1;
  _L80_1 = !_L106_1;
  _L82_1 = kcg_false;
  if (_L105_1) {
    _L74_1 = _L80_1;
  }
  else {
    _L74_1 = _L82_1;
  }
  Propellers_Off_1 = _L74_1;
  switch (StatePropellers_state_sel_1) {
    case SSM_st_TurningOff_StatePropellers :
      br_1_guard_1_StatePropellers_TurningOff = Propellers_Off_1;
      break;
    
  }
  _L78_1 = kcg_false;
  if (_L105_1) {
    _L81_1 = _L106_1;
  }
  else {
    _L81_1 = _L78_1;
  }
  Propellers_On_1 = _L81_1;
  switch (StatePropellers_state_sel_1) {
    case SSM_st_TurningOff_StatePropellers :
      br_2_guard_1_StatePropellers_TurningOff = Propellers_On_1;
      if (br_1_guard_1_StatePropellers_TurningOff) {
        _299_StatePropellers_state_act_1 = SSM_st_Off_StatePropellers;
      }
      else if (br_2_guard_1_StatePropellers_TurningOff) {
        _299_StatePropellers_state_act_1 = SSM_st_On_StatePropellers;
      }
      else {
        _299_StatePropellers_state_act_1 = SSM_st_TurningOff_StatePropellers;
      }
      break;
    
  }
  _L104_1 = CDS_ES_PropellersButton_Pressed_1;
  switch (ManualOperation_state_act_1) {
    case SSM_st_Enabled_ManualOperation :
      _233_PropellersButton_Enabled_1 = _L3_1_ManualOperation_Enabled;
      PropellersButton_Enabled_1 = _233_PropellersButton_Enabled_1;
      break;
    case SSM_st_Disabled_ManualOperation :
      _227_PropellersButton_Enabled_1 = _L2_1_ManualOperation_Disabled;
      PropellersButton_Enabled_1 = _227_PropellersButton_Enabled_1;
      break;
    
  }
  _L103_1 = PropellersButton_Enabled_1;
  _L83_1 = _L104_1 & _L103_1;
  Toggle_Propellers_1 = _L83_1;
  switch (StatePropellers_state_sel_1) {
    case SSM_st_Off_StatePropellers :
      br_1_guard_1_StatePropellers_Off = Toggle_Propellers_1;
      br_2_guard_1_StatePropellers_Off = Propellers_On_1;
      if (br_1_guard_1_StatePropellers_Off) {
        _309_StatePropellers_state_act_1 = SSM_st_TurningOn_StatePropellers;
      }
      else if (br_2_guard_1_StatePropellers_Off) {
        _309_StatePropellers_state_act_1 = SSM_st_On_StatePropellers;
      }
      else {
        _309_StatePropellers_state_act_1 = SSM_st_Off_StatePropellers;
      }
      StatePropellers_state_act_1 = _309_StatePropellers_state_act_1;
      break;
    case SSM_st_TurningOn_StatePropellers :
      _304_br_1_guard_1_StatePropellers_TurningOn = Propellers_On_1;
      _305_br_2_guard_1_StatePropellers_TurningOn = Propellers_Off_1;
      if (_304_br_1_guard_1_StatePropellers_TurningOn) {
        _306_StatePropellers_state_act_1 = SSM_st_On_StatePropellers;
      }
      else if (_305_br_2_guard_1_StatePropellers_TurningOn) {
        _306_StatePropellers_state_act_1 = SSM_st_Off_StatePropellers;
      }
      else {
        _306_StatePropellers_state_act_1 = SSM_st_TurningOn_StatePropellers;
      }
      StatePropellers_state_act_1 = _306_StatePropellers_state_act_1;
      break;
    case SSM_st_On_StatePropellers :
      br_1_guard_1_StatePropellers_On = Toggle_Propellers_1;
      br_2_guard_1_StatePropellers_On = Propellers_Off_1;
      if (br_1_guard_1_StatePropellers_On) {
        _301_StatePropellers_state_act_1 = SSM_st_TurningOff_StatePropellers;
      }
      else if (br_2_guard_1_StatePropellers_On) {
        _301_StatePropellers_state_act_1 = SSM_st_Off_StatePropellers;
      }
      else {
        _301_StatePropellers_state_act_1 = SSM_st_On_StatePropellers;
      }
      StatePropellers_state_act_1 = _301_StatePropellers_state_act_1;
      break;
    case SSM_st_TurningOff_StatePropellers :
      StatePropellers_state_act_1 = _299_StatePropellers_state_act_1;
      break;
    
  }
  switch (StatePropellers_state_act_1) {
    case SSM_st_Off_StatePropellers :
      _L7_1_StatePropellers_Off = kcg_true;
      _332_Toggle_PropellersTo_1 = _L7_1_StatePropellers_Off;
      Toggle_PropellersTo_1 = _332_Toggle_PropellersTo_1;
      break;
    case SSM_st_TurningOn_StatePropellers :
      _L17_1_StatePropellers_TurningOn = kcg_true;
      _325_Toggle_PropellersTo_1 = _L17_1_StatePropellers_TurningOn;
      Toggle_PropellersTo_1 = _325_Toggle_PropellersTo_1;
      break;
    case SSM_st_On_StatePropellers :
      _L7_1_StatePropellers_On = kcg_false;
      _318_Toggle_PropellersTo_1 = _L7_1_StatePropellers_On;
      Toggle_PropellersTo_1 = _318_Toggle_PropellersTo_1;
      break;
    case SSM_st_TurningOff_StatePropellers :
      _L33_1_StatePropellers_TurningOff = kcg_false;
      _313_Toggle_PropellersTo_1 = _L33_1_StatePropellers_TurningOff;
      Toggle_PropellersTo_1 = _313_Toggle_PropellersTo_1;
      break;
    
  }
  _L167_1 = Toggle_PropellersTo_1;
  SAT_PropellersState_ToggleTo_1 = _L167_1;
  _L123 = SAT_PropellersState_ToggleTo_1;
  _505_Testable_SAT_PropellersState_ToggleTo = _L123;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L330_DebugOrDeploy_Debug = _505_Testable_SAT_PropellersState_ToggleTo;
      NewState_3 = _L330_DebugOrDeploy_Debug;
      break;
    
  }
  if (outC->init3) {
    StateHorizonSensor_state_sel_1 = SSM_st_Off_StateHorizonSensor;
  }
  else {
    StateHorizonSensor_state_sel_1 = outC->StateHorizonSensor_state_nxt_1;
  }
  _428_Init_5_1 = kcg_false;
  _431__L7_5_1 = _428_Init_5_1;
  if (outC->init3) {
    _432__L6_5_1 = _431__L7_5_1;
  }
  else {
    _432__L6_5_1 = outC->_6__L4_5_1;
  }
  _L196_1 = SAT_Fix_Response_1;
  _429_Write_5_1 = _L196_1;
  _433__L5_5_1 = _429_Write_5_1;
  _L182_1 = SAT_HorizonSensorState_Fail_1;
  _427_BM_Input_5_1 = _L182_1;
  _434__L2_5_1 = _427_BM_Input_5_1;
  if (_433__L5_5_1) {
    outC->_6__L4_5_1 = _434__L2_5_1;
  }
  else {
    outC->_6__L4_5_1 = _432__L6_5_1;
  }
  _430_Memorized_5_1 = outC->_6__L4_5_1;
  _L195_1 = _430_Memorized_5_1;
  HorizonSensor_Fail_1 = _L195_1;
  switch (StateHorizonSensor_state_sel_1) {
    case SSM_st_Fail_StateHorizonSensor :
      br_1_guard_1_StateHorizonSensor_Fail = !HorizonSensor_Fail_1;
      if (br_1_guard_1_StateHorizonSensor_Fail) {
        _239_StateHorizonSensor_state_act_1 = SSM_st_Off_StateHorizonSensor;
      }
      else {
        _239_StateHorizonSensor_state_act_1 = SSM_st_Fail_StateHorizonSensor;
      }
      break;
    
  }
  _L101_1 = SAT_HorizonSensorState_Update_1;
  _L100_1 = SAT_HorizonSensorState_Value_1;
  _L67_1 = !_L100_1;
  _L69_1 = kcg_false;
  if (_L101_1) {
    _L61_1 = _L67_1;
  }
  else {
    _L61_1 = _L69_1;
  }
  HorizonSensor_Off_1 = _L61_1;
  switch (StateHorizonSensor_state_sel_1) {
    case SSM_st_TurningOff_StateHorizonSensor :
      _241_br_1_guard_1_StateHorizonSensor_TurningOff = HorizonSensor_Off_1;
      break;
    
  }
  _L65_1 = kcg_false;
  if (_L101_1) {
    _L68_1 = _L100_1;
  }
  else {
    _L68_1 = _L65_1;
  }
  HorizonSensor_On_1 = _L68_1;
  switch (StateHorizonSensor_state_sel_1) {
    case SSM_st_TurningOff_StateHorizonSensor :
      br_2_guard_1_StateHorizonSensor_TurningOff = HorizonSensor_On_1;
      br_3_guard_1_StateHorizonSensor_TurningOff = HorizonSensor_Fail_1;
      if (_241_br_1_guard_1_StateHorizonSensor_TurningOff) {
        _242_StateHorizonSensor_state_act_1 = SSM_st_Off_StateHorizonSensor;
      }
      else if (br_2_guard_1_StateHorizonSensor_TurningOff) {
        _242_StateHorizonSensor_state_act_1 = SSM_st_On_StateHorizonSensor;
      }
      else if (br_3_guard_1_StateHorizonSensor_TurningOff) {
        _242_StateHorizonSensor_state_act_1 = SSM_st_Fail_StateHorizonSensor;
      }
      else {
        _242_StateHorizonSensor_state_act_1 =
          SSM_st_TurningOff_StateHorizonSensor;
      }
      break;
    
  }
  _L99_1 = CDS_ES_HorizonSensorButton_Pressed_1;
  switch (ManualOperation_state_act_1) {
    case SSM_st_Enabled_ManualOperation :
      _232_HorizonSensorButton_Enabled_1 = _L3_1_ManualOperation_Enabled;
      HorizonSensorButton_Enabled_1 = _232_HorizonSensorButton_Enabled_1;
      break;
    case SSM_st_Disabled_ManualOperation :
      _226_HorizonSensorButton_Enabled_1 = _L2_1_ManualOperation_Disabled;
      HorizonSensorButton_Enabled_1 = _226_HorizonSensorButton_Enabled_1;
      break;
    
  }
  _L98_1 = HorizonSensorButton_Enabled_1;
  _L70_1 = _L99_1 & _L98_1;
  Toggle_HorizonSensor_1 = _L70_1;
  switch (StateHorizonSensor_state_sel_1) {
    case SSM_st_Off_StateHorizonSensor :
      _257_br_1_guard_1_StateHorizonSensor_Off = Toggle_HorizonSensor_1;
      _258_br_2_guard_1_StateHorizonSensor_Off = HorizonSensor_On_1;
      _259_br_3_guard_1_StateHorizonSensor_Off = HorizonSensor_Fail_1;
      if (_257_br_1_guard_1_StateHorizonSensor_Off) {
        _260_StateHorizonSensor_state_act_1 =
          SSM_st_TurningOn_StateHorizonSensor;
      }
      else if (_258_br_2_guard_1_StateHorizonSensor_Off) {
        _260_StateHorizonSensor_state_act_1 = SSM_st_On_StateHorizonSensor;
      }
      else if (_259_br_3_guard_1_StateHorizonSensor_Off) {
        _260_StateHorizonSensor_state_act_1 = SSM_st_Fail_StateHorizonSensor;
      }
      else {
        _260_StateHorizonSensor_state_act_1 = SSM_st_Off_StateHorizonSensor;
      }
      StateHorizonSensor_state_act_1 = _260_StateHorizonSensor_state_act_1;
      break;
    case SSM_st_TurningOn_StateHorizonSensor :
      _251_br_1_guard_1_StateHorizonSensor_TurningOn = HorizonSensor_On_1;
      _252_br_2_guard_1_StateHorizonSensor_TurningOn = HorizonSensor_Off_1;
      _253_br_3_guard_1_StateHorizonSensor_TurningOn = HorizonSensor_Fail_1;
      if (_251_br_1_guard_1_StateHorizonSensor_TurningOn) {
        _254_StateHorizonSensor_state_act_1 = SSM_st_On_StateHorizonSensor;
      }
      else if (_252_br_2_guard_1_StateHorizonSensor_TurningOn) {
        _254_StateHorizonSensor_state_act_1 = SSM_st_Off_StateHorizonSensor;
      }
      else if (_253_br_3_guard_1_StateHorizonSensor_TurningOn) {
        _254_StateHorizonSensor_state_act_1 = SSM_st_Fail_StateHorizonSensor;
      }
      else {
        _254_StateHorizonSensor_state_act_1 =
          SSM_st_TurningOn_StateHorizonSensor;
      }
      StateHorizonSensor_state_act_1 = _254_StateHorizonSensor_state_act_1;
      break;
    case SSM_st_On_StateHorizonSensor :
      _245_br_1_guard_1_StateHorizonSensor_On = Toggle_HorizonSensor_1;
      _246_br_2_guard_1_StateHorizonSensor_On = HorizonSensor_Off_1;
      _247_br_3_guard_1_StateHorizonSensor_On = HorizonSensor_Fail_1;
      if (_245_br_1_guard_1_StateHorizonSensor_On) {
        _248_StateHorizonSensor_state_act_1 =
          SSM_st_TurningOff_StateHorizonSensor;
      }
      else if (_246_br_2_guard_1_StateHorizonSensor_On) {
        _248_StateHorizonSensor_state_act_1 = SSM_st_Off_StateHorizonSensor;
      }
      else if (_247_br_3_guard_1_StateHorizonSensor_On) {
        _248_StateHorizonSensor_state_act_1 = SSM_st_Fail_StateHorizonSensor;
      }
      else {
        _248_StateHorizonSensor_state_act_1 = SSM_st_On_StateHorizonSensor;
      }
      StateHorizonSensor_state_act_1 = _248_StateHorizonSensor_state_act_1;
      break;
    case SSM_st_TurningOff_StateHorizonSensor :
      StateHorizonSensor_state_act_1 = _242_StateHorizonSensor_state_act_1;
      break;
    case SSM_st_Fail_StateHorizonSensor :
      StateHorizonSensor_state_act_1 = _239_StateHorizonSensor_state_act_1;
      break;
    
  }
  switch (StateHorizonSensor_state_act_1) {
    case SSM_st_Off_StateHorizonSensor :
      _L5_1_StateHorizonSensor_Off = kcg_true;
      _294_Toggle_HorizonSensorTo_1 = _L5_1_StateHorizonSensor_Off;
      Toggle_HorizonSensorTo_1 = _294_Toggle_HorizonSensorTo_1;
      break;
    case SSM_st_TurningOn_StateHorizonSensor :
      _L16_1_StateHorizonSensor_TurningOn = kcg_true;
      _286_Toggle_HorizonSensorTo_1 = _L16_1_StateHorizonSensor_TurningOn;
      Toggle_HorizonSensorTo_1 = _286_Toggle_HorizonSensorTo_1;
      break;
    case SSM_st_On_StateHorizonSensor :
      _L7_1_StateHorizonSensor_On = kcg_false;
      _278_Toggle_HorizonSensorTo_1 = _L7_1_StateHorizonSensor_On;
      Toggle_HorizonSensorTo_1 = _278_Toggle_HorizonSensorTo_1;
      break;
    case SSM_st_TurningOff_StateHorizonSensor :
      _L29_1_StateHorizonSensor_TurningOff = kcg_false;
      _270_Toggle_HorizonSensorTo_1 = _L29_1_StateHorizonSensor_TurningOff;
      Toggle_HorizonSensorTo_1 = _270_Toggle_HorizonSensorTo_1;
      break;
    case SSM_st_Fail_StateHorizonSensor :
      _L3_1_StateHorizonSensor_Fail = kcg_false;
      _264_Toggle_HorizonSensorTo_1 = _L3_1_StateHorizonSensor_Fail;
      Toggle_HorizonSensorTo_1 = _264_Toggle_HorizonSensorTo_1;
      break;
    
  }
  _L165_1 = Toggle_HorizonSensorTo_1;
  SAT_HorizonSensorState_ToggleTo_1 = _L165_1;
  _L121 = SAT_HorizonSensorState_ToggleTo_1;
  _507_Testable_SAT_HorizonSensorState_ToggleTo = _L121;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L334_DebugOrDeploy_Debug = _507_Testable_SAT_HorizonSensorState_ToggleTo;
      NewState_2 = _L334_DebugOrDeploy_Debug;
      break;
    
  }
  if (outC->init3) {
    StateGyroscope_state_sel_1 = SSM_st_Off_StateGyroscope;
  }
  else {
    StateGyroscope_state_sel_1 = outC->StateGyroscope_state_nxt_1;
  }
  _L40_1 = SAT_GyroscopeState_Update_1;
  _L38_1 = SAT_GyroscopeState_Value_1;
  _L39_1 = kcg_false;
  if (_L40_1) {
    _165__L42_1 = _L38_1;
  }
  else {
    _165__L42_1 = _L39_1;
  }
  Gyroscope_On_1 = _165__L42_1;
  switch (StateGyroscope_state_sel_1) {
    case SSM_st_TurningOn_StateGyroscope :
      br_1_guard_1_StateGyroscope_TurningOn = Gyroscope_On_1;
      break;
    
  }
  _164__L41_1 = !_L38_1;
  _166__L43_1 = kcg_false;
  if (_L40_1) {
    _L35_1 = _164__L41_1;
  }
  else {
    _L35_1 = _166__L43_1;
  }
  Gyroscope_Off_1 = _L35_1;
  switch (StateGyroscope_state_sel_1) {
    case SSM_st_TurningOn_StateGyroscope :
      br_2_guard_1_StateGyroscope_TurningOn = Gyroscope_Off_1;
      break;
    
  }
  Init_4_1 = kcg_false;
  _L7_4_1 = Init_4_1;
  if (outC->init3) {
    _L6_4_1 = _L7_4_1;
  }
  else {
    _L6_4_1 = outC->_L4_4_1;
  }
  _L194_1 = SAT_Fix_Response_1;
  Write_4_1 = _L194_1;
  _L5_4_1 = Write_4_1;
  _L180_1 = SAT_GyroscopeState_Fail_1;
  BM_Input_4_1 = _L180_1;
  _L2_4_1 = BM_Input_4_1;
  if (_L5_4_1) {
    outC->_L4_4_1 = _L2_4_1;
  }
  else {
    outC->_L4_4_1 = _L6_4_1;
  }
  Memorized_4_1 = outC->_L4_4_1;
  _L193_1 = Memorized_4_1;
  Gyroscope_fail_1 = _L193_1;
  switch (StateGyroscope_state_sel_1) {
    case SSM_st_TurningOff_StateGyroscope :
      _172_br_1_guard_1_StateGyroscope_TurningOff = Gyroscope_Off_1;
      _173_br_2_guard_1_StateGyroscope_TurningOff = Gyroscope_On_1;
      _174_br_3_guard_1_StateGyroscope_TurningOff = Gyroscope_fail_1;
      if (_172_br_1_guard_1_StateGyroscope_TurningOff) {
        _175_StateGyroscope_state_act_1 = SSM_st_Off_StateGyroscope;
      }
      else if (_173_br_2_guard_1_StateGyroscope_TurningOff) {
        _175_StateGyroscope_state_act_1 = SSM_st_On_StateGyroscope;
      }
      else if (_174_br_3_guard_1_StateGyroscope_TurningOff) {
        _175_StateGyroscope_state_act_1 = SSM_st_Fail_StateGyroscope;
      }
      else {
        _175_StateGyroscope_state_act_1 = SSM_st_TurningOff_StateGyroscope;
      }
      break;
    case SSM_st_Fail_StateGyroscope :
      br_1_guard_1_StateGyroscope_Fail = !Gyroscope_fail_1;
      if (br_1_guard_1_StateGyroscope_Fail) {
        _169_StateGyroscope_state_act_1 = SSM_st_Off_StateGyroscope;
      }
      else {
        _169_StateGyroscope_state_act_1 = SSM_st_Fail_StateGyroscope;
      }
      break;
    case SSM_st_TurningOn_StateGyroscope :
      br_3_guard_1_StateGyroscope_TurningOn = Gyroscope_fail_1;
      if (br_1_guard_1_StateGyroscope_TurningOn) {
        _167_StateGyroscope_state_act_1 = SSM_st_On_StateGyroscope;
      }
      else if (br_2_guard_1_StateGyroscope_TurningOn) {
        _167_StateGyroscope_state_act_1 = SSM_st_Off_StateGyroscope;
      }
      else if (br_3_guard_1_StateGyroscope_TurningOn) {
        _167_StateGyroscope_state_act_1 = SSM_st_Fail_StateGyroscope;
      }
      else {
        _167_StateGyroscope_state_act_1 = SSM_st_TurningOn_StateGyroscope;
      }
      break;
    
  }
  _L33_1 = CDS_ES_GyroscopeButton_Pressed_1;
  switch (ManualOperation_state_act_1) {
    case SSM_st_Enabled_ManualOperation :
      _231_GyroscopeButton_Enabled_1 = _L3_1_ManualOperation_Enabled;
      GyroscopeButton_Enabled_1 = _231_GyroscopeButton_Enabled_1;
      break;
    case SSM_st_Disabled_ManualOperation :
      _225_GyroscopeButton_Enabled_1 = _L2_1_ManualOperation_Disabled;
      GyroscopeButton_Enabled_1 = _225_GyroscopeButton_Enabled_1;
      break;
    
  }
  _L58_1 = GyroscopeButton_Enabled_1;
  _L44_1 = _L33_1 & _L58_1;
  Toggle_Gyroscope_1 = _L44_1;
  switch (StateGyroscope_state_sel_1) {
    case SSM_st_Off_StateGyroscope :
      br_1_guard_1_StateGyroscope_Off = Toggle_Gyroscope_1;
      br_2_guard_1_StateGyroscope_Off = Gyroscope_On_1;
      br_3_guard_1_StateGyroscope_Off = Gyroscope_fail_1;
      if (br_1_guard_1_StateGyroscope_Off) {
        _181_StateGyroscope_state_act_1 = SSM_st_TurningOn_StateGyroscope;
      }
      else if (br_2_guard_1_StateGyroscope_Off) {
        _181_StateGyroscope_state_act_1 = SSM_st_On_StateGyroscope;
      }
      else if (br_3_guard_1_StateGyroscope_Off) {
        _181_StateGyroscope_state_act_1 = SSM_st_Fail_StateGyroscope;
      }
      else {
        _181_StateGyroscope_state_act_1 = SSM_st_Off_StateGyroscope;
      }
      StateGyroscope_state_act_1 = _181_StateGyroscope_state_act_1;
      break;
    case SSM_st_On_StateGyroscope :
      br_1_guard_1_StateGyroscope_On = Toggle_Gyroscope_1;
      br_2_guard_1_StateGyroscope_On = Gyroscope_Off_1;
      br_3_guard_1_StateGyroscope_On = Gyroscope_fail_1;
      if (br_1_guard_1_StateGyroscope_On) {
        _178_StateGyroscope_state_act_1 = SSM_st_TurningOff_StateGyroscope;
      }
      else if (br_2_guard_1_StateGyroscope_On) {
        _178_StateGyroscope_state_act_1 = SSM_st_Off_StateGyroscope;
      }
      else if (br_3_guard_1_StateGyroscope_On) {
        _178_StateGyroscope_state_act_1 = SSM_st_Fail_StateGyroscope;
      }
      else {
        _178_StateGyroscope_state_act_1 = SSM_st_On_StateGyroscope;
      }
      StateGyroscope_state_act_1 = _178_StateGyroscope_state_act_1;
      break;
    case SSM_st_TurningOff_StateGyroscope :
      StateGyroscope_state_act_1 = _175_StateGyroscope_state_act_1;
      break;
    case SSM_st_Fail_StateGyroscope :
      StateGyroscope_state_act_1 = _169_StateGyroscope_state_act_1;
      break;
    case SSM_st_TurningOn_StateGyroscope :
      StateGyroscope_state_act_1 = _167_StateGyroscope_state_act_1;
      break;
    
  }
  switch (StateGyroscope_state_act_1) {
    case SSM_st_Off_StateGyroscope :
      _L7_1_StateGyroscope_Off = kcg_true;
      _215_Toggle_GyroscopeTo_1 = _L7_1_StateGyroscope_Off;
      Toggle_GyroscopeTo_1 = _215_Toggle_GyroscopeTo_1;
      break;
    case SSM_st_On_StateGyroscope :
      _L6_1_StateGyroscope_On = kcg_false;
      _207_Toggle_GyroscopeTo_1 = _L6_1_StateGyroscope_On;
      Toggle_GyroscopeTo_1 = _207_Toggle_GyroscopeTo_1;
      break;
    case SSM_st_TurningOff_StateGyroscope :
      _L28_1_StateGyroscope_TurningOff = kcg_false;
      _199_Toggle_GyroscopeTo_1 = _L28_1_StateGyroscope_TurningOff;
      Toggle_GyroscopeTo_1 = _199_Toggle_GyroscopeTo_1;
      break;
    case SSM_st_Fail_StateGyroscope :
      _L3_1_StateGyroscope_Fail = kcg_false;
      _191_Toggle_GyroscopeTo_1 = _L3_1_StateGyroscope_Fail;
      Toggle_GyroscopeTo_1 = _191_Toggle_GyroscopeTo_1;
      break;
    case SSM_st_TurningOn_StateGyroscope :
      _L17_1_StateGyroscope_TurningOn = kcg_true;
      _185_Toggle_GyroscopeTo_1 = _L17_1_StateGyroscope_TurningOn;
      Toggle_GyroscopeTo_1 = _185_Toggle_GyroscopeTo_1;
      break;
    
  }
  _L163_1 = Toggle_GyroscopeTo_1;
  SAT_GyroscopeState_ToggleTo_1 = _L163_1;
  _L119 = SAT_GyroscopeState_ToggleTo_1;
  Testable_SAT_GyroscopeState_ToggleTo = _L119;
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L333_DebugOrDeploy_Debug = Testable_SAT_GyroscopeState_ToggleTo;
      NewState_1 = _L333_DebugOrDeploy_Debug;
      _L156_DebugOrDeploy_Debug = inC->TEST_DebugSelector_Received;
      Write_5 = _L156_DebugOrDeploy_Debug;
      Init_5 = - 1;
      break;
    
  }
  SAT_Initialize_2 = _L88_2;
  _L99 = SAT_Initialize_2;
  switch (Initialization_state_act_2) {
    case SSM_st_Off_Initialization :
      kcg_copy_String_SS(
        &_L13_2_Initialization_Off,
        (String_SS *) &CDS_TEXT_SS_INITIALIZE);
      kcg_copy_String_SS(
        &_111_CDS_SS_InitializationButton_Label_2,
        &_L13_2_Initialization_Off);
      kcg_copy_String_SS(
        &_116_CDS_SS_InitializationButton_Label_2,
        &_111_CDS_SS_InitializationButton_Label_2);
      break;
    case SSM_st_Ejected_Initialization :
      kcg_copy_String_SS(
        &_L5_2_Initialization_Ejected,
        (String_SS *) &CDS_TEXT_SS_INITIALIZE);
      kcg_copy_String_SS(
        &_103_CDS_SS_InitializationButton_Label_2,
        &_L5_2_Initialization_Ejected);
      kcg_copy_String_SS(
        &_116_CDS_SS_InitializationButton_Label_2,
        &_103_CDS_SS_InitializationButton_Label_2);
      break;
    case SSM_st_Initializing_Initialization :
      kcg_copy_String_SS(
        &_L16_2_Initialization_Initializing,
        (String_SS *) &CDS_TEXT_SS_INITIALIZING);
      kcg_copy_String_SS(
        &_95_CDS_SS_InitializationButton_Label_2,
        &_L16_2_Initialization_Initializing);
      kcg_copy_String_SS(
        &_116_CDS_SS_InitializationButton_Label_2,
        &_95_CDS_SS_InitializationButton_Label_2);
      break;
    case SSM_st_Initialized_Initialization :
      kcg_copy_String_SS(
        &_L5_2_Initialization_Initialized,
        (String_SS *) &CDS_TEXT_SS_INITIALIZED);
      kcg_copy_String_SS(
        &_81_CDS_SS_InitializationButton_Label_2,
        &_L5_2_Initialization_Initialized);
      kcg_copy_String_SS(
        &_116_CDS_SS_InitializationButton_Label_2,
        &_81_CDS_SS_InitializationButton_Label_2);
      break;
    case SSM_st_Fail_Initialization :
      kcg_copy_String_SS(
        &_L2_2_Initialization_Fail,
        (String_SS *) &CDS_TEXT_SS_INITIALIZE);
      kcg_copy_String_SS(
        &CDS_SS_InitializationButton_Label_2,
        &_L2_2_Initialization_Fail);
      kcg_copy_String_SS(
        &_116_CDS_SS_InitializationButton_Label_2,
        &CDS_SS_InitializationButton_Label_2);
      break;
    
  }
  kcg_copy_String_SS(&_L41, &_116_CDS_SS_InitializationButton_Label_2);
  switch (Initialization_state_act_2) {
    case SSM_st_Off_Initialization :
      _L12_2_Initialization_Off = CDS_COLOR_YELLOW;
      _110_CDS_SS_InitializationButton_Contour_2 = _L12_2_Initialization_Off;
      _117_CDS_SS_InitializationButton_Contour_2 =
        _110_CDS_SS_InitializationButton_Contour_2;
      break;
    case SSM_st_Ejected_Initialization :
      _L7_2_Initialization_Ejected = CDS_COLOR_YELLOW;
      _102_CDS_SS_InitializationButton_Contour_2 = _L7_2_Initialization_Ejected;
      _117_CDS_SS_InitializationButton_Contour_2 =
        _102_CDS_SS_InitializationButton_Contour_2;
      break;
    case SSM_st_Initializing_Initialization :
      _L13_2_Initialization_Initializing = CDS_COLOR_YELLOW;
      _94_CDS_SS_InitializationButton_Contour_2 =
        _L13_2_Initialization_Initializing;
      _117_CDS_SS_InitializationButton_Contour_2 =
        _94_CDS_SS_InitializationButton_Contour_2;
      break;
    case SSM_st_Initialized_Initialization :
      _L4_2_Initialization_Initialized = CDS_COLOR_GREEN;
      _80_CDS_SS_InitializationButton_Contour_2 =
        _L4_2_Initialization_Initialized;
      _117_CDS_SS_InitializationButton_Contour_2 =
        _80_CDS_SS_InitializationButton_Contour_2;
      break;
    case SSM_st_Fail_Initialization :
      _L5_2_Initialization_Fail = CDS_COLOR_RED;
      CDS_SS_InitializationButton_Contour_2 = _L5_2_Initialization_Fail;
      _117_CDS_SS_InitializationButton_Contour_2 =
        CDS_SS_InitializationButton_Contour_2;
      break;
    
  }
  _L40 = _117_CDS_SS_InitializationButton_Contour_2;
  switch (Initialization_state_act_2) {
    case SSM_st_Off_Initialization :
      _L10_2_Initialization_Off = A661_FALSE;
      _109_CDS_SS_InitializationButton_Enabled_2 = _L10_2_Initialization_Off;
      _118_CDS_SS_InitializationButton_Enabled_2 =
        _109_CDS_SS_InitializationButton_Enabled_2;
      break;
    case SSM_st_Ejected_Initialization :
      _L4_2_Initialization_Ejected = A661_TRUE;
      _101_CDS_SS_InitializationButton_Enabled_2 = _L4_2_Initialization_Ejected;
      _118_CDS_SS_InitializationButton_Enabled_2 =
        _101_CDS_SS_InitializationButton_Enabled_2;
      break;
    case SSM_st_Initializing_Initialization :
      _L15_2_Initialization_Initializing = A661_FALSE;
      _93_CDS_SS_InitializationButton_Enabled_2 =
        _L15_2_Initialization_Initializing;
      _118_CDS_SS_InitializationButton_Enabled_2 =
        _93_CDS_SS_InitializationButton_Enabled_2;
      break;
    case SSM_st_Initialized_Initialization :
      _L3_2_Initialization_Initialized = A661_FALSE;
      _79_CDS_SS_InitializationButton_Enabled_2 =
        _L3_2_Initialization_Initialized;
      _118_CDS_SS_InitializationButton_Enabled_2 =
        _79_CDS_SS_InitializationButton_Enabled_2;
      break;
    case SSM_st_Fail_Initialization :
      _L4_2_Initialization_Fail = A661_TRUE;
      CDS_SS_InitializationButton_Enabled_2 = _L4_2_Initialization_Fail;
      _118_CDS_SS_InitializationButton_Enabled_2 =
        CDS_SS_InitializationButton_Enabled_2;
      break;
    
  }
  _L39 = _118_CDS_SS_InitializationButton_Enabled_2;
  Init_8_1 = 0.0;
  _L7_8_1 = Init_8_1;
  if (outC->init3) {
    _L6_8_1 = _L7_8_1;
  }
  else {
    _L6_8_1 = outC->_L4_8_1;
  }
  _120__L23_1 = SAT_Period_Update_1;
  Write_8_1 = _120__L23_1;
  _L5_8_1 = Write_8_1;
  _L24_1 = SAT_Period_Value_1;
  BM_Input_8_1 = _L24_1;
  _L2_8_1 = BM_Input_8_1;
  if (_L5_8_1) {
    outC->_L4_8_1 = _L2_8_1;
  }
  else {
    outC->_L4_8_1 = _L6_8_1;
  }
  Memorized_8_1 = outC->_L4_8_1;
  _L48_1 = Memorized_8_1;
  CDS_SI_Period_Value_1 = _L48_1;
  _L90 = CDS_SI_Period_Value_1;
  Init_7_1 = 0.0;
  _L7_7_1 = Init_7_1;
  if (outC->init3) {
    _L6_7_1 = _L7_7_1;
  }
  else {
    _L6_7_1 = outC->_L4_7_1;
  }
  _L21_1 = SAT_DeclinationAngle_Update_1;
  Write_7_1 = _L21_1;
  _L5_7_1 = Write_7_1;
  _121__L22_1 = SAT_DeclinationAngle_Value_1;
  BM_Input_7_1 = _121__L22_1;
  _L2_7_1 = BM_Input_7_1;
  if (_L5_7_1) {
    outC->_L4_7_1 = _L2_7_1;
  }
  else {
    outC->_L4_7_1 = _L6_7_1;
  }
  Memorized_7_1 = outC->_L4_7_1;
  _L47_1 = Memorized_7_1;
  CDS_SI_DeclinationAngle_Value_1 = _L47_1;
  _L89 = CDS_SI_DeclinationAngle_Value_1;
  Init_5_1 = 0.0;
  _L7_5_1 = Init_5_1;
  if (outC->init3) {
    _L6_5_1 = _L7_5_1;
  }
  else {
    _L6_5_1 = outC->_L4_5_1;
  }
  _L19_1 = SAT_Longitude_Update_1;
  Write_5_1 = _L19_1;
  _L5_5_1 = Write_5_1;
  _L20_1 = SAT_Longitude_Value_1;
  BM_Input_5_1 = _L20_1;
  _L2_5_1 = BM_Input_5_1;
  if (_L5_5_1) {
    outC->_L4_5_1 = _L2_5_1;
  }
  else {
    outC->_L4_5_1 = _L6_5_1;
  }
  Memorized_5_1 = outC->_L4_5_1;
  _L45_1 = Memorized_5_1;
  CDS_SI_Longitude_Value_1 = _L45_1;
  _L88 = CDS_SI_Longitude_Value_1;
  Init_3_1 = 0.0;
  _L7_3_1 = Init_3_1;
  if (outC->init3) {
    _L6_3_1 = _L7_3_1;
  }
  else {
    _L6_3_1 = outC->_L4_3_1;
  }
  _L17_1 = SAT_Latitude_Update_1;
  Write_3_1 = _L17_1;
  _L5_3_1 = Write_3_1;
  _L18_1 = SAT_Latitude_Value_1;
  BM_Input_3_1 = _L18_1;
  _L2_3_1 = BM_Input_3_1;
  if (_L5_3_1) {
    outC->_L4_3_1 = _L2_3_1;
  }
  else {
    outC->_L4_3_1 = _L6_3_1;
  }
  Memorized_3_1 = outC->_L4_3_1;
  _L43_1 = Memorized_3_1;
  CDS_SI_Latitude_Value_1 = _L43_1;
  _L87 = CDS_SI_Latitude_Value_1;
  Init_2_1 = 0.0;
  _L7_2_1 = Init_2_1;
  if (outC->init3) {
    _L6_2_1 = _L7_2_1;
  }
  else {
    _L6_2_1 = outC->_L4_2_1;
  }
  _122__L15_1 = SAT_Altitude_Update_1;
  Write_2_1 = _122__L15_1;
  _126__L5_2_1 = Write_2_1;
  _L16_1 = SAT_Altitude_Value_1;
  BM_Input_2_1 = _L16_1;
  _L2_2_1 = BM_Input_2_1;
  if (_126__L5_2_1) {
    outC->_L4_2_1 = _L2_2_1;
  }
  else {
    outC->_L4_2_1 = _L6_2_1;
  }
  Memorized_2_1 = outC->_L4_2_1;
  _L42_1 = Memorized_2_1;
  CDS_SI_Altitude_Value_1 = _L42_1;
  _L86 = CDS_SI_Altitude_Value_1;
  _L1_1128 = display_load_picture_btn_1;
  cam_take_picture_1 = _L1_1128;
  _L105 = cam_take_picture_1;
  switch (SM1_state_act_1) {
    case SSM_st_Validando_SM1 :
      _L19_1_SM1_Validando = A661_FALSE;
      _152_display_load_picture_btn_enabled_1 = _L19_1_SM1_Validando;
      _162_display_load_picture_btn_enabled_1 =
        _152_display_load_picture_btn_enabled_1;
      break;
    case SSM_st_Funcionando_SM1 :
      _L5_1_SM1_Funcionando = A661_TRUE;
      _140_display_load_picture_btn_enabled_1 = _L5_1_SM1_Funcionando;
      _162_display_load_picture_btn_enabled_1 =
        _140_display_load_picture_btn_enabled_1;
      break;
    case SSM_st_Erro_SM1 :
      _L6_1_SM1_Erro = A661_TRUE;
      display_load_picture_btn_enabled_1 = _L6_1_SM1_Erro;
      _162_display_load_picture_btn_enabled_1 =
        display_load_picture_btn_enabled_1;
      break;
    
  }
  _L101 = _162_display_load_picture_btn_enabled_1;
  switch (ManualOperation_state_act_1) {
    case SSM_st_Enabled_ManualOperation :
      _235_AutoVerifyButton_Enabled_1 = _L3_1_ManualOperation_Enabled;
      AutoVerifyButton_Enabled_1 = _235_AutoVerifyButton_Enabled_1;
      break;
    case SSM_st_Disabled_ManualOperation :
      _229_AutoVerifyButton_Enabled_1 = _L2_1_ManualOperation_Disabled;
      AutoVerifyButton_Enabled_1 = _229_AutoVerifyButton_Enabled_1;
      break;
    
  }
  _L185_1 = AutoVerifyButton_Enabled_1;
  _L187_1 = A661_TRUE;
  _L188_1 = A661_FALSE;
  if (_L185_1) {
    _L186_1 = _L187_1;
  }
  else {
    _L186_1 = _L188_1;
  }
  CDS_AutoVerifyButton_Enabled_1 = _L186_1;
  _L142 = CDS_AutoVerifyButton_Enabled_1;
  if (outC->init3) {
    AutoVerifyUS14_state_sel_1 = SSM_st_NaoAtivo_AutoVerifyUS14;
  }
  else {
    AutoVerifyUS14_state_sel_1 = outC->AutoVerifyUS14_state_nxt_1;
  }
  switch (AutoVerifyUS14_state_sel_1) {
    case SSM_st_Ativo_AutoVerifyUS14 :
      _391_AutoVerifyUS14_state_act_1 = SSM_st_Ativo_AutoVerifyUS14;
      AutoVerifyUS14_state_act_1 = _391_AutoVerifyUS14_state_act_1;
      break;
    case SSM_st_NaoAtivo_AutoVerifyUS14 :
      br_1_guard_1_AutoVerifyUS14_NaoAtivo = CDS_Auto_Verify_1;
      if (br_1_guard_1_AutoVerifyUS14_NaoAtivo) {
        _389_AutoVerifyUS14_state_act_1 = SSM_st_Ativo_AutoVerifyUS14;
      }
      else {
        _389_AutoVerifyUS14_state_act_1 = SSM_st_NaoAtivo_AutoVerifyUS14;
      }
      AutoVerifyUS14_state_act_1 = _389_AutoVerifyUS14_state_act_1;
      break;
    
  }
  switch (AutoVerifyUS14_state_act_1) {
    case SSM_st_Ativo_AutoVerifyUS14 :
      _L40_1_AutoVerifyUS14_Ativo = CDS_Auto_Verify_1;
      _406_SAT_Fix_Equipments_1 = _L40_1_AutoVerifyUS14_Ativo;
      _435_SAT_Fix_Equipments_1 = _406_SAT_Fix_Equipments_1;
      break;
    case SSM_st_NaoAtivo_AutoVerifyUS14 :
      _L10_1_AutoVerifyUS14_NaoAtivo = kcg_false;
      SAT_Fix_Equipments_1 = _L10_1_AutoVerifyUS14_NaoAtivo;
      _435_SAT_Fix_Equipments_1 = SAT_Fix_Equipments_1;
      break;
    
  }
  _L141 = _435_SAT_Fix_Equipments_1;
  switch (AutoVerifyUS14_state_act_1) {
    case SSM_st_Ativo_AutoVerifyUS14 :
      _L42_1_AutoVerifyUS14_Ativo = kcg_false;
      _405_SAT_Auto_Verify_1 = _L42_1_AutoVerifyUS14_Ativo;
      _436_SAT_Auto_Verify_1 = _405_SAT_Auto_Verify_1;
      break;
    case SSM_st_NaoAtivo_AutoVerifyUS14 :
      _L11_1_AutoVerifyUS14_NaoAtivo = CDS_Auto_Verify_1;
      SAT_Auto_Verify_1 = _L11_1_AutoVerifyUS14_NaoAtivo;
      _436_SAT_Auto_Verify_1 = SAT_Auto_Verify_1;
      break;
    
  }
  _L140 = _436_SAT_Auto_Verify_1;
  switch (AutoVerifyUS14_state_act_1) {
    case SSM_st_Ativo_AutoVerifyUS14 :
      _L14_1_AutoVerifyUS14_Ativo = Camera_Fail_1;
      _L15_1_AutoVerifyUS14_Ativo = Gyroscope_fail_1;
      _L17_1_AutoVerifyUS14_Ativo = _L14_1_AutoVerifyUS14_Ativo |
        _L15_1_AutoVerifyUS14_Ativo;
      break;
    case SSM_st_NaoAtivo_AutoVerifyUS14 :
      _L6_1_AutoVerifyUS14_NaoAtivo = A661_FALSE;
      CDS_Auto_Verify_Test_1 = _L6_1_AutoVerifyUS14_NaoAtivo;
      break;
    
  }
  switch (StateHorizonSensor_state_act_1) {
    case SSM_st_Off_StateHorizonSensor :
      _L6_1_StateHorizonSensor_Off = kcg_false;
      _295_HorizonSensorButton_Fail_1 = _L6_1_StateHorizonSensor_Off;
      HorizonSensorButton_Fail_1 = _295_HorizonSensorButton_Fail_1;
      break;
    case SSM_st_TurningOn_StateHorizonSensor :
      _L18_1_StateHorizonSensor_TurningOn = kcg_false;
      _287_HorizonSensorButton_Fail_1 = _L18_1_StateHorizonSensor_TurningOn;
      HorizonSensorButton_Fail_1 = _287_HorizonSensorButton_Fail_1;
      break;
    case SSM_st_On_StateHorizonSensor :
      _L9_1_StateHorizonSensor_On = kcg_false;
      _279_HorizonSensorButton_Fail_1 = _L9_1_StateHorizonSensor_On;
      HorizonSensorButton_Fail_1 = _279_HorizonSensorButton_Fail_1;
      break;
    case SSM_st_TurningOff_StateHorizonSensor :
      _L31_1_StateHorizonSensor_TurningOff = kcg_false;
      _271_HorizonSensorButton_Fail_1 = _L31_1_StateHorizonSensor_TurningOff;
      HorizonSensorButton_Fail_1 = _271_HorizonSensorButton_Fail_1;
      break;
    case SSM_st_Fail_StateHorizonSensor :
      _L18_1_StateHorizonSensor_Fail = kcg_true;
      _265_HorizonSensorButton_Fail_1 = _L18_1_StateHorizonSensor_Fail;
      HorizonSensorButton_Fail_1 = _265_HorizonSensorButton_Fail_1;
      break;
    
  }
  switch (AutoVerifyUS14_state_act_1) {
    case SSM_st_Ativo_AutoVerifyUS14 :
      _L16_1_AutoVerifyUS14_Ativo = HorizonSensorButton_Fail_1;
      _L18_1_AutoVerifyUS14_Ativo = _L17_1_AutoVerifyUS14_Ativo |
        _L16_1_AutoVerifyUS14_Ativo;
      _L21_1_AutoVerifyUS14_Ativo = A661_FALSE;
      _L20_1_AutoVerifyUS14_Ativo = A661_TRUE;
      if (_L18_1_AutoVerifyUS14_Ativo) {
        _L19_1_AutoVerifyUS14_Ativo = _L21_1_AutoVerifyUS14_Ativo;
      }
      else {
        _L19_1_AutoVerifyUS14_Ativo = _L20_1_AutoVerifyUS14_Ativo;
      }
      _404_CDS_Auto_Verify_Test_1 = _L19_1_AutoVerifyUS14_Ativo;
      _437_CDS_Auto_Verify_Test_1 = _404_CDS_Auto_Verify_Test_1;
      break;
    case SSM_st_NaoAtivo_AutoVerifyUS14 :
      _437_CDS_Auto_Verify_Test_1 = CDS_Auto_Verify_Test_1;
      break;
    
  }
  _L132 = _437_CDS_Auto_Verify_Test_1;
  switch (AutoVerifyUS14_state_act_1) {
    case SSM_st_Ativo_AutoVerifyUS14 :
      kcg_copy_String_ES(
        &_L37_1_AutoVerifyUS14_Ativo,
        (String_ES *) &CDS_TEXT_AUTOVERIFY_FAIL);
      kcg_copy_String_ES(
        &_L38_1_AutoVerifyUS14_Ativo,
        (String_ES *) &CDS_TEXT_AUTOVERIFY_CORRECT);
      if (_L18_1_AutoVerifyUS14_Ativo) {
        kcg_copy_String_ES(
          &_L34_1_AutoVerifyUS14_Ativo,
          &_L37_1_AutoVerifyUS14_Ativo);
      }
      else {
        kcg_copy_String_ES(
          &_L34_1_AutoVerifyUS14_Ativo,
          &_L38_1_AutoVerifyUS14_Ativo);
      }
      kcg_copy_String_ES(
        &_403_CDS_Auto_Verify_Label_1,
        &_L34_1_AutoVerifyUS14_Ativo);
      kcg_copy_String_ES(
        &_438_CDS_Auto_Verify_Label_1,
        &_403_CDS_Auto_Verify_Label_1);
      break;
    case SSM_st_NaoAtivo_AutoVerifyUS14 :
      kcg_copy_String_ES(
        &_L8_1_AutoVerifyUS14_NaoAtivo,
        (String_ES *) &CDS_TEXT_AUTOVERIFY_CORRECT);
      kcg_copy_String_ES(
        &CDS_Auto_Verify_Label_1,
        &_L8_1_AutoVerifyUS14_NaoAtivo);
      kcg_copy_String_ES(
        &_438_CDS_Auto_Verify_Label_1,
        &CDS_Auto_Verify_Label_1);
      break;
    
  }
  kcg_copy_String_ES(&_L127, &_438_CDS_Auto_Verify_Label_1);
  switch (AutoVerifyUS14_state_act_1) {
    case SSM_st_Ativo_AutoVerifyUS14 :
      _L33_1_AutoVerifyUS14_Ativo = CDS_COLOR_RED;
      _L36_1_AutoVerifyUS14_Ativo = CDS_COLOR_GREEN;
      if (_L18_1_AutoVerifyUS14_Ativo) {
        _L26_1_AutoVerifyUS14_Ativo = _L33_1_AutoVerifyUS14_Ativo;
      }
      else {
        _L26_1_AutoVerifyUS14_Ativo = _L36_1_AutoVerifyUS14_Ativo;
      }
      _402_CDS_Auto_Verify_Contorno_1 = _L26_1_AutoVerifyUS14_Ativo;
      _439_CDS_Auto_Verify_Contorno_1 = _402_CDS_Auto_Verify_Contorno_1;
      break;
    case SSM_st_NaoAtivo_AutoVerifyUS14 :
      _L4_1_AutoVerifyUS14_NaoAtivo = CDS_COLOR_GREEN;
      CDS_Auto_Verify_Contorno_1 = _L4_1_AutoVerifyUS14_NaoAtivo;
      _439_CDS_Auto_Verify_Contorno_1 = CDS_Auto_Verify_Contorno_1;
      break;
    
  }
  _L126 = _439_CDS_Auto_Verify_Contorno_1;
  _L160_1 = Toggle_Camera_1;
  SAT_CameraState_Toggle_1 = _L160_1;
  _L124 = SAT_CameraState_Toggle_1;
  _L166_1 = Toggle_Propellers_1;
  SAT_PropellersState_Toggle_1 = _L166_1;
  _L122 = SAT_PropellersState_Toggle_1;
  _L164_1 = Toggle_HorizonSensor_1;
  SAT_HorizonSensorState_Toggle_1 = _L164_1;
  _L120 = SAT_HorizonSensorState_Toggle_1;
  _L162_1 = Toggle_Gyroscope_1;
  SAT_GyroscopeState_Toggle_1 = _L162_1;
  _L118 = SAT_GyroscopeState_Toggle_1;
  switch (StateCamera_state_act_1) {
    case SSM_st_Off_StateCamera :
      kcg_copy_String_ES(
        &_L2_1_StateCamera_Off,
        (String_ES *) &CDS_TEXT_ES_TURNON);
      kcg_copy_String_ES(
        &_382_CDS_ES_CameraButton_Label_1,
        &_L2_1_StateCamera_Off);
      kcg_copy_String_ES(
        &_440_CDS_ES_CameraButton_Label_1,
        &_382_CDS_ES_CameraButton_Label_1);
      break;
    case SSM_st_TurningOn_StateCamera :
      kcg_copy_String_ES(
        &_L14_1_StateCamera_TurningOn,
        (String_ES *) &CDS_TEXT_ES_TURNINGON);
      kcg_copy_String_ES(
        &_374_CDS_ES_CameraButton_Label_1,
        &_L14_1_StateCamera_TurningOn);
      kcg_copy_String_ES(
        &_440_CDS_ES_CameraButton_Label_1,
        &_374_CDS_ES_CameraButton_Label_1);
      break;
    case SSM_st_On_StateCamera :
      kcg_copy_String_ES(
        &_L5_1_StateCamera_On,
        (String_ES *) &CDS_TEXT_ES_TURNOFF);
      kcg_copy_String_ES(
        &_366_CDS_ES_CameraButton_Label_1,
        &_L5_1_StateCamera_On);
      kcg_copy_String_ES(
        &_440_CDS_ES_CameraButton_Label_1,
        &_366_CDS_ES_CameraButton_Label_1);
      break;
    case SSM_st_TurningOff_StateCamera :
      kcg_copy_String_ES(
        &_L27_1_StateCamera_TurningOff,
        (String_ES *) &CDS_TEXT_ES_TURNINGOFF);
      kcg_copy_String_ES(
        &_358_CDS_ES_CameraButton_Label_1,
        &_L27_1_StateCamera_TurningOff);
      kcg_copy_String_ES(
        &_440_CDS_ES_CameraButton_Label_1,
        &_358_CDS_ES_CameraButton_Label_1);
      break;
    case SSM_st_Fail_StateCamera :
      kcg_copy_String_ES(
        &_L7_1_StateCamera_Fail,
        (String_ES *) &CDS_TEXT_ES_FAIL);
      kcg_copy_String_ES(&CDS_ES_CameraButton_Label_1, &_L7_1_StateCamera_Fail);
      kcg_copy_String_ES(
        &_440_CDS_ES_CameraButton_Label_1,
        &CDS_ES_CameraButton_Label_1);
      break;
    
  }
  kcg_copy_String_ES(&_L117, &_440_CDS_ES_CameraButton_Label_1);
  switch (StateCamera_state_act_1) {
    case SSM_st_Off_StateCamera :
      _L1_1_StateCamera_Off = CDS_COLOR_YELLOW;
      _381_CDS_ES_CameraButton_Contour_1 = _L1_1_StateCamera_Off;
      _441_CDS_ES_CameraButton_Contour_1 = _381_CDS_ES_CameraButton_Contour_1;
      break;
    case SSM_st_TurningOn_StateCamera :
      _L15_1_StateCamera_TurningOn = CDS_COLOR_YELLOW;
      _373_CDS_ES_CameraButton_Contour_1 = _L15_1_StateCamera_TurningOn;
      _441_CDS_ES_CameraButton_Contour_1 = _373_CDS_ES_CameraButton_Contour_1;
      break;
    case SSM_st_On_StateCamera :
      _L4_1_StateCamera_On = CDS_COLOR_GREEN;
      _365_CDS_ES_CameraButton_Contour_1 = _L4_1_StateCamera_On;
      _441_CDS_ES_CameraButton_Contour_1 = _365_CDS_ES_CameraButton_Contour_1;
      break;
    case SSM_st_TurningOff_StateCamera :
      _L26_1_StateCamera_TurningOff = CDS_COLOR_GREEN;
      _357_CDS_ES_CameraButton_Contour_1 = _L26_1_StateCamera_TurningOff;
      _441_CDS_ES_CameraButton_Contour_1 = _357_CDS_ES_CameraButton_Contour_1;
      break;
    case SSM_st_Fail_StateCamera :
      _L6_1_StateCamera_Fail = CDS_COLOR_RED;
      CDS_ES_CameraButton_Contour_1 = _L6_1_StateCamera_Fail;
      _441_CDS_ES_CameraButton_Contour_1 = CDS_ES_CameraButton_Contour_1;
      break;
    
  }
  _L116 = _441_CDS_ES_CameraButton_Contour_1;
  switch (StateCamera_state_act_1) {
    case SSM_st_Off_StateCamera :
      _L7_1_StateCamera_Off = kcg_false;
      _385_CameraButton_Fail_1 = _L7_1_StateCamera_Off;
      CameraButton_Fail_1 = _385_CameraButton_Fail_1;
      break;
    case SSM_st_TurningOn_StateCamera :
      _L19_1_StateCamera_TurningOn = kcg_false;
      _377_CameraButton_Fail_1 = _L19_1_StateCamera_TurningOn;
      CameraButton_Fail_1 = _377_CameraButton_Fail_1;
      break;
    case SSM_st_On_StateCamera :
      _L9_1_StateCamera_On = kcg_false;
      _369_CameraButton_Fail_1 = _L9_1_StateCamera_On;
      CameraButton_Fail_1 = _369_CameraButton_Fail_1;
      break;
    case SSM_st_TurningOff_StateCamera :
      _L31_1_StateCamera_TurningOff = kcg_false;
      _361_CameraButton_Fail_1 = _L31_1_StateCamera_TurningOff;
      CameraButton_Fail_1 = _361_CameraButton_Fail_1;
      break;
    case SSM_st_Fail_StateCamera :
      _L11_1_StateCamera_Fail = kcg_true;
      _355_CameraButton_Fail_1 = _L11_1_StateCamera_Fail;
      CameraButton_Fail_1 = _355_CameraButton_Fail_1;
      break;
    
  }
  _L176_1 = CameraButton_Fail_1;
  _L184_1 = !_L176_1;
  _L112_1 = CameraButton_Enabled_1;
  switch (StateCamera_state_act_1) {
    case SSM_st_Off_StateCamera :
      _L4_1_StateCamera_Off = kcg_false;
      _383_Camera_Toggling_1 = _L4_1_StateCamera_Off;
      Camera_Toggling_1 = _383_Camera_Toggling_1;
      break;
    case SSM_st_TurningOn_StateCamera :
      _L16_1_StateCamera_TurningOn = kcg_true;
      _375_Camera_Toggling_1 = _L16_1_StateCamera_TurningOn;
      Camera_Toggling_1 = _375_Camera_Toggling_1;
      break;
    case SSM_st_On_StateCamera :
      _L6_1_StateCamera_On = kcg_false;
      _367_Camera_Toggling_1 = _L6_1_StateCamera_On;
      Camera_Toggling_1 = _367_Camera_Toggling_1;
      break;
    case SSM_st_TurningOff_StateCamera :
      _L28_1_StateCamera_TurningOff = kcg_true;
      _359_Camera_Toggling_1 = _L28_1_StateCamera_TurningOff;
      Camera_Toggling_1 = _359_Camera_Toggling_1;
      break;
    case SSM_st_Fail_StateCamera :
      _L1_1_StateCamera_Fail = kcg_false;
      _353_Camera_Toggling_1 = _L1_1_StateCamera_Fail;
      Camera_Toggling_1 = _353_Camera_Toggling_1;
      break;
    
  }
  _L149_1 = Camera_Toggling_1;
  _L147_1 = !_L149_1;
  _L148_1 = _L112_1 & _L147_1;
  _L177_1 = _L184_1 & _L148_1;
  _L136_1 = A661_TRUE;
  _L138_1 = A661_FALSE;
  if (_L177_1) {
    _L137_1 = _L136_1;
  }
  else {
    _L137_1 = _L138_1;
  }
  CDS_ES_CameraButton_Enabled_1 = _L137_1;
  _L115 = CDS_ES_CameraButton_Enabled_1;
  switch (StatePropellers_state_act_1) {
    case SSM_st_Off_StatePropellers :
      kcg_copy_String_ES(
        &_L3_1_StatePropellers_Off,
        (String_ES *) &CDS_TEXT_ES_TURNON);
      kcg_copy_String_ES(
        &_330_CDS_ES_PropellersButton_Label_1,
        &_L3_1_StatePropellers_Off);
      kcg_copy_String_ES(
        &_442_CDS_ES_PropellersButton_Label_1,
        &_330_CDS_ES_PropellersButton_Label_1);
      break;
    case SSM_st_TurningOn_StatePropellers :
      kcg_copy_String_ES(
        &_L14_1_StatePropellers_TurningOn,
        (String_ES *) &CDS_TEXT_ES_TURNINGON);
      kcg_copy_String_ES(
        &_323_CDS_ES_PropellersButton_Label_1,
        &_L14_1_StatePropellers_TurningOn);
      kcg_copy_String_ES(
        &_442_CDS_ES_PropellersButton_Label_1,
        &_323_CDS_ES_PropellersButton_Label_1);
      break;
    case SSM_st_On_StatePropellers :
      kcg_copy_String_ES(
        &_L4_1_StatePropellers_On,
        (String_ES *) &CDS_TEXT_ES_TURNOFF);
      kcg_copy_String_ES(
        &_316_CDS_ES_PropellersButton_Label_1,
        &_L4_1_StatePropellers_On);
      kcg_copy_String_ES(
        &_442_CDS_ES_PropellersButton_Label_1,
        &_316_CDS_ES_PropellersButton_Label_1);
      break;
    case SSM_st_TurningOff_StatePropellers :
      kcg_copy_String_ES(
        &_L30_1_StatePropellers_TurningOff,
        (String_ES *) &CDS_TEXT_ES_TURNINGOFF);
      kcg_copy_String_ES(
        &CDS_ES_PropellersButton_Label_1,
        &_L30_1_StatePropellers_TurningOff);
      kcg_copy_String_ES(
        &_442_CDS_ES_PropellersButton_Label_1,
        &CDS_ES_PropellersButton_Label_1);
      break;
    
  }
  kcg_copy_String_ES(&_L114, &_442_CDS_ES_PropellersButton_Label_1);
  switch (StatePropellers_state_act_1) {
    case SSM_st_Off_StatePropellers :
      _L1_1_StatePropellers_Off = CDS_COLOR_YELLOW;
      _329_CDS_ES_PropellersButton_Contour_1 = _L1_1_StatePropellers_Off;
      _443_CDS_ES_PropellersButton_Contour_1 =
        _329_CDS_ES_PropellersButton_Contour_1;
      break;
    case SSM_st_TurningOn_StatePropellers :
      _L15_1_StatePropellers_TurningOn = CDS_COLOR_YELLOW;
      _322_CDS_ES_PropellersButton_Contour_1 = _L15_1_StatePropellers_TurningOn;
      _443_CDS_ES_PropellersButton_Contour_1 =
        _322_CDS_ES_PropellersButton_Contour_1;
      break;
    case SSM_st_On_StatePropellers :
      _L5_1_StatePropellers_On = CDS_COLOR_GREEN;
      _315_CDS_ES_PropellersButton_Contour_1 = _L5_1_StatePropellers_On;
      _443_CDS_ES_PropellersButton_Contour_1 =
        _315_CDS_ES_PropellersButton_Contour_1;
      break;
    case SSM_st_TurningOff_StatePropellers :
      _L31_1_StatePropellers_TurningOff = CDS_COLOR_GREEN;
      CDS_ES_PropellersButton_Contour_1 = _L31_1_StatePropellers_TurningOff;
      _443_CDS_ES_PropellersButton_Contour_1 =
        CDS_ES_PropellersButton_Contour_1;
      break;
    
  }
  _L113 = _443_CDS_ES_PropellersButton_Contour_1;
  _L107_1 = PropellersButton_Enabled_1;
  switch (StatePropellers_state_act_1) {
    case SSM_st_Off_StatePropellers :
      _L5_1_StatePropellers_Off = kcg_false;
      _331_Propellers_Toggling_1 = _L5_1_StatePropellers_Off;
      Propellers_Toggling_1 = _331_Propellers_Toggling_1;
      break;
    case SSM_st_TurningOn_StatePropellers :
      _L16_1_StatePropellers_TurningOn = kcg_true;
      _324_Propellers_Toggling_1 = _L16_1_StatePropellers_TurningOn;
      Propellers_Toggling_1 = _324_Propellers_Toggling_1;
      break;
    case SSM_st_On_StatePropellers :
      _L6_1_StatePropellers_On = kcg_false;
      _317_Propellers_Toggling_1 = _L6_1_StatePropellers_On;
      Propellers_Toggling_1 = _317_Propellers_Toggling_1;
      break;
    case SSM_st_TurningOff_StatePropellers :
      _L32_1_StatePropellers_TurningOff = kcg_true;
      _312_Propellers_Toggling_1 = _L32_1_StatePropellers_TurningOff;
      Propellers_Toggling_1 = _312_Propellers_Toggling_1;
      break;
    
  }
  _L152_1 = Propellers_Toggling_1;
  _L143_1 = !_L152_1;
  _L144_1 = _L107_1 & _L143_1;
  _L131_1 = A661_TRUE;
  _L132_1 = A661_FALSE;
  if (_L144_1) {
    _L130_1 = _L131_1;
  }
  else {
    _L130_1 = _L132_1;
  }
  CDS_ES_PropellersButton_Enabled_1 = _L130_1;
  _L112 = CDS_ES_PropellersButton_Enabled_1;
  switch (StateHorizonSensor_state_act_1) {
    case SSM_st_Off_StateHorizonSensor :
      kcg_copy_String_ES(
        &_L2_1_StateHorizonSensor_Off,
        (String_ES *) &CDS_TEXT_ES_TURNON);
      kcg_copy_String_ES(
        &_292_CDS_ES_HorizonSensorButton_Label_1,
        &_L2_1_StateHorizonSensor_Off);
      kcg_copy_String_ES(
        &_444_CDS_ES_HorizonSensorButton_Label_1,
        &_292_CDS_ES_HorizonSensorButton_Label_1);
      break;
    case SSM_st_TurningOn_StateHorizonSensor :
      kcg_copy_String_ES(
        &_L13_1_StateHorizonSensor_TurningOn,
        (String_ES *) &CDS_TEXT_ES_TURNINGON);
      kcg_copy_String_ES(
        &_284_CDS_ES_HorizonSensorButton_Label_1,
        &_L13_1_StateHorizonSensor_TurningOn);
      kcg_copy_String_ES(
        &_444_CDS_ES_HorizonSensorButton_Label_1,
        &_284_CDS_ES_HorizonSensorButton_Label_1);
      break;
    case SSM_st_On_StateHorizonSensor :
      kcg_copy_String_ES(
        &_L4_1_StateHorizonSensor_On,
        (String_ES *) &CDS_TEXT_ES_TURNOFF);
      kcg_copy_String_ES(
        &_276_CDS_ES_HorizonSensorButton_Label_1,
        &_L4_1_StateHorizonSensor_On);
      kcg_copy_String_ES(
        &_444_CDS_ES_HorizonSensorButton_Label_1,
        &_276_CDS_ES_HorizonSensorButton_Label_1);
      break;
    case SSM_st_TurningOff_StateHorizonSensor :
      kcg_copy_String_ES(
        &_L26_1_StateHorizonSensor_TurningOff,
        (String_ES *) &CDS_TEXT_ES_TURNINGOFF);
      kcg_copy_String_ES(
        &_268_CDS_ES_HorizonSensorButton_Label_1,
        &_L26_1_StateHorizonSensor_TurningOff);
      kcg_copy_String_ES(
        &_444_CDS_ES_HorizonSensorButton_Label_1,
        &_268_CDS_ES_HorizonSensorButton_Label_1);
      break;
    case SSM_st_Fail_StateHorizonSensor :
      kcg_copy_String_ES(
        &_L7_1_StateHorizonSensor_Fail,
        (String_ES *) &CDS_TEXT_ES_FAIL);
      kcg_copy_String_ES(
        &CDS_ES_HorizonSensorButton_Label_1,
        &_L7_1_StateHorizonSensor_Fail);
      kcg_copy_String_ES(
        &_444_CDS_ES_HorizonSensorButton_Label_1,
        &CDS_ES_HorizonSensorButton_Label_1);
      break;
    
  }
  kcg_copy_String_ES(&_L111, &_444_CDS_ES_HorizonSensorButton_Label_1);
  switch (StateHorizonSensor_state_act_1) {
    case SSM_st_Off_StateHorizonSensor :
      _L1_1_StateHorizonSensor_Off = CDS_COLOR_YELLOW;
      _291_CDS_ES_HorizonSensorButton_Contour_1 = _L1_1_StateHorizonSensor_Off;
      _445_CDS_ES_HorizonSensorButton_Contour_1 =
        _291_CDS_ES_HorizonSensorButton_Contour_1;
      break;
    case SSM_st_TurningOn_StateHorizonSensor :
      _L14_1_StateHorizonSensor_TurningOn = CDS_COLOR_YELLOW;
      _283_CDS_ES_HorizonSensorButton_Contour_1 =
        _L14_1_StateHorizonSensor_TurningOn;
      _445_CDS_ES_HorizonSensorButton_Contour_1 =
        _283_CDS_ES_HorizonSensorButton_Contour_1;
      break;
    case SSM_st_On_StateHorizonSensor :
      _L3_1_StateHorizonSensor_On = CDS_COLOR_GREEN;
      _275_CDS_ES_HorizonSensorButton_Contour_1 = _L3_1_StateHorizonSensor_On;
      _445_CDS_ES_HorizonSensorButton_Contour_1 =
        _275_CDS_ES_HorizonSensorButton_Contour_1;
      break;
    case SSM_st_TurningOff_StateHorizonSensor :
      _L27_1_StateHorizonSensor_TurningOff = CDS_COLOR_GREEN;
      _267_CDS_ES_HorizonSensorButton_Contour_1 =
        _L27_1_StateHorizonSensor_TurningOff;
      _445_CDS_ES_HorizonSensorButton_Contour_1 =
        _267_CDS_ES_HorizonSensorButton_Contour_1;
      break;
    case SSM_st_Fail_StateHorizonSensor :
      _L6_1_StateHorizonSensor_Fail = CDS_COLOR_RED;
      CDS_ES_HorizonSensorButton_Contour_1 = _L6_1_StateHorizonSensor_Fail;
      _445_CDS_ES_HorizonSensorButton_Contour_1 =
        CDS_ES_HorizonSensorButton_Contour_1;
      break;
    
  }
  _L110 = _445_CDS_ES_HorizonSensorButton_Contour_1;
  _L174_1 = HorizonSensorButton_Fail_1;
  _L183_1 = !_L174_1;
  _L102_1 = HorizonSensorButton_Enabled_1;
  switch (StateHorizonSensor_state_act_1) {
    case SSM_st_Off_StateHorizonSensor :
      _L3_1_StateHorizonSensor_Off = kcg_false;
      _293_HorizonSensor_Toggling_1 = _L3_1_StateHorizonSensor_Off;
      HorizonSensor_Toggling_1 = _293_HorizonSensor_Toggling_1;
      break;
    case SSM_st_TurningOn_StateHorizonSensor :
      _L15_1_StateHorizonSensor_TurningOn = kcg_true;
      _285_HorizonSensor_Toggling_1 = _L15_1_StateHorizonSensor_TurningOn;
      HorizonSensor_Toggling_1 = _285_HorizonSensor_Toggling_1;
      break;
    case SSM_st_On_StateHorizonSensor :
      _L5_1_StateHorizonSensor_On = kcg_false;
      _277_HorizonSensor_Toggling_1 = _L5_1_StateHorizonSensor_On;
      HorizonSensor_Toggling_1 = _277_HorizonSensor_Toggling_1;
      break;
    case SSM_st_TurningOff_StateHorizonSensor :
      _L28_1_StateHorizonSensor_TurningOff = kcg_true;
      _269_HorizonSensor_Toggling_1 = _L28_1_StateHorizonSensor_TurningOff;
      HorizonSensor_Toggling_1 = _269_HorizonSensor_Toggling_1;
      break;
    case SSM_st_Fail_StateHorizonSensor :
      _L1_1_StateHorizonSensor_Fail = kcg_false;
      _263_HorizonSensor_Toggling_1 = _L1_1_StateHorizonSensor_Fail;
      HorizonSensor_Toggling_1 = _263_HorizonSensor_Toggling_1;
      break;
    
  }
  _L151_1 = HorizonSensor_Toggling_1;
  _L141_1 = !_L151_1;
  _L142_1 = _L102_1 & _L141_1;
  _L175_1 = _L183_1 & _L142_1;
  _L127_1 = A661_TRUE;
  _L129_1 = A661_FALSE;
  if (_L175_1) {
    _L128_1 = _L127_1;
  }
  else {
    _L128_1 = _L129_1;
  }
  CDS_ES_HorizonSensorButton_Enabled_1 = _L128_1;
  _L109 = CDS_ES_HorizonSensorButton_Enabled_1;
  switch (StateGyroscope_state_act_1) {
    case SSM_st_Off_StateGyroscope :
      kcg_copy_String_ES(
        &_L3_1_StateGyroscope_Off,
        (String_ES *) &CDS_TEXT_ES_TURNON);
      kcg_copy_String_ES(
        &_213_CDS_ES_GyroscopeButton_Label_1,
        &_L3_1_StateGyroscope_Off);
      kcg_copy_String_ES(
        &_446_CDS_ES_GyroscopeButton_Label_1,
        &_213_CDS_ES_GyroscopeButton_Label_1);
      break;
    case SSM_st_On_StateGyroscope :
      kcg_copy_String_ES(
        &_L3_1_StateGyroscope_On,
        (String_ES *) &CDS_TEXT_ES_TURNOFF);
      kcg_copy_String_ES(
        &_205_CDS_ES_GyroscopeButton_Label_1,
        &_L3_1_StateGyroscope_On);
      kcg_copy_String_ES(
        &_446_CDS_ES_GyroscopeButton_Label_1,
        &_205_CDS_ES_GyroscopeButton_Label_1);
      break;
    case SSM_st_TurningOff_StateGyroscope :
      kcg_copy_String_ES(
        &_L26_1_StateGyroscope_TurningOff,
        (String_ES *) &CDS_TEXT_ES_TURNINGOFF);
      kcg_copy_String_ES(
        &_197_CDS_ES_GyroscopeButton_Label_1,
        &_L26_1_StateGyroscope_TurningOff);
      kcg_copy_String_ES(
        &_446_CDS_ES_GyroscopeButton_Label_1,
        &_197_CDS_ES_GyroscopeButton_Label_1);
      break;
    case SSM_st_Fail_StateGyroscope :
      kcg_copy_String_ES(
        &_L7_1_StateGyroscope_Fail,
        (String_ES *) &CDS_TEXT_ES_FAIL);
      kcg_copy_String_ES(
        &_189_CDS_ES_GyroscopeButton_Label_1,
        &_L7_1_StateGyroscope_Fail);
      kcg_copy_String_ES(
        &_446_CDS_ES_GyroscopeButton_Label_1,
        &_189_CDS_ES_GyroscopeButton_Label_1);
      break;
    case SSM_st_TurningOn_StateGyroscope :
      kcg_copy_String_ES(
        &_L15_1_StateGyroscope_TurningOn,
        (String_ES *) &CDS_TEXT_ES_TURNINGON);
      kcg_copy_String_ES(
        &CDS_ES_GyroscopeButton_Label_1,
        &_L15_1_StateGyroscope_TurningOn);
      kcg_copy_String_ES(
        &_446_CDS_ES_GyroscopeButton_Label_1,
        &CDS_ES_GyroscopeButton_Label_1);
      break;
    
  }
  kcg_copy_String_ES(&_L108, &_446_CDS_ES_GyroscopeButton_Label_1);
  switch (StateGyroscope_state_act_1) {
    case SSM_st_Off_StateGyroscope :
      _L1_1_StateGyroscope_Off = CDS_COLOR_YELLOW;
      _212_CDS_ES_GyroscopeButton_Contour_1 = _L1_1_StateGyroscope_Off;
      _447_CDS_ES_GyroscopeButton_Contour_1 =
        _212_CDS_ES_GyroscopeButton_Contour_1;
      break;
    case SSM_st_On_StateGyroscope :
      _L4_1_StateGyroscope_On = CDS_COLOR_GREEN;
      _204_CDS_ES_GyroscopeButton_Contour_1 = _L4_1_StateGyroscope_On;
      _447_CDS_ES_GyroscopeButton_Contour_1 =
        _204_CDS_ES_GyroscopeButton_Contour_1;
      break;
    case SSM_st_TurningOff_StateGyroscope :
      _L25_1_StateGyroscope_TurningOff = CDS_COLOR_GREEN;
      _196_CDS_ES_GyroscopeButton_Contour_1 = _L25_1_StateGyroscope_TurningOff;
      _447_CDS_ES_GyroscopeButton_Contour_1 =
        _196_CDS_ES_GyroscopeButton_Contour_1;
      break;
    case SSM_st_Fail_StateGyroscope :
      _L6_1_StateGyroscope_Fail = CDS_COLOR_RED;
      _188_CDS_ES_GyroscopeButton_Contour_1 = _L6_1_StateGyroscope_Fail;
      _447_CDS_ES_GyroscopeButton_Contour_1 =
        _188_CDS_ES_GyroscopeButton_Contour_1;
      break;
    case SSM_st_TurningOn_StateGyroscope :
      _L14_1_StateGyroscope_TurningOn = CDS_COLOR_YELLOW;
      CDS_ES_GyroscopeButton_Contour_1 = _L14_1_StateGyroscope_TurningOn;
      _447_CDS_ES_GyroscopeButton_Contour_1 = CDS_ES_GyroscopeButton_Contour_1;
      break;
    
  }
  _L107 = _447_CDS_ES_GyroscopeButton_Contour_1;
  outC->SAT_Fix_Equipments = _L141;
  outC->CDS_AutoVerifyButton_Enabled = _L142;
  outC->SAT_Auto_Verify = _L140;
  outC->CDS_Auto_VerifyButton_Test_Enable = _L132;
  kcg_copy_String_ES(&outC->CDS_Auto_Verify_Label, &_L127);
  outC->CDS_Auto_Verify_Contorno = _L126;
  _L72 = CDS_TEXT_ES_STR_SIZE;
  outC->CDS_ES_String_Size = _L72;
  switch (StateGyroscope_state_act_1) {
    case SSM_st_Off_StateGyroscope :
      _L9_1_StateGyroscope_Off = kcg_false;
      _216_GyroscopeButton_Fail_1 = _L9_1_StateGyroscope_Off;
      GyroscopeButton_Fail_1 = _216_GyroscopeButton_Fail_1;
      break;
    case SSM_st_On_StateGyroscope :
      _L8_1_StateGyroscope_On = kcg_false;
      _208_GyroscopeButton_Fail_1 = _L8_1_StateGyroscope_On;
      GyroscopeButton_Fail_1 = _208_GyroscopeButton_Fail_1;
      break;
    case SSM_st_TurningOff_StateGyroscope :
      _L30_1_StateGyroscope_TurningOff = kcg_false;
      _200_GyroscopeButton_Fail_1 = _L30_1_StateGyroscope_TurningOff;
      GyroscopeButton_Fail_1 = _200_GyroscopeButton_Fail_1;
      break;
    case SSM_st_Fail_StateGyroscope :
      _L10_1_StateGyroscope_Fail = kcg_true;
      _192_GyroscopeButton_Fail_1 = _L10_1_StateGyroscope_Fail;
      GyroscopeButton_Fail_1 = _192_GyroscopeButton_Fail_1;
      break;
    case SSM_st_TurningOn_StateGyroscope :
      _L19_1_StateGyroscope_TurningOn = kcg_false;
      _186_GyroscopeButton_Fail_1 = _L19_1_StateGyroscope_TurningOn;
      GyroscopeButton_Fail_1 = _186_GyroscopeButton_Fail_1;
      break;
    
  }
  _L170_1 = GyroscopeButton_Fail_1;
  _L171_1 = !_L170_1;
  _L57_1 = GyroscopeButton_Enabled_1;
  switch (StateGyroscope_state_act_1) {
    case SSM_st_Off_StateGyroscope :
      _L5_1_StateGyroscope_Off = kcg_false;
      _214_Gyroscope_Toggling_1 = _L5_1_StateGyroscope_Off;
      Gyroscope_Toggling_1 = _214_Gyroscope_Toggling_1;
      break;
    case SSM_st_On_StateGyroscope :
      _L5_1_StateGyroscope_On = kcg_false;
      _206_Gyroscope_Toggling_1 = _L5_1_StateGyroscope_On;
      Gyroscope_Toggling_1 = _206_Gyroscope_Toggling_1;
      break;
    case SSM_st_TurningOff_StateGyroscope :
      _L27_1_StateGyroscope_TurningOff = kcg_true;
      _198_Gyroscope_Toggling_1 = _L27_1_StateGyroscope_TurningOff;
      Gyroscope_Toggling_1 = _198_Gyroscope_Toggling_1;
      break;
    case SSM_st_Fail_StateGyroscope :
      _L1_1_StateGyroscope_Fail = kcg_false;
      _190_Gyroscope_Toggling_1 = _L1_1_StateGyroscope_Fail;
      Gyroscope_Toggling_1 = _190_Gyroscope_Toggling_1;
      break;
    case SSM_st_TurningOn_StateGyroscope :
      _L16_1_StateGyroscope_TurningOn = kcg_true;
      _184_Gyroscope_Toggling_1 = _L16_1_StateGyroscope_TurningOn;
      Gyroscope_Toggling_1 = _184_Gyroscope_Toggling_1;
      break;
    
  }
  _L150_1 = Gyroscope_Toggling_1;
  _L140_1 = !_L150_1;
  _L139_1 = _L57_1 & _L140_1;
  _L172_1 = _L171_1 & _L139_1;
  _L125_1 = A661_TRUE;
  _L126_1 = A661_FALSE;
  if (_L172_1) {
    _L124_1 = _L125_1;
  }
  else {
    _L124_1 = _L126_1;
  }
  CDS_ES_GyroscopeButton_Enabled_1 = _L124_1;
  _L106 = CDS_ES_GyroscopeButton_Enabled_1;
  outC->cam_take_picture = _L105;
  outC->display_load_picture_enabled = _L101;
  switch (SM1_state_act_1) {
    case SSM_st_Validando_SM1 :
      _L17_1_SM1_Validando = CDS_COLOR_GREEN;
      _151_display_load_picture_btn_border_1 = _L17_1_SM1_Validando;
      _163_display_load_picture_btn_border_1 =
        _151_display_load_picture_btn_border_1;
      break;
    case SSM_st_Funcionando_SM1 :
      _L1_1_SM1_Funcionando = CDS_COLOR_GREEN;
      _139_display_load_picture_btn_border_1 = _L1_1_SM1_Funcionando;
      _163_display_load_picture_btn_border_1 =
        _139_display_load_picture_btn_border_1;
      break;
    case SSM_st_Erro_SM1 :
      _L1_1_SM1_Erro = CDS_COLOR_RED;
      display_load_picture_btn_border_1 = _L1_1_SM1_Erro;
      _163_display_load_picture_btn_border_1 =
        display_load_picture_btn_border_1;
      break;
    
  }
  _L100 = _163_display_load_picture_btn_border_1;
  outC->display_load_picture_btn_border = _L100;
  Testable_SAT_Initialize = _L99;
  Testable_SAT_CameraState_Toggle = _L124;
  _506_Testable_SAT_HorizonSensorState_Toggle = _L120;
  _509_Testable_SAT_GyroscopeState_Toggle = _L118;
  Testable_SAT_PropellersState_Toggle = _L122;
  kcg_copy_String_SS(&outC->CDS_SS_InitializationButton_Action, &_L41);
  outC->CDS_SS_InitializationButton_Contour = _L40;
  outC->CDS_SS_InitializationButton_Enabled = _L39;
  Init_1_1 = 0.0;
  _L7_1_1 = Init_1_1;
  if (outC->init3) {
    _L6_1_1 = _L7_1_1;
  }
  else {
    _L6_1_1 = outC->_L4_1_1;
  }
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _L199_DebugOrDeploy_Debug = inC->TEST_SAT_AirSpeed_Update;
      _484_Testable_SAT_AirSpeed_Update = _L199_DebugOrDeploy_Debug;
      _521_Testable_SAT_AirSpeed_Update = _484_Testable_SAT_AirSpeed_Update;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      _L78_DebugOrDeploy_Deploy = inC->SAT_AirSpeed_Update;
      Testable_SAT_AirSpeed_Update = _L78_DebugOrDeploy_Deploy;
      _521_Testable_SAT_AirSpeed_Update = Testable_SAT_AirSpeed_Update;
      break;
    
  }
  _L73 = _521_Testable_SAT_AirSpeed_Update;
  SAT_AirSpeed_Update_1 = _L73;
  _124__L13_1 = SAT_AirSpeed_Update_1;
  Write_1_1 = _124__L13_1;
  _125__L5_1_1 = Write_1_1;
  _123__L14_1 = SAT_AirSpeed_Value_1;
  BM_Input_1_1 = _123__L14_1;
  _L2_1_1 = BM_Input_1_1;
  if (_125__L5_1_1) {
    outC->_L4_1_1 = _L2_1_1;
  }
  else {
    outC->_L4_1_1 = _L6_1_1;
  }
  Memorized_1_1 = outC->_L4_1_1;
  _L41_1 = Memorized_1_1;
  CDS_SI_AirSpeed_Value_1 = _L41_1;
  _L85 = CDS_SI_AirSpeed_Value_1;
  outC->CDS_SI_Period_Value = _L90;
  outC->CDS_SI_DeclinationAngle_Value = _L89;
  outC->CDS_SI_Longitude_Value = _L88;
  outC->CDS_SI_Latitude_Value = _L87;
  outC->CDS_SI_Altitude_Value = _L86;
  outC->CDS_SI_AirSpeed_Value = _L85;
  kcg_copy_String_ES(&outC->CDS_ES_CameraButton_Label, &_L117);
  outC->CDS_ES_CameraButton_Contour = _L116;
  outC->CDS_ES_CameraButton_Enabled = _L115;
  kcg_copy_String_ES(&outC->CDS_ES_PropellersButton_Label, &_L114);
  outC->CDS_ES_PropellersButton_Contour = _L113;
  outC->CDS_ES_PropellersButton_Enabled = _L112;
  kcg_copy_String_ES(&outC->CDS_ES_HorizonSensorButton_Label, &_L111);
  outC->CDS_ES_HorizonSensorButton_Contour = _L110;
  outC->CDS_ES_HorizonSensorButton_Enabled = _L109;
  kcg_copy_String_ES(&outC->CDS_ES_GyroscopeButton_Label, &_L108);
  outC->CDS_ES_GyroscopeButton_Contour = _L107;
  outC->CDS_ES_GyroscopeButton_Enabled = _L106;
  _L42 = CDS_TEXT_SS_STR_SIZE;
  outC->CDS_SS_String_Size = _L42;
  switch (Initialization_state_act_2) {
    case SSM_st_Off_Initialization :
      _L11_2_Initialization_Off = CDS_COLOR_YELLOW;
      _108_CDS_SS_EjectionLED_Color_2 = _L11_2_Initialization_Off;
      _119_CDS_SS_EjectionLED_Color_2 = _108_CDS_SS_EjectionLED_Color_2;
      break;
    case SSM_st_Ejected_Initialization :
      _L8_2_Initialization_Ejected = CDS_COLOR_GREEN;
      _100_CDS_SS_EjectionLED_Color_2 = _L8_2_Initialization_Ejected;
      _119_CDS_SS_EjectionLED_Color_2 = _100_CDS_SS_EjectionLED_Color_2;
      break;
    case SSM_st_Initializing_Initialization :
      _L14_2_Initialization_Initializing = CDS_COLOR_GREEN;
      _92_CDS_SS_EjectionLED_Color_2 = _L14_2_Initialization_Initializing;
      _119_CDS_SS_EjectionLED_Color_2 = _92_CDS_SS_EjectionLED_Color_2;
      break;
    case SSM_st_Initialized_Initialization :
      _L2_2_Initialization_Initialized = CDS_COLOR_GREEN;
      _78_CDS_SS_EjectionLED_Color_2 = _L2_2_Initialization_Initialized;
      _119_CDS_SS_EjectionLED_Color_2 = _78_CDS_SS_EjectionLED_Color_2;
      break;
    case SSM_st_Fail_Initialization :
      _L3_2_Initialization_Fail = CDS_COLOR_GREEN;
      CDS_SS_EjectionLED_Color_2 = _L3_2_Initialization_Fail;
      _119_CDS_SS_EjectionLED_Color_2 = CDS_SS_EjectionLED_Color_2;
      break;
    
  }
  _L38 = _119_CDS_SS_EjectionLED_Color_2;
  outC->CDS_SS_EjectionLED_Color = _L38;
  switch (DebugOrDeploy_state_sel) {
    case SSM_st_Debug_DebugOrDeploy :
      if (br_1_guard_DebugOrDeploy_Debug) {
        _501_DebugOrDeploy_fired_strong = SSM_TR_Debug_1_DebugOrDeploy;
      }
      else {
        _501_DebugOrDeploy_fired_strong = SSM_TR_no_trans_DebugOrDeploy;
      }
      _503_DebugOrDeploy_fired_strong = _501_DebugOrDeploy_fired_strong;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      DebugOrDeploy_fired_strong = SSM_TR_no_trans_DebugOrDeploy;
      _503_DebugOrDeploy_fired_strong = DebugOrDeploy_fired_strong;
      break;
    
  }
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      _498_DebugOrDeploy_fired = _503_DebugOrDeploy_fired_strong;
      _497_DebugOrDeploy_reset_nxt = kcg_false;
      _496_DebugOrDeploy_state_nxt = SSM_st_Debug_DebugOrDeploy;
      _L332_DebugOrDeploy_Debug = Testable_SAT_CameraState_Toggle;
      Notify_4 = _L332_DebugOrDeploy_Debug;
      _L6_4 = Notify_4;
      _L7_4 = NewState_4;
      _L2_4 = CDS_COLOR_GREEN;
      _L3_4 = CDS_COLOR_YELLOW;
      if (_L7_4) {
        _L1_4 = _L2_4;
      }
      else {
        _L1_4 = _L3_4;
      }
      _L5_4 = CDS_COLOR_GRAY;
      if (_L6_4) {
        _L4_4 = _L1_4;
      }
      else {
        _L4_4 = _L5_4;
      }
      CDS_Color_4 = _L4_4;
      _L355_DebugOrDeploy_Debug = CDS_Color_4;
      _L328_DebugOrDeploy_Debug = Testable_SAT_PropellersState_Toggle;
      Notify_3 = _L328_DebugOrDeploy_Debug;
      _L6_3 = Notify_3;
      _L7_3 = NewState_3;
      _L2_3 = CDS_COLOR_GREEN;
      _L3_3 = CDS_COLOR_YELLOW;
      if (_L7_3) {
        _L1_3 = _L2_3;
      }
      else {
        _L1_3 = _L3_3;
      }
      _L5_3 = CDS_COLOR_GRAY;
      if (_L6_3) {
        _L4_3 = _L1_3;
      }
      else {
        _L4_3 = _L5_3;
      }
      CDS_Color_3 = _L4_3;
      _L352_DebugOrDeploy_Debug = CDS_Color_3;
      _L331_DebugOrDeploy_Debug = _506_Testable_SAT_HorizonSensorState_Toggle;
      Notify_2 = _L331_DebugOrDeploy_Debug;
      _L6_2 = Notify_2;
      _L7_2 = NewState_2;
      _L2_2 = CDS_COLOR_GREEN;
      _L3_2 = CDS_COLOR_YELLOW;
      if (_L7_2) {
        _L1_2 = _L2_2;
      }
      else {
        _L1_2 = _L3_2;
      }
      _L5_2 = CDS_COLOR_GRAY;
      if (_L6_2) {
        _L4_2 = _L1_2;
      }
      else {
        _L4_2 = _L5_2;
      }
      CDS_Color_2 = _L4_2;
      _L351_DebugOrDeploy_Debug = CDS_Color_2;
      _L327_DebugOrDeploy_Debug = _509_Testable_SAT_GyroscopeState_Toggle;
      Notify_1 = _L327_DebugOrDeploy_Debug;
      _L6_1 = Notify_1;
      _L7_1 = NewState_1;
      _L2_1 = CDS_COLOR_GREEN;
      _L3_1 = CDS_COLOR_YELLOW;
      if (_L7_1) {
        _L1_1 = _L2_1;
      }
      else {
        _L1_1 = _L3_1;
      }
      _L5_161 = CDS_COLOR_GRAY;
      if (_L6_1) {
        _L4_1 = _L1_1;
      }
      else {
        _L4_1 = _L5_161;
      }
      CDS_Color_1 = _L4_1;
      _L350_DebugOrDeploy_Debug = CDS_Color_1;
      _L344_DebugOrDeploy_Debug = CDS_COLOR_GREEN;
      _L343_DebugOrDeploy_Debug = CDS_COLOR_GRAY;
      _L222_DebugOrDeploy_Debug = Testable_SAT_Initialize;
      if (_L222_DebugOrDeploy_Debug) {
        _L342_DebugOrDeploy_Debug = _L344_DebugOrDeploy_Debug;
      }
      else {
        _L342_DebugOrDeploy_Debug = _L343_DebugOrDeploy_Debug;
      }
      _L341_DebugOrDeploy_Debug = kcg_false;
      _L340_DebugOrDeploy_Debug = kcg_true;
      _L7_5 = Init_5;
      if (outC->init) {
        _L6_5 = _L7_5;
      }
      else {
        _L6_5 = outC->_L4_5;
      }
      _L5_5 = Write_5;
      _L157_DebugOrDeploy_Debug = inC->TEST_DebugSelector_Value;
      BM_Input_5 = _L157_DebugOrDeploy_Debug;
      _L2_5 = BM_Input_5;
      if (_L5_5) {
        outC->_L4_5 = _L2_5;
      }
      else {
        outC->_L4_5 = _L6_5;
      }
      Memorized_5 = outC->_L4_5;
      _L211_DebugOrDeploy_Debug = Memorized_5;
      DebugSelectedInterface_DebugOrDeploy_Debug = _L211_DebugOrDeploy_Debug;
      _L339_DebugOrDeploy_Debug = DebugSelectedInterface_DebugOrDeploy_Debug;
      switch (_L339_DebugOrDeploy_Debug) {
        case 2 :
          _L335_DebugOrDeploy_Debug = _L340_DebugOrDeploy_Debug;
          break;
        
        default :
          _L335_DebugOrDeploy_Debug = _L341_DebugOrDeploy_Debug;
      }
      _L337_DebugOrDeploy_Debug = A661_TRUE;
      _L338_DebugOrDeploy_Debug = A661_FALSE;
      if (_L335_DebugOrDeploy_Debug) {
        _L336_DebugOrDeploy_Debug = _L337_DebugOrDeploy_Debug;
      }
      else {
        _L336_DebugOrDeploy_Debug = _L338_DebugOrDeploy_Debug;
      }
      _464_TEST_ES_Enabled = _L336_DebugOrDeploy_Debug;
      _463_TEST_ES_Visible = _L335_DebugOrDeploy_Debug;
      _470_TEST_SAT_PropellersState_Signal = _L352_DebugOrDeploy_Debug;
      _471_TEST_SAT_CameraState_Signal = _L355_DebugOrDeploy_Debug;
      _468_TEST_SAT_GyroscopeState_Signal = _L350_DebugOrDeploy_Debug;
      _469_TEST_SAT_HorizonSensorState_Signal = _L351_DebugOrDeploy_Debug;
      _L223_DebugOrDeploy_Debug = kcg_false;
      _458_SAT_CameraState_ToggleTo = _L223_DebugOrDeploy_Debug;
      _457_SAT_CameraState_Toggle = _L223_DebugOrDeploy_Debug;
      _456_SAT_PropellersState_ToggleTo = _L223_DebugOrDeploy_Debug;
      _455_SAT_PropellersState_Toggle = _L223_DebugOrDeploy_Debug;
      _454_SAT_HorizonSensorState_ToggleTo = _L223_DebugOrDeploy_Debug;
      _453_SAT_HorizonSensorState_Toggle = _L223_DebugOrDeploy_Debug;
      _452_SAT_GyroscopeState_ToggleTo = _L223_DebugOrDeploy_Debug;
      _451_SAT_GyroscopeState_Toggle = _L223_DebugOrDeploy_Debug;
      _450_SAT_Initialize = _L223_DebugOrDeploy_Debug;
      _467_TEST_SAT_Initialize_Signal = _L342_DebugOrDeploy_Debug;
      _L186_DebugOrDeploy_Debug = DebugSelectedInterface_DebugOrDeploy_Debug;
      _L179_DebugOrDeploy_Debug = kcg_true;
      _L184_DebugOrDeploy_Debug = kcg_false;
      switch (_L186_DebugOrDeploy_Debug) {
        case 3 :
          _L185_DebugOrDeploy_Debug = _L179_DebugOrDeploy_Debug;
          break;
        
        default :
          _L185_DebugOrDeploy_Debug = _L184_DebugOrDeploy_Debug;
      }
      _L180_DebugOrDeploy_Debug = A661_TRUE;
      _L183_DebugOrDeploy_Debug = A661_FALSE;
      if (_L185_DebugOrDeploy_Debug) {
        _L181_DebugOrDeploy_Debug = _L180_DebugOrDeploy_Debug;
      }
      else {
        _L181_DebugOrDeploy_Debug = _L183_DebugOrDeploy_Debug;
      }
      _462_TEST_SS_Enabled = _L181_DebugOrDeploy_Debug;
      _461_TEST_SS_Visible = _L185_DebugOrDeploy_Debug;
      _L171_DebugOrDeploy_Debug = A661_FALSE;
      _L170_DebugOrDeploy_Debug = A661_TRUE;
      _L165_DebugOrDeploy_Debug = DebugSelectedInterface_DebugOrDeploy_Debug;
      _L167_DebugOrDeploy_Debug = kcg_true;
      _L168_DebugOrDeploy_Debug = kcg_false;
      switch (_L165_DebugOrDeploy_Debug) {
        case 1 :
          _L166_DebugOrDeploy_Debug = _L167_DebugOrDeploy_Debug;
          break;
        
        default :
          _L166_DebugOrDeploy_Debug = _L168_DebugOrDeploy_Debug;
      }
      if (_L166_DebugOrDeploy_Debug) {
        _L169_DebugOrDeploy_Debug = _L170_DebugOrDeploy_Debug;
      }
      else {
        _L169_DebugOrDeploy_Debug = _L171_DebugOrDeploy_Debug;
      }
      _466_TEST_SI_Enabled = _L169_DebugOrDeploy_Debug;
      _465_TEST_SI_Visible = _L166_DebugOrDeploy_Debug;
      _L163_DebugOrDeploy_Debug = A661_TRUE;
      _L162_DebugOrDeploy_Debug = kcg_true;
      _460_TEST_DebugSelector_Enabled = _L163_DebugOrDeploy_Debug;
      _459_TEST_DebugSelector_Visible = _L162_DebugOrDeploy_Debug;
      _502_DebugOrDeploy_fired = _498_DebugOrDeploy_fired;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      DebugOrDeploy_fired = _503_DebugOrDeploy_fired_strong;
      DebugOrDeploy_reset_nxt = kcg_false;
      DebugOrDeploy_state_nxt = SSM_st_Deploy_DebugOrDeploy;
      _L109_DebugOrDeploy_Deploy = CDS_COLOR_GRAY;
      TEST_SAT_CameraState_Signal = _L109_DebugOrDeploy_Deploy;
      TEST_SAT_PropellersState_Signal = _L109_DebugOrDeploy_Deploy;
      TEST_SAT_HorizonSensorState_Signal = _L109_DebugOrDeploy_Deploy;
      TEST_SAT_GyroscopeState_Signal = _L109_DebugOrDeploy_Deploy;
      TEST_SAT_Initialize_Signal = _L109_DebugOrDeploy_Deploy;
      _L108_DebugOrDeploy_Deploy = Testable_SAT_Initialize;
      SAT_Initialize = _L108_DebugOrDeploy_Deploy;
      _L107_DebugOrDeploy_Deploy = _505_Testable_SAT_PropellersState_ToggleTo;
      _L106_DebugOrDeploy_Deploy = Testable_SAT_PropellersState_Toggle;
      _L105_DebugOrDeploy_Deploy =
        _507_Testable_SAT_HorizonSensorState_ToggleTo;
      _L104_DebugOrDeploy_Deploy = _506_Testable_SAT_HorizonSensorState_Toggle;
      _L103_DebugOrDeploy_Deploy = Testable_SAT_GyroscopeState_ToggleTo;
      _L102_DebugOrDeploy_Deploy = _509_Testable_SAT_GyroscopeState_Toggle;
      _L101_DebugOrDeploy_Deploy = _508_Testable_SAT_CameraState_ToggleTo;
      _L100_DebugOrDeploy_Deploy = Testable_SAT_CameraState_Toggle;
      SAT_GyroscopeState_ToggleTo = _L103_DebugOrDeploy_Deploy;
      SAT_PropellersState_ToggleTo = _L107_DebugOrDeploy_Deploy;
      SAT_HorizonSensorState_Toggle = _L104_DebugOrDeploy_Deploy;
      SAT_CameraState_Toggle = _L100_DebugOrDeploy_Deploy;
      _448_SAT_HorizonSensorState_ToggleTo = _L105_DebugOrDeploy_Deploy;
      SAT_PropellersState_Toggle = _L106_DebugOrDeploy_Deploy;
      SAT_CameraState_ToggleTo = _L101_DebugOrDeploy_Deploy;
      SAT_GyroscopeState_Toggle = _L102_DebugOrDeploy_Deploy;
      _L77_DebugOrDeploy_Deploy = kcg_false;
      _L76_DebugOrDeploy_Deploy = A661_FALSE;
      TEST_SI_Visible = _L77_DebugOrDeploy_Deploy;
      TEST_SI_Enabled = _L76_DebugOrDeploy_Deploy;
      _L61_DebugOrDeploy_Deploy = A661_FALSE;
      TEST_DebugSelector_Enabled = _L61_DebugOrDeploy_Deploy;
      _L60_DebugOrDeploy_Deploy = kcg_false;
      TEST_DebugSelector_Visible = _L60_DebugOrDeploy_Deploy;
      _L43_DebugOrDeploy_Deploy = A661_FALSE;
      TEST_ES_Enabled = _L43_DebugOrDeploy_Deploy;
      _L42_DebugOrDeploy_Deploy = kcg_false;
      TEST_ES_Visible = _L42_DebugOrDeploy_Deploy;
      _L39_DebugOrDeploy_Deploy = A661_FALSE;
      TEST_SS_Enabled = _L39_DebugOrDeploy_Deploy;
      _L38_DebugOrDeploy_Deploy = kcg_false;
      TEST_SS_Visible = _L38_DebugOrDeploy_Deploy;
      _502_DebugOrDeploy_fired = DebugOrDeploy_fired;
      break;
    
  }
  if (outC->init3) {
    DebugOrDeploy_reset_sel = kcg_false;
  }
  else {
    DebugOrDeploy_reset_sel = outC->DebugOrDeploy_reset_nxt;
  }
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      outC->DebugOrDeploy_reset_nxt = _497_DebugOrDeploy_reset_nxt;
      outC->DebugOrDeploy_state_nxt = _496_DebugOrDeploy_state_nxt;
      outC->TEST_SAT_CameraState_Signal = _471_TEST_SAT_CameraState_Signal;
      outC->TEST_SAT_PropellersState_Signal =
        _470_TEST_SAT_PropellersState_Signal;
      outC->TEST_SAT_HorizonSensorState_Signal =
        _469_TEST_SAT_HorizonSensorState_Signal;
      outC->TEST_SAT_GyroscopeState_Signal =
        _468_TEST_SAT_GyroscopeState_Signal;
      outC->TEST_SAT_Initialize_Signal = _467_TEST_SAT_Initialize_Signal;
      outC->TEST_SI_Enabled = _466_TEST_SI_Enabled;
      outC->TEST_SI_Visible = _465_TEST_SI_Visible;
      outC->TEST_ES_Enabled = _464_TEST_ES_Enabled;
      outC->TEST_ES_Visible = _463_TEST_ES_Visible;
      outC->TEST_SS_Enabled = _462_TEST_SS_Enabled;
      outC->TEST_SS_Visible = _461_TEST_SS_Visible;
      outC->TEST_DebugSelector_Enabled = _460_TEST_DebugSelector_Enabled;
      outC->TEST_DebugSelector_Visible = _459_TEST_DebugSelector_Visible;
      outC->SAT_CameraState_ToggleTo = _458_SAT_CameraState_ToggleTo;
      outC->SAT_CameraState_Toggle = _457_SAT_CameraState_Toggle;
      outC->SAT_PropellersState_ToggleTo = _456_SAT_PropellersState_ToggleTo;
      outC->SAT_PropellersState_Toggle = _455_SAT_PropellersState_Toggle;
      outC->SAT_HorizonSensorState_ToggleTo =
        _454_SAT_HorizonSensorState_ToggleTo;
      outC->SAT_HorizonSensorState_Toggle = _453_SAT_HorizonSensorState_Toggle;
      outC->SAT_GyroscopeState_ToggleTo = _452_SAT_GyroscopeState_ToggleTo;
      outC->SAT_GyroscopeState_Toggle = _451_SAT_GyroscopeState_Toggle;
      outC->SAT_Initialize = _450_SAT_Initialize;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      outC->DebugOrDeploy_reset_nxt = DebugOrDeploy_reset_nxt;
      outC->DebugOrDeploy_state_nxt = DebugOrDeploy_state_nxt;
      outC->TEST_SAT_CameraState_Signal = TEST_SAT_CameraState_Signal;
      outC->TEST_SAT_PropellersState_Signal = TEST_SAT_PropellersState_Signal;
      outC->TEST_SAT_HorizonSensorState_Signal =
        TEST_SAT_HorizonSensorState_Signal;
      outC->TEST_SAT_GyroscopeState_Signal = TEST_SAT_GyroscopeState_Signal;
      outC->TEST_SAT_Initialize_Signal = TEST_SAT_Initialize_Signal;
      outC->TEST_SI_Enabled = TEST_SI_Enabled;
      outC->TEST_SI_Visible = TEST_SI_Visible;
      outC->TEST_ES_Enabled = TEST_ES_Enabled;
      outC->TEST_ES_Visible = TEST_ES_Visible;
      outC->TEST_SS_Enabled = TEST_SS_Enabled;
      outC->TEST_SS_Visible = TEST_SS_Visible;
      outC->TEST_DebugSelector_Enabled = TEST_DebugSelector_Enabled;
      outC->TEST_DebugSelector_Visible = TEST_DebugSelector_Visible;
      outC->SAT_CameraState_ToggleTo = SAT_CameraState_ToggleTo;
      outC->SAT_CameraState_Toggle = SAT_CameraState_Toggle;
      outC->SAT_PropellersState_ToggleTo = SAT_PropellersState_ToggleTo;
      outC->SAT_PropellersState_Toggle = SAT_PropellersState_Toggle;
      outC->SAT_HorizonSensorState_ToggleTo =
        _448_SAT_HorizonSensorState_ToggleTo;
      outC->SAT_HorizonSensorState_Toggle = SAT_HorizonSensorState_Toggle;
      outC->SAT_GyroscopeState_ToggleTo = SAT_GyroscopeState_ToggleTo;
      outC->SAT_GyroscopeState_Toggle = SAT_GyroscopeState_Toggle;
      outC->SAT_Initialize = SAT_Initialize;
      break;
    
  }
  switch (DebugOrDeploy_state_sel) {
    case SSM_st_Debug_DebugOrDeploy :
      _500_DebugOrDeploy_reset_act = br_1_guard_DebugOrDeploy_Debug;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      DebugOrDeploy_reset_act = kcg_false;
      break;
    
  }
  if (outC->init3) {
    DebugOrDeploy_reset_prv = kcg_false;
  }
  else {
    DebugOrDeploy_reset_prv = outC->DebugOrDeploy_reset_act;
  }
  switch (DebugOrDeploy_state_sel) {
    case SSM_st_Debug_DebugOrDeploy :
      outC->DebugOrDeploy_reset_act = _500_DebugOrDeploy_reset_act;
      break;
    case SSM_st_Deploy_DebugOrDeploy :
      outC->DebugOrDeploy_reset_act = DebugOrDeploy_reset_act;
      break;
    
  }
  _L14 = kcg_true;
  outC->CDS_Emit = _L14;
  if (outC->init3) {
    _L3 = kcg_true;
  }
  else {
    _L3 = outC->_L2;
  }
  outC->CDS_Layer_Req_Visible = _L3;
  outC->CDS_Layer_Req_Active = _L3;
  outC->_L2 = kcg_false;
  _L26_1 = 1;
  Input4_1_1 = _L26_1;
  _L25_1 = 0;
  Input3_1_1 = _L25_1;
  _L23_1 = kcg_false;
  Input2_1_1 = _L23_1;
  _L12_1_1 = Input4_1_1;
  Output4_1_1 = _L12_1_1;
  _L15_1 = Output4_1_1;
  _L11_1_1 = Input3_1_1;
  Output3_1_1 = _L11_1_1;
  _L14_1 = Output3_1_1;
  _L10_1_1 = Input2_1_1;
  Output2_1_1 = _L10_1_1;
  _L13_1 = Output2_1_1;
  Probe4_1 = _L15_1;
  Probe3_1 = _L14_1;
  Probe2_1 = _L13_1;
  _L22_1 = kcg_true;
  Input1_1_1 = _L22_1;
  _L5_1_1 = Input1_1_1;
  Output1_1_1 = _L5_1_1;
  _L5_1 = Output1_1_1;
  Probe1_1 = _L5_1;
  _1__L26_1 = 1;
  _16_Input4_1_1 = _1__L26_1;
  _2__L25_1 = 0;
  _15_Input3_1_1 = _2__L25_1;
  _3__L23_1 = kcg_false;
  _14_Input2_1_1 = _3__L23_1;
  _21__L12_1_1 = _16_Input4_1_1;
  _20_Output4_1_1 = _21__L12_1_1;
  _5__L15_1 = _20_Output4_1_1;
  _22__L11_1_1 = _15_Input3_1_1;
  _19_Output3_1_1 = _22__L11_1_1;
  _6__L14_1 = _19_Output3_1_1;
  _23__L10_1_1 = _14_Input2_1_1;
  _18_Output2_1_1 = _23__L10_1_1;
  _7__L13_1 = _18_Output2_1_1;
  _9_Probe4_1 = _5__L15_1;
  _10_Probe3_1 = _6__L14_1;
  _11_Probe2_1 = _7__L13_1;
  _4__L22_1 = kcg_true;
  _13_Input1_1_1 = _4__L22_1;
  _24__L5_1_1 = _13_Input1_1_1;
  _17_Output1_1_1 = _24__L5_1_1;
  _L5_18 = _17_Output1_1_1;
  _12_Probe1_1 = _L5_18;
  _25__L26_1 = 1;
  Input4_2_1 = _25__L26_1;
  _26__L25_1 = 0;
  Input3_2_1 = _26__L25_1;
  _27__L23_1 = kcg_false;
  Input2_2_1 = _27__L23_1;
  _L12_2_1 = Input4_2_1;
  Output4_2_1 = _L12_2_1;
  _29__L15_1 = Output4_2_1;
  _L11_2_1 = Input3_2_1;
  Output3_2_1 = _L11_2_1;
  _30__L14_1 = Output3_2_1;
  _L10_2_1 = Input2_2_1;
  Output2_2_1 = _L10_2_1;
  _31__L13_1 = Output2_2_1;
  _33_Probe4_1 = _29__L15_1;
  _34_Probe3_1 = _30__L14_1;
  _35_Probe2_1 = _31__L13_1;
  _28__L22_1 = kcg_true;
  Input1_2_1 = _28__L22_1;
  _L5_2_1 = Input1_2_1;
  Output1_2_1 = _L5_2_1;
  _L5_132 = Output1_2_1;
  _36_Probe1_1 = _L5_132;
  _37__L26_1 = 1;
  _52_Input4_1_1 = _37__L26_1;
  _38__L25_1 = 0;
  _51_Input3_1_1 = _38__L25_1;
  _39__L23_1 = kcg_false;
  _50_Input2_1_1 = _39__L23_1;
  _57__L12_1_1 = _52_Input4_1_1;
  _56_Output4_1_1 = _57__L12_1_1;
  _41__L15_1 = _56_Output4_1_1;
  _58__L11_1_1 = _51_Input3_1_1;
  _55_Output3_1_1 = _58__L11_1_1;
  _42__L14_1 = _55_Output3_1_1;
  _59__L10_1_1 = _50_Input2_1_1;
  _54_Output2_1_1 = _59__L10_1_1;
  _43__L13_1 = _54_Output2_1_1;
  _45_Probe4_1 = _41__L15_1;
  _46_Probe3_1 = _42__L14_1;
  _47_Probe2_1 = _43__L13_1;
  _40__L22_1 = kcg_true;
  _49_Input1_1_1 = _40__L22_1;
  _60__L5_1_1 = _49_Input1_1_1;
  _53_Output1_1_1 = _60__L5_1_1;
  _L5_144 = _53_Output1_1_1;
  _48_Probe1_1 = _L5_144;
  switch (Initialization_state_sel_2) {
    case SSM_st_Off_Initialization :
      if (br_1_guard_2_Initialization_Off) {
        _75_Initialization_fired_strong_2 = SSM_TR_Off_1_Initialization;
      }
      else {
        _75_Initialization_fired_strong_2 = SSM_TR_no_trans_Initialization;
      }
      Initialization_fired_strong_2 = _75_Initialization_fired_strong_2;
      break;
    case SSM_st_Ejected_Initialization :
      if (br_1_guard_2_Initialization_Ejected) {
        _72_Initialization_fired_strong_2 = SSM_TR_Ejected_1_Initialization;
      }
      else {
        _72_Initialization_fired_strong_2 = SSM_TR_no_trans_Initialization;
      }
      Initialization_fired_strong_2 = _72_Initialization_fired_strong_2;
      break;
    case SSM_st_Initializing_Initialization :
      if (br_1_guard_2_Initialization_Initializing) {
        _69_Initialization_fired_strong_2 =
          SSM_TR_Initializing_1_Initialization;
      }
      else if (br_2_guard_2_Initialization_Initializing) {
        _69_Initialization_fired_strong_2 =
          SSM_TR_Initializing_2_Initialization;
      }
      else {
        _69_Initialization_fired_strong_2 = SSM_TR_no_trans_Initialization;
      }
      Initialization_fired_strong_2 = _69_Initialization_fired_strong_2;
      break;
    case SSM_st_Initialized_Initialization :
      _66_Initialization_fired_strong_2 = SSM_TR_no_trans_Initialization;
      Initialization_fired_strong_2 = _66_Initialization_fired_strong_2;
      break;
    case SSM_st_Fail_Initialization :
      if (br_1_guard_2_Initialization_Fail) {
        _63_Initialization_fired_strong_2 = SSM_TR_Fail_1_Initialization;
      }
      else {
        _63_Initialization_fired_strong_2 = SSM_TR_no_trans_Initialization;
      }
      Initialization_fired_strong_2 = _63_Initialization_fired_strong_2;
      break;
    
  }
  switch (Initialization_state_act_2) {
    case SSM_st_Off_Initialization :
      _115_Initialization_fired_2 = Initialization_fired_strong_2;
      _114_Initialization_reset_nxt_2 = kcg_false;
      _113_Initialization_state_nxt_2 = SSM_st_Off_Initialization;
      _L14_2_Initialization_Off = kcg_false;
      _112_timeout_2 = _L14_2_Initialization_Off;
      Initialization_fired_2 = _115_Initialization_fired_2;
      break;
    case SSM_st_Ejected_Initialization :
      _107_Initialization_fired_2 = Initialization_fired_strong_2;
      _106_Initialization_reset_nxt_2 = kcg_false;
      _105_Initialization_state_nxt_2 = SSM_st_Ejected_Initialization;
      _L10_2_Initialization_Ejected = kcg_false;
      _104_timeout_2 = _L10_2_Initialization_Ejected;
      Initialization_fired_2 = _107_Initialization_fired_2;
      break;
    case SSM_st_Initializing_Initialization :
      Initializing_weakb_clock_2_Initialization =
        Initialization_fired_strong_2 != SSM_TR_no_trans_Initialization;
      if (Initializing_weakb_clock_2_Initialization) {
        _86_Initialization_fired_2 = Initialization_fired_strong_2;
        _87_Initialization_reset_nxt_2 = kcg_false;
        _88_Initialization_state_nxt_2 = SSM_st_Initializing_Initialization;
      }
      if (outC->init1) {
        _L17_2_Initialization_Initializing = 0;
      }
      else {
        _L17_2_Initialization_Initializing =
          outC->_L20_2_Initialization_Initializing;
      }
      _L18_2_Initialization_Initializing = 1;
      outC->_L20_2_Initialization_Initializing =
        _L17_2_Initialization_Initializing + _L18_2_Initialization_Initializing;
      _L22_2_Initialization_Initializing = CDS_INT_SS_INITIALIZATION_TIMEOUT;
      _L23_2_Initialization_Initializing =
        outC->_L20_2_Initialization_Initializing >=
        _L22_2_Initialization_Initializing;
      _96_timeout_2 = _L23_2_Initialization_Initializing;
      if (Initializing_weakb_clock_2_Initialization) {
        _99_Initialization_fired_2 = _86_Initialization_fired_2;
        _98_Initialization_reset_nxt_2 = _87_Initialization_reset_nxt_2;
        _97_Initialization_state_nxt_2 = _88_Initialization_state_nxt_2;
      }
      else {
        br_3_guard_2_Initialization_Initializing = _96_timeout_2;
        if (br_3_guard_2_Initialization_Initializing) {
          _89_Initialization_fired_2 = SSM_TR_Initializing_3_Initialization;
        }
        else {
          _89_Initialization_fired_2 = SSM_TR_no_trans_Initialization;
        }
        _90_Initialization_reset_nxt_2 =
          br_3_guard_2_Initialization_Initializing;
        if (br_3_guard_2_Initialization_Initializing) {
          _91_Initialization_state_nxt_2 = SSM_st_Fail_Initialization;
        }
        else {
          _91_Initialization_state_nxt_2 = SSM_st_Initializing_Initialization;
        }
        _99_Initialization_fired_2 = _89_Initialization_fired_2;
        _98_Initialization_reset_nxt_2 = _90_Initialization_reset_nxt_2;
        _97_Initialization_state_nxt_2 = _91_Initialization_state_nxt_2;
      }
      Initialization_fired_2 = _99_Initialization_fired_2;
      break;
    case SSM_st_Initialized_Initialization :
      _85_Initialization_fired_2 = Initialization_fired_strong_2;
      _84_Initialization_reset_nxt_2 = kcg_false;
      _83_Initialization_state_nxt_2 = SSM_st_Initialized_Initialization;
      _L6_2_Initialization_Initialized = kcg_false;
      _82_timeout_2 = _L6_2_Initialization_Initialized;
      Initialization_fired_2 = _85_Initialization_fired_2;
      break;
    case SSM_st_Fail_Initialization :
      _77_Initialization_fired_2 = Initialization_fired_strong_2;
      Initialization_reset_nxt_2 = kcg_false;
      Initialization_state_nxt_2 = SSM_st_Fail_Initialization;
      _L6_2_Initialization_Fail = kcg_false;
      _76_timeout_2 = _L6_2_Initialization_Fail;
      Initialization_fired_2 = _77_Initialization_fired_2;
      break;
    
  }
  if (outC->init3) {
    Initialization_reset_sel_2 = kcg_false;
  }
  else {
    Initialization_reset_sel_2 = outC->Initialization_reset_nxt_2;
  }
  switch (Initialization_state_act_2) {
    case SSM_st_Off_Initialization :
      outC->Initialization_reset_nxt_2 = _114_Initialization_reset_nxt_2;
      outC->Initialization_state_nxt_2 = _113_Initialization_state_nxt_2;
      timeout_2 = _112_timeout_2;
      break;
    case SSM_st_Ejected_Initialization :
      outC->Initialization_reset_nxt_2 = _106_Initialization_reset_nxt_2;
      outC->Initialization_state_nxt_2 = _105_Initialization_state_nxt_2;
      timeout_2 = _104_timeout_2;
      break;
    case SSM_st_Initializing_Initialization :
      outC->Initialization_reset_nxt_2 = _98_Initialization_reset_nxt_2;
      outC->Initialization_state_nxt_2 = _97_Initialization_state_nxt_2;
      timeout_2 = _96_timeout_2;
      break;
    case SSM_st_Initialized_Initialization :
      outC->Initialization_reset_nxt_2 = _84_Initialization_reset_nxt_2;
      outC->Initialization_state_nxt_2 = _83_Initialization_state_nxt_2;
      timeout_2 = _82_timeout_2;
      break;
    case SSM_st_Fail_Initialization :
      outC->Initialization_reset_nxt_2 = Initialization_reset_nxt_2;
      outC->Initialization_state_nxt_2 = Initialization_state_nxt_2;
      timeout_2 = _76_timeout_2;
      break;
    
  }
  switch (SM1_state_act_1) {
    case SSM_st_Validando_SM1 :
      IncAt_1_1 = 1;
      break;
    
  }
  switch (SM1_state_sel_1) {
    case SSM_st_Validando_SM1 :
      if (br_1_guard_1_SM1_Validando) {
        _136_SM1_fired_strong_1 = SSM_TR_Validando_1_SM1;
      }
      else {
        _136_SM1_fired_strong_1 = SSM_TR_no_trans_SM1;
      }
      SM1_fired_strong_1 = _136_SM1_fired_strong_1;
      break;
    case SSM_st_Funcionando_SM1 :
      if (br_1_guard_1_SM1_Funcionando) {
        _133_SM1_fired_strong_1 = SSM_TR_Funcionando_1_SM1;
      }
      else {
        _133_SM1_fired_strong_1 = SSM_TR_no_trans_SM1;
      }
      SM1_fired_strong_1 = _133_SM1_fired_strong_1;
      break;
    case SSM_st_Erro_SM1 :
      if (br_1_guard_1_SM1_Erro) {
        _130_SM1_fired_strong_1 = SSM_TR_Erro_1_SM1;
      }
      else {
        _130_SM1_fired_strong_1 = SSM_TR_no_trans_SM1;
      }
      SM1_fired_strong_1 = _130_SM1_fired_strong_1;
      break;
    
  }
  switch (SM1_state_act_1) {
    case SSM_st_Validando_SM1 :
      Validando_weakb_clock_1_SM1 = SM1_fired_strong_1 != SSM_TR_no_trans_SM1;
      if (Validando_weakb_clock_1_SM1) {
        _145_SM1_fired_1 = SM1_fired_strong_1;
        _146_SM1_reset_nxt_1 = kcg_false;
        _147_SM1_state_nxt_1 = SSM_st_Validando_SM1;
      }
      if (outC->init2) {
        last_Count_1_1 = 0;
      }
      else {
        last_Count_1_1 = outC->Count_1_1;
      }
      _L6_2_1_1 = outC->_L1_2_1_1;
      _L11_2_1_1 = 0;
      if (outC->init2) {
        _L8_1_1 = kcg_false;
      }
      else {
        _L8_1_1 = outC->_L10_1_1;
      }
      Reset_2_1_1 = _L8_1_1;
      _L13_2_1_1 = Reset_2_1_1;
      _L16_2_1_1 = 0;
      _L8_2_1_1 = 1;
      _L7_2_1_1 = _L8_2_1_1 + _L6_2_1_1;
      if (_L13_2_1_1) {
        _L2_2_1_1 = _L16_2_1_1;
      }
      else {
        _L2_2_1_1 = _L7_2_1_1;
      }
      if (outC->init2) {
        outC->_L1_2_1_1 = _L11_2_1_1;
      }
      else {
        outC->_L1_2_1_1 = _L2_2_1_1;
      }
      Count_2_1_1 = outC->_L1_2_1_1;
      _159__L6_1_1 = Count_2_1_1;
      ResetAt_1_1 = 600;
      _158__L11_1_1 = ResetAt_1_1;
      _L3_1_1 = _159__L6_1_1 % _158__L11_1_1;
      _L4_1_1 = (kcg_real) _L3_1_1;
      _157__L12_1_1 = IncAt_1_1;
      _L13_1_1 = (kcg_real) _157__L12_1_1;
      _L1_1_1 = _L4_1_1 / _L13_1_1;
      _160__L5_1_1 = (kcg_int) _L1_1_1;
      outC->Count_1_1 = _160__L5_1_1;
      _L2_1_SM1_Validando = outC->Count_1_1;
      _L5_1_SM1_Validando = 60;
      _L10_1_SM1_Validando = _L2_1_SM1_Validando >= _L5_1_SM1_Validando;
      _L13_1_SM1_Validando = kcg_true;
      _L14_1_SM1_Validando = kcg_false;
      if (_L10_1_SM1_Validando) {
        _L12_1_SM1_Validando = _L13_1_SM1_Validando;
      }
      else {
        _L12_1_SM1_Validando = _L14_1_SM1_Validando;
      }
      _153_load_fail_1 = _L12_1_SM1_Validando;
      if (Validando_weakb_clock_1_SM1) {
        _156_SM1_fired_1 = _145_SM1_fired_1;
        _155_SM1_reset_nxt_1 = _146_SM1_reset_nxt_1;
        _154_SM1_state_nxt_1 = _147_SM1_state_nxt_1;
      }
      else {
        br_2_guard_1_SM1_Validando = _153_load_fail_1;
        if (br_2_guard_1_SM1_Validando) {
          _148_SM1_fired_1 = SSM_TR_Validando_2_SM1;
        }
        else {
          _148_SM1_fired_1 = SSM_TR_no_trans_SM1;
        }
        _149_SM1_reset_nxt_1 = br_2_guard_1_SM1_Validando;
        if (br_2_guard_1_SM1_Validando) {
          _150_SM1_state_nxt_1 = SSM_st_Erro_SM1;
        }
        else {
          _150_SM1_state_nxt_1 = SSM_st_Validando_SM1;
        }
        _156_SM1_fired_1 = _148_SM1_fired_1;
        _155_SM1_reset_nxt_1 = _149_SM1_reset_nxt_1;
        _154_SM1_state_nxt_1 = _150_SM1_state_nxt_1;
      }
      SM1_fired_1 = _156_SM1_fired_1;
      break;
    case SSM_st_Funcionando_SM1 :
      _144_SM1_fired_1 = SM1_fired_strong_1;
      _143_SM1_reset_nxt_1 = kcg_false;
      _142_SM1_state_nxt_1 = SSM_st_Funcionando_SM1;
      _L3_1_SM1_Funcionando = kcg_false;
      _141_load_fail_1 = _L3_1_SM1_Funcionando;
      SM1_fired_1 = _144_SM1_fired_1;
      break;
    case SSM_st_Erro_SM1 :
      _138_SM1_fired_1 = SM1_fired_strong_1;
      SM1_reset_nxt_1 = kcg_false;
      SM1_state_nxt_1 = SSM_st_Erro_SM1;
      _L3_1_SM1_Erro = kcg_true;
      _137_load_fail_1 = _L3_1_SM1_Erro;
      SM1_fired_1 = _138_SM1_fired_1;
      break;
    
  }
  if (outC->init3) {
    SM1_reset_sel_1 = kcg_false;
  }
  else {
    SM1_reset_sel_1 = outC->SM1_reset_nxt_1;
  }
  switch (SM1_state_act_1) {
    case SSM_st_Validando_SM1 :
      outC->SM1_reset_nxt_1 = _155_SM1_reset_nxt_1;
      outC->SM1_state_nxt_1 = _154_SM1_state_nxt_1;
      load_fail_1 = _153_load_fail_1;
      _161__L2_1_1 = 9999;
      outC->_L10_1_1 = _159__L6_1_1 >= _161__L2_1_1;
      break;
    case SSM_st_Funcionando_SM1 :
      outC->SM1_reset_nxt_1 = _143_SM1_reset_nxt_1;
      outC->SM1_state_nxt_1 = _142_SM1_state_nxt_1;
      load_fail_1 = _141_load_fail_1;
      break;
    case SSM_st_Erro_SM1 :
      outC->SM1_reset_nxt_1 = SM1_reset_nxt_1;
      outC->SM1_state_nxt_1 = SM1_state_nxt_1;
      load_fail_1 = _137_load_fail_1;
      break;
    
  }
  switch (AutoVerifyUS14_state_sel_1) {
    case SSM_st_Ativo_AutoVerifyUS14 :
      _393_AutoVerifyUS14_fired_strong_1 = SSM_TR_no_trans_AutoVerifyUS14;
      AutoVerifyUS14_fired_strong_1 = _393_AutoVerifyUS14_fired_strong_1;
      break;
    case SSM_st_NaoAtivo_AutoVerifyUS14 :
      if (br_1_guard_1_AutoVerifyUS14_NaoAtivo) {
        _390_AutoVerifyUS14_fired_strong_1 = SSM_TR_NaoAtivo_1_AutoVerifyUS14;
      }
      else {
        _390_AutoVerifyUS14_fired_strong_1 = SSM_TR_no_trans_AutoVerifyUS14;
      }
      AutoVerifyUS14_fired_strong_1 = _390_AutoVerifyUS14_fired_strong_1;
      break;
    
  }
  switch (AutoVerifyUS14_state_act_1) {
    case SSM_st_Ativo_AutoVerifyUS14 :
      Ativo_weakb_clock_1_AutoVerifyUS14 = AutoVerifyUS14_fired_strong_1 !=
        SSM_TR_no_trans_AutoVerifyUS14;
      if (Ativo_weakb_clock_1_AutoVerifyUS14) {
        _396_AutoVerifyUS14_fired_1 = AutoVerifyUS14_fired_strong_1;
        _397_AutoVerifyUS14_reset_nxt_1 = kcg_false;
        _398_AutoVerifyUS14_state_nxt_1 = SSM_st_Ativo_AutoVerifyUS14;
      }
      _407_Fails_1 = _L18_1_AutoVerifyUS14_Ativo;
      if (Ativo_weakb_clock_1_AutoVerifyUS14) {
        _410_AutoVerifyUS14_fired_1 = _396_AutoVerifyUS14_fired_1;
        _409_AutoVerifyUS14_reset_nxt_1 = _397_AutoVerifyUS14_reset_nxt_1;
        _408_AutoVerifyUS14_state_nxt_1 = _398_AutoVerifyUS14_state_nxt_1;
      }
      else {
        br_1_guard_1_AutoVerifyUS14_Ativo = CDS_Auto_Verify_1 & !_407_Fails_1;
        if (br_1_guard_1_AutoVerifyUS14_Ativo) {
          _399_AutoVerifyUS14_fired_1 = SSM_TR_Ativo_1_AutoVerifyUS14;
        }
        else {
          _399_AutoVerifyUS14_fired_1 = SSM_TR_no_trans_AutoVerifyUS14;
        }
        _400_AutoVerifyUS14_reset_nxt_1 = br_1_guard_1_AutoVerifyUS14_Ativo;
        if (br_1_guard_1_AutoVerifyUS14_Ativo) {
          _401_AutoVerifyUS14_state_nxt_1 = SSM_st_NaoAtivo_AutoVerifyUS14;
        }
        else {
          _401_AutoVerifyUS14_state_nxt_1 = SSM_st_Ativo_AutoVerifyUS14;
        }
        _410_AutoVerifyUS14_fired_1 = _399_AutoVerifyUS14_fired_1;
        _409_AutoVerifyUS14_reset_nxt_1 = _400_AutoVerifyUS14_reset_nxt_1;
        _408_AutoVerifyUS14_state_nxt_1 = _401_AutoVerifyUS14_state_nxt_1;
      }
      AutoVerifyUS14_fired_1 = _410_AutoVerifyUS14_fired_1;
      break;
    case SSM_st_NaoAtivo_AutoVerifyUS14 :
      _395_AutoVerifyUS14_fired_1 = AutoVerifyUS14_fired_strong_1;
      AutoVerifyUS14_reset_nxt_1 = kcg_false;
      AutoVerifyUS14_state_nxt_1 = SSM_st_NaoAtivo_AutoVerifyUS14;
      _L13_1_AutoVerifyUS14_NaoAtivo = kcg_false;
      _394_Fails_1 = _L13_1_AutoVerifyUS14_NaoAtivo;
      AutoVerifyUS14_fired_1 = _395_AutoVerifyUS14_fired_1;
      break;
    
  }
  if (outC->init3) {
    AutoVerifyUS14_reset_sel_1 = kcg_false;
  }
  else {
    AutoVerifyUS14_reset_sel_1 = outC->AutoVerifyUS14_reset_nxt_1;
  }
  switch (AutoVerifyUS14_state_act_1) {
    case SSM_st_Ativo_AutoVerifyUS14 :
      outC->AutoVerifyUS14_reset_nxt_1 = _409_AutoVerifyUS14_reset_nxt_1;
      outC->AutoVerifyUS14_state_nxt_1 = _408_AutoVerifyUS14_state_nxt_1;
      Fails_1 = _407_Fails_1;
      break;
    case SSM_st_NaoAtivo_AutoVerifyUS14 :
      outC->AutoVerifyUS14_reset_nxt_1 = AutoVerifyUS14_reset_nxt_1;
      outC->AutoVerifyUS14_state_nxt_1 = AutoVerifyUS14_state_nxt_1;
      Fails_1 = _394_Fails_1;
      break;
    
  }
  switch (AutoVerifyUS14_state_sel_1) {
    case SSM_st_Ativo_AutoVerifyUS14 :
      _392_AutoVerifyUS14_reset_act_1 = kcg_false;
      break;
    case SSM_st_NaoAtivo_AutoVerifyUS14 :
      AutoVerifyUS14_reset_act_1 = br_1_guard_1_AutoVerifyUS14_NaoAtivo;
      break;
    
  }
  if (outC->init3) {
    AutoVerifyUS14_reset_prv_1 = kcg_false;
  }
  else {
    AutoVerifyUS14_reset_prv_1 = outC->AutoVerifyUS14_reset_act_1;
  }
  switch (AutoVerifyUS14_state_sel_1) {
    case SSM_st_Ativo_AutoVerifyUS14 :
      outC->AutoVerifyUS14_reset_act_1 = _392_AutoVerifyUS14_reset_act_1;
      break;
    case SSM_st_NaoAtivo_AutoVerifyUS14 :
      outC->AutoVerifyUS14_reset_act_1 = AutoVerifyUS14_reset_act_1;
      break;
    
  }
  switch (StateCamera_state_sel_1) {
    case SSM_st_Off_StateCamera :
      if (br_1_guard_1_StateCamera_Off) {
        _352_StateCamera_fired_strong_1 = SSM_TR_Off_1_StateCamera;
      }
      else if (br_2_guard_1_StateCamera_Off) {
        _352_StateCamera_fired_strong_1 = SSM_TR_Off_2_StateCamera;
      }
      else if (br_3_guard_1_StateCamera_Off) {
        _352_StateCamera_fired_strong_1 = SSM_TR_Off_3_StateCamera;
      }
      else {
        _352_StateCamera_fired_strong_1 = SSM_TR_no_trans_StateCamera;
      }
      StateCamera_fired_strong_1 = _352_StateCamera_fired_strong_1;
      break;
    case SSM_st_TurningOn_StateCamera :
      if (_344_br_1_guard_1_StateCamera_TurningOn) {
        _349_StateCamera_fired_strong_1 = SSM_TR_TurningOn_1_StateCamera;
      }
      else if (_345_br_2_guard_1_StateCamera_TurningOn) {
        _349_StateCamera_fired_strong_1 = SSM_TR_TurningOn_2_StateCamera;
      }
      else if (_346_br_3_guard_1_StateCamera_TurningOn) {
        _349_StateCamera_fired_strong_1 = SSM_TR_TurningOn_3_StateCamera;
      }
      else {
        _349_StateCamera_fired_strong_1 = SSM_TR_no_trans_StateCamera;
      }
      StateCamera_fired_strong_1 = _349_StateCamera_fired_strong_1;
      break;
    case SSM_st_On_StateCamera :
      if (br_1_guard_1_StateCamera_On) {
        _343_StateCamera_fired_strong_1 = SSM_TR_On_1_StateCamera;
      }
      else if (br_2_guard_1_StateCamera_On) {
        _343_StateCamera_fired_strong_1 = SSM_TR_On_2_StateCamera;
      }
      else if (br_3_guard_1_StateCamera_On) {
        _343_StateCamera_fired_strong_1 = SSM_TR_On_3_StateCamera;
      }
      else {
        _343_StateCamera_fired_strong_1 = SSM_TR_no_trans_StateCamera;
      }
      StateCamera_fired_strong_1 = _343_StateCamera_fired_strong_1;
      break;
    case SSM_st_TurningOff_StateCamera :
      if (br_1_guard_1_StateCamera_TurningOff) {
        _340_StateCamera_fired_strong_1 = SSM_TR_TurningOff_1_StateCamera;
      }
      else if (br_2_guard_1_StateCamera_TurningOff) {
        _340_StateCamera_fired_strong_1 = SSM_TR_TurningOff_2_StateCamera;
      }
      else if (br_3_guard_1_StateCamera_TurningOff) {
        _340_StateCamera_fired_strong_1 = SSM_TR_TurningOff_3_StateCamera;
      }
      else {
        _340_StateCamera_fired_strong_1 = SSM_TR_no_trans_StateCamera;
      }
      StateCamera_fired_strong_1 = _340_StateCamera_fired_strong_1;
      break;
    case SSM_st_Fail_StateCamera :
      if (br_1_guard_1_StateCamera_Fail) {
        _337_StateCamera_fired_strong_1 = SSM_TR_Fail_1_StateCamera;
      }
      else {
        _337_StateCamera_fired_strong_1 = SSM_TR_no_trans_StateCamera;
      }
      StateCamera_fired_strong_1 = _337_StateCamera_fired_strong_1;
      break;
    
  }
  switch (StateCamera_state_act_1) {
    case SSM_st_Off_StateCamera :
      _388_StateCamera_fired_1 = StateCamera_fired_strong_1;
      _387_StateCamera_reset_nxt_1 = kcg_false;
      _386_StateCamera_state_nxt_1 = SSM_st_Off_StateCamera;
      StateCamera_fired_1 = _388_StateCamera_fired_1;
      break;
    case SSM_st_TurningOn_StateCamera :
      _380_StateCamera_fired_1 = StateCamera_fired_strong_1;
      _379_StateCamera_reset_nxt_1 = kcg_false;
      _378_StateCamera_state_nxt_1 = SSM_st_TurningOn_StateCamera;
      StateCamera_fired_1 = _380_StateCamera_fired_1;
      break;
    case SSM_st_On_StateCamera :
      _372_StateCamera_fired_1 = StateCamera_fired_strong_1;
      _371_StateCamera_reset_nxt_1 = kcg_false;
      _370_StateCamera_state_nxt_1 = SSM_st_On_StateCamera;
      StateCamera_fired_1 = _372_StateCamera_fired_1;
      break;
    case SSM_st_TurningOff_StateCamera :
      _364_StateCamera_fired_1 = StateCamera_fired_strong_1;
      _363_StateCamera_reset_nxt_1 = kcg_false;
      _362_StateCamera_state_nxt_1 = SSM_st_TurningOff_StateCamera;
      StateCamera_fired_1 = _364_StateCamera_fired_1;
      break;
    case SSM_st_Fail_StateCamera :
      _356_StateCamera_fired_1 = StateCamera_fired_strong_1;
      StateCamera_reset_nxt_1 = kcg_false;
      StateCamera_state_nxt_1 = SSM_st_Fail_StateCamera;
      StateCamera_fired_1 = _356_StateCamera_fired_1;
      break;
    
  }
  if (outC->init3) {
    StateCamera_reset_sel_1 = kcg_false;
  }
  else {
    StateCamera_reset_sel_1 = outC->StateCamera_reset_nxt_1;
  }
  switch (StateCamera_state_act_1) {
    case SSM_st_Off_StateCamera :
      outC->StateCamera_reset_nxt_1 = _387_StateCamera_reset_nxt_1;
      outC->StateCamera_state_nxt_1 = _386_StateCamera_state_nxt_1;
      break;
    case SSM_st_TurningOn_StateCamera :
      outC->StateCamera_reset_nxt_1 = _379_StateCamera_reset_nxt_1;
      outC->StateCamera_state_nxt_1 = _378_StateCamera_state_nxt_1;
      break;
    case SSM_st_On_StateCamera :
      outC->StateCamera_reset_nxt_1 = _371_StateCamera_reset_nxt_1;
      outC->StateCamera_state_nxt_1 = _370_StateCamera_state_nxt_1;
      break;
    case SSM_st_TurningOff_StateCamera :
      outC->StateCamera_reset_nxt_1 = _363_StateCamera_reset_nxt_1;
      outC->StateCamera_state_nxt_1 = _362_StateCamera_state_nxt_1;
      break;
    case SSM_st_Fail_StateCamera :
      outC->StateCamera_reset_nxt_1 = StateCamera_reset_nxt_1;
      outC->StateCamera_state_nxt_1 = StateCamera_state_nxt_1;
      break;
    
  }
  switch (StateCamera_state_sel_1) {
    case SSM_st_Off_StateCamera :
      if (br_1_guard_1_StateCamera_Off) {
        _351_StateCamera_reset_act_1 = kcg_true;
      }
      else if (br_2_guard_1_StateCamera_Off) {
        _351_StateCamera_reset_act_1 = kcg_true;
      }
      else {
        _351_StateCamera_reset_act_1 = br_3_guard_1_StateCamera_Off;
      }
      break;
    case SSM_st_TurningOn_StateCamera :
      if (_344_br_1_guard_1_StateCamera_TurningOn) {
        _348_StateCamera_reset_act_1 = kcg_true;
      }
      else if (_345_br_2_guard_1_StateCamera_TurningOn) {
        _348_StateCamera_reset_act_1 = kcg_true;
      }
      else {
        _348_StateCamera_reset_act_1 = _346_br_3_guard_1_StateCamera_TurningOn;
      }
      break;
    case SSM_st_On_StateCamera :
      if (br_1_guard_1_StateCamera_On) {
        _342_StateCamera_reset_act_1 = kcg_true;
      }
      else if (br_2_guard_1_StateCamera_On) {
        _342_StateCamera_reset_act_1 = kcg_true;
      }
      else {
        _342_StateCamera_reset_act_1 = br_3_guard_1_StateCamera_On;
      }
      break;
    case SSM_st_TurningOff_StateCamera :
      if (br_1_guard_1_StateCamera_TurningOff) {
        _339_StateCamera_reset_act_1 = kcg_true;
      }
      else if (br_2_guard_1_StateCamera_TurningOff) {
        _339_StateCamera_reset_act_1 = kcg_true;
      }
      else {
        _339_StateCamera_reset_act_1 = br_3_guard_1_StateCamera_TurningOff;
      }
      break;
    case SSM_st_Fail_StateCamera :
      StateCamera_reset_act_1 = br_1_guard_1_StateCamera_Fail;
      break;
    
  }
  if (outC->init3) {
    StateCamera_reset_prv_1 = kcg_false;
  }
  else {
    StateCamera_reset_prv_1 = outC->StateCamera_reset_act_1;
  }
  switch (StateCamera_state_sel_1) {
    case SSM_st_Off_StateCamera :
      outC->StateCamera_reset_act_1 = _351_StateCamera_reset_act_1;
      break;
    case SSM_st_TurningOn_StateCamera :
      outC->StateCamera_reset_act_1 = _348_StateCamera_reset_act_1;
      break;
    case SSM_st_On_StateCamera :
      outC->StateCamera_reset_act_1 = _342_StateCamera_reset_act_1;
      break;
    case SSM_st_TurningOff_StateCamera :
      outC->StateCamera_reset_act_1 = _339_StateCamera_reset_act_1;
      break;
    case SSM_st_Fail_StateCamera :
      outC->StateCamera_reset_act_1 = StateCamera_reset_act_1;
      break;
    
  }
  switch (StatePropellers_state_sel_1) {
    case SSM_st_Off_StatePropellers :
      if (br_1_guard_1_StatePropellers_Off) {
        _311_StatePropellers_fired_strong_1 = SSM_TR_Off_1_StatePropellers;
      }
      else if (br_2_guard_1_StatePropellers_Off) {
        _311_StatePropellers_fired_strong_1 = SSM_TR_Off_2_StatePropellers;
      }
      else {
        _311_StatePropellers_fired_strong_1 = SSM_TR_no_trans_StatePropellers;
      }
      StatePropellers_fired_strong_1 = _311_StatePropellers_fired_strong_1;
      break;
    case SSM_st_TurningOn_StatePropellers :
      if (_304_br_1_guard_1_StatePropellers_TurningOn) {
        _308_StatePropellers_fired_strong_1 =
          SSM_TR_TurningOn_1_StatePropellers;
      }
      else if (_305_br_2_guard_1_StatePropellers_TurningOn) {
        _308_StatePropellers_fired_strong_1 =
          SSM_TR_TurningOn_2_StatePropellers;
      }
      else {
        _308_StatePropellers_fired_strong_1 = SSM_TR_no_trans_StatePropellers;
      }
      StatePropellers_fired_strong_1 = _308_StatePropellers_fired_strong_1;
      break;
    case SSM_st_On_StatePropellers :
      if (br_1_guard_1_StatePropellers_On) {
        _303_StatePropellers_fired_strong_1 = SSM_TR_On_1_StatePropellers;
      }
      else if (br_2_guard_1_StatePropellers_On) {
        _303_StatePropellers_fired_strong_1 = SSM_TR_On_2_StatePropellers;
      }
      else {
        _303_StatePropellers_fired_strong_1 = SSM_TR_no_trans_StatePropellers;
      }
      StatePropellers_fired_strong_1 = _303_StatePropellers_fired_strong_1;
      break;
    case SSM_st_TurningOff_StatePropellers :
      if (br_1_guard_1_StatePropellers_TurningOff) {
        _300_StatePropellers_fired_strong_1 =
          SSM_TR_TurningOff_1_StatePropellers;
      }
      else if (br_2_guard_1_StatePropellers_TurningOff) {
        _300_StatePropellers_fired_strong_1 =
          SSM_TR_TurningOff_2_StatePropellers;
      }
      else {
        _300_StatePropellers_fired_strong_1 = SSM_TR_no_trans_StatePropellers;
      }
      StatePropellers_fired_strong_1 = _300_StatePropellers_fired_strong_1;
      break;
    
  }
  switch (StatePropellers_state_act_1) {
    case SSM_st_Off_StatePropellers :
      _335_StatePropellers_fired_1 = StatePropellers_fired_strong_1;
      _334_StatePropellers_reset_nxt_1 = kcg_false;
      _333_StatePropellers_state_nxt_1 = SSM_st_Off_StatePropellers;
      StatePropellers_fired_1 = _335_StatePropellers_fired_1;
      break;
    case SSM_st_TurningOn_StatePropellers :
      _328_StatePropellers_fired_1 = StatePropellers_fired_strong_1;
      _327_StatePropellers_reset_nxt_1 = kcg_false;
      _326_StatePropellers_state_nxt_1 = SSM_st_TurningOn_StatePropellers;
      StatePropellers_fired_1 = _328_StatePropellers_fired_1;
      break;
    case SSM_st_On_StatePropellers :
      _321_StatePropellers_fired_1 = StatePropellers_fired_strong_1;
      _320_StatePropellers_reset_nxt_1 = kcg_false;
      _319_StatePropellers_state_nxt_1 = SSM_st_On_StatePropellers;
      StatePropellers_fired_1 = _321_StatePropellers_fired_1;
      break;
    case SSM_st_TurningOff_StatePropellers :
      _314_StatePropellers_fired_1 = StatePropellers_fired_strong_1;
      StatePropellers_reset_nxt_1 = kcg_false;
      StatePropellers_state_nxt_1 = SSM_st_TurningOff_StatePropellers;
      StatePropellers_fired_1 = _314_StatePropellers_fired_1;
      break;
    
  }
  if (outC->init3) {
    StatePropellers_reset_sel_1 = kcg_false;
  }
  else {
    StatePropellers_reset_sel_1 = outC->StatePropellers_reset_nxt_1;
  }
  switch (StatePropellers_state_act_1) {
    case SSM_st_Off_StatePropellers :
      outC->StatePropellers_reset_nxt_1 = _334_StatePropellers_reset_nxt_1;
      outC->StatePropellers_state_nxt_1 = _333_StatePropellers_state_nxt_1;
      break;
    case SSM_st_TurningOn_StatePropellers :
      outC->StatePropellers_reset_nxt_1 = _327_StatePropellers_reset_nxt_1;
      outC->StatePropellers_state_nxt_1 = _326_StatePropellers_state_nxt_1;
      break;
    case SSM_st_On_StatePropellers :
      outC->StatePropellers_reset_nxt_1 = _320_StatePropellers_reset_nxt_1;
      outC->StatePropellers_state_nxt_1 = _319_StatePropellers_state_nxt_1;
      break;
    case SSM_st_TurningOff_StatePropellers :
      outC->StatePropellers_reset_nxt_1 = StatePropellers_reset_nxt_1;
      outC->StatePropellers_state_nxt_1 = StatePropellers_state_nxt_1;
      break;
    
  }
  switch (StatePropellers_state_sel_1) {
    case SSM_st_Off_StatePropellers :
      if (br_1_guard_1_StatePropellers_Off) {
        _310_StatePropellers_reset_act_1 = kcg_true;
      }
      else {
        _310_StatePropellers_reset_act_1 = br_2_guard_1_StatePropellers_Off;
      }
      break;
    case SSM_st_TurningOn_StatePropellers :
      if (_304_br_1_guard_1_StatePropellers_TurningOn) {
        _307_StatePropellers_reset_act_1 = kcg_true;
      }
      else {
        _307_StatePropellers_reset_act_1 =
          _305_br_2_guard_1_StatePropellers_TurningOn;
      }
      break;
    case SSM_st_On_StatePropellers :
      if (br_1_guard_1_StatePropellers_On) {
        _302_StatePropellers_reset_act_1 = kcg_true;
      }
      else {
        _302_StatePropellers_reset_act_1 = br_2_guard_1_StatePropellers_On;
      }
      break;
    case SSM_st_TurningOff_StatePropellers :
      if (br_1_guard_1_StatePropellers_TurningOff) {
        StatePropellers_reset_act_1 = kcg_true;
      }
      else {
        StatePropellers_reset_act_1 = br_2_guard_1_StatePropellers_TurningOff;
      }
      break;
    
  }
  if (outC->init3) {
    StatePropellers_reset_prv_1 = kcg_false;
  }
  else {
    StatePropellers_reset_prv_1 = outC->StatePropellers_reset_act_1;
  }
  switch (StatePropellers_state_sel_1) {
    case SSM_st_Off_StatePropellers :
      outC->StatePropellers_reset_act_1 = _310_StatePropellers_reset_act_1;
      break;
    case SSM_st_TurningOn_StatePropellers :
      outC->StatePropellers_reset_act_1 = _307_StatePropellers_reset_act_1;
      break;
    case SSM_st_On_StatePropellers :
      outC->StatePropellers_reset_act_1 = _302_StatePropellers_reset_act_1;
      break;
    case SSM_st_TurningOff_StatePropellers :
      outC->StatePropellers_reset_act_1 = StatePropellers_reset_act_1;
      break;
    
  }
  switch (StateHorizonSensor_state_sel_1) {
    case SSM_st_Off_StateHorizonSensor :
      if (_257_br_1_guard_1_StateHorizonSensor_Off) {
        _262_StateHorizonSensor_fired_strong_1 =
          SSM_TR_Off_1_StateHorizonSensor;
      }
      else if (_258_br_2_guard_1_StateHorizonSensor_Off) {
        _262_StateHorizonSensor_fired_strong_1 =
          SSM_TR_Off_2_StateHorizonSensor;
      }
      else if (_259_br_3_guard_1_StateHorizonSensor_Off) {
        _262_StateHorizonSensor_fired_strong_1 =
          SSM_TR_Off_3_StateHorizonSensor;
      }
      else {
        _262_StateHorizonSensor_fired_strong_1 =
          SSM_TR_no_trans_StateHorizonSensor;
      }
      StateHorizonSensor_fired_strong_1 =
        _262_StateHorizonSensor_fired_strong_1;
      break;
    case SSM_st_TurningOn_StateHorizonSensor :
      if (_251_br_1_guard_1_StateHorizonSensor_TurningOn) {
        _256_StateHorizonSensor_fired_strong_1 =
          SSM_TR_TurningOn_1_StateHorizonSensor;
      }
      else if (_252_br_2_guard_1_StateHorizonSensor_TurningOn) {
        _256_StateHorizonSensor_fired_strong_1 =
          SSM_TR_TurningOn_2_StateHorizonSensor;
      }
      else if (_253_br_3_guard_1_StateHorizonSensor_TurningOn) {
        _256_StateHorizonSensor_fired_strong_1 =
          SSM_TR_TurningOn_3_StateHorizonSensor;
      }
      else {
        _256_StateHorizonSensor_fired_strong_1 =
          SSM_TR_no_trans_StateHorizonSensor;
      }
      StateHorizonSensor_fired_strong_1 =
        _256_StateHorizonSensor_fired_strong_1;
      break;
    case SSM_st_On_StateHorizonSensor :
      if (_245_br_1_guard_1_StateHorizonSensor_On) {
        _250_StateHorizonSensor_fired_strong_1 = SSM_TR_On_1_StateHorizonSensor;
      }
      else if (_246_br_2_guard_1_StateHorizonSensor_On) {
        _250_StateHorizonSensor_fired_strong_1 = SSM_TR_On_2_StateHorizonSensor;
      }
      else if (_247_br_3_guard_1_StateHorizonSensor_On) {
        _250_StateHorizonSensor_fired_strong_1 = SSM_TR_On_3_StateHorizonSensor;
      }
      else {
        _250_StateHorizonSensor_fired_strong_1 =
          SSM_TR_no_trans_StateHorizonSensor;
      }
      StateHorizonSensor_fired_strong_1 =
        _250_StateHorizonSensor_fired_strong_1;
      break;
    case SSM_st_TurningOff_StateHorizonSensor :
      if (_241_br_1_guard_1_StateHorizonSensor_TurningOff) {
        _244_StateHorizonSensor_fired_strong_1 =
          SSM_TR_TurningOff_1_StateHorizonSensor;
      }
      else if (br_2_guard_1_StateHorizonSensor_TurningOff) {
        _244_StateHorizonSensor_fired_strong_1 =
          SSM_TR_TurningOff_2_StateHorizonSensor;
      }
      else if (br_3_guard_1_StateHorizonSensor_TurningOff) {
        _244_StateHorizonSensor_fired_strong_1 =
          SSM_TR_TurningOff_3_StateHorizonSensor;
      }
      else {
        _244_StateHorizonSensor_fired_strong_1 =
          SSM_TR_no_trans_StateHorizonSensor;
      }
      StateHorizonSensor_fired_strong_1 =
        _244_StateHorizonSensor_fired_strong_1;
      break;
    case SSM_st_Fail_StateHorizonSensor :
      if (br_1_guard_1_StateHorizonSensor_Fail) {
        _240_StateHorizonSensor_fired_strong_1 =
          SSM_TR_Fail_1_StateHorizonSensor;
      }
      else {
        _240_StateHorizonSensor_fired_strong_1 =
          SSM_TR_no_trans_StateHorizonSensor;
      }
      StateHorizonSensor_fired_strong_1 =
        _240_StateHorizonSensor_fired_strong_1;
      break;
    
  }
  switch (StateHorizonSensor_state_act_1) {
    case SSM_st_Off_StateHorizonSensor :
      _298_StateHorizonSensor_fired_1 = StateHorizonSensor_fired_strong_1;
      _297_StateHorizonSensor_reset_nxt_1 = kcg_false;
      _296_StateHorizonSensor_state_nxt_1 = SSM_st_Off_StateHorizonSensor;
      StateHorizonSensor_fired_1 = _298_StateHorizonSensor_fired_1;
      break;
    case SSM_st_TurningOn_StateHorizonSensor :
      _290_StateHorizonSensor_fired_1 = StateHorizonSensor_fired_strong_1;
      _289_StateHorizonSensor_reset_nxt_1 = kcg_false;
      _288_StateHorizonSensor_state_nxt_1 = SSM_st_TurningOn_StateHorizonSensor;
      StateHorizonSensor_fired_1 = _290_StateHorizonSensor_fired_1;
      break;
    case SSM_st_On_StateHorizonSensor :
      _282_StateHorizonSensor_fired_1 = StateHorizonSensor_fired_strong_1;
      _281_StateHorizonSensor_reset_nxt_1 = kcg_false;
      _280_StateHorizonSensor_state_nxt_1 = SSM_st_On_StateHorizonSensor;
      StateHorizonSensor_fired_1 = _282_StateHorizonSensor_fired_1;
      break;
    case SSM_st_TurningOff_StateHorizonSensor :
      _274_StateHorizonSensor_fired_1 = StateHorizonSensor_fired_strong_1;
      _273_StateHorizonSensor_reset_nxt_1 = kcg_false;
      _272_StateHorizonSensor_state_nxt_1 =
        SSM_st_TurningOff_StateHorizonSensor;
      StateHorizonSensor_fired_1 = _274_StateHorizonSensor_fired_1;
      break;
    case SSM_st_Fail_StateHorizonSensor :
      _266_StateHorizonSensor_fired_1 = StateHorizonSensor_fired_strong_1;
      StateHorizonSensor_reset_nxt_1 = kcg_false;
      StateHorizonSensor_state_nxt_1 = SSM_st_Fail_StateHorizonSensor;
      StateHorizonSensor_fired_1 = _266_StateHorizonSensor_fired_1;
      break;
    
  }
  if (outC->init3) {
    StateHorizonSensor_reset_sel_1 = kcg_false;
  }
  else {
    StateHorizonSensor_reset_sel_1 = outC->StateHorizonSensor_reset_nxt_1;
  }
  switch (StateHorizonSensor_state_act_1) {
    case SSM_st_Off_StateHorizonSensor :
      outC->StateHorizonSensor_reset_nxt_1 =
        _297_StateHorizonSensor_reset_nxt_1;
      outC->StateHorizonSensor_state_nxt_1 =
        _296_StateHorizonSensor_state_nxt_1;
      break;
    case SSM_st_TurningOn_StateHorizonSensor :
      outC->StateHorizonSensor_reset_nxt_1 =
        _289_StateHorizonSensor_reset_nxt_1;
      outC->StateHorizonSensor_state_nxt_1 =
        _288_StateHorizonSensor_state_nxt_1;
      break;
    case SSM_st_On_StateHorizonSensor :
      outC->StateHorizonSensor_reset_nxt_1 =
        _281_StateHorizonSensor_reset_nxt_1;
      outC->StateHorizonSensor_state_nxt_1 =
        _280_StateHorizonSensor_state_nxt_1;
      break;
    case SSM_st_TurningOff_StateHorizonSensor :
      outC->StateHorizonSensor_reset_nxt_1 =
        _273_StateHorizonSensor_reset_nxt_1;
      outC->StateHorizonSensor_state_nxt_1 =
        _272_StateHorizonSensor_state_nxt_1;
      break;
    case SSM_st_Fail_StateHorizonSensor :
      outC->StateHorizonSensor_reset_nxt_1 = StateHorizonSensor_reset_nxt_1;
      outC->StateHorizonSensor_state_nxt_1 = StateHorizonSensor_state_nxt_1;
      break;
    
  }
  switch (StateHorizonSensor_state_sel_1) {
    case SSM_st_Off_StateHorizonSensor :
      if (_257_br_1_guard_1_StateHorizonSensor_Off) {
        _261_StateHorizonSensor_reset_act_1 = kcg_true;
      }
      else if (_258_br_2_guard_1_StateHorizonSensor_Off) {
        _261_StateHorizonSensor_reset_act_1 = kcg_true;
      }
      else {
        _261_StateHorizonSensor_reset_act_1 =
          _259_br_3_guard_1_StateHorizonSensor_Off;
      }
      break;
    case SSM_st_TurningOn_StateHorizonSensor :
      if (_251_br_1_guard_1_StateHorizonSensor_TurningOn) {
        _255_StateHorizonSensor_reset_act_1 = kcg_true;
      }
      else if (_252_br_2_guard_1_StateHorizonSensor_TurningOn) {
        _255_StateHorizonSensor_reset_act_1 = kcg_true;
      }
      else {
        _255_StateHorizonSensor_reset_act_1 =
          _253_br_3_guard_1_StateHorizonSensor_TurningOn;
      }
      break;
    case SSM_st_On_StateHorizonSensor :
      if (_245_br_1_guard_1_StateHorizonSensor_On) {
        _249_StateHorizonSensor_reset_act_1 = kcg_true;
      }
      else if (_246_br_2_guard_1_StateHorizonSensor_On) {
        _249_StateHorizonSensor_reset_act_1 = kcg_true;
      }
      else {
        _249_StateHorizonSensor_reset_act_1 =
          _247_br_3_guard_1_StateHorizonSensor_On;
      }
      break;
    case SSM_st_TurningOff_StateHorizonSensor :
      if (_241_br_1_guard_1_StateHorizonSensor_TurningOff) {
        _243_StateHorizonSensor_reset_act_1 = kcg_true;
      }
      else if (br_2_guard_1_StateHorizonSensor_TurningOff) {
        _243_StateHorizonSensor_reset_act_1 = kcg_true;
      }
      else {
        _243_StateHorizonSensor_reset_act_1 =
          br_3_guard_1_StateHorizonSensor_TurningOff;
      }
      break;
    case SSM_st_Fail_StateHorizonSensor :
      StateHorizonSensor_reset_act_1 = br_1_guard_1_StateHorizonSensor_Fail;
      break;
    
  }
  if (outC->init3) {
    StateHorizonSensor_reset_prv_1 = kcg_false;
  }
  else {
    StateHorizonSensor_reset_prv_1 = outC->StateHorizonSensor_reset_act_1;
  }
  switch (StateHorizonSensor_state_sel_1) {
    case SSM_st_Off_StateHorizonSensor :
      outC->StateHorizonSensor_reset_act_1 =
        _261_StateHorizonSensor_reset_act_1;
      break;
    case SSM_st_TurningOn_StateHorizonSensor :
      outC->StateHorizonSensor_reset_act_1 =
        _255_StateHorizonSensor_reset_act_1;
      break;
    case SSM_st_On_StateHorizonSensor :
      outC->StateHorizonSensor_reset_act_1 =
        _249_StateHorizonSensor_reset_act_1;
      break;
    case SSM_st_TurningOff_StateHorizonSensor :
      outC->StateHorizonSensor_reset_act_1 =
        _243_StateHorizonSensor_reset_act_1;
      break;
    case SSM_st_Fail_StateHorizonSensor :
      outC->StateHorizonSensor_reset_act_1 = StateHorizonSensor_reset_act_1;
      break;
    
  }
  switch (ManualOperation_state_sel_1) {
    case SSM_st_Enabled_ManualOperation :
      br_2_guard_1_ManualOperation_Enabled = Operating_1;
      if (br_1_guard_1_ManualOperation_Enabled) {
        _224_ManualOperation_fired_strong_1 = SSM_TR_Enabled_1_ManualOperation;
      }
      else if (br_2_guard_1_ManualOperation_Enabled) {
        _224_ManualOperation_fired_strong_1 = SSM_TR_Enabled_2_ManualOperation;
      }
      else {
        _224_ManualOperation_fired_strong_1 = SSM_TR_no_trans_ManualOperation;
      }
      ManualOperation_fired_strong_1 = _224_ManualOperation_fired_strong_1;
      break;
    case SSM_st_Disabled_ManualOperation :
      br_2_guard_1_ManualOperation_Disabled = !Operating_1;
      if (br_1_guard_1_ManualOperation_Disabled) {
        _221_ManualOperation_fired_strong_1 = SSM_TR_Disabled_1_ManualOperation;
      }
      else if (br_2_guard_1_ManualOperation_Disabled) {
        _221_ManualOperation_fired_strong_1 = SSM_TR_Disabled_2_ManualOperation;
      }
      else {
        _221_ManualOperation_fired_strong_1 = SSM_TR_no_trans_ManualOperation;
      }
      ManualOperation_fired_strong_1 = _221_ManualOperation_fired_strong_1;
      break;
    
  }
  switch (ManualOperation_state_act_1) {
    case SSM_st_Enabled_ManualOperation :
      _238_ManualOperation_fired_1 = ManualOperation_fired_strong_1;
      _237_ManualOperation_reset_nxt_1 = kcg_false;
      _236_ManualOperation_state_nxt_1 = SSM_st_Enabled_ManualOperation;
      ManualOperation_fired_1 = _238_ManualOperation_fired_1;
      break;
    case SSM_st_Disabled_ManualOperation :
      _230_ManualOperation_fired_1 = ManualOperation_fired_strong_1;
      ManualOperation_reset_nxt_1 = kcg_false;
      ManualOperation_state_nxt_1 = SSM_st_Disabled_ManualOperation;
      ManualOperation_fired_1 = _230_ManualOperation_fired_1;
      break;
    
  }
  if (outC->init3) {
    ManualOperation_reset_sel_1 = kcg_false;
  }
  else {
    ManualOperation_reset_sel_1 = outC->ManualOperation_reset_nxt_1;
  }
  switch (ManualOperation_state_act_1) {
    case SSM_st_Enabled_ManualOperation :
      outC->ManualOperation_reset_nxt_1 = _237_ManualOperation_reset_nxt_1;
      outC->ManualOperation_state_nxt_1 = _236_ManualOperation_state_nxt_1;
      break;
    case SSM_st_Disabled_ManualOperation :
      outC->ManualOperation_reset_nxt_1 = ManualOperation_reset_nxt_1;
      outC->ManualOperation_state_nxt_1 = ManualOperation_state_nxt_1;
      break;
    
  }
  switch (ManualOperation_state_sel_1) {
    case SSM_st_Enabled_ManualOperation :
      if (br_1_guard_1_ManualOperation_Enabled) {
        _223_ManualOperation_reset_act_1 = kcg_true;
      }
      else {
        _223_ManualOperation_reset_act_1 = br_2_guard_1_ManualOperation_Enabled;
      }
      break;
    case SSM_st_Disabled_ManualOperation :
      if (br_1_guard_1_ManualOperation_Disabled) {
        ManualOperation_reset_act_1 = kcg_true;
      }
      else {
        ManualOperation_reset_act_1 = br_2_guard_1_ManualOperation_Disabled;
      }
      break;
    
  }
  if (outC->init3) {
    ManualOperation_reset_prv_1 = kcg_false;
  }
  else {
    ManualOperation_reset_prv_1 = outC->ManualOperation_reset_act_1;
  }
  switch (ManualOperation_state_sel_1) {
    case SSM_st_Enabled_ManualOperation :
      outC->ManualOperation_reset_act_1 = _223_ManualOperation_reset_act_1;
      break;
    case SSM_st_Disabled_ManualOperation :
      outC->ManualOperation_reset_act_1 = ManualOperation_reset_act_1;
      break;
    
  }
  switch (StateGyroscope_state_sel_1) {
    case SSM_st_Off_StateGyroscope :
      if (br_1_guard_1_StateGyroscope_Off) {
        _183_StateGyroscope_fired_strong_1 = SSM_TR_Off_1_StateGyroscope;
      }
      else if (br_2_guard_1_StateGyroscope_Off) {
        _183_StateGyroscope_fired_strong_1 = SSM_TR_Off_2_StateGyroscope;
      }
      else if (br_3_guard_1_StateGyroscope_Off) {
        _183_StateGyroscope_fired_strong_1 = SSM_TR_Off_3_StateGyroscope;
      }
      else {
        _183_StateGyroscope_fired_strong_1 = SSM_TR_no_trans_StateGyroscope;
      }
      StateGyroscope_fired_strong_1 = _183_StateGyroscope_fired_strong_1;
      break;
    case SSM_st_On_StateGyroscope :
      if (br_1_guard_1_StateGyroscope_On) {
        _180_StateGyroscope_fired_strong_1 = SSM_TR_On_1_StateGyroscope;
      }
      else if (br_2_guard_1_StateGyroscope_On) {
        _180_StateGyroscope_fired_strong_1 = SSM_TR_On_2_StateGyroscope;
      }
      else if (br_3_guard_1_StateGyroscope_On) {
        _180_StateGyroscope_fired_strong_1 = SSM_TR_On_3_StateGyroscope;
      }
      else {
        _180_StateGyroscope_fired_strong_1 = SSM_TR_no_trans_StateGyroscope;
      }
      StateGyroscope_fired_strong_1 = _180_StateGyroscope_fired_strong_1;
      break;
    case SSM_st_TurningOff_StateGyroscope :
      if (_172_br_1_guard_1_StateGyroscope_TurningOff) {
        _177_StateGyroscope_fired_strong_1 = SSM_TR_TurningOff_1_StateGyroscope;
      }
      else if (_173_br_2_guard_1_StateGyroscope_TurningOff) {
        _177_StateGyroscope_fired_strong_1 = SSM_TR_TurningOff_2_StateGyroscope;
      }
      else if (_174_br_3_guard_1_StateGyroscope_TurningOff) {
        _177_StateGyroscope_fired_strong_1 = SSM_TR_TurningOff_3_StateGyroscope;
      }
      else {
        _177_StateGyroscope_fired_strong_1 = SSM_TR_no_trans_StateGyroscope;
      }
      StateGyroscope_fired_strong_1 = _177_StateGyroscope_fired_strong_1;
      break;
    case SSM_st_Fail_StateGyroscope :
      if (br_1_guard_1_StateGyroscope_Fail) {
        _171_StateGyroscope_fired_strong_1 = SSM_TR_Fail_1_StateGyroscope;
      }
      else {
        _171_StateGyroscope_fired_strong_1 = SSM_TR_no_trans_StateGyroscope;
      }
      StateGyroscope_fired_strong_1 = _171_StateGyroscope_fired_strong_1;
      break;
    case SSM_st_TurningOn_StateGyroscope :
      if (br_1_guard_1_StateGyroscope_TurningOn) {
        _168_StateGyroscope_fired_strong_1 = SSM_TR_TurningOn_1_StateGyroscope;
      }
      else if (br_2_guard_1_StateGyroscope_TurningOn) {
        _168_StateGyroscope_fired_strong_1 = SSM_TR_TurningOn_2_StateGyroscope;
      }
      else if (br_3_guard_1_StateGyroscope_TurningOn) {
        _168_StateGyroscope_fired_strong_1 = SSM_TR_TurningOn_3_StateGyroscope;
      }
      else {
        _168_StateGyroscope_fired_strong_1 = SSM_TR_no_trans_StateGyroscope;
      }
      StateGyroscope_fired_strong_1 = _168_StateGyroscope_fired_strong_1;
      break;
    
  }
  switch (StateGyroscope_state_act_1) {
    case SSM_st_Off_StateGyroscope :
      _219_StateGyroscope_fired_1 = StateGyroscope_fired_strong_1;
      _218_StateGyroscope_reset_nxt_1 = kcg_false;
      _217_StateGyroscope_state_nxt_1 = SSM_st_Off_StateGyroscope;
      StateGyroscope_fired_1 = _219_StateGyroscope_fired_1;
      break;
    case SSM_st_On_StateGyroscope :
      _211_StateGyroscope_fired_1 = StateGyroscope_fired_strong_1;
      _210_StateGyroscope_reset_nxt_1 = kcg_false;
      _209_StateGyroscope_state_nxt_1 = SSM_st_On_StateGyroscope;
      StateGyroscope_fired_1 = _211_StateGyroscope_fired_1;
      break;
    case SSM_st_TurningOff_StateGyroscope :
      _203_StateGyroscope_fired_1 = StateGyroscope_fired_strong_1;
      _202_StateGyroscope_reset_nxt_1 = kcg_false;
      _201_StateGyroscope_state_nxt_1 = SSM_st_TurningOff_StateGyroscope;
      StateGyroscope_fired_1 = _203_StateGyroscope_fired_1;
      break;
    case SSM_st_Fail_StateGyroscope :
      _195_StateGyroscope_fired_1 = StateGyroscope_fired_strong_1;
      _194_StateGyroscope_reset_nxt_1 = kcg_false;
      _193_StateGyroscope_state_nxt_1 = SSM_st_Fail_StateGyroscope;
      StateGyroscope_fired_1 = _195_StateGyroscope_fired_1;
      break;
    case SSM_st_TurningOn_StateGyroscope :
      _187_StateGyroscope_fired_1 = StateGyroscope_fired_strong_1;
      StateGyroscope_reset_nxt_1 = kcg_false;
      StateGyroscope_state_nxt_1 = SSM_st_TurningOn_StateGyroscope;
      StateGyroscope_fired_1 = _187_StateGyroscope_fired_1;
      break;
    
  }
  if (outC->init3) {
    StateGyroscope_reset_sel_1 = kcg_false;
  }
  else {
    StateGyroscope_reset_sel_1 = outC->StateGyroscope_reset_nxt_1;
  }
  switch (StateGyroscope_state_act_1) {
    case SSM_st_Off_StateGyroscope :
      outC->StateGyroscope_reset_nxt_1 = _218_StateGyroscope_reset_nxt_1;
      outC->StateGyroscope_state_nxt_1 = _217_StateGyroscope_state_nxt_1;
      break;
    case SSM_st_On_StateGyroscope :
      outC->StateGyroscope_reset_nxt_1 = _210_StateGyroscope_reset_nxt_1;
      outC->StateGyroscope_state_nxt_1 = _209_StateGyroscope_state_nxt_1;
      break;
    case SSM_st_TurningOff_StateGyroscope :
      outC->StateGyroscope_reset_nxt_1 = _202_StateGyroscope_reset_nxt_1;
      outC->StateGyroscope_state_nxt_1 = _201_StateGyroscope_state_nxt_1;
      break;
    case SSM_st_Fail_StateGyroscope :
      outC->StateGyroscope_reset_nxt_1 = _194_StateGyroscope_reset_nxt_1;
      outC->StateGyroscope_state_nxt_1 = _193_StateGyroscope_state_nxt_1;
      break;
    case SSM_st_TurningOn_StateGyroscope :
      outC->StateGyroscope_reset_nxt_1 = StateGyroscope_reset_nxt_1;
      outC->StateGyroscope_state_nxt_1 = StateGyroscope_state_nxt_1;
      break;
    
  }
  switch (StateGyroscope_state_sel_1) {
    case SSM_st_Off_StateGyroscope :
      if (br_1_guard_1_StateGyroscope_Off) {
        _182_StateGyroscope_reset_act_1 = kcg_true;
      }
      else if (br_2_guard_1_StateGyroscope_Off) {
        _182_StateGyroscope_reset_act_1 = kcg_true;
      }
      else {
        _182_StateGyroscope_reset_act_1 = br_3_guard_1_StateGyroscope_Off;
      }
      break;
    case SSM_st_On_StateGyroscope :
      if (br_1_guard_1_StateGyroscope_On) {
        _179_StateGyroscope_reset_act_1 = kcg_true;
      }
      else if (br_2_guard_1_StateGyroscope_On) {
        _179_StateGyroscope_reset_act_1 = kcg_true;
      }
      else {
        _179_StateGyroscope_reset_act_1 = br_3_guard_1_StateGyroscope_On;
      }
      break;
    case SSM_st_TurningOff_StateGyroscope :
      if (_172_br_1_guard_1_StateGyroscope_TurningOff) {
        _176_StateGyroscope_reset_act_1 = kcg_true;
      }
      else if (_173_br_2_guard_1_StateGyroscope_TurningOff) {
        _176_StateGyroscope_reset_act_1 = kcg_true;
      }
      else {
        _176_StateGyroscope_reset_act_1 =
          _174_br_3_guard_1_StateGyroscope_TurningOff;
      }
      break;
    case SSM_st_Fail_StateGyroscope :
      _170_StateGyroscope_reset_act_1 = br_1_guard_1_StateGyroscope_Fail;
      break;
    case SSM_st_TurningOn_StateGyroscope :
      if (br_1_guard_1_StateGyroscope_TurningOn) {
        StateGyroscope_reset_act_1 = kcg_true;
      }
      else if (br_2_guard_1_StateGyroscope_TurningOn) {
        StateGyroscope_reset_act_1 = kcg_true;
      }
      else {
        StateGyroscope_reset_act_1 = br_3_guard_1_StateGyroscope_TurningOn;
      }
      break;
    
  }
  if (outC->init3) {
    StateGyroscope_reset_prv_1 = kcg_false;
  }
  else {
    StateGyroscope_reset_prv_1 = outC->StateGyroscope_reset_act_1;
  }
  switch (StateGyroscope_state_sel_1) {
    case SSM_st_Off_StateGyroscope :
      outC->StateGyroscope_reset_act_1 = _182_StateGyroscope_reset_act_1;
      break;
    case SSM_st_On_StateGyroscope :
      outC->StateGyroscope_reset_act_1 = _179_StateGyroscope_reset_act_1;
      break;
    case SSM_st_TurningOff_StateGyroscope :
      outC->StateGyroscope_reset_act_1 = _176_StateGyroscope_reset_act_1;
      break;
    case SSM_st_Fail_StateGyroscope :
      outC->StateGyroscope_reset_act_1 = _170_StateGyroscope_reset_act_1;
      break;
    case SSM_st_TurningOn_StateGyroscope :
      outC->StateGyroscope_reset_act_1 = StateGyroscope_reset_act_1;
      break;
    
  }
  switch (_504_DebugOrDeploy_state_act) {
    case SSM_st_Debug_DebugOrDeploy :
      outC->init = kcg_false;
      break;
    
  }
  switch (Initialization_state_act_2) {
    case SSM_st_Initializing_Initialization :
      outC->init1 = kcg_false;
      break;
    
  }
  switch (SM1_state_act_1) {
    case SSM_st_Validando_SM1 :
      outC->init2 = kcg_false;
      break;
    
  }
  outC->init3 = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ts05.c
** Generation date: 2014-11-04T20:38:53
*************************************************************$ */

