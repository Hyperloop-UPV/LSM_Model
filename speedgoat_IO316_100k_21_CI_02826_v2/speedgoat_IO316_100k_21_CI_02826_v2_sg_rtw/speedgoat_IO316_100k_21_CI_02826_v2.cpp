/*
 * speedgoat_IO316_100k_21_CI_02826_v2.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "speedgoat_IO316_100k_21_CI_02826_v2".
 *
 * Model version              : 1.0
 * Simulink Coder version : 25.2 (R2025b) 28-Jul-2025
 * C++ source code generated on : Sat May 30 18:54:32 2026
 *
 * Target selection: speedgoat.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "speedgoat_IO316_100k_21_CI_02826_v2.h"
#include "speedgoat_IO316_100k_21_CI_02826_v2_private.h"
#include "speedgoat_IO316_100k_21_CI_02826_v2_cal.h"
#include "crl_mutex.hpp"
#include "rtwtypes.h"
#include <cstring>

extern "C"
{

#include "rt_nonfinite.h"

}

/* Block signals (default storage) */
B_speedgoat_IO316_100k_21_CI_02826_v2_T speedgoat_IO316_100k_21_CI_02826_v2_B;

/* Block states (default storage) */
DW_speedgoat_IO316_100k_21_CI_02826_v2_T speedgoat_IO316_100k_21_CI_02826_v2_DW;

/* Real-time model */
RT_MODEL_speedgoat_IO316_100k_21_CI_02826_v2_T
  speedgoat_IO316_100k_21_CI_02826_v2_M_ =
  RT_MODEL_speedgoat_IO316_100k_21_CI_02826_v2_T();
RT_MODEL_speedgoat_IO316_100k_21_CI_02826_v2_T *const
  speedgoat_IO316_100k_21_CI_02826_v2_M =
  &speedgoat_IO316_100k_21_CI_02826_v2_M_;
void S3_InterruptSetup1_callback(void)
{
  // 2.  Call the framework to get the msg receive coid to use in the pulse send in the ISR
  S3_InterruptSetup1_D.coid = slrealtime::taskConnectionID( 2 );
  IO316_100k_start_public( S3_InterruptSetup1_D.context, 0 );
}

const struct sigevent *S3_InterruptSetup1_ISR(void *data, int id)
{
  // For the real interrupt, call the boardISR here
  bool needService = IO316_100k_isr_public( S3_InterruptSetup1_D.context );
  if (needService ) {
    S3_InterruptSetup1_D.count++;

    // Call the INIT macro again to send the current count.
    SIGEV_PULSE_INT_INIT( &S3_InterruptSetup1_D.sig_pulse,
                         S3_InterruptSetup1_D.coid,
                         S3_InterruptSetup1_D.pri,
                         _PULSE_CODE_MINAVAIL,
                         S3_InterruptSetup1_D.count );
    return &S3_InterruptSetup1_D.sig_pulse;
  }

  // return a sigevent none if the board didn't interrupt.
  return &S3_InterruptSetup1_D.sig_none;
}

// SimulinkRealTime Target Async Interrupt Block '<S3>/Interrupt Setup 1'
// Same function for interrupt or polling mode.
void S3_InterruptSetup1_fc(void)
{
  {
    /* Reset subsysRan breadcrumbs */
    srClearBC
      (speedgoat_IO316_100k_21_CI_02826_v2_DW.FunctionCallSubsystem_SubsysRan);

    /* S-Function (slhwinterrupt): '<S3>/Interrupt Setup 1' */

    /* Output and update for function-call system: '<S3>/Function-Call Subsystem' */
    rtw_slrealtime_mutex_lock
      (speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.semIdForTask2);
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTick2 =
      speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.rtmClockTickBuf2;
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTickH2 =
      speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.rtmBufClockTickBufH2;
    rtw_slrealtime_mutex_unlock
      (speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.semIdForTask2);
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.t[2] =
      speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTick2 *
      speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.stepSize2 +
      speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTickH2 *
      speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.stepSize2 * 4294967296.0;

    /* UnitDelay: '<S8>/Output' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Output_g =
      speedgoat_IO316_100k_21_CI_02826_v2_DW.Output_DSTATE_o;

    /* Sum: '<S9>/FixPt Sum1' incorporates:
     *  Constant: '<S9>/FixPt Constant'
     */
    speedgoat_IO316_100k_21_CI_02826_v2_B.FixPtSum1_i =
      speedgoat_IO316_100k_21_CI_02826_v2_B.Output_g +
      speedgoat_IO316_100k_21_CI__cal->FixPtConstant_Value;

    /* Switch: '<S10>/FixPt Switch' */
    if (speedgoat_IO316_100k_21_CI_02826_v2_B.FixPtSum1_i >
        speedgoat_IO316_100k_21_CI__cal->WrapToZero_Threshold) {
      /* Switch: '<S10>/FixPt Switch' incorporates:
       *  Constant: '<S10>/Constant'
       */
      speedgoat_IO316_100k_21_CI_02826_v2_B.FixPtSwitch_f =
        speedgoat_IO316_100k_21_CI__cal->Constant_Value_b;
    } else {
      /* Switch: '<S10>/FixPt Switch' */
      speedgoat_IO316_100k_21_CI_02826_v2_B.FixPtSwitch_f =
        speedgoat_IO316_100k_21_CI_02826_v2_B.FixPtSum1_i;
    }

    /* End of Switch: '<S10>/FixPt Switch' */

    /* S-Function (sg_fpga_inta_sf_a1): '<S7>/CoS Interrupt' */

    /* Level2 S-Function Block: '<S7>/CoS Interrupt' (sg_fpga_inta_sf_a1) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[0];
      sfcnOutputs(rts,2);
    }

    /* Update for UnitDelay: '<S8>/Output' */
    speedgoat_IO316_100k_21_CI_02826_v2_DW.Output_DSTATE_o =
      speedgoat_IO316_100k_21_CI_02826_v2_B.FixPtSwitch_f;
    speedgoat_IO316_100k_21_CI_02826_v2_DW.FunctionCallSubsystem_SubsysRan = 4;

    /* End of Outputs for S-Function (slhwinterrupt): '<S3>/Interrupt Setup 1' */
  }
}

