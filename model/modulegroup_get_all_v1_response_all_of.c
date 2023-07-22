#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "modulegroup_get_all_v1_response_all_of.h"



modulegroup_get_all_v1_response_all_of_t *modulegroup_get_all_v1_response_all_of_create(
    modulegroup_get_all_v1_response_m_payload_t *m_payload
    ) {
    modulegroup_get_all_v1_response_all_of_t *modulegroup_get_all_v1_response_all_of_local_var = malloc(sizeof(modulegroup_get_all_v1_response_all_of_t));
    if (!modulegroup_get_all_v1_response_all_of_local_var) {
        return NULL;
    }
    modulegroup_get_all_v1_response_all_of_local_var->m_payload = m_payload;

    return modulegroup_get_all_v1_response_all_of_local_var;
}


void modulegroup_get_all_v1_response_all_of_free(modulegroup_get_all_v1_response_all_of_t *modulegroup_get_all_v1_response_all_of) {
    if(NULL == modulegroup_get_all_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (modulegroup_get_all_v1_response_all_of->m_payload) {
        modulegroup_get_all_v1_response_m_payload_free(modulegroup_get_all_v1_response_all_of->m_payload);
        modulegroup_get_all_v1_response_all_of->m_payload = NULL;
    }
    free(modulegroup_get_all_v1_response_all_of);
}

cJSON *modulegroup_get_all_v1_response_all_of_convertToJSON(modulegroup_get_all_v1_response_all_of_t *modulegroup_get_all_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // modulegroup_get_all_v1_response_all_of->m_payload
    if (!modulegroup_get_all_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = modulegroup_get_all_v1_response_m_payload_convertToJSON(modulegroup_get_all_v1_response_all_of->m_payload);
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

modulegroup_get_all_v1_response_all_of_t *modulegroup_get_all_v1_response_all_of_parseFromJSON(cJSON *modulegroup_get_all_v1_response_all_ofJSON){

    modulegroup_get_all_v1_response_all_of_t *modulegroup_get_all_v1_response_all_of_local_var = NULL;

    // define the local variable for modulegroup_get_all_v1_response_all_of->m_payload
    modulegroup_get_all_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // modulegroup_get_all_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(modulegroup_get_all_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = modulegroup_get_all_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    modulegroup_get_all_v1_response_all_of_local_var = modulegroup_get_all_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return modulegroup_get_all_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        modulegroup_get_all_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
