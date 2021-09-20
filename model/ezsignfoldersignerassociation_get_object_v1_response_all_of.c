#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_get_object_v1_response_all_of.h"



ezsignfoldersignerassociation_get_object_v1_response_all_of_t *ezsignfoldersignerassociation_get_object_v1_response_all_of_create(
    object_t *m_payload
    ) {
    ezsignfoldersignerassociation_get_object_v1_response_all_of_t *ezsignfoldersignerassociation_get_object_v1_response_all_of_local_var = malloc(sizeof(ezsignfoldersignerassociation_get_object_v1_response_all_of_t));
    if (!ezsignfoldersignerassociation_get_object_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_get_object_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsignfoldersignerassociation_get_object_v1_response_all_of_local_var;
}


void ezsignfoldersignerassociation_get_object_v1_response_all_of_free(ezsignfoldersignerassociation_get_object_v1_response_all_of_t *ezsignfoldersignerassociation_get_object_v1_response_all_of) {
    if(NULL == ezsignfoldersignerassociation_get_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_get_object_v1_response_all_of->m_payload) {
        object_free(ezsignfoldersignerassociation_get_object_v1_response_all_of->m_payload);
        ezsignfoldersignerassociation_get_object_v1_response_all_of->m_payload = NULL;
    }
    free(ezsignfoldersignerassociation_get_object_v1_response_all_of);
}

cJSON *ezsignfoldersignerassociation_get_object_v1_response_all_of_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response_all_of_t *ezsignfoldersignerassociation_get_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_get_object_v1_response_all_of->m_payload
    if (!ezsignfoldersignerassociation_get_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    
    cJSON *m_payload_object = object_convertToJSON(ezsignfoldersignerassociation_get_object_v1_response_all_of->m_payload);
    if(m_payload_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mPayload", m_payload_object);
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

ezsignfoldersignerassociation_get_object_v1_response_all_of_t *ezsignfoldersignerassociation_get_object_v1_response_all_of_parseFromJSON(cJSON *ezsignfoldersignerassociation_get_object_v1_response_all_ofJSON){

    ezsignfoldersignerassociation_get_object_v1_response_all_of_t *ezsignfoldersignerassociation_get_object_v1_response_all_of_local_var = NULL;

    // ezsignfoldersignerassociation_get_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_get_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    object_t *m_payload_local_object = NULL;
    
    m_payload_local_object = object_parseFromJSON(m_payload); //object


    ezsignfoldersignerassociation_get_object_v1_response_all_of_local_var = ezsignfoldersignerassociation_get_object_v1_response_all_of_create (
        m_payload_local_object
        );

    return ezsignfoldersignerassociation_get_object_v1_response_all_of_local_var;
end:
    return NULL;

}
