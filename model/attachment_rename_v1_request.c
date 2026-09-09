#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "attachment_rename_v1_request.h"



static attachment_rename_v1_request_t *attachment_rename_v1_request_create_internal(
    char *s_attachment_name,
    char *s_attachment_category,
    int *b_force_override
    ) {
    attachment_rename_v1_request_t *attachment_rename_v1_request_local_var = malloc(sizeof(attachment_rename_v1_request_t));
    if (!attachment_rename_v1_request_local_var) {
        return NULL;
    }
    memset(attachment_rename_v1_request_local_var, 0, sizeof(attachment_rename_v1_request_t));
    attachment_rename_v1_request_local_var->_library_owned = 1;
    attachment_rename_v1_request_local_var->s_attachment_name = s_attachment_name;
    attachment_rename_v1_request_local_var->s_attachment_category = s_attachment_category;
    attachment_rename_v1_request_local_var->b_force_override = b_force_override;
    return attachment_rename_v1_request_local_var;
}

__attribute__((deprecated)) attachment_rename_v1_request_t *attachment_rename_v1_request_create(
    char *s_attachment_name,
    char *s_attachment_category,
    int *b_force_override
    ) {
    int *b_force_override_copy = NULL;
    if (b_force_override) {
        b_force_override_copy = malloc(sizeof(int));
        if (b_force_override_copy) *b_force_override_copy = *b_force_override;
    }
    attachment_rename_v1_request_t *result = attachment_rename_v1_request_create_internal (
        s_attachment_name,
        s_attachment_category,
        b_force_override_copy
        );
    if (!result) {
        free(b_force_override_copy);
    }
    return result;
}

void attachment_rename_v1_request_free(attachment_rename_v1_request_t *attachment_rename_v1_request) {
    if(NULL == attachment_rename_v1_request){
        return ;
    }
    if(attachment_rename_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "attachment_rename_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (attachment_rename_v1_request->s_attachment_name) {
        free(attachment_rename_v1_request->s_attachment_name);
        attachment_rename_v1_request->s_attachment_name = NULL;
    }
    if (attachment_rename_v1_request->s_attachment_category) {
        free(attachment_rename_v1_request->s_attachment_category);
        attachment_rename_v1_request->s_attachment_category = NULL;
    }
    if (attachment_rename_v1_request->b_force_override) {
        free(attachment_rename_v1_request->b_force_override);
        attachment_rename_v1_request->b_force_override = NULL;
    }
    free(attachment_rename_v1_request);
}

cJSON *attachment_rename_v1_request_convertToJSON(attachment_rename_v1_request_t *attachment_rename_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // attachment_rename_v1_request->s_attachment_name
    if (!attachment_rename_v1_request->s_attachment_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentName", attachment_rename_v1_request->s_attachment_name) == NULL) {
    goto fail; //String
    }


    // attachment_rename_v1_request->s_attachment_category
    if (!attachment_rename_v1_request->s_attachment_category) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentCategory", attachment_rename_v1_request->s_attachment_category) == NULL) {
    goto fail; //String
    }


    // attachment_rename_v1_request->b_force_override
    if(attachment_rename_v1_request->b_force_override) {
    if(cJSON_AddBoolToObject(item, "bForceOverride", *attachment_rename_v1_request->b_force_override) == NULL) {
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

attachment_rename_v1_request_t *attachment_rename_v1_request_parseFromJSON(cJSON *attachment_rename_v1_requestJSON){

    attachment_rename_v1_request_t *attachment_rename_v1_request_local_var = NULL;

    char *s_attachment_name_local_str = NULL;

    char *s_attachment_category_local_str = NULL;

    // define the local variable for attachment_rename_v1_request->b_force_override
    int *b_force_override_local_var = NULL;

    // attachment_rename_v1_request->s_attachment_name
    cJSON *s_attachment_name = cJSON_GetObjectItemCaseSensitive(attachment_rename_v1_requestJSON, "sAttachmentName");
    if (cJSON_IsNull(s_attachment_name)) {
        s_attachment_name = NULL;
    }
    if (!s_attachment_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_attachment_name))
    {
    goto end; //String
    }

    // attachment_rename_v1_request->s_attachment_category
    cJSON *s_attachment_category = cJSON_GetObjectItemCaseSensitive(attachment_rename_v1_requestJSON, "sAttachmentCategory");
    if (cJSON_IsNull(s_attachment_category)) {
        s_attachment_category = NULL;
    }
    if (!s_attachment_category) {
        goto end;
    }

    
    if(!cJSON_IsString(s_attachment_category))
    {
    goto end; //String
    }

    // attachment_rename_v1_request->b_force_override
    cJSON *b_force_override = cJSON_GetObjectItemCaseSensitive(attachment_rename_v1_requestJSON, "bForceOverride");
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


    if (s_attachment_name && !cJSON_IsNull(s_attachment_name)) s_attachment_name_local_str = strdup(s_attachment_name->valuestring);
    if (s_attachment_category && !cJSON_IsNull(s_attachment_category)) s_attachment_category_local_str = strdup(s_attachment_category->valuestring);

    attachment_rename_v1_request_local_var = attachment_rename_v1_request_create_internal (
        s_attachment_name_local_str,
        s_attachment_category_local_str,
        b_force_override_local_var
        );

    if (!attachment_rename_v1_request_local_var) {
        goto end;
    }

    return attachment_rename_v1_request_local_var;
end:
    if (s_attachment_name_local_str) {
        free(s_attachment_name_local_str);
        s_attachment_name_local_str = NULL;
    }
    if (s_attachment_category_local_str) {
        free(s_attachment_category_local_str);
        s_attachment_category_local_str = NULL;
    }
    if (b_force_override_local_var) {
        free(b_force_override_local_var);
        b_force_override_local_var = NULL;
    }
    return NULL;

}
