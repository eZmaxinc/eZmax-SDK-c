#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_get_object_v1_response_all_of.h"



ezsigntemplatesignature_get_object_v1_response_all_of_t *ezsigntemplatesignature_get_object_v1_response_all_of_create(
    ezsigntemplatesignature_get_object_v1_response_m_payload_t *m_payload
    ) {
    ezsigntemplatesignature_get_object_v1_response_all_of_t *ezsigntemplatesignature_get_object_v1_response_all_of_local_var = malloc(sizeof(ezsigntemplatesignature_get_object_v1_response_all_of_t));
    if (!ezsigntemplatesignature_get_object_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsigntemplatesignature_get_object_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsigntemplatesignature_get_object_v1_response_all_of_local_var;
}


void ezsigntemplatesignature_get_object_v1_response_all_of_free(ezsigntemplatesignature_get_object_v1_response_all_of_t *ezsigntemplatesignature_get_object_v1_response_all_of) {
    if(NULL == ezsigntemplatesignature_get_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_get_object_v1_response_all_of->m_payload) {
        ezsigntemplatesignature_get_object_v1_response_m_payload_free(ezsigntemplatesignature_get_object_v1_response_all_of->m_payload);
        ezsigntemplatesignature_get_object_v1_response_all_of->m_payload = NULL;
    }
    free(ezsigntemplatesignature_get_object_v1_response_all_of);
}

cJSON *ezsigntemplatesignature_get_object_v1_response_all_of_convertToJSON(ezsigntemplatesignature_get_object_v1_response_all_of_t *ezsigntemplatesignature_get_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignature_get_object_v1_response_all_of->m_payload
    if (!ezsigntemplatesignature_get_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplatesignature_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatesignature_get_object_v1_response_all_of->m_payload);
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

ezsigntemplatesignature_get_object_v1_response_all_of_t *ezsigntemplatesignature_get_object_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplatesignature_get_object_v1_response_all_ofJSON){

    ezsigntemplatesignature_get_object_v1_response_all_of_t *ezsigntemplatesignature_get_object_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsigntemplatesignature_get_object_v1_response_all_of->m_payload
    ezsigntemplatesignature_get_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigntemplatesignature_get_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_get_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplatesignature_get_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigntemplatesignature_get_object_v1_response_all_of_local_var = ezsigntemplatesignature_get_object_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsigntemplatesignature_get_object_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplatesignature_get_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
