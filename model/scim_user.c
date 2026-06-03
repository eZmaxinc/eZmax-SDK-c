#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "scim_user.h"



static scim_user_t *scim_user_create_internal(
    char *id,
    char *user_name,
    char *display_name,
    list_t *emails
    ) {
    scim_user_t *scim_user_local_var = malloc(sizeof(scim_user_t));
    if (!scim_user_local_var) {
        return NULL;
    }
    memset(scim_user_local_var, 0, sizeof(scim_user_t));
    scim_user_local_var->_library_owned = 1;
    scim_user_local_var->id = id;
    scim_user_local_var->user_name = user_name;
    scim_user_local_var->display_name = display_name;
    scim_user_local_var->emails = emails;
    return scim_user_local_var;
}

__attribute__((deprecated)) scim_user_t *scim_user_create(
    char *id,
    char *user_name,
    char *display_name,
    list_t *emails
    ) {
    scim_user_t *result = scim_user_create_internal (
        id,
        user_name,
        display_name,
        emails
        );
    if (!result) {
    }
    return result;
}

void scim_user_free(scim_user_t *scim_user) {
    if(NULL == scim_user){
        return ;
    }
    if(scim_user->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "scim_user_free");
        return ;
    }
    listEntry_t *listEntry;
    if (scim_user->id) {
        free(scim_user->id);
        scim_user->id = NULL;
    }
    if (scim_user->user_name) {
        free(scim_user->user_name);
        scim_user->user_name = NULL;
    }
    if (scim_user->display_name) {
        free(scim_user->display_name);
        scim_user->display_name = NULL;
    }
    if (scim_user->emails) {
        list_ForEach(listEntry, scim_user->emails) {
            scim_email_free(listEntry->data);
        }
        list_freeList(scim_user->emails);
        scim_user->emails = NULL;
    }
    free(scim_user);
}

cJSON *scim_user_convertToJSON(scim_user_t *scim_user) {
    cJSON *item = cJSON_CreateObject();

    // scim_user->id
    if(scim_user->id) {
    if(cJSON_AddStringToObject(item, "id", scim_user->id) == NULL) {
    goto fail; //String
    }
    }


    // scim_user->user_name
    if (!scim_user->user_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "userName", scim_user->user_name) == NULL) {
    goto fail; //String
    }


    // scim_user->display_name
    if(scim_user->display_name) {
    if(cJSON_AddStringToObject(item, "displayName", scim_user->display_name) == NULL) {
    goto fail; //String
    }
    }


    // scim_user->emails
    if(scim_user->emails) {
    cJSON *emails = cJSON_AddArrayToObject(item, "emails");
    if(emails == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *emailsListEntry;
    if (scim_user->emails) {
    list_ForEach(emailsListEntry, scim_user->emails) {
    cJSON *itemLocal = scim_email_convertToJSON(emailsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(emails, itemLocal);
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

scim_user_t *scim_user_parseFromJSON(cJSON *scim_userJSON){

    scim_user_t *scim_user_local_var = NULL;

    char *id_local_str = NULL;

    char *user_name_local_str = NULL;

    char *display_name_local_str = NULL;

    // define the local list for scim_user->emails
    list_t *emailsList = NULL;

    // scim_user->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(scim_userJSON, "id");
    if (cJSON_IsNull(id)) {
        id = NULL;
    }
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // scim_user->user_name
    cJSON *user_name = cJSON_GetObjectItemCaseSensitive(scim_userJSON, "userName");
    if (cJSON_IsNull(user_name)) {
        user_name = NULL;
    }
    if (!user_name) {
        goto end;
    }

    
    if(!cJSON_IsString(user_name))
    {
    goto end; //String
    }

    // scim_user->display_name
    cJSON *display_name = cJSON_GetObjectItemCaseSensitive(scim_userJSON, "displayName");
    if (cJSON_IsNull(display_name)) {
        display_name = NULL;
    }
    if (display_name) { 
    if(!cJSON_IsString(display_name) && !cJSON_IsNull(display_name))
    {
    goto end; //String
    }
    }

    // scim_user->emails
    cJSON *emails = cJSON_GetObjectItemCaseSensitive(scim_userJSON, "emails");
    if (cJSON_IsNull(emails)) {
        emails = NULL;
    }
    if (emails) { 
    cJSON *emails_local_nonprimitive = NULL;
    if(!cJSON_IsArray(emails)){
        goto end; //nonprimitive container
    }

    emailsList = list_createList();

    cJSON_ArrayForEach(emails_local_nonprimitive,emails )
    {
        if(!cJSON_IsObject(emails_local_nonprimitive)){
            goto end;
        }
        scim_email_t *emailsItem = scim_email_parseFromJSON(emails_local_nonprimitive);

        list_addElement(emailsList, emailsItem);
    }
    }


    if (id && !cJSON_IsNull(id)) id_local_str = strdup(id->valuestring);
    if (user_name && !cJSON_IsNull(user_name)) user_name_local_str = strdup(user_name->valuestring);
    if (display_name && !cJSON_IsNull(display_name)) display_name_local_str = strdup(display_name->valuestring);

    scim_user_local_var = scim_user_create_internal (
        id_local_str,
        user_name_local_str,
        display_name_local_str,
        emails ? emailsList : NULL
        );

    if (!scim_user_local_var) {
        goto end;
    }

    return scim_user_local_var;
end:
    if (id_local_str) {
        free(id_local_str);
        id_local_str = NULL;
    }
    if (user_name_local_str) {
        free(user_name_local_str);
        user_name_local_str = NULL;
    }
    if (display_name_local_str) {
        free(display_name_local_str);
        display_name_local_str = NULL;
    }
    if (emailsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, emailsList) {
            scim_email_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(emailsList);
        emailsList = NULL;
    }
    return NULL;

}
