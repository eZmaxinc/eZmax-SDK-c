#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxproduct_get_autocomplete_v2_response.h"



static ezmaxproduct_get_autocomplete_v2_response_t *ezmaxproduct_get_autocomplete_v2_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezmaxproduct_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    ezmaxproduct_get_autocomplete_v2_response_t *ezmaxproduct_get_autocomplete_v2_response_local_var = malloc(sizeof(ezmaxproduct_get_autocomplete_v2_response_t));
    if (!ezmaxproduct_get_autocomplete_v2_response_local_var) {
        return NULL;
    }
    ezmaxproduct_get_autocomplete_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    ezmaxproduct_get_autocomplete_v2_response_local_var->obj_debug = obj_debug;
    ezmaxproduct_get_autocomplete_v2_response_local_var->m_payload = m_payload;

    ezmaxproduct_get_autocomplete_v2_response_local_var->_library_owned = 1;
    return ezmaxproduct_get_autocomplete_v2_response_local_var;
}

__attribute__((deprecated)) ezmaxproduct_get_autocomplete_v2_response_t *ezmaxproduct_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezmaxproduct_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    return ezmaxproduct_get_autocomplete_v2_response_create_internal (
        obj_debug_payload,
        obj_debug,
        m_payload
        );
}

void ezmaxproduct_get_autocomplete_v2_response_free(ezmaxproduct_get_autocomplete_v2_response_t *ezmaxproduct_get_autocomplete_v2_response) {
    if(NULL == ezmaxproduct_get_autocomplete_v2_response){
        return ;
    }
    if(ezmaxproduct_get_autocomplete_v2_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxproduct_get_autocomplete_v2_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxproduct_get_autocomplete_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezmaxproduct_get_autocomplete_v2_response->obj_debug_payload);
        ezmaxproduct_get_autocomplete_v2_response->obj_debug_payload = NULL;
    }
    if (ezmaxproduct_get_autocomplete_v2_response->obj_debug) {
        common_response_obj_debug_free(ezmaxproduct_get_autocomplete_v2_response->obj_debug);
        ezmaxproduct_get_autocomplete_v2_response->obj_debug = NULL;
    }
    if (ezmaxproduct_get_autocomplete_v2_response->m_payload) {
        ezmaxproduct_get_autocomplete_v2_response_m_payload_free(ezmaxproduct_get_autocomplete_v2_response->m_payload);
        ezmaxproduct_get_autocomplete_v2_response->m_payload = NULL;
    }
    free(ezmaxproduct_get_autocomplete_v2_response);
}

cJSON *ezmaxproduct_get_autocomplete_v2_response_convertToJSON(ezmaxproduct_get_autocomplete_v2_response_t *ezmaxproduct_get_autocomplete_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxproduct_get_autocomplete_v2_response->obj_debug_payload
    if (!ezmaxproduct_get_autocomplete_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezmaxproduct_get_autocomplete_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezmaxproduct_get_autocomplete_v2_response->obj_debug
    if(ezmaxproduct_get_autocomplete_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezmaxproduct_get_autocomplete_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezmaxproduct_get_autocomplete_v2_response->m_payload
    if (!ezmaxproduct_get_autocomplete_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezmaxproduct_get_autocomplete_v2_response_m_payload_convertToJSON(ezmaxproduct_get_autocomplete_v2_response->m_payload);
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

ezmaxproduct_get_autocomplete_v2_response_t *ezmaxproduct_get_autocomplete_v2_response_parseFromJSON(cJSON *ezmaxproduct_get_autocomplete_v2_responseJSON){

    ezmaxproduct_get_autocomplete_v2_response_t *ezmaxproduct_get_autocomplete_v2_response_local_var = NULL;

    // define the local variable for ezmaxproduct_get_autocomplete_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezmaxproduct_get_autocomplete_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for ezmaxproduct_get_autocomplete_v2_response->m_payload
    ezmaxproduct_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezmaxproduct_get_autocomplete_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezmaxproduct_get_autocomplete_v2_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezmaxproduct_get_autocomplete_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezmaxproduct_get_autocomplete_v2_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // ezmaxproduct_get_autocomplete_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezmaxproduct_get_autocomplete_v2_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezmaxproduct_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezmaxproduct_get_autocomplete_v2_response_local_var = ezmaxproduct_get_autocomplete_v2_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return ezmaxproduct_get_autocomplete_v2_response_local_var;
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
        ezmaxproduct_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
