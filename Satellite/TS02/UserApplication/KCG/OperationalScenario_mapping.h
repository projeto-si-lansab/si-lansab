#ifndef OPERATIONALSCENARIO_SCSIM_MAPPING
#define OPERATIONALSCENARIO_SCSIM_MAPPING

#include "SmuTypes.h"
#include "OperationalScenario_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "OperationalScenario.h"
void _SCSIM_Mapping_OperationalScenario();

void* _SCSIM_Get_OperationalScenario_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

extern ControlUtils _SCSIM_SSM_TR_Ground_2_OpPhases_Utils;
extern ControlUtils _SCSIM_SSM_TR_Ground_1_OpPhases_Utils;
extern ControlUtils _SCSIM_SSM_st_Ground_OpPhases_Utils;
extern ControlUtils _SCSIM_SSM_TR_Launch_1_OpPhases_Utils;
extern ControlUtils _SCSIM_SSM_st_Launch_OpPhases_Utils;
extern ControlUtils _SCSIM_SSM_TR_AttitudeAcquisition_1_OpPhases_Utils;
extern ControlUtils _SCSIM_SSM_st_AttitudeAcquisition_OpPhases_Utils;
extern ControlUtils _SCSIM_SSM_st_NormalPhase_OpPhases_Utils;
static int _SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases(void*);
static int _SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases(void*);
static int _SCSIM_ClockActive_SSM_st_Launch_OpPhases(void*);
static int _SCSIM_ClockActive_SSM_st_Ground_OpPhases(void*);

#endif /*OPERATIONALSCENARIO_SCSIM_MAPPING */
