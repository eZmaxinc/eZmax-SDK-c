#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachment_validate_v1_request.h"



static attachment_validate_v1_request_t *attachment_validate_v1_request_create_internal(
    ezmax_api_definition__full_field_e_attachment_verified__e e_attachment_verified
    ) {
    attachment_validate_v1_request_t *attachment_validate_v1_request_local_var = malloc(sizeof(attachment_validate_v1_request_t));
    if (!attachment_validate_v1_request_local_var) {
        return NULL;
    }
    memset(attachment_validate_v1_request_local_var, 0, sizeof(attachment_validate_v1_request_t));
    attachment_validate_v1_request_local_var->_library_owned = 1;
    attachment_validate_v1_request_local_var->e_attachment_verified = e_attachment_verified;
    return attachment_validate_v1_request_local_var;
}

__attribute__((deprecated)) attachment_validate_v1_request_t *attachment_validate_v1_request_create(
    ezmax_api_definition__full_field_e_attachment_verified__e e_attachment_verified
    ) {
    attachment_validate_v1_request_t *result = attachment_validate_v1_request_create_internal (
        e_attachment_verified
        );
    if (!result) {
    }
    return result;
}

void attachment_validate_v1_request_free(attachment_validate_v1_request_t *attachment_validate_v1_request) {
    if(NULL == attachment_validate_v1_request){
        return ;
    }
    if(attachment_validate_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attachment_validate_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    free(attachment_validate_v1_request);
}

cJSON *attachment_validate_v1_request_convertToJSON(attachment_validate_v1_request_t *attachment_validate_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // attachment_validate_v1_request->e_attachment_verified
    if (ezmax_api_definition__full_field_e_attachment_verified__NULL == attachment_validate_v1_request->e_attachment_verified) {
        goto fail;
    }
    cJSON *e_attachment_verified_local_JSON = field_e_attachment_verified_convertToJSON(attachment_validate_v1_request->e_attachment_verified);
    if(e_attachment_verified_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAttachmentVerified", e_attachment_verified_local_JSON);
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

attachment_validate_v1_request_t *attachment_validate_v1_request_parseFromJSON(cJSON *attachment_validate_v1_requestJSON){

    attachment_validate_v1_request_t *attachment_validate_v1_request_local_var = NULL;

    // define the local variable for attachment_validate_v1_request->e_attachment_verified
    ezmax_api_definition__full_field_e_attachment_verified__e e_attachment_verified_local_nonprim = 0;

    // attachment_validate_v1_request->e_attachment_verified
    cJSON *e_attachment_verified = cJSON_GetObjectItemCaseSensitive(attachment_validate_v1_requestJSON, "eAttachmentVerified");
    if (cJSON_IsNull(e_attachment_verified)) {
        e_attachment_verified = NULL;
    }
    if (!e_attachment_verified) {
        goto end;
    }

    
    e_attachment_verified_local_nonprim = field_e_attachment_verified_parseFromJSON(e_attachment_verified); //custom



    attachment_validate_v1_request_local_var = attachment_validate_v1_request_create_internal (
        e_attachment_verified_local_nonprim
        );

    if (!attachment_validate_v1_request_local_var) {
        goto end;
    }

    return attachment_validate_v1_request_local_var;
end:
    if (e_attachment_verified_local_nonprim) {
        e_attachment_verified_local_nonprim = 0;
    }
    return NULL;

}
