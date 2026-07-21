#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxpartner_subscribe_v1_response.h"



static ezmaxpartner_subscribe_v1_response_t *ezmaxpartner_subscribe_v1_response_create_internal(
    char *s_external_id
    ) {
    ezmaxpartner_subscribe_v1_response_t *ezmaxpartner_subscribe_v1_response_local_var = malloc(sizeof(ezmaxpartner_subscribe_v1_response_t));
    if (!ezmaxpartner_subscribe_v1_response_local_var) {
        return NULL;
    }
    memset(ezmaxpartner_subscribe_v1_response_local_var, 0, sizeof(ezmaxpartner_subscribe_v1_response_t));
    ezmaxpartner_subscribe_v1_response_local_var->_library_owned = 1;
    ezmaxpartner_subscribe_v1_response_local_var->s_external_id = s_external_id;
    return ezmaxpartner_subscribe_v1_response_local_var;
}

__attribute__((deprecated)) ezmaxpartner_subscribe_v1_response_t *ezmaxpartner_subscribe_v1_response_create(
    char *s_external_id
    ) {
    ezmaxpartner_subscribe_v1_response_t *result = ezmaxpartner_subscribe_v1_response_create_internal (
        s_external_id
        );
    if (!result) {
    }
    return result;
}

void ezmaxpartner_subscribe_v1_response_free(ezmaxpartner_subscribe_v1_response_t *ezmaxpartner_subscribe_v1_response) {
    if(NULL == ezmaxpartner_subscribe_v1_response){
        return ;
    }
    if(ezmaxpartner_subscribe_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxpartner_subscribe_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxpartner_subscribe_v1_response->s_external_id) {
        free(ezmaxpartner_subscribe_v1_response->s_external_id);
        ezmaxpartner_subscribe_v1_response->s_external_id = NULL;
    }
    free(ezmaxpartner_subscribe_v1_response);
}

cJSON *ezmaxpartner_subscribe_v1_response_convertToJSON(ezmaxpartner_subscribe_v1_response_t *ezmaxpartner_subscribe_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxpartner_subscribe_v1_response->s_external_id
    if (!ezmaxpartner_subscribe_v1_response->s_external_id) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sExternalID", ezmaxpartner_subscribe_v1_response->s_external_id) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxpartner_subscribe_v1_response_t *ezmaxpartner_subscribe_v1_response_parseFromJSON(cJSON *ezmaxpartner_subscribe_v1_responseJSON){

    ezmaxpartner_subscribe_v1_response_t *ezmaxpartner_subscribe_v1_response_local_var = NULL;

    char *s_external_id_local_str = NULL;

    // ezmaxpartner_subscribe_v1_response->s_external_id
    cJSON *s_external_id = cJSON_GetObjectItemCaseSensitive(ezmaxpartner_subscribe_v1_responseJSON, "sExternalID");
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

    ezmaxpartner_subscribe_v1_response_local_var = ezmaxpartner_subscribe_v1_response_create_internal (
        s_external_id_local_str
        );

    if (!ezmaxpartner_subscribe_v1_response_local_var) {
        goto end;
    }

    return ezmaxpartner_subscribe_v1_response_local_var;
end:
    if (s_external_id_local_str) {
        free(s_external_id_local_str);
        s_external_id_local_str = NULL;
    }
    return NULL;

}
