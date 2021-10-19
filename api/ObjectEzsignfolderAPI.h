#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignfolder_create_object_v1_request.h"
#include "../model/ezsignfolder_create_object_v1_response.h"
#include "../model/ezsignfolder_delete_object_v1_response.h"
#include "../model/ezsignfolder_get_forms_data_v1_response.h"
#include "../model/ezsignfolder_get_list_v1_response.h"
#include "../model/ezsignfolder_get_object_v1_response.h"
#include "../model/ezsignfolder_send_v1_request.h"
#include "../model/ezsignfolder_send_v1_response.h"
#include "../model/header_accept_language.h"

// Enum EORDERBY for ObjectEzsignfolderAPI_ezsignfolderGetListV1
typedef enum  { ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_NULL = 0, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_pkiEzsignfolderID_ASC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_pkiEzsignfolderID_DESC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_sEzsignfolderDescription_ASC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_sEzsignfolderDescription_DESC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_dtCreatedDate_ASC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_dtCreatedDate_DESC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_fkiEzsignfoldertypeID_ASC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_fkiEzsignfoldertypeID_DESC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_sEzsignfoldertypeNameX_ASC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_sEzsignfoldertypeNameX_DESC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_eEzsignfolderStep_ASC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_eEzsignfolderStep_DESC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_dtEzsignfolderSentdate_ASC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_dtEzsignfolderSentdate_DESC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_dtDueDate_ASC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_dtDueDate_DESC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_iTotalDocument_ASC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_iTotalDocument_DESC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_iTotalDocumentEdm_ASC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_iTotalDocumentEdm_DESC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_iTotalSignature_ASC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_iTotalSignature_DESC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_iTotalSignatureSigned_ASC, ezmax_api_definition_ezsignfolderGetListV1_EORDERBY_iTotalSignatureSigned_DESC } ezmax_api_definition_ezsignfolderGetListV1_eOrderBy_e;

// Enum  for ObjectEzsignfolderAPI_ezsignfolderGetListV1
typedef enum  { ezmax_api_definition_ezsignfolderGetListV1__NULL = 0, ezmax_api_definition_ezsignfolderGetListV1__*, ezmax_api_definition_ezsignfolderGetListV1__en, ezmax_api_definition_ezsignfolderGetListV1__fr } ezmax_api_definition_ezsignfolderGetListV1_Accept-Language_e;


// Create a new Ezsignfolder
//
// The endpoint allows to create one or many elements at once.  The array can contain simple (Just the object) or compound (The object and its child) objects.  Creating compound elements allows to reduce the multiple requests to create all child objects.
//
ezsignfolder_create_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderCreateObjectV1(apiClient_t *apiClient, list_t * ezsignfolder_create_object_v1_request );


// Delete an existing Ezsignfolder
//
ezsignfolder_delete_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Retrieve an existing Ezsignfolder's children IDs
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
void
ObjectEzsignfolderAPI_ezsignfolderGetChildrenV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Retrieve an existing Ezsignfolder's forms data
//
ezsignfolder_get_forms_data_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetFormsDataV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Retrieve Ezsignfolder list
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.  Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsignfolderStep | Unsent<br>Sent<br>PartiallySigned<br>Expired<br>Completed<br>Archived |
//
ezsignfolder_get_list_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetListV1(apiClient_t *apiClient, ezmax_api_definition_ezsignfolderGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter );


// Retrieve an existing Ezsignfolder
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.
//
ezsignfolder_get_object_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderGetObjectV1(apiClient_t *apiClient, int pkiEzsignfolderID );


// Send the Ezsignfolder to the signatories for signature
//
ezsignfolder_send_v1_response_t*
ObjectEzsignfolderAPI_ezsignfolderSendV1(apiClient_t *apiClient, int pkiEzsignfolderID , ezsignfolder_send_v1_request_t * ezsignfolder_send_v1_request );


