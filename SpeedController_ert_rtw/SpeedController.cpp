//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: SpeedController.cpp
//
// Code generated for Simulink model 'SpeedController'.
//
// Model version                  : 1.15
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Wed Jun  3 13:09:37 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: STMicroelectronics->ST10/Super10
// Code generation objective: Execution efficiency
// Validation result: Not run
//
#include "SpeedController.h"

// Block parameters (default storage)
P_SpeedController_T SpeedController::SpeedController_P{
  // Variable: Ki_speed
  //  Referenced by: '<S34>/Integral Gain'

  15.0,

  // Variable: Kp_speed
  //  Referenced by: '<S42>/Proportional Gain'

  6.0,

  // Mask Parameter: PIDController_InitialConditionF
  //  Referenced by: '<S37>/Integrator'

  0.0,

  // Computed Parameter: Integrator_gainval
  //  Referenced by: '<S37>/Integrator'

  0.0005
};

// Model step function
void SpeedController::step(double &arg_Speed_Error, double arg_Speed_ref, double
  arg_Real_Speed, double &arg_Iq_ref)
{
  double Integrator;
  double Integrator_tmp;

  // Sum: '<Root>/Sum' incorporates:
  //   Inport: '<Root>/Real_Speed'
  //   Inport: '<Root>/Speed_ref'

  arg_Speed_Error = arg_Speed_ref - arg_Real_Speed;

  // DiscreteIntegrator: '<S37>/Integrator' incorporates:
  //   Gain: '<S34>/Integral Gain'

  Integrator_tmp = SpeedController_P.Ki_speed * arg_Speed_Error *
    SpeedController_P.Integrator_gainval;

  // DiscreteIntegrator: '<S37>/Integrator'
  Integrator = Integrator_tmp + SpeedController_DW.speed_integrator_state;

  // Outport: '<Root>/Iq_ref' incorporates:
  //   Gain: '<S42>/Proportional Gain'
  //   Sum: '<S46>/Sum'

  arg_Iq_ref = SpeedController_P.Kp_speed * arg_Speed_Error + Integrator;

  // Update for DiscreteIntegrator: '<S37>/Integrator'
  SpeedController_DW.speed_integrator_state = Integrator_tmp + Integrator;
}

// Model initialize function
void SpeedController::initialize()
{
  // InitializeConditions for DiscreteIntegrator: '<S37>/Integrator'
  SpeedController_DW.speed_integrator_state =
    SpeedController_P.PIDController_InitialConditionF;
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
