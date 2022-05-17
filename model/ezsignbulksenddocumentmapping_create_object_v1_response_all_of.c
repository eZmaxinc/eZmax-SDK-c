#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksenddocumentmapping_create_object_v1_response_all_of.h"



ezsignbulksenddocumentmapping_create_object_v1_response_all_of_t *ezsignbulksenddocumentmapping_create_object_v1_response_all_of_create(
    ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t *m_payload
    ) {
    ezsignbulksenddocumentmapping_create_object_v1_response_all_of_t *ezsignbulksenddocumentmapping_create_object_v1_response_all_of_local_var = malloc(sizeof(ezsignbulksenddocumentmapping_create_object_v1_response_all_of_t));
    if (!ezsignbulksenddocumentmapping_create_object_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsignbulksenddocumentmapping_create_object_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsignbulksenddocumentmapping_create_object_v1_response_all_of_local_var;
}


void ezsignbulksenddocumentmapping_create_object_v1_response_all_of_free(ezsignbulksenddocumentmapping_create_object_v1_response_all_of_t *ezsignbulksenddocumentmapping_create_object_v1_response_all_of) {
    if(NULL == ezsignbulksenddocumentmapping_create_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksenddocumentmapping_create_object_v1_response_all_of->m_payload) {
        ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_free(ezsignbulksenddocumentmapping_create_object_v1_response_all_of->m_payload);
        ezsignbulksenddocumentmapping_create_object_v1_response_all_of->m_payload = NULL;
    }
    free(ezsignbulksenddocumentmapping_create_object_v1_response_all_of);
}

cJSON *ezsignbulksenddocumentmapping_create_object_v1_response_all_of_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_response_all_of_t *ezsignbulksenddocumentmapping_create_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksenddocumentmapping_create_object_v1_response_all_of->m_payload
    if (!ezsignbulksenddocumentmapping_create_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_response_all_of->m_payload);
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

ezsignbulksenddocumentmapping_create_object_v1_response_all_of_t *ezsignbulksenddocumentmapping_create_object_v1_response_all_of_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_create_object_v1_response_all_ofJSON){

    ezsignbulksenddocumentmapping_create_object_v1_response_all_of_t *ezsignbulksenddocumentmapping_create_object_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsignbulksenddocumentmapping_create_object_v1_response_all_of->m_payload
    ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignbulksenddocumentmapping_create_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_create_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignbulksenddocumentmapping_create_object_v1_response_all_of_local_var = ezsignbulksenddocumentmapping_create_object_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsignbulksenddocumentmapping_create_object_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsignbulksenddocumentmapping_create_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
