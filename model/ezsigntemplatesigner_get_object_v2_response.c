#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_get_object_v2_response.h"



ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response_create(
    ezsigntemplatesigner_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response_local_var = malloc(sizeof(ezsigntemplatesigner_get_object_v2_response_t));
    if (!ezsigntemplatesigner_get_object_v2_response_local_var) {
        return NULL;
    }
    ezsigntemplatesigner_get_object_v2_response_local_var->m_payload = m_payload;
    ezsigntemplatesigner_get_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplatesigner_get_object_v2_response_local_var->obj_debug = obj_debug;

    return ezsigntemplatesigner_get_object_v2_response_local_var;
}


void ezsigntemplatesigner_get_object_v2_response_free(ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response) {
    if(NULL == ezsigntemplatesigner_get_object_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_get_object_v2_response->m_payload) {
        ezsigntemplatesigner_get_object_v2_response_m_payload_free(ezsigntemplatesigner_get_object_v2_response->m_payload);
        ezsigntemplatesigner_get_object_v2_response->m_payload = NULL;
    }
    if (ezsigntemplatesigner_get_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplatesigner_get_object_v2_response->obj_debug_payload);
        ezsigntemplatesigner_get_object_v2_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplatesigner_get_object_v2_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplatesigner_get_object_v2_response->obj_debug);
        ezsigntemplatesigner_get_object_v2_response->obj_debug = NULL;
    }
    free(ezsigntemplatesigner_get_object_v2_response);
}

cJSON *ezsigntemplatesigner_get_object_v2_response_convertToJSON(ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_get_object_v2_response->m_payload
    if (!ezsigntemplatesigner_get_object_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplatesigner_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatesigner_get_object_v2_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatesigner_get_object_v2_response->obj_debug_payload
    if(ezsigntemplatesigner_get_object_v2_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplatesigner_get_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplatesigner_get_object_v2_response->obj_debug
    if(ezsigntemplatesigner_get_object_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplatesigner_get_object_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplatesigner_get_object_v2_responseJSON){

    ezsigntemplatesigner_get_object_v2_response_t *ezsigntemplatesigner_get_object_v2_response_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_get_object_v2_response->m_payload
    ezsigntemplatesigner_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesigner_get_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesigner_get_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigntemplatesigner_get_object_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_get_object_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplatesigner_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive

    // ezsigntemplatesigner_get_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_get_object_v2_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsigntemplatesigner_get_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_get_object_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigntemplatesigner_get_object_v2_response_local_var = ezsigntemplatesigner_get_object_v2_response_create (
        m_payload_local_nonprim,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigntemplatesigner_get_object_v2_response_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplatesigner_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    if (obj_debug_payload_local_nonprim) {
        common_response_obj_debug_payload_free(obj_debug_payload_local_nonprim);
        obj_debug_payload_local_nonprim = NULL;
    }
    if (obj_debug_local_nonprim) {
        common_response_obj_debug_free(obj_debug_local_nonprim);
        obj_debug_local_nonprim = NULL;
    }
    return NULL;

}
