/*
 * TB_ESGA_MPA_v0_terminate.c
 *
 * Code generation for function 'TB_ESGA_MPA_v0_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v0.h"
#include "TB_ESGA_MPA_v0_terminate.h"
#include "_coder_TB_ESGA_MPA_v0_mex.h"
#include "TB_ESGA_MPA_v0_data.h"

/* Function Definitions */
void TB_ESGA_MPA_v0_atexit(void)
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

void TB_ESGA_MPA_v0_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (TB_ESGA_MPA_v0_terminate.c) */