/* Model step function for TID0 */
void speedgoat_IO316_100k_21_CI_02826_v2_step0(void) /* Sample time: [0.001s, 0.0s] */
{
  int32_T i;
  int32_T i_0;

  {
    /* user code (Output function Header for TID0) */
    {
      static char msg[500];
    }

    /* RateTransition: '<S6>/Rate Transition1' */
    rtw_slrealtime_mutex_lock
      (speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_d0_SEMAPHORE);
    speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_RDBuf =
      speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_LstBufWR;
    rtw_slrealtime_mutex_unlock
      (speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_d0_SEMAPHORE);
    i = speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_RDBuf * 20;
    for (i_0 = 0; i_0 < 20; i_0++) {
      /* RateTransition: '<S6>/Rate Transition1' */
      speedgoat_IO316_100k_21_CI_02826_v2_B.SPI_Master_Data_CH1[i_0] =
        speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_Buf[i_0 + i];
    }

    /* S-Function (sg_fpga_cap_sf_1): '<S1>/PWM Capture' */

    /* Level2 S-Function Block: '<S1>/PWM Capture' (sg_fpga_cap_sf_1) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[1];
      sfcnOutputs(rts,0);
    }

    /* S-Function (sg_fpga_di_sf_a2): '<S2>/Digital input' */

    /* Level2 S-Function Block: '<S2>/Digital input' (sg_fpga_di_sf_a2) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[2];
      sfcnOutputs(rts,0);
    }

    for (i = 0; i < 5; i++) {
      /* Bias: '<S2>/Offset' */
      speedgoat_IO316_100k_21_CI_02826_v2_B.IO316100kDigitalInput[i] =
        speedgoat_IO316_100k_21_CI_02826_v2_B.Digitalinput[i] +
        speedgoat_IO316_100k_21_CI__cal->Offset_Bias[i];
    }

    /* DiscretePulseGenerator: '<S2>/Pulse Gen DIO' */
    i = speedgoat_IO316_100k_21_CI_02826_v2_DW.clockTickCounter[0];

    /* DiscretePulseGenerator: '<S2>/Pulse Gen DIO' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.PulseGenDIO[0] = (i <
      speedgoat_IO316_100k_21_CI__cal->PulseGenDIO_Duty) && (i >= 0) ?
      speedgoat_IO316_100k_21_CI__cal->PulseGenDIO_Amp : 0.0;

    /* DiscretePulseGenerator: '<S2>/Pulse Gen DIO' */
    if (i >= speedgoat_IO316_100k_21_CI__cal->PulseGenDIO_Period - 1.0) {
      i = 0;
    } else {
      i++;
    }

    speedgoat_IO316_100k_21_CI_02826_v2_DW.clockTickCounter[0] = i;
    i = speedgoat_IO316_100k_21_CI_02826_v2_DW.clockTickCounter[1];

    /* DiscretePulseGenerator: '<S2>/Pulse Gen DIO' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.PulseGenDIO[1] = (i <
      speedgoat_IO316_100k_21_CI__cal->PulseGenDIO_Duty) && (i >= 0) ?
      speedgoat_IO316_100k_21_CI__cal->PulseGenDIO_Amp : 0.0;

    /* DiscretePulseGenerator: '<S2>/Pulse Gen DIO' */
    if (i >= speedgoat_IO316_100k_21_CI__cal->PulseGenDIO_Period - 1.0) {
      i = 0;
    } else {
      i++;
    }

    speedgoat_IO316_100k_21_CI_02826_v2_DW.clockTickCounter[1] = i;
    i = speedgoat_IO316_100k_21_CI_02826_v2_DW.clockTickCounter[2];

    /* DiscretePulseGenerator: '<S2>/Pulse Gen DIO' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.PulseGenDIO[2] = (i <
      speedgoat_IO316_100k_21_CI__cal->PulseGenDIO_Duty) && (i >= 0) ?
      speedgoat_IO316_100k_21_CI__cal->PulseGenDIO_Amp : 0.0;

    /* DiscretePulseGenerator: '<S2>/Pulse Gen DIO' */
    if (i >= speedgoat_IO316_100k_21_CI__cal->PulseGenDIO_Period - 1.0) {
      i = 0;
    } else {
      i++;
    }

    speedgoat_IO316_100k_21_CI_02826_v2_DW.clockTickCounter[2] = i;

    /* S-Function (sg_fpga_do_sf_a2): '<S2>/Digital output' */

    /* Level2 S-Function Block: '<S2>/Digital output' (sg_fpga_do_sf_a2) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[3];
      sfcnOutputs(rts,0);
    }

    /* RateTransition: '<S3>/Rate Transition' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.IO3xx_Interrupt =
      speedgoat_IO316_100k_21_CI_02826_v2_B.Output_g;

    /* Constant: '<S4>/Aon' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Aon =
      speedgoat_IO316_100k_21_CI__cal->Aon_Value;

    /* Constant: '<S4>/Aoff' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Aoff =
      speedgoat_IO316_100k_21_CI__cal->Aoff_Value;

    /* Constant: '<S4>/Bon' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Bon =
      speedgoat_IO316_100k_21_CI__cal->Bon_Value;

    /* Constant: '<S4>/Boff' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Boff =
      speedgoat_IO316_100k_21_CI__cal->Boff_Value;

    /* S-Function (sg_fpga_pwm_sf_5): '<S4>/PWM generation' */

    /* Level2 S-Function Block: '<S4>/PWM generation' (sg_fpga_pwm_sf_5) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[4];
      sfcnOutputs(rts,0);
    }

    /* Constant: '<S5>/Constant' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Constant =
      speedgoat_IO316_100k_21_CI__cal->Constant_Value;

    /* S-Function (sg_fpga_qae_sf_3): '<S5>/QAE' */

    /* Level2 S-Function Block: '<S5>/QAE' (sg_fpga_qae_sf_3) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[5];
      sfcnOutputs(rts,0);
    }

    /* user code (Output function Trailer for TID0) */
    {
    }
  }

  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTick0)) {
    ++speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTickH0;
  }

  speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.t[0] =
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTick0 *
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.stepSize0 +
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTickH0 *
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.stepSize0 * 4294967296.0;
  rtw_slrealtime_mutex_lock
    (speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.semIdForTask2);
  speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.rtmClockTickBuf2 =
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTick0;
  speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.rtmBufClockTickBufH2 =
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTickH0;
  rtw_slrealtime_mutex_unlock
    (speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.semIdForTask2);
}

