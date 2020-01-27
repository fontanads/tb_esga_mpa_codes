/*
 * modulation_pmf_update.c
 *
 * Code generation for function 'modulation_pmf_update'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "modulation_pmf_update.h"
#include "mpower.h"
#include "modulation_pmf_update_emxutil.h"
#include "sum.h"
#include "error.h"
#include "exp.h"
#include "eml_int_forloop_overflow_check.h"
#include "modulation_pmf_update_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 8,     /* lineNo */
  "modulation_pmf_update",             /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 14,  /* lineNo */
  "modulation_pmf_update",             /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 16,  /* lineNo */
  "modulation_pmf_update",             /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 26,  /* lineNo */
  "modulation_pmf_update",             /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 30,  /* lineNo */
  "modulation_pmf_update",             /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 31,  /* lineNo */
  "modulation_pmf_update",             /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 31,  /* lineNo */
  "squeeze",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\squeeze.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 54,  /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 33,  /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 114, /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 13,  /* lineNo */
  "log",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\log.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 16,  /* lineNo */
  "log",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\log.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 13,  /* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 19,  /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 40,  /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 114, /* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 852,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 844,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 894,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 910,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 10,  /* lineNo */
  1,                                   /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 16,/* lineNo */
  13,                                  /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 16,/* lineNo */
  28,                                  /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 30,/* lineNo */
  34,                                  /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 30,/* lineNo */
  42,                                  /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 1, /* lineNo */
  37,                                  /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 30,/* lineNo */
  79,                                  /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 31,/* lineNo */
  28,                                  /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 32,/* lineNo */
  34,                                  /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 32,/* lineNo */
  42,                                  /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  44,                                  /* colNo */
  "soft_bits_MPA_input",               /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  48,                                  /* colNo */
  "soft_bits_MPA_input",               /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo l_emlrtRTEI = { 19,/* lineNo */
  14,                                  /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  46,                                  /* colNo */
  "codewords_binary_labels",           /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  47,                                  /* colNo */
  "codewords_binary_labels",           /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  65,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  69,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  102,                                 /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  106,                                 /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  32,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  36,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  30,                                  /* lineNo */
  9,                                   /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  55,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  31,                                  /* lineNo */
  59,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  65,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  69,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  32,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  36,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  32,                                  /* lineNo */
  9,                                   /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m"/* pName */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  34,                                  /* colNo */
  "P0",                                /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo m_emlrtRTEI = { 13,/* lineNo */
  15,                                  /* colNo */
  "rdivide",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 22,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 10,    /* lineNo */
  34,                                  /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 10,  /* lineNo */
  1,                                   /* colNo */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  34,                                  /* colNo */
  "P1",                                /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  23,                                  /* lineNo */
  13,                                  /* colNo */
  "P_label",                           /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  13,                                  /* colNo */
  "P_label",                           /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  13,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update",             /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\modulation_pmf_update.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void modulation_pmf_update(const emlrtStack *sp, const emxArray_real_T
  *soft_bits_MPA_input, const boolean_T codewords_binary_labels_data[], const
  int32_T codewords_binary_labels_size[2], emxArray_real_T
  *a_priori_probabilities)
{
  real_T M;
  int32_T i0;
  int32_T idx;
  int32_T j;
  emxArray_int32_T *r0;
  emxArray_real_T *varargin_1;
  emxArray_real_T *b_a_priori_probabilities;
  int32_T P0_size[2];
  int32_T ns;
  int32_T trueCount;
  int32_T k;
  real_T P_label_data[64];
  real_T P0_data[64];
  int32_T P_label_size[2];
  boolean_T overflow;
  int8_T b_varargin_1[2];
  boolean_T p;
  int8_T varargin_2[2];
  boolean_T exitg1;
  int32_T loop_ub;
  int32_T m;
  int32_T b_loop_ub;
  int32_T end;
  int32_T P0;
  int32_T b_end;
  int32_T c_loop_ub;
  int32_T P_label;
  int32_T c_end;
  boolean_T P1_idx_data[6];
  int32_T d_end;
  int32_T d_loop_ub;
  boolean_T P0_idx_data[6];
  int32_T tmp_data[6];
  int32_T b_tmp_data[6];
  int32_T iv0[2];
  real_T c_tmp_data[64];
  int32_T x_size[2];
  int32_T c_a_priori_probabilities[2];
  real_T x_data[64];
  emxArray_real_T b_x_data;
  real_T cte_norm;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* modulation_pmf_update Summary of this function goes here */
  /*    Detailed explanation goes here */
  st.site = &emlrtRSI;
  M = mpower(soft_bits_MPA_input->size[1]);
  i0 = a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
    a_priori_probabilities->size[2];
  a_priori_probabilities->size[0] = soft_bits_MPA_input->size[0];
  if (M != (int32_T)muDoubleScalarFloor(M)) {
    emlrtIntegerCheckR2012b(M, &emlrtDCI, sp);
  }

  a_priori_probabilities->size[1] = (int32_T)M;
  a_priori_probabilities->size[2] = soft_bits_MPA_input->size[2];
  emxEnsureCapacity_real_T(sp, a_priori_probabilities, i0, &emlrtRTEI);
  if (M != (int32_T)muDoubleScalarFloor(M)) {
    emlrtIntegerCheckR2012b(M, &b_emlrtDCI, sp);
  }

  idx = soft_bits_MPA_input->size[0] * (int32_T)M * soft_bits_MPA_input->size[2];
  for (i0 = 0; i0 < idx; i0++) {
    a_priori_probabilities->data[i0] = 0.0;
  }

  j = 0;
  emxInit_int32_T(sp, &r0, 1, &f_emlrtRTEI, true);
  emxInit_real_T(sp, &varargin_1, 2, &g_emlrtRTEI, true);
  emxInit_real_T(sp, &b_a_priori_probabilities, 2, &e_emlrtRTEI, true);
  while (j <= soft_bits_MPA_input->size[0] - 1) {
    if (0 <= soft_bits_MPA_input->size[2] - 1) {
      P0_size[0] = 1;
    }

    ns = 0;
    while (ns <= soft_bits_MPA_input->size[2] - 1) {
      st.site = &b_emlrtRSI;
      idx = soft_bits_MPA_input->size[1];
      i0 = soft_bits_MPA_input->size[2];
      trueCount = 1 + ns;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &b_emlrtBCI, &st);
      }

      i0 = soft_bits_MPA_input->size[0];
      k = 1 + j;
      if (!((k >= 1) && (k <= i0))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, i0, &emlrtBCI, &st);
      }

      for (i0 = 0; i0 < idx; i0++) {
        P_label_data[i0] = soft_bits_MPA_input->data[((k +
          soft_bits_MPA_input->size[0] * i0) + soft_bits_MPA_input->size[0] *
          soft_bits_MPA_input->size[1] * (trueCount - 1)) - 1];
      }

      b_st.site = &i_emlrtRSI;
      i0 = soft_bits_MPA_input->size[1];
      c_st.site = &k_emlrtRSI;
      d_st.site = &l_emlrtRSI;
      idx = 1;
      trueCount = soft_bits_MPA_input->size[1];
      if (trueCount > 1) {
        idx = soft_bits_MPA_input->size[1];
      }

      trueCount = soft_bits_MPA_input->size[1];
      if (trueCount > muIntScalarMax_sint32(i0, idx)) {
        c_st.site = &j_emlrtRSI;
        error(&c_st);
      }

      st.site = &c_emlrtRSI;
      idx = soft_bits_MPA_input->size[1];
      i0 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 1;
      varargin_1->size[1] = idx;
      emxEnsureCapacity_real_T1(&st, varargin_1, i0, &b_emlrtRTEI);
      for (i0 = 0; i0 < idx; i0++) {
        varargin_1->data[i0] = P_label_data[i0];
      }

      b_st.site = &c_emlrtRSI;
      b_exp(&b_st, varargin_1);
      P0_size[1] = varargin_1->size[1];
      idx = varargin_1->size[0] * varargin_1->size[1];
      for (i0 = 0; i0 < idx; i0++) {
        P0_data[i0] = varargin_1->data[i0];
      }

      idx = soft_bits_MPA_input->size[1];
      i0 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 1;
      varargin_1->size[1] = idx;
      emxEnsureCapacity_real_T1(&st, varargin_1, i0, &c_emlrtRTEI);
      for (i0 = 0; i0 < idx; i0++) {
        varargin_1->data[i0] = P_label_data[i0];
      }

      b_st.site = &c_emlrtRSI;
      b_exp(&b_st, varargin_1);
      P_label_size[0] = 1;
      P_label_size[1] = varargin_1->size[1];
      idx = varargin_1->size[0] * varargin_1->size[1];
      for (i0 = 0; i0 < idx; i0++) {
        P_label_data[i0] = 1.0 + varargin_1->data[i0];
      }

      for (i0 = 0; i0 < 2; i0++) {
        b_varargin_1[i0] = (int8_T)P0_size[i0];
        varargin_2[i0] = (int8_T)P_label_size[i0];
      }

      overflow = false;
      p = true;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k < 2)) {
        if (!(b_varargin_1[k] == varargin_2[k])) {
          p = false;
          exitg1 = true;
        } else {
          k++;
        }
      }

      if (p) {
        overflow = true;
      }

      if (!overflow) {
        emlrtErrorWithMessageIdR2018a(&st, &m_emlrtRTEI, "MATLAB:dimagree",
          "MATLAB:dimagree", 0);
      }

      idx = P0_size[1] - 1;
      for (i0 = 0; i0 <= idx; i0++) {
        P0_data[i0] /= P_label_data[i0];
      }

      /*  P0 = exp(LLR_jj_temp)./(1+exp(LLR_jj_temp)); */
      P_label_size[1] = soft_bits_MPA_input->size[1];
      idx = soft_bits_MPA_input->size[1];
      if (0 <= idx - 1) {
        memset(&P_label_data[0], 0, (uint32_T)(idx * (int32_T)sizeof(real_T)));
      }

      emlrtForLoopVectorCheckR2012b(1.0, 1.0, M, mxDOUBLE_CLASS, (int32_T)M,
        &l_emlrtRTEI, sp);
      if (0 <= (int32_T)M - 1) {
        loop_ub = codewords_binary_labels_size[1];
        b_loop_ub = codewords_binary_labels_size[1];
        end = codewords_binary_labels_size[1] - 1;
        P0 = P0_size[1];
        b_end = codewords_binary_labels_size[1] - 1;
        c_loop_ub = P0_size[1];
        P_label = P_label_size[1];
        c_end = codewords_binary_labels_size[1];
        d_end = codewords_binary_labels_size[1];
        d_loop_ub = P_label_size[1];
      }

      m = 1;
      while (m - 1 <= (int32_T)M - 1) {
        if (!((m >= 1) && (m <= codewords_binary_labels_size[0]))) {
          emlrtDynamicBoundsCheckR2012b(m, 1, codewords_binary_labels_size[0],
            &c_emlrtBCI, sp);
        }

        for (i0 = 0; i0 < loop_ub; i0++) {
          P1_idx_data[i0] = codewords_binary_labels_data[(m +
            codewords_binary_labels_size[0] * i0) - 1];
        }

        if (!((m >= 1) && (m <= codewords_binary_labels_size[0]))) {
          emlrtDynamicBoundsCheckR2012b(m, 1, codewords_binary_labels_size[0],
            &d_emlrtBCI, sp);
        }

        for (i0 = 0; i0 < b_loop_ub; i0++) {
          P0_idx_data[i0] = !codewords_binary_labels_data[(m +
            codewords_binary_labels_size[0] * i0) - 1];
        }

        trueCount = 0;
        for (idx = 0; idx <= end; idx++) {
          if (P1_idx_data[idx]) {
            trueCount++;
          }
        }

        k = 0;
        for (idx = 0; idx <= end; idx++) {
          if (P1_idx_data[idx]) {
            tmp_data[k] = idx + 1;
            k++;
          }
        }

        for (i0 = 0; i0 < trueCount; i0++) {
          if (!((tmp_data[i0] >= 1) && (tmp_data[i0] <= P0))) {
            emlrtDynamicBoundsCheckR2012b(tmp_data[i0], 1, P0, &r_emlrtBCI, sp);
          }
        }

        trueCount = 0;
        for (idx = 0; idx <= b_end; idx++) {
          if (P1_idx_data[idx]) {
            trueCount++;
          }
        }

        k = 0;
        for (idx = 0; idx <= b_end; idx++) {
          if (P1_idx_data[idx]) {
            b_tmp_data[k] = idx + 1;
            k++;
          }
        }

        idx = trueCount - 1;
        for (i0 = 0; i0 < c_loop_ub; i0++) {
          c_tmp_data[i0] = 1.0 - P0_data[i0];
        }

        for (i0 = 0; i0 <= idx; i0++) {
          if (!((b_tmp_data[i0] >= 1) && (b_tmp_data[i0] <= P_label))) {
            emlrtDynamicBoundsCheckR2012b(b_tmp_data[i0], 1, P_label,
              &s_emlrtBCI, sp);
          }

          P_label_data[b_tmp_data[i0] - 1] = c_tmp_data[b_tmp_data[i0] - 1];
        }

        for (idx = 0; idx < c_end; idx++) {
          if (P0_idx_data[idx] && (!((idx + 1 >= 1) && (idx + 1 <= P0_size[1]))))
          {
            emlrtDynamicBoundsCheckR2012b(idx + 1, 1, P0_size[1], &q_emlrtBCI,
              sp);
          }
        }

        for (idx = 0; idx < d_end; idx++) {
          if (P0_idx_data[idx]) {
            if (!((idx + 1 >= 1) && (idx + 1 <= P_label_size[1]))) {
              emlrtDynamicBoundsCheckR2012b(idx + 1, 1, P_label_size[1],
                &t_emlrtBCI, sp);
            }

            P_label_data[idx] = P0_data[idx];
          }
        }

        st.site = &d_emlrtRSI;
        x_size[0] = 1;
        x_size[1] = P_label_size[1];
        for (i0 = 0; i0 < d_loop_ub; i0++) {
          x_data[i0] = P_label_data[i0] + 1.0E-50;
        }

        overflow = false;
        for (k = 0; k < x_size[1]; k++) {
          if (overflow || (x_data[k] < 0.0)) {
            overflow = true;
          } else {
            overflow = false;
          }
        }

        if (overflow) {
          b_st.site = &p_emlrtRSI;
          b_error(&b_st);
        }

        b_st.site = &q_emlrtRSI;
        idx = x_size[1];
        c_st.site = &n_emlrtRSI;
        for (k = 0; k < idx; k++) {
          x_data[k] = muDoubleScalarLog(x_data[k]);
        }

        b_x_data.data = (real_T *)&x_data;
        b_x_data.size = (int32_T *)&x_size;
        b_x_data.allocatedSize = 64;
        b_x_data.numDimensions = 2;
        b_x_data.canFreeData = false;
        i0 = a_priori_probabilities->size[0];
        trueCount = 1 + j;
        if (!((trueCount >= 1) && (trueCount <= i0))) {
          emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &u_emlrtBCI, sp);
        }

        i0 = a_priori_probabilities->size[1];
        if (!((m >= 1) && (m <= i0))) {
          emlrtDynamicBoundsCheckR2012b(m, 1, i0, &u_emlrtBCI, sp);
        }

        i0 = a_priori_probabilities->size[2];
        k = 1 + ns;
        if (!((k >= 1) && (k <= i0))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, i0, &u_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        a_priori_probabilities->data[((trueCount + a_priori_probabilities->size
          [0] * (m - 1)) + a_priori_probabilities->size[0] *
          a_priori_probabilities->size[1] * (k - 1)) - 1] = sum(&st, &b_x_data);
        m++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /*  end m */
      /*  pmf normalization */
      i0 = a_priori_probabilities->size[0];
      trueCount = j + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &i_emlrtBCI, sp);
      }

      idx = a_priori_probabilities->size[1];
      i0 = r0->size[0];
      r0->size[0] = idx;
      emxEnsureCapacity_int32_T(sp, r0, i0, &d_emlrtRTEI);
      for (i0 = 0; i0 < idx; i0++) {
        r0->data[i0] = i0;
      }

      i0 = a_priori_probabilities->size[2];
      trueCount = ns + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &j_emlrtBCI, sp);
      }

      i0 = a_priori_probabilities->size[0];
      trueCount = j + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &e_emlrtBCI, sp);
      }

      i0 = a_priori_probabilities->size[2];
      trueCount = ns + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &f_emlrtBCI, sp);
      }

      iv0[0] = 1;
      iv0[1] = r0->size[0];
      idx = a_priori_probabilities->size[1];
      i0 = b_a_priori_probabilities->size[0] * b_a_priori_probabilities->size[1];
      b_a_priori_probabilities->size[0] = 1;
      b_a_priori_probabilities->size[1] = idx;
      emxEnsureCapacity_real_T1(sp, b_a_priori_probabilities, i0, &e_emlrtRTEI);
      for (i0 = 0; i0 < idx; i0++) {
        b_a_priori_probabilities->data[b_a_priori_probabilities->size[0] * i0] =
          a_priori_probabilities->data[(j + a_priori_probabilities->size[0] * i0)
          + a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
          ns];
      }

      for (i0 = 0; i0 < 2; i0++) {
        c_a_priori_probabilities[i0] = b_a_priori_probabilities->size[i0];
      }

      emlrtSubAssignSizeCheckR2012b(&iv0[0], 2, &c_a_priori_probabilities[0], 2,
        &emlrtECI, sp);
      st.site = &e_emlrtRSI;
      idx = a_priori_probabilities->size[1];
      i0 = a_priori_probabilities->size[2];
      trueCount = 1 + ns;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &h_emlrtBCI, &st);
      }

      i0 = a_priori_probabilities->size[0];
      k = 1 + j;
      if (!((k >= 1) && (k <= i0))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, i0, &g_emlrtBCI, &st);
      }

      i0 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 1;
      varargin_1->size[1] = idx;
      emxEnsureCapacity_real_T1(&st, varargin_1, i0, &g_emlrtRTEI);
      for (i0 = 0; i0 < idx; i0++) {
        varargin_1->data[varargin_1->size[0] * i0] =
          a_priori_probabilities->data[((k + a_priori_probabilities->size[0] *
          i0) + a_priori_probabilities->size[0] * a_priori_probabilities->size[1]
          * (trueCount - 1)) - 1];
      }

      b_st.site = &v_emlrtRSI;
      c_st.site = &w_emlrtRSI;
      d_st.site = &x_emlrtRSI;
      i0 = a_priori_probabilities->size[1];
      if (i0 == 1) {
      } else {
        i0 = a_priori_probabilities->size[1];
        if (i0 != 1) {
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &n_emlrtRTEI,
            "Coder:toolbox:autoDimIncompatibility",
            "Coder:toolbox:autoDimIncompatibility", 0);
        }
      }

      e_st.site = &y_emlrtRSI;
      i0 = a_priori_probabilities->size[1];
      trueCount = a_priori_probabilities->size[1];
      if (trueCount <= 2) {
        i0 = a_priori_probabilities->size[1];
        if (i0 == 1) {
          cte_norm = a_priori_probabilities->data[j +
            a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
            ns];
        } else if ((a_priori_probabilities->data[j +
                    a_priori_probabilities->size[0] *
                    a_priori_probabilities->size[1] * ns] <
                    a_priori_probabilities->data[(j +
                     a_priori_probabilities->size[0]) +
                    a_priori_probabilities->size[0] *
                    a_priori_probabilities->size[1] * ns]) ||
                   (muDoubleScalarIsNaN(a_priori_probabilities->data[j +
                     a_priori_probabilities->size[0] *
                     a_priori_probabilities->size[1] * ns]) &&
                    (!muDoubleScalarIsNaN(a_priori_probabilities->data[(j +
            a_priori_probabilities->size[0]) + a_priori_probabilities->size[0] *
          a_priori_probabilities->size[1] * ns])))) {
          cte_norm = a_priori_probabilities->data[(j +
            a_priori_probabilities->size[0]) + a_priori_probabilities->size[0] *
            a_priori_probabilities->size[1] * ns];
        } else {
          cte_norm = a_priori_probabilities->data[j +
            a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
            ns];
        }
      } else {
        f_st.site = &bb_emlrtRSI;
        trueCount = a_priori_probabilities->size[1];
        if (!muDoubleScalarIsNaN(a_priori_probabilities->data[j +
             a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
             ns])) {
          idx = 1;
        } else {
          idx = 0;
          g_st.site = &cb_emlrtRSI;
          k = a_priori_probabilities->size[1];
          if (2 > k) {
            overflow = false;
          } else {
            k = a_priori_probabilities->size[1];
            overflow = (k > 2147483646);
          }

          if (overflow) {
            h_st.site = &o_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          k = 2;
          exitg1 = false;
          while ((!exitg1) && (k <= trueCount)) {
            if (!muDoubleScalarIsNaN(varargin_1->data[k - 1])) {
              idx = k;
              exitg1 = true;
            } else {
              k++;
            }
          }
        }

        if (idx == 0) {
          cte_norm = a_priori_probabilities->data[j +
            a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
            ns];
        } else {
          f_st.site = &ab_emlrtRSI;
          cte_norm = a_priori_probabilities->data[(j +
            a_priori_probabilities->size[0] * (idx - 1)) +
            a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
            ns];
          g_st.site = &db_emlrtRSI;
          trueCount = a_priori_probabilities->size[1];
          if (idx + 1 > trueCount) {
            overflow = false;
          } else {
            trueCount = a_priori_probabilities->size[1];
            overflow = (trueCount > 2147483646);
          }

          if (overflow) {
            h_st.site = &o_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          while (idx + 1 <= i0) {
            if (cte_norm < varargin_1->data[idx]) {
              cte_norm = varargin_1->data[idx];
            }

            idx++;
          }
        }
      }

      idx = a_priori_probabilities->size[1];
      i0 = b_a_priori_probabilities->size[0] * b_a_priori_probabilities->size[1];
      b_a_priori_probabilities->size[0] = 1;
      b_a_priori_probabilities->size[1] = idx;
      emxEnsureCapacity_real_T1(sp, b_a_priori_probabilities, i0, &e_emlrtRTEI);
      for (i0 = 0; i0 < idx; i0++) {
        b_a_priori_probabilities->data[b_a_priori_probabilities->size[0] * i0] =
          a_priori_probabilities->data[(j + a_priori_probabilities->size[0] * i0)
          + a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
          ns] - cte_norm;
      }

      idx = b_a_priori_probabilities->size[1];
      for (i0 = 0; i0 < idx; i0++) {
        a_priori_probabilities->data[(j + a_priori_probabilities->size[0] *
          r0->data[i0]) + a_priori_probabilities->size[0] *
          a_priori_probabilities->size[1] * ns] = b_a_priori_probabilities->
          data[b_a_priori_probabilities->size[0] * i0];
      }

      idx = a_priori_probabilities->size[1];
      i0 = a_priori_probabilities->size[2];
      trueCount = 1 + ns;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &l_emlrtBCI, sp);
      }

      i0 = a_priori_probabilities->size[0];
      k = 1 + j;
      if (!((k >= 1) && (k <= i0))) {
        emlrtDynamicBoundsCheckR2012b(k, 1, i0, &k_emlrtBCI, sp);
      }

      i0 = varargin_1->size[0] * varargin_1->size[1];
      varargin_1->size[0] = 1;
      varargin_1->size[1] = idx;
      emxEnsureCapacity_real_T1(sp, varargin_1, i0, &h_emlrtRTEI);
      for (i0 = 0; i0 < idx; i0++) {
        varargin_1->data[varargin_1->size[0] * i0] =
          a_priori_probabilities->data[((k + a_priori_probabilities->size[0] *
          i0) + a_priori_probabilities->size[0] * a_priori_probabilities->size[1]
          * (trueCount - 1)) - 1];
      }

      st.site = &f_emlrtRSI;
      b_exp(&st, varargin_1);
      st.site = &f_emlrtRSI;
      cte_norm = sum(&st, varargin_1);
      st.site = &f_emlrtRSI;
      if (cte_norm < 0.0) {
        b_st.site = &p_emlrtRSI;
        b_error(&b_st);
      }

      cte_norm = muDoubleScalarLog(cte_norm);
      i0 = a_priori_probabilities->size[0];
      trueCount = j + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &o_emlrtBCI, sp);
      }

      idx = a_priori_probabilities->size[1];
      i0 = r0->size[0];
      r0->size[0] = idx;
      emxEnsureCapacity_int32_T(sp, r0, i0, &i_emlrtRTEI);
      for (i0 = 0; i0 < idx; i0++) {
        r0->data[i0] = i0;
      }

      i0 = a_priori_probabilities->size[2];
      trueCount = ns + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &p_emlrtBCI, sp);
      }

      i0 = a_priori_probabilities->size[0];
      trueCount = j + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &m_emlrtBCI, sp);
      }

      i0 = a_priori_probabilities->size[2];
      trueCount = ns + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &n_emlrtBCI, sp);
      }

      iv0[0] = 1;
      iv0[1] = r0->size[0];
      idx = a_priori_probabilities->size[1];
      i0 = b_a_priori_probabilities->size[0] * b_a_priori_probabilities->size[1];
      b_a_priori_probabilities->size[0] = 1;
      b_a_priori_probabilities->size[1] = idx;
      emxEnsureCapacity_real_T1(sp, b_a_priori_probabilities, i0, &j_emlrtRTEI);
      for (i0 = 0; i0 < idx; i0++) {
        b_a_priori_probabilities->data[b_a_priori_probabilities->size[0] * i0] =
          a_priori_probabilities->data[(j + a_priori_probabilities->size[0] * i0)
          + a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
          ns];
      }

      for (i0 = 0; i0 < 2; i0++) {
        c_a_priori_probabilities[i0] = b_a_priori_probabilities->size[i0];
      }

      emlrtSubAssignSizeCheckR2012b(&iv0[0], 2, &c_a_priori_probabilities[0], 2,
        &b_emlrtECI, sp);
      idx = a_priori_probabilities->size[1];
      i0 = b_a_priori_probabilities->size[0] * b_a_priori_probabilities->size[1];
      b_a_priori_probabilities->size[0] = 1;
      b_a_priori_probabilities->size[1] = idx;
      emxEnsureCapacity_real_T1(sp, b_a_priori_probabilities, i0, &j_emlrtRTEI);
      for (i0 = 0; i0 < idx; i0++) {
        b_a_priori_probabilities->data[b_a_priori_probabilities->size[0] * i0] =
          a_priori_probabilities->data[(j + a_priori_probabilities->size[0] * i0)
          + a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
          ns] - cte_norm;
      }

      idx = b_a_priori_probabilities->size[1];
      for (i0 = 0; i0 < idx; i0++) {
        a_priori_probabilities->data[(j + a_priori_probabilities->size[0] *
          r0->data[i0]) + a_priori_probabilities->size[0] *
          a_priori_probabilities->size[1] * ns] = b_a_priori_probabilities->
          data[b_a_priori_probabilities->size[0] * i0];
      }

      ns++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(sp, &b_a_priori_probabilities);
  emxFree_real_T(sp, &varargin_1);
  emxFree_int32_T(sp, &r0);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (modulation_pmf_update.c) */
