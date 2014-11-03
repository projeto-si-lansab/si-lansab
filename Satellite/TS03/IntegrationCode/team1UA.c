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
    /*
    TEAM1_INPUT_INTERFACE input;

    if (message.to == TEAM1) {
        input = message.input_interface.team1_input_interface;
        switch (message.from) {
        case TEAM2:
            printf("Received: Message from TEAM2 to TEAM1 \n");
            //ua_inputs.SignalFromTeam2 = input.SignalFromTeam2;
            break;
        }
    }
    */
}

void buildMessage(FRAMEWORK_MESSAGE *message) {
    /*
    message->from = TEAM1;
    switch (message->to) {
    case TEAM2:
        printf("Sent: Message from TEAM1 to TEAM2 \n");
        TEAM2_INPUT_INTERFACE *output = &(message->input_interface.team2_input_interface);
        //output->SignalFromTeam1 = ua_outputs.SignalToTeam2;
    }
    */
}

void executeOperator() {
    /*
    project1(&ua_inputs, &ua_outputs);
    */
}

void clear_ua_inputs() {
    /*
    ua_receive_clear(&ua_inputs, NULL);

    ua_inputs.SignalFromTeam2 = FALSE;
    */
}

void clear_ua_outputs() {
    /*
    project1_reset(&ua_outputs);
    */
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
