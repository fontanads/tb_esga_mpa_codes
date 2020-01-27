/*
 * uplink_SCMA_Linux.c
 *
 * Code generation for function 'uplink_SCMA_Linux'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "uplink_SCMA_Linux.h"
#include "uplink_SCMA_Linux_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "uplink_SCMA_Linux_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 19,    /* lineNo */
  "uplink_SCMA_Linux",                 /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 20,  /* lineNo */
  "uplink_SCMA_Linux",                 /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 15,  /* lineNo */
  "any",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/any.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 146, /* lineNo */
  "allOrAny",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 21,  /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 28,  /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 32,  /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 21,  /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 7,   /* lineNo */
  30,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 7, /* lineNo */
  1,                                   /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 8, /* lineNo */
  20,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 8, /* lineNo */
  1,                                   /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 9, /* lineNo */
  20,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 9, /* lineNo */
  1,                                   /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 15,/* lineNo */
  24,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 18,/* lineNo */
  9,                                   /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 379,/* lineNo */
  5,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 19,/* lineNo */
  9,                                   /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 20,/* lineNo */
  11,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 50,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 25,/* lineNo */
  15,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 25,/* lineNo */
  26,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 1, /* lineNo */
  33,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 7,     /* lineNo */
  22,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 7,   /* lineNo */
  22,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 7,   /* lineNo */
  24,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 7,   /* lineNo */
  24,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 7,   /* lineNo */
  26,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 7,   /* lineNo */
  26,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 7,   /* lineNo */
  39,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 7,   /* lineNo */
  41,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 7,   /* lineNo */
  43,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 3,     /* nDims */
  7,                                   /* lineNo */
  16,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtDCInfo j_emlrtDCI = { 8,   /* lineNo */
  11,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 8,   /* lineNo */
  11,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 8,   /* lineNo */
  13,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 8,   /* lineNo */
  15,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 8,   /* lineNo */
  29,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 8,   /* lineNo */
  31,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 8,   /* lineNo */
  33,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { 3,   /* nDims */
  8,                                   /* lineNo */
  5,                                   /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtDCInfo q_emlrtDCI = { 9,   /* lineNo */
  11,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 9,   /* lineNo */
  13,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 9,   /* lineNo */
  13,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 9,   /* lineNo */
  16,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 9,   /* lineNo */
  29,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 9,   /* lineNo */
  31,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 9,   /* lineNo */
  34,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { 3,   /* nDims */
  9,                                   /* lineNo */
  5,                                   /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 11,/* lineNo */
  8,                                   /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 12,/* lineNo */
  13,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  28,                                  /* colNo */
  "all_symbols",                       /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  13,                                  /* lineNo */
  30,                                  /* colNo */
  "all_symbols",                       /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 14,  /* lineNo */
  35,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  14,                                  /* lineNo */
  35,                                  /* colNo */
  "C",                                 /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  18,                                  /* lineNo */
  24,                                  /* colNo */
  "F",                                 /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo s_emlrtRTEI = { 23,/* lineNo */
  16,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  22,                                  /* colNo */
  "H",                                 /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  24,                                  /* colNo */
  "H",                                 /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  30,                                  /* colNo */
  "y",                                 /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  33,                                  /* colNo */
  "y",                                 /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  13,                                  /* colNo */
  "X",                                 /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  20,                                  /* lineNo */
  15,                                  /* colNo */
  "X",                                 /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  20,                                  /* lineNo */
  9,                                   /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  43,                                  /* colNo */
  "X",                                 /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  45,                                  /* colNo */
  "X",                                 /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  25,                                  /* lineNo */
  39,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  25,                                  /* lineNo */
  26,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  17,                                  /* colNo */
  "y",                                 /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  25,                                  /* lineNo */
  20,                                  /* colNo */
  "y",                                 /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { -1,  /* nDims */
  25,                                  /* lineNo */
  13,                                  /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  22,                                  /* colNo */
  "SCMA_Symbols",                      /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  26,                                  /* colNo */
  "SCMA_Symbols",                      /* aName */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { -1,  /* nDims */
  15,                                  /* lineNo */
  9,                                   /* colNo */
  "uplink_SCMA_Linux",                 /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/uplink_SCMA_Linux.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 80,/* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 378,/* lineNo */
  1,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 88,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 83,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

/* Function Definitions */
void uplink_SCMA_Linux(const emlrtStack *sp, real_T J, real_T K, real_T N,
  real_T Ns, real_T Nr, const emxArray_real_T *F, const creal_T C_data[], const
  int32_T C_size[2], const emxArray_real_T *all_symbols, const emxArray_creal_T *
  H, emxArray_creal_T *y, emxArray_creal_T *X, emxArray_creal_T *SCMA_Symbols)
{
  int32_T ncolx;
  int32_T i1;
  int32_T b_J[3];
  int32_T b_SCMA_Symbols[3];
  int32_T ns;
  emxArray_real_T *Tj;
  emxArray_int32_T *r0;
  emxArray_real_T *b_Tj;
  emxArray_creal_T *c_Tj;
  emxArray_creal_T *b_y;
  int32_T loop_ub;
  int32_T j;
  int32_T i0;
  int32_T b_i1;
  int32_T nrowx;
  real_T Tj_re;
  int32_T i2;
  creal_T ns_th_symbol_user_j_data[10];
  int32_T iv0[2];
  int32_T iv1[1];
  int32_T iy;
  int32_T y_size_idx_1;
  int8_T outsize[2];
  boolean_T y_data[100];
  int32_T i;
  boolean_T exitg1;
  int32_T tmp_size[1];
  creal_T tmp_data[100];
  real_T Tj_im;
  int32_T iv2[1];
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /* uplink_SCMA Maps integers to N-dim symbols of M-ary Codebook C. */
  /*    all_symbols: J x Ns matrix of integers between 0, ..., M-1 */
  /*    F: K x J binary matrix (type double) */
  /*    H: K x J x Nr  matrix of fading coefficients */
  if (!(J >= 0.0)) {
    emlrtNonNegativeCheckR2012b(J, &emlrtDCI, sp);
  }

  if (J != (int32_T)muDoubleScalarFloor(J)) {
    emlrtIntegerCheckR2012b(J, &b_emlrtDCI, sp);
  }

  if (!(N >= 0.0)) {
    emlrtNonNegativeCheckR2012b(N, &c_emlrtDCI, sp);
  }

  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &d_emlrtDCI, sp);
  }

  if (!(Ns >= 0.0)) {
    emlrtNonNegativeCheckR2012b(Ns, &e_emlrtDCI, sp);
  }

  if (Ns != (int32_T)muDoubleScalarFloor(Ns)) {
    emlrtIntegerCheckR2012b(Ns, &f_emlrtDCI, sp);
  }

  if (J != (int32_T)muDoubleScalarFloor(J)) {
    emlrtIntegerCheckR2012b(J, &g_emlrtDCI, sp);
  }

  if (N != (int32_T)muDoubleScalarFloor(N)) {
    emlrtIntegerCheckR2012b(N, &h_emlrtDCI, sp);
  }

  if (Ns != (int32_T)muDoubleScalarFloor(Ns)) {
    emlrtIntegerCheckR2012b(Ns, &i_emlrtDCI, sp);
  }

  ncolx = SCMA_Symbols->size[0] * SCMA_Symbols->size[1] * SCMA_Symbols->size[2];
  SCMA_Symbols->size[0] = (int32_T)J;
  SCMA_Symbols->size[1] = (int32_T)N;
  SCMA_Symbols->size[2] = (int32_T)Ns;
  emxEnsureCapacity_creal_T(sp, SCMA_Symbols, ncolx, &emlrtRTEI);
  i1 = (int32_T)J * (int32_T)N * (int32_T)Ns;
  for (ncolx = 0; ncolx < i1; ncolx++) {
    SCMA_Symbols->data[ncolx].re = 0.0;
    SCMA_Symbols->data[ncolx].im = 0.0;
  }

  b_J[0] = (int32_T)J;
  b_J[1] = (int32_T)N;
  b_J[2] = (int32_T)Ns;
  for (ncolx = 0; ncolx < 3; ncolx++) {
    b_SCMA_Symbols[ncolx] = SCMA_Symbols->size[ncolx];
  }

  emlrtSizeEqCheckNDR2012b(b_J, b_SCMA_Symbols, &emlrtECI, sp);
  ncolx = SCMA_Symbols->size[0] * SCMA_Symbols->size[1] * SCMA_Symbols->size[2];
  SCMA_Symbols->size[0] = (int32_T)J;
  SCMA_Symbols->size[1] = (int32_T)N;
  SCMA_Symbols->size[2] = (int32_T)Ns;
  emxEnsureCapacity_creal_T(sp, SCMA_Symbols, ncolx, &b_emlrtRTEI);

  /*  cj for each packet ns=1,...,Ns */
  if (!(K >= 0.0)) {
    emlrtNonNegativeCheckR2012b(K, &j_emlrtDCI, sp);
  }

  if (K != (int32_T)muDoubleScalarFloor(K)) {
    emlrtIntegerCheckR2012b(K, &k_emlrtDCI, sp);
  }

  if (J != (int32_T)muDoubleScalarFloor(J)) {
    emlrtIntegerCheckR2012b(J, &l_emlrtDCI, sp);
  }

  if (Ns != (int32_T)muDoubleScalarFloor(Ns)) {
    emlrtIntegerCheckR2012b(Ns, &m_emlrtDCI, sp);
  }

  if (K != (int32_T)muDoubleScalarFloor(K)) {
    emlrtIntegerCheckR2012b(K, &n_emlrtDCI, sp);
  }

  if (J != (int32_T)muDoubleScalarFloor(J)) {
    emlrtIntegerCheckR2012b(J, &o_emlrtDCI, sp);
  }

  if (Ns != (int32_T)muDoubleScalarFloor(Ns)) {
    emlrtIntegerCheckR2012b(Ns, &p_emlrtDCI, sp);
  }

  ncolx = X->size[0] * X->size[1] * X->size[2];
  X->size[0] = (int32_T)K;
  X->size[1] = (int32_T)J;
  X->size[2] = (int32_T)Ns;
  emxEnsureCapacity_creal_T(sp, X, ncolx, &c_emlrtRTEI);
  i1 = (int32_T)K * (int32_T)J * (int32_T)Ns;
  for (ncolx = 0; ncolx < i1; ncolx++) {
    X->data[ncolx].re = 0.0;
    X->data[ncolx].im = 0.0;
  }

  b_SCMA_Symbols[0] = (int32_T)K;
  b_SCMA_Symbols[1] = (int32_T)J;
  b_SCMA_Symbols[2] = (int32_T)Ns;
  for (ncolx = 0; ncolx < 3; ncolx++) {
    b_J[ncolx] = X->size[ncolx];
  }

  emlrtSizeEqCheckNDR2012b(b_SCMA_Symbols, b_J, &b_emlrtECI, sp);
  ncolx = X->size[0] * X->size[1] * X->size[2];
  X->size[0] = (int32_T)K;
  X->size[1] = (int32_T)J;
  X->size[2] = (int32_T)Ns;
  emxEnsureCapacity_creal_T(sp, X, ncolx, &d_emlrtRTEI);

  /*  sparse version of SCMA_Symbols K x J x Ns */
  if (K != (int32_T)muDoubleScalarFloor(K)) {
    emlrtIntegerCheckR2012b(K, &q_emlrtDCI, sp);
  }

  if (!(Nr >= 0.0)) {
    emlrtNonNegativeCheckR2012b(Nr, &r_emlrtDCI, sp);
  }

  if (Nr != (int32_T)muDoubleScalarFloor(Nr)) {
    emlrtIntegerCheckR2012b(Nr, &s_emlrtDCI, sp);
  }

  if (Ns != (int32_T)muDoubleScalarFloor(Ns)) {
    emlrtIntegerCheckR2012b(Ns, &t_emlrtDCI, sp);
  }

  if (K != (int32_T)muDoubleScalarFloor(K)) {
    emlrtIntegerCheckR2012b(K, &u_emlrtDCI, sp);
  }

  if (Nr != (int32_T)muDoubleScalarFloor(Nr)) {
    emlrtIntegerCheckR2012b(Nr, &v_emlrtDCI, sp);
  }

  if (Ns != (int32_T)muDoubleScalarFloor(Ns)) {
    emlrtIntegerCheckR2012b(Ns, &w_emlrtDCI, sp);
  }

  ncolx = y->size[0] * y->size[1] * y->size[2];
  y->size[0] = (int32_T)K;
  y->size[1] = (int32_T)Nr;
  y->size[2] = (int32_T)Ns;
  emxEnsureCapacity_creal_T(sp, y, ncolx, &e_emlrtRTEI);
  i1 = (int32_T)K * (int32_T)Nr * (int32_T)Ns;
  for (ncolx = 0; ncolx < i1; ncolx++) {
    y->data[ncolx].re = 0.0;
    y->data[ncolx].im = 0.0;
  }

  b_SCMA_Symbols[0] = (int32_T)K;
  b_SCMA_Symbols[1] = (int32_T)Nr;
  b_SCMA_Symbols[2] = (int32_T)Ns;
  for (ncolx = 0; ncolx < 3; ncolx++) {
    b_J[ncolx] = y->size[ncolx];
  }

  emlrtSizeEqCheckNDR2012b(b_SCMA_Symbols, b_J, &c_emlrtECI, sp);
  ncolx = y->size[0] * y->size[1] * y->size[2];
  y->size[0] = (int32_T)K;
  y->size[1] = (int32_T)Nr;
  y->size[2] = (int32_T)Ns;
  emxEnsureCapacity_creal_T(sp, y, ncolx, &f_emlrtRTEI);

  /*  received signal K  x Nr x Ns */
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, Ns, mxDOUBLE_CLASS, (int32_T)Ns,
    &q_emlrtRTEI, sp);
  ns = 0;
  emxInit_real_T(sp, &Tj, 2, &h_emlrtRTEI, true);
  emxInit_int32_T(sp, &r0, 1, &o_emlrtRTEI, true);
  emxInit_real_T(sp, &b_Tj, 2, &i_emlrtRTEI, true);
  emxInit_creal_T(sp, &c_Tj, 2, &l_emlrtRTEI, true);
  emxInit_creal_T1(sp, &b_y, 1, &n_emlrtRTEI, true);
  while (ns <= (int32_T)Ns - 1) {
    /*  for each packet */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, J, mxDOUBLE_CLASS, (int32_T)J,
      &r_emlrtRTEI, sp);
    if (0 <= (int32_T)J - 1) {
      loop_ub = C_size[0];
      i0 = C_size[0];
      b_i1 = C_size[0];
    }

    j = 0;
    while (j <= (int32_T)J - 1) {
      /*  for each user */
      ncolx = all_symbols->size[0];
      nrowx = j + 1;
      if (!((nrowx >= 1) && (nrowx <= ncolx))) {
        emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &emlrtBCI, sp);
      }

      ncolx = all_symbols->size[1];
      nrowx = ns + 1;
      if (!((nrowx >= 1) && (nrowx <= ncolx))) {
        emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &b_emlrtBCI, sp);
      }

      /*  index transformation 0, ..., M-1   plus one */
      Tj_re = all_symbols->data[j + all_symbols->size[0] * ns] + 1.0;
      if (Tj_re != (int32_T)muDoubleScalarFloor(Tj_re)) {
        emlrtIntegerCheckR2012b(Tj_re, &x_emlrtDCI, sp);
      }

      i2 = (int32_T)Tj_re;
      if (!((i2 >= 1) && (i2 <= C_size[1]))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, C_size[1], &c_emlrtBCI, sp);
      }

      for (ncolx = 0; ncolx < loop_ub; ncolx++) {
        ns_th_symbol_user_j_data[ncolx] = C_data[ncolx + C_size[0] * (i2 - 1)];
      }

      /*  draw symbol from codebook for user j */
      ncolx = SCMA_Symbols->size[0];
      nrowx = j + 1;
      if (!((nrowx >= 1) && (nrowx <= ncolx))) {
        emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &o_emlrtBCI, sp);
      }

      i1 = SCMA_Symbols->size[1];
      ncolx = r0->size[0];
      r0->size[0] = i1;
      emxEnsureCapacity_int32_T(sp, r0, ncolx, &g_emlrtRTEI);
      for (ncolx = 0; ncolx < i1; ncolx++) {
        r0->data[ncolx] = ncolx;
      }

      ncolx = SCMA_Symbols->size[2];
      nrowx = ns + 1;
      if (!((nrowx >= 1) && (nrowx <= ncolx))) {
        emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &p_emlrtBCI, sp);
      }

      iv0[0] = 1;
      iv0[1] = r0->size[0];
      iv1[0] = i0;
      emlrtSubAssignSizeCheckR2012b(&iv0[0], 2, &iv1[0], 1, &h_emlrtECI, sp);
      i2 = r0->size[0];
      for (ncolx = 0; ncolx < i2; ncolx++) {
        SCMA_Symbols->data[(j + SCMA_Symbols->size[0] * r0->data[ncolx]) +
          SCMA_Symbols->size[0] * SCMA_Symbols->size[1] * ns] =
          ns_th_symbol_user_j_data[ncolx];
      }

      /*  assing N-dim symbol to user j in packet ns */
      /*  Linear Spreading  */
      ncolx = F->size[1];
      nrowx = j + 1;
      if (!((nrowx >= 1) && (nrowx <= ncolx))) {
        emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &d_emlrtBCI, sp);
      }

      ncolx = F->size[0];
      nrowx = F->size[0];
      i2 = F->size[0];
      iy = Tj->size[0] * Tj->size[1];
      Tj->size[0] = (int8_T)nrowx;
      Tj->size[1] = (int8_T)i2;
      emxEnsureCapacity_real_T(sp, Tj, iy, &h_emlrtRTEI);
      i1 = (int8_T)nrowx * (int8_T)i2;
      for (nrowx = 0; nrowx < i1; nrowx++) {
        Tj->data[nrowx] = 0.0;
      }

      for (iy = 0; iy < ncolx; iy++) {
        Tj->data[iy + Tj->size[0] * iy] = F->data[iy + F->size[0] * j];
      }

      st.site = &emlrtRSI;
      b_st.site = &c_emlrtRSI;
      for (ncolx = 0; ncolx < 2; ncolx++) {
        outsize[ncolx] = (int8_T)Tj->size[ncolx];
      }

      y_size_idx_1 = outsize[1];
      i1 = outsize[1];
      if (0 <= i1 - 1) {
        memset(&y_data[0], 0, (uint32_T)(i1 * (int32_T)sizeof(boolean_T)));
      }

      i2 = 0;
      iy = -1;
      for (i = 1; i <= Tj->size[1]; i++) {
        i1 = i2;
        i2 += Tj->size[0];
        iy++;
        c_st.site = &d_emlrtRSI;
        if ((!(i1 + 1 > i2)) && (i2 > 2147483646)) {
          d_st.site = &e_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        exitg1 = false;
        while ((!exitg1) && (i1 + 1 <= i2)) {
          if ((Tj->data[i1] == 0.0) || muDoubleScalarIsNaN(Tj->data[i1])) {
            i1++;
          } else {
            y_data[iy] = true;
            exitg1 = true;
          }
        }
      }

      st.site = &emlrtRSI;
      i1 = outsize[1] - 1;
      for (ncolx = 0; ncolx <= i1; ncolx++) {
        y_data[ncolx] = !y_data[ncolx];
      }

      b_st.site = &f_emlrtRSI;
      i1 = outsize[1];
      while ((i1 >= 1) && (!y_data[i1 - 1])) {
        i1--;
      }

      if (!(i1 <= Tj->size[1])) {
        emlrtErrorWithMessageIdR2018a(&b_st, &t_emlrtRTEI,
          "MATLAB:subsdeldimmismatch", "MATLAB:subsdeldimmismatch", 0);
      }

      b_st.site = &g_emlrtRSI;
      nrowx = Tj->size[0];
      ncolx = Tj->size[1];
      i2 = 0;
      for (i1 = 1; i1 <= y_size_idx_1; i1++) {
        i2 += y_data[i1 - 1];
      }

      i2 = Tj->size[1] - i2;
      iy = 0;
      for (i1 = 1; i1 <= ncolx; i1++) {
        if ((i1 > y_size_idx_1) || (!y_data[i1 - 1])) {
          for (i = 0; i < nrowx; i++) {
            Tj->data[i + Tj->size[0] * iy] = Tj->data[i + Tj->size[0] * (i1 - 1)];
          }

          iy++;
        }
      }

      if (!(i2 <= ncolx)) {
        emlrtErrorWithMessageIdR2018a(&b_st, &u_emlrtRTEI,
          "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
      }

      if (1 > i2) {
        i1 = 0;
      } else {
        i1 = i2;
      }

      i2 = Tj->size[0];
      ncolx = b_Tj->size[0] * b_Tj->size[1];
      b_Tj->size[0] = i2;
      b_Tj->size[1] = i1;
      emxEnsureCapacity_real_T(&b_st, b_Tj, ncolx, &i_emlrtRTEI);
      for (ncolx = 0; ncolx < i1; ncolx++) {
        for (nrowx = 0; nrowx < i2; nrowx++) {
          b_Tj->data[nrowx + b_Tj->size[0] * ncolx] = Tj->data[nrowx + Tj->size
            [0] * ncolx];
        }
      }

      ncolx = Tj->size[0] * Tj->size[1];
      Tj->size[0] = b_Tj->size[0];
      Tj->size[1] = b_Tj->size[1];
      emxEnsureCapacity_real_T(&b_st, Tj, ncolx, &j_emlrtRTEI);
      i1 = b_Tj->size[1];
      for (ncolx = 0; ncolx < i1; ncolx++) {
        i2 = b_Tj->size[0];
        for (nrowx = 0; nrowx < i2; nrowx++) {
          Tj->data[nrowx + Tj->size[0] * ncolx] = b_Tj->data[nrowx + b_Tj->size
            [0] * ncolx];
        }
      }

      /*  spreading matrix */
      i1 = X->size[0];
      ncolx = r0->size[0];
      r0->size[0] = i1;
      emxEnsureCapacity_int32_T(sp, r0, ncolx, &k_emlrtRTEI);
      for (ncolx = 0; ncolx < i1; ncolx++) {
        r0->data[ncolx] = ncolx;
      }

      ncolx = X->size[1];
      nrowx = j + 1;
      if (!((nrowx >= 1) && (nrowx <= ncolx))) {
        emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &i_emlrtBCI, sp);
      }

      ncolx = X->size[2];
      nrowx = ns + 1;
      if (!((nrowx >= 1) && (nrowx <= ncolx))) {
        emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &j_emlrtBCI, sp);
      }

      st.site = &b_emlrtRSI;
      b_st.site = &h_emlrtRSI;
      if (!(Tj->size[1] == b_i1)) {
        if (((Tj->size[0] == 1) && (Tj->size[1] == 1)) || (C_size[0] == 1)) {
          emlrtErrorWithMessageIdR2018a(&b_st, &w_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &v_emlrtRTEI,
            "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
        }
      }

      ncolx = c_Tj->size[0] * c_Tj->size[1];
      c_Tj->size[0] = Tj->size[0];
      c_Tj->size[1] = Tj->size[1];
      emxEnsureCapacity_creal_T1(&st, c_Tj, ncolx, &l_emlrtRTEI);
      i1 = Tj->size[1];
      for (ncolx = 0; ncolx < i1; ncolx++) {
        i2 = Tj->size[0];
        for (nrowx = 0; nrowx < i2; nrowx++) {
          c_Tj->data[nrowx + c_Tj->size[0] * ncolx].re = Tj->data[nrowx +
            Tj->size[0] * ncolx];
          c_Tj->data[nrowx + c_Tj->size[0] * ncolx].im = 0.0;
        }
      }

      tmp_size[0] = c_Tj->size[0];
      i1 = c_Tj->size[0];
      for (ncolx = 0; ncolx < i1; ncolx++) {
        tmp_data[ncolx].re = 0.0;
        tmp_data[ncolx].im = 0.0;
        i2 = c_Tj->size[1];
        for (nrowx = 0; nrowx < i2; nrowx++) {
          Tj_re = c_Tj->data[ncolx + c_Tj->size[0] * nrowx].re *
            ns_th_symbol_user_j_data[nrowx].re - c_Tj->data[ncolx + c_Tj->size[0]
            * nrowx].im * ns_th_symbol_user_j_data[nrowx].im;
          Tj_im = c_Tj->data[ncolx + c_Tj->size[0] * nrowx].re *
            ns_th_symbol_user_j_data[nrowx].im + c_Tj->data[ncolx + c_Tj->size[0]
            * nrowx].im * ns_th_symbol_user_j_data[nrowx].re;
          tmp_data[ncolx].re += Tj_re;
          tmp_data[ncolx].im += Tj_im;
        }
      }

      iv1[0] = r0->size[0];
      emlrtSubAssignSizeCheckR2012b(&iv1[0], 1, &tmp_size[0], 1, &d_emlrtECI, sp);
      i1 = tmp_size[0];
      for (ncolx = 0; ncolx < i1; ncolx++) {
        X->data[(r0->data[ncolx] + X->size[0] * j) + X->size[0] * X->size[1] *
          ns] = tmp_data[ncolx];
      }

      /*  assign K-dim sparse symbol to user j in packet ns */
      /*  Transmission over fading channel */
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, Nr, mxDOUBLE_CLASS, (int32_T)Nr,
        &s_emlrtRTEI, sp);
      iy = 0;
      while (iy <= (int32_T)Nr - 1) {
        /*  for each Rx antenna */
        ncolx = H->size[1];
        nrowx = j + 1;
        if (!((nrowx >= 1) && (nrowx <= ncolx))) {
          emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &e_emlrtBCI, sp);
        }

        ncolx = H->size[2];
        nrowx = iy + 1;
        if (!((nrowx >= 1) && (nrowx <= ncolx))) {
          emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &f_emlrtBCI, sp);
        }

        /*  fading channel vector of user j @ Rx antena nr (K rows, subcarriers) */
        ncolx = X->size[1];
        nrowx = j + 1;
        if (!((nrowx >= 1) && (nrowx <= ncolx))) {
          emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &k_emlrtBCI, sp);
        }

        ncolx = X->size[2];
        nrowx = ns + 1;
        if (!((nrowx >= 1) && (nrowx <= ncolx))) {
          emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &l_emlrtBCI, sp);
        }

        ncolx = X->size[0];
        nrowx = H->size[0];
        if (ncolx != nrowx) {
          emlrtSizeEqCheck1DR2012b(ncolx, nrowx, &e_emlrtECI, sp);
        }

        ncolx = y->size[1];
        nrowx = iy + 1;
        if (!((nrowx >= 1) && (nrowx <= ncolx))) {
          emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &g_emlrtBCI, sp);
        }

        ncolx = y->size[2];
        nrowx = ns + 1;
        if (!((nrowx >= 1) && (nrowx <= ncolx))) {
          emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &h_emlrtBCI, sp);
        }

        i1 = X->size[0];
        for (ncolx = 0; ncolx < i1; ncolx++) {
          tmp_data[ncolx].re = X->data[(ncolx + X->size[0] * j) + X->size[0] *
            X->size[1] * ns].re * H->data[(ncolx + H->size[0] * j) + H->size[0] *
            H->size[1] * iy].re - X->data[(ncolx + X->size[0] * j) + X->size[0] *
            X->size[1] * ns].im * H->data[(ncolx + H->size[0] * j) + H->size[0] *
            H->size[1] * iy].im;
          tmp_data[ncolx].im = X->data[(ncolx + X->size[0] * j) + X->size[0] *
            X->size[1] * ns].re * H->data[(ncolx + H->size[0] * j) + H->size[0] *
            H->size[1] * iy].im + X->data[(ncolx + X->size[0] * j) + X->size[0] *
            X->size[1] * ns].im * H->data[(ncolx + H->size[0] * j) + H->size[0] *
            H->size[1] * iy].re;
        }

        ncolx = y->size[0];
        if (ncolx != i1) {
          emlrtSizeEqCheck1DR2012b(ncolx, i1, &f_emlrtECI, sp);
        }

        i1 = y->size[0];
        ncolx = r0->size[0];
        r0->size[0] = i1;
        emxEnsureCapacity_int32_T(sp, r0, ncolx, &m_emlrtRTEI);
        for (ncolx = 0; ncolx < i1; ncolx++) {
          r0->data[ncolx] = ncolx;
        }

        ncolx = y->size[1];
        nrowx = iy + 1;
        if (!((nrowx >= 1) && (nrowx <= ncolx))) {
          emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &m_emlrtBCI, sp);
        }

        ncolx = y->size[2];
        nrowx = ns + 1;
        if (!((nrowx >= 1) && (nrowx <= ncolx))) {
          emlrtDynamicBoundsCheckR2012b(nrowx, 1, ncolx, &n_emlrtBCI, sp);
        }

        ncolx = y->size[0];
        iv1[0] = r0->size[0];
        iv2[0] = ncolx;
        emlrtSubAssignSizeCheckR2012b(&iv1[0], 1, &iv2[0], 1, &g_emlrtECI, sp);
        i2 = y->size[0];
        ncolx = b_y->size[0];
        b_y->size[0] = i2;
        emxEnsureCapacity_creal_T2(sp, b_y, ncolx, &n_emlrtRTEI);
        for (ncolx = 0; ncolx < i2; ncolx++) {
          b_y->data[ncolx].re = y->data[(ncolx + y->size[0] * iy) + y->size[0] *
            y->size[1] * ns].re + tmp_data[ncolx].re;
          b_y->data[ncolx].im = y->data[(ncolx + y->size[0] * iy) + y->size[0] *
            y->size[1] * ns].im + tmp_data[ncolx].im;
        }

        i1 = b_y->size[0];
        for (ncolx = 0; ncolx < i1; ncolx++) {
          y->data[(r0->data[ncolx] + y->size[0] * iy) + y->size[0] * y->size[1] *
            ns] = b_y->data[ncolx];
        }

        /*  received signal (superpose with previous) */
        iy++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    ns++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_creal_T(sp, &b_y);
  emxFree_creal_T(sp, &c_Tj);
  emxFree_real_T(sp, &b_Tj);
  emxFree_int32_T(sp, &r0);
  emxFree_real_T(sp, &Tj);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (uplink_SCMA_Linux.c) */
