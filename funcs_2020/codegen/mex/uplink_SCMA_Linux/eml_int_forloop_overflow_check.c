/*
 * eml_int_forloop_overflow_check.c
 *
 * Code generation for function 'eml_int_forloop_overflow_check'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "uplink_SCMA_Linux.h"
#include "eml_int_forloop_overflow_check.h"

/* Variable Definitions */
static emlrtRTEInfo x_emlrtRTEI = { 88,/* lineNo */
  9,                                   /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pName */
};

/* Function Definitions */
void check_forloop_overflow_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &x_emlrtRTEI,
    "Coder:toolbox:int_forloop_overflow", "Coder:toolbox:int_forloop_overflow",
    3, 4, 5, "int32");
}

/* End of code generation (eml_int_forloop_overflow_check.c) */
