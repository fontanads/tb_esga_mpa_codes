/*
 * issorted.c
 *
 * Code generation for function 'issorted'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v1_Linux.h"
#include "issorted.h"

/* Function Definitions */
boolean_T issorted(const emxArray_real_T *x)
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  real_T v_idx_0;
  real_T v_idx_1;
  y = true;
  if ((x->size[1] != 0) && (x->size[1] != 1)) {
    k = 1;
    exitg1 = false;
    while ((!exitg1) && (k <= x->size[1] - 1)) {
      v_idx_0 = x->data[x->size[0] * (k - 1)];
      v_idx_1 = x->data[x->size[0] * k];
      if ((v_idx_0 <= v_idx_1) || muDoubleScalarIsNaN(v_idx_1)) {
        y = true;
      } else {
        y = false;
      }

      if (!y) {
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  return y;
}

/* End of code generation (issorted.c) */
