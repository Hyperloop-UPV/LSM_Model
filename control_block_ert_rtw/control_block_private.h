//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: control_block_private.h
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
#ifndef control_block_private_h_
#define control_block_private_h_
#include <stdbool.h>
#include <stdint.h>
#include "control_block_types.h"
#include "control_block.h"

extern double rt_modd_snf(double u0, double u1);
extern double look2_binlx(double u0, double u1, const double bp0[], const double
  bp1[], const double table[], const uint32_t maxIndex[], uint32_t stride);

#endif                                 // control_block_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
