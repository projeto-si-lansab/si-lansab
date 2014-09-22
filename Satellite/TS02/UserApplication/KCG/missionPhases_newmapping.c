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
MAP_DECL(scope_44, 2);
MAP_DECL(scope_39, 1);
MAP_DECL(scope_38, 1);
MAP_DECL(scope_37, 2);
MAP_DECL(scope_36, 7);
MAP_DECL(scope_35, 1);
MAP_DECL(scope_34, 1);
MAP_DECL(scope_33, 13);
MAP_DECL(scope_32, 1);
MAP_DECL(scope_31, 1);
MAP_DECL(scope_30, 2);
MAP_DECL(scope_29, 12);
MAP_DECL(scope_26, 5);
MAP_DECL(scope_25, 14);
MAP_DECL(scope_24, 1);
MAP_DECL(scope_23, 1);
MAP_DECL(scope_22, 2);
MAP_DECL(scope_21, 7);
MAP_DECL(scope_20, 1);
MAP_DECL(scope_19, 2);
MAP_DECL(scope_18, 12);
MAP_DECL(scope_17, 1);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_15, 2);
MAP_DECL(scope_14, 5);
MAP_DECL(scope_11, 5);
MAP_DECL(scope_10, 17);
MAP_DECL(scope_9, 1);
MAP_DECL(scope_8, 2);
MAP_DECL(scope_7, 13);
MAP_DECL(scope_6, 1);
MAP_DECL(scope_5, 10);
MAP_DECL(scope_2, 4);
MAP_DECL(scope_1, 61);
MAP_DECL(scope_0, 1);

/* struct__5499 */
static const MappingEntry scope_44_entries[2] = {
  /* 0 */ { MAP_FIELD, ".f", NULL, sizeof(kcg_real), offsetof(struct__5499, f), &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 1 */ { MAP_FIELD, ".k", NULL, sizeof(kcg_int), offsetof(struct__5499, k), &_Type_kcg_int_Utils, NULL, NULL, NULL}
};
static const MappingScope scope_44 = {
  "struct__5499",
  scope_44_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:<1 */
static const MappingEntry scope_39_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired_strong */, NULL}
};
static const MappingScope scope_39 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:<1",
  scope_39_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode:<1 */
static const MappingEntry scope_38_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_fired_strong_OpPhases_NormalPhase */, NULL}
};
static const MappingScope scope_38 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode:<1",
  scope_38_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode:upDateSw 2/ */
static const MappingEntry scope_37_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "Updating", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Updating_2, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_2, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase, NULL}
};
static const MappingScope scope_37 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode:upDateSw 2/",
  scope_37_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode: */
static const MappingEntry scope_36_entries[7] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_38},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_OpPhases_NormalPhase_NPhase_SafeMode, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase, NULL},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L2_OpPhases_NormalPhase_NPhase_SafeMode, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase, NULL},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L3_OpPhases_NormalPhase_NPhase_SafeMode, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase, NULL},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_OpPhases_NormalPhase_NPhase_SafeMode, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase, NULL},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L5_OpPhases_NormalPhase_NPhase_SafeMode, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase, NULL},
  /* 6 */ { MAP_EXPANDED, "upDateSw 2", NULL, 0, 0, NULL, NULL, NULL, &scope_37}
};
static const MappingScope scope_36 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode:",
  scope_36_entries, 7,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:<1 */
static const MappingEntry scope_35_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_fired_strong_OpPhases_NormalPhase */, NULL}
};
static const MappingScope scope_35 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:<1",
  scope_35_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:<2 */
static const MappingEntry scope_34_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_fired_OpPhases_NormalPhase */, NULL}
};
static const MappingScope scope_34 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:<2",
  scope_34_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload: */
static const MappingEntry scope_33_entries[13] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_35},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_34},
  /* 2 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Payload_weakb_clock_OpPhases_NormalPhase_NPhase, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L111_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), (int)&outputs_ctx._L10_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_real_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L210_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), (int)&outputs_ctx._L39_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_real_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L48_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L57_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L6_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L7_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L8_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9_OpPhases_NormalPhase_NPhase_Payload, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_Payload_OpPhases_NormalPhase_NPhase, NULL}
};
static const MappingScope scope_33 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:",
  scope_33_entries, 13,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:<2 */
static const MappingEntry scope_32_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_fired_strong_OpPhases_NormalPhase */, NULL}
};
static const MappingScope scope_32 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:<2",
  scope_32_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:<1 */
static const MappingEntry scope_31_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_fired_strong_OpPhases_NormalPhase */, NULL}
};
static const MappingScope scope_31 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:<1",
  scope_31_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:controlAlgorithm 2/ */
