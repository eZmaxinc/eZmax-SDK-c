#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_redirect_s_secretquestion_text_x.h"



common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x_create(
    char *s_secretquestion_text_x
    ) {
    common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x_local_var = malloc(sizeof(common_response_redirect_s_secretquestion_text_x_t));
    if (!common_response_redirect_s_secretquestion_text_x_local_var) {
        return NULL;
    }
    common_response_redirect_s_secretquestion_text_x_local_var->s_secretquestion_text_x = s_secretquestion_text_x;

    return common_response_redirect_s_secretquestion_text_x_local_var;
}


void common_response_redirect_s_secretquestion_text_x_free(common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x) {
    if(NULL == common_response_redirect_s_secretquestion_text_x){
        return ;
    }
    listEntry_t *listEntry;
    if (common_response_redirect_s_secretquestion_text_x->s_secretquestion_text_x) {
        free(common_response_redirect_s_secretquestion_text_x->s_secretquestion_text_x);
        common_response_redirect_s_secretquestion_text_x->s_secretquestion_text_x = NULL;
    }
    free(common_response_redirect_s_secretquestion_text_x);
}

cJSON *common_response_redirect_s_secretquestion_text_x_convertToJSON(common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x) {
    cJSON *item = cJSON_CreateObject();

    // common_response_redirect_s_secretquestion_text_x->s_secretquestion_text_x
    if (!common_response_redirect_s_secretquestion_text_x->s_secretquestion_text_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSecretquestionTextX", common_response_redirect_s_secretquestion_text_x->s_secretquestion_text_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x_parseFromJSON(cJSON *common_response_redirect_s_secretquestion_text_xJSON){

    common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x_local_var = NULL;

    // common_response_redirect_s_secretquestion_text_x->s_secretquestion_text_x
    cJSON *s_secretquestion_text_x = cJSON_GetObjectItemCaseSensitive(common_response_redirect_s_secretquestion_text_xJSON, "sSecretquestionTextX");
    if (!s_secretquestion_text_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_secretquestion_text_x))
    {
    goto end; //String
    }


    common_response_redirect_s_secretquestion_text_x_local_var = common_response_redirect_s_secretquestion_text_x_create (
        strdup(s_secretquestion_text_x->valuestring)
        );

    return common_response_redirect_s_secretquestion_text_x_local_var;
end:
    return NULL;

}
