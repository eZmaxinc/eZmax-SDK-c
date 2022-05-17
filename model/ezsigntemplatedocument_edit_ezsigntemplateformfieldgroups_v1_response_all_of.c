#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of.h"



ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_create(
    ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_m_payload_t *m_payload
    ) {
    ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_local_var = malloc(sizeof(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_t));
    if (!ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_local_var;
}


void ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_free(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of) {
    if(NULL == ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of->m_payload) {
        ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_m_payload_free(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of->m_payload);
        ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of->m_payload = NULL;
    }
    free(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of);
}

cJSON *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_convertToJSON(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of->m_payload
    if (!ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_m_payload_convertToJSON(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of->m_payload);
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

ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_ofJSON){

    ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_t *ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of->m_payload
    ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_local_var = ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigntemplatedocument_edit_ezsigntemplateformfieldgroups_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
