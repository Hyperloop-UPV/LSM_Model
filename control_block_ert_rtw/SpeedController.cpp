//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: SpeedController.cpp
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
#include "control_block.h"
#include "SpeedController.h"

// Output and update for atomic system: '<S1>/SpeedController'
void control_block::SpeedController(double rtu_Speed_ref, double rtu_Real_Speed,
  float rtu_Kp_speed, float rtu_Ki_speed, double *rty_Iq_ref, DW_SpeedController
  *localDW)
{
  double Integrator_tmp;

  // Sum: '<S5>/Sum'
  localDW->error = rtu_Speed_ref - rtu_Real_Speed;

  // Product: '<S154>/IProd Out'
  localDW->IProdOut = localDW->error * rtu_Ki_speed;

  // DiscreteIntegrator: '<S157>/Integrator'
  Integrator_tmp = 0.0005 * localDW->IProdOut;

  // DiscreteIntegrator: '<S157>/Integrator'
  localDW->Integrator = Integrator_tmp + localDW->speed_integrator_state;

  // Product: '<S162>/PProd Out'
  localDW->PProdOut = localDW->error * rtu_Kp_speed;

  // Sum: '<S166>/Sum'
  *rty_Iq_ref = localDW->PProdOut + localDW->Integrator;

  // Update for DiscreteIntegrator: '<S157>/Integrator'
  localDW->speed_integrator_state = Integrator_tmp + localDW->Integrator;
}

//
// File trailer for generated code.
//
// [EOF]
//
