#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_get_object_v3_response.h"



static ezsigntemplatesignature_get_object_v3_response_t *ezsigntemplatesignature_get_object_v3_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatesignature_get_object_v3_response_m_payload_t *m_payload
    ) {
    ezsigntemplatesignature_get_object_v3_response_t *ezsigntemplatesignature_get_object_v3_response_local_var = malloc(sizeof(ezsigntemplatesignature_get_object_v3_response_t));
    if (!ezsigntemplatesignature_get_object_v3_response_local_var) {
        return NULL;
    }
    ezsigntemplatesignature_get_object_v3_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplatesignature_get_object_v3_response_local_var->obj_debug = obj_debug;
    ezsigntemplatesignature_get_object_v3_response_local_var->m_payload = m_payload;

    ezsigntemplatesignature_get_object_v3_response_local_var->_library_owned = 1;
    return ezsigntemplatesignature_get_object_v3_response_local_var;
}

__attribute__((deprecated)) ezsigntemplatesignature_get_object_v3_response_t *ezsigntemplatesignature_get_object_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigntemplatesignature_get_object_v3_response_m_payload_t *m_payload
    ) {
    return ezsigntemplatesignature_get_object_v3_response_create_internal (
        obj_debug_payload,
        obj_debug,
        m_payload
        );
}

void ezsigntemplatesignature_get_object_v3_response_free(ezsigntemplatesignature_get_object_v3_response_t *ezsigntemplatesignature_get_object_v3_response) {
    if(NULL == ezsigntemplatesignature_get_object_v3_response){
        return ;
    }
    if(ezsigntemplatesignature_get_object_v3_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesignature_get_object_v3_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_get_object_v3_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplatesignature_get_object_v3_response->obj_debug_payload);
        ezsigntemplatesignature_get_object_v3_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplatesignature_get_object_v3_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplatesignature_get_object_v3_response->obj_debug);
        ezsigntemplatesignature_get_object_v3_response->obj_debug = NULL;
    }
    if (ezsigntemplatesignature_get_object_v3_response->m_payload) {
        ezsigntemplatesignature_get_object_v3_response_m_payload_free(ezsigntemplatesignature_get_object_v3_response->m_payload);
        ezsigntemplatesignature_get_object_v3_response->m_payload = NULL;
    }
    free(ezsigntemplatesignature_get_object_v3_response);
}

cJSON *ezsigntemplatesignature_get_object_v3_response_convertToJSON(ezsigntemplatesignature_get_object_v3_response_t *ezsigntemplatesignature_get_object_v3_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignature_get_object_v3_response->obj_debug_payload
    if (!ezsigntemplatesignature_get_object_v3_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplatesignature_get_object_v3_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatesignature_get_object_v3_response->obj_debug
    if(ezsigntemplatesignature_get_object_v3_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplatesignature_get_object_v3_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplatesignature_get_object_v3_response->m_payload
    if (!ezsigntemplatesignature_get_object_v3_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplatesignature_get_object_v3_response_m_payload_convertToJSON(ezsigntemplatesignature_get_object_v3_response->m_payload);
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

ezsigntemplatesignature_get_object_v3_response_t *ezsigntemplatesignature_get_object_v3_response_parseFromJSON(cJSON *ezsigntemplatesignature_get_object_v3_responseJSON){

    ezsigntemplatesignature_get_object_v3_response_t *ezsigntemplatesignature_get_object_v3_response_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_get_object_v3_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_get_object_v3_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_get_object_v3_response->m_payload
    ezsigntemplatesignature_get_object_v3_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigntemplatesignature_get_object_v3_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v3_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsigntemplatesignature_get_object_v3_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v3_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // ezsigntemplatesignature_get_object_v3_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v3_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplatesignature_get_object_v3_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigntemplatesignature_get_object_v3_response_local_var = ezsigntemplatesignature_get_object_v3_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return ezsigntemplatesignature_get_object_v3_response_local_var;
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
        ezsigntemplatesignature_get_object_v3_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
