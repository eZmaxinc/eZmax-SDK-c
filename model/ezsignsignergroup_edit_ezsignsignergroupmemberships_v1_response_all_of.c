#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of.h"



ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_create(
    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_t *m_payload
    ) {
    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_local_var = malloc(sizeof(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_t));
    if (!ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_local_var;
}


void ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_free(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of) {
    if(NULL == ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of->m_payload) {
        ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_free(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of->m_payload);
        ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of->m_payload = NULL;
    }
    free(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of);
}

cJSON *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_convertToJSON(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of->m_payload
    if (!ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_convertToJSON(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of->m_payload);
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

ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_parseFromJSON(cJSON *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_ofJSON){

    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_local_var = NULL;

    // define the local variable for ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of->m_payload
    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_local_var = ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
