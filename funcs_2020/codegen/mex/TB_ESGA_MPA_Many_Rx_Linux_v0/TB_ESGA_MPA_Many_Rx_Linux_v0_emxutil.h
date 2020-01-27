/*
 * TB_ESGA_MPA_Many_Rx_Linux_v0_emxutil.h
 *
 * Code generation for function 'TB_ESGA_MPA_Many_Rx_Linux_v0_emxutil'
 *
 */

#ifndef TB_ESGA_MPA_MANY_RX_LINUX_V0_EMXUTIL_H
#define TB_ESGA_MPA_MANY_RX_LINUX_V0_EMXUTIL_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "TB_ESGA_MPA_Many_Rx_Linux_v0_types.h"

/* Function Declarations */
extern void c_emxFreeStruct_coder_internal_(const emlrtStack *sp,
  coder_internal_ref *pStruct);
extern void c_emxInitStruct_coder_internal_(const emlrtStack *sp,
  coder_internal_ref *pStruct, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void d_emxFreeStruct_coder_internal_(const emlrtStack *sp,
  coder_internal_ref_1 *pStruct);
extern void d_emxInitStruct_coder_internal_(const emlrtStack *sp,
  coder_internal_ref_1 *pStruct, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void e_emxFreeStruct_coder_internal_(const emlrtStack *sp,
  coder_internal_ref_3 *pStruct);
extern void e_emxInitStruct_coder_internal_(const emlrtStack *sp,
  coder_internal_ref_3 *pStruct, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void emxEnsureCapacity_boolean_T(const emlrtStack *sp, emxArray_boolean_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_boolean_T1(const emlrtStack *sp,
  emxArray_boolean_T *emxArray, int32_T oldNumel, const emlrtRTEInfo
  *srcLocation);
extern void emxEnsureCapacity_creal_T(const emlrtStack *sp, emxArray_creal_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_creal_T1(const emlrtStack *sp, emxArray_creal_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_creal_T2(const emlrtStack *sp, emxArray_creal_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_int32_T(const emlrtStack *sp, emxArray_int32_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_int32_T1(const emlrtStack *sp, emxArray_int32_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_int8_T(const emlrtStack *sp, emxArray_int8_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_int8_T1(const emlrtStack *sp, emxArray_int8_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_real_T(const emlrtStack *sp, emxArray_real_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_real_T1(const emlrtStack *sp, emxArray_real_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_real_T2(const emlrtStack *sp, emxArray_real_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxFree_boolean_T(const emlrtStack *sp, emxArray_boolean_T
  **pEmxArray);
extern void emxFree_creal_T(const emlrtStack *sp, emxArray_creal_T **pEmxArray);
extern void emxFree_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray);
extern void emxFree_int8_T(const emlrtStack *sp, emxArray_int8_T **pEmxArray);
extern void emxFree_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray);
extern void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T
  **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void emxInit_boolean_T1(const emlrtStack *sp, emxArray_boolean_T
  **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void emxInit_creal_T(const emlrtStack *sp, emxArray_creal_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_creal_T1(const emlrtStack *sp, emxArray_creal_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_creal_T2(const emlrtStack *sp, emxArray_creal_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_int32_T1(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_int8_T(const emlrtStack *sp, emxArray_int8_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_int8_T1(const emlrtStack *sp, emxArray_int8_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_real_T1(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_real_T2(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void f_emxFreeStruct_coder_internal_(const emlrtStack *sp,
  coder_internal_ref_5 *pStruct);
extern void f_emxInitStruct_coder_internal_(const emlrtStack *sp,
  coder_internal_ref_5 *pStruct, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void g_emxFreeStruct_coder_internal_(const emlrtStack *sp,
  coder_internal_ref_6 *pStruct);
extern void g_emxInitStruct_coder_internal_(const emlrtStack *sp,
  coder_internal_ref_6 *pStruct, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void h_emxFreeStruct_coder_internal_(const emlrtStack *sp,
  coder_internal_ref_7 *pStruct);
extern void h_emxInitStruct_coder_internal_(const emlrtStack *sp,
  coder_internal_ref_7 *pStruct, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);

#endif

/* End of code generation (TB_ESGA_MPA_Many_Rx_Linux_v0_emxutil.h) */
