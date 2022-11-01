#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchisebroker_get_autocomplete_v2_response_all_of.h"



franchisebroker_get_autocomplete_v2_response_all_of_t *franchisebroker_get_autocomplete_v2_response_all_of_create(
    franchisebroker_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    franchisebroker_get_autocomplete_v2_response_all_of_t *franchisebroker_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(franchisebroker_get_autocomplete_v2_response_all_of_t));
    if (!franchisebroker_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    franchisebroker_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return franchisebroker_get_autocomplete_v2_response_all_of_local_var;
}


void franchisebroker_get_autocomplete_v2_response_all_of_free(franchisebroker_get_autocomplete_v2_response_all_of_t *franchisebroker_get_autocomplete_v2_response_all_of) {
    if(NULL == franchisebroker_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (franchisebroker_get_autocomplete_v2_response_all_of->m_payload) {
        franchisebroker_get_autocomplete_v2_response_m_payload_free(franchisebroker_get_autocomplete_v2_response_all_of->m_payload);
        franchisebroker_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(franchisebroker_get_autocomplete_v2_response_all_of);
}

cJSON *franchisebroker_get_autocomplete_v2_response_all_of_convertToJSON(franchisebroker_get_autocomplete_v2_response_all_of_t *franchisebroker_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // franchisebroker_get_autocomplete_v2_response_all_of->m_payload
    if (!franchisebroker_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = franchisebroker_get_autocomplete_v2_response_m_payload_convertToJSON(franchisebroker_get_autocomplete_v2_response_all_of->m_payload);
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

franchisebroker_get_autocomplete_v2_response_all_of_t *franchisebroker_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *franchisebroker_get_autocomplete_v2_response_all_ofJSON){

    franchisebroker_get_autocomplete_v2_response_all_of_t *franchisebroker_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for franchisebroker_get_autocomplete_v2_response_all_of->m_payload
    franchisebroker_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // franchisebroker_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(franchisebroker_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = franchisebroker_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    franchisebroker_get_autocomplete_v2_response_all_of_local_var = franchisebroker_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return franchisebroker_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        franchisebroker_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
