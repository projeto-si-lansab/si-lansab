/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Pierre Mattei/Documents/Aeropace Engineering/Doutorado/disciplinas/2014/Cunha/projeto/2sdSprint/TS02/UserApplication/Simulation\kcg_s2c_config.txt
** Generation date: 2014-09-29T18:26:24
*************************************************************$ */
#ifndef _controlAlgorithm_H_
#define _controlAlgorithm_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* controlAlgorithm::ControlAlgorithmActive */ ControlAlgorithmActive;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* controlAlgorithm::_L2 */ _L2;
} outC_controlAlgorithm;

/* ===========  node initialization and cycle functions  =========== */
/* controlAlgorithm */
extern void controlAlgorithm(outC_controlAlgorithm *outC);

extern void controlAlgorithm_reset(outC_controlAlgorithm *outC);

#endif /* _controlAlgorithm_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** controlAlgorithm.h
** Generation date: 2014-09-29T18:26:24
*************************************************************$ */

