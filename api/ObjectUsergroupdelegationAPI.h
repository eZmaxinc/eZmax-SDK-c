#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/usergroupdelegation_create_object_v1_request.h"
#include "../model/usergroupdelegation_create_object_v1_response.h"
#include "../model/usergroupdelegation_edit_object_v1_request.h"
#include "../model/usergroupdelegation_get_object_v2_response.h"


// Create a new Usergroupdelegation
//
// The endpoint allows to create one or many elements at once.
//
usergroupdelegation_create_object_v1_response_t*
ObjectUsergroupdelegationAPI_usergroupdelegationCreateObjectV1(apiClient_t *apiClient, usergroupdelegation_create_object_v1_request_t *usergroupdelegation_create_object_v1_request);


// Delete an existing Usergroupdelegation
//
// 
//
common_response_t*
ObjectUsergroupdelegationAPI_usergroupdelegationDeleteObjectV1(apiClient_t *apiClient, int *pkiUsergroupdelegationID);


// Edit an existing Usergroupdelegation
//
// 
//
common_response_t*
ObjectUsergroupdelegationAPI_usergroupdelegationEditObjectV1(apiClient_t *apiClient, int *pkiUsergroupdelegationID, usergroupdelegation_edit_object_v1_request_t *usergroupdelegation_edit_object_v1_request);


// Retrieve an existing Usergroupdelegation
//
// 
//
usergroupdelegation_get_object_v2_response_t*
ObjectUsergroupdelegationAPI_usergroupdelegationGetObjectV2(apiClient_t *apiClient, int *pkiUsergroupdelegationID);


