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
	pSimulator->m_pfnAddLocal(pSimulator, "Telemetry", &_SCSIM_kcg_int_Utils, 1, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AttitudeReference", &_SCSIM_kcg_int_Utils, 2, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "takePict", &_SCSIM_kcg_bool_Utils, 3, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "picLocation", &_SCSIM_kcg_real_Utils, 4, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "Accelerometers", &_SCSIM_kcg_bool_Utils, 5, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SunSensor", &_SCSIM_kcg_bool_Utils, 6, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "Reactionwheels", &_SCSIM_kcg_bool_Utils, 7, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "MagneticTorquers", &_SCSIM_kcg_bool_Utils, 8, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "upDateSw", &_SCSIM_kcg_bool_Utils, 9, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LaunchPhase", &_SCSIM_kcg_bool_Utils, 10, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "ApertarBotao", &_SCSIM_kcg_bool_Utils, 11, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "GroundVisibleLocal", &_SCSIM_kcg_bool_Utils, 12, valid, 0, 0);
	pSimulator->m_pfnPushStateMachine(pSimulator, "OpPhases");
	pSimulator->m_pfnPushState(pSimulator, "Ground", &_SCSIM_SSM_st_Ground_OpPhases_Utils, 13);
	/*<< Inlined ReadSensors*/
	pSimulator->m_pfnPushInstance(pSimulator, "ReadSensors", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SensorsStatus", &_SCSIM_kcg_bool_Utils, 14, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "Gyroscopes", &_SCSIM_kcg_bool_Utils, 15, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "Accelerometers", &_SCSIM_kcg_bool_Utils, 16, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "SunSensor", &_SCSIM_kcg_bool_Utils, 17, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 18, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 19, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 20, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 21, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 22, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined TestActuators*/
	pSimulator->m_pfnPushInstance(pSimulator, "TestActuators", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ActuatorsStatus", &_SCSIM_kcg_bool_Utils, 23, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "Reactionwheels", &_SCSIM_kcg_bool_Utils, 24, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "MagneticTorquers", &_SCSIM_kcg_bool_Utils, 25, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 26, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 27, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 28, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 29, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 30, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 31, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 32, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 33, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_bool_Utils, 34, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 35, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 36, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_bool_Utils, 37, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_bool_Utils, 38, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_bool_Utils, 39, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_bool_Utils, 40, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_bool_Utils, 41, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 42, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 43, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_bool_Utils, 44, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_bool_Utils, 45, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_real_Utils, 46, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_kcg_int_Utils, 47, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_kcg_bool_Utils, 48, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_kcg_real_Utils, 49, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_real_Utils, 50, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_real_Utils, 51, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 52, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "2", &_SCSIM_SSM_TR_Ground_2_OpPhases_Utils, 53);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Ground_1_OpPhases_Utils, 54);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Launch", &_SCSIM_SSM_st_Launch_OpPhases_Utils, 13);
	pSimulator->m_pfnAddLocal(pSimulator, "AtAcquisition", &_SCSIM_kcg_bool_Utils, 55, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 56, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 57, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 58, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 59, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 60, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 61, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 62, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 63, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_real_Utils, 64, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 65, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 66, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_real_Utils, 67, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_real_Utils, 68, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_real_Utils, 69, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "1", &_SCSIM_SSM_TR_Launch_1_OpPhases_Utils, 53);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "AttitudeAcquisition", &_SCSIM_SSM_st_AttitudeAcquisition_OpPhases_Utils, 13);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_real_Utils, 70, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_real_Utils, 71, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "AtNormalPhaseLocal", &_SCSIM_kcg_bool_Utils, 72, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 73, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 74, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 75, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 76, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 77, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 78, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 79, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_real_Utils, 80, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 81, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_bool_Utils, 82, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_real_Utils, 83, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 84, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 85, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 86, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_bool_Utils, 87, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_real_Utils, 88, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_real_Utils, 89, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_real_Utils, 90, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_real_Utils, 91, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_kcg_bool_Utils, 92, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_kcg_real_Utils, 93, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_kcg_real_Utils, 94, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_kcg_real_Utils, 95, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "1", &_SCSIM_SSM_TR_AttitudeAcquisition_1_OpPhases_Utils, 53);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "NormalPhase", &_SCSIM_SSM_st_NormalPhase_OpPhases_Utils, 13);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 96, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 97, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 98, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 99, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 100, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 101, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 102, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_real_Utils, 103, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 104, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 105, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 106, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_real_Utils, 107, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_real_Utils, 108, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "color", &_SCSIM_kcg_int_Utils, 109, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color_2", &_SCSIM_kcg_int_Utils, 110, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color3", &_SCSIM_kcg_int_Utils, 111, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color4", &_SCSIM_kcg_int_Utils, 112, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AttitudeVisibleLocal", &_SCSIM_kcg_bool_Utils, 113, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "NormalPhaseVisibleLocal", &_SCSIM_kcg_bool_Utils, 114, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AtAcquisition", &_SCSIM_kcg_bool_Utils, 115, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "GyroscopesLocal", &_SCSIM_kcg_bool_Utils, 116, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AccelerometersLocal", &_SCSIM_kcg_bool_Utils, 117, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "PowerLocal", &_SCSIM_kcg_bool_Utils, 118, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SunSensorLocal", &_SCSIM_kcg_bool_Utils, 119, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "ReactionwheelsLocal", &_SCSIM_kcg_bool_Utils, 120, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "MagneticTorquersLocal", &_SCSIM_kcg_bool_Utils, 121, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AcRdValueLocal", &_SCSIM_kcg_real_Utils, 122, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AtNormalPhase", &_SCSIM_kcg_bool_Utils, 123, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color_5", &_SCSIM_kcg_int_Utils, 124, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LaunchVisibleLocal", &_SCSIM_kcg_bool_Utils, 125, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "FuelMeterLocal", &_SCSIM_kcg_real_Utils, 126, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LongitudeLocal", &_SCSIM_kcg_real_Utils, 127, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LatitudeLocal", &_SCSIM_kcg_real_Utils, 128, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 129, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 130, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 131, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 132, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 133, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 134, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 135, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 136, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 137, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 138, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 139, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 140, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_bool_Utils, 141, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 142, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_bool_Utils, 143, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_bool_Utils, 144, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_kcg_real_Utils, 145, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_kcg_int_Utils, 146, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_kcg_bool_Utils, 147, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_kcg_real_Utils, 148, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_kcg_real_Utils, 149, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_real_Utils, 150, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_int_Utils, 151, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_kcg_real_Utils, 152, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_real_Utils, 153, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "StartLaunchPhase", &_SCSIM_kcg_bool_Utils, 154, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Active", &_SCSIM_kcg_bool_Utils, 155, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Visible", &_SCSIM_kcg_bool_Utils, 156, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Emit2CDS", &_SCSIM_kcg_bool_Utils, 157, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex", &_SCSIM_kcg_int_Utils, 158, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex2", &_SCSIM_kcg_int_Utils, 159, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex3", &_SCSIM_kcg_int_Utils, 160, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex4", &_SCSIM_kcg_int_Utils, 161, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "GroundVisible", &_SCSIM_kcg_bool_Utils, 162, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "AttitudeVisible", &_SCSIM_kcg_bool_Utils, 163, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NormalPhaseVisible", &_SCSIM_kcg_bool_Utils, 164, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "AcRdValue", &_SCSIM_kcg_real_Utils, 165, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex5", &_SCSIM_kcg_int_Utils, 166, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LaunchVisible", &_SCSIM_kcg_bool_Utils, 167, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "FuelMeter", &_SCSIM_kcg_real_Utils, 168, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "FuelMeterGraphic", &_SCSIM_kcg_int_Utils, 169, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Longitude_Value", &_SCSIM_kcg_real_Utils, 170, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Latitude_Value", &_SCSIM_kcg_real_Utils, 171, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Power", &_SCSIM_kcg_bool_Utils, 172, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Telemetry", &_SCSIM_kcg_int_Utils, 173, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "AttitudeReference", &_SCSIM_kcg_int_Utils, 174, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "takePict", &_SCSIM_kcg_bool_Utils, 175, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "picLocation", &_SCSIM_kcg_real_Utils, 176, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PassarFaseBtn", &_SCSIM_kcg_bool_Utils, 177, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Accelerometers", &_SCSIM_kcg_bool_Utils, 178, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SunSensor", &_SCSIM_kcg_bool_Utils, 179, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Reactionwheels", &_SCSIM_kcg_bool_Utils, 180, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "MagneticTorquers", &_SCSIM_kcg_bool_Utils, 181, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "upDateSw", &_SCSIM_kcg_bool_Utils, 182, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Gyroscopes", &_SCSIM_kcg_bool_Utils, 183, valid, 0, 0);
}

