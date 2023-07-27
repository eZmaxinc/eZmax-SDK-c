#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "emailtype_get_autocomplete_v2_response_all_of.h"



emailtype_get_autocomplete_v2_response_all_of_t *emailtype_get_autocomplete_v2_response_all_of_create(
    emailtype_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    emailtype_get_autocomplete_v2_response_all_of_t *emailtype_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(emailtype_get_autocomplete_v2_response_all_of_t));
    if (!emailtype_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    emailtype_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return emailtype_get_autocomplete_v2_response_all_of_local_var;
}


void emailtype_get_autocomplete_v2_response_all_of_free(emailtype_get_autocomplete_v2_response_all_of_t *emailtype_get_autocomplete_v2_response_all_of) {
    if(NULL == emailtype_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (emailtype_get_autocomplete_v2_response_all_of->m_payload) {
        emailtype_get_autocomplete_v2_response_m_payload_free(emailtype_get_autocomplete_v2_response_all_of->m_payload);
        emailtype_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(emailtype_get_autocomplete_v2_response_all_of);
}

cJSON *emailtype_get_autocomplete_v2_response_all_of_convertToJSON(emailtype_get_autocomplete_v2_response_all_of_t *emailtype_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // emailtype_get_autocomplete_v2_response_all_of->m_payload
    if (!emailtype_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = emailtype_get_autocomplete_v2_response_m_payload_convertToJSON(emailtype_get_autocomplete_v2_response_all_of->m_payload);
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

emailtype_get_autocomplete_v2_response_all_of_t *emailtype_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *emailtype_get_autocomplete_v2_response_all_ofJSON){

    emailtype_get_autocomplete_v2_response_all_of_t *emailtype_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for emailtype_get_autocomplete_v2_response_all_of->m_payload
    emailtype_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // emailtype_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(emailtype_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = emailtype_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    emailtype_get_autocomplete_v2_response_all_of_local_var = emailtype_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return emailtype_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        emailtype_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
