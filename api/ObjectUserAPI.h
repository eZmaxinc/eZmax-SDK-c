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
#include "../model/user_create_object_v1_request.h"
#include "../model/user_create_object_v1_response.h"
#include "../model/user_create_object_v2_request.h"
#include "../model/user_create_object_v2_response.h"
#include "../model/user_edit_colleagues_v2_request.h"
#include "../model/user_edit_colleagues_v2_response.h"
#include "../model/user_edit_object_v1_request.h"
#include "../model/user_edit_object_v1_response.h"
#include "../model/user_edit_permissions_v1_request.h"
#include "../model/user_edit_permissions_v1_response.h"
#include "../model/user_get_apikeys_v1_response.h"
#include "../model/user_get_autocomplete_v2_response.h"
#include "../model/user_get_colleagues_v2_response.h"
#include "../model/user_get_effective_permissions_v1_response.h"
#include "../model/user_get_list_v1_response.h"
#include "../model/user_get_object_v2_response.h"
#include "../model/user_get_permissions_v1_response.h"
#include "../model/user_get_subnets_v1_response.h"
#include "../model/user_get_usergroupexternals_v1_response.h"
#include "../model/user_get_usergroups_v1_response.h"
#include "../model/user_send_password_reset_v1_response.h"

// Enum SSELECTOR for ObjectUserAPI_userGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_AgentBrokerAssistant, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_AgentBrokerEmployeeEzsignUserNormal, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_AgentBrokerEmployeeNormalBuiltIn, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_AgentBrokerEzsignuserNormal, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_ClonableUsers, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_EzsignuserBuiltIn, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_Ezsignuser, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_Normal, ezmax_api_definition__full_userGetAutocompleteV2_SSELECTOR_UsergroupDelegated } ezmax_api_definition__full_userGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectUserAPI_userGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_userGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_userGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_userGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_userGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_userGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectUserAPI_userGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_userGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_userGetAutocompleteV2__*, ezmax_api_definition__full_userGetAutocompleteV2__en, ezmax_api_definition__full_userGetAutocompleteV2__fr } ezmax_api_definition__full_userGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectUserAPI_userGetListV1
typedef enum  { ezmax_api_definition__full_userGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_userGetListV1_EORDERBY_pkiUserID_ASC, ezmax_api_definition__full_userGetListV1_EORDERBY_pkiUserID_DESC, ezmax_api_definition__full_userGetListV1_EORDERBY_sUserFirstname_ASC, ezmax_api_definition__full_userGetListV1_EORDERBY_sUserFirstname_DESC, ezmax_api_definition__full_userGetListV1_EORDERBY_sUserLastname_ASC, ezmax_api_definition__full_userGetListV1_EORDERBY_sUserLastname_DESC, ezmax_api_definition__full_userGetListV1_EORDERBY_sUserLoginname_ASC, ezmax_api_definition__full_userGetListV1_EORDERBY_sUserLoginname_DESC, ezmax_api_definition__full_userGetListV1_EORDERBY_bUserIsactive_ASC, ezmax_api_definition__full_userGetListV1_EORDERBY_bUserIsactive_DESC, ezmax_api_definition__full_userGetListV1_EORDERBY_eUserType_ASC, ezmax_api_definition__full_userGetListV1_EORDERBY_eUserType_DESC, ezmax_api_definition__full_userGetListV1_EORDERBY_eUserOrigin_ASC, ezmax_api_definition__full_userGetListV1_EORDERBY_eUserOrigin_DESC, ezmax_api_definition__full_userGetListV1_EORDERBY_eUserEzsignaccess_ASC, ezmax_api_definition__full_userGetListV1_EORDERBY_eUserEzsignaccess_DESC, ezmax_api_definition__full_userGetListV1_EORDERBY_dtUserEzsignprepaidexpiration_ASC, ezmax_api_definition__full_userGetListV1_EORDERBY_dtUserEzsignprepaidexpiration_DESC, ezmax_api_definition__full_userGetListV1_EORDERBY_sEmailAddress_ASC, ezmax_api_definition__full_userGetListV1_EORDERBY_sEmailAddress_DESC } ezmax_api_definition__full_userGetListV1_eOrderBy_e;

// Enum  for ObjectUserAPI_userGetListV1
typedef enum  { ezmax_api_definition__full_userGetListV1__NULL = 0, ezmax_api_definition__full_userGetListV1__*, ezmax_api_definition__full_userGetListV1__en, ezmax_api_definition__full_userGetListV1__fr } ezmax_api_definition__full_userGetListV1_Accept-Language_e;


