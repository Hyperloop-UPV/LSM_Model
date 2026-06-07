//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Current_Controller.h
//
// Code generated for Simulink model 'Current_Controller'.
//
// Model version                  : 1.33
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Fri Jun  5 16:25:34 2026
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
      float Integrator_DSTATE;         // '<S45>/Integrator'
      float Integrator_DSTATE_i;       // '<S98>/Integrator'
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
//  Block '<S4>/Scope' : Unused code path elimination
//  Block '<S5>/Scope' : Unused code path elimination
//  Block '<S5>/Scope1' : Unused code path elimination
//  Block '<S6>/Scope' : Unused code path elimination
//  Block '<S6>/Scope1' : Unused code path elimination
//  Block '<S6>/Scope2' : Unused code path elimination
//  Block '<S6>/Scope3' : Unused code path elimination
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
//  Block '<S7>/Scope' : Unused code path elimination
//  Block '<S7>/Scope1' : Unused code path elimination
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
//  '<S6>'   : 'Current_Controller/SVM'
//  '<S7>'   : 'Current_Controller/fp_to_ELE angle'
//  '<S8>'   : 'Current_Controller/Clark Park/Clarke Transform'
//  '<S9>'   : 'Current_Controller/Clark Park/Clarke to Park Angle Transform'
//  '<S10>'  : 'Current_Controller/PI Id/PI Id'
//  '<S11>'  : 'Current_Controller/PI Id/PI Id/Anti-windup'
//  '<S12>'  : 'Current_Controller/PI Id/PI Id/D Gain'
//  '<S13>'  : 'Current_Controller/PI Id/PI Id/External Derivative'
//  '<S14>'  : 'Current_Controller/PI Id/PI Id/Filter'
//  '<S15>'  : 'Current_Controller/PI Id/PI Id/Filter ICs'
//  '<S16>'  : 'Current_Controller/PI Id/PI Id/I Gain'
//  '<S17>'  : 'Current_Controller/PI Id/PI Id/Ideal P Gain'
//  '<S18>'  : 'Current_Controller/PI Id/PI Id/Ideal P Gain Fdbk'
//  '<S19>'  : 'Current_Controller/PI Id/PI Id/Integrator'
//  '<S20>'  : 'Current_Controller/PI Id/PI Id/Integrator ICs'
//  '<S21>'  : 'Current_Controller/PI Id/PI Id/N Copy'
//  '<S22>'  : 'Current_Controller/PI Id/PI Id/N Gain'
//  '<S23>'  : 'Current_Controller/PI Id/PI Id/P Copy'
//  '<S24>'  : 'Current_Controller/PI Id/PI Id/Parallel P Gain'
//  '<S25>'  : 'Current_Controller/PI Id/PI Id/Reset Signal'
//  '<S26>'  : 'Current_Controller/PI Id/PI Id/Saturation'
//  '<S27>'  : 'Current_Controller/PI Id/PI Id/Saturation Fdbk'
//  '<S28>'  : 'Current_Controller/PI Id/PI Id/Sum'
//  '<S29>'  : 'Current_Controller/PI Id/PI Id/Sum Fdbk'
//  '<S30>'  : 'Current_Controller/PI Id/PI Id/Tracking Mode'
//  '<S31>'  : 'Current_Controller/PI Id/PI Id/Tracking Mode Sum'
//  '<S32>'  : 'Current_Controller/PI Id/PI Id/Tsamp - Integral'
//  '<S33>'  : 'Current_Controller/PI Id/PI Id/Tsamp - Ngain'
//  '<S34>'  : 'Current_Controller/PI Id/PI Id/postSat Signal'
//  '<S35>'  : 'Current_Controller/PI Id/PI Id/preInt Signal'
//  '<S36>'  : 'Current_Controller/PI Id/PI Id/preSat Signal'
//  '<S37>'  : 'Current_Controller/PI Id/PI Id/Anti-windup/Passthrough'
//  '<S38>'  : 'Current_Controller/PI Id/PI Id/D Gain/Disabled'
//  '<S39>'  : 'Current_Controller/PI Id/PI Id/External Derivative/Disabled'
//  '<S40>'  : 'Current_Controller/PI Id/PI Id/Filter/Disabled'
//  '<S41>'  : 'Current_Controller/PI Id/PI Id/Filter ICs/Disabled'
//  '<S42>'  : 'Current_Controller/PI Id/PI Id/I Gain/Internal Parameters'
//  '<S43>'  : 'Current_Controller/PI Id/PI Id/Ideal P Gain/Passthrough'
//  '<S44>'  : 'Current_Controller/PI Id/PI Id/Ideal P Gain Fdbk/Disabled'
//  '<S45>'  : 'Current_Controller/PI Id/PI Id/Integrator/Discrete'
//  '<S46>'  : 'Current_Controller/PI Id/PI Id/Integrator ICs/Internal IC'
//  '<S47>'  : 'Current_Controller/PI Id/PI Id/N Copy/Disabled wSignal Specification'
//  '<S48>'  : 'Current_Controller/PI Id/PI Id/N Gain/Disabled'
//  '<S49>'  : 'Current_Controller/PI Id/PI Id/P Copy/Disabled'
//  '<S50>'  : 'Current_Controller/PI Id/PI Id/Parallel P Gain/Internal Parameters'
//  '<S51>'  : 'Current_Controller/PI Id/PI Id/Reset Signal/Disabled'
//  '<S52>'  : 'Current_Controller/PI Id/PI Id/Saturation/Passthrough'
//  '<S53>'  : 'Current_Controller/PI Id/PI Id/Saturation Fdbk/Disabled'
//  '<S54>'  : 'Current_Controller/PI Id/PI Id/Sum/Sum_PI'
//  '<S55>'  : 'Current_Controller/PI Id/PI Id/Sum Fdbk/Disabled'
//  '<S56>'  : 'Current_Controller/PI Id/PI Id/Tracking Mode/Disabled'
//  '<S57>'  : 'Current_Controller/PI Id/PI Id/Tracking Mode Sum/Passthrough'
//  '<S58>'  : 'Current_Controller/PI Id/PI Id/Tsamp - Integral/TsSignalSpecification'
//  '<S59>'  : 'Current_Controller/PI Id/PI Id/Tsamp - Ngain/Passthrough'
//  '<S60>'  : 'Current_Controller/PI Id/PI Id/postSat Signal/Forward_Path'
//  '<S61>'  : 'Current_Controller/PI Id/PI Id/preInt Signal/Internal PreInt'
//  '<S62>'  : 'Current_Controller/PI Id/PI Id/preSat Signal/Forward_Path'
//  '<S63>'  : 'Current_Controller/PI Iq/PI Iq'
//  '<S64>'  : 'Current_Controller/PI Iq/PI Iq/Anti-windup'
//  '<S65>'  : 'Current_Controller/PI Iq/PI Iq/D Gain'
//  '<S66>'  : 'Current_Controller/PI Iq/PI Iq/External Derivative'
//  '<S67>'  : 'Current_Controller/PI Iq/PI Iq/Filter'
//  '<S68>'  : 'Current_Controller/PI Iq/PI Iq/Filter ICs'
//  '<S69>'  : 'Current_Controller/PI Iq/PI Iq/I Gain'
//  '<S70>'  : 'Current_Controller/PI Iq/PI Iq/Ideal P Gain'
//  '<S71>'  : 'Current_Controller/PI Iq/PI Iq/Ideal P Gain Fdbk'
//  '<S72>'  : 'Current_Controller/PI Iq/PI Iq/Integrator'
//  '<S73>'  : 'Current_Controller/PI Iq/PI Iq/Integrator ICs'
//  '<S74>'  : 'Current_Controller/PI Iq/PI Iq/N Copy'
//  '<S75>'  : 'Current_Controller/PI Iq/PI Iq/N Gain'
//  '<S76>'  : 'Current_Controller/PI Iq/PI Iq/P Copy'
//  '<S77>'  : 'Current_Controller/PI Iq/PI Iq/Parallel P Gain'
//  '<S78>'  : 'Current_Controller/PI Iq/PI Iq/Reset Signal'
//  '<S79>'  : 'Current_Controller/PI Iq/PI Iq/Saturation'
//  '<S80>'  : 'Current_Controller/PI Iq/PI Iq/Saturation Fdbk'
//  '<S81>'  : 'Current_Controller/PI Iq/PI Iq/Sum'
//  '<S82>'  : 'Current_Controller/PI Iq/PI Iq/Sum Fdbk'
//  '<S83>'  : 'Current_Controller/PI Iq/PI Iq/Tracking Mode'
//  '<S84>'  : 'Current_Controller/PI Iq/PI Iq/Tracking Mode Sum'
//  '<S85>'  : 'Current_Controller/PI Iq/PI Iq/Tsamp - Integral'
//  '<S86>'  : 'Current_Controller/PI Iq/PI Iq/Tsamp - Ngain'
//  '<S87>'  : 'Current_Controller/PI Iq/PI Iq/postSat Signal'
//  '<S88>'  : 'Current_Controller/PI Iq/PI Iq/preInt Signal'
//  '<S89>'  : 'Current_Controller/PI Iq/PI Iq/preSat Signal'
//  '<S90>'  : 'Current_Controller/PI Iq/PI Iq/Anti-windup/Passthrough'
//  '<S91>'  : 'Current_Controller/PI Iq/PI Iq/D Gain/Disabled'
//  '<S92>'  : 'Current_Controller/PI Iq/PI Iq/External Derivative/Disabled'
//  '<S93>'  : 'Current_Controller/PI Iq/PI Iq/Filter/Disabled'
//  '<S94>'  : 'Current_Controller/PI Iq/PI Iq/Filter ICs/Disabled'
//  '<S95>'  : 'Current_Controller/PI Iq/PI Iq/I Gain/Internal Parameters'
//  '<S96>'  : 'Current_Controller/PI Iq/PI Iq/Ideal P Gain/Passthrough'
//  '<S97>'  : 'Current_Controller/PI Iq/PI Iq/Ideal P Gain Fdbk/Disabled'
//  '<S98>'  : 'Current_Controller/PI Iq/PI Iq/Integrator/Discrete'
//  '<S99>'  : 'Current_Controller/PI Iq/PI Iq/Integrator ICs/Internal IC'
//  '<S100>' : 'Current_Controller/PI Iq/PI Iq/N Copy/Disabled wSignal Specification'
//  '<S101>' : 'Current_Controller/PI Iq/PI Iq/N Gain/Disabled'
//  '<S102>' : 'Current_Controller/PI Iq/PI Iq/P Copy/Disabled'
//  '<S103>' : 'Current_Controller/PI Iq/PI Iq/Parallel P Gain/Internal Parameters'
//  '<S104>' : 'Current_Controller/PI Iq/PI Iq/Reset Signal/Disabled'
//  '<S105>' : 'Current_Controller/PI Iq/PI Iq/Saturation/Passthrough'
//  '<S106>' : 'Current_Controller/PI Iq/PI Iq/Saturation Fdbk/Disabled'
//  '<S107>' : 'Current_Controller/PI Iq/PI Iq/Sum/Sum_PI'
//  '<S108>' : 'Current_Controller/PI Iq/PI Iq/Sum Fdbk/Disabled'
//  '<S109>' : 'Current_Controller/PI Iq/PI Iq/Tracking Mode/Disabled'
//  '<S110>' : 'Current_Controller/PI Iq/PI Iq/Tracking Mode Sum/Passthrough'
//  '<S111>' : 'Current_Controller/PI Iq/PI Iq/Tsamp - Integral/TsSignalSpecification'
//  '<S112>' : 'Current_Controller/PI Iq/PI Iq/Tsamp - Ngain/Passthrough'
//  '<S113>' : 'Current_Controller/PI Iq/PI Iq/postSat Signal/Forward_Path'
//  '<S114>' : 'Current_Controller/PI Iq/PI Iq/preInt Signal/Internal PreInt'
//  '<S115>' : 'Current_Controller/PI Iq/PI Iq/preSat Signal/Forward_Path'
//  '<S116>' : 'Current_Controller/Reverse Park Clark/Inverse Park Transform'

#endif                                 // Current_Controller_h_

//
// File trailer for generated code.
//
// [EOF]
//
