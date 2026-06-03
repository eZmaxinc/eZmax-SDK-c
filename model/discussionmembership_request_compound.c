#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmembership_request_compound.h"



static discussionmembership_request_compound_t *discussionmembership_request_compound_create_internal(
    int *pki_discussionmembership_id,
    int *fki_discussion_id,
    int *fki_user_id,
    int *fki_usergroup_id,
    int *fki_modulesection_id,
    char *dt_discussionmembership_joined
    ) {
    discussionmembership_request_compound_t *discussionmembership_request_compound_local_var = malloc(sizeof(discussionmembership_request_compound_t));
    if (!discussionmembership_request_compound_local_var) {
        return NULL;
    }
    memset(discussionmembership_request_compound_local_var, 0, sizeof(discussionmembership_request_compound_t));
    discussionmembership_request_compound_local_var->_library_owned = 1;
    discussionmembership_request_compound_local_var->pki_discussionmembership_id = pki_discussionmembership_id;
    discussionmembership_request_compound_local_var->fki_discussion_id = fki_discussion_id;
    discussionmembership_request_compound_local_var->fki_user_id = fki_user_id;
    discussionmembership_request_compound_local_var->fki_usergroup_id = fki_usergroup_id;
    discussionmembership_request_compound_local_var->fki_modulesection_id = fki_modulesection_id;
    discussionmembership_request_compound_local_var->dt_discussionmembership_joined = dt_discussionmembership_joined;
    return discussionmembership_request_compound_local_var;
}

