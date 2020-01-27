/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "modulation_pmf_update.h"
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "modulation_pmf_update_data.h"

/* Variable Definitions */
static emlrtRSInfo r_emlrtRSI = { 9,   /* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 64,  /* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 134, /* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 193, /* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

static emlrtRTEInfo q_emlrtRTEI = { 22,/* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

/* Function Definitions */
real_T sum(const emlrtStack *sp, const emxArray_real_T *x)
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
  st.site = &r_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&st, &q_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  b_st.site = &s_emlrtRSI;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    c_st.site = &t_emlrtRSI;
    y = x->data[0];
    d_st.site = &u_emlrtRSI;
    overflow = ((!(2 > x->size[1])) && (x->size[1] > 2147483646));
    if (overflow) {
      e_st.site = &o_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (k = 2; k <= x->size[1]; k++) {
      y += x->data[k - 1];
    }
  }

  return y;
}

/* End of code generation (sum.c) */
