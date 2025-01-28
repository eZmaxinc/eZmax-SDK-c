#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "taxassignment_get_autocomplete_v2_response.h"



static taxassignment_get_autocomplete_v2_response_t *taxassignment_get_autocomplete_v2_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    taxassignment_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    taxassignment_get_autocomplete_v2_response_t *taxassignment_get_autocomplete_v2_response_local_var = malloc(sizeof(taxassignment_get_autocomplete_v2_response_t));
    if (!taxassignment_get_autocomplete_v2_response_local_var) {
        return NULL;
    }
    taxassignment_get_autocomplete_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    taxassignment_get_autocomplete_v2_response_local_var->obj_debug = obj_debug;
    taxassignment_get_autocomplete_v2_response_local_var->m_payload = m_payload;

    taxassignment_get_autocomplete_v2_response_local_var->_library_owned = 1;
    return taxassignment_get_autocomplete_v2_response_local_var;
}

__attribute__((deprecated)) taxassignment_get_autocomplete_v2_response_t *taxassignment_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    taxassignment_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    return taxassignment_get_autocomplete_v2_response_create_internal (
        obj_debug_payload,
        obj_debug,
        m_payload
        );
}

void taxassignment_get_autocomplete_v2_response_free(taxassignment_get_autocomplete_v2_response_t *taxassignment_get_autocomplete_v2_response) {
    if(NULL == taxassignment_get_autocomplete_v2_response){
        return ;
    }
    if(taxassignment_get_autocomplete_v2_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "taxassignment_get_autocomplete_v2_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (taxassignment_get_autocomplete_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(taxassignment_get_autocomplete_v2_response->obj_debug_payload);
        taxassignment_get_autocomplete_v2_response->obj_debug_payload = NULL;
    }
    if (taxassignment_get_autocomplete_v2_response->obj_debug) {
        common_response_obj_debug_free(taxassignment_get_autocomplete_v2_response->obj_debug);
        taxassignment_get_autocomplete_v2_response->obj_debug = NULL;
    }
    if (taxassignment_get_autocomplete_v2_response->m_payload) {
        taxassignment_get_autocomplete_v2_response_m_payload_free(taxassignment_get_autocomplete_v2_response->m_payload);
        taxassignment_get_autocomplete_v2_response->m_payload = NULL;
    }
    free(taxassignment_get_autocomplete_v2_response);
}

cJSON *taxassignment_get_autocomplete_v2_response_convertToJSON(taxassignment_get_autocomplete_v2_response_t *taxassignment_get_autocomplete_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // taxassignment_get_autocomplete_v2_response->obj_debug_payload
    if (!taxassignment_get_autocomplete_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(taxassignment_get_autocomplete_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // taxassignment_get_autocomplete_v2_response->obj_debug
    if(taxassignment_get_autocomplete_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(taxassignment_get_autocomplete_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // taxassignment_get_autocomplete_v2_response->m_payload
    if (!taxassignment_get_autocomplete_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = taxassignment_get_autocomplete_v2_response_m_payload_convertToJSON(taxassignment_get_autocomplete_v2_response->m_payload);
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

taxassignment_get_autocomplete_v2_response_t *taxassignment_get_autocomplete_v2_response_parseFromJSON(cJSON *taxassignment_get_autocomplete_v2_responseJSON){

    taxassignment_get_autocomplete_v2_response_t *taxassignment_get_autocomplete_v2_response_local_var = NULL;

    // define the local variable for taxassignment_get_autocomplete_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for taxassignment_get_autocomplete_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for taxassignment_get_autocomplete_v2_response->m_payload
    taxassignment_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // taxassignment_get_autocomplete_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(taxassignment_get_autocomplete_v2_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // taxassignment_get_autocomplete_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(taxassignment_get_autocomplete_v2_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // taxassignment_get_autocomplete_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(taxassignment_get_autocomplete_v2_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = taxassignment_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    taxassignment_get_autocomplete_v2_response_local_var = taxassignment_get_autocomplete_v2_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return taxassignment_get_autocomplete_v2_response_local_var;
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
        taxassignment_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
