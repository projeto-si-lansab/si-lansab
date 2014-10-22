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
    TS04_INPUT_INTERFACE input;

    if (message.to == TS04ID) {
        input = message.input_interface.ts04_input_interface;
        switch (message.from) {
        case TS01ID:
            printf("Received: Message from TS01 to TS04 \n");
            ua_inputs.RocketStatus = input.RocketStatus;
            ua_inputs.SatLaunched = input.SatLaunched;
            break;
        case TS02ID:
            printf("Received: Message from TS02 to TS01 \n");
            break;
        case TS03ID:
            printf("Received: Message from TS03 to TS01 \n");
            break;
        case TS04ID:
            printf("Received: Message from TS04 to TS01 \n");
            break;
        case TS05ID:
            printf("Received: Message from TS05 to TS01 \n");
            break;
        }
    }
}

void buildMessage(FRAMEWORK_MESSAGE *message) {
    message->from = TS04ID;
    switch (message->to) {
    case TS01ID:
        printf("Sent: Message from TS04 to TS01 \n");
        TS01_INPUT_INTERFACE *output1 = &(message->input_interface.ts01_input_interface);
        output1->AutoDestruct = ua_outputs.AutoDestruct;
        output1->EnableRocketLaunch = ua_outputs.EnableRocketLaunch;
        output1->Manual_Override = ua_outputs.Manual_Override;
        output1->Manual_StartPhase2 = ua_outputs.Manual_StartPhase2;
        output1->Manual_StartPhase3 = ua_outputs.Manual_StartPhase3;
        output1->Manual_StartPhaseFinal = ua_outputs.Manual_StartPhaseFinal;
        output1->Manual_SatLaunch = ua_outputs.Manual_SatLaunch;
        break;
    case TS02ID:
        printf("Sent: Message from TS01 to TS02 \n");
        TS02_INPUT_INTERFACE *output2 = &(message->input_interface.ts02_input_interface);
        /*output->SignalFromTeam1 = ua_outputs.SignalToTeam2;*/
        break;
    case TS03ID:
        printf("Sent: Message from TS01 to TS03 \n");
        TS03_INPUT_INTERFACE *output3 = &(message->input_interface.ts03_input_interface);
        /*output->SignalFromTeam1 = ua_outputs.SignalToTeam3;*/
        break;
    case TS04ID:
        printf("Sent: Message from TS01 to TS04 \n");
        TS04_INPUT_INTERFACE *output4 = &(message->input_interface.ts04_input_interface);
        /*output->SignalFromTeam1 = ua_outputs.SignalToTeam4;*/
        break;
    case TS05ID:
        printf("Sent: Message from TS01 to TS05 \n");
        TS05_INPUT_INTERFACE *output5 = &(message->input_interface.ts05_input_interface);
        /*output->SignalFromTeam1 = ua_outputs.SignalToTeam5;*/
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
