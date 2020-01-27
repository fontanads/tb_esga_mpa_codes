/*
 * TB_ESGA_MPA_Many_Rx_Linux_v0.c
 *
 * Code generation for function 'TB_ESGA_MPA_Many_Rx_Linux_v0'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_Many_Rx_Linux_v0.h"
#include "TB_ESGA_MPA_Many_Rx_Linux_v0_emxutil.h"
#include "rdivide.h"
#include "mod.h"
#include "error.h"
#include "prod.h"
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "squeeze.h"
#include "indexShapeCheck.h"
#include "sqrt.h"
#include "eml_setop.h"
#include "scalexpAlloc.h"
#include "log2.h"
#include "TB_ESGA_MPA_Many_Rx_Linux_v0_data.h"

/* Type Definitions */
#ifndef typedef_coder_internal_ref_4
#define typedef_coder_internal_ref_4

typedef struct {
  real_T contents;
} coder_internal_ref_4;

#endif                                 /*typedef_coder_internal_ref_4*/

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 23,    /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 16,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 24,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 42,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 46,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 51,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 52,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 60,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 62,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 64,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 65,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 66,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 71,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 73,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 76,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 81,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 87,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 96,  /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 101, /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 108, /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 112, /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 117, /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 118, /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 119, /* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 6,   /* lineNo */
  "ref",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/ref.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 41, /* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 153,/* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 377,/* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 19, /* lineNo */
  "setdiff",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/setdiff.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 70, /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 134,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 135,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 136,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 16, /* lineNo */
  "abs",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elfun/abs.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 74, /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 49, /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 58, /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 45, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 65, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 189,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 40, /* lineNo */
  "mpower",                            /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/mpower.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 23, /* lineNo */
  "intersect",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/intersect.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 148,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 163,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 167,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 170,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 178,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 179,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 181,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 90, /* lineNo */
  "diag",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/diag.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 15, /* lineNo */
  "any",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/any.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 139,/* lineNo */
  "allOrAny",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 146,/* lineNo */
  "allOrAny",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 28, /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 32, /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 366,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 369,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 371,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 131,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 21, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 211,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 52, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 88, /* lineNo */
  "mtimes",                            /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 40, /* lineNo */
  "xdotu",                             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/+blas/xdotu.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 15, /* lineNo */
  "xdotu",                             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/+refblas/xdotu.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 32, /* lineNo */
  "xdotx",                             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/+refblas/xdotx.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 222,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 223,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 194,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 12, /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/toLogicalCheck.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 397,/* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo de_emlrtRSI = { 237,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo ee_emlrtRSI = { 238,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 240,/* lineNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 13, /* lineNo */
  "log",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elfun/log.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 15, /* lineNo */
  "max",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/max.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 16, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 38, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 126,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 257,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 323,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 404,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 402,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 13,  /* lineNo */
  17,                                  /* colNo */
  "ref",                               /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/ref.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 18,/* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 19,/* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 21,/* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 22,/* lineNo */
  22,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 22,/* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 24,/* lineNo */
  19,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 153,/* lineNo */
  13,                                  /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 41,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 42,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 24,/* lineNo */
  5,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 96,/* lineNo */
  27,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 28,/* lineNo */
  32,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 42,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 96,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 103,/* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 117,/* lineNo */
  53,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 46,/* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 117,/* lineNo */
  32,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 108,/* lineNo */
  62,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 112,/* lineNo */
  32,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 118,/* lineNo */
  30,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 87,/* lineNo */
  32,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 81,/* lineNo */
  44,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 56,/* lineNo */
  25,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 113,/* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 88,/* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 57,/* lineNo */
  25,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 113,/* lineNo */
  45,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 88,/* lineNo */
  45,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 62,/* lineNo */
  53,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 81,/* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 82,/* lineNo */
  44,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 64,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 65,/* lineNo */
  54,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 211,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 1,/* lineNo */
  38,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 51,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 65,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 101,/* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 117,/* lineNo */
  18,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 33,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 134,/* lineNo */
  25,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 134,/* lineNo */
  37,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 134,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 16,/* lineNo */
  5,                                   /* colNo */
  "abs",                               /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elfun/abs.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 19,/* lineNo */
  24,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo bc_emlrtRTEI = { 45,/* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 58,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/power.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 135,/* lineNo */
  41,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 42,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 135,/* lineNo */
  42,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 132,/* lineNo */
  43,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 163,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 176,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 178,/* lineNo */
  20,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 178,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 15,/* lineNo */
  5,                                   /* colNo */
  "any",                               /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/any.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 179,/* lineNo */
  14,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 379,/* lineNo */
  5,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 179,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 50,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 181,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 179,/* lineNo */
  15,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 220,/* lineNo */
  41,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 215,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 220,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 221,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 222,/* lineNo */
  75,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 222,/* lineNo */
  55,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 222,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 222,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 223,/* lineNo */
  38,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 232,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 233,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 237,/* lineNo */
  31,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 238,/* lineNo */
  31,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 230,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 237,/* lineNo */
  27,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 238,/* lineNo */
  27,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 194,/* lineNo */
  52,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  24,                                  /* lineNo */
  23,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  27,                                  /* lineNo */
  18,                                  /* colNo */
  "vphi_j",                            /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  54,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  28,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  28,                                  /* lineNo */
  30,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  28,                                  /* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  19,                                  /* colNo */
  "y_all",                             /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo pd_emlrtRTEI = { 38,/* lineNo */
  11,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  42,                                  /* lineNo */
  28,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  25,                                  /* colNo */
  "phi_k",                             /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo qd_emlrtRTEI = { 62,/* lineNo */
  51,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 65,    /* lineNo */
  56,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  56,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 65,  /* lineNo */
  71,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  71,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 81,  /* lineNo */
  52,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  52,                                  /* colNo */
  "C_perms",                           /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 82,  /* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  82,                                  /* lineNo */
  40,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  82,                                  /* lineNo */
  42,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 87,  /* lineNo */
  51,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  51,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  53,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 88,  /* lineNo */
  64,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  64,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  66,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 88,  /* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  36,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  38,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  88,                                  /* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  96,                                  /* lineNo */
  31,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  26,                                  /* colNo */
  "vphi_j",                            /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo rd_emlrtRTEI = { 106,/* lineNo */
  23,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  47,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  107,                                 /* lineNo */
  49,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  97,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  99,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  51,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  112,                                 /* lineNo */
  53,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  64,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  66,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  36,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  113,                                 /* lineNo */
  38,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  113,                                 /* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  117,                                 /* lineNo */
  51,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  117,                                 /* lineNo */
  60,                                  /* colNo */
  "vphi_j",                            /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  117,                                 /* lineNo */
  53,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  118,                                 /* lineNo */
  28,                                  /* colNo */
  "soft_bits",                         /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  118,                                 /* lineNo */
  32,                                  /* colNo */
  "soft_bits",                         /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  118,                                 /* lineNo */
  18,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 387,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 22,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 77,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 88,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 83,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtDCInfo h_emlrtDCI = { 18,  /* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 18,  /* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 18,  /* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 18,  /* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  120,                                 /* lineNo */
  18,                                  /* colNo */
  "hard_symbols",                      /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  81,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  108,                                 /* lineNo */
  21,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  81,                                  /* lineNo */
  52,                                  /* colNo */
  "F_int",                             /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  82,                                  /* lineNo */
  44,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  34,                                  /* colNo */
  "y",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 54,  /* lineNo */
  34,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  211,                                 /* lineNo */
  39,                                  /* colNo */
  "Aq",                                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 211, /* lineNo */
  39,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  58,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 65,  /* lineNo */
  58,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  44,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 54,  /* lineNo */
  44,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  44,                                  /* colNo */
  "Aq",                                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  54,                                  /* lineNo */
  25,                                  /* colNo */
  "y",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 54,  /* lineNo */
  25,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  29,                                  /* colNo */
  "Aq",                                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 64,  /* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  65,                                  /* lineNo */
  54,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 65,  /* lineNo */
  54,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 134, /* lineNo */
  27,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  27,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 134, /* lineNo */
  31,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  31,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 134, /* lineNo */
  39,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  134,                                 /* lineNo */
  39,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { 2,   /* nDims */
  134,                                 /* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 17,/* lineNo */
  19,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"/* pName */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  133,                                 /* lineNo */
  27,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 133, /* lineNo */
  27,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo ee_emlrtRTEI = { 162,/* lineNo */
  16,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  147,                                 /* lineNo */
  22,                                  /* colNo */
  "weak_users",                        /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  161,                                 /* lineNo */
  18,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 161, /* lineNo */
  18,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  164,                                 /* lineNo */
  26,                                  /* colNo */
  "xj",                                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 164, /* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  165,                                 /* lineNo */
  23,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 165, /* lineNo */
  23,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  161,                                 /* lineNo */
  9,                                   /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 161,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  164,                                 /* lineNo */
  13,                                  /* colNo */
  "xj",                                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 164,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo fe_emlrtRTEI = { 378,/* lineNo */
  1,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 80,/* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  178,                                 /* lineNo */
  24,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  176,                                 /* lineNo */
  18,                                  /* colNo */
  "C",                                 /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  223,                                 /* lineNo */
  59,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 223,/* lineNo */
  59,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  223,                                 /* lineNo */
  57,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 223,/* lineNo */
  57,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { 2,   /* nDims */
  222,                                 /* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  222,                                 /* lineNo */
  72,                                  /* colNo */
  "projection_index",                  /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  221,                                 /* lineNo */
  39,                                  /* colNo */
  "C_perms",                           /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 221,/* lineNo */
  39,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { 2,   /* nDims */
  220,                                 /* lineNo */
  41,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtDCInfo fb_emlrtDCI = { 222,/* lineNo */
  82,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 222,/* lineNo */
  82,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  219,                                 /* lineNo */
  17,                                  /* colNo */
  "strong_users",                      /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  220,                                 /* lineNo */
  41,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  221,                                 /* lineNo */
  39,                                  /* colNo */
  "F_int",                             /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 222,/* lineNo */
  75,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 222,/* lineNo */
  75,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  223,                                 /* lineNo */
  61,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 223,/* lineNo */
  61,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo ke_emlrtRTEI = { 235,/* lineNo */
  15,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m"/* pName */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  58,                                  /* colNo */
  "codewords_binary_labels",           /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  238,                                 /* lineNo */
  57,                                  /* colNo */
  "codewords_binary_labels",           /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  43,                                  /* colNo */
  "soft_bits",                         /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  31,                                  /* colNo */
  "pmf",                               /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  238,                                 /* lineNo */
  31,                                  /* colNo */
  "pmf",                               /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 232,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 232,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 233,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 233,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 232,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 232,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 233,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 233,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  240,                                 /* lineNo */
  13,                                  /* colNo */
  "soft_bits",                         /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  13,                                  /* colNo */
  "hard_bits",                         /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  194,                                 /* lineNo */
  77,                                  /* colNo */
  "length_of_each_counter",            /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  194,                                 /* lineNo */
  75,                                  /* colNo */
  "length_of_each_counter",            /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  192,                                 /* lineNo */
  25,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  192,                                 /* lineNo */
  72,                                  /* colNo */
  "length_of_each_counter",            /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  192,                                 /* lineNo */
  42,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  195,                                 /* lineNo */
  38,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  195,                                 /* lineNo */
  53,                                  /* colNo */
  "length_of_each_counter",            /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  195,                                 /* lineNo */
  21,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  198,                                 /* lineNo */
  16,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  199,                                 /* lineNo */
  17,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_Many_Rx_Linux_v0",      /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_Many_Rx_Linux_v0.m",/* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static void find_strong_and_weak_users(const emlrtStack *sp, const
  coder_internal_ref_5 *H, const coder_internal_ref_4 *k, const
  coder_internal_ref_4 *j, const coder_internal_ref_4 *nr, const
  coder_internal_ref_1 *F, const coder_internal_ref_4 *r_th, const
  coder_internal_ref_6 *phi_k_except_j, emxArray_real_T *strong_users,
  emxArray_real_T *weak_users);
static void gaussian_approximation(const emlrtStack *sp, const
  coder_internal_ref_3 *C, const coder_internal_ref_1 *F, const
  coder_internal_ref_5 *H, const coder_internal_ref_4 *k, const
  coder_internal_ref_4 *nr, const coder_internal_ref_4 *M, const
  coder_internal_ref_7 *mess_from_VN_to_FN, const emxArray_real_T *weak_users,
  creal_T *adapt_mean, real_T *adapt_var);
static void get_LLRs(const emlrtStack *sp, const coder_internal_ref_4 *kb, const
                     coder_internal_ref *codewords_binary_labels, const
                     coder_internal_ref_4 *eps_val_num, const
                     coder_internal_ref_4 *eps_val_den, const emxArray_real_T
                     *pmf, emxArray_real_T *soft_bits);
static real_T get_extrinsic_info_probability(const emlrtStack *sp, const
  coder_internal_ref_6 *strong_users, const coder_internal_ref_6 *counter, const
  coder_internal_ref_1 *C_perms, const coder_internal_ref_1 *F_int, const
  coder_internal_ref_4 *k, coder_internal_ref_6 *codeword_labels, const
  coder_internal_ref_4 *M, const coder_internal_ref_7 *mess_from_VN_to_FN);
static void spread_symbol(const emlrtStack *sp, const coder_internal_ref_3 *C,
  const coder_internal_ref_1 *F, real_T user, real_T sym_index, emxArray_creal_T
  *xj);
static void update_cartesian_counter(const emlrtStack *sp, const
  coder_internal_ref_6 *length_of_each_counter, const coder_internal_ref_4
  *marginal_prob_idx_cnt, emxArray_real_T *counter);

/* Function Definitions */
static void find_strong_and_weak_users(const emlrtStack *sp, const
  coder_internal_ref_5 *H, const coder_internal_ref_4 *k, const
  coder_internal_ref_4 *j, const coder_internal_ref_4 *nr, const
  coder_internal_ref_1 *F, const coder_internal_ref_4 *r_th, const
  coder_internal_ref_6 *phi_k_except_j, emxArray_real_T *strong_users,
  emxArray_real_T *weak_users)
{
  emxArray_creal_T *b_H;
  int32_T i5;
  real_T d1;
  int32_T loop_ub;
  int32_T idx;
  int32_T nx;
  real_T h_kj_nr_re;
  real_T h_kj_nr_im;
  emxArray_creal_T *hk_nr;
  emxArray_real_T *y;
  int32_T b_hk_nr[2];
  int32_T b_y[2];
  emxArray_real_T *a;
  boolean_T overflow;
  emxArray_real_T *z;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  boolean_T exitg1;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  int32_T ib_size[1];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_creal_T(sp, &b_H, 2, &vb_emlrtRTEI, true);

  /*  end packet index */
  /*  HELPER FUNCTIONS */
  /*     %% Fix user j, Find strong and weak users @ (FN k and Rx_Antenna nr) */
  i5 = H->contents->size[0];
  d1 = k->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &v_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d1;
  if (!((loop_ub >= 1) && (loop_ub <= i5))) {
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i5, &cc_emlrtBCI, sp);
  }

  i5 = H->contents->size[1];
  d1 = j->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &v_emlrtDCI, sp);
  }

  idx = (int32_T)d1;
  if (!((idx >= 1) && (idx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(idx, 1, i5, &cc_emlrtBCI, sp);
  }

  i5 = H->contents->size[2];
  d1 = nr->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &v_emlrtDCI, sp);
  }

  nx = (int32_T)d1;
  if (!((nx >= 1) && (nx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(nx, 1, i5, &cc_emlrtBCI, sp);
  }

  h_kj_nr_re = H->contents->data[((loop_ub + H->contents->size[0] * (idx - 1)) +
    H->contents->size[0] * H->contents->size[1] * (nx - 1)) - 1].re;
  i5 = H->contents->size[0];
  d1 = k->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &v_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d1;
  if (!((loop_ub >= 1) && (loop_ub <= i5))) {
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i5, &cc_emlrtBCI, sp);
  }

  i5 = H->contents->size[1];
  d1 = j->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &v_emlrtDCI, sp);
  }

  idx = (int32_T)d1;
  if (!((idx >= 1) && (idx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(idx, 1, i5, &cc_emlrtBCI, sp);
  }

  i5 = H->contents->size[2];
  d1 = nr->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &v_emlrtDCI, sp);
  }

  nx = (int32_T)d1;
  if (!((nx >= 1) && (nx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(nx, 1, i5, &cc_emlrtBCI, sp);
  }

  h_kj_nr_im = H->contents->data[((loop_ub + H->contents->size[0] * (idx - 1)) +
    H->contents->size[0] * H->contents->size[1] * (nx - 1)) - 1].im;
  loop_ub = H->contents->size[1];
  d1 = nr->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &t_emlrtDCI, sp);
  }

  i5 = H->contents->size[2];
  idx = (int32_T)d1;
  if (!((idx >= 1) && (idx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(idx, 1, i5, &ac_emlrtBCI, sp);
  }

  d1 = k->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &s_emlrtDCI, sp);
  }

  i5 = H->contents->size[0];
  nx = (int32_T)d1;
  if (!((nx >= 1) && (nx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(nx, 1, i5, &yb_emlrtBCI, sp);
  }

  i5 = b_H->size[0] * b_H->size[1];
  b_H->size[0] = 1;
  b_H->size[1] = loop_ub;
  emxEnsureCapacity_creal_T(sp, b_H, i5, &vb_emlrtRTEI);
  for (i5 = 0; i5 < loop_ub; i5++) {
    b_H->data[b_H->size[0] * i5] = H->contents->data[((nx + H->contents->size[0]
      * i5) + H->contents->size[0] * H->contents->size[1] * (idx - 1)) - 1];
  }

  emxInit_creal_T(sp, &hk_nr, 2, &xb_emlrtRTEI, true);
  emxInit_real_T(sp, &y, 2, &fc_emlrtRTEI, true);
  st.site = &ub_emlrtRSI;
  squeeze(&st, b_H, hk_nr);
  loop_ub = F->contents->size[1];
  d1 = k->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &u_emlrtDCI, sp);
  }

  i5 = F->contents->size[0];
  nx = (int32_T)d1;
  if (!((nx >= 1) && (nx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(nx, 1, i5, &bc_emlrtBCI, sp);
  }

  i5 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, y, i5, &wb_emlrtRTEI);
  emxFree_creal_T(sp, &b_H);
  for (i5 = 0; i5 < loop_ub; i5++) {
    y->data[y->size[0] * i5] = F->contents->data[(nx + F->contents->size[0] * i5)
      - 1];
  }

  for (i5 = 0; i5 < 2; i5++) {
    b_hk_nr[i5] = hk_nr->size[i5];
  }

  for (i5 = 0; i5 < 2; i5++) {
    b_y[i5] = y->size[i5];
  }

  if ((b_hk_nr[0] != b_y[0]) || (b_hk_nr[1] != b_y[1])) {
    emlrtSizeEqCheckNDR2012b(&b_hk_nr[0], &b_y[0], &e_emlrtECI, sp);
  }

  loop_ub = hk_nr->size[0] * hk_nr->size[1] - 1;
  i5 = hk_nr->size[0] * hk_nr->size[1];
  hk_nr->size[0] = 1;
  emxEnsureCapacity_creal_T(sp, hk_nr, i5, &xb_emlrtRTEI);
  for (i5 = 0; i5 <= loop_ub; i5++) {
    hk_nr->data[i5].re *= y->data[i5];
    hk_nr->data[i5].im *= y->data[i5];
  }

  emxInit_real_T(sp, &a, 2, &fc_emlrtRTEI, true);
  st.site = &vb_emlrtRSI;
  b_st.site = &cc_emlrtRSI;
  i5 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = hk_nr->size[1];
  emxEnsureCapacity_real_T(&b_st, a, i5, &yb_emlrtRTEI);
  c_st.site = &dc_emlrtRSI;
  overflow = ((!(1 > hk_nr->size[1])) && (hk_nr->size[1] > 2147483646));
  if (overflow) {
    d_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (nx = 0; nx < hk_nr->size[1]; nx++) {
    a->data[nx] = muDoubleScalarHypot(hk_nr->data[nx].re, hk_nr->data[nx].im);
  }

  emxFree_creal_T(&b_st, &hk_nr);
  emxInit_real_T(&b_st, &z, 2, &ac_emlrtRTEI, true);
  h_kj_nr_re = muDoubleScalarHypot(h_kj_nr_re, h_kj_nr_im);
  st.site = &vb_emlrtRSI;
  b_st.site = &ec_emlrtRSI;
  c_st.site = &fc_emlrtRSI;
  d_st.site = &gc_emlrtRSI;
  i5 = z->size[0] * z->size[1];
  z->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&d_st, z, i5, &ac_emlrtRTEI);
  loop_ub = a->size[1];
  i5 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&d_st, y, i5, &bc_emlrtRTEI);
  if (!dimagree(y, a)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &ce_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  i5 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&c_st, y, i5, &cc_emlrtRTEI);
  d_st.site = &hc_emlrtRSI;
  e_st.site = &ic_emlrtRSI;
  overflow = ((!(1 > z->size[1])) && (z->size[1] > 2147483646));
  emxFree_real_T(&e_st, &z);
  if (overflow) {
    f_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (nx = 0; nx < loop_ub; nx++) {
    y->data[nx] = a->data[nx] * a->data[nx];
  }

  emxFree_real_T(&d_st, &a);
  emxInit_boolean_T(&d_st, &x, 2, &dc_emlrtRTEI, true);
  st.site = &vb_emlrtRSI;
  b_st.site = &jc_emlrtRSI;
  c_st.site = &ec_emlrtRSI;
  st.site = &vb_emlrtRSI;
  i5 = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = y->size[1];
  emxEnsureCapacity_boolean_T(&st, x, i5, &dc_emlrtRTEI);
  h_kj_nr_re = r_th->contents * (h_kj_nr_re * h_kj_nr_re);
  loop_ub = y->size[0] * y->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    x->data[i5] = (y->data[i5] >= h_kj_nr_re);
  }

  emxInit_int32_T1(&st, &ii, 2, &qb_emlrtRTEI, true);
  b_st.site = &fb_emlrtRSI;
  nx = x->size[1];
  c_st.site = &gb_emlrtRSI;
  idx = 0;
  i5 = ii->size[0] * ii->size[1];
  ii->size[0] = 1;
  ii->size[1] = x->size[1];
  emxEnsureCapacity_int32_T(&c_st, ii, i5, &h_emlrtRTEI);
  d_st.site = &hb_emlrtRSI;
  overflow = ((!(1 > x->size[1])) && (x->size[1] > 2147483646));
  if (overflow) {
    e_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  loop_ub = 1;
  exitg1 = false;
  while ((!exitg1) && (loop_ub <= nx)) {
    if (x->data[loop_ub - 1]) {
      idx++;
      ii->data[idx - 1] = loop_ub;
      if (idx >= nx) {
        exitg1 = true;
      } else {
        loop_ub++;
      }
    } else {
      loop_ub++;
    }
  }

  if (!(idx <= x->size[1])) {
    emlrtErrorWithMessageIdR2018a(&c_st, &sd_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (x->size[1] == 1) {
    if (idx == 0) {
      i5 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = 0;
      emxEnsureCapacity_int32_T(&c_st, ii, i5, &i_emlrtRTEI);
    }
  } else {
    i5 = ii->size[0] * ii->size[1];
    if (1 > idx) {
      ii->size[1] = 0;
    } else {
      ii->size[1] = idx;
    }

    emxEnsureCapacity_int32_T(&c_st, ii, i5, &i_emlrtRTEI);
  }

  emxFree_boolean_T(&c_st, &x);
  st.site = &vb_emlrtRSI;
  b_st.site = &kc_emlrtRSI;
  i5 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = ii->size[1];
  emxEnsureCapacity_real_T(&b_st, y, i5, &ec_emlrtRTEI);
  loop_ub = ii->size[0] * ii->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    y->data[i5] = ii->data[i5];
  }

  emxFree_int32_T(&b_st, &ii);
  emxInit_int32_T(&b_st, &ia, 1, &gc_emlrtRTEI, true);
  emxInit_int32_T(&b_st, &ib, 1, &gc_emlrtRTEI, true);
  c_st.site = &kb_emlrtRSI;
  b_do_vectors(&c_st, y, phi_k_except_j->contents, strong_users, ia, ib);
  st.site = &wb_emlrtRSI;
  b_st.site = &jb_emlrtRSI;
  c_st.site = &kb_emlrtRSI;
  c_do_vectors(&c_st, phi_k_except_j->contents, strong_users, weak_users, ia,
               ib_size);
  emxFree_int32_T(sp, &ib);
  emxFree_int32_T(sp, &ia);
  emxFree_real_T(sp, &y);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void gaussian_approximation(const emlrtStack *sp, const
  coder_internal_ref_3 *C, const coder_internal_ref_1 *F, const
  coder_internal_ref_5 *H, const coder_internal_ref_4 *k, const
  coder_internal_ref_4 *nr, const coder_internal_ref_4 *M, const
  coder_internal_ref_7 *mess_from_VN_to_FN, const emxArray_real_T *weak_users,
  creal_T *adapt_mean, real_T *adapt_var)
{
  int32_T uu;
  emxArray_creal_T *xj;
  int32_T i6;
  int32_T i7;
  real_T user;
  real_T Expect_over_x_kj_re;
  real_T Expect_over_x_kj_im;
  real_T Expect_over_squared_norm_x_kj;
  real_T d2;
  int32_T i8;
  int32_T mm;
  real_T h_kjnr_re;
  real_T h_kjnr_im;
  real_T x_kk_ee_me_re;
  real_T p_x_kjm;
  real_T x_kk_ee_me_im;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*     %% Gaussian approximation on weak users */
  adapt_mean->re = 0.0;
  adapt_mean->im = 0.0;
  *adapt_var = 0.0;
  if (!(weak_users->size[1] == 0)) {
    /* for user = weak_users */
    uu = 0;
    emxInit_creal_T2(sp, &xj, 1, &kc_emlrtRTEI, true);
    while (uu <= weak_users->size[1] - 1) {
      i6 = weak_users->size[1];
      i7 = 1 + uu;
      if (!((i7 >= 1) && (i7 <= i6))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &dc_emlrtBCI, sp);
      }

      user = weak_users->data[i7 - 1];
      st.site = &oc_emlrtRSI;

      /*     %% Get mean and variance of codebook from "user" @ subcarrier k  */
      Expect_over_x_kj_re = 0.0;
      Expect_over_x_kj_im = 0.0;
      Expect_over_squared_norm_x_kj = 0.0;
      i6 = H->contents->size[0];
      d2 = k->contents;
      if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
        emlrtIntegerCheckR2012b(d2, &ab_emlrtDCI, &st);
      }

      i7 = (int32_T)d2;
      if (!((i7 >= 1) && (i7 <= i6))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &hc_emlrtBCI, &st);
      }

      i6 = H->contents->size[1];
      d2 = weak_users->data[uu];
      if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
        emlrtIntegerCheckR2012b(d2, &ab_emlrtDCI, &st);
      }

      i8 = (int32_T)d2;
      if (!((i8 >= 1) && (i8 <= i6))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, i6, &hc_emlrtBCI, &st);
      }

      i6 = H->contents->size[2];
      d2 = nr->contents;
      if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
        emlrtIntegerCheckR2012b(d2, &ab_emlrtDCI, &st);
      }

      mm = (int32_T)d2;
      if (!((mm >= 1) && (mm <= i6))) {
        emlrtDynamicBoundsCheckR2012b(mm, 1, i6, &hc_emlrtBCI, &st);
      }

      h_kjnr_re = H->contents->data[((i7 + H->contents->size[0] * (i8 - 1)) +
        H->contents->size[0] * H->contents->size[1] * (mm - 1)) - 1].re;
      i6 = H->contents->size[0];
      d2 = k->contents;
      if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
        emlrtIntegerCheckR2012b(d2, &w_emlrtDCI, &st);
      }

      i7 = (int32_T)d2;
      if (!((i7 >= 1) && (i7 <= i6))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &ec_emlrtBCI, &st);
      }

      i6 = H->contents->size[1];
      d2 = weak_users->data[uu];
      if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
        emlrtIntegerCheckR2012b(d2, &w_emlrtDCI, &st);
      }

      i8 = (int32_T)d2;
      if (!((i8 >= 1) && (i8 <= i6))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, i6, &ec_emlrtBCI, &st);
      }

      i6 = H->contents->size[2];
      d2 = nr->contents;
      if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
        emlrtIntegerCheckR2012b(d2, &w_emlrtDCI, &st);
      }

      mm = (int32_T)d2;
      if (!((mm >= 1) && (mm <= i6))) {
        emlrtDynamicBoundsCheckR2012b(mm, 1, i6, &ec_emlrtBCI, &st);
      }

      h_kjnr_im = H->contents->data[((i7 + H->contents->size[0] * (i8 - 1)) +
        H->contents->size[0] * H->contents->size[1] * (mm - 1)) - 1].im;
      d2 = M->contents;
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, d2, mxDOUBLE_CLASS, (int32_T)d2,
        &ee_emlrtRTEI, &st);
      mm = 0;
      while (mm <= (int32_T)d2 - 1) {
        b_st.site = &pc_emlrtRSI;
        spread_symbol(&b_st, C, F, user, 1.0 + (real_T)mm, xj);
        i6 = xj->size[0];
        p_x_kjm = k->contents;
        if (p_x_kjm != (int32_T)muDoubleScalarFloor(p_x_kjm)) {
          emlrtIntegerCheckR2012b(p_x_kjm, &bb_emlrtDCI, &st);
        }

        i7 = (int32_T)p_x_kjm;
        if (!((i7 >= 1) && (i7 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &ic_emlrtBCI, &st);
        }

        x_kk_ee_me_re = xj->data[i7 - 1].re;
        i6 = xj->size[0];
        p_x_kjm = k->contents;
        if (p_x_kjm != (int32_T)muDoubleScalarFloor(p_x_kjm)) {
          emlrtIntegerCheckR2012b(p_x_kjm, &x_emlrtDCI, &st);
        }

        i7 = (int32_T)p_x_kjm;
        if (!((i7 >= 1) && (i7 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &fc_emlrtBCI, &st);
        }

        x_kk_ee_me_im = xj->data[i7 - 1].im;
        i6 = mess_from_VN_to_FN->contents->size[0];
        i7 = (int32_T)user;
        if (!((i7 >= 1) && (i7 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &gc_emlrtBCI, &st);
        }

        i6 = mess_from_VN_to_FN->contents->size[1];
        p_x_kjm = k->contents;
        if (p_x_kjm != (int32_T)muDoubleScalarFloor(p_x_kjm)) {
          emlrtIntegerCheckR2012b(p_x_kjm, &y_emlrtDCI, &st);
        }

        i8 = (int32_T)p_x_kjm;
        if (!((i8 >= 1) && (i8 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(i8, 1, i6, &gc_emlrtBCI, &st);
        }

        i6 = mess_from_VN_to_FN->contents->size[2];
        if (!((mm + 1 >= 1) && (mm + 1 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(mm + 1, 1, i6, &gc_emlrtBCI, &st);
        }

        p_x_kjm = mess_from_VN_to_FN->contents->data[((i7 +
          mess_from_VN_to_FN->contents->size[0] * (i8 - 1)) +
          mess_from_VN_to_FN->contents->size[0] * mess_from_VN_to_FN->
          contents->size[1] * mm) - 1];
        Expect_over_x_kj_re += p_x_kjm * x_kk_ee_me_re;
        Expect_over_x_kj_im += p_x_kjm * x_kk_ee_me_im;
        x_kk_ee_me_re = muDoubleScalarHypot(x_kk_ee_me_re, x_kk_ee_me_im);
        b_st.site = &qc_emlrtRSI;
        Expect_over_squared_norm_x_kj += x_kk_ee_me_re * x_kk_ee_me_re * p_x_kjm;
        mm++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      x_kk_ee_me_re = muDoubleScalarHypot(h_kjnr_re, h_kjnr_im);
      p_x_kjm = muDoubleScalarHypot(Expect_over_x_kj_re, Expect_over_x_kj_im);
      b_st.site = &rc_emlrtRSI;
      b_st.site = &rc_emlrtRSI;
      adapt_mean->re += h_kjnr_re * Expect_over_x_kj_re - h_kjnr_im *
        Expect_over_x_kj_im;
      adapt_mean->im += h_kjnr_re * Expect_over_x_kj_im + h_kjnr_im *
        Expect_over_x_kj_re;
      *adapt_var += x_kk_ee_me_re * x_kk_ee_me_re *
        (Expect_over_squared_norm_x_kj - p_x_kjm * p_x_kjm);
      uu++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    emxFree_creal_T(sp, &xj);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void get_LLRs(const emlrtStack *sp, const coder_internal_ref_4 *kb, const
                     coder_internal_ref *codewords_binary_labels, const
                     coder_internal_ref_4 *eps_val_num, const
                     coder_internal_ref_4 *eps_val_den, const emxArray_real_T
                     *pmf, emxArray_real_T *soft_bits)
{
  int32_T i12;
  real_T d3;
  int32_T loop_ub;
  emxArray_int8_T *hard_bits;
  int32_T n;
  emxArray_boolean_T *r3;
  emxArray_boolean_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
  emxArray_real_T *b_pmf;
  int32_T end;
  int32_T i;
  real_T A;
  real_T B;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*     %% Get LLRs (Soft bits) @ last iteration when updating VNs for the last time */
  i12 = soft_bits->size[0] * soft_bits->size[1];
  soft_bits->size[0] = 1;
  d3 = kb->contents;
  if (!(d3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d3, &lb_emlrtDCI, sp);
  }

  if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
    emlrtIntegerCheckR2012b(d3, &kb_emlrtDCI, sp);
  }

  soft_bits->size[1] = (int32_T)d3;
  emxEnsureCapacity_real_T(sp, soft_bits, i12, &gd_emlrtRTEI);
  d3 = kb->contents;
  if (!(d3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d3, &pb_emlrtDCI, sp);
  }

  if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
    emlrtIntegerCheckR2012b(d3, &ob_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d3;
  for (i12 = 0; i12 < loop_ub; i12++) {
    soft_bits->data[i12] = 0.0;
  }

  emxInit_int8_T1(sp, &hard_bits, 2, &hd_emlrtRTEI, true);
  i12 = hard_bits->size[0] * hard_bits->size[1];
  hard_bits->size[0] = 1;
  d3 = kb->contents;
  if (!(d3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d3, &nb_emlrtDCI, sp);
  }

  if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
    emlrtIntegerCheckR2012b(d3, &mb_emlrtDCI, sp);
  }

  hard_bits->size[1] = (int32_T)d3;
  emxEnsureCapacity_int8_T1(sp, hard_bits, i12, &hd_emlrtRTEI);
  d3 = kb->contents;
  if (!(d3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d3, &rb_emlrtDCI, sp);
  }

  if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
    emlrtIntegerCheckR2012b(d3, &qb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d3;
  for (i12 = 0; i12 < loop_ub; i12++) {
    hard_bits->data[i12] = 0;
  }

  d3 = kb->contents;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d3, mxDOUBLE_CLASS, (int32_T)d3,
    &ke_emlrtRTEI, sp);
  n = 1;
  emxInit_boolean_T1(sp, &r3, 1, &kd_emlrtRTEI, true);
  emxInit_boolean_T1(sp, &r4, 1, &kd_emlrtRTEI, true);
  emxInit_int32_T(sp, &r5, 1, &kd_emlrtRTEI, true);
  emxInit_int32_T(sp, &r6, 1, &kd_emlrtRTEI, true);
  emxInit_real_T2(sp, &b_pmf, 1, &ld_emlrtRTEI, true);
  while (n - 1 <= (int32_T)d3 - 1) {
    /*  for each bit */
    loop_ub = codewords_binary_labels->contents->size[0];
    i12 = codewords_binary_labels->contents->size[1];
    if (!((n >= 1) && (n <= i12))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i12, &tc_emlrtBCI, sp);
    }

    i12 = r3->size[0];
    r3->size[0] = loop_ub;
    emxEnsureCapacity_boolean_T1(sp, r3, i12, &id_emlrtRTEI);
    for (i12 = 0; i12 < loop_ub; i12++) {
      r3->data[i12] = !codewords_binary_labels->contents->data[i12 +
        codewords_binary_labels->contents->size[0] * (n - 1)];
    }

    st.site = &de_emlrtRSI;
    b_indexShapeCheck(&st, *(int32_T (*)[2])pmf->size, r3->size[0]);
    end = r3->size[0];
    for (i = 0; i < end; i++) {
      if (r3->data[i]) {
        i12 = pmf->size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i12))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i12, &wc_emlrtBCI, sp);
        }
      }
    }

    loop_ub = codewords_binary_labels->contents->size[0];
    i12 = codewords_binary_labels->contents->size[1];
    if (!((n >= 1) && (n <= i12))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i12, &uc_emlrtBCI, sp);
    }

    i12 = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity_boolean_T1(sp, r4, i12, &jd_emlrtRTEI);
    for (i12 = 0; i12 < loop_ub; i12++) {
      r4->data[i12] = codewords_binary_labels->contents->data[i12 +
        codewords_binary_labels->contents->size[0] * (n - 1)];
    }

    st.site = &ee_emlrtRSI;
    b_indexShapeCheck(&st, *(int32_T (*)[2])pmf->size, r4->size[0]);
    end = r4->size[0];
    for (i = 0; i < end; i++) {
      if (r4->data[i]) {
        i12 = pmf->size[0];
        if (!((i + 1 >= 1) && (i + 1 <= i12))) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1, i12, &xc_emlrtBCI, sp);
        }
      }
    }

    end = r3->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (r3->data[i]) {
        loop_ub++;
      }
    }

    i12 = r5->size[0];
    r5->size[0] = loop_ub;
    emxEnsureCapacity_int32_T1(sp, r5, i12, &kd_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (r3->data[i]) {
        r5->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }

    end = r4->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (r4->data[i]) {
        loop_ub++;
      }
    }

    i12 = r6->size[0];
    r6->size[0] = loop_ub;
    emxEnsureCapacity_int32_T1(sp, r6, i12, &kd_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (r4->data[i]) {
        r6->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }

    i12 = b_pmf->size[0];
    b_pmf->size[0] = r5->size[0];
    emxEnsureCapacity_real_T2(sp, b_pmf, i12, &ld_emlrtRTEI);
    loop_ub = r5->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      b_pmf->data[i12] = pmf->data[r5->data[i12] - 1];
    }

    st.site = &fe_emlrtRSI;
    A = b_sum(&st, b_pmf) + eps_val_num->contents;
    i12 = b_pmf->size[0];
    b_pmf->size[0] = r6->size[0];
    emxEnsureCapacity_real_T2(sp, b_pmf, i12, &md_emlrtRTEI);
    loop_ub = r6->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      b_pmf->data[i12] = pmf->data[r6->data[i12] - 1];
    }

    st.site = &fe_emlrtRSI;
    B = b_sum(&st, b_pmf) + eps_val_den->contents;
    A /= B;
    st.site = &fe_emlrtRSI;
    if (A < 0.0) {
      b_st.site = &ie_emlrtRSI;
      g_error(&b_st);
    }

    i12 = soft_bits->size[1];
    if (!((n >= 1) && (n <= i12))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i12, &yc_emlrtBCI, sp);
    }

    soft_bits->data[n - 1] = muDoubleScalarLog(A);
    i12 = soft_bits->size[1];
    loop_ub = (n - 1) + 1;
    if (!((loop_ub >= 1) && (loop_ub <= i12))) {
      emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i12, &vc_emlrtBCI, sp);
    }

    i12 = hard_bits->size[1];
    if (!((n >= 1) && (n <= i12))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i12, &ad_emlrtBCI, sp);
    }

    hard_bits->data[n - 1] = (int8_T)(muDoubleScalarSign(soft_bits->data[n - 1])
      < 0.0);
    n++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(sp, &b_pmf);
  emxFree_int32_T(sp, &r6);
  emxFree_int32_T(sp, &r5);
  emxFree_boolean_T(sp, &r4);
  emxFree_boolean_T(sp, &r3);
  emxFree_int8_T(sp, &hard_bits);

  /*  end bit loop */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static real_T get_extrinsic_info_probability(const emlrtStack *sp, const
  coder_internal_ref_6 *strong_users, const coder_internal_ref_6 *counter, const
  coder_internal_ref_1 *C_perms, const coder_internal_ref_1 *F_int, const
  coder_internal_ref_4 *k, coder_internal_ref_6 *codeword_labels, const
  coder_internal_ref_4 *M, const coder_internal_ref_7 *mess_from_VN_to_FN)
{
  real_T prob_extrinsic_info;
  int32_T varargin_2;
  int32_T uu;
  emxArray_real_T *projection_index;
  emxArray_real_T *permutation_row;
  emxArray_int32_T *r2;
  emxArray_int8_T *b;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_real_T *b_mess_from_VN_to_FN;
  int32_T i9;
  int32_T iv1[2];
  real_T u;
  int32_T loop_ub;
  int32_T b_projection_index[2];
  int32_T b_strong_users[2];
  int32_T idx;
  int32_T trueCount;
  int32_T nx;
  int32_T i10;
  real_T prob_of_projection;
  boolean_T overflow;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*     %% Get the probability of the current interference being tested */
  prob_extrinsic_info = 1.0;

  /* for u = strong_users */
  varargin_2 = strong_users->contents->size[1];
  uu = 0;
  emxInit_real_T(sp, &projection_index, 2, &xc_emlrtRTEI, true);
  emxInit_real_T(sp, &permutation_row, 2, &yc_emlrtRTEI, true);
  emxInit_int32_T1(sp, &r2, 2, &wc_emlrtRTEI, true);
  emxInit_int8_T1(sp, &b, 2, &ad_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 2, &cd_emlrtRTEI, true);
  emxInit_int32_T1(sp, &ii, 2, &qb_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_mess_from_VN_to_FN, 3, &ed_emlrtRTEI, true);
  if (0 <= varargin_2 - 1) {
    for (i9 = 0; i9 < 2; i9++) {
      iv1[i9] = strong_users->contents->size[i9];
    }
  }

  while (uu <= varargin_2 - 1) {
    i9 = strong_users->contents->size[1];
    if (!((uu + 1 >= 1) && (uu + 1 <= i9))) {
      emlrtDynamicBoundsCheckR2012b(uu + 1, 1, i9, &pc_emlrtBCI, sp);
    }

    u = strong_users->contents->data[uu];
    i9 = projection_index->size[0] * projection_index->size[1];
    projection_index->size[0] = 1;
    projection_index->size[1] = iv1[1];
    emxEnsureCapacity_real_T(sp, projection_index, i9, &vc_emlrtRTEI);
    loop_ub = iv1[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      projection_index->data[i9] = u;
    }

    for (i9 = 0; i9 < 2; i9++) {
      b_projection_index[i9] = projection_index->size[i9];
    }

    for (i9 = 0; i9 < 2; i9++) {
      b_strong_users[i9] = strong_users->contents->size[i9];
    }

    if ((b_projection_index[0] != b_strong_users[0]) || (b_projection_index[1]
         != b_strong_users[1])) {
      emlrtSizeEqCheckNDR2012b(&b_projection_index[0], &b_strong_users[0],
        &g_emlrtECI, sp);
    }

    i9 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = projection_index->size[1];
    emxEnsureCapacity_boolean_T(sp, x, i9, &vc_emlrtRTEI);
    loop_ub = projection_index->size[0] * projection_index->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      x->data[i9] = (projection_index->data[i9] == strong_users->contents->
                     data[i9]);
    }

    idx = x->size[1] - 1;
    trueCount = 0;
    for (nx = 0; nx <= idx; nx++) {
      if (x->data[nx]) {
        trueCount++;
      }
    }

    i9 = r2->size[0] * r2->size[1];
    r2->size[0] = 1;
    r2->size[1] = trueCount;
    emxEnsureCapacity_int32_T(sp, r2, i9, &wc_emlrtRTEI);
    trueCount = 0;
    for (nx = 0; nx <= idx; nx++) {
      if (x->data[nx]) {
        r2->data[trueCount] = nx + 1;
        trueCount++;
      }
    }

    i9 = projection_index->size[0] * projection_index->size[1];
    projection_index->size[0] = 1;
    projection_index->size[1] = r2->size[1];
    emxEnsureCapacity_real_T(sp, projection_index, i9, &xc_emlrtRTEI);
    trueCount = counter->contents->size[1];
    loop_ub = r2->size[0] * r2->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      i10 = r2->data[i9];
      if (!((i10 >= 1) && (i10 <= trueCount))) {
        emlrtDynamicBoundsCheckR2012b(i10, 1, trueCount, &qc_emlrtBCI, sp);
      }

      projection_index->data[i9] = counter->contents->data[i10 - 1];
    }

    loop_ub = C_perms->contents->size[1];
    i9 = C_perms->contents->size[0];
    i10 = F_int->contents->size[0];
    prob_of_projection = k->contents;
    if (prob_of_projection != (int32_T)muDoubleScalarFloor(prob_of_projection))
    {
      emlrtIntegerCheckR2012b(prob_of_projection, &eb_emlrtDCI, sp);
    }

    trueCount = (int32_T)prob_of_projection;
    if (!((trueCount >= 1) && (trueCount <= i10))) {
      emlrtDynamicBoundsCheckR2012b(trueCount, 1, i10, &rc_emlrtBCI, sp);
    }

    i10 = F_int->contents->size[1];
    if (u != (int32_T)muDoubleScalarFloor(u)) {
      emlrtIntegerCheckR2012b(u, &eb_emlrtDCI, sp);
    }

    nx = (int32_T)u;
    if (!((nx >= 1) && (nx <= i10))) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, i10, &rc_emlrtBCI, sp);
    }

    prob_of_projection = F_int->contents->data[(trueCount + F_int->
      contents->size[0] * (nx - 1)) - 1];
    if (prob_of_projection != (int32_T)muDoubleScalarFloor(prob_of_projection))
    {
      emlrtIntegerCheckR2012b(prob_of_projection, &eb_emlrtDCI, sp);
    }

    trueCount = (int32_T)prob_of_projection;
    if (!((trueCount >= 1) && (trueCount <= i9))) {
      emlrtDynamicBoundsCheckR2012b(trueCount, 1, i9, &oc_emlrtBCI, sp);
    }

    i9 = permutation_row->size[0] * permutation_row->size[1];
    permutation_row->size[0] = 1;
    permutation_row->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, permutation_row, i9, &yc_emlrtRTEI);
    for (i9 = 0; i9 < loop_ub; i9++) {
      permutation_row->data[permutation_row->size[0] * i9] = C_perms->
        contents->data[(trueCount + C_perms->contents->size[0] * i9) - 1];
    }

    /*  M columns */
    i9 = projection_index->size[1];
    if (!(1 <= i9)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i9, &nc_emlrtBCI, sp);
    }

    i9 = b->size[0] * b->size[1];
    b->size[0] = 1;
    prob_of_projection = M->contents;
    if (!(prob_of_projection >= 0.0)) {
      emlrtNonNegativeCheckR2012b(prob_of_projection, &gb_emlrtDCI, sp);
    }

    if (prob_of_projection != (int32_T)muDoubleScalarFloor(prob_of_projection))
    {
      emlrtIntegerCheckR2012b(prob_of_projection, &fb_emlrtDCI, sp);
    }

    b->size[1] = (int32_T)prob_of_projection;
    emxEnsureCapacity_int8_T1(sp, b, i9, &ad_emlrtRTEI);
    prob_of_projection = M->contents;
    if (!(prob_of_projection >= 0.0)) {
      emlrtNonNegativeCheckR2012b(prob_of_projection, &ib_emlrtDCI, sp);
    }

    if (prob_of_projection != (int32_T)muDoubleScalarFloor(prob_of_projection))
    {
      emlrtIntegerCheckR2012b(prob_of_projection, &hb_emlrtDCI, sp);
    }

    loop_ub = (int32_T)prob_of_projection;
    for (i9 = 0; i9 < loop_ub; i9++) {
      b->data[i9] = 1;
    }

    prob_of_projection = projection_index->data[0];
    i9 = projection_index->size[0] * projection_index->size[1];
    projection_index->size[0] = 1;
    projection_index->size[1] = b->size[1];
    emxEnsureCapacity_real_T(sp, projection_index, i9, &bd_emlrtRTEI);
    loop_ub = b->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      projection_index->data[projection_index->size[0] * i9] =
        prob_of_projection * (real_T)b->data[b->size[0] * i9];
    }

    for (i9 = 0; i9 < 2; i9++) {
      b_strong_users[i9] = permutation_row->size[i9];
    }

    for (i9 = 0; i9 < 2; i9++) {
      b_projection_index[i9] = projection_index->size[i9];
    }

    if ((b_strong_users[0] != b_projection_index[0]) || (b_strong_users[1] !=
         b_projection_index[1])) {
      emlrtSizeEqCheckNDR2012b(&b_strong_users[0], &b_projection_index[0],
        &f_emlrtECI, sp);
    }

    st.site = &td_emlrtRSI;
    i9 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = permutation_row->size[1];
    emxEnsureCapacity_boolean_T(&st, x, i9, &cd_emlrtRTEI);
    loop_ub = permutation_row->size[0] * permutation_row->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      x->data[i9] = (permutation_row->data[i9] == projection_index->data[i9]);
    }

    b_st.site = &fb_emlrtRSI;
    nx = x->size[1];
    c_st.site = &gb_emlrtRSI;
    idx = 0;
    i9 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = x->size[1];
    emxEnsureCapacity_int32_T(&c_st, ii, i9, &h_emlrtRTEI);
    d_st.site = &hb_emlrtRSI;
    overflow = ((!(1 > x->size[1])) && (x->size[1] > 2147483646));
    if (overflow) {
      e_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    trueCount = 1;
    exitg1 = false;
    while ((!exitg1) && (trueCount <= nx)) {
      if (x->data[trueCount - 1]) {
        idx++;
        ii->data[idx - 1] = trueCount;
        if (idx >= nx) {
          exitg1 = true;
        } else {
          trueCount++;
        }
      } else {
        trueCount++;
      }
    }

    if (!(idx <= x->size[1])) {
      emlrtErrorWithMessageIdR2018a(&c_st, &sd_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    if (x->size[1] == 1) {
      if (idx == 0) {
        i9 = ii->size[0] * ii->size[1];
        ii->size[0] = 1;
        ii->size[1] = 0;
        emxEnsureCapacity_int32_T(&c_st, ii, i9, &i_emlrtRTEI);
      }
    } else {
      i9 = ii->size[0] * ii->size[1];
      if (1 > idx) {
        ii->size[1] = 0;
      } else {
        ii->size[1] = idx;
      }

      emxEnsureCapacity_int32_T(&c_st, ii, i9, &i_emlrtRTEI);
    }

    i9 = codeword_labels->contents->size[0] * codeword_labels->contents->size[1];
    codeword_labels->contents->size[0] = 1;
    codeword_labels->contents->size[1] = ii->size[1];
    emxEnsureCapacity_real_T(sp, codeword_labels->contents, i9, &dd_emlrtRTEI);
    loop_ub = ii->size[0] * ii->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      codeword_labels->contents->data[i9] = ii->data[i9];
    }

    trueCount = mess_from_VN_to_FN->contents->size[2];
    i9 = mess_from_VN_to_FN->contents->size[1];
    prob_of_projection = k->contents;
    if (prob_of_projection != (int32_T)muDoubleScalarFloor(prob_of_projection))
    {
      emlrtIntegerCheckR2012b(prob_of_projection, &cb_emlrtDCI, sp);
    }

    nx = (int32_T)prob_of_projection;
    if (!((nx >= 1) && (nx <= i9))) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, i9, &lc_emlrtBCI, sp);
    }

    i9 = mess_from_VN_to_FN->contents->size[0];
    if (u != (int32_T)muDoubleScalarFloor(u)) {
      emlrtIntegerCheckR2012b(u, &db_emlrtDCI, sp);
    }

    idx = (int32_T)u;
    if (!((idx >= 1) && (idx <= i9))) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, i9, &mc_emlrtBCI, sp);
    }

    i9 = b_mess_from_VN_to_FN->size[0] * b_mess_from_VN_to_FN->size[1] *
      b_mess_from_VN_to_FN->size[2];
    b_mess_from_VN_to_FN->size[0] = 1;
    b_mess_from_VN_to_FN->size[1] = 1;
    b_mess_from_VN_to_FN->size[2] = codeword_labels->contents->size[1];
    emxEnsureCapacity_real_T1(sp, b_mess_from_VN_to_FN, i9, &ed_emlrtRTEI);
    loop_ub = codeword_labels->contents->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      prob_of_projection = codeword_labels->contents->data
        [codeword_labels->contents->size[0] * i9];
      if (prob_of_projection != (int32_T)muDoubleScalarFloor(prob_of_projection))
      {
        emlrtIntegerCheckR2012b(prob_of_projection, &jb_emlrtDCI, sp);
      }

      i10 = (int32_T)prob_of_projection;
      if (!((i10 >= 1) && (i10 <= trueCount))) {
        emlrtDynamicBoundsCheckR2012b(i10, 1, trueCount, &sc_emlrtBCI, sp);
      }

      b_mess_from_VN_to_FN->data[b_mess_from_VN_to_FN->size[0] *
        b_mess_from_VN_to_FN->size[1] * i9] = mess_from_VN_to_FN->contents->
        data[((idx + mess_from_VN_to_FN->contents->size[0] * (nx - 1)) +
              mess_from_VN_to_FN->contents->size[0] *
              mess_from_VN_to_FN->contents->size[1] * (i10 - 1)) - 1];
    }

    st.site = &ud_emlrtRSI;
    prob_of_projection = sum(&st, b_mess_from_VN_to_FN);
    prob_extrinsic_info *= prob_of_projection;
    uu++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(sp, &b_mess_from_VN_to_FN);
  emxFree_int32_T(sp, &ii);
  emxFree_boolean_T(sp, &x);
  emxFree_int8_T(sp, &b);
  emxFree_int32_T(sp, &r2);
  emxFree_real_T(sp, &permutation_row);
  emxFree_real_T(sp, &projection_index);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return prob_extrinsic_info;
}

