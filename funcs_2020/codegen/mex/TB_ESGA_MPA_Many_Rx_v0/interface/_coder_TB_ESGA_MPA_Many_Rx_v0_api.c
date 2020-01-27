/*
 * _coder_TB_ESGA_MPA_Many_Rx_v0_api.c
 *
 * Code generation for function '_coder_TB_ESGA_MPA_Many_Rx_v0_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_Many_Rx_v0.h"
#include "_coder_TB_ESGA_MPA_Many_Rx_v0_api.h"
#include "TB_ESGA_MPA_Many_Rx_v0_emxutil.h"
#include "TB_ESGA_MPA_Many_Rx_v0_data.h"

/* Variable Definitions */
static emlrtRTEInfo nd_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_TB_ESGA_MPA_Many_Rx_v0_api", /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *F, const
  char_T *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C, const
  char_T *identifier, creal_T y_data[], int32_T y_size[2]);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *y_all, const
  char_T *identifier, emxArray_creal_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y_data[], int32_T y_size[2]);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_perms,
  const char_T *identifier, real_T **y_data, int32_T y_size[2]);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Aq, const
  char_T *identifier, creal_T y_data[], int32_T y_size[1]);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y_data[], int32_T y_size[1]);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *codewords_binary_labels, const char_T *identifier, boolean_T **y_data,
  int32_T y_size[2]);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, boolean_T **y_data, int32_T y_size[2]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *H, const
  char_T *identifier, emxArray_creal_T *y);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y);
static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Tm, const
  char_T *identifier);
static real_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a_priori_beliefs, const char_T *identifier, emxArray_real_T *y);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret_data[], int32_T ret_size[2]);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2]);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret_data[], int32_T ret_size[1]);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, boolean_T **ret_data, int32_T ret_size[2]);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret);

/* Function Definitions */
static real_T ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y)
{
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv3[2] = { 0, 0 };

  y = NULL;
  m1 = emlrtCreateNumericArray(2, iv3, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m1, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)m1, u->size, 2);
  emlrtAssign(&y, m1);
  return y;
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 200, 100 };

  const boolean_T bv7[2] = { true, true };

  int32_T iv11[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv7[0],
    iv11);
  ret->size[0] = iv11[0];
  ret->size[1] = iv11[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
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
  t_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
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

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *y_all, const
  char_T *identifier, emxArray_creal_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  b_emlrt_marshallIn(sp, emlrtAlias(y_all), &thisId, y);
  emlrtDestroyArray(&y_all);
}

static const mxArray *emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv2[3] = { 0, 0, 0 };

  y = NULL;
  m0 = emlrtCreateNumericArray(3, iv2, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u->data[0]);
  emlrtSetDimensions((mxArray *)m0, u->size, 3);
  emlrtAssign(&y, m0);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y_data[], int32_T y_size[2])
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_perms,
  const char_T *identifier, real_T **y_data, int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r7;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(C_perms), &thisId, &r7, y_size);
  *y_data = r7;
  emlrtDestroyArray(&C_perms);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2])
{
  real_T *r8;
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, &r8, y_size);
  *y_data = r8;
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Aq, const
  char_T *identifier, creal_T y_data[], int32_T y_size[1])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  j_emlrt_marshallIn(sp, emlrtAlias(Aq), &thisId, y_data, y_size);
  emlrtDestroyArray(&Aq);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y_data[], int32_T y_size[1])
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *codewords_binary_labels, const char_T *identifier, boolean_T **y_data,
  int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  boolean_T *r9;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(codewords_binary_labels), &thisId, &r9,
                     y_size);
  *y_data = r9;
  emlrtDestroyArray(&codewords_binary_labels);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, boolean_T **y_data, int32_T y_size[2])
{
  boolean_T *r10;
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, &r10, y_size);
  *y_data = r10;
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *H, const
  char_T *identifier, emxArray_creal_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  n_emlrt_marshallIn(sp, emlrtAlias(H), &thisId, y);
  emlrtDestroyArray(&H);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y)
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Tm, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = p_emlrt_marshallIn(sp, emlrtAlias(Tm), &thisId);
  emlrtDestroyArray(&Tm);
  return y;
}

