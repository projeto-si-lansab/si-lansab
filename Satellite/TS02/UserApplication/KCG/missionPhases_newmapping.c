/* missionPhases_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "SmuMapping.h"
#include "missionPhases_newtype.h"
#include "missionPhases_newmapping.h"

/* iterators */

/* clock active helper functions */

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_57, 2);
MAP_DECL(scope_52, 1);
MAP_DECL(scope_50, 2);
MAP_DECL(scope_49, 1);
MAP_DECL(scope_48, 1);
MAP_DECL(scope_47, 2);
MAP_DECL(scope_46, 1);
MAP_DECL(scope_45, 1);
MAP_DECL(scope_43, 3);
MAP_DECL(scope_40, 3);
MAP_DECL(scope_39, 2);
MAP_DECL(scope_38, 1);
MAP_DECL(scope_37, 1);
MAP_DECL(scope_35, 2);
MAP_DECL(scope_34, 1);
MAP_DECL(scope_32, 2);
MAP_DECL(scope_31, 1);
MAP_DECL(scope_30, 1);
MAP_DECL(scope_28, 3);
MAP_DECL(scope_25, 3);
MAP_DECL(scope_24, 5);
MAP_DECL(scope_23, 1);
MAP_DECL(scope_21, 2);
MAP_DECL(scope_20, 1);
MAP_DECL(scope_19, 1);
MAP_DECL(scope_17, 2);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_13, 3);
MAP_DECL(scope_9, 5);
MAP_DECL(scope_6, 2);
MAP_DECL(scope_5, 2);
MAP_DECL(scope_2, 4);
MAP_DECL(scope_1, 28);
MAP_DECL(scope_0, 1);

/* struct__5459 */
static const MappingEntry scope_57_entries[2] = {
  /* 0 */ { MAP_FIELD, ".f", NULL, sizeof(kcg_real), offsetof(struct__5459, f), &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 1 */ { MAP_FIELD, ".k", NULL, sizeof(kcg_int), offsetof(struct__5459, k), &_Type_kcg_int_Utils, NULL, NULL, NULL}
};
static const MappingScope scope_57 = {
  "struct__5459",
  scope_57_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode:<1 */
static const MappingEntry scope_52_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_52 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode:<1",
  scope_52_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode: */
static const MappingEntry scope_50_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_52},
  /* 1 */ { MAP_EXPANDED, "upDateSw 2", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_50 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:SafeMode:",
  scope_50_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:<1 */
static const MappingEntry scope_49_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_49 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:<1",
  scope_49_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:<2 */
static const MappingEntry scope_48_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_48 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:<2",
  scope_48_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload: */
static const MappingEntry scope_47_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_49},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_48}
};
static const MappingScope scope_47 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:Payload:",
  scope_47_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:<2 */
static const MappingEntry scope_46_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_46 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:<2",
  scope_46_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:<1 */
static const MappingEntry scope_45_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_45 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:<1",
  scope_45_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl: */
