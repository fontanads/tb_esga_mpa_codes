/*
 * TB_ESGA_MPA_v1_types.h
 *
 * Code generation for function 'TB_ESGA_MPA_v1'
 *
 */

#ifndef TB_ESGA_MPA_V1_TYPES_H
#define TB_ESGA_MPA_V1_TYPES_H

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

#ifndef typedef_coder_internal_ref_2
#define typedef_coder_internal_ref_2

typedef struct {
  emxArray_creal_T *contents;
} coder_internal_ref_2;

#endif                                 /*typedef_coder_internal_ref_2*/

#ifndef typedef_coder_internal_ref_3
#define typedef_coder_internal_ref_3

typedef struct {
  emxArray_creal_T *contents;
} coder_internal_ref_3;

#endif                                 /*typedef_coder_internal_ref_3*/

#ifndef typedef_coder_internal_ref_5
#define typedef_coder_internal_ref_5

typedef struct {
  emxArray_real_T *contents;
} coder_internal_ref_5;

#endif                                 /*typedef_coder_internal_ref_5*/

#ifndef typedef_coder_internal_ref_6
#define typedef_coder_internal_ref_6

typedef struct {
  emxArray_real_T *contents;
} coder_internal_ref_6;

#endif                                 /*typedef_coder_internal_ref_6*/

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

#ifndef struct_emxArray_real_T_1x20
#define struct_emxArray_real_T_1x20

struct emxArray_real_T_1x20
{
  real_T data[20];
  int32_T size[2];
};

#endif                                 /*struct_emxArray_real_T_1x20*/

#ifndef typedef_emxArray_real_T_1x20
#define typedef_emxArray_real_T_1x20

typedef struct emxArray_real_T_1x20 emxArray_real_T_1x20;

#endif                                 /*typedef_emxArray_real_T_1x20*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  emxArray_real_T_1x20 best_subset;
} struct0_T;

#endif                                 /*typedef_struct0_T*/

#ifndef typedef_emxArray_struct0_T
#define typedef_emxArray_struct0_T

typedef struct {
  struct0_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
} emxArray_struct0_T;

#endif                                 /*typedef_emxArray_struct0_T*/
#endif

/* End of code generation (TB_ESGA_MPA_v1_types.h) */
