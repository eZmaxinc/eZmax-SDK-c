#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/common_response_error_ezsignform_validation.h"
#include "../model/common_response_error_s_temporary_file_url.h"
#include "../model/ezsigndocument_apply_ezsigntemplate_v1_request.h"
#include "../model/ezsigndocument_apply_ezsigntemplate_v1_response.h"
#include "../model/ezsigndocument_apply_ezsigntemplate_v2_request.h"
#include "../model/ezsigndocument_apply_ezsigntemplate_v2_response.h"
#include "../model/ezsigndocument_create_object_v1_request.h"
#include "../model/ezsigndocument_create_object_v1_response.h"
#include "../model/ezsigndocument_create_object_v2_request.h"
#include "../model/ezsigndocument_create_object_v2_response.h"
#include "../model/ezsigndocument_decline_to_sign_v1_request.h"
#include "../model/ezsigndocument_decline_to_sign_v1_response.h"
#include "../model/ezsigndocument_delete_object_v1_response.h"
#include "../model/ezsigndocument_edit_ezsignformfieldgroups_v1_request.h"
#include "../model/ezsigndocument_edit_ezsignformfieldgroups_v1_response.h"
#include "../model/ezsigndocument_edit_ezsignsignatures_v1_request.h"
#include "../model/ezsigndocument_edit_ezsignsignatures_v1_response.h"
#include "../model/ezsigndocument_end_prematurely_v1_response.h"
#include "../model/ezsigndocument_flatten_v1_response.h"
#include "../model/ezsigndocument_get_actionable_elements_v1_response.h"
#include "../model/ezsigndocument_get_attachments_v1_response.h"
#include "../model/ezsigndocument_get_completed_elements_v1_response.h"
#include "../model/ezsigndocument_get_download_url_v1_response.h"
#include "../model/ezsigndocument_get_ezsignannotations_v1_response.h"
#include "../model/ezsigndocument_get_ezsignformfieldgroups_v1_response.h"
#include "../model/ezsigndocument_get_ezsignpages_v1_response.h"
#include "../model/ezsigndocument_get_ezsignsignatures_automatic_v1_response.h"
#include "../model/ezsigndocument_get_ezsignsignatures_v1_response.h"
#include "../model/ezsigndocument_get_form_data_v1_response.h"
#include "../model/ezsigndocument_get_object_v1_response.h"
#include "../model/ezsigndocument_get_object_v2_response.h"
#include "../model/ezsigndocument_get_temporary_proof_v1_response.h"
#include "../model/ezsigndocument_get_words_positions_v1_request.h"
#include "../model/ezsigndocument_get_words_positions_v1_response.h"
#include "../model/ezsigndocument_patch_object_v1_request.h"
#include "../model/ezsigndocument_patch_object_v1_response.h"
#include "../model/ezsigndocument_submit_ezsignform_v1_request.h"
#include "../model/ezsigndocument_submit_ezsignform_v1_response.h"
#include "../model/ezsigndocument_unsend_v1_response.h"
#include "../model/object.h"

// Enum EDOCUMENTTYPE for ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1
typedef enum  { ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_NULL = 0, ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_Initial, ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_SignatureReady, ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE__Signed, ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_Proof, ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_EDOCUMENTTYPE_Proofdocument } ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_eDocumentType_e;


// Apply an Ezsigntemplate to the Ezsigndocument.
//
// This function is deprecated. Please use *applyEzsigntemplate* instead which is doing the same thing but with a capital \"E\" to normalize the nomenclature.  This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
//
ezsigndocument_apply_ezsigntemplate_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_apply_ezsigntemplate_v1_request_t *ezsigndocument_apply_ezsigntemplate_v1_request);


// Apply an Ezsigntemplate to the Ezsigndocument.
//
// This endpoint applies a predefined template to the ezsign document. This allows to automatically apply all the form and signature fields on a document in a single step.  The document must not already have fields otherwise an error will be returned.
//
ezsigndocument_apply_ezsigntemplate_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentApplyEzsigntemplateV2(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_apply_ezsigntemplate_v2_request_t *ezsigndocument_apply_ezsigntemplate_v2_request);


// Create a new Ezsigndocument
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsigndocument_create_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV1(apiClient_t *apiClient, list_t *ezsigndocument_create_object_v1_request);


// Create a new Ezsigndocument
//
// The endpoint allows to create one or many elements at once.
//
ezsigndocument_create_object_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentCreateObjectV2(apiClient_t *apiClient, ezsigndocument_create_object_v2_request_t *ezsigndocument_create_object_v2_request);


// Decline to sign
//
// Decline to sign
//
ezsigndocument_decline_to_sign_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentDeclineToSignV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_decline_to_sign_v1_request_t *ezsigndocument_decline_to_sign_v1_request);


