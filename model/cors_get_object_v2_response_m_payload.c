#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cors_get_object_v2_response_m_payload.h"



static cors_get_object_v2_response_m_payload_t *cors_get_object_v2_response_m_payload_create_internal(
    cors_response_compound_t *obj_cors
    ) {
    cors_get_object_v2_response_m_payload_t *cors_get_object_v2_response_m_payload_local_var = malloc(sizeof(cors_get_object_v2_response_m_payload_t));
    if (!cors_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    cors_get_object_v2_response_m_payload_local_var->obj_cors = obj_cors;

    cors_get_object_v2_response_m_payload_local_var->_library_owned = 1;
    return cors_get_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) cors_get_object_v2_response_m_payload_t *cors_get_object_v2_response_m_payload_create(
    cors_response_compound_t *obj_cors
    ) {
    return cors_get_object_v2_response_m_payload_create_internal (
        obj_cors
        );
}

void cors_get_object_v2_response_m_payload_free(cors_get_object_v2_response_m_payload_t *cors_get_object_v2_response_m_payload) {
    if(NULL == cors_get_object_v2_response_m_payload){
        return ;
    }
    if(cors_get_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "cors_get_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (cors_get_object_v2_response_m_payload->obj_cors) {
        cors_response_compound_free(cors_get_object_v2_response_m_payload->obj_cors);
        cors_get_object_v2_response_m_payload->obj_cors = NULL;
    }
    free(cors_get_object_v2_response_m_payload);
}

cJSON *cors_get_object_v2_response_m_payload_convertToJSON(cors_get_object_v2_response_m_payload_t *cors_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // cors_get_object_v2_response_m_payload->obj_cors
    if (!cors_get_object_v2_response_m_payload->obj_cors) {
        goto fail;
    }
    cJSON *obj_cors_local_JSON = cors_response_compound_convertToJSON(cors_get_object_v2_response_m_payload->obj_cors);
    if(obj_cors_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCors", obj_cors_local_JSON);
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

cors_get_object_v2_response_m_payload_t *cors_get_object_v2_response_m_payload_parseFromJSON(cJSON *cors_get_object_v2_response_m_payloadJSON){

    cors_get_object_v2_response_m_payload_t *cors_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for cors_get_object_v2_response_m_payload->obj_cors
    cors_response_compound_t *obj_cors_local_nonprim = NULL;

    // cors_get_object_v2_response_m_payload->obj_cors
    cJSON *obj_cors = cJSON_GetObjectItemCaseSensitive(cors_get_object_v2_response_m_payloadJSON, "objCors");
    if (cJSON_IsNull(obj_cors)) {
        obj_cors = NULL;
    }
    if (!obj_cors) {
        goto end;
    }

    
    obj_cors_local_nonprim = cors_response_compound_parseFromJSON(obj_cors); //nonprimitive


    cors_get_object_v2_response_m_payload_local_var = cors_get_object_v2_response_m_payload_create_internal (
        obj_cors_local_nonprim
        );

    return cors_get_object_v2_response_m_payload_local_var;
end:
    if (obj_cors_local_nonprim) {
        cors_response_compound_free(obj_cors_local_nonprim);
        obj_cors_local_nonprim = NULL;
    }
    return NULL;

}
