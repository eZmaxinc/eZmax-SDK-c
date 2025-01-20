#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/apikey_create_object_v2_request.h"
#include "../model/apikey_create_object_v2_response.h"
#include "../model/apikey_edit_object_v1_request.h"
#include "../model/apikey_edit_object_v1_response.h"
#include "../model/apikey_edit_permissions_v1_request.h"
#include "../model/apikey_edit_permissions_v1_response.h"
#include "../model/apikey_generate_delegated_credentials_v1_request.h"
#include "../model/apikey_generate_delegated_credentials_v1_response.h"
#include "../model/apikey_get_cors_v1_response.h"
#include "../model/apikey_get_list_v1_response.h"
#include "../model/apikey_get_object_v2_response.h"
#include "../model/apikey_get_permissions_v1_response.h"
#include "../model/apikey_get_subnets_v1_response.h"
#include "../model/apikey_regenerate_v1_request.h"
#include "../model/apikey_regenerate_v1_response.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"

// Enum EORDERBY for ObjectApikeyAPI_apikeyGetListV1
typedef enum  { ezmax_api_definition__full_apikeyGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_apikeyGetListV1_EORDERBY_pkiApikeyID_ASC, ezmax_api_definition__full_apikeyGetListV1_EORDERBY_pkiApikeyID_DESC, ezmax_api_definition__full_apikeyGetListV1_EORDERBY_sApikeyDescriptionX_ASC, ezmax_api_definition__full_apikeyGetListV1_EORDERBY_sApikeyDescriptionX_DESC, ezmax_api_definition__full_apikeyGetListV1_EORDERBY_bApikeyIssigned_ASC, ezmax_api_definition__full_apikeyGetListV1_EORDERBY_bApikeyIssigned_DESC, ezmax_api_definition__full_apikeyGetListV1_EORDERBY_bApikeyIsactive_ASC, ezmax_api_definition__full_apikeyGetListV1_EORDERBY_bApikeyIsactive_DESC, ezmax_api_definition__full_apikeyGetListV1_EORDERBY_sUserFirstname_ASC, ezmax_api_definition__full_apikeyGetListV1_EORDERBY_sUserFirstname_DESC, ezmax_api_definition__full_apikeyGetListV1_EORDERBY_sUserLastname_ASC, ezmax_api_definition__full_apikeyGetListV1_EORDERBY_sUserLastname_DESC } ezmax_api_definition__full_apikeyGetListV1_eOrderBy_e;

// Enum  for ObjectApikeyAPI_apikeyGetListV1
typedef enum  { ezmax_api_definition__full_apikeyGetListV1__NULL = 0, ezmax_api_definition__full_apikeyGetListV1__*, ezmax_api_definition__full_apikeyGetListV1__en, ezmax_api_definition__full_apikeyGetListV1__fr } ezmax_api_definition__full_apikeyGetListV1_Accept-Language_e;


// Create a new Apikey
//
// The endpoint allows to create one or many elements at once.
//
apikey_create_object_v2_response_t*
ObjectApikeyAPI_apikeyCreateObjectV2(apiClient_t *apiClient, apikey_create_object_v2_request_t *apikey_create_object_v2_request);


// Edit an existing Apikey
//
// 
//
apikey_edit_object_v1_response_t*
ObjectApikeyAPI_apikeyEditObjectV1(apiClient_t *apiClient, int *pkiApikeyID, apikey_edit_object_v1_request_t *apikey_edit_object_v1_request);


// Edit multiple Permissions
//
// Using this endpoint, you can edit multiple Permissions at the same time.
//
apikey_edit_permissions_v1_response_t*
ObjectApikeyAPI_apikeyEditPermissionsV1(apiClient_t *apiClient, int *pkiApikeyID, apikey_edit_permissions_v1_request_t *apikey_edit_permissions_v1_request);


// Generate a delegated credentials
//
// 
//
apikey_generate_delegated_credentials_v1_response_t*
ObjectApikeyAPI_apikeyGenerateDelegatedCredentialsV1(apiClient_t *apiClient, apikey_generate_delegated_credentials_v1_request_t *apikey_generate_delegated_credentials_v1_request);


// Retrieve an existing Apikey's cors
//
apikey_get_cors_v1_response_t*
ObjectApikeyAPI_apikeyGetCorsV1(apiClient_t *apiClient, int *pkiApikeyID);


// Retrieve Apikey list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---|
//
apikey_get_list_v1_response_t*
ObjectApikeyAPI_apikeyGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_apikeyGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing Apikey
//
// 
//
apikey_get_object_v2_response_t*
ObjectApikeyAPI_apikeyGetObjectV2(apiClient_t *apiClient, int *pkiApikeyID);


// Retrieve an existing Apikey's Permissions
//
apikey_get_permissions_v1_response_t*
ObjectApikeyAPI_apikeyGetPermissionsV1(apiClient_t *apiClient, int *pkiApikeyID);


// Retrieve an existing Apikey's subnets
//
apikey_get_subnets_v1_response_t*
ObjectApikeyAPI_apikeyGetSubnetsV1(apiClient_t *apiClient, int *pkiApikeyID);


// Regenerate the Apikey
//
// 
//
apikey_regenerate_v1_response_t*
ObjectApikeyAPI_apikeyRegenerateV1(apiClient_t *apiClient, int *pkiApikeyID, apikey_regenerate_v1_request_t *apikey_regenerate_v1_request);