static void spread_symbol(const emlrtStack *sp, const coder_internal_ref_3 *C,
  const coder_internal_ref_1 *F, real_T user, real_T sym_index, emxArray_creal_T
  *xj)
{
  emxArray_creal_T *cj;
  int32_T i1;
  int32_T nrowx;
  int32_T i2;
  emxArray_real_T *v;
  emxArray_real_T *Tj;
  int32_T iy;
  boolean_T overflow;
  emxArray_boolean_T *y;
  uint32_T outsize[2];
  int32_T i;
  boolean_T exitg1;
  int32_T ncolx;
  emxArray_real_T *b_Tj;
  emxArray_creal_T *c_Tj;
  real_T Tj_re;
  real_T Tj_im;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_creal_T2(sp, &cj, 1, &lc_emlrtRTEI, true);

  /*     %% N-dim symbol to K-dim symbol */
  i1 = C->contents->size[0];
  nrowx = C->contents->size[1];
  i2 = (int32_T)sym_index;
  if (!((i2 >= 1) && (i2 <= nrowx))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, nrowx, &kc_emlrtBCI, sp);
  }

  nrowx = cj->size[0];
  cj->size[0] = i1;
  emxEnsureCapacity_creal_T2(sp, cj, nrowx, &lc_emlrtRTEI);
  for (nrowx = 0; nrowx < i1; nrowx++) {
    cj->data[nrowx] = C->contents->data[nrowx + C->contents->size[0] * (i2 - 1)];
  }

  emxInit_real_T2(sp, &v, 1, &mc_emlrtRTEI, true);
  st.site = &sc_emlrtRSI;
  i1 = F->contents->size[0];
  nrowx = F->contents->size[1];
  i2 = (int32_T)user;
  if (!((i2 >= 1) && (i2 <= nrowx))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, nrowx, &jc_emlrtBCI, &st);
  }

  nrowx = v->size[0];
  v->size[0] = i1;
  emxEnsureCapacity_real_T2(&st, v, nrowx, &mc_emlrtRTEI);
  for (nrowx = 0; nrowx < i1; nrowx++) {
    v->data[nrowx] = F->contents->data[nrowx + F->contents->size[0] * (i2 - 1)];
  }

  emxInit_real_T(&st, &Tj, 2, &nc_emlrtRTEI, true);
  i2 = v->size[0];
  iy = v->size[0];
  nrowx = Tj->size[0] * Tj->size[1];
  Tj->size[0] = i2;
  Tj->size[1] = iy;
  emxEnsureCapacity_real_T(&st, Tj, nrowx, &nc_emlrtRTEI);
  i1 = i2 * iy;
  for (nrowx = 0; nrowx < i1; nrowx++) {
    Tj->data[nrowx] = 0.0;
  }

  b_st.site = &vc_emlrtRSI;
  overflow = ((!(1 > v->size[0])) && (v->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i2 = 0; i2 < v->size[0]; i2++) {
    Tj->data[i2 + Tj->size[0] * i2] = v->data[i2];
  }

  emxFree_real_T(&st, &v);
  emxInit_boolean_T(&st, &y, 2, &uc_emlrtRTEI, true);
  st.site = &tc_emlrtRSI;
  b_st.site = &wc_emlrtRSI;
  for (nrowx = 0; nrowx < 2; nrowx++) {
    outsize[nrowx] = (uint32_T)Tj->size[nrowx];
  }

  nrowx = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)outsize[1];
  emxEnsureCapacity_boolean_T(&b_st, y, nrowx, &oc_emlrtRTEI);
  i1 = (int32_T)outsize[1];
  for (nrowx = 0; nrowx < i1; nrowx++) {
    y->data[nrowx] = false;
  }

  i2 = 0;
  iy = -1;
  c_st.site = &xc_emlrtRSI;
  overflow = ((!(1 > Tj->size[1])) && (Tj->size[1] > 2147483646));
  if (overflow) {
    d_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (i = 1; i <= Tj->size[1]; i++) {
    i1 = i2;
    i2 += Tj->size[0];
    iy++;
    c_st.site = &yc_emlrtRSI;
    if ((!(i1 + 1 > i2)) && (i2 > 2147483646)) {
      d_st.site = &ib_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    exitg1 = false;
    while ((!exitg1) && (i1 + 1 <= i2)) {
      if ((Tj->data[i1] == 0.0) || muDoubleScalarIsNaN(Tj->data[i1])) {
        i1++;
      } else {
        y->data[iy] = true;
        exitg1 = true;
      }
    }
  }

  st.site = &tc_emlrtRSI;
  i1 = y->size[0] * y->size[1] - 1;
  nrowx = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity_boolean_T(&st, y, nrowx, &pc_emlrtRTEI);
  for (nrowx = 0; nrowx <= i1; nrowx++) {
    y->data[nrowx] = !y->data[nrowx];
  }

  b_st.site = &ad_emlrtRSI;
  i1 = y->size[1];
  while ((i1 >= 1) && (!y->data[i1 - 1])) {
    i1--;
  }

  if (!(i1 <= Tj->size[1])) {
    emlrtErrorWithMessageIdR2018a(&b_st, &ge_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", "MATLAB:subsdeldimmismatch", 0);
  }

  b_st.site = &bd_emlrtRSI;
  nrowx = Tj->size[0];
  ncolx = Tj->size[1];
  c_st.site = &cd_emlrtRSI;
  i2 = 0;
  d_st.site = &fd_emlrtRSI;
  overflow = ((!(1 > y->size[1])) && (y->size[1] > 2147483646));
  if (overflow) {
    e_st.site = &ib_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (i1 = 1; i1 <= y->size[1]; i1++) {
    i2 += y->data[i1 - 1];
  }

  iy = Tj->size[1] - i2;
  i2 = 0;
  c_st.site = &dd_emlrtRSI;
  for (i1 = 1; i1 <= ncolx; i1++) {
    if ((i1 > y->size[1]) || (!y->data[i1 - 1])) {
      c_st.site = &ed_emlrtRSI;
      if ((!(1 > nrowx)) && (nrowx > 2147483646)) {
        d_st.site = &ib_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (i = 0; i < nrowx; i++) {
        Tj->data[i + Tj->size[0] * i2] = Tj->data[i + Tj->size[0] * (i1 - 1)];
      }

      i2++;
    }
  }

  emxFree_boolean_T(&b_st, &y);
  if (!(iy <= ncolx)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &fe_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > iy) {
    i1 = 0;
  } else {
    i1 = iy;
  }

  emxInit_real_T(&b_st, &b_Tj, 2, &qc_emlrtRTEI, true);
  i2 = Tj->size[0];
  nrowx = b_Tj->size[0] * b_Tj->size[1];
  b_Tj->size[0] = i2;
  b_Tj->size[1] = i1;
  emxEnsureCapacity_real_T(&b_st, b_Tj, nrowx, &qc_emlrtRTEI);
  for (nrowx = 0; nrowx < i1; nrowx++) {
    for (iy = 0; iy < i2; iy++) {
      b_Tj->data[iy + b_Tj->size[0] * nrowx] = Tj->data[iy + Tj->size[0] * nrowx];
    }
  }

  nrowx = Tj->size[0] * Tj->size[1];
  Tj->size[0] = b_Tj->size[0];
  Tj->size[1] = b_Tj->size[1];
  emxEnsureCapacity_real_T(&b_st, Tj, nrowx, &rc_emlrtRTEI);
  i1 = b_Tj->size[1];
  for (nrowx = 0; nrowx < i1; nrowx++) {
    i2 = b_Tj->size[0];
    for (iy = 0; iy < i2; iy++) {
      Tj->data[iy + Tj->size[0] * nrowx] = b_Tj->data[iy + b_Tj->size[0] * nrowx];
    }
  }

  emxFree_real_T(&b_st, &b_Tj);

  /*  spreading matrix */
  st.site = &uc_emlrtRSI;
  b_st.site = &gd_emlrtRSI;
  if (!(Tj->size[1] == cj->size[0])) {
    if (((Tj->size[0] == 1) && (Tj->size[1] == 1)) || (cj->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &wd_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &vd_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_creal_T(&b_st, &c_Tj, 2, &sc_emlrtRTEI, true);
  nrowx = c_Tj->size[0] * c_Tj->size[1];
  c_Tj->size[0] = Tj->size[0];
  c_Tj->size[1] = Tj->size[1];
  emxEnsureCapacity_creal_T(&st, c_Tj, nrowx, &sc_emlrtRTEI);
  i1 = Tj->size[1];
  for (nrowx = 0; nrowx < i1; nrowx++) {
    i2 = Tj->size[0];
    for (iy = 0; iy < i2; iy++) {
      c_Tj->data[iy + c_Tj->size[0] * nrowx].re = Tj->data[iy + Tj->size[0] *
        nrowx];
      c_Tj->data[iy + c_Tj->size[0] * nrowx].im = 0.0;
    }
  }

  emxFree_real_T(&st, &Tj);
  nrowx = xj->size[0];
  xj->size[0] = c_Tj->size[0];
  emxEnsureCapacity_creal_T2(&st, xj, nrowx, &tc_emlrtRTEI);
  i1 = c_Tj->size[0];
  for (nrowx = 0; nrowx < i1; nrowx++) {
    xj->data[nrowx].re = 0.0;
    xj->data[nrowx].im = 0.0;
    i2 = c_Tj->size[1];
    for (iy = 0; iy < i2; iy++) {
      Tj_re = c_Tj->data[nrowx + c_Tj->size[0] * iy].re * cj->data[iy].re -
        c_Tj->data[nrowx + c_Tj->size[0] * iy].im * cj->data[iy].im;
      Tj_im = c_Tj->data[nrowx + c_Tj->size[0] * iy].re * cj->data[iy].im +
        c_Tj->data[nrowx + c_Tj->size[0] * iy].im * cj->data[iy].re;
      xj->data[nrowx].re += Tj_re;
      xj->data[nrowx].im += Tj_im;
    }
  }

  emxFree_creal_T(&st, &c_Tj);
  emxFree_creal_T(&st, &cj);

  /*  assign K-dim sparse symbol to user j in packet ns */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void update_cartesian_counter(const emlrtStack *sp, const
  coder_internal_ref_6 *length_of_each_counter, const coder_internal_ref_4
  *marginal_prob_idx_cnt, emxArray_real_T *counter)
{
  int32_T i15;
  int32_T n;
  emxArray_real_T *b_length_of_each_counter;
  int32_T i16;
  int32_T loop_ub;
  real_T x;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*     %% Update Count Cartesiano */
  /*  incrementa iterativamente os indices de um produto cartesiano para obter todas as combinacoes */
  i15 = counter->size[1];
  n = 0;
  emxInit_real_T(sp, &b_length_of_each_counter, 2, &od_emlrtRTEI, true);
  while (n <= i15 - 1) {
    if (1.0 + (real_T)n == 1.0) {
      i16 = counter->size[1];
      loop_ub = n + 1;
      if (!((loop_ub >= 1) && (loop_ub <= i16))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i16, &dd_emlrtBCI, sp);
      }

      i16 = counter->size[1];
      loop_ub = n + 1;
      if (!((loop_ub >= 1) && (loop_ub <= i16))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i16, &fd_emlrtBCI, sp);
      }

      i16 = length_of_each_counter->contents->size[1];
      loop_ub = n + 1;
      if (!((loop_ub >= 1) && (loop_ub <= i16))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i16, &ed_emlrtBCI, sp);
      }

      counter->data[0] = b_mod(counter->data[0] + 1.0,
        length_of_each_counter->contents->data[0] + 1.0);
    } else {
      i16 = length_of_each_counter->contents->size[1];
      if (!(1 <= i16)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i16, &cd_emlrtBCI, sp);
      }

      i16 = length_of_each_counter->contents->size[1];
      loop_ub = (int32_T)((1.0 + (real_T)n) - 1.0);
      if (!((loop_ub >= 1) && (loop_ub <= i16))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i16, &bd_emlrtBCI, sp);
      }

      loop_ub = (int32_T)((1.0 + (real_T)n) - 1.0);
      i16 = b_length_of_each_counter->size[0] * b_length_of_each_counter->size[1];
      b_length_of_each_counter->size[0] = 1;
      b_length_of_each_counter->size[1] = (int32_T)((1.0 + (real_T)n) - 1.0);
      emxEnsureCapacity_real_T(sp, b_length_of_each_counter, i16, &od_emlrtRTEI);
      for (i16 = 0; i16 < loop_ub; i16++) {
        b_length_of_each_counter->data[b_length_of_each_counter->size[0] * i16] =
          length_of_each_counter->contents->data[i16];
      }

      st.site = &ae_emlrtRSI;
      x = b_mod(marginal_prob_idx_cnt->contents, prod(&st,
                 b_length_of_each_counter));
      st.site = &ae_emlrtRSI;
      if (muDoubleScalarIsNaN(x)) {
        b_st.site = &be_emlrtRSI;
        f_error(&b_st);
      }

      if (!(x != 0.0)) {
        i16 = counter->size[1];
        if (!((n + 1 >= 1) && (n + 1 <= i16))) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, i16, &gd_emlrtBCI, sp);
        }

        i16 = length_of_each_counter->contents->size[1];
        if (!((n + 1 >= 1) && (n + 1 <= i16))) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, i16, &hd_emlrtBCI, sp);
        }

        i16 = counter->size[1];
        if (!((n + 1 >= 1) && (n + 1 <= i16))) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, i16, &id_emlrtBCI, sp);
        }

        counter->data[n] = b_mod(counter->data[n] + 1.0,
          length_of_each_counter->contents->data[n] + 1.0);
      }
    }

    i16 = counter->size[1];
    if (!((n + 1 >= 1) && (n + 1 <= i16))) {
      emlrtDynamicBoundsCheckR2012b(n + 1, 1, i16, &jd_emlrtBCI, sp);
    }

    if (counter->data[n] == 0.0) {
      i16 = counter->size[1];
      if (!((n + 1 >= 1) && (n + 1 <= i16))) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, i16, &kd_emlrtBCI, sp);
      }

      counter->data[n] = 1.0;
    }

    n++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_real_T(sp, &b_length_of_each_counter);

  /*  fim incremento cartesiano */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void TB_ESGA_MPA_Many_Rx_Linux_v0(const emlrtStack *sp, const emxArray_creal_T
  *y_all, const emxArray_real_T *F, const emxArray_real_T *F_int, const creal_T
  C_data[], const int32_T C_size[2], const real_T C_perms_data[], const int32_T
  C_perms_size[2], const creal_T Aq_data[], const int32_T Aq_size[1], const
  boolean_T codewords_binary_labels_data[], const int32_T
  codewords_binary_labels_size[2], const emxArray_creal_T *H, real_T Tm, real_T
  r_th, const emxArray_real_T *a_priori_beliefs, real_T varnoise,
  emxArray_real_T *soft_bits, emxArray_real_T *hard_symbols)
{
  coder_internal_ref_1 b_F;
  int32_T i0;
  int32_T loop_ub;
  coder_internal_ref_1 b_F_int;
  coder_internal_ref_3 C;
  coder_internal_ref_1 C_perms;
  coder_internal_ref codewords_binary_labels;
  coder_internal_ref_5 b_H;
  coder_internal_ref_4 b_r_th;
  coder_internal_ref_4 eps_val_num;
  coder_internal_ref_4 eps_val_den;
  int32_T J;
  int32_T K;
  coder_internal_ref_4 M;
  int32_T varargin_1;
  coder_internal_ref_4 kb;
  int32_T i1;
  real_T d0;
  emxArray_real_T *mess_from_FN_to_VN;
  emxArray_int8_T *r0;
  coder_internal_ref_7 mess_from_VN_to_FN;
  int32_T j;
  emxArray_real_T *vphi_j;
  emxArray_int32_T *ii;
  emxArray_int32_T *b_ii;
  int32_T ns;
  coder_internal_ref_6 codeword_labels;
  coder_internal_ref_6 counter;
  int32_T i2;
  coder_internal_ref_6 length_of_each_counter;
  coder_internal_ref_6 strong_users;
  coder_internal_ref_6 phi_k_except_j;
  emxArray_creal_T *interference_projections;
  emxArray_creal_T *h_strong_users;
  emxArray_real_T *vphi_j_except_k;
  emxArray_real_T *pmf;
  emxArray_real_T *r1;
  emxArray_real_T *x;
  emxArray_boolean_T *b_x;
  int32_T nx;
  emxArray_real_T *b_varargin_1;
  emxArray_creal_T *c_H;
  int32_T idx;
  emxArray_real_T *b_mess_from_VN_to_FN;
  emxArray_real_T *b_mess_from_FN_to_VN;
  emxArray_int32_T *b_counter;
  int32_T c_ii;
  int32_T b_loop_ub;
  boolean_T exitg1;
  int32_T i3;
  int32_T t;
  creal_T y_data[2000];
  int32_T k;
  coder_internal_ref_4 b_k;
  int32_T a_priori_beliefs_size[2];
  int32_T c_mess_from_FN_to_VN;
  boolean_T overflow;
  int32_T i4;
  int32_T iv0[3];
  int32_T b_a_priori_beliefs[2];
  real_T a_priori_beliefs_data[64];
  int32_T b_j1;
  coder_internal_ref_4 b_j;
  int32_T ib_size[1];
  int32_T q_id;
  real_T prob_q_jk;
  int32_T nr;
  coder_internal_ref_4 b_nr;
  creal_T interference;
  real_T adapt_var;
  real_T cte_norm;
  real_T H_im;
  real_T yk_fix_re;
  real_T yk_fix_im;
  real_T pdf_exp_cte;
  real_T pdf_scaling_cte;
  coder_internal_ref_4 marginal_prob_idx_cnt;
  boolean_T guard1 = false;
  real_T im;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
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
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  d_emxInitStruct_coder_internal_(sp, &b_F, &lb_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  i0 = b_F.contents->size[0] * b_F.contents->size[1];
  b_F.contents->size[0] = F->size[0];
  b_F.contents->size[1] = F->size[1];
  emxEnsureCapacity_real_T(&st, b_F.contents, i0, &emlrtRTEI);
  loop_ub = F->size[0] * F->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_F.contents->data[i0] = F->data[i0];
  }

  d_emxInitStruct_coder_internal_(&st, &b_F_int, &lb_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  i0 = b_F_int.contents->size[0] * b_F_int.contents->size[1];
  b_F_int.contents->size[0] = F_int->size[0];
  b_F_int.contents->size[1] = F_int->size[1];
  emxEnsureCapacity_real_T(&st, b_F_int.contents, i0, &emlrtRTEI);
  loop_ub = F_int->size[0] * F_int->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_F_int.contents->data[i0] = F_int->data[i0];
  }

  e_emxInitStruct_coder_internal_(&st, &C, &lb_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  i0 = C.contents->size[0] * C.contents->size[1];
  C.contents->size[0] = C_size[0];
  C.contents->size[1] = C_size[1];
  emxEnsureCapacity_creal_T(&st, C.contents, i0, &emlrtRTEI);
  loop_ub = C_size[0] * C_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    C.contents->data[i0] = C_data[i0];
  }

  d_emxInitStruct_coder_internal_(&st, &C_perms, &lb_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  i0 = C_perms.contents->size[0] * C_perms.contents->size[1];
  C_perms.contents->size[0] = C_perms_size[0];
  C_perms.contents->size[1] = C_perms_size[1];
  emxEnsureCapacity_real_T(&st, C_perms.contents, i0, &emlrtRTEI);
  loop_ub = C_perms_size[0] * C_perms_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    C_perms.contents->data[i0] = C_perms_data[i0];
  }

  c_emxInitStruct_coder_internal_(&st, &codewords_binary_labels, &lb_emlrtRTEI,
    true);
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  i0 = codewords_binary_labels.contents->size[0] *
    codewords_binary_labels.contents->size[1];
  codewords_binary_labels.contents->size[0] = codewords_binary_labels_size[0];
  codewords_binary_labels.contents->size[1] = codewords_binary_labels_size[1];
  emxEnsureCapacity_boolean_T(&st, codewords_binary_labels.contents, i0,
    &emlrtRTEI);
  loop_ub = codewords_binary_labels_size[0] * codewords_binary_labels_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    codewords_binary_labels.contents->data[i0] = codewords_binary_labels_data[i0];
  }

  f_emxInitStruct_coder_internal_(&st, &b_H, &lb_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  i0 = b_H.contents->size[0] * b_H.contents->size[1] * b_H.contents->size[2];
  b_H.contents->size[0] = H->size[0];
  b_H.contents->size[1] = H->size[1];
  b_H.contents->size[2] = H->size[2];
  emxEnsureCapacity_creal_T1(&st, b_H.contents, i0, &emlrtRTEI);
  loop_ub = H->size[0] * H->size[1] * H->size[2];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_H.contents->data[i0] = H->data[i0];
  }

  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  b_r_th.contents = r_th;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &y_emlrtRSI;

  /* TB_ESGA_MPA_Many_Rx_v0 Summary of this function goes here */
  /*    Detailed explanation goes here */
  eps_val_num.contents = 1.0E-50;
  eps_val_den.contents = 1.0E-50;

  /*  a_priori_beliefs: J x M matrix with a priory beliefs of each symbol */
  J = b_F.contents->size[1];
  K = b_F.contents->size[0];
  i0 = C.contents->size[1];
  M.contents = i0;
  varargin_1 = Aq_size[0];
  st.site = &b_emlrtRSI;
  kb.contents = b_log2(&st, i0);
  i1 = soft_bits->size[0] * soft_bits->size[1] * soft_bits->size[2];
  soft_bits->size[0] = J;
  d0 = kb.contents;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &i_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &h_emlrtDCI, sp);
  }

  soft_bits->size[1] = (int32_T)d0;
  soft_bits->size[2] = y_all->size[2];
  emxEnsureCapacity_real_T1(sp, soft_bits, i1, &b_emlrtRTEI);
  d0 = kb.contents;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &k_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &j_emlrtDCI, sp);
  }

  loop_ub = J * (int32_T)d0 * y_all->size[2];
  for (i1 = 0; i1 < loop_ub; i1++) {
    soft_bits->data[i1] = 0.0;
  }

  i1 = hard_symbols->size[0] * hard_symbols->size[1];
  hard_symbols->size[0] = J;
  hard_symbols->size[1] = y_all->size[2];
  emxEnsureCapacity_real_T(sp, hard_symbols, i1, &c_emlrtRTEI);
  loop_ub = J * y_all->size[2];
  for (i1 = 0; i1 < loop_ub; i1++) {
    hard_symbols->data[i1] = 0.0;
  }

  emxInit_real_T1(sp, &mess_from_FN_to_VN, 3, &d_emlrtRTEI, true);
  i1 = mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] *
    mess_from_FN_to_VN->size[2];
  mess_from_FN_to_VN->size[0] = K;
  mess_from_FN_to_VN->size[1] = J;
  mess_from_FN_to_VN->size[2] = i0;
  emxEnsureCapacity_real_T1(sp, mess_from_FN_to_VN, i1, &d_emlrtRTEI);
  loop_ub = K * J * i0;
  for (i1 = 0; i1 < loop_ub; i1++) {
    mess_from_FN_to_VN->data[i1] = 0.0;
  }

  emxInit_int8_T(sp, &r0, 3, &lb_emlrtRTEI, true);
  i1 = r0->size[0] * r0->size[1] * r0->size[2];
  r0->size[0] = J;
  r0->size[1] = K;
  r0->size[2] = i0;
  emxEnsureCapacity_int8_T(sp, r0, i1, &e_emlrtRTEI);
  loop_ub = J * K * i0;
  for (i1 = 0; i1 < loop_ub; i1++) {
    r0->data[i1] = 0;
  }

  h_emxInitStruct_coder_internal_(sp, &mess_from_VN_to_FN, &f_emlrtRTEI, true);
  i1 = mess_from_VN_to_FN.contents->size[0] * mess_from_VN_to_FN.contents->size
    [1] * mess_from_VN_to_FN.contents->size[2];
  mess_from_VN_to_FN.contents->size[0] = r0->size[0];
  mess_from_VN_to_FN.contents->size[1] = r0->size[1];
  mess_from_VN_to_FN.contents->size[2] = r0->size[2];
  emxEnsureCapacity_real_T1(sp, mess_from_VN_to_FN.contents, i1, &f_emlrtRTEI);
  loop_ub = r0->size[0] * r0->size[1] * r0->size[2];
  for (i1 = 0; i1 < loop_ub; i1++) {
    mess_from_VN_to_FN.contents->data[i1] = r0->data[i1];
  }

  emxFree_int8_T(sp, &r0);
  j = 0;
  emxInit_real_T(sp, &vphi_j, 2, &k_emlrtRTEI, true);
  emxInit_int32_T(sp, &ii, 1, &qb_emlrtRTEI, true);
  emxInit_int32_T1(sp, &b_ii, 2, &qb_emlrtRTEI, true);
  while (j <= J - 1) {
    st.site = &c_emlrtRSI;
    loop_ub = b_F.contents->size[0];
    i1 = b_F.contents->size[1];
    i2 = 1 + j;
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &emlrtBCI, &st);
    }

    i1 = vphi_j->size[0] * vphi_j->size[1];
    vphi_j->size[0] = 1;
    vphi_j->size[1] = loop_ub;
    emxEnsureCapacity_real_T(&st, vphi_j, i1, &g_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      vphi_j->data[vphi_j->size[0] * i1] = b_F.contents->data[i1 +
        b_F.contents->size[0] * (i2 - 1)];
    }

    b_st.site = &fb_emlrtRSI;
    nx = vphi_j->size[1];
    c_st.site = &gb_emlrtRSI;
    idx = 0;
    i1 = b_ii->size[0] * b_ii->size[1];
    b_ii->size[0] = 1;
    b_ii->size[1] = vphi_j->size[1];
    emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &h_emlrtRTEI);
    d_st.site = &hb_emlrtRSI;
    c_ii = 1;
    exitg1 = false;
    while ((!exitg1) && (c_ii <= nx)) {
      if (vphi_j->data[c_ii - 1] != 0.0) {
        idx++;
        b_ii->data[idx - 1] = c_ii;
        if (idx >= nx) {
          exitg1 = true;
        } else {
          c_ii++;
        }
      } else {
        c_ii++;
      }
    }

    if (!(idx <= vphi_j->size[1])) {
      emlrtErrorWithMessageIdR2018a(&c_st, &sd_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    if (vphi_j->size[1] == 1) {
      if (idx == 0) {
        i1 = b_ii->size[0] * b_ii->size[1];
        b_ii->size[0] = 1;
        b_ii->size[1] = 0;
        emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &i_emlrtRTEI);
      }
    } else {
      i1 = b_ii->size[0] * b_ii->size[1];
      if (1 > idx) {
        b_ii->size[1] = 0;
      } else {
        b_ii->size[1] = idx;
      }

      emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &i_emlrtRTEI);
    }

    i1 = vphi_j->size[0] * vphi_j->size[1];
    vphi_j->size[0] = 1;
    vphi_j->size[1] = b_ii->size[1];
    emxEnsureCapacity_real_T(&st, vphi_j, i1, &k_emlrtRTEI);
    loop_ub = b_ii->size[0] * b_ii->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      vphi_j->data[i1] = b_ii->data[i1];
    }

    /* for k = vphi_j */
    if (0 <= vphi_j->size[1] - 1) {
      a_priori_beliefs_size[0] = 1;
    }

    nx = 0;
    while (nx <= vphi_j->size[1] - 1) {
      i1 = vphi_j->size[1];
      i2 = nx + 1;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &b_emlrtBCI, sp);
      }

      b_k.contents = (int32_T)vphi_j->data[nx];
      i1 = mess_from_VN_to_FN.contents->size[0];
      i2 = 1 + j;
      if (!((i2 >= 1) && (i2 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &d_emlrtBCI, sp);
      }

      i1 = i2 - 1;
      i2 = mess_from_VN_to_FN.contents->size[1];
      i3 = (int32_T)b_k.contents;
      if (!((i3 >= 1) && (i3 <= i2))) {
        emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &e_emlrtBCI, sp);
      }

      i2 = i3 - 1;
      loop_ub = mess_from_VN_to_FN.contents->size[2];
      i3 = ii->size[0];
      ii->size[0] = loop_ub;
      emxEnsureCapacity_int32_T1(sp, ii, i3, &m_emlrtRTEI);
      for (i3 = 0; i3 < loop_ub; i3++) {
        ii->data[i3] = i3;
      }

      i3 = a_priori_beliefs->size[0];
      i4 = j + 1;
      if (!((i4 >= 1) && (i4 <= i3))) {
        emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &c_emlrtBCI, sp);
      }

      iv0[0] = 1;
      iv0[1] = 1;
      iv0[2] = ii->size[0];
      i3 = a_priori_beliefs->size[1];
      a_priori_beliefs_size[1] = i3;
      for (i3 = 0; i3 < 2; i3++) {
        b_a_priori_beliefs[i3] = a_priori_beliefs_size[i3];
      }

      emlrtSubAssignSizeCheckR2012b(&iv0[0], 3, &b_a_priori_beliefs[0], 2,
        &emlrtECI, sp);
      loop_ub = a_priori_beliefs->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        a_priori_beliefs_data[i3] = a_priori_beliefs->data[j +
          a_priori_beliefs->size[0] * i3];
      }

      c_ii = ii->size[0];
      for (i3 = 0; i3 < c_ii; i3++) {
        mess_from_VN_to_FN.contents->data[(i1 +
          mess_from_VN_to_FN.contents->size[0] * i2) +
          mess_from_VN_to_FN.contents->size[0] *
          mess_from_VN_to_FN.contents->size[1] * ii->data[i3]] =
          a_priori_beliefs_data[i3];
      }

      nx++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    j++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  */
  ns = 0;
  g_emxInitStruct_coder_internal_(sp, &codeword_labels, &gb_emlrtRTEI, true);
  g_emxInitStruct_coder_internal_(sp, &counter, &cb_emlrtRTEI, true);
  g_emxInitStruct_coder_internal_(sp, &length_of_each_counter, &y_emlrtRTEI,
    true);
  g_emxInitStruct_coder_internal_(sp, &strong_users, &mb_emlrtRTEI, true);
  g_emxInitStruct_coder_internal_(sp, &phi_k_except_j, &r_emlrtRTEI, true);
  emxInit_creal_T2(sp, &interference_projections, 1, &ib_emlrtRTEI, true);
  emxInit_creal_T(sp, &h_strong_users, 2, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &vphi_j_except_k, 2, &ob_emlrtRTEI, true);
  emxInit_real_T(sp, &pmf, 2, &pb_emlrtRTEI, true);
  emxInit_real_T1(sp, &r1, 3, &lb_emlrtRTEI, true);
  emxInit_real_T2(sp, &x, 1, &l_emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_x, 2, &x_emlrtRTEI, true);
  emxInit_real_T(sp, &b_varargin_1, 2, &fb_emlrtRTEI, true);
  emxInit_creal_T(sp, &c_H, 2, &jb_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_mess_from_VN_to_FN, 3, &s_emlrtRTEI, true);
  emxInit_real_T2(sp, &b_mess_from_FN_to_VN, 1, &t_emlrtRTEI, true);
  emxInit_int32_T(sp, &b_counter, 1, &kb_emlrtRTEI, true);
  while (ns <= y_all->size[2] - 1) {
    /*  for each packet */
    loop_ub = y_all->size[0];
    b_loop_ub = y_all->size[1];
    i1 = y_all->size[2];
    i2 = 1 + ns;
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &f_emlrtBCI, sp);
    }

    for (i1 = 0; i1 < b_loop_ub; i1++) {
      for (i3 = 0; i3 < loop_ub; i3++) {
        y_data[i3 + loop_ub * i1] = y_all->data[(i3 + y_all->size[0] * i1) +
          y_all->size[0] * y_all->size[1] * (i2 - 1)];
      }
    }

    /*     %% */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, Tm, mxDOUBLE_CLASS, (int32_T)Tm,
      &pd_emlrtRTEI, sp);
    t = 0;
    while (t <= (int32_T)Tm - 1) {
      /*  iterations 1, ..., Tm */
      /*         %% */
      k = 0;
      while (k <= K - 1) {
        b_k.contents = 1.0 + (real_T)k;

        /*  for every FN */
        st.site = &d_emlrtRSI;
        b_loop_ub = b_F.contents->size[1];
        i1 = b_F.contents->size[0];
        c_mess_from_FN_to_VN = k + 1;
        if (!((c_mess_from_FN_to_VN >= 1) && (c_mess_from_FN_to_VN <= i1))) {
          emlrtDynamicBoundsCheckR2012b(c_mess_from_FN_to_VN, 1, i1, &g_emlrtBCI,
            &st);
        }

        i1 = vphi_j->size[0] * vphi_j->size[1];
        vphi_j->size[0] = 1;
        vphi_j->size[1] = b_loop_ub;
        emxEnsureCapacity_real_T(&st, vphi_j, i1, &j_emlrtRTEI);
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          vphi_j->data[vphi_j->size[0] * i1] = b_F.contents->data
            [(c_mess_from_FN_to_VN + b_F.contents->size[0] * i1) - 1];
        }

        b_st.site = &fb_emlrtRSI;
        nx = vphi_j->size[1];
        c_st.site = &gb_emlrtRSI;
        idx = 0;
        i1 = b_ii->size[0] * b_ii->size[1];
        b_ii->size[0] = 1;
        b_ii->size[1] = vphi_j->size[1];
        emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &h_emlrtRTEI);
        d_st.site = &hb_emlrtRSI;
        overflow = ((!(1 > vphi_j->size[1])) && (vphi_j->size[1] > 2147483646));
        if (overflow) {
          e_st.site = &ib_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        c_ii = 1;
        exitg1 = false;
        while ((!exitg1) && (c_ii <= nx)) {
          if (vphi_j->data[c_ii - 1] != 0.0) {
            idx++;
            b_ii->data[idx - 1] = c_ii;
            if (idx >= nx) {
              exitg1 = true;
            } else {
              c_ii++;
            }
          } else {
            c_ii++;
          }
        }

        if (!(idx <= vphi_j->size[1])) {
          emlrtErrorWithMessageIdR2018a(&c_st, &sd_emlrtRTEI,
            "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed",
            0);
        }

        if (vphi_j->size[1] == 1) {
          if (idx == 0) {
            i1 = b_ii->size[0] * b_ii->size[1];
            b_ii->size[0] = 1;
            b_ii->size[1] = 0;
            emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &i_emlrtRTEI);
          }
        } else {
          i1 = b_ii->size[0] * b_ii->size[1];
          if (1 > idx) {
            b_ii->size[1] = 0;
          } else {
            b_ii->size[1] = idx;
          }

          emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &i_emlrtRTEI);
        }

        i1 = vphi_j_except_k->size[0] * vphi_j_except_k->size[1];
        vphi_j_except_k->size[0] = 1;
        vphi_j_except_k->size[1] = b_ii->size[1];
        emxEnsureCapacity_real_T(&st, vphi_j_except_k, i1, &n_emlrtRTEI);
        b_loop_ub = b_ii->size[0] * b_ii->size[1];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          vphi_j_except_k->data[i1] = b_ii->data[i1];
        }

        /*  user indexes spreading over FN k */
        /* for j = phi_k % for every VN connected to FN k */
        b_j1 = 0;
        while (b_j1 <= vphi_j_except_k->size[1] - 1) {
          i1 = vphi_j_except_k->size[1];
          i2 = b_j1 + 1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &h_emlrtBCI, sp);
          }

          b_j.contents = (int32_T)vphi_j_except_k->data[b_j1];
          st.site = &e_emlrtRSI;
          b_st.site = &jb_emlrtRSI;
          c_st.site = &kb_emlrtRSI;
          do_vectors(&c_st, vphi_j_except_k, (int32_T)vphi_j_except_k->data[b_j1],
                     vphi_j, ii, ib_size);
          i1 = phi_k_except_j.contents->size[0] * phi_k_except_j.contents->size
            [1];
          phi_k_except_j.contents->size[0] = 1;
          phi_k_except_j.contents->size[1] = vphi_j->size[1];
          emxEnsureCapacity_real_T(sp, phi_k_except_j.contents, i1, &r_emlrtRTEI);
          b_loop_ub = vphi_j->size[0] * vphi_j->size[1];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            phi_k_except_j.contents->data[i1] = vphi_j->data[i1];
          }

          q_id = 0;
          while (q_id <= varargin_1 - 1) {
            /*  reading all possible Projections of the codebook of user_j @ (resource k and Rx nr) */
            prob_q_jk = 0.0;
            nr = 0;
            while (nr <= y_all->size[1] - 1) {
              b_nr.contents = 1.0 + (real_T)nr;

              /*  for each receive antenna */
              st.site = &f_emlrtRSI;
              find_strong_and_weak_users(&st, &b_H, &b_k, &b_j, &b_nr, &b_F,
                &b_r_th, &phi_k_except_j, strong_users.contents, vphi_j);
              st.site = &g_emlrtRSI;
              gaussian_approximation(&st, &C, &b_F, &b_H, &b_k, &b_nr, &M,
                &mess_from_VN_to_FN, vphi_j, &interference, &adapt_var);
              i1 = y_all->size[0];
              i2 = y_all->size[1];
              i3 = b_H.contents->size[0];
              d0 = 1.0 + (real_T)k;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &o_emlrtDCI, sp);
              }

              i4 = (int32_T)d0;
              if (!((i4 >= 1) && (i4 <= i3))) {
                emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &tb_emlrtBCI, sp);
              }

              i3 = b_H.contents->size[1];
              c_ii = (int32_T)b_j.contents;
              if (!((c_ii >= 1) && (c_ii <= i3))) {
                emlrtDynamicBoundsCheckR2012b(c_ii, 1, i3, &tb_emlrtBCI, sp);
              }

              i3 = b_H.contents->size[2];
              d0 = 1.0 + (real_T)nr;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &o_emlrtDCI, sp);
              }

              nx = (int32_T)d0;
              if (!((nx >= 1) && (nx <= i3))) {
                emlrtDynamicBoundsCheckR2012b(nx, 1, i3, &tb_emlrtBCI, sp);
              }

              i3 = 1 + q_id;
              if (!((i3 >= 1) && (i3 <= Aq_size[0]))) {
                emlrtDynamicBoundsCheckR2012b(i3, 1, Aq_size[0], &ub_emlrtBCI,
                  sp);
              }

              idx = b_H.contents->size[0];
              d0 = 1.0 + (real_T)k;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &o_emlrtDCI, sp);
              }

              c_mess_from_FN_to_VN = (int32_T)d0;
              if (!((c_mess_from_FN_to_VN >= 1) && (c_mess_from_FN_to_VN <= idx)))
              {
                emlrtDynamicBoundsCheckR2012b(c_mess_from_FN_to_VN, 1, idx,
                  &tb_emlrtBCI, sp);
              }

              idx = b_H.contents->size[1];
              b_loop_ub = (int32_T)b_j.contents;
              if (!((b_loop_ub >= 1) && (b_loop_ub <= idx))) {
                emlrtDynamicBoundsCheckR2012b(b_loop_ub, 1, idx, &tb_emlrtBCI,
                  sp);
              }

              idx = b_H.contents->size[2];
              d0 = 1.0 + (real_T)nr;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &o_emlrtDCI, sp);
              }

              j = (int32_T)d0;
              if (!((j >= 1) && (j <= idx))) {
                emlrtDynamicBoundsCheckR2012b(j, 1, idx, &tb_emlrtBCI, sp);
              }

              idx = 1 + q_id;
              if (!((idx >= 1) && (idx <= Aq_size[0]))) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, Aq_size[0], &ub_emlrtBCI,
                  sp);
              }

              cte_norm = b_H.contents->data[((i4 + b_H.contents->size[0] * (c_ii
                - 1)) + b_H.contents->size[0] * b_H.contents->size[1] * (nx - 1))
                - 1].re * Aq_data[i3 - 1].re - b_H.contents->data
                [((c_mess_from_FN_to_VN + b_H.contents->size[0] * (b_loop_ub - 1))
                  + b_H.contents->size[0] * b_H.contents->size[1] * (j - 1)) - 1]
                .im * Aq_data[idx - 1].im;
              i3 = b_H.contents->size[0];
              d0 = 1.0 + (real_T)k;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &o_emlrtDCI, sp);
              }

              i4 = (int32_T)d0;
              if (!((i4 >= 1) && (i4 <= i3))) {
                emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &tb_emlrtBCI, sp);
              }

              i3 = b_H.contents->size[1];
              c_ii = (int32_T)b_j.contents;
              if (!((c_ii >= 1) && (c_ii <= i3))) {
                emlrtDynamicBoundsCheckR2012b(c_ii, 1, i3, &tb_emlrtBCI, sp);
              }

              i3 = b_H.contents->size[2];
              d0 = 1.0 + (real_T)nr;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &o_emlrtDCI, sp);
              }

              nx = (int32_T)d0;
              if (!((nx >= 1) && (nx <= i3))) {
                emlrtDynamicBoundsCheckR2012b(nx, 1, i3, &tb_emlrtBCI, sp);
              }

              i3 = 1 + q_id;
              if (!((i3 >= 1) && (i3 <= Aq_size[0]))) {
                emlrtDynamicBoundsCheckR2012b(i3, 1, Aq_size[0], &ub_emlrtBCI,
                  sp);
              }

              idx = b_H.contents->size[0];
              d0 = 1.0 + (real_T)k;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &o_emlrtDCI, sp);
              }

              c_mess_from_FN_to_VN = (int32_T)d0;
              if (!((c_mess_from_FN_to_VN >= 1) && (c_mess_from_FN_to_VN <= idx)))
              {
                emlrtDynamicBoundsCheckR2012b(c_mess_from_FN_to_VN, 1, idx,
                  &tb_emlrtBCI, sp);
              }

              idx = b_H.contents->size[1];
              b_loop_ub = (int32_T)b_j.contents;
              if (!((b_loop_ub >= 1) && (b_loop_ub <= idx))) {
                emlrtDynamicBoundsCheckR2012b(b_loop_ub, 1, idx, &tb_emlrtBCI,
                  sp);
              }

              idx = b_H.contents->size[2];
              d0 = 1.0 + (real_T)nr;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &o_emlrtDCI, sp);
              }

              j = (int32_T)d0;
              if (!((j >= 1) && (j <= idx))) {
                emlrtDynamicBoundsCheckR2012b(j, 1, idx, &tb_emlrtBCI, sp);
              }

              idx = 1 + q_id;
              if (!((idx >= 1) && (idx <= Aq_size[0]))) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, Aq_size[0], &ub_emlrtBCI,
                  sp);
              }

              H_im = b_H.contents->data[((i4 + b_H.contents->size[0] * (c_ii - 1))
                + b_H.contents->size[0] * b_H.contents->size[1] * (nx - 1)) - 1]
                .re * Aq_data[i3 - 1].im + b_H.contents->data
                [((c_mess_from_FN_to_VN + b_H.contents->size[0] * (b_loop_ub - 1))
                  + b_H.contents->size[0] * b_H.contents->size[1] * (j - 1)) - 1]
                .im * Aq_data[idx - 1].re;
              d0 = 1.0 + (real_T)k;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &p_emlrtDCI, sp);
              }

              i3 = (int32_T)d0;
              if (!((i3 >= 1) && (i3 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &vb_emlrtBCI, sp);
              }

              d0 = 1.0 + (real_T)nr;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &p_emlrtDCI, sp);
              }

              i4 = (int32_T)d0;
              if (!((i4 >= 1) && (i4 <= i2))) {
                emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &vb_emlrtBCI, sp);
              }

              yk_fix_re = (y_data[(i3 + loop_ub * (i4 - 1)) - 1].re - cte_norm)
                - interference.re;
              d0 = 1.0 + (real_T)k;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &l_emlrtDCI, sp);
              }

              i3 = (int32_T)d0;
              if (!((i3 >= 1) && (i3 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &qb_emlrtBCI, sp);
              }

              d0 = 1.0 + (real_T)nr;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &l_emlrtDCI, sp);
              }

              i1 = (int32_T)d0;
              if (!((i1 >= 1) && (i1 <= i2))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, i2, &qb_emlrtBCI, sp);
              }

              yk_fix_im = (y_data[(i3 + loop_ub * (i1 - 1)) - 1].im - H_im) -
                interference.im;
              i1 = length_of_each_counter.contents->size[0] *
                length_of_each_counter.contents->size[1];
              length_of_each_counter.contents->size[0] = 1;
              length_of_each_counter.contents->size[1] =
                strong_users.contents->size[1];
              emxEnsureCapacity_real_T(sp, length_of_each_counter.contents, i1,
                &y_emlrtRTEI);
              b_loop_ub = strong_users.contents->size[1];
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                length_of_each_counter.contents->data[i1] = (int8_T)varargin_1;
              }

              i1 = counter.contents->size[0] * counter.contents->size[1];
              counter.contents->size[0] = 1;
              counter.contents->size[1] = strong_users.contents->size[1];
              emxEnsureCapacity_real_T(sp, counter.contents, i1, &cb_emlrtRTEI);
              b_loop_ub = strong_users.contents->size[1];
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                counter.contents->data[i1] = 1.0;
              }

              pdf_exp_cte = -0.5 * (1.0 / (adapt_var + varnoise));
              cte_norm = varnoise + adapt_var;
              st.site = &h_emlrtRSI;
              b_sqrt(&st, &cte_norm);
              pdf_scaling_cte = 0.15915494309189535 / cte_norm;

              /*  rever esse scaling factor */
              i1 = b_varargin_1->size[0] * b_varargin_1->size[1];
              b_varargin_1->size[0] = 1;
              b_varargin_1->size[1] = strong_users.contents->size[1];
              emxEnsureCapacity_real_T(sp, b_varargin_1, i1, &fb_emlrtRTEI);
              b_loop_ub = strong_users.contents->size[1];
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                b_varargin_1->data[i1] = (int8_T)varargin_1;
              }

              st.site = &i_emlrtRSI;
              d0 = prod(&st, b_varargin_1);
              emlrtForLoopVectorCheckR2012b(1.0, 1.0, d0, mxDOUBLE_CLASS,
                (int32_T)d0, &qd_emlrtRTEI, sp);
              c_ii = 0;
              while (c_ii <= (int32_T)d0 - 1) {
                marginal_prob_idx_cnt.contents = 1.0 + (real_T)c_ii;

                /*  in�cio da marginaliza��o sobre a interfer�ncia */
                st.site = &j_emlrtRSI;

                /*     %% Get projections of interference being tested */
                /*          rows = F_int(k,strong_users);  */
                /*          cols=counter;  */
                /*          indexes=sub2ind(size(C_perms),rows,cols);  */
                /*          alphabet_elements = C_perms(indexes);  */
                b_st.site = &md_emlrtRSI;
                indexShapeCheck(&b_st, Aq_size[0], *(int32_T (*)[2])
                                counter.contents->size);
                i1 = interference_projections->size[0];
                interference_projections->size[0] = counter.contents->size[1];
                emxEnsureCapacity_creal_T2(&st, interference_projections, i1,
                  &ib_emlrtRTEI);
                b_loop_ub = counter.contents->size[1];
                for (i1 = 0; i1 < b_loop_ub; i1++) {
                  cte_norm = counter.contents->data[counter.contents->size[0] *
                    i1];
                  if (cte_norm != (int32_T)muDoubleScalarFloor(cte_norm)) {
                    emlrtIntegerCheckR2012b(cte_norm, &q_emlrtDCI, &st);
                  }

                  i2 = (int32_T)cte_norm;
                  if (!((i2 >= 1) && (i2 <= Aq_size[0]))) {
                    emlrtDynamicBoundsCheckR2012b(i2, 1, Aq_size[0],
                      &wb_emlrtBCI, &st);
                  }

                  interference_projections->data[i1].re = Aq_data[i2 - 1].re;
                  cte_norm = counter.contents->data[counter.contents->size[0] *
                    i1];
                  if (cte_norm != (int32_T)muDoubleScalarFloor(cte_norm)) {
                    emlrtIntegerCheckR2012b(cte_norm, &m_emlrtDCI, &st);
                  }

                  i2 = (int32_T)cte_norm;
                  if (!((i2 >= 1) && (i2 <= Aq_size[0]))) {
                    emlrtDynamicBoundsCheckR2012b(i2, 1, Aq_size[0],
                      &rb_emlrtBCI, &st);
                  }

                  interference_projections->data[i1].im = Aq_data[i2 - 1].im;
                }

                nx = b_H.contents->size[1];
                cte_norm = 1.0 + (real_T)nr;
                if (cte_norm != (int32_T)cte_norm) {
                  emlrtIntegerCheckR2012b(cte_norm, &b_emlrtDCI, sp);
                }

                i1 = b_H.contents->size[2];
                idx = (int32_T)cte_norm;
                if (!((idx >= 1) && (idx <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(idx, 1, i1, &j_emlrtBCI, sp);
                }

                cte_norm = 1.0 + (real_T)k;
                if (cte_norm != (int32_T)cte_norm) {
                  emlrtIntegerCheckR2012b(cte_norm, &emlrtDCI, sp);
                }

                i1 = b_H.contents->size[0];
                c_mess_from_FN_to_VN = (int32_T)cte_norm;
                if (!((c_mess_from_FN_to_VN >= 1) && (c_mess_from_FN_to_VN <= i1)))
                {
                  emlrtDynamicBoundsCheckR2012b(c_mess_from_FN_to_VN, 1, i1,
                    &i_emlrtBCI, sp);
                }

                i1 = c_H->size[0] * c_H->size[1];
                c_H->size[0] = 1;
                c_H->size[1] = strong_users.contents->size[1];
                emxEnsureCapacity_creal_T(sp, c_H, i1, &jb_emlrtRTEI);
                b_loop_ub = strong_users.contents->size[1];
                for (i1 = 0; i1 < b_loop_ub; i1++) {
                  cte_norm = strong_users.contents->data
                    [strong_users.contents->size[0] * i1];
                  if (cte_norm != (int32_T)muDoubleScalarFloor(cte_norm)) {
                    emlrtIntegerCheckR2012b(cte_norm, &r_emlrtDCI, sp);
                  }

                  i2 = (int32_T)cte_norm;
                  if (!((i2 >= 1) && (i2 <= nx))) {
                    emlrtDynamicBoundsCheckR2012b(i2, 1, nx, &xb_emlrtBCI, sp);
                  }

                  c_H->data[c_H->size[0] * i1].re = b_H.contents->data
                    [((c_mess_from_FN_to_VN + b_H.contents->size[0] * (i2 - 1))
                      + b_H.contents->size[0] * b_H.contents->size[1] * (idx - 1))
                    - 1].re;
                  cte_norm = strong_users.contents->data
                    [strong_users.contents->size[0] * i1];
                  if (cte_norm != (int32_T)muDoubleScalarFloor(cte_norm)) {
                    emlrtIntegerCheckR2012b(cte_norm, &n_emlrtDCI, sp);
                  }

                  i2 = (int32_T)cte_norm;
                  if (!((i2 >= 1) && (i2 <= nx))) {
                    emlrtDynamicBoundsCheckR2012b(i2, 1, nx, &sb_emlrtBCI, sp);
                  }

                  c_H->data[c_H->size[0] * i1].im = b_H.contents->data
                    [((c_mess_from_FN_to_VN + b_H.contents->size[0] * (i2 - 1))
                      + b_H.contents->size[0] * b_H.contents->size[1] * (idx - 1))
                    - 1].im;
                }

                st.site = &k_emlrtRSI;
                squeeze(&st, c_H, h_strong_users);
                st.site = &l_emlrtRSI;
                b_st.site = &gd_emlrtRSI;
                i1 = b_counter->size[0];
                b_counter->size[0] = counter.contents->size[1];
                emxEnsureCapacity_int32_T1(&b_st, b_counter, i1, &kb_emlrtRTEI);
                b_loop_ub = counter.contents->size[1];
                for (i1 = 0; i1 < b_loop_ub; i1++) {
                  b_counter->data[i1] = (int32_T)counter.contents->
                    data[counter.contents->size[0] * i1];
                }

                if (!(h_strong_users->size[1] == b_counter->size[0])) {
                  guard1 = false;
                  if (h_strong_users->size[1] == 1) {
                    guard1 = true;
                  } else {
                    i1 = b_counter->size[0];
                    b_counter->size[0] = counter.contents->size[1];
                    emxEnsureCapacity_int32_T1(&b_st, b_counter, i1,
                      &kb_emlrtRTEI);
                    b_loop_ub = counter.contents->size[1];
                    for (i1 = 0; i1 < b_loop_ub; i1++) {
                      b_counter->data[i1] = (int32_T)counter.contents->
                        data[counter.contents->size[0] * i1];
                    }

                    if (b_counter->size[0] == 1) {
                      guard1 = true;
                    } else {
                      emlrtErrorWithMessageIdR2018a(&b_st, &vd_emlrtRTEI,
                        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
                    }
                  }

                  if (guard1) {
                    emlrtErrorWithMessageIdR2018a(&b_st, &wd_emlrtRTEI,
                      "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                      "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
                  }
                }

                guard1 = false;
                if (h_strong_users->size[1] == 1) {
                  guard1 = true;
                } else {
                  i1 = b_counter->size[0];
                  b_counter->size[0] = counter.contents->size[1];
                  emxEnsureCapacity_int32_T1(&st, b_counter, i1, &kb_emlrtRTEI);
                  b_loop_ub = counter.contents->size[1];
                  for (i1 = 0; i1 < b_loop_ub; i1++) {
                    b_counter->data[i1] = (int32_T)counter.contents->
                      data[counter.contents->size[0] * i1];
                  }

                  if (b_counter->size[0] == 1) {
                    guard1 = true;
                  } else {
                    b_st.site = &od_emlrtRSI;
                    c_st.site = &pd_emlrtRSI;
                    d_st.site = &qd_emlrtRSI;
                    e_st.site = &rd_emlrtRSI;
                    interference.re = 0.0;
                    interference.im = 0.0;
                    if (!(h_strong_users->size[1] < 1)) {
                      f_st.site = &sd_emlrtRSI;
                      overflow = (h_strong_users->size[1] > 2147483646);
                      if (overflow) {
                        g_st.site = &ib_emlrtRSI;
                        check_forloop_overflow_error(&g_st);
                      }

                      for (c_mess_from_FN_to_VN = 0; c_mess_from_FN_to_VN <
                           h_strong_users->size[1]; c_mess_from_FN_to_VN++) {
                        cte_norm = h_strong_users->data[c_mess_from_FN_to_VN].re
                          * interference_projections->data[c_mess_from_FN_to_VN]
                          .re - h_strong_users->data[c_mess_from_FN_to_VN].im *
                          interference_projections->data[c_mess_from_FN_to_VN].
                          im;
                        H_im = h_strong_users->data[c_mess_from_FN_to_VN].re *
                          interference_projections->data[c_mess_from_FN_to_VN].
                          im + h_strong_users->data[c_mess_from_FN_to_VN].im *
                          interference_projections->data[c_mess_from_FN_to_VN].
                          re;
                        interference.re += cte_norm;
                        interference.im += H_im;
                      }
                    }
                  }
                }

                if (guard1) {
                  adapt_var = 0.0;
                  im = 0.0;
                  for (i1 = 0; i1 < h_strong_users->size[1]; i1++) {
                    cte_norm = h_strong_users->data[h_strong_users->size[0] * i1]
                      .re * interference_projections->data[i1].re -
                      h_strong_users->data[h_strong_users->size[0] * i1].im *
                      interference_projections->data[i1].im;
                    H_im = h_strong_users->data[h_strong_users->size[0] * i1].re
                      * interference_projections->data[i1].im +
                      h_strong_users->data[h_strong_users->size[0] * i1].im *
                      interference_projections->data[i1].re;
                    adapt_var += cte_norm;
                    im += H_im;
                  }

                  interference.re = adapt_var;
                  interference.im = im;
                }

                /*                              counter */
                /*                              abs(yk_fix-interference) */
                st.site = &m_emlrtRSI;
                cte_norm = get_extrinsic_info_probability(&st, &strong_users,
                  &counter, &C_perms, &b_F_int, &b_k, &codeword_labels, &M,
                  &mess_from_VN_to_FN);
                interference.re = yk_fix_re - interference.re;
                interference.im = yk_fix_im - interference.im;
                H_im = muDoubleScalarHypot(interference.re, interference.im);
                st.site = &n_emlrtRSI;
                b_st.site = &jc_emlrtRSI;
                c_st.site = &ec_emlrtRSI;
                prob_q_jk += pdf_scaling_cte * muDoubleScalarExp(pdf_exp_cte *
                  (H_im * H_im)) * cte_norm;
                st.site = &o_emlrtRSI;
                update_cartesian_counter(&st, &length_of_each_counter,
                  &marginal_prob_idx_cnt, counter.contents);
                c_ii++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(sp);
                }
              }

              /*  fim da marginaliza��o sobre a interfer�ncia */
              nr++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }

            /*  end receive antenna */
            /*  extrapolando prob. da projecao para prob. dos s�mbolos com a mesma projecao */
            st.site = &p_emlrtRSI;
            b_loop_ub = C_perms.contents->size[1];
            i1 = b_F_int.contents->size[0];
            d0 = 1.0 + (real_T)k;
            if (d0 != (int32_T)d0) {
              emlrtIntegerCheckR2012b(d0, &c_emlrtDCI, &st);
            }

            i2 = (int32_T)d0;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ob_emlrtBCI, &st);
            }

            i1 = b_F_int.contents->size[1];
            i3 = (int32_T)b_j.contents;
            if (!((i3 >= 1) && (i3 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &ob_emlrtBCI, &st);
            }

            d0 = b_F_int.contents->data[(i2 + b_F_int.contents->size[0] * (i3 -
              1)) - 1];
            if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
              emlrtIntegerCheckR2012b(d0, &c_emlrtDCI, &st);
            }

            i1 = C_perms.contents->size[0];
            c_ii = (int32_T)d0;
            if (!((c_ii >= 1) && (c_ii <= i1))) {
              emlrtDynamicBoundsCheckR2012b(c_ii, 1, i1, &k_emlrtBCI, &st);
            }

            i1 = b_x->size[0] * b_x->size[1];
            b_x->size[0] = 1;
            b_x->size[1] = b_loop_ub;
            emxEnsureCapacity_boolean_T(&st, b_x, i1, &x_emlrtRTEI);
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              b_x->data[b_x->size[0] * i1] = (C_perms.contents->data[(c_ii +
                C_perms.contents->size[0] * i1) - 1] == 1.0 + (real_T)q_id);
            }

            b_st.site = &fb_emlrtRSI;
            nx = b_x->size[1];
            c_st.site = &gb_emlrtRSI;
            idx = 0;
            i1 = b_ii->size[0] * b_ii->size[1];
            b_ii->size[0] = 1;
            b_ii->size[1] = b_x->size[1];
            emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &h_emlrtRTEI);
            d_st.site = &hb_emlrtRSI;
            overflow = ((!(1 > b_x->size[1])) && (b_x->size[1] > 2147483646));
            if (overflow) {
              e_st.site = &ib_emlrtRSI;
              check_forloop_overflow_error(&e_st);
            }

            c_ii = 1;
            exitg1 = false;
            while ((!exitg1) && (c_ii <= nx)) {
              if (b_x->data[c_ii - 1]) {
                idx++;
                b_ii->data[idx - 1] = c_ii;
                if (idx >= nx) {
                  exitg1 = true;
                } else {
                  c_ii++;
                }
              } else {
                c_ii++;
              }
            }

            if (!(idx <= b_x->size[1])) {
              emlrtErrorWithMessageIdR2018a(&c_st, &sd_emlrtRTEI,
                "Coder:builtins:AssertionFailed",
                "Coder:builtins:AssertionFailed", 0);
            }

            if (b_x->size[1] == 1) {
              if (idx == 0) {
                i1 = b_ii->size[0] * b_ii->size[1];
                b_ii->size[0] = 1;
                b_ii->size[1] = 0;
                emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &i_emlrtRTEI);
              }
            } else {
              i1 = b_ii->size[0] * b_ii->size[1];
              if (1 > idx) {
                b_ii->size[1] = 0;
              } else {
                b_ii->size[1] = idx;
              }

              emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &i_emlrtRTEI);
            }

            i1 = codeword_labels.contents->size[0] *
              codeword_labels.contents->size[1];
            codeword_labels.contents->size[0] = 1;
            codeword_labels.contents->size[1] = b_ii->size[1];
            emxEnsureCapacity_real_T(sp, codeword_labels.contents, i1,
              &gb_emlrtRTEI);
            b_loop_ub = b_ii->size[0] * b_ii->size[1];
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              codeword_labels.contents->data[i1] = b_ii->data[i1];
            }

            /*  quais das M codewords tem rotulo de projecao q_id? */
            c_mess_from_FN_to_VN = mess_from_FN_to_VN->size[2];
            i1 = ii->size[0];
            ii->size[0] = b_ii->size[1];
            emxEnsureCapacity_int32_T1(sp, ii, i1, &hb_emlrtRTEI);
            b_loop_ub = b_ii->size[1];
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              i2 = b_ii->data[b_ii->size[0] * i1];
              if (!((i2 >= 1) && (i2 <= c_mess_from_FN_to_VN))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, c_mess_from_FN_to_VN,
                  &pb_emlrtBCI, sp);
              }

              ii->data[i1] = i2;
            }

            c_ii = ii->size[0];
            c_mess_from_FN_to_VN = mess_from_FN_to_VN->size[0];
            nx = mess_from_FN_to_VN->size[1];
            i1 = (int32_T)b_j.contents;
            if (!((i1 >= 1) && (i1 <= nx))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, nx, &m_emlrtBCI, sp);
            }

            d0 = 1.0 + (real_T)k;
            if (d0 != (int32_T)d0) {
              emlrtIntegerCheckR2012b(d0, &d_emlrtDCI, sp);
            }

            i1 = (int32_T)d0;
            if (!((i1 >= 1) && (i1 <= c_mess_from_FN_to_VN))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, c_mess_from_FN_to_VN,
                &l_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < c_ii; i1++) {
              mess_from_FN_to_VN->data[(((k + 1) + mess_from_FN_to_VN->size[0] *
                ((int32_T)b_j.contents - 1)) + mess_from_FN_to_VN->size[0] *
                mess_from_FN_to_VN->size[1] * (ii->data[i1] - 1)) - 1] =
                prob_q_jk + 1.0E-50;
            }

            /*  replicar probabilidade */
            q_id++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }

          /*  end loop over projections Aq for user j @ (k, nr) */
          /*  normalizando PMF */
          b_loop_ub = mess_from_FN_to_VN->size[2];
          j = (int32_T)b_j.contents;
          i1 = mess_from_FN_to_VN->size[1];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &o_emlrtBCI, sp);
          }

          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &e_emlrtDCI, sp);
          }

          i1 = mess_from_FN_to_VN->size[0];
          c_mess_from_FN_to_VN = (int32_T)d0;
          if (!((c_mess_from_FN_to_VN >= 1) && (c_mess_from_FN_to_VN <= i1))) {
            emlrtDynamicBoundsCheckR2012b(c_mess_from_FN_to_VN, 1, i1,
              &n_emlrtBCI, sp);
          }

          i1 = b_mess_from_VN_to_FN->size[0] * b_mess_from_VN_to_FN->size[1] *
            b_mess_from_VN_to_FN->size[2];
          b_mess_from_VN_to_FN->size[0] = 1;
          b_mess_from_VN_to_FN->size[1] = 1;
          b_mess_from_VN_to_FN->size[2] = b_loop_ub;
          emxEnsureCapacity_real_T1(sp, b_mess_from_VN_to_FN, i1, &w_emlrtRTEI);
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            b_mess_from_VN_to_FN->data[b_mess_from_VN_to_FN->size[0] *
              b_mess_from_VN_to_FN->size[1] * i1] = mess_from_FN_to_VN->data
              [((c_mess_from_FN_to_VN + mess_from_FN_to_VN->size[0] * (j - 1)) +
                mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] * i1)
              - 1];
          }

          st.site = &q_emlrtRSI;
          cte_norm = sum(&st, b_mess_from_VN_to_FN);
          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &g_emlrtDCI, sp);
          }

          i1 = mess_from_FN_to_VN->size[0];
          i2 = (int32_T)d0;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &r_emlrtBCI, sp);
          }

          i1 = i2 - 1;
          i2 = (int32_T)b_j.contents;
          i3 = mess_from_FN_to_VN->size[1];
          if (!((i2 >= 1) && (i2 <= i3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i3, &s_emlrtBCI, sp);
          }

          b_loop_ub = mess_from_FN_to_VN->size[2];
          i2 = ii->size[0];
          ii->size[0] = b_loop_ub;
          emxEnsureCapacity_int32_T1(sp, ii, i2, &bb_emlrtRTEI);
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            ii->data[i2] = i2;
          }

          b_loop_ub = mess_from_FN_to_VN->size[2];
          j = (int32_T)b_j.contents;
          i2 = mess_from_FN_to_VN->size[1];
          if (!((j >= 1) && (j <= i2))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i2, &q_emlrtBCI, sp);
          }

          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &f_emlrtDCI, sp);
          }

          i2 = mess_from_FN_to_VN->size[0];
          c_mess_from_FN_to_VN = (int32_T)d0;
          if (!((c_mess_from_FN_to_VN >= 1) && (c_mess_from_FN_to_VN <= i2))) {
            emlrtDynamicBoundsCheckR2012b(c_mess_from_FN_to_VN, 1, i2,
              &p_emlrtBCI, sp);
          }

          i2 = b_mess_from_VN_to_FN->size[0] * b_mess_from_VN_to_FN->size[1] *
            b_mess_from_VN_to_FN->size[2];
          b_mess_from_VN_to_FN->size[0] = 1;
          b_mess_from_VN_to_FN->size[1] = 1;
          b_mess_from_VN_to_FN->size[2] = b_loop_ub;
          emxEnsureCapacity_real_T1(sp, b_mess_from_VN_to_FN, i2, &eb_emlrtRTEI);
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            b_mess_from_VN_to_FN->data[b_mess_from_VN_to_FN->size[0] *
              b_mess_from_VN_to_FN->size[1] * i2] = mess_from_FN_to_VN->data
              [((c_mess_from_FN_to_VN + mess_from_FN_to_VN->size[0] * (j - 1)) +
                mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] * i2)
              - 1];
          }

          rdivide(sp, b_mess_from_VN_to_FN, cte_norm, r1);
          iv0[0] = 1;
          iv0[1] = 1;
          iv0[2] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&iv0[0], 3, &(*(int32_T (*)[3])r1->size)
            [0], 3, &b_emlrtECI, sp);
          b_loop_ub = r1->size[2];
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            mess_from_FN_to_VN->data[(i1 + mess_from_FN_to_VN->size[0] *
              ((int32_T)b_j.contents - 1)) + mess_from_FN_to_VN->size[0] *
              mess_from_FN_to_VN->size[1] * ii->data[i2]] = r1->data[r1->size[0]
              * r1->size[1] * i2];
          }

          b_j1++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        /*  end VN loop */
        k++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /*  end FN loop */
      /*         %% */
      j = 1;
      while (j - 1 <= J - 1) {
        /*  for every VN */
        st.site = &r_emlrtRSI;
        b_loop_ub = b_F.contents->size[0];
        i1 = b_F.contents->size[1];
        if (!((j >= 1) && (j <= i1))) {
          emlrtDynamicBoundsCheckR2012b(j, 1, i1, &t_emlrtBCI, &st);
        }

        i1 = x->size[0];
        x->size[0] = b_loop_ub;
        emxEnsureCapacity_real_T2(&st, x, i1, &l_emlrtRTEI);
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          x->data[i1] = b_F.contents->data[i1 + b_F.contents->size[0] * (j - 1)];
        }

        b_st.site = &fb_emlrtRSI;
        nx = x->size[0];
        c_st.site = &gb_emlrtRSI;
        idx = 0;
        i1 = ii->size[0];
        ii->size[0] = x->size[0];
        emxEnsureCapacity_int32_T1(&c_st, ii, i1, &h_emlrtRTEI);
        d_st.site = &hb_emlrtRSI;
        overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
        if (overflow) {
          e_st.site = &ib_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        c_ii = 1;
        exitg1 = false;
        while ((!exitg1) && (c_ii <= nx)) {
          if (x->data[c_ii - 1] != 0.0) {
            idx++;
            ii->data[idx - 1] = c_ii;
            if (idx >= nx) {
              exitg1 = true;
            } else {
              c_ii++;
            }
          } else {
            c_ii++;
          }
        }

        if (!(idx <= x->size[0])) {
          emlrtErrorWithMessageIdR2018a(&c_st, &sd_emlrtRTEI,
            "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed",
            0);
        }

        if (x->size[0] == 1) {
          if (idx == 0) {
            i1 = ii->size[0];
            ii->size[0] = 0;
            emxEnsureCapacity_int32_T1(&c_st, ii, i1, &i_emlrtRTEI);
          }
        } else {
          if (1 > idx) {
            i1 = 0;
          } else {
            i1 = idx;
          }

          a_priori_beliefs_size[0] = 1;
          a_priori_beliefs_size[1] = i1;
          d_st.site = &ce_emlrtRSI;
          indexShapeCheck(&d_st, ii->size[0], a_priori_beliefs_size);
          i2 = ii->size[0];
          ii->size[0] = i1;
          emxEnsureCapacity_int32_T1(&c_st, ii, i2, &i_emlrtRTEI);
        }

        i1 = vphi_j->size[0] * vphi_j->size[1];
        vphi_j->size[0] = 1;
        vphi_j->size[1] = ii->size[0];
        emxEnsureCapacity_real_T(sp, vphi_j, i1, &o_emlrtRTEI);
        b_loop_ub = ii->size[0];
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          vphi_j->data[vphi_j->size[0] * i1] = ii->data[i1];
        }

        /*  resource indexes associated with VN j */
        /* for k = vphi_j % for every FN connected to VN j */
        nx = 0;
        while (nx <= vphi_j->size[1] - 1) {
          i1 = vphi_j->size[1];
          i2 = nx + 1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &u_emlrtBCI, sp);
          }

          b_k.contents = (int32_T)vphi_j->data[nx];
          if (1.0 + (real_T)t != Tm) {
            /*  before last iteration, exclude FN k */
            st.site = &s_emlrtRSI;
            b_st.site = &jb_emlrtRSI;
            c_st.site = &kb_emlrtRSI;
            do_vectors(&c_st, vphi_j, b_k.contents, vphi_j_except_k, ii, ib_size);
          } else {
            /*  at last iteration, include everyone */
            i1 = vphi_j_except_k->size[0] * vphi_j_except_k->size[1];
            vphi_j_except_k->size[0] = 1;
            vphi_j_except_k->size[1] = vphi_j->size[1];
            emxEnsureCapacity_real_T(sp, vphi_j_except_k, i1, &p_emlrtRTEI);
            b_loop_ub = vphi_j->size[0] * vphi_j->size[1];
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              vphi_j_except_k->data[i1] = vphi_j->data[i1];
            }
          }

          emlrtForLoopVectorCheckR2012b(1.0, 1.0, i0, mxDOUBLE_CLASS, i0,
            &rd_emlrtRTEI, sp);
          idx = 0;
          while (idx <= i0 - 1) {
            /*  for every codeword  */
            i1 = a_priori_beliefs->size[0];
            i2 = (j - 1) + 1;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &v_emlrtBCI, sp);
            }

            i1 = a_priori_beliefs->size[1];
            i2 = idx + 1;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &w_emlrtBCI, sp);
            }

            c_mess_from_FN_to_VN = mess_from_FN_to_VN->size[0];
            i1 = mess_from_FN_to_VN->size[2];
            if (!((idx + 1 >= 1) && (idx + 1 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(idx + 1, 1, i1, &y_emlrtBCI, sp);
            }

            c_ii = idx + 1;
            i1 = mess_from_FN_to_VN->size[1];
            if (!((j >= 1) && (j <= i1))) {
              emlrtDynamicBoundsCheckR2012b(j, 1, i1, &x_emlrtBCI, sp);
            }

            i1 = b_mess_from_FN_to_VN->size[0];
            b_mess_from_FN_to_VN->size[0] = vphi_j_except_k->size[1];
            emxEnsureCapacity_real_T2(sp, b_mess_from_FN_to_VN, i1, &t_emlrtRTEI);
            b_loop_ub = vphi_j_except_k->size[1];
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              i2 = (int32_T)vphi_j_except_k->data[vphi_j_except_k->size[0] * i1];
              if (!((i2 >= 1) && (i2 <= c_mess_from_FN_to_VN))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, c_mess_from_FN_to_VN,
                  &mb_emlrtBCI, sp);
              }

              b_mess_from_FN_to_VN->data[i1] = mess_from_FN_to_VN->data[((i2 +
                mess_from_FN_to_VN->size[0] * (j - 1)) +
                mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] *
                (c_ii - 1)) - 1];
            }

            i1 = mess_from_VN_to_FN.contents->size[0];
            if (!((j >= 1) && (j <= i1))) {
              emlrtDynamicBoundsCheckR2012b(j, 1, i1, &nb_emlrtBCI, sp);
            }

            i1 = mess_from_VN_to_FN.contents->size[1];
            i2 = (int32_T)b_k.contents;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &nb_emlrtBCI, sp);
            }

            i1 = mess_from_VN_to_FN.contents->size[2];
            if (!((idx + 1 >= 1) && (idx + 1 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(idx + 1, 1, i1, &nb_emlrtBCI, sp);
            }

            st.site = &t_emlrtRSI;
            mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (i2 - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * idx) - 1] =
              a_priori_beliefs->data[(j + a_priori_beliefs->size[0] * idx) - 1] *
              (b_prod(&st, b_mess_from_FN_to_VN) + 1.0E-50);
            idx++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }

          /*  end codeword loop */
          /*  normalizando PMF */
          b_loop_ub = mess_from_VN_to_FN.contents->size[2];
          i1 = mess_from_VN_to_FN.contents->size[1];
          k = (int32_T)b_k.contents;
          if (!((k >= 1) && (k <= i1))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i1, &bb_emlrtBCI, sp);
          }

          i1 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &ab_emlrtBCI, sp);
          }

          i1 = b_mess_from_VN_to_FN->size[0] * b_mess_from_VN_to_FN->size[1] *
            b_mess_from_VN_to_FN->size[2];
          b_mess_from_VN_to_FN->size[0] = 1;
          b_mess_from_VN_to_FN->size[1] = 1;
          b_mess_from_VN_to_FN->size[2] = b_loop_ub;
          emxEnsureCapacity_real_T1(sp, b_mess_from_VN_to_FN, i1, &u_emlrtRTEI);
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            b_mess_from_VN_to_FN->data[b_mess_from_VN_to_FN->size[0] *
              b_mess_from_VN_to_FN->size[1] * i1] =
              mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (k - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i1) - 1];
          }

          st.site = &u_emlrtRSI;
          cte_norm = sum(&st, b_mess_from_VN_to_FN);
          i1 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &eb_emlrtBCI, sp);
          }

          i1 = j - 1;
          i2 = mess_from_VN_to_FN.contents->size[1];
          i3 = (int32_T)b_k.contents;
          if (!((i3 >= 1) && (i3 <= i2))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &fb_emlrtBCI, sp);
          }

          i2 = i3 - 1;
          b_loop_ub = mess_from_VN_to_FN.contents->size[2];
          i3 = ii->size[0];
          ii->size[0] = b_loop_ub;
          emxEnsureCapacity_int32_T1(sp, ii, i3, &ab_emlrtRTEI);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            ii->data[i3] = i3;
          }

          b_loop_ub = mess_from_VN_to_FN.contents->size[2];
          i3 = mess_from_VN_to_FN.contents->size[1];
          k = (int32_T)b_k.contents;
          if (!((k >= 1) && (k <= i3))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i3, &db_emlrtBCI, sp);
          }

          i3 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i3))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i3, &cb_emlrtBCI, sp);
          }

          i3 = b_mess_from_VN_to_FN->size[0] * b_mess_from_VN_to_FN->size[1] *
            b_mess_from_VN_to_FN->size[2];
          b_mess_from_VN_to_FN->size[0] = 1;
          b_mess_from_VN_to_FN->size[1] = 1;
          b_mess_from_VN_to_FN->size[2] = b_loop_ub;
          emxEnsureCapacity_real_T1(sp, b_mess_from_VN_to_FN, i3, &db_emlrtRTEI);
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            b_mess_from_VN_to_FN->data[b_mess_from_VN_to_FN->size[0] *
              b_mess_from_VN_to_FN->size[1] * i3] =
              mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (k - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i3) - 1];
          }

          rdivide(sp, b_mess_from_VN_to_FN, cte_norm, r1);
          iv0[0] = 1;
          iv0[1] = 1;
          iv0[2] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&iv0[0], 3, &(*(int32_T (*)[3])r1->size)
            [0], 3, &c_emlrtECI, sp);
          b_loop_ub = r1->size[2];
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            mess_from_VN_to_FN.contents->data[(i1 +
              mess_from_VN_to_FN.contents->size[0] * i2) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * ii->data[i3]] = r1->data
              [r1->size[0] * r1->size[1] * i3];
          }

          nx++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        /*  end FN loop */
        if (1.0 + (real_T)t == Tm) {
          /*  @ last iteration, get LLRs */
          i1 = vphi_j->size[1];
          if (!(1 <= i1)) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i1, &hb_emlrtBCI, sp);
          }

          i1 = b_ii->size[0] * b_ii->size[1];
          b_ii->size[0] = 1;
          b_ii->size[1] = vphi_j->size[1];
          emxEnsureCapacity_int32_T(sp, b_ii, i1, &q_emlrtRTEI);
          b_loop_ub = vphi_j->size[1];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            b_ii->data[b_ii->size[0] * i1] = (int32_T)vphi_j->data[vphi_j->size
              [0] * i1];
          }

          b_loop_ub = mess_from_VN_to_FN.contents->size[2];
          i1 = mess_from_VN_to_FN.contents->size[1];
          c_ii = b_ii->data[0];
          if (!((c_ii >= 1) && (c_ii <= i1))) {
            emlrtDynamicBoundsCheckR2012b(c_ii, 1, i1, &ib_emlrtBCI, sp);
          }

          i1 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &gb_emlrtBCI, sp);
          }

          i1 = b_mess_from_VN_to_FN->size[0] * b_mess_from_VN_to_FN->size[1] *
            b_mess_from_VN_to_FN->size[2];
          b_mess_from_VN_to_FN->size[0] = 1;
          b_mess_from_VN_to_FN->size[1] = 1;
          b_mess_from_VN_to_FN->size[2] = b_loop_ub;
          emxEnsureCapacity_real_T1(sp, b_mess_from_VN_to_FN, i1, &s_emlrtRTEI);
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            b_mess_from_VN_to_FN->data[b_mess_from_VN_to_FN->size[0] *
              b_mess_from_VN_to_FN->size[1] * i1] =
              mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (c_ii - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i1) - 1];
          }

          st.site = &v_emlrtRSI;
          b_squeeze(&st, b_mess_from_VN_to_FN, pmf);
          i1 = soft_bits->size[0];
          i2 = (j - 1) + 1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &jb_emlrtBCI, sp);
          }

          b_loop_ub = soft_bits->size[1];
          i1 = ii->size[0];
          ii->size[0] = b_loop_ub;
          emxEnsureCapacity_int32_T1(sp, ii, i1, &v_emlrtRTEI);
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            ii->data[i1] = i1;
          }

          i1 = soft_bits->size[2];
          i2 = ns + 1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &kb_emlrtBCI, sp);
          }

          st.site = &w_emlrtRSI;
          get_LLRs(&st, &kb, &codewords_binary_labels, &eps_val_num,
                   &eps_val_den, pmf, vphi_j);
          a_priori_beliefs_size[0] = 1;
          a_priori_beliefs_size[1] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&a_priori_beliefs_size[0], 2,
            &(*(int32_T (*)[2])vphi_j->size)[0], 2, &d_emlrtECI, sp);
          b_loop_ub = vphi_j->size[1];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            soft_bits->data[((j + soft_bits->size[0] * ii->data[i1]) +
                             soft_bits->size[0] * soft_bits->size[1] * ns) - 1] =
              vphi_j->data[vphi_j->size[0] * i1];
          }

          st.site = &x_emlrtRSI;
          b_st.site = &je_emlrtRSI;
          c_st.site = &ke_emlrtRSI;
          d_st.site = &le_emlrtRSI;
          if ((pmf->size[0] == 1) || (pmf->size[0] != 1)) {
          } else {
            emlrtErrorWithMessageIdR2018a(&d_st, &td_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility",
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          if (!(pmf->size[0] >= 1)) {
            emlrtErrorWithMessageIdR2018a(&d_st, &ud_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          e_st.site = &me_emlrtRSI;
          f_st.site = &ne_emlrtRSI;
          g_st.site = &oe_emlrtRSI;
          idx = pmf->size[0];
          nx = 1;
          h_st.site = &qe_emlrtRSI;
          cte_norm = pmf->data[0];
          h_st.site = &pe_emlrtRSI;
          if ((!(2 > idx)) && (idx > 2147483646)) {
            i_st.site = &ib_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (c_ii = 1; c_ii < idx; c_ii++) {
            overflow = ((!muDoubleScalarIsNaN(pmf->data[c_ii])) &&
                        (muDoubleScalarIsNaN(cte_norm) || (cte_norm < pmf->
              data[c_ii])));
            if (overflow) {
              cte_norm = pmf->data[c_ii];
              nx = c_ii + 1;
            }
          }

          i1 = hard_symbols->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &lb_emlrtBCI, sp);
          }

          i1 = hard_symbols->size[1];
          i2 = 1 + ns;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lb_emlrtBCI, sp);
          }

          hard_symbols->data[(j + hard_symbols->size[0] * (i2 - 1)) - 1] = nx;
        }

        j++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      /*  end VN loop */
      t++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /*  end MPA iterations */
    ns++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(sp, &b_counter);
  emxFree_real_T(sp, &b_mess_from_FN_to_VN);
  emxFree_real_T(sp, &b_mess_from_VN_to_FN);
  emxFree_creal_T(sp, &c_H);
  emxFree_real_T(sp, &b_varargin_1);
  emxFree_boolean_T(sp, &b_x);
  emxFree_int32_T(sp, &b_ii);
  emxFree_int32_T(sp, &ii);
  emxFree_real_T(sp, &x);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &pmf);
  emxFree_real_T(sp, &vphi_j_except_k);
  emxFree_creal_T(sp, &h_strong_users);
  emxFree_creal_T(sp, &interference_projections);
  emxFree_real_T(sp, &vphi_j);
  emxFree_real_T(sp, &mess_from_FN_to_VN);
  h_emxFreeStruct_coder_internal_(sp, &mess_from_VN_to_FN);
  g_emxFreeStruct_coder_internal_(sp, &phi_k_except_j);
  g_emxFreeStruct_coder_internal_(sp, &strong_users);
  g_emxFreeStruct_coder_internal_(sp, &length_of_each_counter);
  g_emxFreeStruct_coder_internal_(sp, &counter);
  g_emxFreeStruct_coder_internal_(sp, &codeword_labels);
  f_emxFreeStruct_coder_internal_(sp, &b_H);
  d_emxFreeStruct_coder_internal_(sp, &b_F);
  e_emxFreeStruct_coder_internal_(sp, &C);
  d_emxFreeStruct_coder_internal_(sp, &C_perms);
  d_emxFreeStruct_coder_internal_(sp, &b_F_int);
  c_emxFreeStruct_coder_internal_(sp, &codewords_binary_labels);

  /*  end Functions */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (TB_ESGA_MPA_Many_Rx_Linux_v0.c) */
