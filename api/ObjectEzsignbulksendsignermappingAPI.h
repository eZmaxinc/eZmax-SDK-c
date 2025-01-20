#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/ezsignbulksendsignermapping_create_object_v1_request.h"
#include "../model/ezsignbulksendsignermapping_create_object_v1_response.h"
#include "../model/ezsignbulksendsignermapping_get_object_v2_response.h"


// Create a new Ezsignbulksendsignermapping
//
// The endpoint allows to create one or many elements at once.
//
ezsignbulksendsignermapping_create_object_v1_response_t*
ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingCreateObjectV1(apiClient_t *apiClient, ezsignbulksendsignermapping_create_object_v1_request_t *ezsignbulksendsignermapping_create_object_v1_request);


// Delete an existing Ezsignbulksendsignermapping
//
// 
//
common_response_t*
ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignbulksendsignermappingID);


// Retrieve an existing Ezsignbulksendsignermapping
//
// 
//
ezsignbulksendsignermapping_get_object_v2_response_t*
ObjectEzsignbulksendsignermappingAPI_ezsignbulksendsignermappingGetObjectV2(apiClient_t *apiClient, int *pkiEzsignbulksendsignermappingID);


