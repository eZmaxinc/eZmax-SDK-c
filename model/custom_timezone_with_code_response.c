#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_timezone_with_code_response.h"



static custom_timezone_with_code_response_t *custom_timezone_with_code_response_create_internal(
    char *s_timezone_name,
    char *s_code
    ) {
    custom_timezone_with_code_response_t *custom_timezone_with_code_response_local_var = malloc(sizeof(custom_timezone_with_code_response_t));
    if (!custom_timezone_with_code_response_local_var) {
        return NULL;
    }
    custom_timezone_with_code_response_local_var->s_timezone_name = s_timezone_name;
    custom_timezone_with_code_response_local_var->s_code = s_code;

    custom_timezone_with_code_response_local_var->_library_owned = 1;
    return custom_timezone_with_code_response_local_var;
}

__attribute__((deprecated)) custom_timezone_with_code_response_t *custom_timezone_with_code_response_create(
    char *s_timezone_name,
    char *s_code
    ) {
    return custom_timezone_with_code_response_create_internal (
        s_timezone_name,
        s_code
        );
}

void custom_timezone_with_code_response_free(custom_timezone_with_code_response_t *custom_timezone_with_code_response) {
    if(NULL == custom_timezone_with_code_response){
        return ;
    }
    if(custom_timezone_with_code_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_timezone_with_code_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_timezone_with_code_response->s_timezone_name) {
        free(custom_timezone_with_code_response->s_timezone_name);
        custom_timezone_with_code_response->s_timezone_name = NULL;
    }
    if (custom_timezone_with_code_response->s_code) {
        free(custom_timezone_with_code_response->s_code);
        custom_timezone_with_code_response->s_code = NULL;
    }
    free(custom_timezone_with_code_response);
}

cJSON *custom_timezone_with_code_response_convertToJSON(custom_timezone_with_code_response_t *custom_timezone_with_code_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_timezone_with_code_response->s_timezone_name
    if (!custom_timezone_with_code_response->s_timezone_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sTimezoneName", custom_timezone_with_code_response->s_timezone_name) == NULL) {
    goto fail; //String
    }


    // custom_timezone_with_code_response->s_code
    if (!custom_timezone_with_code_response->s_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCode", custom_timezone_with_code_response->s_code) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_timezone_with_code_response_t *custom_timezone_with_code_response_parseFromJSON(cJSON *custom_timezone_with_code_responseJSON){

    custom_timezone_with_code_response_t *custom_timezone_with_code_response_local_var = NULL;

    // custom_timezone_with_code_response->s_timezone_name
    cJSON *s_timezone_name = cJSON_GetObjectItemCaseSensitive(custom_timezone_with_code_responseJSON, "sTimezoneName");
    if (cJSON_IsNull(s_timezone_name)) {
        s_timezone_name = NULL;
    }
    if (!s_timezone_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_timezone_name))
    {
    goto end; //String
    }

    // custom_timezone_with_code_response->s_code
    cJSON *s_code = cJSON_GetObjectItemCaseSensitive(custom_timezone_with_code_responseJSON, "sCode");
    if (cJSON_IsNull(s_code)) {
        s_code = NULL;
    }
    if (!s_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_code))
    {
    goto end; //String
    }


    custom_timezone_with_code_response_local_var = custom_timezone_with_code_response_create_internal (
        strdup(s_timezone_name->valuestring),
        strdup(s_code->valuestring)
        );

    return custom_timezone_with_code_response_local_var;
end:
    return NULL;

}
