#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/usergroupmembership_create_object_v1_request.h"
#include "../model/usergroupmembership_create_object_v1_response.h"
#include "../model/usergroupmembership_edit_object_v1_request.h"
#include "../model/usergroupmembership_get_object_v2_response.h"


// Create a new Usergroupmembership
//
// The endpoint allows to create one or many elements at once.
//
usergroupmembership_create_object_v1_response_t*
ObjectUsergroupmembershipAPI_usergroupmembershipCreateObjectV1(apiClient_t *apiClient, usergroupmembership_create_object_v1_request_t *usergroupmembership_create_object_v1_request);


// Delete an existing Usergroupmembership
//
// 
//
common_response_t*
ObjectUsergroupmembershipAPI_usergroupmembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiUsergroupmembershipID);


// Edit an existing Usergroupmembership
//
// 
//
common_response_t*
ObjectUsergroupmembershipAPI_usergroupmembershipEditObjectV1(apiClient_t *apiClient, int *pkiUsergroupmembershipID, usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request);


// Retrieve an existing Usergroupmembership
//
// 
//
usergroupmembership_get_object_v2_response_t*
ObjectUsergroupmembershipAPI_usergroupmembershipGetObjectV2(apiClient_t *apiClient, int *pkiUsergroupmembershipID);


