#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "signature_get_object_v2_response_all_of.h"



signature_get_object_v2_response_all_of_t *signature_get_object_v2_response_all_of_create(
    signature_get_object_v2_response_m_payload_t *m_payload
    ) {
    signature_get_object_v2_response_all_of_t *signature_get_object_v2_response_all_of_local_var = malloc(sizeof(signature_get_object_v2_response_all_of_t));
    if (!signature_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    signature_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return signature_get_object_v2_response_all_of_local_var;
}


void signature_get_object_v2_response_all_of_free(signature_get_object_v2_response_all_of_t *signature_get_object_v2_response_all_of) {
    if(NULL == signature_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (signature_get_object_v2_response_all_of->m_payload) {
        signature_get_object_v2_response_m_payload_free(signature_get_object_v2_response_all_of->m_payload);
        signature_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(signature_get_object_v2_response_all_of);
}

cJSON *signature_get_object_v2_response_all_of_convertToJSON(signature_get_object_v2_response_all_of_t *signature_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // signature_get_object_v2_response_all_of->m_payload
    if (!signature_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = signature_get_object_v2_response_m_payload_convertToJSON(signature_get_object_v2_response_all_of->m_payload);
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

signature_get_object_v2_response_all_of_t *signature_get_object_v2_response_all_of_parseFromJSON(cJSON *signature_get_object_v2_response_all_ofJSON){

    signature_get_object_v2_response_all_of_t *signature_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for signature_get_object_v2_response_all_of->m_payload
    signature_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // signature_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(signature_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = signature_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    signature_get_object_v2_response_all_of_local_var = signature_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return signature_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        signature_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
