#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_warning.h"



common_response_warning_t *common_response_warning_create(
    char *s_warning_message,
    char *e_warning_code
    ) {
    common_response_warning_t *common_response_warning_local_var = malloc(sizeof(common_response_warning_t));
    if (!common_response_warning_local_var) {
        return NULL;
    }
    common_response_warning_local_var->s_warning_message = s_warning_message;
    common_response_warning_local_var->e_warning_code = e_warning_code;

    return common_response_warning_local_var;
}


void common_response_warning_free(common_response_warning_t *common_response_warning) {
    if(NULL == common_response_warning){
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_warning->s_warning_message) {
        free(common_response_warning->s_warning_message);
        common_response_warning->s_warning_message = NULL;
    }
    if (common_response_warning->e_warning_code) {
        free(common_response_warning->e_warning_code);
        common_response_warning->e_warning_code = NULL;
    }
    free(common_response_warning);
}

cJSON *common_response_warning_convertToJSON(common_response_warning_t *common_response_warning) {
    cJSON *item = cJSON_CreateObject();

    // common_response_warning->s_warning_message
    if (!common_response_warning->s_warning_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWarningMessage", common_response_warning->s_warning_message) == NULL) {
    goto fail; //String
    }


    // common_response_warning->e_warning_code
    if (!common_response_warning->e_warning_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eWarningCode", common_response_warning->e_warning_code) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_response_warning_t *common_response_warning_parseFromJSON(cJSON *common_response_warningJSON){

    common_response_warning_t *common_response_warning_local_var = NULL;

    // common_response_warning->s_warning_message
    cJSON *s_warning_message = cJSON_GetObjectItemCaseSensitive(common_response_warningJSON, "sWarningMessage");
    if (!s_warning_message) {
        goto end;
    }

    
    if(!cJSON_IsString(s_warning_message))
    {
    goto end; //String
    }

    // common_response_warning->e_warning_code
    cJSON *e_warning_code = cJSON_GetObjectItemCaseSensitive(common_response_warningJSON, "eWarningCode");
    if (!e_warning_code) {
        goto end;
    }

    
    if(!cJSON_IsString(e_warning_code))
    {
    goto end; //String
    }


    common_response_warning_local_var = common_response_warning_create (
        strdup(s_warning_message->valuestring),
        strdup(e_warning_code->valuestring)
        );

    return common_response_warning_local_var;
end:
    return NULL;

}
