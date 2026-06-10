#include "rte_Speedgoat_Plant_Model_parameters.h"
#include "Speedgoat_Plant_Model.h"
#include "Speedgoat_Plant_Model_cal.h"

RTE_Param_Service_T RTE_Param_Service = {
  10.0
};

RTE_Param_Service_T *RTE_Param_Service_ptr = &RTE_Param_Service;
namespace slrealtime
{
  void initializeParametersAtRuntime()
  {
  }
}

real_T* get_sensor_value(void)
{
  return &RTE_Param_Service_ptr->sensor_value;
}

extern Speedgoat_Plant_Model_cal_type Speedgoat_Plant_Model_cal_impl;
extern RTE_Param_Service_T RTE_Param_Service;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&RTE_Param_Service, (void**)&RTE_Param_Service_ptr, sizeof
      (RTE_Param_Service_T), 2 },

    { (void*)&Speedgoat_Plant_Model_cal_impl, (void**)&Speedgoat_Plant_Model_cal,
      sizeof(Speedgoat_Plant_Model_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
