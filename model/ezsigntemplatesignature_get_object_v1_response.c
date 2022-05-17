#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_get_object_v1_response.h"



ezsigntemplatesignature_get_object_v1_response_t *ezsigntemplatesignature_get_object_v1_response_create(
    ezsigntemplatesignature_get_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigntemplatesignature_get_object_v1_response_t *ezsigntemplatesignature_get_object_v1_response_local_var = malloc(sizeof(ezsigntemplatesignature_get_object_v1_response_t));
    if (!ezsigntemplatesignature_get_object_v1_response_local_var) {
        return NULL;
    }
    ezsigntemplatesignature_get_object_v1_response_local_var->m_payload = m_payload;
    ezsigntemplatesignature_get_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplatesignature_get_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsigntemplatesignature_get_object_v1_response_local_var;
}


void ezsigntemplatesignature_get_object_v1_response_free(ezsigntemplatesignature_get_object_v1_response_t *ezsigntemplatesignature_get_object_v1_response) {
    if(NULL == ezsigntemplatesignature_get_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_get_object_v1_response->m_payload) {
        ezsigntemplatesignature_get_object_v1_response_m_payload_free(ezsigntemplatesignature_get_object_v1_response->m_payload);
        ezsigntemplatesignature_get_object_v1_response->m_payload = NULL;
    }
    if (ezsigntemplatesignature_get_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplatesignature_get_object_v1_response->obj_debug_payload);
        ezsigntemplatesignature_get_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplatesignature_get_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplatesignature_get_object_v1_response->obj_debug);
        ezsigntemplatesignature_get_object_v1_response->obj_debug = NULL;
    }
    free(ezsigntemplatesignature_get_object_v1_response);
}

cJSON *ezsigntemplatesignature_get_object_v1_response_convertToJSON(ezsigntemplatesignature_get_object_v1_response_t *ezsigntemplatesignature_get_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignature_get_object_v1_response->m_payload
    if (!ezsigntemplatesignature_get_object_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplatesignature_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatesignature_get_object_v1_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatesignature_get_object_v1_response->obj_debug_payload
    if(ezsigntemplatesignature_get_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplatesignature_get_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplatesignature_get_object_v1_response->obj_debug
    if(ezsigntemplatesignature_get_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplatesignature_get_object_v1_response->obj_debug);
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

ezsigntemplatesignature_get_object_v1_response_t *ezsigntemplatesignature_get_object_v1_response_parseFromJSON(cJSON *ezsigntemplatesignature_get_object_v1_responseJSON){

    ezsigntemplatesignature_get_object_v1_response_t *ezsigntemplatesignature_get_object_v1_response_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_get_object_v1_response->m_payload
    ezsigntemplatesignature_get_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_get_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatesignature_get_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigntemplatesignature_get_object_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplatesignature_get_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive

    // ezsigntemplatesignature_get_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsigntemplatesignature_get_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigntemplatesignature_get_object_v1_response_local_var = ezsigntemplatesignature_get_object_v1_response_create (
        m_payload_local_nonprim,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigntemplatesignature_get_object_v1_response_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplatesignature_get_object_v1_response_m_payload_free(m_payload_local_nonprim);
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
