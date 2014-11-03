/* missionPhases_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "SmuMapping.h"
#include "missionPhases_newtype.h"
#include "missionPhases_newmapping.h"

/* iterators */

/* clock active helper functions */
static int isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition (void* pHandle) { return (*(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition*)pHandle == SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition); }
static int isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition (void* pHandle) { return (*(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition*)pHandle == SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition); }
static int isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition (void* pHandle) { return (*(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition*)pHandle == SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition); }
static int isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase (void* pHandle) { return (*(SSM_ST_NPhase_OpPhases_NormalPhase*)pHandle == SSM_st_AttControl_OpPhases_NormalPhase_NPhase); }
static int isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase (void* pHandle) { return (*(SSM_ST_NPhase_OpPhases_NormalPhase*)pHandle == SSM_st_Payload_OpPhases_NormalPhase_NPhase); }
static int isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase (void* pHandle) { return (*(SSM_ST_NPhase_OpPhases_NormalPhase*)pHandle == SSM_st_SafeMode_OpPhases_NormalPhase_NPhase); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_39, 2);
MAP_DECL(scope_38, 7);
MAP_DECL(scope_37, 10);
MAP_DECL(scope_36, 1);
MAP_DECL(scope_35, 2);
MAP_DECL(scope_34, 1);
MAP_DECL(scope_33, 1);
MAP_DECL(scope_32, 16);
MAP_DECL(scope_31, 1);
MAP_DECL(scope_30, 1);
MAP_DECL(scope_29, 16);
MAP_DECL(scope_26, 5);
MAP_DECL(scope_25, 12);
MAP_DECL(scope_24, 1);
MAP_DECL(scope_23, 1);
MAP_DECL(scope_22, 1);
MAP_DECL(scope_21, 2);
MAP_DECL(scope_20, 1);
MAP_DECL(scope_19, 1);
MAP_DECL(scope_18, 18);
MAP_DECL(scope_17, 1);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_15, 14);
MAP_DECL(scope_12, 5);
MAP_DECL(scope_11, 12);
MAP_DECL(scope_10, 1);
MAP_DECL(scope_9, 1);
MAP_DECL(scope_8, 11);
MAP_DECL(scope_7, 1);
MAP_DECL(scope_6, 1);
MAP_DECL(scope_5, 23);
MAP_DECL(scope_2, 4);
MAP_DECL(scope_1, 71);
MAP_DECL(scope_0, 1);

/* controlAlgorithm/ controlAlgorithm */
static const MappingEntry scope_39_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "ControlAlgorithmActive", NULL, sizeof(kcg_bool), offsetof(outC_controlAlgorithm, ControlAlgorithmActive), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_controlAlgorithm, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL}
};
static const MappingScope scope_39 = {
  "controlAlgorithm/ controlAlgorithm",
  scope_39_entries, 2,
};

