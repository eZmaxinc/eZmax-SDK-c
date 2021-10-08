#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignfoldertype_get_list_v1_response.h"
#include "../model/header_accept_language.h"

// Enum EORDERBY for ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetListV1
typedef enum  { ezmax_api_definition_ezsignfoldertypeGetListV1_EORDERBY_NULL = 0, ezmax_api_definition_ezsignfoldertypeGetListV1_EORDERBY_pkiEzsignfoldertypeID_ASC, ezmax_api_definition_ezsignfoldertypeGetListV1_EORDERBY_pkiEzsignfoldertypeID_DESC, ezmax_api_definition_ezsignfoldertypeGetListV1_EORDERBY_eEzsignfoldertypePrivacylevel_ASC, ezmax_api_definition_ezsignfoldertypeGetListV1_EORDERBY_eEzsignfoldertypePrivacylevel_DESC, ezmax_api_definition_ezsignfoldertypeGetListV1_EORDERBY_sEzsignfoldertypeNameX_ASC, ezmax_api_definition_ezsignfoldertypeGetListV1_EORDERBY_sEzsignfoldertypeNameX_DESC, ezmax_api_definition_ezsignfoldertypeGetListV1_EORDERBY_bEzsignfoldertypeIsactive_ASC, ezmax_api_definition_ezsignfoldertypeGetListV1_EORDERBY_bEzsignfoldertypeIsactive_DESC } ezmax_api_definition_ezsignfoldertypeGetListV1_eOrderBy_e;

// Enum  for ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetListV1
typedef enum  { ezmax_api_definition_ezsignfoldertypeGetListV1__NULL = 0, ezmax_api_definition_ezsignfoldertypeGetListV1__*, ezmax_api_definition_ezsignfoldertypeGetListV1__en, ezmax_api_definition_ezsignfoldertypeGetListV1__fr } ezmax_api_definition_ezsignfoldertypeGetListV1_Accept-Language_e;


// Retrieve Ezsignfoldertype list
//
// ## ⚠️EARLY ADOPTERS WARNING  ### This endpoint is not officially released. Its definition might still change and it might not be available in every environment and region.  Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsignfoldertypePrivacylevel | User<br>Usergroup |
//
ezsignfoldertype_get_list_v1_response_t*
ObjectEzsignfoldertypeAPI_ezsignfoldertypeGetListV1(apiClient_t *apiClient, ezmax_api_definition_ezsignfoldertypeGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter );


