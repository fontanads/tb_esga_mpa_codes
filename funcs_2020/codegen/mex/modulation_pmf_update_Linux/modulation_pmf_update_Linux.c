/*
 * modulation_pmf_update_Linux.c
 *
 * Code generation for function 'modulation_pmf_update_Linux'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "modulation_pmf_update_Linux.h"
#include "modulation_pmf_update_Linux_emxutil.h"
#include "sum.h"
#include "error.h"
#include "modulation_pmf_update_Linux_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 8,     /* lineNo */
  "modulation_pmf_update_Linux",       /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 18,  /* lineNo */
  "modulation_pmf_update_Linux",       /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 20,  /* lineNo */
  "modulation_pmf_update_Linux",       /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 32,  /* lineNo */
  "modulation_pmf_update_Linux",       /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 36,  /* lineNo */
  "modulation_pmf_update_Linux",       /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 37,  /* lineNo */
  "modulation_pmf_update_Linux",       /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 40,  /* lineNo */
  "mpower",                            /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/mpower.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 49,  /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 31,  /* lineNo */
  "squeeze",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/squeeze.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 54,  /* lineNo */
  "reshape",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/reshape.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 33,  /* lineNo */
  "reshape",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/reshape.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 13,  /* lineNo */
  "log",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elfun/log.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 13,  /* lineNo */
  "max",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/max.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 19,  /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 40,  /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 11,  /* lineNo */
  1,                                   /* colNo */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 22,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 13,/* lineNo */
  15,                                  /* colNo */
  "rdivide",                           /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/rdivide.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  34,                                  /* colNo */
  "P0",                                /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  38,                                  /* lineNo */
  9,                                   /* colNo */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m"/* pName */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  36,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  32,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  69,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  38,                                  /* lineNo */
  65,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  59,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  55,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  36,                                  /* lineNo */
  9,                                   /* colNo */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m"/* pName */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  36,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  32,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  106,                                 /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  102,                                 /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  69,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  36,                                  /* lineNo */
  65,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  47,                                  /* colNo */
  "codewords_binary_labels",           /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  46,                                  /* colNo */
  "codewords_binary_labels",           /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  48,                                  /* colNo */
  "soft_bits_MPA_input",               /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  44,                                  /* colNo */
  "soft_bits_MPA_input",               /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  34,                                  /* colNo */
  "P1",                                /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  13,                                  /* colNo */
  "P_label",                           /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  30,                                  /* lineNo */
  13,                                  /* colNo */
  "P_label",                           /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  13,                                  /* colNo */
  "a_priori_probabilities",            /* aName */
  "modulation_pmf_update_Linux",       /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/modulation_pmf_update_Linux.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
