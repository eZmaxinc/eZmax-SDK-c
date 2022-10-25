#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_get_autocomplete_v2_response_all_of.h"



ezsignfoldertype_get_autocomplete_v2_response_all_of_t *ezsignfoldertype_get_autocomplete_v2_response_all_of_create(
    ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *m_payload
    ) {
    ezsignfoldertype_get_autocomplete_v2_response_all_of_t *ezsignfoldertype_get_autocomplete_v2_response_all_of_local_var = malloc(sizeof(ezsignfoldertype_get_autocomplete_v2_response_all_of_t));
    if (!ezsignfoldertype_get_autocomplete_v2_response_all_of_local_var) {
        return NULL;
    }
    ezsignfoldertype_get_autocomplete_v2_response_all_of_local_var->m_payload = m_payload;

    return ezsignfoldertype_get_autocomplete_v2_response_all_of_local_var;
}


void ezsignfoldertype_get_autocomplete_v2_response_all_of_free(ezsignfoldertype_get_autocomplete_v2_response_all_of_t *ezsignfoldertype_get_autocomplete_v2_response_all_of) {
    if(NULL == ezsignfoldertype_get_autocomplete_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_get_autocomplete_v2_response_all_of->m_payload) {
        ezsignfoldertype_get_autocomplete_v2_response_m_payload_free(ezsignfoldertype_get_autocomplete_v2_response_all_of->m_payload);
        ezsignfoldertype_get_autocomplete_v2_response_all_of->m_payload = NULL;
    }
    free(ezsignfoldertype_get_autocomplete_v2_response_all_of);
}

cJSON *ezsignfoldertype_get_autocomplete_v2_response_all_of_convertToJSON(ezsignfoldertype_get_autocomplete_v2_response_all_of_t *ezsignfoldertype_get_autocomplete_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_get_autocomplete_v2_response_all_of->m_payload
    if (!ezsignfoldertype_get_autocomplete_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignfoldertype_get_autocomplete_v2_response_m_payload_convertToJSON(ezsignfoldertype_get_autocomplete_v2_response_all_of->m_payload);
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

ezsignfoldertype_get_autocomplete_v2_response_all_of_t *ezsignfoldertype_get_autocomplete_v2_response_all_of_parseFromJSON(cJSON *ezsignfoldertype_get_autocomplete_v2_response_all_ofJSON){

    ezsignfoldertype_get_autocomplete_v2_response_all_of_t *ezsignfoldertype_get_autocomplete_v2_response_all_of_local_var = NULL;

    // define the local variable for ezsignfoldertype_get_autocomplete_v2_response_all_of->m_payload
    ezsignfoldertype_get_autocomplete_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignfoldertype_get_autocomplete_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_get_autocomplete_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignfoldertype_get_autocomplete_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignfoldertype_get_autocomplete_v2_response_all_of_local_var = ezsignfoldertype_get_autocomplete_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsignfoldertype_get_autocomplete_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsignfoldertype_get_autocomplete_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
