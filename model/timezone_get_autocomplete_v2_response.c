#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "timezone_get_autocomplete_v2_response.h"



timezone_get_autocomplete_v2_response_t *timezone_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    timezone_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    timezone_get_autocomplete_v2_response_t *timezone_get_autocomplete_v2_response_local_var = malloc(sizeof(timezone_get_autocomplete_v2_response_t));
    if (!timezone_get_autocomplete_v2_response_local_var) {
        return NULL;
    }
    timezone_get_autocomplete_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    timezone_get_autocomplete_v2_response_local_var->obj_debug = obj_debug;
    timezone_get_autocomplete_v2_response_local_var->m_payload = m_payload;

    return timezone_get_autocomplete_v2_response_local_var;
}


void timezone_get_autocomplete_v2_response_free(timezone_get_autocomplete_v2_response_t *timezone_get_autocomplete_v2_response) {
    if(NULL == timezone_get_autocomplete_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (timezone_get_autocomplete_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(timezone_get_autocomplete_v2_response->obj_debug_payload);
        timezone_get_autocomplete_v2_response->obj_debug_payload = NULL;
    }
    if (timezone_get_autocomplete_v2_response->obj_debug) {
        common_response_obj_debug_free(timezone_get_autocomplete_v2_response->obj_debug);
        timezone_get_autocomplete_v2_response->obj_debug = NULL;
    }
    if (timezone_get_autocomplete_v2_response->m_payload) {
        timezone_get_autocomplete_v2_response_m_payload_free(timezone_get_autocomplete_v2_response->m_payload);
        timezone_get_autocomplete_v2_response->m_payload = NULL;
    }
    free(timezone_get_autocomplete_v2_response);
}

cJSON *timezone_get_autocomplete_v2_response_convertToJSON(timezone_get_autocomplete_v2_response_t *timezone_get_autocomplete_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // timezone_get_autocomplete_v2_response->obj_debug_payload
    if (!timezone_get_autocomplete_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(timezone_get_autocomplete_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // timezone_get_autocomplete_v2_response->obj_debug
    if(timezone_get_autocomplete_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(timezone_get_autocomplete_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // timezone_get_autocomplete_v2_response->m_payload
    if (!timezone_get_autocomplete_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = timezone_get_autocomplete_v2_response_m_payload_convertToJSON(timezone_get_autocomplete_v2_response->m_payload);
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

timezone_get_autocomplete_v2_response_t *timezone_get_autocomplete_v2_response_parseFromJSON(cJSON *timezone_get_autocomplete_v2_responseJSON){

    timezone_get_autocomplete_v2_response_t *timezone_get_autocomplete_v2_response_local_var = NULL;

    // define the local variable for timezone_get_autocomplete_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for timezone_get_autocomplete_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for timezone_get_autocomplete_v2_response->m_payload
    timezone_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // timezone_get_autocomplete_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(timezone_get_autocomplete_v2_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // timezone_get_autocomplete_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(timezone_get_autocomplete_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // timezone_get_autocomplete_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(timezone_get_autocomplete_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = timezone_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    timezone_get_autocomplete_v2_response_local_var = timezone_get_autocomplete_v2_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return timezone_get_autocomplete_v2_response_local_var;
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
        timezone_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
