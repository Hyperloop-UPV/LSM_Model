/*
 * Speedgoat_Plant_Model_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Speedgoat_Plant_Model".
 *
 * Model version              : 2.5
 * Simulink Coder version : 26.1 (R2026a) 20-Nov-2025
 * C++ source code generated on : Wed Jun 10 12:33:00 2026
 *
 * Target selection: speedgoat.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef Speedgoat_Plant_Model_private_h_
#define Speedgoat_Plant_Model_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "Speedgoat_Plant_Model_types.h"
#include "Speedgoat_Plant_Model.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern "C" void sg_fpga_cap_sf_1(SimStruct *rts);
extern "C" void sg_fpga_qae_sf_3(SimStruct *rts);

#endif                                 /* Speedgoat_Plant_Model_private_h_ */
