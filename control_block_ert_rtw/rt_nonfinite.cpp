//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: rt_nonfinite.cpp
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

#include <stdbool.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "limits"
#include "cmath"

extern "C"
{
  double rtNaN { -std::numeric_limits<double>::quiet_NaN() };

  double rtInf { std::numeric_limits<double>::infinity() };

  double rtMinusInf { -std::numeric_limits<double>::infinity() };

  float rtNaNF { -std::numeric_limits<float>::quiet_NaN() };

  float rtInfF { std::numeric_limits<float>::infinity() };

  float rtMinusInfF { -std::numeric_limits<float>::infinity() };
}

extern "C"
{
  // Test if value is infinite
  bool rtIsInf(double value)
  {
    return std::isinf(value);
  }

  // Test if single-precision value is infinite
  bool rtIsInfF(float value)
  {
    return std::isinf(value);
  }

  // Test if value is not a number
  bool rtIsNaN(double value)
  {
    return std::isnan(value);
  }

  // Test if single-precision value is not a number
  bool rtIsNaNF(float value)
  {
    return std::isnan(value);
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
