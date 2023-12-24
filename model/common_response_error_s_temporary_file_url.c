#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_error_s_temporary_file_url.h"


char* e_error_codecommon_response_error_s_temporary_file_url_ToString(ezmax_api_definition__full_common_response_error_s_temporary_file_url__e e_error_code) {
    char* e_error_codeArray[] =  { "NULL", "BADREQUEST", "BADREQUEST_CLOCKSKEW", "UNAUTHORIZED_BADAUTH", "UNAUTHORIZED_BADMFA", "UNAUTHORIZED_EXPIRED", "UNAUTHORIZED_REQUEST", "FORBIDDEN", "FORBIDDEN_CONFIGURATION", "FORBIDDEN_MODULE", "FORBIDDEN_NOACCESS", "FORBIDDEN_PERMISSION", "FORBIDDEN_SUBSCRIPTION", "FORBIDDEN_USERTYPE", "FORBIDDEN_USER_ORIGIN_EXTERNAL", "NOTFOUND", "NOTFOUND_OBJECT", "NOTFOUND_ROUTE", "METHODNOTALLOWED", "NOTACCEPTABLE_CONTENT", "NOTACCEPTABLE_LANGUAGE", "UNPROCESSABLEENTITY_ACTIVESESSION_ALREADY_CLONING", "UNPROCESSABLEENTITY_CANNOTDELETE", "UNPROCESSABLEENTITY_CANNOTMODIFY", "UNPROCESSABLEENTITY_CHANGEPASSWORD_INVALID_CURRENT", "UNPROCESSABLEENTITY_CHANGEPASSWORD_SAME", "UNPROCESSABLEENTITY_DATA_MISSING", "UNPROCESSABLEENTITY_DATA_UNIQUE", "UNPROCESSABLEENTITY_DATA_VALIDATION", "UNPROCESSABLEENTITY_DATA_OUTOFBOUND", "UNPROCESSABLEENTITY_DOWNLOAD_ERROR", "UNPROCESSABLEENTITY_EZSIGNFORM_VALIDATION", "UNPROCESSABLEENTITY_EZSIGNSIGNERCONNECTED", "UNPROCESSABLEENTITY_NOTHINGTODO", "UNPROCESSABLEENTITY_NOTREADY", "UNPROCESSABLEENTITY_PDF_FORM", "UNPROCESSABLEENTITY_PDF_SIGNATURE", "UNPROCESSABLEENTITY_PDF_FORM_AND_SIGNATURE", "UNPROCESSABLEENTITY_PDF_INCOMPATIBLE", "UNPROCESSABLEENTITY_PDF_PASSWORD", "UNPROCESSABLEENTITY_PDF_WRONG_PASSWORD", "UNPROCESSABLEENTITY_PDF_REPAIRABLE", "UNPROCESSABLEENTITY_PDF_XFA", "UNPROCESSABLEENTITY_TEMPLATE_MISMATCH", "UNPROCESSABLEENTITY_UNMODIFIABLE_FIELD", "UNPROCESSABLEENTITY_USER_STAGED", "TOOMANYREQUESTS", "TOOMANYREQUESTS_THIRDPARTY", "ERROR_INTERNAL", "ERROR_CONFIGURATION", "ERROR_NOTIMPLEMENTED" };
    return e_error_codeArray[e_error_code];
}

