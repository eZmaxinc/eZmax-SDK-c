#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_sign_v1_response_all_of.h"



ezsignsignature_sign_v1_response_all_of_t *ezsignsignature_sign_v1_response_all_of_create(
    object_t *m_payload
    ) {
    ezsignsignature_sign_v1_response_all_of_t *ezsignsignature_sign_v1_response_all_of_local_var = malloc(sizeof(ezsignsignature_sign_v1_response_all_of_t));
    if (!ezsignsignature_sign_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsignsignature_sign_v1_response_all_of_local_var->m_payload = m_payload;

    return ezsignsignature_sign_v1_response_all_of_local_var;
}


void ezsignsignature_sign_v1_response_all_of_free(ezsignsignature_sign_v1_response_all_of_t *ezsignsignature_sign_v1_response_all_of) {
    if(NULL == ezsignsignature_sign_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_sign_v1_response_all_of->m_payload) {
        object_free(ezsignsignature_sign_v1_response_all_of->m_payload);
        ezsignsignature_sign_v1_response_all_of->m_payload = NULL;
    }
    free(ezsignsignature_sign_v1_response_all_of);
}

cJSON *ezsignsignature_sign_v1_response_all_of_convertToJSON(ezsignsignature_sign_v1_response_all_of_t *ezsignsignature_sign_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_sign_v1_response_all_of->m_payload
    if (!ezsignsignature_sign_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_object = object_convertToJSON(ezsignsignature_sign_v1_response_all_of->m_payload);
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

ezsignsignature_sign_v1_response_all_of_t *ezsignsignature_sign_v1_response_all_of_parseFromJSON(cJSON *ezsignsignature_sign_v1_response_all_ofJSON){

    ezsignsignature_sign_v1_response_all_of_t *ezsignsignature_sign_v1_response_all_of_local_var = NULL;

    // ezsignsignature_sign_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(ezsignsignature_sign_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    object_t *m_payload_local_object = NULL;
    
    m_payload_local_object = object_parseFromJSON(m_payload); //object


    ezsignsignature_sign_v1_response_all_of_local_var = ezsignsignature_sign_v1_response_all_of_create (
        m_payload_local_object
        );

    return ezsignsignature_sign_v1_response_all_of_local_var;
end:
    return NULL;

}
