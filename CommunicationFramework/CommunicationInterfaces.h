#ifndef COMMUNICATIONINTERFACES_H
#define COMMUNICATIONINTERFACES_H

#include "kcg_types.h"
#include "kcg_consts.h"

#define TS01ID 1
#define TS02ID 2
#define TS03ID 3
#define TS04ID 4
#define TS05ID 5
#define TS01TESTID 6
#define TS05TESTID 10

typedef struct {
	kcg_bool AutoDestruct;
    kcg_bool EnableRocketLaunch;
    kcg_bool Manual_Notify;
    kcg_int Manual_Override;
    kcg_bool Manual_StartPhase2;
    kcg_bool Manual_StartPhase3;
    kcg_bool Manual_StartPhaseFinal;
    kcg_bool Manual_SatLaunch;
} TS01_INPUT_INTERFACE;

typedef struct {
    kcg_bool RocketStatus;
    kcg_bool SatLaunched;
} TS01TEST_INPUT_INTERFACE;

typedef struct {
    /*TS02 inputs*/
} TS02_INPUT_INTERFACE;

typedef struct {
    /*TS03 inputs*/
} TS03_INPUT_INTERFACE;

typedef struct {
    kcg_bool RocketStatus;
    kcg_bool SatLaunched;
} TS04_INPUT_INTERFACE;

typedef struct {
    /*TS05 inputs*/

    /* US 01 */
    kcg_bool SAT_AirSpeed_Update;
    kcg_real SAT_AirSpeed_Value;
    kcg_bool SAT_Altitude_Update;
    kcg_real SAT_Altitude_Value;
    kcg_bool SAT_Latitude_Update;
    kcg_real SAT_Latitude_Value;
    kcg_bool SAT_Longitude_Update;
    kcg_real SAT_Longitude_Value;
    kcg_bool SAT_DeclinationAngle_Update;
    kcg_real SAT_DeclinationAngle_Value;
    kcg_bool SAT_Period_Update;
    kcg_real SAT_Period_Value;
    
    /* US 05 */
    kcg_bool SAT_OperationMode_Update;
    kcg_int SAT_OperationMode_Value;
    kcg_bool SAT_GyroscopeState_Update;
    kcg_bool SAT_GyroscopeState_Value;
    kcg_bool SAT_HorizonSensorState_Update;
    kcg_bool SAT_HorizonSensorState_Value;
    kcg_bool SAT_PropellersState_Update;
    kcg_bool SAT_PropellersState_Value;
    kcg_bool SAT_CameraState_Update;
    kcg_bool SAT_CameraState_Value;
    
    /* US 11 */
    kcg_bool SAT_Ejection_Signal;
    kcg_int SAT_Initialization_Signal;

    /* US 12 */
    kcg_bool cam_picture_loaded;

    /* US 14 */
    kcg_bool SAT_Fix_Response;
    kcg_bool SAT_CameraState_Fail;
    kcg_bool SAT_GyroscopeState_Fail;
    kcg_bool SAT_HorizonSensorState_Fail;

} TS05_INPUT_INTERFACE;

typedef struct {

    /* US 05 */
    kcg_bool SAT_GyroscopeState_Toggle;
    kcg_bool SAT_GyroscopeState_ToggleTo;
    kcg_bool SAT_HorizonSensorState_Toggle;
    kcg_bool SAT_HorizonSensorState_ToggleTo;
    kcg_bool SAT_PropellersState_Toggle;
    kcg_bool SAT_PropellersState_ToggleTo;
    kcg_bool SAT_CameraState_Toggle;
    kcg_bool SAT_CameraState_ToggleTo;
    
    /* US 11 */
    kcg_bool SAT_Initialize;    

    /* US 12 */
    kcg_bool cam_take_picture;

    /* US 14 */
    kcg_bool SAT_Auto_Verify;
    kcg_bool SAT_Fix_Equipments;

} TS05TEST_INPUT_INTERFACE;

typedef union {
	TS01_INPUT_INTERFACE ts01_input_interface;
	TS02_INPUT_INTERFACE ts02_input_interface;
	TS03_INPUT_INTERFACE ts03_input_interface;
	TS04_INPUT_INTERFACE ts04_input_interface;
	TS05_INPUT_INTERFACE ts05_input_interface;
    TS01TEST_INPUT_INTERFACE ts01test_input_interface;
	TS05TEST_INPUT_INTERFACE ts05test_input_interface;
} INPUT_INTERFACE;

typedef struct {
	int to, from;
    INPUT_INTERFACE input_interface;
} FRAMEWORK_MESSAGE;

#define MSG_SIZE 2048

#endif