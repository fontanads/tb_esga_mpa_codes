/*
 * exp.c
 *
 * Code generation for function 'exp'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v0_Linux.h"
#include "exp.h"
#include "eml_int_forloop_overflow_check.h"
#include "TB_ESGA_MPA_v0_Linux_data.h"

/* Variable Definitions */
static emlrtRSInfo yd_emlrtRSI = { 9,  /* lineNo */
  "exp",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elfun/exp.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 31, /* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyScalarFunctionInPlace.m"/* pathName */
};

/* Function Definitions */
void b_exp(const emlrtStack *sp, emxArray_real_T *x)
{
  int32_T nx;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[2];
  b_st.site = &ae_emlrtRSI;
  overflow = ((!(1 > x->size[2])) && (x->size[2] > 2147483646));
  if (overflow) {
    c_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    x->data[k] = muDoubleScalarExp(x->data[k]);
  }
}

void c_exp(const emlrtStack *sp, emxArray_real_T *x)
{
  int32_T nx;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &yd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx = x->size[0];
  b_st.site = &ae_emlrtRSI;
  overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (k = 0; k < nx; k++) {
    x->data[k] = muDoubleScalarExp(x->data[k]);
  }
}

/* End of code generation (exp.c) */