static const MappingEntry scope_30_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "ControlAlgorithmActive", NULL, sizeof(kcg_bool), (int)&outputs_ctx.ControlAlgorithmActive_2, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_23, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL}
};
static const MappingScope scope_30 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:controlAlgorithm 2/",
  scope_30_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl: */
static const MappingEntry scope_29_entries[12] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_31},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_32},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L120_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_int_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L219_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), (int)&outputs_ctx._L318_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_real_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L417_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L516_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L615_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L714_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L813_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L912_OpPhases_NormalPhase_NPhase_AttControl, &_Type_kcg_bool_Utils, &scope_26_entries[1], isActive_SSM_ST_NPhase_OpPhases_NormalPhase_SSM_st_AttControl_OpPhases_NormalPhase_NPhase, NULL},
  /* 11 */ { MAP_EXPANDED, "controlAlgorithm 2", NULL, 0, 0, NULL, NULL, NULL, &scope_30}
};
static const MappingScope scope_29 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:",
  scope_29_entries, 12,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase: */
static const MappingEntry scope_26_entries[5] = {
  /* 0 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(SSM_ST_NPhase_OpPhases_NormalPhase), (int)&outputs_ctx._5_NPhase_clock_OpPhases_NormalPhase, &_Type_SSM_ST_NPhase_OpPhases_NormalPhase_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(SSM_ST_NPhase_OpPhases_NormalPhase), (int)&outputs_ctx.NPhase_clock_OpPhases_NormalPhase, &_Type_SSM_ST_NPhase_OpPhases_NormalPhase_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_STATE, "AttControl:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_state_act_OpPhases_NormalPhase */, &scope_29},
  /* 3 */ { MAP_STATE, "Payload:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_state_act_OpPhases_NormalPhase */, &scope_33},
  /* 4 */ { MAP_STATE, "SafeMode:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK NPhase_state_act_OpPhases_NormalPhase */, &scope_36}
};
static const MappingScope scope_26 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:",
  scope_26_entries, 5,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase: */
static const MappingEntry scope_25_entries[14] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_39},
  /* 1 */ { MAP_AUTOMATON, "NPhase:", NULL, 0, 0, NULL, NULL, NULL, &scope_26},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L10_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L11_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L12_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L2_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), (int)&outputs_ctx._L6_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (int)&outputs_ctx._L7_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 10 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 11 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 12 */ { MAP_LOCAL, "pMode", NULL, sizeof(kcg_bool), (int)&outputs_ctx.pMode_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 13 */ { MAP_LOCAL, "sMode@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.sMode_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_25 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:",
  scope_25_entries, 14,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:<1 */
static const MappingEntry scope_24_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired_strong */, NULL}
};
static const MappingScope scope_24 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:<1",
  scope_24_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode:<1 */
static const MappingEntry scope_23_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_fired_strong_OpPhases_AttitudeAcquisition */, NULL}
};
static const MappingScope scope_23 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode:<1",
  scope_23_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode:upDateSw 1/ */
static const MappingEntry scope_22_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "Updating", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Updating_1, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_1, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition, NULL}
};
static const MappingScope scope_22 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode:upDateSw 1/",
  scope_22_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode: */
static const MappingEntry scope_21_entries[7] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_23},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_OpPhases_AttitudeAcquisition_atacquisition_SafeMode, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L2_OpPhases_AttitudeAcquisition_atacquisition_SafeMode, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L3_OpPhases_AttitudeAcquisition_atacquisition_SafeMode, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_OpPhases_AttitudeAcquisition_atacquisition_SafeMode, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L5_OpPhases_AttitudeAcquisition_atacquisition_SafeMode, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 6 */ { MAP_EXPANDED, "upDateSw 1", NULL, 0, 0, NULL, NULL, NULL, &scope_22}
};
static const MappingScope scope_21 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode:",
  scope_21_entries, 7,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:<1 */
static const MappingEntry scope_20_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_fired_strong_OpPhases_AttitudeAcquisition */, NULL}
};
static const MappingScope scope_20 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:<1",
  scope_20_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:controlAlgorithm 1/ */
static const MappingEntry scope_19_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "ControlAlgorithmActive", NULL, sizeof(kcg_bool), (int)&outputs_ctx.ControlAlgorithmActive_1, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_14, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL}
};
static const MappingScope scope_19 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:controlAlgorithm 1/",
  scope_19_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude: */
static const MappingEntry scope_18_entries[12] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_20},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L125_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L224_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L323_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L422_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L521_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L6_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L7_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L8_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9_OpPhases_AttitudeAcquisition_atacquisition_refAttitude, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 11 */ { MAP_EXPANDED, "controlAlgorithm 1", NULL, 0, 0, NULL, NULL, NULL, &scope_19}
};
static const MappingScope scope_18 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:",
  scope_18_entries, 12,
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

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:ReadSensors 5/ */
static const MappingEntry scope_15_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "SensorsActive", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SensorsActive_5, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_5, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL}
};
static const MappingScope scope_15 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:ReadSensors 5/",
  scope_15_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors: */
