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
MAP_DECL(scope_20, 10);
MAP_DECL(scope_19, 10);
MAP_DECL(scope_18, 10);
MAP_DECL(scope_17, 10);
MAP_DECL(scope_16, 10);
MAP_DECL(scope_15, 10);
MAP_DECL(scope_14, 62);
MAP_DECL(scope_13, 1);
MAP_DECL(scope_12, 46);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 20);
MAP_DECL(scope_9, 1);
MAP_DECL(scope_8, 1);
MAP_DECL(scope_7, 4);
MAP_DECL(scope_6, 6);
MAP_DECL(scope_5, 32);
MAP_DECL(scope_2, 4);
MAP_DECL(scope_1, 129);
MAP_DECL(scope_0, 1);

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:ModCount 7/ */
static const MappingEntry scope_20_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Count", NULL, sizeof(kcg_int), (int)&outputs_ctx.Count_7, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1_7, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12_7, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L2@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2_7, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3_7, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_7, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_7, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_7, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9_7, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_OUTPUT, "rippleClock", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rippleClock_7, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_20 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:ModCount 7/",
  scope_20_entries, 10,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:ModCount 8/ */
static const MappingEntry scope_19_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Count", NULL, sizeof(kcg_int), (int)&outputs_ctx.Count_8, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1_8, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12_8, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L2@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2_8, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3_8, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_8, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_8, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_8, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9_8, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_OUTPUT, "rippleClock", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rippleClock_8, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_19 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:ModCount 8/",
  scope_19_entries, 10,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:ModCount 9/ */
static const MappingEntry scope_18_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Count", NULL, sizeof(kcg_int), (int)&outputs_ctx.Count_9, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1_9, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12_9, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L2@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2_9, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3_9, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_9, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_9, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_9, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9_9, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_OUTPUT, "rippleClock", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rippleClock_9, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_18 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:ModCount 9/",
  scope_18_entries, 10,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:ModCount 4/ */
static const MappingEntry scope_17_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Count", NULL, sizeof(kcg_int), (int)&outputs_ctx.Count_4, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1_4, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12_4, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L2@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2_4, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3_4, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_4, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_4, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_4, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9_4, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_OUTPUT, "rippleClock", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rippleClock_4, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_17 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:ModCount 4/",
  scope_17_entries, 10,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:ModCount 5/ */
static const MappingEntry scope_16_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Count", NULL, sizeof(kcg_int), (int)&outputs_ctx.Count_5, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1_5, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12_5, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L2@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2_5, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3_5, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_5, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_5, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_5, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9_5, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_OUTPUT, "rippleClock", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rippleClock_5, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_16 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:ModCount 5/",
  scope_16_entries, 10,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:ModCount 6/ */
static const MappingEntry scope_15_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Count", NULL, sizeof(kcg_int), (int)&outputs_ctx.Count_6, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), (int)&outputs_ctx._L1_6, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12_6, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L2@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2_6, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), (int)&outputs_ctx._L3_6, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_6, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_6, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_6, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9_6, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_OUTPUT, "rippleClock", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rippleClock_6, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_15 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:ModCount 6/",
  scope_15_entries, 10,
};

