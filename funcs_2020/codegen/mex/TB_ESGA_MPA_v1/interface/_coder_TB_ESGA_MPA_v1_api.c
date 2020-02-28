/*
 * _coder_TB_ESGA_MPA_v1_api.c
 *
 * Code generation for function '_coder_TB_ESGA_MPA_v1_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v1.h"
#include "_coder_TB_ESGA_MPA_v1_api.h"
#include "TB_ESGA_MPA_v1_emxutil.h"
#include "TB_ESGA_MPA_v1_data.h"

/* Variable Definitions */
static emlrtRTEInfo yd_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_TB_ESGA_MPA_v1_api",         /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret_data[], int32_T ret_size[1]);
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, boolean_T **ret_data, int32_T ret_size[2]);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *F, const
  char_T *identifier, real_T **y_data, int32_T y_size[2]);
static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2]);
static real_T db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C, const
  char_T *identifier, creal_T y_data[], int32_T y_size[2]);
static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *y_all, const
  char_T *identifier, emxArray_creal_T *y);
static const mxArray *emlrt_marshallOut(const emxArray_real_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, creal_T y_data[], int32_T y_size[2]);
static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret_data[], int32_T ret_size[2]);
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
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *edge_subset,
  const char_T *identifier, emxArray_struct0_T *y);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_struct0_T *y);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y_data[], int32_T y_size[2]);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2]);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret_data[], int32_T ret_size[2]);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2]);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret_data[], int32_T ret_size[1])
{
  static const int32_T dims[1] = { 64 };

  const boolean_T bv5[1] = { true };

  int32_T iv8[1];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 1U, dims, &bv5[0],
    iv8);
  ret_size[0] = iv8[0];
  emlrtImportArrayR2015b(sp, src, (void *)ret_data, 8, true);
  emlrtDestroyArray(&src);
}

static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_creal_T *y)
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
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
  emlrtMsgIdentifier *msgId, boolean_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = { 64, 6 };

  const boolean_T bv6[2] = { true, true };

  int32_T iv9[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, dims, &bv6[0],
    iv9);
  ret_size[0] = iv9[0];
  ret_size[1] = iv9[1];
  *ret_data = (boolean_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *F, const
  char_T *identifier, real_T **y_data, int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r7;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(F), &thisId, &r7, y_size);
  *y_data = r7;
  emlrtDestroyArray(&F);
}

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret)
{
  static const int32_T dims[3] = { 40, 80, 20 };

  const boolean_T bv7[3] = { true, true, true };

  int32_T iv10[3];
  int32_T i12;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 3U, dims, &bv7[0],
    iv10);
  i12 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv10[0];
  ret->size[1] = iv10[1];
  ret->size[2] = iv10[2];
  emxEnsureCapacity_creal_T2(sp, ret, i12, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, true);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2])
{
  real_T *r8;
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, &r8, y_size);
  *y_data = r8;
  emlrtDestroyArray(&u);
}

static real_T db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
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