static const MappingEntry scope_14_entries[5] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_16},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_17},
  /* 2 */ { MAP_EXPANDED, "ReadSensors 5", NULL, 0, 0, NULL, NULL, NULL, &scope_15},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L127_OpPhases_AttitudeAcquisition_atacquisition_readsensors, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L226_OpPhases_AttitudeAcquisition_atacquisition_readsensors, &_Type_kcg_bool_Utils, &scope_11_entries[1], isActive_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition, NULL}
};
static const MappingScope scope_14 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:",
  scope_14_entries, 5,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition: */
static const MappingEntry scope_11_entries[5] = {
  /* 0 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition), (int)&outputs_ctx._6_atacquisition_clock_OpPhases_AttitudeAcquisition, &_Type_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(SSM_ST_atacquisition_OpPhases_AttitudeAcquisition), (int)&outputs_ctx.atacquisition_clock_OpPhases_AttitudeAcquisition, &_Type_SSM_ST_atacquisition_OpPhases_AttitudeAcquisition_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_STATE, "SafeMode:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_state_act_OpPhases_AttitudeAcquisition */, &scope_21},
  /* 3 */ { MAP_STATE, "readsensors:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_state_act_OpPhases_AttitudeAcquisition */, &scope_14},
  /* 4 */ { MAP_STATE, "refAttitude:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK atacquisition_state_act_OpPhases_AttitudeAcquisition */, &scope_18}
};
static const MappingScope scope_11 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:",
  scope_11_entries, 5,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition: */
static const MappingEntry scope_10_entries[17] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_24},
  /* 1 */ { MAP_LOCAL, "NPhase@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NPhase_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "RefAtt@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.RefAtt_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L131_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), (int)&outputs_ctx._L13_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), (int)&outputs_ctx._L14_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), (int)&outputs_ctx._L15_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L16_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L17_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L18_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 11 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L19_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L230_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L329_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 14 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L528_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 15 */ { MAP_AUTOMATON, "atacquisition:", NULL, 0, 0, NULL, NULL, NULL, &scope_11},
  /* 16 */ { MAP_LOCAL, "sMode@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.sMode_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_10 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:",
  scope_10_entries, 17,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Launch:<1 */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired_strong */, NULL}
};
static const MappingScope scope_9 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Launch:<1",
  scope_9_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Launch:ReadSensors 3/ */
static const MappingEntry scope_8_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "SensorsActive", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SensorsActive_3, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_3, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_8 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Launch:ReadSensors 3/",
  scope_8_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Launch: */
static const MappingEntry scope_7_entries[13] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_9},
  /* 1 */ { MAP_EXPANDED, "ReadSensors 3", NULL, 0, 0, NULL, NULL, NULL, &scope_8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), (int)&outputs_ctx._L10_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L11_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L12_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L13_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L14_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L2_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L3_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), (int)&outputs_ctx._L6_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (int)&outputs_ctx._L7_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_7 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Launch:",
  scope_7_entries, 13,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:<1 */
static const MappingEntry scope_6_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired_strong */, NULL}
};
static const MappingScope scope_6 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:<1",
  scope_6_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground: */
static const MappingEntry scope_5_entries[10] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_6},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L13_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L14_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L15_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L16_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), (int)&outputs_ctx._L4_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (int)&outputs_ctx._L7_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_5 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:",
  scope_5_entries, 10,
};

