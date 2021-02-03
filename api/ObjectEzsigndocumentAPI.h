#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigndocument_apply_ezsigntemplate_v1_request.h"
#include "../model/ezsigndocument_apply_ezsigntemplate_v1_response.h"
#include "../model/ezsigndocument_create_object_v1_request.h"
#include "../model/ezsigndocument_create_object_v1_response.h"
#include "../model/ezsigndocument_delete_object_v1_response.h"
#include "../model/ezsigndocument_edit_object_v1_request.h"
#include "../model/ezsigndocument_edit_object_v1_response.h"
#include "../model/ezsigndocument_get_download_url_v1_response.h"
#include "../model/ezsigndocument_get_object_v1_response.h"

// Enum EDOCUMENTTYPE for ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1
typedef enum  { ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_NULL = 0, ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_Initial, ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE__Signed, ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_Proof, ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_Proofdocument } ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_eDocumentType_e;


// Apply an Ezsign Template to the Ezsigndocument.
//
// This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
//
ezsigndocument_apply_ezsigntemplate_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV1(apiClient_t *apiClient, int pkiEzsigndocumentID , ezsigndocument_apply_ezsigntemplate_v1_request_t * ezsigndocument_apply_ezsigntemplate_v1_request );


// Create a new Ezsigndocument
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsigndocument_create_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV1(apiClient_t *apiClient, list_t * ezsigndocument_create_object_v1_request );


// Delete an existing Ezsigndocument
//
ezsigndocument_delete_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentDeleteObjectV1(apiClient_t *apiClient, int pkiEzsigndocumentID );


// Modify an existing Ezsigndocument
//
ezsigndocument_edit_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentEditObjectV1(apiClient_t *apiClient, int pkiEzsigndocumentID , ezsigndocument_edit_object_v1_request_t * ezsigndocument_edit_object_v1_request );


// Retrieve a URL to download documents.
//
// This endpoint returns URLs to different files that can be downloaded during the signing process.  These links will expire after 5 minutes so the download of the file should be made soon after retrieving the link.
//
ezsigndocument_get_download_url_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1(apiClient_t *apiClient, int pkiEzsigndocumentID , ezmax_api_definition_ezsigndocumentGetDownloadUrlV1_eDocumentType_e eDocumentType );


// Retrieve an existing Ezsigndocument's children IDs
//
void
ObjectEzsigndocumentAPI_ezsigndocumentGetObjectGetChildrenV1(apiClient_t *apiClient, int pkiEzsigndocumentID );


// Retrieve an existing Ezsigndocument
//
ezsigndocument_get_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV1(apiClient_t *apiClient, int pkiEzsigndocumentID );


