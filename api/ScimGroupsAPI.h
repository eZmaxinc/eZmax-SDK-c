#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/scim_group.h"


// Create a new Usergroup
//
scim_group_t*
ScimGroupsAPI_groupsCreateObjectScimV2(apiClient_t *apiClient, scim_group_t *scim_group);


// Delete an existing Usergroup
//
void
ScimGroupsAPI_groupsDeleteObjectScimV2(apiClient_t *apiClient, char *groupId);


// Edit an existing Usergroup
//
scim_group_t*
ScimGroupsAPI_groupsEditObjectScimV2(apiClient_t *apiClient, char *groupId, scim_group_t *scim_group);


// Retrieve Usergroup list
//
scim_group_t*
ScimGroupsAPI_groupsGetListScimV2(apiClient_t *apiClient, char *filter);


// Retrieve an existing Usergroup
//
scim_group_t*
ScimGroupsAPI_groupsGetObjectScimV2(apiClient_t *apiClient, char *groupId);


