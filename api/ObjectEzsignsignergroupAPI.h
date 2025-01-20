#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignsignergroup_create_object_v1_request.h"
#include "../model/ezsignsignergroup_create_object_v1_response.h"
#include "../model/ezsignsignergroup_delete_object_v1_response.h"
#include "../model/ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request.h"
#include "../model/ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response.h"
#include "../model/ezsignsignergroup_edit_object_v1_request.h"
#include "../model/ezsignsignergroup_edit_object_v1_response.h"
#include "../model/ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response.h"
#include "../model/ezsignsignergroup_get_object_v2_response.h"


// Create a new Ezsignsignergroup
//
// The endpoint allows to create one or many elements at once.
//
ezsignsignergroup_create_object_v1_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupCreateObjectV1(apiClient_t *apiClient, ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request);


// Delete an existing Ezsignsignergroup
//
// 
//
ezsignsignergroup_delete_object_v1_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID);


// Edit multiple Ezsignsignergroupmemberships
//
// Using this endpoint, you can edit multiple Ezsignsignergroupmemberships at the same time.
//
ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupEditEzsignsignergroupmembershipsV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID, ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request);


// Edit an existing Ezsignsignergroup
//
// 
//
ezsignsignergroup_edit_object_v1_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupEditObjectV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID, ezsignsignergroup_edit_object_v1_request_t *ezsignsignergroup_edit_object_v1_request);


// Retrieve an existing Ezsignsignergroup's Ezsignsignergroupmemberships
//
ezsignsignergroup_get_ezsignsignergroupmemberships_v1_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupGetEzsignsignergroupmembershipsV1(apiClient_t *apiClient, int *pkiEzsignsignergroupID);


// Retrieve an existing Ezsignsignergroup
//
// 
//
ezsignsignergroup_get_object_v2_response_t*
ObjectEzsignsignergroupAPI_ezsignsignergroupGetObjectV2(apiClient_t *apiClient, int *pkiEzsignsignergroupID);


