#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticate_authenticate_v2_response_all_of.h"



authenticate_authenticate_v2_response_all_of_t *authenticate_authenticate_v2_response_all_of_create(
    authenticate_authenticate_v2_response_m_payload_t *m_payload
    ) {
    authenticate_authenticate_v2_response_all_of_t *authenticate_authenticate_v2_response_all_of_local_var = malloc(sizeof(authenticate_authenticate_v2_response_all_of_t));
    if (!authenticate_authenticate_v2_response_all_of_local_var) {
        return NULL;
    }
    authenticate_authenticate_v2_response_all_of_local_var->m_payload = m_payload;

    return authenticate_authenticate_v2_response_all_of_local_var;
}


void authenticate_authenticate_v2_response_all_of_free(authenticate_authenticate_v2_response_all_of_t *authenticate_authenticate_v2_response_all_of) {
    if(NULL == authenticate_authenticate_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (authenticate_authenticate_v2_response_all_of->m_payload) {
        authenticate_authenticate_v2_response_m_payload_free(authenticate_authenticate_v2_response_all_of->m_payload);
        authenticate_authenticate_v2_response_all_of->m_payload = NULL;
    }
    free(authenticate_authenticate_v2_response_all_of);
}

cJSON *authenticate_authenticate_v2_response_all_of_convertToJSON(authenticate_authenticate_v2_response_all_of_t *authenticate_authenticate_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // authenticate_authenticate_v2_response_all_of->m_payload
    if (!authenticate_authenticate_v2_response_all_of->m_payload) {
        goto fail;
    }
    
    cJSON *m_payload_local_JSON = authenticate_authenticate_v2_response_m_payload_convertToJSON(authenticate_authenticate_v2_response_all_of->m_payload);
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

authenticate_authenticate_v2_response_all_of_t *authenticate_authenticate_v2_response_all_of_parseFromJSON(cJSON *authenticate_authenticate_v2_response_all_ofJSON){

    authenticate_authenticate_v2_response_all_of_t *authenticate_authenticate_v2_response_all_of_local_var = NULL;

    // define the local variable for authenticate_authenticate_v2_response_all_of->m_payload
    authenticate_authenticate_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // authenticate_authenticate_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(authenticate_authenticate_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = authenticate_authenticate_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    authenticate_authenticate_v2_response_all_of_local_var = authenticate_authenticate_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return authenticate_authenticate_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        authenticate_authenticate_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
