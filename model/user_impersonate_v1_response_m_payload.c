#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_impersonate_v1_response_m_payload.h"



static user_impersonate_v1_response_m_payload_t *user_impersonate_v1_response_m_payload_create_internal(
    custom_apikey_t *obj_apikey
    ) {
    user_impersonate_v1_response_m_payload_t *user_impersonate_v1_response_m_payload_local_var = malloc(sizeof(user_impersonate_v1_response_m_payload_t));
    if (!user_impersonate_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(user_impersonate_v1_response_m_payload_local_var, 0, sizeof(user_impersonate_v1_response_m_payload_t));
    user_impersonate_v1_response_m_payload_local_var->_library_owned = 1;
    user_impersonate_v1_response_m_payload_local_var->obj_apikey = obj_apikey;
    return user_impersonate_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) user_impersonate_v1_response_m_payload_t *user_impersonate_v1_response_m_payload_create(
    custom_apikey_t *obj_apikey
    ) {
    user_impersonate_v1_response_m_payload_t *result = user_impersonate_v1_response_m_payload_create_internal (
        obj_apikey
        );
    if (!result) {
    }
    return result;
}

void user_impersonate_v1_response_m_payload_free(user_impersonate_v1_response_m_payload_t *user_impersonate_v1_response_m_payload) {
    if(NULL == user_impersonate_v1_response_m_payload){
        return ;
    }
    if(user_impersonate_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "user_impersonate_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (user_impersonate_v1_response_m_payload->obj_apikey) {
        custom_apikey_free(user_impersonate_v1_response_m_payload->obj_apikey);
        user_impersonate_v1_response_m_payload->obj_apikey = NULL;
    }
    free(user_impersonate_v1_response_m_payload);
}

cJSON *user_impersonate_v1_response_m_payload_convertToJSON(user_impersonate_v1_response_m_payload_t *user_impersonate_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // user_impersonate_v1_response_m_payload->obj_apikey
    if (!user_impersonate_v1_response_m_payload->obj_apikey) {
        goto fail;
    }
    cJSON *obj_apikey_local_JSON = custom_apikey_convertToJSON(user_impersonate_v1_response_m_payload->obj_apikey);
    if(obj_apikey_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikey", obj_apikey_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_impersonate_v1_response_m_payload_t *user_impersonate_v1_response_m_payload_parseFromJSON(cJSON *user_impersonate_v1_response_m_payloadJSON){

    user_impersonate_v1_response_m_payload_t *user_impersonate_v1_response_m_payload_local_var = NULL;

    // define the local variable for user_impersonate_v1_response_m_payload->obj_apikey
    custom_apikey_t *obj_apikey_local_nonprim = NULL;

    // user_impersonate_v1_response_m_payload->obj_apikey
    cJSON *obj_apikey = cJSON_GetObjectItemCaseSensitive(user_impersonate_v1_response_m_payloadJSON, "objApikey");
    if (cJSON_IsNull(obj_apikey)) {
        obj_apikey = NULL;
    }
    if (!obj_apikey) {
        goto end;
    }

    
    obj_apikey_local_nonprim = custom_apikey_parseFromJSON(obj_apikey); //nonprimitive



    user_impersonate_v1_response_m_payload_local_var = user_impersonate_v1_response_m_payload_create_internal (
        obj_apikey_local_nonprim
        );

    if (!user_impersonate_v1_response_m_payload_local_var) {
        goto end;
    }

    return user_impersonate_v1_response_m_payload_local_var;
end:
    if (obj_apikey_local_nonprim) {
        custom_apikey_free(obj_apikey_local_nonprim);
        obj_apikey_local_nonprim = NULL;
    }
    return NULL;

}
