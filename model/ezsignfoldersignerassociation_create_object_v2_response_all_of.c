#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_create_object_v2_response_all_of.h"



ezsignfoldersignerassociation_create_object_v2_response_all_of_t *ezsignfoldersignerassociation_create_object_v2_response_all_of_create(
    ezsignfoldersignerassociation_create_object_v2_response_m_payload_t *m_payload
    ) {
    ezsignfoldersignerassociation_create_object_v2_response_all_of_t *ezsignfoldersignerassociation_create_object_v2_response_all_of_local_var = malloc(sizeof(ezsignfoldersignerassociation_create_object_v2_response_all_of_t));
    if (!ezsignfoldersignerassociation_create_object_v2_response_all_of_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_create_object_v2_response_all_of_local_var->m_payload = m_payload;

    return ezsignfoldersignerassociation_create_object_v2_response_all_of_local_var;
}


void ezsignfoldersignerassociation_create_object_v2_response_all_of_free(ezsignfoldersignerassociation_create_object_v2_response_all_of_t *ezsignfoldersignerassociation_create_object_v2_response_all_of) {
    if(NULL == ezsignfoldersignerassociation_create_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_create_object_v2_response_all_of->m_payload) {
        ezsignfoldersignerassociation_create_object_v2_response_m_payload_free(ezsignfoldersignerassociation_create_object_v2_response_all_of->m_payload);
        ezsignfoldersignerassociation_create_object_v2_response_all_of->m_payload = NULL;
    }
    free(ezsignfoldersignerassociation_create_object_v2_response_all_of);
}

cJSON *ezsignfoldersignerassociation_create_object_v2_response_all_of_convertToJSON(ezsignfoldersignerassociation_create_object_v2_response_all_of_t *ezsignfoldersignerassociation_create_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_create_object_v2_response_all_of->m_payload
    if (!ezsignfoldersignerassociation_create_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    
    cJSON *m_payload_local_JSON = ezsignfoldersignerassociation_create_object_v2_response_m_payload_convertToJSON(ezsignfoldersignerassociation_create_object_v2_response_all_of->m_payload);
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

ezsignfoldersignerassociation_create_object_v2_response_all_of_t *ezsignfoldersignerassociation_create_object_v2_response_all_of_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_object_v2_response_all_ofJSON){

    ezsignfoldersignerassociation_create_object_v2_response_all_of_t *ezsignfoldersignerassociation_create_object_v2_response_all_of_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_create_object_v2_response_all_of->m_payload
    ezsignfoldersignerassociation_create_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // ezsignfoldersignerassociation_create_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = ezsignfoldersignerassociation_create_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    ezsignfoldersignerassociation_create_object_v2_response_all_of_local_var = ezsignfoldersignerassociation_create_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return ezsignfoldersignerassociation_create_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        ezsignfoldersignerassociation_create_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}