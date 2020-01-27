/*
 * _coder_modulation_pmf_update_Linux_mex.c
 *
 * Code generation for function '_coder_modulation_pmf_update_Linux_mex'
 *
 */

/* Include files */
#include "modulation_pmf_update_Linux.h"
#include "_coder_modulation_pmf_update_Linux_mex.h"
#include "modulation_pmf_update_Linux_terminate.h"
#include "_coder_modulation_pmf_update_Linux_api.h"
#include "modulation_pmf_update_Linux_initialize.h"
#include "modulation_pmf_update_Linux_data.h"

/* Function Declarations */
static void c_modulation_pmf_update_Linux_m(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[2]);

/* Function Definitions */
static void c_modulation_pmf_update_Linux_m(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[2])
{
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 2, 4,
                        27, "modulation_pmf_update_Linux");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 27,
                        "modulation_pmf_update_Linux");
  }

  /* Call the function. */
  modulation_pmf_update_Linux_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  modulation_pmf_update_Linux_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(modulation_pmf_update_Linux_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  modulation_pmf_update_Linux_initialize();

  /* Dispatch the entry-point. */
  c_modulation_pmf_update_Linux_m(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_modulation_pmf_update_Linux_mex.c) */
