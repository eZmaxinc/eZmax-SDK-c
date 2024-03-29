#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_create_object_v1_response_all_of.h"



branding_create_object_v1_response_all_of_t *branding_create_object_v1_response_all_of_create(
    branding_create_object_v1_response_m_payload_t *m_payload
    ) {
    branding_create_object_v1_response_all_of_t *branding_create_object_v1_response_all_of_local_var = malloc(sizeof(branding_create_object_v1_response_all_of_t));
    if (!branding_create_object_v1_response_all_of_local_var) {
        return NULL;
    }
    branding_create_object_v1_response_all_of_local_var->m_payload = m_payload;

    return branding_create_object_v1_response_all_of_local_var;
}


void branding_create_object_v1_response_all_of_free(branding_create_object_v1_response_all_of_t *branding_create_object_v1_response_all_of) {
    if(NULL == branding_create_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (branding_create_object_v1_response_all_of->m_payload) {
        branding_create_object_v1_response_m_payload_free(branding_create_object_v1_response_all_of->m_payload);
        branding_create_object_v1_response_all_of->m_payload = NULL;
    }
    free(branding_create_object_v1_response_all_of);
}

cJSON *branding_create_object_v1_response_all_of_convertToJSON(branding_create_object_v1_response_all_of_t *branding_create_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // branding_create_object_v1_response_all_of->m_payload
    if (!branding_create_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = branding_create_object_v1_response_m_payload_convertToJSON(branding_create_object_v1_response_all_of->m_payload);
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

branding_create_object_v1_response_all_of_t *branding_create_object_v1_response_all_of_parseFromJSON(cJSON *branding_create_object_v1_response_all_ofJSON){

    branding_create_object_v1_response_all_of_t *branding_create_object_v1_response_all_of_local_var = NULL;

    // define the local variable for branding_create_object_v1_response_all_of->m_payload
    branding_create_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // branding_create_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(branding_create_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = branding_create_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    branding_create_object_v1_response_all_of_local_var = branding_create_object_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return branding_create_object_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        branding_create_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
