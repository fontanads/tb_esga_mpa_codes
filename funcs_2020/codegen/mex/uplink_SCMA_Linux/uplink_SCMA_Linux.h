/*
 * uplink_SCMA_Linux.h
 *
 * Code generation for function 'uplink_SCMA_Linux'
 *
 */

#ifndef UPLINK_SCMA_LINUX_H
#define UPLINK_SCMA_LINUX_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "uplink_SCMA_Linux_types.h"

/* Function Declarations */
extern void uplink_SCMA_Linux(const emlrtStack *sp, real_T J, real_T K, real_T N,
  real_T Ns, real_T Nr, const emxArray_real_T *F, const creal_T C_data[], const
  int32_T C_size[2], const emxArray_real_T *all_symbols, const emxArray_creal_T *
  H, emxArray_creal_T *y, emxArray_creal_T *X, emxArray_creal_T *SCMA_Symbols);

#endif

/* End of code generation (uplink_SCMA_Linux.h) */
