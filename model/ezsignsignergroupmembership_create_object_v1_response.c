#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroupmembership_create_object_v1_response.h"



ezsignsignergroupmembership_create_object_v1_response_t *ezsignsignergroupmembership_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignsignergroupmembership_create_object_v1_response_m_payload_t *m_payload
    ) {
    ezsignsignergroupmembership_create_object_v1_response_t *ezsignsignergroupmembership_create_object_v1_response_local_var = malloc(sizeof(ezsignsignergroupmembership_create_object_v1_response_t));
    if (!ezsignsignergroupmembership_create_object_v1_response_local_var) {
        return NULL;
    }
    ezsignsignergroupmembership_create_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignsignergroupmembership_create_object_v1_response_local_var->obj_debug = obj_debug;
    ezsignsignergroupmembership_create_object_v1_response_local_var->m_payload = m_payload;

    return ezsignsignergroupmembership_create_object_v1_response_local_var;
}


void ezsignsignergroupmembership_create_object_v1_response_free(ezsignsignergroupmembership_create_object_v1_response_t *ezsignsignergroupmembership_create_object_v1_response) {
    if(NULL == ezsignsignergroupmembership_create_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroupmembership_create_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignsignergroupmembership_create_object_v1_response->obj_debug_payload);
        ezsignsignergroupmembership_create_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignsignergroupmembership_create_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignsignergroupmembership_create_object_v1_response->obj_debug);
        ezsignsignergroupmembership_create_object_v1_response->obj_debug = NULL;
    }
    if (ezsignsignergroupmembership_create_object_v1_response->m_payload) {
        ezsignsignergroupmembership_create_object_v1_response_m_payload_free(ezsignsignergroupmembership_create_object_v1_response->m_payload);
        ezsignsignergroupmembership_create_object_v1_response->m_payload = NULL;
    }
    free(ezsignsignergroupmembership_create_object_v1_response);
}

cJSON *ezsignsignergroupmembership_create_object_v1_response_convertToJSON(ezsignsignergroupmembership_create_object_v1_response_t *ezsignsignergroupmembership_create_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroupmembership_create_object_v1_response->obj_debug_payload
    if (!ezsignsignergroupmembership_create_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignsignergroupmembership_create_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignsignergroupmembership_create_object_v1_response->obj_debug
    if(ezsignsignergroupmembership_create_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignsignergroupmembership_create_object_v1_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignsignergroupmembership_create_object_v1_response->m_payload
    if (!ezsignsignergroupmembership_create_object_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignsignergroupmembership_create_object_v1_response_m_payload_convertToJSON(ezsignsignergroupmembership_create_object_v1_response->m_payload);
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

ezsignsignergroupmembership_create_object_v1_response_t *ezsignsignergroupmembership_create_object_v1_response_parseFromJSON(cJSON *ezsignsignergroupmembership_create_object_v1_responseJSON){

    ezsignsignergroupmembership_create_object_v1_response_t *ezsignsignergroupmembership_create_object_v1_response_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_create_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignsignergroupmembership_create_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for ezsignsignergroupmembership_create_object_v1_response->m_payload
    ezsignsignergroupmembership_create_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignsignergroupmembership_create_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_create_object_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignsignergroupmembership_create_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_create_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // ezsignsignergroupmembership_create_object_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_create_object_v1_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignsignergroupmembership_create_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignsignergroupmembership_create_object_v1_response_local_var = ezsignsignergroupmembership_create_object_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return ezsignsignergroupmembership_create_object_v1_response_local_var;
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
        ezsignsignergroupmembership_create_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}