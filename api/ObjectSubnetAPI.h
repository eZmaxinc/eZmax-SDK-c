#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/subnet_create_object_v1_request.h"
#include "../model/subnet_create_object_v1_response.h"
#include "../model/subnet_edit_object_v1_request.h"
#include "../model/subnet_get_object_v2_response.h"


// Create a new Subnet
//
// The endpoint allows to create one or many elements at once.
//
subnet_create_object_v1_response_t*
ObjectSubnetAPI_subnetCreateObjectV1(apiClient_t *apiClient, subnet_create_object_v1_request_t *subnet_create_object_v1_request);


// Delete an existing Subnet
//
// 
//
common_response_t*
ObjectSubnetAPI_subnetDeleteObjectV1(apiClient_t *apiClient, int *pkiSubnetID);


// Edit an existing Subnet
//
// 
//
common_response_t*
ObjectSubnetAPI_subnetEditObjectV1(apiClient_t *apiClient, int *pkiSubnetID, subnet_edit_object_v1_request_t *subnet_edit_object_v1_request);


// Retrieve an existing Subnet
//
// 
//
subnet_get_object_v2_response_t*
ObjectSubnetAPI_subnetGetObjectV2(apiClient_t *apiClient, int *pkiSubnetID);


