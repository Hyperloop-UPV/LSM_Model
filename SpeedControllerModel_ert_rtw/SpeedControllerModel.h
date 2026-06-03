//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: SpeedControllerModel.h
//
// Code generated for Simulink model 'SpeedControllerModel'.
//
// Model version                  : 1.6
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Wed Jun  3 09:38:42 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: STMicroelectronics->ST10/Super10
// Code generation objective: Execution efficiency
// Validation result: Not run
//
#ifndef SpeedControllerModel_h_
#define SpeedControllerModel_h_
#include <stdbool.h>
#include <stdint.h>
#include <cmath>

// Class declaration for model SpeedControllerModel
class SpeedController final
{
  // public data and function members
 public:
  // Block states (default storage) for system '<Root>'
  struct DW_SpeedControllerModel_T {
    float speed_integrator_state;      // '<S37>/Integrator'
  };

  // Copy Constructor
  SpeedController(SpeedController const&) = delete;

  // Assignment Operator
  SpeedController& operator= (SpeedController const&) & = delete;

  // Move Constructor
  SpeedController(SpeedController &&) = delete;

  // Move Assignment Operator
  SpeedController& operator= (SpeedController &&) = delete;

  // model initialize function
  static void initialize();

  // model step function
  float step(float arg_Speed_ref, float arg_Real_Speed);

  // model terminate function
  static void terminate();

  // Constructor
  SpeedController();

  // Destructor
  ~SpeedController();

  // private data and function members
 private:
  // Block states
  DW_SpeedControllerModel_T SpeedControllerModel_DW;
};

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Scope' : Unused code path elimination
//  Block '<Root>/Scope10' : Unused code path elimination


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
//  '<Root>' : 'SpeedControllerModel'
//  '<S1>'   : 'SpeedControllerModel/PI Velocity'
//  '<S2>'   : 'SpeedControllerModel/PI Velocity/PID Controller'
//  '<S3>'   : 'SpeedControllerModel/PI Velocity/PID Controller/Anti-windup'
//  '<S4>'   : 'SpeedControllerModel/PI Velocity/PID Controller/D Gain'
//  '<S5>'   : 'SpeedControllerModel/PI Velocity/PID Controller/External Derivative'
//  '<S6>'   : 'SpeedControllerModel/PI Velocity/PID Controller/Filter'
//  '<S7>'   : 'SpeedControllerModel/PI Velocity/PID Controller/Filter ICs'
//  '<S8>'   : 'SpeedControllerModel/PI Velocity/PID Controller/I Gain'
//  '<S9>'   : 'SpeedControllerModel/PI Velocity/PID Controller/Ideal P Gain'
//  '<S10>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Ideal P Gain Fdbk'
//  '<S11>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Integrator'
//  '<S12>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Integrator ICs'
//  '<S13>'  : 'SpeedControllerModel/PI Velocity/PID Controller/N Copy'
//  '<S14>'  : 'SpeedControllerModel/PI Velocity/PID Controller/N Gain'
//  '<S15>'  : 'SpeedControllerModel/PI Velocity/PID Controller/P Copy'
//  '<S16>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Parallel P Gain'
//  '<S17>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Reset Signal'
//  '<S18>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Saturation'
//  '<S19>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Saturation Fdbk'
//  '<S20>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Sum'
//  '<S21>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Sum Fdbk'
//  '<S22>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Tracking Mode'
//  '<S23>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Tracking Mode Sum'
//  '<S24>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Tsamp - Integral'
//  '<S25>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Tsamp - Ngain'
//  '<S26>'  : 'SpeedControllerModel/PI Velocity/PID Controller/postSat Signal'
//  '<S27>'  : 'SpeedControllerModel/PI Velocity/PID Controller/preInt Signal'
//  '<S28>'  : 'SpeedControllerModel/PI Velocity/PID Controller/preSat Signal'
//  '<S29>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Anti-windup/Passthrough'
//  '<S30>'  : 'SpeedControllerModel/PI Velocity/PID Controller/D Gain/Disabled'
//  '<S31>'  : 'SpeedControllerModel/PI Velocity/PID Controller/External Derivative/Disabled'
//  '<S32>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Filter/Disabled'
//  '<S33>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Filter ICs/Disabled'
//  '<S34>'  : 'SpeedControllerModel/PI Velocity/PID Controller/I Gain/Internal Parameters'
//  '<S35>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Ideal P Gain/Passthrough'
//  '<S36>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Ideal P Gain Fdbk/Disabled'
//  '<S37>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Integrator/Discrete'
//  '<S38>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Integrator ICs/Internal IC'
//  '<S39>'  : 'SpeedControllerModel/PI Velocity/PID Controller/N Copy/Disabled wSignal Specification'
//  '<S40>'  : 'SpeedControllerModel/PI Velocity/PID Controller/N Gain/Disabled'
//  '<S41>'  : 'SpeedControllerModel/PI Velocity/PID Controller/P Copy/Disabled'
//  '<S42>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Parallel P Gain/Internal Parameters'
//  '<S43>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Reset Signal/Disabled'
//  '<S44>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Saturation/Passthrough'
//  '<S45>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Saturation Fdbk/Disabled'
//  '<S46>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Sum/Sum_PI'
//  '<S47>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Sum Fdbk/Disabled'
//  '<S48>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Tracking Mode/Disabled'
//  '<S49>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Tracking Mode Sum/Passthrough'
//  '<S50>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Tsamp - Integral/TsSignalSpecification'
//  '<S51>'  : 'SpeedControllerModel/PI Velocity/PID Controller/Tsamp - Ngain/Passthrough'
//  '<S52>'  : 'SpeedControllerModel/PI Velocity/PID Controller/postSat Signal/Forward_Path'
//  '<S53>'  : 'SpeedControllerModel/PI Velocity/PID Controller/preInt Signal/Internal PreInt'
//  '<S54>'  : 'SpeedControllerModel/PI Velocity/PID Controller/preSat Signal/Forward_Path'

#endif                                 // SpeedControllerModel_h_

//
// File trailer for generated code.
//
// [EOF]
//
