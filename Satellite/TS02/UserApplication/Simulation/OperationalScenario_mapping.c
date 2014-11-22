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
	pSimulator->m_pfnAddLocal(pSimulator, "LongitudeLocal", &_SCSIM_kcg_real_Utils, 13, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LongitudeDeg", &_SCSIM_kcg_int_Utils, 14, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LongitudeMin", &_SCSIM_kcg_int_Utils, 15, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LongitudeSec", &_SCSIM_kcg_int_Utils, 16, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LatDeg", &_SCSIM_kcg_int_Utils, 17, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LatMin", &_SCSIM_kcg_int_Utils, 18, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LatSec", &_SCSIM_kcg_int_Utils, 19, valid, 0, 0);
	pSimulator->m_pfnPushStateMachine(pSimulator, "OpPhases");
	pSimulator->m_pfnPushState(pSimulator, "Ground", &_SCSIM_SSM_st_Ground_OpPhases_Utils, 20);
	_SCSIM_Mapping_ReadSensors("ReadSensors", "6", 21, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	_SCSIM_Mapping_TestActuators("TestActuators", "1", 22, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 23, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 24, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 25, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 26, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 27, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_bool_Utils, 28, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 29, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 30, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_bool_Utils, 31, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_bool_Utils, 32, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_bool_Utils, 33, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_bool_Utils, 34, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_bool_Utils, 35, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 36, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 37, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_bool_Utils, 38, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_bool_Utils, 39, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_real_Utils, 40, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_kcg_int_Utils, 41, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_kcg_bool_Utils, 42, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_kcg_real_Utils, 43, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_real_Utils, 44, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_real_Utils, 45, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_kcg_real_Utils, 46, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_real_Utils, 47, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_kcg_real_Utils, 48, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L54", &_SCSIM_kcg_real_Utils, 49, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 50, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "2", &_SCSIM_SSM_TR_Ground_2_OpPhases_Utils, 51);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Ground_1_OpPhases_Utils, 52);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Launch", &_SCSIM_SSM_st_Launch_OpPhases_Utils, 20);
	pSimulator->m_pfnAddLocal(pSimulator, "AtAcquisition", &_SCSIM_kcg_bool_Utils, 53, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 54, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 55, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 56, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 57, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 58, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 59, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 60, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 61, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_real_Utils, 62, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 63, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 64, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_real_Utils, 65, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_real_Utils, 66, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_real_Utils, 67, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_kcg_real_Utils, 68, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_real_Utils, 69, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_kcg_real_Utils, 70, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_kcg_real_Utils, 71, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "1", &_SCSIM_SSM_TR_Launch_1_OpPhases_Utils, 51);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "AttitudeAcquisition", &_SCSIM_SSM_st_AttitudeAcquisition_OpPhases_Utils, 20);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_real_Utils, 72, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_kcg_real_Utils, 73, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L110", &_SCSIM_kcg_real_Utils, 74, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L121", &_SCSIM_kcg_real_Utils, 75, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L142", &_SCSIM_kcg_real_Utils, 76, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "AtNormalPhaseLocal", &_SCSIM_kcg_bool_Utils, 77, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "LaunchTime", &_SCSIM_kcg_real_Utils, 78, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "ClockTime", &_SCSIM_kcg_real_Utils, 79, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 80, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 81, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 82, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 83, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 84, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 85, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 86, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 87, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_bool_Utils, 88, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_real_Utils, 89, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 90, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 91, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 92, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_bool_Utils, 93, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_real_Utils, 94, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_real_Utils, 95, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_kcg_real_Utils, 96, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_kcg_real_Utils, 97, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L114", &_SCSIM_kcg_real_Utils, 98, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L108", &_SCSIM_kcg_real_Utils, 99, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L120", &_SCSIM_kcg_real_Utils, 100, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L119", &_SCSIM_kcg_real_Utils, 101, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L118", &_SCSIM_kcg_real_Utils, 102, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L117", &_SCSIM_kcg_real_Utils, 103, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L125", &_SCSIM_kcg_real_Utils, 104, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L124", &_SCSIM_kcg_real_Utils, 105, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L130", &_SCSIM_kcg_real_Utils, 106, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L133", &_SCSIM_kcg_real_Utils, 107, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L135", &_SCSIM_kcg_real_Utils, 108, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L136", &_SCSIM_kcg_real_Utils, 109, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L137", &_SCSIM_kcg_real_Utils, 110, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L138", &_SCSIM_kcg_real_Utils, 111, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L139", &_SCSIM_kcg_bool_Utils, 112, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L140", &_SCSIM_kcg_real_Utils, 113, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L141", &_SCSIM_kcg_real_Utils, 114, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L144", &_SCSIM_kcg_real_Utils, 115, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L143", &_SCSIM_kcg_real_Utils, 116, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "1", &_SCSIM_SSM_TR_AttitudeAcquisition_1_OpPhases_Utils, 51);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "NormalPhase", &_SCSIM_SSM_st_NormalPhase_OpPhases_Utils, 20);
	pSimulator->m_pfnAddLocal(pSimulator, "_L62", &_SCSIM_kcg_real_Utils, 117, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	_SCSIM_Mapping_ModCount("ModCount", "6", 118, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	_SCSIM_Mapping_ModCount("ModCount", "5", 119, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	_SCSIM_Mapping_ModCount("ModCount", "4", 120, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	_SCSIM_Mapping_ModCount("ModCount", "9", 121, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	_SCSIM_Mapping_ModCount("ModCount", "8", 122, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	_SCSIM_Mapping_ModCount("ModCount", "7", 123, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddProbe(pSimulator, "Probe1", &_SCSIM_kcg_bool_Utils, 124, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 125, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 126, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 127, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 128, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 129, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 130, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 131, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_real_Utils, 132, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 133, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 134, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 135, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_real_Utils, 136, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_kcg_bool_Utils, 137, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_kcg_real_Utils, 138, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_kcg_real_Utils, 139, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L61", &_SCSIM_kcg_bool_Utils, 140, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L60", &_SCSIM_kcg_real_Utils, 141, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L59", &_SCSIM_kcg_real_Utils, 142, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L58", &_SCSIM_kcg_real_Utils, 143, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L57", &_SCSIM_kcg_real_Utils, 144, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L56", &_SCSIM_kcg_real_Utils, 145, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_kcg_real_Utils, 146, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L89", &_SCSIM_kcg_int_Utils, 147, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L90", &_SCSIM_kcg_bool_Utils, 148, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L87", &_SCSIM_kcg_int_Utils, 149, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L88", &_SCSIM_kcg_bool_Utils, 150, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L86", &_SCSIM_kcg_int_Utils, 151, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L83", &_SCSIM_kcg_int_Utils, 152, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L84", &_SCSIM_kcg_bool_Utils, 153, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L82", &_SCSIM_kcg_int_Utils, 154, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L81", &_SCSIM_kcg_int_Utils, 155, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L80", &_SCSIM_kcg_int_Utils, 156, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L79", &_SCSIM_kcg_bool_Utils, 157, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L94", &_SCSIM_kcg_bool_Utils, 158, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L95", &_SCSIM_kcg_int_Utils, 159, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L96", &_SCSIM_kcg_int_Utils, 160, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L97", &_SCSIM_kcg_int_Utils, 161, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L98", &_SCSIM_kcg_int_Utils, 162, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L114", &_SCSIM_kcg_int_Utils, 163, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L113", &_SCSIM_kcg_bool_Utils, 164, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L112", &_SCSIM_kcg_int_Utils, 165, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L111", &_SCSIM_kcg_int_Utils, 166, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L109", &_SCSIM_kcg_int_Utils, 167, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L110", &_SCSIM_kcg_bool_Utils, 168, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L108", &_SCSIM_kcg_bool_Utils, 169, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L107", &_SCSIM_kcg_int_Utils, 170, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L105", &_SCSIM_kcg_int_Utils, 171, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L106", &_SCSIM_kcg_bool_Utils, 172, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L104", &_SCSIM_kcg_int_Utils, 173, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L102", &_SCSIM_kcg_int_Utils, 174, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L103", &_SCSIM_kcg_bool_Utils, 175, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L101", &_SCSIM_kcg_int_Utils, 176, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L100", &_SCSIM_kcg_int_Utils, 177, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L99", &_SCSIM_kcg_int_Utils, 178, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "color", &_SCSIM_kcg_int_Utils, 179, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color_2", &_SCSIM_kcg_int_Utils, 180, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color3", &_SCSIM_kcg_int_Utils, 181, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color4", &_SCSIM_kcg_int_Utils, 182, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AttitudeVisibleLocal", &_SCSIM_kcg_bool_Utils, 183, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "NormalPhaseVisibleLocal", &_SCSIM_kcg_bool_Utils, 184, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AtAcquisition", &_SCSIM_kcg_bool_Utils, 185, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "GyroscopesLocal", &_SCSIM_kcg_bool_Utils, 186, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AccelerometersLocal", &_SCSIM_kcg_bool_Utils, 187, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "PowerLocal", &_SCSIM_kcg_bool_Utils, 188, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SunSensorLocal", &_SCSIM_kcg_bool_Utils, 189, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "ReactionwheelsLocal", &_SCSIM_kcg_bool_Utils, 190, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "MagneticTorquersLocal", &_SCSIM_kcg_bool_Utils, 191, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AcRdValueLocal", &_SCSIM_kcg_real_Utils, 192, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AtNormalPhase", &_SCSIM_kcg_bool_Utils, 193, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color_5", &_SCSIM_kcg_int_Utils, 194, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LaunchVisibleLocal", &_SCSIM_kcg_bool_Utils, 195, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "FuelMeterLocal", &_SCSIM_kcg_real_Utils, 196, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LatitudeLocal", &_SCSIM_kcg_real_Utils, 197, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SpinRdLocal", &_SCSIM_kcg_real_Utils, 198, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SpinTgLocal", &_SCSIM_kcg_real_Utils, 199, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "angleleftlocal", &_SCSIM_fr_Utils, 200, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "anglerightlocal", &_SCSIM_fr_Utils, 201, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 202, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 203, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 204, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 205, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 206, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 207, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 208, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 209, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 210, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 211, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 212, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 213, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_bool_Utils, 214, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 215, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_bool_Utils, 216, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_bool_Utils, 217, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_kcg_real_Utils, 218, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_kcg_int_Utils, 219, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_kcg_bool_Utils, 220, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_kcg_real_Utils, 221, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_kcg_real_Utils, 222, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_real_Utils, 223, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_int_Utils, 224, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_kcg_real_Utils, 225, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_kcg_real_Utils, 226, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L55", &_SCSIM_fr_Utils, 227, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L56", &_SCSIM_fr_Utils, 228, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L63", &_SCSIM_kcg_real_Utils, 229, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L65", &_SCSIM_kcg_int_Utils, 230, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_kcg_int_Utils, 231, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L67", &_SCSIM_kcg_real_Utils, 232, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L68", &_SCSIM_kcg_int_Utils, 233, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L69", &_SCSIM_kcg_real_Utils, 234, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L70", &_SCSIM_kcg_bool_Utils, 235, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L71", &_SCSIM_kcg_bool_Utils, 236, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L72", &_SCSIM_kcg_int_Utils, 237, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L73", &_SCSIM_kcg_int_Utils, 238, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L74", &_SCSIM_kcg_real_Utils, 239, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_kcg_real_Utils, 240, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_kcg_real_Utils, 241, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L77", &_SCSIM_kcg_int_Utils, 242, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "StartLaunchPhase", &_SCSIM_kcg_bool_Utils, 243, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Active", &_SCSIM_kcg_bool_Utils, 244, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Visible", &_SCSIM_kcg_bool_Utils, 245, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Emit2CDS", &_SCSIM_kcg_bool_Utils, 246, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex", &_SCSIM_kcg_int_Utils, 247, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex2", &_SCSIM_kcg_int_Utils, 248, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex3", &_SCSIM_kcg_int_Utils, 249, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex4", &_SCSIM_kcg_int_Utils, 250, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "GroundVisible", &_SCSIM_kcg_bool_Utils, 251, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "AttitudeVisible", &_SCSIM_kcg_bool_Utils, 252, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NormalPhaseVisible", &_SCSIM_kcg_bool_Utils, 253, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "AcRdValue", &_SCSIM_kcg_real_Utils, 254, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex5", &_SCSIM_kcg_int_Utils, 255, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LaunchVisible", &_SCSIM_kcg_bool_Utils, 256, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "FuelMeter", &_SCSIM_kcg_real_Utils, 257, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "FuelMeterGraphic", &_SCSIM_kcg_int_Utils, 258, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Longitude_Value", &_SCSIM_kcg_real_Utils, 259, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Latitude_Value", &_SCSIM_kcg_real_Utils, 260, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpinRd", &_SCSIM_kcg_real_Utils, 261, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpinTg", &_SCSIM_kcg_real_Utils, 262, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "angleright", &_SCSIM_fr_Utils, 263, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "angleleft", &_SCSIM_fr_Utils, 264, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Longitude_Min_Value", &_SCSIM_kcg_real_Utils, 265, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Longitude_Sec_Value", &_SCSIM_kcg_real_Utils, 266, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Latitude_Min_Value", &_SCSIM_kcg_real_Utils, 267, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Latitude_Sec_Value", &_SCSIM_kcg_real_Utils, 268, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Power", &_SCSIM_kcg_bool_Utils, 269, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Telemetry", &_SCSIM_kcg_int_Utils, 270, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "AttitudeReference", &_SCSIM_kcg_int_Utils, 271, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "takePict", &_SCSIM_kcg_bool_Utils, 272, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "picLocation", &_SCSIM_kcg_real_Utils, 273, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PassarFaseBtn", &_SCSIM_kcg_bool_Utils, 274, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Accelerometers", &_SCSIM_kcg_bool_Utils, 275, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SunSensor", &_SCSIM_kcg_bool_Utils, 276, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Reactionwheels", &_SCSIM_kcg_bool_Utils, 277, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "MagneticTorquers", &_SCSIM_kcg_bool_Utils, 278, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "upDateSw", &_SCSIM_kcg_bool_Utils, 279, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Gyroscopes", &_SCSIM_kcg_bool_Utils, 280, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Input13", &_SCSIM_kcg_bool_Utils, 281, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "EjectionSignal", &_SCSIM_kcg_bool_Utils, 282, valid, 0, 0);
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
			return &(outputs_ctx.LongitudeLocal);
		case 14:
			return &(outputs_ctx.LongitudeDeg);
		case 15:
			return &(outputs_ctx.LongitudeMin);
		case 16:
			return &(outputs_ctx.LongitudeSec);
		case 17:
			return &(outputs_ctx.LatDeg);
		case 18:
			return &(outputs_ctx.LatMin);
		case 19:
			return &(outputs_ctx.LatSec);
		case 20:
			return &(outputs_ctx.OpPhases_state_act);
		case 21:
			return &(outputs_ctx._1_Context_6);
		case 22:
			return &(outputs_ctx.Context_1);
		case 23:
			return &(outputs_ctx._L2_OpPhases_Ground);
		case 24:
			return &(outputs_ctx._L4_OpPhases_Ground);
		case 25:
			return &(outputs_ctx._L7_OpPhases_Ground);
		case 26:
			return &(outputs_ctx._L8_OpPhases_Ground);
		case 27:
			return &(outputs_ctx._L13_OpPhases_Ground);
		case 28:
			return &(outputs_ctx._L15_OpPhases_Ground);
		case 29:
			return &(outputs_ctx._L16_OpPhases_Ground);
		case 30:
			return &(outputs_ctx._L22_OpPhases_Ground);
		case 31:
			return &(outputs_ctx._L23_OpPhases_Ground);
		case 32:
			return &(outputs_ctx._L24_OpPhases_Ground);
		case 33:
			return &(outputs_ctx._L27_OpPhases_Ground);
		case 34:
			return &(outputs_ctx._L30_OpPhases_Ground);
		case 35:
			return &(outputs_ctx._L31_OpPhases_Ground);
		case 36:
			return &(outputs_ctx._L32_OpPhases_Ground);
		case 37:
			return &(outputs_ctx._L33_OpPhases_Ground);
		case 38:
			return &(outputs_ctx._L34_OpPhases_Ground);
		case 39:
			return &(outputs_ctx._L35_OpPhases_Ground);
		case 40:
			return &(outputs_ctx._L37_OpPhases_Ground);
		case 41:
			return &(outputs_ctx._L39_OpPhases_Ground);
		case 42:
			return &(outputs_ctx._L41_OpPhases_Ground);
		case 43:
			return &(outputs_ctx._L42_OpPhases_Ground);
		case 44:
			return &(outputs_ctx._L45_OpPhases_Ground);
		case 45:
			return &(outputs_ctx._L46_OpPhases_Ground);
		case 46:
			return &(outputs_ctx._L49_OpPhases_Ground);
		case 47:
			return &(outputs_ctx._L50_OpPhases_Ground);
		case 48:
			return &(outputs_ctx._L53_OpPhases_Ground);
		case 49:
			return &(outputs_ctx._L54_OpPhases_Ground);
		case 50:
			return &(outputs_ctx.Ground_weakb_clock_OpPhases);
		case 51:
			return &(outputs_ctx.OpPhases_fired);
		case 52:
			return &(outputs_ctx.OpPhases_fired_strong);
		case 53:
			return &(outputs_ctx.AtAcquisition_OpPhases_Launch);
		case 54:
			return &(outputs_ctx._L5_OpPhases_Launch);
		case 55:
			return &(outputs_ctx._L6_OpPhases_Launch);
		case 56:
			return &(outputs_ctx._L10_OpPhases_Launch);
		case 57:
			return &(outputs_ctx._L7_OpPhases_Launch);
		case 58:
			return &(outputs_ctx._L14_OpPhases_Launch);
		case 59:
			return &(outputs_ctx._L13_OpPhases_Launch);
		case 60:
			return &(outputs_ctx._L12_OpPhases_Launch);
		case 61:
			return &(outputs_ctx._L28_OpPhases_Launch);
		case 62:
			return &(outputs_ctx._L29_OpPhases_Launch);
		case 63:
			return &(outputs_ctx._L31_OpPhases_Launch);
		case 64:
			return &(outputs_ctx._L33_OpPhases_Launch);
		case 65:
			return &(outputs_ctx._L34_OpPhases_Launch);
		case 66:
			return &(outputs_ctx._L36_OpPhases_Launch);
		case 67:
			return &(outputs_ctx._L35_OpPhases_Launch);
		case 68:
			return &(outputs_ctx._L38_OpPhases_Launch);
		case 69:
			return &(outputs_ctx._L37_OpPhases_Launch);
		case 70:
			return &(outputs_ctx._L40_OpPhases_Launch);
		case 71:
			return &(outputs_ctx._L39_OpPhases_Launch);
		case 72:
			return &(outputs_ctx._L25_OpPhases_AttitudeAcquisition);
		case 73:
			return &(outputs_ctx._L40_OpPhases_AttitudeAcquisition);
		case 74:
			return &(outputs_ctx._L110_OpPhases_AttitudeAcquisition);
		case 75:
			return &(outputs_ctx._L121_OpPhases_AttitudeAcquisition);
		case 76:
			return &(outputs_ctx._L142_OpPhases_AttitudeAcquisition);
		case 77:
			return &(outputs_ctx.AtNormalPhaseLocal_OpPhases_AttitudeAcquisition);
		case 78:
			return &(outputs_ctx.LaunchTime_OpPhases_AttitudeAcquisition);
		case 79:
			return &(outputs_ctx.ClockTime_OpPhases_AttitudeAcquisition);
		case 80:
			return &(outputs_ctx._L15_OpPhases_AttitudeAcquisition);
		case 81:
			return &(outputs_ctx._L14_OpPhases_AttitudeAcquisition);
		case 82:
			return &(outputs_ctx._L13_OpPhases_AttitudeAcquisition);
		case 83:
			return &(outputs_ctx._L12_OpPhases_AttitudeAcquisition);
		case 84:
			return &(outputs_ctx._L19_OpPhases_AttitudeAcquisition);
		case 85:
			return &(outputs_ctx._L17_OpPhases_AttitudeAcquisition);
		case 86:
			return &(outputs_ctx._L16_OpPhases_AttitudeAcquisition);
		case 87:
			return &(outputs_ctx._L26_OpPhases_AttitudeAcquisition);
		case 88:
			return &(outputs_ctx._L24_OpPhases_AttitudeAcquisition);
		case 89:
			return &(outputs_ctx._L23_OpPhases_AttitudeAcquisition);
		case 90:
			return &(outputs_ctx._L22_OpPhases_AttitudeAcquisition);
		case 91:
			return &(outputs_ctx._L21_OpPhases_AttitudeAcquisition);
		case 92:
			return &(outputs_ctx._L28_OpPhases_AttitudeAcquisition);
		case 93:
			return &(outputs_ctx._L30_OpPhases_AttitudeAcquisition);
		case 94:
			return &(outputs_ctx._L36_OpPhases_AttitudeAcquisition);
		case 95:
			return &(outputs_ctx._L31_OpPhases_AttitudeAcquisition);
		case 96:
			return &(outputs_ctx._L43_OpPhases_AttitudeAcquisition);
		case 97:
			return &(outputs_ctx._L53_OpPhases_AttitudeAcquisition);
		case 98:
			return &(outputs_ctx._L114_OpPhases_AttitudeAcquisition);
		case 99:
			return &(outputs_ctx._L108_OpPhases_AttitudeAcquisition);
		case 100:
			return &(outputs_ctx._L120_OpPhases_AttitudeAcquisition);
		case 101:
			return &(outputs_ctx._L119_OpPhases_AttitudeAcquisition);
		case 102:
			return &(outputs_ctx._L118_OpPhases_AttitudeAcquisition);
		case 103:
			return &(outputs_ctx._L117_OpPhases_AttitudeAcquisition);
		case 104:
			return &(outputs_ctx._L125_OpPhases_AttitudeAcquisition);
		case 105:
			return &(outputs_ctx._L124_OpPhases_AttitudeAcquisition);
		case 106:
			return &(outputs_ctx._L130_OpPhases_AttitudeAcquisition);
		case 107:
			return &(outputs_ctx._L133_OpPhases_AttitudeAcquisition);
		case 108:
			return &(outputs_ctx._L135_OpPhases_AttitudeAcquisition);
		case 109:
			return &(outputs_ctx._L136_OpPhases_AttitudeAcquisition);
		case 110:
			return &(outputs_ctx._L137_OpPhases_AttitudeAcquisition);
		case 111:
			return &(outputs_ctx._L138_OpPhases_AttitudeAcquisition);
		case 112:
			return &(outputs_ctx._L139_OpPhases_AttitudeAcquisition);
		case 113:
			return &(outputs_ctx._L140_OpPhases_AttitudeAcquisition);
		case 114:
			return &(outputs_ctx._L141_OpPhases_AttitudeAcquisition);
		case 115:
			return &(outputs_ctx._L144_OpPhases_AttitudeAcquisition);
		case 116:
			return &(outputs_ctx._L143_OpPhases_AttitudeAcquisition);
		case 117:
			return &(outputs_ctx._L62_OpPhases_NormalPhase);
		case 118:
			return &(outputs_ctx.Context_6);
		case 119:
			return &(outputs_ctx.Context_5);
		case 120:
			return &(outputs_ctx.Context_4);
		case 121:
			return &(outputs_ctx.Context_9);
		case 122:
			return &(outputs_ctx.Context_8);
		case 123:
			return &(outputs_ctx.Context_7);
		case 124:
			return &(outputs_ctx.Probe1_OpPhases_NormalPhase);
		case 125:
			return &(outputs_ctx._L8_OpPhases_NormalPhase);
		case 126:
			return &(outputs_ctx._L7_OpPhases_NormalPhase);
		case 127:
			return &(outputs_ctx._L6_OpPhases_NormalPhase);
		case 128:
			return &(outputs_ctx._L5_OpPhases_NormalPhase);
		case 129:
			return &(outputs_ctx._L12_OpPhases_NormalPhase);
		case 130:
			return &(outputs_ctx._L11_OpPhases_NormalPhase);
		case 131:
			return &(outputs_ctx._L10_OpPhases_NormalPhase);
		case 132:
			return &(outputs_ctx._L13_OpPhases_NormalPhase);
		case 133:
			return &(outputs_ctx._L18_OpPhases_NormalPhase);
		case 134:
			return &(outputs_ctx._L19_OpPhases_NormalPhase);
		case 135:
			return &(outputs_ctx._L21_OpPhases_NormalPhase);
		case 136:
			return &(outputs_ctx._L24_OpPhases_NormalPhase);
		case 137:
			return &(outputs_ctx._L40_OpPhases_NormalPhase);
		case 138:
			return &(outputs_ctx._L42_OpPhases_NormalPhase);
		case 139:
			return &(outputs_ctx._L41_OpPhases_NormalPhase);
		case 140:
			return &(outputs_ctx._L61_OpPhases_NormalPhase);
		case 141:
			return &(outputs_ctx._L60_OpPhases_NormalPhase);
		case 142:
			return &(outputs_ctx._L59_OpPhases_NormalPhase);
		case 143:
			return &(outputs_ctx._L58_OpPhases_NormalPhase);
		case 144:
			return &(outputs_ctx._L57_OpPhases_NormalPhase);
		case 145:
			return &(outputs_ctx._L56_OpPhases_NormalPhase);
		case 146:
			return &(outputs_ctx._L66_OpPhases_NormalPhase);
		case 147:
			return &(outputs_ctx._L89_OpPhases_NormalPhase);
		case 148:
			return &(outputs_ctx._L90_OpPhases_NormalPhase);
		case 149:
			return &(outputs_ctx._L87_OpPhases_NormalPhase);
		case 150:
			return &(outputs_ctx._L88_OpPhases_NormalPhase);
		case 151:
			return &(outputs_ctx._L86_OpPhases_NormalPhase);
		case 152:
			return &(outputs_ctx._L83_OpPhases_NormalPhase);
		case 153:
			return &(outputs_ctx._L84_OpPhases_NormalPhase);
		case 154:
			return &(outputs_ctx._L82_OpPhases_NormalPhase);
		case 155:
			return &(outputs_ctx._L81_OpPhases_NormalPhase);
		case 156:
			return &(outputs_ctx._L80_OpPhases_NormalPhase);
		case 157:
			return &(outputs_ctx._L79_OpPhases_NormalPhase);
		case 158:
			return &(outputs_ctx._L94_OpPhases_NormalPhase);
		case 159:
			return &(outputs_ctx._L95_OpPhases_NormalPhase);
		case 160:
			return &(outputs_ctx._L96_OpPhases_NormalPhase);
		case 161:
			return &(outputs_ctx._L97_OpPhases_NormalPhase);
		case 162:
			return &(outputs_ctx._L98_OpPhases_NormalPhase);
		case 163:
			return &(outputs_ctx._L114_OpPhases_NormalPhase);
		case 164:
			return &(outputs_ctx._L113_OpPhases_NormalPhase);
		case 165:
			return &(outputs_ctx._L112_OpPhases_NormalPhase);
		case 166:
			return &(outputs_ctx._L111_OpPhases_NormalPhase);
		case 167:
			return &(outputs_ctx._L109_OpPhases_NormalPhase);
		case 168:
			return &(outputs_ctx._L110_OpPhases_NormalPhase);
		case 169:
			return &(outputs_ctx._L108_OpPhases_NormalPhase);
		case 170:
			return &(outputs_ctx._L107_OpPhases_NormalPhase);
		case 171:
			return &(outputs_ctx._L105_OpPhases_NormalPhase);
		case 172:
			return &(outputs_ctx._L106_OpPhases_NormalPhase);
		case 173:
			return &(outputs_ctx._L104_OpPhases_NormalPhase);
		case 174:
			return &(outputs_ctx._L102_OpPhases_NormalPhase);
		case 175:
			return &(outputs_ctx._L103_OpPhases_NormalPhase);
		case 176:
			return &(outputs_ctx._L101_OpPhases_NormalPhase);
		case 177:
			return &(outputs_ctx._L100_OpPhases_NormalPhase);
		case 178:
			return &(outputs_ctx._L99_OpPhases_NormalPhase);
		case 179:
			return &(outputs_ctx.color);
		case 180:
			return &(outputs_ctx.color_2);
		case 181:
			return &(outputs_ctx.color3);
		case 182:
			return &(outputs_ctx.color4);
		case 183:
			return &(outputs_ctx.AttitudeVisibleLocal);
		case 184:
			return &(outputs_ctx.NormalPhaseVisibleLocal);
		case 185:
			return &(outputs_ctx.AtAcquisition);
		case 186:
			return &(outputs_ctx.GyroscopesLocal);
		case 187:
			return &(outputs_ctx.AccelerometersLocal);
		case 188:
			return &(outputs_ctx.PowerLocal);
		case 189:
			return &(outputs_ctx.SunSensorLocal);
		case 190:
			return &(outputs_ctx.ReactionwheelsLocal);
		case 191:
			return &(outputs_ctx.MagneticTorquersLocal);
		case 192:
			return &(outputs_ctx.AcRdValueLocal);
		case 193:
			return &(outputs_ctx.AtNormalPhase);
		case 194:
			return &(outputs_ctx.color_5);
		case 195:
			return &(outputs_ctx.LaunchVisibleLocal);
		case 196:
			return &(outputs_ctx.FuelMeterLocal);
		case 197:
			return &(outputs_ctx.LatitudeLocal);
		case 198:
			return &(outputs_ctx.SpinRdLocal);
		case 199:
			return &(outputs_ctx.SpinTgLocal);
		case 200:
			return &(outputs_ctx.angleleftlocal);
		case 201:
			return &(outputs_ctx.anglerightlocal);
		case 202:
			return &(outputs_ctx._L7);
		case 203:
			return &(outputs_ctx._L8);
		case 204:
			return &(outputs_ctx._L9);
		case 205:
			return &(outputs_ctx._L11);
		case 206:
			return &(outputs_ctx._L12);
		case 207:
			return &(outputs_ctx._L13);
		case 208:
			return &(outputs_ctx._L14);
		case 209:
			return &(outputs_ctx._L15);
		case 210:
			return &(outputs_ctx._L16);
		case 211:
			return &(outputs_ctx._L19);
		case 212:
			return &(outputs_ctx._L20);
		case 213:
			return &(outputs_ctx._L22);
		case 214:
			return &(outputs_ctx._L31);
		case 215:
			return &(outputs_ctx._L32);
		case 216:
			return &(outputs_ctx._L34);
		case 217:
			return &(outputs_ctx._L36);
		case 218:
			return &(outputs_ctx._L38);
		case 219:
			return &(outputs_ctx._L41);
		case 220:
			return &(outputs_ctx._L42);
		case 221:
			return &(outputs_ctx._L43);
		case 222:
			return &(outputs_ctx._L44);
		case 223:
			return &(outputs_ctx._L45);
		case 224:
			return &(outputs_ctx._L46);
		case 225:
			return &(outputs_ctx._L51);
		case 226:
			return &(outputs_ctx._L52);
		case 227:
			return &(outputs_ctx._L55);
		case 228:
			return &(outputs_ctx._L56);
		case 229:
			return &(outputs_ctx._L63);
		case 230:
			return &(outputs_ctx._L65);
		case 231:
			return &(outputs_ctx._L66);
		case 232:
			return &(outputs_ctx._L67);
		case 233:
			return &(outputs_ctx._L68);
		case 234:
			return &(outputs_ctx._L69);
		case 235:
			return &(outputs_ctx._L70);
		case 236:
			return &(outputs_ctx._L71);
		case 237:
			return &(outputs_ctx._L72);
		case 238:
			return &(outputs_ctx._L73);
		case 239:
			return &(outputs_ctx._L74);
		case 240:
			return &(outputs_ctx._L75);
		case 241:
			return &(outputs_ctx._L76);
		case 242:
			return &(outputs_ctx._L77);
		case 243:
			return &(outputs_ctx.StartLaunchPhase);
		case 244:
			return &(outputs_ctx.Layer1Active);
		case 245:
			return &(outputs_ctx.Layer1Visible);
		case 246:
			return &(outputs_ctx.Emit2CDS);
		case 247:
			return &(outputs_ctx.ColorIndex);
		case 248:
			return &(outputs_ctx.ColorIndex2);
		case 249:
			return &(outputs_ctx.ColorIndex3);
		case 250:
			return &(outputs_ctx.ColorIndex4);
		case 251:
			return &(outputs_ctx.GroundVisible);
		case 252:
			return &(outputs_ctx.AttitudeVisible);
		case 253:
			return &(outputs_ctx.NormalPhaseVisible);
		case 254:
			return &(outputs_ctx.AcRdValue);
		case 255:
			return &(outputs_ctx.ColorIndex5);
		case 256:
			return &(outputs_ctx.LaunchVisible);
		case 257:
			return &(outputs_ctx.FuelMeter);
		case 258:
			return &(outputs_ctx.FuelMeterGraphic);
		case 259:
			return &(outputs_ctx.SAT_Longitude_Value);
		case 260:
			return &(outputs_ctx.SAT_Latitude_Value);
		case 261:
			return &(outputs_ctx.SpinRd);
		case 262:
			return &(outputs_ctx.SpinTg);
		case 263:
			return &(outputs_ctx.angleright);
		case 264:
			return &(outputs_ctx.angleleft);
		case 265:
			return &(outputs_ctx.SAT_Longitude_Min_Value);
		case 266:
			return &(outputs_ctx.SAT_Longitude_Sec_Value);
		case 267:
			return &(outputs_ctx.SAT_Latitude_Min_Value);
		case 268:
			return &(outputs_ctx.SAT_Latitude_Sec_Value);
		case 269:
			return &(inputs_ctx.Power);
		case 270:
			return &(inputs_ctx.Telemetry);
		case 271:
			return &(inputs_ctx.AttitudeReference);
		case 272:
			return &(inputs_ctx.takePict);
		case 273:
			return &(inputs_ctx.picLocation);
		case 274:
			return &(inputs_ctx.PassarFaseBtn);
		case 275:
			return &(inputs_ctx.Accelerometers);
		case 276:
			return &(inputs_ctx.SunSensor);
		case 277:
			return &(inputs_ctx.Reactionwheels);
		case 278:
			return &(inputs_ctx.MagneticTorquers);
		case 279:
			return &(inputs_ctx.upDateSw);
		case 280:
			return &(inputs_ctx.Gyroscopes);
		case 281:
			return &(inputs_ctx.Input13);
		case 282:
			return &(inputs_ctx.EjectionSignal);
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

/****************************************************************
 ** ReadSensors/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ReadSensors(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ReadSensors_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "Gyroscopes", &_SCSIM_kcg_bool_Utils, 283, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "Accelerometers", &_SCSIM_kcg_bool_Utils, 284, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SunSensor", &_SCSIM_kcg_bool_Utils, 285, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 286, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 287, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 288, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 289, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 290, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SensorsStatus", &_SCSIM_kcg_bool_Utils, 291, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ReadSensors_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ReadSensors* pContext = (outC_ReadSensors*)pInstance;
	switch (nHandleIdent) {
		case 283:
			return &((*pContext).rem_Gyroscopes);
		case 284:
			return &((*pContext).rem_Accelerometers);
		case 285:
			return &((*pContext).rem_SunSensor);
		case 286:
			return &((*pContext)._L2);
		case 287:
			return &((*pContext)._L4);
		case 288:
			return &((*pContext)._L5);
		case 289:
			return &((*pContext)._L6);
		case 290:
			return &((*pContext)._L8);
		case 291:
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
	pSimulator->m_pfnAddLocal(pSimulator, "Reactionwheels", &_SCSIM_kcg_bool_Utils, 292, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "MagneticTorquers", &_SCSIM_kcg_bool_Utils, 293, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 294, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 295, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 296, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ActuatorsStatus", &_SCSIM_kcg_bool_Utils, 297, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_TestActuators_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_TestActuators* pContext = (outC_TestActuators*)pInstance;
	switch (nHandleIdent) {
		case 292:
			return &((*pContext).rem_Reactionwheels);
		case 293:
			return &((*pContext).rem_MagneticTorquers);
		case 294:
			return &((*pContext)._L2);
		case 295:
			return &((*pContext)._L3);
		case 296:
			return &((*pContext)._L4);
		case 297:
			return &((*pContext).ActuatorsStatus);
		default:
			break;
	}
	return 0;
}

/****************************************************************
 ** ModCount/ mapping function
 ****************************************************************/
void _SCSIM_Mapping_ModCount(const char* pszPath, const char* pszInstanceName, int nHandleIdent, int nClockHandleIdent, int (*pfnClockActive)(void*)) {
	pSimulator->m_pfnPushInstance(pSimulator, pszPath, pszInstanceName, nHandleIdent, _SCSIM_Get_ModCount_Handle, nClockHandleIdent, pfnClockActive);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 298, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 299, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 300, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 301, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 302, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 303, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 304, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 305, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Count", &_SCSIM_kcg_int_Utils, 306, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "rippleClock", &_SCSIM_kcg_bool_Utils, 307, valid, 0, 0);
	pSimulator->m_pfnPopInstance(pSimulator);
}

void* _SCSIM_Get_ModCount_Handle(void* pInstance, int nHandleIdent, int* pIteratorFilter, int nSize) {
	outC_ModCount* pContext = (outC_ModCount*)pInstance;
	switch (nHandleIdent) {
		case 298:
			return &((*pContext)._L2);
		case 299:
			return &((*pContext)._L1);
		case 300:
			return &((*pContext)._L3);
		case 301:
			return &((*pContext)._L4);
		case 302:
			return &((*pContext)._L5);
		case 303:
			return &((*pContext)._L8);
		case 304:
			return &((*pContext)._L9);
		case 305:
			return &((*pContext)._L12);
		case 306:
			return &((*pContext).Count);
		case 307:
			return &((*pContext).rippleClock);
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
static int _SCSIM_ClockActive_SSM_st_Launch_OpPhases(void* clock) {
return *(kcg_bool*)clock == SSM_st_Launch_OpPhases ? 1 : 0;
}
static int _SCSIM_ClockActive_SSM_st_Ground_OpPhases(void* clock) {
return *(kcg_bool*)clock == SSM_st_Ground_OpPhases ? 1 : 0;
}
