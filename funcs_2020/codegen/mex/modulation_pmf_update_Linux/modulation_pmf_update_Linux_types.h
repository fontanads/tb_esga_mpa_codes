/*
 * modulation_pmf_update_Linux_types.h
 *
 * Code generation for function 'modulation_pmf_update_Linux'
 *
 */

#ifndef MODULATION_PMF_UPDATE_LINUX_TYPES_H
#define MODULATION_PMF_UPDATE_LINUX_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T

typedef struct emxArray_real_T emxArray_real_T;

#endif                                 /*typedef_emxArray_real_T*/
#endif

/* End of code generation (modulation_pmf_update_Linux_types.h) */
