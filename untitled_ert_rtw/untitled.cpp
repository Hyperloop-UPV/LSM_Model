//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: untitled.cpp
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
#include "untitled.h"
#include "untitled_private.h"
#include <cmath>
#include <emmintrin.h>
#include <stdint.h>

// Output and update for atomic system: '<Root>/Inverse_Park_Clark'
void untitled_Inverse_Park_Clark(double rtu_vd, double rtu_vq, double
  rtu_ELEangle, double rty_Vabc[3])
{
  __m128d tmp_1;
  double tmp_0[2];
  double rtb_Sum2;
  double rtb_Switch_idx_0;
  double rtb_convert_pu;
  uint16_t rtb_Get_Integer;

  // Gain: '<S20>/convert_pu'
  rtb_convert_pu = 0.15915494309189535 * rtu_ELEangle;

  // If: '<S20>/If' incorporates:
  //   Constant: '<S22>/Constant'
  //   RelationalOperator: '<S22>/Compare'

  if (rtb_convert_pu < 0.0) {
    int32_t tmp;

    // Outputs for IfAction SubSystem: '<S20>/If Action Subsystem' incorporates:
    //   ActionPort: '<S23>/Action Port'

    // DataTypeConversion: '<S23>/Convert_uint16'
    rtb_Switch_idx_0 = std::floor(rtb_convert_pu);
    if (std::isinf(rtb_Switch_idx_0)) {
      rtb_Switch_idx_0 = 0.0;
    } else {
      rtb_Switch_idx_0 = std::fmod(rtb_Switch_idx_0, 65536.0);
    }

    if (rtb_Switch_idx_0 < 0.0) {
      tmp = static_cast<int16_t>(-static_cast<int16_t>(static_cast<uint16_t>
        (-rtb_Switch_idx_0)));
    } else {
      tmp = static_cast<int16_t>(static_cast<uint16_t>(rtb_Switch_idx_0));
    }

    // Sum: '<S23>/Sum' incorporates:
    //   DataTypeConversion: '<S23>/Convert_back'
    //   DataTypeConversion: '<S23>/Convert_uint16'

    rtb_convert_pu -= static_cast<double>(tmp);

    // End of Outputs for SubSystem: '<S20>/If Action Subsystem'
  } else {
    // Outputs for IfAction SubSystem: '<S20>/If Action Subsystem1' incorporates:
    //   ActionPort: '<S24>/Action Port'

    // DataTypeConversion: '<S24>/Convert_uint16'
    rtb_Switch_idx_0 = std::trunc(rtb_convert_pu);
    if (std::isnan(rtb_Switch_idx_0) || std::isinf(rtb_Switch_idx_0)) {
      rtb_Switch_idx_0 = 0.0;
    } else {
      rtb_Switch_idx_0 = std::fmod(rtb_Switch_idx_0, 65536.0);
    }

    // Sum: '<S24>/Sum' incorporates:
    //   DataTypeConversion: '<S24>/Convert_back'
    //   DataTypeConversion: '<S24>/Convert_uint16'

    rtb_convert_pu -= static_cast<double>(static_cast<int16_t>(static_cast<
      uint16_t>(rtb_Switch_idx_0)));

    // End of Outputs for SubSystem: '<S20>/If Action Subsystem1'
  }

  // End of If: '<S20>/If'

  // Gain: '<S18>/indexing'
  rtb_convert_pu *= 800.0;

  // DataTypeConversion: '<S18>/Get_Integer'
  rtb_Switch_idx_0 = std::trunc(rtb_convert_pu);
  if (std::isnan(rtb_Switch_idx_0) || std::isinf(rtb_Switch_idx_0)) {
    rtb_Switch_idx_0 = 0.0;
  } else {
    rtb_Switch_idx_0 = std::fmod(rtb_Switch_idx_0, 65536.0);
  }

  if (rtb_Switch_idx_0 < 0.0) {
    rtb_Get_Integer = static_cast<uint16_t>(-static_cast<int16_t>
      (static_cast<uint16_t>(-rtb_Switch_idx_0)));
  } else {
    rtb_Get_Integer = static_cast<uint16_t>(rtb_Switch_idx_0);
  }

  // End of DataTypeConversion: '<S18>/Get_Integer'

  // Selector: '<S18>/Lookup' incorporates:
  //   Constant: '<S18>/offset'
  //   Constant: '<S18>/sine_table_values'
  //   DataTypeConversion: '<S18>/Data Type Conversion1'
  //   Sum: '<S18>/Sum'
  //   Sum: '<S18>/Sum2'
  //   Sum: '<S19>/Sum3'
  //   Sum: '<S19>/Sum5'

  tmp_1 = _mm_set_pd(untitled_ConstP.sine_table_values_Value[static_cast<int32_t>
                     (rtb_Get_Integer + 200U)],
                     untitled_ConstP.sine_table_values_Value[rtb_Get_Integer]);
  _mm_storeu_pd(&tmp_0[0], _mm_add_pd(_mm_mul_pd(_mm_sub_pd(_mm_set_pd
    (untitled_ConstP.sine_table_values_Value[static_cast<int32_t>
     (rtb_Get_Integer + 201U)], untitled_ConstP.sine_table_values_Value[
     static_cast<int32_t>(rtb_Get_Integer + 1U)]), tmp_1), _mm_set1_pd
    (rtb_convert_pu - static_cast<double>(rtb_Get_Integer))), tmp_1));

  // Outputs for Atomic SubSystem: '<S15>/Two inputs CRL'
  // Switch: '<S17>/Switch' incorporates:
  //   Product: '<S16>/dsin'
  //   Product: '<S16>/qcos'
  //   Sum: '<S16>/sum_beta'

  rtb_Switch_idx_0 = rtu_vq * tmp_0[1] + rtu_vd * tmp_0[0];

  // Gain: '<S8>/Gain' incorporates:
  //   AlgorithmDescriptorDelegate generated from: '<S16>/a16'

  rtb_Sum2 = -0.5 * rtb_Switch_idx_0;

  // Gain: '<S8>/Gain1' incorporates:
  //   Product: '<S16>/dcos'
  //   Product: '<S16>/qsin'
  //   Sum: '<S16>/sum_alpha'
  //   UnaryMinus: '<S17>/Unary_Minus'

  rtb_convert_pu = -(rtu_vd * tmp_0[1] - rtu_vq * tmp_0[0]) * 0.8660254037844386;

  // Gain: '<S8>/Kabc' incorporates:
  //   AlgorithmDescriptorDelegate generated from: '<S16>/a16'
  //   Sum: '<S8>/Sum1'
  //   Sum: '<S8>/Sum2'

  rty_Vabc[0] = rtb_Switch_idx_0;

  // End of Outputs for SubSystem: '<S15>/Two inputs CRL'
  rty_Vabc[1] = rtb_Sum2 + rtb_convert_pu;
  rty_Vabc[2] = rtb_Sum2 - rtb_convert_pu;
}

// Model step function
void untitled_step(RT_MODEL_untitled_T *const untitled_M)
{
  double rtb_Kabc[3];

  // Outputs for Atomic SubSystem: '<Root>/Inverse_Park_Clark'
  untitled_Inverse_Park_Clark(0.0, 0.0, 0.0, rtb_Kabc);

  // End of Outputs for SubSystem: '<Root>/Inverse_Park_Clark'
  UNUSED_PARAMETER(untitled_M);
}

// Model initialize function
void untitled_initialize(RT_MODEL_untitled_T *const untitled_M)
{
  // (no initialization code required)
  UNUSED_PARAMETER(untitled_M);
}

// Model terminate function
void untitled_terminate(RT_MODEL_untitled_T *const untitled_M)
{
  // (no terminate code required)
  UNUSED_PARAMETER(untitled_M);
}

const char* RT_MODEL_untitled_T::getErrorStatus() const
{
  return (errorStatus);
}

void RT_MODEL_untitled_T::setErrorStatus(const char* const volatile aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

//
// File trailer for generated code.
//
// [EOF]
//
