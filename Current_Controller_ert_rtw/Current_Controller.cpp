//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Current_Controller.cpp
//
// Code generated for Simulink model 'Current_Controller'.
//
// Model version                  : 1.19
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Wed Jun  3 13:06:34 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: STMicroelectronics->ST10/Super10
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#include "Current_Controller.h"
#include <array>
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

// Model step function
void Current_Controller::step(double arg_Iabc[3], double arg_Init_Angle, double
  arg_Iq_ref, double arg_pos_speetec, double arg_Vabc[3], double &arg_ELE_angle,
  double &arg_Vd, double &arg_Vq, double &arg_Iq_error, double &arg_Id_error,
  double &arg_Iq_measured, double &arg_Id_measured)
{
  std::array<double, 3> rtb_Sum_n_0;
  std::array<double, 9> rtb_dq0_tmp_1;
  double Integrator;
  double Integrator_p;
  double a_idx_1;
  double a_idx_2;
  double rtb_dq0_tmp;
  double rtb_dq0_tmp_0;
  double rtb_dq0_tmp_idx_2;
  double rtb_error;
  int16_t a_idx_2_tmp;
  int16_t i;
  static const std::array<double, 9> a{ { 1.0, 0.0, 0.5, -0.5,
      0.8660254037844386, 0.5, -0.5, -0.8660254037844386, 0.5 } };

  static const std::array<int8_t, 3> b{ { 0, 0, 1 } };

  // Product: '<S2>/Divide' incorporates:
  //   Constant: '<S2>/Pole Pitch'
  //   Inport: '<Root>/pos_speetec'

  rtb_error = arg_pos_speetec / 0.096;

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

  arg_ELE_angle = rt_modd((rtb_error - std::floor(rtb_error / 2.0) * 2.0) *
    3.1415926535897931 + arg_Init_Angle, 6.2831853071795862);

  // MATLAB Function: '<S1>/Clarke to Park Angle Transform' incorporates:
  //   MATLAB Function: '<S5>/Inverse Park Transform'

  rtb_dq0_tmp = std::cos(arg_ELE_angle);
  rtb_dq0_tmp_0 = std::sin(arg_ELE_angle);

  // MATLAB Function: '<S1>/Clarke Transform'
  Integrator = 0.0;
  a_idx_1 = 0.0;
  a_idx_2 = 0.0;

  // MATLAB Function: '<S1>/Clarke to Park Angle Transform'
  rtb_dq0_tmp_1[0] = rtb_dq0_tmp_0;
  rtb_dq0_tmp_1[3] = -rtb_dq0_tmp;
  rtb_dq0_tmp_1[6] = 0.0;
  rtb_dq0_tmp_1[1] = rtb_dq0_tmp;
  rtb_dq0_tmp_1[4] = rtb_dq0_tmp_0;
  rtb_dq0_tmp_1[7] = 0.0;
  for (i = 0; i < 3; i++) {
    // MATLAB Function: '<S1>/Clarke Transform' incorporates:
    //   Inport: '<Root>/Iabc'
    //   MATLAB Function: '<S1>/Clarke to Park Angle Transform'

    rtb_error = arg_Iabc[i];
    Integrator += a[3 * i] * rtb_error;
    a_idx_1 += a[3 * i + 1] * rtb_error;
    a_idx_2_tmp = 3 * i + 2;
    a_idx_2 += a[a_idx_2_tmp] * rtb_error;

    // MATLAB Function: '<S1>/Clarke to Park Angle Transform'
    rtb_dq0_tmp_1[a_idx_2_tmp] = b[i];
  }

  // MATLAB Function: '<S1>/Clarke Transform'
  rtb_Sum_n_0[0] = 0.66666666666666663 * Integrator;

  // MATLAB Function: '<S1>/Clarke to Park Angle Transform'
  arg_Id_measured = 0.0;

  // MATLAB Function: '<S1>/Clarke Transform'
  rtb_Sum_n_0[1] = 0.66666666666666663 * a_idx_1;

  // MATLAB Function: '<S1>/Clarke to Park Angle Transform'
  arg_Iq_measured = 0.0;

  // MATLAB Function: '<S1>/Clarke Transform'
  rtb_Sum_n_0[2] = 0.66666666666666663 * a_idx_2;

  // MATLAB Function: '<S1>/Clarke to Park Angle Transform'
  for (i = 0; i < 3; i++) {
    rtb_error = rtb_Sum_n_0[i];
    arg_Id_measured += rtb_dq0_tmp_1[3 * i] * rtb_error;
    arg_Iq_measured += rtb_dq0_tmp_1[3 * i + 1] * rtb_error;
  }

  // DiscreteIntegrator: '<S44>/Integrator' incorporates:
  //   Constant: '<Root>/Constant'
  //   Gain: '<S41>/Integral Gain'
  //   MATLAB Function: '<S1>/Clarke to Park Angle Transform'
  //   Sum: '<Root>/Sum2'

  a_idx_2 = (0.0 - arg_Id_measured) * 1210.88664402243 * 0.0001;

  // DiscreteIntegrator: '<S44>/Integrator'
  Integrator = a_idx_2 + rtDW.Integrator_DSTATE;

  // Sum: '<S53>/Sum' incorporates:
  //   Constant: '<Root>/Constant'
  //   Gain: '<S49>/Proportional Gain'
  //   MATLAB Function: '<S1>/Clarke to Park Angle Transform'
  //   Sum: '<Root>/Sum2'

  arg_Vd = (0.0 - arg_Id_measured) * 10.5746062787963 + Integrator;

  // Sum: '<Root>/Sum1' incorporates:
  //   Inport: '<Root>/Iq_ref'
  //   MATLAB Function: '<S1>/Clarke to Park Angle Transform'

  arg_Iq_error = arg_Iq_ref - arg_Iq_measured;

  // DiscreteIntegrator: '<S97>/Integrator' incorporates:
  //   Gain: '<S94>/Integral Gain'

  a_idx_1 = 1486.22069601051 * arg_Iq_error * 0.0001;

  // DiscreteIntegrator: '<S97>/Integrator'
  Integrator_p = a_idx_1 + rtDW.Integrator_DSTATE_i;

  // Saturate: '<S4>/Saturation' incorporates:
  //   Gain: '<S102>/Proportional Gain'
  //   Sum: '<S106>/Sum'

  arg_Vq = std::fmax(12.1385417687129 * arg_Iq_error + Integrator_p, 0.0);

  // MATLAB Function: '<S5>/Inverse Park Transform' incorporates:
  //   Constant: '<S5>/Constant'
  //   SignalConversion generated from: '<S115>/ SFunction '

  rtb_dq0_tmp_1[0] = rtb_dq0_tmp_0;
  rtb_dq0_tmp_1[3] = rtb_dq0_tmp;
  rtb_dq0_tmp_1[6] = 1.0;
  rtb_dq0_tmp_1[1] = std::sin(arg_ELE_angle - 2.0943951023931953);
  rtb_dq0_tmp_1[4] = std::cos(arg_ELE_angle - 2.0943951023931953);
  rtb_dq0_tmp_1[7] = 1.0;
  rtb_dq0_tmp_1[2] = std::sin(arg_ELE_angle + 2.0943951023931953);
  rtb_dq0_tmp_1[5] = std::cos(arg_ELE_angle + 2.0943951023931953);
  rtb_dq0_tmp_1[8] = 1.0;
  rtb_Sum_n_0[0] = arg_Vd;
  rtb_Sum_n_0[1] = arg_Vq;
  rtb_Sum_n_0[2] = 0.0;
  rtb_dq0_tmp = 0.0;
  rtb_dq0_tmp_0 = 0.0;
  rtb_dq0_tmp_idx_2 = 0.0;
  for (i = 0; i < 3; i++) {
    rtb_error = rtb_Sum_n_0[i];
    rtb_dq0_tmp += rtb_dq0_tmp_1[3 * i] * rtb_error;
    rtb_dq0_tmp_0 += rtb_dq0_tmp_1[3 * i + 1] * rtb_error;
    rtb_dq0_tmp_idx_2 += rtb_dq0_tmp_1[3 * i + 2] * rtb_error;
  }

  // Outport: '<Root>/Vabc' incorporates:
  //   MATLAB Function: '<S5>/Inverse Park Transform'

  arg_Vabc[0] = rtb_dq0_tmp;
  arg_Vabc[1] = rtb_dq0_tmp_0;
  arg_Vabc[2] = rtb_dq0_tmp_idx_2;

  // Outport: '<Root>/Id_error' incorporates:
  //   Constant: '<Root>/Constant'
  //   MATLAB Function: '<S1>/Clarke to Park Angle Transform'
  //   Sum: '<Root>/Sum2'

  arg_Id_error = 0.0 - arg_Id_measured;

  // Update for DiscreteIntegrator: '<S44>/Integrator'
  rtDW.Integrator_DSTATE = a_idx_2 + Integrator;

  // Update for DiscreteIntegrator: '<S97>/Integrator'
  rtDW.Integrator_DSTATE_i = a_idx_1 + Integrator_p;
}

// Model initialize function
void Current_Controller::initialize()
{
  // (no initialization code required)
}

// Model terminate function
void Current_Controller::terminate()
{
  // (no terminate code required)
}

// Constructor
Current_Controller::Current_Controller():
  rtDW()
{
  // Currently there is no constructor body generated.
}

// Destructor
// Currently there is no destructor body generated.
Current_Controller::~Current_Controller() = default;

//
// File trailer for generated code.
//
// [EOF]
//
