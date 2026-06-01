#ifndef speedgoat_IO316_100k_21_CI_02826_v2_cal_h_
#define speedgoat_IO316_100k_21_CI_02826_v2_cal_h_
#include "rtwtypes.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct speedgoat_IO316_100k_2_cal_type {
  uint32_T UnitDelayEnabledSynchronous6_In;
                              /* Mask Parameter: UnitDelayEnabledSynchronous6_In
                               * Referenced by: '<S15>/Enabled Delay'
                               */
  uint32_T WrapToZero_Threshold;       /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S10>/FixPt Switch'
                                        */
  uint32_T WrapToZero_Threshold_i;     /* Mask Parameter: WrapToZero_Threshold_i
                                        * Referenced by: '<S14>/FixPt Switch'
                                        */
  real_T CoSInterrupt_P1_Size[2];    /* Computed Parameter: CoSInterrupt_P1_Size
                                      * Referenced by: '<S7>/CoS Interrupt'
                                      */
  real_T CoSInterrupt_P1;              /* Expression: id
                                        * Referenced by: '<S7>/CoS Interrupt'
                                        */
  real_T CoSInterrupt_P2_Size[2];    /* Computed Parameter: CoSInterrupt_P2_Size
                                      * Referenced by: '<S7>/CoS Interrupt'
                                      */
  real_T CoSInterrupt_P2;              /* Expression: debounce
                                        * Referenced by: '<S7>/CoS Interrupt'
                                        */
  real_T CoSInterrupt_P3_Size[2];    /* Computed Parameter: CoSInterrupt_P3_Size
                                      * Referenced by: '<S7>/CoS Interrupt'
                                      */
  real_T CoSInterrupt_P3;              /* Expression: delay
                                        * Referenced by: '<S7>/CoS Interrupt'
                                        */
  real_T CoSInterrupt_P4_Size[2];    /* Computed Parameter: CoSInterrupt_P4_Size
                                      * Referenced by: '<S7>/CoS Interrupt'
                                      */
  real_T CoSInterrupt_P4;              /* Expression: polarity
                                        * Referenced by: '<S7>/CoS Interrupt'
                                        */
  real_T CoSInterrupt_P5_Size[2];    /* Computed Parameter: CoSInterrupt_P5_Size
                                      * Referenced by: '<S7>/CoS Interrupt'
                                      */
  real_T CoSInterrupt_P5;              /* Expression: ts
                                        * Referenced by: '<S7>/CoS Interrupt'
                                        */
  real_T PWMCapture_P1_Size[2];        /* Computed Parameter: PWMCapture_P1_Size
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P1;                /* Expression: fpgaFrequency
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P2_Size[2];        /* Computed Parameter: PWMCapture_P2_Size
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P2;                /* Expression: id
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P3_Size[2];        /* Computed Parameter: PWMCapture_P3_Size
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P3[2];             /* Expression: chan
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P4_Size[2];        /* Computed Parameter: PWMCapture_P4_Size
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P4;                /* Expression: showHighDuration
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P5_Size[2];        /* Computed Parameter: PWMCapture_P5_Size
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P5;                /* Expression: showLowDuration
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P6_Size[2];        /* Computed Parameter: PWMCapture_P6_Size
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P6;                /* Expression: showDC16
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P7_Size[2];        /* Computed Parameter: PWMCapture_P7_Size
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P7;                /* Expression: showDC8
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P8_Size[2];        /* Computed Parameter: PWMCapture_P8_Size
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P8;                /* Expression: showTOn
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P9_Size[2];        /* Computed Parameter: PWMCapture_P9_Size
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P9;                /* Expression: showTOff
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P10_Size[2];      /* Computed Parameter: PWMCapture_P10_Size
                                       * Referenced by: '<S1>/PWM Capture'
                                       */
  real_T PWMCapture_P10;               /* Expression: showPeriod
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P11_Size[2];      /* Computed Parameter: PWMCapture_P11_Size
                                       * Referenced by: '<S1>/PWM Capture'
                                       */
  real_T PWMCapture_P11;               /* Expression: showValidData
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P12_Size[2];      /* Computed Parameter: PWMCapture_P12_Size
                                       * Referenced by: '<S1>/PWM Capture'
                                       */
  real_T PWMCapture_P12[2];            /* Expression: captureMode
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P13_Size[2];      /* Computed Parameter: PWMCapture_P13_Size
                                       * Referenced by: '<S1>/PWM Capture'
                                       */
  real_T PWMCapture_P13[2];            /* Expression: captureTimeout_si
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P14_Size[2];      /* Computed Parameter: PWMCapture_P14_Size
                                       * Referenced by: '<S1>/PWM Capture'
                                       */
  real_T PWMCapture_P14;               /* Expression: ts
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T PWMCapture_P15_Size[2];      /* Computed Parameter: PWMCapture_P15_Size
                                       * Referenced by: '<S1>/PWM Capture'
                                       */
  real_T PWMCapture_P15[2];            /* Expression: debounce_si
                                        * Referenced by: '<S1>/PWM Capture'
                                        */
  real_T Digitalinput_P1_Size[2];    /* Computed Parameter: Digitalinput_P1_Size
                                      * Referenced by: '<S2>/Digital input'
                                      */
  real_T Digitalinput_P1;              /* Expression: id
                                        * Referenced by: '<S2>/Digital input'
                                        */
  real_T Digitalinput_P2_Size[2];    /* Computed Parameter: Digitalinput_P2_Size
                                      * Referenced by: '<S2>/Digital input'
                                      */
  real_T Digitalinput_P2[5];           /* Expression: chan
                                        * Referenced by: '<S2>/Digital input'
                                        */
  real_T Digitalinput_P3_Size[2];    /* Computed Parameter: Digitalinput_P3_Size
                                      * Referenced by: '<S2>/Digital input'
                                      */
  real_T Digitalinput_P3;              /* Expression: vectorizeOutput
                                        * Referenced by: '<S2>/Digital input'
                                        */
  real_T Digitalinput_P4_Size[2];    /* Computed Parameter: Digitalinput_P4_Size
                                      * Referenced by: '<S2>/Digital input'
                                      */
  real_T Digitalinput_P4;              /* Expression: ts
                                        * Referenced by: '<S2>/Digital input'
                                        */
  real_T Offset_Bias[5];               /* Expression: 0:2:8
                                        * Referenced by: '<S2>/Offset'
                                        */
  real_T PulseGenDIO_Amp;              /* Expression: 1
                                        * Referenced by: '<S2>/Pulse Gen DIO'
                                        */
  real_T PulseGenDIO_Period;           /* Expression: 20
                                        * Referenced by: '<S2>/Pulse Gen DIO'
                                        */
  real_T PulseGenDIO_Duty;             /* Expression: 10
                                        * Referenced by: '<S2>/Pulse Gen DIO'
                                        */
  real_T PulseGenDIO_PhaseDelay[3];    /* Expression: [0:5:10]
                                        * Referenced by: '<S2>/Pulse Gen DIO'
                                        */
  real_T Digitaloutput_P1_Size[2];  /* Computed Parameter: Digitaloutput_P1_Size
                                     * Referenced by: '<S2>/Digital output'
                                     */
  real_T Digitaloutput_P1;             /* Expression: id
                                        * Referenced by: '<S2>/Digital output'
                                        */
  real_T Digitaloutput_P2_Size[2];  /* Computed Parameter: Digitaloutput_P2_Size
                                     * Referenced by: '<S2>/Digital output'
                                     */
  real_T Digitaloutput_P2[3];          /* Expression: chan
                                        * Referenced by: '<S2>/Digital output'
                                        */
  real_T Digitaloutput_P3_Size[2];  /* Computed Parameter: Digitaloutput_P3_Size
                                     * Referenced by: '<S2>/Digital output'
                                     */
  real_T Digitaloutput_P3;             /* Expression: vectorizeInput
                                        * Referenced by: '<S2>/Digital output'
                                        */
  real_T Digitaloutput_P4_Size[2];  /* Computed Parameter: Digitaloutput_P4_Size
                                     * Referenced by: '<S2>/Digital output'
                                     */
  real_T Digitaloutput_P4[3];          /* Expression: reset
                                        * Referenced by: '<S2>/Digital output'
                                        */
  real_T Digitaloutput_P5_Size[2];  /* Computed Parameter: Digitaloutput_P5_Size
                                     * Referenced by: '<S2>/Digital output'
                                     */
  real_T Digitaloutput_P5[3];          /* Expression: init
                                        * Referenced by: '<S2>/Digital output'
                                        */
  real_T Digitaloutput_P6_Size[2];  /* Computed Parameter: Digitaloutput_P6_Size
                                     * Referenced by: '<S2>/Digital output'
                                     */
  real_T Digitaloutput_P6;             /* Expression: ts
                                        * Referenced by: '<S2>/Digital output'
                                        */
  real_T Aon_Value;                    /* Expression: [0]*1/250
                                        * Referenced by: '<S4>/Aon'
                                        */
  real_T Aoff_Value;                   /* Expression: [0.5]*1/250
                                        * Referenced by: '<S4>/Aoff'
                                        */
  real_T Bon_Value;                    /* Expression: [0.25]*1/250
                                        * Referenced by: '<S4>/Bon'
                                        */
  real_T Boff_Value;                   /* Expression: [0.75]*1/250
                                        * Referenced by: '<S4>/Boff'
                                        */
  real_T PWMgeneration_P1_Size[2];  /* Computed Parameter: PWMgeneration_P1_Size
                                     * Referenced by: '<S4>/PWM generation'
                                     */
  real_T PWMgeneration_P1;             /* Expression: id
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P2_Size[2];  /* Computed Parameter: PWMgeneration_P2_Size
                                     * Referenced by: '<S4>/PWM generation'
                                     */
  real_T PWMgeneration_P2;             /* Expression: chan
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P3_Size[2];  /* Computed Parameter: PWMgeneration_P3_Size
                                     * Referenced by: '<S4>/PWM generation'
                                     */
  real_T PWMgeneration_P3;             /* Expression: fpga_frequency
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P4_Size[2];  /* Computed Parameter: PWMgeneration_P4_Size
                                     * Referenced by: '<S4>/PWM generation'
                                     */
  real_T PWMgeneration_P4;             /* Expression: symmetric
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P5_Size[2];  /* Computed Parameter: PWMgeneration_P5_Size
                                     * Referenced by: '<S4>/PWM generation'
                                     */
  real_T PWMgeneration_P5;             /* Expression: invert_a
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P6_Size[2];  /* Computed Parameter: PWMgeneration_P6_Size
                                     * Referenced by: '<S4>/PWM generation'
                                     */
  real_T PWMgeneration_P6;             /* Expression: invert_b
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P7_Size[2];  /* Computed Parameter: PWMgeneration_P7_Size
                                     * Referenced by: '<S4>/PWM generation'
                                     */
  real_T PWMgeneration_P7;             /* Expression: invert_c
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P8_Size[2];  /* Computed Parameter: PWMgeneration_P8_Size
                                     * Referenced by: '<S4>/PWM generation'
                                     */
  real_T PWMgeneration_P8;             /* Expression: bit_width_pwm_gen
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P9_Size[2];  /* Computed Parameter: PWMgeneration_P9_Size
                                     * Referenced by: '<S4>/PWM generation'
                                     */
  real_T PWMgeneration_P9;             /* Expression: period
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P10_Size[2];/* Computed Parameter: PWMgeneration_P10_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P10;            /* Expression: a_on
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P11_Size[2];/* Computed Parameter: PWMgeneration_P11_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P11;            /* Expression: a_off
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P12_Size[2];/* Computed Parameter: PWMgeneration_P12_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P12;            /* Expression: b_on
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P13_Size[2];/* Computed Parameter: PWMgeneration_P13_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P13;            /* Expression: b_off
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P14_Size[2];/* Computed Parameter: PWMgeneration_P14_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P14;            /* Expression: c_on
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P15_Size[2];/* Computed Parameter: PWMgeneration_P15_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P15;            /* Expression: c_off
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P16_Size[2];/* Computed Parameter: PWMgeneration_P16_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P16;            /* Expression: trigger_duration
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P17_Size[2];/* Computed Parameter: PWMgeneration_P17_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P17;            /* Expression: protection
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P18_Size[2];/* Computed Parameter: PWMgeneration_P18_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P18;            /* Expression: enable_latch_half_period
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P19_Size[2];/* Computed Parameter: PWMgeneration_P19_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P19;            /* Expression: trigger_source
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P20_Size[2];/* Computed Parameter: PWMgeneration_P20_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P20;            /* Expression: idle_a
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P21_Size[2];/* Computed Parameter: PWMgeneration_P21_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P21;            /* Expression: idle_b
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P22_Size[2];/* Computed Parameter: PWMgeneration_P22_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P22;            /* Expression: idle_c
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P23_Size[2];/* Computed Parameter: PWMgeneration_P23_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P23;            /* Expression: deadband
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P24_Size[2];/* Computed Parameter: PWMgeneration_P24_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P24;            /* Expression: show_a_input
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P25_Size[2];/* Computed Parameter: PWMgeneration_P25_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P25;            /* Expression: show_b_input
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P26_Size[2];/* Computed Parameter: PWMgeneration_P26_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P26;            /* Expression: show_c_input
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P27_Size[2];/* Computed Parameter: PWMgeneration_P27_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P27;            /* Expression: show_period_input
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P28_Size[2];/* Computed Parameter: PWMgeneration_P28_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P28;            /* Expression: b_is_complement_of_a
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P29_Size[2];/* Computed Parameter: PWMgeneration_P29_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P29;            /* Expression: pwm_a_dc
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P30_Size[2];/* Computed Parameter: PWMgeneration_P30_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P30;            /* Expression: pwm_b_dc
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P31_Size[2];/* Computed Parameter: PWMgeneration_P31_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P31;            /* Expression: show_force_stop_input
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P32_Size[2];/* Computed Parameter: PWMgeneration_P32_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P32;            /* Expression: cancels_pwm_generation
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P33_Size[2];/* Computed Parameter: PWMgeneration_P33_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P33;            /* Expression: delay
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P34_Size[2];/* Computed Parameter: PWMgeneration_P34_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P34;            /* Expression: enable_natural_pwm
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T PWMgeneration_P35_Size[2];/* Computed Parameter: PWMgeneration_P35_Size
                                    * Referenced by: '<S4>/PWM generation'
                                    */
  real_T PWMgeneration_P35;            /* Expression: ts
                                        * Referenced by: '<S4>/PWM generation'
                                        */
  real_T Constant_Value;               /* Expression: 100*[1]
                                        * Referenced by: '<S5>/Constant'
                                        */
  real_T QAE_P1_Size[2];               /* Computed Parameter: QAE_P1_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P1;                       /* Expression: fpgaFrequency
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P2_Size[2];               /* Computed Parameter: QAE_P2_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P2;                       /* Expression: id
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P3_Size[2];               /* Computed Parameter: QAE_P3_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P3;                       /* Expression: chan
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P4_Size[2];               /* Computed Parameter: QAE_P4_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P4;                       /* Expression: sampleTime
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P5_Size[2];               /* Computed Parameter: QAE_P5_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P5;                       /* Expression: numOfSlots
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P6_Size[2];               /* Computed Parameter: QAE_P6_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P6;                       /* Expression: initPos
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P7_Size[2];               /* Computed Parameter: QAE_P7_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P7;                       /* Expression: sigAswitchOn
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P8_Size[2];               /* Computed Parameter: QAE_P8_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P8;                       /* Expression: sigBswitchOff
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P9_Size[2];               /* Computed Parameter: QAE_P9_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P9;                       /* Expression: sigBswitchOn
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P10_Size[2];              /* Computed Parameter: QAE_P10_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P10;                      /* Expression: showOutputPosition
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P11_Size[2];              /* Computed Parameter: QAE_P11_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P11;                      /* Expression: showOutputSlotAngle
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P12_Size[2];              /* Computed Parameter: QAE_P12_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P12;                      /* Expression: sigAdismissEn
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P13_Size[2];              /* Computed Parameter: QAE_P13_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P13;                      /* Expression: sigAdismissSingle
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P14_Size[2];              /* Computed Parameter: QAE_P14_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P14;                      /* Expression: sigAdismissHigh
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P15_Size[2];              /* Computed Parameter: QAE_P15_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P15;                      /* Expression: sigBdismissEn
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P16_Size[2];              /* Computed Parameter: QAE_P16_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P16;                      /* Expression: sigBdismissSingle
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P17_Size[2];              /* Computed Parameter: QAE_P17_Size
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T QAE_P17;                      /* Expression: sigBdismissHigh
                                        * Referenced by: '<S5>/QAE'
                                        */
  real_T SPIMaster_P1_Size[2];         /* Computed Parameter: SPIMaster_P1_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P1;                 /* Expression: fpga_frequency
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P2_Size[2];         /* Computed Parameter: SPIMaster_P2_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P2;                 /* Expression: id
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P3_Size[2];         /* Computed Parameter: SPIMaster_P3_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P3;                 /* Expression: chan
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P4_Size[2];         /* Computed Parameter: SPIMaster_P4_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P4;                 /* Expression: samp_time
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P5_Size[2];         /* Computed Parameter: SPIMaster_P5_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P5;                 /* Expression: role
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P6_Size[2];         /* Computed Parameter: SPIMaster_P6_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P6;                 /* Expression: sync_mode
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P7_Size[2];         /* Computed Parameter: SPIMaster_P7_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P7;                 /* Expression: multislave_mode
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P8_Size[2];         /* Computed Parameter: SPIMaster_P8_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P8[8];              /* Expression: multislave_chan
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P9_Size[2];         /* Computed Parameter: SPIMaster_P9_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P9;                 /* Expression: write_only
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P10_Size[2];        /* Computed Parameter: SPIMaster_P10_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P10;                /* Expression: read_only
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P11_Size[2];        /* Computed Parameter: SPIMaster_P11_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P11;                /* Expression: cpol
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P12_Size[2];        /* Computed Parameter: SPIMaster_P12_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P12;                /* Expression: cpha
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P13_Size[2];        /* Computed Parameter: SPIMaster_P13_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P13;                /* Expression: frequency
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P14_Size[2];        /* Computed Parameter: SPIMaster_P14_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P14;                /* Expression: delay_start
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P15_Size[2];        /* Computed Parameter: SPIMaster_P15_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P15;                /* Expression: delay_interword
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P16_Size[2];        /* Computed Parameter: SPIMaster_P16_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P16;                /* Expression: delay_stop
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P17_Size[2];        /* Computed Parameter: SPIMaster_P17_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P17;                /* Expression: delay_compensation
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P18_Size[2];        /* Computed Parameter: SPIMaster_P18_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P18;                /* Expression: words_per_frame
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P19_Size[2];        /* Computed Parameter: SPIMaster_P19_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P19;                /* Expression: dynamic_words_per_frame
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P20_Size[2];        /* Computed Parameter: SPIMaster_P20_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P20;                /* Expression: bits_per_word
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P21_Size[2];        /* Computed Parameter: SPIMaster_P21_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P21;                /* Expression: bit_shift_lsb_first
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P22_Size[2];        /* Computed Parameter: SPIMaster_P22_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P22;                /* Expression: no_cs
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P23_Size[2];        /* Computed Parameter: SPIMaster_P23_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P23;                /* Expression: clock_timeout
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P24_Size[2];        /* Computed Parameter: SPIMaster_P24_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P24;                /* Expression: data_sync_length
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P25_Size[2];        /* Computed Parameter: SPIMaster_P25_Size
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  real_T SPIMaster_P25;                /* Expression: data_sync_frame_start
                                        * Referenced by: '<S6>/SPI Master'
                                        */
  uint32_T Out1_Y0;                    /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S7>/Out1'
                                        */
  uint32_T FixPtConstant_Value;       /* Computed Parameter: FixPtConstant_Value
                                       * Referenced by: '<S9>/FixPt Constant'
                                       */
  uint32_T Output_InitialCondition;
                                  /* Computed Parameter: Output_InitialCondition
                                   * Referenced by: '<S8>/Output'
                                   */
  uint32_T Constant_Value_b;           /* Computed Parameter: Constant_Value_b
                                        * Referenced by: '<S10>/Constant'
                                        */
  uint32_T RateTransition1_InitialConditio;
                          /* Computed Parameter: RateTransition1_InitialConditio
                           * Referenced by: '<S6>/Rate Transition1'
                           */
  uint32_T Output_InitialCondition_p;
                                /* Computed Parameter: Output_InitialCondition_p
                                 * Referenced by: '<S11>/Output'
                                 */
  uint32_T Constant16_Value[20];       /* Computed Parameter: Constant16_Value
                                        * Referenced by: '<S6>/Constant16'
                                        */
  uint32_T FixPtConstant_Value_e;   /* Computed Parameter: FixPtConstant_Value_e
                                     * Referenced by: '<S13>/FixPt Constant'
                                     */
  uint32_T Constant_Value_h;           /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S14>/Constant'
                                        */
};

/* Storage class 'PageSwitching' */
extern speedgoat_IO316_100k_2_cal_type speedgoat_IO316_100k_2_cal_impl;
extern speedgoat_IO316_100k_2_cal_type *speedgoat_IO316_100k_21_CI__cal;

#endif                          /* speedgoat_IO316_100k_21_CI_02826_v2_cal_h_ */
