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
    TS01TEST_INPUT_INTERFACE input;

    if (message.to == TS01TESTID) {
        input = message.input_interface.ts01test_input_interface;
        switch (message.from) {
        case TS01ID:
            printf("Received: Message from TS01 \n");
            
            ua_inputs.RocketStatus = input.RocketStatus;
            ua_inputs.SatLaunched = input.SatLaunched;
            
            break;
        }
    }
}

void buildMessage(FRAMEWORK_MESSAGE *message) {
    TS01_INPUT_INTERFACE *output = &(message->input_interface.ts01_input_interface);
    
    message->from = TS01TESTID;
    
    switch (message->to) {
    case TS01ID:
        printf("Sent: Message from TS01 test window \n");

        output->AutoDestruct = ua_outputs.AutoDestruct;
        output->EnableRocketLaunch = ua_outputs.EnableRocketLaunch;
        output->Manual_Override = ua_outputs.Manual_Override;
        output->Manual_StartPhase2 = ua_outputs.Manual_StartPhase2;
        output->Manual_StartPhase3 = ua_outputs.Manual_StartPhase3;
        output->Manual_StartPhaseFinal = ua_outputs.Manual_StartPhaseFinal;
        output->Manual_SatLaunch = ua_outputs.Manual_SatLaunch;

        break;
    }
}

void executeOperator() {
    project2(&ua_inputs, &ua_outputs);
}

void clear_ua_inputs() {
    ua_receive_clear(&ua_inputs, NULL);

    /* clear external inputs, may need additional logic */
    ua_inputs.SignalAutoDestruct = FALSE;
    ua_inputs.SignalLaunch = FALSE;
    ua_inputs.SignalManual = 0;
    ua_inputs.SignalStartPhase2 = FALSE;
    ua_inputs.SignalStartPhase3 = FALSE;
    ua_inputs.SignalStartFinal = FALSE;
    ua_inputs.SignalSatLaunch = FALSE;
    ua_inputs.RocketStatus = FALSE;
    ua_inputs.SatLaunched = FALSE;
}

void clear_ua_outputs() {
    project2_reset(&ua_outputs);
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
