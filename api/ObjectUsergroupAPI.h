#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/common_response_error.h"
#include "../model/header_accept_language.h"
#include "../model/usergroup_create_object_v1_request.h"
#include "../model/usergroup_create_object_v1_response.h"
#include "../model/usergroup_edit_object_v1_request.h"
#include "../model/usergroup_edit_object_v1_response.h"
#include "../model/usergroup_edit_permissions_v1_request.h"
#include "../model/usergroup_edit_permissions_v1_response.h"
#include "../model/usergroup_edit_usergroupdelegations_v1_request.h"
#include "../model/usergroup_edit_usergroupdelegations_v1_response.h"
#include "../model/usergroup_edit_usergroupmemberships_v1_request.h"
#include "../model/usergroup_edit_usergroupmemberships_v1_response.h"
#include "../model/usergroup_get_autocomplete_v2_response.h"
#include "../model/usergroup_get_list_v1_response.h"
#include "../model/usergroup_get_object_v2_response.h"
#include "../model/usergroup_get_permissions_v1_response.h"
#include "../model/usergroup_get_usergroupdelegations_v1_response.h"
#include "../model/usergroup_get_usergroupmemberships_v1_response.h"

// Enum SSELECTOR for ObjectUsergroupAPI_usergroupGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_usergroupGetAutocompleteV2_SSELECTOR_NULL = 0, ezmax_api_definition__full_usergroupGetAutocompleteV2_SSELECTOR_All, ezmax_api_definition__full_usergroupGetAutocompleteV2_SSELECTOR_AllButEveryone } ezmax_api_definition__full_usergroupGetAutocompleteV2_sSelector_e;

// Enum EFILTERACTIVE for ObjectUsergroupAPI_usergroupGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_usergroupGetAutocompleteV2_EFILTERACTIVE_NULL = 0, ezmax_api_definition__full_usergroupGetAutocompleteV2_EFILTERACTIVE_All, ezmax_api_definition__full_usergroupGetAutocompleteV2_EFILTERACTIVE_Active, ezmax_api_definition__full_usergroupGetAutocompleteV2_EFILTERACTIVE_Inactive } ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e;

// Enum  for ObjectUsergroupAPI_usergroupGetAutocompleteV2
typedef enum  { ezmax_api_definition__full_usergroupGetAutocompleteV2__NULL = 0, ezmax_api_definition__full_usergroupGetAutocompleteV2__*, ezmax_api_definition__full_usergroupGetAutocompleteV2__en, ezmax_api_definition__full_usergroupGetAutocompleteV2__fr } ezmax_api_definition__full_usergroupGetAutocompleteV2_Accept-Language_e;

// Enum EORDERBY for ObjectUsergroupAPI_usergroupGetListV1
typedef enum  { ezmax_api_definition__full_usergroupGetListV1_EORDERBY_NULL = 0, ezmax_api_definition__full_usergroupGetListV1_EORDERBY_pkiUsergroupID_ASC, ezmax_api_definition__full_usergroupGetListV1_EORDERBY_pkiUsergroupID_DESC, ezmax_api_definition__full_usergroupGetListV1_EORDERBY_sUsergroupNameX_ASC, ezmax_api_definition__full_usergroupGetListV1_EORDERBY_sUsergroupNameX_DESC, ezmax_api_definition__full_usergroupGetListV1_EORDERBY_iCountUser_ASC, ezmax_api_definition__full_usergroupGetListV1_EORDERBY_iCountUser_DESC } ezmax_api_definition__full_usergroupGetListV1_eOrderBy_e;

// Enum  for ObjectUsergroupAPI_usergroupGetListV1
typedef enum  { ezmax_api_definition__full_usergroupGetListV1__NULL = 0, ezmax_api_definition__full_usergroupGetListV1__*, ezmax_api_definition__full_usergroupGetListV1__en, ezmax_api_definition__full_usergroupGetListV1__fr } ezmax_api_definition__full_usergroupGetListV1_Accept-Language_e;


// Create a new Usergroup
//
// The endpoint allows to create one or many elements at once.
//
usergroup_create_object_v1_response_t*
ObjectUsergroupAPI_usergroupCreateObjectV1(apiClient_t *apiClient, usergroup_create_object_v1_request_t * usergroup_create_object_v1_request );


// Edit an existing Usergroup
//
// 
//
usergroup_edit_object_v1_response_t*
ObjectUsergroupAPI_usergroupEditObjectV1(apiClient_t *apiClient, int pkiUsergroupID , usergroup_edit_object_v1_request_t * usergroup_edit_object_v1_request );


// Edit multiple Permissions
//
// Using this endpoint, you can edit multiple Permissions at the same time.
//
usergroup_edit_permissions_v1_response_t*
ObjectUsergroupAPI_usergroupEditPermissionsV1(apiClient_t *apiClient, int pkiUsergroupID , usergroup_edit_permissions_v1_request_t * usergroup_edit_permissions_v1_request );


// Edit multiple Usergroupdelegations
//
// Edit multiple Usergroupdelegations
//
usergroup_edit_usergroupdelegations_v1_response_t*
ObjectUsergroupAPI_usergroupEditUsergroupdelegationsV1(apiClient_t *apiClient, int pkiUsergroupID , usergroup_edit_usergroupdelegations_v1_request_t * usergroup_edit_usergroupdelegations_v1_request );


// Edit multiple Usergroupmemberships
//
// Using this endpoint, you can edit multiple Usergroupmemberships at the same time.
//
usergroup_edit_usergroupmemberships_v1_response_t*
ObjectUsergroupAPI_usergroupEditUsergroupmembershipsV1(apiClient_t *apiClient, int pkiUsergroupID , usergroup_edit_usergroupmemberships_v1_request_t * usergroup_edit_usergroupmemberships_v1_request );


// Retrieve Usergroups and IDs
//
// Get the list of Usergroup to be used in a dropdown or autocomplete control.
//
usergroup_get_autocomplete_v2_response_t*
ObjectUsergroupAPI_usergroupGetAutocompleteV2(apiClient_t *apiClient, ezmax_api_definition__full_usergroupGetAutocompleteV2_sSelector_e sSelector , ezmax_api_definition__full_usergroupGetAutocompleteV2_eFilterActive_e eFilterActive , char * sQuery , header_accept_language_e Accept_Language );


// Retrieve Usergroup list
//
// 
//
usergroup_get_list_v1_response_t*
ObjectUsergroupAPI_usergroupGetListV1(apiClient_t *apiClient, ezmax_api_definition__full_usergroupGetListV1_eOrderBy_e eOrderBy , int iRowMax , int iRowOffset , header_accept_language_e Accept_Language , char * sFilter );


// Retrieve an existing Usergroup
//
// 
//
usergroup_get_object_v2_response_t*
ObjectUsergroupAPI_usergroupGetObjectV2(apiClient_t *apiClient, int pkiUsergroupID );


// Retrieve an existing Usergroup's Permissions
//
usergroup_get_permissions_v1_response_t*
ObjectUsergroupAPI_usergroupGetPermissionsV1(apiClient_t *apiClient, int pkiUsergroupID );


// Retrieve an existing Usergroup's Usergroupdelegations
//
usergroup_get_usergroupdelegations_v1_response_t*
ObjectUsergroupAPI_usergroupGetUsergroupdelegationsV1(apiClient_t *apiClient, int pkiUsergroupID );


// Retrieve an existing Usergroup's Usergroupmemberships
//
usergroup_get_usergroupmemberships_v1_response_t*
ObjectUsergroupAPI_usergroupGetUsergroupmembershipsV1(apiClient_t *apiClient, int pkiUsergroupID );


