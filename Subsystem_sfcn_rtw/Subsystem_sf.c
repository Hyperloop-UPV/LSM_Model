/*
 * Subsystem_sf.c
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

#include "Subsystem_sf.h"
#include "rtwtypes.h"
#include "Subsystem_sf_types.h"
#include "Subsystem_sf_private.h"
#include <math.h>
#include "rt_nonfinite.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

extern void *Subsystem_malloc(SimStruct *S);

#endif

#ifndef __RTW_UTFREE__
#if defined (MATLAB_MEX_FILE)

extern void * utMalloc(size_t);
extern void utFree(void *);

#endif
#endif                                 /* #ifndef __RTW_UTFREE__ */

#if defined(MATLAB_MEX_FILE)
#include "rt_nonfinite.c"
#endif

static const char_T *RT_MEMORY_ALLOCATION_ERROR =
  "memory allocation error in generated S-Function";

/* Output and update for atomic system: '<Root>/Subsystem' */
void Subsystem_Subsystem(real_T rtu_vd, real_T rtu_vq, real_T rtu_ELEangle,
  B_Subsystem_Subsystem_T *localB)
{
  real_T rtb_Sum;
  real_T rtb_Sum2;
  real_T rtb_Sum6;
  real_T rtb_convert_pu;
  uint16_T rtb_Get_Integer;

  /* Gain: '<S20>/convert_pu' */
  rtb_convert_pu = 0.15915494309189535 * rtu_ELEangle;

  /* If: '<S20>/If' incorporates:
   *  Constant: '<S22>/Constant'
   *  RelationalOperator: '<S22>/Compare'
   */
  if (rtb_convert_pu < 0.0) {
    /* Outputs for IfAction SubSystem: '<S20>/If Action Subsystem' incorporates:
     *  ActionPort: '<S23>/Action Port'
     */
    /* DataTypeConversion: '<S23>/Convert_uint16' */
    rtb_Sum = floor(rtb_convert_pu);
    if (rtIsInf(rtb_Sum)) {
      rtb_Sum = 0.0;
    } else {
      rtb_Sum = fmod(rtb_Sum, 65536.0);
    }

    /* Sum: '<S23>/Sum' incorporates:
     *  DataTypeConversion: '<S23>/Convert_back'
     *  DataTypeConversion: '<S23>/Convert_uint16'
     */
    rtb_convert_pu -= (real_T)(rtb_Sum < 0.0 ? (int32_T)(int16_T)-(int16_T)
      (uint16_T)-rtb_Sum : (int32_T)(int16_T)(uint16_T)rtb_Sum);

    /* End of Outputs for SubSystem: '<S20>/If Action Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<S20>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S24>/Action Port'
     */
    /* DataTypeConversion: '<S24>/Convert_uint16' */
    rtb_Sum = trunc(rtb_convert_pu);
    if (rtIsNaN(rtb_Sum) || rtIsInf(rtb_Sum)) {
      rtb_Sum = 0.0;
    } else {
      rtb_Sum = fmod(rtb_Sum, 65536.0);
    }

    /* Sum: '<S24>/Sum' incorporates:
     *  DataTypeConversion: '<S24>/Convert_back'
     *  DataTypeConversion: '<S24>/Convert_uint16'
     */
    rtb_convert_pu -= (real_T)(int16_T)(uint16_T)rtb_Sum;

    /* End of Outputs for SubSystem: '<S20>/If Action Subsystem1' */
  }

  /* End of If: '<S20>/If' */

  /* Gain: '<S18>/indexing' */
  rtb_convert_pu *= 800.0;

  /* DataTypeConversion: '<S18>/Get_Integer' */
  rtb_Sum = trunc(rtb_convert_pu);
  if (rtIsNaN(rtb_Sum) || rtIsInf(rtb_Sum)) {
    rtb_Sum = 0.0;
  } else {
    rtb_Sum = fmod(rtb_Sum, 65536.0);
  }

  rtb_Get_Integer = (uint16_T)(rtb_Sum < 0.0 ? (int32_T)(uint16_T)-(int16_T)
    (uint16_T)-rtb_Sum : (int32_T)(uint16_T)rtb_Sum);

  /* End of DataTypeConversion: '<S18>/Get_Integer' */

  /* Sum: '<S18>/Sum2' incorporates:
   *  DataTypeConversion: '<S18>/Data Type Conversion1'
   */
  rtb_Sum = rtb_convert_pu - (real_T)rtb_Get_Integer;

  /* Selector: '<S18>/Lookup' incorporates:
   *  Constant: '<S18>/sine_table_values'
   *  Sum: '<S18>/Sum'
   */
  rtb_convert_pu = Subsystem_ConstP.sine_table_values_Value[rtb_Get_Integer];

  /* Sum: '<S19>/Sum4' incorporates:
   *  Constant: '<S18>/offset'
   *  Constant: '<S18>/sine_table_values'
   *  Product: '<S19>/Product'
   *  Selector: '<S18>/Lookup'
   *  Sum: '<S18>/Sum'
   *  Sum: '<S19>/Sum3'
   */
  rtb_convert_pu += (Subsystem_ConstP.sine_table_values_Value[(int32_T)
                     (rtb_Get_Integer + 1U)] - rtb_convert_pu) * rtb_Sum;

  /* Selector: '<S18>/Lookup' incorporates:
   *  Constant: '<S18>/offset'
   *  Constant: '<S18>/sine_table_values'
   *  Sum: '<S18>/Sum'
   *  Sum: '<S19>/Sum5'
   */
  rtb_Sum2 = Subsystem_ConstP.sine_table_values_Value[(int32_T)(rtb_Get_Integer
    + 200U)];

  /* Sum: '<S19>/Sum6' incorporates:
   *  Constant: '<S18>/offset'
   *  Constant: '<S18>/sine_table_values'
   *  Product: '<S19>/Product1'
   *  Selector: '<S18>/Lookup'
   *  Sum: '<S18>/Sum'
   *  Sum: '<S19>/Sum5'
   */
  rtb_Sum6 = (Subsystem_ConstP.sine_table_values_Value[(int32_T)(rtb_Get_Integer
    + 201U)] - rtb_Sum2) * rtb_Sum + rtb_Sum2;

  /* Outputs for Atomic SubSystem: '<S15>/Two inputs CRL' */
  /* Switch: '<S17>/Switch' incorporates:
   *  Product: '<S16>/dsin'
   *  Product: '<S16>/qcos'
   *  Sum: '<S16>/sum_beta'
   */
  rtb_Sum = rtu_vq * rtb_Sum6 + rtu_vd * rtb_convert_pu;

  /* Gain: '<S8>/Gain' incorporates:
   *  AlgorithmDescriptorDelegate generated from: '<S16>/a16'
   */
  rtb_Sum2 = -0.5 * rtb_Sum;

  /* Gain: '<S8>/Gain1' incorporates:
   *  Product: '<S16>/dcos'
   *  Product: '<S16>/qsin'
   *  Sum: '<S16>/sum_alpha'
   *  Switch: '<S17>/Switch'
   *  UnaryMinus: '<S17>/Unary_Minus'
   */
  rtb_convert_pu = -(rtu_vd * rtb_Sum6 - rtu_vq * rtb_convert_pu) *
    0.8660254037844386;

  /* Gain: '<S8>/Kabc' incorporates:
   *  AlgorithmDescriptorDelegate generated from: '<S16>/a16'
   *  Sum: '<S8>/Sum1'
   *  Sum: '<S8>/Sum2'
   */
  localB->Kabc[0] = rtb_Sum;

  /* End of Outputs for SubSystem: '<S15>/Two inputs CRL' */
  localB->Kabc[1] = rtb_Sum2 + rtb_convert_pu;
  localB->Kabc[2] = rtb_Sum2 - rtb_convert_pu;
}

