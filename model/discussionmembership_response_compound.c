#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmembership_response_compound.h"



discussionmembership_response_compound_t *discussionmembership_response_compound_create(
    int pki_discussionmembership_id,
    int fki_discussion_id,
    int fki_user_id,
    int fki_usergroup_id,
    int fki_modulesection_id,
    char *s_discussionmembership_description,
    char *dt_discussionmembership_joined
    ) {
    discussionmembership_response_compound_t *discussionmembership_response_compound_local_var = malloc(sizeof(discussionmembership_response_compound_t));
    if (!discussionmembership_response_compound_local_var) {
        return NULL;
    }
    discussionmembership_response_compound_local_var->pki_discussionmembership_id = pki_discussionmembership_id;
    discussionmembership_response_compound_local_var->fki_discussion_id = fki_discussion_id;
    discussionmembership_response_compound_local_var->fki_user_id = fki_user_id;
    discussionmembership_response_compound_local_var->fki_usergroup_id = fki_usergroup_id;
    discussionmembership_response_compound_local_var->fki_modulesection_id = fki_modulesection_id;
    discussionmembership_response_compound_local_var->s_discussionmembership_description = s_discussionmembership_description;
    discussionmembership_response_compound_local_var->dt_discussionmembership_joined = dt_discussionmembership_joined;

    return discussionmembership_response_compound_local_var;
}


void discussionmembership_response_compound_free(discussionmembership_response_compound_t *discussionmembership_response_compound) {
    if(NULL == discussionmembership_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmembership_response_compound->s_discussionmembership_description) {
        free(discussionmembership_response_compound->s_discussionmembership_description);
        discussionmembership_response_compound->s_discussionmembership_description = NULL;
    }
    if (discussionmembership_response_compound->dt_discussionmembership_joined) {
        free(discussionmembership_response_compound->dt_discussionmembership_joined);
        discussionmembership_response_compound->dt_discussionmembership_joined = NULL;
    }
    free(discussionmembership_response_compound);
}

cJSON *discussionmembership_response_compound_convertToJSON(discussionmembership_response_compound_t *discussionmembership_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // discussionmembership_response_compound->pki_discussionmembership_id
    if (!discussionmembership_response_compound->pki_discussionmembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDiscussionmembershipID", discussionmembership_response_compound->pki_discussionmembership_id) == NULL) {
    goto fail; //Numeric
    }


    // discussionmembership_response_compound->fki_discussion_id
    if (!discussionmembership_response_compound->fki_discussion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDiscussionID", discussionmembership_response_compound->fki_discussion_id) == NULL) {
    goto fail; //Numeric
    }


    // discussionmembership_response_compound->fki_user_id
    if(discussionmembership_response_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", discussionmembership_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_response_compound->fki_usergroup_id
    if(discussionmembership_response_compound->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", discussionmembership_response_compound->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_response_compound->fki_modulesection_id
    if(discussionmembership_response_compound->fki_modulesection_id) {
    if(cJSON_AddNumberToObject(item, "fkiModulesectionID", discussionmembership_response_compound->fki_modulesection_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmembership_response_compound->s_discussionmembership_description
    if (!discussionmembership_response_compound->s_discussionmembership_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDiscussionmembershipDescription", discussionmembership_response_compound->s_discussionmembership_description) == NULL) {
    goto fail; //String
    }


    // discussionmembership_response_compound->dt_discussionmembership_joined
    if (!discussionmembership_response_compound->dt_discussionmembership_joined) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtDiscussionmembershipJoined", discussionmembership_response_compound->dt_discussionmembership_joined) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussionmembership_response_compound_t *discussionmembership_response_compound_parseFromJSON(cJSON *discussionmembership_response_compoundJSON){

    discussionmembership_response_compound_t *discussionmembership_response_compound_local_var = NULL;

    // discussionmembership_response_compound->pki_discussionmembership_id
    cJSON *pki_discussionmembership_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_response_compoundJSON, "pkiDiscussionmembershipID");
    if (!pki_discussionmembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_discussionmembership_id))
    {
    goto end; //Numeric
    }

    // discussionmembership_response_compound->fki_discussion_id
    cJSON *fki_discussion_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_response_compoundJSON, "fkiDiscussionID");
    if (!fki_discussion_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_discussion_id))
    {
    goto end; //Numeric
    }

    // discussionmembership_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_response_compoundJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // discussionmembership_response_compound->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_response_compoundJSON, "fkiUsergroupID");
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // discussionmembership_response_compound->fki_modulesection_id
    cJSON *fki_modulesection_id = cJSON_GetObjectItemCaseSensitive(discussionmembership_response_compoundJSON, "fkiModulesectionID");
    if (fki_modulesection_id) { 
    if(!cJSON_IsNumber(fki_modulesection_id))
    {
    goto end; //Numeric
    }
    }

    // discussionmembership_response_compound->s_discussionmembership_description
    cJSON *s_discussionmembership_description = cJSON_GetObjectItemCaseSensitive(discussionmembership_response_compoundJSON, "sDiscussionmembershipDescription");
    if (!s_discussionmembership_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_discussionmembership_description))
    {
    goto end; //String
    }

    // discussionmembership_response_compound->dt_discussionmembership_joined
    cJSON *dt_discussionmembership_joined = cJSON_GetObjectItemCaseSensitive(discussionmembership_response_compoundJSON, "dtDiscussionmembershipJoined");
    if (!dt_discussionmembership_joined) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_discussionmembership_joined))
    {
    goto end; //String
    }


    discussionmembership_response_compound_local_var = discussionmembership_response_compound_create (
        pki_discussionmembership_id->valuedouble,
        fki_discussion_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_usergroup_id ? fki_usergroup_id->valuedouble : 0,
        fki_modulesection_id ? fki_modulesection_id->valuedouble : 0,
        strdup(s_discussionmembership_description->valuestring),
        strdup(dt_discussionmembership_joined->valuestring)
        );

    return discussionmembership_response_compound_local_var;
end:
    return NULL;

}
