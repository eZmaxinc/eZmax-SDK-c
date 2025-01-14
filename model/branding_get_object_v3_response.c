#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_get_object_v3_response.h"



branding_get_object_v3_response_t *branding_get_object_v3_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    branding_get_object_v3_response_m_payload_t *m_payload
    ) {
    branding_get_object_v3_response_t *branding_get_object_v3_response_local_var = malloc(sizeof(branding_get_object_v3_response_t));
    if (!branding_get_object_v3_response_local_var) {
        return NULL;
    }
    branding_get_object_v3_response_local_var->obj_debug_payload = obj_debug_payload;
    branding_get_object_v3_response_local_var->obj_debug = obj_debug;
    branding_get_object_v3_response_local_var->m_payload = m_payload;

    return branding_get_object_v3_response_local_var;
}


void branding_get_object_v3_response_free(branding_get_object_v3_response_t *branding_get_object_v3_response) {
    if(NULL == branding_get_object_v3_response){
        return ;
    }
    listEntry_t *listEntry;
    if (branding_get_object_v3_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(branding_get_object_v3_response->obj_debug_payload);
        branding_get_object_v3_response->obj_debug_payload = NULL;
    }
    if (branding_get_object_v3_response->obj_debug) {
        common_response_obj_debug_free(branding_get_object_v3_response->obj_debug);
        branding_get_object_v3_response->obj_debug = NULL;
    }
    if (branding_get_object_v3_response->m_payload) {
        branding_get_object_v3_response_m_payload_free(branding_get_object_v3_response->m_payload);
        branding_get_object_v3_response->m_payload = NULL;
    }
    free(branding_get_object_v3_response);
}

cJSON *branding_get_object_v3_response_convertToJSON(branding_get_object_v3_response_t *branding_get_object_v3_response) {
    cJSON *item = cJSON_CreateObject();

    // branding_get_object_v3_response->obj_debug_payload
    if (!branding_get_object_v3_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(branding_get_object_v3_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // branding_get_object_v3_response->obj_debug
    if(branding_get_object_v3_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(branding_get_object_v3_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // branding_get_object_v3_response->m_payload
    if (!branding_get_object_v3_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = branding_get_object_v3_response_m_payload_convertToJSON(branding_get_object_v3_response->m_payload);
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

branding_get_object_v3_response_t *branding_get_object_v3_response_parseFromJSON(cJSON *branding_get_object_v3_responseJSON){

    branding_get_object_v3_response_t *branding_get_object_v3_response_local_var = NULL;

    // define the local variable for branding_get_object_v3_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for branding_get_object_v3_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for branding_get_object_v3_response->m_payload
    branding_get_object_v3_response_m_payload_t *m_payload_local_nonprim = NULL;

    // branding_get_object_v3_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(branding_get_object_v3_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // branding_get_object_v3_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(branding_get_object_v3_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // branding_get_object_v3_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(branding_get_object_v3_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = branding_get_object_v3_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    branding_get_object_v3_response_local_var = branding_get_object_v3_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return branding_get_object_v3_response_local_var;
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
        branding_get_object_v3_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
