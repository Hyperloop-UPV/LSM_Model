//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: control_block.cpp
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
#include "control_block.h"
#include <cmath>
#include "control_block_private.h"
#include <stdint.h>
#include <stdbool.h>
#include "cmath"
#include <cfloat>

static void rate_scheduler(control_block::RT_MODEL *const rtM);
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
//         This function updates active task flag for each subrate.
//         The function is called at model base rate, hence the
//         generated code self-manages all its subrates.
//
static void rate_scheduler(control_block::RT_MODEL *const rtM)
{
  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).

  (rtM->Timing.TaskCounters.TID[1])++;
  if ((rtM->Timing.TaskCounters.TID[1]) > 1) {// Sample time: [0.0002s, 0.0s]
    rtM->Timing.TaskCounters.TID[1] = 0;
  }

  (rtM->Timing.TaskCounters.TID[2])++;
  if ((rtM->Timing.TaskCounters.TID[2]) > 9) {// Sample time: [0.001s, 0.0s]
    rtM->Timing.TaskCounters.TID[2] = 0;
  }
}

double rt_modd_snf(double u0, double u1)
{
  double y;
  y = u0;
  if (u1 == 0.0) {
    if (u0 == 0.0) {
      y = u1;
    }
  } else if (std::isnan(u0) || std::isnan(u1) || std::isinf(u0)) {
    y = (rtNaN);
  } else if (u0 == 0.0) {
    y = 0.0 / u1;
  } else if (std::isinf(u1)) {
    if ((u1 < 0.0) != (u0 < 0.0)) {
      y = u1;
    }
  } else {
    bool yEq;
    y = std::fmod(u0, u1);
    yEq = (y == 0.0);
    if ((!yEq) && (u1 > std::floor(u1))) {
      double q;
      q = std::abs(u0 / u1);
      yEq = !(std::abs(q - std::floor(q + 0.5)) > DBL_EPSILON * q);
    }

    if (yEq) {
      y = u1 * 0.0;
    } else if ((u0 < 0.0) != (u1 < 0.0)) {
      y += u1;
    }
  }

  return y;
}

