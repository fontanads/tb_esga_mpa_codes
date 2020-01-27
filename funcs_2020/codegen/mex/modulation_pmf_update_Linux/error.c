/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "modulation_pmf_update_Linux.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo e_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/shared/coder/coder/+coder/+internal/error.m"/* pName */
};

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  static const char_T varargin_1[3] = { 'l', 'o', 'g' };

  emlrtErrorWithMessageIdR2018a(sp, &e_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4, 3,
    varargin_1);
}

void error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &e_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit",
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
}

/* End of code generation (error.c) */
