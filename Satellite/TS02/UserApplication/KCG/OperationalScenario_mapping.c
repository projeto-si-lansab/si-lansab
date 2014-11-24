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
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_kcg_real_Utils, 52, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_real_Utils, 53, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L54", &_SCSIM_kcg_real_Utils, 54, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_kcg_real_Utils, 55, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L_kcg_clock", &_SCSIM_kcg_bool_Utils, 56, valid, 13, &_SCSIM_ClockActive_SSM_st_Ground_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "2", &_SCSIM_SSM_TR_Ground_2_OpPhases_Utils, 57);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPushStrongTransition(pSimulator, "1", &_SCSIM_SSM_TR_Ground_1_OpPhases_Utils, 58);
	pSimulator->m_pfnPopStrongTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "Launch", &_SCSIM_SSM_st_Launch_OpPhases_Utils, 13);
	pSimulator->m_pfnAddLocal(pSimulator, "AtAcquisition", &_SCSIM_kcg_bool_Utils, 59, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 60, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 61, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_int_Utils, 62, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 63, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_bool_Utils, 64, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_bool_Utils, 65, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 66, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_bool_Utils, 67, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L29", &_SCSIM_kcg_real_Utils, 68, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_int_Utils, 69, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 70, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_real_Utils, 71, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_real_Utils, 72, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_real_Utils, 73, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_kcg_real_Utils, 74, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L37", &_SCSIM_kcg_real_Utils, 75, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L40", &_SCSIM_kcg_real_Utils, 76, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L39", &_SCSIM_kcg_real_Utils, 77, valid, 13, &_SCSIM_ClockActive_SSM_st_Launch_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "1", &_SCSIM_SSM_TR_Launch_1_OpPhases_Utils, 57);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "AttitudeAcquisition", &_SCSIM_SSM_st_AttitudeAcquisition_OpPhases_Utils, 13);
	pSimulator->m_pfnAddLocal(pSimulator, "_L130", &_SCSIM_kcg_real_Utils, 78, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L142", &_SCSIM_kcg_real_Utils, 79, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L190", &_SCSIM_kcg_real_Utils, 80, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "AtNormalPhaseLocal", &_SCSIM_kcg_bool_Utils, 81, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "LaunchTime", &_SCSIM_kcg_real_Utils, 82, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "ClockTime", &_SCSIM_kcg_real_Utils, 83, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 84, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 85, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 86, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 87, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 88, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L17", &_SCSIM_kcg_bool_Utils, 89, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 90, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_int_Utils, 91, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_bool_Utils, 92, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_kcg_real_Utils, 93, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_kcg_real_Utils, 94, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L125", &_SCSIM_kcg_real_Utils, 95, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L124", &_SCSIM_kcg_real_Utils, 96, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L133", &_SCSIM_kcg_real_Utils, 97, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L135", &_SCSIM_kcg_real_Utils, 98, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L136", &_SCSIM_kcg_real_Utils, 99, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L137", &_SCSIM_kcg_real_Utils, 100, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L138", &_SCSIM_kcg_real_Utils, 101, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L140", &_SCSIM_kcg_real_Utils, 102, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L191", &_SCSIM_kcg_bool_Utils, 103, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L189", &_SCSIM_kcg_real_Utils, 104, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L188", &_SCSIM_kcg_real_Utils, 105, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L187", &_SCSIM_kcg_bool_Utils, 106, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L186", &_SCSIM_kcg_real_Utils, 107, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L185", &_SCSIM_kcg_real_Utils, 108, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L184", &_SCSIM_kcg_real_Utils, 109, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L182", &_SCSIM_kcg_real_Utils, 110, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L181", &_SCSIM_kcg_real_Utils, 111, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L180", &_SCSIM_kcg_real_Utils, 112, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L179", &_SCSIM_kcg_real_Utils, 113, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L178", &_SCSIM_kcg_real_Utils, 114, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L177", &_SCSIM_kcg_real_Utils, 115, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L176", &_SCSIM_kcg_bool_Utils, 116, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L175", &_SCSIM_kcg_real_Utils, 117, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L174", &_SCSIM_kcg_bool_Utils, 118, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L173", &_SCSIM_kcg_real_Utils, 119, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L172", &_SCSIM_kcg_real_Utils, 120, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L192", &_SCSIM_kcg_bool_Utils, 121, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L193", &_SCSIM_kcg_real_Utils, 122, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L194", &_SCSIM_kcg_real_Utils, 123, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L241", &_SCSIM_kcg_real_Utils, 124, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L240", &_SCSIM_kcg_bool_Utils, 125, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L239", &_SCSIM_kcg_bool_Utils, 126, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L238", &_SCSIM_kcg_real_Utils, 127, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L236", &_SCSIM_kcg_real_Utils, 128, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L235", &_SCSIM_kcg_real_Utils, 129, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L234", &_SCSIM_kcg_real_Utils, 130, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L233", &_SCSIM_kcg_bool_Utils, 131, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L231", &_SCSIM_kcg_real_Utils, 132, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L230", &_SCSIM_kcg_real_Utils, 133, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L228", &_SCSIM_kcg_bool_Utils, 134, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L227", &_SCSIM_kcg_real_Utils, 135, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L226", &_SCSIM_kcg_real_Utils, 136, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L223", &_SCSIM_kcg_real_Utils, 137, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L222", &_SCSIM_kcg_real_Utils, 138, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L255", &_SCSIM_kcg_real_Utils, 139, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L254", &_SCSIM_kcg_real_Utils, 140, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L259", &_SCSIM_kcg_real_Utils, 141, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L260", &_SCSIM_kcg_real_Utils, 142, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L261", &_SCSIM_kcg_real_Utils, 143, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L262", &_SCSIM_kcg_real_Utils, 144, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L263", &_SCSIM_kcg_real_Utils, 145, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L264", &_SCSIM_kcg_real_Utils, 146, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L265", &_SCSIM_kcg_real_Utils, 147, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L266", &_SCSIM_kcg_real_Utils, 148, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L271", &_SCSIM_kcg_real_Utils, 149, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L270", &_SCSIM_kcg_real_Utils, 150, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L269", &_SCSIM_kcg_real_Utils, 151, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L268", &_SCSIM_kcg_real_Utils, 152, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L267", &_SCSIM_kcg_real_Utils, 153, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L273", &_SCSIM_kcg_real_Utils, 154, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L283", &_SCSIM_kcg_real_Utils, 155, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L282", &_SCSIM_kcg_real_Utils, 156, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L281", &_SCSIM_kcg_real_Utils, 157, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L280", &_SCSIM_kcg_real_Utils, 158, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L279", &_SCSIM_kcg_real_Utils, 159, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L284", &_SCSIM_kcg_real_Utils, 160, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L290", &_SCSIM_kcg_real_Utils, 161, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L289", &_SCSIM_kcg_real_Utils, 162, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L288", &_SCSIM_kcg_real_Utils, 163, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L287", &_SCSIM_kcg_real_Utils, 164, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L286", &_SCSIM_kcg_real_Utils, 165, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L285", &_SCSIM_kcg_real_Utils, 166, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L295", &_SCSIM_kcg_real_Utils, 167, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L294", &_SCSIM_kcg_real_Utils, 168, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L293", &_SCSIM_kcg_real_Utils, 169, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L292", &_SCSIM_kcg_real_Utils, 170, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L291", &_SCSIM_kcg_real_Utils, 171, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L297", &_SCSIM_kcg_real_Utils, 172, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L298", &_SCSIM_kcg_real_Utils, 173, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L299", &_SCSIM_kcg_real_Utils, 174, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L300", &_SCSIM_kcg_real_Utils, 175, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L301", &_SCSIM_kcg_bool_Utils, 176, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L302", &_SCSIM_kcg_bool_Utils, 177, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L303", &_SCSIM_kcg_real_Utils, 178, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L304", &_SCSIM_kcg_real_Utils, 179, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L305", &_SCSIM_kcg_real_Utils, 180, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L306", &_SCSIM_kcg_real_Utils, 181, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L308", &_SCSIM_kcg_real_Utils, 182, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L309", &_SCSIM_kcg_real_Utils, 183, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L310", &_SCSIM_kcg_real_Utils, 184, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L313", &_SCSIM_kcg_real_Utils, 185, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L312", &_SCSIM_kcg_real_Utils, 186, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L311", &_SCSIM_kcg_real_Utils, 187, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L315", &_SCSIM_kcg_bool_Utils, 188, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L314", &_SCSIM_kcg_real_Utils, 189, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L316", &_SCSIM_kcg_real_Utils, 190, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L317", &_SCSIM_kcg_real_Utils, 191, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L323", &_SCSIM_kcg_real_Utils, 192, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L321", &_SCSIM_kcg_real_Utils, 193, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L320", &_SCSIM_kcg_real_Utils, 194, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L319", &_SCSIM_kcg_real_Utils, 195, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L318", &_SCSIM_kcg_real_Utils, 196, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L324", &_SCSIM_kcg_real_Utils, 197, valid, 13, &_SCSIM_ClockActive_SSM_st_AttitudeAcquisition_OpPhases);
	pSimulator->m_pfnPushWeakTransition(pSimulator, "1", &_SCSIM_SSM_TR_AttitudeAcquisition_1_OpPhases_Utils, 57);
	pSimulator->m_pfnPopWeakTransition(pSimulator);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPushState(pSimulator, "NormalPhase", &_SCSIM_SSM_st_NormalPhase_OpPhases_Utils, 13);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_int_Utils, 198, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_int_Utils, 199, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L6", &_SCSIM_kcg_int_Utils, 200, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L5", &_SCSIM_kcg_int_Utils, 201, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_bool_Utils, 202, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 203, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L10", &_SCSIM_kcg_bool_Utils, 204, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_real_Utils, 205, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L18", &_SCSIM_kcg_int_Utils, 206, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 207, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L21", &_SCSIM_kcg_real_Utils, 208, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_real_Utils, 209, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L30", &_SCSIM_kcg_real_Utils, 210, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L28", &_SCSIM_kcg_real_Utils, 211, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L33", &_SCSIM_kcg_bool_Utils, 212, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L35", &_SCSIM_kcg_real_Utils, 213, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_real_Utils, 214, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_kcg_real_Utils, 215, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_kcg_real_Utils, 216, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_kcg_real_Utils, 217, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_kcg_real_Utils, 218, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_kcg_real_Utils, 219, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_int_Utils, 220, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_kcg_real_Utils, 221, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L54", &_SCSIM_kcg_real_Utils, 222, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L55", &_SCSIM_kcg_real_Utils, 223, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L57", &_SCSIM_kcg_real_Utils, 224, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L56", &_SCSIM_kcg_real_Utils, 225, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L59", &_SCSIM_kcg_real_Utils, 226, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L60", &_SCSIM_kcg_real_Utils, 227, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L61", &_SCSIM_kcg_real_Utils, 228, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L62", &_SCSIM_kcg_int_Utils, 229, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L63", &_SCSIM_kcg_int_Utils, 230, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L64", &_SCSIM_kcg_int_Utils, 231, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L65", &_SCSIM_kcg_int_Utils, 232, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L72", &_SCSIM_kcg_real_Utils, 233, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L69", &_SCSIM_kcg_real_Utils, 234, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L68", &_SCSIM_kcg_real_Utils, 235, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L67", &_SCSIM_kcg_real_Utils, 236, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L66", &_SCSIM_kcg_real_Utils, 237, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L83", &_SCSIM_kcg_real_Utils, 238, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L82", &_SCSIM_kcg_real_Utils, 239, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L81", &_SCSIM_kcg_real_Utils, 240, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L79", &_SCSIM_kcg_real_Utils, 241, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L78", &_SCSIM_kcg_real_Utils, 242, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L77", &_SCSIM_kcg_real_Utils, 243, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnAddLocal(pSimulator, "_L74", &_SCSIM_kcg_real_Utils, 244, valid, 13, &_SCSIM_ClockActive_SSM_st_NormalPhase_OpPhases);
	pSimulator->m_pfnPopState(pSimulator);
	pSimulator->m_pfnPopStateMachine(pSimulator);
	pSimulator->m_pfnAddLocal(pSimulator, "color", &_SCSIM_kcg_int_Utils, 245, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color_2", &_SCSIM_kcg_int_Utils, 246, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color3", &_SCSIM_kcg_int_Utils, 247, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color4", &_SCSIM_kcg_int_Utils, 248, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AttitudeVisibleLocal", &_SCSIM_kcg_bool_Utils, 249, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "NormalPhaseVisibleLocal", &_SCSIM_kcg_bool_Utils, 250, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AtAcquisition", &_SCSIM_kcg_bool_Utils, 251, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "GyroscopesLocal", &_SCSIM_kcg_bool_Utils, 252, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AccelerometersLocal", &_SCSIM_kcg_bool_Utils, 253, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "PowerLocal", &_SCSIM_kcg_bool_Utils, 254, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SunSensorLocal", &_SCSIM_kcg_bool_Utils, 255, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "ReactionwheelsLocal", &_SCSIM_kcg_bool_Utils, 256, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "MagneticTorquersLocal", &_SCSIM_kcg_bool_Utils, 257, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AltitudeValueLocal", &_SCSIM_kcg_real_Utils, 258, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "AtNormalPhase", &_SCSIM_kcg_bool_Utils, 259, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "color_5", &_SCSIM_kcg_int_Utils, 260, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LaunchVisibleLocal", &_SCSIM_kcg_bool_Utils, 261, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "FuelMeterLocal", &_SCSIM_kcg_real_Utils, 262, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LongitudeLocal", &_SCSIM_kcg_real_Utils, 263, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "LatitudeLocal", &_SCSIM_kcg_real_Utils, 264, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SpinRdLocal", &_SCSIM_kcg_real_Utils, 265, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "SpinTgLocal", &_SCSIM_kcg_real_Utils, 266, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "TorqueRdLocal", &_SCSIM_kcg_real_Utils, 267, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "TorqueTgLocal", &_SCSIM_kcg_real_Utils, 268, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L7", &_SCSIM_kcg_bool_Utils, 269, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L8", &_SCSIM_kcg_bool_Utils, 270, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L9", &_SCSIM_kcg_bool_Utils, 271, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L11", &_SCSIM_kcg_bool_Utils, 272, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L12", &_SCSIM_kcg_int_Utils, 273, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L13", &_SCSIM_kcg_int_Utils, 274, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L14", &_SCSIM_kcg_int_Utils, 275, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L15", &_SCSIM_kcg_int_Utils, 276, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L16", &_SCSIM_kcg_bool_Utils, 277, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L19", &_SCSIM_kcg_bool_Utils, 278, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L20", &_SCSIM_kcg_bool_Utils, 279, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L22", &_SCSIM_kcg_bool_Utils, 280, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L31", &_SCSIM_kcg_bool_Utils, 281, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L32", &_SCSIM_kcg_bool_Utils, 282, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L34", &_SCSIM_kcg_bool_Utils, 283, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L36", &_SCSIM_kcg_bool_Utils, 284, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L38", &_SCSIM_kcg_real_Utils, 285, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L41", &_SCSIM_kcg_int_Utils, 286, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L42", &_SCSIM_kcg_bool_Utils, 287, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L43", &_SCSIM_kcg_real_Utils, 288, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L44", &_SCSIM_kcg_real_Utils, 289, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L45", &_SCSIM_kcg_real_Utils, 290, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L46", &_SCSIM_kcg_int_Utils, 291, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L49", &_SCSIM_kcg_real_Utils, 292, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L50", &_SCSIM_kcg_real_Utils, 293, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L51", &_SCSIM_kcg_real_Utils, 294, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L52", &_SCSIM_kcg_real_Utils, 295, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L53", &_SCSIM_kcg_real_Utils, 296, valid, 0, 0);
	pSimulator->m_pfnAddLocal(pSimulator, "_L54", &_SCSIM_kcg_real_Utils, 297, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "StartLaunchPhase", &_SCSIM_kcg_bool_Utils, 298, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Active", &_SCSIM_kcg_bool_Utils, 299, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Layer1Visible", &_SCSIM_kcg_bool_Utils, 300, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "Emit2CDS", &_SCSIM_kcg_bool_Utils, 301, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex", &_SCSIM_kcg_int_Utils, 302, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex2", &_SCSIM_kcg_int_Utils, 303, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex3", &_SCSIM_kcg_int_Utils, 304, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex4", &_SCSIM_kcg_int_Utils, 305, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "GroundVisible", &_SCSIM_kcg_bool_Utils, 306, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "AttitudeVisible", &_SCSIM_kcg_bool_Utils, 307, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "NormalPhaseVisible", &_SCSIM_kcg_bool_Utils, 308, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "AltitudeValue", &_SCSIM_kcg_real_Utils, 309, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "ColorIndex5", &_SCSIM_kcg_int_Utils, 310, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "LaunchVisible", &_SCSIM_kcg_bool_Utils, 311, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "FuelMeter", &_SCSIM_kcg_real_Utils, 312, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "FuelMeterGraphic", &_SCSIM_kcg_int_Utils, 313, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Longitude_Value", &_SCSIM_kcg_real_Utils, 314, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SAT_Latitude_Value", &_SCSIM_kcg_real_Utils, 315, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpinRd", &_SCSIM_kcg_real_Utils, 316, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "SpinTg", &_SCSIM_kcg_real_Utils, 317, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TorqueRd", &_SCSIM_kcg_real_Utils, 318, valid, 0, 0);
	pSimulator->m_pfnAddOutput(pSimulator, "TorqueTg", &_SCSIM_kcg_real_Utils, 319, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Power", &_SCSIM_kcg_bool_Utils, 320, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Telemetry", &_SCSIM_kcg_int_Utils, 321, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "AttitudeReference", &_SCSIM_kcg_int_Utils, 322, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "takePict", &_SCSIM_kcg_bool_Utils, 323, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "picLocation", &_SCSIM_kcg_real_Utils, 324, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "PassarFaseBtn", &_SCSIM_kcg_bool_Utils, 325, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Accelerometers", &_SCSIM_kcg_bool_Utils, 326, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "SunSensor", &_SCSIM_kcg_bool_Utils, 327, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Reactionwheels", &_SCSIM_kcg_bool_Utils, 328, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "MagneticTorquers", &_SCSIM_kcg_bool_Utils, 329, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "upDateSw", &_SCSIM_kcg_bool_Utils, 330, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Gyroscopes", &_SCSIM_kcg_bool_Utils, 331, valid, 0, 0);
	pSimulator->m_pfnAddInput(pSimulator, "Input13", &_SCSIM_kcg_bool_Utils, 332, valid, 0, 0);
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
			return &(outputs_ctx._L49_OpPhases_Ground);
		case 53:
			return &(outputs_ctx._L50_OpPhases_Ground);
		case 54:
			return &(outputs_ctx._L54_OpPhases_Ground);
		case 55:
			return &(outputs_ctx._L53_OpPhases_Ground);
		case 56:
			return &(outputs_ctx.Ground_weakb_clock_OpPhases);
		case 57:
			return &(outputs_ctx.OpPhases_fired);
		case 58:
			return &(outputs_ctx.OpPhases_fired_strong);
		case 59:
			return &(outputs_ctx.AtAcquisition_OpPhases_Launch);
		case 60:
			return &(outputs_ctx._L5_OpPhases_Launch);
		case 61:
			return &(outputs_ctx._L6_OpPhases_Launch);
		case 62:
			return &(outputs_ctx._L10_OpPhases_Launch);
		case 63:
			return &(outputs_ctx._L7_OpPhases_Launch);
		case 64:
			return &(outputs_ctx._L14_OpPhases_Launch);
		case 65:
			return &(outputs_ctx._L13_OpPhases_Launch);
		case 66:
			return &(outputs_ctx._L12_OpPhases_Launch);
		case 67:
			return &(outputs_ctx._L28_OpPhases_Launch);
		case 68:
			return &(outputs_ctx._L29_OpPhases_Launch);
		case 69:
			return &(outputs_ctx._L31_OpPhases_Launch);
		case 70:
			return &(outputs_ctx._L33_OpPhases_Launch);
		case 71:
			return &(outputs_ctx._L34_OpPhases_Launch);
		case 72:
			return &(outputs_ctx._L36_OpPhases_Launch);
		case 73:
			return &(outputs_ctx._L35_OpPhases_Launch);
		case 74:
			return &(outputs_ctx._L38_OpPhases_Launch);
		case 75:
			return &(outputs_ctx._L37_OpPhases_Launch);
		case 76:
			return &(outputs_ctx._L40_OpPhases_Launch);
		case 77:
			return &(outputs_ctx._L39_OpPhases_Launch);
		case 78:
			return &(outputs_ctx._L130_OpPhases_AttitudeAcquisition);
		case 79:
			return &(outputs_ctx._L142_OpPhases_AttitudeAcquisition);
		case 80:
			return &(outputs_ctx._L190_OpPhases_AttitudeAcquisition);
		case 81:
			return &(outputs_ctx.AtNormalPhaseLocal_OpPhases_AttitudeAcquisition);
		case 82:
			return &(outputs_ctx.LaunchTime_OpPhases_AttitudeAcquisition);
		case 83:
			return &(outputs_ctx.ClockTime_OpPhases_AttitudeAcquisition);
		case 84:
			return &(outputs_ctx._L15_OpPhases_AttitudeAcquisition);
		case 85:
			return &(outputs_ctx._L14_OpPhases_AttitudeAcquisition);
		case 86:
			return &(outputs_ctx._L13_OpPhases_AttitudeAcquisition);
		case 87:
			return &(outputs_ctx._L12_OpPhases_AttitudeAcquisition);
		case 88:
			return &(outputs_ctx._L19_OpPhases_AttitudeAcquisition);
		case 89:
			return &(outputs_ctx._L17_OpPhases_AttitudeAcquisition);
		case 90:
			return &(outputs_ctx._L16_OpPhases_AttitudeAcquisition);
		case 91:
			return &(outputs_ctx._L28_OpPhases_AttitudeAcquisition);
		case 92:
			return &(outputs_ctx._L30_OpPhases_AttitudeAcquisition);
		case 93:
			return &(outputs_ctx._L43_OpPhases_AttitudeAcquisition);
		case 94:
			return &(outputs_ctx._L53_OpPhases_AttitudeAcquisition);
		case 95:
			return &(outputs_ctx._L125_OpPhases_AttitudeAcquisition);
		case 96:
			return &(outputs_ctx._L124_OpPhases_AttitudeAcquisition);
		case 97:
			return &(outputs_ctx._L133_OpPhases_AttitudeAcquisition);
		case 98:
			return &(outputs_ctx._L135_OpPhases_AttitudeAcquisition);
		case 99:
			return &(outputs_ctx._L136_OpPhases_AttitudeAcquisition);
		case 100:
			return &(outputs_ctx._L137_OpPhases_AttitudeAcquisition);
		case 101:
			return &(outputs_ctx._L138_OpPhases_AttitudeAcquisition);
		case 102:
			return &(outputs_ctx._L140_OpPhases_AttitudeAcquisition);
		case 103:
			return &(outputs_ctx._L191_OpPhases_AttitudeAcquisition);
		case 104:
			return &(outputs_ctx._L189_OpPhases_AttitudeAcquisition);
		case 105:
			return &(outputs_ctx._L188_OpPhases_AttitudeAcquisition);
		case 106:
			return &(outputs_ctx._L187_OpPhases_AttitudeAcquisition);
		case 107:
			return &(outputs_ctx._L186_OpPhases_AttitudeAcquisition);
		case 108:
			return &(outputs_ctx._L185_OpPhases_AttitudeAcquisition);
		case 109:
			return &(outputs_ctx._L184_OpPhases_AttitudeAcquisition);
		case 110:
			return &(outputs_ctx._L182_OpPhases_AttitudeAcquisition);
		case 111:
			return &(outputs_ctx._L181_OpPhases_AttitudeAcquisition);
		case 112:
			return &(outputs_ctx._L180_OpPhases_AttitudeAcquisition);
		case 113:
			return &(outputs_ctx._L179_OpPhases_AttitudeAcquisition);
		case 114:
			return &(outputs_ctx._L178_OpPhases_AttitudeAcquisition);
		case 115:
			return &(outputs_ctx._L177_OpPhases_AttitudeAcquisition);
		case 116:
			return &(outputs_ctx._L176_OpPhases_AttitudeAcquisition);
		case 117:
			return &(outputs_ctx._L175_OpPhases_AttitudeAcquisition);
		case 118:
			return &(outputs_ctx._L174_OpPhases_AttitudeAcquisition);
		case 119:
			return &(outputs_ctx._L173_OpPhases_AttitudeAcquisition);
		case 120:
			return &(outputs_ctx._L172_OpPhases_AttitudeAcquisition);
		case 121:
			return &(outputs_ctx._L192_OpPhases_AttitudeAcquisition);
		case 122:
			return &(outputs_ctx._L193_OpPhases_AttitudeAcquisition);
		case 123:
			return &(outputs_ctx._L194_OpPhases_AttitudeAcquisition);
		case 124:
			return &(outputs_ctx._L241_OpPhases_AttitudeAcquisition);
		case 125:
			return &(outputs_ctx._L240_OpPhases_AttitudeAcquisition);
		case 126:
			return &(outputs_ctx._L239_OpPhases_AttitudeAcquisition);
		case 127:
			return &(outputs_ctx._L238_OpPhases_AttitudeAcquisition);
		case 128:
			return &(outputs_ctx._L236_OpPhases_AttitudeAcquisition);
		case 129:
			return &(outputs_ctx._L235_OpPhases_AttitudeAcquisition);
		case 130:
			return &(outputs_ctx._L234_OpPhases_AttitudeAcquisition);
		case 131:
			return &(outputs_ctx._L233_OpPhases_AttitudeAcquisition);
		case 132:
			return &(outputs_ctx._L231_OpPhases_AttitudeAcquisition);
		case 133:
			return &(outputs_ctx._L230_OpPhases_AttitudeAcquisition);
		case 134:
			return &(outputs_ctx._L228_OpPhases_AttitudeAcquisition);
		case 135:
			return &(outputs_ctx._L227_OpPhases_AttitudeAcquisition);
		case 136:
			return &(outputs_ctx._L226_OpPhases_AttitudeAcquisition);
		case 137:
			return &(outputs_ctx._L223_OpPhases_AttitudeAcquisition);
		case 138:
			return &(outputs_ctx._L222_OpPhases_AttitudeAcquisition);
		case 139:
			return &(outputs_ctx._L255_OpPhases_AttitudeAcquisition);
		case 140:
			return &(outputs_ctx._L254_OpPhases_AttitudeAcquisition);
		case 141:
			return &(outputs_ctx._L259_OpPhases_AttitudeAcquisition);
		case 142:
			return &(outputs_ctx._L260_OpPhases_AttitudeAcquisition);
		case 143:
			return &(outputs_ctx._L261_OpPhases_AttitudeAcquisition);
		case 144:
			return &(outputs_ctx._L262_OpPhases_AttitudeAcquisition);
		case 145:
			return &(outputs_ctx._L263_OpPhases_AttitudeAcquisition);
		case 146:
			return &(outputs_ctx._L264_OpPhases_AttitudeAcquisition);
		case 147:
			return &(outputs_ctx._L265_OpPhases_AttitudeAcquisition);
		case 148:
			return &(outputs_ctx._L266_OpPhases_AttitudeAcquisition);
		case 149:
			return &(outputs_ctx._L271_OpPhases_AttitudeAcquisition);
		case 150:
			return &(outputs_ctx._L270_OpPhases_AttitudeAcquisition);
		case 151:
			return &(outputs_ctx._L269_OpPhases_AttitudeAcquisition);
		case 152:
			return &(outputs_ctx._L268_OpPhases_AttitudeAcquisition);
		case 153:
			return &(outputs_ctx._L267_OpPhases_AttitudeAcquisition);
		case 154:
			return &(outputs_ctx._L273_OpPhases_AttitudeAcquisition);
		case 155:
			return &(outputs_ctx._L283_OpPhases_AttitudeAcquisition);
		case 156:
			return &(outputs_ctx._L282_OpPhases_AttitudeAcquisition);
		case 157:
			return &(outputs_ctx._L281_OpPhases_AttitudeAcquisition);
		case 158:
			return &(outputs_ctx._L280_OpPhases_AttitudeAcquisition);
		case 159:
			return &(outputs_ctx._L279_OpPhases_AttitudeAcquisition);
		case 160:
			return &(outputs_ctx._L284_OpPhases_AttitudeAcquisition);
		case 161:
			return &(outputs_ctx._L290_OpPhases_AttitudeAcquisition);
		case 162:
			return &(outputs_ctx._L289_OpPhases_AttitudeAcquisition);
		case 163:
			return &(outputs_ctx._L288_OpPhases_AttitudeAcquisition);
		case 164:
			return &(outputs_ctx._L287_OpPhases_AttitudeAcquisition);
		case 165:
			return &(outputs_ctx._L286_OpPhases_AttitudeAcquisition);
		case 166:
			return &(outputs_ctx._L285_OpPhases_AttitudeAcquisition);
		case 167:
			return &(outputs_ctx._L295_OpPhases_AttitudeAcquisition);
		case 168:
			return &(outputs_ctx._L294_OpPhases_AttitudeAcquisition);
		case 169:
			return &(outputs_ctx._L293_OpPhases_AttitudeAcquisition);
		case 170:
			return &(outputs_ctx._L292_OpPhases_AttitudeAcquisition);
		case 171:
			return &(outputs_ctx._L291_OpPhases_AttitudeAcquisition);
		case 172:
			return &(outputs_ctx._L297_OpPhases_AttitudeAcquisition);
		case 173:
			return &(outputs_ctx._L298_OpPhases_AttitudeAcquisition);
		case 174:
			return &(outputs_ctx._L299_OpPhases_AttitudeAcquisition);
		case 175:
			return &(outputs_ctx._L300_OpPhases_AttitudeAcquisition);
		case 176:
			return &(outputs_ctx._L301_OpPhases_AttitudeAcquisition);
		case 177:
			return &(outputs_ctx._L302_OpPhases_AttitudeAcquisition);
		case 178:
			return &(outputs_ctx._L303_OpPhases_AttitudeAcquisition);
		case 179:
			return &(outputs_ctx._L304_OpPhases_AttitudeAcquisition);
		case 180:
			return &(outputs_ctx._L305_OpPhases_AttitudeAcquisition);
		case 181:
			return &(outputs_ctx._L306_OpPhases_AttitudeAcquisition);
		case 182:
			return &(outputs_ctx._L308_OpPhases_AttitudeAcquisition);
		case 183:
			return &(outputs_ctx._L309_OpPhases_AttitudeAcquisition);
		case 184:
			return &(outputs_ctx._L310_OpPhases_AttitudeAcquisition);
		case 185:
			return &(outputs_ctx._L313_OpPhases_AttitudeAcquisition);
		case 186:
			return &(outputs_ctx._L312_OpPhases_AttitudeAcquisition);
		case 187:
			return &(outputs_ctx._L311_OpPhases_AttitudeAcquisition);
		case 188:
			return &(outputs_ctx._L315_OpPhases_AttitudeAcquisition);
		case 189:
			return &(outputs_ctx._L314_OpPhases_AttitudeAcquisition);
		case 190:
			return &(outputs_ctx._L316_OpPhases_AttitudeAcquisition);
		case 191:
			return &(outputs_ctx._L317_OpPhases_AttitudeAcquisition);
		case 192:
			return &(outputs_ctx._L323_OpPhases_AttitudeAcquisition);
		case 193:
			return &(outputs_ctx._L321_OpPhases_AttitudeAcquisition);
		case 194:
			return &(outputs_ctx._L320_OpPhases_AttitudeAcquisition);
		case 195:
			return &(outputs_ctx._L319_OpPhases_AttitudeAcquisition);
		case 196:
			return &(outputs_ctx._L318_OpPhases_AttitudeAcquisition);
		case 197:
			return &(outputs_ctx._L324_OpPhases_AttitudeAcquisition);
		case 198:
			return &(outputs_ctx._L8_OpPhases_NormalPhase);
		case 199:
			return &(outputs_ctx._L7_OpPhases_NormalPhase);
		case 200:
			return &(outputs_ctx._L6_OpPhases_NormalPhase);
		case 201:
			return &(outputs_ctx._L5_OpPhases_NormalPhase);
		case 202:
			return &(outputs_ctx._L12_OpPhases_NormalPhase);
		case 203:
			return &(outputs_ctx._L11_OpPhases_NormalPhase);
		case 204:
			return &(outputs_ctx._L10_OpPhases_NormalPhase);
		case 205:
			return &(outputs_ctx._L13_OpPhases_NormalPhase);
		case 206:
			return &(outputs_ctx._L18_OpPhases_NormalPhase);
		case 207:
			return &(outputs_ctx._L19_OpPhases_NormalPhase);
		case 208:
			return &(outputs_ctx._L21_OpPhases_NormalPhase);
		case 209:
			return &(outputs_ctx._L32_OpPhases_NormalPhase);
		case 210:
			return &(outputs_ctx._L30_OpPhases_NormalPhase);
		case 211:
			return &(outputs_ctx._L28_OpPhases_NormalPhase);
		case 212:
			return &(outputs_ctx._L33_OpPhases_NormalPhase);
		case 213:
			return &(outputs_ctx._L35_OpPhases_NormalPhase);
		case 214:
			return &(outputs_ctx._L36_OpPhases_NormalPhase);
		case 215:
			return &(outputs_ctx._L38_OpPhases_NormalPhase);
		case 216:
			return &(outputs_ctx._L42_OpPhases_NormalPhase);
		case 217:
			return &(outputs_ctx._L41_OpPhases_NormalPhase);
		case 218:
			return &(outputs_ctx._L44_OpPhases_NormalPhase);
		case 219:
			return &(outputs_ctx._L43_OpPhases_NormalPhase);
		case 220:
			return &(outputs_ctx._L45_OpPhases_NormalPhase);
		case 221:
			return &(outputs_ctx._L53_OpPhases_NormalPhase);
		case 222:
			return &(outputs_ctx._L54_OpPhases_NormalPhase);
		case 223:
			return &(outputs_ctx._L55_OpPhases_NormalPhase);
		case 224:
			return &(outputs_ctx._L57_OpPhases_NormalPhase);
		case 225:
			return &(outputs_ctx._L56_OpPhases_NormalPhase);
		case 226:
			return &(outputs_ctx._L59_OpPhases_NormalPhase);
		case 227:
			return &(outputs_ctx._L60_OpPhases_NormalPhase);
		case 228:
			return &(outputs_ctx._L61_OpPhases_NormalPhase);
		case 229:
			return &(outputs_ctx._L62_OpPhases_NormalPhase);
		case 230:
			return &(outputs_ctx._L63_OpPhases_NormalPhase);
		case 231:
			return &(outputs_ctx._L64_OpPhases_NormalPhase);
		case 232:
			return &(outputs_ctx._L65_OpPhases_NormalPhase);
		case 233:
			return &(outputs_ctx._L72_OpPhases_NormalPhase);
		case 234:
			return &(outputs_ctx._L69_OpPhases_NormalPhase);
		case 235:
			return &(outputs_ctx._L68_OpPhases_NormalPhase);
		case 236:
			return &(outputs_ctx._L67_OpPhases_NormalPhase);
		case 237:
			return &(outputs_ctx._L66_OpPhases_NormalPhase);
		case 238:
			return &(outputs_ctx._L83_OpPhases_NormalPhase);
		case 239:
			return &(outputs_ctx._L82_OpPhases_NormalPhase);
		case 240:
			return &(outputs_ctx._L81_OpPhases_NormalPhase);
		case 241:
			return &(outputs_ctx._L79_OpPhases_NormalPhase);
		case 242:
			return &(outputs_ctx._L78_OpPhases_NormalPhase);
		case 243:
			return &(outputs_ctx._L77_OpPhases_NormalPhase);
		case 244:
			return &(outputs_ctx._L74_OpPhases_NormalPhase);
		case 245:
			return &(outputs_ctx.color);
		case 246:
			return &(outputs_ctx.color_2);
		case 247:
			return &(outputs_ctx.color3);
		case 248:
			return &(outputs_ctx.color4);
		case 249:
			return &(outputs_ctx.AttitudeVisibleLocal);
		case 250:
			return &(outputs_ctx.NormalPhaseVisibleLocal);
		case 251:
			return &(outputs_ctx.AtAcquisition);
		case 252:
			return &(outputs_ctx.GyroscopesLocal);
		case 253:
			return &(outputs_ctx.AccelerometersLocal);
		case 254:
			return &(outputs_ctx.PowerLocal);
		case 255:
			return &(outputs_ctx.SunSensorLocal);
		case 256:
			return &(outputs_ctx.ReactionwheelsLocal);
		case 257:
			return &(outputs_ctx.MagneticTorquersLocal);
		case 258:
			return &(outputs_ctx.AltitudeValueLocal);
		case 259:
			return &(outputs_ctx.AtNormalPhase);
		case 260:
			return &(outputs_ctx.color_5);
		case 261:
			return &(outputs_ctx.LaunchVisibleLocal);
		case 262:
			return &(outputs_ctx.FuelMeterLocal);
		case 263:
			return &(outputs_ctx.LongitudeLocal);
		case 264:
			return &(outputs_ctx.LatitudeLocal);
		case 265:
			return &(outputs_ctx.SpinRdLocal);
		case 266:
			return &(outputs_ctx.SpinTgLocal);
		case 267:
			return &(outputs_ctx.TorqueRdLocal);
		case 268:
			return &(outputs_ctx.TorqueTgLocal);
		case 269:
			return &(outputs_ctx._L7);
		case 270:
			return &(outputs_ctx._L8);
		case 271:
			return &(outputs_ctx._L9);
		case 272:
			return &(outputs_ctx._L11);
		case 273:
			return &(outputs_ctx._L12);
		case 274:
			return &(outputs_ctx._L13);
		case 275:
			return &(outputs_ctx._L14);
		case 276:
			return &(outputs_ctx._L15);
		case 277:
			return &(outputs_ctx._L16);
		case 278:
			return &(outputs_ctx._L19);
		case 279:
			return &(outputs_ctx._L20);
		case 280:
			return &(outputs_ctx._L22);
		case 281:
			return &(outputs_ctx._L31);
		case 282:
			return &(outputs_ctx._L32);
		case 283:
			return &(outputs_ctx._L34);
		case 284:
			return &(outputs_ctx._L36);
		case 285:
			return &(outputs_ctx._L38);
		case 286:
			return &(outputs_ctx._L41);
		case 287:
			return &(outputs_ctx._L42);
		case 288:
			return &(outputs_ctx._L43);
		case 289:
			return &(outputs_ctx._L44);
		case 290:
			return &(outputs_ctx._L45);
		case 291:
			return &(outputs_ctx._L46);
		case 292:
			return &(outputs_ctx._L49);
		case 293:
			return &(outputs_ctx._L50);
		case 294:
			return &(outputs_ctx._L51);
		case 295:
			return &(outputs_ctx._L52);
		case 296:
			return &(outputs_ctx._L53);
		case 297:
			return &(outputs_ctx._L54);
		case 298:
			return &(outputs_ctx.StartLaunchPhase);
		case 299:
			return &(outputs_ctx.Layer1Active);
		case 300:
			return &(outputs_ctx.Layer1Visible);
		case 301:
			return &(outputs_ctx.Emit2CDS);
		case 302:
			return &(outputs_ctx.ColorIndex);
		case 303:
			return &(outputs_ctx.ColorIndex2);
		case 304:
			return &(outputs_ctx.ColorIndex3);
		case 305:
			return &(outputs_ctx.ColorIndex4);
		case 306:
			return &(outputs_ctx.GroundVisible);
		case 307:
			return &(outputs_ctx.AttitudeVisible);
		case 308:
			return &(outputs_ctx.NormalPhaseVisible);
		case 309:
			return &(outputs_ctx.AltitudeValue);
		case 310:
			return &(outputs_ctx.ColorIndex5);
		case 311:
			return &(outputs_ctx.LaunchVisible);
		case 312:
			return &(outputs_ctx.FuelMeter);
		case 313:
			return &(outputs_ctx.FuelMeterGraphic);
		case 314:
			return &(outputs_ctx.SAT_Longitude_Value);
		case 315:
			return &(outputs_ctx.SAT_Latitude_Value);
		case 316:
			return &(outputs_ctx.SpinRd);
		case 317:
			return &(outputs_ctx.SpinTg);
		case 318:
			return &(outputs_ctx.TorqueRd);
		case 319:
			return &(outputs_ctx.TorqueTg);
		case 320:
			return &(inputs_ctx.Power);
		case 321:
			return &(inputs_ctx.Telemetry);
		case 322:
			return &(inputs_ctx.AttitudeReference);
		case 323:
			return &(inputs_ctx.takePict);
		case 324:
			return &(inputs_ctx.picLocation);
		case 325:
			return &(inputs_ctx.PassarFaseBtn);
		case 326:
			return &(inputs_ctx.Accelerometers);
		case 327:
			return &(inputs_ctx.SunSensor);
		case 328:
			return &(inputs_ctx.Reactionwheels);
		case 329:
			return &(inputs_ctx.MagneticTorquers);
		case 330:
			return &(inputs_ctx.upDateSw);
		case 331:
			return &(inputs_ctx.Gyroscopes);
		case 332:
			return &(inputs_ctx.Input13);
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
