/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_Many_Rx_Linux_v0.h"
#include "rdivide.h"
#include "TB_ESGA_MPA_Many_Rx_Linux_v0_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo fd_emlrtRTEI = { 28,/* lineNo */
  1,                                   /* colNo */
  "rdivide",                           /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/rdivide.m"/* pName */
};

/* Function Definitions */
void rdivide(const emlrtStack *sp, const emxArray_real_T *x, real_T y,
             emxArray_real_T *z)
{
  int32_T i11;
  int32_T loop_ub;
  i11 = z->size[0] * z->size[1] * z->size[2];
  z->size[0] = 1;
  z->size[1] = 1;
  z->size[2] = x->size[2];
  emxEnsureCapacity_real_T1(sp, z, i11, &fd_emlrtRTEI);
  loop_ub = x->size[0] * x->size[1] * x->size[2];
  for (i11 = 0; i11 < loop_ub; i11++) {
    z->data[i11] = x->data[i11] / y;
  }
}

/* End of code generation (rdivide.c) */
