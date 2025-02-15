#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmembership_response.h"



static discussionmembership_response_t *discussionmembership_response_create_internal(
    int pki_discussionmembership_id,
    int fki_discussion_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_modulesection_id,
    char *s_discussionmembership_description,
    char *dt_discussionmembership_joined
    ) {
    discussionmembership_response_t *discussionmembership_response_local_var = malloc(sizeof(discussionmembership_response_t));
    if (!discussionmembership_response_local_var) {
        return NULL;
    }
    discussionmembership_response_local_var->pki_discussionmembership_id = pki_discussionmembership_id;
    discussionmembership_response_local_var->fki_discussion_id = fki_discussion_id;
    discussionmembership_response_local_var->fki_user_id = fki_user_id;
    discussionmembership_response_local_var->fki_usergroup_id = fki_usergroup_id;
    discussionmembership_response_local_var->fki_modulesection_id = fki_modulesection_id;
    discussionmembership_response_local_var->s_discussionmembership_description = s_discussionmembership_description;
    discussionmembership_response_local_var->dt_discussionmembership_joined = dt_discussionmembership_joined;

    discussionmembership_response_local_var->_library_owned = 1;
    return discussionmembership_response_local_var;
}

__attribute__((deprecated)) discussionmembership_response_t *discussionmembership_response_create(
    int pki_discussionmembership_id,
    int fki_discussion_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_modulesection_id,
    char *s_discussionmembership_description,
    char *dt_discussionmembership_joined
    ) {
    return discussionmembership_response_create_internal (
        pki_discussionmembership_id,
        fki_discussion_id,
        fki_user_id,
        fki_usergroup_id,
        fki_modulesection_id,
        s_discussionmembership_description,
        dt_discussionmembership_joined
        );
}

void discussionmembership_response_free(discussionmembership_response_t *discussionmembership_response) {
    if(NULL == discussionmembership_response){
        return ;
    }
    if(discussionmembership_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussionmembership_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmembership_response->s_discussionmembership_description) {
        free(discussionmembership_response->s_discussionmembership_description);
        discussionmembership_response->s_discussionmembership_description = NULL;
    }
    if (discussionmembership_response->dt_discussionmembership_joined) {
        free(discussionmembership_response->dt_discussionmembership_joined);
        discussionmembership_response->dt_discussionmembership_joined = NULL;
    }
    free(discussionmembership_response);
}

cJSON *discussionmembership_response_convertToJSON(discussionmembership_response_t *discussionmembership_response) {
    cJSON *item = cJSON_CreateObject();

    // discussionmembership_response->pki_discussionmembership_id
    if (!discussionmembership_response->pki_discussionmembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDiscussionmembershipID", discussionmembership_response->pki_discussionmembership_id) == NULL) {
    goto fail; //Numeric
    }


    // discussionmembership_response->fki_discussion_id
    if (!discussionmembership_response->fki_discussion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDiscussionID", discussionmembership_response->fki_discussion_id) == NULL) {
    goto fail; //Numeric
    }


    // discussionmembership_response->fki_user_id
    if(discussionmembership_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", discussionmembership_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_response->fki_usergroup_id
    if(discussionmembership_response->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", discussionmembership_response->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_response->fki_modulesection_id
    if(discussionmembership_response->fki_modulesection_id) {
    if(cJSON_AddNumberToObject(item, "fkiModulesectionID", discussionmembership_response->fki_modulesection_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_response->s_discussionmembership_description
    if (!discussionmembership_response->s_discussionmembership_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDiscussionmembershipDescription", discussionmembership_response->s_discussionmembership_description) == NULL) {
    goto fail; //String
    }


    // discussionmembership_response->dt_discussionmembership_joined
    if (!discussionmembership_response->dt_discussionmembership_joined) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtDiscussionmembershipJoined", discussionmembership_response->dt_discussionmembership_joined) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussionmembership_response_t *discussionmembership_response_parseFromJSON(cJSON *discussionmembership_responseJSON){

    discussionmembership_response_t *discussionmembership_response_local_var = NULL;

    // discussionmembership_response->pki_discussionmembership_id
    cJSON *pki_discussionmembership_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_responseJSON, "pkiDiscussionmembershipID");
    if (cJSON_IsNull(pki_discussionmembership_id)) {
        pki_discussionmembership_id = NULL;
    }
    if (!pki_discussionmembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_discussionmembership_id))
    {
    goto end; //Numeric
    }

    // discussionmembership_response->fki_discussion_id
    cJSON *fki_discussion_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_responseJSON, "fkiDiscussionID");
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

    // discussionmembership_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_responseJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // discussionmembership_response->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_responseJSON, "fkiUsergroupID");
    if (cJSON_IsNull(fki_usergroup_id)) {
        fki_usergroup_id = NULL;
    }
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // discussionmembership_response->fki_modulesection_id
    cJSON *fki_modulesection_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_responseJSON, "fkiModulesectionID");
    if (cJSON_IsNull(fki_modulesection_id)) {
        fki_modulesection_id = NULL;
    }
    if (fki_modulesection_id) { 
    if(!cJSON_IsNumber(fki_modulesection_id))
    {
    goto end; //Numeric
    }
    }

    // discussionmembership_response->s_discussionmembership_description
    cJSON *s_discussionmembership_description = cJSON_GetObjectItemCaseSensitive(discussionmembership_responseJSON, "sDiscussionmembershipDescription");
    if (cJSON_IsNull(s_discussionmembership_description)) {
        s_discussionmembership_description = NULL;
    }
    if (!s_discussionmembership_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_discussionmembership_description))
    {
    goto end; //String
    }

    // discussionmembership_response->dt_discussionmembership_joined
    cJSON *dt_discussionmembership_joined = cJSON_GetObjectItemCaseSensitive(discussionmembership_responseJSON, "dtDiscussionmembershipJoined");
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


    discussionmembership_response_local_var = discussionmembership_response_create_internal (
        pki_discussionmembership_id->valuedouble,
        fki_discussion_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_usergroup_id ? fki_usergroup_id->valuedouble : 0,
        fki_modulesection_id ? fki_modulesection_id->valuedouble : 0,
        strdup(s_discussionmembership_description->valuestring),
        strdup(dt_discussionmembership_joined->valuestring)
        );

    return discussionmembership_response_local_var;
end:
    return NULL;

}
