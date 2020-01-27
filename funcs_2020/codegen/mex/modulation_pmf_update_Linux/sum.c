/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "modulation_pmf_update_Linux.h"
#include "sum.h"

/* Variable Definitions */
static emlrtRSInfo n_emlrtRSI = { 9,   /* lineNo */
  "sum",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/sum.m"/* pathName */
};

static emlrtRTEInfo f_emlrtRTEI = { 22,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/private/sumprod.m"/* pName */
};

/* Function Definitions */
real_T sum(const emlrtStack *sp, const real_T x_data[], const int32_T x_size[2])
{
  real_T y;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &n_emlrtRSI;
  if ((x_size[1] == 1) || (x_size[1] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &f_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (x_size[1] == 0) {
    y = 0.0;
  } else {
    y = x_data[0];
    for (k = 2; k <= x_size[1]; k++) {
      y += x_data[k - 1];
    }
  }

  return y;
}

/* End of code generation (sum.c) */