static real_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *a_priori_beliefs, const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  r_emlrt_marshallIn(sp, emlrtAlias(a_priori_beliefs), &thisId, y);
  emlrtDestroyArray(&a_priori_beliefs);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret)
{
  static const int32_T dims[3] = { 100, 20, 256 };

  const boolean_T bv0[3] = { true, true, true };

  int32_T iv4[3];
  int32_T i13;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 3U, dims, &bv0[0],
    iv4);
  i13 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv4[0];
  ret->size[1] = iv4[1];
  ret->size[2] = iv4[2];
  emxEnsureCapacity_creal_T1(sp, ret, i13, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, true);
  emlrtDestroyArray(&src);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 100, 200 };

  const boolean_T bv1[2] = { true, true };

  int32_T iv5[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv1[0],
    iv5);
  ret->size[0] = iv5[0];
  ret->size[1] = iv5[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2] = { 10, 64 };

  const boolean_T bv2[2] = { true, true };

  int32_T iv6[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 2U, dims, &bv2[0],
    iv6);
  ret_size[0] = iv6[0];
  ret_size[1] = iv6[1];
  emlrtImportArrayR2015b(sp, src, (void *)ret_data, 8, true);
  emlrtDestroyArray(&src);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = { 10, 64 };

  const boolean_T bv3[2] = { true, true };

  int32_T iv7[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv3[0],
    iv7);
  ret_size[0] = iv7[0];
  ret_size[1] = iv7[1];
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret_data[], int32_T ret_size[1])
{
  static const int32_T dims[1] = { 64 };

  const boolean_T bv4[1] = { true };

  int32_T iv8[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims, &bv4[0],
    iv8);
  ret_size[0] = iv8[0];
  emlrtImportArrayR2015b(sp, src, (void *)ret_data, 8, true);
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, boolean_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = { 64, 6 };

  const boolean_T bv5[2] = { true, true };

  int32_T iv9[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, dims, &bv5[0],
    iv9);
  ret_size[0] = iv9[0];
  ret_size[1] = iv9[1];
  *ret_data = (boolean_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret)
{
  static const int32_T dims[3] = { 100, 200, 20 };

  const boolean_T bv6[3] = { true, true, true };

  int32_T iv10[3];
  int32_T i14;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 3U, dims, &bv6[0],
    iv10);
  i14 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv10[0];
  ret->size[1] = iv10[1];
  ret->size[2] = iv10[2];
  emxEnsureCapacity_creal_T1(sp, ret, i14, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, true);
  emlrtDestroyArray(&src);
}

void TB_ESGA_MPA_Many_Rx_v0_api(const mxArray * const prhs[12], int32_T nlhs,
  const mxArray *plhs[2])
{
  emxArray_creal_T *y_all;
  emxArray_real_T *F;
  emxArray_real_T *F_int;
  emxArray_creal_T *H;
  emxArray_real_T *a_priori_beliefs;
  emxArray_real_T *soft_bits;
  emxArray_real_T *hard_symbols;
  creal_T C_data[640];
  int32_T C_size[2];
  real_T (*C_perms_data)[640];
  int32_T C_perms_size[2];
  creal_T Aq_data[64];
  int32_T Aq_size[1];
  boolean_T (*codewords_binary_labels_data)[384];
  int32_T codewords_binary_labels_size[2];
  real_T Tm;
  real_T r_th;
  real_T varnoise;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_creal_T1(&st, &y_all, 3, &nd_emlrtRTEI, true);
  emxInit_real_T(&st, &F, 2, &nd_emlrtRTEI, true);
  emxInit_real_T(&st, &F_int, 2, &nd_emlrtRTEI, true);
  emxInit_creal_T1(&st, &H, 3, &nd_emlrtRTEI, true);
  emxInit_real_T(&st, &a_priori_beliefs, 2, &nd_emlrtRTEI, true);
  emxInit_real_T1(&st, &soft_bits, 3, &nd_emlrtRTEI, true);
  emxInit_real_T(&st, &hard_symbols, 2, &nd_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "y_all", y_all);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "F", F);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "F_int", F_int);
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "C", C_data, C_size);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "C_perms", (real_T **)
                     &C_perms_data, C_perms_size);
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "Aq", Aq_data, Aq_size);
  k_emlrt_marshallIn(&st, emlrtAlias(prhs[6]), "codewords_binary_labels",
                     (boolean_T **)&codewords_binary_labels_data,
                     codewords_binary_labels_size);
  m_emlrt_marshallIn(&st, emlrtAliasP(prhs[7]), "H", H);
  Tm = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[8]), "Tm");
  r_th = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[9]), "r_th");
  q_emlrt_marshallIn(&st, emlrtAlias(prhs[10]), "a_priori_beliefs",
                     a_priori_beliefs);
  varnoise = o_emlrt_marshallIn(&st, emlrtAliasP(prhs[11]), "varnoise");

  /* Invoke the target function */
  TB_ESGA_MPA_Many_Rx_v0(&st, y_all, F, F_int, C_data, C_size, *C_perms_data,
    C_perms_size, Aq_data, Aq_size, *codewords_binary_labels_data,
    codewords_binary_labels_size, H, Tm, r_th, a_priori_beliefs, varnoise,
    soft_bits, hard_symbols);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(soft_bits);
  soft_bits->canFreeData = false;
  emxFree_real_T(&st, &soft_bits);
  a_priori_beliefs->canFreeData = false;
  emxFree_real_T(&st, &a_priori_beliefs);
  emxFree_creal_T(&st, &H);
  F_int->canFreeData = false;
  emxFree_real_T(&st, &F_int);
  F->canFreeData = false;
  emxFree_real_T(&st, &F);
  emxFree_creal_T(&st, &y_all);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(hard_symbols);
  }

  hard_symbols->canFreeData = false;
  emxFree_real_T(&st, &hard_symbols);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_TB_ESGA_MPA_Many_Rx_v0_api.c) */
