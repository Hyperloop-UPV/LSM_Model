#ifndef _RTE_SPEEDGOAT_PLANT_MODEL_PARAMETERS_H
#define _RTE_SPEEDGOAT_PLANT_MODEL_PARAMETERS_H
#include "rtwtypes.h"
#include "SegmentInfo.hpp"
#include "multiword_types.h"
#include "Speedgoat_Plant_Model_types.h"

struct RTE_Param_Service_T {
  real_T sensor_value;
};

extern RTE_Param_Service_T RTE_Param_Service;
extern RTE_Param_Service_T *RTE_Param_Service_ptr;
namespace slrealtime
{
  void initializeParametersAtRuntime();
}

real_T* get_sensor_value(void);
namespace slrealtime
{
  SegmentVector &getSegmentVector(void);
}                                      // slrealtime

#endif
