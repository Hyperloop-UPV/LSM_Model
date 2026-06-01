#include "rte_speedgoat_IO316_100k_21_CI_02826_v2_parameters.h"
#include "speedgoat_IO316_100k_21_CI_02826_v2.h"
#include "speedgoat_IO316_100k_21_CI_02826_v2_cal.h"

extern speedgoat_IO316_100k_2_cal_type speedgoat_IO316_100k_2_cal_impl;
namespace slrealtime
{
  /* Description of SEGMENTS */
  SegmentVector segmentInfo {
    { (void*)&speedgoat_IO316_100k_2_cal_impl, (void**)
      &speedgoat_IO316_100k_21_CI__cal, sizeof(speedgoat_IO316_100k_2_cal_type),
      2 }
  };

  SegmentVector &getSegmentVector(void)
  {
    return segmentInfo;
  }
}                                      // slrealtime
