#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_get_list_v1_response_all_of.h"



ezsigntemplate_get_list_v1_response_all_of_t *ezsigntemplate_get_list_v1_response_all_of_create(
    ezsigntemplate_get_list_v1_response_m_payload_t *m_payload
    ) {
    ezsigntemplate_get_list_v1_response_all_of_t *ezsigntemplate_get_list_v1_response_all_of_local_var = malloc(sizeof(ezsigntemplate_get_list_v1_response_all_of_t));
    if (!ezsigntemplate_get_list_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsigntemplate_get_list_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsigntemplate_get_list_v1_response_all_of_local_var;
}


void ezsigntemplate_get_list_v1_response_all_of_free(ezsigntemplate_get_list_v1_response_all_of_t *ezsigntemplate_get_list_v1_response_all_of) {
    if(NULL == ezsigntemplate_get_list_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_get_list_v1_response_all_of->m_payload) {
        ezsigntemplate_get_list_v1_response_m_payload_free(ezsigntemplate_get_list_v1_response_all_of->m_payload);
        ezsigntemplate_get_list_v1_response_all_of->m_payload = NULL;
    }
    free(ezsigntemplate_get_list_v1_response_all_of);
}

cJSON *ezsigntemplate_get_list_v1_response_all_of_convertToJSON(ezsigntemplate_get_list_v1_response_all_of_t *ezsigntemplate_get_list_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_get_list_v1_response_all_of->m_payload
    if (!ezsigntemplate_get_list_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplate_get_list_v1_response_m_payload_convertToJSON(ezsigntemplate_get_list_v1_response_all_of->m_payload);
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

ezsigntemplate_get_list_v1_response_all_of_t *ezsigntemplate_get_list_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplate_get_list_v1_response_all_ofJSON){

    ezsigntemplate_get_list_v1_response_all_of_t *ezsigntemplate_get_list_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsigntemplate_get_list_v1_response_all_of->m_payload
    ezsigntemplate_get_list_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigntemplate_get_list_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_get_list_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplate_get_list_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigntemplate_get_list_v1_response_all_of_local_var = ezsigntemplate_get_list_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsigntemplate_get_list_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplate_get_list_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
