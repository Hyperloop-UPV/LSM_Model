/* Main generated for Simulink Real-Time model speedgoat_IO316_100k_21_CI_02826_v2 */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "rte_speedgoat_IO316_100k_21_CI_02826_v2_parameters.h"
#include "speedgoat_IO316_100k_21_CI_02826_v2.h"

/* Task wrapper function definitions */
void speedgoat_IO316_100k_21_CI_02826_v2_Task1(void)
{ 
    speedgoat_IO316_100k_21_CI_02826_v2_step0();
} 
void speedgoat_IO316_100k_21_CI_02826_v2_Task2(void)
{ 
    speedgoat_IO316_100k_21_CI_02826_v2_step1();
} 
extern void S3_InterruptSetup1_fc(void);
void speedgoat_IO316_100k_21_CI_02826_v2_Task3(void)
{ 
    S3_InterruptSetup1_fc();
} 
/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(speedgoat_IO316_100k_21_CI_02826_v2_Task1), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 40);
slrealtime::TaskInfo task_2( 1u, std::bind(speedgoat_IO316_100k_21_CI_02826_v2_Task2), slrealtime::TaskInfo::PERIODIC, 0.007, 0, 39);
slrealtime::TaskInfo task_3( 2u, std::bind(speedgoat_IO316_100k_21_CI_02826_v2_Task3), slrealtime::TaskInfo::ASYNCHRONOUS, -1, -2, 254);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo speedgoat_IO316_100k_21_CI_02826_v2_Info =
{
    "speedgoat_IO316_100k_21_CI_02826_v2",
    speedgoat_IO316_100k_21_CI_02826_v2_initialize,
    speedgoat_IO316_100k_21_CI_02826_v2_terminate,
    []()->char const*& { return speedgoat_IO316_100k_21_CI_02826_v2_M->errorStatus; },
    []()->unsigned char& { return speedgoat_IO316_100k_21_CI_02826_v2_M->Timing.stopRequestedFlag; },
    { task_1, task_2, task_3 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    return slrealtime::runModel(argc, argv, speedgoat_IO316_100k_21_CI_02826_v2_Info);
}
