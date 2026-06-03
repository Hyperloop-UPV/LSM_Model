//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: look2_binlx.cpp
//
// Code generated for Simulink model 'control_block'.
//
// Model version                  : 1.5
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Tue Jun  2 17:46:16 2026
//
#include "look2_binlx.h"
#include <stdint.h>

double look2_binlx(double u0, double u1, const double bp0[], const double bp1[],
                   const double table[], const uint32_t maxIndex[], uint32_t
                   stride)
{
  double fractions[2];
  double frac;
  double yL_0d0;
  double yL_0d1;
  uint32_t bpIndices[2];
  uint32_t bpIdx;
  uint32_t iLeft;
  uint32_t iRght;

  // Column-major Lookup 2-D
  // Search method: 'binary'
  // Use previous index: 'off'
  // Interpolation method: 'Linear point-slope'
  // Extrapolation method: 'Linear'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  // Prelookup - Index and Fraction
  // Index Search method: 'binary'
  // Extrapolation method: 'Linear'
  // Use previous index: 'off'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  if (u0 <= bp0[0UL]) {
    iLeft = 0UL;
    frac = (u0 - bp0[0UL]) / (bp0[1UL] - bp0[0UL]);
  } else if (u0 < bp0[maxIndex[0UL]]) {
    // Binary Search
    bpIdx = maxIndex[0UL] >> 1UL;
    iLeft = 0UL;
    iRght = maxIndex[0UL];
    while (iRght - iLeft > 1UL) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1UL;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1UL] - bp0[iLeft]);
  } else {
    iLeft = maxIndex[0UL] - 1UL;
    frac = (u0 - bp0[maxIndex[0UL] - 1UL]) / (bp0[maxIndex[0UL]] - bp0[maxIndex
      [0UL] - 1UL]);
  }

  fractions[0UL] = frac;
  bpIndices[0UL] = iLeft;

  // Prelookup - Index and Fraction
  // Index Search method: 'binary'
  // Extrapolation method: 'Linear'
  // Use previous index: 'off'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  if (u1 <= bp1[0UL]) {
    iLeft = 0UL;
    frac = (u1 - bp1[0UL]) / (bp1[1UL] - bp1[0UL]);
  } else if (u1 < bp1[maxIndex[1UL]]) {
    // Binary Search
    bpIdx = maxIndex[1UL] >> 1UL;
    iLeft = 0UL;
    iRght = maxIndex[1UL];
    while (iRght - iLeft > 1UL) {
      if (u1 < bp1[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1UL;
    }

    frac = (u1 - bp1[iLeft]) / (bp1[iLeft + 1UL] - bp1[iLeft]);
  } else {
    iLeft = maxIndex[1UL] - 1UL;
    frac = (u1 - bp1[maxIndex[1UL] - 1UL]) / (bp1[maxIndex[1UL]] - bp1[maxIndex
      [1UL] - 1UL]);
  }

  // Column-major Interpolation 2-D
  // Interpolation method: 'Linear point-slope'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Overflow mode: 'wrapping'

  bpIdx = iLeft * stride + bpIndices[0UL];
  yL_0d0 = table[bpIdx];
  yL_0d0 += (table[bpIdx + 1UL] - yL_0d0) * fractions[0UL];
  bpIdx += stride;
  yL_0d1 = table[bpIdx];
  return (((table[bpIdx + 1UL] - yL_0d1) * fractions[0UL] + yL_0d1) - yL_0d0) *
    frac + yL_0d0;
}

//
// File trailer for generated code.
//
// [EOF]
//