/* Termination for atomic system: '<Root>/Subsystem' */
void Subsystem_Subsystem_Term(SimStruct *const S)
{
  UNUSED_PARAMETER(S);
}

/* Start for root system: '<Root>' */
#define MDL_START

static void mdlStart(SimStruct *S)
{
  /* instance underlying S-Function data */
#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#if defined(MATLAB_MEX_FILE)
#endif

  Subsystem_malloc(S);
  if (ssGetErrorStatus(S) != (NULL) ) {
    return;
  }

#endif

  {
    B_Subsystem_T *_rtB;
    _rtB = ((B_Subsystem_T *) ssGetLocalBlockIO(S));
  }
}

/* Outputs for root system: '<Root>' */
static void mdlOutputs(SimStruct *S, int_T tid)
{
  B_Subsystem_T *_rtB;
  _rtB = ((B_Subsystem_T *) ssGetLocalBlockIO(S));

  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */
  Subsystem_Subsystem(*(const real_T *)ssGetInputPortSignal(S, 0), *(const
    real_T *)ssGetInputPortSignal(S, 1), *(const real_T *)ssGetInputPortSignal(S,
    2), &_rtB->Subsystem_d);

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */

  /* Outport: '<Root>/Vabc' */
  ((real_T *)ssGetOutputPortSignal(S, 0))[0] = _rtB->Subsystem_d.Kabc[0];
  ((real_T *)ssGetOutputPortSignal(S, 0))[1] = _rtB->Subsystem_d.Kabc[1];
  ((real_T *)ssGetOutputPortSignal(S, 0))[2] = _rtB->Subsystem_d.Kabc[2];
  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
#define MDL_UPDATE

static void mdlUpdate(SimStruct *S, int_T tid)
{
  UNUSED_PARAMETER(tid);
}

/* Termination for root system: '<Root>' */
static void mdlTerminate(SimStruct *S)
{
  UNUSED_PARAMETER(S);

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)

  if (ssGetUserData(S) != (NULL) ) {
    rt_FREE(ssGetLocalBlockIO(S));
  }

  rt_FREE(ssGetUserData(S));

#endif

}