__attribute__((deprecated)) discussionmembership_request_compound_t *discussionmembership_request_compound_create(
    int *pki_discussionmembership_id,
    int *fki_discussion_id,
    int *fki_user_id,
    int *fki_usergroup_id,
    int *fki_modulesection_id,
    char *dt_discussionmembership_joined
    ) {
    int *pki_discussionmembership_id_copy = NULL;
    if (pki_discussionmembership_id) {
        pki_discussionmembership_id_copy = malloc(sizeof(int));
        if (pki_discussionmembership_id_copy) *pki_discussionmembership_id_copy = *pki_discussionmembership_id;
    }
    int *fki_discussion_id_copy = NULL;
    if (fki_discussion_id) {
        fki_discussion_id_copy = malloc(sizeof(int));
        if (fki_discussion_id_copy) *fki_discussion_id_copy = *fki_discussion_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *fki_usergroup_id_copy = NULL;
    if (fki_usergroup_id) {
        fki_usergroup_id_copy = malloc(sizeof(int));
        if (fki_usergroup_id_copy) *fki_usergroup_id_copy = *fki_usergroup_id;
    }
    int *fki_modulesection_id_copy = NULL;
    if (fki_modulesection_id) {
        fki_modulesection_id_copy = malloc(sizeof(int));
        if (fki_modulesection_id_copy) *fki_modulesection_id_copy = *fki_modulesection_id;
    }
    discussionmembership_request_compound_t *result = discussionmembership_request_compound_create_internal (
        pki_discussionmembership_id_copy,
        fki_discussion_id_copy,
        fki_user_id_copy,
        fki_usergroup_id_copy,
        fki_modulesection_id_copy,
        dt_discussionmembership_joined
        );
    if (!result) {
        free(pki_discussionmembership_id_copy);
        free(fki_discussion_id_copy);
        free(fki_user_id_copy);
        free(fki_usergroup_id_copy);
        free(fki_modulesection_id_copy);
    }
    return result;
}

void discussionmembership_request_compound_free(discussionmembership_request_compound_t *discussionmembership_request_compound) {
    if(NULL == discussionmembership_request_compound){
        return ;
    }
    if(discussionmembership_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussionmembership_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmembership_request_compound->pki_discussionmembership_id) {
        free(discussionmembership_request_compound->pki_discussionmembership_id);
        discussionmembership_request_compound->pki_discussionmembership_id = NULL;
    }
    if (discussionmembership_request_compound->fki_discussion_id) {
        free(discussionmembership_request_compound->fki_discussion_id);
        discussionmembership_request_compound->fki_discussion_id = NULL;
    }
    if (discussionmembership_request_compound->fki_user_id) {
        free(discussionmembership_request_compound->fki_user_id);
        discussionmembership_request_compound->fki_user_id = NULL;
    }
    if (discussionmembership_request_compound->fki_usergroup_id) {
        free(discussionmembership_request_compound->fki_usergroup_id);
        discussionmembership_request_compound->fki_usergroup_id = NULL;
    }
    if (discussionmembership_request_compound->fki_modulesection_id) {
        free(discussionmembership_request_compound->fki_modulesection_id);
        discussionmembership_request_compound->fki_modulesection_id = NULL;
    }
    if (discussionmembership_request_compound->dt_discussionmembership_joined) {
        free(discussionmembership_request_compound->dt_discussionmembership_joined);
        discussionmembership_request_compound->dt_discussionmembership_joined = NULL;
    }
    free(discussionmembership_request_compound);
}

cJSON *discussionmembership_request_compound_convertToJSON(discussionmembership_request_compound_t *discussionmembership_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // discussionmembership_request_compound->pki_discussionmembership_id
    if(discussionmembership_request_compound->pki_discussionmembership_id) {
    if(cJSON_AddNumberToObject(item, "pkiDiscussionmembershipID", *discussionmembership_request_compound->pki_discussionmembership_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_request_compound->fki_discussion_id
    if (!discussionmembership_request_compound->fki_discussion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDiscussionID", *discussionmembership_request_compound->fki_discussion_id) == NULL) {
    goto fail; //Numeric
    }


    // discussionmembership_request_compound->fki_user_id
    if(discussionmembership_request_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *discussionmembership_request_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_request_compound->fki_usergroup_id
    if(discussionmembership_request_compound->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", *discussionmembership_request_compound->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_request_compound->fki_modulesection_id
    if(discussionmembership_request_compound->fki_modulesection_id) {
    if(cJSON_AddNumberToObject(item, "fkiModulesectionID", *discussionmembership_request_compound->fki_modulesection_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_request_compound->dt_discussionmembership_joined
    if (!discussionmembership_request_compound->dt_discussionmembership_joined) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtDiscussionmembershipJoined", discussionmembership_request_compound->dt_discussionmembership_joined) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussionmembership_request_compound_t *discussionmembership_request_compound_parseFromJSON(cJSON *discussionmembership_request_compoundJSON){

    discussionmembership_request_compound_t *discussionmembership_request_compound_local_var = NULL;

    // define the local variable for discussionmembership_request_compound->pki_discussionmembership_id
    int *pki_discussionmembership_id_local_var = NULL;

    // define the local variable for discussionmembership_request_compound->fki_discussion_id
    int *fki_discussion_id_local_var = NULL;

    // define the local variable for discussionmembership_request_compound->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for discussionmembership_request_compound->fki_usergroup_id
    int *fki_usergroup_id_local_var = NULL;

    // define the local variable for discussionmembership_request_compound->fki_modulesection_id
    int *fki_modulesection_id_local_var = NULL;

    char *dt_discussionmembership_joined_local_str = NULL;

    // discussionmembership_request_compound->pki_discussionmembership_id
    cJSON *pki_discussionmembership_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_request_compoundJSON, "pkiDiscussionmembershipID");
    if (cJSON_IsNull(pki_discussionmembership_id)) {
        pki_discussionmembership_id = NULL;
    }
    if (pki_discussionmembership_id) { 
    if(!cJSON_IsNumber(pki_discussionmembership_id))
    {
    goto end; //Numeric
    }
    pki_discussionmembership_id_local_var = malloc(sizeof(int));
    if(!pki_discussionmembership_id_local_var)
    {
        goto end;
    }
    *pki_discussionmembership_id_local_var = pki_discussionmembership_id->valuedouble;
    }

    // discussionmembership_request_compound->fki_discussion_id
    cJSON *fki_discussion_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_request_compoundJSON, "fkiDiscussionID");
    if (cJSON_IsNull(fki_discussion_id)) {
        fki_discussion_id = NULL;
    }
    if (!fki_discussion_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_discussion_id))
    {
    goto end; //Numeric
    }
    fki_discussion_id_local_var = malloc(sizeof(int));
    if(!fki_discussion_id_local_var)
    {
        goto end;
    }
    *fki_discussion_id_local_var = fki_discussion_id->valuedouble;

    // discussionmembership_request_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_request_compoundJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    fki_user_id_local_var = malloc(sizeof(int));
    if(!fki_user_id_local_var)
    {
        goto end;
    }
    *fki_user_id_local_var = fki_user_id->valuedouble;
    }

    // discussionmembership_request_compound->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_request_compoundJSON, "fkiUsergroupID");
    if (cJSON_IsNull(fki_usergroup_id)) {
        fki_usergroup_id = NULL;
    }
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    fki_usergroup_id_local_var = malloc(sizeof(int));
    if(!fki_usergroup_id_local_var)
    {
        goto end;
    }
    *fki_usergroup_id_local_var = fki_usergroup_id->valuedouble;
    }

    // discussionmembership_request_compound->fki_modulesection_id
    cJSON *fki_modulesection_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_request_compoundJSON, "fkiModulesectionID");
    if (cJSON_IsNull(fki_modulesection_id)) {
        fki_modulesection_id = NULL;
    }
    if (fki_modulesection_id) { 
    if(!cJSON_IsNumber(fki_modulesection_id))
    {
    goto end; //Numeric
    }
    fki_modulesection_id_local_var = malloc(sizeof(int));
    if(!fki_modulesection_id_local_var)
    {
        goto end;
    }
    *fki_modulesection_id_local_var = fki_modulesection_id->valuedouble;
    }

    // discussionmembership_request_compound->dt_discussionmembership_joined
    cJSON *dt_discussionmembership_joined = cJSON_GetObjectItemCaseSensitive(discussionmembership_request_compoundJSON, "dtDiscussionmembershipJoined");
    if (cJSON_IsNull(dt_discussionmembership_joined)) {
        dt_discussionmembership_joined = NULL;
    }
    if (!dt_discussionmembership_joined) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_discussionmembership_joined))
    {
    goto end; //String
    }


    if (dt_discussionmembership_joined && !cJSON_IsNull(dt_discussionmembership_joined)) dt_discussionmembership_joined_local_str = strdup(dt_discussionmembership_joined->valuestring);

    discussionmembership_request_compound_local_var = discussionmembership_request_compound_create_internal (
        pki_discussionmembership_id_local_var,
        fki_discussion_id_local_var,
        fki_user_id_local_var,
        fki_usergroup_id_local_var,
        fki_modulesection_id_local_var,
        dt_discussionmembership_joined_local_str
        );

    if (!discussionmembership_request_compound_local_var) {
        goto end;
    }

    return discussionmembership_request_compound_local_var;
end:
    if (pki_discussionmembership_id_local_var) {
        free(pki_discussionmembership_id_local_var);
        pki_discussionmembership_id_local_var = NULL;
    }
    if (fki_discussion_id_local_var) {
        free(fki_discussion_id_local_var);
        fki_discussion_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_usergroup_id_local_var) {
        free(fki_usergroup_id_local_var);
        fki_usergroup_id_local_var = NULL;
    }
    if (fki_modulesection_id_local_var) {
        free(fki_modulesection_id_local_var);
        fki_modulesection_id_local_var = NULL;
    }
    if (dt_discussionmembership_joined_local_str) {
        free(dt_discussionmembership_joined_local_str);
        dt_discussionmembership_joined_local_str = NULL;
    }
    return NULL;

}
