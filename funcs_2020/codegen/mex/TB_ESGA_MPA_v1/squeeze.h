/*
 * squeeze.h
 *
 * Code generation for function 'squeeze'
 *
 */

#ifndef SQUEEZE_H
#define SQUEEZE_H

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
extern void b_squeeze(const emlrtStack *sp, const emxArray_real_T *a,
                      emxArray_real_T *b);
extern void squeeze(const emlrtStack *sp, const creal_T a_data[], const int32_T
                    a_size[3], emxArray_creal_T *b);

#endif

/* End of code generation (squeeze.h) */
