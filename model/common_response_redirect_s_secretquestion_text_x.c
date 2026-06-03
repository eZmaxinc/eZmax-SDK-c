#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_response_redirect_s_secretquestion_text_x.h"



static common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x_create_internal(
    char *s_secretquestion_text_x
    ) {
    common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x_local_var = malloc(sizeof(common_response_redirect_s_secretquestion_text_x_t));
    if (!common_response_redirect_s_secretquestion_text_x_local_var) {
        return NULL;
    }
    memset(common_response_redirect_s_secretquestion_text_x_local_var, 0, sizeof(common_response_redirect_s_secretquestion_text_x_t));
    common_response_redirect_s_secretquestion_text_x_local_var->_library_owned = 1;
    common_response_redirect_s_secretquestion_text_x_local_var->s_secretquestion_text_x = s_secretquestion_text_x;
    return common_response_redirect_s_secretquestion_text_x_local_var;
}

__attribute__((deprecated)) common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x_create(
    char *s_secretquestion_text_x
    ) {
    common_response_redirect_s_secretquestion_text_x_t *result = common_response_redirect_s_secretquestion_text_x_create_internal (
        s_secretquestion_text_x
        );
    if (!result) {
    }
    return result;
}

void common_response_redirect_s_secretquestion_text_x_free(common_response_redirect_s_secretquestion_text_x_t *common_response_redirect_s_secretquestion_text_x) {
    if(NULL == common_response_redirect_s_secretquestion_text_x){
        return ;
    }
    if(common_response_redirect_s_secretquestion_text_x->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_response_redirect_s_secretquestion_text_x_free");
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

    char *s_secretquestion_text_x_local_str = NULL;

    // common_response_redirect_s_secretquestion_text_x->s_secretquestion_text_x
    cJSON *s_secretquestion_text_x = cJSON_GetObjectItemCaseSensitive(common_response_redirect_s_secretquestion_text_xJSON, "sSecretquestionTextX");
    if (cJSON_IsNull(s_secretquestion_text_x)) {
        s_secretquestion_text_x = NULL;
    }
    if (!s_secretquestion_text_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_secretquestion_text_x))
    {
    goto end; //String
    }


    if (s_secretquestion_text_x && !cJSON_IsNull(s_secretquestion_text_x)) s_secretquestion_text_x_local_str = strdup(s_secretquestion_text_x->valuestring);

    common_response_redirect_s_secretquestion_text_x_local_var = common_response_redirect_s_secretquestion_text_x_create_internal (
        s_secretquestion_text_x_local_str
        );

    if (!common_response_redirect_s_secretquestion_text_x_local_var) {
        goto end;
    }

    return common_response_redirect_s_secretquestion_text_x_local_var;
end:
    if (s_secretquestion_text_x_local_str) {
        free(s_secretquestion_text_x_local_str);
        s_secretquestion_text_x_local_str = NULL;
    }
    return NULL;

}
