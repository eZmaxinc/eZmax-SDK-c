#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachment_privacy_v1_request.h"



static attachment_privacy_v1_request_t *attachment_privacy_v1_request_create_internal(
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy,
    int *fki_user_id_specific
    ) {
    attachment_privacy_v1_request_t *attachment_privacy_v1_request_local_var = malloc(sizeof(attachment_privacy_v1_request_t));
    if (!attachment_privacy_v1_request_local_var) {
        return NULL;
    }
    memset(attachment_privacy_v1_request_local_var, 0, sizeof(attachment_privacy_v1_request_t));
    attachment_privacy_v1_request_local_var->_library_owned = 1;
    attachment_privacy_v1_request_local_var->e_attachment_privacy = e_attachment_privacy;
    attachment_privacy_v1_request_local_var->fki_user_id_specific = fki_user_id_specific;
    return attachment_privacy_v1_request_local_var;
}

__attribute__((deprecated)) attachment_privacy_v1_request_t *attachment_privacy_v1_request_create(
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy,
    int *fki_user_id_specific
    ) {
    int *fki_user_id_specific_copy = NULL;
    if (fki_user_id_specific) {
        fki_user_id_specific_copy = malloc(sizeof(int));
        if (fki_user_id_specific_copy) *fki_user_id_specific_copy = *fki_user_id_specific;
    }
    attachment_privacy_v1_request_t *result = attachment_privacy_v1_request_create_internal (
        e_attachment_privacy,
        fki_user_id_specific_copy
        );
    if (!result) {
        free(fki_user_id_specific_copy);
    }
    return result;
}

void attachment_privacy_v1_request_free(attachment_privacy_v1_request_t *attachment_privacy_v1_request) {
    if(NULL == attachment_privacy_v1_request){
        return ;
    }
    if(attachment_privacy_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attachment_privacy_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attachment_privacy_v1_request->fki_user_id_specific) {
        free(attachment_privacy_v1_request->fki_user_id_specific);
        attachment_privacy_v1_request->fki_user_id_specific = NULL;
    }
    free(attachment_privacy_v1_request);
}

cJSON *attachment_privacy_v1_request_convertToJSON(attachment_privacy_v1_request_t *attachment_privacy_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // attachment_privacy_v1_request->e_attachment_privacy
    if (ezmax_api_definition__full_field_e_attachment_privacy__NULL == attachment_privacy_v1_request->e_attachment_privacy) {
        goto fail;
    }
    cJSON *e_attachment_privacy_local_JSON = field_e_attachment_privacy_convertToJSON(attachment_privacy_v1_request->e_attachment_privacy);
    if(e_attachment_privacy_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentPrivacy", e_attachment_privacy_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // attachment_privacy_v1_request->fki_user_id_specific
    if(attachment_privacy_v1_request->fki_user_id_specific) {
    if(cJSON_AddNumberToObject(item, "fkiUserIDSpecific", *attachment_privacy_v1_request->fki_user_id_specific) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

attachment_privacy_v1_request_t *attachment_privacy_v1_request_parseFromJSON(cJSON *attachment_privacy_v1_requestJSON){

    attachment_privacy_v1_request_t *attachment_privacy_v1_request_local_var = NULL;

    // define the local variable for attachment_privacy_v1_request->e_attachment_privacy
    ezmax_api_definition__full_field_e_attachment_privacy__e e_attachment_privacy_local_nonprim = 0;

    // define the local variable for attachment_privacy_v1_request->fki_user_id_specific
    int *fki_user_id_specific_local_var = NULL;

    // attachment_privacy_v1_request->e_attachment_privacy
    cJSON *e_attachment_privacy = cJSON_GetObjectItemCaseSensitive(attachment_privacy_v1_requestJSON, "eAttachmentPrivacy");
    if (cJSON_IsNull(e_attachment_privacy)) {
        e_attachment_privacy = NULL;
    }
    if (!e_attachment_privacy) {
        goto end;
    }

    
    e_attachment_privacy_local_nonprim = field_e_attachment_privacy_parseFromJSON(e_attachment_privacy); //custom

    // attachment_privacy_v1_request->fki_user_id_specific
    cJSON *fki_user_id_specific = cJSON_GetObjectItemCaseSensitive(attachment_privacy_v1_requestJSON, "fkiUserIDSpecific");
    if (cJSON_IsNull(fki_user_id_specific)) {
        fki_user_id_specific = NULL;
    }
    if (fki_user_id_specific) { 
    if(!cJSON_IsNumber(fki_user_id_specific))
    {
    goto end; //Numeric
    }
    fki_user_id_specific_local_var = malloc(sizeof(int));
    if(!fki_user_id_specific_local_var)
    {
        goto end;
    }
    *fki_user_id_specific_local_var = fki_user_id_specific->valuedouble;
    }



    attachment_privacy_v1_request_local_var = attachment_privacy_v1_request_create_internal (
        e_attachment_privacy_local_nonprim,
        fki_user_id_specific_local_var
        );

    if (!attachment_privacy_v1_request_local_var) {
        goto end;
    }

    return attachment_privacy_v1_request_local_var;
end:
    if (e_attachment_privacy_local_nonprim) {
        e_attachment_privacy_local_nonprim = 0;
    }
    if (fki_user_id_specific_local_var) {
        free(fki_user_id_specific_local_var);
        fki_user_id_specific_local_var = NULL;
    }
    return NULL;

}
