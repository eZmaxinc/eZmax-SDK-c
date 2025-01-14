#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignannotation_get_object_v2_response.h"



ezsignannotation_get_object_v2_response_t *ezsignannotation_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignannotation_get_object_v2_response_m_payload_t *m_payload
    ) {
    ezsignannotation_get_object_v2_response_t *ezsignannotation_get_object_v2_response_local_var = malloc(sizeof(ezsignannotation_get_object_v2_response_t));
    if (!ezsignannotation_get_object_v2_response_local_var) {
        return NULL;
    }
    ezsignannotation_get_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignannotation_get_object_v2_response_local_var->obj_debug = obj_debug;
    ezsignannotation_get_object_v2_response_local_var->m_payload = m_payload;

    return ezsignannotation_get_object_v2_response_local_var;
}


void ezsignannotation_get_object_v2_response_free(ezsignannotation_get_object_v2_response_t *ezsignannotation_get_object_v2_response) {
    if(NULL == ezsignannotation_get_object_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignannotation_get_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignannotation_get_object_v2_response->obj_debug_payload);
        ezsignannotation_get_object_v2_response->obj_debug_payload = NULL;
    }
    if (ezsignannotation_get_object_v2_response->obj_debug) {
        common_response_obj_debug_free(ezsignannotation_get_object_v2_response->obj_debug);
        ezsignannotation_get_object_v2_response->obj_debug = NULL;
    }
    if (ezsignannotation_get_object_v2_response->m_payload) {
        ezsignannotation_get_object_v2_response_m_payload_free(ezsignannotation_get_object_v2_response->m_payload);
        ezsignannotation_get_object_v2_response->m_payload = NULL;
    }
    free(ezsignannotation_get_object_v2_response);
}

cJSON *ezsignannotation_get_object_v2_response_convertToJSON(ezsignannotation_get_object_v2_response_t *ezsignannotation_get_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignannotation_get_object_v2_response->obj_debug_payload
    if (!ezsignannotation_get_object_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignannotation_get_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignannotation_get_object_v2_response->obj_debug
    if(ezsignannotation_get_object_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignannotation_get_object_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignannotation_get_object_v2_response->m_payload
    if (!ezsignannotation_get_object_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignannotation_get_object_v2_response_m_payload_convertToJSON(ezsignannotation_get_object_v2_response->m_payload);
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

ezsignannotation_get_object_v2_response_t *ezsignannotation_get_object_v2_response_parseFromJSON(cJSON *ezsignannotation_get_object_v2_responseJSON){

    ezsignannotation_get_object_v2_response_t *ezsignannotation_get_object_v2_response_local_var = NULL;

    // define the local variable for ezsignannotation_get_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignannotation_get_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for ezsignannotation_get_object_v2_response->m_payload
    ezsignannotation_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignannotation_get_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignannotation_get_object_v2_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignannotation_get_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignannotation_get_object_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // ezsignannotation_get_object_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignannotation_get_object_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignannotation_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignannotation_get_object_v2_response_local_var = ezsignannotation_get_object_v2_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return ezsignannotation_get_object_v2_response_local_var;
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
        ezsignannotation_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
