#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "period_get_autocomplete_v2_response_all_of.h"



period_get_autocomplete_v2_response_all_of_t *period_get_autocomplete_v2_response_all_of_create(
    period_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    period_get_autocomplete_v2_response_all_of_t *period_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(period_get_autocomplete_v2_response_all_of_t));
    if (!period_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    period_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return period_get_autocomplete_v2_response_all_of_local_var;
}


void period_get_autocomplete_v2_response_all_of_free(period_get_autocomplete_v2_response_all_of_t *period_get_autocomplete_v2_response_all_of) {
    if(NULL == period_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (period_get_autocomplete_v2_response_all_of->m_payload) {
        period_get_autocomplete_v2_response_m_payload_free(period_get_autocomplete_v2_response_all_of->m_payload);
        period_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(period_get_autocomplete_v2_response_all_of);
}

cJSON *period_get_autocomplete_v2_response_all_of_convertToJSON(period_get_autocomplete_v2_response_all_of_t *period_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // period_get_autocomplete_v2_response_all_of->m_payload
    if (!period_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = period_get_autocomplete_v2_response_m_payload_convertToJSON(period_get_autocomplete_v2_response_all_of->m_payload);
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

period_get_autocomplete_v2_response_all_of_t *period_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *period_get_autocomplete_v2_response_all_ofJSON){

    period_get_autocomplete_v2_response_all_of_t *period_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for period_get_autocomplete_v2_response_all_of->m_payload
    period_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // period_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(period_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = period_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    period_get_autocomplete_v2_response_all_of_local_var = period_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return period_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        period_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
