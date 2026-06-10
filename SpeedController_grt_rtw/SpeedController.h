/*
 * SpeedController.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "SpeedController".
 *
 * Model version              : 1.21
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C++ source code generated on : Wed Jun 10 11:49:48 2026
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: STMicroelectronics->ST10/Super10
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef SPEEDCONTROLLER_H_
#define SPEEDCONTROLLER_H_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#include "rt_nonfinite.h"
#include "SpeedController_types.h"
#include <cfloat>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

/* Block states (default storage) for system '<Root>' */
struct DW_SpeedController_T {
  real32_T speed_integrator_state;     /* '<S37>/Integrator' */
};

/* External inputs (root inport signals with default storage) */
struct ExtU_SpeedController_T {
  real32_T Speed_ref;                  /* '<Root>/Speed_ref' */
  real32_T Real_Speed;                 /* '<Root>/Real_Speed' */
};

/* External outputs (root outports fed by signals with default storage) */
struct ExtY_SpeedController_T {
  real32_T Iq_ref;                     /* '<Root>/Iq_ref' */
  real32_T Speed_Error;                /* '<Root>/Speed_Error' */
};

/* Real-time Model Data Structure */
struct tag_RTM_SpeedController_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Class declaration for model SpeedController */
class SpeedController final
{
  /* public data and function members */
 public:
  /* Copy Constructor */
  SpeedController(SpeedController const&) = delete;

  /* Assignment Operator */
  SpeedController& operator= (SpeedController const&) & = delete;

  /* Move Constructor */
  SpeedController(SpeedController &&) = delete;

  /* Move Assignment Operator */
  SpeedController& operator= (SpeedController &&) = delete;

  /* Real-Time Model get method */
  RT_MODEL_SpeedController_T * getRTM();

  /* Root inports set method */
  void setExternalInputs(const ExtU_SpeedController_T *pExtU_SpeedController_T)
  {
    SpeedController_U = *pExtU_SpeedController_T;
  }

  /* Root outports get method */
  const ExtY_SpeedController_T &getExternalOutputs() const
  {
    return SpeedController_Y;
  }

  /* model start function */
  void start();

  /* Initial conditions function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  static void terminate();

  /* Constructor */
  SpeedController();

  /* Destructor */
  ~SpeedController();

  /* private data and function members */
 private:
  /* External inputs */
  ExtU_SpeedController_T SpeedController_U;

  /* External outputs */
  ExtY_SpeedController_T SpeedController_Y;

  /* Block states */
  DW_SpeedController_T SpeedController_DW;