/* Model step function for TID1 */
void speedgoat_IO316_100k_21_CI_02826_v2_step1(void) /* Sample time: [0.007s, 0.0s] */
{
  int32_T i;
  int8_T wrBufIdx;

  /* UnitDelay: '<S11>/Output' */
  speedgoat_IO316_100k_21_CI_02826_v2_B.Output =
    speedgoat_IO316_100k_21_CI_02826_v2_DW.Output_DSTATE;

  /* DataTypeConversion: '<S6>/Data Type Conversion' */
  speedgoat_IO316_100k_21_CI_02826_v2_B.DataTypeConversion =
    speedgoat_IO316_100k_21_CI_02826_v2_B.Output;

  /* Sum: '<S13>/FixPt Sum1' incorporates:
   *  Constant: '<S13>/FixPt Constant'
   */
  speedgoat_IO316_100k_21_CI_02826_v2_B.FixPtSum1 =
    speedgoat_IO316_100k_21_CI_02826_v2_B.Output +
    speedgoat_IO316_100k_21_CI__cal->FixPtConstant_Value_e;

  /* Switch: '<S14>/FixPt Switch' */
  if (speedgoat_IO316_100k_21_CI_02826_v2_B.FixPtSum1 >
      speedgoat_IO316_100k_21_CI__cal->WrapToZero_Threshold_i) {
    /* Switch: '<S14>/FixPt Switch' incorporates:
     *  Constant: '<S14>/Constant'
     */
    speedgoat_IO316_100k_21_CI_02826_v2_B.FixPtSwitch =
      speedgoat_IO316_100k_21_CI__cal->Constant_Value_h;
  } else {
    /* Switch: '<S14>/FixPt Switch' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.FixPtSwitch =
      speedgoat_IO316_100k_21_CI_02826_v2_B.FixPtSum1;
  }

  /* End of Switch: '<S14>/FixPt Switch' */

  /* Outputs for Atomic SubSystem: '<S12>/Unit Delay Enabled' */
  for (i = 0; i < 20; i++) {
    /* Sum: '<S6>/Add16' incorporates:
     *  Constant: '<S6>/Constant16'
     */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Add16[i] =
      speedgoat_IO316_100k_21_CI__cal->Constant16_Value[i] +
      speedgoat_IO316_100k_21_CI_02826_v2_B.DataTypeConversion;

    /* Delay: '<S15>/Enabled Delay' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.EnabledDelay[i] =
      speedgoat_IO316_100k_21_CI_02826_v2_DW.EnabledDelay_DSTATE[i];
  }

  /* End of Outputs for SubSystem: '<S12>/Unit Delay Enabled' */

  /* RateTransition: '<S6>/Rate Transition1' */
  rtw_slrealtime_mutex_lock
    (speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_RDBuf)
  {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_d0_SEMAPHORE);
  for (i = 0; i < 20; i++) {
    speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_Buf[i + wrBufIdx * 20]
      = speedgoat_IO316_100k_21_CI_02826_v2_B.EnabledDelay[i];
  }

  speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S6>/Rate Transition1' */

  /* S-Function (sg_fpga_spi_multislave_sf_2): '<S6>/SPI Master' */

  /* Level2 S-Function Block: '<S6>/SPI Master' (sg_fpga_spi_multislave_sf_2) */
  {
    SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[6];
    sfcnOutputs(rts,1);
  }

  /* Update for UnitDelay: '<S11>/Output' */
  speedgoat_IO316_100k_21_CI_02826_v2_DW.Output_DSTATE =
    speedgoat_IO316_100k_21_CI_02826_v2_B.FixPtSwitch;

  /* Update for Atomic SubSystem: '<S12>/Unit Delay Enabled' */
  /* Update for Delay: '<S15>/Enabled Delay' */
  if (speedgoat_IO316_100k_21_CI_02826_v2_B.M1_S1_rx_data_valid) {
    std::memcpy(&speedgoat_IO316_100k_21_CI_02826_v2_DW.EnabledDelay_DSTATE[0],
                &speedgoat_IO316_100k_21_CI_02826_v2_B.Rx_Data_M_S1_direct[0],
                20U * sizeof(uint32_T));
  }

  /* End of Update for Delay: '<S15>/Enabled Delay' */
  /* End of Update for SubSystem: '<S12>/Unit Delay Enabled' */

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTick1)) {
    ++speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTickH1;
  }

  speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.t[1] =
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTick1 *
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.stepSize1 +
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTickH1 *
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.stepSize1 * 4294967296.0;
}

