#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussionmessage_response.h"



static discussionmessage_response_t *discussionmessage_response_create_internal(
    int pki_discussionmessage_id,
    int fki_discussion_id,
    int fki_discussionmembership_id,
    int fki_discussionmembership_id_actionrequired,
    ezmax_api_definition__full_field_e_discussionmessage_status__e e_discussionmessage_status,
    char *t_discussionmessage_content,
    char *s_discussionmessage_creatorname,
    char *s_discussionmessage_actionrequiredname,
    common_audit_t *obj_audit
    ) {
    discussionmessage_response_t *discussionmessage_response_local_var = malloc(sizeof(discussionmessage_response_t));
    if (!discussionmessage_response_local_var) {
        return NULL;
    }
    discussionmessage_response_local_var->pki_discussionmessage_id = pki_discussionmessage_id;
    discussionmessage_response_local_var->fki_discussion_id = fki_discussion_id;
    discussionmessage_response_local_var->fki_discussionmembership_id = fki_discussionmembership_id;
    discussionmessage_response_local_var->fki_discussionmembership_id_actionrequired = fki_discussionmembership_id_actionrequired;
    discussionmessage_response_local_var->e_discussionmessage_status = e_discussionmessage_status;
    discussionmessage_response_local_var->t_discussionmessage_content = t_discussionmessage_content;
    discussionmessage_response_local_var->s_discussionmessage_creatorname = s_discussionmessage_creatorname;
    discussionmessage_response_local_var->s_discussionmessage_actionrequiredname = s_discussionmessage_actionrequiredname;
    discussionmessage_response_local_var->obj_audit = obj_audit;

    discussionmessage_response_local_var->_library_owned = 1;
    return discussionmessage_response_local_var;
}

__attribute__((deprecated)) discussionmessage_response_t *discussionmessage_response_create(
    int pki_discussionmessage_id,
    int fki_discussion_id,
    int fki_discussionmembership_id,
    int fki_discussionmembership_id_actionrequired,
    ezmax_api_definition__full_field_e_discussionmessage_status__e e_discussionmessage_status,
    char *t_discussionmessage_content,
    char *s_discussionmessage_creatorname,
    char *s_discussionmessage_actionrequiredname,
    common_audit_t *obj_audit
    ) {
    return discussionmessage_response_create_internal (
        pki_discussionmessage_id,
        fki_discussion_id,
        fki_discussionmembership_id,
        fki_discussionmembership_id_actionrequired,
        e_discussionmessage_status,
        t_discussionmessage_content,
        s_discussionmessage_creatorname,
        s_discussionmessage_actionrequiredname,
        obj_audit
        );
}

void discussionmessage_response_free(discussionmessage_response_t *discussionmessage_response) {
    if(NULL == discussionmessage_response){
        return ;
    }
    if(discussionmessage_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussionmessage_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussionmessage_response->t_discussionmessage_content) {
        free(discussionmessage_response->t_discussionmessage_content);
        discussionmessage_response->t_discussionmessage_content = NULL;
    }
    if (discussionmessage_response->s_discussionmessage_creatorname) {
        free(discussionmessage_response->s_discussionmessage_creatorname);
        discussionmessage_response->s_discussionmessage_creatorname = NULL;
    }
    if (discussionmessage_response->s_discussionmessage_actionrequiredname) {
        free(discussionmessage_response->s_discussionmessage_actionrequiredname);
        discussionmessage_response->s_discussionmessage_actionrequiredname = NULL;
    }
    if (discussionmessage_response->obj_audit) {
        common_audit_free(discussionmessage_response->obj_audit);
        discussionmessage_response->obj_audit = NULL;
    }
    free(discussionmessage_response);
}

