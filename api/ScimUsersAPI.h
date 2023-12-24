#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/scim_user.h"
#include "../model/scim_user_list.h"


// Create a new User
//
scim_user_t*
ScimUsersAPI_usersCreateObjectScimV2(apiClient_t *apiClient, scim_user_t *scim_user);


// Delete an existing User
//
void
ScimUsersAPI_usersDeleteObjectScimV2(apiClient_t *apiClient, char *userId);


// Edit an existing User
//
scim_user_t*
ScimUsersAPI_usersEditObjectScimV2(apiClient_t *apiClient, char *userId, scim_user_t *scim_user);


// Retrieve User list
//
scim_user_list_t*
ScimUsersAPI_usersGetListScimV2(apiClient_t *apiClient, char *filter);


// Retrieve an existing User
//
scim_user_t*
ScimUsersAPI_usersGetObjectScimV2(apiClient_t *apiClient, char *userId);


