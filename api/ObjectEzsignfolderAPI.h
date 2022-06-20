#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignfolder_archive_v1_response.h"
#include "../model/ezsignfolder_batch_download_v1_request.h"
#include "../model/ezsignfolder_create_object_v1_request.h"
#include "../model/ezsignfolder_create_object_v1_response.h"
#include "../model/ezsignfolder_create_object_v2_request.h"
#include "../model/ezsignfolder_create_object_v2_response.h"
#include "../model/ezsignfolder_delete_object_v1_response.h"
#include "../model/ezsignfolder_dispose_ezsignfolders_v1_request.h"
#include "../model/ezsignfolder_dispose_ezsignfolders_v1_response.h"
#include "../model/ezsignfolder_dispose_v1_response.h"
#include "../model/ezsignfolder_edit_object_v1_request.h"
#include "../model/ezsignfolder_edit_object_v1_response.h"
#include "../model/ezsignfolder_get_actionable_elements_v1_response.h"
#include "../model/ezsignfolder_get_ezsigndocuments_v1_response.h"
#include "../model/ezsignfolder_get_ezsignfoldersignerassociations_v1_response.h"
#include "../model/ezsignfolder_get_forms_data_v1_response.h"
#include "../model/ezsignfolder_get_list_v1_response.h"
#include "../model/ezsignfolder_get_object_v1_response.h"
#include "../model/ezsignfolder_import_ezsigntemplatepackage_v1_request.h"
#include "../model/ezsignfolder_import_ezsigntemplatepackage_v1_response.h"
#include "../model/ezsignfolder_reorder_v1_request.h"
#include "../model/ezsignfolder_reorder_v1_response.h"
#include "../model/ezsignfolder_send_v1_request.h"
#include "../model/ezsignfolder_send_v1_response.h"
#include "../model/ezsignfolder_unsend_v1_response.h"
#include "../model/header_accept_language.h"
#include "../model/object.h"

// Enum EORDERBY for ObjectEzsignfolderAPI_ezsignfolderGetListV1
typedef enum  { ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_pkiEzsignfolderID_ASC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_pkiEzsignfolderID_DESC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_sEzsignfolderDescription_ASC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_sEzsignfolderDescription_DESC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_dtCreatedDate_ASC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_dtCreatedDate_DESC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_fkiEzsignfoldertypeID_ASC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_fkiEzsignfoldertypeID_DESC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_sEzsignfoldertypeNameX_ASC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_sEzsignfoldertypeNameX_DESC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_eEzsignfolderStep_ASC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_eEzsignfolderStep_DESC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_dtEzsignfolderSentdate_ASC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_dtEzsignfolderSentdate_DESC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_dtDueDate_ASC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_dtDueDate_DESC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_iTotalDocument_ASC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_iTotalDocument_DESC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_iTotalDocumentEdm_ASC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_iTotalDocumentEdm_DESC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_iTotalSignature_ASC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_iTotalSignature_DESC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_iTotalSignatureSigned_ASC, ezmax_api_definition__full_ezsignfolderGetListV1_EORDERBY_iTotalSignatureSigned_DESC } ezmax_api_definition__full_ezsignfolderGetListV1_eOrderBy_e;

// Enum  for ObjectEzsignfolderAPI_ezsignfolderGetListV1
typedef enum  { ezmax_api_definition__full_ezsignfolderGetListV1__NULL = 0, ezmax_api_definition__full_ezsignfolderGetListV1__*, ezmax_api_definition__full_ezsignfolderGetListV1__en, ezmax_api_definition__full_ezsignfolderGetListV1__fr } ezmax_api_definition__full_ezsignfolderGetListV1_Accept-Language_e;


// Archive the Ezsignfolder
//
// 
//
ezsignfolder_archive_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderArchiveV1(apiClient_t *apiClient, int pkiEzsignfolderID , object_t * body );


// Download multiples files from an Ezsignfolder
//
binary_t**
ObjectEzsignfolderAPI_ezsignfolderBatchDownloadV1(apiClient_t *apiClient, int pkiEzsignfolderID , ezsignfolder_batch_download_v1_request_t * ezsignfolder_batch_download_v1_request );


