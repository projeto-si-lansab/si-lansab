/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Pierre Mattei/Documents/Aeropace Engineering/Doutorado/disciplinas/2014/Cunha/projeto/2sdSprint/TS02/UserApplication/Simulation\kcg_s2c_config.txt
** Generation date: 2014-09-29T18:26:24
*************************************************************$ */
#ifndef _ReadSensors_H_
#define _ReadSensors_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ReadSensors::SensorsStatus */ SensorsStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* ReadSensors::SunSensor */ rem_SunSensor;
  kcg_bool /* ReadSensors::Accelerometers */ rem_Accelerometers;
  kcg_bool /* ReadSensors::Gyroscopes */ rem_Gyroscopes;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* ReadSensors::_L2 */ _L2;
  kcg_bool /* ReadSensors::_L4 */ _L4;
  kcg_bool /* ReadSensors::_L5 */ _L5;
  kcg_bool /* ReadSensors::_L6 */ _L6;
  kcg_bool /* ReadSensors::_L8 */ _L8;
} outC_ReadSensors;

/* ===========  node initialization and cycle functions  =========== */
/* ReadSensors */
extern void ReadSensors(
  /* ReadSensors::Gyroscopes */kcg_bool Gyroscopes,
  /* ReadSensors::Accelerometers */kcg_bool Accelerometers,
  /* ReadSensors::SunSensor */kcg_bool SunSensor,
  outC_ReadSensors *outC);

extern void ReadSensors_reset(outC_ReadSensors *outC);

#endif /* _ReadSensors_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ReadSensors.h
** Generation date: 2014-09-29T18:26:24
*************************************************************$ */

