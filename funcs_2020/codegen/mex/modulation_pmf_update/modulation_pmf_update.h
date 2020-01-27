/*
 * modulation_pmf_update.h
 *
 * Code generation for function 'modulation_pmf_update'
 *
 */

#ifndef MODULATION_PMF_UPDATE_H
#define MODULATION_PMF_UPDATE_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "modulation_pmf_update_types.h"

/* Function Declarations */
extern void modulation_pmf_update(const emlrtStack *sp, const emxArray_real_T
  *soft_bits_MPA_input, const boolean_T codewords_binary_labels_data[], const
  int32_T codewords_binary_labels_size[2], emxArray_real_T
  *a_priori_probabilities);

#endif

/* End of code generation (modulation_pmf_update.h) */
