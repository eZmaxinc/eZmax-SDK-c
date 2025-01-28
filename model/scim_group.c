#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_group.h"



static scim_group_t *scim_group_create_internal(
    char *id,
    char *display_name,
    list_t *members
    ) {
    scim_group_t *scim_group_local_var = malloc(sizeof(scim_group_t));
    if (!scim_group_local_var) {
        return NULL;
    }
    scim_group_local_var->id = id;
    scim_group_local_var->display_name = display_name;
    scim_group_local_var->members = members;

    scim_group_local_var->_library_owned = 1;
    return scim_group_local_var;
}

__attribute__((deprecated)) scim_group_t *scim_group_create(
    char *id,
    char *display_name,
    list_t *members
    ) {
    return scim_group_create_internal (
        id,
        display_name,
        members
        );
}

void scim_group_free(scim_group_t *scim_group) {
    if(NULL == scim_group){
        return ;
    }
    if(scim_group->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scim_group_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scim_group->id) {
        free(scim_group->id);
        scim_group->id = NULL;
    }
    if (scim_group->display_name) {
        free(scim_group->display_name);
        scim_group->display_name = NULL;
    }
    if (scim_group->members) {
        list_ForEach(listEntry, scim_group->members) {
            scim_group_member_free(listEntry->data);
        }
        list_freeList(scim_group->members);
        scim_group->members = NULL;
    }
    free(scim_group);
}

cJSON *scim_group_convertToJSON(scim_group_t *scim_group) {
    cJSON *item = cJSON_CreateObject();

    // scim_group->id
    if(scim_group->id) {
    if(cJSON_AddStringToObject(item, "id", scim_group->id) == NULL) {
    goto fail; //String
    }
    }


    // scim_group->display_name
    if (!scim_group->display_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "displayName", scim_group->display_name) == NULL) {
    goto fail; //String
    }


    // scim_group->members
    if(scim_group->members) {
    cJSON *members = cJSON_AddArrayToObject(item, "members");
    if(members == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *membersListEntry;
    if (scim_group->members) {
    list_ForEach(membersListEntry, scim_group->members) {
    cJSON *itemLocal = scim_group_member_convertToJSON(membersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(members, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

scim_group_t *scim_group_parseFromJSON(cJSON *scim_groupJSON){

    scim_group_t *scim_group_local_var = NULL;

    // define the local list for scim_group->members
    list_t *membersList = NULL;

    // scim_group->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(scim_groupJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // scim_group->display_name
    cJSON *display_name = cJSON_GetObjectItemCaseSensitive(scim_groupJSON, "displayName");
    if (cJSON_IsNull(display_name)) {
        display_name = NULL;
    }
    if (!display_name) {
        goto end;
    }

    
    if(!cJSON_IsString(display_name))
    {
    goto end; //String
    }

    // scim_group->members
    cJSON *members = cJSON_GetObjectItemCaseSensitive(scim_groupJSON, "members");
    if (cJSON_IsNull(members)) {
        members = NULL;
    }
    if (members) { 
    cJSON *members_local_nonprimitive = NULL;
    if(!cJSON_IsArray(members)){
        goto end; //nonprimitive container
    }

    membersList = list_createList();

    cJSON_ArrayForEach(members_local_nonprimitive,members )
    {
        if(!cJSON_IsObject(members_local_nonprimitive)){
            goto end;
        }
        scim_group_member_t *membersItem = scim_group_member_parseFromJSON(members_local_nonprimitive);

        list_addElement(membersList, membersItem);
    }
    }


    scim_group_local_var = scim_group_create_internal (
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        strdup(display_name->valuestring),
        members ? membersList : NULL
        );

    return scim_group_local_var;
end:
    if (membersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, membersList) {
            scim_group_member_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(membersList);
        membersList = NULL;
    }
    return NULL;

}
