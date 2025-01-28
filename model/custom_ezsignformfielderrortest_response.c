#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_ezsignformfielderrortest_response.h"



static custom_ezsignformfielderrortest_response_t *custom_ezsignformfielderrortest_response_create_internal(
    char *s_ezsignformfielderrortest_name,
    char *s_ezsignformfielderrortest_detail
    ) {
    custom_ezsignformfielderrortest_response_t *custom_ezsignformfielderrortest_response_local_var = malloc(sizeof(custom_ezsignformfielderrortest_response_t));
    if (!custom_ezsignformfielderrortest_response_local_var) {
        return NULL;
    }
    custom_ezsignformfielderrortest_response_local_var->s_ezsignformfielderrortest_name = s_ezsignformfielderrortest_name;
    custom_ezsignformfielderrortest_response_local_var->s_ezsignformfielderrortest_detail = s_ezsignformfielderrortest_detail;

    custom_ezsignformfielderrortest_response_local_var->_library_owned = 1;
    return custom_ezsignformfielderrortest_response_local_var;
}

__attribute__((deprecated)) custom_ezsignformfielderrortest_response_t *custom_ezsignformfielderrortest_response_create(
    char *s_ezsignformfielderrortest_name,
    char *s_ezsignformfielderrortest_detail
    ) {
    return custom_ezsignformfielderrortest_response_create_internal (
        s_ezsignformfielderrortest_name,
        s_ezsignformfielderrortest_detail
        );
}

void custom_ezsignformfielderrortest_response_free(custom_ezsignformfielderrortest_response_t *custom_ezsignformfielderrortest_response) {
    if(NULL == custom_ezsignformfielderrortest_response){
        return ;
    }
    if(custom_ezsignformfielderrortest_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_ezsignformfielderrortest_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_name) {
        free(custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_name);
        custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_name = NULL;
    }
    if (custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_detail) {
        free(custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_detail);
        custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_detail = NULL;
    }
    free(custom_ezsignformfielderrortest_response);
}

cJSON *custom_ezsignformfielderrortest_response_convertToJSON(custom_ezsignformfielderrortest_response_t *custom_ezsignformfielderrortest_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_name
    if (!custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfielderrortestName", custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_name) == NULL) {
    goto fail; //String
    }


    // custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_detail
    if (!custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_detail) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfielderrortestDetail", custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_detail) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_ezsignformfielderrortest_response_t *custom_ezsignformfielderrortest_response_parseFromJSON(cJSON *custom_ezsignformfielderrortest_responseJSON){

    custom_ezsignformfielderrortest_response_t *custom_ezsignformfielderrortest_response_local_var = NULL;

    // custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_name
    cJSON *s_ezsignformfielderrortest_name = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfielderrortest_responseJSON, "sEzsignformfielderrortestName");
    if (cJSON_IsNull(s_ezsignformfielderrortest_name)) {
        s_ezsignformfielderrortest_name = NULL;
    }
    if (!s_ezsignformfielderrortest_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfielderrortest_name))
    {
    goto end; //String
    }

    // custom_ezsignformfielderrortest_response->s_ezsignformfielderrortest_detail
    cJSON *s_ezsignformfielderrortest_detail = cJSON_GetObjectItemCaseSensitive(custom_ezsignformfielderrortest_responseJSON, "sEzsignformfielderrortestDetail");
    if (cJSON_IsNull(s_ezsignformfielderrortest_detail)) {
        s_ezsignformfielderrortest_detail = NULL;
    }
    if (!s_ezsignformfielderrortest_detail) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfielderrortest_detail))
    {
    goto end; //String
    }


    custom_ezsignformfielderrortest_response_local_var = custom_ezsignformfielderrortest_response_create_internal (
        strdup(s_ezsignformfielderrortest_name->valuestring),
        strdup(s_ezsignformfielderrortest_detail->valuestring)
        );

    return custom_ezsignformfielderrortest_response_local_var;
end:
    return NULL;

}
