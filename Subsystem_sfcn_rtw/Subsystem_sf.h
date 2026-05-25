/*
 * Subsystem_sf.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Subsystem_sf".
 *
 * Model version              : 1.30
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C source code generated on : Thu May 21 23:12:08 2026
 *
 * Target selection: rtwsfcn.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Emulation hardware selection:
 *    Differs from embedded hardware (MATLAB Host)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Subsystem_sf_h_
#define Subsystem_sf_h_
#ifndef Subsystem_sf_COMMON_INCLUDES_
#define Subsystem_sf_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME                Subsystem_sf
#define S_FUNCTION_LEVEL               2
#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif

#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#if !defined(MATLAB_MEX_FILE)
#include "rt_matrx.h"
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES

typedef struct {
  void *blockIO;
  void *defaultParam;
  void *nonContDerivSig;
} LocalS;

#define ssSetLocalBlockIO(S, io)       ((LocalS *)ssGetUserData(S))->blockIO = ((void *)(io))
#define ssGetLocalBlockIO(S)           ((LocalS *)ssGetUserData(S))->blockIO
#define ssSetLocalDefaultParam(S, paramVector) ((LocalS *)ssGetUserData(S))->defaultParam = (paramVector)
#define ssGetLocalDefaultParam(S)      ((LocalS *)ssGetUserData(S))->defaultParam
#define ssSetLocalNonContDerivSig(S, pSig) ((LocalS *)ssGetUserData(S))->nonContDerivSig = (pSig)
#define ssGetLocalNonContDerivSig(S)   ((LocalS *)ssGetUserData(S))->nonContDerivSig
#endif
#endif                                 /* Subsystem_sf_COMMON_INCLUDES_ */

#include "Subsystem_sf_types.h"
#include <string.h>
#include "rt_defines.h"
#include <stddef.h>

/* Block signals for system '<Root>/Subsystem' */
typedef struct {
  real_T Kabc[3];                      /* '<S8>/Kabc' */
} B_Subsystem_Subsystem_T;

/* Block signals (default storage) */
typedef struct {
  B_Subsystem_Subsystem_T Subsystem_d; /* '<Root>/Subsystem' */
} B_Subsystem_T;

/* Constant parameters (default storage) */
typedef struct {
  /* Expression: dlgSett.sin_table
   * Referenced by: '<S18>/sine_table_values'
   */
  real_T sine_table_values_Value[1002];
} ConstP_Subsystem_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T *vd;                          /* '<Root>/vd' */
  real_T *vq;                          /* '<Root>/vq' */
  real_T *ELEangle;                    /* '<Root>/ELEangle' */
} ExternalUPtrs_Subsystem_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T *Vabc[3];                     /* '<Root>/Vabc' */
} ExtY_Subsystem_T;

/* Constant parameters (default storage) */
extern const ConstP_Subsystem_T Subsystem_ConstP;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S3>/B' : Unused code path elimination
 * Block '<S6>/C1' : Unused code path elimination
 * Block '<S4>/C' : Unused code path elimination
 * Block '<S4>/D' : Unused code path elimination
 * Block '<S11>/Qs' : Unused code path elimination
 * Block '<S16>/Data Type Duplicate' : Unused code path elimination
 * Block '<S16>/Data Type Duplicate1' : Unused code path elimination
 * Block '<S18>/Data Type Duplicate' : Unused code path elimination
 * Block '<S18>/Data Type Propagation' : Unused code path elimination
 * Block '<S23>/Data Type Duplicate' : Unused code path elimination
 * Block '<S24>/Data Type Duplicate' : Unused code path elimination
 * Block '<S8>/Kc' : Eliminated nontunable gain of 1
 * Block '<S18>/Get_FractionVal' : Eliminate redundant data type conversion
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('Discrete_FOC_LSM/Subsystem')    - opens subsystem Discrete_FOC_LSM/Subsystem
 * hilite_system('Discrete_FOC_LSM/Subsystem/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Discrete_FOC_LSM'
 * '<S1>'   : 'Discrete_FOC_LSM/Subsystem'
 * '<S2>'   : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark'
 * '<S3>'   : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Clarke Transform'
 * '<S4>'   : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1'
 * '<S5>'   : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Clarke Transform/Variant'
 * '<S6>'   : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Clarke Transform/Variant/mcb'
 * '<S7>'   : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Clarke Transform/Variant/mcb/Inverse Clarke Transform'
 * '<S8>'   : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Clarke Transform/Variant/mcb/Inverse Clarke Transform/Three phase input'
 * '<S9>'   : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant'
 * '<S10>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb'
 * '<S11>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/Inverse Park Transform'
 * '<S12>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos'
 * '<S13>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/Inverse Park Transform/Select'
 * '<S14>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/Inverse Park Transform/Select/Three Inputs'
 * '<S15>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/Inverse Park Transform/Select/Three Inputs/Three inputs'
 * '<S16>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/Inverse Park Transform/Select/Three Inputs/Three inputs/Two inputs CRL'
 * '<S17>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/Inverse Park Transform/Select/Three Inputs/Three inputs/Two inputs CRL/Switch_Axis'
 * '<S18>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup'
 * '<S19>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/Interpolation'
 * '<S20>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/WrapUp'
 * '<S21>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/datatype'
 * '<S22>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/WrapUp/Compare To Zero'
 * '<S23>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/WrapUp/If Action Subsystem'
 * '<S24>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/WrapUp/If Action Subsystem1'
 * '<S25>'  : 'Discrete_FOC_LSM/Subsystem/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/datatype/datatype no change'
 */
#endif                                 /* Subsystem_sf_h_ */
