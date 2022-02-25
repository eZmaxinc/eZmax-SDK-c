#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_create_object_v2_response.h"



ezsignsignature_create_object_v2_response_t *ezsignsignature_create_object_v2_response_create(
    ezsignsignature_create_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsignsignature_create_object_v2_response_t *ezsignsignature_create_object_v2_response_local_var = malloc(sizeof(ezsignsignature_create_object_v2_response_t));
    if (!ezsignsignature_create_object_v2_response_local_var) {
        return NULL;
    }
    ezsignsignature_create_object_v2_response_local_var->m_payload = m_payload;
    ezsignsignature_create_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignsignature_create_object_v2_response_local_var->obj_debug = obj_debug;

    return ezsignsignature_create_object_v2_response_local_var;
}


void ezsignsignature_create_object_v2_response_free(ezsignsignature_create_object_v2_response_t *ezsignsignature_create_object_v2_response) {
    if(NULL == ezsignsignature_create_object_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_create_object_v2_response->m_payload) {
        ezsignsignature_create_object_v2_response_m_payload_free(ezsignsignature_create_object_v2_response->m_payload);
        ezsignsignature_create_object_v2_response->m_payload = NULL;
    }
    if (ezsignsignature_create_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignsignature_create_object_v2_response->obj_debug_payload);
        ezsignsignature_create_object_v2_response->obj_debug_payload = NULL;
    }
    if (ezsignsignature_create_object_v2_response->obj_debug) {
        common_response_obj_debug_free(ezsignsignature_create_object_v2_response->obj_debug);
        ezsignsignature_create_object_v2_response->obj_debug = NULL;
    }
    free(ezsignsignature_create_object_v2_response);
}

cJSON *ezsignsignature_create_object_v2_response_convertToJSON(ezsignsignature_create_object_v2_response_t *ezsignsignature_create_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_create_object_v2_response->m_payload
    if (!ezsignsignature_create_object_v2_response->m_payload) {
        goto fail;
    }
    
    cJSON *m_payload_local_JSON = ezsignsignature_create_object_v2_response_m_payload_convertToJSON(ezsignsignature_create_object_v2_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignsignature_create_object_v2_response->obj_debug_payload
    if(ezsignsignature_create_object_v2_response->obj_debug_payload) { 
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignsignature_create_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // ezsignsignature_create_object_v2_response->obj_debug
    if(ezsignsignature_create_object_v2_response->obj_debug) { 
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignsignature_create_object_v2_response->obj_debug);
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

ezsignsignature_create_object_v2_response_t *ezsignsignature_create_object_v2_response_parseFromJSON(cJSON *ezsignsignature_create_object_v2_responseJSON){

    ezsignsignature_create_object_v2_response_t *ezsignsignature_create_object_v2_response_local_var = NULL;

    // define the local variable for ezsignsignature_create_object_v2_response->m_payload
    ezsignsignature_create_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // define the local variable for ezsignsignature_create_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignsignature_create_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsignsignature_create_object_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignsignature_create_object_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignsignature_create_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive

    // ezsignsignature_create_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignsignature_create_object_v2_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsignsignature_create_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignsignature_create_object_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsignsignature_create_object_v2_response_local_var = ezsignsignature_create_object_v2_response_create (
        m_payload_local_nonprim,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsignsignature_create_object_v2_response_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsignsignature_create_object_v2_response_m_payload_free(m_payload_local_nonprim);
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
