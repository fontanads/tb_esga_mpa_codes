/*
 * modulation_pmf_update_Linux_terminate.c
 *
 * Code generation for function 'modulation_pmf_update_Linux_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "modulation_pmf_update_Linux.h"
#include "modulation_pmf_update_Linux_terminate.h"
#include "_coder_modulation_pmf_update_Linux_mex.h"
#include "modulation_pmf_update_Linux_data.h"

/* Function Definitions */
void modulation_pmf_update_Linux_atexit(void)
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

void modulation_pmf_update_Linux_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (modulation_pmf_update_Linux_terminate.c) */
