#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "apikey_edit_permissions_v1_response_all_of.h"



apikey_edit_permissions_v1_response_all_of_t *apikey_edit_permissions_v1_response_all_of_create(
    apikey_edit_permissions_v1_response_m_payload_t *m_payload
    ) {
    apikey_edit_permissions_v1_response_all_of_t *apikey_edit_permissions_v1_response_all_of_local_var = malloc(sizeof(apikey_edit_permissions_v1_response_all_of_t));
    if (!apikey_edit_permissions_v1_response_all_of_local_var) {
        return NULL;
    }
    apikey_edit_permissions_v1_response_all_of_local_var->m_payload = m_payload;

    return apikey_edit_permissions_v1_response_all_of_local_var;
}


void apikey_edit_permissions_v1_response_all_of_free(apikey_edit_permissions_v1_response_all_of_t *apikey_edit_permissions_v1_response_all_of) {
    if(NULL == apikey_edit_permissions_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (apikey_edit_permissions_v1_response_all_of->m_payload) {
        apikey_edit_permissions_v1_response_m_payload_free(apikey_edit_permissions_v1_response_all_of->m_payload);
        apikey_edit_permissions_v1_response_all_of->m_payload = NULL;
    }
    free(apikey_edit_permissions_v1_response_all_of);
}

cJSON *apikey_edit_permissions_v1_response_all_of_convertToJSON(apikey_edit_permissions_v1_response_all_of_t *apikey_edit_permissions_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // apikey_edit_permissions_v1_response_all_of->m_payload
    if (!apikey_edit_permissions_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = apikey_edit_permissions_v1_response_m_payload_convertToJSON(apikey_edit_permissions_v1_response_all_of->m_payload);
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

apikey_edit_permissions_v1_response_all_of_t *apikey_edit_permissions_v1_response_all_of_parseFromJSON(cJSON *apikey_edit_permissions_v1_response_all_ofJSON){

    apikey_edit_permissions_v1_response_all_of_t *apikey_edit_permissions_v1_response_all_of_local_var = NULL;

    // define the local variable for apikey_edit_permissions_v1_response_all_of->m_payload
    apikey_edit_permissions_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // apikey_edit_permissions_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(apikey_edit_permissions_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = apikey_edit_permissions_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    apikey_edit_permissions_v1_response_all_of_local_var = apikey_edit_permissions_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return apikey_edit_permissions_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        apikey_edit_permissions_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
