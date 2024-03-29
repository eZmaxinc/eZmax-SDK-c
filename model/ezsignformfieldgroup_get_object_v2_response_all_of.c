#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_get_object_v2_response_all_of.h"



ezsignformfieldgroup_get_object_v2_response_all_of_t *ezsignformfieldgroup_get_object_v2_response_all_of_create(
    ezsignformfieldgroup_get_object_v2_response_m_payload_t *m_payload
    ) {
    ezsignformfieldgroup_get_object_v2_response_all_of_t *ezsignformfieldgroup_get_object_v2_response_all_of_local_var = malloc(sizeof(ezsignformfieldgroup_get_object_v2_response_all_of_t));
    if (!ezsignformfieldgroup_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return ezsignformfieldgroup_get_object_v2_response_all_of_local_var;
}


void ezsignformfieldgroup_get_object_v2_response_all_of_free(ezsignformfieldgroup_get_object_v2_response_all_of_t *ezsignformfieldgroup_get_object_v2_response_all_of) {
    if(NULL == ezsignformfieldgroup_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_get_object_v2_response_all_of->m_payload) {
        ezsignformfieldgroup_get_object_v2_response_m_payload_free(ezsignformfieldgroup_get_object_v2_response_all_of->m_payload);
        ezsignformfieldgroup_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(ezsignformfieldgroup_get_object_v2_response_all_of);
}

cJSON *ezsignformfieldgroup_get_object_v2_response_all_of_convertToJSON(ezsignformfieldgroup_get_object_v2_response_all_of_t *ezsignformfieldgroup_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_get_object_v2_response_all_of->m_payload
    if (!ezsignformfieldgroup_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignformfieldgroup_get_object_v2_response_m_payload_convertToJSON(ezsignformfieldgroup_get_object_v2_response_all_of->m_payload);
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

ezsignformfieldgroup_get_object_v2_response_all_of_t *ezsignformfieldgroup_get_object_v2_response_all_of_parseFromJSON(cJSON *ezsignformfieldgroup_get_object_v2_response_all_ofJSON){

    ezsignformfieldgroup_get_object_v2_response_all_of_t *ezsignformfieldgroup_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for ezsignformfieldgroup_get_object_v2_response_all_of->m_payload
    ezsignformfieldgroup_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignformfieldgroup_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignformfieldgroup_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignformfieldgroup_get_object_v2_response_all_of_local_var = ezsignformfieldgroup_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsignformfieldgroup_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsignformfieldgroup_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
