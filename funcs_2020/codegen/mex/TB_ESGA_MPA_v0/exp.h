/*
 * exp.h
 *
 * Code generation for function 'exp'
 *
 */

#ifndef EXP_H
#define EXP_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "TB_ESGA_MPA_v0_types.h"

/* Function Declarations */
extern void b_exp(const emlrtStack *sp, emxArray_real_T *x);
extern void c_exp(const emlrtStack *sp, emxArray_real_T *x);

#endif

/* End of code generation (exp.h) */
