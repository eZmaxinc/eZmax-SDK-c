#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subnet_get_object_v2_response.h"



subnet_get_object_v2_response_t *subnet_get_object_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    subnet_get_object_v2_response_m_payload_t *m_payload
    ) {
    subnet_get_object_v2_response_t *subnet_get_object_v2_response_local_var = malloc(sizeof(subnet_get_object_v2_response_t));
    if (!subnet_get_object_v2_response_local_var) {
        return NULL;
    }
    subnet_get_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    subnet_get_object_v2_response_local_var->obj_debug = obj_debug;
    subnet_get_object_v2_response_local_var->m_payload = m_payload;

    return subnet_get_object_v2_response_local_var;
}


void subnet_get_object_v2_response_free(subnet_get_object_v2_response_t *subnet_get_object_v2_response) {
    if(NULL == subnet_get_object_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (subnet_get_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(subnet_get_object_v2_response->obj_debug_payload);
        subnet_get_object_v2_response->obj_debug_payload = NULL;
    }
    if (subnet_get_object_v2_response->obj_debug) {
        common_response_obj_debug_free(subnet_get_object_v2_response->obj_debug);
        subnet_get_object_v2_response->obj_debug = NULL;
    }
    if (subnet_get_object_v2_response->m_payload) {
        subnet_get_object_v2_response_m_payload_free(subnet_get_object_v2_response->m_payload);
        subnet_get_object_v2_response->m_payload = NULL;
    }
    free(subnet_get_object_v2_response);
}

cJSON *subnet_get_object_v2_response_convertToJSON(subnet_get_object_v2_response_t *subnet_get_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // subnet_get_object_v2_response->obj_debug_payload
    if (!subnet_get_object_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(subnet_get_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // subnet_get_object_v2_response->obj_debug
    if(subnet_get_object_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(subnet_get_object_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // subnet_get_object_v2_response->m_payload
    if (!subnet_get_object_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = subnet_get_object_v2_response_m_payload_convertToJSON(subnet_get_object_v2_response->m_payload);
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

subnet_get_object_v2_response_t *subnet_get_object_v2_response_parseFromJSON(cJSON *subnet_get_object_v2_responseJSON){

    subnet_get_object_v2_response_t *subnet_get_object_v2_response_local_var = NULL;

    // define the local variable for subnet_get_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for subnet_get_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for subnet_get_object_v2_response->m_payload
    subnet_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // subnet_get_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(subnet_get_object_v2_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // subnet_get_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(subnet_get_object_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // subnet_get_object_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(subnet_get_object_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = subnet_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    subnet_get_object_v2_response_local_var = subnet_get_object_v2_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return subnet_get_object_v2_response_local_var;
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
        subnet_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}