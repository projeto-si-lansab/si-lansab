#include "OperationalScenario_interface.h"
const int  rt_version = Srtv62;

const char* _SCSIM_CheckSum = "8fb8d66019eca0050381c8e9e3584227";
const char* _SCSIM_SmuTypesCheckSum = "28e18c1b393c1cd143584174bcc1ba87";

/*******************************
 * Validity
 *******************************/
int valid(void * pHandle) {
	return 1;
}
int notvalid(void * pHandle) {
	return 0;
}

/*******************************
 * Simulation context
 *******************************/
inC_OperationalScenario inputs_ctx;
static inC_OperationalScenario inputs_ctx_restore;
static inC_OperationalScenario inputs_ctx_execute;
outC_OperationalScenario outputs_ctx;
static outC_OperationalScenario outputs_ctx_restore;

/* separate_io: inputs instanciation */

/* separate_io: outputs instanciation */

static void _SCSIM_RestoreInterface(void) {
	inputs_ctx.Power = inputs_ctx_restore.Power;
	inputs_ctx.Telemetry = inputs_ctx_restore.Telemetry;
	inputs_ctx.AttitudeReference = inputs_ctx_restore.AttitudeReference;
	inputs_ctx.takePict = inputs_ctx_restore.takePict;
	inputs_ctx.picLocation = inputs_ctx_restore.picLocation;
	inputs_ctx.PassarFaseBtn = inputs_ctx_restore.PassarFaseBtn;
	inputs_ctx.Accelerometers = inputs_ctx_restore.Accelerometers;
	inputs_ctx.SunSensor = inputs_ctx_restore.SunSensor;
	inputs_ctx.Reactionwheels = inputs_ctx_restore.Reactionwheels;
	inputs_ctx.MagneticTorquers = inputs_ctx_restore.MagneticTorquers;
	inputs_ctx.upDateSw = inputs_ctx_restore.upDateSw;
	inputs_ctx.Gyroscopes = inputs_ctx_restore.Gyroscopes;
	inputs_ctx.Input13 = inputs_ctx_restore.Input13;
	inputs_ctx.EjectionSignal = inputs_ctx_restore.EjectionSignal;
	outputs_ctx = outputs_ctx_restore;

	/* separate_io: outputs restore */
}

static void _SCSIM_ExecuteInterface(void) {
	pSimulator->m_pfnAcquireValueMutex(pSimulator);
	inputs_ctx_execute.Power = inputs_ctx.Power;
	inputs_ctx_execute.Telemetry = inputs_ctx.Telemetry;
	inputs_ctx_execute.AttitudeReference = inputs_ctx.AttitudeReference;
	inputs_ctx_execute.takePict = inputs_ctx.takePict;
	inputs_ctx_execute.picLocation = inputs_ctx.picLocation;
	inputs_ctx_execute.PassarFaseBtn = inputs_ctx.PassarFaseBtn;
	inputs_ctx_execute.Accelerometers = inputs_ctx.Accelerometers;
	inputs_ctx_execute.SunSensor = inputs_ctx.SunSensor;
	inputs_ctx_execute.Reactionwheels = inputs_ctx.Reactionwheels;
	inputs_ctx_execute.MagneticTorquers = inputs_ctx.MagneticTorquers;
	inputs_ctx_execute.upDateSw = inputs_ctx.upDateSw;
	inputs_ctx_execute.Gyroscopes = inputs_ctx.Gyroscopes;
	inputs_ctx_execute.Input13 = inputs_ctx.Input13;
	inputs_ctx_execute.EjectionSignal = inputs_ctx.EjectionSignal;
	pSimulator->m_pfnReleaseValueMutex(pSimulator);
}

extern void _SCSIM_Mapping_Create();

/*******************************
 * Cyclic function encapsulation
 *******************************/
void SimInit(void) {
	/* Context initialization */
	_SCSIM_Mapping_Create();
	_SCSIM_RestoreInterface();
#ifdef EXTENDED_SIM
	BeforeSimInit();
#endif /* EXTENDED_SIM */
	OperationalScenario_reset(&outputs_ctx);
#ifdef EXTENDED_SIM
	AfterSimInit();
#endif /* EXTENDED_SIM */
}

#ifdef EXTENDED_SIM
int GraphicalInputsConnected = 1;
#endif /* EXTENDED_SIM */
int SimStep(void) {
#ifdef EXTENDED_SIM
	if (GraphicalInputsConnected)
		BeforeSimStep();
#endif /* EXTENDED_SIM */
	_SCSIM_ExecuteInterface();
	OperationalScenario(&inputs_ctx_execute, &outputs_ctx);
#ifdef EXTENDED_SIM
	AfterSimStep();
#endif /* EXTENDED_SIM */
	return 1;
}

void SimStop(void) {
#ifdef EXTENDED_SIM
	ExtendedSimStop();
#endif /* EXTENDED_SIM */
}

int SsmGetDumpSize(void) {
	int nSize = 0;
	nSize += sizeof(inC_OperationalScenario);

/* separate_io: add (not in ctx) inputs size */

/* separate_io: add (not in ctx) outputs size */
	nSize += sizeof(outC_OperationalScenario);
#ifdef EXTENDED_SIM
	nSize += ExtendedGetDumpSize();
#endif /* EXTENDED_SIM */
	return nSize;
}

void SsmGatherDumpData(char * pData) {
	char* pCurrent = pData;
	memcpy(pCurrent, &inputs_ctx, sizeof(inC_OperationalScenario));
	pCurrent += sizeof(inC_OperationalScenario);

	/* separate_io: dump (not in ctx) inputs */

	/* separate_io: dump (not in ctx) outputs */
	memcpy(pCurrent, &outputs_ctx, sizeof(outC_OperationalScenario));
	pCurrent += sizeof(outC_OperationalScenario);
#ifdef EXTENDED_SIM
	ExtendedGatherDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

void SsmRestoreDumpData(const char * pData) {
	const char* pCurrent = pData;
	memcpy(&inputs_ctx, pCurrent, sizeof(inC_OperationalScenario));
	pCurrent += sizeof(inC_OperationalScenario);

	/* separate_io: restore (not in ctx) inputs */

	/* separate_io: restore (not in ctx) outputs */
	memcpy(&outputs_ctx, pCurrent, sizeof(outC_OperationalScenario));
	pCurrent += sizeof(outC_OperationalScenario);
#ifdef EXTENDED_SIM
	ExtendedRestoreDumpData(pCurrent);
#endif /* EXTENDED_SIM */
}

const char * SsmGetCheckSum() {
	return _SCSIM_CheckSum;
}

const char * SsmGetSmuTypesCheckSum() {
	return _SCSIM_SmuTypesCheckSum;
}

void SsmUpdateValues(void) {
#ifdef EXTENDED_SIM
	UpdateValues();
#endif /* EXTENDED_SIM */
}

void SsmConnectExternalInputs(int bConnect) {
#ifdef EXTENDED_SIM
	GraphicalInputsConnected = bConnect;
#endif /* EXTENDED_SIM */
}

