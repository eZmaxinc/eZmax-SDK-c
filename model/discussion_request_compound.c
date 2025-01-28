#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "discussion_request_compound.h"



static discussion_request_compound_t *discussion_request_compound_create_internal(
    int pki_discussion_id,
    char *s_discussion_description,
    int b_discussion_closed
    ) {
    discussion_request_compound_t *discussion_request_compound_local_var = malloc(sizeof(discussion_request_compound_t));
    if (!discussion_request_compound_local_var) {
        return NULL;
    }
    discussion_request_compound_local_var->pki_discussion_id = pki_discussion_id;
    discussion_request_compound_local_var->s_discussion_description = s_discussion_description;
    discussion_request_compound_local_var->b_discussion_closed = b_discussion_closed;

    discussion_request_compound_local_var->_library_owned = 1;
    return discussion_request_compound_local_var;
}

__attribute__((deprecated)) discussion_request_compound_t *discussion_request_compound_create(
    int pki_discussion_id,
    char *s_discussion_description,
    int b_discussion_closed
    ) {
    return discussion_request_compound_create_internal (
        pki_discussion_id,
        s_discussion_description,
        b_discussion_closed
        );
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
    if (discussion_request_compound->s_discussion_description) {
        free(discussion_request_compound->s_discussion_description);
        discussion_request_compound->s_discussion_description = NULL;
    }
    free(discussion_request_compound);
}

cJSON *discussion_request_compound_convertToJSON(discussion_request_compound_t *discussion_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // discussion_request_compound->pki_discussion_id
    if(discussion_request_compound->pki_discussion_id) {
    if(cJSON_AddNumberToObject(item, "pkiDiscussionID", discussion_request_compound->pki_discussion_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bDiscussionClosed", discussion_request_compound->b_discussion_closed) == NULL) {
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
    }


    discussion_request_compound_local_var = discussion_request_compound_create_internal (
        pki_discussion_id ? pki_discussion_id->valuedouble : 0,
        strdup(s_discussion_description->valuestring),
        b_discussion_closed ? b_discussion_closed->valueint : 0
        );

    return discussion_request_compound_local_var;
end:
    return NULL;

}
