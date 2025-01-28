#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_generate_delegated_credentials_v1_response_m_payload.h"



static apikey_generate_delegated_credentials_v1_response_m_payload_t *apikey_generate_delegated_credentials_v1_response_m_payload_create_internal(
    custom_apikey_t *obj_apikey
    ) {
    apikey_generate_delegated_credentials_v1_response_m_payload_t *apikey_generate_delegated_credentials_v1_response_m_payload_local_var = malloc(sizeof(apikey_generate_delegated_credentials_v1_response_m_payload_t));
    if (!apikey_generate_delegated_credentials_v1_response_m_payload_local_var) {
        return NULL;
    }
    apikey_generate_delegated_credentials_v1_response_m_payload_local_var->obj_apikey = obj_apikey;

    apikey_generate_delegated_credentials_v1_response_m_payload_local_var->_library_owned = 1;
    return apikey_generate_delegated_credentials_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) apikey_generate_delegated_credentials_v1_response_m_payload_t *apikey_generate_delegated_credentials_v1_response_m_payload_create(
    custom_apikey_t *obj_apikey
    ) {
    return apikey_generate_delegated_credentials_v1_response_m_payload_create_internal (
        obj_apikey
        );
}

void apikey_generate_delegated_credentials_v1_response_m_payload_free(apikey_generate_delegated_credentials_v1_response_m_payload_t *apikey_generate_delegated_credentials_v1_response_m_payload) {
    if(NULL == apikey_generate_delegated_credentials_v1_response_m_payload){
        return ;
    }
    if(apikey_generate_delegated_credentials_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "apikey_generate_delegated_credentials_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_generate_delegated_credentials_v1_response_m_payload->obj_apikey) {
        custom_apikey_free(apikey_generate_delegated_credentials_v1_response_m_payload->obj_apikey);
        apikey_generate_delegated_credentials_v1_response_m_payload->obj_apikey = NULL;
    }
    free(apikey_generate_delegated_credentials_v1_response_m_payload);
}

cJSON *apikey_generate_delegated_credentials_v1_response_m_payload_convertToJSON(apikey_generate_delegated_credentials_v1_response_m_payload_t *apikey_generate_delegated_credentials_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // apikey_generate_delegated_credentials_v1_response_m_payload->obj_apikey
    if (!apikey_generate_delegated_credentials_v1_response_m_payload->obj_apikey) {
        goto fail;
    }
    cJSON *obj_apikey_local_JSON = custom_apikey_convertToJSON(apikey_generate_delegated_credentials_v1_response_m_payload->obj_apikey);
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

apikey_generate_delegated_credentials_v1_response_m_payload_t *apikey_generate_delegated_credentials_v1_response_m_payload_parseFromJSON(cJSON *apikey_generate_delegated_credentials_v1_response_m_payloadJSON){

    apikey_generate_delegated_credentials_v1_response_m_payload_t *apikey_generate_delegated_credentials_v1_response_m_payload_local_var = NULL;

    // define the local variable for apikey_generate_delegated_credentials_v1_response_m_payload->obj_apikey
    custom_apikey_t *obj_apikey_local_nonprim = NULL;

    // apikey_generate_delegated_credentials_v1_response_m_payload->obj_apikey
    cJSON *obj_apikey = cJSON_GetObjectItemCaseSensitive(apikey_generate_delegated_credentials_v1_response_m_payloadJSON, "objApikey");
    if (cJSON_IsNull(obj_apikey)) {
        obj_apikey = NULL;
    }
    if (!obj_apikey) {
        goto end;
    }

    
    obj_apikey_local_nonprim = custom_apikey_parseFromJSON(obj_apikey); //nonprimitive


    apikey_generate_delegated_credentials_v1_response_m_payload_local_var = apikey_generate_delegated_credentials_v1_response_m_payload_create_internal (
        obj_apikey_local_nonprim
        );

    return apikey_generate_delegated_credentials_v1_response_m_payload_local_var;
end:
    if (obj_apikey_local_nonprim) {
        custom_apikey_free(obj_apikey_local_nonprim);
        obj_apikey_local_nonprim = NULL;
    }
    return NULL;

}
