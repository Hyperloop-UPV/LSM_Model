//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: control_block.h
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
#ifndef control_block_h_
#define control_block_h_
#include <stdbool.h>
#include <stdint.h>
#include <cmath>
#include "rt_nonfinite.h"
#include "control_block_types.h"

extern "C"
{

#include "rtGetNaN.h"

}

#define control_block_M                (rtM)

// Class declaration for model control_block
class control_block final
{
  // public data and function members
 public:
  // Block signals and states (default storage) for system '<S1>/SpeedController' 
  struct DW_SpeedController {
    double error;                      // '<S5>/Sum'
    double IProdOut;                   // '<S154>/IProd Out'
    double Integrator;                 // '<S157>/Integrator'
    double PProdOut;                   // '<S162>/PProd Out'
    double speed_integrator_state;     // '<S157>/Integrator'
  };

  // Block signals and states (default storage) for system '<Root>'
  struct DW {
    DW_SpeedController SpeedController_h;// '<S1>/SpeedController'
    double Saturation_m[3];            // '<Root>/Saturation'
    double TmpSignalConversionAtSFunctionI[3];// '<S182>/Frequency and Max Calculator' 
    double TmpSignalConversionAtSFunctio_a[3];// '<S10>/Inverse Park Transform'
    double abc[3];                     // '<S10>/Inverse Park Transform'
    double dq0[3];                     // '<S6>/Clarke to Park Angle Transform'
    double TmpSignalConversionAtSFunctio_c[3];// '<S6>/Clarke Transform'
    double AlphaBeta0[3];              // '<S6>/Clarke Transform'
    double signo[3];                   // '<S182>/Frequency and Max Calculator'
    double t_inicio[3];                // '<S182>/Frequency and Max Calculator'
    double DiscreteTimeIntegrator2;    // '<S178>/Discrete-Time Integrator2'
    double DiscreteTimeIntegrator1;    // '<S178>/Discrete-Time Integrator1'
    double DiscreteTimeIntegrator;     // '<S178>/Discrete-Time Integrator'
    double pos;                        // '<S179>/Discrete-Time Integrator1'
    double Divide;                     // '<S7>/Divide'
    double Divide1;                    // '<S7>/Divide1'
    double Round;                      // '<S7>/Round'
    double Gain;                       // '<S7>/Gain'
    double Sum;                        // '<S7>/Sum'
    double Gain_l;                     // '<S11>/Gain'
    double Sum_j;                      // '<S11>/Sum'
    double MathFunction;               // '<S11>/Math Function'
    double error;                      // '<S4>/Sum2'
    double IntegralGain;               // '<S46>/Integral Gain'
    double Integrator;                 // '<S49>/Integrator'
    double ProportionalGain;           // '<S54>/Proportional Gain'
    double Sum_l;                      // '<S58>/Sum'
    double vel;                        // '<S179>/Discrete-Time Integrator'
    double Sum1;                       // '<S4>/Sum1'
    double IntegralGain_p;             // '<S99>/Integral Gain'
    double Integrator_k;               // '<S102>/Integrator'
    double ProportionalGain_p;         // '<S107>/Proportional Gain'
    double Sum_d;                      // '<S111>/Sum'
    double Saturation;                 // '<S9>/Saturation'
    double Product;                    // '<S178>/Product'
    double Sum_i;                      // '<S178>/Sum'
    double Divide_e;                   // '<S178>/Divide'
    double Product2;                   // '<S178>/Product2'
    double Sum2;                       // '<S178>/Sum2'
    double Divide1_n;                  // '<S178>/Divide1'
    double Product1;                   // '<S178>/Product1'
    double Sum1_e;                     // '<S178>/Sum1'
    double Divide2;                    // '<S178>/Divide2'
    double ms;                         // '<S184>/Gain2'
    double Power;                      // '<S184>/Power'
    double drag_aero;                  // '<S184>/Gain1'
    double Clock;                      // '<S184>/Clock'
    double nDLookupTable;              // '<S184>/n-D Lookup Table'
    double Gain_p;                     // '<S184>/Gain'
    double F_drag;                     // '<S184>/Sum1'
    double UnitDelay;                  // '<S176>/Unit Delay'
    double Saturation_p;               // '<S182>/Saturation'
    double Divide_n;                   // '<S183>/Divide'
    double Saturation_b;               // '<S183>/Saturation'
    double Acos;                       // '<S183>/Acos'
    double TSamp;                      // '<S191>/TSamp'
    double Uk1;                        // '<S191>/UD'
    double Diff;                       // '<S191>/Diff'
    double Switch;                     // '<S183>/Switch'
    double Sum1_j;                     // '<S183>/Sum1'
    double Divide_k;                   // '<S181>/Divide'
    double Divide1_b;                  // '<S181>/Divide1'
    double Round_a;                    // '<S181>/Round'
    double Gain_i;                     // '<S181>/Gain'
    double Sum_h;                      // '<S181>/Sum'
    double F;                          // '<S176>/2-D Lookup Table'
    double Gain1;                      // '<S176>/Gain1'
    double F_n;                        // '<S176>/Product'
    double Product_a;                  // '<S180>/Product'
    double Sum1_je;                    // '<S179>/Sum1'
    double Saturation_br;              // '<S179>/Saturation'
    double acel;                       // '<S179>/Divide'
    double speetec_detect;             // '<S177>/Speetec Detection'
    double pos_for_speetec;            // '<S177>/Speetec Detection'
    double Sum_c;                      // '<S183>/Sum'
    double actual_angle;               // '<S183>/Calculate Actual Angle'
    double frecuencia;                 // '<S182>/Frequency and Max Calculator'
    double Maximo;                     // '<S182>/Frequency and Max Calculator'
    double out;                        // '<S187>/MATLAB Function'
    double numero_EMS;                 // '<S180>/Cálculo EMS'
    double pos_value;                  // '<S180>/Cálculo EMS'
    double drag_out;                   // '<S184>/MATLAB Function3'
    double speed_ref_out;              // '<Root>/MATLAB Function'
    double Sum_f;                      // '<S166>/Sum'
    double DiscreteTimeIntegrator2_DSTATE;// '<S178>/Discrete-Time Integrator2'
    double DiscreteTimeIntegrator1_DSTATE;// '<S178>/Discrete-Time Integrator1'
    double DiscreteTimeIntegrator_DSTATE;// '<S178>/Discrete-Time Integrator'
    double DiscreteTimeIntegrator1_DSTAT_g;// '<S179>/Discrete-Time Integrator1' 
    double Integrator_DSTATE;          // '<S49>/Integrator'
    double DiscreteTimeIntegrator_DSTATE_i;// '<S179>/Discrete-Time Integrator'
    double Integrator_DSTATE_i;        // '<S102>/Integrator'
    double UnitDelay_DSTATE;           // '<S176>/Unit Delay'
    double UD_DSTATE;                  // '<S191>/UD'
    double tiempo;                     // '<S182>/Frequency and Max Calculator'
    double frecuencia_acc;             // '<S182>/Frequency and Max Calculator'
    double antiguo_maximo;             // '<S182>/Frequency and Max Calculator'
    double t_maximo;                   // '<S182>/Frequency and Max Calculator'
    double speetec_detect_ant;         // '<S180>/Cálculo EMS'
    double pos_ref;                    // '<S180>/Cálculo EMS'
    double end_booster;                // '<S180>/Cálculo EMS'
    double rise;                       // '<Root>/MATLAB Function'
  };

