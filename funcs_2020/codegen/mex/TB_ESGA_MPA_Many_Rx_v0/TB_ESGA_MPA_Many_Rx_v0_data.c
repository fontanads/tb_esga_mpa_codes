/*
 * TB_ESGA_MPA_Many_Rx_v0_data.c
 *
 * Code generation for function 'TB_ESGA_MPA_Many_Rx_v0_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_Many_Rx_v0.h"
#include "TB_ESGA_MPA_Many_Rx_v0_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131466U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "TB_ESGA_MPA_Many_Rx_v0",            /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo bb_emlrtRSI = { 27,        /* lineNo */
  "log2",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elfun\\log2.m"/* pathName */
};

emlrtRSInfo cb_emlrtRSI = { 48,        /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunction.m"/* pathName */
};

emlrtRSInfo db_emlrtRSI = { 18,        /* lineNo */
  "log2",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+scalar\\log2.m"/* pathName */
};

emlrtRSInfo eb_emlrtRSI = { 55,        /* lineNo */
  "log2",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\+scalar\\log2.m"/* pathName */
};

emlrtRSInfo ib_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo lb_emlrtRSI = { 224,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

emlrtRSInfo nb_emlrtRSI = { 258,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

emlrtRSInfo ob_emlrtRSI = { 261,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

emlrtRSInfo pb_emlrtRSI = { 348,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

emlrtRSInfo qb_emlrtRSI = { 71,        /* lineNo */
  "issorted",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\issorted.m"/* pathName */
};

emlrtRSInfo rb_emlrtRSI = { 93,        /* lineNo */
  "issorted",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\issorted.m"/* pathName */
};

emlrtRSInfo sb_emlrtRSI = { 459,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

emlrtRSInfo tb_emlrtRSI = { 31,        /* lineNo */
  "safeEq",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\eml\\+coder\\+internal\\safeEq.m"/* pathName */
};

emlrtRSInfo ac_emlrtRSI = { 33,        /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

emlrtRSInfo bc_emlrtRSI = { 114,       /* lineNo */
  "reshape",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\elmat\\reshape.m"/* pathName */
};

emlrtRSInfo lc_emlrtRSI = { 227,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

emlrtRSInfo nc_emlrtRSI = { 259,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\ops\\private\\eml_setop.m"/* pathName */
};

emlrtRSInfo jd_emlrtRSI = { 64,        /* lineNo */
  "sumprod",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pathName */
};

emlrtRSInfo kd_emlrtRSI = { 134,       /* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

emlrtRSInfo ld_emlrtRSI = { 193,       /* lineNo */
  "combineVectorElements",             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\combineVectorElements.m"/* pathName */
};

emlrtRTEInfo he_emlrtRTEI = { 22,      /* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2018a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumprod.m"/* pName */
};

/* End of code generation (TB_ESGA_MPA_Many_Rx_v0_data.c) */
