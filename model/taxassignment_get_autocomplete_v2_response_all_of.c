#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "taxassignment_get_autocomplete_v2_response_all_of.h"



taxassignment_get_autocomplete_v2_response_all_of_t *taxassignment_get_autocomplete_v2_response_all_of_create(
    taxassignment_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    taxassignment_get_autocomplete_v2_response_all_of_t *taxassignment_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(taxassignment_get_autocomplete_v2_response_all_of_t));
    if (!taxassignment_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    taxassignment_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return taxassignment_get_autocomplete_v2_response_all_of_local_var;
}


void taxassignment_get_autocomplete_v2_response_all_of_free(taxassignment_get_autocomplete_v2_response_all_of_t *taxassignment_get_autocomplete_v2_response_all_of) {
    if(NULL == taxassignment_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (taxassignment_get_autocomplete_v2_response_all_of->m_payload) {
        taxassignment_get_autocomplete_v2_response_m_payload_free(taxassignment_get_autocomplete_v2_response_all_of->m_payload);
        taxassignment_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(taxassignment_get_autocomplete_v2_response_all_of);
}

cJSON *taxassignment_get_autocomplete_v2_response_all_of_convertToJSON(taxassignment_get_autocomplete_v2_response_all_of_t *taxassignment_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // taxassignment_get_autocomplete_v2_response_all_of->m_payload
    if (!taxassignment_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = taxassignment_get_autocomplete_v2_response_m_payload_convertToJSON(taxassignment_get_autocomplete_v2_response_all_of->m_payload);
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

taxassignment_get_autocomplete_v2_response_all_of_t *taxassignment_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *taxassignment_get_autocomplete_v2_response_all_ofJSON){

    taxassignment_get_autocomplete_v2_response_all_of_t *taxassignment_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for taxassignment_get_autocomplete_v2_response_all_of->m_payload
    taxassignment_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // taxassignment_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(taxassignment_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = taxassignment_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    taxassignment_get_autocomplete_v2_response_all_of_local_var = taxassignment_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return taxassignment_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        taxassignment_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
