#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagemembership_get_object_v1_response_all_of.h"



ezsigntemplatepackagemembership_get_object_v1_response_all_of_t *ezsigntemplatepackagemembership_get_object_v1_response_all_of_create(
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *m_payload
    ) {
    ezsigntemplatepackagemembership_get_object_v1_response_all_of_t *ezsigntemplatepackagemembership_get_object_v1_response_all_of_local_var = malloc(sizeof(ezsigntemplatepackagemembership_get_object_v1_response_all_of_t));
    if (!ezsigntemplatepackagemembership_get_object_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsigntemplatepackagemembership_get_object_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsigntemplatepackagemembership_get_object_v1_response_all_of_local_var;
}


void ezsigntemplatepackagemembership_get_object_v1_response_all_of_free(ezsigntemplatepackagemembership_get_object_v1_response_all_of_t *ezsigntemplatepackagemembership_get_object_v1_response_all_of) {
    if(NULL == ezsigntemplatepackagemembership_get_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagemembership_get_object_v1_response_all_of->m_payload) {
        ezsigntemplatepackagemembership_get_object_v1_response_m_payload_free(ezsigntemplatepackagemembership_get_object_v1_response_all_of->m_payload);
        ezsigntemplatepackagemembership_get_object_v1_response_all_of->m_payload = NULL;
    }
    free(ezsigntemplatepackagemembership_get_object_v1_response_all_of);
}

cJSON *ezsigntemplatepackagemembership_get_object_v1_response_all_of_convertToJSON(ezsigntemplatepackagemembership_get_object_v1_response_all_of_t *ezsigntemplatepackagemembership_get_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagemembership_get_object_v1_response_all_of->m_payload
    if (!ezsigntemplatepackagemembership_get_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplatepackagemembership_get_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagemembership_get_object_v1_response_all_of->m_payload);
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

ezsigntemplatepackagemembership_get_object_v1_response_all_of_t *ezsigntemplatepackagemembership_get_object_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplatepackagemembership_get_object_v1_response_all_ofJSON){

    ezsigntemplatepackagemembership_get_object_v1_response_all_of_t *ezsigntemplatepackagemembership_get_object_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsigntemplatepackagemembership_get_object_v1_response_all_of->m_payload
    ezsigntemplatepackagemembership_get_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigntemplatepackagemembership_get_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagemembership_get_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplatepackagemembership_get_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigntemplatepackagemembership_get_object_v1_response_all_of_local_var = ezsigntemplatepackagemembership_get_object_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsigntemplatepackagemembership_get_object_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplatepackagemembership_get_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
