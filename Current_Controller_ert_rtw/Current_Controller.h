//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Current_Controller.h
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
#ifndef Current_Controller_h_
#define Current_Controller_h_
#include <stdbool.h>
#include <stdint.h>

// Class declaration for model Current_Controller
namespace MATLAB
{
  class CurrentControl final
  {
    // public data and function members
   public:
    // Block signals and states (default storage) for system '<Root>'
    struct DW {
      float Integrator_DSTATE;         // '<S44>/Integrator'
      float Integrator_DSTATE_i;       // '<S97>/Integrator'
    };

    // Copy Constructor
    CurrentControl(CurrentControl const&) = delete;

    // Assignment Operator
    CurrentControl& operator= (CurrentControl const&) & = delete;

    // Move Constructor
    CurrentControl(CurrentControl &&) = delete;

    // Move Assignment Operator
    CurrentControl& operator= (CurrentControl &&) = delete;

    // Block states
    DW rtDW;

    // model initialize function
    static void initialize();

    // model step function
    void step(float arg_Ia, float arg_Ib, float arg_Ic, float arg_Iq_ref, float
              arg_Init_Angle, float arg_pos_speetec, float &arg_Va, float
              &arg_Vb, float &arg_Vc, float &arg_ELE_angle, float &arg_Vq, float
              &arg_Vd, float &arg_Iq_error, float &arg_Id_error, float
              &arg_Iq_measured, float &arg_Id_measured);

    // model terminate function
    static void terminate();

    // Constructor
    CurrentControl();

