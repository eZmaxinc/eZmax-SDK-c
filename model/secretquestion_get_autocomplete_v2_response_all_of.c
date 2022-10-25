#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "secretquestion_get_autocomplete_v2_response_all_of.h"



secretquestion_get_autocomplete_v2_response_all_of_t *secretquestion_get_autocomplete_v2_response_all_of_create(
    secretquestion_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    secretquestion_get_autocomplete_v2_response_all_of_t *secretquestion_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(secretquestion_get_autocomplete_v2_response_all_of_t));
    if (!secretquestion_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    secretquestion_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return secretquestion_get_autocomplete_v2_response_all_of_local_var;
}


void secretquestion_get_autocomplete_v2_response_all_of_free(secretquestion_get_autocomplete_v2_response_all_of_t *secretquestion_get_autocomplete_v2_response_all_of) {
    if(NULL == secretquestion_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (secretquestion_get_autocomplete_v2_response_all_of->m_payload) {
        secretquestion_get_autocomplete_v2_response_m_payload_free(secretquestion_get_autocomplete_v2_response_all_of->m_payload);
        secretquestion_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(secretquestion_get_autocomplete_v2_response_all_of);
}

cJSON *secretquestion_get_autocomplete_v2_response_all_of_convertToJSON(secretquestion_get_autocomplete_v2_response_all_of_t *secretquestion_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // secretquestion_get_autocomplete_v2_response_all_of->m_payload
    if (!secretquestion_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = secretquestion_get_autocomplete_v2_response_m_payload_convertToJSON(secretquestion_get_autocomplete_v2_response_all_of->m_payload);
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

secretquestion_get_autocomplete_v2_response_all_of_t *secretquestion_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *secretquestion_get_autocomplete_v2_response_all_ofJSON){

    secretquestion_get_autocomplete_v2_response_all_of_t *secretquestion_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for secretquestion_get_autocomplete_v2_response_all_of->m_payload
    secretquestion_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // secretquestion_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(secretquestion_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = secretquestion_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    secretquestion_get_autocomplete_v2_response_all_of_local_var = secretquestion_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return secretquestion_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        secretquestion_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
