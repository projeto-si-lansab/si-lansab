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
    /*TS04 inputs*/
} TS04_INPUT_INTERFACE;

typedef struct {
    /*TS05 inputs*/
} TS05_INPUT_INTERFACE;

typedef union {
	TS01_INPUT_INTERFACE ts01_input_interface;
	TS02_INPUT_INTERFACE ts02_input_interface;
	TS03_INPUT_INTERFACE ts03_input_interface;
	TS04_INPUT_INTERFACE ts04_input_interface;
	TS05_INPUT_INTERFACE ts05_input_interface;
    TS01TEST_INPUT_INTERFACE ts01test_input_interface;
} INPUT_INTERFACE;

typedef struct {
	int to, from;
    INPUT_INTERFACE input_interface;
} FRAMEWORK_MESSAGE;

#define MSG_SIZE 2048

#endif