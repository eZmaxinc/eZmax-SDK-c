#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_get_object_v2_response_all_of.h"



webhook_get_object_v2_response_all_of_t *webhook_get_object_v2_response_all_of_create(
    webhook_get_object_v2_response_m_payload_t *m_payload
    ) {
    webhook_get_object_v2_response_all_of_t *webhook_get_object_v2_response_all_of_local_var = malloc(sizeof(webhook_get_object_v2_response_all_of_t));
    if (!webhook_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    webhook_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return webhook_get_object_v2_response_all_of_local_var;
}


void webhook_get_object_v2_response_all_of_free(webhook_get_object_v2_response_all_of_t *webhook_get_object_v2_response_all_of) {
    if(NULL == webhook_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_get_object_v2_response_all_of->m_payload) {
        webhook_get_object_v2_response_m_payload_free(webhook_get_object_v2_response_all_of->m_payload);
        webhook_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(webhook_get_object_v2_response_all_of);
}

cJSON *webhook_get_object_v2_response_all_of_convertToJSON(webhook_get_object_v2_response_all_of_t *webhook_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // webhook_get_object_v2_response_all_of->m_payload
    if (!webhook_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = webhook_get_object_v2_response_m_payload_convertToJSON(webhook_get_object_v2_response_all_of->m_payload);
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

webhook_get_object_v2_response_all_of_t *webhook_get_object_v2_response_all_of_parseFromJSON(cJSON *webhook_get_object_v2_response_all_ofJSON){

    webhook_get_object_v2_response_all_of_t *webhook_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for webhook_get_object_v2_response_all_of->m_payload
    webhook_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // webhook_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(webhook_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = webhook_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    webhook_get_object_v2_response_all_of_local_var = webhook_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return webhook_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        webhook_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
