#include <stdio.h>
#include <stdlib.h>

#include "CommunicationInterfaces.h"
#include "IntegrationCode.h"

#ifndef TRUE
#define TRUE kcg_true
#define FALSE kcg_false
#endif

operator_input_type ua_inputs;
operator_output_type ua_outputs;

void receiveMessage(FRAMEWORK_MESSAGE message) {
    TS05TEST_INPUT_INTERFACE input;

    if (message.to == TS05TESTID) {
        input = message.input_interface.ts05test_input_interface;
        switch (message.from) {
        case TS05ID:
            
            /* US 05 */
            ua_inputs.SAT_GyroscopeState_Toggle = input.SAT_GyroscopeState_Toggle;
            ua_inputs.SAT_GyroscopeState_ToggleTo = input.SAT_GyroscopeState_ToggleTo;
            ua_inputs.SAT_HorizonSensorState_Toggle = input.SAT_HorizonSensorState_Toggle;
            ua_inputs.SAT_HorizonSensorState_ToggleTo = input.SAT_HorizonSensorState_ToggleTo;
            ua_inputs.SAT_PropellersState_Toggle = input.SAT_PropellersState_Toggle;
            ua_inputs.SAT_PropellersState_ToggleTo = input.SAT_PropellersState_ToggleTo;
            ua_inputs.SAT_CameraState_Toggle = input.SAT_CameraState_Toggle;
            ua_inputs.SAT_CameraState_ToggleTo = input.SAT_CameraState_ToggleTo;
            
            /* US 11 */
            ua_inputs.SAT_Initialize = input.SAT_Initialize;
            
			/* US12 */
			ua_inputs.cam_take_picture = input.cam_take_picture;
			
            break;
        }
    }
}

void buildMessage(FRAMEWORK_MESSAGE *message) {
    TS05_INPUT_INTERFACE *output = &(message->input_interface.ts05_input_interface);
    
    message->from = message->to;
    message->to = TS05ID;
    switch (message->from) {
    case TS02ID:
        
        /* US 01 */
        output->SAT_AirSpeed_Update = ua_outputs.SAT_AirSpeed_Update;
        output->SAT_AirSpeed_Value = ua_outputs.SAT_AirSpeed_Value;
        output->SAT_Altitude_Update = ua_outputs.SAT_Altitude_Update;
        output->SAT_Altitude_Value = ua_outputs.SAT_Altitude_Value;
        output->SAT_Latitude_Update = ua_outputs.SAT_Latitude_Update;
        output->SAT_Latitude_Value = ua_outputs.SAT_Latitude_Value;
        output->SAT_Longitude_Update = ua_outputs.SAT_Longitude_Update;
        output->SAT_Longitude_Value = ua_outputs.SAT_Longitude_Value;
        output->SAT_DeclinationAngle_Update = ua_outputs.SAT_DeclinationAngle_Update;
        output->SAT_DeclinationAngle_Value = ua_outputs.SAT_DeclinationAngle_Value;
        output->SAT_Period_Update = ua_outputs.SAT_Period_Update;
        output->SAT_Period_Value = ua_outputs.SAT_Period_Value;
        
        /* US 05 */
        output->SAT_OperationMode_Update = ua_outputs.SAT_OperationMode_Update;
        output->SAT_OperationMode_Value = ua_outputs.SAT_OperationMode_Value;
        output->SAT_GyroscopeState_Update = ua_outputs.SAT_GyroscopeState_Update;
        output->SAT_GyroscopeState_Value = ua_outputs.SAT_GyroscopeState_Value;
        output->SAT_HorizonSensorState_Update = ua_outputs.SAT_HorizonSensorState_Update;
        output->SAT_HorizonSensorState_Value = ua_outputs.SAT_HorizonSensorState_Value;
        output->SAT_PropellersState_Update = ua_outputs.SAT_PropellersState_Update;
        output->SAT_PropellersState_Value = ua_outputs.SAT_PropellersState_Value;
        output->SAT_CameraState_Update = ua_outputs.SAT_CameraState_Update;
        output->SAT_CameraState_Value = ua_outputs.SAT_CameraState_Value;
        
        /* US 11 */
        output->SAT_Ejection_Signal = ua_outputs.SAT_Ejection_Signal;
        output->SAT_Initialization_Signal = ua_outputs.SAT_Initialization_Signal;
        
		break;
	case TS03ID:
		/* US 12 */
		output->cam_picture_loaded = ua_outputs.cam_picture_loaded;
		
        break;
    }
}

void executeOperator() {
    ts05(&ua_inputs, &ua_outputs);
}

void clear_ua_inputs() {
    ua_receive_clear(&ua_inputs, NULL);
            
    /* US 05 */
    ua_inputs.SAT_GyroscopeState_Toggle = FALSE;
    ua_inputs.SAT_GyroscopeState_ToggleTo = FALSE;
    ua_inputs.SAT_HorizonSensorState_Toggle = FALSE;
    ua_inputs.SAT_HorizonSensorState_ToggleTo = FALSE;
    ua_inputs.SAT_PropellersState_Toggle = FALSE;
    ua_inputs.SAT_PropellersState_ToggleTo = FALSE;
    ua_inputs.SAT_CameraState_Toggle = FALSE;
    ua_inputs.SAT_CameraState_ToggleTo = FALSE;
    
    /* US 11 */
    ua_inputs.SAT_Initialize = FALSE;
	
	/* US 12 */
	ua_inputs.cam_take_picture = FALSE;
}

void clear_ua_outputs() {
    ts05_reset(&ua_outputs);
}

void initializeCustomLogic() {
    /* Insert your additional logic */
    /* For instance, you can initialize your RaspberryPi controller here */
}

void executeCustomLogic() {
    /* Insert your additional logic */
    /* For instance, you can execute your RaspberryPi controller here */
    /* You can use ua_outputs (which is updated before this function is called) to feed you controller */
}
