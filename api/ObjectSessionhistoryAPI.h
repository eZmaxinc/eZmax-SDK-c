#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/sessionhistory_get_list_v1_response.h"

// Enum EORDERBY for ObjectSessionhistoryAPI_sessionhistoryGetListV1
typedef enum  { ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_pkiSessionhistoryID_ASC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_pkiSessionhistoryID_DESC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_fkiComputerID_ASC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_fkiComputerID_DESC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_fkiUserID_ASC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_fkiUserID_DESC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_dtSessionhistoryFirsthit_ASC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_dtSessionhistoryFirsthit_DESC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_dtSessionhistoryLasthit_ASC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_dtSessionhistoryLasthit_DESC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_eSessionhistoryEndby_ASC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_eSessionhistoryEndby_DESC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_sComputerDescription_ASC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_sComputerDescription_DESC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_sSessionhistoryDuration_ASC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_sSessionhistoryDuration_DESC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_sSessionhistoryIP_ASC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_sSessionhistoryIP_DESC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_sUserLoginname_ASC, ezmax_api_definition__full_sessionhistoryGetListV1_EORDERBY_sUserLoginname_DESC } ezmax_api_definition__full_sessionhistoryGetListV1_eOrderBy_e;

// Enum  for ObjectSessionhistoryAPI_sessionhistoryGetListV1
typedef enum  { ezmax_api_definition__full_sessionhistoryGetListV1__NULL = 0, ezmax_api_definition__full_sessionhistoryGetListV1__*, ezmax_api_definition__full_sessionhistoryGetListV1__en, ezmax_api_definition__full_sessionhistoryGetListV1__fr } ezmax_api_definition__full_sessionhistoryGetListV1_Accept-Language_e;


// Retrieve Sessionhistory list
//
sessionhistory_get_list_v1_response_t*
ObjectSessionhistoryAPI_sessionhistoryGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_sessionhistoryGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter );

