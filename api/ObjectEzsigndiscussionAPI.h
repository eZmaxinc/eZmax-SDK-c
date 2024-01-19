#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigndiscussion_create_object_v1_request.h"
#include "../model/ezsigndiscussion_create_object_v1_response.h"
#include "../model/ezsigndiscussion_delete_object_v1_response.h"
#include "../model/ezsigndiscussion_get_object_v2_response.h"


// Create a new Ezsigndiscussion
//
// The endpoint allows to create one or many elements at once.
//
ezsigndiscussion_create_object_v1_response_t*
ObjectEzsigndiscussionAPI_ezsigndiscussionCreateObjectV1(apiClient_t *apiClient, ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request);


// Delete an existing Ezsigndiscussion
//
// 
//
ezsigndiscussion_delete_object_v1_response_t*
ObjectEzsigndiscussionAPI_ezsigndiscussionDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigndiscussionID);


// Retrieve an existing Ezsigndiscussion
//
// 
//
ezsigndiscussion_get_object_v2_response_t*
ObjectEzsigndiscussionAPI_ezsigndiscussionGetObjectV2(apiClient_t *apiClient, int *pkiEzsigndiscussionID);


