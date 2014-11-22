/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Embraer ITA/Doutorado/Projetos/TS02_2Sprint_v9/TS02_2Sprint/UserApplication/Simulation\kcg_s2c_config.txt
** Generation date: 2014-11-22T21:11:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ReadSensors.h"

void ReadSensors_reset(outC_ReadSensors *outC)
{
  outC->init = kcg_true;
}

/* ReadSensors */
void ReadSensors(
  /* ReadSensors::Gyroscopes */kcg_bool Gyroscopes,
  /* ReadSensors::Accelerometers */kcg_bool Accelerometers,
  /* ReadSensors::SunSensor */kcg_bool SunSensor,
  outC_ReadSensors *outC)
{
  /* ReadSensors::SensorsStatus */ kcg_bool last_SensorsStatus;
  /* ReadSensors::SunSensor */ kcg_bool last_SunSensor;
  /* ReadSensors::Accelerometers */ kcg_bool last_Accelerometers;
  /* ReadSensors::Gyroscopes */ kcg_bool last_Gyroscopes;
  
  if (outC->init) {
    last_SensorsStatus = kcg_true;
  }
  else {
    last_SensorsStatus = outC->SensorsStatus;
  }
  if (outC->init) {
    last_SunSensor = kcg_true;
  }
  else {
    last_SunSensor = outC->rem_SunSensor;
  }
  if (outC->init) {
    last_Accelerometers = kcg_true;
  }
  else {
    last_Accelerometers = outC->rem_Accelerometers;
  }
  if (outC->init) {
    last_Gyroscopes = kcg_true;
  }
  else {
    last_Gyroscopes = outC->rem_Gyroscopes;
  }
  outC->_L2 = Gyroscopes;
  outC->_L4 = Accelerometers;
  outC->_L6 = outC->_L2 | outC->_L4;
  outC->_L5 = SunSensor;
  outC->_L8 = outC->_L6 | outC->_L5;
  outC->SensorsStatus = outC->_L8;
  outC->rem_Gyroscopes = Gyroscopes;
  outC->rem_Accelerometers = Accelerometers;
  outC->rem_SunSensor = SunSensor;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ReadSensors.c
** Generation date: 2014-11-22T21:11:29
*************************************************************$ */

