#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_create_object_v1_response_all_of.h"



ezsigntemplatepackagesigner_create_object_v1_response_all_of_t *ezsigntemplatepackagesigner_create_object_v1_response_all_of_create(
    ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *m_payload
    ) {
    ezsigntemplatepackagesigner_create_object_v1_response_all_of_t *ezsigntemplatepackagesigner_create_object_v1_response_all_of_local_var = malloc(sizeof(ezsigntemplatepackagesigner_create_object_v1_response_all_of_t));
    if (!ezsigntemplatepackagesigner_create_object_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesigner_create_object_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsigntemplatepackagesigner_create_object_v1_response_all_of_local_var;
}


void ezsigntemplatepackagesigner_create_object_v1_response_all_of_free(ezsigntemplatepackagesigner_create_object_v1_response_all_of_t *ezsigntemplatepackagesigner_create_object_v1_response_all_of) {
    if(NULL == ezsigntemplatepackagesigner_create_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_create_object_v1_response_all_of->m_payload) {
        ezsigntemplatepackagesigner_create_object_v1_response_m_payload_free(ezsigntemplatepackagesigner_create_object_v1_response_all_of->m_payload);
        ezsigntemplatepackagesigner_create_object_v1_response_all_of->m_payload = NULL;
    }
    free(ezsigntemplatepackagesigner_create_object_v1_response_all_of);
}

cJSON *ezsigntemplatepackagesigner_create_object_v1_response_all_of_convertToJSON(ezsigntemplatepackagesigner_create_object_v1_response_all_of_t *ezsigntemplatepackagesigner_create_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_create_object_v1_response_all_of->m_payload
    if (!ezsigntemplatepackagesigner_create_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplatepackagesigner_create_object_v1_response_m_payload_convertToJSON(ezsigntemplatepackagesigner_create_object_v1_response_all_of->m_payload);
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

ezsigntemplatepackagesigner_create_object_v1_response_all_of_t *ezsigntemplatepackagesigner_create_object_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplatepackagesigner_create_object_v1_response_all_ofJSON){

    ezsigntemplatepackagesigner_create_object_v1_response_all_of_t *ezsigntemplatepackagesigner_create_object_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_create_object_v1_response_all_of->m_payload
    ezsigntemplatepackagesigner_create_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigntemplatepackagesigner_create_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_create_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplatepackagesigner_create_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigntemplatepackagesigner_create_object_v1_response_all_of_local_var = ezsigntemplatepackagesigner_create_object_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsigntemplatepackagesigner_create_object_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplatepackagesigner_create_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
