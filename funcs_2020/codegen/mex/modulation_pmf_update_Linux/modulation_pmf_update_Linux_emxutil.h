/*
 * modulation_pmf_update_Linux_emxutil.h
 *
 * Code generation for function 'modulation_pmf_update_Linux_emxutil'
 *
 */

#ifndef MODULATION_PMF_UPDATE_LINUX_EMXUTIL_H
#define MODULATION_PMF_UPDATE_LINUX_EMXUTIL_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "modulation_pmf_update_Linux_types.h"

/* Function Declarations */
extern void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxFree_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray);
extern void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);

#endif

/* End of code generation (modulation_pmf_update_Linux_emxutil.h) */