/* TestActuators/ TestActuators */
static const MappingEntry scope_38_entries[7] = {
  /* 0 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), offsetof(outC_TestActuators, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 1 */ { MAP_OUTPUT, "ActuatorsStatus", NULL, sizeof(kcg_bool), offsetof(outC_TestActuators, ActuatorsStatus), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 2 */ { MAP_LOCAL, "MagneticTorquers@mem", NULL, sizeof(kcg_bool), offsetof(outC_TestActuators, rem_MagneticTorquers), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 3 */ { MAP_LOCAL, "Reactionwheels@mem", NULL, sizeof(kcg_bool), offsetof(outC_TestActuators, rem_Reactionwheels), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_TestActuators, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_TestActuators, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_TestActuators, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL}
};
static const MappingScope scope_38 = {
  "TestActuators/ TestActuators",
  scope_38_entries, 7,
};

/* ReadSensors/ ReadSensors */
static const MappingEntry scope_37_entries[10] = {
  /* 0 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_ReadSensors, init), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 1 */ { MAP_LOCAL, "Accelerometers@mem", NULL, sizeof(kcg_bool), offsetof(outC_ReadSensors, rem_Accelerometers), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 2 */ { MAP_LOCAL, "Gyroscopes@mem", NULL, sizeof(kcg_bool), offsetof(outC_ReadSensors, rem_Gyroscopes), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 3 */ { MAP_OUTPUT, "SensorsStatus", NULL, sizeof(kcg_bool), offsetof(outC_ReadSensors, SensorsStatus), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 4 */ { MAP_LOCAL, "SunSensor@mem", NULL, sizeof(kcg_bool), offsetof(outC_ReadSensors, rem_SunSensor), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_ReadSensors, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_ReadSensors, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_ReadSensors, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_ReadSensors, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_ReadSensors, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL}
};
static const MappingScope scope_37 = {
  "ReadSensors/ ReadSensors",
  scope_37_entries, 10,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode:<1 */
static const MappingEntry scope_36_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_fired_strong_OpPhases_NormalPhase */, NULL}
};
static const MappingScope scope_36 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode:<1",
  scope_36_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode: */
static const MappingEntry scope_35_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_36},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_OpPhases_NormalPhase_NPhase_SafeMode, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase, NULL}
};
static const MappingScope scope_35 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode:",
  scope_35_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:<1 */
static const MappingEntry scope_34_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_fired_strong_OpPhases_NormalPhase */, NULL}
};
static const MappingScope scope_34 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:<1",
  scope_34_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:<2 */
static const MappingEntry scope_33_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_fired_OpPhases_NormalPhase */, NULL}
};
static const MappingScope scope_33 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:<2",
  scope_33_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload: */
static const MappingEntry scope_32_entries[16] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_34},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_33},
  /* 2 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Payload_weakb_clock_OpPhases_NormalPhase_NPhase, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 3 */ { MAP_INSTANCE, "ReadSensors 11", NULL, sizeof(outC_ReadSensors), (int)&outputs_ctx.Context_11, NULL, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, &scope_37},
  /* 4 */ { MAP_INSTANCE, "TestActuators 7", NULL, sizeof(outC_TestActuators), (int)&outputs_ctx.Context_7, NULL, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, &scope_38},
  /* 5 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), (int)&outputs_ctx._L10_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_real_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 6 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L11_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 7 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L12_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L13_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 9 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L14_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 10 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L15_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 11 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L16_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 12 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L17_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 13 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L18_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 14 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L19_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 15 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL}
};
static const MappingScope scope_32 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:",
  scope_32_entries, 16,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:<2 */
static const MappingEntry scope_31_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_fired_strong_OpPhases_NormalPhase */, NULL}
};
static const MappingScope scope_31 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:<2",
  scope_31_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:<1 */
static const MappingEntry scope_30_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_fired_strong_OpPhases_NormalPhase */, NULL}
};
static const MappingScope scope_30 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:<1",
  scope_30_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl: */
static const MappingEntry scope_29_entries[16] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_30},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_31},
  /* 2 */ { MAP_INSTANCE, "ReadSensors 10", NULL, sizeof(outC_ReadSensors), (int)&outputs_ctx.Context_10, NULL, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, &scope_37},
  /* 3 */ { MAP_INSTANCE, "TestActuators 6", NULL, sizeof(outC_TestActuators), (int)&outputs_ctx._2_Context_6, NULL, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, &scope_38},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L109_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1110_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1211_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1312_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 8 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1413_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 9 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1514_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 10 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1615_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 11 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1716_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 12 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L188_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 13 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L2_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L917_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 15 */ { MAP_INSTANCE, "controlAlgorithm 2", NULL, sizeof(outC_controlAlgorithm), (int)&outputs_ctx.Context_2, NULL, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, &scope_39}
};
static const MappingScope scope_29 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:",
  scope_29_entries, 16,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase: */
