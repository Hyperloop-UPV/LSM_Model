/*
 *  rtmodel.cpp:
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

#include "rtmodel.h"

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void speedgoat_IO316_100k_21_CI_02826_v2_step(int_T tid)
{
  switch (tid) {
   case 0 :
    speedgoat_IO316_100k_21_CI_02826_v2_step0();
    break;

   case 1 :
    speedgoat_IO316_100k_21_CI_02826_v2_step1();
    break;

   default :
    /* do nothing */
    break;
  }
}
