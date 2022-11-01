#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "franchiseoffice_get_autocomplete_v2_response_all_of.h"



franchiseoffice_get_autocomplete_v2_response_all_of_t *franchiseoffice_get_autocomplete_v2_response_all_of_create(
    franchiseoffice_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    franchiseoffice_get_autocomplete_v2_response_all_of_t *franchiseoffice_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(franchiseoffice_get_autocomplete_v2_response_all_of_t));
    if (!franchiseoffice_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    franchiseoffice_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return franchiseoffice_get_autocomplete_v2_response_all_of_local_var;
}


void franchiseoffice_get_autocomplete_v2_response_all_of_free(franchiseoffice_get_autocomplete_v2_response_all_of_t *franchiseoffice_get_autocomplete_v2_response_all_of) {
    if(NULL == franchiseoffice_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (franchiseoffice_get_autocomplete_v2_response_all_of->m_payload) {
        franchiseoffice_get_autocomplete_v2_response_m_payload_free(franchiseoffice_get_autocomplete_v2_response_all_of->m_payload);
        franchiseoffice_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(franchiseoffice_get_autocomplete_v2_response_all_of);
}

cJSON *franchiseoffice_get_autocomplete_v2_response_all_of_convertToJSON(franchiseoffice_get_autocomplete_v2_response_all_of_t *franchiseoffice_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // franchiseoffice_get_autocomplete_v2_response_all_of->m_payload
    if (!franchiseoffice_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = franchiseoffice_get_autocomplete_v2_response_m_payload_convertToJSON(franchiseoffice_get_autocomplete_v2_response_all_of->m_payload);
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

franchiseoffice_get_autocomplete_v2_response_all_of_t *franchiseoffice_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *franchiseoffice_get_autocomplete_v2_response_all_ofJSON){

    franchiseoffice_get_autocomplete_v2_response_all_of_t *franchiseoffice_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for franchiseoffice_get_autocomplete_v2_response_all_of->m_payload
    franchiseoffice_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // franchiseoffice_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(franchiseoffice_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = franchiseoffice_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    franchiseoffice_get_autocomplete_v2_response_all_of_local_var = franchiseoffice_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return franchiseoffice_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        franchiseoffice_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
