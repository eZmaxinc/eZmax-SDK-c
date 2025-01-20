#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response.h"
#include "../model/common_response_error.h"
#include "../model/common_response_error_s_temporary_file_url.h"
#include "../model/ezsigntemplatedocument_create_object_v1_request.h"
#include "../model/ezsigntemplatedocument_create_object_v1_response.h"
#include "../model/ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request.h"
#include "../model/ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_response.h"
#include "../model/ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request.h"
#include "../model/ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response.h"
#include "../model/ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request.h"
#include "../model/ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response.h"
#include "../model/ezsigntemplatedocument_edit_object_v1_request.h"
#include "../model/ezsigntemplatedocument_edit_object_v1_response.h"
#include "../model/ezsigntemplatedocument_extract_text_v1_request.h"
#include "../model/ezsigntemplatedocument_extract_text_v1_response.h"
#include "../model/ezsigntemplatedocument_get_ezsigntemplatedocumentpagerecognitions_v1_response.h"
#include "../model/ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response.h"
#include "../model/ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response.h"
#include "../model/ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response.h"
#include "../model/ezsigntemplatedocument_get_object_v2_response.h"
#include "../model/ezsigntemplatedocument_get_words_positions_v1_request.h"
#include "../model/ezsigntemplatedocument_get_words_positions_v1_response.h"
#include "../model/ezsigntemplatedocument_patch_object_v1_request.h"
#include "../model/object.h"


// Create a new Ezsigntemplatedocument
//
// The endpoint allows to create one or many elements at once.
//
ezsigntemplatedocument_create_object_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentCreateObjectV1(apiClient_t *apiClient, ezsigntemplatedocument_create_object_v1_request_t *ezsigntemplatedocument_create_object_v1_request);


// Edit multiple Ezsigntemplatedocumentpagerecognitions
//
// Edit multiple Ezsigntemplatedocumentpagerecognitions
//
ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplatedocumentpagerecognitionsV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request);


// Edit multiple Ezsigntemplateformfieldgroups
//
// Using this endpoint, you can edit multiple Ezsigntemplateformfieldgroups at the same time.
//
ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplateformfieldgroupsV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_request);


// Edit multiple Ezsigntemplatesignatures
//
// Using this endpoint, you can edit multiple Ezsigntemplatesignatures at the same time.
//
ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditEzsigntemplatesignaturesV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request);


// Edit an existing Ezsigntemplatedocument
//
// 
//
ezsigntemplatedocument_edit_object_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentEditObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_edit_object_v1_request_t *ezsigntemplatedocument_edit_object_v1_request);


// Extract text from Ezsigntemplatedocument area
//
// Extract text from Ezsigntemplatedocument area
//
ezsigntemplatedocument_extract_text_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentExtractTextV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_extract_text_v1_request_t *ezsigntemplatedocument_extract_text_v1_request);


// Flatten
//
// Flatten an Ezsigntemplatedocument signatures, forms and annotations. This process finalizes the PDF so that the forms and annotations become part of the document content and cannot be edited.
//
common_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentFlattenV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, object_t *body);


// Retrieve an existing Ezsigntemplatedocument's Ezsigntemplatedocumentpagerecognitions
//
// 
//
ezsigntemplatedocument_get_ezsigntemplatedocumentpagerecognitions_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatedocumentpagerecognitionsV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID);


// Retrieve an existing Ezsigntemplatedocument's Ezsigntemplatedocumentpages
//
// 
//
ezsigntemplatedocument_get_ezsigntemplatedocumentpages_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatedocumentpagesV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID);


// Retrieve an existing Ezsigntemplatedocument's Ezsigntemplateformfieldgroups
//
// 
//
ezsigntemplatedocument_get_ezsigntemplateformfieldgroups_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplateformfieldgroupsV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID);


// Retrieve an existing Ezsigntemplatedocument's Ezsigntemplatesignatures
//
// 
//
ezsigntemplatedocument_get_ezsigntemplatesignatures_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetEzsigntemplatesignaturesV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID);


// Retrieve an existing Ezsigntemplatedocument
//
// 
//
ezsigntemplatedocument_get_object_v2_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetObjectV2(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID);


// Retrieve positions X,Y of given words from a Ezsigntemplatedocument
//
// 
//
ezsigntemplatedocument_get_words_positions_v1_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentGetWordsPositionsV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_get_words_positions_v1_request_t *ezsigntemplatedocument_get_words_positions_v1_request);


// Patch an existing Ezsigntemplatedocument
//
// 
//
common_response_t*
ObjectEzsigntemplatedocumentAPI_ezsigntemplatedocumentPatchObjectV1(apiClient_t *apiClient, int *pkiEzsigntemplatedocumentID, ezsigntemplatedocument_patch_object_v1_request_t *ezsigntemplatedocument_patch_object_v1_request);


