/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/github/si-lansab/Launcher/TS01/UserApplication/KCG\kcg_s2c_config.txt
** Generation date: 2014-11-18T21:12:34
*************************************************************$ */

#include "kcg_types.h"

kcg_bool kcg_comp_array_char_20(array_char_20 *kcg_c1, array_char_20 *kcg_c2)
{
  kcg_bool kcg_equ;
  kcg_int kcg_ci;
  
  kcg_equ = kcg_true;
  for (kcg_ci = 0; kcg_ci < 20; kcg_ci++) {
    kcg_equ = kcg_equ & ((*kcg_c1)[kcg_ci] == (*kcg_c2)[kcg_ci]);
  }
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2014-11-18T21:12:34
*************************************************************$ */

