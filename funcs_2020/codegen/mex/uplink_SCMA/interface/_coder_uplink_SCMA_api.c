/*
 * _coder_uplink_SCMA_api.c
 *
 * Code generation for function '_coder_uplink_SCMA_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "uplink_SCMA.h"
#include "_coder_uplink_SCMA_api.h"
#include "uplink_SCMA_emxutil.h"
#include "uplink_SCMA_data.h"

/* Variable Definitions */
static emlrtRTEInfo p_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_uplink_SCMA_api",            /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *F, const
  char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C, const
  char_T *identifier, creal_T y_data[], int32_T y_size[2]);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *J, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_creal_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y_data[], int32_T y_size[2]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *all_symbols,
  const char_T *identifier, emxArray_real_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *H, const
  char_T *identifier, emxArray_creal_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y);
static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret_data[], int32_T ret_size[2]);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = k_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *F, const
  char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(F), &thisId, y);
  emlrtDestroyArray(&F);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  l_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C, const
  char_T *identifier, creal_T y_data[], int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(C), &thisId, y_data, y_size);
  emlrtDestroyArray(&C);
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *J, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(J), &thisId);
  emlrtDestroyArray(&J);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_creal_T *u)
{
  const mxArray *y;
  const mxArray *m0;
  y = NULL;
  m0 = emlrtCreateNumericArray(3, *(int32_T (*)[3])u->size, mxDOUBLE_CLASS,
    mxCOMPLEX);
  emlrtExportNumericArrayR2013b(sp, m0, (void *)&u->data[0], 8);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y_data[], int32_T y_size[2])
{
  m_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *all_symbols,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(all_symbols), &thisId, y);
  emlrtDestroyArray(&all_symbols);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  n_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *H, const
  char_T *identifier, emxArray_creal_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(H), &thisId, y);
  emlrtDestroyArray(&H);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y)
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 100, 200 };

  const boolean_T bv0[2] = { true, true };

  int32_T iv3[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv0[0],
    iv3);
  ret->size[0] = iv3[0];
  ret->size[1] = iv3[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2] = { 10, 64 };

  const boolean_T bv1[2] = { true, true };

  int32_T iv4[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 2U, dims, &bv1[0],
    iv4);
  ret_size[0] = iv4[0];
  ret_size[1] = iv4[1];
  emlrtImportArrayR2015b(sp, src, (void *)ret_data, 8, true);
  emlrtDestroyArray(&src);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 200, 512 };

  const boolean_T bv2[2] = { true, true };

  int32_T iv5[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv2[0],
    iv5);
  ret->size[0] = iv5[0];
  ret->size[1] = iv5[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret)
{
  static const int32_T dims[3] = { 100, 200, 10 };

  const boolean_T bv3[3] = { true, true, true };

  int32_T iv6[3];
  int32_T i2;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 3U, dims, &bv3[0],
    iv6);
  i2 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv6[0];
  ret->size[1] = iv6[1];
  ret->size[2] = iv6[2];
  emxEnsureCapacity_creal_T(sp, ret, i2, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, true);
  emlrtDestroyArray(&src);
}

void uplink_SCMA_api(const mxArray * const prhs[9], int32_T nlhs, const mxArray *
                     plhs[3])
{
  emxArray_real_T *F;
  emxArray_real_T *all_symbols;
  emxArray_creal_T *H;
  emxArray_creal_T *y;
  emxArray_creal_T *X;
  emxArray_creal_T *SCMA_Symbols;
  real_T J;
  real_T K;
  real_T N;
  real_T Ns;
  real_T Nr;
  creal_T C_data[640];
  int32_T C_size[2];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &F, 2, &p_emlrtRTEI, true);
  emxInit_real_T(&st, &all_symbols, 2, &p_emlrtRTEI, true);
  emxInit_creal_T2(&st, &H, 3, &p_emlrtRTEI, true);
  emxInit_creal_T2(&st, &y, 3, &p_emlrtRTEI, true);
  emxInit_creal_T2(&st, &X, 3, &p_emlrtRTEI, true);
  emxInit_creal_T2(&st, &SCMA_Symbols, 3, &p_emlrtRTEI, true);

  /* Marshall function inputs */
  J = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "J");
  K = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "K");
  N = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "N");
  Ns = emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "Ns");
  Nr = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "Nr");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "F", F);
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "C", C_data, C_size);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[7]), "all_symbols", all_symbols);
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "H", H);

  /* Invoke the target function */
  uplink_SCMA(&st, J, K, N, Ns, Nr, F, C_data, C_size, all_symbols, H, y, X,
              SCMA_Symbols);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, y);
  emxFree_creal_T(&st, &y);
  emxFree_creal_T(&st, &H);
  all_symbols->canFreeData = false;
  emxFree_real_T(&st, &all_symbols);
  F->canFreeData = false;
  emxFree_real_T(&st, &F);
  if (nlhs > 1) {
    plhs[1] = emlrt_marshallOut(&st, X);
  }

  emxFree_creal_T(&st, &X);
  if (nlhs > 2) {
    plhs[2] = emlrt_marshallOut(&st, SCMA_Symbols);
  }

  emxFree_creal_T(&st, &SCMA_Symbols);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_uplink_SCMA_api.c) */
