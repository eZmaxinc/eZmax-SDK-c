#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_regenerate_v1_response_m_payload.h"



apikey_regenerate_v1_response_m_payload_t *apikey_regenerate_v1_response_m_payload_create(
    apikey_response_compound_t *obj_apikey
    ) {
    apikey_regenerate_v1_response_m_payload_t *apikey_regenerate_v1_response_m_payload_local_var = malloc(sizeof(apikey_regenerate_v1_response_m_payload_t));
    if (!apikey_regenerate_v1_response_m_payload_local_var) {
        return NULL;
    }
    apikey_regenerate_v1_response_m_payload_local_var->obj_apikey = obj_apikey;

    return apikey_regenerate_v1_response_m_payload_local_var;
}


void apikey_regenerate_v1_response_m_payload_free(apikey_regenerate_v1_response_m_payload_t *apikey_regenerate_v1_response_m_payload) {
    if(NULL == apikey_regenerate_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_regenerate_v1_response_m_payload->obj_apikey) {
        apikey_response_compound_free(apikey_regenerate_v1_response_m_payload->obj_apikey);
        apikey_regenerate_v1_response_m_payload->obj_apikey = NULL;
    }
    free(apikey_regenerate_v1_response_m_payload);
}

cJSON *apikey_regenerate_v1_response_m_payload_convertToJSON(apikey_regenerate_v1_response_m_payload_t *apikey_regenerate_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // apikey_regenerate_v1_response_m_payload->obj_apikey
    if (!apikey_regenerate_v1_response_m_payload->obj_apikey) {
        goto fail;
    }
    cJSON *obj_apikey_local_JSON = apikey_response_compound_convertToJSON(apikey_regenerate_v1_response_m_payload->obj_apikey);
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

apikey_regenerate_v1_response_m_payload_t *apikey_regenerate_v1_response_m_payload_parseFromJSON(cJSON *apikey_regenerate_v1_response_m_payloadJSON){

    apikey_regenerate_v1_response_m_payload_t *apikey_regenerate_v1_response_m_payload_local_var = NULL;

    // define the local variable for apikey_regenerate_v1_response_m_payload->obj_apikey
    apikey_response_compound_t *obj_apikey_local_nonprim = NULL;

    // apikey_regenerate_v1_response_m_payload->obj_apikey
    cJSON *obj_apikey = cJSON_GetObjectItemCaseSensitive(apikey_regenerate_v1_response_m_payloadJSON, "objApikey");
    if (!obj_apikey) {
        goto end;
    }

    
    obj_apikey_local_nonprim = apikey_response_compound_parseFromJSON(obj_apikey); //nonprimitive


    apikey_regenerate_v1_response_m_payload_local_var = apikey_regenerate_v1_response_m_payload_create (
        obj_apikey_local_nonprim
        );

    return apikey_regenerate_v1_response_m_payload_local_var;
end:
    if (obj_apikey_local_nonprim) {
        apikey_response_compound_free(obj_apikey_local_nonprim);
        obj_apikey_local_nonprim = NULL;
    }
    return NULL;

}