static const MappingEntry scope_26_entries[5] = {
  /* 0 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(SSM_ST_NPhase_OpPhases_NormalPhase), (int)&outputs_ctx._6_NPhase_clock_OpPhases_NormalPhase, &_Type_SSM_ST_NPhase_OpPhases_NormalPhase_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(SSM_ST_NPhase_OpPhases_NormalPhase), (int)&outputs_ctx.NPhase_clock_OpPhases_NormalPhase, &_Type_SSM_ST_NPhase_OpPhases_NormalPhase_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_STATE, "AttControl:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_state_act_OpPhases_NormalPhase */, &scope_29},
  /* 3 */ { MAP_STATE, "Payload:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_state_act_OpPhases_NormalPhase */, &scope_32},
  /* 4 */ { MAP_STATE, "SafeMode:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_state_act_OpPhases_NormalPhase */, &scope_35}
};
static const MappingScope scope_26 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:",
  scope_26_entries, 5,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase: */
static const MappingEntry scope_25_entries[12] = {
  /* 0 */ { MAP_AUTOMATON, "NPhase:", NULL, 0, 0, NULL, NULL, NULL, &scope_26},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L10_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L11_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L12_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L2_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), (int)&outputs_ctx._L6_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (int)&outputs_ctx._L7_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 10 */ { MAP_LOCAL, "pMode", NULL, sizeof(kcg_bool), (int)&outputs_ctx.pMode_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 11 */ { MAP_LOCAL, "sMode@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.sMode_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_25 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:",
  scope_25_entries, 12,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:<2 */
static const MappingEntry scope_24_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired_strong */, NULL}
};
static const MappingScope scope_24 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:<2",
  scope_24_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:<1 */
static const MappingEntry scope_23_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired_strong */, NULL}
};
static const MappingScope scope_23 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:<1",
  scope_23_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode:<1 */
static const MappingEntry scope_22_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_fired_strong_OpPhases_AttitudeAcquisition */, NULL}
};
static const MappingScope scope_22 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode:<1",
  scope_22_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode: */
static const MappingEntry scope_21_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_22},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L6_OpPhases_AttitudeAcquisition_atacquisition_SafeMode, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition, NULL}
};
static const MappingScope scope_21 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode:",
  scope_21_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:<2 */
static const MappingEntry scope_20_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_fired_strong_OpPhases_AttitudeAcquisition */, NULL}
};
static const MappingScope scope_20 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:<2",
  scope_20_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:<1 */
static const MappingEntry scope_19_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_fired_strong_OpPhases_AttitudeAcquisition */, NULL}
};
static const MappingScope scope_19 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:<1",
  scope_19_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude: */
static const MappingEntry scope_18_entries[18] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_19},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_20},
  /* 2 */ { MAP_INSTANCE, "ReadSensors 9", NULL, sizeof(outC_ReadSensors), (int)&outputs_ctx.Context_9, NULL, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, &scope_37},
  /* 3 */ { MAP_INSTANCE, "TestActuators 5", NULL, sizeof(outC_TestActuators), (int)&outputs_ctx.Context_5, NULL, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, &scope_38},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L12_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L13_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L14_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L15_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 9 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L16_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 10 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L17_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 11 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L18_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 12 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L19_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 13 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L20_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 14 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L21_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 15 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L22_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 16 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L23_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 17 */ { MAP_INSTANCE, "controlAlgorithm 1", NULL, sizeof(outC_controlAlgorithm), (int)&outputs_ctx._1_Context_1, NULL, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, &scope_39}
};
static const MappingScope scope_18 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:",
  scope_18_entries, 18,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:<2 */
static const MappingEntry scope_17_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_fired_strong_OpPhases_AttitudeAcquisition */, NULL}
};
static const MappingScope scope_17 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:<2",
  scope_17_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:<1 */
static const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_fired_strong_OpPhases_AttitudeAcquisition */, NULL}
};
static const MappingScope scope_16 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:<1",
  scope_16_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors: */