cJSON *discussionmessage_response_convertToJSON(discussionmessage_response_t *discussionmessage_response) {
    cJSON *item = cJSON_CreateObject();

    // discussionmessage_response->pki_discussionmessage_id
    if (!discussionmessage_response->pki_discussionmessage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDiscussionmessageID", discussionmessage_response->pki_discussionmessage_id) == NULL) {
    goto fail; //Numeric
    }


    // discussionmessage_response->fki_discussion_id
    if (!discussionmessage_response->fki_discussion_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDiscussionID", discussionmessage_response->fki_discussion_id) == NULL) {
    goto fail; //Numeric
    }


    // discussionmessage_response->fki_discussionmembership_id
    if(discussionmessage_response->fki_discussionmembership_id) {
    if(cJSON_AddNumberToObject(item, "fkiDiscussionmembershipID", discussionmessage_response->fki_discussionmembership_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmessage_response->fki_discussionmembership_id_actionrequired
    if(discussionmessage_response->fki_discussionmembership_id_actionrequired) {
    if(cJSON_AddNumberToObject(item, "fkiDiscussionmembershipIDActionrequired", discussionmessage_response->fki_discussionmembership_id_actionrequired) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussionmessage_response->e_discussionmessage_status
    if (ezmax_api_definition__full_field_e_discussionmessage_status__NULL == discussionmessage_response->e_discussionmessage_status) {
        goto fail;
    }
    cJSON *e_discussionmessage_status_local_JSON = field_e_discussionmessage_status_convertToJSON(discussionmessage_response->e_discussionmessage_status);
    if(e_discussionmessage_status_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eDiscussionmessageStatus", e_discussionmessage_status_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // discussionmessage_response->t_discussionmessage_content
    if (!discussionmessage_response->t_discussionmessage_content) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tDiscussionmessageContent", discussionmessage_response->t_discussionmessage_content) == NULL) {
    goto fail; //String
    }


    // discussionmessage_response->s_discussionmessage_creatorname
    if (!discussionmessage_response->s_discussionmessage_creatorname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDiscussionmessageCreatorname", discussionmessage_response->s_discussionmessage_creatorname) == NULL) {
    goto fail; //String
    }


    // discussionmessage_response->s_discussionmessage_actionrequiredname
    if(discussionmessage_response->s_discussionmessage_actionrequiredname) {
    if(cJSON_AddStringToObject(item, "sDiscussionmessageActionrequiredname", discussionmessage_response->s_discussionmessage_actionrequiredname) == NULL) {
    goto fail; //String
    }
    }


    // discussionmessage_response->obj_audit
    if (!discussionmessage_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(discussionmessage_response->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussionmessage_response_t *discussionmessage_response_parseFromJSON(cJSON *discussionmessage_responseJSON){

    discussionmessage_response_t *discussionmessage_response_local_var = NULL;

    // define the local variable for discussionmessage_response->e_discussionmessage_status
    ezmax_api_definition__full_field_e_discussionmessage_status__e e_discussionmessage_status_local_nonprim = 0;

    // define the local variable for discussionmessage_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // discussionmessage_response->pki_discussionmessage_id
    cJSON *pki_discussionmessage_id = cJSON_GetObjectItemCaseSensitive(discussionmessage_responseJSON, "pkiDiscussionmessageID");
    if (cJSON_IsNull(pki_discussionmessage_id)) {
        pki_discussionmessage_id = NULL;
    }
    if (!pki_discussionmessage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_discussionmessage_id))
    {
    goto end; //Numeric
    }

    // discussionmessage_response->fki_discussion_id
    cJSON *fki_discussion_id = cJSON_GetObjectItemCaseSensitive(discussionmessage_responseJSON, "fkiDiscussionID");
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

    // discussionmessage_response->fki_discussionmembership_id
    cJSON *fki_discussionmembership_id = cJSON_GetObjectItemCaseSensitive(discussionmessage_responseJSON, "fkiDiscussionmembershipID");
    if (cJSON_IsNull(fki_discussionmembership_id)) {
        fki_discussionmembership_id = NULL;
    }
    if (fki_discussionmembership_id) { 
    if(!cJSON_IsNumber(fki_discussionmembership_id))
    {
    goto end; //Numeric
    }
    }

    // discussionmessage_response->fki_discussionmembership_id_actionrequired
    cJSON *fki_discussionmembership_id_actionrequired = cJSON_GetObjectItemCaseSensitive(discussionmessage_responseJSON, "fkiDiscussionmembershipIDActionrequired");
    if (cJSON_IsNull(fki_discussionmembership_id_actionrequired)) {
        fki_discussionmembership_id_actionrequired = NULL;
    }
    if (fki_discussionmembership_id_actionrequired) { 
    if(!cJSON_IsNumber(fki_discussionmembership_id_actionrequired))
    {
    goto end; //Numeric
    }
    }

    // discussionmessage_response->e_discussionmessage_status
    cJSON *e_discussionmessage_status = cJSON_GetObjectItemCaseSensitive(discussionmessage_responseJSON, "eDiscussionmessageStatus");
    if (cJSON_IsNull(e_discussionmessage_status)) {
        e_discussionmessage_status = NULL;
    }
    if (!e_discussionmessage_status) {
        goto end;
    }

    
    e_discussionmessage_status_local_nonprim = field_e_discussionmessage_status_parseFromJSON(e_discussionmessage_status); //custom

    // discussionmessage_response->t_discussionmessage_content
    cJSON *t_discussionmessage_content = cJSON_GetObjectItemCaseSensitive(discussionmessage_responseJSON, "tDiscussionmessageContent");
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

    // discussionmessage_response->s_discussionmessage_creatorname
    cJSON *s_discussionmessage_creatorname = cJSON_GetObjectItemCaseSensitive(discussionmessage_responseJSON, "sDiscussionmessageCreatorname");
    if (cJSON_IsNull(s_discussionmessage_creatorname)) {
        s_discussionmessage_creatorname = NULL;
    }
    if (!s_discussionmessage_creatorname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_discussionmessage_creatorname))
    {
    goto end; //String
    }

    // discussionmessage_response->s_discussionmessage_actionrequiredname
    cJSON *s_discussionmessage_actionrequiredname = cJSON_GetObjectItemCaseSensitive(discussionmessage_responseJSON, "sDiscussionmessageActionrequiredname");
    if (cJSON_IsNull(s_discussionmessage_actionrequiredname)) {
        s_discussionmessage_actionrequiredname = NULL;
    }
    if (s_discussionmessage_actionrequiredname) { 
    if(!cJSON_IsString(s_discussionmessage_actionrequiredname) && !cJSON_IsNull(s_discussionmessage_actionrequiredname))
    {
    goto end; //String
    }
    }

    // discussionmessage_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(discussionmessage_responseJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    discussionmessage_response_local_var = discussionmessage_response_create_internal (
        pki_discussionmessage_id->valuedouble,
        fki_discussion_id->valuedouble,
        fki_discussionmembership_id ? fki_discussionmembership_id->valuedouble : 0,
        fki_discussionmembership_id_actionrequired ? fki_discussionmembership_id_actionrequired->valuedouble : 0,
        e_discussionmessage_status_local_nonprim,
        strdup(t_discussionmessage_content->valuestring),
        strdup(s_discussionmessage_creatorname->valuestring),
        s_discussionmessage_actionrequiredname && !cJSON_IsNull(s_discussionmessage_actionrequiredname) ? strdup(s_discussionmessage_actionrequiredname->valuestring) : NULL,
        obj_audit_local_nonprim
        );

    return discussionmessage_response_local_var;
end:
    if (e_discussionmessage_status_local_nonprim) {
        e_discussionmessage_status_local_nonprim = 0;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
