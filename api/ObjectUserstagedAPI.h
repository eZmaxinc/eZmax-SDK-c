#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/object.h"
#include "../model/userstaged_create_user_v1_response.h"
#include "../model/userstaged_delete_object_v1_response.h"
#include "../model/userstaged_get_list_v1_response.h"
#include "../model/userstaged_get_object_v2_response.h"
#include "../model/userstaged_map_v1_request.h"
#include "../model/userstaged_map_v1_response.h"

// Enum EORDERBY for ObjectUserstagedAPI_userstagedGetListV1
typedef enum  { ezmax_api_definition__full_userstagedGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_userstagedGetListV1_EORDERBY_pkiUserstagedID_ASC, ezmax_api_definition__full_userstagedGetListV1_EORDERBY_pkiUserstagedID_DESC, ezmax_api_definition__full_userstagedGetListV1_EORDERBY_sEmailAddress_ASC, ezmax_api_definition__full_userstagedGetListV1_EORDERBY_sEmailAddress_DESC, ezmax_api_definition__full_userstagedGetListV1_EORDERBY_sUserstagedFirstname_ASC, ezmax_api_definition__full_userstagedGetListV1_EORDERBY_sUserstagedFirstname_DESC, ezmax_api_definition__full_userstagedGetListV1_EORDERBY_sUserstagedLastname_ASC, ezmax_api_definition__full_userstagedGetListV1_EORDERBY_sUserstagedLastname_DESC, ezmax_api_definition__full_userstagedGetListV1_EORDERBY_sUserstagedExternalid_ASC, ezmax_api_definition__full_userstagedGetListV1_EORDERBY_sUserstagedExternalid_DESC } ezmax_api_definition__full_userstagedGetListV1_eOrderBy_e;

// Enum  for ObjectUserstagedAPI_userstagedGetListV1
typedef enum  { ezmax_api_definition__full_userstagedGetListV1__NULL = 0, ezmax_api_definition__full_userstagedGetListV1__*, ezmax_api_definition__full_userstagedGetListV1__en, ezmax_api_definition__full_userstagedGetListV1__fr } ezmax_api_definition__full_userstagedGetListV1_Accept-Language_e;


// Create a User from a Userstaged and then map it
//
// Default values will be used while creating the User. If you need to change those values, you should use the route to edit a User.
//
userstaged_create_user_v1_response_t*
ObjectUserstagedAPI_userstagedCreateUserV1(apiClient_t *apiClient, int *pkiUserstagedID, object_t *body);


// Delete an existing Userstaged
//
// 
//
userstaged_delete_object_v1_response_t*
ObjectUserstagedAPI_userstagedDeleteObjectV1(apiClient_t *apiClient, int *pkiUserstagedID);


// Retrieve Userstaged list
//
// 
//
userstaged_get_list_v1_response_t*
ObjectUserstagedAPI_userstagedGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_userstagedGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing Userstaged
//
// 
//
userstaged_get_object_v2_response_t*
ObjectUserstagedAPI_userstagedGetObjectV2(apiClient_t *apiClient, int *pkiUserstagedID);


// Map the Userstaged to an existing user
//
// 
//
userstaged_map_v1_response_t*
ObjectUserstagedAPI_userstagedMapV1(apiClient_t *apiClient, int *pkiUserstagedID, userstaged_map_v1_request_t *userstaged_map_v1_request);


