#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "documentation_subscribe_v1_response.h"



static documentation_subscribe_v1_response_t *documentation_subscribe_v1_response_create_internal(
    char *s_external_id
    ) {
    documentation_subscribe_v1_response_t *documentation_subscribe_v1_response_local_var = malloc(sizeof(documentation_subscribe_v1_response_t));
    if (!documentation_subscribe_v1_response_local_var) {
        return NULL;
    }
    memset(documentation_subscribe_v1_response_local_var, 0, sizeof(documentation_subscribe_v1_response_t));
    documentation_subscribe_v1_response_local_var->_library_owned = 1;
    documentation_subscribe_v1_response_local_var->s_external_id = s_external_id;
    return documentation_subscribe_v1_response_local_var;
}

__attribute__((deprecated)) documentation_subscribe_v1_response_t *documentation_subscribe_v1_response_create(
    char *s_external_id
    ) {
    documentation_subscribe_v1_response_t *result = documentation_subscribe_v1_response_create_internal (
        s_external_id
        );
    if (!result) {
    }
    return result;
}

void documentation_subscribe_v1_response_free(documentation_subscribe_v1_response_t *documentation_subscribe_v1_response) {
    if(NULL == documentation_subscribe_v1_response){
        return ;
    }
    if(documentation_subscribe_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "documentation_subscribe_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (documentation_subscribe_v1_response->s_external_id) {
        free(documentation_subscribe_v1_response->s_external_id);
        documentation_subscribe_v1_response->s_external_id = NULL;
    }
    free(documentation_subscribe_v1_response);
}

cJSON *documentation_subscribe_v1_response_convertToJSON(documentation_subscribe_v1_response_t *documentation_subscribe_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // documentation_subscribe_v1_response->s_external_id
    if (!documentation_subscribe_v1_response->s_external_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sExternalID", documentation_subscribe_v1_response->s_external_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

documentation_subscribe_v1_response_t *documentation_subscribe_v1_response_parseFromJSON(cJSON *documentation_subscribe_v1_responseJSON){

    documentation_subscribe_v1_response_t *documentation_subscribe_v1_response_local_var = NULL;

    char *s_external_id_local_str = NULL;

    // documentation_subscribe_v1_response->s_external_id
    cJSON *s_external_id = cJSON_GetObjectItemCaseSensitive(documentation_subscribe_v1_responseJSON, "sExternalID");
    if (cJSON_IsNull(s_external_id)) {
        s_external_id = NULL;
    }
    if (!s_external_id) {
        goto end;
    }

    
    if(!cJSON_IsString(s_external_id))
    {
    goto end; //String
    }


    if (s_external_id && !cJSON_IsNull(s_external_id)) s_external_id_local_str = strdup(s_external_id->valuestring);

    documentation_subscribe_v1_response_local_var = documentation_subscribe_v1_response_create_internal (
        s_external_id_local_str
        );

    if (!documentation_subscribe_v1_response_local_var) {
        goto end;
    }

    return documentation_subscribe_v1_response_local_var;
end:
    if (s_external_id_local_str) {
        free(s_external_id_local_str);
        s_external_id_local_str = NULL;
    }
    return NULL;

}
