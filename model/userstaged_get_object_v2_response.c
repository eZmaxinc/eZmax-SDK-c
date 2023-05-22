#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_get_object_v2_response.h"



userstaged_get_object_v2_response_t *userstaged_get_object_v2_response_create(
    userstaged_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    userstaged_get_object_v2_response_t *userstaged_get_object_v2_response_local_var = malloc(sizeof(userstaged_get_object_v2_response_t));
    if (!userstaged_get_object_v2_response_local_var) {
        return NULL;
    }
    userstaged_get_object_v2_response_local_var->m_payload = m_payload;
    userstaged_get_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    userstaged_get_object_v2_response_local_var->obj_debug = obj_debug;

    return userstaged_get_object_v2_response_local_var;
}


void userstaged_get_object_v2_response_free(userstaged_get_object_v2_response_t *userstaged_get_object_v2_response) {
    if(NULL == userstaged_get_object_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (userstaged_get_object_v2_response->m_payload) {
        userstaged_get_object_v2_response_m_payload_free(userstaged_get_object_v2_response->m_payload);
        userstaged_get_object_v2_response->m_payload = NULL;
    }
    if (userstaged_get_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(userstaged_get_object_v2_response->obj_debug_payload);
        userstaged_get_object_v2_response->obj_debug_payload = NULL;
    }
    if (userstaged_get_object_v2_response->obj_debug) {
        common_response_obj_debug_free(userstaged_get_object_v2_response->obj_debug);
        userstaged_get_object_v2_response->obj_debug = NULL;
    }
    free(userstaged_get_object_v2_response);
}

cJSON *userstaged_get_object_v2_response_convertToJSON(userstaged_get_object_v2_response_t *userstaged_get_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_get_object_v2_response->m_payload
    if (!userstaged_get_object_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = userstaged_get_object_v2_response_m_payload_convertToJSON(userstaged_get_object_v2_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // userstaged_get_object_v2_response->obj_debug_payload
    if(userstaged_get_object_v2_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(userstaged_get_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // userstaged_get_object_v2_response->obj_debug
    if(userstaged_get_object_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(userstaged_get_object_v2_response->obj_debug);
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

userstaged_get_object_v2_response_t *userstaged_get_object_v2_response_parseFromJSON(cJSON *userstaged_get_object_v2_responseJSON){

    userstaged_get_object_v2_response_t *userstaged_get_object_v2_response_local_var = NULL;

    // define the local variable for userstaged_get_object_v2_response->m_payload
    userstaged_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // define the local variable for userstaged_get_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for userstaged_get_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // userstaged_get_object_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(userstaged_get_object_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = userstaged_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive

    // userstaged_get_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(userstaged_get_object_v2_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // userstaged_get_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(userstaged_get_object_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    userstaged_get_object_v2_response_local_var = userstaged_get_object_v2_response_create (
        m_payload_local_nonprim,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return userstaged_get_object_v2_response_local_var;
end:
    if (m_payload_local_nonprim) {
        userstaged_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
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
