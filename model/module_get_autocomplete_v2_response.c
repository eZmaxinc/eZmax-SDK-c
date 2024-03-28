#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module_get_autocomplete_v2_response.h"



module_get_autocomplete_v2_response_t *module_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    module_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    module_get_autocomplete_v2_response_t *module_get_autocomplete_v2_response_local_var = malloc(sizeof(module_get_autocomplete_v2_response_t));
    if (!module_get_autocomplete_v2_response_local_var) {
        return NULL;
    }
    module_get_autocomplete_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    module_get_autocomplete_v2_response_local_var->obj_debug = obj_debug;
    module_get_autocomplete_v2_response_local_var->m_payload = m_payload;

    return module_get_autocomplete_v2_response_local_var;
}


void module_get_autocomplete_v2_response_free(module_get_autocomplete_v2_response_t *module_get_autocomplete_v2_response) {
    if(NULL == module_get_autocomplete_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (module_get_autocomplete_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(module_get_autocomplete_v2_response->obj_debug_payload);
        module_get_autocomplete_v2_response->obj_debug_payload = NULL;
    }
    if (module_get_autocomplete_v2_response->obj_debug) {
        common_response_obj_debug_free(module_get_autocomplete_v2_response->obj_debug);
        module_get_autocomplete_v2_response->obj_debug = NULL;
    }
    if (module_get_autocomplete_v2_response->m_payload) {
        module_get_autocomplete_v2_response_m_payload_free(module_get_autocomplete_v2_response->m_payload);
        module_get_autocomplete_v2_response->m_payload = NULL;
    }
    free(module_get_autocomplete_v2_response);
}

cJSON *module_get_autocomplete_v2_response_convertToJSON(module_get_autocomplete_v2_response_t *module_get_autocomplete_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // module_get_autocomplete_v2_response->obj_debug_payload
    if (!module_get_autocomplete_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(module_get_autocomplete_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // module_get_autocomplete_v2_response->obj_debug
    if(module_get_autocomplete_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(module_get_autocomplete_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // module_get_autocomplete_v2_response->m_payload
    if (!module_get_autocomplete_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = module_get_autocomplete_v2_response_m_payload_convertToJSON(module_get_autocomplete_v2_response->m_payload);
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

module_get_autocomplete_v2_response_t *module_get_autocomplete_v2_response_parseFromJSON(cJSON *module_get_autocomplete_v2_responseJSON){

    module_get_autocomplete_v2_response_t *module_get_autocomplete_v2_response_local_var = NULL;

    // define the local variable for module_get_autocomplete_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for module_get_autocomplete_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for module_get_autocomplete_v2_response->m_payload
    module_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // module_get_autocomplete_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(module_get_autocomplete_v2_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // module_get_autocomplete_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(module_get_autocomplete_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // module_get_autocomplete_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(module_get_autocomplete_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = module_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    module_get_autocomplete_v2_response_local_var = module_get_autocomplete_v2_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return module_get_autocomplete_v2_response_local_var;
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
        module_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
