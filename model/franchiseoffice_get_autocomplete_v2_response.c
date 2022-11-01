#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchiseoffice_get_autocomplete_v2_response.h"



franchiseoffice_get_autocomplete_v2_response_t *franchiseoffice_get_autocomplete_v2_response_create(
    franchiseoffice_get_autocomplete_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    franchiseoffice_get_autocomplete_v2_response_t *franchiseoffice_get_autocomplete_v2_response_local_var = malloc(sizeof(franchiseoffice_get_autocomplete_v2_response_t));
    if (!franchiseoffice_get_autocomplete_v2_response_local_var) {
        return NULL;
    }
    franchiseoffice_get_autocomplete_v2_response_local_var->m_payload = m_payload;
    franchiseoffice_get_autocomplete_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    franchiseoffice_get_autocomplete_v2_response_local_var->obj_debug = obj_debug;

    return franchiseoffice_get_autocomplete_v2_response_local_var;
}


void franchiseoffice_get_autocomplete_v2_response_free(franchiseoffice_get_autocomplete_v2_response_t *franchiseoffice_get_autocomplete_v2_response) {
    if(NULL == franchiseoffice_get_autocomplete_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (franchiseoffice_get_autocomplete_v2_response->m_payload) {
        franchiseoffice_get_autocomplete_v2_response_m_payload_free(franchiseoffice_get_autocomplete_v2_response->m_payload);
        franchiseoffice_get_autocomplete_v2_response->m_payload = NULL;
    }
    if (franchiseoffice_get_autocomplete_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(franchiseoffice_get_autocomplete_v2_response->obj_debug_payload);
        franchiseoffice_get_autocomplete_v2_response->obj_debug_payload = NULL;
    }
    if (franchiseoffice_get_autocomplete_v2_response->obj_debug) {
        common_response_obj_debug_free(franchiseoffice_get_autocomplete_v2_response->obj_debug);
        franchiseoffice_get_autocomplete_v2_response->obj_debug = NULL;
    }
    free(franchiseoffice_get_autocomplete_v2_response);
}

cJSON *franchiseoffice_get_autocomplete_v2_response_convertToJSON(franchiseoffice_get_autocomplete_v2_response_t *franchiseoffice_get_autocomplete_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // franchiseoffice_get_autocomplete_v2_response->m_payload
    if (!franchiseoffice_get_autocomplete_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = franchiseoffice_get_autocomplete_v2_response_m_payload_convertToJSON(franchiseoffice_get_autocomplete_v2_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // franchiseoffice_get_autocomplete_v2_response->obj_debug_payload
    if(franchiseoffice_get_autocomplete_v2_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(franchiseoffice_get_autocomplete_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // franchiseoffice_get_autocomplete_v2_response->obj_debug
    if(franchiseoffice_get_autocomplete_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(franchiseoffice_get_autocomplete_v2_response->obj_debug);
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

franchiseoffice_get_autocomplete_v2_response_t *franchiseoffice_get_autocomplete_v2_response_parseFromJSON(cJSON *franchiseoffice_get_autocomplete_v2_responseJSON){

    franchiseoffice_get_autocomplete_v2_response_t *franchiseoffice_get_autocomplete_v2_response_local_var = NULL;

    // define the local variable for franchiseoffice_get_autocomplete_v2_response->m_payload
    franchiseoffice_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // define the local variable for franchiseoffice_get_autocomplete_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for franchiseoffice_get_autocomplete_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // franchiseoffice_get_autocomplete_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(franchiseoffice_get_autocomplete_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = franchiseoffice_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive

    // franchiseoffice_get_autocomplete_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(franchiseoffice_get_autocomplete_v2_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // franchiseoffice_get_autocomplete_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(franchiseoffice_get_autocomplete_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    franchiseoffice_get_autocomplete_v2_response_local_var = franchiseoffice_get_autocomplete_v2_response_create (
        m_payload_local_nonprim,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return franchiseoffice_get_autocomplete_v2_response_local_var;
end:
    if (m_payload_local_nonprim) {
        franchiseoffice_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
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
