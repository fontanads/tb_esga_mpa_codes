/*
 * TB_ESGA_MPA_v0.c
 *
 * Code generation for function 'TB_ESGA_MPA_v0'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v0.h"
#include "TB_ESGA_MPA_v0_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "mod.h"
#include "error.h"
#include "prod.h"
#include "log.h"
#include "sum.h"
#include "exp.h"
#include "squeeze.h"
#include "indexShapeCheck.h"
#include "sqrt.h"
#include "eml_setop.h"
#include "scalexpAlloc.h"
#include "log2.h"
#include "TB_ESGA_MPA_v0_data.h"

/* Type Definitions */
#ifndef typedef_coder_internal_ref_4
#define typedef_coder_internal_ref_4

typedef struct {
  real_T contents;
} coder_internal_ref_4;

#endif                                 /*typedef_coder_internal_ref_4*/

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 28,    /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 16,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 29,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 45,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 49,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 57,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 58,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 61,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 68,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 70,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 71,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 72,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 74,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 76,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo o_emlrtRSI = { 79,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 81,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 87,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 93,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 94,  /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 103, /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 108, /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 115, /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 119, /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 120, /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 125, /* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 126,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 127,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 6,  /* lineNo */
  "ref",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\ref.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 41, /* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 153,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 377,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 19, /* lineNo */
  "setdiff",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\setdiff.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 70, /* lineNo */
  "eml_setop",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 142,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 143,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 144,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 16, /* lineNo */
  "abs",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 74, /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 49, /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 58, /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 45, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 65, /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 189,/* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 40, /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 23, /* lineNo */
  "intersect",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\intersect.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 156,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 171,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 175,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 178,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 186,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 187,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 189,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 90, /* lineNo */
  "diag",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 15, /* lineNo */
  "any",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\any.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 139,/* lineNo */
  "allOrAny",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 146,/* lineNo */
  "allOrAny",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\allOrAny.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 28, /* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 32, /* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 366,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 369,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 371,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 131,/* lineNo */
  "nullAssignment",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 21, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo pd_emlrtRSI = { 219,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo rd_emlrtRSI = { 52, /* lineNo */
  "eml_mtimes_helper",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pathName */
};

static emlrtRSInfo sd_emlrtRSI = { 88, /* lineNo */
  "mtimes",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\mtimes.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 40, /* lineNo */
  "xdotu",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xdotu.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 15, /* lineNo */
  "xdotu",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xdotu.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 32, /* lineNo */
  "xdotx",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xdotx.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 230,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 231,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 202,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 12, /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 13, /* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 19, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 40, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 128,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 271,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 479,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 476,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 472,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 466,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 397,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 245,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 246,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 248,/* lineNo */
  "TB_ESGA_MPA_v0",                    /* fcnName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 15, /* lineNo */
  "max",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 16, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 38, /* lineNo */
  "minOrMax",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 126,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 257,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 323,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 404,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 402,/* lineNo */
  "unaryMinOrMax",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pathName */
};

static emlrtRTEInfo emlrtRTEI = { 13,  /* lineNo */
  17,                                  /* colNo */
  "ref",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\ref.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 18,/* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 19,/* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 26,/* lineNo */
  5,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 27,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 27,/* lineNo */
  5,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 29,/* lineNo */
  23,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 153,/* lineNo */
  13,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 45,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 103,/* lineNo */
  27,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 41,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 29,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 33,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 45,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 103,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 110,/* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 125,/* lineNo */
  53,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 49,/* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 125,/* lineNo */
  32,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 119,/* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo u_emlrtRTEI = { 93,/* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo v_emlrtRTEI = { 115,/* lineNo */
  62,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo w_emlrtRTEI = { 126,/* lineNo */
  30,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo x_emlrtRTEI = { 87,/* lineNo */
  44,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo y_emlrtRTEI = { 119,/* lineNo */
  45,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = { 93,/* lineNo */
  45,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo bb_emlrtRTEI = { 65,/* lineNo */
  25,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = { 66,/* lineNo */
  25,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo db_emlrtRTEI = { 119,/* lineNo */
  77,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = { 93,/* lineNo */
  77,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = { 68,/* lineNo */
  53,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = { 87,/* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = { 88,/* lineNo */
  44,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = { 70,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = { 71,/* lineNo */
  54,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = { 219,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = { 120,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = { 94,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = { 121,/* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = { 95,/* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = { 121,/* lineNo */
  45,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = { 95,/* lineNo */
  45,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = { 1,/* lineNo */
  38,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = { 57,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = { 71,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = { 108,/* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = { 125,/* lineNo */
  18,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = { 33,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo cc_emlrtRTEI = { 142,/* lineNo */
  22,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo dc_emlrtRTEI = { 142,/* lineNo */
  34,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo ec_emlrtRTEI = { 142,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo fc_emlrtRTEI = { 16,/* lineNo */
  5,                                   /* colNo */
  "abs",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m"/* pName */
};

static emlrtRTEInfo gc_emlrtRTEI = { 19,/* lineNo */
  24,                                  /* colNo */
  "scalexpAllocNoCheck",               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAllocNoCheck.m"/* pName */
};

static emlrtRTEInfo hc_emlrtRTEI = { 45,/* lineNo */
  6,                                   /* colNo */
  "applyBinaryScalarFunction",         /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pName */
};

static emlrtRTEInfo ic_emlrtRTEI = { 58,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtRTEInfo jc_emlrtRTEI = { 143,/* lineNo */
  41,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = { 42,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = { 143,/* lineNo */
  42,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = { 140,/* lineNo */
  43,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = { 171,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = { 184,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = { 186,/* lineNo */
  20,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = { 186,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = { 15,/* lineNo */
  5,                                   /* colNo */
  "any",                               /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\any.m"/* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = { 187,/* lineNo */
  14,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = { 379,/* lineNo */
  5,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = { 187,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = { 50,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = { 189,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = { 187,/* lineNo */
  15,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = { 228,/* lineNo */
  41,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = { 223,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = { 228,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo fd_emlrtRTEI = { 229,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = { 230,/* lineNo */
  75,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = { 230,/* lineNo */
  55,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo id_emlrtRTEI = { 230,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = { 230,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = { 231,/* lineNo */
  42,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo ld_emlrtRTEI = { 240,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo md_emlrtRTEI = { 241,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = { 245,/* lineNo */
  35,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo od_emlrtRTEI = { 238,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = { 245,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = { 246,/* lineNo */
  35,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo rd_emlrtRTEI = { 246,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo td_emlrtRTEI = { 202,/* lineNo */
  52,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  29,                                  /* lineNo */
  27,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  32,                                  /* lineNo */
  22,                                  /* colNo */
  "vphi_j",                            /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  58,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  62,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  32,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  33,                                  /* lineNo */
  34,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { -1,    /* nDims */
  33,                                  /* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  37,                                  /* lineNo */
  19,                                  /* colNo */
  "y_all",                             /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo ud_emlrtRTEI = { 41,/* lineNo */
  11,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  45,                                  /* lineNo */
  28,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  48,                                  /* lineNo */
  25,                                  /* colNo */
  "phi_k",                             /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo vd_emlrtRTEI = { 68,/* lineNo */
  51,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 71,    /* lineNo */
  56,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  56,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = { 71,  /* lineNo */
  71,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  71,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c_emlrtDCI = { 87,  /* lineNo */
  52,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  52,                                  /* colNo */
  "C_perms",                           /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = { 88,  /* lineNo */
  40,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo m_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  40,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo n_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  42,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = { 93,  /* lineNo */
  64,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo o_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  64,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo p_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  66,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = { 93,  /* lineNo */
  96,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  96,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  98,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = { 93,  /* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo s_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  36,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  93,                                  /* lineNo */
  38,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo b_emlrtECI = { -1,  /* nDims */
  93,                                  /* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtDCInfo h_emlrtDCI = { 94,  /* lineNo */
  59,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo u_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  94,                                  /* lineNo */
  59,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  94,                                  /* lineNo */
  61,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo i_emlrtDCI = { 95,  /* lineNo */
  64,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  64,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  66,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo j_emlrtDCI = { 95,  /* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  36,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  95,                                  /* lineNo */
  38,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c_emlrtECI = { -1,  /* nDims */
  95,                                  /* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtBCInfo bb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  103,                                 /* lineNo */
  31,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  106,                                 /* lineNo */
  26,                                  /* colNo */
  "vphi_j",                            /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo wd_emlrtRTEI = { 113,/* lineNo */
  23,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtBCInfo db_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  114,                                 /* lineNo */
  47,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  114,                                 /* lineNo */
  49,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  114,                                 /* lineNo */
  51,                                  /* colNo */
  "a_priori_beliefs",                  /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  115,                                 /* lineNo */
  97,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo hb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  115,                                 /* lineNo */
  99,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ib_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  64,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  66,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  96,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo lb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  98,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo mb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  36,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  119,                                 /* lineNo */
  38,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo d_emlrtECI = { -1,  /* nDims */
  119,                                 /* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtBCInfo ob_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  120,                                 /* lineNo */
  59,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  120,                                 /* lineNo */
  61,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  64,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  66,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  36,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  121,                                 /* lineNo */
  38,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo e_emlrtECI = { -1,  /* nDims */
  121,                                 /* lineNo */
  17,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtBCInfo ub_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  125,                                 /* lineNo */
  51,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  125,                                 /* lineNo */
  60,                                  /* colNo */
  "vphi_j",                            /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  125,                                 /* lineNo */
  53,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  126,                                 /* lineNo */
  28,                                  /* colNo */
  "soft_bits",                         /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  126,                                 /* lineNo */
  32,                                  /* colNo */
  "soft_bits",                         /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo f_emlrtECI = { -1,  /* nDims */
  126,                                 /* lineNo */
  18,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo xd_emlrtRTEI = { 387,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo yd_emlrtRTEI = { 22,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo ae_emlrtRTEI = { 77,/* lineNo */
  27,                                  /* colNo */
  "unaryMinOrMax",                     /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\unaryMinOrMax.m"/* pName */
};

static emlrtRTEInfo be_emlrtRTEI = { 88,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo ce_emlrtRTEI = { 83,/* lineNo */
  23,                                  /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtDCInfo k_emlrtDCI = { 18,  /* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo l_emlrtDCI = { 18,  /* lineNo */
  21,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo m_emlrtDCI = { 26,  /* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo n_emlrtDCI = { 27,  /* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo o_emlrtDCI = { 18,  /* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo p_emlrtDCI = { 18,  /* lineNo */
  1,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = { 26,  /* lineNo */
  5,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = { 27,  /* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  128,                                 /* lineNo */
  18,                                  /* colNo */
  "hard_symbols",                      /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  115,                                 /* lineNo */
  81,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  115,                                 /* lineNo */
  21,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  87,                                  /* lineNo */
  52,                                  /* colNo */
  "F_int",                             /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  88,                                  /* lineNo */
  44,                                  /* colNo */
  "mess_from_FN_to_VN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  34,                                  /* colNo */
  "y",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = { 63,  /* lineNo */
  34,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  219,                                 /* lineNo */
  39,                                  /* colNo */
  "Aq",                                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = { 219, /* lineNo */
  39,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  58,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = { 71,  /* lineNo */
  58,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  44,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo v_emlrtDCI = { 63,  /* lineNo */
  44,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  44,                                  /* colNo */
  "Aq",                                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  63,                                  /* lineNo */
  25,                                  /* colNo */
  "y",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo w_emlrtDCI = { 63,  /* lineNo */
  25,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  29,                                  /* colNo */
  "Aq",                                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo x_emlrtDCI = { 70,  /* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  71,                                  /* lineNo */
  54,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = { 71,  /* lineNo */
  54,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = { 142,/* lineNo */
  24,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  24,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = { 142,/* lineNo */
  28,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  28,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = { 142,/* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  142,                                 /* lineNo */
  36,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo g_emlrtECI = { 2,   /* nDims */
  142,                                 /* lineNo */
  14,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtRTEInfo he_emlrtRTEI = { 17,/* lineNo */
  19,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
};

static emlrtBCInfo qc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  141,                                 /* lineNo */
  24,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo db_emlrtDCI = { 141,/* lineNo */
  24,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo je_emlrtRTEI = { 170,/* lineNo */
  16,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtBCInfo rc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  155,                                 /* lineNo */
  22,                                  /* colNo */
  "weak_users",                        /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  169,                                 /* lineNo */
  16,                                  /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = { 169,/* lineNo */
  16,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  26,                                  /* colNo */
  "xj",                                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = { 172,/* lineNo */
  26,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo uc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  173,                                 /* lineNo */
  27,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = { 173,/* lineNo */
  27,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  169,                                 /* lineNo */
  9,                                   /* colNo */
  "H",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = { 169,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  172,                                 /* lineNo */
  13,                                  /* colNo */
  "xj",                                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = { 172,/* lineNo */
  13,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo ke_emlrtRTEI = { 378,/* lineNo */
  1,                                   /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtRTEInfo le_emlrtRTEI = { 80,/* lineNo */
  27,                                  /* colNo */
  "nullAssignment",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\nullAssignment.m"/* pName */
};

static emlrtBCInfo xc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  186,                                 /* lineNo */
  24,                                  /* colNo */
  "F",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yc_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  184,                                 /* lineNo */
  18,                                  /* colNo */
  "C",                                 /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ad_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  231,                                 /* lineNo */
  67,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = { 231,/* lineNo */
  67,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo bd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  231,                                 /* lineNo */
  65,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = { 231,/* lineNo */
  65,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo h_emlrtECI = { 2,   /* nDims */
  230,                                 /* lineNo */
  36,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtBCInfo cd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  230,                                 /* lineNo */
  72,                                  /* colNo */
  "projection_index",                  /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo dd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  39,                                  /* colNo */
  "C_perms",                           /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = { 229,/* lineNo */
  39,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtECInfo i_emlrtECI = { 2,   /* nDims */
  228,                                 /* lineNo */
  41,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtDCInfo mb_emlrtDCI = { 230,/* lineNo */
  82,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = { 230,/* lineNo */
  82,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo ed_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  227,                                 /* lineNo */
  17,                                  /* colNo */
  "strong_users",                      /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo fd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  228,                                 /* lineNo */
  41,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo gd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  229,                                 /* lineNo */
  39,                                  /* colNo */
  "F_int",                             /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = { 230,/* lineNo */
  75,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = { 230,/* lineNo */
  75,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo hd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  231,                                 /* lineNo */
  69,                                  /* colNo */
  "mess_from_VN_to_FN",                /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo qb_emlrtDCI = { 231,/* lineNo */
  69,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtRTEInfo pe_emlrtRTEI = { 243,/* lineNo */
  15,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m"/* pName */
};

static emlrtBCInfo id_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  245,                                 /* lineNo */
  62,                                  /* colNo */
  "codewords_binary_labels",           /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo jd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  61,                                  /* colNo */
  "codewords_binary_labels",           /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo kd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  43,                                  /* colNo */
  "soft_bits",                         /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo rb_emlrtDCI = { 240,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo sb_emlrtDCI = { 240,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo tb_emlrtDCI = { 241,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo ub_emlrtDCI = { 241,/* lineNo */
  29,                                  /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo vb_emlrtDCI = { 240,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo wb_emlrtDCI = { 240,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtDCInfo xb_emlrtDCI = { 241,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo yb_emlrtDCI = { 241,/* lineNo */
  9,                                   /* colNo */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  4                                    /* checkKind */
};

static emlrtBCInfo ld_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  245,                                 /* lineNo */
  35,                                  /* colNo */
  "pmf",                               /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo md_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  246,                                 /* lineNo */
  35,                                  /* colNo */
  "pmf",                               /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo nd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  248,                                 /* lineNo */
  13,                                  /* colNo */
  "soft_bits",                         /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo od_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  249,                                 /* lineNo */
  13,                                  /* colNo */
  "hard_bits",                         /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo pd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  202,                                 /* lineNo */
  77,                                  /* colNo */
  "length_of_each_counter",            /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo qd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  202,                                 /* lineNo */
  75,                                  /* colNo */
  "length_of_each_counter",            /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo rd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  200,                                 /* lineNo */
  25,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo sd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  200,                                 /* lineNo */
  72,                                  /* colNo */
  "length_of_each_counter",            /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo td_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  200,                                 /* lineNo */
  42,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo ud_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  38,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo vd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  53,                                  /* colNo */
  "length_of_each_counter",            /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo wd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  203,                                 /* lineNo */
  21,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo xd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  206,                                 /* lineNo */
  16,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo yd_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  207,                                 /* lineNo */
  17,                                  /* colNo */
  "counter",                           /* aName */
  "TB_ESGA_MPA_v0",                    /* fName */
  "C:\\Users\\Bruno Fontana\\Documents\\MATLAB\\SCMA_2020_TB_ESGA_MPA\\funcs_2020\\TB_ESGA_MPA_v0.m",/* pName */
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
  coder_internal_ref_4 *M, const coder_internal_ref_7 *mess_from_VN_to_FN, const
  coder_internal_ref_4 *eps_val_num);
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
  real_T h_kj_re;
  real_T h_kj_im;
  emxArray_creal_T *hk;
  emxArray_real_T *y;
  int32_T b_hk[2];
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
  emxInit_creal_T(sp, &b_H, 2, &cc_emlrtRTEI, true);

  /*  end packet index */
  /*  HELPER FUNCTIONS */
  /*     %% Fix user j, Find strong and weak users @ FN k  */
  i5 = H->contents->size[0];
  d1 = k->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &db_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d1;
  if (!((loop_ub >= 1) && (loop_ub <= i5))) {
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i5, &qc_emlrtBCI, sp);
  }

  i5 = H->contents->size[1];
  d1 = j->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &db_emlrtDCI, sp);
  }

  idx = (int32_T)d1;
  if (!((idx >= 1) && (idx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(idx, 1, i5, &qc_emlrtBCI, sp);
  }

  i5 = H->contents->size[2];
  d1 = nr->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &db_emlrtDCI, sp);
  }

  nx = (int32_T)d1;
  if (!((nx >= 1) && (nx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(nx, 1, i5, &qc_emlrtBCI, sp);
  }

  h_kj_re = H->contents->data[((loop_ub + H->contents->size[0] * (idx - 1)) +
    H->contents->size[0] * H->contents->size[1] * (nx - 1)) - 1].re;
  i5 = H->contents->size[0];
  d1 = k->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &db_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d1;
  if (!((loop_ub >= 1) && (loop_ub <= i5))) {
    emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i5, &qc_emlrtBCI, sp);
  }

  i5 = H->contents->size[1];
  d1 = j->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &db_emlrtDCI, sp);
  }

  idx = (int32_T)d1;
  if (!((idx >= 1) && (idx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(idx, 1, i5, &qc_emlrtBCI, sp);
  }

  i5 = H->contents->size[2];
  d1 = nr->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &db_emlrtDCI, sp);
  }

  nx = (int32_T)d1;
  if (!((nx >= 1) && (nx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(nx, 1, i5, &qc_emlrtBCI, sp);
  }

  h_kj_im = H->contents->data[((loop_ub + H->contents->size[0] * (idx - 1)) +
    H->contents->size[0] * H->contents->size[1] * (nx - 1)) - 1].im;
  loop_ub = H->contents->size[1];
  d1 = nr->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &bb_emlrtDCI, sp);
  }

  i5 = H->contents->size[2];
  idx = (int32_T)d1;
  if (!((idx >= 1) && (idx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(idx, 1, i5, &oc_emlrtBCI, sp);
  }

  d1 = k->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &ab_emlrtDCI, sp);
  }

  i5 = H->contents->size[0];
  nx = (int32_T)d1;
  if (!((nx >= 1) && (nx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(nx, 1, i5, &nc_emlrtBCI, sp);
  }

  i5 = b_H->size[0] * b_H->size[1];
  b_H->size[0] = 1;
  b_H->size[1] = loop_ub;
  emxEnsureCapacity_creal_T(sp, b_H, i5, &cc_emlrtRTEI);
  for (i5 = 0; i5 < loop_ub; i5++) {
    b_H->data[b_H->size[0] * i5] = H->contents->data[((nx + H->contents->size[0]
      * i5) + H->contents->size[0] * H->contents->size[1] * (idx - 1)) - 1];
  }

  emxInit_creal_T(sp, &hk, 2, &ec_emlrtRTEI, true);
  emxInit_real_T(sp, &y, 2, &lc_emlrtRTEI, true);
  st.site = &xb_emlrtRSI;
  squeeze(&st, b_H, hk);
  loop_ub = F->contents->size[1];
  d1 = k->contents;
  if (d1 != (int32_T)muDoubleScalarFloor(d1)) {
    emlrtIntegerCheckR2012b(d1, &cb_emlrtDCI, sp);
  }

  i5 = F->contents->size[0];
  nx = (int32_T)d1;
  if (!((nx >= 1) && (nx <= i5))) {
    emlrtDynamicBoundsCheckR2012b(nx, 1, i5, &pc_emlrtBCI, sp);
  }

  i5 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, y, i5, &dc_emlrtRTEI);
  emxFree_creal_T(sp, &b_H);
  for (i5 = 0; i5 < loop_ub; i5++) {
    y->data[y->size[0] * i5] = F->contents->data[(nx + F->contents->size[0] * i5)
      - 1];
  }

  for (i5 = 0; i5 < 2; i5++) {
    b_hk[i5] = hk->size[i5];
  }

  for (i5 = 0; i5 < 2; i5++) {
    b_y[i5] = y->size[i5];
  }

  if ((b_hk[0] != b_y[0]) || (b_hk[1] != b_y[1])) {
    emlrtSizeEqCheckNDR2012b(&b_hk[0], &b_y[0], &g_emlrtECI, sp);
  }

  loop_ub = hk->size[0] * hk->size[1] - 1;
  i5 = hk->size[0] * hk->size[1];
  hk->size[0] = 1;
  emxEnsureCapacity_creal_T(sp, hk, i5, &ec_emlrtRTEI);
  for (i5 = 0; i5 <= loop_ub; i5++) {
    hk->data[i5].re *= y->data[i5];
    hk->data[i5].im *= y->data[i5];
  }

  emxInit_real_T(sp, &a, 2, &lc_emlrtRTEI, true);
  st.site = &yb_emlrtRSI;
  b_st.site = &fc_emlrtRSI;
  i5 = a->size[0] * a->size[1];
  a->size[0] = 1;
  a->size[1] = hk->size[1];
  emxEnsureCapacity_real_T(&b_st, a, i5, &fc_emlrtRTEI);
  c_st.site = &gc_emlrtRSI;
  overflow = ((!(1 > hk->size[1])) && (hk->size[1] > 2147483646));
  if (overflow) {
    d_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (nx = 0; nx < hk->size[1]; nx++) {
    a->data[nx] = muDoubleScalarHypot(hk->data[nx].re, hk->data[nx].im);
  }

  emxFree_creal_T(&b_st, &hk);
  emxInit_real_T(&b_st, &z, 2, &gc_emlrtRTEI, true);
  h_kj_re = muDoubleScalarHypot(h_kj_re, h_kj_im);
  st.site = &yb_emlrtRSI;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &ic_emlrtRSI;
  d_st.site = &jc_emlrtRSI;
  i5 = z->size[0] * z->size[1];
  z->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&d_st, z, i5, &gc_emlrtRTEI);
  loop_ub = a->size[1];
  i5 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&d_st, y, i5, &hc_emlrtRTEI);
  if (!dimagree(y, a)) {
    emlrtErrorWithMessageIdR2018a(&d_st, &he_emlrtRTEI, "MATLAB:dimagree",
      "MATLAB:dimagree", 0);
  }

  i5 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = a->size[1];
  emxEnsureCapacity_real_T(&c_st, y, i5, &ic_emlrtRTEI);
  d_st.site = &kc_emlrtRSI;
  e_st.site = &lc_emlrtRSI;
  overflow = ((!(1 > z->size[1])) && (z->size[1] > 2147483646));
  emxFree_real_T(&e_st, &z);
  if (overflow) {
    f_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (nx = 0; nx < loop_ub; nx++) {
    y->data[nx] = a->data[nx] * a->data[nx];
  }

  emxFree_real_T(&d_st, &a);
  emxInit_boolean_T(&d_st, &x, 2, &jc_emlrtRTEI, true);
  st.site = &yb_emlrtRSI;
  b_st.site = &mc_emlrtRSI;
  c_st.site = &hc_emlrtRSI;
  st.site = &yb_emlrtRSI;
  i5 = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = y->size[1];
  emxEnsureCapacity_boolean_T(&st, x, i5, &jc_emlrtRTEI);
  h_kj_re = r_th->contents * (h_kj_re * h_kj_re);
  loop_ub = y->size[0] * y->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    x->data[i5] = (y->data[i5] >= h_kj_re);
  }

  emxInit_int32_T1(&st, &ii, 2, &wb_emlrtRTEI, true);
  b_st.site = &ib_emlrtRSI;
  nx = x->size[1];
  c_st.site = &jb_emlrtRSI;
  idx = 0;
  i5 = ii->size[0] * ii->size[1];
  ii->size[0] = 1;
  ii->size[1] = x->size[1];
  emxEnsureCapacity_int32_T(&c_st, ii, i5, &h_emlrtRTEI);
  d_st.site = &kb_emlrtRSI;
  overflow = ((!(1 > x->size[1])) && (x->size[1] > 2147483646));
  if (overflow) {
    e_st.site = &lb_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&c_st, &xd_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (x->size[1] == 1) {
    if (idx == 0) {
      i5 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = 0;
      emxEnsureCapacity_int32_T(&c_st, ii, i5, &k_emlrtRTEI);
    }
  } else {
    i5 = ii->size[0] * ii->size[1];
    if (1 > idx) {
      ii->size[1] = 0;
    } else {
      ii->size[1] = idx;
    }

    emxEnsureCapacity_int32_T(&c_st, ii, i5, &k_emlrtRTEI);
  }

  emxFree_boolean_T(&c_st, &x);
  st.site = &yb_emlrtRSI;
  b_st.site = &nc_emlrtRSI;
  i5 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = ii->size[1];
  emxEnsureCapacity_real_T(&b_st, y, i5, &kc_emlrtRTEI);
  loop_ub = ii->size[0] * ii->size[1];
  for (i5 = 0; i5 < loop_ub; i5++) {
    y->data[i5] = ii->data[i5];
  }

  emxFree_int32_T(&b_st, &ii);
  emxInit_int32_T(&b_st, &ia, 1, &mc_emlrtRTEI, true);
  emxInit_int32_T(&b_st, &ib, 1, &mc_emlrtRTEI, true);
  c_st.site = &nb_emlrtRSI;
  b_do_vectors(&c_st, y, phi_k_except_j->contents, strong_users, ia, ib);
  st.site = &ac_emlrtRSI;
  b_st.site = &mb_emlrtRSI;
  c_st.site = &nb_emlrtRSI;
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
  real_T h_kj_re;
  real_T h_kj_im;
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
    emxInit_creal_T2(sp, &xj, 1, &qc_emlrtRTEI, true);
    while (uu <= weak_users->size[1] - 1) {
      i6 = weak_users->size[1];
      i7 = 1 + uu;
      if (!((i7 >= 1) && (i7 <= i6))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &rc_emlrtBCI, sp);
      }

      user = weak_users->data[i7 - 1];
      st.site = &rc_emlrtRSI;

      /*     %% Get mean and variance of codebook from "user" @ subcarrier k  */
      Expect_over_x_kj_re = 0.0;
      Expect_over_x_kj_im = 0.0;
      Expect_over_squared_norm_x_kj = 0.0;
      i6 = H->contents->size[0];
      d2 = k->contents;
      if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
        emlrtIntegerCheckR2012b(d2, &hb_emlrtDCI, &st);
      }

      i7 = (int32_T)d2;
      if (!((i7 >= 1) && (i7 <= i6))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &vc_emlrtBCI, &st);
      }

      i6 = H->contents->size[1];
      d2 = weak_users->data[uu];
      if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
        emlrtIntegerCheckR2012b(d2, &hb_emlrtDCI, &st);
      }

      i8 = (int32_T)d2;
      if (!((i8 >= 1) && (i8 <= i6))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, i6, &vc_emlrtBCI, &st);
      }

      i6 = H->contents->size[2];
      d2 = nr->contents;
      if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
        emlrtIntegerCheckR2012b(d2, &hb_emlrtDCI, &st);
      }

      mm = (int32_T)d2;
      if (!((mm >= 1) && (mm <= i6))) {
        emlrtDynamicBoundsCheckR2012b(mm, 1, i6, &vc_emlrtBCI, &st);
      }

      h_kj_re = H->contents->data[((i7 + H->contents->size[0] * (i8 - 1)) +
        H->contents->size[0] * H->contents->size[1] * (mm - 1)) - 1].re;
      i6 = H->contents->size[0];
      d2 = k->contents;
      if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
        emlrtIntegerCheckR2012b(d2, &eb_emlrtDCI, &st);
      }

      i7 = (int32_T)d2;
      if (!((i7 >= 1) && (i7 <= i6))) {
        emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &sc_emlrtBCI, &st);
      }

      i6 = H->contents->size[1];
      d2 = weak_users->data[uu];
      if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
        emlrtIntegerCheckR2012b(d2, &eb_emlrtDCI, &st);
      }

      i8 = (int32_T)d2;
      if (!((i8 >= 1) && (i8 <= i6))) {
        emlrtDynamicBoundsCheckR2012b(i8, 1, i6, &sc_emlrtBCI, &st);
      }

      i6 = H->contents->size[2];
      d2 = nr->contents;
      if (d2 != (int32_T)muDoubleScalarFloor(d2)) {
        emlrtIntegerCheckR2012b(d2, &eb_emlrtDCI, &st);
      }

      mm = (int32_T)d2;
      if (!((mm >= 1) && (mm <= i6))) {
        emlrtDynamicBoundsCheckR2012b(mm, 1, i6, &sc_emlrtBCI, &st);
      }

      h_kj_im = H->contents->data[((i7 + H->contents->size[0] * (i8 - 1)) +
        H->contents->size[0] * H->contents->size[1] * (mm - 1)) - 1].im;
      d2 = M->contents;
      emlrtForLoopVectorCheckR2012b(1.0, 1.0, d2, mxDOUBLE_CLASS, (int32_T)d2,
        &je_emlrtRTEI, &st);
      mm = 0;
      while (mm <= (int32_T)d2 - 1) {
        b_st.site = &sc_emlrtRSI;
        spread_symbol(&b_st, C, F, user, 1.0 + (real_T)mm, xj);
        i6 = xj->size[0];
        p_x_kjm = k->contents;
        if (p_x_kjm != (int32_T)muDoubleScalarFloor(p_x_kjm)) {
          emlrtIntegerCheckR2012b(p_x_kjm, &ib_emlrtDCI, &st);
        }

        i7 = (int32_T)p_x_kjm;
        if (!((i7 >= 1) && (i7 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &wc_emlrtBCI, &st);
        }

        x_kk_ee_me_re = xj->data[i7 - 1].re;
        i6 = xj->size[0];
        p_x_kjm = k->contents;
        if (p_x_kjm != (int32_T)muDoubleScalarFloor(p_x_kjm)) {
          emlrtIntegerCheckR2012b(p_x_kjm, &fb_emlrtDCI, &st);
        }

        i7 = (int32_T)p_x_kjm;
        if (!((i7 >= 1) && (i7 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &tc_emlrtBCI, &st);
        }

        x_kk_ee_me_im = xj->data[i7 - 1].im;
        i6 = mess_from_VN_to_FN->contents->size[0];
        i7 = (int32_T)user;
        if (!((i7 >= 1) && (i7 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(i7, 1, i6, &uc_emlrtBCI, &st);
        }

        i6 = mess_from_VN_to_FN->contents->size[1];
        p_x_kjm = k->contents;
        if (p_x_kjm != (int32_T)muDoubleScalarFloor(p_x_kjm)) {
          emlrtIntegerCheckR2012b(p_x_kjm, &gb_emlrtDCI, &st);
        }

        i8 = (int32_T)p_x_kjm;
        if (!((i8 >= 1) && (i8 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(i8, 1, i6, &uc_emlrtBCI, &st);
        }

        i6 = mess_from_VN_to_FN->contents->size[2];
        if (!((mm + 1 >= 1) && (mm + 1 <= i6))) {
          emlrtDynamicBoundsCheckR2012b(mm + 1, 1, i6, &uc_emlrtBCI, &st);
        }

        p_x_kjm = mess_from_VN_to_FN->contents->data[((i7 +
          mess_from_VN_to_FN->contents->size[0] * (i8 - 1)) +
          mess_from_VN_to_FN->contents->size[0] * mess_from_VN_to_FN->
          contents->size[1] * mm) - 1];
        p_x_kjm = muDoubleScalarExp(p_x_kjm);
        Expect_over_x_kj_re += p_x_kjm * x_kk_ee_me_re;
        Expect_over_x_kj_im += p_x_kjm * x_kk_ee_me_im;
        x_kk_ee_me_re = muDoubleScalarHypot(x_kk_ee_me_re, x_kk_ee_me_im);
        b_st.site = &tc_emlrtRSI;
        Expect_over_squared_norm_x_kj += x_kk_ee_me_re * x_kk_ee_me_re * p_x_kjm;
        mm++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }

      x_kk_ee_me_re = muDoubleScalarHypot(h_kj_re, h_kj_im);
      p_x_kjm = muDoubleScalarHypot(Expect_over_x_kj_re, Expect_over_x_kj_im);
      b_st.site = &uc_emlrtRSI;
      b_st.site = &uc_emlrtRSI;
      adapt_mean->re += h_kj_re * Expect_over_x_kj_re - h_kj_im *
        Expect_over_x_kj_im;
      adapt_mean->im += h_kj_re * Expect_over_x_kj_im + h_kj_im *
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
  int32_T i11;
  real_T d3;
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
  i11 = soft_bits->size[0] * soft_bits->size[1];
  soft_bits->size[0] = 1;
  d3 = kb->contents;
  if (!(d3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d3, &sb_emlrtDCI, sp);
  }

  if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
    emlrtIntegerCheckR2012b(d3, &rb_emlrtDCI, sp);
  }

  soft_bits->size[1] = (int32_T)d3;
  emxEnsureCapacity_real_T(sp, soft_bits, i11, &ld_emlrtRTEI);
  d3 = kb->contents;
  if (!(d3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d3, &wb_emlrtDCI, sp);
  }

  if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
    emlrtIntegerCheckR2012b(d3, &vb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d3;
  for (i11 = 0; i11 < loop_ub; i11++) {
    soft_bits->data[i11] = 0.0;
  }

  emxInit_int8_T1(sp, &hard_bits, 2, &md_emlrtRTEI, true);
  i11 = hard_bits->size[0] * hard_bits->size[1];
  hard_bits->size[0] = 1;
  d3 = kb->contents;
  if (!(d3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d3, &ub_emlrtDCI, sp);
  }

  if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
    emlrtIntegerCheckR2012b(d3, &tb_emlrtDCI, sp);
  }

  hard_bits->size[1] = (int32_T)d3;
  emxEnsureCapacity_int8_T1(sp, hard_bits, i11, &md_emlrtRTEI);
  d3 = kb->contents;
  if (!(d3 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d3, &yb_emlrtDCI, sp);
  }

  if (d3 != (int32_T)muDoubleScalarFloor(d3)) {
    emlrtIntegerCheckR2012b(d3, &xb_emlrtDCI, sp);
  }

  loop_ub = (int32_T)d3;
  for (i11 = 0; i11 < loop_ub; i11++) {
    hard_bits->data[i11] = 0;
  }

  d3 = kb->contents;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, d3, mxDOUBLE_CLASS, (int32_T)d3,
    &pe_emlrtRTEI, sp);
  n = 1;
  emxInit_real_T2(sp, &prob_set_b0, 1, &pd_emlrtRTEI, true);
  emxInit_real_T2(sp, &prob_set_b1, 1, &rd_emlrtRTEI, true);
  emxInit_boolean_T1(sp, &r4, 1, &od_emlrtRTEI, true);
  emxInit_int32_T(sp, &r5, 1, &od_emlrtRTEI, true);
  emxInit_int32_T(sp, &r6, 1, &od_emlrtRTEI, true);
  while (n - 1 <= (int32_T)d3 - 1) {
    /*  for each bit */
    loop_ub = codewords_binary_labels->contents->size[0];
    i11 = codewords_binary_labels->contents->size[1];
    if (!((n >= 1) && (n <= i11))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i11, &id_emlrtBCI, sp);
    }

    i11 = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity_boolean_T1(sp, r4, i11, &nd_emlrtRTEI);
    for (i11 = 0; i11 < loop_ub; i11++) {
      r4->data[i11] = !codewords_binary_labels->contents->data[i11 +
        codewords_binary_labels->contents->size[0] * (n - 1)];
    }

    st.site = &se_emlrtRSI;
    b_indexShapeCheck(&st, *(int32_T (*)[2])pmf->size, r4->size[0]);
    end = r4->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (r4->data[i]) {
        loop_ub++;
      }
    }

    i11 = r5->size[0];
    r5->size[0] = loop_ub;
    emxEnsureCapacity_int32_T1(sp, r5, i11, &od_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (r4->data[i]) {
        r5->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }

    i = pmf->size[0];
    i11 = prob_set_b0->size[0];
    prob_set_b0->size[0] = r5->size[0];
    emxEnsureCapacity_real_T2(sp, prob_set_b0, i11, &pd_emlrtRTEI);
    loop_ub = r5->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      end = r5->data[i11];
      if (!((end >= 1) && (end <= i))) {
        emlrtDynamicBoundsCheckR2012b(end, 1, i, &ld_emlrtBCI, sp);
      }

      prob_set_b0->data[i11] = pmf->data[end - 1];
    }

    st.site = &se_emlrtRSI;
    c_exp(&st, prob_set_b0);
    loop_ub = codewords_binary_labels->contents->size[0];
    i11 = codewords_binary_labels->contents->size[1];
    if (!((n >= 1) && (n <= i11))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i11, &jd_emlrtBCI, sp);
    }

    i11 = r4->size[0];
    r4->size[0] = loop_ub;
    emxEnsureCapacity_boolean_T1(sp, r4, i11, &qd_emlrtRTEI);
    for (i11 = 0; i11 < loop_ub; i11++) {
      r4->data[i11] = codewords_binary_labels->contents->data[i11 +
        codewords_binary_labels->contents->size[0] * (n - 1)];
    }

    st.site = &te_emlrtRSI;
    b_indexShapeCheck(&st, *(int32_T (*)[2])pmf->size, r4->size[0]);
    end = r4->size[0] - 1;
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (r4->data[i]) {
        loop_ub++;
      }
    }

    i11 = r6->size[0];
    r6->size[0] = loop_ub;
    emxEnsureCapacity_int32_T1(sp, r6, i11, &od_emlrtRTEI);
    loop_ub = 0;
    for (i = 0; i <= end; i++) {
      if (r4->data[i]) {
        r6->data[loop_ub] = i + 1;
        loop_ub++;
      }
    }

    i = pmf->size[0];
    i11 = prob_set_b1->size[0];
    prob_set_b1->size[0] = r6->size[0];
    emxEnsureCapacity_real_T2(sp, prob_set_b1, i11, &rd_emlrtRTEI);
    loop_ub = r6->size[0];
    for (i11 = 0; i11 < loop_ub; i11++) {
      end = r6->data[i11];
      if (!((end >= 1) && (end <= i))) {
        emlrtDynamicBoundsCheckR2012b(end, 1, i, &md_emlrtBCI, sp);
      }

      prob_set_b1->data[i11] = pmf->data[end - 1];
    }

    st.site = &te_emlrtRSI;
    c_exp(&st, prob_set_b1);
    st.site = &ue_emlrtRSI;
    A = b_sum(&st, prob_set_b0) + eps_val_num->contents;
    st.site = &ue_emlrtRSI;
    B = b_sum(&st, prob_set_b1) + eps_val_den->contents;
    A /= B;
    st.site = &ue_emlrtRSI;
    if (A < 0.0) {
      b_st.site = &fe_emlrtRSI;
      f_error(&b_st);
    }

    i11 = soft_bits->size[1];
    if (!((n >= 1) && (n <= i11))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i11, &nd_emlrtBCI, sp);
    }

    soft_bits->data[n - 1] = muDoubleScalarLog(A);
    i11 = soft_bits->size[1];
    end = (n - 1) + 1;
    if (!((end >= 1) && (end <= i11))) {
      emlrtDynamicBoundsCheckR2012b(end, 1, i11, &kd_emlrtBCI, sp);
    }

    i11 = hard_bits->size[1];
    if (!((n >= 1) && (n <= i11))) {
      emlrtDynamicBoundsCheckR2012b(n, 1, i11, &od_emlrtBCI, sp);
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
  coder_internal_ref_6 *strong_users, const coder_internal_ref_6 *counter, const
  coder_internal_ref_1 *C_perms, const coder_internal_ref_1 *F_int, const
  coder_internal_ref_4 *k, coder_internal_ref_6 *codeword_labels, const
  coder_internal_ref_4 *M, const coder_internal_ref_7 *mess_from_VN_to_FN, const
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
  emxInit_real_T(sp, &projection_index, 2, &ed_emlrtRTEI, true);
  emxInit_real_T(sp, &permutation_row, 2, &fd_emlrtRTEI, true);
  emxInit_int32_T1(sp, &r2, 2, &dd_emlrtRTEI, true);
  emxInit_real_T1(sp, &r3, 3, &kd_emlrtRTEI, true);
  emxInit_int8_T1(sp, &b, 2, &gd_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 2, &id_emlrtRTEI, true);
  emxInit_int32_T1(sp, &ii, 2, &wb_emlrtRTEI, true);
  if (0 <= varargin_2 - 1) {
    for (i9 = 0; i9 < 2; i9++) {
      iv1[i9] = strong_users->contents->size[i9];
    }
  }

  while (uu <= varargin_2 - 1) {
    i9 = strong_users->contents->size[1];
    if (!((uu + 1 >= 1) && (uu + 1 <= i9))) {
      emlrtDynamicBoundsCheckR2012b(uu + 1, 1, i9, &ed_emlrtBCI, sp);
    }

    u = strong_users->contents->data[uu];
    i9 = projection_index->size[0] * projection_index->size[1];
    projection_index->size[0] = 1;
    projection_index->size[1] = iv1[1];
    emxEnsureCapacity_real_T(sp, projection_index, i9, &cd_emlrtRTEI);
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
        &i_emlrtECI, sp);
    }

    i9 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = projection_index->size[1];
    emxEnsureCapacity_boolean_T(sp, x, i9, &cd_emlrtRTEI);
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
    emxEnsureCapacity_int32_T(sp, r2, i9, &dd_emlrtRTEI);
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
    emxEnsureCapacity_real_T(sp, projection_index, i9, &ed_emlrtRTEI);
    trueCount = counter->contents->size[1];
    loop_ub = r2->size[0] * r2->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      i10 = r2->data[i9];
      if (!((i10 >= 1) && (i10 <= trueCount))) {
        emlrtDynamicBoundsCheckR2012b(i10, 1, trueCount, &fd_emlrtBCI, sp);
      }

      projection_index->data[i9] = counter->contents->data[i10 - 1];
    }

    loop_ub = C_perms->contents->size[1];
    i9 = C_perms->contents->size[0];
    i10 = F_int->contents->size[0];
    c_projection_index = k->contents;
    if (c_projection_index != (int32_T)muDoubleScalarFloor(c_projection_index))
    {
      emlrtIntegerCheckR2012b(c_projection_index, &lb_emlrtDCI, sp);
    }

    trueCount = (int32_T)c_projection_index;
    if (!((trueCount >= 1) && (trueCount <= i10))) {
      emlrtDynamicBoundsCheckR2012b(trueCount, 1, i10, &gd_emlrtBCI, sp);
    }

    i10 = F_int->contents->size[1];
    if (u != (int32_T)muDoubleScalarFloor(u)) {
      emlrtIntegerCheckR2012b(u, &lb_emlrtDCI, sp);
    }

    nx = (int32_T)u;
    if (!((nx >= 1) && (nx <= i10))) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, i10, &gd_emlrtBCI, sp);
    }

    c_projection_index = F_int->contents->data[(trueCount + F_int->
      contents->size[0] * (nx - 1)) - 1];
    if (c_projection_index != (int32_T)muDoubleScalarFloor(c_projection_index))
    {
      emlrtIntegerCheckR2012b(c_projection_index, &lb_emlrtDCI, sp);
    }

    trueCount = (int32_T)c_projection_index;
    if (!((trueCount >= 1) && (trueCount <= i9))) {
      emlrtDynamicBoundsCheckR2012b(trueCount, 1, i9, &dd_emlrtBCI, sp);
    }

    i9 = permutation_row->size[0] * permutation_row->size[1];
    permutation_row->size[0] = 1;
    permutation_row->size[1] = loop_ub;
    emxEnsureCapacity_real_T(sp, permutation_row, i9, &fd_emlrtRTEI);
    for (i9 = 0; i9 < loop_ub; i9++) {
      permutation_row->data[permutation_row->size[0] * i9] = C_perms->
        contents->data[(trueCount + C_perms->contents->size[0] * i9) - 1];
    }

    /*  M columns */
    i9 = projection_index->size[1];
    if (!(1 <= i9)) {
      emlrtDynamicBoundsCheckR2012b(1, 1, i9, &cd_emlrtBCI, sp);
    }

    i9 = b->size[0] * b->size[1];
    b->size[0] = 1;
    c_projection_index = M->contents;
    if (!(c_projection_index >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c_projection_index, &nb_emlrtDCI, sp);
    }

    if (c_projection_index != (int32_T)muDoubleScalarFloor(c_projection_index))
    {
      emlrtIntegerCheckR2012b(c_projection_index, &mb_emlrtDCI, sp);
    }

    b->size[1] = (int32_T)c_projection_index;
    emxEnsureCapacity_int8_T1(sp, b, i9, &gd_emlrtRTEI);
    c_projection_index = M->contents;
    if (!(c_projection_index >= 0.0)) {
      emlrtNonNegativeCheckR2012b(c_projection_index, &pb_emlrtDCI, sp);
    }

    if (c_projection_index != (int32_T)muDoubleScalarFloor(c_projection_index))
    {
      emlrtIntegerCheckR2012b(c_projection_index, &ob_emlrtDCI, sp);
    }

    loop_ub = (int32_T)c_projection_index;
    for (i9 = 0; i9 < loop_ub; i9++) {
      b->data[i9] = 1;
    }

    c_projection_index = projection_index->data[0];
    i9 = projection_index->size[0] * projection_index->size[1];
    projection_index->size[0] = 1;
    projection_index->size[1] = b->size[1];
    emxEnsureCapacity_real_T(sp, projection_index, i9, &hd_emlrtRTEI);
    loop_ub = b->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      projection_index->data[projection_index->size[0] * i9] =
        c_projection_index * (real_T)b->data[b->size[0] * i9];
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
        &h_emlrtECI, sp);
    }

    st.site = &wd_emlrtRSI;
    i9 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = permutation_row->size[1];
    emxEnsureCapacity_boolean_T(&st, x, i9, &id_emlrtRTEI);
    loop_ub = permutation_row->size[0] * permutation_row->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      x->data[i9] = (permutation_row->data[i9] == projection_index->data[i9]);
    }

    b_st.site = &ib_emlrtRSI;
    nx = x->size[1];
    c_st.site = &jb_emlrtRSI;
    idx = 0;
    i9 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = x->size[1];
    emxEnsureCapacity_int32_T(&c_st, ii, i9, &h_emlrtRTEI);
    d_st.site = &kb_emlrtRSI;
    overflow = ((!(1 > x->size[1])) && (x->size[1] > 2147483646));
    if (overflow) {
      e_st.site = &lb_emlrtRSI;
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
      emlrtErrorWithMessageIdR2018a(&c_st, &xd_emlrtRTEI,
        "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
    }

    if (x->size[1] == 1) {
      if (idx == 0) {
        i9 = ii->size[0] * ii->size[1];
        ii->size[0] = 1;
        ii->size[1] = 0;
        emxEnsureCapacity_int32_T(&c_st, ii, i9, &k_emlrtRTEI);
      }
    } else {
      i9 = ii->size[0] * ii->size[1];
      if (1 > idx) {
        ii->size[1] = 0;
      } else {
        ii->size[1] = idx;
      }

      emxEnsureCapacity_int32_T(&c_st, ii, i9, &k_emlrtRTEI);
    }

    i9 = codeword_labels->contents->size[0] * codeword_labels->contents->size[1];
    codeword_labels->contents->size[0] = 1;
    codeword_labels->contents->size[1] = ii->size[1];
    emxEnsureCapacity_real_T(sp, codeword_labels->contents, i9, &jd_emlrtRTEI);
    loop_ub = ii->size[0] * ii->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      codeword_labels->contents->data[i9] = ii->data[i9];
    }

    trueCount = mess_from_VN_to_FN->contents->size[2];
    i9 = mess_from_VN_to_FN->contents->size[1];
    c_projection_index = k->contents;
    if (c_projection_index != (int32_T)muDoubleScalarFloor(c_projection_index))
    {
      emlrtIntegerCheckR2012b(c_projection_index, &jb_emlrtDCI, sp);
    }

    nx = (int32_T)c_projection_index;
    if (!((nx >= 1) && (nx <= i9))) {
      emlrtDynamicBoundsCheckR2012b(nx, 1, i9, &ad_emlrtBCI, sp);
    }

    i9 = mess_from_VN_to_FN->contents->size[0];
    if (u != (int32_T)muDoubleScalarFloor(u)) {
      emlrtIntegerCheckR2012b(u, &kb_emlrtDCI, sp);
    }

    idx = (int32_T)u;
    if (!((idx >= 1) && (idx <= i9))) {
      emlrtDynamicBoundsCheckR2012b(idx, 1, i9, &bd_emlrtBCI, sp);
    }

    i9 = r3->size[0] * r3->size[1] * r3->size[2];
    r3->size[0] = 1;
    r3->size[1] = 1;
    r3->size[2] = codeword_labels->contents->size[1];
    emxEnsureCapacity_real_T1(sp, r3, i9, &kd_emlrtRTEI);
    loop_ub = codeword_labels->contents->size[1];
    for (i9 = 0; i9 < loop_ub; i9++) {
      c_projection_index = codeword_labels->contents->data
        [codeword_labels->contents->size[0] * i9];
      if (c_projection_index != (int32_T)muDoubleScalarFloor(c_projection_index))
      {
        emlrtIntegerCheckR2012b(c_projection_index, &qb_emlrtDCI, sp);
      }

      i10 = (int32_T)c_projection_index;
      if (!((i10 >= 1) && (i10 <= trueCount))) {
        emlrtDynamicBoundsCheckR2012b(i10, 1, trueCount, &hd_emlrtBCI, sp);
      }

      r3->data[r3->size[0] * r3->size[1] * i9] = mess_from_VN_to_FN->
        contents->data[((idx + mess_from_VN_to_FN->contents->size[0] * (nx - 1))
                        + mess_from_VN_to_FN->contents->size[0] *
                        mess_from_VN_to_FN->contents->size[1] * (i10 - 1)) - 1];
    }

    st.site = &xd_emlrtRSI;
    b_exp(&st, r3);
    st.site = &xd_emlrtRSI;
    b_st.site = &xd_emlrtRSI;
    c_projection_index = sum(&b_st, r3) + eps_val_num->contents;
    if (c_projection_index < 0.0) {
      b_st.site = &fe_emlrtRSI;
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
  emxInit_creal_T2(sp, &cj, 1, &rc_emlrtRTEI, true);

  /*     %% N-dim symbol to K-dim symbol */
  i1 = C->contents->size[0];
  nrowx = C->contents->size[1];
  i2 = (int32_T)sym_index;
  if (!((i2 >= 1) && (i2 <= nrowx))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, nrowx, &yc_emlrtBCI, sp);
  }

  nrowx = cj->size[0];
  cj->size[0] = i1;
  emxEnsureCapacity_creal_T2(sp, cj, nrowx, &rc_emlrtRTEI);
  for (nrowx = 0; nrowx < i1; nrowx++) {
    cj->data[nrowx] = C->contents->data[nrowx + C->contents->size[0] * (i2 - 1)];
  }

  emxInit_real_T2(sp, &v, 1, &sc_emlrtRTEI, true);
  st.site = &vc_emlrtRSI;
  i1 = F->contents->size[0];
  nrowx = F->contents->size[1];
  i2 = (int32_T)user;
  if (!((i2 >= 1) && (i2 <= nrowx))) {
    emlrtDynamicBoundsCheckR2012b(i2, 1, nrowx, &xc_emlrtBCI, &st);
  }

  nrowx = v->size[0];
  v->size[0] = i1;
  emxEnsureCapacity_real_T2(&st, v, nrowx, &sc_emlrtRTEI);
  for (nrowx = 0; nrowx < i1; nrowx++) {
    v->data[nrowx] = F->contents->data[nrowx + F->contents->size[0] * (i2 - 1)];
  }

  emxInit_real_T(&st, &Tj, 2, &tc_emlrtRTEI, true);
  i2 = v->size[0];
  iy = v->size[0];
  nrowx = Tj->size[0] * Tj->size[1];
  Tj->size[0] = i2;
  Tj->size[1] = iy;
  emxEnsureCapacity_real_T(&st, Tj, nrowx, &tc_emlrtRTEI);
  i1 = i2 * iy;
  for (nrowx = 0; nrowx < i1; nrowx++) {
    Tj->data[nrowx] = 0.0;
  }

  b_st.site = &yc_emlrtRSI;
  overflow = ((!(1 > v->size[0])) && (v->size[0] > 2147483646));
  if (overflow) {
    c_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i2 = 0; i2 < v->size[0]; i2++) {
    Tj->data[i2 + Tj->size[0] * i2] = v->data[i2];
  }

  emxFree_real_T(&st, &v);
  emxInit_boolean_T(&st, &y, 2, &bd_emlrtRTEI, true);
  st.site = &wc_emlrtRSI;
  b_st.site = &ad_emlrtRSI;
  for (nrowx = 0; nrowx < 2; nrowx++) {
    outsize[nrowx] = (uint32_T)Tj->size[nrowx];
  }

  nrowx = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)outsize[1];
  emxEnsureCapacity_boolean_T(&b_st, y, nrowx, &uc_emlrtRTEI);
  i1 = (int32_T)outsize[1];
  for (nrowx = 0; nrowx < i1; nrowx++) {
    y->data[nrowx] = false;
  }

  i2 = 0;
  iy = -1;
  c_st.site = &bd_emlrtRSI;
  overflow = ((!(1 > Tj->size[1])) && (Tj->size[1] > 2147483646));
  if (overflow) {
    d_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (i = 1; i <= Tj->size[1]; i++) {
    i1 = i2;
    i2 += Tj->size[0];
    iy++;
    c_st.site = &cd_emlrtRSI;
    if ((!(i1 + 1 > i2)) && (i2 > 2147483646)) {
      d_st.site = &lb_emlrtRSI;
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

  st.site = &wc_emlrtRSI;
  i1 = y->size[0] * y->size[1] - 1;
  nrowx = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity_boolean_T(&st, y, nrowx, &vc_emlrtRTEI);
  for (nrowx = 0; nrowx <= i1; nrowx++) {
    y->data[nrowx] = !y->data[nrowx];
  }

  b_st.site = &dd_emlrtRSI;
  i1 = y->size[1];
  while ((i1 >= 1) && (!y->data[i1 - 1])) {
    i1--;
  }

  if (!(i1 <= Tj->size[1])) {
    emlrtErrorWithMessageIdR2018a(&b_st, &le_emlrtRTEI,
      "MATLAB:subsdeldimmismatch", "MATLAB:subsdeldimmismatch", 0);
  }

  b_st.site = &ed_emlrtRSI;
  nrowx = Tj->size[0];
  ncolx = Tj->size[1];
  c_st.site = &fd_emlrtRSI;
  i2 = 0;
  d_st.site = &id_emlrtRSI;
  overflow = ((!(1 > y->size[1])) && (y->size[1] > 2147483646));
  if (overflow) {
    e_st.site = &lb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }

  for (i1 = 1; i1 <= y->size[1]; i1++) {
    i2 += y->data[i1 - 1];
  }

  iy = Tj->size[1] - i2;
  i2 = 0;
  c_st.site = &gd_emlrtRSI;
  for (i1 = 1; i1 <= ncolx; i1++) {
    if ((i1 > y->size[1]) || (!y->data[i1 - 1])) {
      c_st.site = &hd_emlrtRSI;
      if ((!(1 > nrowx)) && (nrowx > 2147483646)) {
        d_st.site = &lb_emlrtRSI;
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
    emlrtErrorWithMessageIdR2018a(&b_st, &ke_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  if (1 > iy) {
    i1 = 0;
  } else {
    i1 = iy;
  }

  emxInit_real_T(&b_st, &b_Tj, 2, &wc_emlrtRTEI, true);
  i2 = Tj->size[0];
  nrowx = b_Tj->size[0] * b_Tj->size[1];
  b_Tj->size[0] = i2;
  b_Tj->size[1] = i1;
  emxEnsureCapacity_real_T(&b_st, b_Tj, nrowx, &wc_emlrtRTEI);
  for (nrowx = 0; nrowx < i1; nrowx++) {
    for (iy = 0; iy < i2; iy++) {
      b_Tj->data[iy + b_Tj->size[0] * nrowx] = Tj->data[iy + Tj->size[0] * nrowx];
    }
  }

  nrowx = Tj->size[0] * Tj->size[1];
  Tj->size[0] = b_Tj->size[0];
  Tj->size[1] = b_Tj->size[1];
  emxEnsureCapacity_real_T(&b_st, Tj, nrowx, &xc_emlrtRTEI);
  i1 = b_Tj->size[1];
  for (nrowx = 0; nrowx < i1; nrowx++) {
    i2 = b_Tj->size[0];
    for (iy = 0; iy < i2; iy++) {
      Tj->data[iy + Tj->size[0] * nrowx] = b_Tj->data[iy + b_Tj->size[0] * nrowx];
    }
  }

  emxFree_real_T(&b_st, &b_Tj);

  /*  spreading matrix */
  st.site = &xc_emlrtRSI;
  b_st.site = &jd_emlrtRSI;
  if (!(Tj->size[1] == cj->size[0])) {
    if (((Tj->size[0] == 1) && (Tj->size[1] == 1)) || (cj->size[0] == 1)) {
      emlrtErrorWithMessageIdR2018a(&b_st, &ce_emlrtRTEI,
        "Coder:toolbox:mtimes_noDynamicScalarExpansion",
        "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&b_st, &be_emlrtRTEI,
        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
    }
  }

  emxInit_creal_T(&b_st, &c_Tj, 2, &yc_emlrtRTEI, true);
  nrowx = c_Tj->size[0] * c_Tj->size[1];
  c_Tj->size[0] = Tj->size[0];
  c_Tj->size[1] = Tj->size[1];
  emxEnsureCapacity_creal_T(&st, c_Tj, nrowx, &yc_emlrtRTEI);
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
  emxEnsureCapacity_creal_T2(&st, xj, nrowx, &ad_emlrtRTEI);
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
  int32_T i14;
  int32_T n;
  emxArray_real_T *b_length_of_each_counter;
  int32_T i15;
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
  i14 = counter->size[1];
  n = 0;
  emxInit_real_T(sp, &b_length_of_each_counter, 2, &td_emlrtRTEI, true);
  while (n <= i14 - 1) {
    if (1.0 + (real_T)n == 1.0) {
      i15 = counter->size[1];
      loop_ub = n + 1;
      if (!((loop_ub >= 1) && (loop_ub <= i15))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i15, &rd_emlrtBCI, sp);
      }

      i15 = counter->size[1];
      loop_ub = n + 1;
      if (!((loop_ub >= 1) && (loop_ub <= i15))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i15, &td_emlrtBCI, sp);
      }

      i15 = length_of_each_counter->contents->size[1];
      loop_ub = n + 1;
      if (!((loop_ub >= 1) && (loop_ub <= i15))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i15, &sd_emlrtBCI, sp);
      }

      counter->data[0] = b_mod(counter->data[0] + 1.0,
        length_of_each_counter->contents->data[0] + 1.0);
    } else {
      i15 = length_of_each_counter->contents->size[1];
      if (!(1 <= i15)) {
        emlrtDynamicBoundsCheckR2012b(1, 1, i15, &qd_emlrtBCI, sp);
      }

      i15 = length_of_each_counter->contents->size[1];
      loop_ub = (int32_T)((1.0 + (real_T)n) - 1.0);
      if (!((loop_ub >= 1) && (loop_ub <= i15))) {
        emlrtDynamicBoundsCheckR2012b(loop_ub, 1, i15, &pd_emlrtBCI, sp);
      }

      loop_ub = (int32_T)((1.0 + (real_T)n) - 1.0);
      i15 = b_length_of_each_counter->size[0] * b_length_of_each_counter->size[1];
      b_length_of_each_counter->size[0] = 1;
      b_length_of_each_counter->size[1] = (int32_T)((1.0 + (real_T)n) - 1.0);
      emxEnsureCapacity_real_T(sp, b_length_of_each_counter, i15, &td_emlrtRTEI);
      for (i15 = 0; i15 < loop_ub; i15++) {
        b_length_of_each_counter->data[b_length_of_each_counter->size[0] * i15] =
          length_of_each_counter->contents->data[i15];
      }

      st.site = &ge_emlrtRSI;
      x = b_mod(marginal_prob_idx_cnt->contents, prod(&st,
                 b_length_of_each_counter));
      st.site = &ge_emlrtRSI;
      if (muDoubleScalarIsNaN(x)) {
        b_st.site = &he_emlrtRSI;
        g_error(&b_st);
      }

      if (!(x != 0.0)) {
        i15 = counter->size[1];
        if (!((n + 1 >= 1) && (n + 1 <= i15))) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, i15, &ud_emlrtBCI, sp);
        }

        i15 = length_of_each_counter->contents->size[1];
        if (!((n + 1 >= 1) && (n + 1 <= i15))) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, i15, &vd_emlrtBCI, sp);
        }

        i15 = counter->size[1];
        if (!((n + 1 >= 1) && (n + 1 <= i15))) {
          emlrtDynamicBoundsCheckR2012b(n + 1, 1, i15, &wd_emlrtBCI, sp);
        }

        counter->data[n] = b_mod(counter->data[n] + 1.0,
          length_of_each_counter->contents->data[n] + 1.0);
      }
    }

    i15 = counter->size[1];
    if (!((n + 1 >= 1) && (n + 1 <= i15))) {
      emlrtDynamicBoundsCheckR2012b(n + 1, 1, i15, &xd_emlrtBCI, sp);
    }

    if (counter->data[n] == 0.0) {
      i15 = counter->size[1];
      if (!((n + 1 >= 1) && (n + 1 <= i15))) {
        emlrtDynamicBoundsCheckR2012b(n + 1, 1, i15, &yd_emlrtBCI, sp);
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

void TB_ESGA_MPA_v0(const emlrtStack *sp, const emxArray_creal_T *y_all, const
                    emxArray_real_T *F, const emxArray_real_T *F_int, const
                    creal_T C_data[], const int32_T C_size[2], const real_T
                    C_perms_data[], const int32_T C_perms_size[2], const creal_T
                    Aq_data[], const int32_T Aq_size[1], const boolean_T
                    codewords_binary_labels_data[], const int32_T
                    codewords_binary_labels_size[2], const emxArray_creal_T *H,
                    real_T Tm, real_T r_th, const emxArray_real_T
                    *a_priori_beliefs, real_T varnoise, emxArray_real_T
                    *soft_bits, emxArray_real_T *hard_symbols)
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
  int32_T ns;
  coder_internal_ref_6 codeword_labels;
  coder_internal_ref_6 counter;
  coder_internal_ref_6 length_of_each_counter;
  coder_internal_ref_6 strong_users;
  coder_internal_ref_6 phi_k_except_j;
  coder_internal_ref_7 mess_from_VN_to_FN;
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
  emxArray_boolean_T *b_x;
  emxArray_real_T *c_varargin_1;
  emxArray_creal_T *c_H;
  emxArray_real_T *b_mess_from_VN_to_FN;
  emxArray_real_T *b_mess_from_FN_to_VN;
  emxArray_int32_T *b_counter;
  int32_T j;
  int32_T vlen;
  int32_T i2;
  int32_T i3;
  int32_T t;
  creal_T y_data[2000];
  int32_T nx;
  int32_T k;
  int32_T idx;
  coder_internal_ref_4 b_k;
  boolean_T overflow;
  int32_T i;
  int32_T c_ii;
  boolean_T exitg1;
  int32_T a_priori_beliefs_size[2];
  int32_T k1;
  int32_T b_a_priori_beliefs[2];
  int32_T b_j1;
  int32_T i4;
  coder_internal_ref_4 b_j;
  int32_T ib_size[1];
  int32_T iv0[3];
  int32_T q_id;
  real_T max_temp_0;
  real_T a_priori_beliefs_data[64];
  coder_internal_ref_4 nr;
  creal_T interference;
  real_T cte_norm;
  real_T pdf_exp_cte;
  real_T pdf_scaling_cte;
  real_T H_im;
  real_T yk_fix_re;
  real_T yk_fix_im;
  coder_internal_ref_4 marginal_prob_idx_cnt;
  real_T re;
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
  d_emxInitStruct_coder_internal_(sp, &b_F, &rb_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  i0 = b_F.contents->size[0] * b_F.contents->size[1];
  b_F.contents->size[0] = F->size[0];
  b_F.contents->size[1] = F->size[1];
  emxEnsureCapacity_real_T(&st, b_F.contents, i0, &emlrtRTEI);
  loop_ub = F->size[0] * F->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_F.contents->data[i0] = F->data[i0];
  }

  d_emxInitStruct_coder_internal_(&st, &b_F_int, &rb_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  i0 = b_F_int.contents->size[0] * b_F_int.contents->size[1];
  b_F_int.contents->size[0] = F_int->size[0];
  b_F_int.contents->size[1] = F_int->size[1];
  emxEnsureCapacity_real_T(&st, b_F_int.contents, i0, &emlrtRTEI);
  loop_ub = F_int->size[0] * F_int->size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    b_F_int.contents->data[i0] = F_int->data[i0];
  }

  e_emxInitStruct_coder_internal_(&st, &C, &rb_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  i0 = C.contents->size[0] * C.contents->size[1];
  C.contents->size[0] = C_size[0];
  C.contents->size[1] = C_size[1];
  emxEnsureCapacity_creal_T(&st, C.contents, i0, &emlrtRTEI);
  loop_ub = C_size[0] * C_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    C.contents->data[i0] = C_data[i0];
  }

  d_emxInitStruct_coder_internal_(&st, &C_perms, &rb_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  i0 = C_perms.contents->size[0] * C_perms.contents->size[1];
  C_perms.contents->size[0] = C_perms_size[0];
  C_perms.contents->size[1] = C_perms_size[1];
  emxEnsureCapacity_real_T(&st, C_perms.contents, i0, &emlrtRTEI);
  loop_ub = C_perms_size[0] * C_perms_size[1];
  for (i0 = 0; i0 < loop_ub; i0++) {
    C_perms.contents->data[i0] = C_perms_data[i0];
  }

  c_emxInitStruct_coder_internal_(&st, &codewords_binary_labels, &rb_emlrtRTEI,
    true);
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
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

  f_emxInitStruct_coder_internal_(&st, &b_H, &rb_emlrtRTEI, true);
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
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
  b_st.site = &cb_emlrtRSI;
  b_r_th.contents = r_th;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  st.site = &emlrtRSI;
  b_st.site = &cb_emlrtRSI;

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
    emlrtNonNegativeCheckR2012b(d0, &l_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &k_emlrtDCI, sp);
  }

  soft_bits->size[1] = (int32_T)d0;
  soft_bits->size[2] = y_all->size[2];
  emxEnsureCapacity_real_T1(sp, soft_bits, i1, &b_emlrtRTEI);
  d0 = kb.contents;
  if (!(d0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(d0, &p_emlrtDCI, sp);
  }

  if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
    emlrtIntegerCheckR2012b(d0, &o_emlrtDCI, sp);
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

  /*  */
  ns = 0;
  g_emxInitStruct_coder_internal_(sp, &codeword_labels, &gb_emlrtRTEI, true);
  g_emxInitStruct_coder_internal_(sp, &counter, &cb_emlrtRTEI, true);
  g_emxInitStruct_coder_internal_(sp, &length_of_each_counter, &bb_emlrtRTEI,
    true);
  g_emxInitStruct_coder_internal_(sp, &strong_users, &sb_emlrtRTEI, true);
  g_emxInitStruct_coder_internal_(sp, &phi_k_except_j, &r_emlrtRTEI, true);
  h_emxInitStruct_coder_internal_(sp, &mess_from_VN_to_FN, &f_emlrtRTEI, true);
  emxInit_real_T1(sp, &mess_from_FN_to_VN, 3, &d_emlrtRTEI, true);
  emxInit_real_T(sp, &vphi_j, 2, &l_emlrtRTEI, true);
  emxInit_creal_T2(sp, &interference_projections, 1, &ib_emlrtRTEI, true);
  emxInit_creal_T(sp, &h_strong_users, 2, &tb_emlrtRTEI, true);
  emxInit_real_T(sp, &vphi_j_except_k, 2, &ub_emlrtRTEI, true);
  emxInit_real_T(sp, &pmf, 2, &vb_emlrtRTEI, true);
  emxInit_int8_T(sp, &r0, 3, &rb_emlrtRTEI, true);
  emxInit_real_T1(sp, &r1, 3, &lb_emlrtRTEI, true);
  emxInit_real_T2(sp, &x, 1, &j_emlrtRTEI, true);
  emxInit_int32_T(sp, &ii, 1, &wb_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_varargin_1, 3, &db_emlrtRTEI, true);
  emxInit_int32_T1(sp, &b_ii, 2, &wb_emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_x, 2, &x_emlrtRTEI, true);
  emxInit_real_T(sp, &c_varargin_1, 2, &fb_emlrtRTEI, true);
  emxInit_creal_T(sp, &c_H, 2, &jb_emlrtRTEI, true);
  emxInit_real_T1(sp, &b_mess_from_VN_to_FN, 3, &s_emlrtRTEI, true);
  emxInit_real_T2(sp, &b_mess_from_FN_to_VN, 1, &v_emlrtRTEI, true);
  emxInit_int32_T(sp, &b_counter, 1, &kb_emlrtRTEI, true);
  while (ns <= y_all->size[2] - 1) {
    /*  for each packet */
    i1 = mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] *
      mess_from_FN_to_VN->size[2];
    mess_from_FN_to_VN->size[0] = K;
    mess_from_FN_to_VN->size[1] = J;
    if (!(i0 >= 0)) {
      emlrtNonNegativeCheckR2012b(i0, &m_emlrtDCI, sp);
    }

    mess_from_FN_to_VN->size[2] = i0;
    emxEnsureCapacity_real_T1(sp, mess_from_FN_to_VN, i1, &d_emlrtRTEI);
    if (!(i0 >= 0)) {
      emlrtNonNegativeCheckR2012b(i0, &q_emlrtDCI, sp);
    }

    loop_ub = K * J * i0;
    for (i1 = 0; i1 < loop_ub; i1++) {
      mess_from_FN_to_VN->data[i1] = 0.0;
    }

    i1 = r0->size[0] * r0->size[1] * r0->size[2];
    r0->size[0] = J;
    r0->size[1] = K;
    if (!(i0 >= 0)) {
      emlrtNonNegativeCheckR2012b(i0, &n_emlrtDCI, sp);
    }

    r0->size[2] = i0;
    emxEnsureCapacity_int8_T(sp, r0, i1, &e_emlrtRTEI);
    if (!(i0 >= 0)) {
      emlrtNonNegativeCheckR2012b(i0, &r_emlrtDCI, sp);
    }

    loop_ub = J * K * i0;
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

    j = 0;
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

      b_st.site = &ib_emlrtRSI;
      nx = vphi_j->size[1];
      c_st.site = &jb_emlrtRSI;
      idx = 0;
      i1 = b_ii->size[0] * b_ii->size[1];
      b_ii->size[0] = 1;
      b_ii->size[1] = vphi_j->size[1];
      emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &h_emlrtRTEI);
      d_st.site = &kb_emlrtRSI;
      overflow = ((!(1 > vphi_j->size[1])) && (vphi_j->size[1] > 2147483646));
      if (overflow) {
        e_st.site = &lb_emlrtRSI;
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
        emlrtErrorWithMessageIdR2018a(&c_st, &xd_emlrtRTEI,
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

      /* for k = vphi_j */
      if (0 <= vphi_j->size[1] - 1) {
        a_priori_beliefs_size[0] = 1;
      }

      k1 = 0;
      while (k1 <= vphi_j->size[1] - 1) {
        i1 = vphi_j->size[1];
        i2 = k1 + 1;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &b_emlrtBCI, sp);
        }

        b_k.contents = (int32_T)vphi_j->data[k1];
        i1 = mess_from_VN_to_FN.contents->size[0];
        i2 = 1 + j;
        if (!((i2 >= 1) && (i2 <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &e_emlrtBCI, sp);
        }

        i1 = i2 - 1;
        i2 = mess_from_VN_to_FN.contents->size[1];
        i3 = (int32_T)b_k.contents;
        if (!((i3 >= 1) && (i3 <= i2))) {
          emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &f_emlrtBCI, sp);
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

        i3 = a_priori_beliefs->size[2];
        i4 = ns + 1;
        if (!((i4 >= 1) && (i4 <= i3))) {
          emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &d_emlrtBCI, sp);
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
          a_priori_beliefs_data[i3] = a_priori_beliefs->data[(j +
            a_priori_beliefs->size[0] * i3) + a_priori_beliefs->size[0] *
            a_priori_beliefs->size[1] * ns];
        }

        nx = ii->size[0];
        for (i3 = 0; i3 < nx; i3++) {
          mess_from_VN_to_FN.contents->data[(i1 +
            mess_from_VN_to_FN.contents->size[0] * i2) +
            mess_from_VN_to_FN.contents->size[0] *
            mess_from_VN_to_FN.contents->size[1] * ii->data[i3]] =
            a_priori_beliefs_data[i3];
        }

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
    vlen = y_all->size[1];
    i1 = y_all->size[2];
    i2 = 1 + ns;
    if (!((i2 >= 1) && (i2 <= i1))) {
      emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &g_emlrtBCI, sp);
    }

    for (i1 = 0; i1 < vlen; i1++) {
      for (i3 = 0; i3 < loop_ub; i3++) {
        y_data[i3 + loop_ub * i1] = y_all->data[(i3 + y_all->size[0] * i1) +
          y_all->size[0] * y_all->size[1] * (i2 - 1)];
      }
    }

    /*     %% */
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, Tm, mxDOUBLE_CLASS, (int32_T)Tm,
      &ud_emlrtRTEI, sp);
    t = 0;
    while (t <= (int32_T)Tm - 1) {
      /*  iterations 1, ..., Tm */
      /*         %% */
      k = 0;
      while (k <= K - 1) {
        b_k.contents = 1.0 + (real_T)k;

        /*  for every FN */
        st.site = &d_emlrtRSI;
        vlen = b_F.contents->size[1];
        i1 = b_F.contents->size[0];
        i = k + 1;
        if (!((i >= 1) && (i <= i1))) {
          emlrtDynamicBoundsCheckR2012b(i, 1, i1, &h_emlrtBCI, &st);
        }

        i1 = vphi_j->size[0] * vphi_j->size[1];
        vphi_j->size[0] = 1;
        vphi_j->size[1] = vlen;
        emxEnsureCapacity_real_T(&st, vphi_j, i1, &i_emlrtRTEI);
        for (i1 = 0; i1 < vlen; i1++) {
          vphi_j->data[vphi_j->size[0] * i1] = b_F.contents->data[(i +
            b_F.contents->size[0] * i1) - 1];
        }

        b_st.site = &ib_emlrtRSI;
        nx = vphi_j->size[1];
        c_st.site = &jb_emlrtRSI;
        idx = 0;
        i1 = b_ii->size[0] * b_ii->size[1];
        b_ii->size[0] = 1;
        b_ii->size[1] = vphi_j->size[1];
        emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &h_emlrtRTEI);
        d_st.site = &kb_emlrtRSI;
        overflow = ((!(1 > vphi_j->size[1])) && (vphi_j->size[1] > 2147483646));
        if (overflow) {
          e_st.site = &lb_emlrtRSI;
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
          emlrtErrorWithMessageIdR2018a(&c_st, &xd_emlrtRTEI,
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
        vlen = b_ii->size[0] * b_ii->size[1];
        for (i1 = 0; i1 < vlen; i1++) {
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
          st.site = &e_emlrtRSI;
          b_st.site = &mb_emlrtRSI;
          c_st.site = &nb_emlrtRSI;
          do_vectors(&c_st, vphi_j_except_k, (int32_T)vphi_j_except_k->data[b_j1],
                     vphi_j, ii, ib_size);
          i1 = phi_k_except_j.contents->size[0] * phi_k_except_j.contents->size
            [1];
          phi_k_except_j.contents->size[0] = 1;
          phi_k_except_j.contents->size[1] = vphi_j->size[1];
          emxEnsureCapacity_real_T(sp, phi_k_except_j.contents, i1, &r_emlrtRTEI);
          vlen = vphi_j->size[0] * vphi_j->size[1];
          for (i1 = 0; i1 < vlen; i1++) {
            phi_k_except_j.contents->data[i1] = vphi_j->data[i1];
          }

          q_id = 0;
          while (q_id <= varargin_1 - 1) {
            /*  reading all possible Projections of the codebook of user_j @ (resource k) */
            max_temp_0 = rtMinusInf;
            j = 0;
            while (j <= y_all->size[1] - 1) {
              nr.contents = 1.0 + (real_T)j;
              st.site = &f_emlrtRSI;
              find_strong_and_weak_users(&st, &b_H, &b_k, &b_j, &nr, &b_F,
                &b_r_th, &phi_k_except_j, strong_users.contents, vphi_j);
              st.site = &g_emlrtRSI;
              gaussian_approximation(&st, &C, &b_F, &b_H, &b_k, &nr, &M,
                &mess_from_VN_to_FN, vphi_j, &interference, &cte_norm);
              pdf_exp_cte = -0.5 * (1.0 / (cte_norm + varnoise));
              cte_norm += varnoise;
              st.site = &h_emlrtRSI;
              b_sqrt(&st, &cte_norm);
              pdf_scaling_cte = 0.15915494309189535 / cte_norm;

              /*  rever esse scaling factor */
              i1 = y_all->size[0];
              i2 = y_all->size[1];
              i3 = b_H.contents->size[0];
              d0 = 1.0 + (real_T)k;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &v_emlrtDCI, sp);
              }

              i4 = (int32_T)d0;
              if (!((i4 >= 1) && (i4 <= i3))) {
                emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &ic_emlrtBCI, sp);
              }

              i3 = b_H.contents->size[1];
              c_ii = (int32_T)b_j.contents;
              if (!((c_ii >= 1) && (c_ii <= i3))) {
                emlrtDynamicBoundsCheckR2012b(c_ii, 1, i3, &ic_emlrtBCI, sp);
              }

              i3 = b_H.contents->size[2];
              d0 = 1.0 + (real_T)j;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &v_emlrtDCI, sp);
              }

              nx = (int32_T)d0;
              if (!((nx >= 1) && (nx <= i3))) {
                emlrtDynamicBoundsCheckR2012b(nx, 1, i3, &ic_emlrtBCI, sp);
              }

              i3 = 1 + q_id;
              if (!((i3 >= 1) && (i3 <= Aq_size[0]))) {
                emlrtDynamicBoundsCheckR2012b(i3, 1, Aq_size[0], &jc_emlrtBCI,
                  sp);
              }

              idx = b_H.contents->size[0];
              d0 = 1.0 + (real_T)k;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &v_emlrtDCI, sp);
              }

              vlen = (int32_T)d0;
              if (!((vlen >= 1) && (vlen <= idx))) {
                emlrtDynamicBoundsCheckR2012b(vlen, 1, idx, &ic_emlrtBCI, sp);
              }

              idx = b_H.contents->size[1];
              i = (int32_T)b_j.contents;
              if (!((i >= 1) && (i <= idx))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, idx, &ic_emlrtBCI, sp);
              }

              idx = b_H.contents->size[2];
              d0 = 1.0 + (real_T)j;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &v_emlrtDCI, sp);
              }

              k1 = (int32_T)d0;
              if (!((k1 >= 1) && (k1 <= idx))) {
                emlrtDynamicBoundsCheckR2012b(k1, 1, idx, &ic_emlrtBCI, sp);
              }

              idx = 1 + q_id;
              if (!((idx >= 1) && (idx <= Aq_size[0]))) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, Aq_size[0], &jc_emlrtBCI,
                  sp);
              }

              cte_norm = b_H.contents->data[((i4 + b_H.contents->size[0] * (c_ii
                - 1)) + b_H.contents->size[0] * b_H.contents->size[1] * (nx - 1))
                - 1].re * Aq_data[i3 - 1].re - b_H.contents->data[((vlen +
                b_H.contents->size[0] * (i - 1)) + b_H.contents->size[0] *
                b_H.contents->size[1] * (k1 - 1)) - 1].im * Aq_data[idx - 1].im;
              i3 = b_H.contents->size[0];
              d0 = 1.0 + (real_T)k;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &v_emlrtDCI, sp);
              }

              i4 = (int32_T)d0;
              if (!((i4 >= 1) && (i4 <= i3))) {
                emlrtDynamicBoundsCheckR2012b(i4, 1, i3, &ic_emlrtBCI, sp);
              }

              i3 = b_H.contents->size[1];
              c_ii = (int32_T)b_j.contents;
              if (!((c_ii >= 1) && (c_ii <= i3))) {
                emlrtDynamicBoundsCheckR2012b(c_ii, 1, i3, &ic_emlrtBCI, sp);
              }

              i3 = b_H.contents->size[2];
              d0 = 1.0 + (real_T)j;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &v_emlrtDCI, sp);
              }

              nx = (int32_T)d0;
              if (!((nx >= 1) && (nx <= i3))) {
                emlrtDynamicBoundsCheckR2012b(nx, 1, i3, &ic_emlrtBCI, sp);
              }

              i3 = 1 + q_id;
              if (!((i3 >= 1) && (i3 <= Aq_size[0]))) {
                emlrtDynamicBoundsCheckR2012b(i3, 1, Aq_size[0], &jc_emlrtBCI,
                  sp);
              }

              idx = b_H.contents->size[0];
              d0 = 1.0 + (real_T)k;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &v_emlrtDCI, sp);
              }

              vlen = (int32_T)d0;
              if (!((vlen >= 1) && (vlen <= idx))) {
                emlrtDynamicBoundsCheckR2012b(vlen, 1, idx, &ic_emlrtBCI, sp);
              }

              idx = b_H.contents->size[1];
              i = (int32_T)b_j.contents;
              if (!((i >= 1) && (i <= idx))) {
                emlrtDynamicBoundsCheckR2012b(i, 1, idx, &ic_emlrtBCI, sp);
              }

              idx = b_H.contents->size[2];
              d0 = 1.0 + (real_T)j;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &v_emlrtDCI, sp);
              }

              k1 = (int32_T)d0;
              if (!((k1 >= 1) && (k1 <= idx))) {
                emlrtDynamicBoundsCheckR2012b(k1, 1, idx, &ic_emlrtBCI, sp);
              }

              idx = 1 + q_id;
              if (!((idx >= 1) && (idx <= Aq_size[0]))) {
                emlrtDynamicBoundsCheckR2012b(idx, 1, Aq_size[0], &jc_emlrtBCI,
                  sp);
              }

              H_im = b_H.contents->data[((i4 + b_H.contents->size[0] * (c_ii - 1))
                + b_H.contents->size[0] * b_H.contents->size[1] * (nx - 1)) - 1]
                .re * Aq_data[i3 - 1].im + b_H.contents->data[((vlen +
                b_H.contents->size[0] * (i - 1)) + b_H.contents->size[0] *
                b_H.contents->size[1] * (k1 - 1)) - 1].im * Aq_data[idx - 1].re;
              d0 = 1.0 + (real_T)k;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &w_emlrtDCI, sp);
              }

              i3 = (int32_T)d0;
              if (!((i3 >= 1) && (i3 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &kc_emlrtBCI, sp);
              }

              d0 = 1.0 + (real_T)j;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &w_emlrtDCI, sp);
              }

              i4 = (int32_T)d0;
              if (!((i4 >= 1) && (i4 <= i2))) {
                emlrtDynamicBoundsCheckR2012b(i4, 1, i2, &kc_emlrtBCI, sp);
              }

              yk_fix_re = (y_data[(i3 + loop_ub * (i4 - 1)) - 1].re - cte_norm)
                - interference.re;
              d0 = 1.0 + (real_T)k;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &s_emlrtDCI, sp);
              }

              i3 = (int32_T)d0;
              if (!((i3 >= 1) && (i3 <= i1))) {
                emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &fc_emlrtBCI, sp);
              }

              d0 = 1.0 + (real_T)j;
              if (d0 != (int32_T)d0) {
                emlrtIntegerCheckR2012b(d0, &s_emlrtDCI, sp);
              }

              i1 = (int32_T)d0;
              if (!((i1 >= 1) && (i1 <= i2))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, i2, &fc_emlrtBCI, sp);
              }

              yk_fix_im = (y_data[(i3 + loop_ub * (i1 - 1)) - 1].im - H_im) -
                interference.im;
              i1 = length_of_each_counter.contents->size[0] *
                length_of_each_counter.contents->size[1];
              length_of_each_counter.contents->size[0] = 1;
              length_of_each_counter.contents->size[1] =
                strong_users.contents->size[1];
              emxEnsureCapacity_real_T(sp, length_of_each_counter.contents, i1,
                &bb_emlrtRTEI);
              vlen = strong_users.contents->size[1];
              for (i1 = 0; i1 < vlen; i1++) {
                length_of_each_counter.contents->data[i1] = (int8_T)varargin_1;
              }

              i1 = counter.contents->size[0] * counter.contents->size[1];
              counter.contents->size[0] = 1;
              counter.contents->size[1] = strong_users.contents->size[1];
              emxEnsureCapacity_real_T(sp, counter.contents, i1, &cb_emlrtRTEI);
              vlen = strong_users.contents->size[1];
              for (i1 = 0; i1 < vlen; i1++) {
                counter.contents->data[i1] = 1.0;
              }

              i1 = c_varargin_1->size[0] * c_varargin_1->size[1];
              c_varargin_1->size[0] = 1;
              c_varargin_1->size[1] = strong_users.contents->size[1];
              emxEnsureCapacity_real_T(sp, c_varargin_1, i1, &fb_emlrtRTEI);
              vlen = strong_users.contents->size[1];
              for (i1 = 0; i1 < vlen; i1++) {
                c_varargin_1->data[i1] = (int8_T)varargin_1;
              }

              st.site = &i_emlrtRSI;
              d0 = prod(&st, c_varargin_1);
              emlrtForLoopVectorCheckR2012b(1.0, 1.0, d0, mxDOUBLE_CLASS,
                (int32_T)d0, &vd_emlrtRTEI, sp);
              c_ii = 0;
              while (c_ii <= (int32_T)d0 - 1) {
                marginal_prob_idx_cnt.contents = 1.0 + (real_T)c_ii;

                /*  início da marginalização sobre a interferência */
                st.site = &j_emlrtRSI;

                /*     %% Get projections of interference being tested */
                /*          rows = F_int(k,strong_users);  */
                /*          cols=counter;  */
                /*          indexes=sub2ind(size(C_perms),rows,cols);  */
                /*          alphabet_elements = C_perms(indexes);  */
                b_st.site = &pd_emlrtRSI;
                indexShapeCheck(&b_st, Aq_size[0], *(int32_T (*)[2])
                                counter.contents->size);
                i1 = interference_projections->size[0];
                interference_projections->size[0] = counter.contents->size[1];
                emxEnsureCapacity_creal_T2(&st, interference_projections, i1,
                  &ib_emlrtRTEI);
                vlen = counter.contents->size[1];
                for (i1 = 0; i1 < vlen; i1++) {
                  re = counter.contents->data[counter.contents->size[0] * i1];
                  if (re != (int32_T)muDoubleScalarFloor(re)) {
                    emlrtIntegerCheckR2012b(re, &x_emlrtDCI, &st);
                  }

                  i2 = (int32_T)re;
                  if (!((i2 >= 1) && (i2 <= Aq_size[0]))) {
                    emlrtDynamicBoundsCheckR2012b(i2, 1, Aq_size[0],
                      &lc_emlrtBCI, &st);
                  }

                  interference_projections->data[i1].re = Aq_data[i2 - 1].re;
                  re = counter.contents->data[counter.contents->size[0] * i1];
                  if (re != (int32_T)muDoubleScalarFloor(re)) {
                    emlrtIntegerCheckR2012b(re, &t_emlrtDCI, &st);
                  }

                  i2 = (int32_T)re;
                  if (!((i2 >= 1) && (i2 <= Aq_size[0]))) {
                    emlrtDynamicBoundsCheckR2012b(i2, 1, Aq_size[0],
                      &gc_emlrtBCI, &st);
                  }

                  interference_projections->data[i1].im = Aq_data[i2 - 1].im;
                }

                nx = b_H.contents->size[1];
                re = 1.0 + (real_T)j;
                if (re != (int32_T)re) {
                  emlrtIntegerCheckR2012b(re, &b_emlrtDCI, sp);
                }

                i1 = b_H.contents->size[2];
                idx = (int32_T)re;
                if (!((idx >= 1) && (idx <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(idx, 1, i1, &k_emlrtBCI, sp);
                }

                re = 1.0 + (real_T)k;
                if (re != (int32_T)re) {
                  emlrtIntegerCheckR2012b(re, &emlrtDCI, sp);
                }

                i1 = b_H.contents->size[0];
                i = (int32_T)re;
                if (!((i >= 1) && (i <= i1))) {
                  emlrtDynamicBoundsCheckR2012b(i, 1, i1, &j_emlrtBCI, sp);
                }

                i1 = c_H->size[0] * c_H->size[1];
                c_H->size[0] = 1;
                c_H->size[1] = strong_users.contents->size[1];
                emxEnsureCapacity_creal_T(sp, c_H, i1, &jb_emlrtRTEI);
                vlen = strong_users.contents->size[1];
                for (i1 = 0; i1 < vlen; i1++) {
                  re = strong_users.contents->data[strong_users.contents->size[0]
                    * i1];
                  if (re != (int32_T)muDoubleScalarFloor(re)) {
                    emlrtIntegerCheckR2012b(re, &y_emlrtDCI, sp);
                  }

                  i2 = (int32_T)re;
                  if (!((i2 >= 1) && (i2 <= nx))) {
                    emlrtDynamicBoundsCheckR2012b(i2, 1, nx, &mc_emlrtBCI, sp);
                  }

                  c_H->data[c_H->size[0] * i1].re = b_H.contents->data[((i +
                    b_H.contents->size[0] * (i2 - 1)) + b_H.contents->size[0] *
                    b_H.contents->size[1] * (idx - 1)) - 1].re;
                  re = strong_users.contents->data[strong_users.contents->size[0]
                    * i1];
                  if (re != (int32_T)muDoubleScalarFloor(re)) {
                    emlrtIntegerCheckR2012b(re, &u_emlrtDCI, sp);
                  }

                  i2 = (int32_T)re;
                  if (!((i2 >= 1) && (i2 <= nx))) {
                    emlrtDynamicBoundsCheckR2012b(i2, 1, nx, &hc_emlrtBCI, sp);
                  }

                  c_H->data[c_H->size[0] * i1].im = b_H.contents->data[((i +
                    b_H.contents->size[0] * (i2 - 1)) + b_H.contents->size[0] *
                    b_H.contents->size[1] * (idx - 1)) - 1].im;
                }

                st.site = &k_emlrtRSI;
                squeeze(&st, c_H, h_strong_users);
                st.site = &l_emlrtRSI;
                b_st.site = &jd_emlrtRSI;
                i1 = b_counter->size[0];
                b_counter->size[0] = counter.contents->size[1];
                emxEnsureCapacity_int32_T1(&b_st, b_counter, i1, &kb_emlrtRTEI);
                vlen = counter.contents->size[1];
                for (i1 = 0; i1 < vlen; i1++) {
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
                    vlen = counter.contents->size[1];
                    for (i1 = 0; i1 < vlen; i1++) {
                      b_counter->data[i1] = (int32_T)counter.contents->
                        data[counter.contents->size[0] * i1];
                    }

                    if (b_counter->size[0] == 1) {
                      guard1 = true;
                    } else {
                      emlrtErrorWithMessageIdR2018a(&b_st, &be_emlrtRTEI,
                        "Coder:MATLAB:innerdim", "Coder:MATLAB:innerdim", 0);
                    }
                  }

                  if (guard1) {
                    emlrtErrorWithMessageIdR2018a(&b_st, &ce_emlrtRTEI,
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
                  vlen = counter.contents->size[1];
                  for (i1 = 0; i1 < vlen; i1++) {
                    b_counter->data[i1] = (int32_T)counter.contents->
                      data[counter.contents->size[0] * i1];
                  }

                  if (b_counter->size[0] == 1) {
                    guard1 = true;
                  } else {
                    b_st.site = &rd_emlrtRSI;
                    c_st.site = &sd_emlrtRSI;
                    d_st.site = &td_emlrtRSI;
                    e_st.site = &ud_emlrtRSI;
                    interference.re = 0.0;
                    interference.im = 0.0;
                    if (!(h_strong_users->size[1] < 1)) {
                      f_st.site = &vd_emlrtRSI;
                      overflow = (h_strong_users->size[1] > 2147483646);
                      if (overflow) {
                        g_st.site = &lb_emlrtRSI;
                        check_forloop_overflow_error(&g_st);
                      }

                      for (i = 0; i < h_strong_users->size[1]; i++) {
                        cte_norm = h_strong_users->data[i].re *
                          interference_projections->data[i].re -
                          h_strong_users->data[i].im *
                          interference_projections->data[i].im;
                        H_im = h_strong_users->data[i].re *
                          interference_projections->data[i].im +
                          h_strong_users->data[i].im *
                          interference_projections->data[i].re;
                        interference.re += cte_norm;
                        interference.im += H_im;
                      }
                    }
                  }
                }

                if (guard1) {
                  re = 0.0;
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
                    re += cte_norm;
                    im += H_im;
                  }

                  interference.re = re;
                  interference.im = im;
                }

                st.site = &m_emlrtRSI;
                cte_norm = get_extrinsic_info_probability(&st, &strong_users,
                  &counter, &C_perms, &b_F_int, &b_k, &codeword_labels, &M,
                  &mess_from_VN_to_FN, &eps_val_num);
                interference.re = yk_fix_re - interference.re;
                interference.im = yk_fix_im - interference.im;
                H_im = muDoubleScalarHypot(interference.re, interference.im);
                st.site = &n_emlrtRSI;
                b_st.site = &mc_emlrtRSI;
                c_st.site = &hc_emlrtRSI;
                re = pdf_scaling_cte;
                st.site = &n_emlrtRSI;
                b_log(&st, &re);
                cte_norm += re + pdf_exp_cte * (H_im * H_im);
                re = 1.0 + muDoubleScalarExp(-muDoubleScalarAbs(max_temp_0 -
                  cte_norm));
                st.site = &o_emlrtRSI;
                b_log(&st, &re);
                max_temp_0 = muDoubleScalarMax(max_temp_0, cte_norm) + re;
                st.site = &p_emlrtRSI;
                update_cartesian_counter(&st, &length_of_each_counter,
                  &marginal_prob_idx_cnt, counter.contents);
                c_ii++;
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(sp);
                }
              }

              /*  fim da marginalização sobre a interferência */
              j++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(sp);
              }
            }

            /*  extrapolando prob. da projecao para prob. dos símbolos com a mesma projecao */
            st.site = &q_emlrtRSI;
            vlen = C_perms.contents->size[1];
            i1 = b_F_int.contents->size[0];
            d0 = 1.0 + (real_T)k;
            if (d0 != (int32_T)d0) {
              emlrtIntegerCheckR2012b(d0, &c_emlrtDCI, &st);
            }

            i2 = (int32_T)d0;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &dc_emlrtBCI, &st);
            }

            i1 = b_F_int.contents->size[1];
            i3 = (int32_T)b_j.contents;
            if (!((i3 >= 1) && (i3 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i3, 1, i1, &dc_emlrtBCI, &st);
            }

            d0 = b_F_int.contents->data[(i2 + b_F_int.contents->size[0] * (i3 -
              1)) - 1];
            if (d0 != (int32_T)muDoubleScalarFloor(d0)) {
              emlrtIntegerCheckR2012b(d0, &c_emlrtDCI, &st);
            }

            i1 = C_perms.contents->size[0];
            c_ii = (int32_T)d0;
            if (!((c_ii >= 1) && (c_ii <= i1))) {
              emlrtDynamicBoundsCheckR2012b(c_ii, 1, i1, &l_emlrtBCI, &st);
            }

            i1 = b_x->size[0] * b_x->size[1];
            b_x->size[0] = 1;
            b_x->size[1] = vlen;
            emxEnsureCapacity_boolean_T(&st, b_x, i1, &x_emlrtRTEI);
            for (i1 = 0; i1 < vlen; i1++) {
              b_x->data[b_x->size[0] * i1] = (C_perms.contents->data[(c_ii +
                C_perms.contents->size[0] * i1) - 1] == 1.0 + (real_T)q_id);
            }

            b_st.site = &ib_emlrtRSI;
            nx = b_x->size[1];
            c_st.site = &jb_emlrtRSI;
            idx = 0;
            i1 = b_ii->size[0] * b_ii->size[1];
            b_ii->size[0] = 1;
            b_ii->size[1] = b_x->size[1];
            emxEnsureCapacity_int32_T(&c_st, b_ii, i1, &h_emlrtRTEI);
            d_st.site = &kb_emlrtRSI;
            overflow = ((!(1 > b_x->size[1])) && (b_x->size[1] > 2147483646));
            if (overflow) {
              e_st.site = &lb_emlrtRSI;
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
              emlrtErrorWithMessageIdR2018a(&c_st, &xd_emlrtRTEI,
                "Coder:builtins:AssertionFailed",
                "Coder:builtins:AssertionFailed", 0);
            }

            if (b_x->size[1] == 1) {
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
              &gb_emlrtRTEI);
            vlen = b_ii->size[0] * b_ii->size[1];
            for (i1 = 0; i1 < vlen; i1++) {
              codeword_labels.contents->data[i1] = b_ii->data[i1];
            }

            /*  quais das M codewords tem rotulo de projecao q_id? */
            idx = mess_from_FN_to_VN->size[2];
            i1 = ii->size[0];
            ii->size[0] = b_ii->size[1];
            emxEnsureCapacity_int32_T1(sp, ii, i1, &hb_emlrtRTEI);
            vlen = b_ii->size[1];
            for (i1 = 0; i1 < vlen; i1++) {
              i2 = b_ii->data[b_ii->size[0] * i1];
              if (!((i2 >= 1) && (i2 <= idx))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, idx, &ec_emlrtBCI, sp);
              }

              ii->data[i1] = i2;
            }

            nx = ii->size[0];
            idx = mess_from_FN_to_VN->size[0];
            c_ii = mess_from_FN_to_VN->size[1];
            i1 = (int32_T)b_j.contents;
            if (!((i1 >= 1) && (i1 <= c_ii))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, c_ii, &n_emlrtBCI, sp);
            }

            d0 = 1.0 + (real_T)k;
            if (d0 != (int32_T)d0) {
              emlrtIntegerCheckR2012b(d0, &d_emlrtDCI, sp);
            }

            i1 = (int32_T)d0;
            if (!((i1 >= 1) && (i1 <= idx))) {
              emlrtDynamicBoundsCheckR2012b(i1, 1, idx, &m_emlrtBCI, sp);
            }

            for (i1 = 0; i1 < nx; i1++) {
              mess_from_FN_to_VN->data[(((k + 1) + mess_from_FN_to_VN->size[0] *
                ((int32_T)b_j.contents - 1)) + mess_from_FN_to_VN->size[0] *
                mess_from_FN_to_VN->size[1] * (ii->data[i1] - 1)) - 1] =
                max_temp_0;
            }

            /*  replicar probabilidade */
            q_id++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }

          /*  end loop over projections Aq for user j @ k */
          /*  normalizando PMF */
          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &g_emlrtDCI, sp);
          }

          i1 = mess_from_FN_to_VN->size[0];
          i2 = (int32_T)d0;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &s_emlrtBCI, sp);
          }

          i1 = i2 - 1;
          i2 = (int32_T)b_j.contents;
          i3 = mess_from_FN_to_VN->size[1];
          if (!((i2 >= 1) && (i2 <= i3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i3, &t_emlrtBCI, sp);
          }

          vlen = mess_from_FN_to_VN->size[2];
          i2 = ii->size[0];
          ii->size[0] = vlen;
          emxEnsureCapacity_int32_T1(sp, ii, i2, &u_emlrtRTEI);
          for (i2 = 0; i2 < vlen; i2++) {
            ii->data[i2] = i2;
          }

          vlen = mess_from_FN_to_VN->size[2];
          j = (int32_T)b_j.contents;
          i2 = mess_from_FN_to_VN->size[1];
          if (!((j >= 1) && (j <= i2))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i2, &p_emlrtBCI, sp);
          }

          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &e_emlrtDCI, sp);
          }

          i2 = mess_from_FN_to_VN->size[0];
          i = (int32_T)d0;
          if (!((i >= 1) && (i <= i2))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i2, &o_emlrtBCI, sp);
          }

          i2 = r1->size[0] * r1->size[1] * r1->size[2];
          r1->size[0] = 1;
          r1->size[1] = 1;
          r1->size[2] = vlen;
          emxEnsureCapacity_real_T1(sp, r1, i2, &ab_emlrtRTEI);
          for (i2 = 0; i2 < vlen; i2++) {
            r1->data[r1->size[0] * r1->size[1] * i2] = mess_from_FN_to_VN->data
              [((i + mess_from_FN_to_VN->size[0] * (j - 1)) +
                mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] * i2)
              - 1];
          }

          iv0[0] = 1;
          iv0[1] = 1;
          iv0[2] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&iv0[0], 3, &(*(int32_T (*)[3])r1->size)
            [0], 3, &b_emlrtECI, sp);
          st.site = &r_emlrtRSI;
          vlen = mess_from_FN_to_VN->size[2];
          j = (int32_T)b_j.contents;
          i2 = mess_from_FN_to_VN->size[1];
          if (!((j >= 1) && (j <= i2))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i2, &r_emlrtBCI, &st);
          }

          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &f_emlrtDCI, &st);
          }

          i2 = mess_from_FN_to_VN->size[0];
          i = (int32_T)d0;
          if (!((i >= 1) && (i <= i2))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i2, &q_emlrtBCI, &st);
          }

          i2 = b_varargin_1->size[0] * b_varargin_1->size[1] *
            b_varargin_1->size[2];
          b_varargin_1->size[0] = 1;
          b_varargin_1->size[1] = 1;
          b_varargin_1->size[2] = vlen;
          emxEnsureCapacity_real_T1(&st, b_varargin_1, i2, &eb_emlrtRTEI);
          for (i2 = 0; i2 < vlen; i2++) {
            b_varargin_1->data[b_varargin_1->size[0] * b_varargin_1->size[1] *
              i2] = mess_from_FN_to_VN->data[((i + mess_from_FN_to_VN->size[0] *
              (j - 1)) + mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size
              [1] * i2) - 1];
          }

          b_st.site = &ie_emlrtRSI;
          c_st.site = &je_emlrtRSI;
          d_st.site = &ke_emlrtRSI;
          if ((b_varargin_1->size[2] == 1) || (b_varargin_1->size[2] != 1)) {
          } else {
            emlrtErrorWithMessageIdR2018a(&d_st, &yd_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility",
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          if (!(b_varargin_1->size[2] >= 1)) {
            emlrtErrorWithMessageIdR2018a(&d_st, &ae_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          e_st.site = &le_emlrtRSI;
          f_st.site = &me_emlrtRSI;
          vlen = b_varargin_1->size[2];
          i = 3;
          if (b_varargin_1->size[2] == 1) {
            i = 2;
          }

          if (3 > i) {
            nx = b_varargin_1->size[2];
          } else {
            nx = 1;
          }

          g_st.site = &qe_emlrtRSI;
          g_st.site = &pe_emlrtRSI;
          if (nx > 2147483646) {
            h_st.site = &lb_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          for (j = 1; j <= nx; j++) {
            cte_norm = b_varargin_1->data[j - 1];
          }

          g_st.site = &oe_emlrtRSI;
          if ((!(2 > vlen)) && (vlen > 2147483646)) {
            h_st.site = &lb_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          for (i = 2; i <= vlen; i++) {
            idx = (i - 1) * nx;
            g_st.site = &ne_emlrtRSI;
            for (j = 0; j < nx; j++) {
              overflow = ((!muDoubleScalarIsNaN(b_varargin_1->data[idx + j])) &&
                          (muDoubleScalarIsNaN(cte_norm) || (cte_norm <
                b_varargin_1->data[idx + j])));
              if (overflow) {
                cte_norm = b_varargin_1->data[idx + j];
              }
            }
          }

          vlen = r1->size[2];
          for (i2 = 0; i2 < vlen; i2++) {
            mess_from_FN_to_VN->data[(i1 + mess_from_FN_to_VN->size[0] *
              ((int32_T)b_j.contents - 1)) + mess_from_FN_to_VN->size[0] *
              mess_from_FN_to_VN->size[1] * ii->data[i2]] = r1->data[r1->size[0]
              * r1->size[1] * i2] - cte_norm;
          }

          vlen = mess_from_FN_to_VN->size[2];
          j = (int32_T)b_j.contents;
          i1 = mess_from_FN_to_VN->size[1];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &v_emlrtBCI, sp);
          }

          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &h_emlrtDCI, sp);
          }

          i1 = mess_from_FN_to_VN->size[0];
          i = (int32_T)d0;
          if (!((i >= 1) && (i <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i1, &u_emlrtBCI, sp);
          }

          i1 = r1->size[0] * r1->size[1] * r1->size[2];
          r1->size[0] = 1;
          r1->size[1] = 1;
          r1->size[2] = vlen;
          emxEnsureCapacity_real_T1(sp, r1, i1, &mb_emlrtRTEI);
          for (i1 = 0; i1 < vlen; i1++) {
            r1->data[r1->size[0] * r1->size[1] * i1] = mess_from_FN_to_VN->data
              [((i + mess_from_FN_to_VN->size[0] * (j - 1)) +
                mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] * i1)
              - 1];
          }

          st.site = &s_emlrtRSI;
          b_exp(&st, r1);
          st.site = &s_emlrtRSI;
          cte_norm = sum(&st, r1);
          st.site = &s_emlrtRSI;
          b_log(&st, &cte_norm);
          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &j_emlrtDCI, sp);
          }

          i1 = mess_from_FN_to_VN->size[0];
          i2 = (int32_T)d0;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &y_emlrtBCI, sp);
          }

          i1 = i2 - 1;
          i2 = (int32_T)b_j.contents;
          i3 = mess_from_FN_to_VN->size[1];
          if (!((i2 >= 1) && (i2 <= i3))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i3, &ab_emlrtBCI, sp);
          }

          vlen = mess_from_FN_to_VN->size[2];
          i2 = ii->size[0];
          ii->size[0] = vlen;
          emxEnsureCapacity_int32_T1(sp, ii, i2, &ob_emlrtRTEI);
          for (i2 = 0; i2 < vlen; i2++) {
            ii->data[i2] = i2;
          }

          vlen = mess_from_FN_to_VN->size[2];
          j = (int32_T)b_j.contents;
          i2 = mess_from_FN_to_VN->size[1];
          if (!((j >= 1) && (j <= i2))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i2, &x_emlrtBCI, sp);
          }

          d0 = 1.0 + (real_T)k;
          if (d0 != (int32_T)d0) {
            emlrtIntegerCheckR2012b(d0, &i_emlrtDCI, sp);
          }

          i2 = mess_from_FN_to_VN->size[0];
          i = (int32_T)d0;
          if (!((i >= 1) && (i <= i2))) {
            emlrtDynamicBoundsCheckR2012b(i, 1, i2, &w_emlrtBCI, sp);
          }

          i2 = r1->size[0] * r1->size[1] * r1->size[2];
          r1->size[0] = 1;
          r1->size[1] = 1;
          r1->size[2] = vlen;
          emxEnsureCapacity_real_T1(sp, r1, i2, &qb_emlrtRTEI);
          for (i2 = 0; i2 < vlen; i2++) {
            r1->data[r1->size[0] * r1->size[1] * i2] = mess_from_FN_to_VN->data
              [((i + mess_from_FN_to_VN->size[0] * (j - 1)) +
                mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] * i2)
              - 1];
          }

          iv0[0] = 1;
          iv0[1] = 1;
          iv0[2] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&iv0[0], 3, &(*(int32_T (*)[3])r1->size)
            [0], 3, &c_emlrtECI, sp);
          vlen = r1->size[2];
          for (i2 = 0; i2 < vlen; i2++) {
            mess_from_FN_to_VN->data[(i1 + mess_from_FN_to_VN->size[0] *
              ((int32_T)b_j.contents - 1)) + mess_from_FN_to_VN->size[0] *
              mess_from_FN_to_VN->size[1] * ii->data[i2]] = r1->data[r1->size[0]
              * r1->size[1] * i2] - cte_norm;
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
        st.site = &t_emlrtRSI;
        vlen = b_F.contents->size[0];
        i1 = b_F.contents->size[1];
        if (!((j >= 1) && (j <= i1))) {
          emlrtDynamicBoundsCheckR2012b(j, 1, i1, &bb_emlrtBCI, &st);
        }

        i1 = x->size[0];
        x->size[0] = vlen;
        emxEnsureCapacity_real_T2(&st, x, i1, &j_emlrtRTEI);
        for (i1 = 0; i1 < vlen; i1++) {
          x->data[i1] = b_F.contents->data[i1 + b_F.contents->size[0] * (j - 1)];
        }

        b_st.site = &ib_emlrtRSI;
        nx = x->size[0];
        c_st.site = &jb_emlrtRSI;
        idx = 0;
        i1 = ii->size[0];
        ii->size[0] = x->size[0];
        emxEnsureCapacity_int32_T1(&c_st, ii, i1, &h_emlrtRTEI);
        d_st.site = &kb_emlrtRSI;
        overflow = ((!(1 > x->size[0])) && (x->size[0] > 2147483646));
        if (overflow) {
          e_st.site = &lb_emlrtRSI;
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
          emlrtErrorWithMessageIdR2018a(&c_st, &xd_emlrtRTEI,
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
          d_st.site = &re_emlrtRSI;
          indexShapeCheck(&d_st, ii->size[0], b_a_priori_beliefs);
          i2 = ii->size[0];
          ii->size[0] = i1;
          emxEnsureCapacity_int32_T1(&c_st, ii, i2, &k_emlrtRTEI);
        }

        i1 = vphi_j->size[0] * vphi_j->size[1];
        vphi_j->size[0] = 1;
        vphi_j->size[1] = ii->size[0];
        emxEnsureCapacity_real_T(sp, vphi_j, i1, &o_emlrtRTEI);
        vlen = ii->size[0];
        for (i1 = 0; i1 < vlen; i1++) {
          vphi_j->data[vphi_j->size[0] * i1] = ii->data[i1];
        }

        /*  resource indexes associated with VN j */
        /* for k = vphi_j % for every FN connected to VN j */
        k1 = 0;
        while (k1 <= vphi_j->size[1] - 1) {
          i1 = vphi_j->size[1];
          i2 = k1 + 1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cb_emlrtBCI, sp);
          }

          b_k.contents = (int32_T)vphi_j->data[k1];
          if (1.0 + (real_T)t != Tm) {
            /*  before last iteration, exclude FN k */
            st.site = &u_emlrtRSI;
            b_st.site = &mb_emlrtRSI;
            c_st.site = &nb_emlrtRSI;
            do_vectors(&c_st, vphi_j, b_k.contents, vphi_j_except_k, ii, ib_size);
          } else {
            /*  at last iteration, include everyone */
            i1 = vphi_j_except_k->size[0] * vphi_j_except_k->size[1];
            vphi_j_except_k->size[0] = 1;
            vphi_j_except_k->size[1] = vphi_j->size[1];
            emxEnsureCapacity_real_T(sp, vphi_j_except_k, i1, &p_emlrtRTEI);
            vlen = vphi_j->size[0] * vphi_j->size[1];
            for (i1 = 0; i1 < vlen; i1++) {
              vphi_j_except_k->data[i1] = vphi_j->data[i1];
            }
          }

          emlrtForLoopVectorCheckR2012b(1.0, 1.0, i0, mxDOUBLE_CLASS, i0,
            &wd_emlrtRTEI, sp);
          nx = 0;
          while (nx <= i0 - 1) {
            /*  for every codeword  */
            i1 = a_priori_beliefs->size[0];
            i2 = (j - 1) + 1;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &db_emlrtBCI, sp);
            }

            i1 = a_priori_beliefs->size[1];
            i2 = nx + 1;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &eb_emlrtBCI, sp);
            }

            i1 = a_priori_beliefs->size[2];
            i2 = ns + 1;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &fb_emlrtBCI, sp);
            }

            idx = mess_from_FN_to_VN->size[0];
            i1 = mess_from_FN_to_VN->size[2];
            if (!((nx + 1 >= 1) && (nx + 1 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(nx + 1, 1, i1, &hb_emlrtBCI, sp);
            }

            c_ii = nx + 1;
            i1 = mess_from_FN_to_VN->size[1];
            if (!((j >= 1) && (j <= i1))) {
              emlrtDynamicBoundsCheckR2012b(j, 1, i1, &gb_emlrtBCI, sp);
            }

            i1 = b_mess_from_FN_to_VN->size[0];
            b_mess_from_FN_to_VN->size[0] = vphi_j_except_k->size[1];
            emxEnsureCapacity_real_T2(sp, b_mess_from_FN_to_VN, i1, &v_emlrtRTEI);
            vlen = vphi_j_except_k->size[1];
            for (i1 = 0; i1 < vlen; i1++) {
              i2 = (int32_T)vphi_j_except_k->data[vphi_j_except_k->size[0] * i1];
              if (!((i2 >= 1) && (i2 <= idx))) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, idx, &bc_emlrtBCI, sp);
              }

              b_mess_from_FN_to_VN->data[i1] = mess_from_FN_to_VN->data[((i2 +
                mess_from_FN_to_VN->size[0] * (j - 1)) +
                mess_from_FN_to_VN->size[0] * mess_from_FN_to_VN->size[1] *
                (c_ii - 1)) - 1];
            }

            i1 = mess_from_VN_to_FN.contents->size[0];
            if (!((j >= 1) && (j <= i1))) {
              emlrtDynamicBoundsCheckR2012b(j, 1, i1, &cc_emlrtBCI, sp);
            }

            i1 = mess_from_VN_to_FN.contents->size[1];
            i2 = (int32_T)b_k.contents;
            if (!((i2 >= 1) && (i2 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &cc_emlrtBCI, sp);
            }

            i1 = mess_from_VN_to_FN.contents->size[2];
            if (!((nx + 1 >= 1) && (nx + 1 <= i1))) {
              emlrtDynamicBoundsCheckR2012b(nx + 1, 1, i1, &cc_emlrtBCI, sp);
            }

            st.site = &v_emlrtRSI;
            mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (i2 - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * nx) - 1] =
              a_priori_beliefs->data[((j + a_priori_beliefs->size[0] * nx) +
              a_priori_beliefs->size[0] * a_priori_beliefs->size[1] * ns) - 1] +
              b_sum(&st, b_mess_from_FN_to_VN);
            nx++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(sp);
            }
          }

          /*  end codeword loop */
          /*  normalizando PMF */
          i1 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &mb_emlrtBCI, sp);
          }

          i1 = j - 1;
          i2 = mess_from_VN_to_FN.contents->size[1];
          i3 = (int32_T)b_k.contents;
          if (!((i3 >= 1) && (i3 <= i2))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &nb_emlrtBCI, sp);
          }

          i2 = i3 - 1;
          vlen = mess_from_VN_to_FN.contents->size[2];
          i3 = ii->size[0];
          ii->size[0] = vlen;
          emxEnsureCapacity_int32_T1(sp, ii, i3, &t_emlrtRTEI);
          for (i3 = 0; i3 < vlen; i3++) {
            ii->data[i3] = i3;
          }

          vlen = mess_from_VN_to_FN.contents->size[2];
          i3 = mess_from_VN_to_FN.contents->size[1];
          k = (int32_T)b_k.contents;
          if (!((k >= 1) && (k <= i3))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i3, &jb_emlrtBCI, sp);
          }

          i3 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i3))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i3, &ib_emlrtBCI, sp);
          }

          i3 = r1->size[0] * r1->size[1] * r1->size[2];
          r1->size[0] = 1;
          r1->size[1] = 1;
          r1->size[2] = vlen;
          emxEnsureCapacity_real_T1(sp, r1, i3, &y_emlrtRTEI);
          for (i3 = 0; i3 < vlen; i3++) {
            r1->data[r1->size[0] * r1->size[1] * i3] =
              mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (k - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i3) - 1];
          }

          iv0[0] = 1;
          iv0[1] = 1;
          iv0[2] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&iv0[0], 3, &(*(int32_T (*)[3])r1->size)
            [0], 3, &d_emlrtECI, sp);
          st.site = &w_emlrtRSI;
          vlen = mess_from_VN_to_FN.contents->size[2];
          i3 = mess_from_VN_to_FN.contents->size[1];
          k = (int32_T)b_k.contents;
          if (!((k >= 1) && (k <= i3))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i3, &lb_emlrtBCI, &st);
          }

          i3 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i3))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i3, &kb_emlrtBCI, &st);
          }

          i3 = b_varargin_1->size[0] * b_varargin_1->size[1] *
            b_varargin_1->size[2];
          b_varargin_1->size[0] = 1;
          b_varargin_1->size[1] = 1;
          b_varargin_1->size[2] = vlen;
          emxEnsureCapacity_real_T1(&st, b_varargin_1, i3, &db_emlrtRTEI);
          for (i3 = 0; i3 < vlen; i3++) {
            b_varargin_1->data[b_varargin_1->size[0] * b_varargin_1->size[1] *
              i3] = mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (k - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i3) - 1];
          }

          b_st.site = &ie_emlrtRSI;
          c_st.site = &je_emlrtRSI;
          d_st.site = &ke_emlrtRSI;
          if ((b_varargin_1->size[2] == 1) || (b_varargin_1->size[2] != 1)) {
          } else {
            emlrtErrorWithMessageIdR2018a(&d_st, &yd_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility",
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          if (!(b_varargin_1->size[2] >= 1)) {
            emlrtErrorWithMessageIdR2018a(&d_st, &ae_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          e_st.site = &le_emlrtRSI;
          f_st.site = &me_emlrtRSI;
          vlen = b_varargin_1->size[2];
          k = 3;
          if (b_varargin_1->size[2] == 1) {
            k = 2;
          }

          if (3 > k) {
            nx = b_varargin_1->size[2];
          } else {
            nx = 1;
          }

          g_st.site = &qe_emlrtRSI;
          g_st.site = &pe_emlrtRSI;
          if (nx > 2147483646) {
            h_st.site = &lb_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          for (c_ii = 1; c_ii <= nx; c_ii++) {
            cte_norm = b_varargin_1->data[c_ii - 1];
          }

          g_st.site = &oe_emlrtRSI;
          if ((!(2 > vlen)) && (vlen > 2147483646)) {
            h_st.site = &lb_emlrtRSI;
            check_forloop_overflow_error(&h_st);
          }

          for (i = 2; i <= vlen; i++) {
            idx = (i - 1) * nx;
            g_st.site = &ne_emlrtRSI;
            for (c_ii = 0; c_ii < nx; c_ii++) {
              overflow = ((!muDoubleScalarIsNaN(b_varargin_1->data[idx + c_ii]))
                          && (muDoubleScalarIsNaN(cte_norm) || (cte_norm <
                b_varargin_1->data[idx + c_ii])));
              if (overflow) {
                cte_norm = b_varargin_1->data[idx + c_ii];
              }
            }
          }

          vlen = r1->size[2];
          for (i3 = 0; i3 < vlen; i3++) {
            mess_from_VN_to_FN.contents->data[(i1 +
              mess_from_VN_to_FN.contents->size[0] * i2) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * ii->data[i3]] = r1->data
              [r1->size[0] * r1->size[1] * i3] - cte_norm;
          }

          vlen = mess_from_VN_to_FN.contents->size[2];
          i1 = mess_from_VN_to_FN.contents->size[1];
          k = (int32_T)b_k.contents;
          if (!((k >= 1) && (k <= i1))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i1, &pb_emlrtBCI, sp);
          }

          i1 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &ob_emlrtBCI, sp);
          }

          i1 = r1->size[0] * r1->size[1] * r1->size[2];
          r1->size[0] = 1;
          r1->size[1] = 1;
          r1->size[2] = vlen;
          emxEnsureCapacity_real_T1(sp, r1, i1, &lb_emlrtRTEI);
          for (i1 = 0; i1 < vlen; i1++) {
            r1->data[r1->size[0] * r1->size[1] * i1] =
              mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (k - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i1) - 1];
          }

          st.site = &x_emlrtRSI;
          b_exp(&st, r1);
          st.site = &x_emlrtRSI;
          cte_norm = sum(&st, r1);
          st.site = &x_emlrtRSI;
          b_log(&st, &cte_norm);
          i1 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &sb_emlrtBCI, sp);
          }

          i1 = j - 1;
          i2 = mess_from_VN_to_FN.contents->size[1];
          i3 = (int32_T)b_k.contents;
          if (!((i3 >= 1) && (i3 <= i2))) {
            emlrtDynamicBoundsCheckR2012b(i3, 1, i2, &tb_emlrtBCI, sp);
          }

          i2 = i3 - 1;
          vlen = mess_from_VN_to_FN.contents->size[2];
          i3 = ii->size[0];
          ii->size[0] = vlen;
          emxEnsureCapacity_int32_T1(sp, ii, i3, &nb_emlrtRTEI);
          for (i3 = 0; i3 < vlen; i3++) {
            ii->data[i3] = i3;
          }

          vlen = mess_from_VN_to_FN.contents->size[2];
          i3 = mess_from_VN_to_FN.contents->size[1];
          k = (int32_T)b_k.contents;
          if (!((k >= 1) && (k <= i3))) {
            emlrtDynamicBoundsCheckR2012b(k, 1, i3, &rb_emlrtBCI, sp);
          }

          i3 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i3))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i3, &qb_emlrtBCI, sp);
          }

          i3 = r1->size[0] * r1->size[1] * r1->size[2];
          r1->size[0] = 1;
          r1->size[1] = 1;
          r1->size[2] = vlen;
          emxEnsureCapacity_real_T1(sp, r1, i3, &pb_emlrtRTEI);
          for (i3 = 0; i3 < vlen; i3++) {
            r1->data[r1->size[0] * r1->size[1] * i3] =
              mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (k - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i3) - 1];
          }

          iv0[0] = 1;
          iv0[1] = 1;
          iv0[2] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&iv0[0], 3, &(*(int32_T (*)[3])r1->size)
            [0], 3, &e_emlrtECI, sp);
          vlen = r1->size[2];
          for (i3 = 0; i3 < vlen; i3++) {
            mess_from_VN_to_FN.contents->data[(i1 +
              mess_from_VN_to_FN.contents->size[0] * i2) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * ii->data[i3]] = r1->data
              [r1->size[0] * r1->size[1] * i3] - cte_norm;
          }

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
            emlrtDynamicBoundsCheckR2012b(1, 1, i1, &vb_emlrtBCI, sp);
          }

          i1 = b_ii->size[0] * b_ii->size[1];
          b_ii->size[0] = 1;
          b_ii->size[1] = vphi_j->size[1];
          emxEnsureCapacity_int32_T(sp, b_ii, i1, &q_emlrtRTEI);
          vlen = vphi_j->size[1];
          for (i1 = 0; i1 < vlen; i1++) {
            b_ii->data[b_ii->size[0] * i1] = (int32_T)vphi_j->data[vphi_j->size
              [0] * i1];
          }

          vlen = mess_from_VN_to_FN.contents->size[2];
          i1 = mess_from_VN_to_FN.contents->size[1];
          c_ii = b_ii->data[0];
          if (!((c_ii >= 1) && (c_ii <= i1))) {
            emlrtDynamicBoundsCheckR2012b(c_ii, 1, i1, &wb_emlrtBCI, sp);
          }

          i1 = mess_from_VN_to_FN.contents->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &ub_emlrtBCI, sp);
          }

          i1 = b_mess_from_VN_to_FN->size[0] * b_mess_from_VN_to_FN->size[1] *
            b_mess_from_VN_to_FN->size[2];
          b_mess_from_VN_to_FN->size[0] = 1;
          b_mess_from_VN_to_FN->size[1] = 1;
          b_mess_from_VN_to_FN->size[2] = vlen;
          emxEnsureCapacity_real_T1(sp, b_mess_from_VN_to_FN, i1, &s_emlrtRTEI);
          for (i1 = 0; i1 < vlen; i1++) {
            b_mess_from_VN_to_FN->data[b_mess_from_VN_to_FN->size[0] *
              b_mess_from_VN_to_FN->size[1] * i1] =
              mess_from_VN_to_FN.contents->data[((j +
              mess_from_VN_to_FN.contents->size[0] * (c_ii - 1)) +
              mess_from_VN_to_FN.contents->size[0] *
              mess_from_VN_to_FN.contents->size[1] * i1) - 1];
          }

          st.site = &y_emlrtRSI;
          b_squeeze(&st, b_mess_from_VN_to_FN, pmf);
          i1 = soft_bits->size[0];
          i2 = (j - 1) + 1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &xb_emlrtBCI, sp);
          }

          vlen = soft_bits->size[1];
          i1 = ii->size[0];
          ii->size[0] = vlen;
          emxEnsureCapacity_int32_T1(sp, ii, i1, &w_emlrtRTEI);
          for (i1 = 0; i1 < vlen; i1++) {
            ii->data[i1] = i1;
          }

          i1 = soft_bits->size[2];
          i2 = ns + 1;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &yb_emlrtBCI, sp);
          }

          st.site = &ab_emlrtRSI;
          get_LLRs(&st, &kb, &codewords_binary_labels, &eps_val_num,
                   &eps_val_den, pmf, vphi_j);
          b_a_priori_beliefs[0] = 1;
          b_a_priori_beliefs[1] = ii->size[0];
          emlrtSubAssignSizeCheckR2012b(&b_a_priori_beliefs[0], 2, &(*(int32_T (*)
            [2])vphi_j->size)[0], 2, &f_emlrtECI, sp);
          vlen = vphi_j->size[1];
          for (i1 = 0; i1 < vlen; i1++) {
            soft_bits->data[((j + soft_bits->size[0] * ii->data[i1]) +
                             soft_bits->size[0] * soft_bits->size[1] * ns) - 1] =
              vphi_j->data[vphi_j->size[0] * i1];
          }

          st.site = &bb_emlrtRSI;
          b_st.site = &xe_emlrtRSI;
          c_st.site = &ye_emlrtRSI;
          d_st.site = &af_emlrtRSI;
          if ((pmf->size[0] == 1) || (pmf->size[0] != 1)) {
          } else {
            emlrtErrorWithMessageIdR2018a(&d_st, &yd_emlrtRTEI,
              "Coder:toolbox:autoDimIncompatibility",
              "Coder:toolbox:autoDimIncompatibility", 0);
          }

          if (!(pmf->size[0] >= 1)) {
            emlrtErrorWithMessageIdR2018a(&d_st, &ae_emlrtRTEI,
              "Coder:toolbox:eml_min_or_max_varDimZero",
              "Coder:toolbox:eml_min_or_max_varDimZero", 0);
          }

          e_st.site = &bf_emlrtRSI;
          f_st.site = &cf_emlrtRSI;
          g_st.site = &df_emlrtRSI;
          nx = pmf->size[0];
          c_ii = 1;
          h_st.site = &ff_emlrtRSI;
          cte_norm = pmf->data[0];
          h_st.site = &ef_emlrtRSI;
          if ((!(2 > nx)) && (nx > 2147483646)) {
            i_st.site = &lb_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (i = 1; i < nx; i++) {
            overflow = ((!muDoubleScalarIsNaN(pmf->data[i])) &&
                        (muDoubleScalarIsNaN(cte_norm) || (cte_norm < pmf->
              data[i])));
            if (overflow) {
              cte_norm = pmf->data[i];
              c_ii = i + 1;
            }
          }

          i1 = hard_symbols->size[0];
          if (!((j >= 1) && (j <= i1))) {
            emlrtDynamicBoundsCheckR2012b(j, 1, i1, &ac_emlrtBCI, sp);
          }

          i1 = hard_symbols->size[1];
          i2 = 1 + ns;
          if (!((i2 >= 1) && (i2 <= i1))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i1, &ac_emlrtBCI, sp);
          }

          hard_symbols->data[(j + hard_symbols->size[0] * (i2 - 1)) - 1] = c_ii;
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
  emxFree_real_T(sp, &c_varargin_1);
  emxFree_boolean_T(sp, &b_x);
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

/* End of code generation (TB_ESGA_MPA_v0.c) */
