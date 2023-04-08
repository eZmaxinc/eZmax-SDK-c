#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignbulksenddocumentmapping_create_object_v1_request.h"
#include "../model/ezsignbulksenddocumentmapping_create_object_v1_response.h"
#include "../model/ezsignbulksenddocumentmapping_delete_object_v1_response.h"
#include "../model/ezsignbulksenddocumentmapping_get_object_v2_response.h"


// Create a new Ezsignbulksenddocumentmapping
//
// The endpoint allows to create one or many elements at once.
//
ezsignbulksenddocumentmapping_create_object_v1_response_t*
ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingCreateObjectV1(apiClient_t *apiClient, ezsignbulksenddocumentmapping_create_object_v1_request_t * ezsignbulksenddocumentmapping_create_object_v1_request );


// Delete an existing Ezsignbulksenddocumentmapping
//
// 
//
ezsignbulksenddocumentmapping_delete_object_v1_response_t*
ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignbulksenddocumentmappingID );


// Retrieve an existing Ezsignbulksenddocumentmapping
//
// 
//
ezsignbulksenddocumentmapping_get_object_v2_response_t*
ObjectEzsignbulksenddocumentmappingAPI_ezsignbulksenddocumentmappingGetObjectV2(apiClient_t *apiClient, int pkiEzsignbulksenddocumentmappingID );


