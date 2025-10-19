#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplatesignature_create_object_v2_request.h"
#include "../model/ezsigntemplatesignature_create_object_v2_response.h"
#include "../model/ezsigntemplatesignature_create_object_v3_request.h"
#include "../model/ezsigntemplatesignature_create_object_v3_response.h"
#include "../model/ezsigntemplatesignature_delete_object_v1_response.h"
#include "../model/ezsigntemplatesignature_edit_object_v2_request.h"
#include "../model/ezsigntemplatesignature_edit_object_v2_response.h"
#include "../model/ezsigntemplatesignature_edit_object_v3_request.h"
#include "../model/ezsigntemplatesignature_edit_object_v3_response.h"
#include "../model/ezsigntemplatesignature_get_object_v3_response.h"
#include "../model/ezsigntemplatesignature_get_object_v4_response.h"


// Create a new Ezsigntemplatesignature
//
// The endpoint allows to create one or many elements at once.  Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsigntemplatesignature_create_object_v2_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV2(apiClient_t *apiClient, ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request);


// Create a new Ezsigntemplatesignature
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatesignature_create_object_v3_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureCreateObjectV3(apiClient_t *apiClient, ezsigntemplatesignature_create_object_v3_request_t *ezsigntemplatesignature_create_object_v3_request);


// Delete an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_delete_object_v1_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID);


// Edit an existing Ezsigntemplatesignature
//
// Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsigntemplatesignature_edit_object_v2_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID, ezsigntemplatesignature_edit_object_v2_request_t *ezsigntemplatesignature_edit_object_v2_request);


// Edit an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_edit_object_v3_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureEditObjectV3(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID, ezsigntemplatesignature_edit_object_v3_request_t *ezsigntemplatesignature_edit_object_v3_request);


// Retrieve an existing Ezsigntemplatesignature
//
// Major step overhaul.  Endpoints that existed before version 1.3 do not allow you to combine forms and signatures in the same step. The step numbers are different from those indicated by endpoints added since version 1.3. This endpoint is compatible with endpoints that existed before 1.3 but are not compatible with those added since 1.3.
//
ezsigntemplatesignature_get_object_v3_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV3(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID);


// Retrieve an existing Ezsigntemplatesignature
//
// 
//
ezsigntemplatesignature_get_object_v4_response_t*
ObjectEzsigntemplatesignatureAPI_ezsigntemplatesignatureGetObjectV4(apiClient_t *apiClient, int *pkiEzsigntemplatesignatureID);


