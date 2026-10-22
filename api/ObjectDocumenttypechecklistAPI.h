#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/documenttypechecklist_create_object_v1_request.h"
#include "../model/documenttypechecklist_create_object_v1_response.h"
#include "../model/documenttypechecklist_delete_object_v1_response.h"
#include "../model/documenttypechecklist_edit_object_v1_request.h"
#include "../model/documenttypechecklist_edit_object_v1_response.h"
#include "../model/documenttypechecklist_get_list_v1_response.h"
#include "../model/documenttypechecklist_get_object_v2_response.h"
#include "../model/header_accept_language.h"

// Enum EORDERBY for ObjectDocumenttypechecklistAPI_documenttypechecklistGetListV1
typedef enum  { ezmax_api_definition__full_documenttypechecklistGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_documenttypechecklistGetListV1_EORDERBY_pkiDocumenttypechecklistID_ASC, ezmax_api_definition__full_documenttypechecklistGetListV1_EORDERBY_pkiDocumenttypechecklistID_DESC, ezmax_api_definition__full_documenttypechecklistGetListV1_EORDERBY_fkiDocumenttypeID_ASC, ezmax_api_definition__full_documenttypechecklistGetListV1_EORDERBY_fkiDocumenttypeID_DESC, ezmax_api_definition__full_documenttypechecklistGetListV1_EORDERBY_eDocumenttypechecklistStatus_ASC, ezmax_api_definition__full_documenttypechecklistGetListV1_EORDERBY_eDocumenttypechecklistStatus_DESC, ezmax_api_definition__full_documenttypechecklistGetListV1_EORDERBY_tDocumenttypechecklistComment_ASC, ezmax_api_definition__full_documenttypechecklistGetListV1_EORDERBY_tDocumenttypechecklistComment_DESC } ezmax_api_definition__full_documenttypechecklistGetListV1_eOrderBy_e;

// Enum  for ObjectDocumenttypechecklistAPI_documenttypechecklistGetListV1
typedef enum  { ezmax_api_definition__full_documenttypechecklistGetListV1__NULL = 0, ezmax_api_definition__full_documenttypechecklistGetListV1__*, ezmax_api_definition__full_documenttypechecklistGetListV1__en, ezmax_api_definition__full_documenttypechecklistGetListV1__fr } ezmax_api_definition__full_documenttypechecklistGetListV1_Accept-Language_e;


// Create a new Documenttypechecklist
//
// The endpoint allows to create one or many elements at once.
//
documenttypechecklist_create_object_v1_response_t*
ObjectDocumenttypechecklistAPI_documenttypechecklistCreateObjectV1(apiClient_t *apiClient, documenttypechecklist_create_object_v1_request_t *documenttypechecklist_create_object_v1_request);


// Delete an existing Documenttypechecklist
//
// 
//
documenttypechecklist_delete_object_v1_response_t*
ObjectDocumenttypechecklistAPI_documenttypechecklistDeleteObjectV1(apiClient_t *apiClient, int *pkiDocumenttypechecklistID);


// Edit an existing Documenttypechecklist
//
// 
//
documenttypechecklist_edit_object_v1_response_t*
ObjectDocumenttypechecklistAPI_documenttypechecklistEditObjectV1(apiClient_t *apiClient, int *pkiDocumenttypechecklistID, documenttypechecklist_edit_object_v1_request_t *documenttypechecklist_edit_object_v1_request);


// Retrieve Documenttypechecklist list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eDocumenttypechecklistStatus | Not required<br>Required<br>Filed<br>Justified |
//
documenttypechecklist_get_list_v1_response_t*
ObjectDocumenttypechecklistAPI_documenttypechecklistGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_documenttypechecklistGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing Documenttypechecklist
//
// 
//
documenttypechecklist_get_object_v2_response_t*
ObjectDocumenttypechecklistAPI_documenttypechecklistGetObjectV2(apiClient_t *apiClient, int *pkiDocumenttypechecklistID);


