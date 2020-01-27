/*
 * indexShapeCheck.c
 *
 * Code generation for function 'indexShapeCheck'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v0.h"
#include "indexShapeCheck.h"

/* Variable Definitions */
static emlrtRSInfo qd_emlrtRSI = { 18, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 30, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 80, /* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 88,/* lineNo */
  9,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

/* Function Definitions */
void b_indexShapeCheck(const emlrtStack *sp, const int32_T matrixSize[2],
  int32_T indexSize)
{
  boolean_T nonSingletonDimFound;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nonSingletonDimFound = false;
  if (matrixSize[0] != 1) {
    nonSingletonDimFound = true;
  }

  if (matrixSize[1] != 1) {
    if (nonSingletonDimFound) {
      nonSingletonDimFound = false;
    } else {
      nonSingletonDimFound = true;
    }
  }

  if (nonSingletonDimFound) {
    st.site = &ve_emlrtRSI;
    b_st.site = &we_emlrtRSI;
    if ((matrixSize[0] == 1) != (indexSize == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ne_emlrtRTEI,
        "Coder:FE:PotentialMatrixMatrix", "Coder:FE:PotentialMatrixMatrix", 0);
    }
  }
}

void indexShapeCheck(const emlrtStack *sp, int32_T matrixSize, const int32_T
                     indexSize[2])
{
  boolean_T nonSingletonDimFound;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!(matrixSize != 1)) {
    nonSingletonDimFound = false;
    if (indexSize[0] != 1) {
      nonSingletonDimFound = true;
    }

    if (indexSize[1] != 1) {
      if (nonSingletonDimFound) {
        nonSingletonDimFound = false;
      } else {
        nonSingletonDimFound = true;
      }
    }

    if (nonSingletonDimFound) {
      nonSingletonDimFound = true;
    } else {
      nonSingletonDimFound = false;
    }
  } else {
    nonSingletonDimFound = false;
  }

  st.site = &qd_emlrtRSI;
  if (nonSingletonDimFound) {
    emlrtErrorWithMessageIdR2018a(&st, &ne_emlrtRTEI,
      "Coder:FE:PotentialVectorVector", "Coder:FE:PotentialVectorVector", 0);
  }
}

/* End of code generation (indexShapeCheck.c) */
