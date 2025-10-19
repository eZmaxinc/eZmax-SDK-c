#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/lead_get_list_v1_response.h"
#include "../model/lead_import_into_edm_v1_request.h"
#include "../model/lead_import_into_edm_v1_response.h"

// Enum EORDERBY for ObjectLeadAPI_leadGetListV1
typedef enum  { ezmax_api_definition__full_leadGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_leadGetListV1_EORDERBY_pkiLeadID_ASC, ezmax_api_definition__full_leadGetListV1_EORDERBY_pkiLeadID_DESC, ezmax_api_definition__full_leadGetListV1_EORDERBY_fkiLeadsourceID_ASC, ezmax_api_definition__full_leadGetListV1_EORDERBY_fkiLeadsourceID_DESC, ezmax_api_definition__full_leadGetListV1_EORDERBY_sLeadsourceNameX_ASC, ezmax_api_definition__full_leadGetListV1_EORDERBY_sLeadsourceNameX_DESC, ezmax_api_definition__full_leadGetListV1_EORDERBY_eLeadStatus_ASC, ezmax_api_definition__full_leadGetListV1_EORDERBY_eLeadStatus_DESC, ezmax_api_definition__full_leadGetListV1_EORDERBY_dtLeadExpiration_ASC, ezmax_api_definition__full_leadGetListV1_EORDERBY_dtLeadExpiration_DESC, ezmax_api_definition__full_leadGetListV1_EORDERBY_bLeadIsactive_ASC, ezmax_api_definition__full_leadGetListV1_EORDERBY_bLeadIsactive_DESC, ezmax_api_definition__full_leadGetListV1_EORDERBY_sLeadCode_ASC, ezmax_api_definition__full_leadGetListV1_EORDERBY_sLeadCode_DESC } ezmax_api_definition__full_leadGetListV1_eOrderBy_e;

// Enum  for ObjectLeadAPI_leadGetListV1
typedef enum  { ezmax_api_definition__full_leadGetListV1__NULL = 0, ezmax_api_definition__full_leadGetListV1__*, ezmax_api_definition__full_leadGetListV1__en, ezmax_api_definition__full_leadGetListV1__fr } ezmax_api_definition__full_leadGetListV1_Accept-Language_e;


// Retrieve Lead list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eLeadStatus | New<br>Dispatching<br>Assigned<br>Lost<br>Won |
//
lead_get_list_v1_response_t*
ObjectLeadAPI_leadGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_leadGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Import attachments into the Lead
//
// 
//
lead_import_into_edm_v1_response_t*
ObjectLeadAPI_leadImportIntoEDMV1(apiClient_t *apiClient, int *pkiLeadID, lead_import_into_edm_v1_request_t *lead_import_into_edm_v1_request);


