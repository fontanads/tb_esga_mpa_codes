/*
 * TB_ESGA_MPA_v1_Linux_data.c
 *
 * Code generation for function 'TB_ESGA_MPA_v1_Linux_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v1_Linux.h"
#include "TB_ESGA_MPA_v1_Linux_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131466U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "TB_ESGA_MPA_v1_Linux",              /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo hb_emlrtRSI = { 27,        /* lineNo */
  "log2",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elfun/log2.m"/* pathName */
};

emlrtRSInfo ib_emlrtRSI = { 48,        /* lineNo */
  "applyScalarFunction",               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/applyScalarFunction.m"/* pathName */
};

emlrtRSInfo jb_emlrtRSI = { 18,        /* lineNo */
  "log2",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/+scalar/log2.m"/* pathName */
};

emlrtRSInfo kb_emlrtRSI = { 55,        /* lineNo */
  "log2",                              /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/+scalar/log2.m"/* pathName */
};

emlrtRSInfo ob_emlrtRSI = { 21,        /* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/eml/eml_int_forloop_overflow_check.m"/* pathName */
};

emlrtRSInfo rb_emlrtRSI = { 224,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo tb_emlrtRSI = { 258,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo ub_emlrtRSI = { 261,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo vb_emlrtRSI = { 348,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo wb_emlrtRSI = { 71,        /* lineNo */
  "issorted",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/issorted.m"/* pathName */
};

emlrtRSInfo xb_emlrtRSI = { 93,        /* lineNo */
  "issorted",                          /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/issorted.m"/* pathName */
};

emlrtRSInfo yb_emlrtRSI = { 459,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo ac_emlrtRSI = { 31,        /* lineNo */
  "safeEq",                            /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/eml/+coder/+internal/safeEq.m"/* pathName */
};

emlrtRSInfo cc_emlrtRSI = { 64,        /* lineNo */
  "sumprod",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/private/sumprod.m"/* pathName */
};

emlrtRSInfo dc_emlrtRSI = { 134,       /* lineNo */
  "combineVectorElements",             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/private/combineVectorElements.m"/* pathName */
};

emlrtRSInfo ec_emlrtRSI = { 193,       /* lineNo */
  "combineVectorElements",             /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/private/combineVectorElements.m"/* pathName */
};

emlrtRSInfo hc_emlrtRSI = { 54,        /* lineNo */
  "reshape",                           /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/reshape.m"/* pathName */
};

emlrtRSInfo gd_emlrtRSI = { 227,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo id_emlrtRSI = { 259,       /* lineNo */
  "eml_setop",                         /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/ops/private/eml_setop.m"/* pathName */
};

emlrtRSInfo re_emlrtRSI = { 13,        /* lineNo */
  "log",                               /* fcnName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elfun/log.m"/* pathName */
};

emlrtRTEInfo ke_emlrtRTEI = { 61,      /* lineNo */
  15,                                  /* colNo */
  "reshape",                           /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/elmat/reshape.m"/* pName */
};

emlrtRTEInfo re_emlrtRTEI = { 22,      /* lineNo */
  23,                                  /* colNo */
  "sumprod",                           /* fName */
  "/usr/local/MATLAB/R2018a/toolbox/eml/lib/matlab/datafun/private/sumprod.m"/* pName */
};

/* End of code generation (TB_ESGA_MPA_v1_Linux_data.c) */
