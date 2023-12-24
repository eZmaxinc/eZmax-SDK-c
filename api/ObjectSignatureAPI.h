#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/signature_create_object_v1_request.h"
#include "../model/signature_create_object_v1_response.h"
#include "../model/signature_delete_object_v1_response.h"
#include "../model/signature_edit_object_v1_request.h"
#include "../model/signature_edit_object_v1_response.h"
#include "../model/signature_get_object_v2_response.h"


// Create a new Signature
//
// The endpoint allows to create one or many elements at once.
//
signature_create_object_v1_response_t*
ObjectSignatureAPI_signatureCreateObjectV1(apiClient_t *apiClient, signature_create_object_v1_request_t *signature_create_object_v1_request);


// Delete an existing Signature
//
// 
//
signature_delete_object_v1_response_t*
ObjectSignatureAPI_signatureDeleteObjectV1(apiClient_t *apiClient, int *pkiSignatureID);


// Edit an existing Signature
//
// 
//
signature_edit_object_v1_response_t*
ObjectSignatureAPI_signatureEditObjectV1(apiClient_t *apiClient, int *pkiSignatureID, signature_edit_object_v1_request_t *signature_edit_object_v1_request);


// Retrieve an existing Signature
//
// 
//
signature_get_object_v2_response_t*
ObjectSignatureAPI_signatureGetObjectV2(apiClient_t *apiClient, int *pkiSignatureID);


