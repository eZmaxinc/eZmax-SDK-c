#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendsignermapping_get_object_v1_response_all_of.h"



ezsignbulksendsignermapping_get_object_v1_response_all_of_t *ezsignbulksendsignermapping_get_object_v1_response_all_of_create(
    ezsignbulksendsignermapping_get_object_v1_response_m_payload_t *m_payload
    ) {
    ezsignbulksendsignermapping_get_object_v1_response_all_of_t *ezsignbulksendsignermapping_get_object_v1_response_all_of_local_var = malloc(sizeof(ezsignbulksendsignermapping_get_object_v1_response_all_of_t));
    if (!ezsignbulksendsignermapping_get_object_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsignbulksendsignermapping_get_object_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsignbulksendsignermapping_get_object_v1_response_all_of_local_var;
}


void ezsignbulksendsignermapping_get_object_v1_response_all_of_free(ezsignbulksendsignermapping_get_object_v1_response_all_of_t *ezsignbulksendsignermapping_get_object_v1_response_all_of) {
    if(NULL == ezsignbulksendsignermapping_get_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendsignermapping_get_object_v1_response_all_of->m_payload) {
        ezsignbulksendsignermapping_get_object_v1_response_m_payload_free(ezsignbulksendsignermapping_get_object_v1_response_all_of->m_payload);
        ezsignbulksendsignermapping_get_object_v1_response_all_of->m_payload = NULL;
    }
    free(ezsignbulksendsignermapping_get_object_v1_response_all_of);
}

cJSON *ezsignbulksendsignermapping_get_object_v1_response_all_of_convertToJSON(ezsignbulksendsignermapping_get_object_v1_response_all_of_t *ezsignbulksendsignermapping_get_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendsignermapping_get_object_v1_response_all_of->m_payload
    if (!ezsignbulksendsignermapping_get_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignbulksendsignermapping_get_object_v1_response_m_payload_convertToJSON(ezsignbulksendsignermapping_get_object_v1_response_all_of->m_payload);
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

ezsignbulksendsignermapping_get_object_v1_response_all_of_t *ezsignbulksendsignermapping_get_object_v1_response_all_of_parseFromJSON(cJSON *ezsignbulksendsignermapping_get_object_v1_response_all_ofJSON){

    ezsignbulksendsignermapping_get_object_v1_response_all_of_t *ezsignbulksendsignermapping_get_object_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsignbulksendsignermapping_get_object_v1_response_all_of->m_payload
    ezsignbulksendsignermapping_get_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignbulksendsignermapping_get_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_get_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignbulksendsignermapping_get_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignbulksendsignermapping_get_object_v1_response_all_of_local_var = ezsignbulksendsignermapping_get_object_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsignbulksendsignermapping_get_object_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsignbulksendsignermapping_get_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