static const MappingEntry scope_15_entries[14] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_16},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_17},
  /* 2 */ { MAP_INSTANCE, "ReadSensors 8", NULL, sizeof(outC_ReadSensors), (int)&outputs_ctx.Context_8, NULL, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, &scope_37},
  /* 3 */ { MAP_INSTANCE, "TestActuators 4", NULL, sizeof(outC_TestActuators), (int)&outputs_ctx.Context_4, NULL, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, &scope_38},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1021_OpPhases_AttitudeAcquisition_atacquisition_readsensors, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L11_OpPhases_AttitudeAcquisition_atacquisition_readsensors, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1222_OpPhases_AttitudeAcquisition_atacquisition_readsensors, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1323_OpPhases_AttitudeAcquisition_atacquisition_readsensors, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 8 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1519_OpPhases_AttitudeAcquisition_atacquisition_readsensors, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1818_OpPhases_AttitudeAcquisition_atacquisition_readsensors, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L5_OpPhases_AttitudeAcquisition_atacquisition_readsensors, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L620_OpPhases_AttitudeAcquisition_atacquisition_readsensors, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L7_OpPhases_AttitudeAcquisition_atacquisition_readsensors, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L8_OpPhases_AttitudeAcquisition_atacquisition_readsensors, &_Type_kcg_bool_Utils, &scope_12_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL}
};
static const MappingScope scope_15 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:",
  scope_15_entries, 14,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition: */
static const MappingEntry scope_12_entries[5] = {
  /* 0 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition), (int)&outputs_ctx._7_atacquisition_clock_OpPhases_AttitudeAcquisition, &_Type_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition), (int)&outputs_ctx.atacquisition_clock_OpPhases_AttitudeAcquisition, &_Type_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_STATE, "SafeMode:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_state_act_OpPhases_AttitudeAcquisition */, &scope_21},
  /* 3 */ { MAP_STATE, "readsensors:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_state_act_OpPhases_AttitudeAcquisition */, &scope_15},
  /* 4 */ { MAP_STATE, "refAttitude:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_state_act_OpPhases_AttitudeAcquisition */, &scope_18}
};
static const MappingScope scope_12 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:",
  scope_12_entries, 5,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition: */
static const MappingEntry scope_11_entries[12] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_23},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_24},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1228_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1329_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1430_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1531_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1625_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1726_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1927_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L2024_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 10 */ { MAP_AUTOMATON, "atacquisition:", NULL, 0, 0, NULL, NULL, NULL, &scope_12},
  /* 11 */ { MAP_LOCAL, "sMode@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.sMode_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_11 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:",
  scope_11_entries, 12,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Launch:<2 */
static const MappingEntry scope_10_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired_strong */, NULL}
};
static const MappingScope scope_10 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Launch:<2",
  scope_10_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Launch:<1 */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired_strong */, NULL}
};
static const MappingScope scope_9 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Launch:<1",
  scope_9_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Launch: */
static const MappingEntry scope_8_entries[11] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_9},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_10},
  /* 2 */ { MAP_LOCAL, "AtAcquisition@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AtAcquisition_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), (int)&outputs_ctx._L10_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L12_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L13_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L14_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L28_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), (int)&outputs_ctx._L6_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (int)&outputs_ctx._L7_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_8 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Launch:",
  scope_8_entries, 11,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:<1 */
static const MappingEntry scope_7_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired_strong */, NULL}
};
static const MappingScope scope_7 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:<1",
  scope_7_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:<2 */
static const MappingEntry scope_6_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired */, NULL}
};
static const MappingScope scope_6 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:<2",
  scope_6_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground: */