  // Constant parameters (default storage)
  struct ConstP {
    // Expression: force_drag_vec
    //  Referenced by: '<S184>/n-D Lookup Table'

    double nDLookupTable_tableData[39];

    // Expression: speed_drag_vec
    //  Referenced by: '<S184>/n-D Lookup Table'

    double nDLookupTable_bp01Data[13];

    // Expression: airgap_vec
    //  Referenced by: '<S184>/n-D Lookup Table'

    double nDLookupTable_bp02Data[3];

    // Expression: fuerza
    //  Referenced by: '<S176>/2-D Lookup Table'

    double uDLookupTable_tableData[24321];

    // Expression: angulos
    //  Referenced by: '<S176>/2-D Lookup Table'

    double uDLookupTable_bp01Data[121];

    // Expression: frac_polar
    //  Referenced by: '<S176>/2-D Lookup Table'

    double uDLookupTable_bp02Data[201];

    // Computed Parameter: nDLookupTable_maxIndex
    //  Referenced by: '<S184>/n-D Lookup Table'

    uint32_t nDLookupTable_maxIndex[2];

    // Computed Parameter: uDLookupTable_maxIndex
    //  Referenced by: '<S176>/2-D Lookup Table'

    uint32_t uDLookupTable_maxIndex[2];
  };

  // Real-time Model Data Structure
  struct RT_MODEL {
    const char * volatile errorStatus;

