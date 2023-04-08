#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityexternal_get_autocomplete_v2_response_all_of.h"



billingentityexternal_get_autocomplete_v2_response_all_of_t *billingentityexternal_get_autocomplete_v2_response_all_of_create(
    billingentityexternal_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    billingentityexternal_get_autocomplete_v2_response_all_of_t *billingentityexternal_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(billingentityexternal_get_autocomplete_v2_response_all_of_t));
    if (!billingentityexternal_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    billingentityexternal_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return billingentityexternal_get_autocomplete_v2_response_all_of_local_var;
}


void billingentityexternal_get_autocomplete_v2_response_all_of_free(billingentityexternal_get_autocomplete_v2_response_all_of_t *billingentityexternal_get_autocomplete_v2_response_all_of) {
    if(NULL == billingentityexternal_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityexternal_get_autocomplete_v2_response_all_of->m_payload) {
        billingentityexternal_get_autocomplete_v2_response_m_payload_free(billingentityexternal_get_autocomplete_v2_response_all_of->m_payload);
        billingentityexternal_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(billingentityexternal_get_autocomplete_v2_response_all_of);
}

cJSON *billingentityexternal_get_autocomplete_v2_response_all_of_convertToJSON(billingentityexternal_get_autocomplete_v2_response_all_of_t *billingentityexternal_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // billingentityexternal_get_autocomplete_v2_response_all_of->m_payload
    if (!billingentityexternal_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = billingentityexternal_get_autocomplete_v2_response_m_payload_convertToJSON(billingentityexternal_get_autocomplete_v2_response_all_of->m_payload);
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

billingentityexternal_get_autocomplete_v2_response_all_of_t *billingentityexternal_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *billingentityexternal_get_autocomplete_v2_response_all_ofJSON){

    billingentityexternal_get_autocomplete_v2_response_all_of_t *billingentityexternal_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for billingentityexternal_get_autocomplete_v2_response_all_of->m_payload
    billingentityexternal_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // billingentityexternal_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(billingentityexternal_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = billingentityexternal_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    billingentityexternal_get_autocomplete_v2_response_all_of_local_var = billingentityexternal_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return billingentityexternal_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        billingentityexternal_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
