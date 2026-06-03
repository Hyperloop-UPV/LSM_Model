//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: rtGetNaN.cpp
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

extern "C"
{

#include "rtGetNaN.h"

}

#include <stdint.h>

extern "C"
{
  // Return rtNaN needed by the generated code.
  double rtGetNaN(void)
  {
    return rtNaN;
  }

  // Return rtNaNF needed by the generated code.
  float rtGetNaNF(void)
  {
    return rtNaNF;
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
