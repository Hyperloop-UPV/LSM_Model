/*
 * speedgoat_IO316_100k_21_CI_02826_v2.h
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

#ifndef speedgoat_IO316_100k_21_CI_02826_v2_h_
#define speedgoat_IO316_100k_21_CI_02826_v2_h_
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "sys/siginfo.h"
#include "sys/neutrino.h"
#include "Logger.hpp"
#include "StartCallbackAPI.h"
#include "ModelInfo.hpp"
#include "sg_fpga_io30x_setup_util.h"
#include "sg_fpga_io31x_io32x_setup_util.h"
#include "sg_fpga_io33x_setup_util.h"
#include "sg_fpga_io337_setup_util.h"
#include "sg_fpga_io36x_setup_util.h"
#include "sg_fpga_io39x_setup_util.h"
#include "sg_fpga_io3xx_scatter_gather_dma.h"
#include "sg_fpga_pulse_setup_util.h"
#include "sg_common.h"
#include "sg_printf.h"
#include "speedgoat_IO316_100k_21_CI_02826_v2_types.h"
#include "crl_mutex.hpp"
#include <stddef.h>
#include <cstring>
#include "speedgoat_IO316_100k_21_CI_02826_v2_cal.h"

extern "C"
{

#include "rt_nonfinite.h"

}

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmCounterLimit
#define rtmCounterLimit(rtm, idx)      ((rtm)->Timing.TaskCounters.cLimit[(idx)])
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
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
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* Block signals (default storage) */
struct B_speedgoat_IO316_100k_21_CI_02826_v2_T {
  real_T PWM_Capture_High[2];          /* '<S1>/PWM Capture' */
  real_T Digitalinput[5];              /* '<S2>/Digital input' */
  real_T IO316100kDigitalInput[5];     /* '<S2>/Offset' */
  real_T PulseGenDIO[3];               /* '<S2>/Pulse Gen DIO' */
  real_T Aon;                          /* '<S4>/Aon' */
  real_T Aoff;                         /* '<S4>/Aoff' */
  real_T Bon;                          /* '<S4>/Bon' */
  real_T Boff;                         /* '<S4>/Boff' */
  real_T Constant;                     /* '<S5>/Constant' */
  uint32_T SPI_Master_Data_CH1[20];    /* '<S6>/Rate Transition1' */
  uint32_T IO3xx_Interrupt;            /* '<S3>/Rate Transition' */
  uint32_T Output;                     /* '<S11>/Output' */
  uint32_T DataTypeConversion;         /* '<S6>/Data Type Conversion' */
  uint32_T Add16[20];                  /* '<S6>/Add16' */
  uint32_T FixPtSum1;                  /* '<S13>/FixPt Sum1' */
  uint32_T FixPtSwitch;                /* '<S14>/FixPt Switch' */
  uint32_T Rx_Data_M_S1_direct[20];    /* '<S6>/SPI Master' */
  uint32_T EnabledDelay[20];           /* '<S15>/Enabled Delay' */
  uint32_T Output_g;                   /* '<S8>/Output' */
  uint32_T FixPtSum1_i;                /* '<S9>/FixPt Sum1' */
  uint32_T FixPtSwitch_f;              /* '<S10>/FixPt Switch' */
  boolean_T M1_S1_rx_data_valid;       /* '<S6>/SPI Master' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_speedgoat_IO316_100k_21_CI_02826_v2_T {
  real_T QAE_RWORK;                    /* '<S5>/QAE' */
  real_T SPIMaster_RWORK;              /* '<S6>/SPI Master' */
  real_T CoSInterrupt_RWORK[16];       /* '<S7>/CoS Interrupt' */
  void* RateTransition1_d0_SEMAPHORE;  /* '<S6>/Rate Transition1' */
  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<S6>/Scope 1 ' */

  void *PWMCapture_PWORK[4];           /* '<S1>/PWM Capture' */
  struct {
    void *LoggedData;
  } Scope1_PWORK_e;                    /* '<S1>/Scope 1 ' */

  void *Digitalinput_PWORK[2];         /* '<S2>/Digital input' */
  struct {
    void *LoggedData;
  } IO316100kDI_PWORK;                 /* '<S2>/IO316-100k DI' */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Offse;   /* synthesized block */

  void *Digitaloutput_PWORK[2];        /* '<S2>/Digital output' */
  struct {
    void *LoggedData;
  } Scope1_PWORK_ez;                   /* '<S3>/Scope 1 ' */

