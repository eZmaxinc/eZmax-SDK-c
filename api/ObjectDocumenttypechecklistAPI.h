#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/documenttypechecklist_delete_object_v1_response.h"
#include "../model/documenttypechecklist_patch_object_v1_request.h"
#include "../model/documenttypechecklist_patch_object_v1_response.h"


// Delete an existing Documenttypechecklist
//
// 
//
documenttypechecklist_delete_object_v1_response_t*
ObjectDocumenttypechecklistAPI_documenttypechecklistDeleteObjectV1(apiClient_t *apiClient, int *pkiDocumenttypechecklistID);


// Patch an existing Documenttypechecklist
//
// 
//
documenttypechecklist_patch_object_v1_response_t*
ObjectDocumenttypechecklistAPI_documenttypechecklistPatchObjectV1(apiClient_t *apiClient, int *pkiDocumenttypechecklistID, documenttypechecklist_patch_object_v1_request_t *documenttypechecklist_patch_object_v1_request);