// Delete an existing Ezsigndocument
//
// 
//
ezsigndocument_delete_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Edit multiple Ezsignformfieldgroups
//
// Using this endpoint, you can edit multiple Ezsignformfieldgroups at the same time.
//
ezsigndocument_edit_ezsignformfieldgroups_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentEditEzsignformfieldgroupsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_edit_ezsignformfieldgroups_v1_request_t *ezsigndocument_edit_ezsignformfieldgroups_v1_request);


// Edit multiple Ezsignsignatures
//
// Using this endpoint, you can edit multiple Ezsignsignatures at the same time.
//
ezsigndocument_edit_ezsignsignatures_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentEditEzsignsignaturesV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_edit_ezsignsignatures_v1_request_t *ezsigndocument_edit_ezsignsignatures_v1_request);


// End prematurely
//
// End prematurely an Ezsigndocument when some signatures are still required
//
ezsigndocument_end_prematurely_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentEndPrematurelyV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, object_t *body);


// Flatten
//
// Flatten an Ezsigndocument signatures, forms and annotations. This process finalizes the PDF so that the forms and annotations become part of the document content and cannot be edited.
//
ezsigndocument_flatten_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentFlattenV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, object_t *body);


// Retrieve actionable elements for the Ezsigndocument
//
// Return the Ezsignsignatures that can be signed and Ezsignformfieldgroups that can be filled by the current user at the current step in the process
//
ezsigndocument_get_actionable_elements_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetActionableElementsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Retrieve Ezsigndocument's Attachments
//
// 
//
ezsigndocument_get_attachments_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetAttachmentsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Retrieve completed elements for the Ezsigndocument
//
// Return the completed Ezsignsignatures, Ezsignformfieldgroups and Ezsignannotations at the current step in the process
//
ezsigndocument_get_completed_elements_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetCompletedElementsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Retrieve a URL to download documents.
//
// This endpoint returns URLs to different files that can be downloaded during the signing process.  These links will expire after 5 minutes so the download of the file should be made soon after retrieving the link.
//
ezsigndocument_get_download_url_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetDownloadUrlV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezmax_api_definition__full_ezsigndocumentGetDownloadUrlV1_eDocumentType_e eDocumentType);


// Retrieve an existing Ezsigndocument's Ezsignannotations
//
// 
//
ezsigndocument_get_ezsignannotations_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignannotationsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Retrieve an existing Ezsigndocument's Ezsignformfieldgroups
//
// 
//
ezsigndocument_get_ezsignformfieldgroups_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignformfieldgroupsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Retrieve an existing Ezsigndocument's Ezsignpages
//
// 
//
ezsigndocument_get_ezsignpages_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignpagesV1(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Retrieve an existing Ezsigndocument's automatic Ezsignsignatures
//
// Return the Ezsignsignatures that can be signed by the current user at the current step in the process
//
ezsigndocument_get_ezsignsignatures_automatic_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignsignaturesAutomaticV1(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Retrieve an existing Ezsigndocument's Ezsignsignatures
//
// 
//
ezsigndocument_get_ezsignsignatures_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetEzsignsignaturesV1(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Retrieve an existing Ezsigndocument's Form Data
//
// 
//
ezsigndocument_get_form_data_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetFormDataV1(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Retrieve an existing Ezsigndocument
//
ezsigndocument_get_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV1(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Retrieve an existing Ezsigndocument
//
// 
//
ezsigndocument_get_object_v2_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetObjectV2(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Retrieve the temporary proof
//
// Retrieve the temporary proof while the Ezsigndocument is being processed since the proof isn't available until the Ezsigndocument is completed
//
ezsigndocument_get_temporary_proof_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetTemporaryProofV1(apiClient_t *apiClient, int *pkiEzsigndocumentID);


// Retrieve positions X,Y of given words from a Ezsigndocument
//
// 
//
ezsigndocument_get_words_positions_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentGetWordsPositionsV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_get_words_positions_v1_request_t *ezsigndocument_get_words_positions_v1_request);


// Patch an existing Ezsigndocument
//
// 
//
ezsigndocument_patch_object_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentPatchObjectV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_patch_object_v1_request_t *ezsigndocument_patch_object_v1_request);


// Submit the Ezsignform
//
// 
//
ezsigndocument_submit_ezsignform_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentSubmitEzsignformV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, ezsigndocument_submit_ezsignform_v1_request_t *ezsigndocument_submit_ezsignform_v1_request);


// Unsend the Ezsigndocument
//
// Once an Ezsigndocument has been sent to signatories, it cannot be modified.  Using this endpoint, you can unsend the Ezsigndocument and make it modifiable again.  Signatories will receive an email informing them the signature process was aborted and they might receive a new invitation to sign.  ⚠️ Warning: Any signature previously made by signatories on this Ezsigndocumentswill be lost.
//
ezsigndocument_unsend_v1_response_t*
ObjectEzsigndocumentAPI_ezsigndocumentUnsendV1(apiClient_t *apiClient, int *pkiEzsigndocumentID, object_t *body);


