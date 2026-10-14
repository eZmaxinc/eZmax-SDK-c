#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "adjustmentreminder_get_list_v1_response.h"



static adjustmentreminder_get_list_v1_response_t *adjustmentreminder_get_list_v1_response_create_internal(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    adjustmentreminder_get_list_v1_response_m_payload_t *m_payload
    ) {
    adjustmentreminder_get_list_v1_response_t *adjustmentreminder_get_list_v1_response_local_var = malloc(sizeof(adjustmentreminder_get_list_v1_response_t));
    if (!adjustmentreminder_get_list_v1_response_local_var) {
        return NULL;
    }
    memset(adjustmentreminder_get_list_v1_response_local_var, 0, sizeof(adjustmentreminder_get_list_v1_response_t));
    adjustmentreminder_get_list_v1_response_local_var->_library_owned = 1;
    adjustmentreminder_get_list_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    adjustmentreminder_get_list_v1_response_local_var->obj_debug = obj_debug;
    adjustmentreminder_get_list_v1_response_local_var->m_payload = m_payload;
    return adjustmentreminder_get_list_v1_response_local_var;
}

__attribute__((deprecated)) adjustmentreminder_get_list_v1_response_t *adjustmentreminder_get_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    adjustmentreminder_get_list_v1_response_m_payload_t *m_payload
    ) {
    adjustmentreminder_get_list_v1_response_t *result = adjustmentreminder_get_list_v1_response_create_internal (
        obj_debug_payload,
        obj_debug,
        m_payload
        );
    if (!result) {
    }
    return result;
}

void adjustmentreminder_get_list_v1_response_free(adjustmentreminder_get_list_v1_response_t *adjustmentreminder_get_list_v1_response) {
    if(NULL == adjustmentreminder_get_list_v1_response){
        return ;
    }
    if(adjustmentreminder_get_list_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "adjustmentreminder_get_list_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (adjustmentreminder_get_list_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_get_list_free(adjustmentreminder_get_list_v1_response->obj_debug_payload);
        adjustmentreminder_get_list_v1_response->obj_debug_payload = NULL;
    }
    if (adjustmentreminder_get_list_v1_response->obj_debug) {
        common_response_obj_debug_free(adjustmentreminder_get_list_v1_response->obj_debug);
        adjustmentreminder_get_list_v1_response->obj_debug = NULL;
    }
    if (adjustmentreminder_get_list_v1_response->m_payload) {
        adjustmentreminder_get_list_v1_response_m_payload_free(adjustmentreminder_get_list_v1_response->m_payload);
        adjustmentreminder_get_list_v1_response->m_payload = NULL;
    }
    free(adjustmentreminder_get_list_v1_response);
}

cJSON *adjustmentreminder_get_list_v1_response_convertToJSON(adjustmentreminder_get_list_v1_response_t *adjustmentreminder_get_list_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // adjustmentreminder_get_list_v1_response->obj_debug_payload
    if (!adjustmentreminder_get_list_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_get_list_convertToJSON(adjustmentreminder_get_list_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // adjustmentreminder_get_list_v1_response->obj_debug
    if(adjustmentreminder_get_list_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(adjustmentreminder_get_list_v1_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // adjustmentreminder_get_list_v1_response->m_payload
    if (!adjustmentreminder_get_list_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = adjustmentreminder_get_list_v1_response_m_payload_convertToJSON(adjustmentreminder_get_list_v1_response->m_payload);
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

adjustmentreminder_get_list_v1_response_t *adjustmentreminder_get_list_v1_response_parseFromJSON(cJSON *adjustmentreminder_get_list_v1_responseJSON){

    adjustmentreminder_get_list_v1_response_t *adjustmentreminder_get_list_v1_response_local_var = NULL;

    // define the local variable for adjustmentreminder_get_list_v1_response->obj_debug_payload
    common_response_obj_debug_payload_get_list_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for adjustmentreminder_get_list_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for adjustmentreminder_get_list_v1_response->m_payload
    adjustmentreminder_get_list_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // adjustmentreminder_get_list_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_get_list_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_get_list_parseFromJSON(obj_debug_payload); //nonprimitive

    // adjustmentreminder_get_list_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_get_list_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // adjustmentreminder_get_list_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_get_list_v1_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = adjustmentreminder_get_list_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive



    adjustmentreminder_get_list_v1_response_local_var = adjustmentreminder_get_list_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    if (!adjustmentreminder_get_list_v1_response_local_var) {
        goto end;
    }

    return adjustmentreminder_get_list_v1_response_local_var;
end:
    if (obj_debug_payload_local_nonprim) {
        common_response_obj_debug_payload_get_list_free(obj_debug_payload_local_nonprim);
        obj_debug_payload_local_nonprim = NULL;
    }
    if (obj_debug_local_nonprim) {
        common_response_obj_debug_free(obj_debug_local_nonprim);
        obj_debug_local_nonprim = NULL;
    }
    if (m_payload_local_nonprim) {
        adjustmentreminder_get_list_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
