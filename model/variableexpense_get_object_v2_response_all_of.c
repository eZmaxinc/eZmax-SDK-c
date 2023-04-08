#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_get_object_v2_response_all_of.h"



variableexpense_get_object_v2_response_all_of_t *variableexpense_get_object_v2_response_all_of_create(
    variableexpense_get_object_v2_response_m_payload_t *m_payload
    ) {
    variableexpense_get_object_v2_response_all_of_t *variableexpense_get_object_v2_response_all_of_local_var = malloc(sizeof(variableexpense_get_object_v2_response_all_of_t));
    if (!variableexpense_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    variableexpense_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return variableexpense_get_object_v2_response_all_of_local_var;
}


void variableexpense_get_object_v2_response_all_of_free(variableexpense_get_object_v2_response_all_of_t *variableexpense_get_object_v2_response_all_of) {
    if(NULL == variableexpense_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_get_object_v2_response_all_of->m_payload) {
        variableexpense_get_object_v2_response_m_payload_free(variableexpense_get_object_v2_response_all_of->m_payload);
        variableexpense_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(variableexpense_get_object_v2_response_all_of);
}

cJSON *variableexpense_get_object_v2_response_all_of_convertToJSON(variableexpense_get_object_v2_response_all_of_t *variableexpense_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_get_object_v2_response_all_of->m_payload
    if (!variableexpense_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = variableexpense_get_object_v2_response_m_payload_convertToJSON(variableexpense_get_object_v2_response_all_of->m_payload);
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

variableexpense_get_object_v2_response_all_of_t *variableexpense_get_object_v2_response_all_of_parseFromJSON(cJSON *variableexpense_get_object_v2_response_all_ofJSON){

    variableexpense_get_object_v2_response_all_of_t *variableexpense_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for variableexpense_get_object_v2_response_all_of->m_payload
    variableexpense_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // variableexpense_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(variableexpense_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = variableexpense_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    variableexpense_get_object_v2_response_all_of_local_var = variableexpense_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return variableexpense_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        variableexpense_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
