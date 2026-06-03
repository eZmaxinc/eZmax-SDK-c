#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "inscriptionchecklist_get_autocomplete_v3_response.h"



static inscriptionchecklist_get_autocomplete_v3_response_t *inscriptionchecklist_get_autocomplete_v3_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    inscriptionchecklist_get_autocomplete_v3_response_m_payload_t *m_payload
    ) {
    inscriptionchecklist_get_autocomplete_v3_response_t *inscriptionchecklist_get_autocomplete_v3_response_local_var = malloc(sizeof(inscriptionchecklist_get_autocomplete_v3_response_t));
    if (!inscriptionchecklist_get_autocomplete_v3_response_local_var) {
        return NULL;
    }
    memset(inscriptionchecklist_get_autocomplete_v3_response_local_var, 0, sizeof(inscriptionchecklist_get_autocomplete_v3_response_t));
    inscriptionchecklist_get_autocomplete_v3_response_local_var->_library_owned = 1;
    inscriptionchecklist_get_autocomplete_v3_response_local_var->obj_debug_payload = obj_debug_payload;
    inscriptionchecklist_get_autocomplete_v3_response_local_var->obj_debug = obj_debug;
    inscriptionchecklist_get_autocomplete_v3_response_local_var->m_payload = m_payload;
    return inscriptionchecklist_get_autocomplete_v3_response_local_var;
}

__attribute__((deprecated)) inscriptionchecklist_get_autocomplete_v3_response_t *inscriptionchecklist_get_autocomplete_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    inscriptionchecklist_get_autocomplete_v3_response_m_payload_t *m_payload
    ) {
    inscriptionchecklist_get_autocomplete_v3_response_t *result = inscriptionchecklist_get_autocomplete_v3_response_create_internal (
        obj_debug_payload,
        obj_debug,
        m_payload
        );
    if (!result) {
    }
    return result;
}

void inscriptionchecklist_get_autocomplete_v3_response_free(inscriptionchecklist_get_autocomplete_v3_response_t *inscriptionchecklist_get_autocomplete_v3_response) {
    if(NULL == inscriptionchecklist_get_autocomplete_v3_response){
        return ;
    }
    if(inscriptionchecklist_get_autocomplete_v3_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "inscriptionchecklist_get_autocomplete_v3_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (inscriptionchecklist_get_autocomplete_v3_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(inscriptionchecklist_get_autocomplete_v3_response->obj_debug_payload);
        inscriptionchecklist_get_autocomplete_v3_response->obj_debug_payload = NULL;
    }
    if (inscriptionchecklist_get_autocomplete_v3_response->obj_debug) {
        common_response_obj_debug_free(inscriptionchecklist_get_autocomplete_v3_response->obj_debug);
        inscriptionchecklist_get_autocomplete_v3_response->obj_debug = NULL;
    }
    if (inscriptionchecklist_get_autocomplete_v3_response->m_payload) {
        inscriptionchecklist_get_autocomplete_v3_response_m_payload_free(inscriptionchecklist_get_autocomplete_v3_response->m_payload);
        inscriptionchecklist_get_autocomplete_v3_response->m_payload = NULL;
    }
    free(inscriptionchecklist_get_autocomplete_v3_response);
}

cJSON *inscriptionchecklist_get_autocomplete_v3_response_convertToJSON(inscriptionchecklist_get_autocomplete_v3_response_t *inscriptionchecklist_get_autocomplete_v3_response) {
    cJSON *item = cJSON_CreateObject();

    // inscriptionchecklist_get_autocomplete_v3_response->obj_debug_payload
    if (!inscriptionchecklist_get_autocomplete_v3_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(inscriptionchecklist_get_autocomplete_v3_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // inscriptionchecklist_get_autocomplete_v3_response->obj_debug
    if(inscriptionchecklist_get_autocomplete_v3_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(inscriptionchecklist_get_autocomplete_v3_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // inscriptionchecklist_get_autocomplete_v3_response->m_payload
    if (!inscriptionchecklist_get_autocomplete_v3_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = inscriptionchecklist_get_autocomplete_v3_response_m_payload_convertToJSON(inscriptionchecklist_get_autocomplete_v3_response->m_payload);
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

inscriptionchecklist_get_autocomplete_v3_response_t *inscriptionchecklist_get_autocomplete_v3_response_parseFromJSON(cJSON *inscriptionchecklist_get_autocomplete_v3_responseJSON){

    inscriptionchecklist_get_autocomplete_v3_response_t *inscriptionchecklist_get_autocomplete_v3_response_local_var = NULL;

    // define the local variable for inscriptionchecklist_get_autocomplete_v3_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for inscriptionchecklist_get_autocomplete_v3_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for inscriptionchecklist_get_autocomplete_v3_response->m_payload
    inscriptionchecklist_get_autocomplete_v3_response_m_payload_t *m_payload_local_nonprim = NULL;

    // inscriptionchecklist_get_autocomplete_v3_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(inscriptionchecklist_get_autocomplete_v3_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // inscriptionchecklist_get_autocomplete_v3_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(inscriptionchecklist_get_autocomplete_v3_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // inscriptionchecklist_get_autocomplete_v3_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(inscriptionchecklist_get_autocomplete_v3_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = inscriptionchecklist_get_autocomplete_v3_response_m_payload_parseFromJSON(m_payload); //nonprimitive



    inscriptionchecklist_get_autocomplete_v3_response_local_var = inscriptionchecklist_get_autocomplete_v3_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    if (!inscriptionchecklist_get_autocomplete_v3_response_local_var) {
        goto end;
    }

    return inscriptionchecklist_get_autocomplete_v3_response_local_var;
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
        inscriptionchecklist_get_autocomplete_v3_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
