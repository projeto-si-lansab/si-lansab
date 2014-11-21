/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GitHub/si-lansab/Satellite/TS05/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-04T20:38:53
*************************************************************$ */
#ifndef _ts05_H_
#define _ts05_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* ts05::CDS_SS_InitializationButton_Pressed */ CDS_SS_InitializationButton_Pressed;
  kcg_bool /* ts05::CDS_ES_GyroscopeButton_Pressed */ CDS_ES_GyroscopeButton_Pressed;
  kcg_bool /* ts05::CDS_ES_HorizonSensorButton_Pressed */ CDS_ES_HorizonSensorButton_Pressed;
  kcg_bool /* ts05::CDS_ES_PropellersButton_Pressed */ CDS_ES_PropellersButton_Pressed;
  kcg_bool /* ts05::CDS_ES_CameraButton_Pressed */ CDS_ES_CameraButton_Pressed;
  kcg_bool /* ts05::TEST_DebugSelector_Received */ TEST_DebugSelector_Received;
  kcg_int /* ts05::TEST_DebugSelector_Value */ TEST_DebugSelector_Value;
  kcg_bool /* ts05::TEST_SAT_Ejection_Signal */ TEST_SAT_Ejection_Signal;
  kcg_bool /* ts05::TEST_SAT_Initialization_Success */ TEST_SAT_Initialization_Success;
  kcg_bool /* ts05::TEST_SAT_Initialization_Fail */ TEST_SAT_Initialization_Fail;
  kcg_bool /* ts05::TEST_SAT_OperationMode_Update */ TEST_SAT_OperationMode_Update;
  kcg_int /* ts05::TEST_SAT_OperationMode_Value */ TEST_SAT_OperationMode_Value;
  kcg_bool /* ts05::TEST_SAT_GyroscopeState_Update */ TEST_SAT_GyroscopeState_Update;
  kcg_int /* ts05::TEST_SAT_GyroscopeState_Value */ TEST_SAT_GyroscopeState_Value;
  kcg_bool /* ts05::TEST_SAT_HorizonSensorState_Update */ TEST_SAT_HorizonSensorState_Update;
  kcg_int /* ts05::TEST_SAT_HorizonSensorState_Value */ TEST_SAT_HorizonSensorState_Value;
  kcg_bool /* ts05::TEST_SAT_PropellersState_Update */ TEST_SAT_PropellersState_Update;
  kcg_int /* ts05::TEST_SAT_PropellersState_Value */ TEST_SAT_PropellersState_Value;
  kcg_bool /* ts05::TEST_SAT_CameraState_Update */ TEST_SAT_CameraState_Update;
  kcg_int /* ts05::TEST_SAT_CameraState_Value */ TEST_SAT_CameraState_Value;
  kcg_bool /* ts05::TEST_SAT_AirSpeed_Update */ TEST_SAT_AirSpeed_Update;
  kcg_real /* ts05::TEST_SAT_AirSpeed_Value */ TEST_SAT_AirSpeed_Value;
  kcg_bool /* ts05::TEST_SAT_Altitude_Update */ TEST_SAT_Altitude_Update;
  kcg_real /* ts05::TEST_SAT_Altitude_Value */ TEST_SAT_Altitude_Value;
  kcg_bool /* ts05::TEST_SAT_Latitude_Update */ TEST_SAT_Latitude_Update;
  kcg_real /* ts05::TEST_SAT_Latitude_Value */ TEST_SAT_Latitude_Value;
  kcg_bool /* ts05::TEST_SAT_Longitude_Update */ TEST_SAT_Longitude_Update;
  kcg_real /* ts05::TEST_SAT_Longitude_Value */ TEST_SAT_Longitude_Value;
  kcg_bool /* ts05::TEST_SAT_DeclinationAngle_Update */ TEST_SAT_DeclinationAngle_Update;
  kcg_real /* ts05::TEST_SAT_DeclinationAngle_Value */ TEST_SAT_DeclinationAngle_Value;
  kcg_bool /* ts05::TEST_SAT_Period_Update */ TEST_SAT_Period_Update;
  kcg_real /* ts05::TEST_SAT_Period_Value */ TEST_SAT_Period_Value;
  kcg_bool /* ts05::SAT_AirSpeed_Update */ SAT_AirSpeed_Update;
  kcg_real /* ts05::SAT_AirSpeed_Value */ SAT_AirSpeed_Value;
  kcg_bool /* ts05::SAT_Altitude_Update */ SAT_Altitude_Update;
  kcg_real /* ts05::SAT_Altitude_Value */ SAT_Altitude_Value;
  kcg_bool /* ts05::SAT_Latitude_Update */ SAT_Latitude_Update;
  kcg_real /* ts05::SAT_Latitude_Value */ SAT_Latitude_Value;
  kcg_bool /* ts05::SAT_Longitude_Update */ SAT_Longitude_Update;
  kcg_real /* ts05::SAT_Longitude_Value */ SAT_Longitude_Value;
  kcg_bool /* ts05::SAT_DeclinationAngle_Update */ SAT_DeclinationAngle_Update;
  kcg_real /* ts05::SAT_DeclinationAngle_Value */ SAT_DeclinationAngle_Value;
  kcg_bool /* ts05::SAT_Period_Update */ SAT_Period_Update;
  kcg_real /* ts05::SAT_Period_Value */ SAT_Period_Value;
  kcg_bool /* ts05::SAT_OperationMode_Update */ SAT_OperationMode_Update;
  OperationMode /* ts05::SAT_OperationMode_Value */ SAT_OperationMode_Value;
  kcg_bool /* ts05::SAT_GyroscopeState_Update */ SAT_GyroscopeState_Update;
  kcg_bool /* ts05::SAT_GyroscopeState_Value */ SAT_GyroscopeState_Value;
  kcg_bool /* ts05::SAT_HorizonSensorState_Update */ SAT_HorizonSensorState_Update;
  kcg_bool /* ts05::SAT_HorizonSensorState_Value */ SAT_HorizonSensorState_Value;
  kcg_bool /* ts05::SAT_PropellersState_Update */ SAT_PropellersState_Update;
  kcg_bool /* ts05::SAT_PropellersState_Value */ SAT_PropellersState_Value;
  kcg_bool /* ts05::SAT_CameraState_Update */ SAT_CameraState_Update;
  kcg_bool /* ts05::SAT_CameraState_Value */ SAT_CameraState_Value;
  kcg_bool /* ts05::cam_picture_loaded */ cam_picture_loaded;
  kcg_bool /* ts05::display_load_picture_btn */ display_load_picture_btn;
  kcg_bool /* ts05::SAT_CameraState_Fail */ SAT_CameraState_Fail;
  kcg_bool /* ts05::SAT_GyroscopeState_Fail */ SAT_GyroscopeState_Fail;
  kcg_bool /* ts05::SAT_HorizonSensorState_Fail */ SAT_HorizonSensorState_Fail;
  kcg_bool /* ts05::CDS_Auto_Verify */ CDS_Auto_Verify;
  kcg_bool /* ts05::SAT_Ejection_Signal */ SAT_Ejection_Signal;
  kcg_int /* ts05::SAT_Initialization_Signal */ SAT_Initialization_Signal;
  kcg_bool /* ts05::SAT_Fix_Response */ SAT_Fix_Response;
} inC_ts05;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ts05::CDS_Layer_Req_Active */ CDS_Layer_Req_Active;
  kcg_bool /* ts05::CDS_Layer_Req_Visible */ CDS_Layer_Req_Visible;
  kcg_bool /* ts05::CDS_Emit */ CDS_Emit;
  kcg_int /* ts05::CDS_SS_String_Size */ CDS_SS_String_Size;
  kcg_int /* ts05::CDS_SS_EjectionLED_Color */ CDS_SS_EjectionLED_Color;
  kcg_int /* ts05::CDS_SS_InitializationButton_Enabled */ CDS_SS_InitializationButton_Enabled;
  kcg_int /* ts05::CDS_SS_InitializationButton_Contour */ CDS_SS_InitializationButton_Contour;
  String_SS /* ts05::CDS_SS_InitializationButton_Action */ CDS_SS_InitializationButton_Action;
  kcg_int /* ts05::CDS_ES_String_Size */ CDS_ES_String_Size;
  kcg_int /* ts05::CDS_ES_GyroscopeButton_Enabled */ CDS_ES_GyroscopeButton_Enabled;
  kcg_int /* ts05::CDS_ES_GyroscopeButton_Contour */ CDS_ES_GyroscopeButton_Contour;
  String_ES /* ts05::CDS_ES_GyroscopeButton_Label */ CDS_ES_GyroscopeButton_Label;
  kcg_int /* ts05::CDS_ES_HorizonSensorButton_Enabled */ CDS_ES_HorizonSensorButton_Enabled;
  kcg_int /* ts05::CDS_ES_HorizonSensorButton_Contour */ CDS_ES_HorizonSensorButton_Contour;
  String_ES /* ts05::CDS_ES_HorizonSensorButton_Label */ CDS_ES_HorizonSensorButton_Label;
  kcg_int /* ts05::CDS_ES_PropellersButton_Enabled */ CDS_ES_PropellersButton_Enabled;
  kcg_int /* ts05::CDS_ES_PropellersButton_Contour */ CDS_ES_PropellersButton_Contour;
  String_ES /* ts05::CDS_ES_PropellersButton_Label */ CDS_ES_PropellersButton_Label;
  kcg_int /* ts05::CDS_ES_CameraButton_Enabled */ CDS_ES_CameraButton_Enabled;
  kcg_int /* ts05::CDS_ES_CameraButton_Contour */ CDS_ES_CameraButton_Contour;
  String_ES /* ts05::CDS_ES_CameraButton_Label */ CDS_ES_CameraButton_Label;
  kcg_real /* ts05::CDS_SI_AirSpeed_Value */ CDS_SI_AirSpeed_Value;
  kcg_real /* ts05::CDS_SI_Altitude_Value */ CDS_SI_Altitude_Value;
  kcg_real /* ts05::CDS_SI_Latitude_Value */ CDS_SI_Latitude_Value;
  kcg_real /* ts05::CDS_SI_Longitude_Value */ CDS_SI_Longitude_Value;
  kcg_real /* ts05::CDS_SI_DeclinationAngle_Value */ CDS_SI_DeclinationAngle_Value;
  kcg_real /* ts05::CDS_SI_Period_Value */ CDS_SI_Period_Value;
  kcg_bool /* ts05::SAT_Initialize */ SAT_Initialize;
  kcg_bool /* ts05::SAT_GyroscopeState_Toggle */ SAT_GyroscopeState_Toggle;
  kcg_bool /* ts05::SAT_GyroscopeState_ToggleTo */ SAT_GyroscopeState_ToggleTo;
  kcg_bool /* ts05::SAT_HorizonSensorState_Toggle */ SAT_HorizonSensorState_Toggle;
  kcg_bool /* ts05::SAT_HorizonSensorState_ToggleTo */ SAT_HorizonSensorState_ToggleTo;
  kcg_bool /* ts05::SAT_PropellersState_Toggle */ SAT_PropellersState_Toggle;
  kcg_bool /* ts05::SAT_PropellersState_ToggleTo */ SAT_PropellersState_ToggleTo;
  kcg_bool /* ts05::SAT_CameraState_Toggle */ SAT_CameraState_Toggle;
  kcg_bool /* ts05::SAT_CameraState_ToggleTo */ SAT_CameraState_ToggleTo;
  kcg_bool /* ts05::TEST_DebugSelector_Visible */ TEST_DebugSelector_Visible;
  kcg_int /* ts05::TEST_DebugSelector_Enabled */ TEST_DebugSelector_Enabled;
  kcg_bool /* ts05::TEST_SS_Visible */ TEST_SS_Visible;
  kcg_int /* ts05::TEST_SS_Enabled */ TEST_SS_Enabled;
  kcg_bool /* ts05::TEST_ES_Visible */ TEST_ES_Visible;
  kcg_int /* ts05::TEST_ES_Enabled */ TEST_ES_Enabled;
  kcg_bool /* ts05::TEST_SI_Visible */ TEST_SI_Visible;
  kcg_int /* ts05::TEST_SI_Enabled */ TEST_SI_Enabled;
  kcg_int /* ts05::TEST_SAT_Initialize_Signal */ TEST_SAT_Initialize_Signal;
  kcg_int /* ts05::TEST_SAT_GyroscopeState_Signal */ TEST_SAT_GyroscopeState_Signal;
  kcg_int /* ts05::TEST_SAT_HorizonSensorState_Signal */ TEST_SAT_HorizonSensorState_Signal;
  kcg_int /* ts05::TEST_SAT_PropellersState_Signal */ TEST_SAT_PropellersState_Signal;
  kcg_int /* ts05::TEST_SAT_CameraState_Signal */ TEST_SAT_CameraState_Signal;
  kcg_int /* ts05::display_load_picture_btn_border */ display_load_picture_btn_border;
  kcg_int /* ts05::display_load_picture_enabled */ display_load_picture_enabled;
  kcg_bool /* ts05::cam_take_picture */ cam_take_picture;
  kcg_int /* ts05::CDS_Auto_Verify_Contorno */ CDS_Auto_Verify_Contorno;
  String_ES /* ts05::CDS_Auto_Verify_Label */ CDS_Auto_Verify_Label;
  kcg_int /* ts05::CDS_Auto_VerifyButton_Test_Enable */ CDS_Auto_VerifyButton_Test_Enable;
  kcg_bool /* ts05::SAT_Auto_Verify */ SAT_Auto_Verify;
  kcg_int /* ts05::CDS_AutoVerifyButton_Enabled */ CDS_AutoVerifyButton_Enabled;
  kcg_bool /* ts05::SAT_Fix_Equipments */ SAT_Fix_Equipments;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init3;
  kcg_bool init2;
  kcg_bool init1;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* linear::MemoryBasic::_L4 */ _6__L4_5_1;
  kcg_bool /* linear::MemoryBasic::_L4 */ _L4_4_1;
  kcg_bool /* linear::MemoryBasic::_L4 */ _5__L4_3_1;
  OperationMode /* linear::MemoryBasic::_L4 */ _4__L4_2_1;
  SSM_ST_StateGyroscope /* us14::StateGyroscope */ StateGyroscope_state_nxt_1;
  kcg_bool /* us14::StateGyroscope */ StateGyroscope_reset_act_1;
  kcg_bool /* us14::StateGyroscope */ StateGyroscope_reset_nxt_1;
  SSM_ST_ManualOperation /* us14::ManualOperation */ ManualOperation_state_nxt_1;
  kcg_bool /* us14::ManualOperation */ ManualOperation_reset_act_1;
  kcg_bool /* us14::ManualOperation */ ManualOperation_reset_nxt_1;
  SSM_ST_StateHorizonSensor /* us14::StateHorizonSensor */ StateHorizonSensor_state_nxt_1;
  kcg_bool /* us14::StateHorizonSensor */ StateHorizonSensor_reset_act_1;
  kcg_bool /* us14::StateHorizonSensor */ StateHorizonSensor_reset_nxt_1;
  SSM_ST_StatePropellers /* us14::StatePropellers */ StatePropellers_state_nxt_1;
  kcg_bool /* us14::StatePropellers */ StatePropellers_reset_act_1;
  kcg_bool /* us14::StatePropellers */ StatePropellers_reset_nxt_1;
  SSM_ST_StateCamera /* us14::StateCamera */ StateCamera_state_nxt_1;
  kcg_bool /* us14::StateCamera */ StateCamera_reset_act_1;
  kcg_bool /* us14::StateCamera */ StateCamera_reset_nxt_1;
  SSM_ST_AutoVerifyUS14 /* us14::AutoVerifyUS14 */ AutoVerifyUS14_state_nxt_1;
  kcg_bool /* us14::AutoVerifyUS14 */ AutoVerifyUS14_reset_act_1;
  kcg_bool /* us14::AutoVerifyUS14 */ AutoVerifyUS14_reset_nxt_1;
  kcg_int /* pwlinear::ClockCounter::_L1 */ _L1_2_1_1;
  kcg_bool /* TimedSwitcher::_L10 */ _L10_1_1;
  kcg_int /* TimedSwitcher::Count */ Count_1_1;
  SSM_ST_SM1 /* rhuan::SM1 */ SM1_state_nxt_1;
  kcg_bool /* rhuan::SM1 */ SM1_reset_act_1;
  kcg_bool /* rhuan::SM1 */ SM1_reset_nxt_1;
  kcg_real /* linear::MemoryBasic::_L4 */ _L4_8_1;
  kcg_real /* linear::MemoryBasic::_L4 */ _L4_7_1;
  kcg_real /* linear::MemoryBasic::_L4 */ _L4_5_1;
  kcg_real /* linear::MemoryBasic::_L4 */ _L4_3_1;
  kcg_real /* linear::MemoryBasic::_L4 */ _L4_2_1;
  kcg_real /* linear::MemoryBasic::_L4 */ _L4_1_1;
  kcg_int /* us11::Initialization::Initializing::_L20 */ _L20_2_Initialization_Initializing;
  SSM_ST_Initialization /* us11::Initialization */ Initialization_state_nxt_2;
  kcg_bool /* us11::Initialization */ Initialization_reset_act_2;
  kcg_bool /* us11::Initialization */ Initialization_reset_nxt_2;
  kcg_int /* linear::MemoryBasic::_L4 */ _L4_5;
  SSM_ST_DebugOrDeploy /* ts05::DebugOrDeploy */ DebugOrDeploy_state_nxt;
  kcg_bool /* ts05::DebugOrDeploy */ DebugOrDeploy_reset_act;
  kcg_bool /* ts05::DebugOrDeploy */ DebugOrDeploy_reset_nxt;
  kcg_bool /* ts05::_L2 */ _L2;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_ts05;

/* ===========  node initialization and cycle functions  =========== */
/* ts05 */
extern void ts05(inC_ts05 *inC, outC_ts05 *outC);

extern void ts05_reset(outC_ts05 *outC);

#endif /* _ts05_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ts05.h
** Generation date: 2014-11-04T20:38:53
*************************************************************$ */

