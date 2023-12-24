#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplatepackagemembership_create_object_v1_request.h"
#include "../model/ezsigntemplatepackagemembership_create_object_v1_response.h"
#include "../model/ezsigntemplatepackagemembership_delete_object_v1_response.h"
#include "../model/ezsigntemplatepackagemembership_get_object_v2_response.h"


// Create a new Ezsigntemplatepackagemembership
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatepackagemembership_create_object_v1_response_t*
ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipCreateObjectV1(apiClient_t *apiClient, ezsigntemplatepackagemembership_create_object_v1_request_t *ezsigntemplatepackagemembership_create_object_v1_request);


// Delete an existing Ezsigntemplatepackagemembership
//
// 
//
ezsigntemplatepackagemembership_delete_object_v1_response_t*
ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepackagemembershipID);


// Retrieve an existing Ezsigntemplatepackagemembership
//
// 
//
ezsigntemplatepackagemembership_get_object_v2_response_t*
ObjectEzsigntemplatepackagemembershipAPI_ezsigntemplatepackagemembershipGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatepackagemembershipID);


