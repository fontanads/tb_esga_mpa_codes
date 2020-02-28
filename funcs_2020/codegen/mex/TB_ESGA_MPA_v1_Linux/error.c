/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v1_Linux.h"
#include "error.h"

/* Variable Definitions */
static emlrtRTEInfo ne_emlrtRTEI = { 19,/* lineNo */
  5,                                   /* colNo */
  "error",                             /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/shared/coder/coder/+coder/+internal/error.m"/* pName */
};

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &ne_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedA", "Coder:toolbox:eml_setop_unsortedA", 0);
}

void c_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &ne_emlrtRTEI,
    "Coder:toolbox:reshape_emptyReshapeLimit",
    "Coder:toolbox:reshape_emptyReshapeLimit", 0);
}

void d_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &ne_emlrtRTEI,
    "Coder:toolbox:eml_setop_unsortedB", "Coder:toolbox:eml_setop_unsortedB", 0);
}

void e_error(const emlrtStack *sp)
{
  static const char_T varargin_1[4] = { 's', 'q', 'r', 't' };

  emlrtErrorWithMessageIdR2018a(sp, &ne_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4, 4,
    varargin_1);
}

void error(const emlrtStack *sp)
{
  static const char_T varargin_1[4] = { 'l', 'o', 'g', '2' };

  emlrtErrorWithMessageIdR2018a(sp, &ne_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4, 4,
    varargin_1);
}

void f_error(const emlrtStack *sp)
{
  static const char_T varargin_1[3] = { 'l', 'o', 'g' };

  emlrtErrorWithMessageIdR2018a(sp, &ne_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4, 3,
    varargin_1);
}

void g_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2018a(sp, &ne_emlrtRTEI, "MATLAB:nologicalnan",
    "MATLAB:nologicalnan", 0);
}

/* End of code generation (error.c) */
