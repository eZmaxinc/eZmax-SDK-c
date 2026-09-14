#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachment_restore_v1_request.h"



static attachment_restore_v1_request_t *attachment_restore_v1_request_create_internal(
    int *b_force_override
    ) {
    attachment_restore_v1_request_t *attachment_restore_v1_request_local_var = malloc(sizeof(attachment_restore_v1_request_t));
    if (!attachment_restore_v1_request_local_var) {
        return NULL;
    }
    memset(attachment_restore_v1_request_local_var, 0, sizeof(attachment_restore_v1_request_t));
    attachment_restore_v1_request_local_var->_library_owned = 1;
    attachment_restore_v1_request_local_var->b_force_override = b_force_override;
    return attachment_restore_v1_request_local_var;
}

__attribute__((deprecated)) attachment_restore_v1_request_t *attachment_restore_v1_request_create(
    int *b_force_override
    ) {
    int *b_force_override_copy = NULL;
    if (b_force_override) {
        b_force_override_copy = malloc(sizeof(int));
        if (b_force_override_copy) *b_force_override_copy = *b_force_override;
    }
    attachment_restore_v1_request_t *result = attachment_restore_v1_request_create_internal (
        b_force_override_copy
        );
    if (!result) {
        free(b_force_override_copy);
    }
    return result;
}

void attachment_restore_v1_request_free(attachment_restore_v1_request_t *attachment_restore_v1_request) {
    if(NULL == attachment_restore_v1_request){
        return ;
    }
    if(attachment_restore_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attachment_restore_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attachment_restore_v1_request->b_force_override) {
        free(attachment_restore_v1_request->b_force_override);
        attachment_restore_v1_request->b_force_override = NULL;
    }
    free(attachment_restore_v1_request);
}

cJSON *attachment_restore_v1_request_convertToJSON(attachment_restore_v1_request_t *attachment_restore_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // attachment_restore_v1_request->b_force_override
    if(attachment_restore_v1_request->b_force_override) {
    if(cJSON_AddBoolToObject(item, "bForceOverride", *attachment_restore_v1_request->b_force_override) == NULL) {
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

attachment_restore_v1_request_t *attachment_restore_v1_request_parseFromJSON(cJSON *attachment_restore_v1_requestJSON){

    attachment_restore_v1_request_t *attachment_restore_v1_request_local_var = NULL;

    // define the local variable for attachment_restore_v1_request->b_force_override
    int *b_force_override_local_var = NULL;

    // attachment_restore_v1_request->b_force_override
    cJSON *b_force_override = cJSON_GetObjectItemCaseSensitive(attachment_restore_v1_requestJSON, "bForceOverride");
    if (cJSON_IsNull(b_force_override)) {
        b_force_override = NULL;
    }
    if (b_force_override) { 
    if(!cJSON_IsBool(b_force_override))
    {
    goto end; //Bool
    }
    b_force_override_local_var = malloc(sizeof(int));
    if(!b_force_override_local_var)
    {
        goto end;
    }
    *b_force_override_local_var = b_force_override->valueint;
    }



    attachment_restore_v1_request_local_var = attachment_restore_v1_request_create_internal (
        b_force_override_local_var
        );

    if (!attachment_restore_v1_request_local_var) {
        goto end;
    }

    return attachment_restore_v1_request_local_var;
end:
    if (b_force_override_local_var) {
        free(b_force_override_local_var);
        b_force_override_local_var = NULL;
    }
    return NULL;

}
