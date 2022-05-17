#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_create_object_v1_response.h"



ezsigntemplatepackage_create_object_v1_response_t *ezsigntemplatepackage_create_object_v1_response_create(
    ezsigntemplatepackage_create_object_v1_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigntemplatepackage_create_object_v1_response_t *ezsigntemplatepackage_create_object_v1_response_local_var = malloc(sizeof(ezsigntemplatepackage_create_object_v1_response_t));
    if (!ezsigntemplatepackage_create_object_v1_response_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_create_object_v1_response_local_var->m_payload = m_payload;
    ezsigntemplatepackage_create_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplatepackage_create_object_v1_response_local_var->obj_debug = obj_debug;

    return ezsigntemplatepackage_create_object_v1_response_local_var;
}


void ezsigntemplatepackage_create_object_v1_response_free(ezsigntemplatepackage_create_object_v1_response_t *ezsigntemplatepackage_create_object_v1_response) {
    if(NULL == ezsigntemplatepackage_create_object_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_create_object_v1_response->m_payload) {
        ezsigntemplatepackage_create_object_v1_response_m_payload_free(ezsigntemplatepackage_create_object_v1_response->m_payload);
        ezsigntemplatepackage_create_object_v1_response->m_payload = NULL;
    }
    if (ezsigntemplatepackage_create_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplatepackage_create_object_v1_response->obj_debug_payload);
        ezsigntemplatepackage_create_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplatepackage_create_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplatepackage_create_object_v1_response->obj_debug);
        ezsigntemplatepackage_create_object_v1_response->obj_debug = NULL;
    }
    free(ezsigntemplatepackage_create_object_v1_response);
}

cJSON *ezsigntemplatepackage_create_object_v1_response_convertToJSON(ezsigntemplatepackage_create_object_v1_response_t *ezsigntemplatepackage_create_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_create_object_v1_response->m_payload
    if (!ezsigntemplatepackage_create_object_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplatepackage_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackage_create_object_v1_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatepackage_create_object_v1_response->obj_debug_payload
    if(ezsigntemplatepackage_create_object_v1_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplatepackage_create_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplatepackage_create_object_v1_response->obj_debug
    if(ezsigntemplatepackage_create_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplatepackage_create_object_v1_response->obj_debug);
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

ezsigntemplatepackage_create_object_v1_response_t *ezsigntemplatepackage_create_object_v1_response_parseFromJSON(cJSON *ezsigntemplatepackage_create_object_v1_responseJSON){

    ezsigntemplatepackage_create_object_v1_response_t *ezsigntemplatepackage_create_object_v1_response_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_create_object_v1_response->m_payload
    ezsigntemplatepackage_create_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatepackage_create_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatepackage_create_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigntemplatepackage_create_object_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_create_object_v1_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplatepackage_create_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive

    // ezsigntemplatepackage_create_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_create_object_v1_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsigntemplatepackage_create_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_create_object_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigntemplatepackage_create_object_v1_response_local_var = ezsigntemplatepackage_create_object_v1_response_create (
        m_payload_local_nonprim,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigntemplatepackage_create_object_v1_response_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplatepackage_create_object_v1_response_m_payload_free(m_payload_local_nonprim);
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
