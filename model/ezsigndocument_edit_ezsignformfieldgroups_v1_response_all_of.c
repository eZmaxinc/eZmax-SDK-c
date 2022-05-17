#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of.h"



ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_t *ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_create(
    ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_t *m_payload
    ) {
    ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_t *ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_local_var = malloc(sizeof(ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_t));
    if (!ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_local_var;
}


void ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_free(ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_t *ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of) {
    if(NULL == ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of->m_payload) {
        ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_free(ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of->m_payload);
        ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of->m_payload = NULL;
    }
    free(ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of);
}

cJSON *ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_convertToJSON(ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_t *ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of->m_payload
    if (!ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_convertToJSON(ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of->m_payload);
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

ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_t *ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_parseFromJSON(cJSON *ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_ofJSON){

    ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_t *ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of->m_payload
    ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_local_var = ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsigndocument_edit_ezsignformfieldgroups_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsigndocument_edit_ezsignformfieldgroups_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
