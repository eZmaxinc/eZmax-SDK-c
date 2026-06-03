#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_request_compound.h"



static discussion_request_compound_t *discussion_request_compound_create_internal(
    int *pki_discussion_id,
    char *s_discussion_description,
    int *b_discussion_closed
    ) {
    discussion_request_compound_t *discussion_request_compound_local_var = malloc(sizeof(discussion_request_compound_t));
    if (!discussion_request_compound_local_var) {
        return NULL;
    }
    memset(discussion_request_compound_local_var, 0, sizeof(discussion_request_compound_t));
    discussion_request_compound_local_var->_library_owned = 1;
    discussion_request_compound_local_var->pki_discussion_id = pki_discussion_id;
    discussion_request_compound_local_var->s_discussion_description = s_discussion_description;
    discussion_request_compound_local_var->b_discussion_closed = b_discussion_closed;
    return discussion_request_compound_local_var;
}

__attribute__((deprecated)) discussion_request_compound_t *discussion_request_compound_create(
    int *pki_discussion_id,
    char *s_discussion_description,
    int *b_discussion_closed
    ) {
    int *pki_discussion_id_copy = NULL;
    if (pki_discussion_id) {
        pki_discussion_id_copy = malloc(sizeof(int));
        if (pki_discussion_id_copy) *pki_discussion_id_copy = *pki_discussion_id;
    }
    int *b_discussion_closed_copy = NULL;
    if (b_discussion_closed) {
        b_discussion_closed_copy = malloc(sizeof(int));
        if (b_discussion_closed_copy) *b_discussion_closed_copy = *b_discussion_closed;
    }
    discussion_request_compound_t *result = discussion_request_compound_create_internal (
        pki_discussion_id_copy,
        s_discussion_description,
        b_discussion_closed_copy
        );
    if (!result) {
        free(pki_discussion_id_copy);
        free(b_discussion_closed_copy);
    }
    return result;
}

void discussion_request_compound_free(discussion_request_compound_t *discussion_request_compound) {
    if(NULL == discussion_request_compound){
        return ;
    }
    if(discussion_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "discussion_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (discussion_request_compound->pki_discussion_id) {
        free(discussion_request_compound->pki_discussion_id);
        discussion_request_compound->pki_discussion_id = NULL;
    }
    if (discussion_request_compound->s_discussion_description) {
        free(discussion_request_compound->s_discussion_description);
        discussion_request_compound->s_discussion_description = NULL;
    }
    if (discussion_request_compound->b_discussion_closed) {
        free(discussion_request_compound->b_discussion_closed);
        discussion_request_compound->b_discussion_closed = NULL;
    }
    free(discussion_request_compound);
}

cJSON *discussion_request_compound_convertToJSON(discussion_request_compound_t *discussion_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // discussion_request_compound->pki_discussion_id
    if(discussion_request_compound->pki_discussion_id) {
    if(cJSON_AddNumberToObject(item, "pkiDiscussionID", *discussion_request_compound->pki_discussion_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // discussion_request_compound->s_discussion_description
    if (!discussion_request_compound->s_discussion_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDiscussionDescription", discussion_request_compound->s_discussion_description) == NULL) {
    goto fail; //String
    }


    // discussion_request_compound->b_discussion_closed
    if(discussion_request_compound->b_discussion_closed) {
    if(cJSON_AddBoolToObject(item, "bDiscussionClosed", *discussion_request_compound->b_discussion_closed) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

discussion_request_compound_t *discussion_request_compound_parseFromJSON(cJSON *discussion_request_compoundJSON){

    discussion_request_compound_t *discussion_request_compound_local_var = NULL;

    // define the local variable for discussion_request_compound->pki_discussion_id
    int *pki_discussion_id_local_var = NULL;

    char *s_discussion_description_local_str = NULL;

    // define the local variable for discussion_request_compound->b_discussion_closed
    int *b_discussion_closed_local_var = NULL;

    // discussion_request_compound->pki_discussion_id
    cJSON *pki_discussion_id = cJSON_GetObjectItemCaseSensitive(discussion_request_compoundJSON, "pkiDiscussionID");
    if (cJSON_IsNull(pki_discussion_id)) {
        pki_discussion_id = NULL;
    }
    if (pki_discussion_id) { 
    if(!cJSON_IsNumber(pki_discussion_id))
    {
    goto end; //Numeric
    }
    pki_discussion_id_local_var = malloc(sizeof(int));
    if(!pki_discussion_id_local_var)
    {
        goto end;
    }
    *pki_discussion_id_local_var = pki_discussion_id->valuedouble;
    }

    // discussion_request_compound->s_discussion_description
    cJSON *s_discussion_description = cJSON_GetObjectItemCaseSensitive(discussion_request_compoundJSON, "sDiscussionDescription");
    if (cJSON_IsNull(s_discussion_description)) {
        s_discussion_description = NULL;
    }
    if (!s_discussion_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_discussion_description))
    {
    goto end; //String
    }

    // discussion_request_compound->b_discussion_closed
    cJSON *b_discussion_closed = cJSON_GetObjectItemCaseSensitive(discussion_request_compoundJSON, "bDiscussionClosed");
    if (cJSON_IsNull(b_discussion_closed)) {
        b_discussion_closed = NULL;
    }
    if (b_discussion_closed) { 
    if(!cJSON_IsBool(b_discussion_closed))
    {
    goto end; //Bool
    }
    b_discussion_closed_local_var = malloc(sizeof(int));
    if(!b_discussion_closed_local_var)
    {
        goto end;
    }
    *b_discussion_closed_local_var = b_discussion_closed->valueint;
    }


    if (s_discussion_description && !cJSON_IsNull(s_discussion_description)) s_discussion_description_local_str = strdup(s_discussion_description->valuestring);

    discussion_request_compound_local_var = discussion_request_compound_create_internal (
        pki_discussion_id_local_var,
        s_discussion_description_local_str,
        b_discussion_closed_local_var
        );

    if (!discussion_request_compound_local_var) {
        goto end;
    }

    return discussion_request_compound_local_var;
end:
    if (pki_discussion_id_local_var) {
        free(pki_discussion_id_local_var);
        pki_discussion_id_local_var = NULL;
    }
    if (s_discussion_description_local_str) {
        free(s_discussion_description_local_str);
        s_discussion_description_local_str = NULL;
    }
    if (b_discussion_closed_local_var) {
        free(b_discussion_closed_local_var);
        b_discussion_closed_local_var = NULL;
    }
    return NULL;

}