static const MappingEntry scope_43_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_45},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_46},
  /* 2 */ { MAP_EXPANDED, "controlAlgorithm 2", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_43 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:AttControl:",
  scope_43_entries, 3,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase: */
static const MappingEntry scope_40_entries[3] = {
  /* 0 */ { MAP_STATE, "AttControl:", NULL, 0, 0, NULL, NULL, NULL, &scope_43},
  /* 1 */ { MAP_STATE, "Payload:", NULL, 0, 0, NULL, NULL, NULL, &scope_47},
  /* 2 */ { MAP_STATE, "SafeMode:", NULL, 0, 0, NULL, NULL, NULL, &scope_50}
};
static const MappingScope scope_40 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:NPhase:",
  scope_40_entries, 3,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase: */
static const MappingEntry scope_39_entries[2] = {
  /* 0 */ { MAP_AUTOMATON, "NPhase:", NULL, 0, 0, NULL, NULL, NULL, &scope_40},
  /* 1 */ { MAP_LOCAL, "sMode@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.sMode_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK _126_OpPhases_state_act */, NULL}
};
static const MappingScope scope_39 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:",
  scope_39_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:<1 */
static const MappingEntry scope_38_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_38 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:<1",
  scope_38_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode:<1 */
static const MappingEntry scope_37_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_37 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode:<1",
  scope_37_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode: */
static const MappingEntry scope_35_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_37},
  /* 1 */ { MAP_EXPANDED, "upDateSw 1", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_35 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:SafeMode:",
  scope_35_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:<1 */
static const MappingEntry scope_34_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_34 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:<1",
  scope_34_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude: */
static const MappingEntry scope_32_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_34},
  /* 1 */ { MAP_EXPANDED, "controlAlgorithm 1", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_32 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:refAttitude:",
  scope_32_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:<2 */
static const MappingEntry scope_31_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_31 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:<2",
  scope_31_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:<1 */
static const MappingEntry scope_30_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_30 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:<1",
  scope_30_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors: */
static const MappingEntry scope_28_entries[3] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_30},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_31},
  /* 2 */ { MAP_EXPANDED, "ReadSensors 5", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_28 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:readsensors:",
  scope_28_entries, 3,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition: */
static const MappingEntry scope_25_entries[3] = {
  /* 0 */ { MAP_STATE, "SafeMode:", NULL, 0, 0, NULL, NULL, NULL, &scope_35},
  /* 1 */ { MAP_STATE, "readsensors:", NULL, 0, 0, NULL, NULL, NULL, &scope_28},
  /* 2 */ { MAP_STATE, "refAttitude:", NULL, 0, 0, NULL, NULL, NULL, &scope_32}
};
static const MappingScope scope_25 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:atacquisition:",
  scope_25_entries, 3,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition: */
static const MappingEntry scope_24_entries[5] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_38},
  /* 1 */ { MAP_LOCAL, "NPhase@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NPhase_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK _126_OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "RefAtt@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.RefAtt_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK _126_OpPhases_state_act */, NULL},
  /* 3 */ { MAP_AUTOMATON, "atacquisition:", NULL, 0, 0, NULL, NULL, NULL, &scope_25},
  /* 4 */ { MAP_LOCAL, "sMode@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.sMode_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK _126_OpPhases_state_act */, NULL}
};
static const MappingScope scope_24 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:",
  scope_24_entries, 5,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Launch:<1 */
static const MappingEntry scope_23_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_23 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Launch:<1",
  scope_23_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Launch: */
static const MappingEntry scope_21_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_23},
  /* 1 */ { MAP_EXPANDED, "ReadSensors 3", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_21 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Launch:",
  scope_21_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:<1 */
static const MappingEntry scope_20_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_20 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:<1",
  scope_20_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:SM2:SafeMode:<1 */
static const MappingEntry scope_19_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_19 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:SM2:SafeMode:<1",
  scope_19_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:SM2:SafeMode: */
static const MappingEntry scope_17_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_19},
  /* 1 */ { MAP_EXPANDED, "ReadSensors 2", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_17 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:SM2:SafeMode:",
  scope_17_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:SM2:SupportMode:<1 */
static const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_16 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:SM2:SupportMode:<1",
  scope_16_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:SM2:SupportMode:DiagnosticPass: */
static const MappingEntry scope_13_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), 0, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, NULL, NULL, NULL},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_13 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:SM2:SupportMode:DiagnosticPass:",
  scope_13_entries, 3,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:SM2:SupportMode: */
static const MappingEntry scope_9_entries[5] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_16},
  /* 1 */ { MAP_IF, "DiagnosticPass:", NULL, 0, 0, NULL, NULL, NULL, &scope_13},
  /* 2 */ { MAP_EXPANDED, "ReadSensors 1", NULL, 0, 0, NULL, NULL, NULL, NULL},
  /* 3 */ { MAP_EXPANDED, "TakePicture 1", NULL, 0, 0, NULL, NULL, NULL, NULL},
  /* 4 */ { MAP_EXPANDED, "TestActuators 1", NULL, 0, 0, NULL, NULL, NULL, NULL}
};
static const MappingScope scope_9 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:SM2:SupportMode:",
  scope_9_entries, 5,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:SM2: */
static const MappingEntry scope_6_entries[2] = {
  /* 0 */ { MAP_STATE, "SafeMode:", NULL, 0, 0, NULL, NULL, NULL, &scope_17},
  /* 1 */ { MAP_STATE, "SupportMode:", NULL, 0, 0, NULL, NULL, NULL, &scope_9}
};
static const MappingScope scope_6 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:SM2:",
  scope_6_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground: */
