/*
 * _coder_TB_ESGA_MPA_v1_mex.c
 *
 * Code generation for function '_coder_TB_ESGA_MPA_v1_mex'
 *
 */

/* Include files */
#include "TB_ESGA_MPA_v1.h"
#include "_coder_TB_ESGA_MPA_v1_mex.h"
#include "TB_ESGA_MPA_v1_terminate.h"
#include "_coder_TB_ESGA_MPA_v1_api.h"
#include "TB_ESGA_MPA_v1_initialize.h"
#include "TB_ESGA_MPA_v1_data.h"

/* Function Declarations */
static void TB_ESGA_MPA_v1_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T
  nrhs, const mxArray *prhs[13]);

/* Function Definitions */
static void TB_ESGA_MPA_v1_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T
  nrhs, const mxArray *prhs[13])
{
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 13) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 13, 4,
                        14, "TB_ESGA_MPA_v1");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "TB_ESGA_MPA_v1");
  }

  /* Call the function. */
  TB_ESGA_MPA_v1_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  TB_ESGA_MPA_v1_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(TB_ESGA_MPA_v1_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  TB_ESGA_MPA_v1_initialize();

  /* Dispatch the entry-point. */
  TB_ESGA_MPA_v1_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_TB_ESGA_MPA_v1_mex.c) */
