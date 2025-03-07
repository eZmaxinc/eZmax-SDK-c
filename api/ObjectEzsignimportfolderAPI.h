#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/ezsignimportfolder_delete_object_v1_response.h"
#include "../model/ezsignimportfolder_get_list_v1_response.h"
#include "../model/ezsignimportfolder_get_object_v2_response.h"
#include "../model/header_accept_language.h"

// Enum EORDERBY for ObjectEzsignimportfolderAPI_ezsignimportfolderGetListV1
typedef enum  { ezmax_api_definition__full_ezsignimportfolderGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_ezsignimportfolderGetListV1_EORDERBY_pkiEzsignimportfolderID_ASC, ezmax_api_definition__full_ezsignimportfolderGetListV1_EORDERBY_pkiEzsignimportfolderID_DESC, ezmax_api_definition__full_ezsignimportfolderGetListV1_EORDERBY_sEzsignimportfolderName_ASC, ezmax_api_definition__full_ezsignimportfolderGetListV1_EORDERBY_sEzsignimportfolderName_DESC } ezmax_api_definition__full_ezsignimportfolderGetListV1_eOrderBy_e;

// Enum  for ObjectEzsignimportfolderAPI_ezsignimportfolderGetListV1
typedef enum  { ezmax_api_definition__full_ezsignimportfolderGetListV1__NULL = 0, ezmax_api_definition__full_ezsignimportfolderGetListV1__*, ezmax_api_definition__full_ezsignimportfolderGetListV1__en, ezmax_api_definition__full_ezsignimportfolderGetListV1__fr } ezmax_api_definition__full_ezsignimportfolderGetListV1_Accept-Language_e;


// Delete an existing Ezsignimportfolder
//
// 
//
ezsignimportfolder_delete_object_v1_response_t*
ObjectEzsignimportfolderAPI_ezsignimportfolderDeleteObjectV1(apiClient_t *apiClient, int *pkiEzsignimportfolderID);


// Retrieve Ezsignimportfolder list
//
// 
//
ezsignimportfolder_get_list_v1_response_t*
ObjectEzsignimportfolderAPI_ezsignimportfolderGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_ezsignimportfolderGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing Ezsignimportfolder
//
// 
//
ezsignimportfolder_get_object_v2_response_t*
ObjectEzsignimportfolderAPI_ezsignimportfolderGetObjectV2(apiClient_t *apiClient, int *pkiEzsignimportfolderID);


