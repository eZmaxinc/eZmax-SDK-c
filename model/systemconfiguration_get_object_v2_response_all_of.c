#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "systemconfiguration_get_object_v2_response_all_of.h"



systemconfiguration_get_object_v2_response_all_of_t *systemconfiguration_get_object_v2_response_all_of_create(
    systemconfiguration_get_object_v2_response_m_payload_t *m_payload
    ) {
    systemconfiguration_get_object_v2_response_all_of_t *systemconfiguration_get_object_v2_response_all_of_local_var = malloc(sizeof(systemconfiguration_get_object_v2_response_all_of_t));
    if (!systemconfiguration_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    systemconfiguration_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return systemconfiguration_get_object_v2_response_all_of_local_var;
}


void systemconfiguration_get_object_v2_response_all_of_free(systemconfiguration_get_object_v2_response_all_of_t *systemconfiguration_get_object_v2_response_all_of) {
    if(NULL == systemconfiguration_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (systemconfiguration_get_object_v2_response_all_of->m_payload) {
        systemconfiguration_get_object_v2_response_m_payload_free(systemconfiguration_get_object_v2_response_all_of->m_payload);
        systemconfiguration_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(systemconfiguration_get_object_v2_response_all_of);
}

cJSON *systemconfiguration_get_object_v2_response_all_of_convertToJSON(systemconfiguration_get_object_v2_response_all_of_t *systemconfiguration_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // systemconfiguration_get_object_v2_response_all_of->m_payload
    if (!systemconfiguration_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = systemconfiguration_get_object_v2_response_m_payload_convertToJSON(systemconfiguration_get_object_v2_response_all_of->m_payload);
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

systemconfiguration_get_object_v2_response_all_of_t *systemconfiguration_get_object_v2_response_all_of_parseFromJSON(cJSON *systemconfiguration_get_object_v2_response_all_ofJSON){

    systemconfiguration_get_object_v2_response_all_of_t *systemconfiguration_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for systemconfiguration_get_object_v2_response_all_of->m_payload
    systemconfiguration_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // systemconfiguration_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(systemconfiguration_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = systemconfiguration_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    systemconfiguration_get_object_v2_response_all_of_local_var = systemconfiguration_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return systemconfiguration_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        systemconfiguration_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
