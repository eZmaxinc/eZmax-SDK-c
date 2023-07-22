#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_get_report_v1_response.h"
#include "../model/common_response_error.h"


// Retrieve report from cache
//
// Retrieve a report that was previously generated and cached
//
common_get_report_v1_response_t*
ModuleReportAPI_reportGetReportFromCacheV1(apiClient_t *apiClient, char * sReportgroupCacheID );


