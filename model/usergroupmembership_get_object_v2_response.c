#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_get_object_v2_response.h"



usergroupmembership_get_object_v2_response_t *usergroupmembership_get_object_v2_response_create(
    usergroupmembership_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    usergroupmembership_get_object_v2_response_t *usergroupmembership_get_object_v2_response_local_var = malloc(sizeof(usergroupmembership_get_object_v2_response_t));
    if (!usergroupmembership_get_object_v2_response_local_var) {
        return NULL;
    }
    usergroupmembership_get_object_v2_response_local_var->m_payload = m_payload;
    usergroupmembership_get_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    usergroupmembership_get_object_v2_response_local_var->obj_debug = obj_debug;

    return usergroupmembership_get_object_v2_response_local_var;
}


void usergroupmembership_get_object_v2_response_free(usergroupmembership_get_object_v2_response_t *usergroupmembership_get_object_v2_response) {
    if(NULL == usergroupmembership_get_object_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupmembership_get_object_v2_response->m_payload) {
        usergroupmembership_get_object_v2_response_m_payload_free(usergroupmembership_get_object_v2_response->m_payload);
        usergroupmembership_get_object_v2_response->m_payload = NULL;
    }
    if (usergroupmembership_get_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(usergroupmembership_get_object_v2_response->obj_debug_payload);
        usergroupmembership_get_object_v2_response->obj_debug_payload = NULL;
    }
    if (usergroupmembership_get_object_v2_response->obj_debug) {
        common_response_obj_debug_free(usergroupmembership_get_object_v2_response->obj_debug);
        usergroupmembership_get_object_v2_response->obj_debug = NULL;
    }
    free(usergroupmembership_get_object_v2_response);
}

cJSON *usergroupmembership_get_object_v2_response_convertToJSON(usergroupmembership_get_object_v2_response_t *usergroupmembership_get_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // usergroupmembership_get_object_v2_response->m_payload
    if (!usergroupmembership_get_object_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = usergroupmembership_get_object_v2_response_m_payload_convertToJSON(usergroupmembership_get_object_v2_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // usergroupmembership_get_object_v2_response->obj_debug_payload
    if(usergroupmembership_get_object_v2_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(usergroupmembership_get_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // usergroupmembership_get_object_v2_response->obj_debug
    if(usergroupmembership_get_object_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(usergroupmembership_get_object_v2_response->obj_debug);
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

usergroupmembership_get_object_v2_response_t *usergroupmembership_get_object_v2_response_parseFromJSON(cJSON *usergroupmembership_get_object_v2_responseJSON){

    usergroupmembership_get_object_v2_response_t *usergroupmembership_get_object_v2_response_local_var = NULL;

    // define the local variable for usergroupmembership_get_object_v2_response->m_payload
    usergroupmembership_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // define the local variable for usergroupmembership_get_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for usergroupmembership_get_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // usergroupmembership_get_object_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(usergroupmembership_get_object_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = usergroupmembership_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive

    // usergroupmembership_get_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(usergroupmembership_get_object_v2_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // usergroupmembership_get_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(usergroupmembership_get_object_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    usergroupmembership_get_object_v2_response_local_var = usergroupmembership_get_object_v2_response_create (
        m_payload_local_nonprim,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return usergroupmembership_get_object_v2_response_local_var;
end:
    if (m_payload_local_nonprim) {
        usergroupmembership_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
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