/* OperationalScenario/ OperationalScenarioOpPhases:NormalPhase: */
static const MappingEntry scope_14_entries[62] = {
  /* 0 */ { MAP_EXPANDED, "ModCount 4", NULL, 0, 0, NULL, NULL, NULL, &scope_17},
  /* 1 */ { MAP_EXPANDED, "ModCount 5", NULL, 0, 0, NULL, NULL, NULL, &scope_16},
  /* 2 */ { MAP_EXPANDED, "ModCount 6", NULL, 0, 0, NULL, NULL, NULL, &scope_15},
  /* 3 */ { MAP_EXPANDED, "ModCount 7", NULL, 0, 0, NULL, NULL, NULL, &scope_20},
  /* 4 */ { MAP_EXPANDED, "ModCount 8", NULL, 0, 0, NULL, NULL, NULL, &scope_19},
  /* 5 */ { MAP_EXPANDED, "ModCount 9", NULL, 0, 0, NULL, NULL, NULL, &scope_18},
  /* 6 */ { MAP_LOCAL, "Probe1", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Probe1_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L10_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L100", NULL, sizeof(kcg_int), (int)&outputs_ctx._L100_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_LOCAL, "_L101", NULL, sizeof(kcg_int), (int)&outputs_ctx._L101_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 10 */ { MAP_LOCAL, "_L102", NULL, sizeof(kcg_int), (int)&outputs_ctx._L102_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 11 */ { MAP_LOCAL, "_L103", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L103_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 12 */ { MAP_LOCAL, "_L104", NULL, sizeof(kcg_int), (int)&outputs_ctx._L104_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 13 */ { MAP_LOCAL, "_L105", NULL, sizeof(kcg_int), (int)&outputs_ctx._L105_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 14 */ { MAP_LOCAL, "_L106", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L106_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 15 */ { MAP_LOCAL, "_L107", NULL, sizeof(kcg_int), (int)&outputs_ctx._L107_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 16 */ { MAP_LOCAL, "_L108", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L108_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 17 */ { MAP_LOCAL, "_L109", NULL, sizeof(kcg_int), (int)&outputs_ctx._L109_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 18 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L11_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 19 */ { MAP_LOCAL, "_L110", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L110_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 20 */ { MAP_LOCAL, "_L111", NULL, sizeof(kcg_int), (int)&outputs_ctx._L111_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 21 */ { MAP_LOCAL, "_L112", NULL, sizeof(kcg_int), (int)&outputs_ctx._L112_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 22 */ { MAP_LOCAL, "_L113", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L113_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 23 */ { MAP_LOCAL, "_L114", NULL, sizeof(kcg_int), (int)&outputs_ctx._L114_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 24 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L12_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 25 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_real), (int)&outputs_ctx._L13_OpPhases_NormalPhase, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 26 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), (int)&outputs_ctx._L18_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 27 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L19_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 28 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), (int)&outputs_ctx._L21_OpPhases_NormalPhase, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 29 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), (int)&outputs_ctx._L24_OpPhases_NormalPhase, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 30 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L40_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 31 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_real), (int)&outputs_ctx._L41_OpPhases_NormalPhase, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 32 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_real), (int)&outputs_ctx._L42_OpPhases_NormalPhase, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 33 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 34 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_real), (int)&outputs_ctx._L56_OpPhases_NormalPhase, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 35 */ { MAP_LOCAL, "_L57", NULL, sizeof(kcg_real), (int)&outputs_ctx._L57_OpPhases_NormalPhase, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 36 */ { MAP_LOCAL, "_L58", NULL, sizeof(kcg_real), (int)&outputs_ctx._L58_OpPhases_NormalPhase, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 37 */ { MAP_LOCAL, "_L59", NULL, sizeof(kcg_real), (int)&outputs_ctx._L59_OpPhases_NormalPhase, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 38 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), (int)&outputs_ctx._L6_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 39 */ { MAP_LOCAL, "_L60", NULL, sizeof(kcg_real), (int)&outputs_ctx._L60_OpPhases_NormalPhase, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 40 */ { MAP_LOCAL, "_L61", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L61_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 41 */ { MAP_LOCAL, "_L62@mem", NULL, sizeof(kcg_real), (int)&outputs_ctx._L62_OpPhases_NormalPhase, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 42 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_real), (int)&outputs_ctx._L66_OpPhases_NormalPhase, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 43 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (int)&outputs_ctx._L7_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 44 */ { MAP_LOCAL, "_L79", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L79_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 45 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 46 */ { MAP_LOCAL, "_L80", NULL, sizeof(kcg_int), (int)&outputs_ctx._L80_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 47 */ { MAP_LOCAL, "_L81", NULL, sizeof(kcg_int), (int)&outputs_ctx._L81_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 48 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_int), (int)&outputs_ctx._L82_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 49 */ { MAP_LOCAL, "_L83", NULL, sizeof(kcg_int), (int)&outputs_ctx._L83_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 50 */ { MAP_LOCAL, "_L84", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L84_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 51 */ { MAP_LOCAL, "_L86", NULL, sizeof(kcg_int), (int)&outputs_ctx._L86_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 52 */ { MAP_LOCAL, "_L87", NULL, sizeof(kcg_int), (int)&outputs_ctx._L87_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 53 */ { MAP_LOCAL, "_L88", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L88_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 54 */ { MAP_LOCAL, "_L89", NULL, sizeof(kcg_int), (int)&outputs_ctx._L89_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 55 */ { MAP_LOCAL, "_L90", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L90_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 56 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L94_OpPhases_NormalPhase, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 57 */ { MAP_LOCAL, "_L95", NULL, sizeof(kcg_int), (int)&outputs_ctx._L95_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 58 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_int), (int)&outputs_ctx._L96_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 59 */ { MAP_LOCAL, "_L97", NULL, sizeof(kcg_int), (int)&outputs_ctx._L97_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 60 */ { MAP_LOCAL, "_L98", NULL, sizeof(kcg_int), (int)&outputs_ctx._L98_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 61 */ { MAP_LOCAL, "_L99", NULL, sizeof(kcg_int), (int)&outputs_ctx._L99_OpPhases_NormalPhase, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_14 = {
  "OperationalScenario/ OperationalScenarioOpPhases:NormalPhase:",
  scope_14_entries, 62,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:<1 */
static const MappingEntry scope_13_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired */, NULL}
};
static const MappingScope scope_13 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:<1",
  scope_13_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition: */
