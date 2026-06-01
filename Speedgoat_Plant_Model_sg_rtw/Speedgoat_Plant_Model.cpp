/*
 * Speedgoat_Plant_Model.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Speedgoat_Plant_Model".
 *
 * Model version              : 1.12
 * Simulink Coder version : 25.2 (R2025b) 28-Jul-2025
 * C++ source code generated on : Mon Jun  1 16:45:04 2026
 *
 * Target selection: speedgoat.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Speedgoat_Plant_Model.h"
#include "Speedgoat_Plant_Model_cal.h"
#include "Speedgoat_Plant_Model_private.h"
#include <cstring>

extern "C"
{

#include "rt_nonfinite.h"

}

/* Block signals (default storage) */
B_Speedgoat_Plant_Model_T Speedgoat_Plant_Model_B;

/* Block states (default storage) */
DW_Speedgoat_Plant_Model_T Speedgoat_Plant_Model_DW;

/* Real-time model */
RT_MODEL_Speedgoat_Plant_Model_T Speedgoat_Plant_Model_M_ =
  RT_MODEL_Speedgoat_Plant_Model_T();
RT_MODEL_Speedgoat_Plant_Model_T *const Speedgoat_Plant_Model_M =
  &Speedgoat_Plant_Model_M_;

/* Model step function */
void Speedgoat_Plant_Model_step(void)
{
  {
    /* user code (Output function Header) */
    {
      static char msg[500];
    }

    /* S-Function (sg_fpga_cap_sf_1): '<Root>/PWM Capture1' */

    /* Level2 S-Function Block: '<Root>/PWM Capture1' (sg_fpga_cap_sf_1) */
    {
      SimStruct *rts = Speedgoat_Plant_Model_M->childSfunctions[0];
      sfcnOutputs(rts,0);
    }

    /* user code (Output function Trailer) */
    {
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
  if (!(++Speedgoat_Plant_Model_M->Timing.clockTick0)) {
    ++Speedgoat_Plant_Model_M->Timing.clockTickH0;
  }

  Speedgoat_Plant_Model_M->Timing.t[0] =
    Speedgoat_Plant_Model_M->Timing.clockTick0 *
    Speedgoat_Plant_Model_M->Timing.stepSize0 +
    Speedgoat_Plant_Model_M->Timing.clockTickH0 *
    Speedgoat_Plant_Model_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void Speedgoat_Plant_Model_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtsiSetSolverName(&Speedgoat_Plant_Model_M->solverInfo,"FixedStepDiscrete");
  Speedgoat_Plant_Model_M->solverInfoPtr = (&Speedgoat_Plant_Model_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = Speedgoat_Plant_Model_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    Speedgoat_Plant_Model_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    Speedgoat_Plant_Model_M->Timing.sampleTimes =
      (&Speedgoat_Plant_Model_M->Timing.sampleTimesArray[0]);
    Speedgoat_Plant_Model_M->Timing.offsetTimes =
      (&Speedgoat_Plant_Model_M->Timing.offsetTimesArray[0]);

    /* task periods */
    Speedgoat_Plant_Model_M->Timing.sampleTimes[0] = (0.0001);

    /* task offsets */
    Speedgoat_Plant_Model_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(Speedgoat_Plant_Model_M, &Speedgoat_Plant_Model_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = Speedgoat_Plant_Model_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    Speedgoat_Plant_Model_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(Speedgoat_Plant_Model_M, -1);
  Speedgoat_Plant_Model_M->Timing.stepSize0 = 0.0001;
  Speedgoat_Plant_Model_M->solverInfoPtr = (&Speedgoat_Plant_Model_M->solverInfo);
  Speedgoat_Plant_Model_M->Timing.stepSize = (0.0001);
  rtsiSetFixedStepSize(&Speedgoat_Plant_Model_M->solverInfo, 0.0001);
  rtsiSetSolverMode(&Speedgoat_Plant_Model_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&Speedgoat_Plant_Model_B)), 0,
                     sizeof(B_Speedgoat_Plant_Model_T));

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&Speedgoat_Plant_Model_DW), 0,
                     sizeof(DW_Speedgoat_Plant_Model_T));

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &Speedgoat_Plant_Model_M->NonInlinedSFcns.sfcnInfo;
    Speedgoat_Plant_Model_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(Speedgoat_Plant_Model_M)));
    Speedgoat_Plant_Model_M->Sizes.numSampTimes = (1);
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &Speedgoat_Plant_Model_M->Sizes.numSampTimes);
    Speedgoat_Plant_Model_M->NonInlinedSFcns.taskTimePtrs[0] = (&rtmGetTPtr
      (Speedgoat_Plant_Model_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,
                   Speedgoat_Plant_Model_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(Speedgoat_Plant_Model_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(Speedgoat_Plant_Model_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (Speedgoat_Plant_Model_M));
    rtssSetStepSizePtr(sfcnInfo, &Speedgoat_Plant_Model_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (Speedgoat_Plant_Model_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &Speedgoat_Plant_Model_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &Speedgoat_Plant_Model_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &Speedgoat_Plant_Model_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &Speedgoat_Plant_Model_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &Speedgoat_Plant_Model_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &Speedgoat_Plant_Model_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &Speedgoat_Plant_Model_M->solverInfoPtr);
  }

  Speedgoat_Plant_Model_M->Sizes.numSFcns = (1);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&Speedgoat_Plant_Model_M->NonInlinedSFcns.childSFunctions
                        [0]), 0,
                       1*sizeof(SimStruct));
    Speedgoat_Plant_Model_M->childSfunctions =
      (&Speedgoat_Plant_Model_M->NonInlinedSFcns.childSFunctionPtrs[0]);
    Speedgoat_Plant_Model_M->childSfunctions[0] =
      (&Speedgoat_Plant_Model_M->NonInlinedSFcns.childSFunctions[0]);

    /* Level2 S-Function Block: Speedgoat_Plant_Model/<Root>/PWM Capture1 (sg_fpga_cap_sf_1) */
    {
      SimStruct *rts = Speedgoat_Plant_Model_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        Speedgoat_Plant_Model_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        Speedgoat_Plant_Model_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap =
        Speedgoat_Plant_Model_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &Speedgoat_Plant_Model_M->
                         NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &Speedgoat_Plant_Model_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, Speedgoat_Plant_Model_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &Speedgoat_Plant_Model_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &Speedgoat_Plant_Model_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &Speedgoat_Plant_Model_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &Speedgoat_Plant_Model_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &Speedgoat_Plant_Model_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &Speedgoat_Plant_Model_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        ssSetPortInfoForOutputs(rts,
          &Speedgoat_Plant_Model_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 3);
        _ssSetPortInfo2ForOutputUnits(rts,
          &Speedgoat_Plant_Model_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &Speedgoat_Plant_Model_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidthAsInt(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real_T *)
            &Speedgoat_Plant_Model_B.PWMCapture1_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidthAsInt(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real_T *)
            &Speedgoat_Plant_Model_B.PWMCapture1_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidthAsInt(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real_T *)
            &Speedgoat_Plant_Model_B.PWMCapture1_o3));
        }
      }

      /* path info */
      ssSetModelName(rts, "PWM Capture1");
      ssSetPath(rts, "Speedgoat_Plant_Model/PWM Capture1");
      ssSetRTModel(rts,Speedgoat_Plant_Model_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &Speedgoat_Plant_Model_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 15);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       Speedgoat_Plant_Model_cal->PWMCapture1_P15_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &Speedgoat_Plant_Model_DW.PWMCapture1_PWORK[0]);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &Speedgoat_Plant_Model_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &Speedgoat_Plant_Model_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        ssSetNumDWorkAsInt(rts, 1);

        /* PWORK */
        ssSetDWorkWidthAsInt(rts, 0, 4);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &Speedgoat_Plant_Model_DW.PWMCapture1_PWORK[0]);
      }

      /* registration */
      sg_fpga_cap_sf_1(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCsAsInt(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);

      /* Update the BufferDstPort flags for each input port */
    }
  }

  /* Start for S-Function (sg_fpga_cap_sf_1): '<Root>/PWM Capture1' */
  /* Level2 S-Function Block: '<Root>/PWM Capture1' (sg_fpga_cap_sf_1) */
  {
    SimStruct *rts = Speedgoat_Plant_Model_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
void Speedgoat_Plant_Model_terminate(void)
{
  /* Terminate for S-Function (sg_fpga_cap_sf_1): '<Root>/PWM Capture1' */
  /* Level2 S-Function Block: '<Root>/PWM Capture1' (sg_fpga_cap_sf_1) */
  {
    SimStruct *rts = Speedgoat_Plant_Model_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* user code (Terminate function Trailer) */
  {
    uintptr_t bar2Addr;
    static char msg[500];
    bar2Addr = (uintptr_t)io3xxGetAddressSgLib((int32_t)1, SG_FPGA_IO3XX_BAR2);
    if (bar2Addr == 0) {
      sprintf(msg, "%s", pSgErrorStr);
      rtmSetErrorStatus(Speedgoat_Plant_Model_M, msg);
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
