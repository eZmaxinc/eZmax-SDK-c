#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplateformfieldgroup_create_object_v1_request.h"
#include "../model/ezsigntemplateformfieldgroup_create_object_v1_response.h"
#include "../model/ezsigntemplateformfieldgroup_delete_object_v1_response.h"
#include "../model/ezsigntemplateformfieldgroup_edit_object_v1_request.h"
#include "../model/ezsigntemplateformfieldgroup_edit_object_v1_response.h"
#include "../model/ezsigntemplateformfieldgroup_get_object_v2_response.h"


// Create a new Ezsigntemplateformfieldgroup
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplateformfieldgroup_create_object_v1_response_t*
ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupCreateObjectV1(apiClient_t *apiClient, ezsigntemplateformfieldgroup_create_object_v1_request_t * ezsigntemplateformfieldgroup_create_object_v1_request );


// Delete an existing Ezsigntemplateformfieldgroup
//
// 
//
ezsigntemplateformfieldgroup_delete_object_v1_response_t*
ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigntemplateformfieldgroupID );


// Edit an existing Ezsigntemplateformfieldgroup
//
// 
//
ezsigntemplateformfieldgroup_edit_object_v1_response_t*
ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupEditObjectV1(apiClient_t *apiClient, int pkiEzsigntemplateformfieldgroupID , ezsigntemplateformfieldgroup_edit_object_v1_request_t * ezsigntemplateformfieldgroup_edit_object_v1_request );


// Retrieve an existing Ezsigntemplateformfieldgroup
//
// 
//
ezsigntemplateformfieldgroup_get_object_v2_response_t*
ObjectEzsigntemplateformfieldgroupAPI_ezsigntemplateformfieldgroupGetObjectV2(apiClient_t *apiClient, int pkiEzsigntemplateformfieldgroupID );


