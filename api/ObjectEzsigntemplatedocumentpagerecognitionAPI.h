#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplatedocumentpagerecognition_create_object_v1_request.h"
#include "../model/ezsigntemplatedocumentpagerecognition_create_object_v1_response.h"
#include "../model/ezsigntemplatedocumentpagerecognition_delete_object_v1_response.h"
#include "../model/ezsigntemplatedocumentpagerecognition_edit_object_v1_request.h"
#include "../model/ezsigntemplatedocumentpagerecognition_edit_object_v1_response.h"
#include "../model/ezsigntemplatedocumentpagerecognition_get_object_v2_response.h"


// Create a new Ezsigntemplatedocumentpagerecognition
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatedocumentpagerecognition_create_object_v1_response_t*
ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionCreateObjectV1(apiClient_t *apiClient, ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request);


// Delete an existing Ezsigntemplatedocumentpagerecognition
//
// 
//
ezsigntemplatedocumentpagerecognition_delete_object_v1_response_t*
ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentpagerecognitionID);


// Edit an existing Ezsigntemplatedocumentpagerecognition
//
// 
//
ezsigntemplatedocumentpagerecognition_edit_object_v1_response_t*
ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentpagerecognitionID, ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t *ezsigntemplatedocumentpagerecognition_edit_object_v1_request);


// Retrieve an existing Ezsigntemplatedocumentpagerecognition
//
// 
//
ezsigntemplatedocumentpagerecognition_get_object_v2_response_t*
ObjectEzsigntemplatedocumentpagerecognitionAPI_ezsigntemplatedocumentpagerecognitionGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentpagerecognitionID);


