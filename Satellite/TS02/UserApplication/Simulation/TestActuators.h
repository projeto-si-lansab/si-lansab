/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/Embraer ITA/Doutorado/Projetos/TS02_2Sprint_v9/TS02_2Sprint/UserApplication/Simulation\kcg_s2c_config.txt
** Generation date: 2014-11-22T21:11:29
*************************************************************$ */
#ifndef _TestActuators_H_
#define _TestActuators_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* TestActuators::ActuatorsStatus */ ActuatorsStatus;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* TestActuators::MagneticTorquers */ rem_MagneticTorquers;
  kcg_bool /* TestActuators::Reactionwheels */ rem_Reactionwheels;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* TestActuators::_L2 */ _L2;
  kcg_bool /* TestActuators::_L3 */ _L3;
  kcg_bool /* TestActuators::_L4 */ _L4;
} outC_TestActuators;

/* ===========  node initialization and cycle functions  =========== */
/* TestActuators */
extern void TestActuators(
  /* TestActuators::Reactionwheels */kcg_bool Reactionwheels,
  /* TestActuators::MagneticTorquers */kcg_bool MagneticTorquers,
  outC_TestActuators *outC);

extern void TestActuators_reset(outC_TestActuators *outC);

#endif /* _TestActuators_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TestActuators.h
** Generation date: 2014-11-22T21:11:29
*************************************************************$ */

