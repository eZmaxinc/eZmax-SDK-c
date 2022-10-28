#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_get_object_v2_response_all_of.h"



ezsigntemplatesigner_get_object_v2_response_all_of_t *ezsigntemplatesigner_get_object_v2_response_all_of_create(
    ezsigntemplatesigner_get_object_v2_response_m_payload_t *m_payload
    ) {
    ezsigntemplatesigner_get_object_v2_response_all_of_t *ezsigntemplatesigner_get_object_v2_response_all_of_local_var = malloc(sizeof(ezsigntemplatesigner_get_object_v2_response_all_of_t));
    if (!ezsigntemplatesigner_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    ezsigntemplatesigner_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return ezsigntemplatesigner_get_object_v2_response_all_of_local_var;
}


void ezsigntemplatesigner_get_object_v2_response_all_of_free(ezsigntemplatesigner_get_object_v2_response_all_of_t *ezsigntemplatesigner_get_object_v2_response_all_of) {
    if(NULL == ezsigntemplatesigner_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_get_object_v2_response_all_of->m_payload) {
        ezsigntemplatesigner_get_object_v2_response_m_payload_free(ezsigntemplatesigner_get_object_v2_response_all_of->m_payload);
        ezsigntemplatesigner_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(ezsigntemplatesigner_get_object_v2_response_all_of);
}

cJSON *ezsigntemplatesigner_get_object_v2_response_all_of_convertToJSON(ezsigntemplatesigner_get_object_v2_response_all_of_t *ezsigntemplatesigner_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_get_object_v2_response_all_of->m_payload
    if (!ezsigntemplatesigner_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplatesigner_get_object_v2_response_m_payload_convertToJSON(ezsigntemplatesigner_get_object_v2_response_all_of->m_payload);
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

ezsigntemplatesigner_get_object_v2_response_all_of_t *ezsigntemplatesigner_get_object_v2_response_all_of_parseFromJSON(cJSON *ezsigntemplatesigner_get_object_v2_response_all_ofJSON){

    ezsigntemplatesigner_get_object_v2_response_all_of_t *ezsigntemplatesigner_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for ezsigntemplatesigner_get_object_v2_response_all_of->m_payload
    ezsigntemplatesigner_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigntemplatesigner_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplatesigner_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigntemplatesigner_get_object_v2_response_all_of_local_var = ezsigntemplatesigner_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsigntemplatesigner_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplatesigner_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
