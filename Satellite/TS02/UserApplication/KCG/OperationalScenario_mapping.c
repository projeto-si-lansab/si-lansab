#include "OperationalScenario_mapping.h"
#include "OperationalScenario_interface.h"
#include "kcg_sensors.h"

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
static ControlUtils _SCSIM_BoolEntity_Control_Utils = {_SCSIM_BoolEntity_is_active};
/****************************************************************
 ** Mapping creation function
 ****************************************************************/
void _SCSIM_Mapping_Create() {
	_SCSIM_Mapping_OperationalScenario();
	pSimulator->m_pfnFinalizeMapping(pSimulator);
}

/****************************************************************
 ** OperationalScenario/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_OperationalScenario() {
	pSimulator->m_pfnSetRoot(pSimulator, "OperationalScenario/", &outputs_ctx, _SCSIM_Get_OperationalScenario_Handle);
	pSimulator->m_pfnAddLocal(pSimulator, "Power", &_SCSIM_kcg_bool_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "Telemetry", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AttitudeReference", &_SCSIM_kcg_int_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "takePict", &_SCSIM_kcg_bool_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "picLocation", &_SCSIM_kcg_real_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LaunchPhase", &_SCSIM_kcg_bool_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AtAcquisition", &_SCSIM_kcg_bool_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "NPhase", &_SCSIM_kcg_bool_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnPushStateMachine(pSimulator, "OpPhases");
	pSimulator->m_pfnPushState(pSimulator, "Ground", 0, -1);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", 0, -1);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Launch", 0, -1);
	/*<< Inlined ReadSensors*/
	pSimulator->m_pfnPushInstance(pSimulator, "ReadSensors", "3", 0, 0, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", 0, -1);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "AttitudeAcquisition", 0, -1);
	pSimulator->m_pfnAddLocal(pSimulator, "sMode", &_SCSIM_kcg_bool_Utils, 9, valid, 10, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "RefAtt", &_SCSIM_kcg_bool_Utils, 11, valid, 10, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "NPhase", &_SCSIM_kcg_bool_Utils, 12, valid, 10, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnPushStateMachine(pSimulator, "atacquisition");
	pSimulator->m_pfnPushState(pSimulator, "readsensors", 0, -1);
	/*<< Inlined ReadSensors*/
	pSimulator->m_pfnPushInstance(pSimulator, "ReadSensors", "5", 0, 0, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", 0, -1);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", 0, -1);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "refAttitude", 0, -1);
	/*<< Inlined controlAlgorithm*/
	pSimulator->m_pfnPushInstance(pSimulator, "controlAlgorithm", "1", 0, 0, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", 0, -1);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "SafeMode", 0, -1);
	/*<< Inlined upDateSw*/
	pSimulator->m_pfnPushInstance(pSimulator, "upDateSw", "1", 0, 0, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", 0, -1);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", 0, -1);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "NormalPhase", 0, -1);
	pSimulator->m_pfnAddLocal(pSimulator, "sMode", &_SCSIM_kcg_bool_Utils, 13, valid, 10, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPushStateMachine(pSimulator, "NPhase");
	pSimulator->m_pfnPushState(pSimulator, "AttControl", 0, -1);
	/*<< Inlined controlAlgorithm*/
	pSimulator->m_pfnPushInstance(pSimulator, "controlAlgorithm", "2", 0, 0, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", 0, -1);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", 0, -1);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Payload", 0, -1);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "2", 0, -1);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", 0, -1);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "SafeMode", 0, -1);
	/*<< Inlined upDateSw*/
	pSimulator->m_pfnPushInstance(pSimulator, "upDateSw", "2", 0, 0, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", 0, -1);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", 0, -1);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddOutput(pSimulator, "StartLaunchPhase", &_SCSIM_kcg_bool_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "StartAtAcquisition", &_SCSIM_kcg_bool_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "safeMode", &_SCSIM_kcg_bool_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RefAttitude", &_SCSIM_kcg_bool_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NormalPhase", &_SCSIM_kcg_bool_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "payMode", &_SCSIM_kcg_bool_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "picture", &_SCSIM_kcg_real_Utils, 20, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Active", &_SCSIM_kcg_bool_Utils, 21, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Visible", &_SCSIM_kcg_bool_Utils, 22, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Emit2CDS", &_SCSIM_kcg_bool_Utils, 23, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex", &_SCSIM_kcg_int_Utils, 24, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex2", &_SCSIM_kcg_int_Utils, 25, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex3", &_SCSIM_kcg_int_Utils, 26, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex4", &_SCSIM_kcg_int_Utils, 27, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Power", &_SCSIM_kcg_bool_Utils, 28, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Telemetry", &_SCSIM_kcg_int_Utils, 29, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "AttitudeReference", &_SCSIM_kcg_int_Utils, 30, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "takePict", &_SCSIM_kcg_bool_Utils, 31, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "picLocation", &_SCSIM_kcg_real_Utils, 32, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PassarFaseBtn", &_SCSIM_kcg_bool_Utils, 33, valid, 0, 0);
}

void* _SCSIM_Get_OperationalScenario_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.rem_Power);
		case 2:
			return &(outputs_ctx.rem_Telemetry);
		case 3:
			return &(outputs_ctx.rem_AttitudeReference);
		case 4:
			return &(outputs_ctx.rem_takePict);
		case 5:
			return &(outputs_ctx.rem_picLocation);
		case 6:
			return &(outputs_ctx.LaunchPhase);
		case 7:
			return &(outputs_ctx.AtAcquisition);
		case 8:
			return &(outputs_ctx.NPhase);
		case 9:
			return &(outputs_ctx.sMode_OpPhases_AttitudeAcquisition);
		case 11:
			return &(outputs_ctx.RefAtt_OpPhases_AttitudeAcquisition);
		case 12:
			return &(outputs_ctx.NPhase_OpPhases_AttitudeAcquisition);
		case 13:
			return &(outputs_ctx.sMode_OpPhases_NormalPhase);
		case 14:
			return &(outputs_ctx.StartLaunchPhase);
		case 15:
			return &(outputs_ctx.StartAtAcquisition);
		case 16:
			return &(outputs_ctx.safeMode);
		case 17:
			return &(outputs_ctx.RefAttitude);
		case 18:
			return &(outputs_ctx.NormalPhase);
		case 19:
			return &(outputs_ctx.payMode);
		case 20:
			return &(outputs_ctx.picture);
		case 21:
			return &(outputs_ctx.Layer1Active);
		case 22:
			return &(outputs_ctx.Layer1Visible);
		case 23:
			return &(outputs_ctx.Emit2CDS);
		case 24:
			return &(outputs_ctx.ColorIndex);
		case 25:
			return &(outputs_ctx.ColorIndex2);
		case 26:
			return &(outputs_ctx.ColorIndex3);
		case 27:
			return &(outputs_ctx.ColorIndex4);
		case 28:
			return &(inputs_ctx.Power);
		case 29:
			return &(inputs_ctx.Telemetry);
		case 30:
			return &(inputs_ctx.AttitudeReference);
		case 31:
			return &(inputs_ctx.takePict);
		case 32:
			return &(inputs_ctx.picLocation);
		case 33:
			return &(inputs_ctx.PassarFaseBtn);
		default:
			break;
	}
	return 0;
}

static int _SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases(void* clock) {
return *(kcg_bool*)clock == SSM_st_NormalPhase_OpPhases ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases(void* clock) {
return *(kcg_bool*)clock == SSM_st_AttitudeAcquisition_OpPhases ? 1 : 0;
}
