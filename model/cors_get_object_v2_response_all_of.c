#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cors_get_object_v2_response_all_of.h"



cors_get_object_v2_response_all_of_t *cors_get_object_v2_response_all_of_create(
    cors_get_object_v2_response_m_payload_t *m_payload
    ) {
    cors_get_object_v2_response_all_of_t *cors_get_object_v2_response_all_of_local_var = malloc(sizeof(cors_get_object_v2_response_all_of_t));
    if (!cors_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    cors_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return cors_get_object_v2_response_all_of_local_var;
}


void cors_get_object_v2_response_all_of_free(cors_get_object_v2_response_all_of_t *cors_get_object_v2_response_all_of) {
    if(NULL == cors_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (cors_get_object_v2_response_all_of->m_payload) {
        cors_get_object_v2_response_m_payload_free(cors_get_object_v2_response_all_of->m_payload);
        cors_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(cors_get_object_v2_response_all_of);
}

cJSON *cors_get_object_v2_response_all_of_convertToJSON(cors_get_object_v2_response_all_of_t *cors_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // cors_get_object_v2_response_all_of->m_payload
    if (!cors_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = cors_get_object_v2_response_m_payload_convertToJSON(cors_get_object_v2_response_all_of->m_payload);
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

cors_get_object_v2_response_all_of_t *cors_get_object_v2_response_all_of_parseFromJSON(cJSON *cors_get_object_v2_response_all_ofJSON){

    cors_get_object_v2_response_all_of_t *cors_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for cors_get_object_v2_response_all_of->m_payload
    cors_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // cors_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(cors_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = cors_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    cors_get_object_v2_response_all_of_local_var = cors_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return cors_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        cors_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
