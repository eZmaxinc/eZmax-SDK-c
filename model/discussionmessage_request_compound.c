#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmessage_request_compound.h"



static discussionmessage_request_compound_t *discussionmessage_request_compound_create_internal(
    int pki_discussionmessage_id,
    int fki_discussion_id,
    int fki_discussionmembership_id_actionrequired,
    char *t_discussionmessage_content
    ) {
    discussionmessage_request_compound_t *discussionmessage_request_compound_local_var = malloc(sizeof(discussionmessage_request_compound_t));
    if (!discussionmessage_request_compound_local_var) {
        return NULL;
    }
    discussionmessage_request_compound_local_var->pki_discussionmessage_id = pki_discussionmessage_id;
    discussionmessage_request_compound_local_var->fki_discussion_id = fki_discussion_id;
    discussionmessage_request_compound_local_var->fki_discussionmembership_id_actionrequired = fki_discussionmembership_id_actionrequired;
    discussionmessage_request_compound_local_var->t_discussionmessage_content = t_discussionmessage_content;

    discussionmessage_request_compound_local_var->_library_owned = 1;
    return discussionmessage_request_compound_local_var;
}

__attribute__((deprecated)) discussionmessage_request_compound_t *discussionmessage_request_compound_create(
    int pki_discussionmessage_id,
    int fki_discussion_id,
    int fki_discussionmembership_id_actionrequired,
    char *t_discussionmessage_content
    ) {
    return discussionmessage_request_compound_create_internal (
        pki_discussionmessage_id,
        fki_discussion_id,
        fki_discussionmembership_id_actionrequired,
        t_discussionmessage_content
        );
}

void discussionmessage_request_compound_free(discussionmessage_request_compound_t *discussionmessage_request_compound) {
    if(NULL == discussionmessage_request_compound){
        return ;
    }
    if(discussionmessage_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussionmessage_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmessage_request_compound->t_discussionmessage_content) {
        free(discussionmessage_request_compound->t_discussionmessage_content);
        discussionmessage_request_compound->t_discussionmessage_content = NULL;
    }
    free(discussionmessage_request_compound);
}

cJSON *discussionmessage_request_compound_convertToJSON(discussionmessage_request_compound_t *discussionmessage_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // discussionmessage_request_compound->pki_discussionmessage_id
    if(discussionmessage_request_compound->pki_discussionmessage_id) {
    if(cJSON_AddNumberToObject(item, "pkiDiscussionmessageID", discussionmessage_request_compound->pki_discussionmessage_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmessage_request_compound->fki_discussion_id
    if (!discussionmessage_request_compound->fki_discussion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDiscussionID", discussionmessage_request_compound->fki_discussion_id) == NULL) {
    goto fail; //Numeric
    }


    // discussionmessage_request_compound->fki_discussionmembership_id_actionrequired
    if(discussionmessage_request_compound->fki_discussionmembership_id_actionrequired) {
    if(cJSON_AddNumberToObject(item, "fkiDiscussionmembershipIDActionrequired", discussionmessage_request_compound->fki_discussionmembership_id_actionrequired) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmessage_request_compound->t_discussionmessage_content
    if (!discussionmessage_request_compound->t_discussionmessage_content) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tDiscussionmessageContent", discussionmessage_request_compound->t_discussionmessage_content) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussionmessage_request_compound_t *discussionmessage_request_compound_parseFromJSON(cJSON *discussionmessage_request_compoundJSON){

    discussionmessage_request_compound_t *discussionmessage_request_compound_local_var = NULL;

    // discussionmessage_request_compound->pki_discussionmessage_id
    cJSON *pki_discussionmessage_id = cJSON_GetObjectItemCaseSensitive(discussionmessage_request_compoundJSON, "pkiDiscussionmessageID");
    if (cJSON_IsNull(pki_discussionmessage_id)) {
        pki_discussionmessage_id = NULL;
    }
    if (pki_discussionmessage_id) { 
    if(!cJSON_IsNumber(pki_discussionmessage_id))
    {
    goto end; //Numeric
    }
    }

    // discussionmessage_request_compound->fki_discussion_id
    cJSON *fki_discussion_id = cJSON_GetObjectItemCaseSensitive(discussionmessage_request_compoundJSON, "fkiDiscussionID");
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

    // discussionmessage_request_compound->fki_discussionmembership_id_actionrequired
    cJSON *fki_discussionmembership_id_actionrequired = cJSON_GetObjectItemCaseSensitive(discussionmessage_request_compoundJSON, "fkiDiscussionmembershipIDActionrequired");
    if (cJSON_IsNull(fki_discussionmembership_id_actionrequired)) {
        fki_discussionmembership_id_actionrequired = NULL;
    }
    if (fki_discussionmembership_id_actionrequired) { 
    if(!cJSON_IsNumber(fki_discussionmembership_id_actionrequired))
    {
    goto end; //Numeric
    }
    }

    // discussionmessage_request_compound->t_discussionmessage_content
    cJSON *t_discussionmessage_content = cJSON_GetObjectItemCaseSensitive(discussionmessage_request_compoundJSON, "tDiscussionmessageContent");
    if (cJSON_IsNull(t_discussionmessage_content)) {
        t_discussionmessage_content = NULL;
    }
    if (!t_discussionmessage_content) {
        goto end;
    }

    
    if(!cJSON_IsString(t_discussionmessage_content))
    {
    goto end; //String
    }


    discussionmessage_request_compound_local_var = discussionmessage_request_compound_create_internal (
        pki_discussionmessage_id ? pki_discussionmessage_id->valuedouble : 0,
        fki_discussion_id->valuedouble,
        fki_discussionmembership_id_actionrequired ? fki_discussionmembership_id_actionrequired->valuedouble : 0,
        strdup(t_discussionmessage_content->valuestring)
        );

    return discussionmessage_request_compound_local_var;
end:
    return NULL;

}
