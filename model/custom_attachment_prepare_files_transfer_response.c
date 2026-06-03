#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_attachment_prepare_files_transfer_response.h"


char* custom_attachment_prepare_files_transfer_response_e_attachment_action_ToString(ezmax_api_definition__full_custom_attachment_prepare_files_transfer_response_EATTACHMENTACTION_e e_attachment_action) {
    char* e_attachment_actionArray[] =  { "NULL", "Accept", "Discard", "Overwrite", "Reject", "Restore" };
    return e_attachment_actionArray[e_attachment_action];
}

ezmax_api_definition__full_custom_attachment_prepare_files_transfer_response_EATTACHMENTACTION_e custom_attachment_prepare_files_transfer_response_e_attachment_action_FromString(char* e_attachment_action){
    int stringToReturn = 0;
    char *e_attachment_actionArray[] =  { "NULL", "Accept", "Discard", "Overwrite", "Reject", "Restore" };
    size_t sizeofArray = sizeof(e_attachment_actionArray) / sizeof(e_attachment_actionArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_attachment_action, e_attachment_actionArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static custom_attachment_prepare_files_transfer_response_t *custom_attachment_prepare_files_transfer_response_create_internal(
    char *s_attachment_name,
    char *s_attachment_md5,
    ezmax_api_definition__full_custom_attachment_prepare_files_transfer_response_EATTACHMENTACTION_e e_attachment_action
    ) {
    custom_attachment_prepare_files_transfer_response_t *custom_attachment_prepare_files_transfer_response_local_var = malloc(sizeof(custom_attachment_prepare_files_transfer_response_t));
    if (!custom_attachment_prepare_files_transfer_response_local_var) {
        return NULL;
    }
    memset(custom_attachment_prepare_files_transfer_response_local_var, 0, sizeof(custom_attachment_prepare_files_transfer_response_t));
    custom_attachment_prepare_files_transfer_response_local_var->_library_owned = 1;
    custom_attachment_prepare_files_transfer_response_local_var->s_attachment_name = s_attachment_name;
    custom_attachment_prepare_files_transfer_response_local_var->s_attachment_md5 = s_attachment_md5;
    custom_attachment_prepare_files_transfer_response_local_var->e_attachment_action = e_attachment_action;
    return custom_attachment_prepare_files_transfer_response_local_var;
}

__attribute__((deprecated)) custom_attachment_prepare_files_transfer_response_t *custom_attachment_prepare_files_transfer_response_create(
    char *s_attachment_name,
    char *s_attachment_md5,
    ezmax_api_definition__full_custom_attachment_prepare_files_transfer_response_EATTACHMENTACTION_e e_attachment_action
    ) {
    custom_attachment_prepare_files_transfer_response_t *result = custom_attachment_prepare_files_transfer_response_create_internal (
        s_attachment_name,
        s_attachment_md5,
        e_attachment_action
        );
    if (!result) {
    }
    return result;
}

void custom_attachment_prepare_files_transfer_response_free(custom_attachment_prepare_files_transfer_response_t *custom_attachment_prepare_files_transfer_response) {
    if(NULL == custom_attachment_prepare_files_transfer_response){
        return ;
    }
    if(custom_attachment_prepare_files_transfer_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_attachment_prepare_files_transfer_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_attachment_prepare_files_transfer_response->s_attachment_name) {
        free(custom_attachment_prepare_files_transfer_response->s_attachment_name);
        custom_attachment_prepare_files_transfer_response->s_attachment_name = NULL;
    }
    if (custom_attachment_prepare_files_transfer_response->s_attachment_md5) {
        free(custom_attachment_prepare_files_transfer_response->s_attachment_md5);
        custom_attachment_prepare_files_transfer_response->s_attachment_md5 = NULL;
    }
    free(custom_attachment_prepare_files_transfer_response);
}

cJSON *custom_attachment_prepare_files_transfer_response_convertToJSON(custom_attachment_prepare_files_transfer_response_t *custom_attachment_prepare_files_transfer_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_attachment_prepare_files_transfer_response->s_attachment_name
    if (!custom_attachment_prepare_files_transfer_response->s_attachment_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentName", custom_attachment_prepare_files_transfer_response->s_attachment_name) == NULL) {
    goto fail; //String
    }


    // custom_attachment_prepare_files_transfer_response->s_attachment_md5
    if (!custom_attachment_prepare_files_transfer_response->s_attachment_md5) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAttachmentMD5", custom_attachment_prepare_files_transfer_response->s_attachment_md5) == NULL) {
    goto fail; //String
    }


    // custom_attachment_prepare_files_transfer_response->e_attachment_action
    if (ezmax_api_definition__full_custom_attachment_prepare_files_transfer_response_EATTACHMENTACTION_NULL == custom_attachment_prepare_files_transfer_response->e_attachment_action) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eAttachmentAction", custom_attachment_prepare_files_transfer_response_e_attachment_action_ToString(custom_attachment_prepare_files_transfer_response->e_attachment_action)) == NULL)
    {
    goto fail; //Enum
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_attachment_prepare_files_transfer_response_t *custom_attachment_prepare_files_transfer_response_parseFromJSON(cJSON *custom_attachment_prepare_files_transfer_responseJSON){

    custom_attachment_prepare_files_transfer_response_t *custom_attachment_prepare_files_transfer_response_local_var = NULL;

    char *s_attachment_name_local_str = NULL;

    char *s_attachment_md5_local_str = NULL;

    // custom_attachment_prepare_files_transfer_response->s_attachment_name
    cJSON *s_attachment_name = cJSON_GetObjectItemCaseSensitive(custom_attachment_prepare_files_transfer_responseJSON, "sAttachmentName");
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

    // custom_attachment_prepare_files_transfer_response->s_attachment_md5
    cJSON *s_attachment_md5 = cJSON_GetObjectItemCaseSensitive(custom_attachment_prepare_files_transfer_responseJSON, "sAttachmentMD5");
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

    // custom_attachment_prepare_files_transfer_response->e_attachment_action
    cJSON *e_attachment_action = cJSON_GetObjectItemCaseSensitive(custom_attachment_prepare_files_transfer_responseJSON, "eAttachmentAction");
    if (cJSON_IsNull(e_attachment_action)) {
        e_attachment_action = NULL;
    }
    if (!e_attachment_action) {
        goto end;
    }

    ezmax_api_definition__full_custom_attachment_prepare_files_transfer_response_EATTACHMENTACTION_e e_attachment_actionVariable;
    
    if(!cJSON_IsString(e_attachment_action))
    {
    goto end; //Enum
    }
    e_attachment_actionVariable = custom_attachment_prepare_files_transfer_response_e_attachment_action_FromString(e_attachment_action->valuestring);


    if (s_attachment_name && !cJSON_IsNull(s_attachment_name)) s_attachment_name_local_str = strdup(s_attachment_name->valuestring);
    if (s_attachment_md5 && !cJSON_IsNull(s_attachment_md5)) s_attachment_md5_local_str = strdup(s_attachment_md5->valuestring);

    custom_attachment_prepare_files_transfer_response_local_var = custom_attachment_prepare_files_transfer_response_create_internal (
        s_attachment_name_local_str,
        s_attachment_md5_local_str,
        e_attachment_actionVariable
        );

    if (!custom_attachment_prepare_files_transfer_response_local_var) {
        goto end;
    }

    return custom_attachment_prepare_files_transfer_response_local_var;
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
