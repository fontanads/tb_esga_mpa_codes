/*
 * TB_ESGA_MPA_v1_initialize.c
 *
 * Code generation for function 'TB_ESGA_MPA_v1_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v1.h"
#include "TB_ESGA_MPA_v1_initialize.h"
#include "_coder_TB_ESGA_MPA_v1_mex.h"
#include "TB_ESGA_MPA_v1_data.h"

/* Function Definitions */
void TB_ESGA_MPA_v1_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (TB_ESGA_MPA_v1_initialize.c) */
