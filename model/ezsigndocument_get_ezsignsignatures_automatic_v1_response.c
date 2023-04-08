#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_get_ezsignsignatures_automatic_v1_response.h"



ezsigndocument_get_ezsignsignatures_automatic_v1_response_t *ezsigndocument_get_ezsignsignatures_automatic_v1_response_create(
    ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigndocument_get_ezsignsignatures_automatic_v1_response_t *ezsigndocument_get_ezsignsignatures_automatic_v1_response_local_var = malloc(sizeof(ezsigndocument_get_ezsignsignatures_automatic_v1_response_t));
    if (!ezsigndocument_get_ezsignsignatures_automatic_v1_response_local_var) {
        return NULL;
    }
    ezsigndocument_get_ezsignsignatures_automatic_v1_response_local_var->m_payload = m_payload;
    ezsigndocument_get_ezsignsignatures_automatic_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigndocument_get_ezsignsignatures_automatic_v1_response_local_var->obj_debug = obj_debug;

    return ezsigndocument_get_ezsignsignatures_automatic_v1_response_local_var;
}


void ezsigndocument_get_ezsignsignatures_automatic_v1_response_free(ezsigndocument_get_ezsignsignatures_automatic_v1_response_t *ezsigndocument_get_ezsignsignatures_automatic_v1_response) {
    if(NULL == ezsigndocument_get_ezsignsignatures_automatic_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_get_ezsignsignatures_automatic_v1_response->m_payload) {
        ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_free(ezsigndocument_get_ezsignsignatures_automatic_v1_response->m_payload);
        ezsigndocument_get_ezsignsignatures_automatic_v1_response->m_payload = NULL;
    }
    if (ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug_payload);
        ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug);
        ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug = NULL;
    }
    free(ezsigndocument_get_ezsignsignatures_automatic_v1_response);
}

cJSON *ezsigndocument_get_ezsignsignatures_automatic_v1_response_convertToJSON(ezsigndocument_get_ezsignsignatures_automatic_v1_response_t *ezsigndocument_get_ezsignsignatures_automatic_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_get_ezsignsignatures_automatic_v1_response->m_payload
    if (!ezsigndocument_get_ezsignsignatures_automatic_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_convertToJSON(ezsigndocument_get_ezsignsignatures_automatic_v1_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug_payload
    if(ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug
    if(ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug);
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

ezsigndocument_get_ezsignsignatures_automatic_v1_response_t *ezsigndocument_get_ezsignsignatures_automatic_v1_response_parseFromJSON(cJSON *ezsigndocument_get_ezsignsignatures_automatic_v1_responseJSON){

    ezsigndocument_get_ezsignsignatures_automatic_v1_response_t *ezsigndocument_get_ezsignsignatures_automatic_v1_response_local_var = NULL;

    // define the local variable for ezsigndocument_get_ezsignsignatures_automatic_v1_response->m_payload
    ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // define the local variable for ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigndocument_get_ezsignsignatures_automatic_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_ezsignsignatures_automatic_v1_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive

    // ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_ezsignsignatures_automatic_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsigndocument_get_ezsignsignatures_automatic_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigndocument_get_ezsignsignatures_automatic_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigndocument_get_ezsignsignatures_automatic_v1_response_local_var = ezsigndocument_get_ezsignsignatures_automatic_v1_response_create (
        m_payload_local_nonprim,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigndocument_get_ezsignsignatures_automatic_v1_response_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigndocument_get_ezsignsignatures_automatic_v1_response_m_payload_free(m_payload_local_nonprim);
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