// Create a new User
//
// The endpoint allows to create one or many elements at once.
//
user_create_object_v1_response_t*
ObjectUserAPI_userCreateObjectV1(apiClient_t *apiClient, user_create_object_v1_request_t *user_create_object_v1_request);


// Create a new User
//
// The endpoint allows to create one or many elements at once.
//
user_create_object_v2_response_t*
ObjectUserAPI_userCreateObjectV2(apiClient_t *apiClient, user_create_object_v2_request_t *user_create_object_v2_request);


// Edit multiple Colleagues
//
// Using this endpoint, you can edit multiple Colleagues at the same time.
//
user_edit_colleagues_v2_response_t*
ObjectUserAPI_userEditColleaguesV2(apiClient_t *apiClient, int *pkiUserID, user_edit_colleagues_v2_request_t *user_edit_colleagues_v2_request);


// Edit an existing User
//
// 
//
user_edit_object_v1_response_t*
ObjectUserAPI_userEditObjectV1(apiClient_t *apiClient, int *pkiUserID, user_edit_object_v1_request_t *user_edit_object_v1_request);


// Edit multiple Permissions
//
// Using this endpoint, you can edit multiple Permissions at the same time.
//
user_edit_permissions_v1_response_t*
ObjectUserAPI_userEditPermissionsV1(apiClient_t *apiClient, int *pkiUserID, user_edit_permissions_v1_request_t *user_edit_permissions_v1_request);


// Retrieve an existing User's Apikeys
//
user_get_apikeys_v1_response_t*
ObjectUserAPI_userGetApikeysV1(apiClient_t *apiClient, int *pkiUserID);


// Retrieve Users and IDs
//
// Get the list of User to be used in a dropdown or autocomplete control.
//
user_get_autocomplete_v2_response_t*
ObjectUserAPI_userGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_userGetAutocompleteV2_sSelector_e sSelector, ezmax_api_definition__full_userGetAutocompleteV2_eFilterActive_e eFilterActive, char *sQuery, header_accept_language_e Accept_Language);


// Retrieve an existing User's Colleagues
//
user_get_colleagues_v2_response_t*
ObjectUserAPI_userGetColleaguesV2(apiClient_t *apiClient, int *pkiUserID);


// Retrieve an existing User's Effective Permissions
//
// Effective Permissions refers to the combination of Permissions held by a User and the Permissions associated with the Usergroups they belong to.
//
user_get_effective_permissions_v1_response_t*
ObjectUserAPI_userGetEffectivePermissionsV1(apiClient_t *apiClient, int *pkiUserID);


// Retrieve User list
//
// Enum values that can be filtered in query parameter *sFilter*:  | Variable | Valid values | |---|---| | eUserType | AgentBroker<br>Assistant<br>Employee<br>EzsignUser<br>Normal | | eUserOrigin | BuiltIn<br>External | | eUserEzsignaccess | No<br>PaidByOffice<br>PerDocument<br>Prepaid |
//
user_get_list_v1_response_t*
ObjectUserAPI_userGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_userGetListV1_eOrderBy_e eOrderBy, int *iRowMax, int *iRowOffset, header_accept_language_e Accept_Language, char *sFilter);


// Retrieve an existing User
//
// 
//
user_get_object_v2_response_t*
ObjectUserAPI_userGetObjectV2(apiClient_t *apiClient, int *pkiUserID);


// Retrieve an existing User's Permissions
//
user_get_permissions_v1_response_t*
ObjectUserAPI_userGetPermissionsV1(apiClient_t *apiClient, int *pkiUserID);


// Retrieve an existing User's Subnets
//
user_get_subnets_v1_response_t*
ObjectUserAPI_userGetSubnetsV1(apiClient_t *apiClient, int *pkiUserID);


// Get User's Usergroupexternals
//
user_get_usergroupexternals_v1_response_t*
ObjectUserAPI_userGetUsergroupexternalsV1(apiClient_t *apiClient, int *pkiUserID);


// Get User's Usergroups
//
user_get_usergroups_v1_response_t*
ObjectUserAPI_userGetUsergroupsV1(apiClient_t *apiClient, int *pkiUserID);


// Send password reset
//
// Send the password reset email
//
user_send_password_reset_v1_response_t*
ObjectUserAPI_userSendPasswordResetV1(apiClient_t *apiClient, int *pkiUserID, object_t *body);