void modulation_pmf_update_Linux(const emlrtStack *sp, const emxArray_real_T
  *soft_bits_MPA_input, const boolean_T codewords_binary_labels_data[], const
  int32_T codewords_binary_labels_size[2], emxArray_real_T
  *a_priori_probabilities)
{
  int32_T M;
  int32_T i0;
  int32_T loop_ub;
  int32_T j;
  int32_T a_priori_probabilities_size[2];
  int32_T ns;
  int32_T b_a_priori_probabilities_size[2];
  int32_T trueCount;
  int32_T idx;
  real_T P0_data[6];
  int32_T x_size[2];
  real_T x_data[64];
  int32_T k;
  real_T b_x_data[64];
  int32_T P0_size[2];
  boolean_T p;
  int8_T varargin_1[2];
  boolean_T b_p;
  int8_T varargin_2[2];
  boolean_T exitg1;
  int32_T P_label_size_idx_1;
  real_T P_label_data[6];
  int32_T b_loop_ub;
  int32_T m;
  int32_T c_loop_ub;
  int32_T end;
  int32_T P0;
  int32_T b_end;
  int32_T P_label;
  int32_T c_end;
  int32_T d_end;
  boolean_T P1_idx_data[6];
  int8_T i1;
  int8_T tmp_data[64];
  boolean_T P0_idx_data[6];
  int32_T b_tmp_data[6];
  int32_T iv0[2];
  int32_T c_tmp_data[6];
  int32_T b_a_priori_probabilities[2];
  real_T d_tmp_data[6];
  int32_T b_x_size[2];
  real_T cte_norm;
  int32_T exitg2;
  real_T a_priori_probabilities_data[64];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;

  /* modulation_pmf_update Update the a priori symbol probabilities using */
  /* soft-bits from the FEC. */
  /*    Detailed explanation goes here */
  /*  read dimensions */
  st.site = &emlrtRSI;
  b_st.site = &g_emlrtRSI;
  c_st.site = &h_emlrtRSI;
  M = (int32_T)muDoubleScalarPower(2.0, soft_bits_MPA_input->size[1]);

  /*  buffers */
  i0 = a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
    a_priori_probabilities->size[2];
  a_priori_probabilities->size[0] = soft_bits_MPA_input->size[0];
  a_priori_probabilities->size[1] = M;
  a_priori_probabilities->size[2] = soft_bits_MPA_input->size[2];
  emxEnsureCapacity_real_T(sp, a_priori_probabilities, i0, &emlrtRTEI);
  loop_ub = soft_bits_MPA_input->size[0] * M * soft_bits_MPA_input->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    a_priori_probabilities->data[i0] = 0.0;
  }

  /*  to avoid log(0) */
  /*  */
  j = 0;
  while (j <= soft_bits_MPA_input->size[0] - 1) {
    /*  for each user */
    if (0 <= soft_bits_MPA_input->size[2] - 1) {
      a_priori_probabilities_size[0] = 1;
      b_a_priori_probabilities_size[0] = 1;
    }

    ns = 0;
    while (ns <= soft_bits_MPA_input->size[2] - 1) {
      /*  for each packet */
      st.site = &b_emlrtRSI;
      loop_ub = soft_bits_MPA_input->size[1];
      i0 = soft_bits_MPA_input->size[2];
      trueCount = 1 + ns;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &p_emlrtBCI, &st);
      }

      i0 = soft_bits_MPA_input->size[0];
      idx = 1 + j;
      if (!((idx >= 1) && (idx <= i0))) {
        emlrtDynamicBoundsCheckR2012b(idx, 1, i0, &q_emlrtBCI, &st);
      }

      for (i0 = 0; i0 < loop_ub; i0++) {
        P0_data[i0] = soft_bits_MPA_input->data[((idx +
          soft_bits_MPA_input->size[0] * i0) + soft_bits_MPA_input->size[0] *
          soft_bits_MPA_input->size[1] * (trueCount - 1)) - 1];
      }

      b_st.site = &i_emlrtRSI;
      i0 = soft_bits_MPA_input->size[1];
      c_st.site = &k_emlrtRSI;
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

      /*  read the input LLRs of packet ns (kb values corresponding to the bit LLRs of the ns-th symbol) */
      loop_ub = soft_bits_MPA_input->size[1];
      x_size[0] = 1;
      x_size[1] = loop_ub;
      if (0 <= loop_ub - 1) {
        memcpy(&x_data[0], &P0_data[0], (uint32_T)(loop_ub * (int32_T)sizeof
                (real_T)));
      }

      k = 0;
      i0 = soft_bits_MPA_input->size[1];
      while (k + 1 <= i0) {
        x_data[k] = muDoubleScalarExp(x_data[k]);
        k++;
      }

      idx = soft_bits_MPA_input->size[1];
      if (0 <= idx - 1) {
        memcpy(&b_x_data[0], &P0_data[0], (uint32_T)(idx * (int32_T)sizeof
                (real_T)));
      }

      k = 0;
      i0 = soft_bits_MPA_input->size[1];
      while (k + 1 <= i0) {
        b_x_data[k] = muDoubleScalarExp(b_x_data[k]);
        k++;
      }

      st.site = &c_emlrtRSI;
      P0_size[0] = 1;
      P0_size[1] = idx;
      for (i0 = 0; i0 < idx; i0++) {
        P0_data[i0] = 1.0 + b_x_data[i0];
      }

      for (i0 = 0; i0 < 2; i0++) {
        varargin_1[i0] = (int8_T)x_size[i0];
        varargin_2[i0] = (int8_T)P0_size[i0];
      }

      p = false;
      b_p = true;
      k = 0;
      exitg1 = false;
      while ((!exitg1) && (k < 2)) {
        if (!(varargin_1[k] == varargin_2[k])) {
          b_p = false;
          exitg1 = true;
        } else {
          k++;
        }
      }

      if (b_p) {
        p = true;
      }

      if (!p) {
        emlrtErrorWithMessageIdR2018a(&st, &d_emlrtRTEI, "MATLAB:dimagree",
          "MATLAB:dimagree", 0);
      }

      idx = loop_ub - 1;
      for (i0 = 0; i0 <= idx; i0++) {
        P0_data[i0] = x_data[i0] / P0_data[i0];
      }

      /*  probability of each of the kb bits being 0 (vector with 1, ..., kb entries)  */
      /*  probability of each of the kb bits being 1 (vector with 1, ..., kb entries)  */
      P_label_size_idx_1 = soft_bits_MPA_input->size[1];
      idx = soft_bits_MPA_input->size[1];
      if (0 <= idx - 1) {
        memset(&P_label_data[0], 0, (uint32_T)(idx * (int32_T)sizeof(real_T)));
      }

      /*  initialize */
      if (0 <= M - 1) {
        b_loop_ub = codewords_binary_labels_size[1];
        c_loop_ub = codewords_binary_labels_size[1];
        end = codewords_binary_labels_size[1] - 1;
        P0 = loop_ub;
        b_end = codewords_binary_labels_size[1] - 1;
        P_label = P_label_size_idx_1;
        c_end = codewords_binary_labels_size[1];
        d_end = codewords_binary_labels_size[1];
      }

      m = 1;
      while (m - 1 <= M - 1) {
        /*  for each symbol of the codebook */
        if (!((m >= 1) && (m <= codewords_binary_labels_size[0]))) {
          emlrtDynamicBoundsCheckR2012b(m, 1, codewords_binary_labels_size[0],
            &o_emlrtBCI, sp);
        }

        for (i0 = 0; i0 < b_loop_ub; i0++) {
          P1_idx_data[i0] = codewords_binary_labels_data[(m +
            codewords_binary_labels_size[0] * i0) - 1];
        }

        /*  logic label of symbol m (vector with kb entries, being the binary label of the symbol) :: locate 1's of the label */
        if (!((m >= 1) && (m <= codewords_binary_labels_size[0]))) {
          emlrtDynamicBoundsCheckR2012b(m, 1, codewords_binary_labels_size[0],
            &n_emlrtBCI, sp);
        }

        for (i0 = 0; i0 < c_loop_ub; i0++) {
          P0_idx_data[i0] = !codewords_binary_labels_data[(m +
            codewords_binary_labels_size[0] * i0) - 1];
        }

        /*  invert the logic label of symbol m :: locate 0's of the label */
        trueCount = 0;
        for (idx = 0; idx <= end; idx++) {
          if (P1_idx_data[idx]) {
            trueCount++;
          }
        }

        k = 0;
        for (idx = 0; idx <= end; idx++) {
          if (P1_idx_data[idx]) {
            b_tmp_data[k] = idx + 1;
            k++;
          }
        }

        for (i0 = 0; i0 < trueCount; i0++) {
          if (!((b_tmp_data[i0] >= 1) && (b_tmp_data[i0] <= P0))) {
            emlrtDynamicBoundsCheckR2012b(b_tmp_data[i0], 1, P0, &r_emlrtBCI, sp);
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
            c_tmp_data[k] = idx + 1;
            k++;
          }
        }

        idx = trueCount - 1;
        for (i0 = 0; i0 < P0; i0++) {
          d_tmp_data[i0] = 1.0 - P0_data[i0];
        }

        for (i0 = 0; i0 <= idx; i0++) {
          if (!((c_tmp_data[i0] >= 1) && (c_tmp_data[i0] <= P_label))) {
            emlrtDynamicBoundsCheckR2012b(c_tmp_data[i0], 1, P_label,
              &s_emlrtBCI, sp);
          }

          P_label_data[c_tmp_data[i0] - 1] = d_tmp_data[c_tmp_data[i0] - 1];
        }

        /*  @ the position of 1's, input the probability of being 1 */
        for (idx = 0; idx < c_end; idx++) {
          if (P0_idx_data[idx] && (!((idx + 1 >= 1) && (idx + 1 <= loop_ub)))) {
            emlrtDynamicBoundsCheckR2012b(idx + 1, 1, loop_ub, &emlrtBCI, sp);
          }
        }

        for (idx = 0; idx < d_end; idx++) {
          if (P0_idx_data[idx]) {
            if (!((idx + 1 >= 1) && (idx + 1 <= P_label_size_idx_1))) {
              emlrtDynamicBoundsCheckR2012b(idx + 1, 1, P_label_size_idx_1,
                &t_emlrtBCI, sp);
            }

            P_label_data[idx] = P0_data[idx];
          }
        }

        /*  @ the position of 0's, input the probability of being 0 */
        st.site = &d_emlrtRSI;
        b_x_size[0] = 1;
        b_x_size[1] = P_label_size_idx_1;
        for (i0 = 0; i0 < P_label; i0++) {
          d_tmp_data[i0] = P_label_data[i0] + 1.0E-50;
        }

        p = false;
        for (k = 0; k < P_label_size_idx_1; k++) {
          if (p || (d_tmp_data[k] < 0.0)) {
            p = true;
          } else {
            p = false;
          }
        }

        if (p) {
          b_st.site = &m_emlrtRSI;
          b_error(&b_st);
        }

        for (k = 0; k < P_label_size_idx_1; k++) {
          d_tmp_data[k] = muDoubleScalarLog(d_tmp_data[k]);
        }

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
        idx = 1 + ns;
        if (!((idx >= 1) && (idx <= i0))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i0, &u_emlrtBCI, sp);
        }

        st.site = &d_emlrtRSI;
        a_priori_probabilities->data[((trueCount + a_priori_probabilities->size
          [0] * (m - 1)) + a_priori_probabilities->size[0] *
          a_priori_probabilities->size[1] * (idx - 1)) - 1] = sum(&st,
          d_tmp_data, b_x_size);

        /*  proability of symbol = product of the probabilities of each bit of the label (calculated in LLR domain is a sum) */
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

      i1 = (int8_T)a_priori_probabilities->size[1];
      loop_ub = i1 - 1;
      for (i0 = 0; i0 <= loop_ub; i0++) {
        tmp_data[i0] = (int8_T)i0;
      }

      i0 = a_priori_probabilities->size[2];
      trueCount = ns + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &h_emlrtBCI, sp);
      }

      i0 = a_priori_probabilities->size[0];
      trueCount = j + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &m_emlrtBCI, sp);
      }

      i0 = a_priori_probabilities->size[2];
      trueCount = ns + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &l_emlrtBCI, sp);
      }

      iv0[0] = 1;
      iv0[1] = i1;
      i0 = a_priori_probabilities->size[1];
      a_priori_probabilities_size[1] = i0;
      for (i0 = 0; i0 < 2; i0++) {
        b_a_priori_probabilities[i0] = a_priori_probabilities_size[i0];
      }

      emlrtSubAssignSizeCheckR2012b(&iv0[0], 2, &b_a_priori_probabilities[0], 2,
        &b_emlrtECI, sp);
      st.site = &e_emlrtRSI;
      loop_ub = a_priori_probabilities->size[1];
      i0 = a_priori_probabilities->size[2];
      trueCount = 1 + ns;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &j_emlrtBCI, &st);
      }

      i0 = a_priori_probabilities->size[0];
      idx = 1 + j;
      if (!((idx >= 1) && (idx <= i0))) {
        emlrtDynamicBoundsCheckR2012b(idx, 1, i0, &k_emlrtBCI, &st);
      }

      for (i0 = 0; i0 < loop_ub; i0++) {
        x_data[i0] = a_priori_probabilities->data[((idx +
          a_priori_probabilities->size[0] * i0) + a_priori_probabilities->size[0]
          * a_priori_probabilities->size[1] * (trueCount - 1)) - 1];
      }

      b_st.site = &o_emlrtRSI;
      c_st.site = &p_emlrtRSI;
      d_st.site = &q_emlrtRSI;
      i0 = a_priori_probabilities->size[1];
      if (i0 == 1) {
      } else {
        i0 = a_priori_probabilities->size[1];
        if (i0 != 1) {
        } else {
          emlrtErrorWithMessageIdR2018a(&d_st, &c_emlrtRTEI,
            "Coder:toolbox:autoDimIncompatibility",
            "Coder:toolbox:autoDimIncompatibility", 0);
        }
      }

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
        if (!muDoubleScalarIsNaN(a_priori_probabilities->data[j +
             a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
             ns])) {
          idx = 1;
        } else {
          idx = 0;
          k = 2;
          do {
            exitg2 = 0;
            trueCount = a_priori_probabilities->size[1];
            if (k <= trueCount) {
              if (!muDoubleScalarIsNaN(x_data[k - 1])) {
                idx = k;
                exitg2 = 1;
              } else {
                k++;
              }
            } else {
              exitg2 = 1;
            }
          } while (exitg2 == 0);
        }

        if (idx == 0) {
          cte_norm = a_priori_probabilities->data[j +
            a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
            ns];
        } else {
          cte_norm = a_priori_probabilities->data[(j +
            a_priori_probabilities->size[0] * (idx - 1)) +
            a_priori_probabilities->size[0] * a_priori_probabilities->size[1] *
            ns];
          while (idx + 1 <= i0) {
            if (cte_norm < x_data[idx]) {
              cte_norm = x_data[idx];
            }

            idx++;
          }
        }
      }

      idx = a_priori_probabilities->size[1];
      for (i0 = 0; i0 < idx; i0++) {
        a_priori_probabilities_data[i0] = a_priori_probabilities->data[(j +
          a_priori_probabilities->size[0] * i0) + a_priori_probabilities->size[0]
          * a_priori_probabilities->size[1] * ns] - cte_norm;
      }

      for (i0 = 0; i0 < idx; i0++) {
        a_priori_probabilities->data[(j + a_priori_probabilities->size[0] *
          tmp_data[i0]) + a_priori_probabilities->size[0] *
          a_priori_probabilities->size[1] * ns] = a_priori_probabilities_data[i0];
      }

      /*  remove maximum value (almost normalizes) */
      loop_ub = a_priori_probabilities->size[1];
      i0 = a_priori_probabilities->size[2];
      trueCount = 1 + ns;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &f_emlrtBCI, sp);
      }

      i0 = a_priori_probabilities->size[0];
      idx = 1 + j;
      if (!((idx >= 1) && (idx <= i0))) {
        emlrtDynamicBoundsCheckR2012b(idx, 1, i0, &g_emlrtBCI, sp);
      }

      x_size[0] = 1;
      x_size[1] = loop_ub;
      for (i0 = 0; i0 < loop_ub; i0++) {
        x_data[i0] = a_priori_probabilities->data[((idx +
          a_priori_probabilities->size[0] * i0) + a_priori_probabilities->size[0]
          * a_priori_probabilities->size[1] * (trueCount - 1)) - 1];
      }

      i0 = a_priori_probabilities->size[1];
      for (k = 0; k < i0; k++) {
        x_data[k] = muDoubleScalarExp(x_data[k]);
      }

      st.site = &f_emlrtRSI;
      cte_norm = sum(&st, x_data, x_size);
      st.site = &f_emlrtRSI;
      if (cte_norm < 0.0) {
        b_st.site = &m_emlrtRSI;
        b_error(&b_st);
      }

      cte_norm = muDoubleScalarLog(cte_norm);

      /*  checks sum of probabilities and move back to LLR domain */
      i0 = a_priori_probabilities->size[0];
      trueCount = j + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &c_emlrtBCI, sp);
      }

      i1 = (int8_T)a_priori_probabilities->size[1];
      loop_ub = i1 - 1;
      for (i0 = 0; i0 <= loop_ub; i0++) {
        tmp_data[i0] = (int8_T)i0;
      }

      i0 = a_priori_probabilities->size[2];
      trueCount = ns + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &b_emlrtBCI, sp);
      }

      i0 = a_priori_probabilities->size[0];
      trueCount = j + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &e_emlrtBCI, sp);
      }

      i0 = a_priori_probabilities->size[2];
      trueCount = ns + 1;
      if (!((trueCount >= 1) && (trueCount <= i0))) {
        emlrtDynamicBoundsCheckR2012b(trueCount, 1, i0, &d_emlrtBCI, sp);
      }

      iv0[0] = 1;
      iv0[1] = i1;
      i0 = a_priori_probabilities->size[1];
      b_a_priori_probabilities_size[1] = i0;
      for (i0 = 0; i0 < 2; i0++) {
        b_a_priori_probabilities[i0] = b_a_priori_probabilities_size[i0];
      }

      emlrtSubAssignSizeCheckR2012b(&iv0[0], 2, &b_a_priori_probabilities[0], 2,
        &emlrtECI, sp);
      idx = a_priori_probabilities->size[1];
      for (i0 = 0; i0 < idx; i0++) {
        a_priori_probabilities_data[i0] = a_priori_probabilities->data[(j +
          a_priori_probabilities->size[0] * i0) + a_priori_probabilities->size[0]
          * a_priori_probabilities->size[1] * ns] - cte_norm;
      }

      for (i0 = 0; i0 < idx; i0++) {
        a_priori_probabilities->data[(j + a_priori_probabilities->size[0] *
          tmp_data[i0]) + a_priori_probabilities->size[0] *
          a_priori_probabilities->size[1] * ns] = a_priori_probabilities_data[i0];
      }

      /*  divide by sum of probabilities (LLR domain: subtract) */
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
}

/* End of code generation (modulation_pmf_update_Linux.c) */