/* Model initialize function */
void speedgoat_IO316_100k_21_CI_02826_v2_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Set task counter limit used by the static main program */
  (speedgoat_IO316_100k_21_CI_02826_v2_M)->Timing.TaskCounters.cLimit[0] = 1;
  (speedgoat_IO316_100k_21_CI_02826_v2_M)->Timing.TaskCounters.cLimit[1] = 7;
  rtsiSetSolverName(&speedgoat_IO316_100k_21_CI_02826_v2_M->solverInfo,
                    "FixedStepDiscrete");
  speedgoat_IO316_100k_21_CI_02826_v2_M->solverInfoPtr =
    (&speedgoat_IO316_100k_21_CI_02826_v2_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap =
      speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.sampleTimeTaskIDPtr =
      (&mdlTsMap[0]);
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.sampleTimes =
      (&speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.sampleTimesArray[0]);
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.offsetTimes =
      (&speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.offsetTimesArray[0]);

    /* task periods */
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.sampleTimes[0] = (0.001);
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.sampleTimes[1] = (0.007);

    /* task offsets */
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.offsetTimes[0] = (0.0);
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(speedgoat_IO316_100k_21_CI_02826_v2_M,
             &speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits =
      speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.perTaskSampleHitsArray;
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.perTaskSampleHits =
      (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(speedgoat_IO316_100k_21_CI_02826_v2_M, -1);
  speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.stepSize0 = 0.001;
  speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.stepSize1 = 0.007;
  speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.stepSize2 = 0.001;
  speedgoat_IO316_100k_21_CI_02826_v2_M->solverInfoPtr =
    (&speedgoat_IO316_100k_21_CI_02826_v2_M->solverInfo);
  speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&speedgoat_IO316_100k_21_CI_02826_v2_M->solverInfo, 0.001);
  rtsiSetSolverMode(&speedgoat_IO316_100k_21_CI_02826_v2_M->solverInfo,
                    SOLVER_MODE_MULTITASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&speedgoat_IO316_100k_21_CI_02826_v2_B)),
                     0,
                     sizeof(B_speedgoat_IO316_100k_21_CI_02826_v2_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&speedgoat_IO316_100k_21_CI_02826_v2_DW),
                     0,
                     sizeof(DW_speedgoat_IO316_100k_21_CI_02826_v2_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo =
      &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.sfcnInfo;
    speedgoat_IO316_100k_21_CI_02826_v2_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus
      (speedgoat_IO316_100k_21_CI_02826_v2_M)));
    speedgoat_IO316_100k_21_CI_02826_v2_M->Sizes.numSampTimes = (3);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &speedgoat_IO316_100k_21_CI_02826_v2_M->Sizes.numSampTimes);
    speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.taskTimePtrs[0] =
      (&rtmGetTPtr(speedgoat_IO316_100k_21_CI_02826_v2_M)[0]);
    speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.taskTimePtrs[1] =
      (&rtmGetTPtr(speedgoat_IO316_100k_21_CI_02826_v2_M)[1]);
    speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.taskTimePtrs[2] =
      (&rtmGetTPtr(speedgoat_IO316_100k_21_CI_02826_v2_M)[2]);
    rtssSetTPtrPtr(sfcnInfo,
                   speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart
                     (speedgoat_IO316_100k_21_CI_02826_v2_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal
                     (speedgoat_IO316_100k_21_CI_02826_v2_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (speedgoat_IO316_100k_21_CI_02826_v2_M));
    rtssSetStepSizePtr(sfcnInfo,
                       &speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (speedgoat_IO316_100k_21_CI_02826_v2_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_IO316_100k_21_CI_02826_v2_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &speedgoat_IO316_100k_21_CI_02826_v2_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &speedgoat_IO316_100k_21_CI_02826_v2_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &speedgoat_IO316_100k_21_CI_02826_v2_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->solverInfoPtr);
  }

  speedgoat_IO316_100k_21_CI_02826_v2_M->Sizes.numSFcns = (7);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.childSFunctions
                        [0]), 0,
                       7*sizeof(SimStruct));
    speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions =
      (&speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.childSFunctionPtrs
       [0]);

    {
      int_T i;
      for (i = 0; i < 7; i++) {
        speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[i] =
          (&speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.childSFunctions
           [i]);
      }
    }

    /* Level2 S-Function Block: speedgoat_IO316_100k_21_CI_02826_v2/<S7>/CoS Interrupt (sg_fpga_inta_sf_a1) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.inputOutputPortInfo2
        [0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_IO316_100k_21_CI_02826_v2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.statesInfo2
                         [0]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.periodicStatesInfo
          [0]);
      }

      /* path info */
      ssSetModelName(rts, "CoS Interrupt");
      ssSetPath(rts,
                "speedgoat_IO316_100k_21_CI_02826_v2/INTA/Function-Call Subsystem/CoS Interrupt");
      ssSetRTModel(rts,speedgoat_IO316_100k_21_CI_02826_v2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->CoSInterrupt_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->CoSInterrupt_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->CoSInterrupt_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->CoSInterrupt_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->CoSInterrupt_P5_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.CoSInterrupt_RWORK[0]);
      ssSetIWork(rts, (int_T *)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.CoSInterrupt_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.CoSInterrupt_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 3);

        /* RWORK */
        ssSetDWorkWidthAsInt(rts, 0, 16);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_IO316_100k_21_CI_02826_v2_DW.CoSInterrupt_RWORK[0]);

        /* IWORK */
        ssSetDWorkWidthAsInt(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_IO316_100k_21_CI_02826_v2_DW.CoSInterrupt_IWORK);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 2, 1);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2,
                   &speedgoat_IO316_100k_21_CI_02826_v2_DW.CoSInterrupt_PWORK);
      }

      /* registration */
      sg_fpga_inta_sf_a1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, -1.0);
      ssSetOffsetTime(rts, 0, -2.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_IO316_100k_21_CI_02826_v2/<S1>/PWM Capture (sg_fpga_cap_sf_1) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.inputOutputPortInfo2
        [1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_IO316_100k_21_CI_02826_v2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.statesInfo2
                         [1]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.periodicStatesInfo
          [1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn1.outputPortInfo
          [0]);
        ssSetPortInfoForOutputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn1.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn1.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 2);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            speedgoat_IO316_100k_21_CI_02826_v2_B.PWM_Capture_High));
        }
      }

      /* path info */
      ssSetModelName(rts, "PWM Capture");
      ssSetPath(rts, "speedgoat_IO316_100k_21_CI_02826_v2/CAP/PWM Capture");
      ssSetRTModel(rts,speedgoat_IO316_100k_21_CI_02826_v2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMCapture_P15_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.PWMCapture_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_IO316_100k_21_CI_02826_v2_DW.PWMCapture_PWORK[0]);
      }

      /* registration */
      sg_fpga_cap_sf_1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_IO316_100k_21_CI_02826_v2/<S2>/Digital input (sg_fpga_di_sf_a2) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.inputOutputPortInfo2
        [2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_IO316_100k_21_CI_02826_v2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.statesInfo2
                         [2]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.periodicStatesInfo
          [2]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn2.outputPortInfo
          [0]);
        ssSetPortInfoForOutputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn2.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn2.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 5);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            speedgoat_IO316_100k_21_CI_02826_v2_B.Digitalinput));
        }
      }

      /* path info */
      ssSetModelName(rts, "Digital input");
      ssSetPath(rts, "speedgoat_IO316_100k_21_CI_02826_v2/DIO/Digital input");
      ssSetRTModel(rts,speedgoat_IO316_100k_21_CI_02826_v2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->Digitalinput_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->Digitalinput_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->Digitalinput_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->Digitalinput_P4_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.Digitalinput_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_IO316_100k_21_CI_02826_v2_DW.Digitalinput_PWORK[0]);
      }

      /* registration */
      sg_fpga_di_sf_a2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: speedgoat_IO316_100k_21_CI_02826_v2/<S2>/Digital output (sg_fpga_do_sf_a2) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.inputOutputPortInfo2
        [3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_IO316_100k_21_CI_02826_v2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.statesInfo2
                         [3]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.periodicStatesInfo
          [3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn3.inputPortInfo
          [0]);
        ssSetPortInfoForInputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn3.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn3.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               speedgoat_IO316_100k_21_CI_02826_v2_B.PulseGenDIO);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 3);
        }
      }

      /* path info */
      ssSetModelName(rts, "Digital output");
      ssSetPath(rts, "speedgoat_IO316_100k_21_CI_02826_v2/DIO/Digital output");
      ssSetRTModel(rts,speedgoat_IO316_100k_21_CI_02826_v2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->Digitaloutput_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->Digitaloutput_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->Digitaloutput_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->Digitaloutput_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->Digitaloutput_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->Digitaloutput_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.Digitaloutput_IWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.Digitaloutput_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 2);

        /* IWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_IO316_100k_21_CI_02826_v2_DW.Digitaloutput_IWORK);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 1, 2);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_IO316_100k_21_CI_02826_v2_DW.Digitaloutput_PWORK[0]);
      }

      /* registration */
      sg_fpga_do_sf_a2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: speedgoat_IO316_100k_21_CI_02826_v2/<S4>/PWM generation (sg_fpga_pwm_sf_5) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.inputOutputPortInfo2
        [4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_IO316_100k_21_CI_02826_v2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.statesInfo2
                         [4]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.periodicStatesInfo
          [4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 4);
        ssSetPortInfoForInputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn4.inputPortInfo
          [0]);
        ssSetPortInfoForInputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn4.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn4.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &speedgoat_IO316_100k_21_CI_02826_v2_B.Aon);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1,
                               &speedgoat_IO316_100k_21_CI_02826_v2_B.Aoff);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidthAsInt(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2,
                               &speedgoat_IO316_100k_21_CI_02826_v2_B.Bon);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidthAsInt(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3,
                               &speedgoat_IO316_100k_21_CI_02826_v2_B.Boff);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidthAsInt(rts, 3, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "PWM generation");
      ssSetPath(rts, "speedgoat_IO316_100k_21_CI_02826_v2/PWM/PWM generation");
      ssSetRTModel(rts,speedgoat_IO316_100k_21_CI_02826_v2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 35);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P31_Size);
        ssSetSFcnParam(rts, 31, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P32_Size);
        ssSetSFcnParam(rts, 32, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P33_Size);
        ssSetSFcnParam(rts, 33, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P34_Size);
        ssSetSFcnParam(rts, 34, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->PWMgeneration_P35_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.PWMgeneration_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.PWMgeneration_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 2);

        /* IWORK */
        ssSetDWorkWidthAsInt(rts, 0, 2);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_IO316_100k_21_CI_02826_v2_DW.PWMgeneration_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 1, 4);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_IO316_100k_21_CI_02826_v2_DW.PWMgeneration_PWORK[0]);
      }

      /* registration */
      sg_fpga_pwm_sf_5(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
    }

    /* Level2 S-Function Block: speedgoat_IO316_100k_21_CI_02826_v2/<S5>/QAE (sg_fpga_qae_sf_3) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[5];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn5.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn5.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn5.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.blkInfo2
                         [5]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.inputOutputPortInfo2
        [5]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_IO316_100k_21_CI_02826_v2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods2
                           [5]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods3
                           [5]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods4
                           [5]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.statesInfo2
                         [5]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.periodicStatesInfo
          [5]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn5.inputPortInfo
          [0]);
        ssSetPortInfoForInputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn5.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn5.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn5.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               &speedgoat_IO316_100k_21_CI_02826_v2_B.Constant);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "QAE");
      ssSetPath(rts, "speedgoat_IO316_100k_21_CI_02826_v2/QAE/QAE");
      ssSetRTModel(rts,speedgoat_IO316_100k_21_CI_02826_v2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn5.params;
        ssSetSFcnParamsCount(rts, 17);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->QAE_P17_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.QAE_RWORK);
      ssSetPWork(rts, (void **)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.QAE_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn5.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn5.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 2);

        /* RWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &speedgoat_IO316_100k_21_CI_02826_v2_DW.QAE_RWORK);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 1, 6);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1, &speedgoat_IO316_100k_21_CI_02826_v2_DW.QAE_PWORK[0]);
      }

      /* registration */
      sg_fpga_qae_sf_3(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: speedgoat_IO316_100k_21_CI_02826_v2/<S6>/SPI Master (sg_fpga_spi_multislave_sf_2) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[6];

      /* timing info */
      time_T *sfcnPeriod =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.sfcnPeriod;
      time_T *sfcnOffset =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.sfcnOffset;
      int_T *sfcnTsMap =
        speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.blkInfo2
                         [6]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.inputOutputPortInfo2
        [6]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, speedgoat_IO316_100k_21_CI_02826_v2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods2
                           [6]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods3
                           [6]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.methods4
                           [6]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.statesInfo2
                         [6]);
        ssSetPeriodicStatesInfo(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.periodicStatesInfo
          [6]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.inputPortInfo
          [0]);
        ssSetPortInfoForInputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.inputPortInfo
          [0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.inputPortUnits
          [0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.inputPortCoSimAttribute
          [0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0,
                               speedgoat_IO316_100k_21_CI_02826_v2_B.Add16);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidthAsInt(rts, 0, 20);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.outputPortInfo
          [0]);
        ssSetPortInfoForOutputs(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.outputPortInfo
          [0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.outputPortUnits
          [0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 20);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            speedgoat_IO316_100k_21_CI_02826_v2_B.Rx_Data_M_S1_direct));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidthAsInt(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((boolean_T *)
            &speedgoat_IO316_100k_21_CI_02826_v2_B.M1_S1_rx_data_valid));
        }
      }

      /* path info */
      ssSetModelName(rts, "SPI Master");
      ssSetPath(rts, "speedgoat_IO316_100k_21_CI_02826_v2/SPI/SPI Master");
      ssSetRTModel(rts,speedgoat_IO316_100k_21_CI_02826_v2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.params;
        ssSetSFcnParamsCount(rts, 25);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       speedgoat_IO316_100k_21_CI__cal->SPIMaster_P25_Size);
      }

      /* work vectors */
      ssSetRWork(rts, (real_T *)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.SPIMaster_RWORK);
      ssSetIWork(rts, (int_T *)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.SPIMaster_IWORK[0]);
      ssSetPWork(rts, (void **)
                 &speedgoat_IO316_100k_21_CI_02826_v2_DW.SPIMaster_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &speedgoat_IO316_100k_21_CI_02826_v2_M->NonInlinedSFcns.Sfcn6.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 3);

        /* RWORK */
        ssSetDWorkWidthAsInt(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_DOUBLE);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &speedgoat_IO316_100k_21_CI_02826_v2_DW.SPIMaster_RWORK);

        /* IWORK */
        ssSetDWorkWidthAsInt(rts, 1, 3);
        ssSetDWorkDataType(rts, 1,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &speedgoat_IO316_100k_21_CI_02826_v2_DW.SPIMaster_IWORK[0]);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 2, 8);
        ssSetDWorkDataType(rts, 2,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 2, 0);
        ssSetDWork(rts, 2,
                   &speedgoat_IO316_100k_21_CI_02826_v2_DW.SPIMaster_PWORK[0]);
      }

      /* registration */
      sg_fpga_spi_multislave_sf_2(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.007);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  {
    int32_T i;
    for (i = 0; i < 20; i++) {
      /* Start for RateTransition: '<S6>/Rate Transition1' */
      speedgoat_IO316_100k_21_CI_02826_v2_B.SPI_Master_Data_CH1[i] =
        speedgoat_IO316_100k_21_CI__cal->RateTransition1_InitialConditio;
    }

    /* Start for RateTransition: '<S6>/Rate Transition1' */
    rtw_slrealtime_mutex_init
      (&speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_d0_SEMAPHORE);

    /* Start for S-Function (sg_fpga_cap_sf_1): '<S1>/PWM Capture' */
    /* Level2 S-Function Block: '<S1>/PWM Capture' (sg_fpga_cap_sf_1) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_fpga_di_sf_a2): '<S2>/Digital input' */
    /* Level2 S-Function Block: '<S2>/Digital input' (sg_fpga_di_sf_a2) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[2];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_fpga_do_sf_a2): '<S2>/Digital output' */
    /* Level2 S-Function Block: '<S2>/Digital output' (sg_fpga_do_sf_a2) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[3];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (slhwinterrupt): '<S3>/Interrupt Setup 1' incorporates:
     *  SubSystem: '<S3>/Function-Call Subsystem'
     */
    /* Start for function-call system: '<S3>/Function-Call Subsystem' */

    /* Start for S-Function (sg_fpga_inta_sf_a1): '<S7>/CoS Interrupt' */
    /* Level2 S-Function Block: '<S7>/CoS Interrupt' (sg_fpga_inta_sf_a1) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    // Initialize the sigevent structs.  One for no wakeup and the other
    // when the board did interrupt.
    SIGEV_NONE_INIT( &S3_InterruptSetup1_D.sig_none );

    // S3_InterruptSetup1_D.sig_pulse is initialized each time the interrupt
    // occurs so we can send the incrementing count.

    // With a defined PCI map function, use the IRQ from QNX.
    // Need to test for error return here.  Since the hook function
    // can be in C, an error won't throw, but will return a negative number.
    // *_D.context gets a pointer to a context, which would be pci addresses
    // mapped to virtual memory for a hardware board.
    // For interrupt mode with hardware, IRQ is meaningful and .context
    // will contain mapped addresses to talk to the board.
    // For polling hardware, IRQ is not used and .context is still mapped
    // addresses to talk to the board.
    // For polling XCP or some other out-of-model condition, then IRQ
    // is also ignored and .context is a pointer to context for that other
    // condition we want to find.  If this 'software device' doesn't
    // need any context, then just specify mapper as "none".

    // We call the map function if it exists for all 4 permutations.
    // Int or polling, function or model.
    S3_InterruptSetup1_D.IRQ = IO316_100k_map_public
      ( &S3_InterruptSetup1_D.context, 16776961 );
    if (S3_InterruptSetup1_D.IRQ < 0 ) {
      sprintf( S3_InterruptSetup1_errmsg,
              "Fatal error when configuring the interrupt or polling source in $<Name>\n"
              );
      rtmSetErrorStatus(speedgoat_IO316_100k_21_CI_02826_v2_M,
                        S3_InterruptSetup1_errmsg);
    }

    // Priority is ignored in the sigevent because the connection is set up with priority
    // inheritance turned off.  But since we need to send it to codegen
    // adding it to the sigevent incurs no extra overhead.
    S3_InterruptSetup1_D.pri = 254;

    // TaskID is 2 for S3_InterruptSetup1_fc
    {
      // 1.  Attach the ISR to the IRQ we got from the map function
      uint32_T ret = InterruptAttach_r( S3_InterruptSetup1_D.IRQ,
        S3_InterruptSetup1_ISR,
        nullptr,
        0,
        0);
      if (ret >= 0 )                // ret is the interrupt ID, needed by detach
        S3_InterruptSetup1_D.intrID = ret;
      else                            // ret is the negative of the error number
      {
        sprintf( S3_InterruptSetup1_errmsg,
                "Error attaching interrupt for block <S3>/Interrupt Setup 1: %s\n",
                strerror( -1*ret ) );
        rtmSetErrorStatus(speedgoat_IO316_100k_21_CI_02826_v2_M,
                          S3_InterruptSetup1_errmsg);
      }

      slrealtime::SetInterruptMode( 2 );
      slrealtime::StartCallbackService::registerCB( std::bind
        ( S3_InterruptSetup1_callback ), -100 );
    }

    /* End of Start for S-Function (slhwinterrupt): '<S3>/Interrupt Setup 1' */

    /* Start for Constant: '<S4>/Aon' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Aon =
      speedgoat_IO316_100k_21_CI__cal->Aon_Value;

    /* Start for Constant: '<S4>/Aoff' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Aoff =
      speedgoat_IO316_100k_21_CI__cal->Aoff_Value;

    /* Start for Constant: '<S4>/Bon' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Bon =
      speedgoat_IO316_100k_21_CI__cal->Bon_Value;

    /* Start for Constant: '<S4>/Boff' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Boff =
      speedgoat_IO316_100k_21_CI__cal->Boff_Value;

    /* Start for S-Function (sg_fpga_pwm_sf_5): '<S4>/PWM generation' */
    /* Level2 S-Function Block: '<S4>/PWM generation' (sg_fpga_pwm_sf_5) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Constant: '<S5>/Constant' */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Constant =
      speedgoat_IO316_100k_21_CI__cal->Constant_Value;

    /* Start for S-Function (sg_fpga_qae_sf_3): '<S5>/QAE' */
    /* Level2 S-Function Block: '<S5>/QAE' (sg_fpga_qae_sf_3) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[5];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_fpga_spi_multislave_sf_2): '<S6>/SPI Master' */
    /* Level2 S-Function Block: '<S6>/SPI Master' (sg_fpga_spi_multislave_sf_2) */
    {
      SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[6];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }
  }

  {
    int32_T i;
    rtw_slrealtime_mutex_init
      (&speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.semIdForTask2);

    /* InitializeConditions for RateTransition: '<S6>/Rate Transition1' */
    for (i = 0; i < 20; i++) {
      speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_Buf[i] =
        speedgoat_IO316_100k_21_CI__cal->RateTransition1_InitialConditio;
    }

    /* End of InitializeConditions for RateTransition: '<S6>/Rate Transition1' */

    /* InitializeConditions for DiscretePulseGenerator: '<S2>/Pulse Gen DIO' */
    speedgoat_IO316_100k_21_CI_02826_v2_DW.clockTickCounter[0] = 0;
    speedgoat_IO316_100k_21_CI_02826_v2_DW.clockTickCounter[1] = -5;
    speedgoat_IO316_100k_21_CI_02826_v2_DW.clockTickCounter[2] = -10;

    /* InitializeConditions for UnitDelay: '<S11>/Output' */
    speedgoat_IO316_100k_21_CI_02826_v2_DW.Output_DSTATE =
      speedgoat_IO316_100k_21_CI__cal->Output_InitialCondition_p;

    /* SystemInitialize for Atomic SubSystem: '<S12>/Unit Delay Enabled' */
    /* InitializeConditions for Delay: '<S15>/Enabled Delay' */
    for (i = 0; i < 20; i++) {
      speedgoat_IO316_100k_21_CI_02826_v2_DW.EnabledDelay_DSTATE[i] =
        speedgoat_IO316_100k_21_CI__cal->UnitDelayEnabledSynchronous6_In;
    }

    /* End of InitializeConditions for Delay: '<S15>/Enabled Delay' */
    /* End of SystemInitialize for SubSystem: '<S12>/Unit Delay Enabled' */

    /* SystemInitialize for S-Function (slhwinterrupt): '<S3>/Interrupt Setup 1' incorporates:
     *  SubSystem: '<S3>/Function-Call Subsystem'
     */
    /* System initialize for function-call system: '<S3>/Function-Call Subsystem' */
    rtw_slrealtime_mutex_lock
      (speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.semIdForTask2);
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTick2 =
      speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.rtmClockTickBuf2;
    speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.clockTickH2 =
      speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.rtmBufClockTickBufH2;
    rtw_slrealtime_mutex_unlock
      (speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.semIdForTask2);

    /* InitializeConditions for UnitDelay: '<S8>/Output' */
    speedgoat_IO316_100k_21_CI_02826_v2_DW.Output_DSTATE_o =
      speedgoat_IO316_100k_21_CI__cal->Output_InitialCondition;

    /* SystemInitialize for UnitDelay: '<S8>/Output' incorporates:
     *  Outport: '<S7>/Out1'
     */
    speedgoat_IO316_100k_21_CI_02826_v2_B.Output_g =
      speedgoat_IO316_100k_21_CI__cal->Out1_Y0;

    /* End of SystemInitialize for S-Function (slhwinterrupt): '<S3>/Interrupt Setup 1' */
  }
}

