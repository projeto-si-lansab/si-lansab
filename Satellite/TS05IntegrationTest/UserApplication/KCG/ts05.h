/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GitHub/si-lansab/Satellite/TS05IntegrationTest/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-04T20:40:08
*************************************************************$ */
#ifndef _ts05_H_
#define _ts05_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* ts05::SAT_Initialize */ SAT_Initialize;
  kcg_bool /* ts05::SAT_GyroscopeState_Toggle */ SAT_GyroscopeState_Toggle;
  kcg_bool /* ts05::SAT_GyroscopeState_ToggleTo */ SAT_GyroscopeState_ToggleTo;
  kcg_bool /* ts05::SAT_HorizonSensorState_Toggle */ SAT_HorizonSensorState_Toggle;
  kcg_bool /* ts05::SAT_HorizonSensorState_ToggleTo */ SAT_HorizonSensorState_ToggleTo;
  kcg_bool /* ts05::SAT_PropellersState_Toggle */ SAT_PropellersState_Toggle;
  kcg_bool /* ts05::SAT_PropellersState_ToggleTo */ SAT_PropellersState_ToggleTo;
  kcg_bool /* ts05::SAT_CameraState_Toggle */ SAT_CameraState_Toggle;
  kcg_bool /* ts05::SAT_CameraState_ToggleTo */ SAT_CameraState_ToggleTo;
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
  kcg_bool /* ts05::envia_foto_btn */ envia_foto_btn;
  kcg_bool /* ts05::cam_take_picture */ cam_take_picture;
  kcg_bool /* ts05::SAT_Auto_Verify */ SAT_Auto_Verify;
  kcg_bool /* ts05::TEST_Camera_Fail_Status_Changed */ TEST_Camera_Fail_Status_Changed;
  kcg_bool /* ts05::Test_Gyroscope_Fail_Status_Changed */ Test_Gyroscope_Fail_Status_Changed;
  kcg_bool /* ts05::Test_HorizonSensor_Fail_Status_Changed */ _1_Test_HorizonSensor_Fail_Status_Changed;
  kcg_int /* ts05::TEST_Camera_Fail_Status_Value */ TEST_Camera_Fail_Status_Value;
  kcg_int /* ts05::Test_Gyroscope_Fail_Status_Value */ Test_Gyroscope_Fail_Status_Value;
  kcg_int /* ts05::Test_HorizonSensor_Fail_Status_Value */ Test_HorizonSensor_Fail_Status_Value;
  kcg_bool /* ts05::SAT_Fix_Equipments */ SAT_Fix_Equipments;
} inC_ts05;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ts05::CDS_Layer_Req_Active */ CDS_Layer_Req_Active;
  kcg_bool /* ts05::CDS_Layer_Req_Visible */ CDS_Layer_Req_Visible;
  kcg_bool /* ts05::CDS_Emit */ CDS_Emit;
  kcg_int /* ts05::TEST_SAT_Initialize_Signal */ TEST_SAT_Initialize_Signal;
  kcg_int /* ts05::TEST_SAT_GyroscopeState_Signal */ TEST_SAT_GyroscopeState_Signal;
  kcg_int /* ts05::TEST_SAT_HorizonSensorState_Signal */ TEST_SAT_HorizonSensorState_Signal;
  kcg_int /* ts05::TEST_SAT_PropellersState_Signal */ TEST_SAT_PropellersState_Signal;
  kcg_int /* ts05::TEST_SAT_CameraState_Signal */ TEST_SAT_CameraState_Signal;
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
  kcg_bool /* ts05::SAT_Ejection_Signal */ SAT_Ejection_Signal;
  kcg_int /* ts05::SAT_Initialization_Signal */ SAT_Initialization_Signal;
  kcg_bool /* ts05::cam_picture_loaded */ cam_picture_loaded;
  kcg_int /* ts05::display_picture_resquest_state */ display_picture_resquest_state;
  kcg_bool /* ts05::SAT_CameraState_Fail */ SAT_CameraState_Fail;
  kcg_bool /* ts05::SAT_GyroscopeState_Fail */ SAT_GyroscopeState_Fail;
  kcg_bool /* ts05::SAT_HorizonSensorState_Fail */ SAT_HorizonSensorState_Fail;
  kcg_int /* ts05::Test_Auto_Verify */ Test_Auto_Verify;
  kcg_bool /* ts05::SAT_Fix_Response */ SAT_Fix_Response;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* linear::MemoryBasic::_L4 */ _L4_3;
  kcg_int /* linear::MemoryBasic::_L4 */ _L4_2;
  kcg_int /* linear::MemoryBasic::_L4 */ _L4_1;
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
** Generation date: 2014-11-04T20:40:08
*************************************************************$ */

