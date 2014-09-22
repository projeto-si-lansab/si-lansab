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
	pSimulator->m_pfnPushState(pSimulator, "Ground", &_SCSIM_SSM_st_Ground_OpPhases_Utils, 9);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 10, valid, 9, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 11, valid, 9, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 12, valid, 9, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 13, valid, 9, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 14, valid, 9, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 15, valid, 9, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 16, valid, 9, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_bool_Utils, 17, valid, 9, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 18, valid, 9, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Ground_1_OpPhases_Utils, 19);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Launch", &_SCSIM_SSM_st_Launch_OpPhases_Utils, 9);
	/*<< Inlined ReadSensors*/
	pSimulator->m_pfnPushInstance(pSimulator, "ReadSensors", "3", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SensorsActive", &_SCSIM_kcg_bool_Utils, 20, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 21, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 22, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 23, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 24, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 25, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 26, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 27, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 28, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 29, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 30, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 31, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 32, valid, 9, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Launch_1_OpPhases_Utils, 19);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "AttitudeAcquisition", &_SCSIM_SSM_st_AttitudeAcquisition_OpPhases_Utils, 9);
	pSimulator->m_pfnAddLocal(pSimulator, "sMode", &_SCSIM_kcg_bool_Utils, 33, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "RefAtt", &_SCSIM_kcg_bool_Utils, 34, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "NPhase", &_SCSIM_kcg_bool_Utils, 35, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnPushStateMachine(pSimulator, "atacquisition");
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 36, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 37, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnPushState(pSimulator, "readsensors", &_SCSIM_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition_Utils, 38);
	/*<< Inlined ReadSensors*/
	pSimulator->m_pfnPushInstance(pSimulator, "ReadSensors", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SensorsActive", &_SCSIM_kcg_bool_Utils, 39, valid, 37, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 40, valid, 37, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 41, valid, 37, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 42, valid, 37, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_readsensors_1_atacquisition_OpPhases_AttitudeAcquisition_Utils, 43);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_readsensors_2_atacquisition_OpPhases_AttitudeAcquisition_Utils, 43);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "refAttitude", &_SCSIM_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition_Utils, 38);
	/*<< Inlined controlAlgorithm*/
	pSimulator->m_pfnPushInstance(pSimulator, "controlAlgorithm", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ControlAlgorithmActive", &_SCSIM_kcg_bool_Utils, 44, valid, 37, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 45, valid, 37, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 46, valid, 37, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 47, valid, 37, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 48, valid, 37, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 49, valid, 37, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 50, valid, 37, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 51, valid, 37, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 52, valid, 37, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 53, valid, 37, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 54, valid, 37, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 55, valid, 37, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_refAttitude_1_atacquisition_OpPhases_AttitudeAcquisition_Utils, 43);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "SafeMode", &_SCSIM_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition_Utils, 38);
	/*<< Inlined upDateSw*/
	pSimulator->m_pfnPushInstance(pSimulator, "upDateSw", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Updating", &_SCSIM_kcg_bool_Utils, 56, valid, 37, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 57, valid, 37, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 58, valid, 37, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 59, valid, 37, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 60, valid, 37, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 61, valid, 37, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 62, valid, 37, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_SafeMode_1_atacquisition_OpPhases_AttitudeAcquisition_Utils, 43);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 63, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 64, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 65, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 66, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 67, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 68, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 69, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 70, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 71, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 72, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 73, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 74, valid, 9, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_AttitudeAcquisition_1_OpPhases_Utils, 19);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "NormalPhase", &_SCSIM_SSM_st_NormalPhase_OpPhases_Utils, 9);
	pSimulator->m_pfnAddLocal(pSimulator, "sMode", &_SCSIM_kcg_bool_Utils, 75, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPushStateMachine(pSimulator, "NPhase");
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 76, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 77, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPushState(pSimulator, "AttControl", &_SCSIM_SSM_st_AttControl_OpPhases_NormalPhase_NPhase_Utils, 78);
	/*<< Inlined controlAlgorithm*/
	pSimulator->m_pfnPushInstance(pSimulator, "controlAlgorithm", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ControlAlgorithmActive", &_SCSIM_kcg_bool_Utils, 79, valid, 77, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 80, valid, 77, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 81, valid, 77, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 82, valid, 77, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 83, valid, 77, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 84, valid, 77, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 85, valid, 77, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 86, valid, 77, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 87, valid, 77, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 88, valid, 77, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 89, valid, 77, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_AttControl_1_NPhase_OpPhases_NormalPhase_Utils, 90);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_AttControl_2_NPhase_OpPhases_NormalPhase_Utils, 90);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Payload", &_SCSIM_SSM_st_Payload_OpPhases_NormalPhase_NPhase_Utils, 78);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 91, valid, 77, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 92, valid, 77, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_real_Utils, 93, valid, 77, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 94, valid, 77, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 95, valid, 77, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 96, valid, 77, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 97, valid, 77, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 98, valid, 77, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 99, valid, 77, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 100, valid, 77, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 101, valid, 77, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "2", &_SCSIM_SSM_TR_Payload_2_NPhase_OpPhases_NormalPhase_Utils, 102);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Payload_1_NPhase_OpPhases_NormalPhase_Utils, 90);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "SafeMode", &_SCSIM_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase_Utils, 78);
	/*<< Inlined upDateSw*/
	pSimulator->m_pfnPushInstance(pSimulator, "upDateSw", "2", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Updating", &_SCSIM_kcg_bool_Utils, 103, valid, 77, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 104, valid, 77, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 105, valid, 77, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 106, valid, 77, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 107, valid, 77, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 108, valid, 77, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 109, valid, 77, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_SafeMode_1_NPhase_OpPhases_NormalPhase_Utils, 90);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "pMode", &_SCSIM_kcg_bool_Utils, 110, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 111, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 112, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 113, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 114, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 115, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 116, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 117, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 118, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 119, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 120, valid, 9, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_NormalPhase_1_OpPhases_Utils, 19);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "ApertarBotao", &_SCSIM_kcg_bool_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color", &_SCSIM_kcg_int_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color_2", &_SCSIM_kcg_int_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color3", &_SCSIM_kcg_int_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color4", &_SCSIM_kcg_int_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "GroundVisibleLocal", &_SCSIM_kcg_bool_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LaunchVisibleLocal", &_SCSIM_kcg_bool_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AttitudeVisibleLocal", &_SCSIM_kcg_bool_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "NormalPhaseVisibleLocal", &_SCSIM_kcg_bool_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 130, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 131, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 132, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 134, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 135, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 136, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 137, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 138, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 139, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 141, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 142, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 143, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 144, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 145, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "StartLaunchPhase", &_SCSIM_kcg_bool_Utils, 146, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "StartAtAcquisition", &_SCSIM_kcg_bool_Utils, 147, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "safeMode", &_SCSIM_kcg_bool_Utils, 148, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RefAttitude", &_SCSIM_kcg_bool_Utils, 149, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NormalPhase", &_SCSIM_kcg_bool_Utils, 150, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "payMode", &_SCSIM_kcg_bool_Utils, 151, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "picture", &_SCSIM_kcg_real_Utils, 152, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Active", &_SCSIM_kcg_bool_Utils, 153, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Visible", &_SCSIM_kcg_bool_Utils, 154, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Emit2CDS", &_SCSIM_kcg_bool_Utils, 155, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex", &_SCSIM_kcg_int_Utils, 156, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex2", &_SCSIM_kcg_int_Utils, 157, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex3", &_SCSIM_kcg_int_Utils, 158, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex4", &_SCSIM_kcg_int_Utils, 159, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "GroundVisible", &_SCSIM_kcg_bool_Utils, 160, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LaunchVisible", &_SCSIM_kcg_bool_Utils, 161, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "AttitudeVisible", &_SCSIM_kcg_bool_Utils, 162, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NormalPhaseVisible", &_SCSIM_kcg_bool_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Power", &_SCSIM_kcg_bool_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Telemetry", &_SCSIM_kcg_int_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "AttitudeReference", &_SCSIM_kcg_int_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "takePict", &_SCSIM_kcg_bool_Utils, 167, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "picLocation", &_SCSIM_kcg_real_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PassarFaseBtn", &_SCSIM_kcg_bool_Utils, 169, valid, 0, 0);
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
			return &(outputs_ctx.OpPhases_state_act);
		case 10:
			return &(outputs_ctx._L1_OpPhases_Ground);
		case 11:
			return &(outputs_ctx._L2_OpPhases_Ground);
		case 12:
			return &(outputs_ctx._L4_OpPhases_Ground);
		case 13:
			return &(outputs_ctx._L7_OpPhases_Ground);
		case 14:
			return &(outputs_ctx._L8_OpPhases_Ground);
		case 15:
			return &(outputs_ctx._L13_OpPhases_Ground);
		case 16:
			return &(outputs_ctx._L14_OpPhases_Ground);
		case 17:
			return &(outputs_ctx._L15_OpPhases_Ground);
		case 18:
			return &(outputs_ctx._L16_OpPhases_Ground);
		case 19:
			return &(outputs_ctx.OpPhases_fired_strong);
		case 20:
			return &(outputs_ctx.SensorsActive_3);
		case 21:
			return &(outputs_ctx._L1_3);
		case 22:
			return &(outputs_ctx._L1_OpPhases_Launch);
		case 23:
			return &(outputs_ctx._L2_OpPhases_Launch);
		case 24:
			return &(outputs_ctx._L3_OpPhases_Launch);
		case 25:
			return &(outputs_ctx._L5_OpPhases_Launch);
		case 26:
			return &(outputs_ctx._L6_OpPhases_Launch);
		case 27:
			return &(outputs_ctx._L10_OpPhases_Launch);
		case 28:
			return &(outputs_ctx._L7_OpPhases_Launch);
		case 29:
			return &(outputs_ctx._L14_OpPhases_Launch);
		case 30:
			return &(outputs_ctx._L13_OpPhases_Launch);
		case 31:
			return &(outputs_ctx._L12_OpPhases_Launch);
		case 32:
			return &(outputs_ctx._L11_OpPhases_Launch);
		case 33:
			return &(outputs_ctx.sMode_OpPhases_AttitudeAcquisition);
		case 34:
			return &(outputs_ctx.RefAtt_OpPhases_AttitudeAcquisition);
		case 35:
			return &(outputs_ctx.NPhase_OpPhases_AttitudeAcquisition);
		case 36:
			return &(outputs_ctx._6_atacquisition_clock_OpPhases_AttitudeAcquisition);
		case 37:
			return &(outputs_ctx.atacquisition_clock_OpPhases_AttitudeAcquisition);
		case 38:
			return &(outputs_ctx.atacquisition_state_act_OpPhases_AttitudeAcquisition);
		case 39:
			return &(outputs_ctx.SensorsActive_5);
		case 40:
			return &(outputs_ctx._L1_5);
		case 41:
			return &(outputs_ctx._L127_OpPhases_AttitudeAcquisition_atacquisition_readsensors);
		case 42:
			return &(outputs_ctx._L226_OpPhases_AttitudeAcquisition_atacquisition_readsensors);
		case 43:
			return &(outputs_ctx.atacquisition_fired_strong_OpPhases_AttitudeAcquisition);
		case 44:
			return &(outputs_ctx.ControlAlgorithmActive_1);
		case 45:
			return &(outputs_ctx._L1_14);
		case 46:
			return &(outputs_ctx._L125_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 47:
			return &(outputs_ctx._L224_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 48:
			return &(outputs_ctx._L323_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 49:
			return &(outputs_ctx._L422_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 50:
			return &(outputs_ctx._L521_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 51:
			return &(outputs_ctx._L6_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 52:
			return &(outputs_ctx._L7_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 53:
			return &(outputs_ctx._L8_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 54:
			return &(outputs_ctx._L9_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 55:
			return &(outputs_ctx._L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 56:
			return &(outputs_ctx.Updating_1);
		case 57:
			return &(outputs_ctx._L1_1);
		case 58:
			return &(outputs_ctx._L1_OpPhases_AttitudeAcquisition_atacquisition_SafeMode);
		case 59:
			return &(outputs_ctx._L2_OpPhases_AttitudeAcquisition_atacquisition_SafeMode);
		case 60:
			return &(outputs_ctx._L3_OpPhases_AttitudeAcquisition_atacquisition_SafeMode);
		case 61:
			return &(outputs_ctx._L4_OpPhases_AttitudeAcquisition_atacquisition_SafeMode);
		case 62:
			return &(outputs_ctx._L5_OpPhases_AttitudeAcquisition_atacquisition_SafeMode);
		case 63:
			return &(outputs_ctx._L131_OpPhases_AttitudeAcquisition);
		case 64:
			return &(outputs_ctx._L230_OpPhases_AttitudeAcquisition);
		case 65:
			return &(outputs_ctx._L329_OpPhases_AttitudeAcquisition);
		case 66:
			return &(outputs_ctx._L528_OpPhases_AttitudeAcquisition);
		case 67:
			return &(outputs_ctx._L15_OpPhases_AttitudeAcquisition);
		case 68:
			return &(outputs_ctx._L14_OpPhases_AttitudeAcquisition);
		case 69:
			return &(outputs_ctx._L13_OpPhases_AttitudeAcquisition);
		case 70:
			return &(outputs_ctx._L12_OpPhases_AttitudeAcquisition);
		case 71:
			return &(outputs_ctx._L19_OpPhases_AttitudeAcquisition);
		case 72:
			return &(outputs_ctx._L18_OpPhases_AttitudeAcquisition);
		case 73:
			return &(outputs_ctx._L17_OpPhases_AttitudeAcquisition);
		case 74:
			return &(outputs_ctx._L16_OpPhases_AttitudeAcquisition);
		case 75:
			return &(outputs_ctx.sMode_OpPhases_NormalPhase);
		case 76:
			return &(outputs_ctx._5_NPhase_clock_OpPhases_NormalPhase);
		case 77:
			return &(outputs_ctx.NPhase_clock_OpPhases_NormalPhase);
		case 78:
			return &(outputs_ctx.NPhase_state_act_OpPhases_NormalPhase);
		case 79:
			return &(outputs_ctx.ControlAlgorithmActive_2);
		case 80:
			return &(outputs_ctx._L1_23);
		case 81:
			return &(outputs_ctx._L120_OpPhases_NormalPhase_NPhase_AttControl);
		case 82:
			return &(outputs_ctx._L219_OpPhases_NormalPhase_NPhase_AttControl);
		case 83:
			return &(outputs_ctx._L318_OpPhases_NormalPhase_NPhase_AttControl);
		case 84:
			return &(outputs_ctx._L417_OpPhases_NormalPhase_NPhase_AttControl);
		case 85:
			return &(outputs_ctx._L516_OpPhases_NormalPhase_NPhase_AttControl);
		case 86:
			return &(outputs_ctx._L615_OpPhases_NormalPhase_NPhase_AttControl);
		case 87:
			return &(outputs_ctx._L714_OpPhases_NormalPhase_NPhase_AttControl);
		case 88:
			return &(outputs_ctx._L813_OpPhases_NormalPhase_NPhase_AttControl);
		case 89:
			return &(outputs_ctx._L912_OpPhases_NormalPhase_NPhase_AttControl);
		case 90:
			return &(outputs_ctx.NPhase_fired_strong_OpPhases_NormalPhase);
		case 91:
			return &(outputs_ctx._L111_OpPhases_NormalPhase_NPhase_Payload);
		case 92:
			return &(outputs_ctx._L210_OpPhases_NormalPhase_NPhase_Payload);
		case 93:
			return &(outputs_ctx._L39_OpPhases_NormalPhase_NPhase_Payload);
		case 94:
			return &(outputs_ctx._L48_OpPhases_NormalPhase_NPhase_Payload);
		case 95:
			return &(outputs_ctx._L57_OpPhases_NormalPhase_NPhase_Payload);
		case 96:
			return &(outputs_ctx._L6_OpPhases_NormalPhase_NPhase_Payload);
		case 97:
			return &(outputs_ctx._L7_OpPhases_NormalPhase_NPhase_Payload);
		case 98:
			return &(outputs_ctx._L8_OpPhases_NormalPhase_NPhase_Payload);
		case 99:
			return &(outputs_ctx._L9_OpPhases_NormalPhase_NPhase_Payload);
		case 100:
			return &(outputs_ctx._L10_OpPhases_NormalPhase_NPhase_Payload);
		case 101:
			return &(outputs_ctx.Payload_weakb_clock_OpPhases_NormalPhase_NPhase);
		case 102:
			return &(outputs_ctx.NPhase_fired_OpPhases_NormalPhase);
		case 103:
			return &(outputs_ctx.Updating_2);
		case 104:
			return &(outputs_ctx._L1_2);
		case 105:
			return &(outputs_ctx._L1_OpPhases_NormalPhase_NPhase_SafeMode);
		case 106:
			return &(outputs_ctx._L2_OpPhases_NormalPhase_NPhase_SafeMode);
		case 107:
			return &(outputs_ctx._L3_OpPhases_NormalPhase_NPhase_SafeMode);
		case 108:
			return &(outputs_ctx._L4_OpPhases_NormalPhase_NPhase_SafeMode);
		case 109:
			return &(outputs_ctx._L5_OpPhases_NormalPhase_NPhase_SafeMode);
		case 110:
			return &(outputs_ctx.pMode_OpPhases_NormalPhase);
		case 111:
			return &(outputs_ctx._L1_OpPhases_NormalPhase);
		case 112:
			return &(outputs_ctx._L2_OpPhases_NormalPhase);
		case 113:
			return &(outputs_ctx._L8_OpPhases_NormalPhase);
		case 114:
			return &(outputs_ctx._L7_OpPhases_NormalPhase);
		case 115:
			return &(outputs_ctx._L6_OpPhases_NormalPhase);
		case 116:
			return &(outputs_ctx._L5_OpPhases_NormalPhase);
		case 117:
			return &(outputs_ctx._L12_OpPhases_NormalPhase);
		case 118:
			return &(outputs_ctx._L11_OpPhases_NormalPhase);
		case 119:
			return &(outputs_ctx._L10_OpPhases_NormalPhase);
		case 120:
			return &(outputs_ctx._L9_OpPhases_NormalPhase);
		case 121:
			return &(outputs_ctx.ApertarBotao);
		case 122:
			return &(outputs_ctx.color);
		case 123:
			return &(outputs_ctx.color_2);
		case 124:
			return &(outputs_ctx.color3);
		case 125:
			return &(outputs_ctx.color4);
		case 126:
			return &(outputs_ctx.GroundVisibleLocal);
		case 127:
			return &(outputs_ctx.LaunchVisibleLocal);
		case 128:
			return &(outputs_ctx.AttitudeVisibleLocal);
		case 129:
			return &(outputs_ctx.NormalPhaseVisibleLocal);
		case 130:
			return &(outputs_ctx._L1);
		case 131:
			return &(outputs_ctx._L3);
		case 132:
			return &(outputs_ctx._L4);
		case 133:
			return &(outputs_ctx._L6);
		case 134:
			return &(outputs_ctx._L7);
		case 135:
			return &(outputs_ctx._L8);
		case 136:
			return &(outputs_ctx._L9);
		case 137:
			return &(outputs_ctx._L11);
		case 138:
			return &(outputs_ctx._L12);
		case 139:
			return &(outputs_ctx._L13);
		case 140:
			return &(outputs_ctx._L14);
		case 141:
			return &(outputs_ctx._L15);
		case 142:
			return &(outputs_ctx._L16);
		case 143:
			return &(outputs_ctx._L18);
		case 144:
			return &(outputs_ctx._L19);
		case 145:
			return &(outputs_ctx._L20);
		case 146:
			return &(outputs_ctx.StartLaunchPhase);
		case 147:
			return &(outputs_ctx.StartAtAcquisition);
		case 148:
			return &(outputs_ctx.safeMode);
		case 149:
			return &(outputs_ctx.RefAttitude);
		case 150:
			return &(outputs_ctx.NormalPhase);
		case 151:
			return &(outputs_ctx.payMode);
		case 152:
			return &(outputs_ctx.picture);
		case 153:
			return &(outputs_ctx.Layer1Active);
		case 154:
			return &(outputs_ctx.Layer1Visible);
		case 155:
			return &(outputs_ctx.Emit2CDS);
		case 156:
			return &(outputs_ctx.ColorIndex);
		case 157:
			return &(outputs_ctx.ColorIndex2);
		case 158:
			return &(outputs_ctx.ColorIndex3);
		case 159:
			return &(outputs_ctx.ColorIndex4);
		case 160:
			return &(outputs_ctx.GroundVisible);
		case 161:
			return &(outputs_ctx.LaunchVisible);
		case 162:
			return &(outputs_ctx.AttitudeVisible);
		case 163:
			return &(outputs_ctx.NormalPhaseVisible);
		case 164:
			return &(inputs_ctx.Power);
		case 165:
			return &(inputs_ctx.Telemetry);
		case 166:
			return &(inputs_ctx.AttitudeReference);
		case 167:
			return &(inputs_ctx.takePict);
		case 168:
			return &(inputs_ctx.picLocation);
		case 169:
			return &(inputs_ctx.PassarFaseBtn);
		default:
			break;
	}
	return 0;
}

static int IsSSM_TR_Ground_1_OpPhasesActive(void * pHandle) {
	return *((SSM_TR_OpPhases*)pHandle) == SSM_TR_Ground_1_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Ground_1_OpPhases_Utils = {IsSSM_TR_Ground_1_OpPhasesActive};

static int IsSSM_st_Ground_OpPhasesActive(void * pHandle) {
	return *((SSM_ST_OpPhases*)pHandle) == SSM_st_Ground_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Ground_OpPhases_Utils = {IsSSM_st_Ground_OpPhasesActive};

static int IsSSM_TR_Launch_1_OpPhasesActive(void * pHandle) {
	return *((SSM_TR_OpPhases*)pHandle) == SSM_TR_Launch_1_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Launch_1_OpPhases_Utils = {IsSSM_TR_Launch_1_OpPhasesActive};

static int IsSSM_st_Launch_OpPhasesActive(void * pHandle) {
	return *((SSM_ST_OpPhases*)pHandle) == SSM_st_Launch_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Launch_OpPhases_Utils = {IsSSM_st_Launch_OpPhasesActive};

static int IsSSM_TR_readsensors_1_atacquisition_OpPhases_AttitudeAcquisitionActive(void * pHandle) {
	return *((SSM_TR_atacquisition_OpPhases_AttitudeAcquisition*)pHandle) == SSM_TR_readsensors_1_atacquisition_OpPhases_AttitudeAcquisition ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_readsensors_1_atacquisition_OpPhases_AttitudeAcquisition_Utils = {IsSSM_TR_readsensors_1_atacquisition_OpPhases_AttitudeAcquisitionActive};

static int IsSSM_TR_readsensors_2_atacquisition_OpPhases_AttitudeAcquisitionActive(void * pHandle) {
	return *((SSM_TR_atacquisition_OpPhases_AttitudeAcquisition*)pHandle) == SSM_TR_readsensors_2_atacquisition_OpPhases_AttitudeAcquisition ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_readsensors_2_atacquisition_OpPhases_AttitudeAcquisition_Utils = {IsSSM_TR_readsensors_2_atacquisition_OpPhases_AttitudeAcquisitionActive};

static int IsSSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisitionActive(void * pHandle) {
	return *((SSM_ST_atacquisition_OpPhases_AttitudeAcquisition*)pHandle) == SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition_Utils = {IsSSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisitionActive};

static int IsSSM_TR_refAttitude_1_atacquisition_OpPhases_AttitudeAcquisitionActive(void * pHandle) {
	return *((SSM_TR_atacquisition_OpPhases_AttitudeAcquisition*)pHandle) == SSM_TR_refAttitude_1_atacquisition_OpPhases_AttitudeAcquisition ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_refAttitude_1_atacquisition_OpPhases_AttitudeAcquisition_Utils = {IsSSM_TR_refAttitude_1_atacquisition_OpPhases_AttitudeAcquisitionActive};

static int IsSSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisitionActive(void * pHandle) {
	return *((SSM_ST_atacquisition_OpPhases_AttitudeAcquisition*)pHandle) == SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition_Utils = {IsSSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisitionActive};

static int IsSSM_TR_SafeMode_1_atacquisition_OpPhases_AttitudeAcquisitionActive(void * pHandle) {
	return *((SSM_TR_atacquisition_OpPhases_AttitudeAcquisition*)pHandle) == SSM_TR_SafeMode_1_atacquisition_OpPhases_AttitudeAcquisition ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_SafeMode_1_atacquisition_OpPhases_AttitudeAcquisition_Utils = {IsSSM_TR_SafeMode_1_atacquisition_OpPhases_AttitudeAcquisitionActive};

static int IsSSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisitionActive(void * pHandle) {
	return *((SSM_ST_atacquisition_OpPhases_AttitudeAcquisition*)pHandle) == SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition_Utils = {IsSSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisitionActive};

static int IsSSM_TR_AttitudeAcquisition_1_OpPhasesActive(void * pHandle) {
	return *((SSM_TR_OpPhases*)pHandle) == SSM_TR_AttitudeAcquisition_1_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_AttitudeAcquisition_1_OpPhases_Utils = {IsSSM_TR_AttitudeAcquisition_1_OpPhasesActive};

static int IsSSM_st_AttitudeAcquisition_OpPhasesActive(void * pHandle) {
	return *((SSM_ST_OpPhases*)pHandle) == SSM_st_AttitudeAcquisition_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_AttitudeAcquisition_OpPhases_Utils = {IsSSM_st_AttitudeAcquisition_OpPhasesActive};

static int IsSSM_TR_AttControl_1_NPhase_OpPhases_NormalPhaseActive(void * pHandle) {
	return *((SSM_TR_NPhase_OpPhases_NormalPhase*)pHandle) == SSM_TR_AttControl_1_NPhase_OpPhases_NormalPhase ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_AttControl_1_NPhase_OpPhases_NormalPhase_Utils = {IsSSM_TR_AttControl_1_NPhase_OpPhases_NormalPhaseActive};

static int IsSSM_TR_AttControl_2_NPhase_OpPhases_NormalPhaseActive(void * pHandle) {
	return *((SSM_TR_NPhase_OpPhases_NormalPhase*)pHandle) == SSM_TR_AttControl_2_NPhase_OpPhases_NormalPhase ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_AttControl_2_NPhase_OpPhases_NormalPhase_Utils = {IsSSM_TR_AttControl_2_NPhase_OpPhases_NormalPhaseActive};

static int IsSSM_st_AttControl_OpPhases_NormalPhase_NPhaseActive(void * pHandle) {
	return *((SSM_ST_NPhase_OpPhases_NormalPhase*)pHandle) == SSM_st_AttControl_OpPhases_NormalPhase_NPhase ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_AttControl_OpPhases_NormalPhase_NPhase_Utils = {IsSSM_st_AttControl_OpPhases_NormalPhase_NPhaseActive};

static int IsSSM_TR_Payload_2_NPhase_OpPhases_NormalPhaseActive(void * pHandle) {
	return *((SSM_TR_NPhase_OpPhases_NormalPhase*)pHandle) == SSM_TR_Payload_2_NPhase_OpPhases_NormalPhase ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Payload_2_NPhase_OpPhases_NormalPhase_Utils = {IsSSM_TR_Payload_2_NPhase_OpPhases_NormalPhaseActive};

static int IsSSM_TR_Payload_1_NPhase_OpPhases_NormalPhaseActive(void * pHandle) {
	return *((SSM_TR_NPhase_OpPhases_NormalPhase*)pHandle) == SSM_TR_Payload_1_NPhase_OpPhases_NormalPhase ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Payload_1_NPhase_OpPhases_NormalPhase_Utils = {IsSSM_TR_Payload_1_NPhase_OpPhases_NormalPhaseActive};

static int IsSSM_st_Payload_OpPhases_NormalPhase_NPhaseActive(void * pHandle) {
	return *((SSM_ST_NPhase_OpPhases_NormalPhase*)pHandle) == SSM_st_Payload_OpPhases_NormalPhase_NPhase ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Payload_OpPhases_NormalPhase_NPhase_Utils = {IsSSM_st_Payload_OpPhases_NormalPhase_NPhaseActive};

static int IsSSM_TR_SafeMode_1_NPhase_OpPhases_NormalPhaseActive(void * pHandle) {
	return *((SSM_TR_NPhase_OpPhases_NormalPhase*)pHandle) == SSM_TR_SafeMode_1_NPhase_OpPhases_NormalPhase ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_SafeMode_1_NPhase_OpPhases_NormalPhase_Utils = {IsSSM_TR_SafeMode_1_NPhase_OpPhases_NormalPhaseActive};

static int IsSSM_st_SafeMode_OpPhases_NormalPhase_NPhaseActive(void * pHandle) {
	return *((SSM_ST_NPhase_OpPhases_NormalPhase*)pHandle) == SSM_st_SafeMode_OpPhases_NormalPhase_NPhase ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase_Utils = {IsSSM_st_SafeMode_OpPhases_NormalPhase_NPhaseActive};

static int IsSSM_TR_NormalPhase_1_OpPhasesActive(void * pHandle) {
	return *((SSM_TR_OpPhases*)pHandle) == SSM_TR_NormalPhase_1_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_NormalPhase_1_OpPhases_Utils = {IsSSM_TR_NormalPhase_1_OpPhasesActive};

static int IsSSM_st_NormalPhase_OpPhasesActive(void * pHandle) {
	return *((SSM_ST_OpPhases*)pHandle) == SSM_st_NormalPhase_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_NormalPhase_OpPhases_Utils = {IsSSM_st_NormalPhase_OpPhasesActive};

static int _SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase(void* clock) {
return *(kcg_bool*)clock == SSM_st_SafeMode_OpPhases_NormalPhase_NPhase ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase(void* clock) {
return *(kcg_bool*)clock == SSM_st_Payload_OpPhases_NormalPhase_NPhase ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase(void* clock) {
return *(kcg_bool*)clock == SSM_st_AttControl_OpPhases_NormalPhase_NPhase ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases(void* clock) {
return *(kcg_bool*)clock == SSM_st_NormalPhase_OpPhases ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition(void* clock) {
return *(kcg_bool*)clock == SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition(void* clock) {
return *(kcg_bool*)clock == SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition(void* clock) {
return *(kcg_bool*)clock == SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases(void* clock) {
return *(kcg_bool*)clock == SSM_st_AttitudeAcquisition_OpPhases ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_Launch_OpPhases(void* clock) {
return *(kcg_bool*)clock == SSM_st_Launch_OpPhases ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_Ground_OpPhases(void* clock) {
return *(kcg_bool*)clock == SSM_st_Ground_OpPhases ? 1 : 0;
}