static const MappingEntry scope_12_entries[46] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_13},
  /* 1 */ { MAP_LOCAL, "AtNormalPhaseLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AtNormalPhaseLocal_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "ClockTime", NULL, sizeof(kcg_real), (int)&outputs_ctx.ClockTime_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "LaunchTime", NULL, sizeof(kcg_real), (int)&outputs_ctx.LaunchTime_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L108", NULL, sizeof(kcg_real), (int)&outputs_ctx._L108_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L110@mem", NULL, sizeof(kcg_real), (int)&outputs_ctx._L110_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L114", NULL, sizeof(kcg_real), (int)&outputs_ctx._L114_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L117", NULL, sizeof(kcg_real), (int)&outputs_ctx._L117_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L118", NULL, sizeof(kcg_real), (int)&outputs_ctx._L118_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_LOCAL, "_L119", NULL, sizeof(kcg_real), (int)&outputs_ctx._L119_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 10 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 11 */ { MAP_LOCAL, "_L120", NULL, sizeof(kcg_real), (int)&outputs_ctx._L120_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 12 */ { MAP_LOCAL, "_L121@mem", NULL, sizeof(kcg_real), (int)&outputs_ctx._L121_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 13 */ { MAP_LOCAL, "_L124", NULL, sizeof(kcg_real), (int)&outputs_ctx._L124_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 14 */ { MAP_LOCAL, "_L125", NULL, sizeof(kcg_real), (int)&outputs_ctx._L125_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), (int)&outputs_ctx._L13_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 16 */ { MAP_LOCAL, "_L130", NULL, sizeof(kcg_real), (int)&outputs_ctx._L130_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 17 */ { MAP_LOCAL, "_L133", NULL, sizeof(kcg_real), (int)&outputs_ctx._L133_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 18 */ { MAP_LOCAL, "_L135", NULL, sizeof(kcg_real), (int)&outputs_ctx._L135_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 19 */ { MAP_LOCAL, "_L136", NULL, sizeof(kcg_real), (int)&outputs_ctx._L136_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 20 */ { MAP_LOCAL, "_L137", NULL, sizeof(kcg_real), (int)&outputs_ctx._L137_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 21 */ { MAP_LOCAL, "_L138", NULL, sizeof(kcg_real), (int)&outputs_ctx._L138_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 22 */ { MAP_LOCAL, "_L139", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L139_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 23 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), (int)&outputs_ctx._L14_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 24 */ { MAP_LOCAL, "_L140", NULL, sizeof(kcg_real), (int)&outputs_ctx._L140_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 25 */ { MAP_LOCAL, "_L141", NULL, sizeof(kcg_real), (int)&outputs_ctx._L141_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 26 */ { MAP_LOCAL, "_L142@mem", NULL, sizeof(kcg_real), (int)&outputs_ctx._L142_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 27 */ { MAP_LOCAL, "_L143", NULL, sizeof(kcg_real), (int)&outputs_ctx._L143_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 28 */ { MAP_LOCAL, "_L144", NULL, sizeof(kcg_real), (int)&outputs_ctx._L144_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), (int)&outputs_ctx._L15_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L16_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L17_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 32 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L19_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 33 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), (int)&outputs_ctx._L21_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 34 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), (int)&outputs_ctx._L22_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 35 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_real), (int)&outputs_ctx._L23_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 36 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L24_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 37 */ { MAP_LOCAL, "_L25@mem", NULL, sizeof(kcg_real), (int)&outputs_ctx._L25_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 38 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_real), (int)&outputs_ctx._L26_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 39 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), (int)&outputs_ctx._L28_OpPhases_AttitudeAcquisition, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 40 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L30_OpPhases_AttitudeAcquisition, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 41 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_real), (int)&outputs_ctx._L31_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 42 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_real), (int)&outputs_ctx._L36_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 43 */ { MAP_LOCAL, "_L40@mem", NULL, sizeof(kcg_real), (int)&outputs_ctx._L40_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 44 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_real), (int)&outputs_ctx._L43_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 45 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_real), (int)&outputs_ctx._L53_OpPhases_AttitudeAcquisition, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_12 = {
  "OperationalScenario/ OperationalScenarioOpPhases:AttitudeAcquisition:",
  scope_12_entries, 46,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Launch:<1 */
static const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired */, NULL}
};
static const MappingScope scope_11 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Launch:<1",
  scope_11_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Launch: */
static const MappingEntry scope_10_entries[20] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_11},
  /* 1 */ { MAP_LOCAL, "AtAcquisition@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AtAcquisition_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), (int)&outputs_ctx._L10_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L12_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L13_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L14_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L28_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_real), (int)&outputs_ctx._L29_OpPhases_Launch, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), (int)&outputs_ctx._L31_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L33_OpPhases_Launch, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 10 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_real), (int)&outputs_ctx._L34_OpPhases_Launch, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 11 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_real), (int)&outputs_ctx._L35_OpPhases_Launch, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 12 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_real), (int)&outputs_ctx._L36_OpPhases_Launch, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 13 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_real), (int)&outputs_ctx._L37_OpPhases_Launch, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 14 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_real), (int)&outputs_ctx._L38_OpPhases_Launch, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 15 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_real), (int)&outputs_ctx._L39_OpPhases_Launch, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 16 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_real), (int)&outputs_ctx._L40_OpPhases_Launch, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (int)&outputs_ctx._L5_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), (int)&outputs_ctx._L6_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (int)&outputs_ctx._L7_OpPhases_Launch, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_10 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Launch:",
  scope_10_entries, 20,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:<1 */
static const MappingEntry scope_9_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired_strong */, NULL}
};
static const MappingScope scope_9 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:<1",
  scope_9_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:<2 */
static const MappingEntry scope_8_entries[1] = {
  /* 0 */ { MAP_TRANSITION, ">:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_fired */, NULL}
};
static const MappingScope scope_8 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:<2",
  scope_8_entries, 1,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:TestActuators 1/ */
static const MappingEntry scope_7_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "ActuatorsStatus", NULL, sizeof(kcg_bool), (int)&outputs_ctx.ActuatorsStatus_1, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L2_1, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L3_1, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_1, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_7 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:TestActuators 1/",
  scope_7_entries, 4,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground:ReadSensors 6/ */
static const MappingEntry scope_6_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "SensorsStatus", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SensorsStatus_6, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L2_68, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L4_67, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L5_66, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L6_6, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L8_65, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_6 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:ReadSensors 6/",
  scope_6_entries, 6,
};

/* OperationalScenario/ OperationalScenarioOpPhases:Ground: */
static const MappingEntry scope_5_entries[32] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, NULL, NULL, &scope_9},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, NULL, NULL, &scope_8},
  /* 2 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Ground_weakb_clock_OpPhases, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 3 */ { MAP_EXPANDED, "ReadSensors 6", NULL, 0, 0, NULL, NULL, NULL, &scope_6},
  /* 4 */ { MAP_EXPANDED, "TestActuators 1", NULL, 0, 0, NULL, NULL, NULL, &scope_7},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L13_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L15_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L16_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), (int)&outputs_ctx._L2_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L22_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L23_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 11 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L24_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 12 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L27_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 13 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L30_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 14 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L31_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 15 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L32_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 16 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L33_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 17 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L34_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 18 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L35_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 19 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_real), (int)&outputs_ctx._L37_OpPhases_Ground, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 20 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_int), (int)&outputs_ctx._L39_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 21 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), (int)&outputs_ctx._L4_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 22 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L41_OpPhases_Ground, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 23 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_real), (int)&outputs_ctx._L42_OpPhases_Ground, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 24 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_real), (int)&outputs_ctx._L45_OpPhases_Ground, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 25 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_real), (int)&outputs_ctx._L46_OpPhases_Ground, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 26 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_real), (int)&outputs_ctx._L49_OpPhases_Ground, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 27 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_real), (int)&outputs_ctx._L50_OpPhases_Ground, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 28 */ { MAP_LOCAL, "_L53", NULL, sizeof(kcg_real), (int)&outputs_ctx._L53_OpPhases_Ground, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 29 */ { MAP_LOCAL, "_L54", NULL, sizeof(kcg_real), (int)&outputs_ctx._L54_OpPhases_Ground, &_Type_kcg_real_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 30 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (int)&outputs_ctx._L7_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 31 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (int)&outputs_ctx._L8_OpPhases_Ground, &_Type_kcg_int_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL}
};
static const MappingScope scope_5 = {
  "OperationalScenario/ OperationalScenarioOpPhases:Ground:",
  scope_5_entries, 32,
};

