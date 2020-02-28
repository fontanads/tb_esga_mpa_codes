/*
 * eml_setop.h
 *
 * Code generation for function 'eml_setop'
 *
 */

#ifndef EML_SETOP_H
#define EML_SETOP_H

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
extern void b_do_vectors(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, emxArray_real_T *c, emxArray_int32_T *ia, emxArray_int32_T
  *ib);
extern void c_do_vectors(const emlrtStack *sp, const emxArray_real_T *a, const
  emxArray_real_T *b, emxArray_real_T *c, emxArray_int32_T *ia, int32_T ib_size
  [1]);
extern void do_vectors(const emlrtStack *sp, const emxArray_real_T *a, real_T b,
  emxArray_real_T *c, emxArray_int32_T *ia, int32_T ib_size[1]);

#endif

/* End of code generation (eml_setop.h) */
