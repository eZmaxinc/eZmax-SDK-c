#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezdoctemplatetype_get_autocomplete_v2_response.h"



ezdoctemplatetype_get_autocomplete_v2_response_t *ezdoctemplatetype_get_autocomplete_v2_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    ezdoctemplatetype_get_autocomplete_v2_response_t *ezdoctemplatetype_get_autocomplete_v2_response_local_var = malloc(sizeof(ezdoctemplatetype_get_autocomplete_v2_response_t));
    if (!ezdoctemplatetype_get_autocomplete_v2_response_local_var) {
        return NULL;
    }
    ezdoctemplatetype_get_autocomplete_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    ezdoctemplatetype_get_autocomplete_v2_response_local_var->obj_debug = obj_debug;
    ezdoctemplatetype_get_autocomplete_v2_response_local_var->m_payload = m_payload;

    return ezdoctemplatetype_get_autocomplete_v2_response_local_var;
}


void ezdoctemplatetype_get_autocomplete_v2_response_free(ezdoctemplatetype_get_autocomplete_v2_response_t *ezdoctemplatetype_get_autocomplete_v2_response) {
    if(NULL == ezdoctemplatetype_get_autocomplete_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezdoctemplatetype_get_autocomplete_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezdoctemplatetype_get_autocomplete_v2_response->obj_debug_payload);
        ezdoctemplatetype_get_autocomplete_v2_response->obj_debug_payload = NULL;
    }
    if (ezdoctemplatetype_get_autocomplete_v2_response->obj_debug) {
        common_response_obj_debug_free(ezdoctemplatetype_get_autocomplete_v2_response->obj_debug);
        ezdoctemplatetype_get_autocomplete_v2_response->obj_debug = NULL;
    }
    if (ezdoctemplatetype_get_autocomplete_v2_response->m_payload) {
        ezdoctemplatetype_get_autocomplete_v2_response_m_payload_free(ezdoctemplatetype_get_autocomplete_v2_response->m_payload);
        ezdoctemplatetype_get_autocomplete_v2_response->m_payload = NULL;
    }
    free(ezdoctemplatetype_get_autocomplete_v2_response);
}

cJSON *ezdoctemplatetype_get_autocomplete_v2_response_convertToJSON(ezdoctemplatetype_get_autocomplete_v2_response_t *ezdoctemplatetype_get_autocomplete_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // ezdoctemplatetype_get_autocomplete_v2_response->obj_debug_payload
    if (!ezdoctemplatetype_get_autocomplete_v2_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezdoctemplatetype_get_autocomplete_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezdoctemplatetype_get_autocomplete_v2_response->obj_debug
    if(ezdoctemplatetype_get_autocomplete_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezdoctemplatetype_get_autocomplete_v2_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezdoctemplatetype_get_autocomplete_v2_response->m_payload
    if (!ezdoctemplatetype_get_autocomplete_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezdoctemplatetype_get_autocomplete_v2_response_m_payload_convertToJSON(ezdoctemplatetype_get_autocomplete_v2_response->m_payload);
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

ezdoctemplatetype_get_autocomplete_v2_response_t *ezdoctemplatetype_get_autocomplete_v2_response_parseFromJSON(cJSON *ezdoctemplatetype_get_autocomplete_v2_responseJSON){

    ezdoctemplatetype_get_autocomplete_v2_response_t *ezdoctemplatetype_get_autocomplete_v2_response_local_var = NULL;

    // define the local variable for ezdoctemplatetype_get_autocomplete_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezdoctemplatetype_get_autocomplete_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for ezdoctemplatetype_get_autocomplete_v2_response->m_payload
    ezdoctemplatetype_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezdoctemplatetype_get_autocomplete_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezdoctemplatetype_get_autocomplete_v2_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezdoctemplatetype_get_autocomplete_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezdoctemplatetype_get_autocomplete_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // ezdoctemplatetype_get_autocomplete_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezdoctemplatetype_get_autocomplete_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezdoctemplatetype_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezdoctemplatetype_get_autocomplete_v2_response_local_var = ezdoctemplatetype_get_autocomplete_v2_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return ezdoctemplatetype_get_autocomplete_v2_response_local_var;
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
        ezdoctemplatetype_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
