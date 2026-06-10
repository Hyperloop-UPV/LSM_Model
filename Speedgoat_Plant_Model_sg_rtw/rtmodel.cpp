/*
 *  rtmodel.cpp:
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

#include "rtmodel.h"

/* Use this function only if you need to maintain compatibility with an existing static main program. */
void Speedgoat_Plant_Model_step(int_T tid)
{
  switch (tid) {
   case 0 :
    Speedgoat_Plant_Model_step0();
    break;

   case 1 :
    Speedgoat_Plant_Model_step1();
    break;

   case 2 :
    Speedgoat_Plant_Model_step2();
    break;

   default :
    /* do nothing */
    break;
  }
}