/* OperationalScenario/ OperationalScenarioOpPhases: */
static const MappingEntry scope_2_entries[4] = {
  /* 0 */ { MAP_STATE, "AttitudeAcquisition:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_10},
  /* 1 */ { MAP_STATE, "Ground:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_5},
  /* 2 */ { MAP_STATE, "Launch:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_7},
  /* 3 */ { MAP_STATE, "NormalPhase:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_25}
};
static const MappingScope scope_2 = {
  "OperationalScenario/ OperationalScenarioOpPhases:",
  scope_2_entries, 4,
};

/* OperationalScenario/ OperationalScenario */
static const MappingEntry scope_1_entries[61] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init2, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init1, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "ApertarBotao", NULL, sizeof(kcg_bool), (int)&outputs_ctx.ApertarBotao, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 4 */ { MAP_LOCAL, "AtAcquisition@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AtAcquisition, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 5 */ { MAP_INPUT, "AttitudeReference", NULL, sizeof(kcg_int), (int)&inputs_ctx.AttitudeReference, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 6 */ { MAP_LOCAL, "AttitudeReference@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.rem_AttitudeReference, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 7 */ { MAP_OUTPUT, "AttitudeVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AttitudeVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 8 */ { MAP_LOCAL, "AttitudeVisibleLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AttitudeVisibleLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 9 */ { MAP_OUTPUT, "ColorIndex", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 10 */ { MAP_OUTPUT, "ColorIndex2", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex2, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 11 */ { MAP_OUTPUT, "ColorIndex3", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex3, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 12 */ { MAP_OUTPUT, "ColorIndex4", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex4, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 13 */ { MAP_OUTPUT, "Emit2CDS", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Emit2CDS, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 14 */ { MAP_OUTPUT, "GroundVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.GroundVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 15 */ { MAP_LOCAL, "GroundVisibleLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.GroundVisibleLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 16 */ { MAP_LOCAL, "LaunchPhase@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.LaunchPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 17 */ { MAP_OUTPUT, "LaunchVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.LaunchVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 18 */ { MAP_LOCAL, "LaunchVisibleLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.LaunchVisibleLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 19 */ { MAP_OUTPUT, "Layer1Active", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Layer1Active, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 20 */ { MAP_OUTPUT, "Layer1Visible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Layer1Visible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 21 */ { MAP_LOCAL, "NPhase@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 22 */ { MAP_OUTPUT, "NormalPhase", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 23 */ { MAP_OUTPUT, "NormalPhaseVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NormalPhaseVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 24 */ { MAP_LOCAL, "NormalPhaseVisibleLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NormalPhaseVisibleLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 25 */ { MAP_AUTOMATON, "OpPhases:", NULL, 0, 0, NULL, NULL, NULL, &scope_2},
  /* 26 */ { MAP_INPUT, "PassarFaseBtn", NULL, sizeof(kcg_bool), (int)&inputs_ctx.PassarFaseBtn, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 27 */ { MAP_INPUT, "Power", NULL, sizeof(kcg_bool), (int)&inputs_ctx.Power, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 28 */ { MAP_LOCAL, "Power@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_Power, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 29 */ { MAP_OUTPUT, "RefAttitude", NULL, sizeof(kcg_bool), (int)&outputs_ctx.RefAttitude, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 30 */ { MAP_OUTPUT, "StartAtAcquisition", NULL, sizeof(kcg_bool), (int)&outputs_ctx.StartAtAcquisition, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 31 */ { MAP_OUTPUT, "StartLaunchPhase", NULL, sizeof(kcg_bool), (int)&outputs_ctx.StartLaunchPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 32 */ { MAP_INPUT, "Telemetry", NULL, sizeof(kcg_int), (int)&inputs_ctx.Telemetry, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 33 */ { MAP_LOCAL, "Telemetry@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.rem_Telemetry, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 34 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 35 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L11, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 36 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 37 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), (int)&outputs_ctx._L13, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 38 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), (int)&outputs_ctx._L14, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 39 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), (int)&outputs_ctx._L15, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 40 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L16, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 41 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L18, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 42 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L19, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 43 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L20, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 44 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L3, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 45 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 46 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L6, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 47 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L7, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 48 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L8, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 49 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 50 */ { MAP_LOCAL, "color", NULL, sizeof(kcg_int), (int)&outputs_ctx.color, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 51 */ { MAP_LOCAL, "color3", NULL, sizeof(kcg_int), (int)&outputs_ctx.color3, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 52 */ { MAP_LOCAL, "color4", NULL, sizeof(kcg_int), (int)&outputs_ctx.color4, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 53 */ { MAP_LOCAL, "color_2", NULL, sizeof(kcg_int), (int)&outputs_ctx.color_2, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 54 */ { MAP_OUTPUT, "payMode", NULL, sizeof(kcg_bool), (int)&outputs_ctx.payMode, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 55 */ { MAP_INPUT, "picLocation", NULL, sizeof(kcg_real), (int)&inputs_ctx.picLocation, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 56 */ { MAP_LOCAL, "picLocation@mem", NULL, sizeof(kcg_real), (int)&outputs_ctx.rem_picLocation, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 57 */ { MAP_OUTPUT, "picture", NULL, sizeof(kcg_real), (int)&outputs_ctx.picture, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 58 */ { MAP_OUTPUT, "safeMode", NULL, sizeof(kcg_bool), (int)&outputs_ctx.safeMode, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 59 */ { MAP_INPUT, "takePict", NULL, sizeof(kcg_bool), (int)&inputs_ctx.takePict, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 60 */ { MAP_LOCAL, "takePict@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_takePict, &_Type_kcg_bool_Utils, NULL, NULL, NULL}
};
static const MappingScope scope_1 = {
  "OperationalScenario/ OperationalScenario",
  scope_1_entries, 61,
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

