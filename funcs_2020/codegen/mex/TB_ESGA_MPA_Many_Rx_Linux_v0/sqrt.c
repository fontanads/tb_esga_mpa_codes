/*
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_Many_Rx_Linux_v0.h"
#include "sqrt.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo hd_emlrtRSI = { 12, /* lineNo */
  "sqrt",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pathName */
};

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, real_T *x)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    st.site = &hd_emlrtRSI;
    e_error(&st);
  }

  *x = muDoubleScalarSqrt(*x);
}

/* End of code generation (sqrt.c) */
