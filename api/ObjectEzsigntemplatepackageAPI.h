#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsigntemplatepackage_get_list_v1_response.h"
#include "../model/header_accept_language.h"

// Enum EORDERBY for ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetListV1
typedef enum  { ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_NULL = 0, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_pkiEzsigntemplatepackageID_ASC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_pkiEzsigntemplatepackageID_DESC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_fkiDepartmentID_ASC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_fkiDepartmentID_DESC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_fkiTeamID_ASC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_fkiTeamID_DESC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_fkiEzsignfoldertypeID_ASC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_fkiEzsignfoldertypeID_DESC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_fkiLanguageID_ASC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_fkiLanguageID_DESC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_eEzsigntemplatepackageType_ASC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_eEzsigntemplatepackageType_DESC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_sEzsigntemplatepackageDescription_ASC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_sEzsigntemplatepackageDescription_DESC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_bEzsigntemplatepackageIsactive_ASC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_bEzsigntemplatepackageIsactive_DESC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_iEzsigntemplatepackagemembership_ASC, ezmax_api_definition_ezsigntemplatepackageGetListV1_EORDERBY_iEzsigntemplatepackagemembership_DESC } ezmax_api_definition_ezsigntemplatepackageGetListV1_eOrderBy_e;

// Enum  for ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetListV1
typedef enum  { ezmax_api_definition_ezsigntemplatepackageGetListV1__NULL = 0, ezmax_api_definition_ezsigntemplatepackageGetListV1__*, ezmax_api_definition_ezsigntemplatepackageGetListV1__en, ezmax_api_definition_ezsigntemplatepackageGetListV1__fr } ezmax_api_definition_ezsigntemplatepackageGetListV1_Accept-Language_e;


// Retrieve Ezsigntemplatepackage list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eEzsigntemplatepackageType | Company<br>Department<br>Team<br>User<br>Usergroup |
//
ezsigntemplatepackage_get_list_v1_response_t*
ObjectEzsigntemplatepackageAPI_ezsigntemplatepackageGetListV1(apiClient_t *apiClient, ezmax_api_definition_ezsigntemplatepackageGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter );


