#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplateannotation_create_object_v1_request.h"
#include "../model/ezsigntemplateannotation_create_object_v1_response.h"
#include "../model/ezsigntemplateannotation_delete_object_v1_response.h"
#include "../model/ezsigntemplateannotation_edit_object_v1_request.h"
#include "../model/ezsigntemplateannotation_edit_object_v1_response.h"
#include "../model/ezsigntemplateannotation_get_object_v2_response.h"


// Create a new Ezsigntemplateannotation
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplateannotation_create_object_v1_response_t*
ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationCreateObjectV1(apiClient_t *apiClient, ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request);


// Delete an existing Ezsigntemplateannotation
//
// 
//
ezsigntemplateannotation_delete_object_v1_response_t*
ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplateannotationID);


// Edit an existing Ezsigntemplateannotation
//
// 
//
ezsigntemplateannotation_edit_object_v1_response_t*
ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplateannotationID, ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request);


// Retrieve an existing Ezsigntemplateannotation
//
// 
//
ezsigntemplateannotation_get_object_v2_response_t*
ObjectEzsigntemplateannotationAPI_ezsigntemplateannotationGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplateannotationID);


