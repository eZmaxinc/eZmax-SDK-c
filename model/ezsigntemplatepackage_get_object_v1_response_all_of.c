#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_get_object_v1_response_all_of.h"



ezsigntemplatepackage_get_object_v1_response_all_of_t *ezsigntemplatepackage_get_object_v1_response_all_of_create(
    ezsigntemplatepackage_get_object_v1_response_m_payload_t *m_payload
    ) {
    ezsigntemplatepackage_get_object_v1_response_all_of_t *ezsigntemplatepackage_get_object_v1_response_all_of_local_var = malloc(sizeof(ezsigntemplatepackage_get_object_v1_response_all_of_t));
    if (!ezsigntemplatepackage_get_object_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_get_object_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsigntemplatepackage_get_object_v1_response_all_of_local_var;
}


void ezsigntemplatepackage_get_object_v1_response_all_of_free(ezsigntemplatepackage_get_object_v1_response_all_of_t *ezsigntemplatepackage_get_object_v1_response_all_of) {
    if(NULL == ezsigntemplatepackage_get_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_get_object_v1_response_all_of->m_payload) {
        ezsigntemplatepackage_get_object_v1_response_m_payload_free(ezsigntemplatepackage_get_object_v1_response_all_of->m_payload);
        ezsigntemplatepackage_get_object_v1_response_all_of->m_payload = NULL;
    }
    free(ezsigntemplatepackage_get_object_v1_response_all_of);
}

cJSON *ezsigntemplatepackage_get_object_v1_response_all_of_convertToJSON(ezsigntemplatepackage_get_object_v1_response_all_of_t *ezsigntemplatepackage_get_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_get_object_v1_response_all_of->m_payload
    if (!ezsigntemplatepackage_get_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplatepackage_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackage_get_object_v1_response_all_of->m_payload);
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

ezsigntemplatepackage_get_object_v1_response_all_of_t *ezsigntemplatepackage_get_object_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplatepackage_get_object_v1_response_all_ofJSON){

    ezsigntemplatepackage_get_object_v1_response_all_of_t *ezsigntemplatepackage_get_object_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_get_object_v1_response_all_of->m_payload
    ezsigntemplatepackage_get_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigntemplatepackage_get_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_get_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplatepackage_get_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigntemplatepackage_get_object_v1_response_all_of_local_var = ezsigntemplatepackage_get_object_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsigntemplatepackage_get_object_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplatepackage_get_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
