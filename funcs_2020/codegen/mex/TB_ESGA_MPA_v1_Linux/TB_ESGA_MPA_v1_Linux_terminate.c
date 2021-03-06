/*
 * TB_ESGA_MPA_v1_Linux_terminate.c
 *
 * Code generation for function 'TB_ESGA_MPA_v1_Linux_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v1_Linux.h"
#include "TB_ESGA_MPA_v1_Linux_terminate.h"
#include "_coder_TB_ESGA_MPA_v1_Linux_mex.h"
#include "TB_ESGA_MPA_v1_Linux_data.h"

/* Function Definitions */
void TB_ESGA_MPA_v1_Linux_atexit(void)
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

void TB_ESGA_MPA_v1_Linux_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (TB_ESGA_MPA_v1_Linux_terminate.c) */
