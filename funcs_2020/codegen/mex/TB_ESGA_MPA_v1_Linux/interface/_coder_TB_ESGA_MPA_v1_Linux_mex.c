/*
 * _coder_TB_ESGA_MPA_v1_Linux_mex.c
 *
 * Code generation for function '_coder_TB_ESGA_MPA_v1_Linux_mex'
 *
 */

/* Include files */
#include "TB_ESGA_MPA_v1_Linux.h"
#include "_coder_TB_ESGA_MPA_v1_Linux_mex.h"
#include "TB_ESGA_MPA_v1_Linux_terminate.h"
#include "_coder_TB_ESGA_MPA_v1_Linux_api.h"
#include "TB_ESGA_MPA_v1_Linux_initialize.h"
#include "TB_ESGA_MPA_v1_Linux_data.h"

/* Function Declarations */
static void c_TB_ESGA_MPA_v1_Linux_mexFunct(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[13]);

/* Function Definitions */
static void c_TB_ESGA_MPA_v1_Linux_mexFunct(int32_T nlhs, mxArray *plhs[2],
  int32_T nrhs, const mxArray *prhs[13])
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
                        20, "TB_ESGA_MPA_v1_Linux");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "TB_ESGA_MPA_v1_Linux");
  }

  /* Call the function. */
  TB_ESGA_MPA_v1_Linux_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  TB_ESGA_MPA_v1_Linux_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(TB_ESGA_MPA_v1_Linux_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  TB_ESGA_MPA_v1_Linux_initialize();

  /* Dispatch the entry-point. */
  c_TB_ESGA_MPA_v1_Linux_mexFunct(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_TB_ESGA_MPA_v1_Linux_mex.c) */