/* OperationalScenario/ OperationalScenarioOpPhases: */
static const MappingEntry scope_2_entries[4] = {
  /* 0 */ { MAP_STATE, "AttitudeAcquisition:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_12},
  /* 1 */ { MAP_STATE, "Ground:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_5},
  /* 2 */ { MAP_STATE, "Launch:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_10},
  /* 3 */ { MAP_STATE, "NormalPhase:", NULL, 0, 0, NULL, NULL, NULL /* CLOCK OpPhases_state_act */, &scope_14}
};
static const MappingScope scope_2 = {
  "OperationalScenario/ OperationalScenarioOpPhases:",
  scope_2_entries, 4,
};

/* OperationalScenario/ OperationalScenario */
static const MappingEntry scope_1_entries[129] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init4, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init3, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 2 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init2, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 3 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init1, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 4 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), (int)&outputs_ctx.init, &_Type_kcg_bool_Utils, NULL, NULL /* CLOCK OpPhases_state_act */, NULL},
  /* 5 */ { MAP_OUTPUT, "AcRdValue", NULL, sizeof(kcg_real), (int)&outputs_ctx.AcRdValue, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 6 */ { MAP_LOCAL, "AcRdValueLocal", NULL, sizeof(kcg_real), (int)&outputs_ctx.AcRdValueLocal, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 7 */ { MAP_INPUT, "Accelerometers", NULL, sizeof(kcg_bool), (int)&inputs_ctx.Accelerometers, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 8 */ { MAP_LOCAL, "Accelerometers@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_Accelerometers, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 9 */ { MAP_LOCAL, "AccelerometersLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AccelerometersLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 10 */ { MAP_LOCAL, "ApertarBotao@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.ApertarBotao, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 11 */ { MAP_LOCAL, "AtAcquisition", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AtAcquisition, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 12 */ { MAP_LOCAL, "AtNormalPhase", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AtNormalPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 13 */ { MAP_INPUT, "AttitudeReference", NULL, sizeof(kcg_int), (int)&inputs_ctx.AttitudeReference, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 14 */ { MAP_LOCAL, "AttitudeReference@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.rem_AttitudeReference, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 15 */ { MAP_OUTPUT, "AttitudeVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AttitudeVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 16 */ { MAP_LOCAL, "AttitudeVisibleLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.AttitudeVisibleLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 17 */ { MAP_OUTPUT, "ColorIndex", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 18 */ { MAP_OUTPUT, "ColorIndex2", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex2, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 19 */ { MAP_OUTPUT, "ColorIndex3", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex3, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 20 */ { MAP_OUTPUT, "ColorIndex4", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex4, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 21 */ { MAP_OUTPUT, "ColorIndex5", NULL, sizeof(kcg_int), (int)&outputs_ctx.ColorIndex5, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 22 */ { MAP_INPUT, "EjectionSignal", NULL, sizeof(kcg_bool), (int)&inputs_ctx.EjectionSignal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 23 */ { MAP_OUTPUT, "Emit2CDS", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Emit2CDS, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 24 */ { MAP_OUTPUT, "FuelMeter", NULL, sizeof(kcg_real), (int)&outputs_ctx.FuelMeter, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 25 */ { MAP_OUTPUT, "FuelMeterGraphic", NULL, sizeof(kcg_int), (int)&outputs_ctx.FuelMeterGraphic, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 26 */ { MAP_LOCAL, "FuelMeterLocal", NULL, sizeof(kcg_real), (int)&outputs_ctx.FuelMeterLocal, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 27 */ { MAP_OUTPUT, "GroundVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.GroundVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 28 */ { MAP_LOCAL, "GroundVisibleLocal@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.GroundVisibleLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 29 */ { MAP_INPUT, "Gyroscopes", NULL, sizeof(kcg_bool), (int)&inputs_ctx.Gyroscopes, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 30 */ { MAP_LOCAL, "GyroscopesLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.GyroscopesLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 31 */ { MAP_INPUT, "Input13", NULL, sizeof(kcg_bool), (int)&inputs_ctx.Input13, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 32 */ { MAP_LOCAL, "LatDeg@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.LatDeg, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 33 */ { MAP_LOCAL, "LatMin@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.LatMin, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 34 */ { MAP_LOCAL, "LatSec@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.LatSec, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 35 */ { MAP_LOCAL, "LatitudeLocal", NULL, sizeof(kcg_real), (int)&outputs_ctx.LatitudeLocal, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 36 */ { MAP_LOCAL, "LaunchPhase@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.LaunchPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 37 */ { MAP_OUTPUT, "LaunchVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.LaunchVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 38 */ { MAP_LOCAL, "LaunchVisibleLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.LaunchVisibleLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 39 */ { MAP_OUTPUT, "Layer1Active", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Layer1Active, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 40 */ { MAP_OUTPUT, "Layer1Visible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.Layer1Visible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 41 */ { MAP_LOCAL, "LongitudeDeg@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.LongitudeDeg, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 42 */ { MAP_LOCAL, "LongitudeLocal@mem", NULL, sizeof(kcg_real), (int)&outputs_ctx.LongitudeLocal, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 43 */ { MAP_LOCAL, "LongitudeMin@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.LongitudeMin, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 44 */ { MAP_LOCAL, "LongitudeSec@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.LongitudeSec, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 45 */ { MAP_INPUT, "MagneticTorquers", NULL, sizeof(kcg_bool), (int)&inputs_ctx.MagneticTorquers, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 46 */ { MAP_LOCAL, "MagneticTorquers@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_MagneticTorquers, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 47 */ { MAP_LOCAL, "MagneticTorquersLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.MagneticTorquersLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 48 */ { MAP_OUTPUT, "NormalPhaseVisible", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NormalPhaseVisible, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 49 */ { MAP_LOCAL, "NormalPhaseVisibleLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.NormalPhaseVisibleLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 50 */ { MAP_AUTOMATON, "OpPhases:", NULL, 0, 0, NULL, NULL, NULL, &scope_2},
  /* 51 */ { MAP_INPUT, "PassarFaseBtn", NULL, sizeof(kcg_bool), (int)&inputs_ctx.PassarFaseBtn, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 52 */ { MAP_INPUT, "Power", NULL, sizeof(kcg_bool), (int)&inputs_ctx.Power, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 53 */ { MAP_LOCAL, "PowerLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.PowerLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 54 */ { MAP_INPUT, "Reactionwheels", NULL, sizeof(kcg_bool), (int)&inputs_ctx.Reactionwheels, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 55 */ { MAP_LOCAL, "Reactionwheels@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_Reactionwheels, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 56 */ { MAP_LOCAL, "ReactionwheelsLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.ReactionwheelsLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 57 */ { MAP_OUTPUT, "SAT_Latitude_Min_Value", NULL, sizeof(kcg_real), (int)&outputs_ctx.SAT_Latitude_Min_Value, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 58 */ { MAP_OUTPUT, "SAT_Latitude_Sec_Value", NULL, sizeof(kcg_real), (int)&outputs_ctx.SAT_Latitude_Sec_Value, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 59 */ { MAP_OUTPUT, "SAT_Latitude_Value", NULL, sizeof(kcg_real), (int)&outputs_ctx.SAT_Latitude_Value, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 60 */ { MAP_OUTPUT, "SAT_Longitude_Min_Value", NULL, sizeof(kcg_real), (int)&outputs_ctx.SAT_Longitude_Min_Value, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 61 */ { MAP_OUTPUT, "SAT_Longitude_Sec_Value", NULL, sizeof(kcg_real), (int)&outputs_ctx.SAT_Longitude_Sec_Value, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 62 */ { MAP_OUTPUT, "SAT_Longitude_Value", NULL, sizeof(kcg_real), (int)&outputs_ctx.SAT_Longitude_Value, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 63 */ { MAP_OUTPUT, "SpinRd", NULL, sizeof(kcg_real), (int)&outputs_ctx.SpinRd, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 64 */ { MAP_LOCAL, "SpinRdLocal", NULL, sizeof(kcg_real), (int)&outputs_ctx.SpinRdLocal, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 65 */ { MAP_OUTPUT, "SpinTg", NULL, sizeof(kcg_real), (int)&outputs_ctx.SpinTg, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 66 */ { MAP_LOCAL, "SpinTgLocal", NULL, sizeof(kcg_real), (int)&outputs_ctx.SpinTgLocal, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 67 */ { MAP_OUTPUT, "StartLaunchPhase", NULL, sizeof(kcg_bool), (int)&outputs_ctx.StartLaunchPhase, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 68 */ { MAP_INPUT, "SunSensor", NULL, sizeof(kcg_bool), (int)&inputs_ctx.SunSensor, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 69 */ { MAP_LOCAL, "SunSensor@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_SunSensor, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 70 */ { MAP_LOCAL, "SunSensorLocal", NULL, sizeof(kcg_bool), (int)&outputs_ctx.SunSensorLocal, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 71 */ { MAP_INPUT, "Telemetry", NULL, sizeof(kcg_int), (int)&inputs_ctx.Telemetry, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 72 */ { MAP_LOCAL, "Telemetry@mem", NULL, sizeof(kcg_int), (int)&outputs_ctx.rem_Telemetry, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 73 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L11, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 74 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (int)&outputs_ctx._L12, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 75 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), (int)&outputs_ctx._L13, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 76 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), (int)&outputs_ctx._L14, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 77 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), (int)&outputs_ctx._L15, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 78 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L16, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 79 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L19, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 80 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L20, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 81 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L22, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 82 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L31, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 83 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L32, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 84 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L34, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 85 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L36, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 86 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_real), (int)&outputs_ctx._L38, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 87 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int), (int)&outputs_ctx._L41, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 88 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L42, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 89 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_real), (int)&outputs_ctx._L43, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 90 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_real), (int)&outputs_ctx._L44, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 91 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_real), (int)&outputs_ctx._L45, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 92 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), (int)&outputs_ctx._L46, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 93 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_real), (int)&outputs_ctx._L51, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 94 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_real), (int)&outputs_ctx._L52, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 95 */ { MAP_LOCAL, "_L55", NULL, sizeof(fr), (int)&outputs_ctx._L55, &_Type_fr_Utils, NULL, NULL, NULL},
  /* 96 */ { MAP_LOCAL, "_L56", NULL, sizeof(fr), (int)&outputs_ctx._L56, &_Type_fr_Utils, NULL, NULL, NULL},
  /* 97 */ { MAP_LOCAL, "_L63", NULL, sizeof(kcg_real), (int)&outputs_ctx._L63, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 98 */ { MAP_LOCAL, "_L65", NULL, sizeof(kcg_int), (int)&outputs_ctx._L65, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 99 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_int), (int)&outputs_ctx._L66, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 100 */ { MAP_LOCAL, "_L67", NULL, sizeof(kcg_real), (int)&outputs_ctx._L67, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 101 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_int), (int)&outputs_ctx._L68, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 102 */ { MAP_LOCAL, "_L69", NULL, sizeof(kcg_real), (int)&outputs_ctx._L69, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 103 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L7, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 104 */ { MAP_LOCAL, "_L70", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L70, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 105 */ { MAP_LOCAL, "_L71", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L71, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 106 */ { MAP_LOCAL, "_L72", NULL, sizeof(kcg_int), (int)&outputs_ctx._L72, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 107 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_int), (int)&outputs_ctx._L73, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 108 */ { MAP_LOCAL, "_L74", NULL, sizeof(kcg_real), (int)&outputs_ctx._L74, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 109 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_real), (int)&outputs_ctx._L75, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 110 */ { MAP_LOCAL, "_L76", NULL, sizeof(kcg_real), (int)&outputs_ctx._L76, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 111 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_int), (int)&outputs_ctx._L77, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 112 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L8, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 113 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (int)&outputs_ctx._L9, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 114 */ { MAP_OUTPUT, "angleleft", NULL, sizeof(fr), (int)&outputs_ctx.angleleft, &_Type_fr_Utils, NULL, NULL, NULL},
  /* 115 */ { MAP_LOCAL, "angleleftlocal", NULL, sizeof(fr), (int)&outputs_ctx.angleleftlocal, &_Type_fr_Utils, NULL, NULL, NULL},
  /* 116 */ { MAP_OUTPUT, "angleright", NULL, sizeof(fr), (int)&outputs_ctx.angleright, &_Type_fr_Utils, NULL, NULL, NULL},
  /* 117 */ { MAP_LOCAL, "anglerightlocal", NULL, sizeof(fr), (int)&outputs_ctx.anglerightlocal, &_Type_fr_Utils, NULL, NULL, NULL},
  /* 118 */ { MAP_LOCAL, "color", NULL, sizeof(kcg_int), (int)&outputs_ctx.color, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 119 */ { MAP_LOCAL, "color3", NULL, sizeof(kcg_int), (int)&outputs_ctx.color3, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 120 */ { MAP_LOCAL, "color4", NULL, sizeof(kcg_int), (int)&outputs_ctx.color4, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 121 */ { MAP_LOCAL, "color_2", NULL, sizeof(kcg_int), (int)&outputs_ctx.color_2, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 122 */ { MAP_LOCAL, "color_5", NULL, sizeof(kcg_int), (int)&outputs_ctx.color_5, &_Type_kcg_int_Utils, NULL, NULL, NULL},
  /* 123 */ { MAP_INPUT, "picLocation", NULL, sizeof(kcg_real), (int)&inputs_ctx.picLocation, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 124 */ { MAP_LOCAL, "picLocation@mem", NULL, sizeof(kcg_real), (int)&outputs_ctx.rem_picLocation, &_Type_kcg_real_Utils, NULL, NULL, NULL},
  /* 125 */ { MAP_INPUT, "takePict", NULL, sizeof(kcg_bool), (int)&inputs_ctx.takePict, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 126 */ { MAP_LOCAL, "takePict@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_takePict, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 127 */ { MAP_INPUT, "upDateSw", NULL, sizeof(kcg_bool), (int)&inputs_ctx.upDateSw, &_Type_kcg_bool_Utils, NULL, NULL, NULL},
  /* 128 */ { MAP_LOCAL, "upDateSw@mem", NULL, sizeof(kcg_bool), (int)&outputs_ctx.rem_upDateSw, &_Type_kcg_bool_Utils, NULL, NULL, NULL}
};
static const MappingScope scope_1 = {
  "OperationalScenario/ OperationalScenario",
  scope_1_entries, 129,
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