    // Destructor
    ~CurrentControl();
  };
}

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S2>/Scope' : Unused code path elimination
//  Block '<S3>/Scope' : Unused code path elimination
//  Block '<S4>/Cast' : Unused code path elimination
//  Block '<S4>/Scope' : Unused code path elimination
//  Block '<S5>/Scope' : Unused code path elimination
//  Block '<S5>/Scope1' : Unused code path elimination
//  Block '<Root>/Scope' : Unused code path elimination
//  Block '<Root>/Scope1' : Unused code path elimination
//  Block '<Root>/Scope2' : Unused code path elimination
//  Block '<Root>/Scope3' : Unused code path elimination
//  Block '<Root>/Scope4' : Unused code path elimination
//  Block '<Root>/Scope5' : Unused code path elimination
//  Block '<Root>/Scope6' : Unused code path elimination
//  Block '<Root>/Scope7' : Unused code path elimination
//  Block '<Root>/Scope8' : Unused code path elimination
//  Block '<Root>/Scope9' : Unused code path elimination
//  Block '<S6>/Scope' : Unused code path elimination
//  Block '<S6>/Scope1' : Unused code path elimination
//  Block '<S3>/Cast' : Eliminate redundant data type conversion


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
//  '<Root>' : 'Current_Controller'
//  '<S1>'   : 'Current_Controller/Clark Park'
//  '<S2>'   : 'Current_Controller/From pos to fp'
//  '<S3>'   : 'Current_Controller/PI Id'
//  '<S4>'   : 'Current_Controller/PI Iq'
//  '<S5>'   : 'Current_Controller/Reverse Park Clark'
//  '<S6>'   : 'Current_Controller/fp_to_ELE angle'
//  '<S7>'   : 'Current_Controller/Clark Park/Clarke Transform'
//  '<S8>'   : 'Current_Controller/Clark Park/Clarke to Park Angle Transform'
//  '<S9>'   : 'Current_Controller/PI Id/PI Id'
//  '<S10>'  : 'Current_Controller/PI Id/PI Id/Anti-windup'
//  '<S11>'  : 'Current_Controller/PI Id/PI Id/D Gain'
//  '<S12>'  : 'Current_Controller/PI Id/PI Id/External Derivative'
//  '<S13>'  : 'Current_Controller/PI Id/PI Id/Filter'
//  '<S14>'  : 'Current_Controller/PI Id/PI Id/Filter ICs'
//  '<S15>'  : 'Current_Controller/PI Id/PI Id/I Gain'
//  '<S16>'  : 'Current_Controller/PI Id/PI Id/Ideal P Gain'
//  '<S17>'  : 'Current_Controller/PI Id/PI Id/Ideal P Gain Fdbk'
//  '<S18>'  : 'Current_Controller/PI Id/PI Id/Integrator'
//  '<S19>'  : 'Current_Controller/PI Id/PI Id/Integrator ICs'
//  '<S20>'  : 'Current_Controller/PI Id/PI Id/N Copy'
//  '<S21>'  : 'Current_Controller/PI Id/PI Id/N Gain'
//  '<S22>'  : 'Current_Controller/PI Id/PI Id/P Copy'
//  '<S23>'  : 'Current_Controller/PI Id/PI Id/Parallel P Gain'
//  '<S24>'  : 'Current_Controller/PI Id/PI Id/Reset Signal'
//  '<S25>'  : 'Current_Controller/PI Id/PI Id/Saturation'
//  '<S26>'  : 'Current_Controller/PI Id/PI Id/Saturation Fdbk'
//  '<S27>'  : 'Current_Controller/PI Id/PI Id/Sum'
//  '<S28>'  : 'Current_Controller/PI Id/PI Id/Sum Fdbk'
//  '<S29>'  : 'Current_Controller/PI Id/PI Id/Tracking Mode'
//  '<S30>'  : 'Current_Controller/PI Id/PI Id/Tracking Mode Sum'
//  '<S31>'  : 'Current_Controller/PI Id/PI Id/Tsamp - Integral'
//  '<S32>'  : 'Current_Controller/PI Id/PI Id/Tsamp - Ngain'
//  '<S33>'  : 'Current_Controller/PI Id/PI Id/postSat Signal'
//  '<S34>'  : 'Current_Controller/PI Id/PI Id/preInt Signal'
//  '<S35>'  : 'Current_Controller/PI Id/PI Id/preSat Signal'
//  '<S36>'  : 'Current_Controller/PI Id/PI Id/Anti-windup/Passthrough'
//  '<S37>'  : 'Current_Controller/PI Id/PI Id/D Gain/Disabled'
//  '<S38>'  : 'Current_Controller/PI Id/PI Id/External Derivative/Disabled'
//  '<S39>'  : 'Current_Controller/PI Id/PI Id/Filter/Disabled'
//  '<S40>'  : 'Current_Controller/PI Id/PI Id/Filter ICs/Disabled'
//  '<S41>'  : 'Current_Controller/PI Id/PI Id/I Gain/Internal Parameters'
//  '<S42>'  : 'Current_Controller/PI Id/PI Id/Ideal P Gain/Passthrough'
//  '<S43>'  : 'Current_Controller/PI Id/PI Id/Ideal P Gain Fdbk/Disabled'
//  '<S44>'  : 'Current_Controller/PI Id/PI Id/Integrator/Discrete'
//  '<S45>'  : 'Current_Controller/PI Id/PI Id/Integrator ICs/Internal IC'
//  '<S46>'  : 'Current_Controller/PI Id/PI Id/N Copy/Disabled wSignal Specification'
//  '<S47>'  : 'Current_Controller/PI Id/PI Id/N Gain/Disabled'
//  '<S48>'  : 'Current_Controller/PI Id/PI Id/P Copy/Disabled'
//  '<S49>'  : 'Current_Controller/PI Id/PI Id/Parallel P Gain/Internal Parameters'
//  '<S50>'  : 'Current_Controller/PI Id/PI Id/Reset Signal/Disabled'
//  '<S51>'  : 'Current_Controller/PI Id/PI Id/Saturation/Passthrough'
//  '<S52>'  : 'Current_Controller/PI Id/PI Id/Saturation Fdbk/Disabled'
//  '<S53>'  : 'Current_Controller/PI Id/PI Id/Sum/Sum_PI'
//  '<S54>'  : 'Current_Controller/PI Id/PI Id/Sum Fdbk/Disabled'
//  '<S55>'  : 'Current_Controller/PI Id/PI Id/Tracking Mode/Disabled'
//  '<S56>'  : 'Current_Controller/PI Id/PI Id/Tracking Mode Sum/Passthrough'
//  '<S57>'  : 'Current_Controller/PI Id/PI Id/Tsamp - Integral/TsSignalSpecification'
//  '<S58>'  : 'Current_Controller/PI Id/PI Id/Tsamp - Ngain/Passthrough'
//  '<S59>'  : 'Current_Controller/PI Id/PI Id/postSat Signal/Forward_Path'
//  '<S60>'  : 'Current_Controller/PI Id/PI Id/preInt Signal/Internal PreInt'
//  '<S61>'  : 'Current_Controller/PI Id/PI Id/preSat Signal/Forward_Path'
//  '<S62>'  : 'Current_Controller/PI Iq/PI Iq'
//  '<S63>'  : 'Current_Controller/PI Iq/PI Iq/Anti-windup'
//  '<S64>'  : 'Current_Controller/PI Iq/PI Iq/D Gain'
//  '<S65>'  : 'Current_Controller/PI Iq/PI Iq/External Derivative'
//  '<S66>'  : 'Current_Controller/PI Iq/PI Iq/Filter'
//  '<S67>'  : 'Current_Controller/PI Iq/PI Iq/Filter ICs'
//  '<S68>'  : 'Current_Controller/PI Iq/PI Iq/I Gain'
//  '<S69>'  : 'Current_Controller/PI Iq/PI Iq/Ideal P Gain'
//  '<S70>'  : 'Current_Controller/PI Iq/PI Iq/Ideal P Gain Fdbk'
//  '<S71>'  : 'Current_Controller/PI Iq/PI Iq/Integrator'
//  '<S72>'  : 'Current_Controller/PI Iq/PI Iq/Integrator ICs'
//  '<S73>'  : 'Current_Controller/PI Iq/PI Iq/N Copy'
//  '<S74>'  : 'Current_Controller/PI Iq/PI Iq/N Gain'
//  '<S75>'  : 'Current_Controller/PI Iq/PI Iq/P Copy'
//  '<S76>'  : 'Current_Controller/PI Iq/PI Iq/Parallel P Gain'
//  '<S77>'  : 'Current_Controller/PI Iq/PI Iq/Reset Signal'
//  '<S78>'  : 'Current_Controller/PI Iq/PI Iq/Saturation'
//  '<S79>'  : 'Current_Controller/PI Iq/PI Iq/Saturation Fdbk'
//  '<S80>'  : 'Current_Controller/PI Iq/PI Iq/Sum'
//  '<S81>'  : 'Current_Controller/PI Iq/PI Iq/Sum Fdbk'
//  '<S82>'  : 'Current_Controller/PI Iq/PI Iq/Tracking Mode'
//  '<S83>'  : 'Current_Controller/PI Iq/PI Iq/Tracking Mode Sum'
//  '<S84>'  : 'Current_Controller/PI Iq/PI Iq/Tsamp - Integral'
//  '<S85>'  : 'Current_Controller/PI Iq/PI Iq/Tsamp - Ngain'
//  '<S86>'  : 'Current_Controller/PI Iq/PI Iq/postSat Signal'
//  '<S87>'  : 'Current_Controller/PI Iq/PI Iq/preInt Signal'
//  '<S88>'  : 'Current_Controller/PI Iq/PI Iq/preSat Signal'
//  '<S89>'  : 'Current_Controller/PI Iq/PI Iq/Anti-windup/Passthrough'
//  '<S90>'  : 'Current_Controller/PI Iq/PI Iq/D Gain/Disabled'
//  '<S91>'  : 'Current_Controller/PI Iq/PI Iq/External Derivative/Disabled'
//  '<S92>'  : 'Current_Controller/PI Iq/PI Iq/Filter/Disabled'
//  '<S93>'  : 'Current_Controller/PI Iq/PI Iq/Filter ICs/Disabled'
//  '<S94>'  : 'Current_Controller/PI Iq/PI Iq/I Gain/Internal Parameters'
//  '<S95>'  : 'Current_Controller/PI Iq/PI Iq/Ideal P Gain/Passthrough'
//  '<S96>'  : 'Current_Controller/PI Iq/PI Iq/Ideal P Gain Fdbk/Disabled'
//  '<S97>'  : 'Current_Controller/PI Iq/PI Iq/Integrator/Discrete'
//  '<S98>'  : 'Current_Controller/PI Iq/PI Iq/Integrator ICs/Internal IC'
//  '<S99>'  : 'Current_Controller/PI Iq/PI Iq/N Copy/Disabled wSignal Specification'
//  '<S100>' : 'Current_Controller/PI Iq/PI Iq/N Gain/Disabled'
//  '<S101>' : 'Current_Controller/PI Iq/PI Iq/P Copy/Disabled'
//  '<S102>' : 'Current_Controller/PI Iq/PI Iq/Parallel P Gain/Internal Parameters'
//  '<S103>' : 'Current_Controller/PI Iq/PI Iq/Reset Signal/Disabled'
//  '<S104>' : 'Current_Controller/PI Iq/PI Iq/Saturation/Passthrough'
//  '<S105>' : 'Current_Controller/PI Iq/PI Iq/Saturation Fdbk/Disabled'
//  '<S106>' : 'Current_Controller/PI Iq/PI Iq/Sum/Sum_PI'
//  '<S107>' : 'Current_Controller/PI Iq/PI Iq/Sum Fdbk/Disabled'
//  '<S108>' : 'Current_Controller/PI Iq/PI Iq/Tracking Mode/Disabled'
//  '<S109>' : 'Current_Controller/PI Iq/PI Iq/Tracking Mode Sum/Passthrough'
//  '<S110>' : 'Current_Controller/PI Iq/PI Iq/Tsamp - Integral/TsSignalSpecification'
//  '<S111>' : 'Current_Controller/PI Iq/PI Iq/Tsamp - Ngain/Passthrough'
//  '<S112>' : 'Current_Controller/PI Iq/PI Iq/postSat Signal/Forward_Path'
//  '<S113>' : 'Current_Controller/PI Iq/PI Iq/preInt Signal/Internal PreInt'
//  '<S114>' : 'Current_Controller/PI Iq/PI Iq/preSat Signal/Forward_Path'
//  '<S115>' : 'Current_Controller/Reverse Park Clark/Inverse Park Transform'

#endif                                 // Current_Controller_h_

//
// File trailer for generated code.
//
// [EOF]
//
