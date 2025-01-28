#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_error_s_temporary_file_url.h"



static common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url_create_internal(
    char *s_error_message,
    ezmax_api_definition__full_field_e_error_code__e e_error_code,
    list_t *a_s_error_messagedetail,
    char *s_temporary_file_url
    ) {
    common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url_local_var = malloc(sizeof(common_response_error_s_temporary_file_url_t));
    if (!common_response_error_s_temporary_file_url_local_var) {
        return NULL;
    }
    common_response_error_s_temporary_file_url_local_var->s_error_message = s_error_message;
    common_response_error_s_temporary_file_url_local_var->e_error_code = e_error_code;
    common_response_error_s_temporary_file_url_local_var->a_s_error_messagedetail = a_s_error_messagedetail;
    common_response_error_s_temporary_file_url_local_var->s_temporary_file_url = s_temporary_file_url;

    common_response_error_s_temporary_file_url_local_var->_library_owned = 1;
    return common_response_error_s_temporary_file_url_local_var;
}

__attribute__((deprecated)) common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url_create(
    char *s_error_message,
    ezmax_api_definition__full_field_e_error_code__e e_error_code,
    list_t *a_s_error_messagedetail,
    char *s_temporary_file_url
    ) {
    return common_response_error_s_temporary_file_url_create_internal (
        s_error_message,
        e_error_code,
        a_s_error_messagedetail,
        s_temporary_file_url
        );
}

void common_response_error_s_temporary_file_url_free(common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url) {
    if(NULL == common_response_error_s_temporary_file_url){
        return ;
    }
    if(common_response_error_s_temporary_file_url->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_response_error_s_temporary_file_url_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_error_s_temporary_file_url->s_error_message) {
        free(common_response_error_s_temporary_file_url->s_error_message);
        common_response_error_s_temporary_file_url->s_error_message = NULL;
    }
    if (common_response_error_s_temporary_file_url->a_s_error_messagedetail) {
        list_ForEach(listEntry, common_response_error_s_temporary_file_url->a_s_error_messagedetail) {
            free(listEntry->data);
        }
        list_freeList(common_response_error_s_temporary_file_url->a_s_error_messagedetail);
        common_response_error_s_temporary_file_url->a_s_error_messagedetail = NULL;
    }
    if (common_response_error_s_temporary_file_url->s_temporary_file_url) {
        free(common_response_error_s_temporary_file_url->s_temporary_file_url);
        common_response_error_s_temporary_file_url->s_temporary_file_url = NULL;
    }
    free(common_response_error_s_temporary_file_url);
}