  /* Real-Time Model */
  RT_MODEL_SpeedController_T SpeedController_M;
};

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SpeedController'
 * '<S1>'   : 'SpeedController/PI Velocity'
 * '<S2>'   : 'SpeedController/PI Velocity/PID Controller'
 * '<S3>'   : 'SpeedController/PI Velocity/PID Controller/Anti-windup'
 * '<S4>'   : 'SpeedController/PI Velocity/PID Controller/D Gain'
 * '<S5>'   : 'SpeedController/PI Velocity/PID Controller/External Derivative'
 * '<S6>'   : 'SpeedController/PI Velocity/PID Controller/Filter'
 * '<S7>'   : 'SpeedController/PI Velocity/PID Controller/Filter ICs'
 * '<S8>'   : 'SpeedController/PI Velocity/PID Controller/I Gain'
 * '<S9>'   : 'SpeedController/PI Velocity/PID Controller/Ideal P Gain'
 * '<S10>'  : 'SpeedController/PI Velocity/PID Controller/Ideal P Gain Fdbk'
 * '<S11>'  : 'SpeedController/PI Velocity/PID Controller/Integrator'
 * '<S12>'  : 'SpeedController/PI Velocity/PID Controller/Integrator ICs'
 * '<S13>'  : 'SpeedController/PI Velocity/PID Controller/N Copy'
 * '<S14>'  : 'SpeedController/PI Velocity/PID Controller/N Gain'
 * '<S15>'  : 'SpeedController/PI Velocity/PID Controller/P Copy'
 * '<S16>'  : 'SpeedController/PI Velocity/PID Controller/Parallel P Gain'
 * '<S17>'  : 'SpeedController/PI Velocity/PID Controller/Reset Signal'
 * '<S18>'  : 'SpeedController/PI Velocity/PID Controller/Saturation'
 * '<S19>'  : 'SpeedController/PI Velocity/PID Controller/Saturation Fdbk'
 * '<S20>'  : 'SpeedController/PI Velocity/PID Controller/Sum'
 * '<S21>'  : 'SpeedController/PI Velocity/PID Controller/Sum Fdbk'
 * '<S22>'  : 'SpeedController/PI Velocity/PID Controller/Tracking Mode'
 * '<S23>'  : 'SpeedController/PI Velocity/PID Controller/Tracking Mode Sum'
 * '<S24>'  : 'SpeedController/PI Velocity/PID Controller/Tsamp - Integral'
 * '<S25>'  : 'SpeedController/PI Velocity/PID Controller/Tsamp - Ngain'
 * '<S26>'  : 'SpeedController/PI Velocity/PID Controller/postSat Signal'
 * '<S27>'  : 'SpeedController/PI Velocity/PID Controller/preInt Signal'
 * '<S28>'  : 'SpeedController/PI Velocity/PID Controller/preSat Signal'
 * '<S29>'  : 'SpeedController/PI Velocity/PID Controller/Anti-windup/Passthrough'
 * '<S30>'  : 'SpeedController/PI Velocity/PID Controller/D Gain/Disabled'
 * '<S31>'  : 'SpeedController/PI Velocity/PID Controller/External Derivative/Disabled'
 * '<S32>'  : 'SpeedController/PI Velocity/PID Controller/Filter/Disabled'
 * '<S33>'  : 'SpeedController/PI Velocity/PID Controller/Filter ICs/Disabled'
 * '<S34>'  : 'SpeedController/PI Velocity/PID Controller/I Gain/Internal Parameters'
 * '<S35>'  : 'SpeedController/PI Velocity/PID Controller/Ideal P Gain/Passthrough'
 * '<S36>'  : 'SpeedController/PI Velocity/PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S37>'  : 'SpeedController/PI Velocity/PID Controller/Integrator/Discrete'
 * '<S38>'  : 'SpeedController/PI Velocity/PID Controller/Integrator ICs/Internal IC'
 * '<S39>'  : 'SpeedController/PI Velocity/PID Controller/N Copy/Disabled wSignal Specification'
 * '<S40>'  : 'SpeedController/PI Velocity/PID Controller/N Gain/Disabled'
 * '<S41>'  : 'SpeedController/PI Velocity/PID Controller/P Copy/Disabled'
 * '<S42>'  : 'SpeedController/PI Velocity/PID Controller/Parallel P Gain/Internal Parameters'
 * '<S43>'  : 'SpeedController/PI Velocity/PID Controller/Reset Signal/Disabled'
 * '<S44>'  : 'SpeedController/PI Velocity/PID Controller/Saturation/Passthrough'
 * '<S45>'  : 'SpeedController/PI Velocity/PID Controller/Saturation Fdbk/Disabled'
 * '<S46>'  : 'SpeedController/PI Velocity/PID Controller/Sum/Sum_PI'
 * '<S47>'  : 'SpeedController/PI Velocity/PID Controller/Sum Fdbk/Disabled'
 * '<S48>'  : 'SpeedController/PI Velocity/PID Controller/Tracking Mode/Disabled'
 * '<S49>'  : 'SpeedController/PI Velocity/PID Controller/Tracking Mode Sum/Passthrough'
 * '<S50>'  : 'SpeedController/PI Velocity/PID Controller/Tsamp - Integral/TsSignalSpecification'
 * '<S51>'  : 'SpeedController/PI Velocity/PID Controller/Tsamp - Ngain/Passthrough'
 * '<S52>'  : 'SpeedController/PI Velocity/PID Controller/postSat Signal/Forward_Path'
 * '<S53>'  : 'SpeedController/PI Velocity/PID Controller/preInt Signal/Internal PreInt'
 * '<S54>'  : 'SpeedController/PI Velocity/PID Controller/preSat Signal/Forward_Path'
 */
#endif                                 /* SPEEDCONTROLLER_H_ */
