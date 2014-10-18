#ifndef COMMUNICATIONINTERFACES_H
#define COMMUNICATIONINTERFACES_H

#include "kcg_types.h"
#include "kcg_consts.h"

#define TS01 1
#define TS02 2
#define TS03 3
#define TS04 4
#define TS05 5

typedef struct {
    kcg_bool AutoDestruct;
    kcg_bool EnableRocketLaunch;
} TS01_INPUT_INTERFACE;

typedef struct {
    kcg_bool SignalFromTeam1;
} TS02_INPUT_INTERFACE;

typedef union {
	TS01_INPUT_INTERFACE ts01_input_interface;
	TS02_INPUT_INTERFACE ts02_input_interface;
} INPUT_INTERFACE;

typedef struct {
	int to, from;
    INPUT_INTERFACE input_interface;
} FRAMEWORK_MESSAGE;

#define MSG_SIZE 2048

#endif