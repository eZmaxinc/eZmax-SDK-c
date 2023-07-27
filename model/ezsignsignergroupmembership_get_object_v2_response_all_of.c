#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroupmembership_get_object_v2_response_all_of.h"



ezsignsignergroupmembership_get_object_v2_response_all_of_t *ezsignsignergroupmembership_get_object_v2_response_all_of_create(
    ezsignsignergroupmembership_get_object_v2_response_m_payload_t *m_payload
    ) {
    ezsignsignergroupmembership_get_object_v2_response_all_of_t *ezsignsignergroupmembership_get_object_v2_response_all_of_local_var = malloc(sizeof(ezsignsignergroupmembership_get_object_v2_response_all_of_t));
    if (!ezsignsignergroupmembership_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    ezsignsignergroupmembership_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return ezsignsignergroupmembership_get_object_v2_response_all_of_local_var;
}


void ezsignsignergroupmembership_get_object_v2_response_all_of_free(ezsignsignergroupmembership_get_object_v2_response_all_of_t *ezsignsignergroupmembership_get_object_v2_response_all_of) {
    if(NULL == ezsignsignergroupmembership_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroupmembership_get_object_v2_response_all_of->m_payload) {
        ezsignsignergroupmembership_get_object_v2_response_m_payload_free(ezsignsignergroupmembership_get_object_v2_response_all_of->m_payload);
        ezsignsignergroupmembership_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(ezsignsignergroupmembership_get_object_v2_response_all_of);
}

cJSON *ezsignsignergroupmembership_get_object_v2_response_all_of_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_all_of_t *ezsignsignergroupmembership_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroupmembership_get_object_v2_response_all_of->m_payload
    if (!ezsignsignergroupmembership_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignsignergroupmembership_get_object_v2_response_m_payload_convertToJSON(ezsignsignergroupmembership_get_object_v2_response_all_of->m_payload);
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

ezsignsignergroupmembership_get_object_v2_response_all_of_t *ezsignsignergroupmembership_get_object_v2_response_all_of_parseFromJSON(cJSON *ezsignsignergroupmembership_get_object_v2_response_all_ofJSON){

    ezsignsignergroupmembership_get_object_v2_response_all_of_t *ezsignsignergroupmembership_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_get_object_v2_response_all_of->m_payload
    ezsignsignergroupmembership_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignsignergroupmembership_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignsignergroupmembership_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignsignergroupmembership_get_object_v2_response_all_of_local_var = ezsignsignergroupmembership_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsignsignergroupmembership_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsignsignergroupmembership_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
