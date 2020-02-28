/*
 * squeeze.c
 *
 * Code generation for function 'squeeze'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v1_Linux.h"
#include "squeeze.h"
#include "reshape.h"
#include "TB_ESGA_MPA_v1_Linux_emxutil.h"
#include "error.h"
#include "TB_ESGA_MPA_v1_Linux_data.h"

/* Variable Definitions */
static emlrtRSInfo fc_emlrtRSI = { 31, /* lineNo */
  "squeeze",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/squeeze.m"/* pathName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "squeeze",                           /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/squeeze.m"/* pName */
};

/* Function Definitions */
void b_squeeze(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T
               *b)
{
  int32_T sqsz_idx_0;
  int32_T k;
  int32_T n;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  sqsz_idx_0 = 1;
  k = 3;
  if (a->size[2] == 1) {
    k = 2;
  }

  if ((k != 2) && (a->size[2] != 1)) {
    sqsz_idx_0 = a->size[2];
  }

  st.site = &fc_emlrtRSI;
  k = a->size[2];
  computeDimsData();
  n = 1;
  if (a->size[2] > 1) {
    n = a->size[2];
  }

  if (sqsz_idx_0 > muIntScalarMax_sint32(k, n)) {
    b_st.site = &hc_emlrtRSI;
    c_error(&b_st);
  }

  if (sqsz_idx_0 != a->size[2]) {
    emlrtErrorWithMessageIdR2018a(&st, &ke_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  k = b->size[0] * b->size[1];
  b->size[0] = sqsz_idx_0;
  b->size[1] = 1;
  emxEnsureCapacity_real_T(&st, b, k, &fc_emlrtRTEI);
  for (k = 0; k < sqsz_idx_0; k++) {
    b->data[k] = a->data[k];
  }
}

void squeeze(const emlrtStack *sp, const creal_T a_data[], const int32_T a_size
             [3], emxArray_creal_T *b)
{
  int8_T sqsz[2];
  int32_T k;
  int32_T nx;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  sqsz[0] = 1;
  sqsz[1] = 1;
  k = 3;
  if (a_size[2] == 1) {
    k = 2;
  }

  if (k == 2) {
    sqsz[1] = (int8_T)a_size[1];
  } else {
    k = 0;
    if (a_size[1] != 1) {
      k = 1;
      sqsz[0] = (int8_T)a_size[1];
    }

    if (a_size[2] != 1) {
      sqsz[k] = (int8_T)a_size[2];
    }
  }

  st.site = &fc_emlrtRSI;
  nx = a_size[1] * a_size[2];
  computeDimsData();
  k = 1;
  if (a_size[1] > 1) {
    k = a_size[1];
  }

  if (a_size[2] > k) {
    k = a_size[2];
  }

  k = muIntScalarMax_sint32(nx, k);
  if (sqsz[0] > k) {
    b_st.site = &hc_emlrtRSI;
    c_error(&b_st);
  }

  if (sqsz[1] > k) {
    b_st.site = &hc_emlrtRSI;
    c_error(&b_st);
  }

  if (sqsz[0] * sqsz[1] != nx) {
    emlrtErrorWithMessageIdR2018a(&st, &ke_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  k = b->size[0] * b->size[1];
  b->size[0] = sqsz[0];
  b->size[1] = sqsz[1];
  emxEnsureCapacity_creal_T(&st, b, k, &fc_emlrtRTEI);
  nx = sqsz[0] * sqsz[1];
  for (k = 0; k < nx; k++) {
    b->data[k] = a_data[k];
  }
}

/* End of code generation (squeeze.c) */
