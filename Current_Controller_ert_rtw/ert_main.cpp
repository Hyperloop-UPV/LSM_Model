//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ert_main.cpp
//
// Code generated for Simulink model 'Current_Controller'.
//
// Model version                  : 1.15
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Wed Jun  3 12:36:37 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: STMicroelectronics->ST10/Super10
// Code generation objectives:
//    1. Execution efficiency
//    2. RAM efficiency
// Validation result: Not run
//
#include <stdio.h>              // This example main program uses printf/fflush
#include "Current_Controller.h"        // Model header file

static Current_Controller rtObj;       // Instance of model class

// '<Root>/Iabc'
static std::array<double, 3> arg_Iabc{ { 0.0, 0.0, 0.0 } };

// '<Root>/Init_Angle'
static double arg_Init_Angle{ 0.0 };

// '<Root>/Iq_ref'
static double arg_Iq_ref{ 0.0 };

// '<Root>/pos_speetec'
static double arg_pos_speetec{ 0.0 };

// '<Root>/Vabc'
static std::array<double, 3> arg_Vabc;

// '<Root>/ELE angle'
static double arg_ELE_angle;

// '<Root>/Vd'
static double arg_Vd;

// '<Root>/Vq'
static double arg_Vq;

// '<Root>/Iq_error'
static double arg_Iq_error;

// '<Root>/Id_error'
static double arg_Id_error;

// '<Root>/Iq_measured'
static double arg_Iq_measured;

// '<Root>/Id_measured'
static double arg_Id_measured;

//
// Associating rt_OneStep with a real-time clock or interrupt service routine
// is what makes the generated code "real-time".  The function rt_OneStep is
// always associated with the base rate of the model.  Subrates are managed
// by the base rate from inside the generated code.  Enabling/disabling
// interrupts and floating point context switches are target specific.  This
// example code indicates where these should take place relative to executing
// the generated code step function.  Overrun behavior should be tailored to
// your application needs.  This example simply sets an error status in the
// real-time model and returns from rt_OneStep.
//
void rt_OneStep(void);
void rt_OneStep(void)
{
  static bool OverrunFlag{ false };

  // Disable interrupts here

  // Check for overrun
  if (OverrunFlag) {
    return;
  }

  OverrunFlag = true;

  // Save FPU context here (if necessary)
  // Re-enable timer or interrupt here
  // Set model inputs here

  // Step the model
  rtObj.step(&arg_Iabc[0], arg_Init_Angle, arg_Iq_ref, arg_pos_speetec,
             &arg_Vabc[0], arg_ELE_angle, arg_Vd, arg_Vq, arg_Iq_error,
             arg_Id_error, arg_Iq_measured, arg_Id_measured);

  // Get model outputs here

  // Indicate task complete
  OverrunFlag = false;

  // Disable interrupts here
  // Restore FPU context here (if necessary)
  // Enable interrupts here
}

//
// The example main function illustrates what is required by your
// application code to initialize, execute, and terminate the generated code.
// Attaching rt_OneStep to a real-time clock is target specific. This example
// illustrates how you do this relative to initializing the model.
//
int main(int argc, const char *argv[])
{
  // Unused arguments
  (void)(argc);
  (void)(argv);

  // Initialize model
  rtObj.initialize();

  // Attach rt_OneStep to a timer or interrupt service routine with
  //  period 0.0002 seconds (base rate of the model) here.
  //  The call syntax for rt_OneStep is
  //
  //   rt_OneStep();

  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((nullptr));
  while (1) {
    //  Perform application tasks here
  }

  // The option 'Remove error status field in real-time model data structure'
  //  is selected, therefore the following code does not need to execute.


  // Terminate model
  rtObj.terminate();
  return 0;
}

//
// File trailer for generated code.
//
// [EOF]
//
