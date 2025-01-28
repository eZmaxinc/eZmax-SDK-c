#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_get_object_v1_response.h"



static ezsignfoldersignerassociation_get_object_v1_response_t *ezsignfoldersignerassociation_get_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *m_payload
    ) {
    ezsignfoldersignerassociation_get_object_v1_response_t *ezsignfoldersignerassociation_get_object_v1_response_local_var = malloc(sizeof(ezsignfoldersignerassociation_get_object_v1_response_t));
    if (!ezsignfoldersignerassociation_get_object_v1_response_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_get_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    ezsignfoldersignerassociation_get_object_v1_response_local_var->obj_debug = obj_debug;
    ezsignfoldersignerassociation_get_object_v1_response_local_var->m_payload = m_payload;

    ezsignfoldersignerassociation_get_object_v1_response_local_var->_library_owned = 1;
    return ezsignfoldersignerassociation_get_object_v1_response_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_get_object_v1_response_t *ezsignfoldersignerassociation_get_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *m_payload
    ) {
    return ezsignfoldersignerassociation_get_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug,
        m_payload
        );
}

void ezsignfoldersignerassociation_get_object_v1_response_free(ezsignfoldersignerassociation_get_object_v1_response_t *ezsignfoldersignerassociation_get_object_v1_response) {
    if(NULL == ezsignfoldersignerassociation_get_object_v1_response){
        return ;
    }
    if(ezsignfoldersignerassociation_get_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_get_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_get_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(ezsignfoldersignerassociation_get_object_v1_response->obj_debug_payload);
        ezsignfoldersignerassociation_get_object_v1_response->obj_debug_payload = NULL;
    }
    if (ezsignfoldersignerassociation_get_object_v1_response->obj_debug) {
        common_response_obj_debug_free(ezsignfoldersignerassociation_get_object_v1_response->obj_debug);
        ezsignfoldersignerassociation_get_object_v1_response->obj_debug = NULL;
    }
    if (ezsignfoldersignerassociation_get_object_v1_response->m_payload) {
        ezsignfoldersignerassociation_get_object_v1_response_m_payload_free(ezsignfoldersignerassociation_get_object_v1_response->m_payload);
        ezsignfoldersignerassociation_get_object_v1_response->m_payload = NULL;
    }
    free(ezsignfoldersignerassociation_get_object_v1_response);
}

cJSON *ezsignfoldersignerassociation_get_object_v1_response_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response_t *ezsignfoldersignerassociation_get_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_get_object_v1_response->obj_debug_payload
    if (!ezsignfoldersignerassociation_get_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // ezsignfoldersignerassociation_get_object_v1_response->obj_debug
    if(ezsignfoldersignerassociation_get_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfoldersignerassociation_get_object_v1_response->m_payload
    if (!ezsignfoldersignerassociation_get_object_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignfoldersignerassociation_get_object_v1_response_m_payload_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response->m_payload);
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

ezsignfoldersignerassociation_get_object_v1_response_t *ezsignfoldersignerassociation_get_object_v1_response_parseFromJSON(cJSON *ezsignfoldersignerassociation_get_object_v1_responseJSON){

    ezsignfoldersignerassociation_get_object_v1_response_t *ezsignfoldersignerassociation_get_object_v1_response_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_get_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for ezsignfoldersignerassociation_get_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for ezsignfoldersignerassociation_get_object_v1_response->m_payload
    ezsignfoldersignerassociation_get_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignfoldersignerassociation_get_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_get_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // ezsignfoldersignerassociation_get_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_get_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // ezsignfoldersignerassociation_get_object_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_get_object_v1_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignfoldersignerassociation_get_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignfoldersignerassociation_get_object_v1_response_local_var = ezsignfoldersignerassociation_get_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return ezsignfoldersignerassociation_get_object_v1_response_local_var;
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
        ezsignfoldersignerassociation_get_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
