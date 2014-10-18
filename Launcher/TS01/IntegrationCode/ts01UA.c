#include <stdio.h>
#include <stdlib.h>

#include "CommunicationInterfaces.h"
#include "OperatorInformation.h"

#ifndef TRUE
#define TRUE kcg_true
#define FALSE kcg_false
#endif

operator_input_type ua_inputs;
operator_output_type ua_outputs;

void receiveMessage(FRAMEWORK_MESSAGE message) {
    TS01_INPUT_INTERFACE input;

    if (message.to == TS01) {
        input = message.input_interface.ts01_input_interface;
        switch (message.from) {
        case TS04:
            printf("Received: Message from TS04 to TS01 \n");
            ua_inputs.AutoDestruct = input.AutoDestruct;
            ua_inputs.EnableRocketLaunch = input.EnableRocketLaunch;
            break;
        }
    }
}

void buildMessage(FRAMEWORK_MESSAGE *message) {
    /*message->from = TS01;
    switch (message->to) {
    case TS04:
        printf("Sent: Message from TS01 to TS04 \n");
        TS04_INPUT_INTERFACE *output = &(message->input_interface.ts04_input_interface);
        output->SignalFromTeam1 = ua_outputs.SignalToTeam2;
    }*/
}

void executeOperator() {
    Main(&ua_inputs, &ua_outputs);
}

void clear_ua_inputs() {
    ua_receive_clear(&ua_inputs, NULL);

    ua_inputs.AutoDestruct = FALSE;
}

void clear_ua_outputs() {
    Main_reset(&ua_outputs);
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
