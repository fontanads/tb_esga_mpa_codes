/*
 * sum.h
 *
 * Code generation for function 'sum'
 *
 */

#ifndef SUM_H
#define SUM_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "TB_ESGA_MPA_v1_types.h"

/* Function Declarations */
extern void b_sum(const emxArray_creal_T *x, creal_T y_data[], int32_T y_size[1]);
extern real_T c_sum(const emlrtStack *sp, const emxArray_real_T *x);
extern real_T d_sum(const emlrtStack *sp, const emxArray_real_T *x);
extern creal_T sum(const emlrtStack *sp, const creal_T x_data[], const int32_T
                   x_size[2]);

#endif

/* End of code generation (sum.h) */
