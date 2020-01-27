/*
 * uplink_SCMA_terminate.c
 *
 * Code generation for function 'uplink_SCMA_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "uplink_SCMA.h"
#include "uplink_SCMA_terminate.h"
#include "_coder_uplink_SCMA_mex.h"
#include "uplink_SCMA_data.h"

/* Function Definitions */
void uplink_SCMA_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void uplink_SCMA_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (uplink_SCMA_terminate.c) */