void* _SCSIM_Get_OperationalScenario_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	switch (nHandleIdent) {
		case 1:
			return &(outputs_ctx.rem_Telemetry);
		case 2:
			return &(outputs_ctx.rem_AttitudeReference);
		case 3:
			return &(outputs_ctx.rem_takePict);
		case 4:
			return &(outputs_ctx.rem_picLocation);
		case 5:
			return &(outputs_ctx.rem_Accelerometers);
		case 6:
			return &(outputs_ctx.rem_SunSensor);
		case 7:
			return &(outputs_ctx.rem_Reactionwheels);
		case 8:
			return &(outputs_ctx.rem_MagneticTorquers);
		case 9:
			return &(outputs_ctx.rem_upDateSw);
		case 10:
			return &(outputs_ctx.LaunchPhase);
		case 11:
			return &(outputs_ctx.ApertarBotao);
		case 12:
			return &(outputs_ctx.GroundVisibleLocal);
		case 13:
			return &(outputs_ctx.OpPhases_state_act);
		case 14:
			return &(outputs_ctx.SensorsStatus_6);
		case 15:
			return &(outputs_ctx.Gyroscopes_6);
		case 16:
			return &(outputs_ctx.Accelerometers_6);
		case 17:
			return &(outputs_ctx.SunSensor_6);
		case 18:
			return &(outputs_ctx._L2_6);
		case 19:
			return &(outputs_ctx._L4_6);
		case 20:
			return &(outputs_ctx._L5_6);
		case 21:
			return &(outputs_ctx._L6_6);
		case 22:
			return &(outputs_ctx._L8_6);
		case 23:
			return &(outputs_ctx.ActuatorsStatus_1);
		case 24:
			return &(outputs_ctx.Reactionwheels_1);
		case 25:
			return &(outputs_ctx.MagneticTorquers_1);
		case 26:
			return &(outputs_ctx._L2_1);
		case 27:
			return &(outputs_ctx._L3_1);
		case 28:
			return &(outputs_ctx._L4_1);
		case 29:
			return &(outputs_ctx._L2_OpPhases_Ground);
		case 30:
			return &(outputs_ctx._L4_OpPhases_Ground);
		case 31:
			return &(outputs_ctx._L7_OpPhases_Ground);
		case 32:
			return &(outputs_ctx._L8_OpPhases_Ground);
		case 33:
			return &(outputs_ctx._L13_OpPhases_Ground);
		case 34:
			return &(outputs_ctx._L15_OpPhases_Ground);
		case 35:
			return &(outputs_ctx._L16_OpPhases_Ground);
		case 36:
			return &(outputs_ctx._L22_OpPhases_Ground);
		case 37:
			return &(outputs_ctx._L23_OpPhases_Ground);
		case 38:
			return &(outputs_ctx._L24_OpPhases_Ground);
		case 39:
			return &(outputs_ctx._L27_OpPhases_Ground);
		case 40:
			return &(outputs_ctx._L30_OpPhases_Ground);
		case 41:
			return &(outputs_ctx._L31_OpPhases_Ground);
		case 42:
			return &(outputs_ctx._L32_OpPhases_Ground);
		case 43:
			return &(outputs_ctx._L33_OpPhases_Ground);
		case 44:
			return &(outputs_ctx._L34_OpPhases_Ground);
		case 45:
			return &(outputs_ctx._L35_OpPhases_Ground);
		case 46:
			return &(outputs_ctx._L37_OpPhases_Ground);
		case 47:
			return &(outputs_ctx._L39_OpPhases_Ground);
		case 48:
			return &(outputs_ctx._L41_OpPhases_Ground);
		case 49:
			return &(outputs_ctx._L42_OpPhases_Ground);
		case 50:
			return &(outputs_ctx._L45_OpPhases_Ground);
		case 51:
			return &(outputs_ctx._L46_OpPhases_Ground);
		case 52:
			return &(outputs_ctx.Ground_weakb_clock_OpPhases);
		case 53:
			return &(outputs_ctx.OpPhases_fired);
		case 54:
			return &(outputs_ctx.OpPhases_fired_strong);
		case 55:
			return &(outputs_ctx.AtAcquisition_OpPhases_Launch);
		case 56:
			return &(outputs_ctx._L5_OpPhases_Launch);
		case 57:
			return &(outputs_ctx._L6_OpPhases_Launch);
		case 58:
			return &(outputs_ctx._L10_OpPhases_Launch);
		case 59:
			return &(outputs_ctx._L7_OpPhases_Launch);
		case 60:
			return &(outputs_ctx._L14_OpPhases_Launch);
		case 61:
			return &(outputs_ctx._L13_OpPhases_Launch);
		case 62:
			return &(outputs_ctx._L12_OpPhases_Launch);
		case 63:
			return &(outputs_ctx._L28_OpPhases_Launch);
		case 64:
			return &(outputs_ctx._L29_OpPhases_Launch);
		case 65:
			return &(outputs_ctx._L31_OpPhases_Launch);
		case 66:
			return &(outputs_ctx._L33_OpPhases_Launch);
		case 67:
			return &(outputs_ctx._L34_OpPhases_Launch);
		case 68:
			return &(outputs_ctx._L36_OpPhases_Launch);
		case 69:
			return &(outputs_ctx._L35_OpPhases_Launch);
		case 70:
			return &(outputs_ctx._L25_OpPhases_AttitudeAcquisition);
		case 71:
			return &(outputs_ctx._L37_OpPhases_AttitudeAcquisition);
		case 72:
			return &(outputs_ctx.AtNormalPhaseLocal_OpPhases_AttitudeAcquisition);
		case 73:
			return &(outputs_ctx._L15_OpPhases_AttitudeAcquisition);
		case 74:
			return &(outputs_ctx._L14_OpPhases_AttitudeAcquisition);
		case 75:
			return &(outputs_ctx._L13_OpPhases_AttitudeAcquisition);
		case 76:
			return &(outputs_ctx._L12_OpPhases_AttitudeAcquisition);
		case 77:
			return &(outputs_ctx._L19_OpPhases_AttitudeAcquisition);
		case 78:
			return &(outputs_ctx._L17_OpPhases_AttitudeAcquisition);
		case 79:
			return &(outputs_ctx._L16_OpPhases_AttitudeAcquisition);
		case 80:
			return &(outputs_ctx._L27_OpPhases_AttitudeAcquisition);
		case 81:
			return &(outputs_ctx._L26_OpPhases_AttitudeAcquisition);
		case 82:
			return &(outputs_ctx._L24_OpPhases_AttitudeAcquisition);
		case 83:
			return &(outputs_ctx._L23_OpPhases_AttitudeAcquisition);
		case 84:
			return &(outputs_ctx._L22_OpPhases_AttitudeAcquisition);
		case 85:
			return &(outputs_ctx._L21_OpPhases_AttitudeAcquisition);
		case 86:
			return &(outputs_ctx._L28_OpPhases_AttitudeAcquisition);
		case 87:
			return &(outputs_ctx._L30_OpPhases_AttitudeAcquisition);
		case 88:
			return &(outputs_ctx._L36_OpPhases_AttitudeAcquisition);
		case 89:
			return &(outputs_ctx._L35_OpPhases_AttitudeAcquisition);
		case 90:
			return &(outputs_ctx._L32_OpPhases_AttitudeAcquisition);
		case 91:
			return &(outputs_ctx._L31_OpPhases_AttitudeAcquisition);
		case 92:
			return &(outputs_ctx._L39_OpPhases_AttitudeAcquisition);
		case 93:
			return &(outputs_ctx._L40_OpPhases_AttitudeAcquisition);
		case 94:
			return &(outputs_ctx._L44_OpPhases_AttitudeAcquisition);
		case 95:
			return &(outputs_ctx._L43_OpPhases_AttitudeAcquisition);
		case 96:
			return &(outputs_ctx._L8_OpPhases_NormalPhase);
		case 97:
			return &(outputs_ctx._L7_OpPhases_NormalPhase);
		case 98:
			return &(outputs_ctx._L6_OpPhases_NormalPhase);
		case 99:
			return &(outputs_ctx._L5_OpPhases_NormalPhase);
		case 100:
			return &(outputs_ctx._L12_OpPhases_NormalPhase);
		case 101:
			return &(outputs_ctx._L11_OpPhases_NormalPhase);
		case 102:
			return &(outputs_ctx._L10_OpPhases_NormalPhase);
		case 103:
			return &(outputs_ctx._L13_OpPhases_NormalPhase);
		case 104:
			return &(outputs_ctx._L18_OpPhases_NormalPhase);
		case 105:
			return &(outputs_ctx._L19_OpPhases_NormalPhase);
		case 106:
			return &(outputs_ctx._L21_OpPhases_NormalPhase);
		case 107:
			return &(outputs_ctx._L25_OpPhases_NormalPhase);
		case 108:
			return &(outputs_ctx._L24_OpPhases_NormalPhase);
		case 109:
			return &(outputs_ctx.color);
		case 110:
			return &(outputs_ctx.color_2);
		case 111:
			return &(outputs_ctx.color3);
		case 112:
			return &(outputs_ctx.color4);
		case 113:
			return &(outputs_ctx.AttitudeVisibleLocal);
		case 114:
			return &(outputs_ctx.NormalPhaseVisibleLocal);
		case 115:
			return &(outputs_ctx.AtAcquisition);
		case 116:
			return &(outputs_ctx.GyroscopesLocal);
		case 117:
			return &(outputs_ctx.AccelerometersLocal);
		case 118:
			return &(outputs_ctx.PowerLocal);
		case 119:
			return &(outputs_ctx.SunSensorLocal);
		case 120:
			return &(outputs_ctx.ReactionwheelsLocal);
		case 121:
			return &(outputs_ctx.MagneticTorquersLocal);
		case 122:
			return &(outputs_ctx.AcRdValueLocal);
		case 123:
			return &(outputs_ctx.AtNormalPhase);
		case 124:
			return &(outputs_ctx.color_5);
		case 125:
			return &(outputs_ctx.LaunchVisibleLocal);
		case 126:
			return &(outputs_ctx.FuelMeterLocal);
		case 127:
			return &(outputs_ctx.LongitudeLocal);
		case 128:
			return &(outputs_ctx.LatitudeLocal);
		case 129:
			return &(outputs_ctx._L7);
		case 130:
			return &(outputs_ctx._L8);
		case 131:
			return &(outputs_ctx._L9);
		case 132:
			return &(outputs_ctx._L11);
		case 133:
			return &(outputs_ctx._L12);
		case 134:
			return &(outputs_ctx._L13);
		case 135:
			return &(outputs_ctx._L14);
		case 136:
			return &(outputs_ctx._L15);
		case 137:
			return &(outputs_ctx._L16);
		case 138:
			return &(outputs_ctx._L19);
		case 139:
			return &(outputs_ctx._L20);
		case 140:
			return &(outputs_ctx._L22);
		case 141:
			return &(outputs_ctx._L31);
		case 142:
			return &(outputs_ctx._L32);
		case 143:
			return &(outputs_ctx._L34);
		case 144:
			return &(outputs_ctx._L36);
		case 145:
			return &(outputs_ctx._L38);
		case 146:
			return &(outputs_ctx._L41);
		case 147:
			return &(outputs_ctx._L42);
		case 148:
			return &(outputs_ctx._L43);
		case 149:
			return &(outputs_ctx._L44);
		case 150:
			return &(outputs_ctx._L45);
		case 151:
			return &(outputs_ctx._L46);
		case 152:
			return &(outputs_ctx._L49);
		case 153:
			return &(outputs_ctx._L50);
		case 154:
			return &(outputs_ctx.StartLaunchPhase);
		case 155:
			return &(outputs_ctx.Layer1Active);
		case 156:
			return &(outputs_ctx.Layer1Visible);
		case 157:
			return &(outputs_ctx.Emit2CDS);
		case 158:
			return &(outputs_ctx.ColorIndex);
		case 159:
			return &(outputs_ctx.ColorIndex2);
		case 160:
			return &(outputs_ctx.ColorIndex3);
		case 161:
			return &(outputs_ctx.ColorIndex4);
		case 162:
			return &(outputs_ctx.GroundVisible);
		case 163:
			return &(outputs_ctx.AttitudeVisible);
		case 164:
			return &(outputs_ctx.NormalPhaseVisible);
		case 165:
			return &(outputs_ctx.AcRdValue);
		case 166:
			return &(outputs_ctx.ColorIndex5);
		case 167:
			return &(outputs_ctx.LaunchVisible);
		case 168:
			return &(outputs_ctx.FuelMeter);
		case 169:
			return &(outputs_ctx.FuelMeterGraphic);
		case 170:
			return &(outputs_ctx.SAT_Longitude_Value);
		case 171:
			return &(outputs_ctx.SAT_Latitude_Value);
		case 172:
			return &(inputs_ctx.Power);
		case 173:
			return &(inputs_ctx.Telemetry);
		case 174:
			return &(inputs_ctx.AttitudeReference);
		case 175:
			return &(inputs_ctx.takePict);
		case 176:
			return &(inputs_ctx.picLocation);
		case 177:
			return &(inputs_ctx.PassarFaseBtn);
		case 178:
			return &(inputs_ctx.Accelerometers);
		case 179:
			return &(inputs_ctx.SunSensor);
		case 180:
			return &(inputs_ctx.Reactionwheels);
		case 181:
			return &(inputs_ctx.MagneticTorquers);
		case 182:
			return &(inputs_ctx.upDateSw);
		case 183:
			return &(inputs_ctx.Gyroscopes);
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

static int IsSSM_st_Launch_OpPhasesActive(void * pHandle) {
	return *((SSM_ST_OpPhases*)pHandle) == SSM_st_Launch_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_Launch_OpPhases_Utils = {IsSSM_st_Launch_OpPhasesActive};

static int IsSSM_TR_AttitudeAcquisition_1_OpPhasesActive(void * pHandle) {
	return *((SSM_TR_OpPhases*)pHandle) == SSM_TR_AttitudeAcquisition_1_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_TR_AttitudeAcquisition_1_OpPhases_Utils = {IsSSM_TR_AttitudeAcquisition_1_OpPhasesActive};

static int IsSSM_st_AttitudeAcquisition_OpPhasesActive(void * pHandle) {
	return *((SSM_ST_OpPhases*)pHandle) == SSM_st_AttitudeAcquisition_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_AttitudeAcquisition_OpPhases_Utils = {IsSSM_st_AttitudeAcquisition_OpPhasesActive};

static int IsSSM_st_NormalPhase_OpPhasesActive(void * pHandle) {
	return *((SSM_ST_OpPhases*)pHandle) == SSM_st_NormalPhase_OpPhases ? 1 : 0;
}
ControlUtils _SCSIM_SSM_st_NormalPhase_OpPhases_Utils = {IsSSM_st_NormalPhase_OpPhasesActive};

static int _SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases(void* clock) {
return *(kcg_bool*)clock == SSM_st_NormalPhase_OpPhases ? 1 : 0;
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