// Model step function
void control_block::step()
{
  double tmp_1[9];
  double maximo[3];
  double a_idx_0;
  double a_idx_1;
  double dt;
  double pos_EMS;
  double tmp_0;
  double tmp_2;
  double tmp_3;
  int16_t idx;
  int16_t k;
  bool tmp;
  static const double a[9]{ 1.0, 0.0, 0.5, -0.5, 0.8660254037844386, 0.5, -0.5,
    -0.8660254037844386, 0.5 };

  bool exitg1;

  // DiscreteIntegrator: '<S178>/Discrete-Time Integrator2'
  rtDW.DiscreteTimeIntegrator2 = rtDW.DiscreteTimeIntegrator2_DSTATE;

  // DiscreteIntegrator: '<S178>/Discrete-Time Integrator1'
  rtDW.DiscreteTimeIntegrator1 = rtDW.DiscreteTimeIntegrator1_DSTATE;

  // DiscreteIntegrator: '<S178>/Discrete-Time Integrator'
  rtDW.DiscreteTimeIntegrator = rtDW.DiscreteTimeIntegrator_DSTATE;

  // SignalConversion generated from: '<S12>/ SFunction ' incorporates:
  //   MATLAB Function: '<S6>/Clarke Transform'

  rtDW.TmpSignalConversionAtSFunctio_c[0] = rtDW.DiscreteTimeIntegrator2;
  rtDW.TmpSignalConversionAtSFunctio_c[1] = rtDW.DiscreteTimeIntegrator1;
  rtDW.TmpSignalConversionAtSFunctio_c[2] = rtDW.DiscreteTimeIntegrator;

  // MATLAB Function: '<S6>/Clarke Transform'
  a_idx_0 = 0.0;
  a_idx_1 = 0.0;
  dt = 0.0;
  for (idx = 0; idx < 3; idx++) {
    pos_EMS = rtDW.TmpSignalConversionAtSFunctio_c[idx];
    a_idx_0 += a[3 * idx] * pos_EMS;
    a_idx_1 += a[3 * idx + 1] * pos_EMS;
    dt += a[3 * idx + 2] * pos_EMS;
  }

  // DiscreteIntegrator: '<S179>/Discrete-Time Integrator1'
  rtDW.pos = rtDW.DiscreteTimeIntegrator1_DSTAT_g;

  // MATLAB Function: '<S177>/Speetec Detection' incorporates:
  //   Constant: '<S177>/Constant'
  //   Constant: '<S177>/Constant1'

  rtDW.speetec_detect = ((rtDW.pos >= 0.9075) && (rtDW.pos <= 6.036));
  rtDW.pos_for_speetec = rtDW.pos - 0.9075;

  // Product: '<S7>/Divide' incorporates:
  //   Constant: '<S7>/Constant'

  rtDW.Divide = rtDW.pos_for_speetec / 0.096;

  // Product: '<S7>/Divide1' incorporates:
  //   Constant: '<S7>/Constant1'

  rtDW.Divide1 = rtDW.Divide / 2.0;

  // Rounding: '<S7>/Round'
  rtDW.Round = std::floor(rtDW.Divide1);

  // Gain: '<S7>/Gain'
  rtDW.Gain = 2.0 * rtDW.Round;

  // Sum: '<S7>/Sum'
  rtDW.Sum = rtDW.Divide - rtDW.Gain;

  // Gain: '<S11>/Gain'
  rtDW.Gain_l = 3.1415926535897931 * rtDW.Sum;

  // Sum: '<S11>/Sum' incorporates:
  //   Constant: '<Root>/Constant4'

  rtDW.Sum_j = rtDW.Gain_l + 4.565126;

  // Math: '<S11>/Math Function' incorporates:
  //   Constant: '<S11>/Constant'

  rtDW.MathFunction = rt_modd_snf(rtDW.Sum_j, 6.2831853071795862);

  // MATLAB Function: '<S6>/Clarke to Park Angle Transform'
  pos_EMS = std::sin(rtDW.MathFunction);
  tmp_2 = std::cos(rtDW.MathFunction);
  tmp_3 = std::cos(rtDW.MathFunction);
  tmp_0 = std::sin(rtDW.MathFunction);
  tmp_1[0] = pos_EMS;
  tmp_1[3] = -tmp_2;
  tmp_1[6] = 0.0;
  tmp_1[1] = tmp_3;
  tmp_1[4] = tmp_0;
  tmp_1[7] = 0.0;

  // MATLAB Function: '<S6>/Clarke Transform'
  rtDW.AlphaBeta0[0] = 0.66666666666666663 * a_idx_0;

  // MATLAB Function: '<S6>/Clarke to Park Angle Transform'
  tmp_1[2] = 0.0;
  tmp_2 = 0.0;

  // MATLAB Function: '<S6>/Clarke Transform'
  rtDW.AlphaBeta0[1] = 0.66666666666666663 * a_idx_1;

  // MATLAB Function: '<S6>/Clarke to Park Angle Transform'
  tmp_1[5] = 0.0;
  tmp_3 = 0.0;

  // MATLAB Function: '<S6>/Clarke Transform'
  rtDW.AlphaBeta0[2] = 0.66666666666666663 * dt;

  // MATLAB Function: '<S6>/Clarke to Park Angle Transform'
  tmp_1[8] = 1.0;
  dt = 0.0;
  for (idx = 0; idx < 3; idx++) {
    pos_EMS = rtDW.AlphaBeta0[idx];
    tmp_2 += tmp_1[3 * idx] * pos_EMS;
    tmp_3 += tmp_1[3 * idx + 1] * pos_EMS;
    dt += tmp_1[3 * idx + 2] * pos_EMS;
  }

  rtDW.dq0[0] = tmp_2;
  rtDW.dq0[1] = tmp_3;
  rtDW.dq0[2] = dt;

  // Sum: '<S4>/Sum2' incorporates:
  //   Constant: '<S4>/Constant'

  rtDW.error = 0.0 - rtDW.dq0[0];
  tmp = ((&rtM)->Timing.TaskCounters.TID[1] == 0);
  if (tmp) {
    // Gain: '<S46>/Integral Gain'
    rtDW.IntegralGain = 1210.88664402243 * rtDW.error;

    // DiscreteIntegrator: '<S49>/Integrator'
    rtDW.Integrator = 0.0001 * rtDW.IntegralGain + rtDW.Integrator_DSTATE;

    // Gain: '<S54>/Proportional Gain'
    rtDW.ProportionalGain = 10.5746062787963 * rtDW.error;

    // Sum: '<S58>/Sum'
    rtDW.Sum_l = rtDW.ProportionalGain + rtDW.Integrator;
  }

  // MATLAB Function: '<Root>/MATLAB Function' incorporates:
  //   Constant: '<Root>/Constant1'
  //   Constant: '<Root>/Constant2'

  rtDW.speed_ref_out = 0.0;
  if (rtDW.speetec_detect == 1.0) {
    rtDW.rise = 1.0;
  }

  if (rtDW.rise == 1.0) {
    rtDW.speed_ref_out = 6.9444444444444446;
  }

  // End of MATLAB Function: '<Root>/MATLAB Function'

  // DiscreteIntegrator: '<S179>/Discrete-Time Integrator'
  rtDW.vel = rtDW.DiscreteTimeIntegrator_DSTATE_i;
  if ((&rtM)->Timing.TaskCounters.TID[2] == 0) {
    // Outputs for Atomic SubSystem: '<S1>/SpeedController'
    // Constant: '<S1>/Constant' incorporates:
    //   Constant: '<S1>/Constant1'

    SpeedController(rtDW.speed_ref_out, rtDW.vel, 6.0F, 15.0F, &rtDW.Sum_f,
                    &rtDW.SpeedController_h);

    // End of Outputs for SubSystem: '<S1>/SpeedController'
  }

  // Sum: '<S4>/Sum1'
  rtDW.Sum1 = rtDW.Sum_f - rtDW.dq0[1];
  if (tmp) {
    // Gain: '<S99>/Integral Gain'
    rtDW.IntegralGain_p = 1486.22069601051 * rtDW.Sum1;

    // DiscreteIntegrator: '<S102>/Integrator'
    rtDW.Integrator_k = 0.0001 * rtDW.IntegralGain_p + rtDW.Integrator_DSTATE_i;

    // Gain: '<S107>/Proportional Gain'
    rtDW.ProportionalGain_p = 12.1385417687129 * rtDW.Sum1;

    // Sum: '<S111>/Sum'
    rtDW.Sum_d = rtDW.ProportionalGain_p + rtDW.Integrator_k;

    // Saturate: '<S9>/Saturation'
    pos_EMS = rtDW.Sum_d;
    if (pos_EMS <= 0.0) {
      // Saturate: '<S9>/Saturation'
      rtDW.Saturation = 0.0;
    } else {
      // Saturate: '<S9>/Saturation'
      rtDW.Saturation = pos_EMS;
    }

    // End of Saturate: '<S9>/Saturation'
  }

  // SignalConversion generated from: '<S120>/ SFunction ' incorporates:
  //   Constant: '<S10>/Constant'
  //   MATLAB Function: '<S10>/Inverse Park Transform'

  rtDW.TmpSignalConversionAtSFunctio_a[0] = rtDW.Sum_l;
  rtDW.TmpSignalConversionAtSFunctio_a[1] = rtDW.Saturation;
  rtDW.TmpSignalConversionAtSFunctio_a[2] = 0.0;

  // MATLAB Function: '<S10>/Inverse Park Transform'
  pos_EMS = std::sin(rtDW.MathFunction);
  tmp_2 = std::cos(rtDW.MathFunction);
  tmp_3 = std::sin(rtDW.MathFunction - 2.0943951023931953);
  tmp_0 = std::cos(rtDW.MathFunction - 2.0943951023931953);
  dt = std::sin(rtDW.MathFunction + 2.0943951023931953);
  a_idx_1 = std::cos(rtDW.MathFunction + 2.0943951023931953);
  tmp_1[0] = pos_EMS;
  tmp_1[3] = tmp_2;
  tmp_1[6] = 1.0;
  tmp_1[1] = tmp_3;
  tmp_1[4] = tmp_0;
  tmp_1[7] = 1.0;
  tmp_1[2] = dt;
  tmp_1[5] = a_idx_1;
  tmp_1[8] = 1.0;
  tmp_2 = 0.0;
  tmp_3 = 0.0;
  dt = 0.0;
  for (idx = 0; idx < 3; idx++) {
    pos_EMS = rtDW.TmpSignalConversionAtSFunctio_a[idx];
    tmp_2 += tmp_1[3 * idx] * pos_EMS;
    tmp_3 += tmp_1[3 * idx + 1] * pos_EMS;
    dt += tmp_1[3 * idx + 2] * pos_EMS;
  }

  rtDW.abc[0] = tmp_2;

  // Saturate: '<Root>/Saturation'
  pos_EMS = rtDW.abc[0];
  if (pos_EMS > 300.0) {
    pos_EMS = 300.0;
  } else if (pos_EMS < -300.0) {
    pos_EMS = -300.0;
  }

  // Saturate: '<Root>/Saturation'
  rtDW.Saturation_m[0] = pos_EMS;

  // MATLAB Function: '<S10>/Inverse Park Transform'
  rtDW.abc[1] = tmp_3;

  // Saturate: '<Root>/Saturation'
  pos_EMS = rtDW.abc[1];
  if (pos_EMS > 300.0) {
    pos_EMS = 300.0;
  } else if (pos_EMS < -300.0) {
    pos_EMS = -300.0;
  }

  // Saturate: '<Root>/Saturation'
  rtDW.Saturation_m[1] = pos_EMS;

  // MATLAB Function: '<S10>/Inverse Park Transform'
  rtDW.abc[2] = dt;

  // Saturate: '<Root>/Saturation'
  pos_EMS = rtDW.abc[2];
  if (pos_EMS > 300.0) {
    pos_EMS = 300.0;
  } else if (pos_EMS < -300.0) {
    pos_EMS = -300.0;
  }

  // Saturate: '<Root>/Saturation'
  rtDW.Saturation_m[2] = pos_EMS;

  // Product: '<S178>/Product' incorporates:
  //   Constant: '<S178>/resistencia'

  rtDW.Product = 0.6 * rtDW.DiscreteTimeIntegrator1;

  // Sum: '<S178>/Sum'
  rtDW.Sum_i = rtDW.Saturation_m[1] - rtDW.Product;

  // Product: '<S178>/Divide' incorporates:
  //   Constant: '<S175>/Constant'

  rtDW.Divide_e = rtDW.Sum_i / 0.01;

  // Product: '<S178>/Product2' incorporates:
  //   Constant: '<S178>/Constant2'

  rtDW.Product2 = 0.6 * rtDW.DiscreteTimeIntegrator;

  // Sum: '<S178>/Sum2'
  rtDW.Sum2 = rtDW.Saturation_m[2] - rtDW.Product2;

  // Product: '<S178>/Divide1' incorporates:
  //   Constant: '<S175>/Constant'

  rtDW.Divide1_n = rtDW.Sum2 / 0.01;

  // Product: '<S178>/Product1' incorporates:
  //   Constant: '<S178>/Constant1'

  rtDW.Product1 = 0.6 * rtDW.DiscreteTimeIntegrator2;

  // Sum: '<S178>/Sum1'
  rtDW.Sum1_e = rtDW.Saturation_m[0] - rtDW.Product1;

  // Product: '<S178>/Divide2' incorporates:
  //   Constant: '<S175>/Constant'

  rtDW.Divide2 = rtDW.Sum1_e / 0.01;

  // Gain: '<S184>/Gain2'
  rtDW.ms = 0.27777777777777779 * rtDW.vel;

  // Math: '<S184>/Power'
  //
  //  About '<S184>/Power':
  //   Operator: magnitude^2

  pos_EMS = rtDW.ms;

  // Math: '<S184>/Power'
  //
  //  About '<S184>/Power':
  //   Operator: magnitude^2

  rtDW.Power = pos_EMS * pos_EMS;

  // Gain: '<S184>/Gain1'
  rtDW.drag_aero = 0.0518 * rtDW.Power;

  // DigitalClock: '<S184>/Clock'
  rtDW.Clock = (((&rtM)->Timing.clockTick0) * 0.0001);

  // Lookup_n-D: '<S184>/n-D Lookup Table' incorporates:
  //   Constant: '<S184>/Airgap'
  //   DiscreteIntegrator: '<S179>/Discrete-Time Integrator'

  rtDW.nDLookupTable = look2_binlx(rtDW.vel, 14.5,
    rtConstP.nDLookupTable_bp01Data, rtConstP.nDLookupTable_bp02Data,
    rtConstP.nDLookupTable_tableData, rtConstP.nDLookupTable_maxIndex, 13UL);

  // Gain: '<S184>/Gain'
  rtDW.Gain_p = 4.0 * rtDW.nDLookupTable;

  // MATLAB Function: '<S184>/MATLAB Function3'
  if (rtDW.Clock < 1.0) {
    rtDW.drag_out = 0.0;
  } else {
    rtDW.drag_out = rtDW.Gain_p;
  }

  // End of MATLAB Function: '<S184>/MATLAB Function3'

  // Sum: '<S184>/Sum1'
  rtDW.F_drag = rtDW.drag_aero + rtDW.drag_out;

  // UnitDelay: '<S176>/Unit Delay'
  rtDW.UnitDelay = rtDW.UnitDelay_DSTATE;

  // MATLAB Function: '<S180>/Cálculo EMS' incorporates:
  //   Constant: '<S180>/Constant'
  //   Constant: '<S180>/Constant1'

  pos_EMS = rtDW.UnitDelay - 0.38249999999999995;
  if ((rtDW.speetec_detect == 1.0) && (rtDW.speetec_detect_ant == 0.0)) {
    rtDW.pos_ref = rtDW.UnitDelay;
  }

  if ((rtDW.pos_ref == -1.0) || (pos_EMS < rtDW.pos_ref) || (pos_EMS >
       (rtDW.pos_ref + rtDW.end_booster) + 1.536)) {
    rtDW.numero_EMS = 0.0;
  } else {
    rtDW.numero_EMS = 2.0;
    if ((pos_EMS >= rtDW.pos_ref + 0.768) && (pos_EMS <= (rtDW.pos_ref +
          rtDW.end_booster) + 0.768)) {
      rtDW.numero_EMS = 4.0;
      if ((pos_EMS >= rtDW.pos_ref + 1.536) && (pos_EMS <= rtDW.pos_ref +
           rtDW.end_booster)) {
        rtDW.numero_EMS = 6.0;
      }
    }
  }

  rtDW.pos_value = rtDW.pos_ref;
  rtDW.speetec_detect_ant = rtDW.speetec_detect;

  // End of MATLAB Function: '<S180>/Cálculo EMS'

  // SignalConversion generated from: '<S189>/ SFunction ' incorporates:
  //   MATLAB Function: '<S182>/Frequency and Max Calculator'

  rtDW.TmpSignalConversionAtSFunctionI[0] = rtDW.DiscreteTimeIntegrator2;
  rtDW.TmpSignalConversionAtSFunctionI[1] = rtDW.DiscreteTimeIntegrator1;
  rtDW.TmpSignalConversionAtSFunctionI[2] = rtDW.DiscreteTimeIntegrator;

  // MATLAB Function: '<S182>/Frequency and Max Calculator'
  rtDW.tiempo += 0.0001;
  pos_EMS = rtDW.frecuencia_acc;
  dt = rtDW.signo[0];
  if (dt == 0.0) {
    if (rtDW.TmpSignalConversionAtSFunctionI[0] >= 0.0) {
      dt = 1.0;
    } else {
      dt = 2.0;
    }

    rtDW.signo[0] = dt;
    rtDW.t_inicio[0] = rtDW.tiempo;
  }

  if ((dt == 1.0) && (rtDW.TmpSignalConversionAtSFunctionI[0] <= 0.0)) {
    dt = rtDW.tiempo - rtDW.t_inicio[0];
    if (dt > 1.0E-12) {
      pos_EMS = 1.0 / (2.0 * dt);
      rtDW.frecuencia_acc = pos_EMS;
    }

    dt = 0.0;
    rtDW.signo[0] = 0.0;
  }

  if ((dt == 2.0) && (rtDW.TmpSignalConversionAtSFunctionI[0] >= 0.0)) {
    dt = rtDW.tiempo - rtDW.t_inicio[0];
    if (dt > 1.0E-12) {
      pos_EMS = 1.0 / (2.0 * dt);
      rtDW.frecuencia_acc = pos_EMS;
    }

    rtDW.signo[0] = 0.0;
  }

  dt = rtDW.signo[1];
  if (dt == 0.0) {
    if (rtDW.TmpSignalConversionAtSFunctionI[1] >= 0.0) {
      dt = 1.0;
    } else {
      dt = 2.0;
    }

    rtDW.signo[1] = dt;
    rtDW.t_inicio[1] = rtDW.tiempo;
  }

  if ((dt == 1.0) && (rtDW.TmpSignalConversionAtSFunctionI[1] <= 0.0)) {
    dt = rtDW.tiempo - rtDW.t_inicio[1];
    if (dt > 1.0E-12) {
      pos_EMS = 1.0 / (2.0 * dt);
      rtDW.frecuencia_acc = pos_EMS;
    }

    dt = 0.0;
    rtDW.signo[1] = 0.0;
  }

  if ((dt == 2.0) && (rtDW.TmpSignalConversionAtSFunctionI[1] >= 0.0)) {
    dt = rtDW.tiempo - rtDW.t_inicio[1];
    if (dt > 1.0E-12) {
      pos_EMS = 1.0 / (2.0 * dt);
      rtDW.frecuencia_acc = pos_EMS;
    }

    rtDW.signo[1] = 0.0;
  }

  dt = rtDW.signo[2];
  if (dt == 0.0) {
    if (rtDW.TmpSignalConversionAtSFunctionI[2] >= 0.0) {
      dt = 1.0;
    } else {
      dt = 2.0;
    }

    rtDW.signo[2] = dt;
    rtDW.t_inicio[2] = rtDW.tiempo;
  }

  if ((dt == 1.0) && (rtDW.TmpSignalConversionAtSFunctionI[2] <= 0.0)) {
    dt = rtDW.tiempo - rtDW.t_inicio[2];
    if (dt > 1.0E-12) {
      pos_EMS = 1.0 / (2.0 * dt);
      rtDW.frecuencia_acc = pos_EMS;
    }

    dt = 0.0;
    rtDW.signo[2] = 0.0;
  }

  if ((dt == 2.0) && (rtDW.TmpSignalConversionAtSFunctionI[2] >= 0.0)) {
    dt = rtDW.tiempo - rtDW.t_inicio[2];
    if (dt > 1.0E-12) {
      pos_EMS = 1.0 / (2.0 * dt);
      rtDW.frecuencia_acc = pos_EMS;
    }

    rtDW.signo[2] = 0.0;
  }

  dt = std::abs(pos_EMS);
  if (dt < 1.0E-12) {
    dt = 1.0E-12;
  }

  dt = 1.0 / dt / 3.0;
  if (std::abs(rtDW.TmpSignalConversionAtSFunctionI[0]) >= rtDW.antiguo_maximo)
  {
    maximo[0] = std::abs(rtDW.TmpSignalConversionAtSFunctionI[0]);
    rtDW.antiguo_maximo = std::abs(rtDW.TmpSignalConversionAtSFunctionI[0]);
    rtDW.t_maximo = rtDW.tiempo;
  } else {
    maximo[0] = rtDW.antiguo_maximo;
    if (rtDW.tiempo > rtDW.t_maximo + dt) {
      maximo[0] = std::abs(rtDW.TmpSignalConversionAtSFunctionI[0]);
      rtDW.antiguo_maximo = std::abs(rtDW.TmpSignalConversionAtSFunctionI[0]);
      rtDW.t_maximo = rtDW.tiempo;
    }
  }

  if (std::abs(rtDW.TmpSignalConversionAtSFunctionI[1]) >= rtDW.antiguo_maximo)
  {
    maximo[1] = std::abs(rtDW.TmpSignalConversionAtSFunctionI[1]);
    rtDW.antiguo_maximo = std::abs(rtDW.TmpSignalConversionAtSFunctionI[1]);
    rtDW.t_maximo = rtDW.tiempo;
  } else {
    maximo[1] = rtDW.antiguo_maximo;
    if (rtDW.tiempo > rtDW.t_maximo + dt) {
      maximo[1] = std::abs(rtDW.TmpSignalConversionAtSFunctionI[1]);
      rtDW.antiguo_maximo = std::abs(rtDW.TmpSignalConversionAtSFunctionI[1]);
      rtDW.t_maximo = rtDW.tiempo;
    }
  }

  if (std::abs(rtDW.TmpSignalConversionAtSFunctionI[2]) >= rtDW.antiguo_maximo)
  {
    maximo[2] = std::abs(rtDW.TmpSignalConversionAtSFunctionI[2]);
    rtDW.antiguo_maximo = std::abs(rtDW.TmpSignalConversionAtSFunctionI[2]);
    rtDW.t_maximo = rtDW.tiempo;
  } else {
    maximo[2] = rtDW.antiguo_maximo;
    if (rtDW.tiempo > rtDW.t_maximo + dt) {
      maximo[2] = std::abs(rtDW.TmpSignalConversionAtSFunctionI[2]);
      rtDW.antiguo_maximo = std::abs(rtDW.TmpSignalConversionAtSFunctionI[2]);
      rtDW.t_maximo = rtDW.tiempo;
    }
  }

  if (!std::isnan(maximo[0])) {
    idx = 1;
  } else {
    idx = 0;
    k = 2;
    exitg1 = false;
    while ((!exitg1) && (k < 4)) {
      if (!std::isnan(maximo[k - 1])) {
        idx = k;
        exitg1 = true;
      } else {
        k++;
      }
    }
  }

  if (idx == 0) {
    rtDW.Maximo = maximo[0];
  } else {
    dt = maximo[idx - 1];
    for (k = idx + 1; k < 4; k++) {
      tmp_2 = maximo[k - 1];
      if (dt < tmp_2) {
        dt = tmp_2;
      }
    }

    rtDW.Maximo = dt;
  }

  rtDW.frecuencia = pos_EMS;

  // Saturate: '<S182>/Saturation'
  pos_EMS = rtDW.Maximo;
  if (pos_EMS <= 0.0001) {
    // Saturate: '<S182>/Saturation'
    rtDW.Saturation_p = 0.0001;
  } else {
    // Saturate: '<S182>/Saturation'
    rtDW.Saturation_p = pos_EMS;
  }

  // End of Saturate: '<S182>/Saturation'

  // Product: '<S183>/Divide'
  rtDW.Divide_n = rtDW.DiscreteTimeIntegrator2 / rtDW.Saturation_p;

  // Saturate: '<S183>/Saturation'
  if (rtDW.Divide_n > 1.0) {
    // Saturate: '<S183>/Saturation'
    rtDW.Saturation_b = 1.0;
  } else if (rtDW.Divide_n < -1.0) {
    // Saturate: '<S183>/Saturation'
    rtDW.Saturation_b = -1.0;
  } else {
    // Saturate: '<S183>/Saturation'
    rtDW.Saturation_b = rtDW.Divide_n;
  }

  // End of Saturate: '<S183>/Saturation'

  // Trigonometry: '<S183>/Acos'
  pos_EMS = rtDW.Saturation_b;

  // Trigonometry: '<S183>/Acos'
  rtDW.Acos = std::asin(pos_EMS);

  // SampleTimeMath: '<S191>/TSamp'
  //
  //  About '<S191>/TSamp':
  //   y = u * K where K = 1 / ( w * Ts )
  //
  rtDW.TSamp = rtDW.Acos * 10000.0;

  // UnitDelay: '<S191>/UD'
  //
  //  Block description for '<S191>/UD':
  //
  //   Store in Global RAM

  rtDW.Uk1 = rtDW.UD_DSTATE;

  // Sum: '<S191>/Diff'
  //
  //  Block description for '<S191>/Diff':
  //
  //   Add in CPU

  rtDW.Diff = rtDW.TSamp - rtDW.Uk1;

  // Switch: '<S183>/Switch'
  if (rtDW.Diff >= 0.0) {
    // Switch: '<S183>/Switch'
    rtDW.Switch = rtDW.Acos;
  } else {
    // Sum: '<S183>/Sum' incorporates:
    //   Constant: '<S183>/Constant'

    rtDW.Sum_c = 3.1415926535897931 - rtDW.Acos;

    // Switch: '<S183>/Switch'
    rtDW.Switch = rtDW.Sum_c;
  }

  // End of Switch: '<S183>/Switch'

  // Sum: '<S183>/Sum1' incorporates:
  //   Constant: '<S183>/Constant1'

  rtDW.Sum1_j = rtDW.Switch - 1.5707963267948966;

  // MATLAB Function: '<S183>/Calculate Actual Angle' incorporates:
  //   Constant: '<S183>/Constant2'

  pos_EMS = rtDW.Sum1_j + 0.63;
  if (std::isnan(pos_EMS)) {
    rtDW.actual_angle = (rtNaN);
  } else if (std::isinf(pos_EMS)) {
    rtDW.actual_angle = (rtNaN);
  } else {
    dt = std::abs(pos_EMS / 6.2831853071795862);
    if (std::abs(dt - std::floor(dt + 0.5)) > 2.2204460492503131E-16 * dt) {
      rtDW.actual_angle = std::fmod(pos_EMS, 6.2831853071795862);
    } else {
      rtDW.actual_angle = 0.0;
    }

    if (rtDW.actual_angle == 0.0) {
      rtDW.actual_angle = 0.0;
    } else if (rtDW.actual_angle < 0.0) {
      rtDW.actual_angle += 6.2831853071795862;
    }
  }

  // End of MATLAB Function: '<S183>/Calculate Actual Angle'

  // Product: '<S181>/Divide' incorporates:
  //   Constant: '<S181>/Constant'

  rtDW.Divide_k = rtDW.UnitDelay / 0.096;

  // Product: '<S181>/Divide1' incorporates:
  //   Constant: '<S181>/Constant1'

  rtDW.Divide1_b = rtDW.Divide_k / 2.0;

  // Rounding: '<S181>/Round'
  rtDW.Round_a = std::floor(rtDW.Divide1_b);

  // Gain: '<S181>/Gain'
  rtDW.Gain_i = 2.0 * rtDW.Round_a;

  // Sum: '<S181>/Sum'
  rtDW.Sum_h = rtDW.Divide_k - rtDW.Gain_i;

  // Lookup_n-D: '<S176>/2-D Lookup Table' incorporates:
  //   Sum: '<S181>/Sum'

  rtDW.F = look2_binlx(rtDW.actual_angle, rtDW.Sum_h,
                       rtConstP.uDLookupTable_bp01Data,
                       rtConstP.uDLookupTable_bp02Data,
                       rtConstP.uDLookupTable_tableData,
                       rtConstP.uDLookupTable_maxIndex, 121UL);

  // Gain: '<S176>/Gain1'
  rtDW.Gain1 = 0.01 * rtDW.Saturation_p;

  // Product: '<S176>/Product'
  rtDW.F_n = rtDW.F * rtDW.Gain1;

  // Product: '<S180>/Product'
  rtDW.Product_a = rtDW.numero_EMS * rtDW.F_n;

  // Sum: '<S179>/Sum1'
  rtDW.Sum1_je = rtDW.Product_a - rtDW.F_drag;

  // Saturate: '<S179>/Saturation'
  pos_EMS = rtDW.Sum1_je;
  if (pos_EMS <= 0.0) {
    // Saturate: '<S179>/Saturation'
    rtDW.Saturation_br = 0.0;
  } else {
    // Saturate: '<S179>/Saturation'
    rtDW.Saturation_br = pos_EMS;
  }

  // End of Saturate: '<S179>/Saturation'

  // Product: '<S179>/Divide' incorporates:
  //   Constant: '<S179>/Constant'

  rtDW.acel = rtDW.Saturation_br / 250.0;

  // MATLAB Function: '<S187>/MATLAB Function'
  if (rtDW.UnitDelay < 1.0) {
    rtDW.out = 0.0;
  } else {
    rtDW.out = rtDW.UnitDelay - 1.0;
  }

  // End of MATLAB Function: '<S187>/MATLAB Function'

  // Update for DiscreteIntegrator: '<S178>/Discrete-Time Integrator2'
  rtDW.DiscreteTimeIntegrator2_DSTATE += 0.0001 * rtDW.Divide2;

  // Update for DiscreteIntegrator: '<S178>/Discrete-Time Integrator1'
  rtDW.DiscreteTimeIntegrator1_DSTATE += 0.0001 * rtDW.Divide_e;

  // Update for DiscreteIntegrator: '<S178>/Discrete-Time Integrator'
  rtDW.DiscreteTimeIntegrator_DSTATE += 0.0001 * rtDW.Divide1_n;

  // Update for DiscreteIntegrator: '<S179>/Discrete-Time Integrator1'
  rtDW.DiscreteTimeIntegrator1_DSTAT_g += 0.0001 * rtDW.vel;
  if (tmp) {
    // Update for DiscreteIntegrator: '<S49>/Integrator'
    rtDW.Integrator_DSTATE = 0.0001 * rtDW.IntegralGain + rtDW.Integrator;

    // Update for DiscreteIntegrator: '<S102>/Integrator'
    rtDW.Integrator_DSTATE_i = 0.0001 * rtDW.IntegralGain_p + rtDW.Integrator_k;
  }

  // Update for DiscreteIntegrator: '<S179>/Discrete-Time Integrator'
  rtDW.DiscreteTimeIntegrator_DSTATE_i += 0.0001 * rtDW.acel;

  // Update for UnitDelay: '<S176>/Unit Delay'
  rtDW.UnitDelay_DSTATE = rtDW.pos;

  // Update for UnitDelay: '<S191>/UD'
  //
  //  Block description for '<S191>/UD':
  //
  //   Store in Global RAM

  rtDW.UD_DSTATE = rtDW.TSamp;

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The resolution of this integer timer is 0.0001, which is the step size
  //  of the task. Size of "clockTick0" ensures timer will not overflow during the
  //  application lifespan selected.

  (&rtM)->Timing.clockTick0++;
  rate_scheduler((&rtM));
}

// Model initialize function
void control_block::initialize()
{
  // InitializeConditions for DiscreteIntegrator: '<S179>/Discrete-Time Integrator' 
  rtDW.DiscreteTimeIntegrator_DSTATE_i = 1.0;

  // SystemInitialize for MATLAB Function: '<S180>/Cálculo EMS'
  rtDW.pos_ref = -1.0;
  rtDW.end_booster = 3.0;

  // SystemInitialize for MATLAB Function: '<S182>/Frequency and Max Calculator' 
  rtDW.frecuencia_acc = 1.0;
}

const char* control_block::RT_MODEL::getErrorStatus() const
{
  return (errorStatus);
}

void control_block::RT_MODEL::setErrorStatus(const char* const volatile
  aErrorStatus)
{
  (errorStatus = aErrorStatus);
}

// Constructor
control_block::control_block() :
  rtDW(),
  rtM()
{
  // Currently there is no constructor body generated.
}

// Destructor
// Currently there is no destructor body generated.
control_block::~control_block() = default;

// Real-Time Model get method
control_block::RT_MODEL * control_block::getRTM()
{
  return (&rtM);
}

//
// File trailer for generated code.
//
// [EOF]
//