/* Model terminate function */
void speedgoat_IO316_100k_21_CI_02826_v2_terminate(void)
{
  /* user code (Terminate function Header) */
  {
    // stop the board from interrupting, changing status or doing DMA transfers.
    IO316_100k_stop_public( S3_InterruptSetup1_D.context );

    // Detach the interrupt
    uint32_T ret = InterruptDetach_r( S3_InterruptSetup1_D.intrID );
    if (ret != EOK ) {
      sprintf( S3_InterruptSetup1_errmsg,
              "Error detaching interrupt for block <S3>/Interrupt Setup 1: %s\n",
              strerror( ret ) );
      rtmSetErrorStatus(speedgoat_IO316_100k_21_CI_02826_v2_M,
                        S3_InterruptSetup1_errmsg);
    }
  }

  rtw_slrealtime_mutex_destroy
    (speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.semIdForTask2);

  /* Terminate for RateTransition: '<S6>/Rate Transition1' */
  rtw_slrealtime_mutex_destroy
    (speedgoat_IO316_100k_21_CI_02826_v2_DW.RateTransition1_d0_SEMAPHORE);

  /* Terminate for S-Function (sg_fpga_cap_sf_1): '<S1>/PWM Capture' */
  /* Level2 S-Function Block: '<S1>/PWM Capture' (sg_fpga_cap_sf_1) */
  {
    SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_di_sf_a2): '<S2>/Digital input' */
  /* Level2 S-Function Block: '<S2>/Digital input' (sg_fpga_di_sf_a2) */
  {
    SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_do_sf_a2): '<S2>/Digital output' */
  /* Level2 S-Function Block: '<S2>/Digital output' (sg_fpga_do_sf_a2) */
  {
    SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (slhwinterrupt): '<S3>/Interrupt Setup 1' incorporates:
   *  SubSystem: '<S3>/Function-Call Subsystem'
   */

  /* Termination for function-call system: '<S3>/Function-Call Subsystem' */

  /* Terminate for S-Function (sg_fpga_inta_sf_a1): '<S7>/CoS Interrupt' */
  /* Level2 S-Function Block: '<S7>/CoS Interrupt' (sg_fpga_inta_sf_a1) */
  {
    SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for S-Function (slhwinterrupt): '<S3>/Interrupt Setup 1' */

  /* Terminate for S-Function (sg_fpga_pwm_sf_5): '<S4>/PWM generation' */
  /* Level2 S-Function Block: '<S4>/PWM generation' (sg_fpga_pwm_sf_5) */
  {
    SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[4];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_qae_sf_3): '<S5>/QAE' */
  /* Level2 S-Function Block: '<S5>/QAE' (sg_fpga_qae_sf_3) */
  {
    SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[5];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_fpga_spi_multislave_sf_2): '<S6>/SPI Master' */
  /* Level2 S-Function Block: '<S6>/SPI Master' (sg_fpga_spi_multislave_sf_2) */
  {
    SimStruct *rts = speedgoat_IO316_100k_21_CI_02826_v2_M->childSfunctions[6];
    sfcnTerminate(rts);
  }

  /* user code (Terminate function Trailer) */
  {
    uintptr_t bar2Addr;
    static char msg[500];
    bar2Addr = (uintptr_t)io3xxGetAddressSgLib((int32_t)1, SG_FPGA_IO3XX_BAR2);
    if (bar2Addr == 0) {
      sprintf(msg, "%s", pSgErrorStr);
      rtmSetErrorStatus(speedgoat_IO316_100k_21_CI_02826_v2_M, msg);
      SG_PRINTF(ERROR,msg);
      return;
    }

    volatile io3xx_pull *ptrIO31x_pull;

    // Get pointer to io31x_pull
    ptrIO31x_pull = (io3xx_pull *)((uintptr_t)bar2Addr + IO3xx_PULL_BASE);

    // Disable pull resistors
    ptrIO31x_pull->enable = 0x0;       // disable
    sg_fpga_io3xxModuleIdT moduleId;
    sg_fpga_IO3xxGetModuleId(316100, &moduleId);
    char *devname = moduleId.devname;
    int32_t ErrCode;
    SG_PRINTF(INFO,
              "%s ID %d: Terminate Rear I/O Extension -21 at position %d \n",
              devname, 1, 1);
    ErrCode = IO3xx_21_terminate(devname, 1, 0U,0);

    // throw a warning if something went wrong
    // The error codes are defined in sg_fpga_xilinx_i2c.h in the FPGA-setup lib
    if (ErrCode != 0) {
      SG_PRINTF(WARNING,
                "%s ID %d: Issue with termination of I/O extension position %d. ErrorCode: %d",
                devname, 1, 1, ErrCode);
    } else {
      SG_PRINTF(INFO,
                "%s ID %d: Successfully terminated rear I/O extension at position %d.\n",
                devname, 1, 1);
    }

    freeFPGAModuleSgLib((uint32_t)1);
  }
}