static const MappingEntry scope_5_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_20},
  /* 1 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_6}
};
static const MappingScope scope_5 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:",
  scope_5_entries, 2,
};

/* OperationalScenario/ OperationalScenarioOpPhases: */
static const MappingEntry scope_2_entries[4] = {
  /* 0 */ { MAP_STATE, "AttitudeAcquisition:", NULL, 0, 0, NULL, NULL, NULL, &scope_24},
  /* 1 */ { MAP_STATE, "Ground:", NULL, 0, 0, NULL, NULL, NULL, &scope_5},
  /* 2 */ { MAP_STATE, "Launch:", NULL, 0, 0, NULL, NULL, NULL, &scope_21},
  /* 3 */ { MAP_STATE, "NormalPhase:", NULL, 0, 0, NULL, NULL, NULL, &scope_39}
};
static const MappingScope scope_2 = {
  "OperationalScenario/ OperationalScenarioOpPhases:",
  scope_2_entries, 4,
};

/* OperationalScenario/ OperationalScenario */
static const MappingEntry scope_1_entries[28] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init3, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init2, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK _126_OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init1, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK _126_OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK _126_OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "AtAcquisition@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AtAcquisition, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 5 */ { MAP_INPUT, "AttitudeReference", NULL, sizeof(kcg_int), (int)&inputs_ctx.AttitudeReference, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 6 */ { MAP_LOCAL, "AttitudeReference@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.rem_AttitudeReference, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 7 */ { MAP_LOCAL, "LaunchPhase@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.LaunchPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 8 */ { MAP_OUTPUT, "Layer1Active", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Layer1Active, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 9 */ { MAP_OUTPUT, "Layer1Visible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Layer1Visible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 10 */ { MAP_LOCAL, "NPhase@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 11 */ { MAP_OUTPUT, "NormalPhase", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 12 */ { MAP_AUTOMATON, "OpPhases:", NULL, 0, 0, NULL, NULL, NULL, &scope_2},
  /* 13 */ { MAP_INPUT, "PassarFaseBtn", NULL, sizeof(kcg_bool), (int)&inputs_ctx.PassarFaseBtn, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 14 */ { MAP_INPUT, "Power", NULL, sizeof(kcg_bool), (int)&inputs_ctx.Power, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 15 */ { MAP_LOCAL, "Power@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_Power, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 16 */ { MAP_OUTPUT, "RefAttitude", NULL, sizeof(kcg_bool), (int)&outputs_ctx.RefAttitude, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 17 */ { MAP_OUTPUT, "StartAtAcquisition", NULL, sizeof(kcg_bool), (int)&outputs_ctx.StartAtAcquisition, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 18 */ { MAP_OUTPUT, "StartLaunchPhase", NULL, sizeof(kcg_bool), (int)&outputs_ctx.StartLaunchPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 19 */ { MAP_INPUT, "Telemetry", NULL, sizeof(kcg_int), (int)&inputs_ctx.Telemetry, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 20 */ { MAP_LOCAL, "Telemetry@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.rem_Telemetry, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 21 */ { MAP_OUTPUT, "payMode", NULL, sizeof(kcg_bool), (int)&outputs_ctx.payMode, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 22 */ { MAP_INPUT, "picLocation", NULL, sizeof(kcg_real), (int)&inputs_ctx.picLocation, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 23 */ { MAP_LOCAL, "picLocation@mem", NULL, sizeof(kcg_real), (int)&outputs_ctx.rem_picLocation, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 24 */ { MAP_OUTPUT, "picture", NULL, sizeof(kcg_real), (int)&outputs_ctx.picture, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 25 */ { MAP_OUTPUT, "safeMode", NULL, sizeof(kcg_bool), (int)&outputs_ctx.safeMode, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 26 */ { MAP_INPUT, "takePict", NULL, sizeof(kcg_bool), (int)&inputs_ctx.takePict, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 27 */ { MAP_LOCAL, "takePict@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_takePict, &_Type_kcg_bool_Utils, NULL, NULL, NULL}
};
static const MappingScope scope_1 = {
  "OperationalScenario/ OperationalScenario",
  scope_1_entries, 28,
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

