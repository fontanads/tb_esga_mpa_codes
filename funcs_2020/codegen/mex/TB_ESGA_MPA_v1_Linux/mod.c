/*
 * mod.c
 *
 * Code generation for function 'mod'
 *
 */

/* Include files */
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "TB_ESGA_MPA_v1_Linux.h"
#include "mod.h"

/* Function Definitions */
real_T b_mod(real_T x, real_T y)
{
  real_T r;
  boolean_T rEQ0;
  real_T q;
  r = x;
  if ((!muDoubleScalarIsInf(x)) && (!muDoubleScalarIsNaN(x)) &&
      ((!muDoubleScalarIsInf(y)) && (!muDoubleScalarIsNaN(y)))) {
    if (x == 0.0) {
      r = y * 0.0;
    } else {
      if (y != 0.0) {
        r = muDoubleScalarRem(x, y);
        rEQ0 = (r == 0.0);
        if ((!rEQ0) && (y > muDoubleScalarFloor(y))) {
          q = muDoubleScalarAbs(x / y);
          rEQ0 = (muDoubleScalarAbs(q - muDoubleScalarFloor(q + 0.5)) <=
                  2.2204460492503131E-16 * q);
        }

        if (rEQ0) {
          r = y * 0.0;
        } else {
          if ((x < 0.0) != (y < 0.0)) {
            r += y;
          }
        }
      }
    }
  } else {
    if (y != 0.0) {
      r = rtNaN;
    }
  }

  return r;
}

/* End of code generation (mod.c) */
