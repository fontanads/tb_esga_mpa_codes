/*
 * TB_ESGA_MPA_Many_Rx_Linux_v0_types.h
 *
 * Code generation for function 'TB_ESGA_MPA_Many_Rx_Linux_v0'
 *
 */

#ifndef TB_ESGA_MPA_MANY_RX_LINUX_V0_TYPES_H
#define TB_ESGA_MPA_MANY_RX_LINUX_V0_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T

struct emxArray_boolean_T
{
  boolean_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_boolean_T*/

#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T

typedef struct emxArray_boolean_T emxArray_boolean_T;

#endif                                 /*typedef_emxArray_boolean_T*/

#ifndef typedef_coder_internal_ref
#define typedef_coder_internal_ref

typedef struct {
  emxArray_boolean_T *contents;
} coder_internal_ref;

#endif                                 /*typedef_coder_internal_ref*/

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

#ifndef typedef_coder_internal_ref_1
#define typedef_coder_internal_ref_1

typedef struct {
  emxArray_real_T *contents;
} coder_internal_ref_1;

#endif                                 /*typedef_coder_internal_ref_1*/

#ifndef typedef_emxArray_creal_T
#define typedef_emxArray_creal_T

typedef struct {
  creal_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_creal_T;

#endif                                 /*typedef_emxArray_creal_T*/

#ifndef typedef_coder_internal_ref_3
#define typedef_coder_internal_ref_3

typedef struct {
  emxArray_creal_T *contents;
} coder_internal_ref_3;

#endif                                 /*typedef_coder_internal_ref_3*/

#ifndef typedef_coder_internal_ref_5
#define typedef_coder_internal_ref_5

typedef struct {
  emxArray_creal_T *contents;
} coder_internal_ref_5;

#endif                                 /*typedef_coder_internal_ref_5*/

#ifndef typedef_coder_internal_ref_6
#define typedef_coder_internal_ref_6

typedef struct {
  emxArray_real_T *contents;
} coder_internal_ref_6;

#endif                                 /*typedef_coder_internal_ref_6*/

#ifndef typedef_coder_internal_ref_7
#define typedef_coder_internal_ref_7

typedef struct {
  emxArray_real_T *contents;
} coder_internal_ref_7;

#endif                                 /*typedef_coder_internal_ref_7*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T

typedef struct emxArray_int32_T emxArray_int32_T;

#endif                                 /*typedef_emxArray_int32_T*/

#ifndef struct_emxArray_int8_T
#define struct_emxArray_int8_T

struct emxArray_int8_T
{
  int8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int8_T*/

#ifndef typedef_emxArray_int8_T
#define typedef_emxArray_int8_T

typedef struct emxArray_int8_T emxArray_int8_T;

#endif                                 /*typedef_emxArray_int8_T*/
#endif

/* End of code generation (TB_ESGA_MPA_Many_Rx_Linux_v0_types.h) */
