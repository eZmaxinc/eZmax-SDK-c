#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesignermembership_create_object_v1_response_all_of.h"



ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_t *ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_create(
    ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_t *m_payload
    ) {
    ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_t *ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_local_var = malloc(sizeof(ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_t));
    if (!ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_local_var;
}


void ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_free(ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_t *ezsigntemplatepackagesignermembership_create_object_v1_response_all_of) {
    if(NULL == ezsigntemplatepackagesignermembership_create_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesignermembership_create_object_v1_response_all_of->m_payload) {
        ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_free(ezsigntemplatepackagesignermembership_create_object_v1_response_all_of->m_payload);
        ezsigntemplatepackagesignermembership_create_object_v1_response_all_of->m_payload = NULL;
    }
    free(ezsigntemplatepackagesignermembership_create_object_v1_response_all_of);
}

cJSON *ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_convertToJSON(ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_t *ezsigntemplatepackagesignermembership_create_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesignermembership_create_object_v1_response_all_of->m_payload
    if (!ezsigntemplatepackagesignermembership_create_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesignermembership_create_object_v1_response_all_of->m_payload);
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

ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_t *ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_create_object_v1_response_all_ofJSON){

    ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_t *ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesignermembership_create_object_v1_response_all_of->m_payload
    ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigntemplatepackagesignermembership_create_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_create_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_local_var = ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsigntemplatepackagesignermembership_create_object_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplatepackagesignermembership_create_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
