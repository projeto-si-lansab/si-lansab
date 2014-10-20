/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/Pierre Mattei/Documents/Aeropace Engineering/Doutorado/disciplinas/2014/Cunha/projeto/2sdSprint/TS02/UserApplication/Simulation\kcg_s2c_config.txt
** Generation date: 2014-09-29T18:26:24
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "controlAlgorithm.h"

void controlAlgorithm_reset(outC_controlAlgorithm *outC)
{
}

/* controlAlgorithm */
void controlAlgorithm(outC_controlAlgorithm *outC)
{
  outC->_L2 = kcg_true;
  outC->ControlAlgorithmActive = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** controlAlgorithm.c
** Generation date: 2014-09-29T18:26:24
*************************************************************$ */

