#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_get_object_v3_response.h"



signature_get_object_v3_response_t *signature_get_object_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    signature_get_object_v3_response_m_payload_t *m_payload
    ) {
    signature_get_object_v3_response_t *signature_get_object_v3_response_local_var = malloc(sizeof(signature_get_object_v3_response_t));
    if (!signature_get_object_v3_response_local_var) {
        return NULL;
    }
    signature_get_object_v3_response_local_var->obj_debug_payload = obj_debug_payload;
    signature_get_object_v3_response_local_var->obj_debug = obj_debug;
    signature_get_object_v3_response_local_var->m_payload = m_payload;

    return signature_get_object_v3_response_local_var;
}


void signature_get_object_v3_response_free(signature_get_object_v3_response_t *signature_get_object_v3_response) {
    if(NULL == signature_get_object_v3_response){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_get_object_v3_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(signature_get_object_v3_response->obj_debug_payload);
        signature_get_object_v3_response->obj_debug_payload = NULL;
    }
    if (signature_get_object_v3_response->obj_debug) {
        common_response_obj_debug_free(signature_get_object_v3_response->obj_debug);
        signature_get_object_v3_response->obj_debug = NULL;
    }
    if (signature_get_object_v3_response->m_payload) {
        signature_get_object_v3_response_m_payload_free(signature_get_object_v3_response->m_payload);
        signature_get_object_v3_response->m_payload = NULL;
    }
    free(signature_get_object_v3_response);
}

cJSON *signature_get_object_v3_response_convertToJSON(signature_get_object_v3_response_t *signature_get_object_v3_response) {
    cJSON *item = cJSON_CreateObject();

    // signature_get_object_v3_response->obj_debug_payload
    if (!signature_get_object_v3_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(signature_get_object_v3_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // signature_get_object_v3_response->obj_debug
    if(signature_get_object_v3_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(signature_get_object_v3_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // signature_get_object_v3_response->m_payload
    if (!signature_get_object_v3_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = signature_get_object_v3_response_m_payload_convertToJSON(signature_get_object_v3_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
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

signature_get_object_v3_response_t *signature_get_object_v3_response_parseFromJSON(cJSON *signature_get_object_v3_responseJSON){

    signature_get_object_v3_response_t *signature_get_object_v3_response_local_var = NULL;

    // define the local variable for signature_get_object_v3_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for signature_get_object_v3_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for signature_get_object_v3_response->m_payload
    signature_get_object_v3_response_m_payload_t *m_payload_local_nonprim = NULL;

    // signature_get_object_v3_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(signature_get_object_v3_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // signature_get_object_v3_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(signature_get_object_v3_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // signature_get_object_v3_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(signature_get_object_v3_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = signature_get_object_v3_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    signature_get_object_v3_response_local_var = signature_get_object_v3_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return signature_get_object_v3_response_local_var;
end:
    if (obj_debug_payload_local_nonprim) {
        common_response_obj_debug_payload_free(obj_debug_payload_local_nonprim);
        obj_debug_payload_local_nonprim = NULL;
    }
    if (obj_debug_local_nonprim) {
        common_response_obj_debug_free(obj_debug_local_nonprim);
        obj_debug_local_nonprim = NULL;
    }
    if (m_payload_local_nonprim) {
        signature_get_object_v3_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
