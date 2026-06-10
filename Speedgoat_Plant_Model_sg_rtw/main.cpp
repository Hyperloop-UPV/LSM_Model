/* Main generated for Simulink Real-Time model Speedgoat_Plant_Model */
#include <ModelInfo.hpp>
#include <utilities.hpp>
#include "Speedgoat_Plant_Model.h"
#include "rte_Speedgoat_Plant_Model_parameters.h"

/* Task wrapper function definitions */
void Speedgoat_Plant_Model_Task1(void)
{ 
    Speedgoat_Plant_Model_step0();
} 
void Speedgoat_Plant_Model_Task2(void)
{ 
    Speedgoat_Plant_Model_step1();
} 
void Speedgoat_Plant_Model_Task3(void)
{ 
    Speedgoat_Plant_Model_step2();
} 
/* Task descriptors */
slrealtime::TaskInfo task_1( 0u, std::bind(Speedgoat_Plant_Model_Task1), slrealtime::TaskInfo::PERIODIC, 1e-05, 0, 40);
slrealtime::TaskInfo task_2( 1u, std::bind(Speedgoat_Plant_Model_Task2), slrealtime::TaskInfo::PERIODIC, 0.0001, 0, 39);
slrealtime::TaskInfo task_3( 2u, std::bind(Speedgoat_Plant_Model_Task3), slrealtime::TaskInfo::PERIODIC, 0.001, 0, 38);

/* Executable base address for XCP */
#ifdef __linux__
extern char __executable_start;
static uintptr_t const base_address = reinterpret_cast<uintptr_t>(&__executable_start);
#else
/* Set 0 as placeholder, to be parsed later from /proc filesystem */
static uintptr_t const base_address = 0;
#endif

/* Model descriptor */
slrealtime::ModelInfo Speedgoat_Plant_Model_Info =
{
    "Speedgoat_Plant_Model",
    Speedgoat_Plant_Model_initialize,
    Speedgoat_Plant_Model_terminate,
    []()->char const*& { return Speedgoat_Plant_Model_M->errorStatus; },
    []()->unsigned char& { return Speedgoat_Plant_Model_M->Timing.stopRequestedFlag; },
    { task_1, task_2, task_3 },
    slrealtime::getSegmentVector()
};

int main(int argc, char *argv[]) {
    slrealtime::BaseAddress::set(base_address);
    slrealtime::initializeParametersAtRuntime();
    return slrealtime::runModel(argc, argv, Speedgoat_Plant_Model_Info);
}
