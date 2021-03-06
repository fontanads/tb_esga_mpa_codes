/*
 * log.c
 *
 * Code generation for function 'log'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v0_Linux.h"
#include "log.h"
#include "error.h"
#include "TB_ESGA_MPA_v0_Linux_data.h"

/* Function Definitions */
void b_log(const emlrtStack *sp, real_T *x)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    st.site = &oe_emlrtRSI;
    f_error(&st);
  }

  *x = muDoubleScalarLog(*x);
}

/* End of code generation (log.c) */