#if defined(RT_MALLOC) || defined(MATLAB_MEX_FILE)
#include "Subsystem_mid.h"
#endif

/* Function to initialize sizes. */
static void mdlInitializeSizes(SimStruct *S)
{
  ssSetNumSampleTimes(S, 1);           /* Number of sample times */
  ssSetNumContStates(S, 0);            /* Number of continuous states */
  ssSetNumNonsampledZCs(S, 0);         /* Number of nonsampled ZCs */

  /* Number of output ports */
  if (!ssSetNumOutputPorts(S, 1))
    return;

  /* outport number: 0 */
  if (!ssSetOutputPortVectorDimension(S, 0, 3))
    return;
  if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
    ssSetOutputPortDataType(S, 0, SS_DOUBLE);
  }

  ssSetOutputPortSampleTime(S, 0, 0.001);
  ssSetOutputPortOffsetTime(S, 0, 0.0);
  ssSetOutputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);

  /* Number of input ports */
  if (!ssSetNumInputPorts(S, 3))
    return;

  /* inport number: 0 */
  {
    ssSetInputPortRequiredContiguous(S, 0, true);
    if (!ssSetInputPortMatrixDimensions(S, 0, 1, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 0, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 0, 1);
    ssSetInputPortSampleTime(S, 0, 0.001);
    ssSetInputPortOffsetTime(S, 0, 0.0);
    ssSetInputPortOverWritable(S, 0, 0);
    ssSetInputPortOptimOpts(S, 0, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 1 */
  {
    ssSetInputPortRequiredContiguous(S, 1, true);
    if (!ssSetInputPortMatrixDimensions(S, 1, 1, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 1, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 1, 1);
    ssSetInputPortSampleTime(S, 1, 0.001);
    ssSetInputPortOffsetTime(S, 1, 0.0);
    ssSetInputPortOverWritable(S, 1, 0);
    ssSetInputPortOptimOpts(S, 1, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  /* inport number: 2 */
  {
    ssSetInputPortRequiredContiguous(S, 2, true);
    if (!ssSetInputPortVectorDimension(S, 2, 1))
      return;
    if (ssGetSimMode(S) != SS_SIMMODE_SIZES_CALL_ONLY) {
      ssSetInputPortDataType(S, 2, SS_DOUBLE);
    }

    ssSetInputPortDirectFeedThrough(S, 2, 1);
    ssSetInputPortSampleTime(S, 2, 0.001);
    ssSetInputPortOffsetTime(S, 2, 0.0);
    ssSetInputPortOverWritable(S, 2, 0);
    ssSetInputPortOptimOpts(S, 2, SS_NOT_REUSABLE_AND_GLOBAL);
  }

  ssSetRTWGeneratedSFcn(S, 1);         /* Generated S-function */

  /* DWork */
  if (!ssSetNumDWork(S, 1)) {
    return;
  }

  /* '<S18>/Sum': DWORK1 */
  ssSetDWorkName(S, 0, "DWORK0");
  ssSetDWorkWidth(S, 0, 4);
  ssSetDWorkDataType(S, 0, SS_UINT32);

  /* Tunable Parameters */
  ssSetNumSFcnParams(S, 0);

  /* Number of expected parameters */
#if defined(MATLAB_MEX_FILE)

  if (ssGetNumSFcnParams(S) == ssGetSFcnParamsCount(S)) {

#if defined(MDL_CHECK_PARAMETERS)

    mdlCheckParameters(S);

#endif                                 /* MDL_CHECK_PARAMETERS */

    if (ssGetErrorStatus(S) != (NULL) ) {
      return;
    }
  } else {
    return;                /* Parameter mismatch will be reported by Simulink */
  }

#endif                                 /* MATLAB_MEX_FILE */

  /* Options */
  ssSetOptions(S, (SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE |
                   SS_OPTION_PORT_SAMPLE_TIMES_ASSIGNED ));

#if SS_SFCN_FOR_SIM

  {
    ssSupportsMultipleExecInstances(S, true);
    ssHasStateInsideForEachSS(S, false);
  }

#endif

}

/* Function to initialize sample times. */
static void mdlInitializeSampleTimes(SimStruct *S)
{
  /* task periods */
  ssSetSampleTime(S, 0, 0.001);

  /* task offsets */
  ssSetOffsetTime(S, 0, 0.0);
}

#if defined(MATLAB_MEX_FILE)
#include "fixedpoint.c"
#include "simulink.c"
#else
#undef S_FUNCTION_NAME
#define S_FUNCTION_NAME                Subsystem_sf
#include "cg_sfun.h"
#endif                                 /* defined(MATLAB_MEX_FILE) */
