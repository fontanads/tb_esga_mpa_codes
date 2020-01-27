/*
 * _coder_uplink_SCMA_Linux_mex.c
 *
 * Code generation for function '_coder_uplink_SCMA_Linux_mex'
 *
 */

/* Include files */
#include "uplink_SCMA_Linux.h"
#include "_coder_uplink_SCMA_Linux_mex.h"
#include "uplink_SCMA_Linux_terminate.h"
#include "_coder_uplink_SCMA_Linux_api.h"
#include "uplink_SCMA_Linux_initialize.h"
#include "uplink_SCMA_Linux_data.h"

/* Function Declarations */
static void uplink_SCMA_Linux_mexFunction(int32_T nlhs, mxArray *plhs[3],
  int32_T nrhs, const mxArray *prhs[9]);

/* Function Definitions */
static void uplink_SCMA_Linux_mexFunction(int32_T nlhs, mxArray *plhs[3],
  int32_T nrhs, const mxArray *prhs[9])
{
  const mxArray *outputs[3];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 9) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 9, 4,
                        17, "uplink_SCMA_Linux");
  }

  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 17,
                        "uplink_SCMA_Linux");
  }

  /* Call the function. */
  uplink_SCMA_Linux_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  uplink_SCMA_Linux_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(uplink_SCMA_Linux_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  uplink_SCMA_Linux_initialize();

  /* Dispatch the entry-point. */
  uplink_SCMA_Linux_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_uplink_SCMA_Linux_mex.c) */
