// all flags for dataprovider defined in a same place, or will not build due to multiple DEFINE locations

#include "kimera-vio/dataprovider/FlagsForDataProviders.h"

DEFINE_string(dataset_path,
              "/home/pi/dataset/custom",
              "Path of custom dataset (i.e. Euroc, /home/userid/datasets/custom).");
DEFINE_int64(initial_k,
             0,
             "Initial frame to start processing dataset, "
             "previous frames will not be used.");
DEFINE_int64(final_k,
             100000,
             "Final frame to finish processing dataset, "
             "subsequent frames will not be used.");
DEFINE_bool(log_euroc_gt_data,
            false,
            "Log Euroc ground-truth data to file for later evaluation.");