// Create a new Ezsignfolder
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignfolder_create_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1(apiClient_t *apiClient, list_t * ezsignfolder_create_object_v1_request );


// Create a new Ezsignfolder
//
// The endpoint allows to create one or many elements at once.
//
ezsignfolder_create_object_v2_response_t*
ObjectEzsignfolderAPI_ezsignfolderCreateObjectV2(apiClient_t *apiClient, ezsignfolder_create_object_v2_request_t * ezsignfolder_create_object_v2_request );


// Delete an existing Ezsignfolder
//
ezsignfolder_delete_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Dispose Ezsignfolders
//
// 
//
ezsignfolder_dispose_ezsignfolders_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderDisposeEzsignfoldersV1(apiClient_t *apiClient, ezsignfolder_dispose_ezsignfolders_v1_request_t * ezsignfolder_dispose_ezsignfolders_v1_request );


// Dispose the Ezsignfolder
//
// 
//
ezsignfolder_dispose_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderDisposeV1(apiClient_t *apiClient, int pkiEzsignfolderID , object_t * body );


// Edit an existing Ezsignfolder
//
// 
//
ezsignfolder_edit_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderEditObjectV1(apiClient_t *apiClient, int pkiEzsignfolderID , ezsignfolder_edit_object_v1_request_t * ezsignfolder_edit_object_v1_request );


// Retrieve actionable elements for the Ezsignfolder
//
// Return the Ezsignsignatures that can be signed and Ezsignformfieldgroups that can be filled by the current user at the current step in the process
//
ezsignfolder_get_actionable_elements_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetActionableElementsV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Retrieve an existing Ezsignfolder's Ezsigndocuments
//
// 
//
ezsignfolder_get_ezsigndocuments_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetEzsigndocumentsV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Retrieve an existing Ezsignfolder's Ezsignfoldersignerassociations
//
// 
//
ezsignfolder_get_ezsignfoldersignerassociations_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetEzsignfoldersignerassociationsV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Retrieve an existing Ezsignfolder's forms data
//
// 
//
ezsignfolder_get_forms_data_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetFormsDataV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Retrieve Ezsignfolder list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsignfolderStep | Unsent<br>Sent<br>PartiallySigned<br>Expired<br>Completed<br>Archived<br>Disposed| | eEzsignfoldertypePrivacylevel | User<br>Usergroup |
//
ezsignfolder_get_list_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsignfolderGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter );


// Retrieve an existing Ezsignfolder
//
ezsignfolder_get_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetObjectV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Import an Ezsigntemplatepackage in the Ezsignfolder.
//
// This endpoint imports all of the Ezsigntemplates from the Ezsigntemplatepackage into the Ezsignfolder as Ezsigndocuments.  This allows to automatically apply all the Ezsigntemplateformfieldgroups and Ezsigntemplatesignatures on the newly created Ezsigndocuments in a single step.
//
ezsignfolder_import_ezsigntemplatepackage_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderImportEzsigntemplatepackageV1(apiClient_t *apiClient, int pkiEzsignfolderID , ezsignfolder_import_ezsigntemplatepackage_v1_request_t * ezsignfolder_import_ezsigntemplatepackage_v1_request );


// Reorder Ezsigndocuments in the Ezsignfolder
//
ezsignfolder_reorder_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderReorderV1(apiClient_t *apiClient, int pkiEzsignfolderID , ezsignfolder_reorder_v1_request_t * ezsignfolder_reorder_v1_request );


// Send the Ezsignfolder to the signatories for signature
//
// 
//
ezsignfolder_send_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderSendV1(apiClient_t *apiClient, int pkiEzsignfolderID , ezsignfolder_send_v1_request_t * ezsignfolder_send_v1_request );


// Unsend the Ezsignfolder
//
// Once an Ezsignfolder has been sent to signatories, it cannot be modified.  Using this endpoint, you can unsend the Ezsignfolder and make it modifiable again.  Signatories will receive an email informing them the signature process was aborted and they might receive a new invitation to sign.  ⚠️ Warning: Any signature previously made by signatories on \"Non-completed\" Ezsigndocuments will be lost.
//
ezsignfolder_unsend_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderUnsendV1(apiClient_t *apiClient, int pkiEzsignfolderID , object_t * body );


