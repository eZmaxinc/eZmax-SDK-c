#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptiontype_get_autocomplete_v2_response.h"



static inscriptiontype_get_autocomplete_v2_response_t *inscriptiontype_get_autocomplete_v2_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    inscriptiontype_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    inscriptiontype_get_autocomplete_v2_response_t *inscriptiontype_get_autocomplete_v2_response_local_var = malloc(sizeof(inscriptiontype_get_autocomplete_v2_response_t));
    if (!inscriptiontype_get_autocomplete_v2_response_local_var) {
        return NULL;
    }
    memset(inscriptiontype_get_autocomplete_v2_response_local_var, 0, sizeof(inscriptiontype_get_autocomplete_v2_response_t));
    inscriptiontype_get_autocomplete_v2_response_local_var->_library_owned = 1;
    inscriptiontype_get_autocomplete_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    inscriptiontype_get_autocomplete_v2_response_local_var->obj_debug = obj_debug;
    inscriptiontype_get_autocomplete_v2_response_local_var->m_payload = m_payload;
    return inscriptiontype_get_autocomplete_v2_response_local_var;
}

__attribute__((deprecated)) inscriptiontype_get_autocomplete_v2_response_t *inscriptiontype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    inscriptiontype_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    inscriptiontype_get_autocomplete_v2_response_t *result = inscriptiontype_get_autocomplete_v2_response_create_internal (
        obj_debug_payload,
        obj_debug,
        m_payload
        );
    if (!result) {
    }
    return result;
}

void inscriptiontype_get_autocomplete_v2_response_free(inscriptiontype_get_autocomplete_v2_response_t *inscriptiontype_get_autocomplete_v2_response) {
    if(NULL == inscriptiontype_get_autocomplete_v2_response){
        return ;
    }
    if(inscriptiontype_get_autocomplete_v2_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptiontype_get_autocomplete_v2_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptiontype_get_autocomplete_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(inscriptiontype_get_autocomplete_v2_response->obj_debug_payload);
        inscriptiontype_get_autocomplete_v2_response->obj_debug_payload = NULL;
    }
    if (inscriptiontype_get_autocomplete_v2_response->obj_debug) {
        common_response_obj_debug_free(inscriptiontype_get_autocomplete_v2_response->obj_debug);
        inscriptiontype_get_autocomplete_v2_response->obj_debug = NULL;
    }
    if (inscriptiontype_get_autocomplete_v2_response->m_payload) {
        inscriptiontype_get_autocomplete_v2_response_m_payload_free(inscriptiontype_get_autocomplete_v2_response->m_payload);
        inscriptiontype_get_autocomplete_v2_response->m_payload = NULL;
    }
    free(inscriptiontype_get_autocomplete_v2_response);
}

cJSON *inscriptiontype_get_autocomplete_v2_response_convertToJSON(inscriptiontype_get_autocomplete_v2_response_t *inscriptiontype_get_autocomplete_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // inscriptiontype_get_autocomplete_v2_response->obj_debug_payload
    if (!inscriptiontype_get_autocomplete_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(inscriptiontype_get_autocomplete_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inscriptiontype_get_autocomplete_v2_response->obj_debug
    if(inscriptiontype_get_autocomplete_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(inscriptiontype_get_autocomplete_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // inscriptiontype_get_autocomplete_v2_response->m_payload
    if (!inscriptiontype_get_autocomplete_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = inscriptiontype_get_autocomplete_v2_response_m_payload_convertToJSON(inscriptiontype_get_autocomplete_v2_response->m_payload);
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

inscriptiontype_get_autocomplete_v2_response_t *inscriptiontype_get_autocomplete_v2_response_parseFromJSON(cJSON *inscriptiontype_get_autocomplete_v2_responseJSON){

    inscriptiontype_get_autocomplete_v2_response_t *inscriptiontype_get_autocomplete_v2_response_local_var = NULL;

    // define the local variable for inscriptiontype_get_autocomplete_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for inscriptiontype_get_autocomplete_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for inscriptiontype_get_autocomplete_v2_response->m_payload
    inscriptiontype_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // inscriptiontype_get_autocomplete_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(inscriptiontype_get_autocomplete_v2_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // inscriptiontype_get_autocomplete_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(inscriptiontype_get_autocomplete_v2_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // inscriptiontype_get_autocomplete_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(inscriptiontype_get_autocomplete_v2_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = inscriptiontype_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive



    inscriptiontype_get_autocomplete_v2_response_local_var = inscriptiontype_get_autocomplete_v2_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    if (!inscriptiontype_get_autocomplete_v2_response_local_var) {
        goto end;
    }

    return inscriptiontype_get_autocomplete_v2_response_local_var;
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
        inscriptiontype_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
