//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: rt_nonfinite.h
//
// Code generated for Simulink model 'control_block'.
//
// Model version                  : 1.7
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Tue Jun  2 21:58:37 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: STMicroelectronics->ST10/Super10
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#ifndef rt_nonfinite_h_
#define rt_nonfinite_h_
#include <stdbool.h>
#ifdef __cplusplus

extern "C"
{

#endif

  extern double rtInf;
  extern double rtMinusInf;
  extern double rtNaN;
  extern float rtInfF;
  extern float rtMinusInfF;
  extern float rtNaNF;
  extern bool rtIsInf(double value);
  extern bool rtIsInfF(float value);
  extern bool rtIsNaN(double value);
  extern bool rtIsNaNF(float value);

#ifdef __cplusplus

}                                      // extern "C"

#endif
#endif                                 // rt_nonfinite_h_

//
// File trailer for generated code.
//
// [EOF]
//
