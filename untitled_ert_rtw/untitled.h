//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: untitled.h
//
// Code generated for Simulink model 'untitled'.
//
// Model version                  : 1.0
// Simulink Coder version         : 26.1 (R2026a) 20-Nov-2025
// C/C++ source code generated on : Thu May 21 23:27:08 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Windows64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef UNTITLED_H_
#define UNTITLED_H_
#include <stdbool.h>
#include <stdint.h>
#include <cmath>
#include "complex_types.h"
#include "untitled_types.h"
#include "rt_defines.h"

// Constant parameters (default storage)
struct ConstP_untitled_T {
  // Expression: dlgSett.sin_table
  //  Referenced by: '<S18>/sine_table_values'

  double sine_table_values_Value[1002];
};

// Real-time Model Data Structure
struct tag_RTM_untitled_T {
  const char * volatile errorStatus;
  const char* getErrorStatus() const;
  void setErrorStatus(const char* const volatile aErrorStatus);
};

// Constant parameters (default storage)
extern const ConstP_untitled_T untitled_ConstP;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void untitled_initialize(RT_MODEL_untitled_T *const untitled_M);
  extern void untitled_step(RT_MODEL_untitled_T *const untitled_M);
  extern void untitled_terminate(RT_MODEL_untitled_T *const untitled_M);

#ifdef __cplusplus

}

#endif

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'untitled'
//  '<S1>'   : 'untitled/Inverse_Park_Clark'
//  '<S2>'   : 'untitled/Inverse_Park_Clark/Reverse Park Clark'
//  '<S3>'   : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Clarke Transform'
//  '<S4>'   : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1'
//  '<S5>'   : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Clarke Transform/Variant'
//  '<S6>'   : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Clarke Transform/Variant/mcb'
//  '<S7>'   : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Clarke Transform/Variant/mcb/Inverse Clarke Transform'
//  '<S8>'   : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Clarke Transform/Variant/mcb/Inverse Clarke Transform/Three phase input'
//  '<S9>'   : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant'
//  '<S10>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb'
//  '<S11>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/Inverse Park Transform'
//  '<S12>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos'
//  '<S13>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/Inverse Park Transform/Select'
//  '<S14>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/Inverse Park Transform/Select/Three Inputs'
//  '<S15>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/Inverse Park Transform/Select/Three Inputs/Three inputs'
//  '<S16>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/Inverse Park Transform/Select/Three Inputs/Three inputs/Two inputs CRL'
//  '<S17>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/Inverse Park Transform/Select/Three Inputs/Three inputs/Two inputs CRL/Switch_Axis'
//  '<S18>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup'
//  '<S19>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/Interpolation'
//  '<S20>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/WrapUp'
//  '<S21>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/datatype'
//  '<S22>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/WrapUp/Compare To Zero'
//  '<S23>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/WrapUp/If Action Subsystem'
//  '<S24>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/WrapUp/If Action Subsystem1'
//  '<S25>'  : 'untitled/Inverse_Park_Clark/Reverse Park Clark/Inverse Park Transform1/Variant/mcb/sinecos/Sine-Cosine Lookup/datatype/datatype no change'

#endif                                 // UNTITLED_H_

//
// File trailer for generated code.
//
// [EOF]
//