static void eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[3] = { 80, 40, 512 };

  const boolean_T bv8[3] = { true, true, true };

  int32_T iv11[3];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 3U, dims, &bv8[0],
    iv11);
  ret->size[0] = iv11[0];
  ret->size[1] = iv11[1];
  ret->size[2] = iv11[2];
  ret->allocatedSize = ret->size[0] * ret->size[1] * ret->size[2];
  ret->data = (real_T *)emlrtMxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
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
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void fb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2] = { 1, 20 };

  const boolean_T bv9[2] = { true, true };

  int32_T iv12[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv9[0],
    iv12);
  ret_size[0] = iv12[0];
  ret_size[1] = iv12[1];
  emlrtImportArrayR2015b(sp, src, (void *)ret_data, 8, false);
  emlrtDestroyArray(&src);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *C_perms,
  const char_T *identifier, real_T **y_data, int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  real_T *r9;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  h_emlrt_marshallIn(sp, emlrtAlias(C_perms), &thisId, &r9, y_size);
  *y_data = r9;
  emlrtDestroyArray(&C_perms);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T **y_data, int32_T y_size[2])
{
  real_T *r10;
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, &r10, y_size);
  *y_data = r10;
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
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *codewords_binary_labels, const char_T *identifier, boolean_T **y_data,
  int32_T y_size[2])
{
  emlrtMsgIdentifier thisId;
  boolean_T *r11;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(codewords_binary_labels), &thisId, &r11,
                     y_size);
  *y_data = r11;
  emlrtDestroyArray(&codewords_binary_labels);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, boolean_T **y_data, int32_T y_size[2])
{
  boolean_T *r12;
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, &r12, y_size);
  *y_data = r12;
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
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
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
  y = db_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
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
  eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *edge_subset,
  const char_T *identifier, emxArray_struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  t_emlrt_marshallIn(sp, emlrtAlias(edge_subset), &thisId, y);
  emlrtDestroyArray(&edge_subset);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[1] = { "best_subset" };

  static const int32_T dims[2] = { 80, 40 };

  const boolean_T bv0[2] = { true, true };

  int32_T sizes[2];
  int32_T i10;
  int32_T n;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckVsStructR2012b(sp, parentId, u, 1, fieldNames, 2U, dims, &bv0[0],
    sizes);
  i10 = y->size[0] * y->size[1];
  y->size[0] = sizes[0];
  y->size[1] = sizes[1];
  emxEnsureCapacity_struct0_T(sp, y, i10, (emlrtRTEInfo *)NULL);
  n = sizes[0] * sizes[1];
  for (i10 = 0; i10 < n; i10++) {
    thisId.fIdentifier = "best_subset";
    u_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, i10, 0,
      "best_subset")), &thisId, y->data[i10].best_subset.data, y->data[i10].
                       best_subset.size);
  }

  emlrtDestroyArray(&u);
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y_data[], int32_T y_size[2])
{
  fb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_creal_T *ret)
{
  static const int32_T dims[3] = { 40, 20, 512 };

  const boolean_T bv1[3] = { true, true, true };

  int32_T iv4[3];
  int32_T i11;
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 3U, dims, &bv1[0],
    iv4);
  i11 = ret->size[0] * ret->size[1] * ret->size[2];
  ret->size[0] = iv4[0];
  ret->size[1] = iv4[1];
  ret->size[2] = iv4[2];
  emxEnsureCapacity_creal_T2(sp, ret, i11, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, true);
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = { 40, 80 };

  const boolean_T bv2[2] = { true, true };

  int32_T iv5[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv2[0],
    iv5);
  ret_size[0] = iv5[0];
  ret_size[1] = iv5[1];
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, creal_T ret_data[], int32_T ret_size[2])
{
  static const int32_T dims[2] = { 10, 64 };

  const boolean_T bv3[2] = { true, true };

  int32_T iv6[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", true, 2U, dims, &bv3[0],
    iv6);
  ret_size[0] = iv6[0];
  ret_size[1] = iv6[1];
  emlrtImportArrayR2015b(sp, src, (void *)ret_data, 8, true);
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T **ret_data, int32_T ret_size[2])
{
  static const int32_T dims[2] = { 10, 64 };

  const boolean_T bv4[2] = { true, true };

  int32_T iv7[2];
  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv4[0],
    iv7);
  ret_size[0] = iv7[0];
  ret_size[1] = iv7[1];
  *ret_data = (real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
}

void TB_ESGA_MPA_v1_api(const mxArray * const prhs[13], int32_T nlhs, const
  mxArray *plhs[2])
{
  emxArray_creal_T *y_all;
  emxArray_creal_T *H;
  emxArray_real_T *a_priori_beliefs;
  emxArray_struct0_T *edge_subset;
  emxArray_real_T *soft_bits;
  emxArray_real_T *hard_symbols;
  real_T (*F_data)[3200];
  int32_T F_size[2];
  real_T (*F_int_data)[3200];
  int32_T F_int_size[2];
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
  emxInit_creal_T2(&st, &y_all, 3, &yd_emlrtRTEI, true);
  emxInit_creal_T2(&st, &H, 3, &yd_emlrtRTEI, true);
  emxInit_real_T1(&st, &a_priori_beliefs, 3, &yd_emlrtRTEI, true);
  emxInit_struct0_T(&st, &edge_subset, 2, &yd_emlrtRTEI, true);
  emxInit_real_T1(&st, &soft_bits, 3, &yd_emlrtRTEI, true);
  emxInit_real_T(&st, &hard_symbols, 2, &yd_emlrtRTEI, true);

  /* Marshall function inputs */
  emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "y_all", y_all);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "F", (real_T **)&F_data, F_size);
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "F_int", (real_T **)&F_int_data,
                     F_int_size);
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
  s_emlrt_marshallIn(&st, emlrtAliasP(prhs[12]), "edge_subset", edge_subset);

  /* Invoke the target function */
  TB_ESGA_MPA_v1(&st, y_all, *F_data, F_size, *F_int_data, F_int_size, C_data,
                 C_size, *C_perms_data, C_perms_size, Aq_data, Aq_size,
                 *codewords_binary_labels_data, codewords_binary_labels_size, H,
                 Tm, r_th, a_priori_beliefs, varnoise, edge_subset, soft_bits,
                 hard_symbols);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(soft_bits);
  soft_bits->canFreeData = false;
  emxFree_real_T(&st, &soft_bits);
  emxFree_struct0_T(&st, &edge_subset);
  a_priori_beliefs->canFreeData = false;
  emxFree_real_T(&st, &a_priori_beliefs);
  emxFree_creal_T(&st, &H);
  emxFree_creal_T(&st, &y_all);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(hard_symbols);
  }

  hard_symbols->canFreeData = false;
  emxFree_real_T(&st, &hard_symbols);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_TB_ESGA_MPA_v1_api.c) */
