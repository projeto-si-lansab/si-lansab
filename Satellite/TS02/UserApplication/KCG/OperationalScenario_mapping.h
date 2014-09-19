#ifndef OPERATIONALSCENARIO_SCSIM_MAPPING
#define OPERATIONALSCENARIO_SCSIM_MAPPING

#include "SmuTypes.h"
#include "OperationalScenario_type.h"

void _SCSIM_Mapping_Create();
static ControlUtils _SCSIM_BoolEntity_Control_Utils;
#include "OperationalScenario.h"
void _SCSIM_Mapping_OperationalScenario();

void* _SCSIM_Get_OperationalScenario_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize);

static int _SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases(void*);
static int _SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases(void*);

#endif /*OPERATIONALSCENARIO_SCSIM_MAPPING */
