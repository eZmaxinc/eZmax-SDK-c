#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignbulksend_create_ezsignbulksendtransmission_v1_request.h"
#include "../model/ezsignbulksend_create_ezsignbulksendtransmission_v1_response.h"
#include "../model/ezsignbulksend_create_object_v1_request.h"
#include "../model/ezsignbulksend_create_object_v1_response.h"
#include "../model/ezsignbulksend_delete_object_v1_response.h"
#include "../model/ezsignbulksend_edit_object_v1_request.h"
#include "../model/ezsignbulksend_edit_object_v1_response.h"
#include "../model/ezsignbulksend_get_ezsignbulksendtransmissions_v1_response.h"
#include "../model/ezsignbulksend_get_forms_data_v1_response.h"
#include "../model/ezsignbulksend_get_list_v1_response.h"
#include "../model/ezsignbulksend_get_object_v1_response.h"
#include "../model/ezsignbulksend_get_object_v2_response.h"
#include "../model/ezsignbulksend_reorder_v1_request.h"
#include "../model/ezsignbulksend_reorder_v1_response.h"
#include "../model/header_accept_language.h"

// Enum ECSVSEPARATOR for ObjectEzsignbulksendAPI_ezsignbulksendGetCsvTemplateV1
typedef enum  { ezmax_api_definition__full_ezsignbulksendGetCsvTemplateV1_ECSVSEPARATOR_NULL = 0, ezmax_api_definition__full_ezsignbulksendGetCsvTemplateV1_ECSVSEPARATOR_Comma, ezmax_api_definition__full_ezsignbulksendGetCsvTemplateV1_ECSVSEPARATOR_Semicolon } ezmax_api_definition__full_ezsignbulksendGetCsvTemplateV1_eCsvSeparator_e;

// Enum EORDERBY for ObjectEzsignbulksendAPI_ezsignbulksendGetListV1
typedef enum  { ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_pkiEzsignbulksendID_ASC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_pkiEzsignbulksendID_DESC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_fkiEzsignfoldertypeID_ASC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_fkiEzsignfoldertypeID_DESC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_sEzsignbulksendDescription_ASC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_sEzsignbulksendDescription_DESC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_sEzsignfoldertypeNameX_ASC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_sEzsignfoldertypeNameX_DESC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_eEzsignfoldertypePrivacylevel_ASC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_eEzsignfoldertypePrivacylevel_DESC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_bEzsignbulksendNeedvalidation_ASC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_bEzsignbulksendNeedvalidation_DESC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_iEzsignbulksendtransmission_ASC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_iEzsignbulksendtransmission_DESC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_iEzsignfolder_ASC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_iEzsignfolder_DESC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_iEzsigndocument_ASC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_iEzsigndocument_DESC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_iEzsignsignature_ASC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_iEzsignsignature_DESC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_iEzsignsignatureSigned_ASC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_iEzsignsignatureSigned_DESC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_bEzsignbulksendIsactive_ASC, ezmax_api_definition__full_ezsignbulksendGetListV1_EORDERBY_bEzsignbulksendIsactive_DESC } ezmax_api_definition__full_ezsignbulksendGetListV1_eOrderBy_e;

// Enum  for ObjectEzsignbulksendAPI_ezsignbulksendGetListV1
typedef enum  { ezmax_api_definition__full_ezsignbulksendGetListV1__NULL = 0, ezmax_api_definition__full_ezsignbulksendGetListV1__*, ezmax_api_definition__full_ezsignbulksendGetListV1__en, ezmax_api_definition__full_ezsignbulksendGetListV1__fr } ezmax_api_definition__full_ezsignbulksendGetListV1_Accept-Language_e;


// Create a new Ezsignbulksendtransmission in the Ezsignbulksend
//
ezsignbulksend_create_ezsignbulksendtransmission_v1_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendCreateEzsignbulksendtransmissionV1(apiClient_t *apiClient, int pkiEzsignbulksendID , ezsignbulksend_create_ezsignbulksendtransmission_v1_request_t * ezsignbulksend_create_ezsignbulksendtransmission_v1_request );


// Create a new Ezsignbulksend
//
// The endpoint allows to create one or many elements at once.
//
ezsignbulksend_create_object_v1_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendCreateObjectV1(apiClient_t *apiClient, ezsignbulksend_create_object_v1_request_t * ezsignbulksend_create_object_v1_request );


// Delete an existing Ezsignbulksend
//
// 
//
ezsignbulksend_delete_object_v1_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendDeleteObjectV1(apiClient_t *apiClient, int pkiEzsignbulksendID );


// Edit an existing Ezsignbulksend
//
// 
//
ezsignbulksend_edit_object_v1_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendEditObjectV1(apiClient_t *apiClient, int pkiEzsignbulksendID , ezsignbulksend_edit_object_v1_request_t * ezsignbulksend_edit_object_v1_request );


// Retrieve an existing Ezsignbulksend's empty Csv template
//
// 
//
char*
ObjectEzsignbulksendAPI_ezsignbulksendGetCsvTemplateV1(apiClient_t *apiClient, int pkiEzsignbulksendID , ezmax_api_definition__full_ezsignbulksendGetCsvTemplateV1_eCsvSeparator_e eCsvSeparator );


// Retrieve an existing Ezsignbulksend's Ezsignbulksendtransmissions
//
// 
//
ezsignbulksend_get_ezsignbulksendtransmissions_v1_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendGetEzsignbulksendtransmissionsV1(apiClient_t *apiClient, int pkiEzsignbulksendID );


// Retrieve an existing Ezsignbulksend's forms data
//
// 
//
ezsignbulksend_get_forms_data_v1_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendGetFormsDataV1(apiClient_t *apiClient, int pkiEzsignbulksendID );


// Retrieve Ezsignbulksend list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsignfoldertypePrivacylevel | User<br>Usergroup |
//
ezsignbulksend_get_list_v1_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsignbulksendGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter );


// Retrieve an existing Ezsignbulksend
//
// 
//
ezsignbulksend_get_object_v1_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendGetObjectV1(apiClient_t *apiClient, int pkiEzsignbulksendID );


// Retrieve an existing Ezsignbulksend
//
// 
//
ezsignbulksend_get_object_v2_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendGetObjectV2(apiClient_t *apiClient, int pkiEzsignbulksendID );


// Reorder Ezsignbulksenddocumentmappings in the Ezsignbulksend
//
ezsignbulksend_reorder_v1_response_t*
ObjectEzsignbulksendAPI_ezsignbulksendReorderV1(apiClient_t *apiClient, int pkiEzsignbulksendID , ezsignbulksend_reorder_v1_request_t * ezsignbulksend_reorder_v1_request );


