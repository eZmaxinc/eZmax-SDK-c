#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/externalbroker_import_into_edm_v1_request.h"
#include "../model/externalbroker_import_into_edm_v1_response.h"


// Import attachments into the Externalbroker
//
// 
//
externalbroker_import_into_edm_v1_response_t*
ObjectExternalbrokerAPI_externalbrokerImportIntoEDMV1(apiClient_t *apiClient, int *pkiExternalbrokerID, externalbroker_import_into_edm_v1_request_t *externalbroker_import_into_edm_v1_request);