  void *PWMgeneration_PWORK[4];        /* '<S4>/PWM generation' */
  void *QAE_PWORK[6];                  /* '<S5>/QAE' */
  void *Setup_PWORK[6];                /* '<Root>/Setup' */
  void *SPIMaster_PWORK[8];            /* '<S6>/SPI Master' */
  void *CoSInterrupt_PWORK;            /* '<S7>/CoS Interrupt' */
  uint32_T Output_DSTATE;              /* '<S11>/Output' */
  uint32_T EnabledDelay_DSTATE[20];    /* '<S15>/Enabled Delay' */
  uint32_T Output_DSTATE_o;            /* '<S8>/Output' */
  int32_T clockTickCounter[3];         /* '<S2>/Pulse Gen DIO' */
  uint32_T RateTransition1_Buf[60];    /* '<S6>/Rate Transition1' */
  int_T Digitaloutput_IWORK;           /* '<S2>/Digital output' */
  int_T PWMgeneration_IWORK[2];        /* '<S4>/PWM generation' */
  int_T Setup_IWORK;                   /* '<Root>/Setup' */
  int_T SPIMaster_IWORK[3];            /* '<S6>/SPI Master' */
  int_T CoSInterrupt_IWORK;            /* '<S7>/CoS Interrupt' */
  int8_T RateTransition1_LstBufWR;     /* '<S6>/Rate Transition1' */
  int8_T RateTransition1_RDBuf;        /* '<S6>/Rate Transition1' */
  int8_T FunctionCallSubsystem_SubsysRan;/* '<S3>/Function-Call Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_speedgoat_IO316_100k_21_CI_02826_v2_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[3];
    SimStruct childSFunctions[7];
    SimStruct *childSFunctionPtrs[7];
    struct _ssBlkInfo2 blkInfo2[7];
    struct _ssSFcnModelMethods2 methods2[7];
    struct _ssSFcnModelMethods3 methods3[7];
    struct _ssSFcnModelMethods4 methods4[7];
    struct _ssStatesInfo2 statesInfo2[7];
    ssPeriodicStatesInfo periodicStatesInfo[7];
    struct _ssPortInfo2 inputOutputPortInfo2[7];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[15];
      mxArray *params[15];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[4];
      struct _ssInPortUnit inputPortUnits[4];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[4];
      uint_T attribs[35];
      mxArray *params[35];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[17];
      mxArray *params[17];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[25];
      mxArray *params[25];
      struct _ssDWorkRecord dWork[3];
      struct _ssDWorkAuxRecord dWorkAux[3];
    } Sfcn6;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    void *semIdForTask2;
    uint32_T rtmClockTickBuf2;
    uint32_T rtmBufClockTickBufH2;
    struct {
      uint8_T TID[2];
      uint8_T cLimit[2];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[3];
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_speedgoat_IO316_100k_21_CI_02826_v2_T
    speedgoat_IO316_100k_21_CI_02826_v2_B;

#ifdef __cplusplus

}

#endif

/* Block states (default storage) */
extern struct DW_speedgoat_IO316_100k_21_CI_02826_v2_T
  speedgoat_IO316_100k_21_CI_02826_v2_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  /* Model entry point functions */
  extern void speedgoat_IO316_100k_21_CI_02826_v2_initialize(void);
  extern void speedgoat_IO316_100k_21_CI_02826_v2_step0(void);/* Sample time: [0.001s, 0.0s] */
  extern void speedgoat_IO316_100k_21_CI_02826_v2_step1(void);/* Sample time: [0.007s, 0.0s] */
  extern void speedgoat_IO316_100k_21_CI_02826_v2_terminate(void);

#ifdef __cplusplus

}

#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_speedgoat_IO316_100k_21_CI_02826_v2_T *const
    speedgoat_IO316_100k_21_CI_02826_v2_M;

#ifdef __cplusplus

}

#endif

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
 * '<Root>' : 'speedgoat_IO316_100k_21_CI_02826_v2'
 * '<S1>'   : 'speedgoat_IO316_100k_21_CI_02826_v2/CAP'
 * '<S2>'   : 'speedgoat_IO316_100k_21_CI_02826_v2/DIO'
 * '<S3>'   : 'speedgoat_IO316_100k_21_CI_02826_v2/INTA'
 * '<S4>'   : 'speedgoat_IO316_100k_21_CI_02826_v2/PWM'
 * '<S5>'   : 'speedgoat_IO316_100k_21_CI_02826_v2/QAE'
 * '<S6>'   : 'speedgoat_IO316_100k_21_CI_02826_v2/SPI'
 * '<S7>'   : 'speedgoat_IO316_100k_21_CI_02826_v2/INTA/Function-Call Subsystem'
 * '<S8>'   : 'speedgoat_IO316_100k_21_CI_02826_v2/INTA/Function-Call Subsystem/Counter Free-Running'
 * '<S9>'   : 'speedgoat_IO316_100k_21_CI_02826_v2/INTA/Function-Call Subsystem/Counter Free-Running/Increment Real World'
 * '<S10>'  : 'speedgoat_IO316_100k_21_CI_02826_v2/INTA/Function-Call Subsystem/Counter Free-Running/Wrap To Zero'
 * '<S11>'  : 'speedgoat_IO316_100k_21_CI_02826_v2/SPI/Counter Free-Running'
 * '<S12>'  : 'speedgoat_IO316_100k_21_CI_02826_v2/SPI/Unit Delay Enabled Synchronous6'
 * '<S13>'  : 'speedgoat_IO316_100k_21_CI_02826_v2/SPI/Counter Free-Running/Increment Real World'
 * '<S14>'  : 'speedgoat_IO316_100k_21_CI_02826_v2/SPI/Counter Free-Running/Wrap To Zero'
 * '<S15>'  : 'speedgoat_IO316_100k_21_CI_02826_v2/SPI/Unit Delay Enabled Synchronous6/Unit Delay Enabled'
 */
#endif                              /* speedgoat_IO316_100k_21_CI_02826_v2_h_ */
