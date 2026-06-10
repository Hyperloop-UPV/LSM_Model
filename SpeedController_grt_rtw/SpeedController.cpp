/*
 * SpeedController.cpp
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

#include "SpeedController.h"
#include "rtwtypes.h"
#include "SpeedController_private.h"

/* Model step function */
void SpeedController::step()
{
  real32_T Integrator;
  real32_T Integrator_tmp;
  real32_T rtb_Sum;
  real32_T rtb_error;

  /* Sum: '<Root>/Sum' incorporates:
   *  Inport: '<Root>/Real_Speed'
   *  Inport: '<Root>/Speed_ref'
   */
  rtb_error = SpeedController_U.Speed_ref - SpeedController_U.Real_Speed;

  /* DiscreteIntegrator: '<S37>/Integrator' incorporates:
   *  Gain: '<S34>/Integral Gain'
   */
  Integrator_tmp = 15.0F * rtb_error * 0.0005F;

  /* DiscreteIntegrator: '<S37>/Integrator' */
  Integrator = Integrator_tmp + SpeedController_DW.speed_integrator_state;

  /* Sum: '<S46>/Sum' incorporates:
   *  Gain: '<S42>/Proportional Gain'
   */
  rtb_Sum = 2.0F * rtb_error + Integrator;

  /* Outport: '<Root>/Iq_ref' */
  SpeedController_Y.Iq_ref = rtb_Sum;

  /* Outport: '<Root>/Speed_Error' */
  SpeedController_Y.Speed_Error = rtb_error;

  /* Update for DiscreteIntegrator: '<S37>/Integrator' */
  SpeedController_DW.speed_integrator_state = Integrator_tmp + Integrator;

  /* Matfile logging */
  rt_UpdateTXYLogVars((&SpeedController_M)->rtwLogInfo, (&(&SpeedController_M)
    ->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal((&SpeedController_M))!=-1) &&
        !((rtmGetTFinal((&SpeedController_M))-(&SpeedController_M)
           ->Timing.taskTime0) > (&SpeedController_M)->Timing.taskTime0 *
          (DBL_EPSILON))) {
      rtmSetErrorStatus((&SpeedController_M), "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++(&SpeedController_M)->Timing.clockTick0)) {
    ++(&SpeedController_M)->Timing.clockTickH0;
  }

  (&SpeedController_M)->Timing.taskTime0 = (&SpeedController_M)
    ->Timing.clockTick0 * (&SpeedController_M)->Timing.stepSize0 +
    (&SpeedController_M)->Timing.clockTickH0 * (&SpeedController_M)
    ->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void SpeedController::initialize()
{
  /* Registration code */
  rtmSetTFinal((&SpeedController_M), 10.0);
  (&SpeedController_M)->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (nullptr);
    (&SpeedController_M)->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo((&SpeedController_M)->rtwLogInfo, (nullptr));
    rtliSetLogXSignalPtrs((&SpeedController_M)->rtwLogInfo, (nullptr));
    rtliSetLogT((&SpeedController_M)->rtwLogInfo, "tout");
    rtliSetLogX((&SpeedController_M)->rtwLogInfo, "");
    rtliSetLogXFinal((&SpeedController_M)->rtwLogInfo, "");
    rtliSetLogVarNameModifier((&SpeedController_M)->rtwLogInfo, "rt_");
    rtliSetLogFormat((&SpeedController_M)->rtwLogInfo, 4);
    rtliSetLogMaxRows((&SpeedController_M)->rtwLogInfo, 0);
    rtliSetLogDecimation((&SpeedController_M)->rtwLogInfo, 1);
    rtliSetLogY((&SpeedController_M)->rtwLogInfo, "");
    rtliSetLogYSignalInfo((&SpeedController_M)->rtwLogInfo, (nullptr));
    rtliSetLogYSignalPtrs((&SpeedController_M)->rtwLogInfo, (nullptr));
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime((&SpeedController_M)->rtwLogInfo, 0.0,
    rtmGetTFinal((&SpeedController_M)), (&SpeedController_M)->Timing.stepSize0,
    (&rtmGetErrorStatus((&SpeedController_M))));
}

/* Model terminate function */
void SpeedController::terminate()
{
  /* (no terminate code required) */
}

/* Constructor */
SpeedController::SpeedController() :
  SpeedController_U(),
  SpeedController_Y(),
  SpeedController_DW(),
  SpeedController_M()
{
  /* Currently there is no constructor body generated.*/
}

/* Destructor */
/* Currently there is no destructor body generated.*/
SpeedController::~SpeedController() = default;

/* Real-Time Model get method */
RT_MODEL_SpeedController_T * SpeedController::getRTM()
{
  return (&SpeedController_M);
}
