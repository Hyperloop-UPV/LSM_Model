//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: SpeedController.h
//
// Code generated for Simulink model 'SpeedController'.
//
// Model version                  : 1.17
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Thu Jun  4 19:36:56 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: STMicroelectronics->ST10/Super10
// Code generation objective: Execution efficiency
// Validation result: Not run
//
#ifndef SpeedController_h_
#define SpeedController_h_
#include <stdbool.h>
#include <stdint.h>

// Block states (default storage) for system '<Root>'
struct DW_SpeedController_T {
  float speed_integrator_state;        // '<S37>/Integrator'
};

// Class declaration for model SpeedController
namespace MATLAB
{
  class SpeedControl final
  {
    // public data and function members
   public:
    // Copy Constructor
    SpeedControl(SpeedControl const&) = delete;

    // Assignment Operator
    SpeedControl& operator= (SpeedControl const&) & = delete;

    // Move Constructor
    SpeedControl(SpeedControl &&) = delete;

    // Move Assignment Operator
    SpeedControl& operator= (SpeedControl &&) = delete;

    // Block states
    DW_SpeedController_T SpeedController_DW;

    // model initialize function
    static void initialize();

    // model step function
    float step(float arg_Speed_ref, float arg_Real_Speed, float &arg_Speed_Error);

    // model terminate function
    static void terminate();

    // Constructor
    SpeedControl();

    // Destructor
    ~SpeedControl();
  };
}

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
//  '<Root>' : 'SpeedController'
//  '<S1>'   : 'SpeedController/PI Velocity'
//  '<S2>'   : 'SpeedController/PI Velocity/PID Controller'
//  '<S3>'   : 'SpeedController/PI Velocity/PID Controller/Anti-windup'
//  '<S4>'   : 'SpeedController/PI Velocity/PID Controller/D Gain'
//  '<S5>'   : 'SpeedController/PI Velocity/PID Controller/External Derivative'
//  '<S6>'   : 'SpeedController/PI Velocity/PID Controller/Filter'
//  '<S7>'   : 'SpeedController/PI Velocity/PID Controller/Filter ICs'
//  '<S8>'   : 'SpeedController/PI Velocity/PID Controller/I Gain'
//  '<S9>'   : 'SpeedController/PI Velocity/PID Controller/Ideal P Gain'
//  '<S10>'  : 'SpeedController/PI Velocity/PID Controller/Ideal P Gain Fdbk'
//  '<S11>'  : 'SpeedController/PI Velocity/PID Controller/Integrator'
//  '<S12>'  : 'SpeedController/PI Velocity/PID Controller/Integrator ICs'
//  '<S13>'  : 'SpeedController/PI Velocity/PID Controller/N Copy'
//  '<S14>'  : 'SpeedController/PI Velocity/PID Controller/N Gain'
//  '<S15>'  : 'SpeedController/PI Velocity/PID Controller/P Copy'
//  '<S16>'  : 'SpeedController/PI Velocity/PID Controller/Parallel P Gain'
//  '<S17>'  : 'SpeedController/PI Velocity/PID Controller/Reset Signal'
//  '<S18>'  : 'SpeedController/PI Velocity/PID Controller/Saturation'
//  '<S19>'  : 'SpeedController/PI Velocity/PID Controller/Saturation Fdbk'
//  '<S20>'  : 'SpeedController/PI Velocity/PID Controller/Sum'
//  '<S21>'  : 'SpeedController/PI Velocity/PID Controller/Sum Fdbk'
//  '<S22>'  : 'SpeedController/PI Velocity/PID Controller/Tracking Mode'
//  '<S23>'  : 'SpeedController/PI Velocity/PID Controller/Tracking Mode Sum'
//  '<S24>'  : 'SpeedController/PI Velocity/PID Controller/Tsamp - Integral'
//  '<S25>'  : 'SpeedController/PI Velocity/PID Controller/Tsamp - Ngain'
//  '<S26>'  : 'SpeedController/PI Velocity/PID Controller/postSat Signal'
//  '<S27>'  : 'SpeedController/PI Velocity/PID Controller/preInt Signal'
//  '<S28>'  : 'SpeedController/PI Velocity/PID Controller/preSat Signal'
//  '<S29>'  : 'SpeedController/PI Velocity/PID Controller/Anti-windup/Passthrough'
//  '<S30>'  : 'SpeedController/PI Velocity/PID Controller/D Gain/Disabled'
//  '<S31>'  : 'SpeedController/PI Velocity/PID Controller/External Derivative/Disabled'
//  '<S32>'  : 'SpeedController/PI Velocity/PID Controller/Filter/Disabled'
//  '<S33>'  : 'SpeedController/PI Velocity/PID Controller/Filter ICs/Disabled'
//  '<S34>'  : 'SpeedController/PI Velocity/PID Controller/I Gain/Internal Parameters'
//  '<S35>'  : 'SpeedController/PI Velocity/PID Controller/Ideal P Gain/Passthrough'
//  '<S36>'  : 'SpeedController/PI Velocity/PID Controller/Ideal P Gain Fdbk/Disabled'
//  '<S37>'  : 'SpeedController/PI Velocity/PID Controller/Integrator/Discrete'
//  '<S38>'  : 'SpeedController/PI Velocity/PID Controller/Integrator ICs/Internal IC'
//  '<S39>'  : 'SpeedController/PI Velocity/PID Controller/N Copy/Disabled wSignal Specification'
//  '<S40>'  : 'SpeedController/PI Velocity/PID Controller/N Gain/Disabled'
//  '<S41>'  : 'SpeedController/PI Velocity/PID Controller/P Copy/Disabled'
//  '<S42>'  : 'SpeedController/PI Velocity/PID Controller/Parallel P Gain/Internal Parameters'
//  '<S43>'  : 'SpeedController/PI Velocity/PID Controller/Reset Signal/Disabled'
//  '<S44>'  : 'SpeedController/PI Velocity/PID Controller/Saturation/Passthrough'
//  '<S45>'  : 'SpeedController/PI Velocity/PID Controller/Saturation Fdbk/Disabled'
//  '<S46>'  : 'SpeedController/PI Velocity/PID Controller/Sum/Sum_PI'
//  '<S47>'  : 'SpeedController/PI Velocity/PID Controller/Sum Fdbk/Disabled'
//  '<S48>'  : 'SpeedController/PI Velocity/PID Controller/Tracking Mode/Disabled'
//  '<S49>'  : 'SpeedController/PI Velocity/PID Controller/Tracking Mode Sum/Passthrough'
//  '<S50>'  : 'SpeedController/PI Velocity/PID Controller/Tsamp - Integral/TsSignalSpecification'
//  '<S51>'  : 'SpeedController/PI Velocity/PID Controller/Tsamp - Ngain/Passthrough'
//  '<S52>'  : 'SpeedController/PI Velocity/PID Controller/postSat Signal/Forward_Path'
//  '<S53>'  : 'SpeedController/PI Velocity/PID Controller/preInt Signal/Internal PreInt'
//  '<S54>'  : 'SpeedController/PI Velocity/PID Controller/preSat Signal/Forward_Path'

#endif                                 // SpeedController_h_

//
// File trailer for generated code.
//
// [EOF]
//
