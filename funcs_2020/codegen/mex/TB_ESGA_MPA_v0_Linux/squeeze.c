/*
 * squeeze.c
 *
 * Code generation for function 'squeeze'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v0_Linux.h"
#include "squeeze.h"
#include "TB_ESGA_MPA_v0_Linux_emxutil.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo bc_emlrtRSI = { 31, /* lineNo */
  "squeeze",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/squeeze.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 54, /* lineNo */
  "reshape",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/reshape.m"/* pathName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 31,/* lineNo */
  1,                                   /* colNo */
  "squeeze",                           /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/squeeze.m"/* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = { 61,/* lineNo */
  15,                                  /* colNo */
  "reshape",                           /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/reshape.m"/* pName */
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

  st.site = &bc_emlrtRSI;
  k = a->size[2];
  n = 1;
  if (a->size[2] > 1) {
    n = a->size[2];
  }

  if (sqsz_idx_0 > muIntScalarMax_sint32(k, n)) {
    b_st.site = &cc_emlrtRSI;
    c_error(&b_st);
  }

  if (sqsz_idx_0 != a->size[2]) {
    emlrtErrorWithMessageIdR2018a(&st, &oe_emlrtRTEI,
      "Coder:MATLAB:getReshapeDims_notSameNumel",
      "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
  }

  k = b->size[0] * b->size[1];
  b->size[0] = sqsz_idx_0;
  b->size[1] = 1;
  emxEnsureCapacity_real_T(&st, b, k, &nc_emlrtRTEI);
  for (k = 0; k < sqsz_idx_0; k++) {
    b->data[k] = a->data[k];
  }
}

void squeeze(const emlrtStack *sp, const emxArray_creal_T *a, emxArray_creal_T
             *b)
{
  int32_T nx;
  int32_T n;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nx = a->size[1];
  n = 1;
  if (a->size[1] > 1) {
    n = a->size[1];
  }

  if (a->size[1] > muIntScalarMax_sint32(nx, n)) {
    b_st.site = &cc_emlrtRSI;
    c_error(&b_st);
  }

  nx = b->size[0] * b->size[1];
  b->size[0] = 1;
  b->size[1] = a->size[1];
  emxEnsureCapacity_creal_T(&st, b, nx, &nc_emlrtRTEI);
  n = a->size[1];
  for (nx = 0; nx < n; nx++) {
    b->data[nx] = a->data[nx];
  }
}

/* End of code generation (squeeze.c) */
