/*
 * speedgoat_IO316_100k_21_CI_02826_v2_private.h
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

#ifndef speedgoat_IO316_100k_21_CI_02826_v2_private_h_
#define speedgoat_IO316_100k_21_CI_02826_v2_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "speedgoat_IO316_100k_21_CI_02826_v2_types.h"
#include "speedgoat_IO316_100k_21_CI_02826_v2.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

struct {
  void *context;
  int32_T IRQ;
  struct sigevent sig_none;
  struct sigevent sig_pulse;
  uint32_T coid;
  uint32_T pri;
  uint32_T count;
  uint32_T intrID;
} S3_InterruptSetup1_D;

// Define a static error message buffer for this instance
static char S3_InterruptSetup1_errmsg[256];

//
extern "C"
{
  void IO316_100k_start_public( void *, bool );
  void IO316_100k_stop_public( void * );
  bool IO316_100k_isr_public( void * );
  int32_T IO316_100k_map_public( void **, uint32_T );
}

//
const struct sigevent *S3_InterruptSetup1_ISR(void *data, int id);
extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern "C" void sg_fpga_inta_sf_a1(SimStruct *rts);
extern "C" void sg_fpga_cap_sf_1(SimStruct *rts);
extern "C" void sg_fpga_di_sf_a2(SimStruct *rts);
extern "C" void sg_fpga_do_sf_a2(SimStruct *rts);
extern "C" void sg_fpga_pwm_sf_5(SimStruct *rts);
extern "C" void sg_fpga_qae_sf_3(SimStruct *rts);
extern "C" void sg_fpga_spi_multislave_sf_2(SimStruct *rts);

#endif                      /* speedgoat_IO316_100k_21_CI_02826_v2_private_h_ */
