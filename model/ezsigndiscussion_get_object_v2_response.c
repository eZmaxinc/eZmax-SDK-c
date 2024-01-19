#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndiscussion_get_object_v2_response.h"



ezsigndiscussion_get_object_v2_response_t *ezsigndiscussion_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsigndiscussion_get_object_v2_response_m_payload_t *m_payload
    ) {
    ezsigndiscussion_get_object_v2_response_t *ezsigndiscussion_get_object_v2_response_local_var = malloc(sizeof(ezsigndiscussion_get_object_v2_response_t));
    if (!ezsigndiscussion_get_object_v2_response_local_var) {
        return NULL;
    }
    ezsigndiscussion_get_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigndiscussion_get_object_v2_response_local_var->obj_debug = obj_debug;
    ezsigndiscussion_get_object_v2_response_local_var->m_payload = m_payload;

    return ezsigndiscussion_get_object_v2_response_local_var;
}


void ezsigndiscussion_get_object_v2_response_free(ezsigndiscussion_get_object_v2_response_t *ezsigndiscussion_get_object_v2_response) {
    if(NULL == ezsigndiscussion_get_object_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndiscussion_get_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigndiscussion_get_object_v2_response->obj_debug_payload);
        ezsigndiscussion_get_object_v2_response->obj_debug_payload = NULL;
    }
    if (ezsigndiscussion_get_object_v2_response->obj_debug) {
        common_response_obj_debug_free(ezsigndiscussion_get_object_v2_response->obj_debug);
        ezsigndiscussion_get_object_v2_response->obj_debug = NULL;
    }
    if (ezsigndiscussion_get_object_v2_response->m_payload) {
        ezsigndiscussion_get_object_v2_response_m_payload_free(ezsigndiscussion_get_object_v2_response->m_payload);
        ezsigndiscussion_get_object_v2_response->m_payload = NULL;
    }
    free(ezsigndiscussion_get_object_v2_response);
}

cJSON *ezsigndiscussion_get_object_v2_response_convertToJSON(ezsigndiscussion_get_object_v2_response_t *ezsigndiscussion_get_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndiscussion_get_object_v2_response->obj_debug_payload
    if (!ezsigndiscussion_get_object_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigndiscussion_get_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigndiscussion_get_object_v2_response->obj_debug
    if(ezsigndiscussion_get_object_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigndiscussion_get_object_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigndiscussion_get_object_v2_response->m_payload
    if (!ezsigndiscussion_get_object_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigndiscussion_get_object_v2_response_m_payload_convertToJSON(ezsigndiscussion_get_object_v2_response->m_payload);
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

ezsigndiscussion_get_object_v2_response_t *ezsigndiscussion_get_object_v2_response_parseFromJSON(cJSON *ezsigndiscussion_get_object_v2_responseJSON){

    ezsigndiscussion_get_object_v2_response_t *ezsigndiscussion_get_object_v2_response_local_var = NULL;

    // define the local variable for ezsigndiscussion_get_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigndiscussion_get_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for ezsigndiscussion_get_object_v2_response->m_payload
    ezsigndiscussion_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigndiscussion_get_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_get_object_v2_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsigndiscussion_get_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_get_object_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // ezsigndiscussion_get_object_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_get_object_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigndiscussion_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigndiscussion_get_object_v2_response_local_var = ezsigndiscussion_get_object_v2_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return ezsigndiscussion_get_object_v2_response_local_var;
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
        ezsigndiscussion_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
