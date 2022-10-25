#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "billingentityinternal_get_autocomplete_v2_response_all_of.h"



billingentityinternal_get_autocomplete_v2_response_all_of_t *billingentityinternal_get_autocomplete_v2_response_all_of_create(
    billingentityinternal_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    billingentityinternal_get_autocomplete_v2_response_all_of_t *billingentityinternal_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(billingentityinternal_get_autocomplete_v2_response_all_of_t));
    if (!billingentityinternal_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    billingentityinternal_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return billingentityinternal_get_autocomplete_v2_response_all_of_local_var;
}


void billingentityinternal_get_autocomplete_v2_response_all_of_free(billingentityinternal_get_autocomplete_v2_response_all_of_t *billingentityinternal_get_autocomplete_v2_response_all_of) {
    if(NULL == billingentityinternal_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (billingentityinternal_get_autocomplete_v2_response_all_of->m_payload) {
        billingentityinternal_get_autocomplete_v2_response_m_payload_free(billingentityinternal_get_autocomplete_v2_response_all_of->m_payload);
        billingentityinternal_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(billingentityinternal_get_autocomplete_v2_response_all_of);
}

cJSON *billingentityinternal_get_autocomplete_v2_response_all_of_convertToJSON(billingentityinternal_get_autocomplete_v2_response_all_of_t *billingentityinternal_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // billingentityinternal_get_autocomplete_v2_response_all_of->m_payload
    if (!billingentityinternal_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = billingentityinternal_get_autocomplete_v2_response_m_payload_convertToJSON(billingentityinternal_get_autocomplete_v2_response_all_of->m_payload);
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

billingentityinternal_get_autocomplete_v2_response_all_of_t *billingentityinternal_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *billingentityinternal_get_autocomplete_v2_response_all_ofJSON){

    billingentityinternal_get_autocomplete_v2_response_all_of_t *billingentityinternal_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for billingentityinternal_get_autocomplete_v2_response_all_of->m_payload
    billingentityinternal_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // billingentityinternal_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(billingentityinternal_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = billingentityinternal_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    billingentityinternal_get_autocomplete_v2_response_all_of_local_var = billingentityinternal_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return billingentityinternal_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        billingentityinternal_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
