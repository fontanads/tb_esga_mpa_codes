/*
 * eml_setop.c
 *
 * Code generation for function 'eml_setop'
 *
 */

/* Include files */
#include <math.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v0_Linux.h"
#include "eml_setop.h"
#include "issorted.h"
#include "TB_ESGA_MPA_v0_Linux_emxutil.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo pb_emlrtRSI = { 225,/* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 228,/* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 134,/* lineNo */
  22,                                  /* colNo */
  "eml_setop",                         /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 434,/* lineNo */
  9,                                   /* colNo */
  "eml_setop",                         /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 398,/* lineNo */
  14,                                  /* colNo */
  "eml_setop",                         /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 398,/* lineNo */
  9,                                   /* colNo */
  "eml_setop",                         /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 409,/* lineNo */
  18,                                  /* colNo */
  "eml_setop",                         /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 409,/* lineNo */
  13,                                  /* colNo */
  "eml_setop",                         /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = { 392,/* lineNo */
  5,                                   /* colNo */
  "eml_setop",                         /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 430,/* lineNo */
  5,                                   /* colNo */
  "eml_setop",                         /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = { 403,/* lineNo */
  9,                                   /* colNo */
  "eml_setop",                         /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pName */
};

/* Function Declarations */
static real_T skip_to_last_equal_value(int32_T *k, const emxArray_real_T *x);

/* Function Definitions */
static real_T skip_to_last_equal_value(int32_T *k, const emxArray_real_T *x)
{
  real_T xk;
  boolean_T exitg1;
  real_T absxk;
  int32_T exponent;
  boolean_T p;
  xk = x->data[*k - 1];
  exitg1 = false;
  while ((!exitg1) && (*k < x->size[1])) {
    absxk = muDoubleScalarAbs(xk / 2.0);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((muDoubleScalarAbs(xk - x->data[*k]) < absxk) || (muDoubleScalarIsInf
         (x->data[*k]) && muDoubleScalarIsInf(xk) && ((x->data[*k] > 0.0) == (xk
           > 0.0)))) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      (*k)++;
    } else {
      exitg1 = true;
    }
  }

  return xk;
}

