/*
 * TB_ESGA_MPA_v1.h
 *
 * Code generation for function 'TB_ESGA_MPA_v1'
 *
 */

#ifndef TB_ESGA_MPA_V1_H
#define TB_ESGA_MPA_V1_H

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
extern void TB_ESGA_MPA_v1(const emlrtStack *sp, const emxArray_creal_T *y_all,
  const real_T F_data[], const int32_T F_size[2], const real_T F_int_data[],
  const int32_T F_int_size[2], const creal_T C_data[], const int32_T C_size[2],
  const real_T C_perms_data[], const int32_T C_perms_size[2], const creal_T
  Aq_data[], const int32_T Aq_size[1], const boolean_T
  codewords_binary_labels_data[], const int32_T codewords_binary_labels_size[2],
  const emxArray_creal_T *H, real_T Tm, real_T r_th, const emxArray_real_T
  *a_priori_beliefs, real_T varnoise, const emxArray_struct0_T *edge_subset,
  emxArray_real_T *soft_bits, emxArray_real_T *hard_symbols);

#endif

/* End of code generation (TB_ESGA_MPA_v1.h) */
