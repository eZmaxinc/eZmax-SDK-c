#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroup_get_object_v2_response_all_of.h"



ezsigntemplateformfieldgroup_get_object_v2_response_all_of_t *ezsigntemplateformfieldgroup_get_object_v2_response_all_of_create(
    ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t *m_payload
    ) {
    ezsigntemplateformfieldgroup_get_object_v2_response_all_of_t *ezsigntemplateformfieldgroup_get_object_v2_response_all_of_local_var = malloc(sizeof(ezsigntemplateformfieldgroup_get_object_v2_response_all_of_t));
    if (!ezsigntemplateformfieldgroup_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroup_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return ezsigntemplateformfieldgroup_get_object_v2_response_all_of_local_var;
}


void ezsigntemplateformfieldgroup_get_object_v2_response_all_of_free(ezsigntemplateformfieldgroup_get_object_v2_response_all_of_t *ezsigntemplateformfieldgroup_get_object_v2_response_all_of) {
    if(NULL == ezsigntemplateformfieldgroup_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroup_get_object_v2_response_all_of->m_payload) {
        ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_free(ezsigntemplateformfieldgroup_get_object_v2_response_all_of->m_payload);
        ezsigntemplateformfieldgroup_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(ezsigntemplateformfieldgroup_get_object_v2_response_all_of);
}

cJSON *ezsigntemplateformfieldgroup_get_object_v2_response_all_of_convertToJSON(ezsigntemplateformfieldgroup_get_object_v2_response_all_of_t *ezsigntemplateformfieldgroup_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroup_get_object_v2_response_all_of->m_payload
    if (!ezsigntemplateformfieldgroup_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_convertToJSON(ezsigntemplateformfieldgroup_get_object_v2_response_all_of->m_payload);
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

ezsigntemplateformfieldgroup_get_object_v2_response_all_of_t *ezsigntemplateformfieldgroup_get_object_v2_response_all_of_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_get_object_v2_response_all_ofJSON){

    ezsigntemplateformfieldgroup_get_object_v2_response_all_of_t *ezsigntemplateformfieldgroup_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for ezsigntemplateformfieldgroup_get_object_v2_response_all_of->m_payload
    ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigntemplateformfieldgroup_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigntemplateformfieldgroup_get_object_v2_response_all_of_local_var = ezsigntemplateformfieldgroup_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsigntemplateformfieldgroup_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplateformfieldgroup_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
