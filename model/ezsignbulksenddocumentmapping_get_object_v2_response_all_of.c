#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksenddocumentmapping_get_object_v2_response_all_of.h"



ezsignbulksenddocumentmapping_get_object_v2_response_all_of_t *ezsignbulksenddocumentmapping_get_object_v2_response_all_of_create(
    ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *m_payload
    ) {
    ezsignbulksenddocumentmapping_get_object_v2_response_all_of_t *ezsignbulksenddocumentmapping_get_object_v2_response_all_of_local_var = malloc(sizeof(ezsignbulksenddocumentmapping_get_object_v2_response_all_of_t));
    if (!ezsignbulksenddocumentmapping_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    ezsignbulksenddocumentmapping_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return ezsignbulksenddocumentmapping_get_object_v2_response_all_of_local_var;
}


void ezsignbulksenddocumentmapping_get_object_v2_response_all_of_free(ezsignbulksenddocumentmapping_get_object_v2_response_all_of_t *ezsignbulksenddocumentmapping_get_object_v2_response_all_of) {
    if(NULL == ezsignbulksenddocumentmapping_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksenddocumentmapping_get_object_v2_response_all_of->m_payload) {
        ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_free(ezsignbulksenddocumentmapping_get_object_v2_response_all_of->m_payload);
        ezsignbulksenddocumentmapping_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(ezsignbulksenddocumentmapping_get_object_v2_response_all_of);
}

cJSON *ezsignbulksenddocumentmapping_get_object_v2_response_all_of_convertToJSON(ezsignbulksenddocumentmapping_get_object_v2_response_all_of_t *ezsignbulksenddocumentmapping_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksenddocumentmapping_get_object_v2_response_all_of->m_payload
    if (!ezsignbulksenddocumentmapping_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_convertToJSON(ezsignbulksenddocumentmapping_get_object_v2_response_all_of->m_payload);
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

ezsignbulksenddocumentmapping_get_object_v2_response_all_of_t *ezsignbulksenddocumentmapping_get_object_v2_response_all_of_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_get_object_v2_response_all_ofJSON){

    ezsignbulksenddocumentmapping_get_object_v2_response_all_of_t *ezsignbulksenddocumentmapping_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for ezsignbulksenddocumentmapping_get_object_v2_response_all_of->m_payload
    ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignbulksenddocumentmapping_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignbulksenddocumentmapping_get_object_v2_response_all_of_local_var = ezsignbulksenddocumentmapping_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsignbulksenddocumentmapping_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsignbulksenddocumentmapping_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
