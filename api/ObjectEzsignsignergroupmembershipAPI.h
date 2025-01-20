#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/ezsignsignergroupmembership_create_object_v1_request.h"
#include "../model/ezsignsignergroupmembership_create_object_v1_response.h"
#include "../model/ezsignsignergroupmembership_get_object_v2_response.h"


// Create a new Ezsignsignergroupmembership
//
// The endpoint allows to create one or many elements at once.
//
ezsignsignergroupmembership_create_object_v1_response_t*
ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipCreateObjectV1(apiClient_t *apiClient, ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request);


// Delete an existing Ezsignsignergroupmembership
//
// 
//
common_response_t*
ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignsignergroupmembershipID);


// Retrieve an existing Ezsignsignergroupmembership
//
// 
//
ezsignsignergroupmembership_get_object_v2_response_t*
ObjectEzsignsignergroupmembershipAPI_ezsignsignergroupmembershipGetObjectV2(apiClient_t *apiClient, int *pkiEzsignsignergroupmembershipID);