void b_do_vectors(const emlrtStack *sp, const emxArray_real_T *a, const
                  emxArray_real_T *b, emxArray_real_T *c, emxArray_int32_T *ia,
                  emxArray_int32_T *ib)
{
  int32_T na;
  int32_T nb;
  int32_T ncmax;
  int32_T ialast;
  int32_T nc;
  int32_T iafirst;
  int32_T ibfirst;
  int32_T iblast;
  emxArray_int32_T *b_ia;
  int32_T b_ialast;
  real_T ak;
  int32_T b_iblast;
  real_T bk;
  real_T absxk;
  int32_T exponent;
  boolean_T p;
  boolean_T b1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  na = a->size[1];
  nb = b->size[1];
  ncmax = muIntScalarMin_sint32(na, nb);
  ialast = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = ncmax;
  emxEnsureCapacity_real_T(sp, c, ialast, &xb_emlrtRTEI);
  ialast = ia->size[0];
  ia->size[0] = ncmax;
  emxEnsureCapacity_int32_T1(sp, ia, ialast, &xb_emlrtRTEI);
  ialast = ib->size[0];
  ib->size[0] = ncmax;
  emxEnsureCapacity_int32_T1(sp, ib, ialast, &xb_emlrtRTEI);
  if (!issorted(a)) {
    st.site = &pb_emlrtRSI;
    b_error(&st);
  }

  if (!issorted(b)) {
    st.site = &tc_emlrtRSI;
    c_error(&st);
  }

  nc = 0;
  iafirst = 0;
  ialast = 1;
  ibfirst = 0;
  iblast = 1;
  while ((ialast <= na) && (iblast <= nb)) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    b_iblast = iblast;
    bk = skip_to_last_equal_value(&b_iblast, b);
    iblast = b_iblast;
    absxk = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((muDoubleScalarAbs(bk - ak) < absxk) || (muDoubleScalarIsInf(ak) &&
         muDoubleScalarIsInf(bk) && ((ak > 0.0) == (bk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      nc++;
      c->data[nc - 1] = ak;
      ia->data[nc - 1] = iafirst + 1;
      ib->data[nc - 1] = ibfirst + 1;
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = b_iblast + 1;
      ibfirst = b_iblast;
    } else {
      if (muDoubleScalarIsNaN(bk)) {
        b1 = !muDoubleScalarIsNaN(ak);
      } else {
        b1 = ((!muDoubleScalarIsNaN(ak)) && (ak < bk));
      }

      if (b1) {
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast = b_iblast + 1;
        ibfirst = b_iblast;
      }
    }
  }

  emxInit_int32_T(sp, &b_ia, 1, &ac_emlrtRTEI, true);
  if (ncmax > 0) {
    if (!(nc <= ncmax)) {
      emlrtErrorWithMessageIdR2018a(sp, &ke_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    ialast = b_ia->size[0];
    b_ia->size[0] = iafirst;
    emxEnsureCapacity_int32_T1(sp, b_ia, ialast, &ac_emlrtRTEI);
    for (ialast = 0; ialast < iafirst; ialast++) {
      b_ia->data[ialast] = ia->data[ialast];
    }

    ialast = ia->size[0];
    ia->size[0] = b_ia->size[0];
    emxEnsureCapacity_int32_T1(sp, ia, ialast, &bc_emlrtRTEI);
    iafirst = b_ia->size[0];
    for (ialast = 0; ialast < iafirst; ialast++) {
      ia->data[ialast] = b_ia->data[ialast];
    }

    if (!(nc <= ncmax)) {
      emlrtErrorWithMessageIdR2018a(sp, &ne_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nc) {
      iafirst = 0;
    } else {
      iafirst = nc;
    }

    ialast = b_ia->size[0];
    b_ia->size[0] = iafirst;
    emxEnsureCapacity_int32_T1(sp, b_ia, ialast, &qc_emlrtRTEI);
    for (ialast = 0; ialast < iafirst; ialast++) {
      b_ia->data[ialast] = ib->data[ialast];
    }

    ialast = ib->size[0];
    ib->size[0] = b_ia->size[0];
    emxEnsureCapacity_int32_T1(sp, ib, ialast, &rc_emlrtRTEI);
    iafirst = b_ia->size[0];
    for (ialast = 0; ialast < iafirst; ialast++) {
      ib->data[ialast] = b_ia->data[ialast];
    }
  }

  emxFree_int32_T(sp, &b_ia);
  if (ncmax > 0) {
    if (!(nc <= ncmax)) {
      emlrtErrorWithMessageIdR2018a(sp, &le_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    ialast = c->size[0] * c->size[1];
    if (1 > nc) {
      c->size[1] = 0;
    } else {
      c->size[1] = nc;
    }

    emxEnsureCapacity_real_T(sp, c, ialast, &yb_emlrtRTEI);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_do_vectors(const emlrtStack *sp, const emxArray_real_T *a, const
                  emxArray_real_T *b, emxArray_real_T *c, emxArray_int32_T *ia,
                  int32_T ib_size[1])
{
  int32_T na;
  uint32_T unnamed_idx_1;
  int32_T iblast;
  int32_T nc;
  int32_T nia;
  int32_T iafirst;
  int32_T ialast;
  int32_T b_ialast;
  real_T ak;
  real_T bk;
  real_T absxk;
  emxArray_int32_T *b_ia;
  int32_T exponent;
  boolean_T p;
  boolean_T b2;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  na = a->size[1];
  unnamed_idx_1 = (uint32_T)a->size[1];
  iblast = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity_real_T(sp, c, iblast, &xb_emlrtRTEI);
  iblast = ia->size[0];
  ia->size[0] = a->size[1];
  emxEnsureCapacity_int32_T1(sp, ia, iblast, &xb_emlrtRTEI);
  ib_size[0] = 0;
  if (!issorted(a)) {
    st.site = &pb_emlrtRSI;
    b_error(&st);
  }

  if (!issorted(b)) {
    st.site = &tc_emlrtRSI;
    c_error(&st);
  }

  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 1;
  iblast = 1;
  while ((ialast <= na) && (iblast <= b->size[1])) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    bk = skip_to_last_equal_value(&iblast, b);
    absxk = muDoubleScalarAbs(bk / 2.0);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((muDoubleScalarAbs(bk - ak) < absxk) || (muDoubleScalarIsInf(ak) &&
         muDoubleScalarIsInf(bk) && ((ak > 0.0) == (bk > 0.0)))) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast++;
    } else {
      if (muDoubleScalarIsNaN(bk)) {
        b2 = !muDoubleScalarIsNaN(ak);
      } else {
        b2 = ((!muDoubleScalarIsNaN(ak)) && (ak < bk));
      }

      if (b2) {
        nc++;
        nia++;
        c->data[nc - 1] = ak;
        ia->data[nia - 1] = iafirst + 1;
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast++;
      }
    }
  }

  while (ialast <= na) {
    iafirst = ialast;
    ak = skip_to_last_equal_value(&iafirst, a);
    nc++;
    nia++;
    c->data[nc - 1] = ak;
    ia->data[nia - 1] = ialast;
    ialast = iafirst + 1;
  }

  if (a->size[1] > 0) {
    if (!(nia <= a->size[1])) {
      emlrtErrorWithMessageIdR2018a(sp, &ke_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nia) {
      iafirst = 0;
    } else {
      iafirst = nia;
    }

    emxInit_int32_T(sp, &b_ia, 1, &ac_emlrtRTEI, true);
    iblast = b_ia->size[0];
    b_ia->size[0] = iafirst;
    emxEnsureCapacity_int32_T1(sp, b_ia, iblast, &ac_emlrtRTEI);
    for (iblast = 0; iblast < iafirst; iblast++) {
      b_ia->data[iblast] = ia->data[iblast];
    }

    iblast = ia->size[0];
    ia->size[0] = b_ia->size[0];
    emxEnsureCapacity_int32_T1(sp, ia, iblast, &bc_emlrtRTEI);
    iafirst = b_ia->size[0];
    for (iblast = 0; iblast < iafirst; iblast++) {
      ia->data[iblast] = b_ia->data[iblast];
    }

    emxFree_int32_T(sp, &b_ia);
    if (!(nc <= a->size[1])) {
      emlrtErrorWithMessageIdR2018a(sp, &le_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    iblast = c->size[0] * c->size[1];
    if (1 > nc) {
      c->size[1] = 0;
    } else {
      c->size[1] = nc;
    }

    emxEnsureCapacity_real_T(sp, c, iblast, &yb_emlrtRTEI);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void do_vectors(const emlrtStack *sp, const emxArray_real_T *a, real_T b,
                emxArray_real_T *c, emxArray_int32_T *ia, int32_T ib_size[1])
{
  int32_T na;
  uint32_T unnamed_idx_1;
  int32_T iblast;
  int32_T nc;
  int32_T nia;
  int32_T iafirst;
  int32_T ialast;
  int32_T b_ialast;
  real_T ak;
  real_T absxk;
  emxArray_int32_T *b_ia;
  int32_T exponent;
  boolean_T p;
  boolean_T b0;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  na = a->size[1];
  unnamed_idx_1 = (uint32_T)a->size[1];
  iblast = c->size[0] * c->size[1];
  c->size[0] = 1;
  c->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity_real_T(sp, c, iblast, &xb_emlrtRTEI);
  iblast = ia->size[0];
  ia->size[0] = a->size[1];
  emxEnsureCapacity_int32_T1(sp, ia, iblast, &xb_emlrtRTEI);
  ib_size[0] = 0;
  if (!issorted(a)) {
    st.site = &pb_emlrtRSI;
    b_error(&st);
  }

  nc = 0;
  nia = 0;
  iafirst = 0;
  ialast = 1;
  iblast = 1;
  while ((ialast <= na) && (iblast <= 1)) {
    b_ialast = ialast;
    ak = skip_to_last_equal_value(&b_ialast, a);
    ialast = b_ialast;
    absxk = muDoubleScalarAbs(b / 2.0);
    if ((!muDoubleScalarIsInf(absxk)) && (!muDoubleScalarIsNaN(absxk))) {
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }
    } else {
      absxk = rtNaN;
    }

    if ((muDoubleScalarAbs(b - ak) < absxk) || (muDoubleScalarIsInf(ak) &&
         muDoubleScalarIsInf(b) && ((ak > 0.0) == (b > 0.0)))) {
      p = true;
    } else {
      p = false;
    }

    if (p) {
      ialast = b_ialast + 1;
      iafirst = b_ialast;
      iblast = 2;
    } else {
      if (muDoubleScalarIsNaN(b)) {
        b0 = !muDoubleScalarIsNaN(ak);
      } else {
        b0 = ((!muDoubleScalarIsNaN(ak)) && (ak < b));
      }

      if (b0) {
        nc++;
        nia++;
        c->data[nc - 1] = ak;
        ia->data[nia - 1] = iafirst + 1;
        ialast = b_ialast + 1;
        iafirst = b_ialast;
      } else {
        iblast = 2;
      }
    }
  }

  while (ialast <= na) {
    iafirst = ialast;
    ak = skip_to_last_equal_value(&iafirst, a);
    nc++;
    nia++;
    c->data[nc - 1] = ak;
    ia->data[nia - 1] = ialast;
    ialast = iafirst + 1;
  }

  if (a->size[1] > 0) {
    if (!(nia <= a->size[1])) {
      emlrtErrorWithMessageIdR2018a(sp, &ke_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    if (1 > nia) {
      iafirst = 0;
    } else {
      iafirst = nia;
    }

    emxInit_int32_T(sp, &b_ia, 1, &ac_emlrtRTEI, true);
    iblast = b_ia->size[0];
    b_ia->size[0] = iafirst;
    emxEnsureCapacity_int32_T1(sp, b_ia, iblast, &ac_emlrtRTEI);
    for (iblast = 0; iblast < iafirst; iblast++) {
      b_ia->data[iblast] = ia->data[iblast];
    }

    iblast = ia->size[0];
    ia->size[0] = b_ia->size[0];
    emxEnsureCapacity_int32_T1(sp, ia, iblast, &bc_emlrtRTEI);
    iafirst = b_ia->size[0];
    for (iblast = 0; iblast < iafirst; iblast++) {
      ia->data[iblast] = b_ia->data[iblast];
    }

    emxFree_int32_T(sp, &b_ia);
    if (!(nc <= a->size[1])) {
      emlrtErrorWithMessageIdR2018a(sp, &le_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    iblast = c->size[0] * c->size[1];
    if (1 > nc) {
      c->size[1] = 0;
    } else {
      c->size[1] = nc;
    }

    emxEnsureCapacity_real_T(sp, c, iblast, &yb_emlrtRTEI);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (eml_setop.c) */
