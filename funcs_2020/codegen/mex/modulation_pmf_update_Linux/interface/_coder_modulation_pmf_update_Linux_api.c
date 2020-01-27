/*
 * _coder_modulation_pmf_update_Linux_api.c
 *
 * Code generation for function '_coder_modulation_pmf_update_Linux_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "modulation_pmf_update_Linux.h"
#include "_coder_modulation_pmf_update_Linux_api.h"
#include "modulation_pmf_update_Linux_emxutil.h"
#include "modulation_pmf_update_Linux_data.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_modulation_pmf_update_Linux_api",/* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *codewords_binary_labels, const char_T *identifier, boolean_T **y_data,
  int32_T y_size[2]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, boolean_T **y_data, int32_T y_size[2]);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *soft_bits_MPA_input, const char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, boolean_T **ret_data, int32_T ret_size[2]);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  e_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *codewords_binary_labels, const char_T *identifier, boolean_T **y_data,
  int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  boolean_T *r0;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(codewords_binary_labels), &thisId, &r0,
                     y_size);
  *y_data = r0;
  emlrtDestroyArray(&codewords_binary_labels);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, boolean_T **y_data, int32_T y_size[2])
{
  boolean_T *r1;
  f_emlrt_marshallIn(sp, emlrtAlias(u), parentId, &r1, y_size);
  *y_data = r1;
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { 200, 6, 512 };

  const boolean_T bv0[3] = { true, true, true };

  int32_T iv2[3];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv0[0],
    iv2);
  ret->size[0] = iv2[0];
  ret->size[1] = iv2[1];
  ret->size[2] = iv2[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *soft_bits_MPA_input, const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(soft_bits_MPA_input), &thisId, y);
  emlrtDestroyArray(&soft_bits_MPA_input);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv1[3] = { 0, 0, 0 };

  y = NULL;
  m0 = emlrtCreateNumericArray(3, iv1, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)m0, u->size, 3);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, boolean_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = { 64, 6 };

  const boolean_T bv1[2] = { true, true };

  int32_T iv3[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, dims, &bv1[0],
    iv3);
  ret_size[0] = iv3[0];
  ret_size[1] = iv3[1];
  *ret_data = (boolean_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

void modulation_pmf_update_Linux_api(const mxArray * const prhs[2], int32_T nlhs,
  const mxArray *plhs[1])
{
  emxArray_real_T *soft_bits_MPA_input;
  emxArray_real_T *a_priori_probabilities;
  boolean_T (*codewords_binary_labels_data)[384];
  int32_T codewords_binary_labels_size[2];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &soft_bits_MPA_input, 3, &b_emlrtRTEI, true);
  emxInit_real_T(&st, &a_priori_probabilities, 3, &b_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "soft_bits_MPA_input",
                   soft_bits_MPA_input);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "codewords_binary_labels",
                     (boolean_T **)&codewords_binary_labels_data,
                     codewords_binary_labels_size);

  /* Invoke the target function */
  modulation_pmf_update_Linux(&st, soft_bits_MPA_input,
    *codewords_binary_labels_data, codewords_binary_labels_size,
    a_priori_probabilities);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(a_priori_probabilities);
  a_priori_probabilities->canFreeData = false;
  emxFree_real_T(&st, &a_priori_probabilities);
  soft_bits_MPA_input->canFreeData = false;
  emxFree_real_T(&st, &soft_bits_MPA_input);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_modulation_pmf_update_Linux_api.c) */
