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
	/*<< Inlined ReadSensors*/
	pSimulator->m_pfnPushInstance(pSimulator, "ReadSensors", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SensorsStatus", &_SCSIM_kcg_bool_Utils, 21, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "Gyroscopes", &_SCSIM_kcg_bool_Utils, 22, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "Accelerometers", &_SCSIM_kcg_bool_Utils, 23, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "SunSensor", &_SCSIM_kcg_bool_Utils, 24, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 25, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 26, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_bool_Utils, 27, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_bool_Utils, 28, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 29, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined TestActuators*/
	pSimulator->m_pfnPushInstance(pSimulator, "TestActuators", "1", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ActuatorsStatus", &_SCSIM_kcg_bool_Utils, 30, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "Reactionwheels", &_SCSIM_kcg_bool_Utils, 31, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "MagneticTorquers", &_SCSIM_kcg_bool_Utils, 32, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_bool_Utils, 33, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_bool_Utils, 34, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 35, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 36, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_int_Utils, 37, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 38, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 39, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 40, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_bool_Utils, 41, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 42, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 43, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_bool_Utils, 44, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_bool_Utils, 45, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L27", &_SCSIM_kcg_bool_Utils, 46, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_bool_Utils, 47, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_bool_Utils, 48, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 49, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 50, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_bool_Utils, 51, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_bool_Utils, 52, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_real_Utils, 53, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_kcg_int_Utils, 54, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_kcg_bool_Utils, 55, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_kcg_real_Utils, 56, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_real_Utils, 57, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_real_Utils, 58, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_kcg_real_Utils, 59, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_real_Utils, 60, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_kcg_real_Utils, 61, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L54", &_SCSIM_kcg_real_Utils, 62, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 63, valid, 20, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "2", &_SCSIM_SSM_TR_Ground_2_OpPhases_Utils, 64);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Ground_1_OpPhases_Utils, 65);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Launch", &_SCSIM_SSM_st_Launch_OpPhases_Utils, 20);
	pSimulator->m_pfnAddLocal(pSimulator, "AtAcquisition", &_SCSIM_kcg_bool_Utils, 66, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 67, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 68, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 69, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 70, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 71, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 72, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 73, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 74, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_real_Utils, 75, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 76, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 77, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_real_Utils, 78, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_real_Utils, 79, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_real_Utils, 80, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_kcg_real_Utils, 81, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_real_Utils, 82, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_kcg_real_Utils, 83, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_kcg_real_Utils, 84, valid, 20, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "1", &_SCSIM_SSM_TR_Launch_1_OpPhases_Utils, 64);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "AttitudeAcquisition", &_SCSIM_SSM_st_AttitudeAcquisition_OpPhases_Utils, 20);
	pSimulator->m_pfnAddLocal(pSimulator, "_L25", &_SCSIM_kcg_real_Utils, 85, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_kcg_real_Utils, 86, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L110", &_SCSIM_kcg_real_Utils, 87, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L121", &_SCSIM_kcg_real_Utils, 88, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L142", &_SCSIM_kcg_real_Utils, 89, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "AtNormalPhaseLocal", &_SCSIM_kcg_bool_Utils, 90, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "LaunchTime", &_SCSIM_kcg_real_Utils, 91, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "ClockTime", &_SCSIM_kcg_real_Utils, 92, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 93, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 94, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 95, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 96, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 97, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 98, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 99, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L26", &_SCSIM_kcg_real_Utils, 100, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_bool_Utils, 101, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L23", &_SCSIM_kcg_real_Utils, 102, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_real_Utils, 103, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 104, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 105, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_bool_Utils, 106, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_real_Utils, 107, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_real_Utils, 108, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_kcg_real_Utils, 109, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_kcg_real_Utils, 110, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L114", &_SCSIM_kcg_real_Utils, 111, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L108", &_SCSIM_kcg_real_Utils, 112, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L120", &_SCSIM_kcg_real_Utils, 113, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L119", &_SCSIM_kcg_real_Utils, 114, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L118", &_SCSIM_kcg_real_Utils, 115, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L117", &_SCSIM_kcg_real_Utils, 116, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L125", &_SCSIM_kcg_real_Utils, 117, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L124", &_SCSIM_kcg_real_Utils, 118, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L130", &_SCSIM_kcg_real_Utils, 119, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L133", &_SCSIM_kcg_real_Utils, 120, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L135", &_SCSIM_kcg_real_Utils, 121, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L136", &_SCSIM_kcg_real_Utils, 122, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L137", &_SCSIM_kcg_real_Utils, 123, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L138", &_SCSIM_kcg_real_Utils, 124, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L139", &_SCSIM_kcg_bool_Utils, 125, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L140", &_SCSIM_kcg_real_Utils, 126, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L141", &_SCSIM_kcg_real_Utils, 127, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L144", &_SCSIM_kcg_real_Utils, 128, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L143", &_SCSIM_kcg_real_Utils, 129, valid, 20, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "1", &_SCSIM_SSM_TR_AttitudeAcquisition_1_OpPhases_Utils, 64);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "NormalPhase", &_SCSIM_SSM_st_NormalPhase_OpPhases_Utils, 20);
	pSimulator->m_pfnAddLocal(pSimulator, "_L62", &_SCSIM_kcg_real_Utils, 130, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	/*<< Inlined ModCount*/
	pSimulator->m_pfnPushInstance(pSimulator, "ModCount", "6", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Count", &_SCSIM_kcg_int_Utils, 131, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddOutput(pSimulator, "rippleClock", &_SCSIM_kcg_bool_Utils, 132, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "Input1", &_SCSIM_kcg_bool_Utils, 133, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "modulo", &_SCSIM_kcg_int_Utils, 134, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "inc", &_SCSIM_kcg_int_Utils, 135, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 136, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 137, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 138, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 139, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 140, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 141, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 142, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 143, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined ModCount*/
	pSimulator->m_pfnPushInstance(pSimulator, "ModCount", "5", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Count", &_SCSIM_kcg_int_Utils, 144, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddOutput(pSimulator, "rippleClock", &_SCSIM_kcg_bool_Utils, 145, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "Input1", &_SCSIM_kcg_bool_Utils, 146, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "modulo", &_SCSIM_kcg_int_Utils, 147, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "inc", &_SCSIM_kcg_int_Utils, 148, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 149, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 150, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 151, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 152, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 153, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 154, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 155, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 156, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined ModCount*/
	pSimulator->m_pfnPushInstance(pSimulator, "ModCount", "4", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Count", &_SCSIM_kcg_int_Utils, 157, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddOutput(pSimulator, "rippleClock", &_SCSIM_kcg_bool_Utils, 158, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "Input1", &_SCSIM_kcg_bool_Utils, 159, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "modulo", &_SCSIM_kcg_int_Utils, 160, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "inc", &_SCSIM_kcg_int_Utils, 161, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 162, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 163, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 164, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 165, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 166, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 167, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 168, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 169, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined ModCount*/
	pSimulator->m_pfnPushInstance(pSimulator, "ModCount", "9", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Count", &_SCSIM_kcg_int_Utils, 170, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddOutput(pSimulator, "rippleClock", &_SCSIM_kcg_bool_Utils, 171, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "Input1", &_SCSIM_kcg_bool_Utils, 172, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "modulo", &_SCSIM_kcg_int_Utils, 173, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "inc", &_SCSIM_kcg_int_Utils, 174, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 175, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 176, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 177, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 178, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 179, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 180, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 181, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 182, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined ModCount*/
	pSimulator->m_pfnPushInstance(pSimulator, "ModCount", "8", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Count", &_SCSIM_kcg_int_Utils, 183, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddOutput(pSimulator, "rippleClock", &_SCSIM_kcg_bool_Utils, 184, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "Input1", &_SCSIM_kcg_bool_Utils, 185, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "modulo", &_SCSIM_kcg_int_Utils, 186, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "inc", &_SCSIM_kcg_int_Utils, 187, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 188, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 189, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 190, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 191, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 192, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 193, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 194, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 195, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	/*<< Inlined ModCount*/
	pSimulator->m_pfnPushInstance(pSimulator, "ModCount", "7", 0, 0, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Count", &_SCSIM_kcg_int_Utils, 196, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddOutput(pSimulator, "rippleClock", &_SCSIM_kcg_bool_Utils, 197, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "Input1", &_SCSIM_kcg_bool_Utils, 198, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "modulo", &_SCSIM_kcg_int_Utils, 199, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddInput(pSimulator, "inc", &_SCSIM_kcg_int_Utils, 200, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L2", &_SCSIM_kcg_int_Utils, 201, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L1", &_SCSIM_kcg_int_Utils, 202, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L3", &_SCSIM_kcg_int_Utils, 203, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L4", &_SCSIM_kcg_bool_Utils, 204, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 205, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 206, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 207, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 208, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPopInstance(pSimulator);
	/*>>*/
	pSimulator->m_pfnAddProbe(pSimulator, "Probe1", &_SCSIM_kcg_bool_Utils, 209, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 210, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 211, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 212, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 213, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 214, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 215, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 216, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_real_Utils, 217, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 218, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 219, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 220, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L24", &_SCSIM_kcg_real_Utils, 221, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_kcg_bool_Utils, 222, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_kcg_real_Utils, 223, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_kcg_real_Utils, 224, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L61", &_SCSIM_kcg_bool_Utils, 225, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L60", &_SCSIM_kcg_real_Utils, 226, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L59", &_SCSIM_kcg_real_Utils, 227, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L58", &_SCSIM_kcg_real_Utils, 228, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L57", &_SCSIM_kcg_real_Utils, 229, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L56", &_SCSIM_kcg_real_Utils, 230, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_kcg_real_Utils, 231, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L89", &_SCSIM_kcg_int_Utils, 232, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L90", &_SCSIM_kcg_bool_Utils, 233, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L87", &_SCSIM_kcg_int_Utils, 234, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L88", &_SCSIM_kcg_bool_Utils, 235, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L86", &_SCSIM_kcg_int_Utils, 236, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L83", &_SCSIM_kcg_int_Utils, 237, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L84", &_SCSIM_kcg_bool_Utils, 238, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L82", &_SCSIM_kcg_int_Utils, 239, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L81", &_SCSIM_kcg_int_Utils, 240, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L80", &_SCSIM_kcg_int_Utils, 241, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L79", &_SCSIM_kcg_bool_Utils, 242, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L94", &_SCSIM_kcg_bool_Utils, 243, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L95", &_SCSIM_kcg_int_Utils, 244, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L96", &_SCSIM_kcg_int_Utils, 245, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L97", &_SCSIM_kcg_int_Utils, 246, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L98", &_SCSIM_kcg_int_Utils, 247, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L114", &_SCSIM_kcg_int_Utils, 248, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L113", &_SCSIM_kcg_bool_Utils, 249, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L112", &_SCSIM_kcg_int_Utils, 250, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L111", &_SCSIM_kcg_int_Utils, 251, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L109", &_SCSIM_kcg_int_Utils, 252, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L110", &_SCSIM_kcg_bool_Utils, 253, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L108", &_SCSIM_kcg_bool_Utils, 254, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L107", &_SCSIM_kcg_int_Utils, 255, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L105", &_SCSIM_kcg_int_Utils, 256, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L106", &_SCSIM_kcg_bool_Utils, 257, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L104", &_SCSIM_kcg_int_Utils, 258, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L102", &_SCSIM_kcg_int_Utils, 259, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L103", &_SCSIM_kcg_bool_Utils, 260, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L101", &_SCSIM_kcg_int_Utils, 261, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L100", &_SCSIM_kcg_int_Utils, 262, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L99", &_SCSIM_kcg_int_Utils, 263, valid, 20, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "color", &_SCSIM_kcg_int_Utils, 264, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color_2", &_SCSIM_kcg_int_Utils, 265, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color3", &_SCSIM_kcg_int_Utils, 266, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color4", &_SCSIM_kcg_int_Utils, 267, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AttitudeVisibleLocal", &_SCSIM_kcg_bool_Utils, 268, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "NormalPhaseVisibleLocal", &_SCSIM_kcg_bool_Utils, 269, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AtAcquisition", &_SCSIM_kcg_bool_Utils, 270, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "GyroscopesLocal", &_SCSIM_kcg_bool_Utils, 271, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AccelerometersLocal", &_SCSIM_kcg_bool_Utils, 272, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "PowerLocal", &_SCSIM_kcg_bool_Utils, 273, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SunSensorLocal", &_SCSIM_kcg_bool_Utils, 274, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "ReactionwheelsLocal", &_SCSIM_kcg_bool_Utils, 275, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "MagneticTorquersLocal", &_SCSIM_kcg_bool_Utils, 276, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AcRdValueLocal", &_SCSIM_kcg_real_Utils, 277, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AtNormalPhase", &_SCSIM_kcg_bool_Utils, 278, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color_5", &_SCSIM_kcg_int_Utils, 279, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LaunchVisibleLocal", &_SCSIM_kcg_bool_Utils, 280, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "FuelMeterLocal", &_SCSIM_kcg_real_Utils, 281, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LatitudeLocal", &_SCSIM_kcg_real_Utils, 282, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SpinRdLocal", &_SCSIM_kcg_real_Utils, 283, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SpinTgLocal", &_SCSIM_kcg_real_Utils, 284, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "angleleftlocal", &_SCSIM_fr_Utils, 285, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "anglerightlocal", &_SCSIM_fr_Utils, 286, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 287, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 288, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 289, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 290, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 291, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 292, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 293, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 294, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 295, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 296, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 297, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 298, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_bool_Utils, 299, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 300, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_bool_Utils, 301, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_bool_Utils, 302, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_kcg_real_Utils, 303, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_kcg_int_Utils, 304, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_kcg_bool_Utils, 305, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_kcg_real_Utils, 306, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_kcg_real_Utils, 307, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_real_Utils, 308, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_int_Utils, 309, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_kcg_real_Utils, 310, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_kcg_real_Utils, 311, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L55", &_SCSIM_fr_Utils, 312, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L56", &_SCSIM_fr_Utils, 313, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L63", &_SCSIM_kcg_real_Utils, 314, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L65", &_SCSIM_kcg_int_Utils, 315, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_kcg_int_Utils, 316, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L67", &_SCSIM_kcg_real_Utils, 317, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L68", &_SCSIM_kcg_int_Utils, 318, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L69", &_SCSIM_kcg_real_Utils, 319, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L70", &_SCSIM_kcg_bool_Utils, 320, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L71", &_SCSIM_kcg_bool_Utils, 321, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L72", &_SCSIM_kcg_int_Utils, 322, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L73", &_SCSIM_kcg_int_Utils, 323, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L74", &_SCSIM_kcg_real_Utils, 324, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L75", &_SCSIM_kcg_real_Utils, 325, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L76", &_SCSIM_kcg_real_Utils, 326, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L77", &_SCSIM_kcg_int_Utils, 327, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "StartLaunchPhase", &_SCSIM_kcg_bool_Utils, 328, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Active", &_SCSIM_kcg_bool_Utils, 329, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Visible", &_SCSIM_kcg_bool_Utils, 330, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Emit2CDS", &_SCSIM_kcg_bool_Utils, 331, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex", &_SCSIM_kcg_int_Utils, 332, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex2", &_SCSIM_kcg_int_Utils, 333, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex3", &_SCSIM_kcg_int_Utils, 334, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex4", &_SCSIM_kcg_int_Utils, 335, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "GroundVisible", &_SCSIM_kcg_bool_Utils, 336, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "AttitudeVisible", &_SCSIM_kcg_bool_Utils, 337, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NormalPhaseVisible", &_SCSIM_kcg_bool_Utils, 338, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "AcRdValue", &_SCSIM_kcg_real_Utils, 339, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex5", &_SCSIM_kcg_int_Utils, 340, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LaunchVisible", &_SCSIM_kcg_bool_Utils, 341, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "FuelMeter", &_SCSIM_kcg_real_Utils, 342, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "FuelMeterGraphic", &_SCSIM_kcg_int_Utils, 343, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Longitude_Value", &_SCSIM_kcg_real_Utils, 344, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Latitude_Value", &_SCSIM_kcg_real_Utils, 345, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpinRd", &_SCSIM_kcg_real_Utils, 346, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpinTg", &_SCSIM_kcg_real_Utils, 347, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "angleright", &_SCSIM_fr_Utils, 348, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "angleleft", &_SCSIM_fr_Utils, 349, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Longitude_Min_Value", &_SCSIM_kcg_real_Utils, 350, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Longitude_Sec_Value", &_SCSIM_kcg_real_Utils, 351, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Latitude_Min_Value", &_SCSIM_kcg_real_Utils, 352, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Latitude_Sec_Value", &_SCSIM_kcg_real_Utils, 353, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Power", &_SCSIM_kcg_bool_Utils, 354, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Telemetry", &_SCSIM_kcg_int_Utils, 355, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "AttitudeReference", &_SCSIM_kcg_int_Utils, 356, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "takePict", &_SCSIM_kcg_bool_Utils, 357, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "picLocation", &_SCSIM_kcg_real_Utils, 358, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PassarFaseBtn", &_SCSIM_kcg_bool_Utils, 359, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Accelerometers", &_SCSIM_kcg_bool_Utils, 360, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SunSensor", &_SCSIM_kcg_bool_Utils, 361, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Reactionwheels", &_SCSIM_kcg_bool_Utils, 362, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "MagneticTorquers", &_SCSIM_kcg_bool_Utils, 363, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "upDateSw", &_SCSIM_kcg_bool_Utils, 364, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Gyroscopes", &_SCSIM_kcg_bool_Utils, 365, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Input13", &_SCSIM_kcg_bool_Utils, 366, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "EjectionSignal", &_SCSIM_kcg_bool_Utils, 367, valid, 0, 0);
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
			return &(outputs_ctx.SensorsStatus_6);
		case 22:
			return &(outputs_ctx.Gyroscopes_6);
		case 23:
			return &(outputs_ctx.Accelerometers_6);
		case 24:
			return &(outputs_ctx.SunSensor_6);
		case 25:
			return &(outputs_ctx._L2_68);
		case 26:
			return &(outputs_ctx._L4_67);
		case 27:
			return &(outputs_ctx._L5_66);
		case 28:
			return &(outputs_ctx._L6_6);
		case 29:
			return &(outputs_ctx._L8_65);
		case 30:
			return &(outputs_ctx.ActuatorsStatus_1);
		case 31:
			return &(outputs_ctx.Reactionwheels_1);
		case 32:
			return &(outputs_ctx.MagneticTorquers_1);
		case 33:
			return &(outputs_ctx._L2_1);
		case 34:
			return &(outputs_ctx._L3_1);
		case 35:
			return &(outputs_ctx._L4_1);
		case 36:
			return &(outputs_ctx._L2_OpPhases_Ground);
		case 37:
			return &(outputs_ctx._L4_OpPhases_Ground);
		case 38:
			return &(outputs_ctx._L7_OpPhases_Ground);
		case 39:
			return &(outputs_ctx._L8_OpPhases_Ground);
		case 40:
			return &(outputs_ctx._L13_OpPhases_Ground);
		case 41:
			return &(outputs_ctx._L15_OpPhases_Ground);
		case 42:
			return &(outputs_ctx._L16_OpPhases_Ground);
		case 43:
			return &(outputs_ctx._L22_OpPhases_Ground);
		case 44:
			return &(outputs_ctx._L23_OpPhases_Ground);
		case 45:
			return &(outputs_ctx._L24_OpPhases_Ground);
		case 46:
			return &(outputs_ctx._L27_OpPhases_Ground);
		case 47:
			return &(outputs_ctx._L30_OpPhases_Ground);
		case 48:
			return &(outputs_ctx._L31_OpPhases_Ground);
		case 49:
			return &(outputs_ctx._L32_OpPhases_Ground);
		case 50:
			return &(outputs_ctx._L33_OpPhases_Ground);
		case 51:
			return &(outputs_ctx._L34_OpPhases_Ground);
		case 52:
			return &(outputs_ctx._L35_OpPhases_Ground);
		case 53:
			return &(outputs_ctx._L37_OpPhases_Ground);
		case 54:
			return &(outputs_ctx._L39_OpPhases_Ground);
		case 55:
			return &(outputs_ctx._L41_OpPhases_Ground);
		case 56:
			return &(outputs_ctx._L42_OpPhases_Ground);
		case 57:
			return &(outputs_ctx._L45_OpPhases_Ground);
		case 58:
			return &(outputs_ctx._L46_OpPhases_Ground);
		case 59:
			return &(outputs_ctx._L49_OpPhases_Ground);
		case 60:
			return &(outputs_ctx._L50_OpPhases_Ground);
		case 61:
			return &(outputs_ctx._L53_OpPhases_Ground);
		case 62:
			return &(outputs_ctx._L54_OpPhases_Ground);
		case 63:
			return &(outputs_ctx.Ground_weakb_clock_OpPhases);
		case 64:
			return &(outputs_ctx.OpPhases_fired);
		case 65:
			return &(outputs_ctx.OpPhases_fired_strong);
		case 66:
			return &(outputs_ctx.AtAcquisition_OpPhases_Launch);
		case 67:
			return &(outputs_ctx._L5_OpPhases_Launch);
		case 68:
			return &(outputs_ctx._L6_OpPhases_Launch);
		case 69:
			return &(outputs_ctx._L10_OpPhases_Launch);
		case 70:
			return &(outputs_ctx._L7_OpPhases_Launch);
		case 71:
			return &(outputs_ctx._L14_OpPhases_Launch);
		case 72:
			return &(outputs_ctx._L13_OpPhases_Launch);
		case 73:
			return &(outputs_ctx._L12_OpPhases_Launch);
		case 74:
			return &(outputs_ctx._L28_OpPhases_Launch);
		case 75:
			return &(outputs_ctx._L29_OpPhases_Launch);
		case 76:
			return &(outputs_ctx._L31_OpPhases_Launch);
		case 77:
			return &(outputs_ctx._L33_OpPhases_Launch);
		case 78:
			return &(outputs_ctx._L34_OpPhases_Launch);
		case 79:
			return &(outputs_ctx._L36_OpPhases_Launch);
		case 80:
			return &(outputs_ctx._L35_OpPhases_Launch);
		case 81:
			return &(outputs_ctx._L38_OpPhases_Launch);
		case 82:
			return &(outputs_ctx._L37_OpPhases_Launch);
		case 83:
			return &(outputs_ctx._L40_OpPhases_Launch);
		case 84:
			return &(outputs_ctx._L39_OpPhases_Launch);
		case 85:
			return &(outputs_ctx._L25_OpPhases_AttitudeAcquisition);
		case 86:
			return &(outputs_ctx._L40_OpPhases_AttitudeAcquisition);
		case 87:
			return &(outputs_ctx._L110_OpPhases_AttitudeAcquisition);
		case 88:
			return &(outputs_ctx._L121_OpPhases_AttitudeAcquisition);
		case 89:
			return &(outputs_ctx._L142_OpPhases_AttitudeAcquisition);
		case 90:
			return &(outputs_ctx.AtNormalPhaseLocal_OpPhases_AttitudeAcquisition);
		case 91:
			return &(outputs_ctx.LaunchTime_OpPhases_AttitudeAcquisition);
		case 92:
			return &(outputs_ctx.ClockTime_OpPhases_AttitudeAcquisition);
		case 93:
			return &(outputs_ctx._L15_OpPhases_AttitudeAcquisition);
		case 94:
			return &(outputs_ctx._L14_OpPhases_AttitudeAcquisition);
		case 95:
			return &(outputs_ctx._L13_OpPhases_AttitudeAcquisition);
		case 96:
			return &(outputs_ctx._L12_OpPhases_AttitudeAcquisition);
		case 97:
			return &(outputs_ctx._L19_OpPhases_AttitudeAcquisition);
		case 98:
			return &(outputs_ctx._L17_OpPhases_AttitudeAcquisition);
		case 99:
			return &(outputs_ctx._L16_OpPhases_AttitudeAcquisition);
		case 100:
			return &(outputs_ctx._L26_OpPhases_AttitudeAcquisition);
		case 101:
			return &(outputs_ctx._L24_OpPhases_AttitudeAcquisition);
		case 102:
			return &(outputs_ctx._L23_OpPhases_AttitudeAcquisition);
		case 103:
			return &(outputs_ctx._L22_OpPhases_AttitudeAcquisition);
		case 104:
			return &(outputs_ctx._L21_OpPhases_AttitudeAcquisition);
		case 105:
			return &(outputs_ctx._L28_OpPhases_AttitudeAcquisition);
		case 106:
			return &(outputs_ctx._L30_OpPhases_AttitudeAcquisition);
		case 107:
			return &(outputs_ctx._L36_OpPhases_AttitudeAcquisition);
		case 108:
			return &(outputs_ctx._L31_OpPhases_AttitudeAcquisition);
		case 109:
			return &(outputs_ctx._L43_OpPhases_AttitudeAcquisition);
		case 110:
			return &(outputs_ctx._L53_OpPhases_AttitudeAcquisition);
		case 111:
			return &(outputs_ctx._L114_OpPhases_AttitudeAcquisition);
		case 112:
			return &(outputs_ctx._L108_OpPhases_AttitudeAcquisition);
		case 113:
			return &(outputs_ctx._L120_OpPhases_AttitudeAcquisition);
		case 114:
			return &(outputs_ctx._L119_OpPhases_AttitudeAcquisition);
		case 115:
			return &(outputs_ctx._L118_OpPhases_AttitudeAcquisition);
		case 116:
			return &(outputs_ctx._L117_OpPhases_AttitudeAcquisition);
		case 117:
			return &(outputs_ctx._L125_OpPhases_AttitudeAcquisition);
		case 118:
			return &(outputs_ctx._L124_OpPhases_AttitudeAcquisition);
		case 119:
			return &(outputs_ctx._L130_OpPhases_AttitudeAcquisition);
		case 120:
			return &(outputs_ctx._L133_OpPhases_AttitudeAcquisition);
		case 121:
			return &(outputs_ctx._L135_OpPhases_AttitudeAcquisition);
		case 122:
			return &(outputs_ctx._L136_OpPhases_AttitudeAcquisition);
		case 123:
			return &(outputs_ctx._L137_OpPhases_AttitudeAcquisition);
		case 124:
			return &(outputs_ctx._L138_OpPhases_AttitudeAcquisition);
		case 125:
			return &(outputs_ctx._L139_OpPhases_AttitudeAcquisition);
		case 126:
			return &(outputs_ctx._L140_OpPhases_AttitudeAcquisition);
		case 127:
			return &(outputs_ctx._L141_OpPhases_AttitudeAcquisition);
		case 128:
			return &(outputs_ctx._L144_OpPhases_AttitudeAcquisition);
		case 129:
			return &(outputs_ctx._L143_OpPhases_AttitudeAcquisition);
		case 130:
			return &(outputs_ctx._L62_OpPhases_NormalPhase);
		case 131:
			return &(outputs_ctx.Count_6);
		case 132:
			return &(outputs_ctx.rippleClock_6);
		case 133:
			return &(outputs_ctx.Input1_6);
		case 134:
			return &(outputs_ctx.modulo_6);
		case 135:
			return &(outputs_ctx.inc_6);
		case 136:
			return &(outputs_ctx._L2_6);
		case 137:
			return &(outputs_ctx._L1_6);
		case 138:
			return &(outputs_ctx._L3_6);
		case 139:
			return &(outputs_ctx._L4_6);
		case 140:
			return &(outputs_ctx._L5_6);
		case 141:
			return &(outputs_ctx._L8_6);
		case 142:
			return &(outputs_ctx._L9_6);
		case 143:
			return &(outputs_ctx._L12_6);
		case 144:
			return &(outputs_ctx.Count_5);
		case 145:
			return &(outputs_ctx.rippleClock_5);
		case 146:
			return &(outputs_ctx.Input1_5);
		case 147:
			return &(outputs_ctx.modulo_5);
		case 148:
			return &(outputs_ctx.inc_5);
		case 149:
			return &(outputs_ctx._L2_5);
		case 150:
			return &(outputs_ctx._L1_5);
		case 151:
			return &(outputs_ctx._L3_5);
		case 152:
			return &(outputs_ctx._L4_5);
		case 153:
			return &(outputs_ctx._L5_5);
		case 154:
			return &(outputs_ctx._L8_5);
		case 155:
			return &(outputs_ctx._L9_5);
		case 156:
			return &(outputs_ctx._L12_5);
		case 157:
			return &(outputs_ctx.Count_4);
		case 158:
			return &(outputs_ctx.rippleClock_4);
		case 159:
			return &(outputs_ctx.Input1_4);
		case 160:
			return &(outputs_ctx.modulo_4);
		case 161:
			return &(outputs_ctx.inc_4);
		case 162:
			return &(outputs_ctx._L2_4);
		case 163:
			return &(outputs_ctx._L1_4);
		case 164:
			return &(outputs_ctx._L3_4);
		case 165:
			return &(outputs_ctx._L4_4);
		case 166:
			return &(outputs_ctx._L5_4);
		case 167:
			return &(outputs_ctx._L8_4);
		case 168:
			return &(outputs_ctx._L9_4);
		case 169:
			return &(outputs_ctx._L12_4);
		case 170:
			return &(outputs_ctx.Count_9);
		case 171:
			return &(outputs_ctx.rippleClock_9);
		case 172:
			return &(outputs_ctx.Input1_9);
		case 173:
			return &(outputs_ctx.modulo_9);
		case 174:
			return &(outputs_ctx.inc_9);
		case 175:
			return &(outputs_ctx._L2_9);
		case 176:
			return &(outputs_ctx._L1_9);
		case 177:
			return &(outputs_ctx._L3_9);
		case 178:
			return &(outputs_ctx._L4_9);
		case 179:
			return &(outputs_ctx._L5_9);
		case 180:
			return &(outputs_ctx._L8_9);
		case 181:
			return &(outputs_ctx._L9_9);
		case 182:
			return &(outputs_ctx._L12_9);
		case 183:
			return &(outputs_ctx.Count_8);
		case 184:
			return &(outputs_ctx.rippleClock_8);
		case 185:
			return &(outputs_ctx.Input1_8);
		case 186:
			return &(outputs_ctx.modulo_8);
		case 187:
			return &(outputs_ctx.inc_8);
		case 188:
			return &(outputs_ctx._L2_8);
		case 189:
			return &(outputs_ctx._L1_8);
		case 190:
			return &(outputs_ctx._L3_8);
		case 191:
			return &(outputs_ctx._L4_8);
		case 192:
			return &(outputs_ctx._L5_8);
		case 193:
			return &(outputs_ctx._L8_8);
		case 194:
			return &(outputs_ctx._L9_8);
		case 195:
			return &(outputs_ctx._L12_8);
		case 196:
			return &(outputs_ctx.Count_7);
		case 197:
			return &(outputs_ctx.rippleClock_7);
		case 198:
			return &(outputs_ctx.Input1_7);
		case 199:
			return &(outputs_ctx.modulo_7);
		case 200:
			return &(outputs_ctx.inc_7);
		case 201:
			return &(outputs_ctx._L2_7);
		case 202:
			return &(outputs_ctx._L1_7);
		case 203:
			return &(outputs_ctx._L3_7);
		case 204:
			return &(outputs_ctx._L4_7);
		case 205:
			return &(outputs_ctx._L5_7);
		case 206:
			return &(outputs_ctx._L8_7);
		case 207:
			return &(outputs_ctx._L9_7);
		case 208:
			return &(outputs_ctx._L12_7);
		case 209:
			return &(outputs_ctx.Probe1_OpPhases_NormalPhase);
		case 210:
			return &(outputs_ctx._L8_OpPhases_NormalPhase);
		case 211:
			return &(outputs_ctx._L7_OpPhases_NormalPhase);
		case 212:
			return &(outputs_ctx._L6_OpPhases_NormalPhase);
		case 213:
			return &(outputs_ctx._L5_OpPhases_NormalPhase);
		case 214:
			return &(outputs_ctx._L12_OpPhases_NormalPhase);
		case 215:
			return &(outputs_ctx._L11_OpPhases_NormalPhase);
		case 216:
			return &(outputs_ctx._L10_OpPhases_NormalPhase);
		case 217:
			return &(outputs_ctx._L13_OpPhases_NormalPhase);
		case 218:
			return &(outputs_ctx._L18_OpPhases_NormalPhase);
		case 219:
			return &(outputs_ctx._L19_OpPhases_NormalPhase);
		case 220:
			return &(outputs_ctx._L21_OpPhases_NormalPhase);
		case 221:
			return &(outputs_ctx._L24_OpPhases_NormalPhase);
		case 222:
			return &(outputs_ctx._L40_OpPhases_NormalPhase);
		case 223:
			return &(outputs_ctx._L42_OpPhases_NormalPhase);
		case 224:
			return &(outputs_ctx._L41_OpPhases_NormalPhase);
		case 225:
			return &(outputs_ctx._L61_OpPhases_NormalPhase);
		case 226:
			return &(outputs_ctx._L60_OpPhases_NormalPhase);
		case 227:
			return &(outputs_ctx._L59_OpPhases_NormalPhase);
		case 228:
			return &(outputs_ctx._L58_OpPhases_NormalPhase);
		case 229:
			return &(outputs_ctx._L57_OpPhases_NormalPhase);
		case 230:
			return &(outputs_ctx._L56_OpPhases_NormalPhase);
		case 231:
			return &(outputs_ctx._L66_OpPhases_NormalPhase);
		case 232:
			return &(outputs_ctx._L89_OpPhases_NormalPhase);
		case 233:
			return &(outputs_ctx._L90_OpPhases_NormalPhase);
		case 234:
			return &(outputs_ctx._L87_OpPhases_NormalPhase);
		case 235:
			return &(outputs_ctx._L88_OpPhases_NormalPhase);
		case 236:
			return &(outputs_ctx._L86_OpPhases_NormalPhase);
		case 237:
			return &(outputs_ctx._L83_OpPhases_NormalPhase);
		case 238:
			return &(outputs_ctx._L84_OpPhases_NormalPhase);
		case 239:
			return &(outputs_ctx._L82_OpPhases_NormalPhase);
		case 240:
			return &(outputs_ctx._L81_OpPhases_NormalPhase);
		case 241:
			return &(outputs_ctx._L80_OpPhases_NormalPhase);
		case 242:
			return &(outputs_ctx._L79_OpPhases_NormalPhase);
		case 243:
			return &(outputs_ctx._L94_OpPhases_NormalPhase);
		case 244:
			return &(outputs_ctx._L95_OpPhases_NormalPhase);
		case 245:
			return &(outputs_ctx._L96_OpPhases_NormalPhase);
		case 246:
			return &(outputs_ctx._L97_OpPhases_NormalPhase);
		case 247:
			return &(outputs_ctx._L98_OpPhases_NormalPhase);
		case 248:
			return &(outputs_ctx._L114_OpPhases_NormalPhase);
		case 249:
			return &(outputs_ctx._L113_OpPhases_NormalPhase);
		case 250:
			return &(outputs_ctx._L112_OpPhases_NormalPhase);
		case 251:
			return &(outputs_ctx._L111_OpPhases_NormalPhase);
		case 252:
			return &(outputs_ctx._L109_OpPhases_NormalPhase);
		case 253:
			return &(outputs_ctx._L110_OpPhases_NormalPhase);
		case 254:
			return &(outputs_ctx._L108_OpPhases_NormalPhase);
		case 255:
			return &(outputs_ctx._L107_OpPhases_NormalPhase);
		case 256:
			return &(outputs_ctx._L105_OpPhases_NormalPhase);
		case 257:
			return &(outputs_ctx._L106_OpPhases_NormalPhase);
		case 258:
			return &(outputs_ctx._L104_OpPhases_NormalPhase);
		case 259:
			return &(outputs_ctx._L102_OpPhases_NormalPhase);
		case 260:
			return &(outputs_ctx._L103_OpPhases_NormalPhase);
		case 261:
			return &(outputs_ctx._L101_OpPhases_NormalPhase);
		case 262:
			return &(outputs_ctx._L100_OpPhases_NormalPhase);
		case 263:
			return &(outputs_ctx._L99_OpPhases_NormalPhase);
		case 264:
			return &(outputs_ctx.color);
		case 265:
			return &(outputs_ctx.color_2);
		case 266:
			return &(outputs_ctx.color3);
		case 267:
			return &(outputs_ctx.color4);
		case 268:
			return &(outputs_ctx.AttitudeVisibleLocal);
		case 269:
			return &(outputs_ctx.NormalPhaseVisibleLocal);
		case 270:
			return &(outputs_ctx.AtAcquisition);
		case 271:
			return &(outputs_ctx.GyroscopesLocal);
		case 272:
			return &(outputs_ctx.AccelerometersLocal);
		case 273:
			return &(outputs_ctx.PowerLocal);
		case 274:
			return &(outputs_ctx.SunSensorLocal);
		case 275:
			return &(outputs_ctx.ReactionwheelsLocal);
		case 276:
			return &(outputs_ctx.MagneticTorquersLocal);
		case 277:
			return &(outputs_ctx.AcRdValueLocal);
		case 278:
			return &(outputs_ctx.AtNormalPhase);
		case 279:
			return &(outputs_ctx.color_5);
		case 280:
			return &(outputs_ctx.LaunchVisibleLocal);
		case 281:
			return &(outputs_ctx.FuelMeterLocal);
		case 282:
			return &(outputs_ctx.LatitudeLocal);
		case 283:
			return &(outputs_ctx.SpinRdLocal);
		case 284:
			return &(outputs_ctx.SpinTgLocal);
		case 285:
			return &(outputs_ctx.angleleftlocal);
		case 286:
			return &(outputs_ctx.anglerightlocal);
		case 287:
			return &(outputs_ctx._L7);
		case 288:
			return &(outputs_ctx._L8);
		case 289:
			return &(outputs_ctx._L9);
		case 290:
			return &(outputs_ctx._L11);
		case 291:
			return &(outputs_ctx._L12);
		case 292:
			return &(outputs_ctx._L13);
		case 293:
			return &(outputs_ctx._L14);
		case 294:
			return &(outputs_ctx._L15);
		case 295:
			return &(outputs_ctx._L16);
		case 296:
			return &(outputs_ctx._L19);
		case 297:
			return &(outputs_ctx._L20);
		case 298:
			return &(outputs_ctx._L22);
		case 299:
			return &(outputs_ctx._L31);
		case 300:
			return &(outputs_ctx._L32);
		case 301:
			return &(outputs_ctx._L34);
		case 302:
			return &(outputs_ctx._L36);
		case 303:
			return &(outputs_ctx._L38);
		case 304:
			return &(outputs_ctx._L41);
		case 305:
			return &(outputs_ctx._L42);
		case 306:
			return &(outputs_ctx._L43);
		case 307:
			return &(outputs_ctx._L44);
		case 308:
			return &(outputs_ctx._L45);
		case 309:
			return &(outputs_ctx._L46);
		case 310:
			return &(outputs_ctx._L51);
		case 311:
			return &(outputs_ctx._L52);
		case 312:
			return &(outputs_ctx._L55);
		case 313:
			return &(outputs_ctx._L56);
		case 314:
			return &(outputs_ctx._L63);
		case 315:
			return &(outputs_ctx._L65);
		case 316:
			return &(outputs_ctx._L66);
		case 317:
			return &(outputs_ctx._L67);
		case 318:
			return &(outputs_ctx._L68);
		case 319:
			return &(outputs_ctx._L69);
		case 320:
			return &(outputs_ctx._L70);
		case 321:
			return &(outputs_ctx._L71);
		case 322:
			return &(outputs_ctx._L72);
		case 323:
			return &(outputs_ctx._L73);
		case 324:
			return &(outputs_ctx._L74);
		case 325:
			return &(outputs_ctx._L75);
		case 326:
			return &(outputs_ctx._L76);
		case 327:
			return &(outputs_ctx._L77);
		case 328:
			return &(outputs_ctx.StartLaunchPhase);
		case 329:
			return &(outputs_ctx.Layer1Active);
		case 330:
			return &(outputs_ctx.Layer1Visible);
		case 331:
			return &(outputs_ctx.Emit2CDS);
		case 332:
			return &(outputs_ctx.ColorIndex);
		case 333:
			return &(outputs_ctx.ColorIndex2);
		case 334:
			return &(outputs_ctx.ColorIndex3);
		case 335:
			return &(outputs_ctx.ColorIndex4);
		case 336:
			return &(outputs_ctx.GroundVisible);
		case 337:
			return &(outputs_ctx.AttitudeVisible);
		case 338:
			return &(outputs_ctx.NormalPhaseVisible);
		case 339:
			return &(outputs_ctx.AcRdValue);
		case 340:
			return &(outputs_ctx.ColorIndex5);
		case 341:
			return &(outputs_ctx.LaunchVisible);
		case 342:
			return &(outputs_ctx.FuelMeter);
		case 343:
			return &(outputs_ctx.FuelMeterGraphic);
		case 344:
			return &(outputs_ctx.SAT_Longitude_Value);
		case 345:
			return &(outputs_ctx.SAT_Latitude_Value);
		case 346:
			return &(outputs_ctx.SpinRd);
		case 347:
			return &(outputs_ctx.SpinTg);
		case 348:
			return &(outputs_ctx.angleright);
		case 349:
			return &(outputs_ctx.angleleft);
		case 350:
			return &(outputs_ctx.SAT_Longitude_Min_Value);
		case 351:
			return &(outputs_ctx.SAT_Longitude_Sec_Value);
		case 352:
			return &(outputs_ctx.SAT_Latitude_Min_Value);
		case 353:
			return &(outputs_ctx.SAT_Latitude_Sec_Value);
		case 354:
			return &(inputs_ctx.Power);
		case 355:
			return &(inputs_ctx.Telemetry);
		case 356:
			return &(inputs_ctx.AttitudeReference);
		case 357:
			return &(inputs_ctx.takePict);
		case 358:
			return &(inputs_ctx.picLocation);
		case 359:
			return &(inputs_ctx.PassarFaseBtn);
		case 360:
			return &(inputs_ctx.Accelerometers);
		case 361:
			return &(inputs_ctx.SunSensor);
		case 362:
			return &(inputs_ctx.Reactionwheels);
		case 363:
			return &(inputs_ctx.MagneticTorquers);
		case 364:
			return &(inputs_ctx.upDateSw);
		case 365:
			return &(inputs_ctx.Gyroscopes);
		case 366:
			return &(inputs_ctx.Input13);
		case 367:
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
