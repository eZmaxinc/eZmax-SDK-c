#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_get_current_v1_response.h"



static activesession_get_current_v1_response_t *activesession_get_current_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    activesession_get_current_v1_response_m_payload_t *m_payload
    ) {
    activesession_get_current_v1_response_t *activesession_get_current_v1_response_local_var = malloc(sizeof(activesession_get_current_v1_response_t));
    if (!activesession_get_current_v1_response_local_var) {
        return NULL;
    }
    activesession_get_current_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    activesession_get_current_v1_response_local_var->obj_debug = obj_debug;
    activesession_get_current_v1_response_local_var->m_payload = m_payload;

    activesession_get_current_v1_response_local_var->_library_owned = 1;
    return activesession_get_current_v1_response_local_var;
}

__attribute__((deprecated)) activesession_get_current_v1_response_t *activesession_get_current_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    activesession_get_current_v1_response_m_payload_t *m_payload
    ) {
    return activesession_get_current_v1_response_create_internal (
        obj_debug_payload,
        obj_debug,
        m_payload
        );
}

void activesession_get_current_v1_response_free(activesession_get_current_v1_response_t *activesession_get_current_v1_response) {
    if(NULL == activesession_get_current_v1_response){
        return ;
    }
    if(activesession_get_current_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "activesession_get_current_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_get_current_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(activesession_get_current_v1_response->obj_debug_payload);
        activesession_get_current_v1_response->obj_debug_payload = NULL;
    }
    if (activesession_get_current_v1_response->obj_debug) {
        common_response_obj_debug_free(activesession_get_current_v1_response->obj_debug);
        activesession_get_current_v1_response->obj_debug = NULL;
    }
    if (activesession_get_current_v1_response->m_payload) {
        activesession_get_current_v1_response_m_payload_free(activesession_get_current_v1_response->m_payload);
        activesession_get_current_v1_response->m_payload = NULL;
    }
    free(activesession_get_current_v1_response);
}

cJSON *activesession_get_current_v1_response_convertToJSON(activesession_get_current_v1_response_t *activesession_get_current_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // activesession_get_current_v1_response->obj_debug_payload
    if (!activesession_get_current_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(activesession_get_current_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // activesession_get_current_v1_response->obj_debug
    if(activesession_get_current_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(activesession_get_current_v1_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // activesession_get_current_v1_response->m_payload
    if (!activesession_get_current_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = activesession_get_current_v1_response_m_payload_convertToJSON(activesession_get_current_v1_response->m_payload);
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

activesession_get_current_v1_response_t *activesession_get_current_v1_response_parseFromJSON(cJSON *activesession_get_current_v1_responseJSON){

    activesession_get_current_v1_response_t *activesession_get_current_v1_response_local_var = NULL;

    // define the local variable for activesession_get_current_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for activesession_get_current_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for activesession_get_current_v1_response->m_payload
    activesession_get_current_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // activesession_get_current_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // activesession_get_current_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // activesession_get_current_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = activesession_get_current_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    activesession_get_current_v1_response_local_var = activesession_get_current_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return activesession_get_current_v1_response_local_var;
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
        activesession_get_current_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
