//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: SpeedController.cpp
//
// Code generated for Simulink model 'SpeedController'.
//
// Model version                  : 1.16
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Thu Jun  4 18:26:32 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: STMicroelectronics->ST10/Super10
// Code generation objective: Execution efficiency
// Validation result: Not run
//
#include "SpeedController.h"

// Model step function
float SpeedController::step(float arg_Speed_ref, float arg_Real_Speed, float
  &arg_Speed_Error)
{
  float Integrator;
  float Integrator_tmp;

  // specified return value
  float arg_Iq_ref;

  // Sum: '<Root>/Sum' incorporates:
  //   Inport: '<Root>/Real_Speed'
  //   Inport: '<Root>/Speed_ref'

  arg_Speed_Error = arg_Speed_ref - arg_Real_Speed;

  // DiscreteIntegrator: '<S37>/Integrator' incorporates:
  //   Gain: '<S34>/Integral Gain'

  Integrator_tmp = 15.0F * arg_Speed_Error * 0.0005F;

  // DiscreteIntegrator: '<S37>/Integrator'
  Integrator = Integrator_tmp + SpeedController_DW.speed_integrator_state;

  // Outport: '<Root>/Iq_ref' incorporates:
  //   Gain: '<S42>/Proportional Gain'
  //   Sum: '<S46>/Sum'

  arg_Iq_ref = 6.0F * arg_Speed_Error + Integrator;

  // Update for DiscreteIntegrator: '<S37>/Integrator'
  SpeedController_DW.speed_integrator_state = Integrator_tmp + Integrator;
  return arg_Iq_ref;
}

// Model initialize function
void SpeedController::initialize()
{
  // (no initialization code required)
}

// Model terminate function
void SpeedController::terminate()
{
  // (no terminate code required)
}

// Constructor
SpeedController::SpeedController():
  SpeedController_DW()
{
  // Currently there is no constructor body generated.
}

// Destructor
// Currently there is no destructor body generated.
SpeedController::~SpeedController() = default;

//
// File trailer for generated code.
//
// [EOF]
//
