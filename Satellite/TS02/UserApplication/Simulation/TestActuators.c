/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Embraer ITA/Doutorado/Projetos/TS02_2Sprint_v9/TS02_2Sprint/UserApplication/Simulation\kcg_s2c_config.txt
** Generation date: 2014-11-22T21:11:29
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "TestActuators.h"

void TestActuators_reset(outC_TestActuators *outC)
{
  outC->init = kcg_true;
}

/* TestActuators */
void TestActuators(
  /* TestActuators::Reactionwheels */kcg_bool Reactionwheels,
  /* TestActuators::MagneticTorquers */kcg_bool MagneticTorquers,
  outC_TestActuators *outC)
{
  /* TestActuators::ActuatorsStatus */ kcg_bool last_ActuatorsStatus;
  /* TestActuators::MagneticTorquers */ kcg_bool last_MagneticTorquers;
  /* TestActuators::Reactionwheels */ kcg_bool last_Reactionwheels;
  
  if (outC->init) {
    last_ActuatorsStatus = kcg_true;
  }
  else {
    last_ActuatorsStatus = outC->ActuatorsStatus;
  }
  if (outC->init) {
    last_MagneticTorquers = kcg_true;
  }
  else {
    last_MagneticTorquers = outC->rem_MagneticTorquers;
  }
  if (outC->init) {
    last_Reactionwheels = kcg_true;
  }
  else {
    last_Reactionwheels = outC->rem_Reactionwheels;
  }
  outC->_L2 = Reactionwheels;
  outC->_L3 = MagneticTorquers;
  outC->_L4 = outC->_L2 | outC->_L3;
  outC->ActuatorsStatus = outC->_L4;
  outC->rem_Reactionwheels = Reactionwheels;
  outC->rem_MagneticTorquers = MagneticTorquers;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestActuators.c
** Generation date: 2014-11-22T21:11:29
*************************************************************$ */

