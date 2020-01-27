/*
 * prod.c
 *
 * Code generation for function 'prod'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_Many_Rx_Linux_v0.h"
#include "prod.h"
#include "eml_int_forloop_overflow_check.h"
#include "TB_ESGA_MPA_Many_Rx_Linux_v0_data.h"

/* Variable Definitions */
static emlrtRSInfo id_emlrtRSI = { 10, /* lineNo */
  "prod",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/prod.m"/* pathName */
};

/* Function Definitions */
real_T b_prod(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &id_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if ((x->size[0] == 1) || (x->size[0] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &he_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b_st.site = &jd_emlrtRSI;
  if (x->size[0] == 0) {
    y = 1.0;
  } else {
    c_st.site = &kd_emlrtRSI;
    y = x->data[0];
    d_st.site = &ld_emlrtRSI;
    overflow = ((!(2 > x->size[0])) && (x->size[0] > 2147483646));
    if (overflow) {
      e_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 2; k <= x->size[0]; k++) {
      y *= x->data[k - 1];
    }
  }

  return y;
}

real_T prod(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &id_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if ((x->size[1] == 1) || (x->size[1] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &he_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b_st.site = &jd_emlrtRSI;
  if (x->size[1] == 0) {
    y = 1.0;
  } else {
    c_st.site = &kd_emlrtRSI;
    y = x->data[0];
    d_st.site = &ld_emlrtRSI;
    overflow = ((!(2 > x->size[1])) && (x->size[1] > 2147483646));
    if (overflow) {
      e_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 2; k <= x->size[1]; k++) {
      y *= x->data[k - 1];
    }
  }

  return y;
}

/* End of code generation (prod.c) */
