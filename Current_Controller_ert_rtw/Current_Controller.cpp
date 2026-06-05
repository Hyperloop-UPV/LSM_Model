//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Current_Controller.cpp
//
// Code generated for Simulink model 'Current_Controller'.
//
// Model version                  : 1.28
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Thu Jun  4 19:42:28 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: STMicroelectronics->ST10/Super10
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#include "Current_Controller.h"
#include <cmath>
#include <stdint.h>
#include <cfloat>
#include <stdbool.h>

extern double rt_modd(double u0, double u1);
double rt_modd(double u0, double u1)
{
  double y;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else {
    bool yEq;
    y = std::fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > std::floor(u1))) {
      double q;
      q = std::abs(u0 / u1);
      yEq = (std::abs(q - std::floor(q + 0.5)) <= DBL_EPSILON * q);
    }

    if (yEq) {
      y = 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

namespace MATLAB
{
  // Model step function
  void CurrentControl::step(float arg_Ia, float arg_Ib, float arg_Ic, float
    arg_Iq_ref, float arg_Init_Angle, float arg_pos_speetec, float &arg_Va,
    float &arg_Vb, float &arg_Vc, float &arg_ELE_angle, float &arg_Vq, float
    &arg_Vd, float &arg_Iq_error, float &arg_Id_error, float &arg_Iq_measured,
    float &arg_Id_measured)
  {
    double rtb_MathFunction;
    float rtb_dq0_tmp_1[9];
    float rtb_Sum_n_0[3];
    float Integrator;
    float Integrator_p;
    float b_idx_1;
    float b_idx_2;
    float rtb_dq0_tmp;
    float rtb_dq0_tmp_0;
    float tmp;
    int16_t b_idx_2_tmp;
    int16_t i;
    static const float b[9]{ 1.0F, 0.0F, 0.5F, -0.5F, 0.866025388F, 0.5F, -0.5F,
      -0.866025388F, 0.5F };

    static const int8_t b_0[3]{ 0, 0, 1 };

    // Product: '<S2>/Divide' incorporates:
    //   Constant: '<S2>/Pole Pitch'
    //   Inport: '<Root>/pos_speetec'

    rtb_MathFunction = arg_pos_speetec / 0.096;

    // Math: '<S6>/Math Function' incorporates:
    //   Constant: '<S2>/Poles'
    //   Constant: '<S6>/Constant'
    //   Gain: '<S2>/Gain'
    //   Gain: '<S6>/PI_Number'
    //   Inport: '<Root>/Init_Angle'
    //   Product: '<S2>/Divide1'
    //   Rounding: '<S2>/Round'
    //   Sum: '<S2>/Sum'
    //   Sum: '<S6>/Sum'

    rtb_MathFunction = rt_modd((rtb_MathFunction - std::floor(rtb_MathFunction /
      2.0) * 2.0) * 3.1415926535897931 + arg_Init_Angle, 6.2831853071795862);

    // MATLAB Function: '<S1>/Clarke to Park Angle Transform' incorporates:
    //   DataTypeConversion: '<S6>/Cast'
    //   MATLAB Function: '<S5>/Inverse Park Transform'

    rtb_dq0_tmp = std::cos(static_cast<float>(rtb_MathFunction));
    rtb_dq0_tmp_0 = std::sin(static_cast<float>(rtb_MathFunction));

    // SignalConversion generated from: '<S7>/ SFunction ' incorporates:
    //   Inport: '<Root>/Ia'
    //   Inport: '<Root>/Ib'
    //   Inport: '<Root>/Ic'
    //   MATLAB Function: '<S1>/Clarke Transform'

    rtb_Sum_n_0[0] = arg_Ia;
    rtb_Sum_n_0[1] = arg_Ib;
    rtb_Sum_n_0[2] = arg_Ic;

    // MATLAB Function: '<S1>/Clarke Transform'
    Integrator = 0.0F;
    b_idx_1 = 0.0F;
    b_idx_2 = 0.0F;

    // MATLAB Function: '<S1>/Clarke to Park Angle Transform'
    rtb_dq0_tmp_1[0] = rtb_dq0_tmp_0;
    rtb_dq0_tmp_1[3] = -rtb_dq0_tmp;
    rtb_dq0_tmp_1[6] = 0.0F;
    rtb_dq0_tmp_1[1] = rtb_dq0_tmp;
    rtb_dq0_tmp_1[4] = rtb_dq0_tmp_0;
    rtb_dq0_tmp_1[7] = 0.0F;
    for (i = 0; i < 3; i++) {
      // MATLAB Function: '<S1>/Clarke Transform' incorporates:
      //   MATLAB Function: '<S1>/Clarke to Park Angle Transform'

      tmp = rtb_Sum_n_0[i];
      Integrator += b[3 * i] * tmp;
      b_idx_1 += b[3 * i + 1] * tmp;
      b_idx_2_tmp = 3 * i + 2;
      b_idx_2 += b[b_idx_2_tmp] * tmp;

      // MATLAB Function: '<S1>/Clarke to Park Angle Transform'
      rtb_dq0_tmp_1[b_idx_2_tmp] = b_0[i];
    }

    // MATLAB Function: '<S1>/Clarke Transform'
    rtb_Sum_n_0[0] = 0.666666687F * Integrator;

    // MATLAB Function: '<S1>/Clarke to Park Angle Transform'
    arg_Id_measured = 0.0F;

    // MATLAB Function: '<S1>/Clarke Transform'
    rtb_Sum_n_0[1] = 0.666666687F * b_idx_1;

    // MATLAB Function: '<S1>/Clarke to Park Angle Transform'
    arg_Iq_measured = 0.0F;

    // MATLAB Function: '<S1>/Clarke Transform'
    rtb_Sum_n_0[2] = 0.666666687F * b_idx_2;

    // MATLAB Function: '<S1>/Clarke to Park Angle Transform'
    for (i = 0; i < 3; i++) {
      tmp = rtb_Sum_n_0[i];
      arg_Id_measured += rtb_dq0_tmp_1[3 * i] * tmp;
      arg_Iq_measured += rtb_dq0_tmp_1[3 * i + 1] * tmp;
    }

    // DiscreteIntegrator: '<S44>/Integrator' incorporates:
    //   Constant: '<Root>/Constant'
    //   Gain: '<S41>/Integral Gain'
    //   MATLAB Function: '<S1>/Clarke to Park Angle Transform'
    //   Sum: '<Root>/Sum2'

    b_idx_2 = (0.0F - arg_Id_measured) * 1210.8866F * 0.0001F;

    // DiscreteIntegrator: '<S44>/Integrator'
    Integrator = b_idx_2 + rtDW.Integrator_DSTATE;

    // Sum: '<S53>/Sum' incorporates:
    //   Constant: '<Root>/Constant'
    //   Gain: '<S49>/Proportional Gain'
    //   MATLAB Function: '<S1>/Clarke to Park Angle Transform'
    //   Sum: '<Root>/Sum2'

    arg_Vd = (0.0F - arg_Id_measured) * 10.5746059F + Integrator;

    // Sum: '<Root>/Sum1' incorporates:
    //   Inport: '<Root>/Iq_ref'
    //   MATLAB Function: '<S1>/Clarke to Park Angle Transform'

    arg_Iq_error = arg_Iq_ref - arg_Iq_measured;

    // DiscreteIntegrator: '<S97>/Integrator' incorporates:
    //   Gain: '<S94>/Integral Gain'

    b_idx_1 = 1486.2207F * arg_Iq_error * 0.0001F;

    // DiscreteIntegrator: '<S97>/Integrator'
    Integrator_p = b_idx_1 + rtDW.Integrator_DSTATE_i;

    // Saturate: '<S4>/Saturation' incorporates:
    //   Gain: '<S102>/Proportional Gain'
    //   Sum: '<S106>/Sum'

    arg_Vq = std::fmax(12.1385422F * arg_Iq_error + Integrator_p, 0.0F);

    // MATLAB Function: '<S5>/Inverse Park Transform' incorporates:
    //   DataTypeConversion: '<S6>/Cast'

    rtb_dq0_tmp_1[0] = rtb_dq0_tmp_0;
    rtb_dq0_tmp_1[3] = rtb_dq0_tmp;
    rtb_dq0_tmp_1[6] = 1.0F;
    rtb_dq0_tmp_1[1] = std::sin(static_cast<float>(rtb_MathFunction) -
      2.09439516F);
    rtb_dq0_tmp_1[4] = std::cos(static_cast<float>(rtb_MathFunction) -
      2.09439516F);
    rtb_dq0_tmp_1[7] = 1.0F;
    rtb_dq0_tmp_1[2] = std::sin(static_cast<float>(rtb_MathFunction) +
      2.09439516F);
    rtb_dq0_tmp_1[5] = std::cos(static_cast<float>(rtb_MathFunction) +
      2.09439516F);
    rtb_dq0_tmp_1[8] = 1.0F;

    // SignalConversion generated from: '<S115>/ SFunction ' incorporates:
    //   Constant: '<S5>/Constant'
    //   MATLAB Function: '<S5>/Inverse Park Transform'

    rtb_Sum_n_0[0] = arg_Vd;
    rtb_Sum_n_0[1] = arg_Vq;
    rtb_Sum_n_0[2] = 0.0F;

    // MATLAB Function: '<S5>/Inverse Park Transform'
    arg_Va = 0.0F;
    arg_Vb = 0.0F;
    arg_Vc = 0.0F;
    for (i = 0; i < 3; i++) {
      tmp = rtb_Sum_n_0[i];
      arg_Va += rtb_dq0_tmp_1[3 * i] * tmp;
      arg_Vb += rtb_dq0_tmp_1[3 * i + 1] * tmp;
      arg_Vc += rtb_dq0_tmp_1[3 * i + 2] * tmp;
    }

    // Outport: '<Root>/Id_error' incorporates:
    //   Constant: '<Root>/Constant'
    //   MATLAB Function: '<S1>/Clarke to Park Angle Transform'
    //   Sum: '<Root>/Sum2'

    arg_Id_error = 0.0F - arg_Id_measured;

    // Outport: '<Root>/ELE angle' incorporates:
    //   DataTypeConversion: '<S6>/Cast'

    arg_ELE_angle = static_cast<float>(rtb_MathFunction);

    // Update for DiscreteIntegrator: '<S44>/Integrator'
    rtDW.Integrator_DSTATE = b_idx_2 + Integrator;

    // Update for DiscreteIntegrator: '<S97>/Integrator'
    rtDW.Integrator_DSTATE_i = b_idx_1 + Integrator_p;
  }

  // Model initialize function
  void CurrentControl::initialize()
  {
    // (no initialization code required)
  }

  // Model terminate function
  void CurrentControl::terminate()
  {
    // (no terminate code required)
  }

  // Constructor
  CurrentControl::CurrentControl():
    rtDW()
  {
    // Currently there is no constructor body generated.
  }

  // Destructor
  // Currently there is no destructor body generated.
  CurrentControl::~CurrentControl() = default;
}

//
// File trailer for generated code.
//
// [EOF]
//
