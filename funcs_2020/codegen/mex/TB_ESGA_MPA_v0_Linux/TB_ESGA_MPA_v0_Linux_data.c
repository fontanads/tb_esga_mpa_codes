/*
 * TB_ESGA_MPA_v0_Linux_data.c
 *
 * Code generation for function 'TB_ESGA_MPA_v0_Linux_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v0_Linux.h"
#include "TB_ESGA_MPA_v0_Linux_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131466U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "TB_ESGA_MPA_v0_Linux",              /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo eb_emlrtRSI = { 27,        /* lineNo */
  "log2",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elfun/log2.m"/* pathName */
};

emlrtRSInfo fb_emlrtRSI = { 48,        /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"/* pathName */
};

emlrtRSInfo gb_emlrtRSI = { 18,        /* lineNo */
  "log2",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/+scalar/log2.m"/* pathName */
};

emlrtRSInfo hb_emlrtRSI = { 55,        /* lineNo */
  "log2",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/+scalar/log2.m"/* pathName */
};

emlrtRSInfo lb_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo ob_emlrtRSI = { 224,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo qb_emlrtRSI = { 258,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo rb_emlrtRSI = { 261,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo sb_emlrtRSI = { 348,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo tb_emlrtRSI = { 71,        /* lineNo */
  "issorted",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/issorted.m"/* pathName */
};

emlrtRSInfo ub_emlrtRSI = { 93,        /* lineNo */
  "issorted",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/issorted.m"/* pathName */
};

emlrtRSInfo vb_emlrtRSI = { 459,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo wb_emlrtRSI = { 31,        /* lineNo */
  "safeEq",                            /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/safeEq.m"/* pathName */
};

emlrtRSInfo sc_emlrtRSI = { 227,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo uc_emlrtRSI = { 259,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo rd_emlrtRSI = { 64,        /* lineNo */
  "sumprod",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/private/sumprod.m"/* pathName */
};

emlrtRSInfo sd_emlrtRSI = { 134,       /* lineNo */
  "combineVectorElements",             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/private/combineVectorElements.m"/* pathName */
};

emlrtRSInfo td_emlrtRSI = { 193,       /* lineNo */
  "combineVectorElements",             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/private/combineVectorElements.m"/* pathName */
};

emlrtRSInfo yd_emlrtRSI = { 33,        /* lineNo */
  "reshape",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/reshape.m"/* pathName */
};

emlrtRSInfo ae_emlrtRSI = { 114,       /* lineNo */
  "reshape",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/reshape.m"/* pathName */
};

emlrtRSInfo oe_emlrtRSI = { 13,        /* lineNo */
  "log",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elfun/log.m"/* pathName */
};

emlrtRTEInfo re_emlrtRTEI = { 22,      /* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/private/sumprod.m"/* pName */
};

/* End of code generation (TB_ESGA_MPA_v0_Linux_data.c) */
