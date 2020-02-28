/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v1_Linux.h"
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "TB_ESGA_MPA_v1_Linux_data.h"

/* Variable Definitions */
static emlrtRSInfo bc_emlrtRSI = { 9,  /* lineNo */
  "sum",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/sum.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 177,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/private/combineVectorElements.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 195,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/private/combineVectorElements.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 172,/* lineNo */
  "combineVectorElements",             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/private/combineVectorElements.m"/* pathName */
};

/* Function Definitions */
void b_sum(const emxArray_creal_T *x, creal_T y_data[], int32_T y_size[1])
{
  int32_T vstride;
  int8_T sz[2];
  int32_T j;
  int32_T k;
  int32_T xoffset;
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    for (vstride = 0; vstride < 2; vstride++) {
      sz[vstride] = (int8_T)x->size[vstride];
    }

    y_size[0] = sz[0];
    j = sz[0];
    for (vstride = 0; vstride < j; vstride++) {
      y_data[vstride].re = 0.0;
      y_data[vstride].im = 0.0;
    }
  } else {
    vstride = x->size[0];
    y_size[0] = (int8_T)x->size[0];
    for (j = 0; j < vstride; j++) {
      y_data[j] = x->data[j];
    }

    for (k = 2; k <= x->size[1]; k++) {
      xoffset = (k - 1) * vstride;
      for (j = 0; j < vstride; j++) {
        y_data[j].re += x->data[xoffset + j].re;
        y_data[j].im += x->data[xoffset + j].im;
      }
    }
  }
}

real_T c_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  int32_T vlen;
  int32_T k;
  int32_T vstride;
  int32_T j;
  int32_T xoffset;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  if ((x->size[2] == 1) || (x->size[2] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &re_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b_st.site = &cc_emlrtRSI;
  vlen = x->size[2];
  if (x->size[2] == 0) {
    y = 0.0;
  } else {
    c_st.site = &dc_emlrtRSI;
    k = 3;
    if (x->size[2] == 1) {
      k = 2;
    }

    if (3 > k) {
      vstride = x->size[2];
    } else {
      vstride = 1;
    }

    d_st.site = &qe_emlrtRSI;
    d_st.site = &jc_emlrtRSI;
    if (vstride > 2147483646) {
      e_st.site = &ob_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (j = 1; j <= vstride; j++) {
      y = x->data[j - 1];
    }

    d_st.site = &ec_emlrtRSI;
    if ((!(2 > vlen)) && (vlen > 2147483646)) {
      e_st.site = &ob_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 2; k <= vlen; k++) {
      xoffset = (k - 1) * vstride;
      d_st.site = &kc_emlrtRSI;
      for (j = 1; j <= vstride; j++) {
        y += x->data[(xoffset + j) - 1];
      }
    }
  }

  return y;
}

real_T d_sum(const emlrtStack *sp, const emxArray_real_T *x)
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
  st.site = &bc_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&st, &re_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b_st.site = &cc_emlrtRSI;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    c_st.site = &dc_emlrtRSI;
    y = x->data[0];
    d_st.site = &ec_emlrtRSI;
    overflow = ((!(2 > x->size[0])) && (x->size[0] > 2147483646));
    if (overflow) {
      e_st.site = &ob_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 2; k <= x->size[0]; k++) {
      y += x->data[k - 1];
    }
  }

  return y;
}

creal_T sum(const emlrtStack *sp, const creal_T x_data[], const int32_T x_size[2])
{
  creal_T y;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bc_emlrtRSI;
  if ((x_size[1] == 1) || (x_size[1] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&st, &re_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (x_size[1] == 0) {
    y.re = 0.0;
    y.im = 0.0;
  } else {
    y = x_data[0];
    for (k = 2; k <= x_size[1]; k++) {
      y.re += x_data[k - 1].re;
      y.im += x_data[k - 1].im;
    }
  }

  return y;
}

/* End of code generation (sum.c) */