    //
    //  Timing:
    //  The following substructure contains information regarding
    //  the timing information for the model.

    struct {
      uint32_t clockTick0;
      struct {
        uint8_t TID[3];
      } TaskCounters;
    } Timing;

    const char* getErrorStatus() const;
    void setErrorStatus(const char* const volatile aErrorStatus);
  };

  // Copy Constructor
  control_block(control_block const&) = delete;

  // Assignment Operator
  control_block& operator= (control_block const&) & = delete;

  // Move Constructor
  control_block(control_block &&) = delete;

  // Move Assignment Operator
  control_block& operator= (control_block &&) = delete;

  // Real-Time Model get method
  control_block::RT_MODEL * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step();

  // Constructor
  control_block();

  // Destructor
  ~control_block();

  // private data and function members
 private:
  // Block states
  DW rtDW;

  // private member function(s) for subsystem '<S1>/SpeedController'
  static void SpeedController(double rtu_Speed_ref, double rtu_Real_Speed, float
    rtu_Kp_speed, float rtu_Ki_speed, double *rty_Iq_ref, DW_SpeedController
    *localDW);

  // Real-Time Model
  RT_MODEL rtM;
};

// Constant parameters (default storage)
extern const control_block::ConstP rtConstP;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S7>/Scope' : Unused code path elimination
//  Block '<S8>/Scope' : Unused code path elimination
//  Block '<S9>/Scope' : Unused code path elimination
//  Block '<S10>/Scope' : Unused code path elimination
//  Block '<S10>/Scope1' : Unused code path elimination
//  Block '<S4>/Scope' : Unused code path elimination
//  Block '<S4>/Scope1' : Unused code path elimination
//  Block '<S4>/Scope2' : Unused code path elimination
//  Block '<S4>/Scope3' : Unused code path elimination
//  Block '<S4>/Scope4' : Unused code path elimination
//  Block '<S4>/Scope5' : Unused code path elimination
//  Block '<S4>/Scope6' : Unused code path elimination
//  Block '<S4>/Scope7' : Unused code path elimination
//  Block '<S4>/Scope8' : Unused code path elimination
//  Block '<S4>/Scope9' : Unused code path elimination
//  Block '<S11>/Scope' : Unused code path elimination
//  Block '<S11>/Scope1' : Unused code path elimination
//  Block '<S121>/Scope' : Unused code path elimination
//  Block '<S5>/Scope10' : Unused code path elimination
//  Block '<Root>/Gain3' : Unused code path elimination
//  Block '<S178>/Scope' : Unused code path elimination
//  Block '<S184>/Scope3' : Unused code path elimination
//  Block '<S184>/Scope4' : Unused code path elimination
//  Block '<S184>/Scope6' : Unused code path elimination
//  Block '<S184>/Scope7' : Unused code path elimination
//  Block '<S179>/Scope' : Unused code path elimination
//  Block '<S179>/Scope11' : Unused code path elimination
//  Block '<S179>/Scope4' : Unused code path elimination
//  Block '<S179>/Scope5' : Unused code path elimination
//  Block '<S179>/Scope9' : Unused code path elimination
//  Block '<S180>/Scope' : Unused code path elimination
//  Block '<S180>/Scope1' : Unused code path elimination
//  Block '<S180>/Scope10' : Unused code path elimination
//  Block '<S187>/Add' : Unused code path elimination
//  Block '<S187>/Constant' : Unused code path elimination
//  Block '<S187>/Constant1' : Unused code path elimination
//  Block '<S187>/Constant10' : Unused code path elimination
//  Block '<S187>/Constant11' : Unused code path elimination
//  Block '<S187>/Constant2' : Unused code path elimination
//  Block '<S187>/Constant3' : Unused code path elimination
//  Block '<S187>/Constant4' : Unused code path elimination
//  Block '<S187>/Constant5' : Unused code path elimination
//  Block '<S187>/Constant6' : Unused code path elimination
//  Block '<S187>/Constant7' : Unused code path elimination
//  Block '<S187>/Constant8' : Unused code path elimination
//  Block '<S187>/Constant9' : Unused code path elimination
//  Block '<S187>/Gain' : Unused code path elimination
//  Block '<S187>/Gain1' : Unused code path elimination
//  Block '<S187>/Gain2' : Unused code path elimination
//  Block '<S187>/Product' : Unused code path elimination
//  Block '<S187>/Product1' : Unused code path elimination
//  Block '<S187>/Product2' : Unused code path elimination
//  Block '<S187>/Switch' : Unused code path elimination
//  Block '<S187>/Switch1' : Unused code path elimination
//  Block '<S187>/Switch2' : Unused code path elimination
//  Block '<S187>/Switch3' : Unused code path elimination
//  Block '<S187>/Switch4' : Unused code path elimination
//  Block '<S187>/Switch5' : Unused code path elimination
//  Block '<S181>/Scope' : Unused code path elimination
//  Block '<S182>/Constant' : Unused code path elimination
//  Block '<S182>/Scope' : Unused code path elimination
//  Block '<S182>/Scope1' : Unused code path elimination
//  Block '<S182>/Scope2' : Unused code path elimination
//  Block '<S191>/Data Type Duplicate' : Unused code path elimination
//  Block '<S183>/Scope' : Unused code path elimination
//  Block '<S183>/Scope1' : Unused code path elimination
//  Block '<S183>/Scope3' : Unused code path elimination
//  Block '<S183>/Scope4' : Unused code path elimination
//  Block '<S183>/Scope5' : Unused code path elimination
//  Block '<S176>/Scope' : Unused code path elimination
//  Block '<S176>/Scope1' : Unused code path elimination
//  Block '<S176>/Scope2' : Unused code path elimination
//  Block '<S176>/Scope3' : Unused code path elimination
//  Block '<S176>/Scope4' : Unused code path elimination
//  Block '<S176>/Scope5' : Unused code path elimination
//  Block '<S176>/Scope6' : Unused code path elimination
//  Block '<S176>/Scope7' : Unused code path elimination
//  Block '<S3>/Scope' : Unused code path elimination
//  Block '<S3>/Scope1' : Unused code path elimination
//  Block '<S3>/Scope11' : Unused code path elimination
//  Block '<S3>/Scope16' : Unused code path elimination
//  Block '<S3>/Scope2' : Unused code path elimination
//  Block '<Root>/Scope' : Unused code path elimination
//  Block '<Root>/Scope1' : Unused code path elimination
//  Block '<Root>/Scope2' : Unused code path elimination
//  Block '<Root>/Scope3' : Unused code path elimination


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
//  '<Root>' : 'control_block'
//  '<S1>'   : 'control_block/FOC Algorithm'
//  '<S2>'   : 'control_block/MATLAB Function'
//  '<S3>'   : 'control_block/PLANT'
//  '<S4>'   : 'control_block/FOC Algorithm/Current Controller'
//  '<S5>'   : 'control_block/FOC Algorithm/SpeedController'
//  '<S6>'   : 'control_block/FOC Algorithm/Current Controller/Clark Park'
//  '<S7>'   : 'control_block/FOC Algorithm/Current Controller/From pos to fp'
//  '<S8>'   : 'control_block/FOC Algorithm/Current Controller/PI Id'
//  '<S9>'   : 'control_block/FOC Algorithm/Current Controller/PI Iq'
//  '<S10>'  : 'control_block/FOC Algorithm/Current Controller/Reverse Park Clark'
//  '<S11>'  : 'control_block/FOC Algorithm/Current Controller/fp_to_ELE angle'
//  '<S12>'  : 'control_block/FOC Algorithm/Current Controller/Clark Park/Clarke Transform'
//  '<S13>'  : 'control_block/FOC Algorithm/Current Controller/Clark Park/Clarke to Park Angle Transform'
//  '<S14>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller'
//  '<S15>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Anti-windup'
//  '<S16>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/D Gain'
//  '<S17>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/External Derivative'
//  '<S18>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Filter'
//  '<S19>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Filter ICs'
//  '<S20>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/I Gain'
//  '<S21>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Ideal P Gain'
//  '<S22>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Ideal P Gain Fdbk'
//  '<S23>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Integrator'
//  '<S24>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Integrator ICs'
//  '<S25>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/N Copy'
//  '<S26>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/N Gain'
//  '<S27>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/P Copy'
//  '<S28>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Parallel P Gain'
//  '<S29>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Reset Signal'
//  '<S30>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Saturation'
//  '<S31>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Saturation Fdbk'
//  '<S32>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Sum'
//  '<S33>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Sum Fdbk'
//  '<S34>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Tracking Mode'
//  '<S35>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Tracking Mode Sum'
//  '<S36>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Tsamp - Integral'
//  '<S37>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Tsamp - Ngain'
//  '<S38>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/postSat Signal'
//  '<S39>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/preInt Signal'
//  '<S40>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/preSat Signal'
//  '<S41>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Anti-windup/Passthrough'
//  '<S42>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/D Gain/Disabled'
//  '<S43>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/External Derivative/Disabled'
//  '<S44>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Filter/Disabled'
//  '<S45>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Filter ICs/Disabled'
//  '<S46>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/I Gain/Internal Parameters'
//  '<S47>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Ideal P Gain/Passthrough'
//  '<S48>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Ideal P Gain Fdbk/Disabled'
//  '<S49>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Integrator/Discrete'
//  '<S50>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Integrator ICs/Internal IC'
//  '<S51>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/N Copy/Disabled wSignal Specification'
//  '<S52>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/N Gain/Disabled'
//  '<S53>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/P Copy/Disabled'
//  '<S54>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Parallel P Gain/Internal Parameters'
//  '<S55>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Reset Signal/Disabled'
//  '<S56>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Saturation/Passthrough'
//  '<S57>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Saturation Fdbk/Disabled'
//  '<S58>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Sum/Sum_PI'
//  '<S59>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Sum Fdbk/Disabled'
//  '<S60>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Tracking Mode/Disabled'
//  '<S61>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Tracking Mode Sum/Passthrough'
//  '<S62>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Tsamp - Integral/TsSignalSpecification'
//  '<S63>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/Tsamp - Ngain/Passthrough'
//  '<S64>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/postSat Signal/Forward_Path'
//  '<S65>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/preInt Signal/Internal PreInt'
//  '<S66>'  : 'control_block/FOC Algorithm/Current Controller/PI Id/PID Controller/preSat Signal/Forward_Path'
//  '<S67>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1'
//  '<S68>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Anti-windup'
//  '<S69>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/D Gain'
//  '<S70>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/External Derivative'
//  '<S71>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Filter'
//  '<S72>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Filter ICs'
//  '<S73>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/I Gain'
//  '<S74>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Ideal P Gain'
//  '<S75>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Ideal P Gain Fdbk'
//  '<S76>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Integrator'
//  '<S77>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Integrator ICs'
//  '<S78>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/N Copy'
//  '<S79>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/N Gain'
//  '<S80>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/P Copy'
//  '<S81>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Parallel P Gain'
//  '<S82>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Reset Signal'
//  '<S83>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Saturation'
//  '<S84>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Saturation Fdbk'
//  '<S85>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Sum'
//  '<S86>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Sum Fdbk'
//  '<S87>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Tracking Mode'
//  '<S88>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Tracking Mode Sum'
//  '<S89>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Tsamp - Integral'
//  '<S90>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Tsamp - Ngain'
//  '<S91>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/postSat Signal'
//  '<S92>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/preInt Signal'
//  '<S93>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/preSat Signal'
//  '<S94>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Anti-windup/Passthrough'
//  '<S95>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/D Gain/Disabled'
//  '<S96>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/External Derivative/Disabled'
//  '<S97>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Filter/Disabled'
//  '<S98>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Filter ICs/Disabled'
//  '<S99>'  : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/I Gain/Internal Parameters'
//  '<S100>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Ideal P Gain/Passthrough'
//  '<S101>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Ideal P Gain Fdbk/Disabled'
//  '<S102>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Integrator/Discrete'
//  '<S103>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Integrator ICs/Internal IC'
//  '<S104>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/N Copy/Disabled wSignal Specification'
//  '<S105>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/N Gain/Disabled'
//  '<S106>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/P Copy/Disabled'
//  '<S107>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Parallel P Gain/Internal Parameters'
//  '<S108>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Reset Signal/Disabled'
//  '<S109>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Saturation/Passthrough'
//  '<S110>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Saturation Fdbk/Disabled'
//  '<S111>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Sum/Sum_PI'
//  '<S112>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Sum Fdbk/Disabled'
//  '<S113>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Tracking Mode/Disabled'
//  '<S114>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Tracking Mode Sum/Passthrough'
//  '<S115>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Tsamp - Integral/TsSignalSpecification'
//  '<S116>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/Tsamp - Ngain/Passthrough'
//  '<S117>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/postSat Signal/Forward_Path'
//  '<S118>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/preInt Signal/Internal PreInt'
//  '<S119>' : 'control_block/FOC Algorithm/Current Controller/PI Iq/PID Controller1/preSat Signal/Forward_Path'
//  '<S120>' : 'control_block/FOC Algorithm/Current Controller/Reverse Park Clark/Inverse Park Transform'
//  '<S121>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity'
//  '<S122>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller'
//  '<S123>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Anti-windup'
//  '<S124>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/D Gain'
//  '<S125>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/External Derivative'
//  '<S126>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Filter'
//  '<S127>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Filter ICs'
//  '<S128>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/I Gain'
//  '<S129>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Ideal P Gain'
//  '<S130>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Ideal P Gain Fdbk'
//  '<S131>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Integrator'
//  '<S132>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Integrator ICs'
//  '<S133>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/N Copy'
//  '<S134>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/N Gain'
//  '<S135>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/P Copy'
//  '<S136>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Parallel P Gain'
//  '<S137>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Reset Signal'
//  '<S138>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Saturation'
//  '<S139>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Saturation Fdbk'
//  '<S140>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Sum'
//  '<S141>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Sum Fdbk'
//  '<S142>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Tracking Mode'
//  '<S143>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Tracking Mode Sum'
//  '<S144>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Tsamp - Integral'
//  '<S145>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Tsamp - Ngain'
//  '<S146>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/postSat Signal'
//  '<S147>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/preInt Signal'
//  '<S148>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/preSat Signal'
//  '<S149>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Anti-windup/Passthrough'
//  '<S150>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/D Gain/Disabled'
//  '<S151>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/External Derivative/Disabled'
//  '<S152>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Filter/Disabled'
//  '<S153>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Filter ICs/Disabled'
//  '<S154>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/I Gain/External Parameters'
//  '<S155>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Ideal P Gain/Passthrough'
//  '<S156>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Ideal P Gain Fdbk/Disabled'
//  '<S157>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Integrator/Discrete'
//  '<S158>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Integrator ICs/Internal IC'
//  '<S159>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/N Copy/Disabled wSignal Specification'
//  '<S160>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/N Gain/Disabled'
//  '<S161>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/P Copy/Disabled'
//  '<S162>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Parallel P Gain/External Parameters'
//  '<S163>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Reset Signal/Disabled'
//  '<S164>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Saturation/Passthrough'
//  '<S165>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Saturation Fdbk/Disabled'
//  '<S166>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Sum/Sum_PI'
//  '<S167>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Sum Fdbk/Disabled'
//  '<S168>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Tracking Mode/Disabled'
//  '<S169>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Tracking Mode Sum/Passthrough'
//  '<S170>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Tsamp - Integral/TsSignalSpecification'
//  '<S171>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/Tsamp - Ngain/Passthrough'
//  '<S172>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/postSat Signal/Forward_Path'
//  '<S173>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/preInt Signal/Internal PreInt'
//  '<S174>' : 'control_block/FOC Algorithm/SpeedController/PI Velocity/PID Controller/preSat Signal/Forward_Path'
//  '<S175>' : 'control_block/PLANT/Electric Circuit'
//  '<S176>' : 'control_block/PLANT/LSM model'
//  '<S177>' : 'control_block/PLANT/Speetec'
//  '<S178>' : 'control_block/PLANT/Electric Circuit/Equivalente eléctrico'
//  '<S179>' : 'control_block/PLANT/LSM model/Cálculo Dinámica'
//  '<S180>' : 'control_block/PLANT/LSM model/Cálculo EMS'
//  '<S181>' : 'control_block/PLANT/LSM model/From pos to fp'
//  '<S182>' : 'control_block/PLANT/LSM model/Maximun calculation'
//  '<S183>' : 'control_block/PLANT/LSM model/Phase'
//  '<S184>' : 'control_block/PLANT/LSM model/Cálculo Dinámica/Cálculo Drag'
//  '<S185>' : 'control_block/PLANT/LSM model/Cálculo Dinámica/Cálculo Drag/MATLAB Function3'
//  '<S186>' : 'control_block/PLANT/LSM model/Cálculo EMS/Cálculo EMS'
//  '<S187>' : 'control_block/PLANT/LSM model/Cálculo EMS/Subsystem'
//  '<S188>' : 'control_block/PLANT/LSM model/Cálculo EMS/Subsystem/MATLAB Function'
//  '<S189>' : 'control_block/PLANT/LSM model/Maximun calculation/Frequency and Max Calculator'
//  '<S190>' : 'control_block/PLANT/LSM model/Phase/Calculate Actual Angle'
//  '<S191>' : 'control_block/PLANT/LSM model/Phase/Discrete Derivative'
//  '<S192>' : 'control_block/PLANT/Speetec/Speetec Detection'

#endif                                 // control_block_h_

//
// File trailer for generated code.
//
// [EOF]
//
