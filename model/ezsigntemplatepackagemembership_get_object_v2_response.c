#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagemembership_get_object_v2_response.h"



ezsigntemplatepackagemembership_get_object_v2_response_t *ezsigntemplatepackagemembership_get_object_v2_response_create(
    ezsigntemplatepackagemembership_get_object_v2_response_m_payload_t *m_payload,
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug
    ) {
    ezsigntemplatepackagemembership_get_object_v2_response_t *ezsigntemplatepackagemembership_get_object_v2_response_local_var = malloc(sizeof(ezsigntemplatepackagemembership_get_object_v2_response_t));
    if (!ezsigntemplatepackagemembership_get_object_v2_response_local_var) {
        return NULL;
    }
    ezsigntemplatepackagemembership_get_object_v2_response_local_var->m_payload = m_payload;
    ezsigntemplatepackagemembership_get_object_v2_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsigntemplatepackagemembership_get_object_v2_response_local_var->obj_debug = obj_debug;

    return ezsigntemplatepackagemembership_get_object_v2_response_local_var;
}


void ezsigntemplatepackagemembership_get_object_v2_response_free(ezsigntemplatepackagemembership_get_object_v2_response_t *ezsigntemplatepackagemembership_get_object_v2_response) {
    if(NULL == ezsigntemplatepackagemembership_get_object_v2_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagemembership_get_object_v2_response->m_payload) {
        ezsigntemplatepackagemembership_get_object_v2_response_m_payload_free(ezsigntemplatepackagemembership_get_object_v2_response->m_payload);
        ezsigntemplatepackagemembership_get_object_v2_response->m_payload = NULL;
    }
    if (ezsigntemplatepackagemembership_get_object_v2_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsigntemplatepackagemembership_get_object_v2_response->obj_debug_payload);
        ezsigntemplatepackagemembership_get_object_v2_response->obj_debug_payload = NULL;
    }
    if (ezsigntemplatepackagemembership_get_object_v2_response->obj_debug) {
        common_response_obj_debug_free(ezsigntemplatepackagemembership_get_object_v2_response->obj_debug);
        ezsigntemplatepackagemembership_get_object_v2_response->obj_debug = NULL;
    }
    free(ezsigntemplatepackagemembership_get_object_v2_response);
}

cJSON *ezsigntemplatepackagemembership_get_object_v2_response_convertToJSON(ezsigntemplatepackagemembership_get_object_v2_response_t *ezsigntemplatepackagemembership_get_object_v2_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagemembership_get_object_v2_response->m_payload
    if (!ezsigntemplatepackagemembership_get_object_v2_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplatepackagemembership_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatepackagemembership_get_object_v2_response->m_payload);
    if(m_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsigntemplatepackagemembership_get_object_v2_response->obj_debug_payload
    if(ezsigntemplatepackagemembership_get_object_v2_response->obj_debug_payload) {
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsigntemplatepackagemembership_get_object_v2_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigntemplatepackagemembership_get_object_v2_response->obj_debug
    if(ezsigntemplatepackagemembership_get_object_v2_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsigntemplatepackagemembership_get_object_v2_response->obj_debug);
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

ezsigntemplatepackagemembership_get_object_v2_response_t *ezsigntemplatepackagemembership_get_object_v2_response_parseFromJSON(cJSON *ezsigntemplatepackagemembership_get_object_v2_responseJSON){

    ezsigntemplatepackagemembership_get_object_v2_response_t *ezsigntemplatepackagemembership_get_object_v2_response_local_var = NULL;

    // define the local variable for ezsigntemplatepackagemembership_get_object_v2_response->m_payload
    ezsigntemplatepackagemembership_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatepackagemembership_get_object_v2_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsigntemplatepackagemembership_get_object_v2_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // ezsigntemplatepackagemembership_get_object_v2_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_get_object_v2_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplatepackagemembership_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive

    // ezsigntemplatepackagemembership_get_object_v2_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_get_object_v2_responseJSON, "objDebugPayload");
    if (obj_debug_payload) { 
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive
    }

    // ezsigntemplatepackagemembership_get_object_v2_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_get_object_v2_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }


    ezsigntemplatepackagemembership_get_object_v2_response_local_var = ezsigntemplatepackagemembership_get_object_v2_response_create (
        m_payload_local_nonprim,
        obj_debug_payload ? obj_debug_payload_local_nonprim : NULL,
        obj_debug ? obj_debug_local_nonprim : NULL
        );

    return ezsigntemplatepackagemembership_get_object_v2_response_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplatepackagemembership_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
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
