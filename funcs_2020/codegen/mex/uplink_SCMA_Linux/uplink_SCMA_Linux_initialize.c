/*
 * uplink_SCMA_Linux_initialize.c
 *
 * Code generation for function 'uplink_SCMA_Linux_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "uplink_SCMA_Linux.h"
#include "uplink_SCMA_Linux_initialize.h"
#include "_coder_uplink_SCMA_Linux_mex.h"
#include "uplink_SCMA_Linux_data.h"

/* Function Definitions */
void uplink_SCMA_Linux_initialize(void)
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

/* End of code generation (uplink_SCMA_Linux_initialize.c) */
