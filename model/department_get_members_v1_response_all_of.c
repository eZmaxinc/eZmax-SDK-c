#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "department_get_members_v1_response_all_of.h"



department_get_members_v1_response_all_of_t *department_get_members_v1_response_all_of_create(
    department_get_members_v1_response_m_payload_t *m_payload
    ) {
    department_get_members_v1_response_all_of_t *department_get_members_v1_response_all_of_local_var = malloc(sizeof(department_get_members_v1_response_all_of_t));
    if (!department_get_members_v1_response_all_of_local_var) {
        return NULL;
    }
    department_get_members_v1_response_all_of_local_var->m_payload = m_payload;

    return department_get_members_v1_response_all_of_local_var;
}


void department_get_members_v1_response_all_of_free(department_get_members_v1_response_all_of_t *department_get_members_v1_response_all_of) {
    if(NULL == department_get_members_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (department_get_members_v1_response_all_of->m_payload) {
        department_get_members_v1_response_m_payload_free(department_get_members_v1_response_all_of->m_payload);
        department_get_members_v1_response_all_of->m_payload = NULL;
    }
    free(department_get_members_v1_response_all_of);
}

cJSON *department_get_members_v1_response_all_of_convertToJSON(department_get_members_v1_response_all_of_t *department_get_members_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // department_get_members_v1_response_all_of->m_payload
    if (!department_get_members_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = department_get_members_v1_response_m_payload_convertToJSON(department_get_members_v1_response_all_of->m_payload);
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

department_get_members_v1_response_all_of_t *department_get_members_v1_response_all_of_parseFromJSON(cJSON *department_get_members_v1_response_all_ofJSON){

    department_get_members_v1_response_all_of_t *department_get_members_v1_response_all_of_local_var = NULL;

    // define the local variable for department_get_members_v1_response_all_of->m_payload
    department_get_members_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // department_get_members_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(department_get_members_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = department_get_members_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    department_get_members_v1_response_all_of_local_var = department_get_members_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return department_get_members_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        department_get_members_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
