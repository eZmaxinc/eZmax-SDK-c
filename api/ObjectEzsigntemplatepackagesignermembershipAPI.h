#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplatepackagesignermembership_create_object_v1_request.h"
#include "../model/ezsigntemplatepackagesignermembership_create_object_v1_response.h"
#include "../model/ezsigntemplatepackagesignermembership_delete_object_v1_response.h"
#include "../model/ezsigntemplatepackagesignermembership_get_object_v2_response.h"


// Create a new Ezsigntemplatepackagesignermembership
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatepackagesignermembership_create_object_v1_response_t*
ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipCreateObjectV1(apiClient_t *apiClient, ezsigntemplatepackagesignermembership_create_object_v1_request_t *ezsigntemplatepackagesignermembership_create_object_v1_request);


// Delete an existing Ezsigntemplatepackagesignermembership
//
// 
//
ezsigntemplatepackagesignermembership_delete_object_v1_response_t*
ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepackagesignermembershipID);


// Retrieve an existing Ezsigntemplatepackagesignermembership
//
// 
//
ezsigntemplatepackagesignermembership_get_object_v2_response_t*
ObjectEzsigntemplatepackagesignermembershipAPI_ezsigntemplatepackagesignermembershipGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatepackagesignermembershipID);


