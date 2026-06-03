#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_attachment_prepare_files_transfer_request.h"



static custom_attachment_prepare_files_transfer_request_t *custom_attachment_prepare_files_transfer_request_create_internal(
    char *s_attachment_name,
    char *s_attachment_md5
    ) {
    custom_attachment_prepare_files_transfer_request_t *custom_attachment_prepare_files_transfer_request_local_var = malloc(sizeof(custom_attachment_prepare_files_transfer_request_t));
    if (!custom_attachment_prepare_files_transfer_request_local_var) {
        return NULL;
    }
    memset(custom_attachment_prepare_files_transfer_request_local_var, 0, sizeof(custom_attachment_prepare_files_transfer_request_t));
    custom_attachment_prepare_files_transfer_request_local_var->_library_owned = 1;
    custom_attachment_prepare_files_transfer_request_local_var->s_attachment_name = s_attachment_name;
    custom_attachment_prepare_files_transfer_request_local_var->s_attachment_md5 = s_attachment_md5;
    return custom_attachment_prepare_files_transfer_request_local_var;
}

__attribute__((deprecated)) custom_attachment_prepare_files_transfer_request_t *custom_attachment_prepare_files_transfer_request_create(
    char *s_attachment_name,
    char *s_attachment_md5
    ) {
    custom_attachment_prepare_files_transfer_request_t *result = custom_attachment_prepare_files_transfer_request_create_internal (
        s_attachment_name,
        s_attachment_md5
        );
    if (!result) {
    }
    return result;
}

void custom_attachment_prepare_files_transfer_request_free(custom_attachment_prepare_files_transfer_request_t *custom_attachment_prepare_files_transfer_request) {
    if(NULL == custom_attachment_prepare_files_transfer_request){
        return ;
    }
    if(custom_attachment_prepare_files_transfer_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_attachment_prepare_files_transfer_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_attachment_prepare_files_transfer_request->s_attachment_name) {
        free(custom_attachment_prepare_files_transfer_request->s_attachment_name);
        custom_attachment_prepare_files_transfer_request->s_attachment_name = NULL;
    }
    if (custom_attachment_prepare_files_transfer_request->s_attachment_md5) {
        free(custom_attachment_prepare_files_transfer_request->s_attachment_md5);
        custom_attachment_prepare_files_transfer_request->s_attachment_md5 = NULL;
    }
    free(custom_attachment_prepare_files_transfer_request);
}

cJSON *custom_attachment_prepare_files_transfer_request_convertToJSON(custom_attachment_prepare_files_transfer_request_t *custom_attachment_prepare_files_transfer_request) {
    cJSON *item = cJSON_CreateObject();

    // custom_attachment_prepare_files_transfer_request->s_attachment_name
    if (!custom_attachment_prepare_files_transfer_request->s_attachment_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentName", custom_attachment_prepare_files_transfer_request->s_attachment_name) == NULL) {
    goto fail; //String
    }


    // custom_attachment_prepare_files_transfer_request->s_attachment_md5
    if (!custom_attachment_prepare_files_transfer_request->s_attachment_md5) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentMD5", custom_attachment_prepare_files_transfer_request->s_attachment_md5) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_attachment_prepare_files_transfer_request_t *custom_attachment_prepare_files_transfer_request_parseFromJSON(cJSON *custom_attachment_prepare_files_transfer_requestJSON){

    custom_attachment_prepare_files_transfer_request_t *custom_attachment_prepare_files_transfer_request_local_var = NULL;

    char *s_attachment_name_local_str = NULL;

    char *s_attachment_md5_local_str = NULL;

    // custom_attachment_prepare_files_transfer_request->s_attachment_name
    cJSON *s_attachment_name = cJSON_GetObjectItemCaseSensitive(custom_attachment_prepare_files_transfer_requestJSON, "sAttachmentName");
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

    // custom_attachment_prepare_files_transfer_request->s_attachment_md5
    cJSON *s_attachment_md5 = cJSON_GetObjectItemCaseSensitive(custom_attachment_prepare_files_transfer_requestJSON, "sAttachmentMD5");
    if (cJSON_IsNull(s_attachment_md5)) {
        s_attachment_md5 = NULL;
    }
    if (!s_attachment_md5) {
        goto end;
    }

    
    if(!cJSON_IsString(s_attachment_md5))
    {
    goto end; //String
    }


    if (s_attachment_name && !cJSON_IsNull(s_attachment_name)) s_attachment_name_local_str = strdup(s_attachment_name->valuestring);
    if (s_attachment_md5 && !cJSON_IsNull(s_attachment_md5)) s_attachment_md5_local_str = strdup(s_attachment_md5->valuestring);

    custom_attachment_prepare_files_transfer_request_local_var = custom_attachment_prepare_files_transfer_request_create_internal (
        s_attachment_name_local_str,
        s_attachment_md5_local_str
        );

    if (!custom_attachment_prepare_files_transfer_request_local_var) {
        goto end;
    }

    return custom_attachment_prepare_files_transfer_request_local_var;
end:
    if (s_attachment_name_local_str) {
        free(s_attachment_name_local_str);
        s_attachment_name_local_str = NULL;
    }
    if (s_attachment_md5_local_str) {
        free(s_attachment_md5_local_str);
        s_attachment_md5_local_str = NULL;
    }
    return NULL;

}
