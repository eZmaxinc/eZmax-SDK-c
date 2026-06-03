#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezmaxmaillinglist_get_list_v1_response.h"
#include "../model/header_accept_language.h"

// Enum EORDERBY for ObjectEzmaxmaillinglistAPI_ezmaxmaillinglistGetListV1
typedef enum  { ezmax_api_definition__full_ezmaxmaillinglistGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_ezmaxmaillinglistGetListV1_EORDERBY_pkiEzmaxmaillinglistID_ASC, ezmax_api_definition__full_ezmaxmaillinglistGetListV1_EORDERBY_pkiEzmaxmaillinglistID_DESC, ezmax_api_definition__full_ezmaxmaillinglistGetListV1_EORDERBY_sEzmaxmaillinglistNameX_ASC, ezmax_api_definition__full_ezmaxmaillinglistGetListV1_EORDERBY_sEzmaxmaillinglistNameX_DESC, ezmax_api_definition__full_ezmaxmaillinglistGetListV1_EORDERBY_sEzmaxmaillinglistDescriptionX_ASC, ezmax_api_definition__full_ezmaxmaillinglistGetListV1_EORDERBY_sEzmaxmaillinglistDescriptionX_DESC } ezmax_api_definition__full_ezmaxmaillinglistGetListV1_eOrderBy_e;

// Enum  for ObjectEzmaxmaillinglistAPI_ezmaxmaillinglistGetListV1
typedef enum  { ezmax_api_definition__full_ezmaxmaillinglistGetListV1__NULL = 0, ezmax_api_definition__full_ezmaxmaillinglistGetListV1__*, ezmax_api_definition__full_ezmaxmaillinglistGetListV1__en, ezmax_api_definition__full_ezmaxmaillinglistGetListV1__fr } ezmax_api_definition__full_ezmaxmaillinglistGetListV1_Accept-Language_e;


// Retrieve Ezmaxmaillinglist list
//
// 
//
ezmaxmaillinglist_get_list_v1_response_t*
ObjectEzmaxmaillinglistAPI_ezmaxmaillinglistGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezmaxmaillinglistGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


