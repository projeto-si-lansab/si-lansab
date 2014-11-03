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
	pSimulator->m_pfnAddLocal(pSimulator, "Gyroscopes", &_SCSIM_kcg_bool_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "Accelerometers", &_SCSIM_kcg_bool_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SunSensor", &_SCSIM_kcg_bool_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "Reactionwheels", &_SCSIM_kcg_bool_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "MagneticTorquers", &_SCSIM_kcg_bool_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "upDateSw", &_SCSIM_kcg_bool_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LaunchPhase", &_SCSIM_kcg_bool_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "ApertarBotao", &_SCSIM_kcg_bool_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "GroundVisibleLocal", &_SCSIM_kcg_bool_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AtAcquisition", &_SCSIM_kcg_bool_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "NPhase", &_SCSIM_kcg_bool_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnPushStateMachine(pSimulator, "OpPhases");
	pSimulator->m_pfnPushState(pSimulator, "Ground", &_SCSIM_SSM_st_Ground_OpPhases_Utils, 17);
	_SCSIM_Mapping_ReadSensors("ReadSensors", "6", 18, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	_SCSIM_Mapping_TestActuators("TestActuators", "1", 19, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 20, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 21, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 22, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 23, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 24, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 25, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_bool_Utils, 26, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 27, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 28, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 29, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 30, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_bool_Utils, 31, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 32, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_bool_Utils, 33, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_bool_Utils, 34, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_bool_Utils, 35, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_bool_Utils, 36, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_bool_Utils, 37, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 38, valid, 17, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "2", &_SCSIM_SSM_TR_Ground_2_OpPhases_Utils, 39);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Ground_1_OpPhases_Utils, 40);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Launch", &_SCSIM_SSM_st_Launch_OpPhases_Utils, 17);
	pSimulator->m_pfnAddLocal(pSimulator, "AtAcquisition", &_SCSIM_kcg_bool_Utils, 41, valid, 17, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 42, valid, 17, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 43, valid, 17, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 44, valid, 17, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 45, valid, 17, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 46, valid, 17, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 47, valid, 17, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 48, valid, 17, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 49, valid, 17, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Launch_1_OpPhases_Utils, 40);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_Launch_2_OpPhases_Utils, 40);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "AttitudeAcquisition", &_SCSIM_SSM_st_AttitudeAcquisition_OpPhases_Utils, 17);
	pSimulator->m_pfnAddLocal(pSimulator, "sMode", &_SCSIM_kcg_bool_Utils, 50, valid, 17, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnPushStateMachine(pSimulator, "atacquisition");
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 51, valid, 17, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 52, valid, 17, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnPushState(pSimulator, "readsensors", &_SCSIM_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition_Utils, 53);
	_SCSIM_Mapping_ReadSensors("ReadSensors", "8", 54, 52, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	_SCSIM_Mapping_TestActuators("TestActuators", "4", 55, 52, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 56, valid, 52, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 57, valid, 52, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 58, valid, 52, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 59, valid, 52, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 60, valid, 52, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 61, valid, 52, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 62, valid, 52, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 63, valid, 52, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_bool_Utils, 64, valid, 52, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 65, valid, 52, &_SCSIM_ClockActive_SSM_st_readsensors_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_readsensors_1_atacquisition_OpPhases_AttitudeAcquisition_Utils, 66);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_readsensors_2_atacquisition_OpPhases_AttitudeAcquisition_Utils, 66);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "refAttitude", &_SCSIM_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition_Utils, 53);
	_SCSIM_Mapping_controlAlgorithm("controlAlgorithm", "1", 67, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	_SCSIM_Mapping_ReadSensors("ReadSensors", "9", 68, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	_SCSIM_Mapping_TestActuators("TestActuators", "5", 69, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 70, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 71, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_bool_Utils, 72, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 73, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 74, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 75, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 76, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 77, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_bool_Utils, 78, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 79, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 80, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 81, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_bool_Utils, 82, valid, 52, &_SCSIM_ClockActive_SSM_st_refAttitude_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_refAttitude_1_atacquisition_OpPhases_AttitudeAcquisition_Utils, 66);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_refAttitude_2_atacquisition_OpPhases_AttitudeAcquisition_Utils, 66);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "SafeMode", &_SCSIM_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition_Utils, 53);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 83, valid, 52, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_AttitudeAcquisition_atacquisition);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_SafeMode_1_atacquisition_OpPhases_AttitudeAcquisition_Utils, 66);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 84, valid, 17, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 85, valid, 17, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 86, valid, 17, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 87, valid, 17, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 88, valid, 17, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 89, valid, 17, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 90, valid, 17, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 91, valid, 17, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_AttitudeAcquisition_1_OpPhases_Utils, 40);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_AttitudeAcquisition_2_OpPhases_Utils, 40);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "NormalPhase", &_SCSIM_SSM_st_NormalPhase_OpPhases_Utils, 17);
	pSimulator->m_pfnAddLocal(pSimulator, "sMode", &_SCSIM_kcg_bool_Utils, 92, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPushStateMachine(pSimulator, "NPhase");
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 93, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", 0, 94, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPushState(pSimulator, "AttControl", &_SCSIM_SSM_st_AttControl_OpPhases_NormalPhase_NPhase_Utils, 95);
	_SCSIM_Mapping_controlAlgorithm("controlAlgorithm", "2", 96, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	_SCSIM_Mapping_TestActuators("TestActuators", "6", 97, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	_SCSIM_Mapping_ReadSensors("ReadSensors", "10", 98, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 99, valid, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 100, valid, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 101, valid, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 102, valid, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_bool_Utils, 103, valid, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 104, valid, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 105, valid, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 106, valid, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 107, valid, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 108, valid, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 109, valid, 94, &_SCSIM_ClockActive_SSM_st_AttControl_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_AttControl_1_NPhase_OpPhases_NormalPhase_Utils, 110);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "2", &_SCSIM_SSM_TR_AttControl_2_NPhase_OpPhases_NormalPhase_Utils, 110);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Payload", &_SCSIM_SSM_st_Payload_OpPhases_NormalPhase_NPhase_Utils, 95);
	_SCSIM_Mapping_TestActuators("TestActuators", "7", 111, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	_SCSIM_Mapping_ReadSensors("ReadSensors", "11", 112, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 113, valid, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_real_Utils, 114, valid, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 115, valid, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_bool_Utils, 116, valid, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 117, valid, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 118, valid, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_bool_Utils, 119, valid, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 120, valid, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 121, valid, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 122, valid, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 123, valid, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 124, valid, 94, &_SCSIM_ClockActive_SSM_st_Payload_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "2", &_SCSIM_SSM_TR_Payload_2_NPhase_OpPhases_NormalPhase_Utils, 125);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Payload_1_NPhase_OpPhases_NormalPhase_Utils, 110);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "SafeMode", &_SCSIM_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase_Utils, 95);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 126, valid, 94, &_SCSIM_ClockActive_SSM_st_SafeMode_OpPhases_NormalPhase_NPhase);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_SafeMode_1_NPhase_OpPhases_NormalPhase_Utils, 110);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "pMode", &_SCSIM_kcg_bool_Utils, 127, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_bool_Utils, 128, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 129, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 130, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 131, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 132, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 133, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 134, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 135, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 136, valid, 17, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "color", &_SCSIM_kcg_int_Utils, 137, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color_2", &_SCSIM_kcg_int_Utils, 138, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color3", &_SCSIM_kcg_int_Utils, 139, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color4", &_SCSIM_kcg_int_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AttitudeVisibleLocal", &_SCSIM_kcg_bool_Utils, 141, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "NormalPhaseVisibleLocal", &_SCSIM_kcg_bool_Utils, 142, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 143, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 144, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 145, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 146, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 147, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 148, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 149, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 150, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 152, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 153, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 154, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_bool_Utils, 155, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_bool_Utils, 156, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "StartLaunchPhase", &_SCSIM_kcg_bool_Utils, 157, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "StartAtAcquisition", &_SCSIM_kcg_bool_Utils, 158, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "safeMode", &_SCSIM_kcg_bool_Utils, 159, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "RefAttitude", &_SCSIM_kcg_bool_Utils, 160, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "StartNormalPhase", &_SCSIM_kcg_bool_Utils, 161, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "payMode", &_SCSIM_kcg_bool_Utils, 162, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "picture", &_SCSIM_kcg_real_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Active", &_SCSIM_kcg_bool_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Visible", &_SCSIM_kcg_bool_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Emit2CDS", &_SCSIM_kcg_bool_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex", &_SCSIM_kcg_int_Utils, 167, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex2", &_SCSIM_kcg_int_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex3", &_SCSIM_kcg_int_Utils, 169, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex4", &_SCSIM_kcg_int_Utils, 170, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "GroundVisible", &_SCSIM_kcg_bool_Utils, 171, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "AttitudeVisible", &_SCSIM_kcg_bool_Utils, 172, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NormalPhaseVisible", &_SCSIM_kcg_bool_Utils, 173, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SafeM", &_SCSIM_kcg_bool_Utils, 174, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Power", &_SCSIM_kcg_bool_Utils, 175, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Telemetry", &_SCSIM_kcg_int_Utils, 176, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "AttitudeReference", &_SCSIM_kcg_int_Utils, 177, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "takePict", &_SCSIM_kcg_bool_Utils, 178, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "picLocation", &_SCSIM_kcg_real_Utils, 179, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PassarFaseBtn", &_SCSIM_kcg_bool_Utils, 180, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Gyroscopes", &_SCSIM_kcg_bool_Utils, 181, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Accelerometers", &_SCSIM_kcg_bool_Utils, 182, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SunSensor", &_SCSIM_kcg_bool_Utils, 183, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Reactionwheels", &_SCSIM_kcg_bool_Utils, 184, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "MagneticTorquers", &_SCSIM_kcg_bool_Utils, 185, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "upDateSw", &_SCSIM_kcg_bool_Utils, 186, valid, 0, 0);
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
			return &(outputs_ctx.rem_Gyroscopes);
		case 7:
			return &(outputs_ctx.rem_Accelerometers);
		case 8:
			return &(outputs_ctx.rem_SunSensor);
		case 9:
			return &(outputs_ctx.rem_Reactionwheels);
		case 10:
			return &(outputs_ctx.rem_MagneticTorquers);
		case 11:
			return &(outputs_ctx.rem_upDateSw);
		case 12:
			return &(outputs_ctx.LaunchPhase);
		case 13:
			return &(outputs_ctx.ApertarBotao);
		case 14:
			return &(outputs_ctx.GroundVisibleLocal);
		case 15:
			return &(outputs_ctx.AtAcquisition);
		case 16:
			return &(outputs_ctx.NPhase);
		case 17:
			return &(outputs_ctx.OpPhases_state_act);
		case 18:
			return &(outputs_ctx.Context_6);
		case 19:
			return &(outputs_ctx.Context_1);
		case 20:
			return &(outputs_ctx._L1_OpPhases_Ground);
		case 21:
			return &(outputs_ctx._L2_OpPhases_Ground);
		case 22:
			return &(outputs_ctx._L4_OpPhases_Ground);
		case 23:
			return &(outputs_ctx._L7_OpPhases_Ground);
		case 24:
			return &(outputs_ctx._L8_OpPhases_Ground);
		case 25:
			return &(outputs_ctx._L13_OpPhases_Ground);
		case 26:
			return &(outputs_ctx._L15_OpPhases_Ground);
		case 27:
			return &(outputs_ctx._L16_OpPhases_Ground);
		case 28:
			return &(outputs_ctx._L18_OpPhases_Ground);
		case 29:
			return &(outputs_ctx._L19_OpPhases_Ground);
		case 30:
			return &(outputs_ctx._L20_OpPhases_Ground);
		case 31:
			return &(outputs_ctx._L21_OpPhases_Ground);
		case 32:
			return &(outputs_ctx._L22_OpPhases_Ground);
		case 33:
			return &(outputs_ctx._L23_OpPhases_Ground);
		case 34:
			return &(outputs_ctx._L24_OpPhases_Ground);
		case 35:
			return &(outputs_ctx._L25_OpPhases_Ground);
		case 36:
			return &(outputs_ctx._L26_OpPhases_Ground);
		case 37:
			return &(outputs_ctx._L27_OpPhases_Ground);
		case 38:
			return &(outputs_ctx.Ground_weakb_clock_OpPhases);
		case 39:
			return &(outputs_ctx.OpPhases_fired);
		case 40:
			return &(outputs_ctx.OpPhases_fired_strong);
		case 41:
			return &(outputs_ctx.AtAcquisition_OpPhases_Launch);
		case 42:
			return &(outputs_ctx._L5_OpPhases_Launch);
		case 43:
			return &(outputs_ctx._L6_OpPhases_Launch);
		case 44:
			return &(outputs_ctx._L10_OpPhases_Launch);
		case 45:
			return &(outputs_ctx._L7_OpPhases_Launch);
		case 46:
			return &(outputs_ctx._L14_OpPhases_Launch);
		case 47:
			return &(outputs_ctx._L13_OpPhases_Launch);
		case 48:
			return &(outputs_ctx._L12_OpPhases_Launch);
		case 49:
			return &(outputs_ctx._L28_OpPhases_Launch);
		case 50:
			return &(outputs_ctx.sMode_OpPhases_AttitudeAcquisition);
		case 51:
			return &(outputs_ctx._7_atacquisition_clock_OpPhases_AttitudeAcquisition);
		case 52:
			return &(outputs_ctx.atacquisition_clock_OpPhases_AttitudeAcquisition);
		case 53:
			return &(outputs_ctx.atacquisition_state_act_OpPhases_AttitudeAcquisition);
		case 54:
			return &(outputs_ctx.Context_8);
		case 55:
			return &(outputs_ctx.Context_4);
		case 56:
			return &(outputs_ctx._L1323_OpPhases_AttitudeAcquisition_atacquisition_readsensors);
		case 57:
			return &(outputs_ctx._L1222_OpPhases_AttitudeAcquisition_atacquisition_readsensors);
		case 58:
			return &(outputs_ctx._L11_OpPhases_AttitudeAcquisition_atacquisition_readsensors);
		case 59:
			return &(outputs_ctx._L1021_OpPhases_AttitudeAcquisition_atacquisition_readsensors);
		case 60:
			return &(outputs_ctx._L8_OpPhases_AttitudeAcquisition_atacquisition_readsensors);
		case 61:
			return &(outputs_ctx._L7_OpPhases_AttitudeAcquisition_atacquisition_readsensors);
		case 62:
			return &(outputs_ctx._L620_OpPhases_AttitudeAcquisition_atacquisition_readsensors);
		case 63:
			return &(outputs_ctx._L5_OpPhases_AttitudeAcquisition_atacquisition_readsensors);
		case 64:
			return &(outputs_ctx._L1519_OpPhases_AttitudeAcquisition_atacquisition_readsensors);
		case 65:
			return &(outputs_ctx._L1818_OpPhases_AttitudeAcquisition_atacquisition_readsensors);
		case 66:
			return &(outputs_ctx.atacquisition_fired_strong_OpPhases_AttitudeAcquisition);
		case 67:
			return &(outputs_ctx._1_Context_1);
		case 68:
			return &(outputs_ctx.Context_9);
		case 69:
			return &(outputs_ctx.Context_5);
		case 70:
			return &(outputs_ctx._L10_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 71:
			return &(outputs_ctx._L12_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 72:
			return &(outputs_ctx._L21_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 73:
			return &(outputs_ctx._L20_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 74:
			return &(outputs_ctx._L19_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 75:
			return &(outputs_ctx._L18_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 76:
			return &(outputs_ctx._L17_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 77:
			return &(outputs_ctx._L16_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 78:
			return &(outputs_ctx._L15_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 79:
			return &(outputs_ctx._L14_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 80:
			return &(outputs_ctx._L13_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 81:
			return &(outputs_ctx._L22_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 82:
			return &(outputs_ctx._L23_OpPhases_AttitudeAcquisition_atacquisition_refAttitude);
		case 83:
			return &(outputs_ctx._L6_OpPhases_AttitudeAcquisition_atacquisition_SafeMode);
		case 84:
			return &(outputs_ctx._L1531_OpPhases_AttitudeAcquisition);
		case 85:
			return &(outputs_ctx._L1430_OpPhases_AttitudeAcquisition);
		case 86:
			return &(outputs_ctx._L1329_OpPhases_AttitudeAcquisition);
		case 87:
			return &(outputs_ctx._L1228_OpPhases_AttitudeAcquisition);
		case 88:
			return &(outputs_ctx._L1927_OpPhases_AttitudeAcquisition);
		case 89:
			return &(outputs_ctx._L1726_OpPhases_AttitudeAcquisition);
		case 90:
			return &(outputs_ctx._L1625_OpPhases_AttitudeAcquisition);
		case 91:
			return &(outputs_ctx._L2024_OpPhases_AttitudeAcquisition);
		case 92:
			return &(outputs_ctx.sMode_OpPhases_NormalPhase);
		case 93:
			return &(outputs_ctx._6_NPhase_clock_OpPhases_NormalPhase);
		case 94:
			return &(outputs_ctx.NPhase_clock_OpPhases_NormalPhase);
		case 95:
			return &(outputs_ctx.NPhase_state_act_OpPhases_NormalPhase);
		case 96:
			return &(outputs_ctx.Context_2);
		case 97:
			return &(outputs_ctx._2_Context_6);
		case 98:
			return &(outputs_ctx.Context_10);
		case 99:
			return &(outputs_ctx._L2_OpPhases_NormalPhase_NPhase_AttControl);
		case 100:
			return &(outputs_ctx._L917_OpPhases_NormalPhase_NPhase_AttControl);
		case 101:
			return &(outputs_ctx._L1716_OpPhases_NormalPhase_NPhase_AttControl);
		case 102:
			return &(outputs_ctx._L1615_OpPhases_NormalPhase_NPhase_AttControl);
		case 103:
			return &(outputs_ctx._L1514_OpPhases_NormalPhase_NPhase_AttControl);
		case 104:
			return &(outputs_ctx._L1413_OpPhases_NormalPhase_NPhase_AttControl);
		case 105:
			return &(outputs_ctx._L1312_OpPhases_NormalPhase_NPhase_AttControl);
		case 106:
			return &(outputs_ctx._L1211_OpPhases_NormalPhase_NPhase_AttControl);
		case 107:
			return &(outputs_ctx._L1110_OpPhases_NormalPhase_NPhase_AttControl);
		case 108:
			return &(outputs_ctx._L109_OpPhases_NormalPhase_NPhase_AttControl);
		case 109:
			return &(outputs_ctx._L188_OpPhases_NormalPhase_NPhase_AttControl);
		case 110:
			return &(outputs_ctx.NPhase_fired_strong_OpPhases_NormalPhase);
		case 111:
			return &(outputs_ctx.Context_7);
		case 112:
			return &(outputs_ctx.Context_11);
		case 113:
			return &(outputs_ctx._L9_OpPhases_NormalPhase_NPhase_Payload);
		case 114:
			return &(outputs_ctx._L10_OpPhases_NormalPhase_NPhase_Payload);
		case 115:
			return &(outputs_ctx._L19_OpPhases_NormalPhase_NPhase_Payload);
		case 116:
			return &(outputs_ctx._L18_OpPhases_NormalPhase_NPhase_Payload);
		case 117:
			return &(outputs_ctx._L17_OpPhases_NormalPhase_NPhase_Payload);
		case 118:
			return &(outputs_ctx._L16_OpPhases_NormalPhase_NPhase_Payload);
		case 119:
			return &(outputs_ctx._L15_OpPhases_NormalPhase_NPhase_Payload);
		case 120:
			return &(outputs_ctx._L14_OpPhases_NormalPhase_NPhase_Payload);
		case 121:
			return &(outputs_ctx._L13_OpPhases_NormalPhase_NPhase_Payload);
		case 122:
			return &(outputs_ctx._L12_OpPhases_NormalPhase_NPhase_Payload);
		case 123:
			return &(outputs_ctx._L11_OpPhases_NormalPhase_NPhase_Payload);
		case 124:
			return &(outputs_ctx.Payload_weakb_clock_OpPhases_NormalPhase_NPhase);
		case 125:
			return &(outputs_ctx.NPhase_fired_OpPhases_NormalPhase);
		case 126:
			return &(outputs_ctx._L4_OpPhases_NormalPhase_NPhase_SafeMode);
		case 127:
			return &(outputs_ctx.pMode_OpPhases_NormalPhase);
		case 128:
			return &(outputs_ctx._L1_OpPhases_NormalPhase);
		case 129:
			return &(outputs_ctx._L2_OpPhases_NormalPhase);
		case 130:
			return &(outputs_ctx._L8_OpPhases_NormalPhase);
		case 131:
			return &(outputs_ctx._L7_OpPhases_NormalPhase);
		case 132:
			return &(outputs_ctx._L6_OpPhases_NormalPhase);
		case 133:
			return &(outputs_ctx._L5_OpPhases_NormalPhase);
		case 134:
			return &(outputs_ctx._L12_OpPhases_NormalPhase);
		case 135:
			return &(outputs_ctx._L11_OpPhases_NormalPhase);
		case 136:
			return &(outputs_ctx._L10_OpPhases_NormalPhase);
		case 137:
			return &(outputs_ctx.color);
		case 138:
			return &(outputs_ctx.color_2);
		case 139:
			return &(outputs_ctx.color3);
		case 140:
			return &(outputs_ctx.color4);
		case 141:
			return &(outputs_ctx.AttitudeVisibleLocal);
		case 142:
			return &(outputs_ctx.NormalPhaseVisibleLocal);
		case 143:
			return &(outputs_ctx._L7);
		case 144:
			return &(outputs_ctx._L8);
		case 145:
			return &(outputs_ctx._L9);
		case 146:
			return &(outputs_ctx._L11);
		case 147:
			return &(outputs_ctx._L12);
		case 148:
			return &(outputs_ctx._L13);
		case 149:
			return &(outputs_ctx._L14);
		case 150:
			return &(outputs_ctx._L15);
		case 151:
			return &(outputs_ctx._L16);
		case 152:
			return &(outputs_ctx._L19);
		case 153:
			return &(outputs_ctx._L20);
		case 154:
			return &(outputs_ctx._L22);
		case 155:
			return &(outputs_ctx._L26);
		case 156:
			return &(outputs_ctx._L27);
		case 157:
			return &(outputs_ctx.StartLaunchPhase);
		case 158:
			return &(outputs_ctx.StartAtAcquisition);
		case 159:
			return &(outputs_ctx.safeMode);
		case 160:
			return &(outputs_ctx.RefAttitude);
		case 161:
			return &(outputs_ctx.StartNormalPhase);
		case 162:
			return &(outputs_ctx.payMode);
		case 163:
			return &(outputs_ctx.picture);
		case 164:
			return &(outputs_ctx.Layer1Active);
		case 165:
			return &(outputs_ctx.Layer1Visible);
		case 166:
			return &(outputs_ctx.Emit2CDS);
		case 167:
			return &(outputs_ctx.ColorIndex);
		case 168:
			return &(outputs_ctx.ColorIndex2);
		case 169:
			return &(outputs_ctx.ColorIndex3);
		case 170:
			return &(outputs_ctx.ColorIndex4);
		case 171:
			return &(outputs_ctx.GroundVisible);
		case 172:
			return &(outputs_ctx.AttitudeVisible);
		case 173:
			return &(outputs_ctx.NormalPhaseVisible);
		case 174:
			return &(outputs_ctx.SafeM);
		case 175:
			return &(inputs_ctx.Power);
		case 176:
			return &(inputs_ctx.Telemetry);
		case 177:
			return &(inputs_ctx.AttitudeReference);
		case 178:
			return &(inputs_ctx.takePict);
		case 179:
			return &(inputs_ctx.picLocation);
		case 180:
			return &(inputs_ctx.PassarFaseBtn);
		case 181:
			return &(inputs_ctx.Gyroscopes);
		case 182:
			return &(inputs_ctx.Accelerometers);
		case 183:
			return &(inputs_ctx.SunSensor);
		case 184:
			return &(inputs_ctx.Reactionwheels);
		case 185:
			return &(inputs_ctx.MagneticTorquers);
		case 186:
			return &(inputs_ctx.upDateSw);
		default:
			break;
	}
	return 0;
}

static int IsSSM_TR_Ground_2_OpPhasesActive(void * pHandle) {
	return *((SSM_TR_OpPhases*)pHandle) == SSM_TR_Ground_2_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Ground_2_OpPhases_Utils = {IsSSM_TR_Ground_2_OpPhasesActive};

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

static int IsSSM_TR_Launch_2_OpPhasesActive(void * pHandle) {
	return *((SSM_TR_OpPhases*)pHandle) == SSM_TR_Launch_2_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_Launch_2_OpPhases_Utils = {IsSSM_TR_Launch_2_OpPhasesActive};

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

static int IsSSM_TR_refAttitude_2_atacquisition_OpPhases_AttitudeAcquisitionActive(void * pHandle) {
	return *((SSM_TR_atacquisition_OpPhases_AttitudeAcquisition*)pHandle) == SSM_TR_refAttitude_2_atacquisition_OpPhases_AttitudeAcquisition ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_refAttitude_2_atacquisition_OpPhases_AttitudeAcquisition_Utils = {IsSSM_TR_refAttitude_2_atacquisition_OpPhases_AttitudeAcquisitionActive};

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

static int IsSSM_TR_AttitudeAcquisition_2_OpPhasesActive(void * pHandle) {
	return *((SSM_TR_OpPhases*)pHandle) == SSM_TR_AttitudeAcquisition_2_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_AttitudeAcquisition_2_OpPhases_Utils = {IsSSM_TR_AttitudeAcquisition_2_OpPhasesActive};

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

static int IsSSM_st_NormalPhase_OpPhasesActive(void * pHandle) {
	return *((SSM_ST_OpPhases*)pHandle) == SSM_st_NormalPhase_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_NormalPhase_OpPhases_Utils = {IsSSM_st_NormalPhase_OpPhasesActive};

/****************************************************************
 ** ReadSensors/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ReadSensors(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ReadSensors_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "Gyroscopes", &_SCSIM_kcg_bool_Utils, 187, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "Accelerometers", &_SCSIM_kcg_bool_Utils, 188, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SunSensor", &_SCSIM_kcg_bool_Utils, 189, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 190, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 191, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 192, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 193, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 194, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SensorsStatus", &_SCSIM_kcg_bool_Utils, 195, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ReadSensors_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ReadSensors* pContext = (outC_ReadSensors*)pInstance;
	switch (nHandleIdent) {
		case 187:
			return &((*pContext).rem_Gyroscopes);
		case 188:
			return &((*pContext).rem_Accelerometers);
		case 189:
			return &((*pContext).rem_SunSensor);
		case 190:
			return &((*pContext)._L2);
		case 191:
			return &((*pContext)._L4);
		case 192:
			return &((*pContext)._L5);
		case 193:
			return &((*pContext)._L6);
		case 194:
			return &((*pContext)._L8);
		case 195:
			return &((*pContext).SensorsStatus);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** TestActuators/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_TestActuators(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_TestActuators_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "Reactionwheels", &_SCSIM_kcg_bool_Utils, 196, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "MagneticTorquers", &_SCSIM_kcg_bool_Utils, 197, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 198, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 199, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 200, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ActuatorsStatus", &_SCSIM_kcg_bool_Utils, 201, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_TestActuators_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_TestActuators* pContext = (outC_TestActuators*)pInstance;
	switch (nHandleIdent) {
		case 196:
			return &((*pContext).rem_Reactionwheels);
		case 197:
			return &((*pContext).rem_MagneticTorquers);
		case 198:
			return &((*pContext)._L2);
		case 199:
			return &((*pContext)._L3);
		case 200:
			return &((*pContext)._L4);
		case 201:
			return &((*pContext).ActuatorsStatus);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** controlAlgorithm/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_controlAlgorithm(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_controlAlgorithm_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 202, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ControlAlgorithmActive", &_SCSIM_kcg_bool_Utils, 203, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_controlAlgorithm_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_controlAlgorithm* pContext = (outC_controlAlgorithm*)pInstance;
	switch (nHandleIdent) {
		case 202:
			return &((*pContext)._L2);
		case 203:
			return &((*pContext).ControlAlgorithmActive);
		default:
			break;
	}
	return 0;
}

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
