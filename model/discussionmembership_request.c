#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmembership_request.h"



static discussionmembership_request_t *discussionmembership_request_create_internal(
    int pki_discussionmembership_id,
    int fki_discussion_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_modulesection_id,
    char *dt_discussionmembership_joined
    ) {
    discussionmembership_request_t *discussionmembership_request_local_var = malloc(sizeof(discussionmembership_request_t));
    if (!discussionmembership_request_local_var) {
        return NULL;
    }
    discussionmembership_request_local_var->pki_discussionmembership_id = pki_discussionmembership_id;
    discussionmembership_request_local_var->fki_discussion_id = fki_discussion_id;
    discussionmembership_request_local_var->fki_user_id = fki_user_id;
    discussionmembership_request_local_var->fki_usergroup_id = fki_usergroup_id;
    discussionmembership_request_local_var->fki_modulesection_id = fki_modulesection_id;
    discussionmembership_request_local_var->dt_discussionmembership_joined = dt_discussionmembership_joined;

    discussionmembership_request_local_var->_library_owned = 1;
    return discussionmembership_request_local_var;
}

__attribute__((deprecated)) discussionmembership_request_t *discussionmembership_request_create(
    int pki_discussionmembership_id,
    int fki_discussion_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_modulesection_id,
    char *dt_discussionmembership_joined
    ) {
    return discussionmembership_request_create_internal (
        pki_discussionmembership_id,
        fki_discussion_id,
        fki_user_id,
        fki_usergroup_id,
        fki_modulesection_id,
        dt_discussionmembership_joined
        );
}

void discussionmembership_request_free(discussionmembership_request_t *discussionmembership_request) {
    if(NULL == discussionmembership_request){
        return ;
    }
    if(discussionmembership_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussionmembership_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmembership_request->dt_discussionmembership_joined) {
        free(discussionmembership_request->dt_discussionmembership_joined);
        discussionmembership_request->dt_discussionmembership_joined = NULL;
    }
    free(discussionmembership_request);
}

cJSON *discussionmembership_request_convertToJSON(discussionmembership_request_t *discussionmembership_request) {
    cJSON *item = cJSON_CreateObject();

    // discussionmembership_request->pki_discussionmembership_id
    if(discussionmembership_request->pki_discussionmembership_id) {
    if(cJSON_AddNumberToObject(item, "pkiDiscussionmembershipID", discussionmembership_request->pki_discussionmembership_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_request->fki_discussion_id
    if (!discussionmembership_request->fki_discussion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDiscussionID", discussionmembership_request->fki_discussion_id) == NULL) {
    goto fail; //Numeric
    }


    // discussionmembership_request->fki_user_id
    if(discussionmembership_request->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", discussionmembership_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_request->fki_usergroup_id
    if(discussionmembership_request->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", discussionmembership_request->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_request->fki_modulesection_id
    if(discussionmembership_request->fki_modulesection_id) {
    if(cJSON_AddNumberToObject(item, "fkiModulesectionID", discussionmembership_request->fki_modulesection_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_request->dt_discussionmembership_joined
    if (!discussionmembership_request->dt_discussionmembership_joined) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtDiscussionmembershipJoined", discussionmembership_request->dt_discussionmembership_joined) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussionmembership_request_t *discussionmembership_request_parseFromJSON(cJSON *discussionmembership_requestJSON){

    discussionmembership_request_t *discussionmembership_request_local_var = NULL;

    // discussionmembership_request->pki_discussionmembership_id
    cJSON *pki_discussionmembership_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_requestJSON, "pkiDiscussionmembershipID");
    if (cJSON_IsNull(pki_discussionmembership_id)) {
        pki_discussionmembership_id = NULL;
    }
    if (pki_discussionmembership_id) { 
    if(!cJSON_IsNumber(pki_discussionmembership_id))
    {
    goto end; //Numeric
    }
    }

    // discussionmembership_request->fki_discussion_id
    cJSON *fki_discussion_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_requestJSON, "fkiDiscussionID");
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

    // discussionmembership_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_requestJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // discussionmembership_request->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_requestJSON, "fkiUsergroupID");
    if (cJSON_IsNull(fki_usergroup_id)) {
        fki_usergroup_id = NULL;
    }
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // discussionmembership_request->fki_modulesection_id
    cJSON *fki_modulesection_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_requestJSON, "fkiModulesectionID");
    if (cJSON_IsNull(fki_modulesection_id)) {
        fki_modulesection_id = NULL;
    }
    if (fki_modulesection_id) { 
    if(!cJSON_IsNumber(fki_modulesection_id))
    {
    goto end; //Numeric
    }
    }

    // discussionmembership_request->dt_discussionmembership_joined
    cJSON *dt_discussionmembership_joined = cJSON_GetObjectItemCaseSensitive(discussionmembership_requestJSON, "dtDiscussionmembershipJoined");
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


    discussionmembership_request_local_var = discussionmembership_request_create_internal (
        pki_discussionmembership_id ? pki_discussionmembership_id->valuedouble : 0,
        fki_discussion_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_usergroup_id ? fki_usergroup_id->valuedouble : 0,
        fki_modulesection_id ? fki_modulesection_id->valuedouble : 0,
        strdup(dt_discussionmembership_joined->valuestring)
        );

    return discussionmembership_request_local_var;
end:
    return NULL;

}
