#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_create_object_v1_response.h"



static paymentgateway_create_object_v1_response_t *paymentgateway_create_object_v1_response_create_internal(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    paymentgateway_create_object_v1_response_m_payload_t *m_payload
    ) {
    paymentgateway_create_object_v1_response_t *paymentgateway_create_object_v1_response_local_var = malloc(sizeof(paymentgateway_create_object_v1_response_t));
    if (!paymentgateway_create_object_v1_response_local_var) {
        return NULL;
    }
    memset(paymentgateway_create_object_v1_response_local_var, 0, sizeof(paymentgateway_create_object_v1_response_t));
    paymentgateway_create_object_v1_response_local_var->_library_owned = 1;
    paymentgateway_create_object_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    paymentgateway_create_object_v1_response_local_var->obj_debug = obj_debug;
    paymentgateway_create_object_v1_response_local_var->m_payload = m_payload;
    return paymentgateway_create_object_v1_response_local_var;
}

__attribute__((deprecated)) paymentgateway_create_object_v1_response_t *paymentgateway_create_object_v1_response_create(
    common_response_obj_debug_payload_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    paymentgateway_create_object_v1_response_m_payload_t *m_payload
    ) {
    paymentgateway_create_object_v1_response_t *result = paymentgateway_create_object_v1_response_create_internal (
        obj_debug_payload,
        obj_debug,
        m_payload
        );
    if (!result) {
    }
    return result;
}

void paymentgateway_create_object_v1_response_free(paymentgateway_create_object_v1_response_t *paymentgateway_create_object_v1_response) {
    if(NULL == paymentgateway_create_object_v1_response){
        return ;
    }
    if(paymentgateway_create_object_v1_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentgateway_create_object_v1_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentgateway_create_object_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_free(paymentgateway_create_object_v1_response->obj_debug_payload);
        paymentgateway_create_object_v1_response->obj_debug_payload = NULL;
    }
    if (paymentgateway_create_object_v1_response->obj_debug) {
        common_response_obj_debug_free(paymentgateway_create_object_v1_response->obj_debug);
        paymentgateway_create_object_v1_response->obj_debug = NULL;
    }
    if (paymentgateway_create_object_v1_response->m_payload) {
        paymentgateway_create_object_v1_response_m_payload_free(paymentgateway_create_object_v1_response->m_payload);
        paymentgateway_create_object_v1_response->m_payload = NULL;
    }
    free(paymentgateway_create_object_v1_response);
}

cJSON *paymentgateway_create_object_v1_response_convertToJSON(paymentgateway_create_object_v1_response_t *paymentgateway_create_object_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_create_object_v1_response->obj_debug_payload
    if (!paymentgateway_create_object_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_convertToJSON(paymentgateway_create_object_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // paymentgateway_create_object_v1_response->obj_debug
    if(paymentgateway_create_object_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(paymentgateway_create_object_v1_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // paymentgateway_create_object_v1_response->m_payload
    if (!paymentgateway_create_object_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = paymentgateway_create_object_v1_response_m_payload_convertToJSON(paymentgateway_create_object_v1_response->m_payload);
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

paymentgateway_create_object_v1_response_t *paymentgateway_create_object_v1_response_parseFromJSON(cJSON *paymentgateway_create_object_v1_responseJSON){

    paymentgateway_create_object_v1_response_t *paymentgateway_create_object_v1_response_local_var = NULL;

    // define the local variable for paymentgateway_create_object_v1_response->obj_debug_payload
    common_response_obj_debug_payload_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for paymentgateway_create_object_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for paymentgateway_create_object_v1_response->m_payload
    paymentgateway_create_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // paymentgateway_create_object_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(paymentgateway_create_object_v1_responseJSON, "objDebugPayload");
    if (cJSON_IsNull(obj_debug_payload)) {
        obj_debug_payload = NULL;
    }
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_parseFromJSON(obj_debug_payload); //nonprimitive

    // paymentgateway_create_object_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(paymentgateway_create_object_v1_responseJSON, "objDebug");
    if (cJSON_IsNull(obj_debug)) {
        obj_debug = NULL;
    }
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // paymentgateway_create_object_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(paymentgateway_create_object_v1_responseJSON, "mPayload");
    if (cJSON_IsNull(m_payload)) {
        m_payload = NULL;
    }
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = paymentgateway_create_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive



    paymentgateway_create_object_v1_response_local_var = paymentgateway_create_object_v1_response_create_internal (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    if (!paymentgateway_create_object_v1_response_local_var) {
        goto end;
    }

    return paymentgateway_create_object_v1_response_local_var;
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
        paymentgateway_create_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
