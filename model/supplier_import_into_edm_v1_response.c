#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supplier_import_into_edm_v1_response.h"



static supplier_import_into_edm_v1_response_t *supplier_import_into_edm_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    supplier_import_into_edm_v1_response_m_payload_t *m_payload
    ) {
    supplier_import_into_edm_v1_response_t *supplier_import_into_edm_v1_response_local_var = malloc(sizeof(supplier_import_into_edm_v1_response_t));
    if (!supplier_import_into_edm_v1_response_local_var) {
        return NULL;
    }
    supplier_import_into_edm_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    supplier_import_into_edm_v1_response_local_var->obj_debug = obj_debug;
    supplier_import_into_edm_v1_response_local_var->m_payload = m_payload;

    supplier_import_into_edm_v1_response_local_var->_library_owned = 1;
    return supplier_import_into_edm_v1_response_local_var;
}

__attribute__((deprecated)) supplier_import_into_edm_v1_response_t *supplier_import_into_edm_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    supplier_import_into_edm_v1_response_m_payload_t *m_payload
    ) {
    return supplier_import_into_edm_v1_response_create_internal (
        obj_debug_payload,
        obj_debug,
        m_payload
        );
}

void supplier_import_into_edm_v1_response_free(supplier_import_into_edm_v1_response_t *supplier_import_into_edm_v1_response) {
    if(NULL == supplier_import_into_edm_v1_response){
        return ;
    }
    if(supplier_import_into_edm_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "supplier_import_into_edm_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (supplier_import_into_edm_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(supplier_import_into_edm_v1_response->obj_debug_payload);
        supplier_import_into_edm_v1_response->obj_debug_payload = NULL;
    }
    if (supplier_import_into_edm_v1_response->obj_debug) {
        common_response_obj_debug_free(supplier_import_into_edm_v1_response->obj_debug);
        supplier_import_into_edm_v1_response->obj_debug = NULL;
    }
    if (supplier_import_into_edm_v1_response->m_payload) {
        supplier_import_into_edm_v1_response_m_payload_free(supplier_import_into_edm_v1_response->m_payload);
        supplier_import_into_edm_v1_response->m_payload = NULL;
    }
    free(supplier_import_into_edm_v1_response);
}

cJSON *supplier_import_into_edm_v1_response_convertToJSON(supplier_import_into_edm_v1_response_t *supplier_import_into_edm_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // supplier_import_into_edm_v1_response->obj_debug_payload
    if (!supplier_import_into_edm_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(supplier_import_into_edm_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // supplier_import_into_edm_v1_response->obj_debug
    if(supplier_import_into_edm_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(supplier_import_into_edm_v1_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // supplier_import_into_edm_v1_response->m_payload
    if (!supplier_import_into_edm_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = supplier_import_into_edm_v1_response_m_payload_convertToJSON(supplier_import_into_edm_v1_response->m_payload);
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

supplier_import_into_edm_v1_response_t *supplier_import_into_edm_v1_response_parseFromJSON(cJSON *supplier_import_into_edm_v1_responseJSON){

    supplier_import_into_edm_v1_response_t *supplier_import_into_edm_v1_response_local_var = NULL;

    // define the local variable for supplier_import_into_edm_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for supplier_import_into_edm_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for supplier_import_into_edm_v1_response->m_payload
    supplier_import_into_edm_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // supplier_import_into_edm_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(supplier_import_into_edm_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // supplier_import_into_edm_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(supplier_import_into_edm_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // supplier_import_into_edm_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(supplier_import_into_edm_v1_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = supplier_import_into_edm_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    supplier_import_into_edm_v1_response_local_var = supplier_import_into_edm_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return supplier_import_into_edm_v1_response_local_var;
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
        supplier_import_into_edm_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
