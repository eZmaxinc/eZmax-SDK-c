#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "realestateassociation_get_autocomplete_v2_response.h"



static realestateassociation_get_autocomplete_v2_response_t *realestateassociation_get_autocomplete_v2_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    realestateassociation_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    realestateassociation_get_autocomplete_v2_response_t *realestateassociation_get_autocomplete_v2_response_local_var = malloc(sizeof(realestateassociation_get_autocomplete_v2_response_t));
    if (!realestateassociation_get_autocomplete_v2_response_local_var) {
        return NULL;
    }
    realestateassociation_get_autocomplete_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    realestateassociation_get_autocomplete_v2_response_local_var->obj_debug = obj_debug;
    realestateassociation_get_autocomplete_v2_response_local_var->m_payload = m_payload;

    realestateassociation_get_autocomplete_v2_response_local_var->_library_owned = 1;
    return realestateassociation_get_autocomplete_v2_response_local_var;
}

__attribute__((deprecated)) realestateassociation_get_autocomplete_v2_response_t *realestateassociation_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    realestateassociation_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    return realestateassociation_get_autocomplete_v2_response_create_internal (
        obj_debug_payload,
        obj_debug,
        m_payload
        );
}

void realestateassociation_get_autocomplete_v2_response_free(realestateassociation_get_autocomplete_v2_response_t *realestateassociation_get_autocomplete_v2_response) {
    if(NULL == realestateassociation_get_autocomplete_v2_response){
        return ;
    }
    if(realestateassociation_get_autocomplete_v2_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "realestateassociation_get_autocomplete_v2_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (realestateassociation_get_autocomplete_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(realestateassociation_get_autocomplete_v2_response->obj_debug_payload);
        realestateassociation_get_autocomplete_v2_response->obj_debug_payload = NULL;
    }
    if (realestateassociation_get_autocomplete_v2_response->obj_debug) {
        common_response_obj_debug_free(realestateassociation_get_autocomplete_v2_response->obj_debug);
        realestateassociation_get_autocomplete_v2_response->obj_debug = NULL;
    }
    if (realestateassociation_get_autocomplete_v2_response->m_payload) {
        realestateassociation_get_autocomplete_v2_response_m_payload_free(realestateassociation_get_autocomplete_v2_response->m_payload);
        realestateassociation_get_autocomplete_v2_response->m_payload = NULL;
    }
    free(realestateassociation_get_autocomplete_v2_response);
}

cJSON *realestateassociation_get_autocomplete_v2_response_convertToJSON(realestateassociation_get_autocomplete_v2_response_t *realestateassociation_get_autocomplete_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // realestateassociation_get_autocomplete_v2_response->obj_debug_payload
    if (!realestateassociation_get_autocomplete_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(realestateassociation_get_autocomplete_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // realestateassociation_get_autocomplete_v2_response->obj_debug
    if(realestateassociation_get_autocomplete_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(realestateassociation_get_autocomplete_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // realestateassociation_get_autocomplete_v2_response->m_payload
    if (!realestateassociation_get_autocomplete_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = realestateassociation_get_autocomplete_v2_response_m_payload_convertToJSON(realestateassociation_get_autocomplete_v2_response->m_payload);
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

realestateassociation_get_autocomplete_v2_response_t *realestateassociation_get_autocomplete_v2_response_parseFromJSON(cJSON *realestateassociation_get_autocomplete_v2_responseJSON){

    realestateassociation_get_autocomplete_v2_response_t *realestateassociation_get_autocomplete_v2_response_local_var = NULL;

    // define the local variable for realestateassociation_get_autocomplete_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for realestateassociation_get_autocomplete_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for realestateassociation_get_autocomplete_v2_response->m_payload
    realestateassociation_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // realestateassociation_get_autocomplete_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(realestateassociation_get_autocomplete_v2_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // realestateassociation_get_autocomplete_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(realestateassociation_get_autocomplete_v2_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // realestateassociation_get_autocomplete_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(realestateassociation_get_autocomplete_v2_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = realestateassociation_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    realestateassociation_get_autocomplete_v2_response_local_var = realestateassociation_get_autocomplete_v2_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return realestateassociation_get_autocomplete_v2_response_local_var;
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
        realestateassociation_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
