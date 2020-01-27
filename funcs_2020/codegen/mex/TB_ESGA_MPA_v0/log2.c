/*
 * log2.c
 *
 * Code generation for function 'log2'
 *
 */

/* Include files */
#include <math.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v0.h"
#include "log2.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo db_emlrtRSI = { 24, /* lineNo */
  "log2",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\log2.m"/* pathName */
};

/* Function Definitions */
real_T b_log2(const emlrtStack *sp, real_T x)
{
  real_T f;
  real_T t;
  int32_T eint;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (x < 0.0) {
    st.site = &db_emlrtRSI;
    error(&st);
  }

  if (x == 0.0) {
    f = rtMinusInf;
  } else if ((!muDoubleScalarIsInf(x)) && (!muDoubleScalarIsNaN(x))) {
    if ((!muDoubleScalarIsInf(x)) && (!muDoubleScalarIsNaN(x))) {
      t = frexp(x, &eint);
    } else {
      t = x;
      eint = 0;
    }

    if (t == 0.5) {
      f = (real_T)eint - 1.0;
    } else if ((eint == 1) && (t < 0.75)) {
      f = muDoubleScalarLog(2.0 * t) / 0.69314718055994529;
    } else {
      f = muDoubleScalarLog(t) / 0.69314718055994529 + (real_T)eint;
    }
  } else {
    f = x;
  }

  return f;
}

/* End of code generation (log2.c) */
