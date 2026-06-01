#include "rte_Speedgoat_Plant_Model_parameters.h"
#include "Speedgoat_Plant_Model.h"
#include "Speedgoat_Plant_Model_cal.h"

extern Speedgoat_Plant_Model_cal_type Speedgoat_Plant_Model_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&Speedgoat_Plant_Model_cal_impl, (void**)&Speedgoat_Plant_Model_cal,
      sizeof(Speedgoat_Plant_Model_cal_type), 2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
