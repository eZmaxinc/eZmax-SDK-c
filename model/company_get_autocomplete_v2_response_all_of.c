#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "company_get_autocomplete_v2_response_all_of.h"



company_get_autocomplete_v2_response_all_of_t *company_get_autocomplete_v2_response_all_of_create(
    company_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    company_get_autocomplete_v2_response_all_of_t *company_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(company_get_autocomplete_v2_response_all_of_t));
    if (!company_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    company_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return company_get_autocomplete_v2_response_all_of_local_var;
}


void company_get_autocomplete_v2_response_all_of_free(company_get_autocomplete_v2_response_all_of_t *company_get_autocomplete_v2_response_all_of) {
    if(NULL == company_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (company_get_autocomplete_v2_response_all_of->m_payload) {
        company_get_autocomplete_v2_response_m_payload_free(company_get_autocomplete_v2_response_all_of->m_payload);
        company_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(company_get_autocomplete_v2_response_all_of);
}

cJSON *company_get_autocomplete_v2_response_all_of_convertToJSON(company_get_autocomplete_v2_response_all_of_t *company_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // company_get_autocomplete_v2_response_all_of->m_payload
    if (!company_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = company_get_autocomplete_v2_response_m_payload_convertToJSON(company_get_autocomplete_v2_response_all_of->m_payload);
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

company_get_autocomplete_v2_response_all_of_t *company_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *company_get_autocomplete_v2_response_all_ofJSON){

    company_get_autocomplete_v2_response_all_of_t *company_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for company_get_autocomplete_v2_response_all_of->m_payload
    company_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // company_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(company_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = company_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    company_get_autocomplete_v2_response_all_of_local_var = company_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return company_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        company_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
