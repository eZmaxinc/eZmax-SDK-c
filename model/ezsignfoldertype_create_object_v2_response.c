#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_create_object_v2_response.h"



ezsignfoldertype_create_object_v2_response_t *ezsignfoldertype_create_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignfoldertype_create_object_v2_response_m_payload_t *m_payload
    ) {
    ezsignfoldertype_create_object_v2_response_t *ezsignfoldertype_create_object_v2_response_local_var = malloc(sizeof(ezsignfoldertype_create_object_v2_response_t));
    if (!ezsignfoldertype_create_object_v2_response_local_var) {
        return NULL;
    }
    ezsignfoldertype_create_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignfoldertype_create_object_v2_response_local_var->obj_debug = obj_debug;
    ezsignfoldertype_create_object_v2_response_local_var->m_payload = m_payload;

    return ezsignfoldertype_create_object_v2_response_local_var;
}


void ezsignfoldertype_create_object_v2_response_free(ezsignfoldertype_create_object_v2_response_t *ezsignfoldertype_create_object_v2_response) {
    if(NULL == ezsignfoldertype_create_object_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_create_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignfoldertype_create_object_v2_response->obj_debug_payload);
        ezsignfoldertype_create_object_v2_response->obj_debug_payload = NULL;
    }
    if (ezsignfoldertype_create_object_v2_response->obj_debug) {
        common_response_obj_debug_free(ezsignfoldertype_create_object_v2_response->obj_debug);
        ezsignfoldertype_create_object_v2_response->obj_debug = NULL;
    }
    if (ezsignfoldertype_create_object_v2_response->m_payload) {
        ezsignfoldertype_create_object_v2_response_m_payload_free(ezsignfoldertype_create_object_v2_response->m_payload);
        ezsignfoldertype_create_object_v2_response->m_payload = NULL;
    }
    free(ezsignfoldertype_create_object_v2_response);
}

cJSON *ezsignfoldertype_create_object_v2_response_convertToJSON(ezsignfoldertype_create_object_v2_response_t *ezsignfoldertype_create_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_create_object_v2_response->obj_debug_payload
    if (!ezsignfoldertype_create_object_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignfoldertype_create_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfoldertype_create_object_v2_response->obj_debug
    if(ezsignfoldertype_create_object_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignfoldertype_create_object_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfoldertype_create_object_v2_response->m_payload
    if (!ezsignfoldertype_create_object_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignfoldertype_create_object_v2_response_m_payload_convertToJSON(ezsignfoldertype_create_object_v2_response->m_payload);
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

ezsignfoldertype_create_object_v2_response_t *ezsignfoldertype_create_object_v2_response_parseFromJSON(cJSON *ezsignfoldertype_create_object_v2_responseJSON){

    ezsignfoldertype_create_object_v2_response_t *ezsignfoldertype_create_object_v2_response_local_var = NULL;

    // define the local variable for ezsignfoldertype_create_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_create_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for ezsignfoldertype_create_object_v2_response->m_payload
    ezsignfoldertype_create_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignfoldertype_create_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_create_object_v2_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignfoldertype_create_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_create_object_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // ezsignfoldertype_create_object_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_create_object_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignfoldertype_create_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignfoldertype_create_object_v2_response_local_var = ezsignfoldertype_create_object_v2_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return ezsignfoldertype_create_object_v2_response_local_var;
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
        ezsignfoldertype_create_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}