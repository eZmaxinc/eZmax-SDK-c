#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplatepackagesigner_create_object_v1_request.h"
#include "../model/ezsigntemplatepackagesigner_create_object_v1_response.h"
#include "../model/ezsigntemplatepackagesigner_delete_object_v1_response.h"
#include "../model/ezsigntemplatepackagesigner_edit_object_v1_request.h"
#include "../model/ezsigntemplatepackagesigner_get_object_v2_response.h"


// Create a new Ezsigntemplatepackagesigner
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatepackagesigner_create_object_v1_response_t*
ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerCreateObjectV1(apiClient_t *apiClient, ezsigntemplatepackagesigner_create_object_v1_request_t *ezsigntemplatepackagesigner_create_object_v1_request);


// Delete an existing Ezsigntemplatepackagesigner
//
// 
//
ezsigntemplatepackagesigner_delete_object_v1_response_t*
ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepackagesignerID);


// Edit an existing Ezsigntemplatepackagesigner
//
// 
//
common_response_t*
ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatepackagesignerID, ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request);


// Retrieve an existing Ezsigntemplatepackagesigner
//
// 
//
ezsigntemplatepackagesigner_get_object_v2_response_t*
ObjectEzsigntemplatepackagesignerAPI_ezsigntemplatepackagesignerGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatepackagesignerID);


