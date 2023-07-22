#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subnet_create_object_v1_response_all_of.h"



subnet_create_object_v1_response_all_of_t *subnet_create_object_v1_response_all_of_create(
    subnet_create_object_v1_response_m_payload_t *m_payload
    ) {
    subnet_create_object_v1_response_all_of_t *subnet_create_object_v1_response_all_of_local_var = malloc(sizeof(subnet_create_object_v1_response_all_of_t));
    if (!subnet_create_object_v1_response_all_of_local_var) {
        return NULL;
    }
    subnet_create_object_v1_response_all_of_local_var->m_payload = m_payload;

    return subnet_create_object_v1_response_all_of_local_var;
}


void subnet_create_object_v1_response_all_of_free(subnet_create_object_v1_response_all_of_t *subnet_create_object_v1_response_all_of) {
    if(NULL == subnet_create_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (subnet_create_object_v1_response_all_of->m_payload) {
        subnet_create_object_v1_response_m_payload_free(subnet_create_object_v1_response_all_of->m_payload);
        subnet_create_object_v1_response_all_of->m_payload = NULL;
    }
    free(subnet_create_object_v1_response_all_of);
}

cJSON *subnet_create_object_v1_response_all_of_convertToJSON(subnet_create_object_v1_response_all_of_t *subnet_create_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // subnet_create_object_v1_response_all_of->m_payload
    if (!subnet_create_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = subnet_create_object_v1_response_m_payload_convertToJSON(subnet_create_object_v1_response_all_of->m_payload);
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

subnet_create_object_v1_response_all_of_t *subnet_create_object_v1_response_all_of_parseFromJSON(cJSON *subnet_create_object_v1_response_all_ofJSON){

    subnet_create_object_v1_response_all_of_t *subnet_create_object_v1_response_all_of_local_var = NULL;

    // define the local variable for subnet_create_object_v1_response_all_of->m_payload
    subnet_create_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // subnet_create_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(subnet_create_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = subnet_create_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    subnet_create_object_v1_response_all_of_local_var = subnet_create_object_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return subnet_create_object_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        subnet_create_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
