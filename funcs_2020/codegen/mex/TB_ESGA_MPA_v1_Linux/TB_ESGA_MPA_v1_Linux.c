/*
 * TB_ESGA_MPA_v1_Linux.c
 *
 * Code generation for function 'TB_ESGA_MPA_v1_Linux'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v1_Linux.h"
#include "sum.h"
#include "TB_ESGA_MPA_v1_Linux_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "mod.h"
#include "error.h"
#include "prod.h"
#include "log.h"
#include "exp.h"
#include "assertValidSizeArg.h"
#include "indexShapeCheck.h"
#include "sqrt.h"
#include "eml_setop.h"
#include "scalexpAlloc.h"
#include "squeeze.h"
#include "log2.h"
#include "TB_ESGA_MPA_v1_Linux_data.h"

/* Type Definitions */
#ifndef typedef_coder_internal_ref_4
#define typedef_coder_internal_ref_4

typedef struct {
  real_T contents;
} coder_internal_ref_4;

#endif                                 /*typedef_coder_internal_ref_4*/

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 36,    /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 19,  /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 37,  /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 53,  /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 57,  /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 61,  /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 64,  /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 66,  /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 74,  /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 75,  /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 78,  /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 95,  /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 99,  /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 100, /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 101, /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 104, /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 107, /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 113, /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 116, /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 121, /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 127, /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 128, /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 137, /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 143, /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 150, /* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 154,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 155,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 160,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 161,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 162,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 6,  /* lineNo */
  "ref",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/ref.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 41, /* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 153,/* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 377,/* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 19, /* lineNo */
  "setdiff",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/setdiff.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 70, /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 33, /* lineNo */
  "reshape",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/reshape.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 114,/* lineNo */
  "reshape",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/reshape.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 184,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 186,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 189,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 190,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 16, /* lineNo */
  "abs",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elfun/abs.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 74, /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 49, /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 58, /* lineNo */
  "power",                             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/power.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 45, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 65, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 189,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 15, /* lineNo */
  "max",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/max.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 16, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 38, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 112,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 852,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 844,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 894,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 910,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 23, /* lineNo */
  "intersect",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/intersect.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 203,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 220,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo ld_emlrtRSI = { 224,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo md_emlrtRSI = { 227,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo nd_emlrtRSI = { 235,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo od_emlrtRSI = { 236,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 238,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo qd_emlrtRSI = { 90, /* lineNo */
  "diag",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/diag.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 15, /* lineNo */
  "any",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/any.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 139,/* lineNo */
  "allOrAny",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 146,/* lineNo */
  "allOrAny",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/allOrAny.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 28, /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 32, /* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 366,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 369,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo yd_emlrtRSI = { 371,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 131,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 21, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 40, /* lineNo */
  "mpower",                            /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/mpower.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 264,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 52, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 88, /* lineNo */
  "mtimes",                            /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/+blas/mtimes.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 40, /* lineNo */
  "xdotu",                             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/+blas/xdotu.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 15, /* lineNo */
  "xdotu",                             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/+refblas/xdotu.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 32, /* lineNo */
  "xdotx",                             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/+refblas/xdotx.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 275,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 276,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 251,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 12, /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/toLogicalCheck.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 13, /* lineNo */
  "max",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/max.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 19, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 40, /* lineNo */
  "minOrMax",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/minOrMax.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 128,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 271,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 479,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 476,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 472,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 466,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 397,/* lineNo */
  "find",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 290,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 291,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 294,/* lineNo */
  "TB_ESGA_MPA_v1_Linux",              /* fcnName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 126,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 257,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 323,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 404,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 402,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 13,  /* lineNo */
  17,                                  /* colNo */
  "ref",                               /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/ref.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 22,/* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 23,/* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 33,/* lineNo */
  5,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 34,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 34,/* lineNo */
  5,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 37,/* lineNo */
  23,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 153,/* lineNo */
  13,                                  /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 53,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 137,/* lineNo */
  27,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 41,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 37,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 41,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 53,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 137,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 145,/* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 160,/* lineNo */
  53,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 57,/* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 160,/* lineNo */
  32,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 56,/* lineNo */
  19,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 154,/* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 161,/* lineNo */
  30,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 150,/* lineNo */
  62,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 154,/* lineNo */
  45,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 154,/* lineNo */
  77,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 155,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 66,/* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 156,/* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 127,/* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 156,/* lineNo */
  45,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 64,/* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 127,/* lineNo */
  45,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 91,/* lineNo */
  25,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 127,/* lineNo */
  77,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 92,/* lineNo */
  25,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 95,/* lineNo */
  53,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 121,/* lineNo */
  44,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 99,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 100,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 264,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 121,/* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 128,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 122,/* lineNo */
  44,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 129,/* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 129,/* lineNo */
  45,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 1,/* lineNo */
  38,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 74,/* lineNo */
  22,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 143,/* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = { 160,/* lineNo */
  18,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo yb_emlrtRTEI = { 33,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo ac_emlrtRTEI = { 64,/* lineNo */
  38,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 183,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 184,/* lineNo */
  30,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 16,/* lineNo */
  5,                                   /* colNo */
  "abs",                               /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elfun/abs.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 19,/* lineNo */
  24,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 45,/* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 58,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/power.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 185,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = { 185,/* lineNo */
  55,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = { 185,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = { 189,/* lineNo */
  41,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 42,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 184,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 184,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 179,/* lineNo */
  43,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 220,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 233,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 235,/* lineNo */
  20,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 235,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 15,/* lineNo */
  5,                                   /* colNo */
  "any",                               /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/any.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 236,/* lineNo */
  14,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 379,/* lineNo */
  5,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 236,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 50,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 238,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 236,/* lineNo */
  15,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 273,/* lineNo */
  41,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 268,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 273,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 274,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 275,/* lineNo */
  75,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 275,/* lineNo */
  55,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 275,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 275,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 276,/* lineNo */
  42,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 285,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo sd_emlrtRTEI = { 286,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 290,/* lineNo */
  35,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo ud_emlrtRTEI = { 283,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo vd_emlrtRTEI = { 290,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo wd_emlrtRTEI = { 291,/* lineNo */
  35,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 291,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 251,/* lineNo */
  52,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 36,/* lineNo */
  11,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  27,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  40,                                  /* lineNo */
  22,                                  /* colNo */
  "vphi_j",                            /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  58,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  62,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  32,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  41,                                  /* lineNo */
  34,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  41,                                  /* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  19,                                  /* colNo */
  "y_all",                             /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ce_emlrtRTEI = { 49,/* lineNo */
  11,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  53,                                  /* lineNo */
  28,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  56,                                  /* lineNo */
  25,                                  /* colNo */
  "phi_k",                             /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 61,    /* lineNo */
  33,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  33,                                  /* colNo */
  "y",                                 /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 64,  /* lineNo */
  48,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  48,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 66,  /* lineNo */
  44,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  44,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo de_emlrtRTEI = { 95,/* lineNo */
  51,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtDCInfo d_emlrtDCI = { 121, /* lineNo */
  52,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  52,                                  /* colNo */
  "C_perms",                           /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 122, /* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  122,                                 /* lineNo */
  40,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  122,                                 /* lineNo */
  42,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 127, /* lineNo */
  64,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  64,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  66,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 127, /* lineNo */
  96,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  96,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  98,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = { 127, /* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  36,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  127,                                 /* lineNo */
  38,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  127,                                 /* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtDCInfo i_emlrtDCI = { 128, /* lineNo */
  59,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  59,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  61,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 129, /* lineNo */
  64,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  64,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  66,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo k_emlrtDCI = { 129, /* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  36,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  129,                                 /* lineNo */
  38,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  129,                                 /* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo ee_emlrtRTEI = { 136,/* lineNo */
  15,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  31,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  140,                                 /* lineNo */
  26,                                  /* colNo */
  "vphi_j",                            /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo fe_emlrtRTEI = { 148,/* lineNo */
  23,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  149,                                 /* lineNo */
  47,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  149,                                 /* lineNo */
  49,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  149,                                 /* lineNo */
  51,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  97,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  99,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  154,                                 /* lineNo */
  64,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  154,                                 /* lineNo */
  66,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  154,                                 /* lineNo */
  96,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  154,                                 /* lineNo */
  98,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  154,                                 /* lineNo */
  36,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  154,                                 /* lineNo */
  38,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  154,                                 /* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  155,                                 /* lineNo */
  59,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  155,                                 /* lineNo */
  61,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  64,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  66,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  36,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  156,                                 /* lineNo */
  38,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  156,                                 /* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  160,                                 /* lineNo */
  51,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  160,                                 /* lineNo */
  60,                                  /* colNo */
  "vphi_j",                            /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  160,                                 /* lineNo */
  53,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  161,                                 /* lineNo */
  28,                                  /* colNo */
  "soft_bits",                         /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  161,                                 /* lineNo */
  32,                                  /* colNo */
  "soft_bits",                         /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  161,                                 /* lineNo */
  18,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtRTEInfo ge_emlrtRTEI = { 387,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/find.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 22,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = { 77,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo je_emlrtRTEI = { 59,/* lineNo */
  23,                                  /* colNo */
  "reshape",                           /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/reshape.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 88,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo me_emlrtRTEI = { 83,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/eml_mtimes_helper.m"/* pName */
};

static emlrtDCInfo l_emlrtDCI = { 22,  /* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 22,  /* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 33,  /* lineNo */
  34,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 33,  /* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 34,  /* lineNo */
  32,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 34,  /* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 22,  /* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 22,  /* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 33,  /* lineNo */
  5,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 34,  /* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  163,                                 /* lineNo */
  18,                                  /* colNo */
  "hard_symbols",                      /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  81,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  150,                                 /* lineNo */
  21,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 61,  /* lineNo */
  35,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  61,                                  /* lineNo */
  35,                                  /* colNo */
  "y",                                 /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  66,                                  /* lineNo */
  48,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  64,                                  /* lineNo */
  52,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  52,                                  /* colNo */
  "F_int",                             /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  122,                                 /* lineNo */
  44,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  264,                                 /* lineNo */
  39,                                  /* colNo */
  "Aq",                                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 264, /* lineNo */
  39,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  53,                                  /* colNo */
  "hk_sum",                            /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 100, /* lineNo */
  53,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  35,                                  /* colNo */
  "edge_subset",                       /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 60,  /* lineNo */
  35,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  60,                                  /* lineNo */
  17,                                  /* colNo */
  "edge_subset",                       /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 60, /* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  40,                                  /* colNo */
  "hk_sum",                            /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  80,                                  /* lineNo */
  40,                                  /* colNo */
  "Aq",                                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  99,                                  /* lineNo */
  29,                                  /* colNo */
  "Aq",                                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 99, /* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  100,                                 /* lineNo */
  29,                                  /* colNo */
  "hk_sum",                            /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 100,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { 2,   /* nDims */
  185,                                 /* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtDCInfo db_emlrtDCI = { 185,/* lineNo */
  57,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  185,                                 /* lineNo */
  57,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ue_emlrtRTEI = { 17,/* lineNo */
  19,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/scalexpAlloc.m"/* pName */
};

static emlrtDCInfo eb_emlrtDCI = { 183,/* lineNo */
  31,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 183,/* lineNo */
  31,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 183,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 183,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  183,                                 /* lineNo */
  35,                                  /* colNo */
  "dummy_zero_j",                      /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 183,/* lineNo */
  35,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo we_emlrtRTEI = { 219,/* lineNo */
  16,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  202,                                 /* lineNo */
  22,                                  /* colNo */
  "weak_users",                        /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  218,                                 /* lineNo */
  19,                                  /* colNo */
  "hk_sum",                            /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 218,/* lineNo */
  19,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  221,                                 /* lineNo */
  26,                                  /* colNo */
  "xj",                                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 221,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  222,                                 /* lineNo */
  27,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 222,/* lineNo */
  27,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  218,                                 /* lineNo */
  9,                                   /* colNo */
  "hk_sum",                            /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = { 218,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  221,                                 /* lineNo */
  13,                                  /* colNo */
  "xj",                                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 221,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo xe_emlrtRTEI = { 378,/* lineNo */
  1,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = { 80,/* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/nullAssignment.m"/* pName */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  235,                                 /* lineNo */
  24,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  233,                                 /* lineNo */
  18,                                  /* colNo */
  "C",                                 /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  276,                                 /* lineNo */
  67,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 276,/* lineNo */
  67,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  276,                                 /* lineNo */
  65,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 276,/* lineNo */
  65,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { 2,   /* nDims */
  275,                                 /* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  275,                                 /* lineNo */
  72,                                  /* colNo */
  "projection_index",                  /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  274,                                 /* lineNo */
  39,                                  /* colNo */
  "C_perms",                           /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 274,/* lineNo */
  39,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo i_emlrtECI = { 2,   /* nDims */
  273,                                 /* lineNo */
  41,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtDCInfo rb_emlrtDCI = { 275,/* lineNo */
  82,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 275,/* lineNo */
  82,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  272,                                 /* lineNo */
  17,                                  /* colNo */
  "strong_users",                      /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  273,                                 /* lineNo */
  41,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  274,                                 /* lineNo */
  39,                                  /* colNo */
  "F_int",                             /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 275,/* lineNo */
  75,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 275,/* lineNo */
  75,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  276,                                 /* lineNo */
  69,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 276,/* lineNo */
  69,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo bf_emlrtRTEI = { 288,/* lineNo */
  15,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m"/* pName */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  290,                                 /* lineNo */
  62,                                  /* colNo */
  "codewords_binary_labels",           /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  291,                                 /* lineNo */
  61,                                  /* colNo */
  "codewords_binary_labels",           /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  43,                                  /* colNo */
  "soft_bits",                         /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 285,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 285,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 286,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ac_emlrtDCI = { 286,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo bc_emlrtDCI = { 285,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo cc_emlrtDCI = { 285,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = { 286,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = { 286,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  290,                                 /* lineNo */
  35,                                  /* colNo */
  "pmf",                               /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  291,                                 /* lineNo */
  35,                                  /* colNo */
  "pmf",                               /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  294,                                 /* lineNo */
  13,                                  /* colNo */
  "soft_bits",                         /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  297,                                 /* lineNo */
  13,                                  /* colNo */
  "hard_bits",                         /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  77,                                  /* colNo */
  "length_of_each_counter",            /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  75,                                  /* colNo */
  "length_of_each_counter",            /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  25,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  72,                                  /* colNo */
  "length_of_each_counter",            /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  42,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  38,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  53,                                  /* colNo */
  "length_of_each_counter",            /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  21,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ae_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  255,                                 /* lineNo */
  16,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  256,                                 /* lineNo */
  17,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v1_Linux",              /* fName */
  "/home/fontanads/Dropbox/MATLAB/SCMA_2020_TB_ESGA_MPA/funcs_2020/TB_ESGA_MPA_v1_Linux.m",/* pName */
  0                                    /* checkKind */
};

/* Function Declarations */
static void find_strong_and_weak_users(const emlrtStack *sp, const
  coder_internal_ref_4 *J, const coder_internal_ref_4 *j, const
  coder_internal_ref_2 *hk_sum, const coder_internal_ref_1 *F, const
  coder_internal_ref_4 *k, const coder_internal_ref_4 *r_th, const
  coder_internal_ref_5 *phi_k_except_j, emxArray_real_T *strong_users,
  emxArray_real_T *weak_users);
static void gaussian_approximation(const emlrtStack *sp, const
  coder_internal_ref_3 *C, const coder_internal_ref_1 *F, const
  coder_internal_ref_2 *hk_sum, const coder_internal_ref_4 *M, const
  coder_internal_ref_4 *k, const coder_internal_ref_6 *mess_from_VN_to_FN, const
  emxArray_real_T *weak_users, creal_T *adapt_mean, real_T *adapt_var);
static void get_LLRs(const emlrtStack *sp, const coder_internal_ref_4 *kb, const
                     coder_internal_ref *codewords_binary_labels, const
                     coder_internal_ref_4 *eps_val_num, const
                     coder_internal_ref_4 *eps_val_den, const emxArray_real_T
                     *pmf, emxArray_real_T *soft_bits);
static real_T get_extrinsic_info_probability(const emlrtStack *sp, const
  coder_internal_ref_5 *strong_users, const coder_internal_ref_5 *counter, const
  coder_internal_ref_1 *C_perms, const coder_internal_ref_1 *F_int, const
  coder_internal_ref_4 *k, coder_internal_ref_5 *codeword_labels, const
  coder_internal_ref_4 *M, const coder_internal_ref_6 *mess_from_VN_to_FN, const
  coder_internal_ref_4 *eps_val_num);
static void spread_symbol(const emlrtStack *sp, const coder_internal_ref_3 *C,
  const coder_internal_ref_1 *F, real_T user, real_T sym_index, emxArray_creal_T
  *xj);
static void update_cartesian_counter(const emlrtStack *sp, const
  coder_internal_ref_5 *length_of_each_counter, const coder_internal_ref_4
  *marginal_prob_idx_cnt, emxArray_real_T *counter);

/* Function Definitions */
static void find_strong_and_weak_users(const emlrtStack *sp, const
  coder_internal_ref_4 *J, const coder_internal_ref_4 *j, const
  coder_internal_ref_2 *hk_sum, const coder_internal_ref_1 *F, const
  coder_internal_ref_4 *k, const coder_internal_ref_4 *r_th, const
  coder_internal_ref_5 *phi_k_except_j, emxArray_real_T *strong_users,
  emxArray_real_T *weak_users)
{
  emxArray_int8_T *dummy_zero_j;
  int32_T i3;
  real_T ex;
  int32_T loop_ub;
  emxArray_creal_T *x;
  emxArray_real_T *a;
  boolean_T overflow;
  int32_T nx;
  emxArray_real_T *z;
  emxArray_real_T *b_z;
  emxArray_real_T *channel_gains;
  int32_T b_channel_gains[2];
  int32_T b_dummy_zero_j[2];
  int32_T idx;
  emxArray_boolean_T *b_x;
  boolean_T exitg1;
  emxArray_int32_T *ii;
  emxArray_int32_T *ia;
  emxArray_int32_T *ib;
  int32_T ib_size[1];
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
  emxInit_int8_T1(sp, &dummy_zero_j, 2, &gc_emlrtRTEI, true);

  /*  end packet index */
  /* ------------------------------------------------------------------------------------------- */
  /*  MPA ends HERE */
  /* ------------------------------------------------------------------------------------------- */
  /* ------------------------------------------------------------------------------------------- */
  /*  HELPER FUNCTIONS start HERE */
  /* ------------------------------------------------------------------------------------------- */
  /*     %% Fix user j, Find strong and weak users @ FN k  */
  /*          h_kj = squeeze(H(k,j,nr));       % channel fading of user j in FN k @ Rx antenna nr */
  i3 = dummy_zero_j->size[0] * dummy_zero_j->size[1];
  dummy_zero_j->size[0] = 1;
  ex = J->contents;
  if (!(ex >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ex, &fb_emlrtDCI, sp);
  }

  if (ex != (int32_T)muDoubleScalarFloor(ex)) {
    emlrtIntegerCheckR2012b(ex, &eb_emlrtDCI, sp);
  }

  dummy_zero_j->size[1] = (int32_T)ex;
  emxEnsureCapacity_int8_T1(sp, dummy_zero_j, i3, &gc_emlrtRTEI);
  ex = J->contents;
  if (!(ex >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ex, &hb_emlrtDCI, sp);
  }

  if (ex != (int32_T)muDoubleScalarFloor(ex)) {
    emlrtIntegerCheckR2012b(ex, &gb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)ex;
  for (i3 = 0; i3 < loop_ub; i3++) {
    dummy_zero_j->data[i3] = 1;
  }

  emxInit_creal_T(sp, &x, 2, &hc_emlrtRTEI, true);
  i3 = (int32_T)J->contents;
  ex = j->contents;
  if (ex != (int32_T)muDoubleScalarFloor(ex)) {
    emlrtIntegerCheckR2012b(ex, &ib_emlrtDCI, sp);
  }

  loop_ub = (int32_T)ex;
  if (!((loop_ub >= 1) && (loop_ub <= i3))) {
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i3, &sc_emlrtBCI, sp);
  }

  dummy_zero_j->data[loop_ub - 1] = 0;
  st.site = &lc_emlrtRSI;
  i3 = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = hk_sum->contents->size[0];
  emxEnsureCapacity_creal_T(&st, x, i3, &hc_emlrtRTEI);
  loop_ub = hk_sum->contents->size[0];
  for (i3 = 0; i3 < loop_ub; i3++) {
    x->data[x->size[0] * i3] = hk_sum->contents->data[i3];
  }

  emxInit_real_T(&st, &a, 2, &sc_emlrtRTEI, true);
  b_st.site = &pc_emlrtRSI;
  i3 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = x->size[1];
  emxEnsureCapacity_real_T(&b_st, a, i3, &ic_emlrtRTEI);
  c_st.site = &qc_emlrtRSI;
  overflow = ((!(1 > x->size[1])) && (x->size[1] > 2147483646));
  if (overflow) {
    d_st.site = &ob_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (nx = 0; nx < x->size[1]; nx++) {
    a->data[nx] = muDoubleScalarHypot(x->data[nx].re, x->data[nx].im);
  }

  emxFree_creal_T(&b_st, &x);
  emxInit_real_T(&b_st, &z, 2, &kc_emlrtRTEI, true);
  emxInit_real_T(&b_st, &b_z, 2, &jc_emlrtRTEI, true);
  st.site = &lc_emlrtRSI;
  b_st.site = &rc_emlrtRSI;
  c_st.site = &sc_emlrtRSI;
  d_st.site = &tc_emlrtRSI;
  i3 = b_z->size[0] * b_z->size[1];
  b_z->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&d_st, b_z, i3, &jc_emlrtRTEI);
  loop_ub = a->size[1];
  i3 = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&d_st, z, i3, &kc_emlrtRTEI);
  if (!dimagree(z, a)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &ue_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  emxInit_real_T(&d_st, &channel_gains, 2, &rc_emlrtRTEI, true);
  i3 = channel_gains->size[0] * channel_gains->size[1];
  channel_gains->size[0] = 1;
  channel_gains->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&c_st, channel_gains, i3, &lc_emlrtRTEI);
  d_st.site = &uc_emlrtRSI;
  e_st.site = &vc_emlrtRSI;
  overflow = ((!(1 > b_z->size[1])) && (b_z->size[1] > 2147483646));
  emxFree_real_T(&e_st, &b_z);
  if (overflow) {
    f_st.site = &ob_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (nx = 0; nx < loop_ub; nx++) {
    channel_gains->data[nx] = a->data[nx] * a->data[nx];
  }

  for (i3 = 0; i3 < 2; i3++) {
    b_channel_gains[i3] = channel_gains->size[i3];
  }

  for (i3 = 0; i3 < 2; i3++) {
    b_dummy_zero_j[i3] = dummy_zero_j->size[i3];
  }

  if ((b_channel_gains[0] != b_dummy_zero_j[0]) || (b_channel_gains[1] !=
       b_dummy_zero_j[1])) {
    emlrtSizeEqCheckNDR2012b(&b_channel_gains[0], &b_dummy_zero_j[0],
      &g_emlrtECI, sp);
  }

  loop_ub = channel_gains->size[0] * channel_gains->size[1] - 1;
  i3 = channel_gains->size[0] * channel_gains->size[1];
  channel_gains->size[0] = 1;
  emxEnsureCapacity_real_T(sp, channel_gains, i3, &mc_emlrtRTEI);
  for (i3 = 0; i3 <= loop_ub; i3++) {
    channel_gains->data[i3] *= (real_T)dummy_zero_j->data[i3];
  }

  emxFree_int8_T(sp, &dummy_zero_j);
  loop_ub = F->contents->size[1];
  ex = k->contents;
  if (ex != (int32_T)muDoubleScalarFloor(ex)) {
    emlrtIntegerCheckR2012b(ex, &db_emlrtDCI, sp);
  }

  i3 = F->contents->size[0];
  nx = (int32_T)ex;
  if (!((nx >= 1) && (nx <= i3))) {
    emlrtDynamicBoundsCheckR2012b(nx, 1, i3, &rc_emlrtBCI, sp);
  }

  i3 = z->size[0] * z->size[1];
  z->size[0] = 1;
  z->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, z, i3, &nc_emlrtRTEI);
  for (i3 = 0; i3 < loop_ub; i3++) {
    z->data[z->size[0] * i3] = F->contents->data[(nx + F->contents->size[0] * i3)
      - 1];
  }

  for (i3 = 0; i3 < 2; i3++) {
    b_channel_gains[i3] = channel_gains->size[i3];
  }

  for (i3 = 0; i3 < 2; i3++) {
    b_dummy_zero_j[i3] = z->size[i3];
  }

  if ((b_channel_gains[0] != b_dummy_zero_j[0]) || (b_channel_gains[1] !=
       b_dummy_zero_j[1])) {
    emlrtSizeEqCheckNDR2012b(&b_channel_gains[0], &b_dummy_zero_j[0],
      &g_emlrtECI, sp);
  }

  loop_ub = channel_gains->size[0] * channel_gains->size[1] - 1;
  i3 = channel_gains->size[0] * channel_gains->size[1];
  channel_gains->size[0] = 1;
  emxEnsureCapacity_real_T(sp, channel_gains, i3, &oc_emlrtRTEI);
  for (i3 = 0; i3 <= loop_ub; i3++) {
    channel_gains->data[i3] *= z->data[i3];
  }

  emxFree_real_T(sp, &z);

  /*  channel fadings of all users in FN k (if VN not in FN k, fading = 0) @ Rx Antenna nr */
  st.site = &mc_emlrtRSI;
  b_st.site = &wc_emlrtRSI;
  c_st.site = &xc_emlrtRSI;
  d_st.site = &yc_emlrtRSI;
  if ((channel_gains->size[1] == 1) || (channel_gains->size[1] != 1)) {
  } else {
    emlrtErrorWithMessageIdR2018a(&d_st, &he_emlrtRTEI,
      "Coder:toolbox:autoDimIncompatibility",
      "Coder:toolbox:autoDimIncompatibility", 0);
  }

  if (!(channel_gains->size[1] >= 1)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &ie_emlrtRTEI,
      "Coder:toolbox:eml_min_or_max_varDimZero",
      "Coder:toolbox:eml_min_or_max_varDimZero", 0);
  }

  e_st.site = &ad_emlrtRSI;
  if (channel_gains->size[1] <= 2) {
    if (channel_gains->size[1] == 1) {
      ex = channel_gains->data[0];
    } else if ((channel_gains->data[0] < channel_gains->data[1]) ||
               (muDoubleScalarIsNaN(channel_gains->data[0]) &&
                (!muDoubleScalarIsNaN(channel_gains->data[1])))) {
      ex = channel_gains->data[1];
    } else {
      ex = channel_gains->data[0];
    }
  } else {
    f_st.site = &cd_emlrtRSI;
    if (!muDoubleScalarIsNaN(channel_gains->data[0])) {
      idx = 1;
    } else {
      idx = 0;
      g_st.site = &dd_emlrtRSI;
      overflow = (channel_gains->size[1] > 2147483646);
      if (overflow) {
        h_st.site = &ob_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      nx = 2;
      exitg1 = false;
      while ((!exitg1) && (nx <= channel_gains->size[1])) {
        if (!muDoubleScalarIsNaN(channel_gains->data[nx - 1])) {
          idx = nx;
          exitg1 = true;
        } else {
          nx++;
        }
      }
    }

    if (idx == 0) {
      ex = channel_gains->data[0];
    } else {
      f_st.site = &bd_emlrtRSI;
      ex = channel_gains->data[idx - 1];
      g_st.site = &ed_emlrtRSI;
      overflow = ((!(idx + 1 > channel_gains->size[1])) && (channel_gains->size
        [1] > 2147483646));
      if (overflow) {
        h_st.site = &ob_emlrtRSI;
        check_forloop_overflow_error(&h_st);
      }

      while (idx + 1 <= channel_gains->size[1]) {
        if (ex < channel_gains->data[idx]) {
          ex = channel_gains->data[idx];
        }

        idx++;
      }
    }
  }

  emxInit_boolean_T(&e_st, &b_x, 2, &pc_emlrtRTEI, true);
  st.site = &nc_emlrtRSI;
  i3 = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = channel_gains->size[1];
  emxEnsureCapacity_boolean_T(&st, b_x, i3, &pc_emlrtRTEI);
  ex *= r_th->contents;
  loop_ub = channel_gains->size[0] * channel_gains->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    b_x->data[i3] = (channel_gains->data[i3] >= ex);
  }

  emxFree_real_T(&st, &channel_gains);
  emxInit_int32_T1(&st, &ii, 2, &yb_emlrtRTEI, true);
  b_st.site = &lb_emlrtRSI;
  nx = b_x->size[1];
  c_st.site = &mb_emlrtRSI;
  idx = 0;
  i3 = ii->size[0] * ii->size[1];
  ii->size[0] = 1;
  ii->size[1] = b_x->size[1];
  emxEnsureCapacity_int32_T(&c_st, ii, i3, &h_emlrtRTEI);
  d_st.site = &nb_emlrtRSI;
  overflow = (b_x->size[1] > 2147483646);
  if (overflow) {
    e_st.site = &ob_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  loop_ub = 1;
  exitg1 = false;
  while ((!exitg1) && (loop_ub <= nx)) {
    if (b_x->data[loop_ub - 1]) {
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

  if (!(idx <= b_x->size[1])) {
    emlrtErrorWithMessageIdR2018a(&c_st, &ge_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (b_x->size[1] == 1) {
    if (idx == 0) {
      i3 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = 0;
      emxEnsureCapacity_int32_T(&c_st, ii, i3, &k_emlrtRTEI);
    }
  } else {
    i3 = ii->size[0] * ii->size[1];
    if (1 > idx) {
      ii->size[1] = 0;
    } else {
      ii->size[1] = idx;
    }

    emxEnsureCapacity_int32_T(&c_st, ii, i3, &k_emlrtRTEI);
  }

  emxFree_boolean_T(&c_st, &b_x);
  st.site = &nc_emlrtRSI;
  b_st.site = &fd_emlrtRSI;
  i3 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = ii->size[1];
  emxEnsureCapacity_real_T(&b_st, a, i3, &qc_emlrtRTEI);
  loop_ub = ii->size[0] * ii->size[1];
  for (i3 = 0; i3 < loop_ub; i3++) {
    a->data[i3] = ii->data[i3];
  }

  emxFree_int32_T(&b_st, &ii);
  emxInit_int32_T(&b_st, &ia, 1, &tc_emlrtRTEI, true);
  emxInit_int32_T(&b_st, &ib, 1, &tc_emlrtRTEI, true);
  c_st.site = &qb_emlrtRSI;
  b_do_vectors(&c_st, a, phi_k_except_j->contents, strong_users, ia, ib);

  /*  users in FN k (except j) that satisfy threshold "r_th * abs(h_kj)^2" are included in strong_users */
  st.site = &oc_emlrtRSI;
  b_st.site = &pb_emlrtRSI;
  c_st.site = &qb_emlrtRSI;
  c_do_vectors(&c_st, phi_k_except_j->contents, strong_users, weak_users, ia,
               ib_size);

  /*  remaining users are considered weak interference */
  emxFree_int32_T(sp, &ib);
  emxFree_int32_T(sp, &ia);
  emxFree_real_T(sp, &a);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void gaussian_approximation(const emlrtStack *sp, const
  coder_internal_ref_3 *C, const coder_internal_ref_1 *F, const
  coder_internal_ref_2 *hk_sum, const coder_internal_ref_4 *M, const
  coder_internal_ref_4 *k, const coder_internal_ref_6 *mess_from_VN_to_FN, const
  emxArray_real_T *weak_users, creal_T *adapt_mean, real_T *adapt_var)
{
  int32_T uu;
  emxArray_creal_T *xj;
  int32_T i4;
  int32_T i5;
  real_T user;
  real_T Expect_over_x_kj_re;
  real_T Expect_over_x_kj_im;
  real_T Expect_over_squared_norm_x_kj;
  real_T d1;
  real_T h_kj_nr_re;
  real_T h_kj_nr_im;
  int32_T mm;
  real_T x_kk_ee_me_re;
  real_T p_x_kjm;
  real_T x_kk_ee_me_im;
  int32_T i6;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*     %% Gaussian approximation on weak users */
  /*  given the weak users indexes, */
  adapt_mean->re = 0.0;
  adapt_mean->im = 0.0;

  /*  initialize effective noise mean */
  *adapt_var = 0.0;

  /*  initialize increment of noise variance */
  if (!(weak_users->size[1] == 0)) {
    /*  if there is any weak user */
    /* for user = weak_users */
    uu = 0;
    emxInit_creal_T1(sp, &xj, 1, &wc_emlrtRTEI, true);
    while (uu <= weak_users->size[1] - 1) {
      /*  for each weak user  */
      i4 = weak_users->size[1];
      i5 = 1 + uu;
      if (!((i5 >= 1) && (i5 <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &tc_emlrtBCI, sp);
      }

      user = weak_users->data[i5 - 1];

      /*  actual weak user index  */
      st.site = &jd_emlrtRSI;

      /*     %% Get mean and variance of codebook from "user" @ subcarrier k  */
      /*  get expecation of "user" projection E[X(k,u)] and E[|X(k,u)|^2] */
      Expect_over_x_kj_re = 0.0;
      Expect_over_x_kj_im = 0.0;
      Expect_over_squared_norm_x_kj = 0.0;
      i4 = hk_sum->contents->size[0];
      d1 = weak_users->data[uu];
      if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
        emlrtIntegerCheckR2012b(d1, &mb_emlrtDCI, &st);
      }

      i5 = (int32_T)d1;
      if (!((i5 >= 1) && (i5 <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &xc_emlrtBCI, &st);
      }

      h_kj_nr_re = hk_sum->contents->data[i5 - 1].re;
      i4 = hk_sum->contents->size[0];
      d1 = weak_users->data[uu];
      if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
        emlrtIntegerCheckR2012b(d1, &jb_emlrtDCI, &st);
      }

      i5 = (int32_T)d1;
      if (!((i5 >= 1) && (i5 <= i4))) {
        emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &uc_emlrtBCI, &st);
      }

      h_kj_nr_im = hk_sum->contents->data[i5 - 1].im;

      /*  fading coefficient of user  */
      d1 = M->contents;
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, d1, mxDOUBLE_CLASS, (int32_T)d1,
        &we_emlrtRTEI, &st);
      mm = 0;
      while (mm <= (int32_T)d1 - 1) {
        b_st.site = &kd_emlrtRSI;
        spread_symbol(&b_st, C, F, user, 1.0 + (real_T)mm, xj);
        i4 = xj->size[0];
        p_x_kjm = k->contents;
        if (p_x_kjm != (int32_T)muDoubleScalarFloor(p_x_kjm)) {
          emlrtIntegerCheckR2012b(p_x_kjm, &nb_emlrtDCI, &st);
        }

        i5 = (int32_T)p_x_kjm;
        if (!((i5 >= 1) && (i5 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &yc_emlrtBCI, &st);
        }

        x_kk_ee_me_re = xj->data[i5 - 1].re;
        i4 = xj->size[0];
        p_x_kjm = k->contents;
        if (p_x_kjm != (int32_T)muDoubleScalarFloor(p_x_kjm)) {
          emlrtIntegerCheckR2012b(p_x_kjm, &kb_emlrtDCI, &st);
        }

        i5 = (int32_T)p_x_kjm;
        if (!((i5 >= 1) && (i5 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &vc_emlrtBCI, &st);
        }

        x_kk_ee_me_im = xj->data[i5 - 1].im;
        i4 = mess_from_VN_to_FN->contents->size[0];
        i5 = (int32_T)user;
        if (!((i5 >= 1) && (i5 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i5, 1, i4, &wc_emlrtBCI, &st);
        }

        i4 = mess_from_VN_to_FN->contents->size[1];
        p_x_kjm = k->contents;
        if (p_x_kjm != (int32_T)muDoubleScalarFloor(p_x_kjm)) {
          emlrtIntegerCheckR2012b(p_x_kjm, &lb_emlrtDCI, &st);
        }

        i6 = (int32_T)p_x_kjm;
        if (!((i6 >= 1) && (i6 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(i6, 1, i4, &wc_emlrtBCI, &st);
        }

        i4 = mess_from_VN_to_FN->contents->size[2];
        if (!((mm + 1 >= 1) && (mm + 1 <= i4))) {
          emlrtDynamicBoundsCheckR2012b(mm + 1, 1, i4, &wc_emlrtBCI, &st);
        }

        p_x_kjm = mess_from_VN_to_FN->contents->data[((i5 +
          mess_from_VN_to_FN->contents->size[0] * (i6 - 1)) +
          mess_from_VN_to_FN->contents->size[0] * mess_from_VN_to_FN->
          contents->size[1] * mm) - 1];
        p_x_kjm = muDoubleScalarExp(p_x_kjm);
        Expect_over_x_kj_re += p_x_kjm * x_kk_ee_me_re;
        Expect_over_x_kj_im += p_x_kjm * x_kk_ee_me_im;
        x_kk_ee_me_re = muDoubleScalarHypot(x_kk_ee_me_re, x_kk_ee_me_im);
        b_st.site = &ld_emlrtRSI;
        Expect_over_squared_norm_x_kj += x_kk_ee_me_re * x_kk_ee_me_re * p_x_kjm;
        mm++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      x_kk_ee_me_re = muDoubleScalarHypot(h_kj_nr_re, h_kj_nr_im);
      p_x_kjm = muDoubleScalarHypot(Expect_over_x_kj_re, Expect_over_x_kj_im);
      b_st.site = &md_emlrtRSI;
      b_st.site = &md_emlrtRSI;

      /*  take expecation of user projection h_kj_nr * E[ X(k,u) ] and |h_kj_nr|^2 * var[ X(k,u) ] */
      adapt_mean->re += h_kj_nr_re * Expect_over_x_kj_re - h_kj_nr_im *
        Expect_over_x_kj_im;
      adapt_mean->im += h_kj_nr_re * Expect_over_x_kj_im + h_kj_nr_im *
        Expect_over_x_kj_re;

      /*  increment GA mean */
      *adapt_var += x_kk_ee_me_re * x_kk_ee_me_re *
        (Expect_over_squared_norm_x_kj - p_x_kjm * p_x_kjm);

      /*  increment GA variance */
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
  int32_T i9;
  real_T d2;
  int32_T loop_ub;
  emxArray_int8_T *hard_bits;
  int32_T n;
  emxArray_real_T *prob_set_b0;
  emxArray_real_T *prob_set_b1;
  emxArray_boolean_T *r4;
  emxArray_int32_T *r5;
  emxArray_int32_T *r6;
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
  i9 = soft_bits->size[0] * soft_bits->size[1];
  soft_bits->size[0] = 1;
  d2 = kb->contents;
  if (!(d2 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d2, &xb_emlrtDCI, sp);
  }

  if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
    emlrtIntegerCheckR2012b(d2, &wb_emlrtDCI, sp);
  }

  soft_bits->size[1] = (int32_T)d2;
  emxEnsureCapacity_real_T(sp, soft_bits, i9, &rd_emlrtRTEI);
  d2 = kb->contents;
  if (!(d2 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d2, &cc_emlrtDCI, sp);
  }

  if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
    emlrtIntegerCheckR2012b(d2, &bc_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d2;
  for (i9 = 0; i9 < loop_ub; i9++) {
    soft_bits->data[i9] = 0.0;
  }

  emxInit_int8_T1(sp, &hard_bits, 2, &sd_emlrtRTEI, true);
  i9 = hard_bits->size[0] * hard_bits->size[1];
  hard_bits->size[0] = 1;
  d2 = kb->contents;
  if (!(d2 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d2, &ac_emlrtDCI, sp);
  }

  if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
    emlrtIntegerCheckR2012b(d2, &yb_emlrtDCI, sp);
  }

  hard_bits->size[1] = (int32_T)d2;
  emxEnsureCapacity_int8_T1(sp, hard_bits, i9, &sd_emlrtRTEI);
  d2 = kb->contents;
  if (!(d2 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d2, &ec_emlrtDCI, sp);
  }

  if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
    emlrtIntegerCheckR2012b(d2, &dc_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d2;
  for (i9 = 0; i9 < loop_ub; i9++) {
    hard_bits->data[i9] = 0;
  }

  d2 = kb->contents;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d2, mxDOUBLE_CLASS, (int32_T)d2,
    &bf_emlrtRTEI, sp);
  n = 1;
  emxInit_real_T2(sp, &prob_set_b0, 1, &vd_emlrtRTEI, true);
  emxInit_real_T2(sp, &prob_set_b1, 1, &xd_emlrtRTEI, true);
  emxInit_boolean_T1(sp, &r4, 1, &ud_emlrtRTEI, true);
  emxInit_int32_T(sp, &r5, 1, &ud_emlrtRTEI, true);
  emxInit_int32_T(sp, &r6, 1, &ud_emlrtRTEI, true);
  while (n - 1 <= (int32_T)d2 - 1) {
    /*  for each bit */
    loop_ub = codewords_binary_labels->contents->size[0];
    i9 = codewords_binary_labels->contents->size[1];
    if (!((n >= 1) && (n <= i9))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i9, &kd_emlrtBCI, sp);
    }

    i9 = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity_boolean_T1(sp, r4, i9, &td_emlrtRTEI);
    for (i9 = 0; i9 < loop_ub; i9++) {
      r4->data[i9] = !codewords_binary_labels->contents->data[i9 +
        codewords_binary_labels->contents->size[0] * (n - 1)];
    }

    st.site = &ff_emlrtRSI;
    b_indexShapeCheck(&st, *(int32_T (*)[2])pmf->size, r4->size[0]);
    end = r4->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (r4->data[i]) {
        loop_ub++;
      }
    }

    i9 = r5->size[0];
    r5->size[0] = loop_ub;
    emxEnsureCapacity_int32_T1(sp, r5, i9, &ud_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (r4->data[i]) {
        r5->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }

    i = pmf->size[0];
    i9 = prob_set_b0->size[0];
    prob_set_b0->size[0] = r5->size[0];
    emxEnsureCapacity_real_T2(sp, prob_set_b0, i9, &vd_emlrtRTEI);
    loop_ub = r5->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      end = r5->data[i9];
      if (!((end >= 1) && (end <= i))) {
        emlrtDynamicBoundsCheckR2012b(end, 1, i, &nd_emlrtBCI, sp);
      }

      prob_set_b0->data[i9] = pmf->data[end - 1];
    }

    st.site = &ff_emlrtRSI;
    c_exp(&st, prob_set_b0);

    /*  for the n-th bits, locate symbols indexes with bit_n = 0 :: get a posteriori probability of these symbols */
    loop_ub = codewords_binary_labels->contents->size[0];
    i9 = codewords_binary_labels->contents->size[1];
    if (!((n >= 1) && (n <= i9))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i9, &ld_emlrtBCI, sp);
    }

    i9 = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity_boolean_T1(sp, r4, i9, &wd_emlrtRTEI);
    for (i9 = 0; i9 < loop_ub; i9++) {
      r4->data[i9] = codewords_binary_labels->contents->data[i9 +
        codewords_binary_labels->contents->size[0] * (n - 1)];
    }

    st.site = &gf_emlrtRSI;
    b_indexShapeCheck(&st, *(int32_T (*)[2])pmf->size, r4->size[0]);
    end = r4->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (r4->data[i]) {
        loop_ub++;
      }
    }

    i9 = r6->size[0];
    r6->size[0] = loop_ub;
    emxEnsureCapacity_int32_T1(sp, r6, i9, &ud_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (r4->data[i]) {
        r6->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }

    i = pmf->size[0];
    i9 = prob_set_b1->size[0];
    prob_set_b1->size[0] = r6->size[0];
    emxEnsureCapacity_real_T2(sp, prob_set_b1, i9, &xd_emlrtRTEI);
    loop_ub = r6->size[0];
    for (i9 = 0; i9 < loop_ub; i9++) {
      end = r6->data[i9];
      if (!((end >= 1) && (end <= i))) {
        emlrtDynamicBoundsCheckR2012b(end, 1, i, &od_emlrtBCI, sp);
      }

      prob_set_b1->data[i9] = pmf->data[end - 1];
    }

    st.site = &gf_emlrtRSI;
    c_exp(&st, prob_set_b1);

    /*  for the n-th bits, locate symbols indexes with bit_n = 1 :: get a posteriori probability of these symbols */
    /*  LLR = log( LR ), where LR= (Prob. bit_n==0) / (Prob.bit_n==1) :: (Prob. bit_n==b) is the sum of symbol a posteriori probabilities where (bit_n==b) */
    st.site = &hf_emlrtRSI;
    A = d_sum(&st, prob_set_b0) + eps_val_num->contents;
    st.site = &hf_emlrtRSI;
    B = d_sum(&st, prob_set_b1) + eps_val_den->contents;
    A /= B;
    st.site = &hf_emlrtRSI;
    if (A < 0.0) {
      b_st.site = &re_emlrtRSI;
      f_error(&b_st);
    }

    i9 = soft_bits->size[1];
    if (!((n >= 1) && (n <= i9))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i9, &pd_emlrtBCI, sp);
    }

    soft_bits->data[n - 1] = muDoubleScalarLog(A);

    /*  hard decision on bit_n (not used) */
    i9 = soft_bits->size[1];
    end = (n - 1) + 1;
    if (!((end >= 1) && (end <= i9))) {
      emlrtDynamicBoundsCheckR2012b(end, 1, i9, &md_emlrtBCI, sp);
    }

    i9 = hard_bits->size[1];
    if (!((n >= 1) && (n <= i9))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i9, &qd_emlrtBCI, sp);
    }

    hard_bits->data[n - 1] = (int8_T)(muDoubleScalarSign(soft_bits->data[n - 1])
      < 0.0);
    n++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(sp, &r6);
  emxFree_int32_T(sp, &r5);
  emxFree_boolean_T(sp, &r4);
  emxFree_real_T(sp, &prob_set_b1);
  emxFree_real_T(sp, &prob_set_b0);
  emxFree_int8_T(sp, &hard_bits);

  /*  end bit loop */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static real_T get_extrinsic_info_probability(const emlrtStack *sp, const
  coder_internal_ref_5 *strong_users, const coder_internal_ref_5 *counter, const
  coder_internal_ref_1 *C_perms, const coder_internal_ref_1 *F_int, const
  coder_internal_ref_4 *k, coder_internal_ref_5 *codeword_labels, const
  coder_internal_ref_4 *M, const coder_internal_ref_6 *mess_from_VN_to_FN, const
  coder_internal_ref_4 *eps_val_num)
{
  real_T prob_extrinsic_info;
  int32_T varargin_2;
  int32_T uu;
  emxArray_real_T *projection_index;
  emxArray_real_T *permutation_row;
  emxArray_int32_T *r2;
  emxArray_real_T *r3;
  emxArray_int8_T *b;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  int32_T i7;
  int32_T iv1[2];
  real_T u;
  int32_T loop_ub;
  int32_T b_projection_index[2];
  int32_T b_strong_users[2];
  int32_T idx;
  int32_T trueCount;
  int32_T nx;
  int32_T i8;
  real_T c_projection_index;
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
  prob_extrinsic_info = 0.0;

  /* for u = strong_users */
  varargin_2 = strong_users->contents->size[1];
  uu = 0;
  emxInit_real_T(sp, &projection_index, 2, &kd_emlrtRTEI, true);
  emxInit_real_T(sp, &permutation_row, 2, &ld_emlrtRTEI, true);
  emxInit_int32_T1(sp, &r2, 2, &jd_emlrtRTEI, true);
  emxInit_real_T1(sp, &r3, 3, &qd_emlrtRTEI, true);
  emxInit_int8_T1(sp, &b, 2, &md_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 2, &od_emlrtRTEI, true);
  emxInit_int32_T1(sp, &ii, 2, &yb_emlrtRTEI, true);
  if (0 <= varargin_2 - 1) {
    for (i7 = 0; i7 < 2; i7++) {
      iv1[i7] = strong_users->contents->size[i7];
    }
  }

  while (uu <= varargin_2 - 1) {
    i7 = strong_users->contents->size[1];
    if (!((uu + 1 >= 1) && (uu + 1 <= i7))) {
      emlrtDynamicBoundsCheckR2012b(uu + 1, 1, i7, &gd_emlrtBCI, sp);
    }

    u = strong_users->contents->data[uu];
    i7 = projection_index->size[0] * projection_index->size[1];
    projection_index->size[0] = 1;
    projection_index->size[1] = iv1[1];
    emxEnsureCapacity_real_T(sp, projection_index, i7, &id_emlrtRTEI);
    loop_ub = iv1[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      projection_index->data[i7] = u;
    }

    for (i7 = 0; i7 < 2; i7++) {
      b_projection_index[i7] = projection_index->size[i7];
    }

    for (i7 = 0; i7 < 2; i7++) {
      b_strong_users[i7] = strong_users->contents->size[i7];
    }

    if ((b_projection_index[0] != b_strong_users[0]) || (b_projection_index[1]
         != b_strong_users[1])) {
      emlrtSizeEqCheckNDR2012b(&b_projection_index[0], &b_strong_users[0],
        &i_emlrtECI, sp);
    }

    i7 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = projection_index->size[1];
    emxEnsureCapacity_boolean_T(sp, x, i7, &id_emlrtRTEI);
    loop_ub = projection_index->size[0] * projection_index->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      x->data[i7] = (projection_index->data[i7] == strong_users->contents->
                     data[i7]);
    }

    idx = x->size[1] - 1;
    trueCount = 0;
    for (nx = 0; nx <= idx; nx++) {
      if (x->data[nx]) {
        trueCount++;
      }
    }

    i7 = r2->size[0] * r2->size[1];
    r2->size[0] = 1;
    r2->size[1] = trueCount;
    emxEnsureCapacity_int32_T(sp, r2, i7, &jd_emlrtRTEI);
    trueCount = 0;
    for (nx = 0; nx <= idx; nx++) {
      if (x->data[nx]) {
        r2->data[trueCount] = nx + 1;
        trueCount++;
      }
    }

    i7 = projection_index->size[0] * projection_index->size[1];
    projection_index->size[0] = 1;
    projection_index->size[1] = r2->size[1];
    emxEnsureCapacity_real_T(sp, projection_index, i7, &kd_emlrtRTEI);
    trueCount = counter->contents->size[1];
    loop_ub = r2->size[0] * r2->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      i8 = r2->data[i7];
      if (!((i8 >= 1) && (i8 <= trueCount))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, trueCount, &hd_emlrtBCI, sp);
      }

      projection_index->data[i7] = counter->contents->data[i8 - 1];
    }

    loop_ub = C_perms->contents->size[1];
    i7 = C_perms->contents->size[0];
    i8 = F_int->contents->size[0];
    c_projection_index = k->contents;
    if (c_projection_index != (int32_T)muDoubleScalarFloor(c_projection_index))
    {
      emlrtIntegerCheckR2012b(c_projection_index, &qb_emlrtDCI, sp);
    }

    trueCount = (int32_T)c_projection_index;
    if (!((trueCount >= 1) && (trueCount <= i8))) {
      emlrtDynamicBoundsCheckR2012b(trueCount, 1, i8, &id_emlrtBCI, sp);
    }

    i8 = F_int->contents->size[1];
    if (u != (int32_T)muDoubleScalarFloor(u)) {
      emlrtIntegerCheckR2012b(u, &qb_emlrtDCI, sp);
    }

    nx = (int32_T)u;
    if (!((nx >= 1) && (nx <= i8))) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, i8, &id_emlrtBCI, sp);
    }

    c_projection_index = F_int->contents->data[(trueCount + F_int->
      contents->size[0] * (nx - 1)) - 1];
    if (c_projection_index != (int32_T)muDoubleScalarFloor(c_projection_index))
    {
      emlrtIntegerCheckR2012b(c_projection_index, &qb_emlrtDCI, sp);
    }

    trueCount = (int32_T)c_projection_index;
    if (!((trueCount >= 1) && (trueCount <= i7))) {
      emlrtDynamicBoundsCheckR2012b(trueCount, 1, i7, &fd_emlrtBCI, sp);
    }

    i7 = permutation_row->size[0] * permutation_row->size[1];
    permutation_row->size[0] = 1;
    permutation_row->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, permutation_row, i7, &ld_emlrtRTEI);
    for (i7 = 0; i7 < loop_ub; i7++) {
      permutation_row->data[permutation_row->size[0] * i7] = C_perms->
        contents->data[(trueCount + C_perms->contents->size[0] * i7) - 1];
    }

    /*  M columns */
    i7 = projection_index->size[1];
    if (!(1 <= i7)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i7, &ed_emlrtBCI, sp);
    }

    i7 = b->size[0] * b->size[1];
    b->size[0] = 1;
    c_projection_index = M->contents;
    if (!(c_projection_index >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c_projection_index, &sb_emlrtDCI, sp);
    }

    if (c_projection_index != (int32_T)muDoubleScalarFloor(c_projection_index))
    {
      emlrtIntegerCheckR2012b(c_projection_index, &rb_emlrtDCI, sp);
    }

    b->size[1] = (int32_T)c_projection_index;
    emxEnsureCapacity_int8_T1(sp, b, i7, &md_emlrtRTEI);
    c_projection_index = M->contents;
    if (!(c_projection_index >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c_projection_index, &ub_emlrtDCI, sp);
    }

    if (c_projection_index != (int32_T)muDoubleScalarFloor(c_projection_index))
    {
      emlrtIntegerCheckR2012b(c_projection_index, &tb_emlrtDCI, sp);
    }

    loop_ub = (int32_T)c_projection_index;
    for (i7 = 0; i7 < loop_ub; i7++) {
      b->data[i7] = 1;
    }

    c_projection_index = projection_index->data[0];
    i7 = projection_index->size[0] * projection_index->size[1];
    projection_index->size[0] = 1;
    projection_index->size[1] = b->size[1];
    emxEnsureCapacity_real_T(sp, projection_index, i7, &nd_emlrtRTEI);
    loop_ub = b->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      projection_index->data[projection_index->size[0] * i7] =
        c_projection_index * (real_T)b->data[b->size[0] * i7];
    }

    for (i7 = 0; i7 < 2; i7++) {
      b_strong_users[i7] = permutation_row->size[i7];
    }

    for (i7 = 0; i7 < 2; i7++) {
      b_projection_index[i7] = projection_index->size[i7];
    }

    if ((b_strong_users[0] != b_projection_index[0]) || (b_strong_users[1] !=
         b_projection_index[1])) {
      emlrtSizeEqCheckNDR2012b(&b_strong_users[0], &b_projection_index[0],
        &h_emlrtECI, sp);
    }

    st.site = &me_emlrtRSI;
    i7 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = permutation_row->size[1];
    emxEnsureCapacity_boolean_T(&st, x, i7, &od_emlrtRTEI);
    loop_ub = permutation_row->size[0] * permutation_row->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      x->data[i7] = (permutation_row->data[i7] == projection_index->data[i7]);
    }

    b_st.site = &lb_emlrtRSI;
    nx = x->size[1];
    c_st.site = &mb_emlrtRSI;
    idx = 0;
    i7 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = x->size[1];
    emxEnsureCapacity_int32_T(&c_st, ii, i7, &h_emlrtRTEI);
    d_st.site = &nb_emlrtRSI;
    overflow = ((!(1 > x->size[1])) && (x->size[1] > 2147483646));
    if (overflow) {
      e_st.site = &ob_emlrtRSI;
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
      emlrtErrorWithMessageIdR2018a(&c_st, &ge_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    if (x->size[1] == 1) {
      if (idx == 0) {
        i7 = ii->size[0] * ii->size[1];
        ii->size[0] = 1;
        ii->size[1] = 0;
        emxEnsureCapacity_int32_T(&c_st, ii, i7, &k_emlrtRTEI);
      }
    } else {
      i7 = ii->size[0] * ii->size[1];
      if (1 > idx) {
        ii->size[1] = 0;
      } else {
        ii->size[1] = idx;
      }

      emxEnsureCapacity_int32_T(&c_st, ii, i7, &k_emlrtRTEI);
    }

    i7 = codeword_labels->contents->size[0] * codeword_labels->contents->size[1];
    codeword_labels->contents->size[0] = 1;
    codeword_labels->contents->size[1] = ii->size[1];
    emxEnsureCapacity_real_T(sp, codeword_labels->contents, i7, &pd_emlrtRTEI);
    loop_ub = ii->size[0] * ii->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      codeword_labels->contents->data[i7] = ii->data[i7];
    }

    trueCount = mess_from_VN_to_FN->contents->size[2];
    i7 = mess_from_VN_to_FN->contents->size[1];
    c_projection_index = k->contents;
    if (c_projection_index != (int32_T)muDoubleScalarFloor(c_projection_index))
    {
      emlrtIntegerCheckR2012b(c_projection_index, &ob_emlrtDCI, sp);
    }

    nx = (int32_T)c_projection_index;
    if (!((nx >= 1) && (nx <= i7))) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, i7, &cd_emlrtBCI, sp);
    }

    i7 = mess_from_VN_to_FN->contents->size[0];
    if (u != (int32_T)muDoubleScalarFloor(u)) {
      emlrtIntegerCheckR2012b(u, &pb_emlrtDCI, sp);
    }

    idx = (int32_T)u;
    if (!((idx >= 1) && (idx <= i7))) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, i7, &dd_emlrtBCI, sp);
    }

    i7 = r3->size[0] * r3->size[1] * r3->size[2];
    r3->size[0] = 1;
    r3->size[1] = 1;
    r3->size[2] = codeword_labels->contents->size[1];
    emxEnsureCapacity_real_T1(sp, r3, i7, &qd_emlrtRTEI);
    loop_ub = codeword_labels->contents->size[1];
    for (i7 = 0; i7 < loop_ub; i7++) {
      c_projection_index = codeword_labels->contents->data
        [codeword_labels->contents->size[0] * i7];
      if (c_projection_index != (int32_T)muDoubleScalarFloor(c_projection_index))
      {
        emlrtIntegerCheckR2012b(c_projection_index, &vb_emlrtDCI, sp);
      }

      i8 = (int32_T)c_projection_index;
      if (!((i8 >= 1) && (i8 <= trueCount))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, trueCount, &jd_emlrtBCI, sp);
      }

      r3->data[r3->size[0] * r3->size[1] * i7] = mess_from_VN_to_FN->
        contents->data[((idx + mess_from_VN_to_FN->contents->size[0] * (nx - 1))
                        + mess_from_VN_to_FN->contents->size[0] *
                        mess_from_VN_to_FN->contents->size[1] * (i8 - 1)) - 1];
    }

    st.site = &ne_emlrtRSI;
    b_exp(&st, r3);
    st.site = &ne_emlrtRSI;
    b_st.site = &ne_emlrtRSI;
    c_projection_index = c_sum(&b_st, r3) + eps_val_num->contents;
    if (c_projection_index < 0.0) {
      b_st.site = &re_emlrtRSI;
      f_error(&b_st);
    }

    prob_extrinsic_info += muDoubleScalarLog(c_projection_index);
    uu++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(sp, &ii);
  emxFree_boolean_T(sp, &x);
  emxFree_int8_T(sp, &b);
  emxFree_real_T(sp, &r3);
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
  emxInit_creal_T1(sp, &cj, 1, &xc_emlrtRTEI, true);

  /*     %% N-dim symbol to K-dim symbol */
  i1 = C->contents->size[0];
  nrowx = C->contents->size[1];
  i2 = (int32_T)sym_index;
  if (!((i2 >= 1) && (i2 <= nrowx))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, nrowx, &bd_emlrtBCI, sp);
  }

  nrowx = cj->size[0];
  cj->size[0] = i1;
  emxEnsureCapacity_creal_T1(sp, cj, nrowx, &xc_emlrtRTEI);
  for (nrowx = 0; nrowx < i1; nrowx++) {
    cj->data[nrowx] = C->contents->data[nrowx + C->contents->size[0] * (i2 - 1)];
  }

  emxInit_real_T2(sp, &v, 1, &yc_emlrtRTEI, true);

  /*  draw N-dim. symbol from N-dim. mother-codebook */
  st.site = &nd_emlrtRSI;
  i1 = F->contents->size[0];
  nrowx = F->contents->size[1];
  i2 = (int32_T)user;
  if (!((i2 >= 1) && (i2 <= nrowx))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, nrowx, &ad_emlrtBCI, &st);
  }

  nrowx = v->size[0];
  v->size[0] = i1;
  emxEnsureCapacity_real_T2(&st, v, nrowx, &yc_emlrtRTEI);
  for (nrowx = 0; nrowx < i1; nrowx++) {
    v->data[nrowx] = F->contents->data[nrowx + F->contents->size[0] * (i2 - 1)];
  }

  emxInit_real_T(&st, &Tj, 2, &ad_emlrtRTEI, true);
  i2 = v->size[0];
  iy = v->size[0];
  nrowx = Tj->size[0] * Tj->size[1];
  Tj->size[0] = i2;
  Tj->size[1] = iy;
  emxEnsureCapacity_real_T(&st, Tj, nrowx, &ad_emlrtRTEI);
  i1 = i2 * iy;
  for (nrowx = 0; nrowx < i1; nrowx++) {
    Tj->data[nrowx] = 0.0;
  }

  b_st.site = &qd_emlrtRSI;
  overflow = ((!(1 > v->size[0])) && (v->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &ob_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i2 = 0; i2 < v->size[0]; i2++) {
    Tj->data[i2 + Tj->size[0] * i2] = v->data[i2];
  }

  emxFree_real_T(&st, &v);
  emxInit_boolean_T(&st, &y, 2, &hd_emlrtRTEI, true);

  /*  diagonal matrix from user column in F */
  st.site = &od_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  for (nrowx = 0; nrowx < 2; nrowx++) {
    outsize[nrowx] = (uint32_T)Tj->size[nrowx];
  }

  nrowx = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)outsize[1];
  emxEnsureCapacity_boolean_T(&b_st, y, nrowx, &bd_emlrtRTEI);
  i1 = (int32_T)outsize[1];
  for (nrowx = 0; nrowx < i1; nrowx++) {
    y->data[nrowx] = false;
  }

  i2 = 0;
  iy = -1;
  c_st.site = &sd_emlrtRSI;
  overflow = ((!(1 > Tj->size[1])) && (Tj->size[1] > 2147483646));
  if (overflow) {
    d_st.site = &ob_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (i = 1; i <= Tj->size[1]; i++) {
    i1 = i2;
    i2 += Tj->size[0];
    iy++;
    c_st.site = &td_emlrtRSI;
    if ((!(i1 + 1 > i2)) && (i2 > 2147483646)) {
      d_st.site = &ob_emlrtRSI;
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

  st.site = &od_emlrtRSI;
  i1 = y->size[0] * y->size[1] - 1;
  nrowx = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity_boolean_T(&st, y, nrowx, &cd_emlrtRTEI);
  for (nrowx = 0; nrowx <= i1; nrowx++) {
    y->data[nrowx] = !y->data[nrowx];
  }

  b_st.site = &ud_emlrtRSI;
  i1 = y->size[1];
  while ((i1 >= 1) && (!y->data[i1 - 1])) {
    i1--;
  }

  if (!(i1 <= Tj->size[1])) {
    emlrtErrorWithMessageIdR2018a(&b_st, &ye_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", "MATLAB:subsdeldimmismatch", 0);
  }

  b_st.site = &vd_emlrtRSI;
  nrowx = Tj->size[0];
  ncolx = Tj->size[1];
  c_st.site = &wd_emlrtRSI;
  i2 = 0;
  d_st.site = &ae_emlrtRSI;
  overflow = ((!(1 > y->size[1])) && (y->size[1] > 2147483646));
  if (overflow) {
    e_st.site = &ob_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (i1 = 1; i1 <= y->size[1]; i1++) {
    i2 += y->data[i1 - 1];
  }

  iy = Tj->size[1] - i2;
  i2 = 0;
  c_st.site = &xd_emlrtRSI;
  for (i1 = 1; i1 <= ncolx; i1++) {
    if ((i1 > y->size[1]) || (!y->data[i1 - 1])) {
      c_st.site = &yd_emlrtRSI;
      if ((!(1 > nrowx)) && (nrowx > 2147483646)) {
        d_st.site = &ob_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&b_st, &xe_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > iy) {
    i1 = 0;
  } else {
    i1 = iy;
  }

  emxInit_real_T(&b_st, &b_Tj, 2, &dd_emlrtRTEI, true);
  i2 = Tj->size[0];
  nrowx = b_Tj->size[0] * b_Tj->size[1];
  b_Tj->size[0] = i2;
  b_Tj->size[1] = i1;
  emxEnsureCapacity_real_T(&b_st, b_Tj, nrowx, &dd_emlrtRTEI);
  for (nrowx = 0; nrowx < i1; nrowx++) {
    for (iy = 0; iy < i2; iy++) {
      b_Tj->data[iy + b_Tj->size[0] * nrowx] = Tj->data[iy + Tj->size[0] * nrowx];
    }
  }

  nrowx = Tj->size[0] * Tj->size[1];
  Tj->size[0] = b_Tj->size[0];
  Tj->size[1] = b_Tj->size[1];
  emxEnsureCapacity_real_T(&b_st, Tj, nrowx, &ed_emlrtRTEI);
  i1 = b_Tj->size[1];
  for (nrowx = 0; nrowx < i1; nrowx++) {
    i2 = b_Tj->size[0];
    for (iy = 0; iy < i2; iy++) {
      Tj->data[iy + Tj->size[0] * nrowx] = b_Tj->data[iy + b_Tj->size[0] * nrowx];
    }
  }

  emxFree_real_T(&b_st, &b_Tj);

  /*  remove zero-columns and get spreading matrix */
  st.site = &pd_emlrtRSI;
  b_st.site = &be_emlrtRSI;
  if (!(Tj->size[1] == cj->size[0])) {
    if (((Tj->size[0] == 1) && (Tj->size[1] == 1)) || (cj->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &me_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &le_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_creal_T(&b_st, &c_Tj, 2, &fd_emlrtRTEI, true);
  nrowx = c_Tj->size[0] * c_Tj->size[1];
  c_Tj->size[0] = Tj->size[0];
  c_Tj->size[1] = Tj->size[1];
  emxEnsureCapacity_creal_T(&st, c_Tj, nrowx, &fd_emlrtRTEI);
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
  emxEnsureCapacity_creal_T1(&st, xj, nrowx, &gd_emlrtRTEI);
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
  coder_internal_ref_5 *length_of_each_counter, const coder_internal_ref_4
  *marginal_prob_idx_cnt, emxArray_real_T *counter)
{
  int32_T i13;
  int32_T n;
  emxArray_real_T *b_length_of_each_counter;
  int32_T i14;
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
  i13 = counter->size[1];
  n = 0;
  emxInit_real_T(sp, &b_length_of_each_counter, 2, &ae_emlrtRTEI, true);
  while (n <= i13 - 1) {
    if (1.0 + (real_T)n == 1.0) {
      i14 = counter->size[1];
      loop_ub = n + 1;
      if (!((loop_ub >= 1) && (loop_ub <= i14))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i14, &td_emlrtBCI, sp);
      }

      i14 = counter->size[1];
      loop_ub = n + 1;
      if (!((loop_ub >= 1) && (loop_ub <= i14))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i14, &vd_emlrtBCI, sp);
      }

      i14 = length_of_each_counter->contents->size[1];
      loop_ub = n + 1;
      if (!((loop_ub >= 1) && (loop_ub <= i14))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i14, &ud_emlrtBCI, sp);
      }

      counter->data[0] = b_mod(counter->data[0] + 1.0,
        length_of_each_counter->contents->data[0] + 1.0);
    } else {
      i14 = length_of_each_counter->contents->size[1];
      if (!(1 <= i14)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i14, &sd_emlrtBCI, sp);
      }

      i14 = length_of_each_counter->contents->size[1];
      loop_ub = (int32_T)((1.0 + (real_T)n) - 1.0);
      if (!((loop_ub >= 1) && (loop_ub <= i14))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i14, &rd_emlrtBCI, sp);
      }

      loop_ub = (int32_T)((1.0 + (real_T)n) - 1.0);
      i14 = b_length_of_each_counter->size[0] * b_length_of_each_counter->size[1];
      b_length_of_each_counter->size[0] = 1;
      b_length_of_each_counter->size[1] = (int32_T)((1.0 + (real_T)n) - 1.0);
      emxEnsureCapacity_real_T(sp, b_length_of_each_counter, i14, &ae_emlrtRTEI);
      for (i14 = 0; i14 < loop_ub; i14++) {
        b_length_of_each_counter->data[b_length_of_each_counter->size[0] * i14] =
          length_of_each_counter->contents->data[i14];
      }

      st.site = &se_emlrtRSI;
      x = b_mod(marginal_prob_idx_cnt->contents, prod(&st,
                 b_length_of_each_counter));
      st.site = &se_emlrtRSI;
      if (muDoubleScalarIsNaN(x)) {
        b_st.site = &te_emlrtRSI;
        g_error(&b_st);
      }

      if (!(x != 0.0)) {
        i14 = counter->size[1];
        if (!((n + 1 >= 1) && (n + 1 <= i14))) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, i14, &wd_emlrtBCI, sp);
        }

        i14 = length_of_each_counter->contents->size[1];
        if (!((n + 1 >= 1) && (n + 1 <= i14))) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, i14, &xd_emlrtBCI, sp);
        }

        i14 = counter->size[1];
        if (!((n + 1 >= 1) && (n + 1 <= i14))) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, i14, &yd_emlrtBCI, sp);
        }

        counter->data[n] = b_mod(counter->data[n] + 1.0,
          length_of_each_counter->contents->data[n] + 1.0);
      }
    }

    i14 = counter->size[1];
    if (!((n + 1 >= 1) && (n + 1 <= i14))) {
      emlrtDynamicBoundsCheckR2012b(n + 1, 1, i14, &ae_emlrtBCI, sp);
    }

    if (counter->data[n] == 0.0) {
      i14 = counter->size[1];
      if (!((n + 1 >= 1) && (n + 1 <= i14))) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, i14, &be_emlrtBCI, sp);
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

void TB_ESGA_MPA_v1_Linux(const emlrtStack *sp, const emxArray_creal_T *y_all,
  const real_T F_data[], const int32_T F_size[2], const real_T F_int_data[],
  const int32_T F_int_size[2], const creal_T C_data[], const int32_T C_size[2],
  const real_T C_perms_data[], const int32_T C_perms_size[2], const creal_T
  Aq_data[], const int32_T Aq_size[1], const boolean_T
  codewords_binary_labels_data[], const int32_T codewords_binary_labels_size[2],
  const emxArray_creal_T *H, real_T Tm, real_T r_th, const emxArray_real_T
  *a_priori_beliefs, real_T varnoise, const emxArray_struct0_T *edge_subset,
  emxArray_real_T *soft_bits, emxArray_real_T *hard_symbols)
{
  coder_internal_ref_1 F;
  int32_T i0;
  int32_T loop_ub;
  coder_internal_ref_1 F_int;
  coder_internal_ref_3 C;
  coder_internal_ref_1 C_perms;
  coder_internal_ref codewords_binary_labels;
  coder_internal_ref_4 b_r_th;
  coder_internal_ref_4 eps_val_num;
  coder_internal_ref_4 eps_val_den;
  int32_T b_loop_ub;
  int32_T K;
  coder_internal_ref_4 J;
  coder_internal_ref_4 M;
  int32_T varargin_1;
  coder_internal_ref_4 kb;
  int32_T i1;
  real_T d0;
  int32_T ns;
  coder_internal_ref_5 codeword_labels;
  coder_internal_ref_5 counter;
  coder_internal_ref_5 length_of_each_counter;
  coder_internal_ref_5 strong_users;
  coder_internal_ref_2 hk_sum;
  coder_internal_ref_5 phi_k_except_j;
  coder_internal_ref_6 mess_from_VN_to_FN;
  emxArray_real_T *mess_from_FN_to_VN;
  emxArray_real_T *vphi_j;
  emxArray_creal_T *interference_projections;
  emxArray_creal_T *h_strong_users;
  emxArray_real_T *vphi_j_except_k;
  emxArray_real_T *pmf;
  emxArray_int8_T *r0;
  emxArray_real_T *r1;
  emxArray_real_T *x;
  emxArray_int32_T *ii;
  emxArray_real_T *b_varargin_1;
  emxArray_int32_T *b_ii;
  emxArray_creal_T *b_x;
  emxArray_boolean_T *c_x;
  emxArray_real_T *c_varargin_1;
  emxArray_real_T *b_mess_from_VN_to_FN;
  emxArray_real_T *b_mess_from_FN_to_VN;
  emxArray_int32_T *b_vphi_j_except_k;
  emxArray_int32_T *c_vphi_j_except_k;
  emxArray_int32_T *b_counter;
  int32_T j;
  int32_T c_loop_ub;
  int32_T i2;
  int32_T maxdimlen;
  int32_T i;
  creal_T y_data[3200];
  int32_T t;
  int32_T nx;
  int32_T k;
  int32_T idx;
  coder_internal_ref_4 b_k;
  boolean_T overflow;
  boolean_T exitg1;
  int32_T a_priori_beliefs_size[2];
  int32_T k1;
  int32_T b_a_priori_beliefs[2];
  int32_T b_j1;
  coder_internal_ref_4 b_j;
  int32_T ib_size[1];
  int32_T iv0[3];
  real_T a_priori_beliefs_data[40];
  int32_T vlen;
  real_T cte_norm;
  real_T antennas_to_mix_data[20];
  int32_T y_size[2];
  int32_T b_antennas_to_mix_data[20];
  creal_T y_mixed;
  creal_T b_y_data[20];
  int32_T H_size[3];
  int32_T b_H_size[3];
  creal_T H_data[1600];
  creal_T tmp_data[80];
  real_T max_temp_0;
  creal_T interference;
  real_T pdf_exp_cte;
  real_T pdf_scaling_cte;
  real_T hk_sum_im;
  real_T yk_fix_re;
  real_T yk_fix_im;
  coder_internal_ref_4 marginal_prob_idx_cnt;
  real_T re;
  boolean_T guard1 = false;
  real_T im;
  int32_T exitg2;
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
  d_emxInitStruct_coder_internal_(sp, &F, &ub_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  i0 = F.contents->size[0] * F.contents->size[1];
  F.contents->size[0] = F_size[0];
  F.contents->size[1] = F_size[1];
  emxEnsureCapacity_real_T(&st, F.contents, i0, &emlrtRTEI);
  loop_ub = F_size[0] * F_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    F.contents->data[i0] = F_data[i0];
  }

  d_emxInitStruct_coder_internal_(&st, &F_int, &ub_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  i0 = F_int.contents->size[0] * F_int.contents->size[1];
  F_int.contents->size[0] = F_int_size[0];
  F_int.contents->size[1] = F_int_size[1];
  emxEnsureCapacity_real_T(&st, F_int.contents, i0, &emlrtRTEI);
  loop_ub = F_int_size[0] * F_int_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    F_int.contents->data[i0] = F_int_data[i0];
  }

  e_emxInitStruct_coder_internal_(&st, &C, &ub_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  i0 = C.contents->size[0] * C.contents->size[1];
  C.contents->size[0] = C_size[0];
  C.contents->size[1] = C_size[1];
  emxEnsureCapacity_creal_T(&st, C.contents, i0, &emlrtRTEI);
  loop_ub = C_size[0] * C_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    C.contents->data[i0] = C_data[i0];
  }

  d_emxInitStruct_coder_internal_(&st, &C_perms, &ub_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  i0 = C_perms.contents->size[0] * C_perms.contents->size[1];
  C_perms.contents->size[0] = C_perms_size[0];
  C_perms.contents->size[1] = C_perms_size[1];
  emxEnsureCapacity_real_T(&st, C_perms.contents, i0, &emlrtRTEI);
  loop_ub = C_perms_size[0] * C_perms_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    C_perms.contents->data[i0] = C_perms_data[i0];
  }

  c_emxInitStruct_coder_internal_(&st, &codewords_binary_labels, &ub_emlrtRTEI,
    true);
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
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

  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  b_r_th.contents = r_th;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &fb_emlrtRSI;

  /* TB_ESGA_MPA_Many_Rx_v0 Summary of this function goes here */
  /*    v1 test for best selection of combined channel gains */
  /*  */
  eps_val_num.contents = 1.0E-50;

  /*  avoid log(0) */
  eps_val_den.contents = 1.0E-50;

  /*  avoid division by zero */
  /*  */
  /*  a_priori_beliefs: J x M x Ns matrix with a priory beliefs of each symbol */
  /*  other variables: defined in main_file */
  /*  read dimensions */
  b_loop_ub = F.contents->size[1];
  K = F.contents->size[0];
  J.contents = b_loop_ub;
  i0 = C.contents->size[1];
  M.contents = i0;
  varargin_1 = Aq_size[0];
  st.site = &b_emlrtRSI;
  kb.contents = b_log2(&st, i0);

  /*  buffers */
  i1 = soft_bits->size[0] * soft_bits->size[1] * soft_bits->size[2];
  soft_bits->size[0] = b_loop_ub;
  d0 = kb.contents;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &m_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &l_emlrtDCI, sp);
  }

  soft_bits->size[1] = (int32_T)d0;
  soft_bits->size[2] = y_all->size[2];
  emxEnsureCapacity_real_T1(sp, soft_bits, i1, &b_emlrtRTEI);
  d0 = kb.contents;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &s_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &r_emlrtDCI, sp);
  }

  loop_ub = b_loop_ub * (int32_T)d0 * y_all->size[2];
  for (i1 = 0; i1 < loop_ub; i1++) {
    soft_bits->data[i1] = 0.0;
  }

  i1 = hard_symbols->size[0] * hard_symbols->size[1];
  hard_symbols->size[0] = b_loop_ub;
  hard_symbols->size[1] = y_all->size[2];
  emxEnsureCapacity_real_T(sp, hard_symbols, i1, &c_emlrtRTEI);
  loop_ub = b_loop_ub * y_all->size[2];
  for (i1 = 0; i1 < loop_ub; i1++) {
    hard_symbols->data[i1] = 0.0;
  }

  /* ------------------------------------------------------------------------------------------- */
  /*  MPA starts HERE */
  /* ------------------------------------------------------------------------------------------- */
  /*  Ns runs of the MPA */
  ns = 0;
  f_emxInitStruct_coder_internal_(sp, &codeword_labels, &pb_emlrtRTEI, true);
  f_emxInitStruct_coder_internal_(sp, &counter, &jb_emlrtRTEI, true);
  f_emxInitStruct_coder_internal_(sp, &length_of_each_counter, &hb_emlrtRTEI,
    true);
  f_emxInitStruct_coder_internal_(sp, &strong_users, &vb_emlrtRTEI, true);
  g_emxInitStruct_coder_internal_(sp, &hk_sum, &fb_emlrtRTEI, true);
  f_emxInitStruct_coder_internal_(sp, &phi_k_except_j, &r_emlrtRTEI, true);
  h_emxInitStruct_coder_internal_(sp, &mess_from_VN_to_FN, &f_emlrtRTEI, true);
  emxInit_real_T1(sp, &mess_from_FN_to_VN, 3, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &vphi_j, 2, &l_emlrtRTEI, true);
  emxInit_creal_T1(sp, &interference_projections, 1, &mb_emlrtRTEI, true);
  emxInit_creal_T1(sp, &h_strong_users, 1, &nb_emlrtRTEI, true);
  emxInit_real_T(sp, &vphi_j_except_k, 2, &wb_emlrtRTEI, true);
  emxInit_real_T(sp, &pmf, 2, &xb_emlrtRTEI, true);
  emxInit_int8_T(sp, &r0, 3, &ub_emlrtRTEI, true);
  emxInit_real_T1(sp, &r1, 3, &ab_emlrtRTEI, true);
  emxInit_real_T2(sp, &x, 1, &j_emlrtRTEI, true);
  emxInit_int32_T(sp, &ii, 1, &yb_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_varargin_1, 3, &y_emlrtRTEI, true);
  emxInit_int32_T1(sp, &b_ii, 2, &yb_emlrtRTEI, true);
  emxInit_creal_T(sp, &b_x, 2, &ac_emlrtRTEI, true);
  emxInit_boolean_T(sp, &c_x, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(sp, &c_varargin_1, 2, &kb_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_mess_from_VN_to_FN, 3, &s_emlrtRTEI, true);
  emxInit_real_T2(sp, &b_mess_from_FN_to_VN, 1, &w_emlrtRTEI, true);
  emxInit_int32_T1(sp, &b_vphi_j_except_k, 2, &t_emlrtRTEI, true);
  emxInit_int32_T1(sp, &c_vphi_j_except_k, 2, &t_emlrtRTEI, true);
  emxInit_int32_T(sp, &b_counter, 1, &ob_emlrtRTEI, true);
  while (ns <= y_all->size[2] - 1) {
    /*  for each packet */
    /*     %% initialize the messages of packet ns */
    i1 = mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] *
      mess_from_FN_to_VN->size[2];
    mess_from_FN_to_VN->size[0] = K;
    if (!(b_loop_ub >= 0)) {
      emlrtNonNegativeCheckR2012b(b_loop_ub, &n_emlrtDCI, sp);
    }

    mess_from_FN_to_VN->size[1] = b_loop_ub;
    if (!(i0 >= 0)) {
      emlrtNonNegativeCheckR2012b(i0, &o_emlrtDCI, sp);
    }

    mess_from_FN_to_VN->size[2] = i0;
    emxEnsureCapacity_real_T1(sp, mess_from_FN_to_VN, i1, &d_emlrtRTEI);
    if (!(b_loop_ub >= 0)) {
      emlrtNonNegativeCheckR2012b(b_loop_ub, &t_emlrtDCI, sp);
    }

    if (!(i0 >= 0)) {
      emlrtNonNegativeCheckR2012b(i0, &t_emlrtDCI, sp);
    }

    loop_ub = K * b_loop_ub * i0;
    for (i1 = 0; i1 < loop_ub; i1++) {
      mess_from_FN_to_VN->data[i1] = 0.0;
    }

    i1 = r0->size[0] * r0->size[1] * r0->size[2];
    if (!(b_loop_ub >= 0)) {
      emlrtNonNegativeCheckR2012b(b_loop_ub, &p_emlrtDCI, sp);
    }

    r0->size[0] = b_loop_ub;
    r0->size[1] = K;
    if (!(i0 >= 0)) {
      emlrtNonNegativeCheckR2012b(i0, &q_emlrtDCI, sp);
    }

    r0->size[2] = i0;
    emxEnsureCapacity_int8_T(sp, r0, i1, &e_emlrtRTEI);
    if (!(b_loop_ub >= 0)) {
      emlrtNonNegativeCheckR2012b(b_loop_ub, &u_emlrtDCI, sp);
    }

    if (!(i0 >= 0)) {
      emlrtNonNegativeCheckR2012b(i0, &u_emlrtDCI, sp);
    }

    loop_ub = b_loop_ub * K * i0;
    for (i1 = 0; i1 < loop_ub; i1++) {
      r0->data[i1] = 0;
    }

    i1 = mess_from_VN_to_FN.contents->size[0] *
      mess_from_VN_to_FN.contents->size[1] * mess_from_VN_to_FN.contents->size[2];
    mess_from_VN_to_FN.contents->size[0] = r0->size[0];
    mess_from_VN_to_FN.contents->size[1] = r0->size[1];
    mess_from_VN_to_FN.contents->size[2] = r0->size[2];
    emxEnsureCapacity_real_T1(sp, mess_from_VN_to_FN.contents, i1, &f_emlrtRTEI);
    loop_ub = r0->size[0] * r0->size[1] * r0->size[2];
    for (i1 = 0; i1 < loop_ub; i1++) {
      mess_from_VN_to_FN.contents->data[i1] = r0->data[i1];
    }

    emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_loop_ub, mxDOUBLE_CLASS, b_loop_ub,
      &be_emlrtRTEI, sp);
    j = 0;
    while (j <= b_loop_ub - 1) {
      /*  for each user */
      st.site = &c_emlrtRSI;
      loop_ub = F.contents->size[0];
      i1 = F.contents->size[1];
      if (!((j + 1 >= 1) && (j + 1 <= i1))) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, &emlrtBCI, &st);
      }

      maxdimlen = j + 1;
      i1 = vphi_j->size[0] * vphi_j->size[1];
      vphi_j->size[0] = 1;
      vphi_j->size[1] = loop_ub;
      emxEnsureCapacity_real_T(&st, vphi_j, i1, &g_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        vphi_j->data[vphi_j->size[0] * i1] = F.contents->data[i1 +
          F.contents->size[0] * (maxdimlen - 1)];
      }

      b_st.site = &lb_emlrtRSI;
      nx = vphi_j->size[1];
      c_st.site = &mb_emlrtRSI;
      idx = 0;
      i1 = b_ii->size[0] * b_ii->size[1];
      b_ii->size[0] = 1;
      b_ii->size[1] = vphi_j->size[1];
      emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &h_emlrtRTEI);
      d_st.site = &nb_emlrtRSI;
      overflow = ((!(1 > vphi_j->size[1])) && (vphi_j->size[1] > 2147483646));
      if (overflow) {
        e_st.site = &ob_emlrtRSI;
        check_forloop_overflow_error(&e_st);
      }

      maxdimlen = 1;
      exitg1 = false;
      while ((!exitg1) && (maxdimlen <= nx)) {
        if (vphi_j->data[maxdimlen - 1] != 0.0) {
          idx++;
          b_ii->data[idx - 1] = maxdimlen;
          if (idx >= nx) {
            exitg1 = true;
          } else {
            maxdimlen++;
          }
        } else {
          maxdimlen++;
        }
      }

      if (!(idx <= vphi_j->size[1])) {
        emlrtErrorWithMessageIdR2018a(&c_st, &ge_emlrtRTEI,
          "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
      }

      if (vphi_j->size[1] == 1) {
        if (idx == 0) {
          i1 = b_ii->size[0] * b_ii->size[1];
          b_ii->size[0] = 1;
          b_ii->size[1] = 0;
          emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &k_emlrtRTEI);
        }
      } else {
        i1 = b_ii->size[0] * b_ii->size[1];
        if (1 > idx) {
          b_ii->size[1] = 0;
        } else {
          b_ii->size[1] = idx;
        }

        emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &k_emlrtRTEI);
      }

      i1 = vphi_j->size[0] * vphi_j->size[1];
      vphi_j->size[0] = 1;
      vphi_j->size[1] = b_ii->size[1];
      emxEnsureCapacity_real_T(&st, vphi_j, i1, &l_emlrtRTEI);
      loop_ub = b_ii->size[0] * b_ii->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        vphi_j->data[i1] = b_ii->data[i1];
      }

      /*  subcarrier set associated with user j */
      /* for k = vphi_j % this type of loop does not work when using C-Coder for Mex files */
      if (0 <= vphi_j->size[1] - 1) {
        a_priori_beliefs_size[0] = 1;
      }

      k1 = 0;
      while (k1 <= vphi_j->size[1] - 1) {
        /*  for each subcarrier of user j */
        i1 = vphi_j->size[1];
        i2 = k1 + 1;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &b_emlrtBCI, sp);
        }

        b_k.contents = (int32_T)vphi_j->data[k1];

        /*  actual index of subcarrier */
        i1 = mess_from_VN_to_FN.contents->size[0];
        if (!((j + 1 >= 1) && (j + 1 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(j + 1, 1, i1, &e_emlrtBCI, sp);
        }

        i1 = mess_from_VN_to_FN.contents->size[1];
        i2 = (int32_T)b_k.contents;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &f_emlrtBCI, sp);
        }

        i1 = i2 - 1;
        loop_ub = mess_from_VN_to_FN.contents->size[2];
        i2 = ii->size[0];
        ii->size[0] = loop_ub;
        emxEnsureCapacity_int32_T1(sp, ii, i2, &m_emlrtRTEI);
        for (i2 = 0; i2 < loop_ub; i2++) {
          ii->data[i2] = i2;
        }

        i2 = a_priori_beliefs->size[0];
        i = j + 1;
        if (!((i >= 1) && (i <= i2))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i2, &c_emlrtBCI, sp);
        }

        i2 = a_priori_beliefs->size[2];
        i = ns + 1;
        if (!((i >= 1) && (i <= i2))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i2, &d_emlrtBCI, sp);
        }

        iv0[0] = 1;
        iv0[1] = 1;
        iv0[2] = ii->size[0];
        i2 = a_priori_beliefs->size[1];
        a_priori_beliefs_size[1] = i2;
        for (i2 = 0; i2 < 2; i2++) {
          b_a_priori_beliefs[i2] = a_priori_beliefs_size[i2];
        }

        emlrtSubAssignSizeCheckR2012b(&iv0[0], 3, &b_a_priori_beliefs[0], 2,
          &emlrtECI, sp);
        loop_ub = a_priori_beliefs->size[1];
        for (i2 = 0; i2 < loop_ub; i2++) {
          a_priori_beliefs_data[i2] = a_priori_beliefs->data[(j +
            a_priori_beliefs->size[0] * i2) + a_priori_beliefs->size[0] *
            a_priori_beliefs->size[1] * ns];
        }

        idx = ii->size[0];
        for (i2 = 0; i2 < idx; i2++) {
          mess_from_VN_to_FN.contents->data[(j +
            mess_from_VN_to_FN.contents->size[0] * i1) +
            mess_from_VN_to_FN.contents->size[0] *
            mess_from_VN_to_FN.contents->size[1] * ii->data[i2]] =
            a_priori_beliefs_data[i2];
        }

        /*  read a priori log-PMF of symbols in packet ns */
        k1++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    loop_ub = y_all->size[0];
    c_loop_ub = y_all->size[1];
    i1 = y_all->size[2];
    i2 = 1 + ns;
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &g_emlrtBCI, sp);
    }

    for (i1 = 0; i1 < c_loop_ub; i1++) {
      for (i = 0; i < loop_ub; i++) {
        y_data[i + loop_ub * i1] = y_all->data[(i + y_all->size[0] * i1) +
          y_all->size[0] * y_all->size[1] * (i2 - 1)];
      }
    }

    /*  current received signal in packet ns (matrix size: K x Nr :: "subcarriers" x "Rx antennas") */
    /*     %% MPA iterations for fixed packet ns */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, Tm, mxDOUBLE_CLASS, (int32_T)Tm,
      &ce_emlrtRTEI, sp);
    t = 0;
    while (t <= (int32_T)Tm - 1) {
      /*  iterations 1, ..., Tm of the MPA */
      /*         %% FNs message update */
      k = 0;
      while (k <= K - 1) {
        b_k.contents = 1.0 + (real_T)k;

        /*  for every FN */
        st.site = &d_emlrtRSI;
        c_loop_ub = F.contents->size[1];
        i1 = F.contents->size[0];
        idx = k + 1;
        if (!((idx >= 1) && (idx <= i1))) {
          emlrtDynamicBoundsCheckR2012b(idx, 1, i1, &h_emlrtBCI, &st);
        }

        i1 = vphi_j->size[0] * vphi_j->size[1];
        vphi_j->size[0] = 1;
        vphi_j->size[1] = c_loop_ub;
        emxEnsureCapacity_real_T(&st, vphi_j, i1, &i_emlrtRTEI);
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          vphi_j->data[vphi_j->size[0] * i1] = F.contents->data[(idx +
            F.contents->size[0] * i1) - 1];
        }

        b_st.site = &lb_emlrtRSI;
        nx = vphi_j->size[1];
        c_st.site = &mb_emlrtRSI;
        idx = 0;
        i1 = b_ii->size[0] * b_ii->size[1];
        b_ii->size[0] = 1;
        b_ii->size[1] = vphi_j->size[1];
        emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &h_emlrtRTEI);
        d_st.site = &nb_emlrtRSI;
        overflow = ((!(1 > vphi_j->size[1])) && (vphi_j->size[1] > 2147483646));
        if (overflow) {
          e_st.site = &ob_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        maxdimlen = 1;
        exitg1 = false;
        while ((!exitg1) && (maxdimlen <= nx)) {
          if (vphi_j->data[maxdimlen - 1] != 0.0) {
            idx++;
            b_ii->data[idx - 1] = maxdimlen;
            if (idx >= nx) {
              exitg1 = true;
            } else {
              maxdimlen++;
            }
          } else {
            maxdimlen++;
          }
        }

        if (!(idx <= vphi_j->size[1])) {
          emlrtErrorWithMessageIdR2018a(&c_st, &ge_emlrtRTEI,
            "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed",
            0);
        }

        if (vphi_j->size[1] == 1) {
          if (idx == 0) {
            i1 = b_ii->size[0] * b_ii->size[1];
            b_ii->size[0] = 1;
            b_ii->size[1] = 0;
            emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &k_emlrtRTEI);
          }
        } else {
          i1 = b_ii->size[0] * b_ii->size[1];
          if (1 > idx) {
            b_ii->size[1] = 0;
          } else {
            b_ii->size[1] = idx;
          }

          emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &k_emlrtRTEI);
        }

        i1 = vphi_j_except_k->size[0] * vphi_j_except_k->size[1];
        vphi_j_except_k->size[0] = 1;
        vphi_j_except_k->size[1] = b_ii->size[1];
        emxEnsureCapacity_real_T(&st, vphi_j_except_k, i1, &n_emlrtRTEI);
        c_loop_ub = b_ii->size[0] * b_ii->size[1];
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          vphi_j_except_k->data[i1] = b_ii->data[i1];
        }

        /*  user indexes spreading over FN k */
        /* for j = phi_k % for every VN connected to FN k */
        b_j1 = 0;
        while (b_j1 <= vphi_j_except_k->size[1] - 1) {
          i1 = vphi_j_except_k->size[1];
          i2 = b_j1 + 1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &i_emlrtBCI, sp);
          }

          b_j.contents = (int32_T)vphi_j_except_k->data[b_j1];

          /*  actual VN index */
          st.site = &e_emlrtRSI;
          b_st.site = &pb_emlrtRSI;
          c_st.site = &qb_emlrtRSI;
          do_vectors(&c_st, vphi_j_except_k, (int32_T)vphi_j_except_k->data[b_j1],
                     vphi_j, ii, ib_size);
          i1 = phi_k_except_j.contents->size[0] * phi_k_except_j.contents->size
            [1];
          phi_k_except_j.contents->size[0] = 1;
          phi_k_except_j.contents->size[1] = vphi_j->size[1];
          emxEnsureCapacity_real_T(sp, phi_k_except_j.contents, i1, &r_emlrtRTEI);
          c_loop_ub = vphi_j->size[0] * vphi_j->size[1];
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            phi_k_except_j.contents->data[i1] = vphi_j->data[i1];
          }

          /*  VNs connected to FN k except VN j */
          i1 = b_ii->size[0] * b_ii->size[1];
          b_ii->size[0] = 1;
          b_ii->size[1] = vphi_j_except_k->size[1];
          emxEnsureCapacity_int32_T(sp, b_ii, i1, &t_emlrtRTEI);
          c_loop_ub = vphi_j_except_k->size[1];
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            b_ii->data[b_ii->size[0] * i1] = (int32_T)vphi_j_except_k->
              data[vphi_j_except_k->size[0] * i1];
          }

          i1 = edge_subset->size[0];
          i2 = b_ii->data[b_j1];
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lc_emlrtBCI, sp);
          }

          i1 = edge_subset->size[1];
          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &y_emlrtDCI, sp);
          }

          i = (int32_T)d0;
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &lc_emlrtBCI, sp);
          }

          nx = edge_subset->data[(i2 + edge_subset->size[0] * (i - 1)) - 1].
            best_subset.size[0];
          i1 = b_ii->size[0] * b_ii->size[1];
          b_ii->size[0] = 1;
          b_ii->size[1] = vphi_j_except_k->size[1];
          emxEnsureCapacity_int32_T(sp, b_ii, i1, &t_emlrtRTEI);
          c_loop_ub = vphi_j_except_k->size[1];
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            b_ii->data[b_ii->size[0] * i1] = (int32_T)vphi_j_except_k->
              data[vphi_j_except_k->size[0] * i1];
          }

          i1 = edge_subset->size[0];
          i2 = b_ii->data[b_j1];
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &lc_emlrtBCI, sp);
          }

          i1 = edge_subset->size[1];
          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &y_emlrtDCI, sp);
          }

          i = (int32_T)d0;
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &lc_emlrtBCI, sp);
          }

          vlen = edge_subset->data[(i2 + edge_subset->size[0] * (i - 1)) - 1].
            best_subset.size[1];
          i1 = b_ii->size[0] * b_ii->size[1];
          b_ii->size[0] = 1;
          b_ii->size[1] = vphi_j_except_k->size[1];
          emxEnsureCapacity_int32_T(sp, b_ii, i1, &t_emlrtRTEI);
          c_loop_ub = vphi_j_except_k->size[1];
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            b_ii->data[b_ii->size[0] * i1] = (int32_T)vphi_j_except_k->
              data[vphi_j_except_k->size[0] * i1];
          }

          i1 = b_vphi_j_except_k->size[0] * b_vphi_j_except_k->size[1];
          b_vphi_j_except_k->size[0] = 1;
          b_vphi_j_except_k->size[1] = vphi_j_except_k->size[1];
          emxEnsureCapacity_int32_T(sp, b_vphi_j_except_k, i1, &t_emlrtRTEI);
          c_loop_ub = vphi_j_except_k->size[1];
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            b_vphi_j_except_k->data[b_vphi_j_except_k->size[0] * i1] = (int32_T)
              vphi_j_except_k->data[vphi_j_except_k->size[0] * i1];
          }

          i1 = c_vphi_j_except_k->size[0] * c_vphi_j_except_k->size[1];
          c_vphi_j_except_k->size[0] = 1;
          c_vphi_j_except_k->size[1] = vphi_j_except_k->size[1];
          emxEnsureCapacity_int32_T(sp, c_vphi_j_except_k, i1, &t_emlrtRTEI);
          c_loop_ub = vphi_j_except_k->size[1];
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            c_vphi_j_except_k->data[c_vphi_j_except_k->size[0] * i1] = (int32_T)
              vphi_j_except_k->data[vphi_j_except_k->size[0] * i1];
          }

          i1 = edge_subset->size[0];
          i2 = b_vphi_j_except_k->data[b_j1];
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &mc_emlrtBCI, sp);
          }

          i1 = edge_subset->size[1];
          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &ab_emlrtDCI, sp);
          }

          i = (int32_T)d0;
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &mc_emlrtBCI, sp);
          }

          i1 = edge_subset->size[0];
          idx = c_vphi_j_except_k->data[b_j1];
          if (!((idx >= 1) && (idx <= i1))) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, i1, &mc_emlrtBCI, sp);
          }

          i1 = edge_subset->size[1];
          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &ab_emlrtDCI, sp);
          }

          maxdimlen = (int32_T)d0;
          if (!((maxdimlen >= 1) && (maxdimlen <= i1))) {
            emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i1, &mc_emlrtBCI, sp);
          }

          c_loop_ub = edge_subset->data[(i2 + edge_subset->size[0] * (i - 1)) -
            1].best_subset.size[0] * edge_subset->data[(idx + edge_subset->size
            [0] * (maxdimlen - 1)) - 1].best_subset.size[1];
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            i2 = edge_subset->size[0];
            i = b_ii->data[b_j1];
            if (!((i >= 1) && (i <= i2))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i2, &lc_emlrtBCI, sp);
            }

            i2 = edge_subset->size[1];
            d0 = 1.0 + (real_T)k;
            if (d0 != (int32_T)d0) {
              emlrtIntegerCheckR2012b(d0, &y_emlrtDCI, sp);
            }

            idx = (int32_T)d0;
            if (!((idx >= 1) && (idx <= i2))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, i2, &lc_emlrtBCI, sp);
            }

            antennas_to_mix_data[i1] = edge_subset->data[(i + edge_subset->size
              [0] * (idx - 1)) - 1].best_subset.data[i1];
          }

          i1 = y_all->size[0];
          i2 = y_all->size[1];
          for (i = 0; i < vlen; i++) {
            for (idx = 0; idx < nx; idx++) {
              d0 = antennas_to_mix_data[idx + nx * i];
              if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
                emlrtIntegerCheckR2012b(d0, &v_emlrtDCI, sp);
              }

              maxdimlen = (int32_T)d0;
              if (!((maxdimlen >= 1) && (maxdimlen <= i2))) {
                emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i2, &ec_emlrtBCI, sp);
              }

              b_antennas_to_mix_data[idx + nx * i] = maxdimlen;
            }
          }

          maxdimlen = nx * vlen;
          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &emlrtDCI, sp);
          }

          i2 = (int32_T)d0;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &j_emlrtBCI, sp);
          }

          y_size[0] = 1;
          y_size[1] = maxdimlen;
          for (i1 = 0; i1 < maxdimlen; i1++) {
            b_y_data[i1] = y_data[((k + 1) + loop_ub *
              (b_antennas_to_mix_data[i1] - 1)) - 1];
          }

          st.site = &f_emlrtRSI;
          y_mixed = sum(&st, b_y_data, y_size);
          if ((nx == 0) || (vlen == 0)) {
            maxdimlen = 0;
          } else {
            maxdimlen = vlen;
          }

          if (maxdimlen == 1) {
            c_loop_ub = H->size[1];
            maxdimlen = H->size[2];
            for (i1 = 0; i1 < vlen; i1++) {
              for (i2 = 0; i2 < nx; i2++) {
                i = (int32_T)antennas_to_mix_data[i2 + nx * i1];
                if (!((i >= 1) && (i <= maxdimlen))) {
                  emlrtDynamicBoundsCheckR2012b(i, 1, maxdimlen, &gc_emlrtBCI,
                    sp);
                }

                b_antennas_to_mix_data[i2 + nx * i1] = i;
              }
            }

            maxdimlen = nx * vlen;
            d0 = 1.0 + (real_T)k;
            if (d0 != (int32_T)d0) {
              emlrtIntegerCheckR2012b(d0, &b_emlrtDCI, sp);
            }

            i1 = H->size[0];
            idx = (int32_T)d0;
            if (!((idx >= 1) && (idx <= i1))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, i1, &k_emlrtBCI, sp);
            }

            b_H_size[0] = 1;
            b_H_size[1] = c_loop_ub;
            b_H_size[2] = maxdimlen;
            for (i1 = 0; i1 < maxdimlen; i1++) {
              for (i2 = 0; i2 < c_loop_ub; i2++) {
                H_data[i2 + c_loop_ub * i1] = H->data[((idx + H->size[0] * i2) +
                  H->size[0] * H->size[1] * (b_antennas_to_mix_data[i1] - 1)) -
                  1];
              }
            }

            st.site = &g_emlrtRSI;
            squeeze(&st, H_data, b_H_size, b_x);
            st.site = &g_emlrtRSI;
            nx = b_x->size[0] * b_x->size[1];
            b_st.site = &gc_emlrtRSI;
            c_st.site = &ic_emlrtRSI;
            assertValidSizeArg(&c_st, b_loop_ub);
            maxdimlen = b_x->size[0];
            if (b_x->size[1] > b_x->size[0]) {
              maxdimlen = b_x->size[1];
            }

            maxdimlen = muIntScalarMax_sint32(nx, maxdimlen);
            if (b_loop_ub > maxdimlen) {
              b_st.site = &hc_emlrtRSI;
              c_error(&b_st);
            }

            if (1 > maxdimlen) {
              b_st.site = &hc_emlrtRSI;
              c_error(&b_st);
            }

            if (!(b_loop_ub >= 0)) {
              emlrtErrorWithMessageIdR2018a(&st, &je_emlrtRTEI,
                "MATLAB:checkDimCommon:nonnegativeSize",
                "MATLAB:checkDimCommon:nonnegativeSize", 0);
            }

            if (b_loop_ub != nx) {
              emlrtErrorWithMessageIdR2018a(&st, &ke_emlrtRTEI,
                "Coder:MATLAB:getReshapeDims_notSameNumel",
                "Coder:MATLAB:getReshapeDims_notSameNumel", 0);
            }

            i1 = hk_sum.contents->size[0];
            hk_sum.contents->size[0] = b_loop_ub;
            emxEnsureCapacity_creal_T1(sp, hk_sum.contents, i1, &fb_emlrtRTEI);
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              hk_sum.contents->data[i1] = b_x->data[i1];
            }
          } else {
            c_loop_ub = H->size[1];
            maxdimlen = H->size[2];
            for (i1 = 0; i1 < vlen; i1++) {
              for (i2 = 0; i2 < nx; i2++) {
                i = (int32_T)antennas_to_mix_data[i2 + nx * i1];
                if (!((i >= 1) && (i <= maxdimlen))) {
                  emlrtDynamicBoundsCheckR2012b(i, 1, maxdimlen, &fc_emlrtBCI,
                    sp);
                }

                b_antennas_to_mix_data[i2 + nx * i1] = i;
              }
            }

            maxdimlen = nx * vlen;
            d0 = 1.0 + (real_T)k;
            if (d0 != (int32_T)d0) {
              emlrtIntegerCheckR2012b(d0, &c_emlrtDCI, sp);
            }

            i1 = H->size[0];
            idx = (int32_T)d0;
            if (!((idx >= 1) && (idx <= i1))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, i1, &l_emlrtBCI, sp);
            }

            H_size[0] = 1;
            H_size[1] = c_loop_ub;
            H_size[2] = maxdimlen;
            for (i1 = 0; i1 < maxdimlen; i1++) {
              for (i2 = 0; i2 < c_loop_ub; i2++) {
                H_data[i2 + c_loop_ub * i1] = H->data[((idx + H->size[0] * i2) +
                  H->size[0] * H->size[1] * (b_antennas_to_mix_data[i1] - 1)) -
                  1];
              }
            }

            st.site = &h_emlrtRSI;
            squeeze(&st, H_data, H_size, b_x);
            st.site = &h_emlrtRSI;
            b_sum(b_x, tmp_data, ib_size);
            i1 = hk_sum.contents->size[0];
            hk_sum.contents->size[0] = ib_size[0];
            emxEnsureCapacity_creal_T1(sp, hk_sum.contents, i1, &bb_emlrtRTEI);
            c_loop_ub = ib_size[0];
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              hk_sum.contents->data[i1] = tmp_data[i1];
            }
          }

          k1 = 0;
          while (k1 <= varargin_1 - 1) {
            /*  reading all possible Projections of the codebook of user_j @ (resource k) */
            max_temp_0 = rtMinusInf;

            /*  initial result of max^star operation */
            st.site = &i_emlrtRSI;
            find_strong_and_weak_users(&st, &J, &b_j, &hk_sum, &F, &b_k, &b_r_th,
              &phi_k_except_j, strong_users.contents, vphi_j);

            /*  identify strong and weak users w.r.t. channel gain of user j in (FN k, Rx antenna nr) */
            st.site = &j_emlrtRSI;
            gaussian_approximation(&st, &C, &F, &hk_sum, &M, &b_k,
              &mess_from_VN_to_FN, vphi_j, &interference, &cte_norm);

            /*  Gaussian approx. of weak-users inteference (get mean and variance to modify effective noise) */
            pdf_exp_cte = -0.5 * (1.0 / (cte_norm + varnoise));

            /*  scaling factor in the exponent of the Gaussian pdf :: (the 1/2 constant does not matter too much) */
            cte_norm += varnoise;
            st.site = &k_emlrtRSI;
            b_sqrt(&st, &cte_norm);
            pdf_scaling_cte = 0.15915494309189535 / cte_norm;

            /*  scaling factor of the Gaussina pdf :: (the 2*pi constant does not matter too much) */
            i1 = hk_sum.contents->size[0];
            i2 = (int32_T)b_j.contents;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &nc_emlrtBCI, sp);
            }

            i1 = 1 + k1;
            if (!((i1 >= 1) && (i1 <= Aq_size[0]))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, Aq_size[0], &oc_emlrtBCI, sp);
            }

            i = hk_sum.contents->size[0];
            idx = (int32_T)b_j.contents;
            if (!((idx >= 1) && (idx <= i))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, i, &nc_emlrtBCI, sp);
            }

            i = 1 + k1;
            if (!((i >= 1) && (i <= Aq_size[0]))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, Aq_size[0], &oc_emlrtBCI, sp);
            }

            cte_norm = hk_sum.contents->data[i2 - 1].re * Aq_data[i1 - 1].re -
              hk_sum.contents->data[idx - 1].im * Aq_data[i - 1].im;
            i1 = hk_sum.contents->size[0];
            i2 = (int32_T)b_j.contents;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &nc_emlrtBCI, sp);
            }

            i1 = 1 + k1;
            if (!((i1 >= 1) && (i1 <= Aq_size[0]))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, Aq_size[0], &oc_emlrtBCI, sp);
            }

            i = hk_sum.contents->size[0];
            idx = (int32_T)b_j.contents;
            if (!((idx >= 1) && (idx <= i))) {
              emlrtDynamicBoundsCheckR2012b(idx, 1, i, &nc_emlrtBCI, sp);
            }

            i = 1 + k1;
            if (!((i >= 1) && (i <= Aq_size[0]))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, Aq_size[0], &oc_emlrtBCI, sp);
            }

            hk_sum_im = hk_sum.contents->data[i2 - 1].re * Aq_data[i1 - 1].im +
              hk_sum.contents->data[idx - 1].im * Aq_data[i - 1].re;
            yk_fix_re = (y_mixed.re - cte_norm) - interference.re;
            yk_fix_im = (y_mixed.im - hk_sum_im) - interference.im;

            /*  received sample - channel*fixed_projection_of_user_j - effective_noise_mean */
            /*  This part here is a trick to implement a counter */
            /*  that goes like this: */
            /*  (1, 1, ..., 1) */
            /*  (...) */
            /*  (q, 1, ..., 1) */
            /*  (1, 2, ..., 1) */
            /*  (...) */
            /*  (q, q, ..., q) */
            i1 = length_of_each_counter.contents->size[0] *
              length_of_each_counter.contents->size[1];
            length_of_each_counter.contents->size[0] = 1;
            length_of_each_counter.contents->size[1] =
              strong_users.contents->size[1];
            emxEnsureCapacity_real_T(sp, length_of_each_counter.contents, i1,
              &hb_emlrtRTEI);
            c_loop_ub = strong_users.contents->size[1];
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              length_of_each_counter.contents->data[i1] = (int8_T)varargin_1;
            }

            i1 = counter.contents->size[0] * counter.contents->size[1];
            counter.contents->size[0] = 1;
            counter.contents->size[1] = strong_users.contents->size[1];
            emxEnsureCapacity_real_T(sp, counter.contents, i1, &jb_emlrtRTEI);
            c_loop_ub = strong_users.contents->size[1];
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              counter.contents->data[i1] = 1.0;
            }

            /* Actual */
            i1 = c_varargin_1->size[0] * c_varargin_1->size[1];
            c_varargin_1->size[0] = 1;
            c_varargin_1->size[1] = strong_users.contents->size[1];
            emxEnsureCapacity_real_T(sp, c_varargin_1, i1, &kb_emlrtRTEI);
            c_loop_ub = strong_users.contents->size[1];
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              c_varargin_1->data[i1] = (int8_T)varargin_1;
            }

            st.site = &l_emlrtRSI;
            d0 = prod(&st, c_varargin_1);
            emlrtForLoopVectorCheckR2012b(1.0, 1.0, d0, mxDOUBLE_CLASS, (int32_T)
              d0, &de_emlrtRTEI, sp);
            vlen = 0;
            while (vlen <= (int32_T)d0 - 1) {
              marginal_prob_idx_cnt.contents = 1.0 + (real_T)vlen;

              /*  begin interference marginalization:  */
              /*  tests all possible combinations of projections for the strong users */
              /*  the combination that maximizes p(y | xj, interference) dominates the probability that x_j = Aq(q_id)  */
              st.site = &m_emlrtRSI;

              /*     %% Get projections of interference being tested */
              b_st.site = &fe_emlrtRSI;
              indexShapeCheck(&b_st, Aq_size[0], *(int32_T (*)[2])
                              counter.contents->size);
              i1 = interference_projections->size[0];
              interference_projections->size[0] = counter.contents->size[1];
              emxEnsureCapacity_creal_T1(&st, interference_projections, i1,
                &mb_emlrtRTEI);
              c_loop_ub = counter.contents->size[1];
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                re = counter.contents->data[counter.contents->size[0] * i1];
                if (re != (int32_T)muDoubleScalarFloor(re)) {
                  emlrtIntegerCheckR2012b(re, &bb_emlrtDCI, &st);
                }

                i2 = (int32_T)re;
                if (!((i2 >= 1) && (i2 <= Aq_size[0]))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, Aq_size[0], &pc_emlrtBCI,
                    &st);
                }

                interference_projections->data[i1].re = Aq_data[i2 - 1].re;
                re = counter.contents->data[counter.contents->size[0] * i1];
                if (re != (int32_T)muDoubleScalarFloor(re)) {
                  emlrtIntegerCheckR2012b(re, &w_emlrtDCI, &st);
                }

                i2 = (int32_T)re;
                if (!((i2 >= 1) && (i2 <= Aq_size[0]))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, Aq_size[0], &jc_emlrtBCI,
                    &st);
                }

                interference_projections->data[i1].im = Aq_data[i2 - 1].im;
              }

              st.site = &n_emlrtRSI;
              indexShapeCheck(&st, hk_sum.contents->size[0], *(int32_T (*)[2])
                              strong_users.contents->size);
              maxdimlen = hk_sum.contents->size[0];
              i1 = h_strong_users->size[0];
              h_strong_users->size[0] = strong_users.contents->size[1];
              emxEnsureCapacity_creal_T1(sp, h_strong_users, i1, &nb_emlrtRTEI);
              c_loop_ub = strong_users.contents->size[1];
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                re = strong_users.contents->data[strong_users.contents->size[0] *
                  i1];
                if (re != (int32_T)muDoubleScalarFloor(re)) {
                  emlrtIntegerCheckR2012b(re, &cb_emlrtDCI, sp);
                }

                i2 = (int32_T)re;
                if (!((i2 >= 1) && (i2 <= maxdimlen))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, maxdimlen, &qc_emlrtBCI,
                    sp);
                }

                h_strong_users->data[i1].re = hk_sum.contents->data[i2 - 1].re;
                re = strong_users.contents->data[strong_users.contents->size[0] *
                  i1];
                if (re != (int32_T)muDoubleScalarFloor(re)) {
                  emlrtIntegerCheckR2012b(re, &x_emlrtDCI, sp);
                }

                i2 = (int32_T)re;
                if (!((i2 >= 1) && (i2 <= maxdimlen))) {
                  emlrtDynamicBoundsCheckR2012b(i2, 1, maxdimlen, &kc_emlrtBCI,
                    sp);
                }

                h_strong_users->data[i1].im = hk_sum.contents->data[i2 - 1].im;
              }

              st.site = &o_emlrtRSI;
              nx = h_strong_users->size[0];
              b_st.site = &gc_emlrtRSI;
              c_st.site = &ic_emlrtRSI;
              assertValidSizeArg(&c_st, h_strong_users->size[0]);
              maxdimlen = h_strong_users->size[0];
              if (1 > h_strong_users->size[0]) {
                maxdimlen = 1;
              }

              if (h_strong_users->size[0] > muIntScalarMax_sint32(nx, maxdimlen))
              {
                b_st.site = &hc_emlrtRSI;
                c_error(&b_st);
              }

              st.site = &o_emlrtRSI;
              b_st.site = &be_emlrtRSI;
              maxdimlen = h_strong_users->size[0];
              i1 = b_counter->size[0];
              b_counter->size[0] = counter.contents->size[1];
              emxEnsureCapacity_int32_T1(&b_st, b_counter, i1, &ob_emlrtRTEI);
              c_loop_ub = counter.contents->size[1];
              for (i1 = 0; i1 < c_loop_ub; i1++) {
                b_counter->data[i1] = (int32_T)counter.contents->
                  data[counter.contents->size[0] * i1];
              }

              if (!(maxdimlen == b_counter->size[0])) {
                maxdimlen = h_strong_users->size[0];
                guard1 = false;
                if (maxdimlen == 1) {
                  guard1 = true;
                } else {
                  i1 = b_counter->size[0];
                  b_counter->size[0] = counter.contents->size[1];
                  emxEnsureCapacity_int32_T1(&b_st, b_counter, i1, &ob_emlrtRTEI);
                  c_loop_ub = counter.contents->size[1];
                  for (i1 = 0; i1 < c_loop_ub; i1++) {
                    b_counter->data[i1] = (int32_T)counter.contents->
                      data[counter.contents->size[0] * i1];
                  }

                  if (b_counter->size[0] == 1) {
                    guard1 = true;
                  } else {
                    emlrtErrorWithMessageIdR2018a(&b_st, &le_emlrtRTEI,
                      "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
                  }
                }

                if (guard1) {
                  emlrtErrorWithMessageIdR2018a(&b_st, &me_emlrtRTEI,
                    "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                    "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
                }
              }

              maxdimlen = h_strong_users->size[0];
              guard1 = false;
              if (maxdimlen == 1) {
                guard1 = true;
              } else {
                i1 = b_counter->size[0];
                b_counter->size[0] = counter.contents->size[1];
                emxEnsureCapacity_int32_T1(&st, b_counter, i1, &ob_emlrtRTEI);
                c_loop_ub = counter.contents->size[1];
                for (i1 = 0; i1 < c_loop_ub; i1++) {
                  b_counter->data[i1] = (int32_T)counter.contents->
                    data[counter.contents->size[0] * i1];
                }

                if (b_counter->size[0] == 1) {
                  guard1 = true;
                } else {
                  b_st.site = &he_emlrtRSI;
                  c_st.site = &ie_emlrtRSI;
                  d_st.site = &je_emlrtRSI;
                  e_st.site = &ke_emlrtRSI;
                  interference.re = 0.0;
                  interference.im = 0.0;
                  maxdimlen = h_strong_users->size[0];
                  if (!(maxdimlen < 1)) {
                    f_st.site = &le_emlrtRSI;
                    maxdimlen = h_strong_users->size[0];
                    if (1 > maxdimlen) {
                      overflow = false;
                    } else {
                      maxdimlen = h_strong_users->size[0];
                      overflow = (maxdimlen > 2147483646);
                    }

                    if (overflow) {
                      g_st.site = &ob_emlrtRSI;
                      check_forloop_overflow_error(&g_st);
                    }

                    idx = 0;
                    do {
                      exitg2 = 0;
                      maxdimlen = h_strong_users->size[0];
                      if (idx + 1 <= maxdimlen) {
                        cte_norm = h_strong_users->data[idx].re *
                          interference_projections->data[idx].re -
                          h_strong_users->data[idx].im *
                          interference_projections->data[idx].im;
                        hk_sum_im = h_strong_users->data[idx].re *
                          interference_projections->data[idx].im +
                          h_strong_users->data[idx].im *
                          interference_projections->data[idx].re;
                        interference.re += cte_norm;
                        interference.im += hk_sum_im;
                        idx++;
                      } else {
                        exitg2 = 1;
                      }
                    } while (exitg2 == 0);
                  }
                }
              }

              if (guard1) {
                maxdimlen = h_strong_users->size[0];
                re = 0.0;
                im = 0.0;
                for (i1 = 0; i1 < maxdimlen; i1++) {
                  cte_norm = h_strong_users->data[i1].re *
                    interference_projections->data[i1].re - h_strong_users->
                    data[i1].im * interference_projections->data[i1].im;
                  hk_sum_im = h_strong_users->data[i1].re *
                    interference_projections->data[i1].im + h_strong_users->
                    data[i1].im * interference_projections->data[i1].re;
                  re += cte_norm;
                  im += hk_sum_im;
                }

                interference.re = re;
                interference.im = im;
              }

              /*  get the sum of the LLR-beliefs of the current projections of the VNs in the interference marginalization */
              st.site = &p_emlrtRSI;
              cte_norm = get_extrinsic_info_probability(&st, &strong_users,
                &counter, &C_perms, &F_int, &b_k, &codeword_labels, &M,
                &mess_from_VN_to_FN, &eps_val_num);

              /*  channel observation contribution of p(y | xj, interference) */
              interference.re = yk_fix_re - interference.re;
              interference.im = yk_fix_im - interference.im;
              hk_sum_im = muDoubleScalarHypot(interference.re, interference.im);
              st.site = &q_emlrtRSI;
              b_st.site = &ce_emlrtRSI;
              c_st.site = &rc_emlrtRSI;
              re = pdf_scaling_cte;
              st.site = &q_emlrtRSI;
              b_log(&st, &re);

              /*  Add extrinsic information to channel observation */
              cte_norm += re + pdf_exp_cte * (hk_sum_im * hk_sum_im);

              /*  apply max^star operation to implement log(sum(exp(a1,a2,...,aN))) */
              re = 1.0 + muDoubleScalarExp(-muDoubleScalarAbs(max_temp_0 -
                cte_norm));
              st.site = &r_emlrtRSI;
              b_log(&st, &re);
              max_temp_0 = muDoubleScalarMax(max_temp_0, cte_norm) + re;

              /*  update q-ary counter */
              st.site = &s_emlrtRSI;
              update_cartesian_counter(&st, &length_of_each_counter,
                &marginal_prob_idx_cnt, counter.contents);
              vlen++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }

            /*  fim da marginaliza��o sobre a interfer�ncia */
            /*  extrapolate probability of projection Aq(q_id) to the probability of all codebook symbols of user j with this projection in FN k */
            st.site = &t_emlrtRSI;
            c_loop_ub = C_perms.contents->size[1];
            i1 = F_int.contents->size[0];
            d0 = 1.0 + (real_T)k;
            if (d0 != (int32_T)d0) {
              emlrtIntegerCheckR2012b(d0, &d_emlrtDCI, &st);
            }

            i2 = (int32_T)d0;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &hc_emlrtBCI, &st);
            }

            i1 = F_int.contents->size[1];
            i = (int32_T)b_j.contents;
            if (!((i >= 1) && (i <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i, 1, i1, &hc_emlrtBCI, &st);
            }

            d0 = F_int.contents->data[(i2 + F_int.contents->size[0] * (i - 1)) -
              1];
            if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
              emlrtIntegerCheckR2012b(d0, &d_emlrtDCI, &st);
            }

            i1 = C_perms.contents->size[0];
            maxdimlen = (int32_T)d0;
            if (!((maxdimlen >= 1) && (maxdimlen <= i1))) {
              emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i1, &m_emlrtBCI, &st);
            }

            i1 = c_x->size[0] * c_x->size[1];
            c_x->size[0] = 1;
            c_x->size[1] = c_loop_ub;
            emxEnsureCapacity_boolean_T(&st, c_x, i1, &lb_emlrtRTEI);
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              c_x->data[c_x->size[0] * i1] = (C_perms.contents->data[(maxdimlen
                + C_perms.contents->size[0] * i1) - 1] == 1.0 + (real_T)k1);
            }

            b_st.site = &lb_emlrtRSI;
            nx = c_x->size[1];
            c_st.site = &mb_emlrtRSI;
            idx = 0;
            i1 = b_ii->size[0] * b_ii->size[1];
            b_ii->size[0] = 1;
            b_ii->size[1] = c_x->size[1];
            emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &h_emlrtRTEI);
            d_st.site = &nb_emlrtRSI;
            overflow = ((!(1 > c_x->size[1])) && (c_x->size[1] > 2147483646));
            if (overflow) {
              e_st.site = &ob_emlrtRSI;
              check_forloop_overflow_error(&e_st);
            }

            maxdimlen = 1;
            exitg1 = false;
            while ((!exitg1) && (maxdimlen <= nx)) {
              if (c_x->data[maxdimlen - 1]) {
                idx++;
                b_ii->data[idx - 1] = maxdimlen;
                if (idx >= nx) {
                  exitg1 = true;
                } else {
                  maxdimlen++;
                }
              } else {
                maxdimlen++;
              }
            }

            if (!(idx <= c_x->size[1])) {
              emlrtErrorWithMessageIdR2018a(&c_st, &ge_emlrtRTEI,
                "Coder:builtins:AssertionFailed",
                "Coder:builtins:AssertionFailed", 0);
            }

            if (c_x->size[1] == 1) {
              if (idx == 0) {
                i1 = b_ii->size[0] * b_ii->size[1];
                b_ii->size[0] = 1;
                b_ii->size[1] = 0;
                emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &k_emlrtRTEI);
              }
            } else {
              i1 = b_ii->size[0] * b_ii->size[1];
              if (1 > idx) {
                b_ii->size[1] = 0;
              } else {
                b_ii->size[1] = idx;
              }

              emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &k_emlrtRTEI);
            }

            i1 = codeword_labels.contents->size[0] *
              codeword_labels.contents->size[1];
            codeword_labels.contents->size[0] = 1;
            codeword_labels.contents->size[1] = b_ii->size[1];
            emxEnsureCapacity_real_T(sp, codeword_labels.contents, i1,
              &pb_emlrtRTEI);
            c_loop_ub = b_ii->size[0] * b_ii->size[1];
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              codeword_labels.contents->data[i1] = b_ii->data[i1];
            }

            /*  which of the M codewords of the codebook has the projection label q_id? */
            nx = mess_from_FN_to_VN->size[2];
            i1 = ii->size[0];
            ii->size[0] = b_ii->size[1];
            emxEnsureCapacity_int32_T1(sp, ii, i1, &rb_emlrtRTEI);
            c_loop_ub = b_ii->size[1];
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              i2 = b_ii->data[b_ii->size[0] * i1];
              if (!((i2 >= 1) && (i2 <= nx))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, nx, &ic_emlrtBCI, sp);
              }

              ii->data[i1] = i2;
            }

            idx = ii->size[0];
            nx = mess_from_FN_to_VN->size[0];
            maxdimlen = mess_from_FN_to_VN->size[1];
            i1 = (int32_T)b_j.contents;
            if (!((i1 >= 1) && (i1 <= maxdimlen))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, maxdimlen, &o_emlrtBCI, sp);
            }

            d0 = 1.0 + (real_T)k;
            if (d0 != (int32_T)d0) {
              emlrtIntegerCheckR2012b(d0, &e_emlrtDCI, sp);
            }

            i1 = (int32_T)d0;
            if (!((i1 >= 1) && (i1 <= nx))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, nx, &n_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < idx; i1++) {
              mess_from_FN_to_VN->data[(((k + 1) + mess_from_FN_to_VN->size[0] *
                ((int32_T)b_j.contents - 1)) + mess_from_FN_to_VN->size[0] *
                mess_from_FN_to_VN->size[1] * (ii->data[i1] - 1)) - 1] =
                max_temp_0;
            }

            /*  replicate probability */
            k1++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }

          /*  end loop over projections Aq for user j @ k */
          /*  PMF normalization */
          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &h_emlrtDCI, sp);
          }

          i1 = mess_from_FN_to_VN->size[0];
          i2 = (int32_T)d0;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &t_emlrtBCI, sp);
          }

          i1 = i2 - 1;
          i2 = (int32_T)b_j.contents;
          i = mess_from_FN_to_VN->size[1];
          if (!((i2 >= 1) && (i2 <= i))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &u_emlrtBCI, sp);
          }

          c_loop_ub = mess_from_FN_to_VN->size[2];
          i2 = ii->size[0];
          ii->size[0] = c_loop_ub;
          emxEnsureCapacity_int32_T1(sp, ii, i2, &db_emlrtRTEI);
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            ii->data[i2] = i2;
          }

          c_loop_ub = mess_from_FN_to_VN->size[2];
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
          idx = (int32_T)d0;
          if (!((idx >= 1) && (idx <= i2))) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, i2, &p_emlrtBCI, sp);
          }

          i2 = r1->size[0] * r1->size[1] * r1->size[2];
          r1->size[0] = 1;
          r1->size[1] = 1;
          r1->size[2] = c_loop_ub;
          emxEnsureCapacity_real_T1(sp, r1, i2, &gb_emlrtRTEI);
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            r1->data[r1->size[0] * r1->size[1] * i2] = mess_from_FN_to_VN->data
              [((idx + mess_from_FN_to_VN->size[0] * (j - 1)) +
                mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] * i2)
              - 1];
          }

          iv0[0] = 1;
          iv0[1] = 1;
          iv0[2] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&iv0[0], 3, &(*(int32_T (*)[3])r1->size)
            [0], 3, &b_emlrtECI, sp);
          st.site = &u_emlrtRSI;
          c_loop_ub = mess_from_FN_to_VN->size[2];
          j = (int32_T)b_j.contents;
          i2 = mess_from_FN_to_VN->size[1];
          if (!((j >= 1) && (j <= i2))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i2, &s_emlrtBCI, &st);
          }

          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &g_emlrtDCI, &st);
          }

          i2 = mess_from_FN_to_VN->size[0];
          idx = (int32_T)d0;
          if (!((idx >= 1) && (idx <= i2))) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, i2, &r_emlrtBCI, &st);
          }

          i2 = b_varargin_1->size[0] * b_varargin_1->size[1] *
            b_varargin_1->size[2];
          b_varargin_1->size[0] = 1;
          b_varargin_1->size[1] = 1;
          b_varargin_1->size[2] = c_loop_ub;
          emxEnsureCapacity_real_T1(&st, b_varargin_1, i2, &ib_emlrtRTEI);
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            b_varargin_1->data[b_varargin_1->size[0] * b_varargin_1->size[1] *
              i2] = mess_from_FN_to_VN->data[((idx + mess_from_FN_to_VN->size[0]
              * (j - 1)) + mess_from_FN_to_VN->size[0] *
              mess_from_FN_to_VN->size[1] * i2) - 1];
          }

          b_st.site = &ue_emlrtRSI;
          c_st.site = &ve_emlrtRSI;
          d_st.site = &we_emlrtRSI;
          if ((b_varargin_1->size[2] == 1) || (b_varargin_1->size[2] != 1)) {
          } else {
            emlrtErrorWithMessageIdR2018a(&d_st, &he_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility",
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          if (!(b_varargin_1->size[2] >= 1)) {
            emlrtErrorWithMessageIdR2018a(&d_st, &ie_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          e_st.site = &xe_emlrtRSI;
          f_st.site = &ye_emlrtRSI;
          vlen = b_varargin_1->size[2];
          idx = 3;
          if (b_varargin_1->size[2] == 1) {
            idx = 2;
          }

          if (3 > idx) {
            idx = b_varargin_1->size[2];
          } else {
            idx = 1;
          }

          g_st.site = &df_emlrtRSI;
          g_st.site = &cf_emlrtRSI;
          if (idx > 2147483646) {
            h_st.site = &ob_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          for (j = 1; j <= idx; j++) {
            cte_norm = b_varargin_1->data[j - 1];
          }

          g_st.site = &bf_emlrtRSI;
          if ((!(2 > vlen)) && (vlen > 2147483646)) {
            h_st.site = &ob_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          for (i = 2; i <= vlen; i++) {
            nx = (i - 1) * idx;
            g_st.site = &af_emlrtRSI;
            for (j = 0; j < idx; j++) {
              overflow = ((!muDoubleScalarIsNaN(b_varargin_1->data[nx + j])) &&
                          (muDoubleScalarIsNaN(cte_norm) || (cte_norm <
                b_varargin_1->data[nx + j])));
              if (overflow) {
                cte_norm = b_varargin_1->data[nx + j];
              }
            }
          }

          c_loop_ub = r1->size[2];
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            mess_from_FN_to_VN->data[(i1 + mess_from_FN_to_VN->size[0] *
              ((int32_T)b_j.contents - 1)) + mess_from_FN_to_VN->size[0] *
              mess_from_FN_to_VN->size[1] * ii->data[i2]] = r1->data[r1->size[0]
              * r1->size[1] * i2] - cte_norm;
          }

          /*  remove maximum value (almost normalizes) */
          c_loop_ub = mess_from_FN_to_VN->size[2];
          j = (int32_T)b_j.contents;
          i1 = mess_from_FN_to_VN->size[1];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &w_emlrtBCI, sp);
          }

          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &i_emlrtDCI, sp);
          }

          i1 = mess_from_FN_to_VN->size[0];
          idx = (int32_T)d0;
          if (!((idx >= 1) && (idx <= i1))) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, i1, &v_emlrtBCI, sp);
          }

          i1 = r1->size[0] * r1->size[1] * r1->size[2];
          r1->size[0] = 1;
          r1->size[1] = 1;
          r1->size[2] = c_loop_ub;
          emxEnsureCapacity_real_T1(sp, r1, i1, &qb_emlrtRTEI);
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            r1->data[r1->size[0] * r1->size[1] * i1] = mess_from_FN_to_VN->data
              [((idx + mess_from_FN_to_VN->size[0] * (j - 1)) +
                mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] * i1)
              - 1];
          }

          st.site = &v_emlrtRSI;
          b_exp(&st, r1);
          st.site = &v_emlrtRSI;
          cte_norm = c_sum(&st, r1);
          st.site = &v_emlrtRSI;
          b_log(&st, &cte_norm);

          /*  checks sum of probabilities and move back to LLR domain */
          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &k_emlrtDCI, sp);
          }

          i1 = mess_from_FN_to_VN->size[0];
          i2 = (int32_T)d0;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ab_emlrtBCI, sp);
          }

          i1 = i2 - 1;
          i2 = (int32_T)b_j.contents;
          i = mess_from_FN_to_VN->size[1];
          if (!((i2 >= 1) && (i2 <= i))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &bb_emlrtBCI, sp);
          }

          c_loop_ub = mess_from_FN_to_VN->size[2];
          i2 = ii->size[0];
          ii->size[0] = c_loop_ub;
          emxEnsureCapacity_int32_T1(sp, ii, i2, &sb_emlrtRTEI);
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            ii->data[i2] = i2;
          }

          c_loop_ub = mess_from_FN_to_VN->size[2];
          j = (int32_T)b_j.contents;
          i2 = mess_from_FN_to_VN->size[1];
          if (!((j >= 1) && (j <= i2))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i2, &y_emlrtBCI, sp);
          }

          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &j_emlrtDCI, sp);
          }

          i2 = mess_from_FN_to_VN->size[0];
          idx = (int32_T)d0;
          if (!((idx >= 1) && (idx <= i2))) {
            emlrtDynamicBoundsCheckR2012b(idx, 1, i2, &x_emlrtBCI, sp);
          }

          i2 = r1->size[0] * r1->size[1] * r1->size[2];
          r1->size[0] = 1;
          r1->size[1] = 1;
          r1->size[2] = c_loop_ub;
          emxEnsureCapacity_real_T1(sp, r1, i2, &tb_emlrtRTEI);
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            r1->data[r1->size[0] * r1->size[1] * i2] = mess_from_FN_to_VN->data
              [((idx + mess_from_FN_to_VN->size[0] * (j - 1)) +
                mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] * i2)
              - 1];
          }

          iv0[0] = 1;
          iv0[1] = 1;
          iv0[2] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&iv0[0], 3, &(*(int32_T (*)[3])r1->size)
            [0], 3, &c_emlrtECI, sp);
          c_loop_ub = r1->size[2];
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            mess_from_FN_to_VN->data[(i1 + mess_from_FN_to_VN->size[0] *
              ((int32_T)b_j.contents - 1)) + mess_from_FN_to_VN->size[0] *
              mess_from_FN_to_VN->size[1] * ii->data[i2]] = r1->data[r1->size[0]
              * r1->size[1] * i2] - cte_norm;
          }

          /*  divide by sum of probabilities (LLR domain: subtract) */
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
      /*         %% VNs message update */
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, b_loop_ub, mxDOUBLE_CLASS,
        b_loop_ub, &ee_emlrtRTEI, sp);
      j = 1;
      while (j - 1 <= b_loop_ub - 1) {
        /*  for every VN */
        st.site = &w_emlrtRSI;
        c_loop_ub = F.contents->size[0];
        i1 = F.contents->size[1];
        if (!((j >= 1) && (j <= i1))) {
          emlrtDynamicBoundsCheckR2012b(j, 1, i1, &cb_emlrtBCI, &st);
        }

        i1 = x->size[0];
        x->size[0] = c_loop_ub;
        emxEnsureCapacity_real_T2(&st, x, i1, &j_emlrtRTEI);
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          x->data[i1] = F.contents->data[i1 + F.contents->size[0] * (j - 1)];
        }

        b_st.site = &lb_emlrtRSI;
        nx = x->size[0];
        c_st.site = &mb_emlrtRSI;
        idx = 0;
        i1 = ii->size[0];
        ii->size[0] = x->size[0];
        emxEnsureCapacity_int32_T1(&c_st, ii, i1, &h_emlrtRTEI);
        d_st.site = &nb_emlrtRSI;
        overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
        if (overflow) {
          e_st.site = &ob_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }

        maxdimlen = 1;
        exitg1 = false;
        while ((!exitg1) && (maxdimlen <= nx)) {
          if (x->data[maxdimlen - 1] != 0.0) {
            idx++;
            ii->data[idx - 1] = maxdimlen;
            if (idx >= nx) {
              exitg1 = true;
            } else {
              maxdimlen++;
            }
          } else {
            maxdimlen++;
          }
        }

        if (!(idx <= x->size[0])) {
          emlrtErrorWithMessageIdR2018a(&c_st, &ge_emlrtRTEI,
            "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed",
            0);
        }

        if (x->size[0] == 1) {
          if (idx == 0) {
            i1 = ii->size[0];
            ii->size[0] = 0;
            emxEnsureCapacity_int32_T1(&c_st, ii, i1, &k_emlrtRTEI);
          }
        } else {
          if (1 > idx) {
            i1 = 0;
          } else {
            i1 = idx;
          }

          b_a_priori_beliefs[0] = 1;
          b_a_priori_beliefs[1] = i1;
          d_st.site = &ef_emlrtRSI;
          indexShapeCheck(&d_st, ii->size[0], b_a_priori_beliefs);
          i2 = ii->size[0];
          ii->size[0] = i1;
          emxEnsureCapacity_int32_T1(&c_st, ii, i2, &k_emlrtRTEI);
        }

        i1 = vphi_j->size[0] * vphi_j->size[1];
        vphi_j->size[0] = 1;
        vphi_j->size[1] = ii->size[0];
        emxEnsureCapacity_real_T(sp, vphi_j, i1, &o_emlrtRTEI);
        c_loop_ub = ii->size[0];
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          vphi_j->data[vphi_j->size[0] * i1] = ii->data[i1];
        }

        /*  resource indexes associated with VN j */
        /* for k = vphi_j % for every FN connected to VN j */
        k1 = 0;
        while (k1 <= vphi_j->size[1] - 1) {
          i1 = vphi_j->size[1];
          i2 = k1 + 1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &db_emlrtBCI, sp);
          }

          b_k.contents = (int32_T)vphi_j->data[k1];

          /*  actual FN index */
          if (1.0 + (real_T)t != Tm) {
            /*  before last iteration, exclude FN k */
            st.site = &x_emlrtRSI;
            b_st.site = &pb_emlrtRSI;
            c_st.site = &qb_emlrtRSI;
            do_vectors(&c_st, vphi_j, b_k.contents, vphi_j_except_k, ii, ib_size);
          } else {
            /*  at last iteration, include everyone */
            i1 = vphi_j_except_k->size[0] * vphi_j_except_k->size[1];
            vphi_j_except_k->size[0] = 1;
            vphi_j_except_k->size[1] = vphi_j->size[1];
            emxEnsureCapacity_real_T(sp, vphi_j_except_k, i1, &p_emlrtRTEI);
            c_loop_ub = vphi_j->size[0] * vphi_j->size[1];
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              vphi_j_except_k->data[i1] = vphi_j->data[i1];
            }
          }

          emlrtForLoopVectorCheckR2012b(1.0, 1.0, i0, mxDOUBLE_CLASS, i0,
            &fe_emlrtRTEI, sp);
          idx = 0;
          while (idx <= i0 - 1) {
            /*  for every codeword  */
            i1 = a_priori_beliefs->size[0];
            i2 = (j - 1) + 1;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &eb_emlrtBCI, sp);
            }

            i1 = a_priori_beliefs->size[1];
            i2 = idx + 1;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fb_emlrtBCI, sp);
            }

            i1 = a_priori_beliefs->size[2];
            i2 = ns + 1;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &gb_emlrtBCI, sp);
            }

            /*  a priori probability of m-th symbol  */
            nx = mess_from_FN_to_VN->size[0];
            i1 = mess_from_FN_to_VN->size[2];
            if (!((idx + 1 >= 1) && (idx + 1 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(idx + 1, 1, i1, &ib_emlrtBCI, sp);
            }

            maxdimlen = idx + 1;
            i1 = mess_from_FN_to_VN->size[1];
            if (!((j >= 1) && (j <= i1))) {
              emlrtDynamicBoundsCheckR2012b(j, 1, i1, &hb_emlrtBCI, sp);
            }

            i1 = b_mess_from_FN_to_VN->size[0];
            b_mess_from_FN_to_VN->size[0] = vphi_j_except_k->size[1];
            emxEnsureCapacity_real_T2(sp, b_mess_from_FN_to_VN, i1, &w_emlrtRTEI);
            c_loop_ub = vphi_j_except_k->size[1];
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              i2 = (int32_T)vphi_j_except_k->data[vphi_j_except_k->size[0] * i1];
              if (!((i2 >= 1) && (i2 <= nx))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, nx, &cc_emlrtBCI, sp);
              }

              b_mess_from_FN_to_VN->data[i1] = mess_from_FN_to_VN->data[((i2 +
                mess_from_FN_to_VN->size[0] * (j - 1)) +
                mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] *
                (maxdimlen - 1)) - 1];
            }

            i1 = mess_from_VN_to_FN.contents->size[0];
            if (!((j >= 1) && (j <= i1))) {
              emlrtDynamicBoundsCheckR2012b(j, 1, i1, &dc_emlrtBCI, sp);
            }

            i1 = mess_from_VN_to_FN.contents->size[1];
            i2 = (int32_T)b_k.contents;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &dc_emlrtBCI, sp);
            }

            i1 = mess_from_VN_to_FN.contents->size[2];
            if (!((idx + 1 >= 1) && (idx + 1 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(idx + 1, 1, i1, &dc_emlrtBCI, sp);
            }

            st.site = &y_emlrtRSI;
            mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (i2 - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * idx) - 1] =
              a_priori_beliefs->data[((j + a_priori_beliefs->size[0] * idx) +
              a_priori_beliefs->size[0] * a_priori_beliefs->size[1] * ns) - 1] +
              d_sum(&st, b_mess_from_FN_to_VN);

            /*  sum of LLR-messages from FNs + a priori probability */
            idx++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }

          /*  end codeword loop */
          /*  PMF normalization */
          i1 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &nb_emlrtBCI, sp);
          }

          i1 = j - 1;
          i2 = mess_from_VN_to_FN.contents->size[1];
          i = (int32_T)b_k.contents;
          if (!((i >= 1) && (i <= i2))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i2, &ob_emlrtBCI, sp);
          }

          i2 = i - 1;
          c_loop_ub = mess_from_VN_to_FN.contents->size[2];
          i = ii->size[0];
          ii->size[0] = c_loop_ub;
          emxEnsureCapacity_int32_T1(sp, ii, i, &u_emlrtRTEI);
          for (i = 0; i < c_loop_ub; i++) {
            ii->data[i] = i;
          }

          c_loop_ub = mess_from_VN_to_FN.contents->size[2];
          i = mess_from_VN_to_FN.contents->size[1];
          k = (int32_T)b_k.contents;
          if (!((k >= 1) && (k <= i))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i, &kb_emlrtBCI, sp);
          }

          i = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i, &jb_emlrtBCI, sp);
          }

          i = r1->size[0] * r1->size[1] * r1->size[2];
          r1->size[0] = 1;
          r1->size[1] = 1;
          r1->size[2] = c_loop_ub;
          emxEnsureCapacity_real_T1(sp, r1, i, &x_emlrtRTEI);
          for (i = 0; i < c_loop_ub; i++) {
            r1->data[r1->size[0] * r1->size[1] * i] =
              mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (k - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i) - 1];
          }

          iv0[0] = 1;
          iv0[1] = 1;
          iv0[2] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&iv0[0], 3, &(*(int32_T (*)[3])r1->size)
            [0], 3, &d_emlrtECI, sp);
          st.site = &ab_emlrtRSI;
          c_loop_ub = mess_from_VN_to_FN.contents->size[2];
          i = mess_from_VN_to_FN.contents->size[1];
          k = (int32_T)b_k.contents;
          if (!((k >= 1) && (k <= i))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i, &mb_emlrtBCI, &st);
          }

          i = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i, &lb_emlrtBCI, &st);
          }

          i = b_varargin_1->size[0] * b_varargin_1->size[1] * b_varargin_1->
            size[2];
          b_varargin_1->size[0] = 1;
          b_varargin_1->size[1] = 1;
          b_varargin_1->size[2] = c_loop_ub;
          emxEnsureCapacity_real_T1(&st, b_varargin_1, i, &y_emlrtRTEI);
          for (i = 0; i < c_loop_ub; i++) {
            b_varargin_1->data[b_varargin_1->size[0] * b_varargin_1->size[1] * i]
              = mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (k - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i) - 1];
          }

          b_st.site = &ue_emlrtRSI;
          c_st.site = &ve_emlrtRSI;
          d_st.site = &we_emlrtRSI;
          if ((b_varargin_1->size[2] == 1) || (b_varargin_1->size[2] != 1)) {
          } else {
            emlrtErrorWithMessageIdR2018a(&d_st, &he_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility",
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          if (!(b_varargin_1->size[2] >= 1)) {
            emlrtErrorWithMessageIdR2018a(&d_st, &ie_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          e_st.site = &xe_emlrtRSI;
          f_st.site = &ye_emlrtRSI;
          vlen = b_varargin_1->size[2];
          k = 3;
          if (b_varargin_1->size[2] == 1) {
            k = 2;
          }

          if (3 > k) {
            idx = b_varargin_1->size[2];
          } else {
            idx = 1;
          }

          g_st.site = &df_emlrtRSI;
          g_st.site = &cf_emlrtRSI;
          if (idx > 2147483646) {
            h_st.site = &ob_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          for (maxdimlen = 1; maxdimlen <= idx; maxdimlen++) {
            cte_norm = b_varargin_1->data[maxdimlen - 1];
          }

          g_st.site = &bf_emlrtRSI;
          if ((!(2 > vlen)) && (vlen > 2147483646)) {
            h_st.site = &ob_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          for (i = 2; i <= vlen; i++) {
            nx = (i - 1) * idx;
            g_st.site = &af_emlrtRSI;
            for (maxdimlen = 0; maxdimlen < idx; maxdimlen++) {
              overflow = ((!muDoubleScalarIsNaN(b_varargin_1->data[nx +
                maxdimlen])) && (muDoubleScalarIsNaN(cte_norm) || (cte_norm <
                b_varargin_1->data[nx + maxdimlen])));
              if (overflow) {
                cte_norm = b_varargin_1->data[nx + maxdimlen];
              }
            }
          }

          c_loop_ub = r1->size[2];
          for (i = 0; i < c_loop_ub; i++) {
            mess_from_VN_to_FN.contents->data[(i1 +
              mess_from_VN_to_FN.contents->size[0] * i2) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * ii->data[i]] = r1->data
              [r1->size[0] * r1->size[1] * i] - cte_norm;
          }

          /*  remove maximum value (almost normalizes) */
          c_loop_ub = mess_from_VN_to_FN.contents->size[2];
          i1 = mess_from_VN_to_FN.contents->size[1];
          k = (int32_T)b_k.contents;
          if (!((k >= 1) && (k <= i1))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i1, &qb_emlrtBCI, sp);
          }

          i1 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &pb_emlrtBCI, sp);
          }

          i1 = r1->size[0] * r1->size[1] * r1->size[2];
          r1->size[0] = 1;
          r1->size[1] = 1;
          r1->size[2] = c_loop_ub;
          emxEnsureCapacity_real_T1(sp, r1, i1, &ab_emlrtRTEI);
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            r1->data[r1->size[0] * r1->size[1] * i1] =
              mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (k - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i1) - 1];
          }

          st.site = &bb_emlrtRSI;
          b_exp(&st, r1);
          st.site = &bb_emlrtRSI;
          cte_norm = c_sum(&st, r1);
          st.site = &bb_emlrtRSI;
          b_log(&st, &cte_norm);

          /*  checks sum of probabilities and move back to LLR domain */
          i1 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &tb_emlrtBCI, sp);
          }

          i1 = j - 1;
          i2 = mess_from_VN_to_FN.contents->size[1];
          i = (int32_T)b_k.contents;
          if (!((i >= 1) && (i <= i2))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i2, &ub_emlrtBCI, sp);
          }

          i2 = i - 1;
          c_loop_ub = mess_from_VN_to_FN.contents->size[2];
          i = ii->size[0];
          ii->size[0] = c_loop_ub;
          emxEnsureCapacity_int32_T1(sp, ii, i, &cb_emlrtRTEI);
          for (i = 0; i < c_loop_ub; i++) {
            ii->data[i] = i;
          }

          c_loop_ub = mess_from_VN_to_FN.contents->size[2];
          i = mess_from_VN_to_FN.contents->size[1];
          k = (int32_T)b_k.contents;
          if (!((k >= 1) && (k <= i))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i, &sb_emlrtBCI, sp);
          }

          i = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i, &rb_emlrtBCI, sp);
          }

          i = r1->size[0] * r1->size[1] * r1->size[2];
          r1->size[0] = 1;
          r1->size[1] = 1;
          r1->size[2] = c_loop_ub;
          emxEnsureCapacity_real_T1(sp, r1, i, &eb_emlrtRTEI);
          for (i = 0; i < c_loop_ub; i++) {
            r1->data[r1->size[0] * r1->size[1] * i] =
              mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (k - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i) - 1];
          }

          iv0[0] = 1;
          iv0[1] = 1;
          iv0[2] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&iv0[0], 3, &(*(int32_T (*)[3])r1->size)
            [0], 3, &e_emlrtECI, sp);
          c_loop_ub = r1->size[2];
          for (i = 0; i < c_loop_ub; i++) {
            mess_from_VN_to_FN.contents->data[(i1 +
              mess_from_VN_to_FN.contents->size[0] * i2) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * ii->data[i]] = r1->data
              [r1->size[0] * r1->size[1] * i] - cte_norm;
          }

          /*  divide by sum of probabilities (LLR domain: subtract) */
          k1++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(sp);
          }
        }

        /*  end FN loop */
        if (1.0 + (real_T)t == Tm) {
          /*  @ last iteration, get LLRs */
          i1 = vphi_j->size[1];
          if (!(1 <= i1)) {
            emlrtDynamicBoundsCheckR2012b(1, 1, i1, &wb_emlrtBCI, sp);
          }

          i1 = b_ii->size[0] * b_ii->size[1];
          b_ii->size[0] = 1;
          b_ii->size[1] = vphi_j->size[1];
          emxEnsureCapacity_int32_T(sp, b_ii, i1, &q_emlrtRTEI);
          c_loop_ub = vphi_j->size[1];
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            b_ii->data[b_ii->size[0] * i1] = (int32_T)vphi_j->data[vphi_j->size
              [0] * i1];
          }

          c_loop_ub = mess_from_VN_to_FN.contents->size[2];
          i1 = mess_from_VN_to_FN.contents->size[1];
          maxdimlen = b_ii->data[0];
          if (!((maxdimlen >= 1) && (maxdimlen <= i1))) {
            emlrtDynamicBoundsCheckR2012b(maxdimlen, 1, i1, &xb_emlrtBCI, sp);
          }

          i1 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &vb_emlrtBCI, sp);
          }

          i1 = b_mess_from_VN_to_FN->size[0] * b_mess_from_VN_to_FN->size[1] *
            b_mess_from_VN_to_FN->size[2];
          b_mess_from_VN_to_FN->size[0] = 1;
          b_mess_from_VN_to_FN->size[1] = 1;
          b_mess_from_VN_to_FN->size[2] = c_loop_ub;
          emxEnsureCapacity_real_T1(sp, b_mess_from_VN_to_FN, i1, &s_emlrtRTEI);
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            b_mess_from_VN_to_FN->data[b_mess_from_VN_to_FN->size[0] *
              b_mess_from_VN_to_FN->size[1] * i1] =
              mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (maxdimlen - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i1) - 1];
          }

          st.site = &cb_emlrtRSI;
          b_squeeze(&st, b_mess_from_VN_to_FN, pmf);

          /*  a posteriori probabilities (after MPA) of symbols of user j */
          i1 = soft_bits->size[0];
          i2 = (j - 1) + 1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &yb_emlrtBCI, sp);
          }

          c_loop_ub = soft_bits->size[1];
          i1 = ii->size[0];
          ii->size[0] = c_loop_ub;
          emxEnsureCapacity_int32_T1(sp, ii, i1, &v_emlrtRTEI);
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            ii->data[i1] = i1;
          }

          i1 = soft_bits->size[2];
          i2 = ns + 1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ac_emlrtBCI, sp);
          }

          st.site = &db_emlrtRSI;
          get_LLRs(&st, &kb, &codewords_binary_labels, &eps_val_num,
                   &eps_val_den, pmf, vphi_j);
          b_a_priori_beliefs[0] = 1;
          b_a_priori_beliefs[1] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&b_a_priori_beliefs[0], 2, &(*(int32_T (*)
            [2])vphi_j->size)[0], 2, &f_emlrtECI, sp);
          c_loop_ub = vphi_j->size[1];
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            soft_bits->data[((j + soft_bits->size[0] * ii->data[i1]) +
                             soft_bits->size[0] * soft_bits->size[1] * ns) - 1] =
              vphi_j->data[vphi_j->size[0] * i1];
          }

          /*  convert symbol probability to bit probability of each bit label */
          st.site = &eb_emlrtRSI;
          b_st.site = &wc_emlrtRSI;
          c_st.site = &xc_emlrtRSI;
          d_st.site = &yc_emlrtRSI;
          if ((pmf->size[0] == 1) || (pmf->size[0] != 1)) {
          } else {
            emlrtErrorWithMessageIdR2018a(&d_st, &he_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility",
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          if (!(pmf->size[0] >= 1)) {
            emlrtErrorWithMessageIdR2018a(&d_st, &ie_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          e_st.site = &kf_emlrtRSI;
          f_st.site = &lf_emlrtRSI;
          g_st.site = &mf_emlrtRSI;
          idx = pmf->size[0];
          maxdimlen = 1;
          h_st.site = &of_emlrtRSI;
          cte_norm = pmf->data[0];
          h_st.site = &nf_emlrtRSI;
          if ((!(2 > idx)) && (idx > 2147483646)) {
            i_st.site = &ob_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (i = 1; i < idx; i++) {
            overflow = ((!muDoubleScalarIsNaN(pmf->data[i])) &&
                        (muDoubleScalarIsNaN(cte_norm) || (cte_norm < pmf->
              data[i])));
            if (overflow) {
              cte_norm = pmf->data[i];
              maxdimlen = i + 1;
            }
          }

          /*  get symbol ID with maximum log-probability */
          i1 = hard_symbols->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &bc_emlrtBCI, sp);
          }

          i1 = hard_symbols->size[1];
          i2 = 1 + ns;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &bc_emlrtBCI, sp);
          }

          hard_symbols->data[(j + hard_symbols->size[0] * (i2 - 1)) - 1] =
            maxdimlen;

          /*  hard decision on symbol */
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

    /*  end MPA iterations for fixer packet index */
    ns++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  emxFree_int32_T(sp, &b_counter);
  emxFree_int32_T(sp, &c_vphi_j_except_k);
  emxFree_int32_T(sp, &b_vphi_j_except_k);
  emxFree_real_T(sp, &b_mess_from_FN_to_VN);
  emxFree_real_T(sp, &b_mess_from_VN_to_FN);
  emxFree_real_T(sp, &c_varargin_1);
  emxFree_boolean_T(sp, &c_x);
  emxFree_creal_T(sp, &b_x);
  emxFree_int32_T(sp, &b_ii);
  emxFree_real_T(sp, &b_varargin_1);
  emxFree_int32_T(sp, &ii);
  emxFree_real_T(sp, &x);
  emxFree_real_T(sp, &r1);
  emxFree_int8_T(sp, &r0);
  emxFree_real_T(sp, &pmf);
  emxFree_real_T(sp, &vphi_j_except_k);
  emxFree_creal_T(sp, &h_strong_users);
  emxFree_creal_T(sp, &interference_projections);
  emxFree_real_T(sp, &vphi_j);
  emxFree_real_T(sp, &mess_from_FN_to_VN);
  h_emxFreeStruct_coder_internal_(sp, &mess_from_VN_to_FN);
  f_emxFreeStruct_coder_internal_(sp, &phi_k_except_j);
  g_emxFreeStruct_coder_internal_(sp, &hk_sum);
  f_emxFreeStruct_coder_internal_(sp, &strong_users);
  f_emxFreeStruct_coder_internal_(sp, &length_of_each_counter);
  f_emxFreeStruct_coder_internal_(sp, &counter);
  f_emxFreeStruct_coder_internal_(sp, &codeword_labels);
  d_emxFreeStruct_coder_internal_(sp, &F);
  e_emxFreeStruct_coder_internal_(sp, &C);
  d_emxFreeStruct_coder_internal_(sp, &C_perms);
  d_emxFreeStruct_coder_internal_(sp, &F_int);
  c_emxFreeStruct_coder_internal_(sp, &codewords_binary_labels);

  /* ------------------------------------------------------------------------------------------- */
  /*  HELPER FUNCTIONS end HERE */
  /* ------------------------------------------------------------------------------------------- */
  /*  end Functions */
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (TB_ESGA_MPA_v1_Linux.c) */
