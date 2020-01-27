/*
 * mpower.c
 *
 * Code generation for function 'mpower'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "modulation_pmf_update.h"
#include "mpower.h"

/* Function Definitions */
real_T mpower(real_T b)
{
  return muDoubleScalarPower(2.0, b);
}

/* End of code generation (mpower.c) */
