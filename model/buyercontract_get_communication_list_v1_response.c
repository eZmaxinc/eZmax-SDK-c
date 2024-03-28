#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buyercontract_get_communication_list_v1_response.h"



buyercontract_get_communication_list_v1_response_t *buyercontract_get_communication_list_v1_response_create(
    common_response_obj_debug_payload_get_list_t *obj_debug_payload,
    common_response_obj_debug_t *obj_debug,
    buyercontract_get_communication_list_v1_response_m_payload_t *m_payload
    ) {
    buyercontract_get_communication_list_v1_response_t *buyercontract_get_communication_list_v1_response_local_var = malloc(sizeof(buyercontract_get_communication_list_v1_response_t));
    if (!buyercontract_get_communication_list_v1_response_local_var) {
        return NULL;
    }
    buyercontract_get_communication_list_v1_response_local_var->obj_debug_payload = obj_debug_payload;
    buyercontract_get_communication_list_v1_response_local_var->obj_debug = obj_debug;
    buyercontract_get_communication_list_v1_response_local_var->m_payload = m_payload;

    return buyercontract_get_communication_list_v1_response_local_var;
}


void buyercontract_get_communication_list_v1_response_free(buyercontract_get_communication_list_v1_response_t *buyercontract_get_communication_list_v1_response) {
    if(NULL == buyercontract_get_communication_list_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (buyercontract_get_communication_list_v1_response->obj_debug_payload) {
        common_response_obj_debug_payload_get_list_free(buyercontract_get_communication_list_v1_response->obj_debug_payload);
        buyercontract_get_communication_list_v1_response->obj_debug_payload = NULL;
    }
    if (buyercontract_get_communication_list_v1_response->obj_debug) {
        common_response_obj_debug_free(buyercontract_get_communication_list_v1_response->obj_debug);
        buyercontract_get_communication_list_v1_response->obj_debug = NULL;
    }
    if (buyercontract_get_communication_list_v1_response->m_payload) {
        buyercontract_get_communication_list_v1_response_m_payload_free(buyercontract_get_communication_list_v1_response->m_payload);
        buyercontract_get_communication_list_v1_response->m_payload = NULL;
    }
    free(buyercontract_get_communication_list_v1_response);
}

cJSON *buyercontract_get_communication_list_v1_response_convertToJSON(buyercontract_get_communication_list_v1_response_t *buyercontract_get_communication_list_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // buyercontract_get_communication_list_v1_response->obj_debug_payload
    if (!buyercontract_get_communication_list_v1_response->obj_debug_payload) {
        goto fail;
    }
    cJSON *obj_debug_payload_local_JSON = common_response_obj_debug_payload_get_list_convertToJSON(buyercontract_get_communication_list_v1_response->obj_debug_payload);
    if(obj_debug_payload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebugPayload", obj_debug_payload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // buyercontract_get_communication_list_v1_response->obj_debug
    if(buyercontract_get_communication_list_v1_response->obj_debug) {
    cJSON *obj_debug_local_JSON = common_response_obj_debug_convertToJSON(buyercontract_get_communication_list_v1_response->obj_debug);
    if(obj_debug_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objDebug", obj_debug_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // buyercontract_get_communication_list_v1_response->m_payload
    if (!buyercontract_get_communication_list_v1_response->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = buyercontract_get_communication_list_v1_response_m_payload_convertToJSON(buyercontract_get_communication_list_v1_response->m_payload);
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

buyercontract_get_communication_list_v1_response_t *buyercontract_get_communication_list_v1_response_parseFromJSON(cJSON *buyercontract_get_communication_list_v1_responseJSON){

    buyercontract_get_communication_list_v1_response_t *buyercontract_get_communication_list_v1_response_local_var = NULL;

    // define the local variable for buyercontract_get_communication_list_v1_response->obj_debug_payload
    common_response_obj_debug_payload_get_list_t *obj_debug_payload_local_nonprim = NULL;

    // define the local variable for buyercontract_get_communication_list_v1_response->obj_debug
    common_response_obj_debug_t *obj_debug_local_nonprim = NULL;

    // define the local variable for buyercontract_get_communication_list_v1_response->m_payload
    buyercontract_get_communication_list_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // buyercontract_get_communication_list_v1_response->obj_debug_payload
    cJSON *obj_debug_payload = cJSON_GetObjectItemCaseSensitive(buyercontract_get_communication_list_v1_responseJSON, "objDebugPayload");
    if (!obj_debug_payload) {
        goto end;
    }

    
    obj_debug_payload_local_nonprim = common_response_obj_debug_payload_get_list_parseFromJSON(obj_debug_payload); //nonprimitive

    // buyercontract_get_communication_list_v1_response->obj_debug
    cJSON *obj_debug = cJSON_GetObjectItemCaseSensitive(buyercontract_get_communication_list_v1_responseJSON, "objDebug");
    if (obj_debug) { 
    obj_debug_local_nonprim = common_response_obj_debug_parseFromJSON(obj_debug); //nonprimitive
    }

    // buyercontract_get_communication_list_v1_response->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(buyercontract_get_communication_list_v1_responseJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = buyercontract_get_communication_list_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    buyercontract_get_communication_list_v1_response_local_var = buyercontract_get_communication_list_v1_response_create (
        obj_debug_payload_local_nonprim,
        obj_debug ? obj_debug_local_nonprim : NULL,
        m_payload_local_nonprim
        );

    return buyercontract_get_communication_list_v1_response_local_var;
end:
    if (obj_debug_payload_local_nonprim) {
        common_response_obj_debug_payload_get_list_free(obj_debug_payload_local_nonprim);
        obj_debug_payload_local_nonprim = NULL;
    }
    if (obj_debug_local_nonprim) {
        common_response_obj_debug_free(obj_debug_local_nonprim);
        obj_debug_local_nonprim = NULL;
    }
    if (m_payload_local_nonprim) {
        buyercontract_get_communication_list_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}