static const MappingEntry scope_5_entries[23] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_7},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_6},
  /* 2 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Ground_weakb_clock_OpPhases, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_INSTANCE, "ReadSensors 6", NULL, sizeof(outC_ReadSensors), (int)&outputs_ctx.Context_6, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_37},
  /* 4 */ { MAP_INSTANCE, "TestActuators 1", NULL, sizeof(outC_TestActuators), (int)&outputs_ctx.Context_1, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_38},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L13_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L15_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L16_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L18_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 10 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L19_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 12 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L20_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L21_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 14 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L22_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 15 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L23_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 16 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L24_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 17 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L25_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 18 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L26_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 19 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L27_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 20 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), (int)&outputs_ctx._L4_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 21 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (int)&outputs_ctx._L7_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 22 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_5 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:",
  scope_5_entries, 23,
};

/* OperationalScenario/ OperationalScenarioOpPhases: */
static const MappingEntry scope_2_entries[4] = {
  /* 0 */ { MAP_STATE, "AttitudeAcquisition:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_11},
  /* 1 */ { MAP_STATE, "Ground:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_5},
  /* 2 */ { MAP_STATE, "Launch:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_8},
  /* 3 */ { MAP_STATE, "NormalPhase:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_25}
};
static const MappingScope scope_2 = {
  "OperationalScenario/ OperationalScenarioOpPhases:",
  scope_2_entries, 4,
};

/* OperationalScenario/ OperationalScenario */
static const MappingEntry scope_1_entries[71] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init5, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init4, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init3, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_INPUT, "Accelerometers", NULL, sizeof(kcg_bool), (int)&inputs_ctx.Accelerometers, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 5 */ { MAP_LOCAL, "Accelerometers@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_Accelerometers, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 6 */ { MAP_LOCAL, "ApertarBotao@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.ApertarBotao, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 7 */ { MAP_LOCAL, "AtAcquisition@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AtAcquisition, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 8 */ { MAP_INPUT, "AttitudeReference", NULL, sizeof(kcg_int), (int)&inputs_ctx.AttitudeReference, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 9 */ { MAP_LOCAL, "AttitudeReference@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.rem_AttitudeReference, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 10 */ { MAP_OUTPUT, "AttitudeVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AttitudeVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 11 */ { MAP_LOCAL, "AttitudeVisibleLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AttitudeVisibleLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 12 */ { MAP_OUTPUT, "ColorIndex", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 13 */ { MAP_OUTPUT, "ColorIndex2", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex2, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 14 */ { MAP_OUTPUT, "ColorIndex3", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex3, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 15 */ { MAP_OUTPUT, "ColorIndex4", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex4, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 16 */ { MAP_OUTPUT, "Emit2CDS", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Emit2CDS, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 17 */ { MAP_OUTPUT, "GroundVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.GroundVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 18 */ { MAP_LOCAL, "GroundVisibleLocal@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.GroundVisibleLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 19 */ { MAP_INPUT, "Gyroscopes", NULL, sizeof(kcg_bool), (int)&inputs_ctx.Gyroscopes, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 20 */ { MAP_LOCAL, "Gyroscopes@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_Gyroscopes, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 21 */ { MAP_LOCAL, "LaunchPhase@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.LaunchPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 22 */ { MAP_OUTPUT, "Layer1Active", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Layer1Active, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 23 */ { MAP_OUTPUT, "Layer1Visible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Layer1Visible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 24 */ { MAP_INPUT, "MagneticTorquers", NULL, sizeof(kcg_bool), (int)&inputs_ctx.MagneticTorquers, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 25 */ { MAP_LOCAL, "MagneticTorquers@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_MagneticTorquers, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 26 */ { MAP_LOCAL, "NPhase@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 27 */ { MAP_OUTPUT, "NormalPhaseVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NormalPhaseVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 28 */ { MAP_LOCAL, "NormalPhaseVisibleLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NormalPhaseVisibleLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 29 */ { MAP_AUTOMATON, "OpPhases:", NULL, 0, 0, NULL, NULL, NULL, &scope_2},
  /* 30 */ { MAP_INPUT, "PassarFaseBtn", NULL, sizeof(kcg_bool), (int)&inputs_ctx.PassarFaseBtn, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 31 */ { MAP_INPUT, "Power", NULL, sizeof(kcg_bool), (int)&inputs_ctx.Power, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 32 */ { MAP_LOCAL, "Power@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_Power, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 33 */ { MAP_INPUT, "Reactionwheels", NULL, sizeof(kcg_bool), (int)&inputs_ctx.Reactionwheels, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 34 */ { MAP_LOCAL, "Reactionwheels@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_Reactionwheels, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 35 */ { MAP_OUTPUT, "RefAttitude", NULL, sizeof(kcg_bool), (int)&outputs_ctx.RefAttitude, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 36 */ { MAP_OUTPUT, "SafeM", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SafeM, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 37 */ { MAP_OUTPUT, "StartAtAcquisition", NULL, sizeof(kcg_bool), (int)&outputs_ctx.StartAtAcquisition, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 38 */ { MAP_OUTPUT, "StartLaunchPhase", NULL, sizeof(kcg_bool), (int)&outputs_ctx.StartLaunchPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 39 */ { MAP_OUTPUT, "StartNormalPhase", NULL, sizeof(kcg_bool), (int)&outputs_ctx.StartNormalPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 40 */ { MAP_INPUT, "SunSensor", NULL, sizeof(kcg_bool), (int)&inputs_ctx.SunSensor, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 41 */ { MAP_LOCAL, "SunSensor@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_SunSensor, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 42 */ { MAP_INPUT, "Telemetry", NULL, sizeof(kcg_int), (int)&inputs_ctx.Telemetry, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 43 */ { MAP_LOCAL, "Telemetry@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.rem_Telemetry, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 44 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L11, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 45 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 46 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), (int)&outputs_ctx._L13, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 47 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), (int)&outputs_ctx._L14, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 48 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), (int)&outputs_ctx._L15, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 49 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L16, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 50 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L19, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 51 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L20, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 52 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L22, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 53 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L26, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 54 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L27, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 55 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L7, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 56 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L8, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 57 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 58 */ { MAP_LOCAL, "color", NULL, sizeof(kcg_int), (int)&outputs_ctx.color, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 59 */ { MAP_LOCAL, "color3", NULL, sizeof(kcg_int), (int)&outputs_ctx.color3, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 60 */ { MAP_LOCAL, "color4", NULL, sizeof(kcg_int), (int)&outputs_ctx.color4, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 61 */ { MAP_LOCAL, "color_2", NULL, sizeof(kcg_int), (int)&outputs_ctx.color_2, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 62 */ { MAP_OUTPUT, "payMode", NULL, sizeof(kcg_bool), (int)&outputs_ctx.payMode, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 63 */ { MAP_INPUT, "picLocation", NULL, sizeof(kcg_real), (int)&inputs_ctx.picLocation, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 64 */ { MAP_LOCAL, "picLocation@mem", NULL, sizeof(kcg_real), (int)&outputs_ctx.rem_picLocation, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 65 */ { MAP_OUTPUT, "picture", NULL, sizeof(kcg_real), (int)&outputs_ctx.picture, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 66 */ { MAP_OUTPUT, "safeMode", NULL, sizeof(kcg_bool), (int)&outputs_ctx.safeMode, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 67 */ { MAP_INPUT, "takePict", NULL, sizeof(kcg_bool), (int)&inputs_ctx.takePict, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 68 */ { MAP_LOCAL, "takePict@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_takePict, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 69 */ { MAP_INPUT, "upDateSw", NULL, sizeof(kcg_bool), (int)&inputs_ctx.upDateSw, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 70 */ { MAP_LOCAL, "upDateSw@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_upDateSw, &_Type_kcg_bool_Utils, NULL, NULL, NULL}
};
static const MappingScope scope_1 = {
  "OperationalScenario/ OperationalScenario",
  scope_1_entries, 71,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "OperationalScenario", NULL, 0, 0, NULL, NULL, NULL, &scope_1}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