cJSON *common_response_error_s_temporary_file_url_convertToJSON(common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url) {
    cJSON *item = cJSON_CreateObject();

    // common_response_error_s_temporary_file_url->s_error_message
    if (!common_response_error_s_temporary_file_url->s_error_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sErrorMessage", common_response_error_s_temporary_file_url->s_error_message) == NULL) {
    goto fail; //String
    }


    // common_response_error_s_temporary_file_url->e_error_code
    if (ezmax_api_definition__full_field_e_error_code__NULL == common_response_error_s_temporary_file_url->e_error_code) {
        goto fail;
    }
    cJSON *e_error_code_local_JSON = field_e_error_code_convertToJSON(common_response_error_s_temporary_file_url->e_error_code);
    if(e_error_code_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eErrorCode", e_error_code_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // common_response_error_s_temporary_file_url->a_s_error_messagedetail
    if(common_response_error_s_temporary_file_url->a_s_error_messagedetail) {
    cJSON *a_s_error_messagedetail = cJSON_AddArrayToObject(item, "a_sErrorMessagedetail");
    if(a_s_error_messagedetail == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_error_messagedetailListEntry;
    list_ForEach(a_s_error_messagedetailListEntry, common_response_error_s_temporary_file_url->a_s_error_messagedetail) {
    if(cJSON_AddStringToObject(a_s_error_messagedetail, "", a_s_error_messagedetailListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // common_response_error_s_temporary_file_url->s_temporary_file_url
    if(common_response_error_s_temporary_file_url->s_temporary_file_url) {
    if(cJSON_AddStringToObject(item, "sTemporaryFileUrl", common_response_error_s_temporary_file_url->s_temporary_file_url) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url_parseFromJSON(cJSON *common_response_error_s_temporary_file_urlJSON){

    common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url_local_var = NULL;

    // define the local variable for common_response_error_s_temporary_file_url->e_error_code
    ezmax_api_definition__full_field_e_error_code__e e_error_code_local_nonprim = 0;

    // define the local list for common_response_error_s_temporary_file_url->a_s_error_messagedetail
    list_t *a_s_error_messagedetailList = NULL;

    // common_response_error_s_temporary_file_url->s_error_message
    cJSON *s_error_message = cJSON_GetObjectItemCaseSensitive(common_response_error_s_temporary_file_urlJSON, "sErrorMessage");
    if (cJSON_IsNull(s_error_message)) {
        s_error_message = NULL;
    }
    if (!s_error_message) {
        goto end;
    }

    
    if(!cJSON_IsString(s_error_message))
    {
    goto end; //String
    }

    // common_response_error_s_temporary_file_url->e_error_code
    cJSON *e_error_code = cJSON_GetObjectItemCaseSensitive(common_response_error_s_temporary_file_urlJSON, "eErrorCode");
    if (cJSON_IsNull(e_error_code)) {
        e_error_code = NULL;
    }
    if (!e_error_code) {
        goto end;
    }

    
    e_error_code_local_nonprim = field_e_error_code_parseFromJSON(e_error_code); //custom

    // common_response_error_s_temporary_file_url->a_s_error_messagedetail
    cJSON *a_s_error_messagedetail = cJSON_GetObjectItemCaseSensitive(common_response_error_s_temporary_file_urlJSON, "a_sErrorMessagedetail");
    if (cJSON_IsNull(a_s_error_messagedetail)) {
        a_s_error_messagedetail = NULL;
    }
    if (a_s_error_messagedetail) { 
    cJSON *a_s_error_messagedetail_local = NULL;
    if(!cJSON_IsArray(a_s_error_messagedetail)) {
        goto end;//primitive container
    }
    a_s_error_messagedetailList = list_createList();

    cJSON_ArrayForEach(a_s_error_messagedetail_local, a_s_error_messagedetail)
    {
        if(!cJSON_IsString(a_s_error_messagedetail_local))
        {
            goto end;
        }
        list_addElement(a_s_error_messagedetailList , strdup(a_s_error_messagedetail_local->valuestring));
    }
    }

    // common_response_error_s_temporary_file_url->s_temporary_file_url
    cJSON *s_temporary_file_url = cJSON_GetObjectItemCaseSensitive(common_response_error_s_temporary_file_urlJSON, "sTemporaryFileUrl");
    if (cJSON_IsNull(s_temporary_file_url)) {
        s_temporary_file_url = NULL;
    }
    if (s_temporary_file_url) { 
    if(!cJSON_IsString(s_temporary_file_url) && !cJSON_IsNull(s_temporary_file_url))
    {
    goto end; //String
    }
    }


    common_response_error_s_temporary_file_url_local_var = common_response_error_s_temporary_file_url_create_internal (
        strdup(s_error_message->valuestring),
        e_error_code_local_nonprim,
        a_s_error_messagedetail ? a_s_error_messagedetailList : NULL,
        s_temporary_file_url && !cJSON_IsNull(s_temporary_file_url) ? strdup(s_temporary_file_url->valuestring) : NULL
        );

    return common_response_error_s_temporary_file_url_local_var;
end:
    if (e_error_code_local_nonprim) {
        e_error_code_local_nonprim = 0;
    }
    if (a_s_error_messagedetailList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_error_messagedetailList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_error_messagedetailList);
        a_s_error_messagedetailList = NULL;
    }
    return NULL;

}