ezmax_api_definition__full_common_response_error_s_temporary_file_url__e e_error_codecommon_response_error_s_temporary_file_url_FromString(char* e_error_code){
    int stringToReturn = 0;
    char *e_error_codeArray[] =  { "NULL", "BADREQUEST", "BADREQUEST_CLOCKSKEW", "UNAUTHORIZED_BADAUTH", "UNAUTHORIZED_BADMFA", "UNAUTHORIZED_EXPIRED", "UNAUTHORIZED_REQUEST", "FORBIDDEN", "FORBIDDEN_CONFIGURATION", "FORBIDDEN_MODULE", "FORBIDDEN_NOACCESS", "FORBIDDEN_PERMISSION", "FORBIDDEN_SUBSCRIPTION", "FORBIDDEN_USERTYPE", "FORBIDDEN_USER_ORIGIN_EXTERNAL", "NOTFOUND", "NOTFOUND_OBJECT", "NOTFOUND_ROUTE", "METHODNOTALLOWED", "NOTACCEPTABLE_CONTENT", "NOTACCEPTABLE_LANGUAGE", "UNPROCESSABLEENTITY_ACTIVESESSION_ALREADY_CLONING", "UNPROCESSABLEENTITY_CANNOTDELETE", "UNPROCESSABLEENTITY_CANNOTMODIFY", "UNPROCESSABLEENTITY_CHANGEPASSWORD_INVALID_CURRENT", "UNPROCESSABLEENTITY_CHANGEPASSWORD_SAME", "UNPROCESSABLEENTITY_DATA_MISSING", "UNPROCESSABLEENTITY_DATA_UNIQUE", "UNPROCESSABLEENTITY_DATA_VALIDATION", "UNPROCESSABLEENTITY_DATA_OUTOFBOUND", "UNPROCESSABLEENTITY_DOWNLOAD_ERROR", "UNPROCESSABLEENTITY_EZSIGNFORM_VALIDATION", "UNPROCESSABLEENTITY_EZSIGNSIGNERCONNECTED", "UNPROCESSABLEENTITY_NOTHINGTODO", "UNPROCESSABLEENTITY_NOTREADY", "UNPROCESSABLEENTITY_PDF_FORM", "UNPROCESSABLEENTITY_PDF_SIGNATURE", "UNPROCESSABLEENTITY_PDF_FORM_AND_SIGNATURE", "UNPROCESSABLEENTITY_PDF_INCOMPATIBLE", "UNPROCESSABLEENTITY_PDF_PASSWORD", "UNPROCESSABLEENTITY_PDF_WRONG_PASSWORD", "UNPROCESSABLEENTITY_PDF_REPAIRABLE", "UNPROCESSABLEENTITY_PDF_XFA", "UNPROCESSABLEENTITY_TEMPLATE_MISMATCH", "UNPROCESSABLEENTITY_UNMODIFIABLE_FIELD", "UNPROCESSABLEENTITY_USER_STAGED", "TOOMANYREQUESTS", "TOOMANYREQUESTS_THIRDPARTY", "ERROR_INTERNAL", "ERROR_CONFIGURATION", "ERROR_NOTIMPLEMENTED" };
    size_t sizeofArray = sizeof(e_error_codeArray) / sizeof(e_error_codeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_error_code, e_error_codeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url_create(
    char *s_error_message,
    field_e_error_code_t *e_error_code,
    char *s_temporary_file_url
    ) {
    common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url_local_var = malloc(sizeof(common_response_error_s_temporary_file_url_t));
    if (!common_response_error_s_temporary_file_url_local_var) {
        return NULL;
    }
    common_response_error_s_temporary_file_url_local_var->s_error_message = s_error_message;
    common_response_error_s_temporary_file_url_local_var->e_error_code = e_error_code;
    common_response_error_s_temporary_file_url_local_var->s_temporary_file_url = s_temporary_file_url;

    return common_response_error_s_temporary_file_url_local_var;
}


void common_response_error_s_temporary_file_url_free(common_response_error_s_temporary_file_url_t *common_response_error_s_temporary_file_url) {
    if(NULL == common_response_error_s_temporary_file_url){
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_error_s_temporary_file_url->s_error_message) {
        free(common_response_error_s_temporary_file_url->s_error_message);
        common_response_error_s_temporary_file_url->s_error_message = NULL;
    }
    if (common_response_error_s_temporary_file_url->e_error_code) {
        field_e_error_code_free(common_response_error_s_temporary_file_url->e_error_code);
        common_response_error_s_temporary_file_url->e_error_code = NULL;
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
    if (ezmax_api_definition__full_common_response_error_s_temporary_file_url__NULL == common_response_error_s_temporary_file_url->e_error_code) {
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
    field_e_error_code_t *e_error_code_local_nonprim = NULL;

    // common_response_error_s_temporary_file_url->s_error_message
    cJSON *s_error_message = cJSON_GetObjectItemCaseSensitive(common_response_error_s_temporary_file_urlJSON, "sErrorMessage");
    if (!s_error_message) {
        goto end;
    }

    
    if(!cJSON_IsString(s_error_message))
    {
    goto end; //String
    }

    // common_response_error_s_temporary_file_url->e_error_code
    cJSON *e_error_code = cJSON_GetObjectItemCaseSensitive(common_response_error_s_temporary_file_urlJSON, "eErrorCode");
    if (!e_error_code) {
        goto end;
    }

    
    e_error_code_local_nonprim = field_e_error_code_parseFromJSON(e_error_code); //custom

    // common_response_error_s_temporary_file_url->s_temporary_file_url
    cJSON *s_temporary_file_url = cJSON_GetObjectItemCaseSensitive(common_response_error_s_temporary_file_urlJSON, "sTemporaryFileUrl");
    if (s_temporary_file_url) { 
    if(!cJSON_IsString(s_temporary_file_url) && !cJSON_IsNull(s_temporary_file_url))
    {
    goto end; //String
    }
    }


    common_response_error_s_temporary_file_url_local_var = common_response_error_s_temporary_file_url_create (
        strdup(s_error_message->valuestring),
        e_error_code_local_nonprim,
        s_temporary_file_url && !cJSON_IsNull(s_temporary_file_url) ? strdup(s_temporary_file_url->valuestring) : NULL
        );

    return common_response_error_s_temporary_file_url_local_var;
end:
    if (e_error_code_local_nonprim) {
        field_e_error_code_free(e_error_code_local_nonprim);
        e_error_code_local_nonprim = NULL;
    }
    return NULL;

}
