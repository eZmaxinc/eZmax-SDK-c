#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_create_object_v1_response_all_of.h"



usergroupmembership_create_object_v1_response_all_of_t *usergroupmembership_create_object_v1_response_all_of_create(
    usergroupmembership_create_object_v1_response_m_payload_t *m_payload
    ) {
    usergroupmembership_create_object_v1_response_all_of_t *usergroupmembership_create_object_v1_response_all_of_local_var = malloc(sizeof(usergroupmembership_create_object_v1_response_all_of_t));
    if (!usergroupmembership_create_object_v1_response_all_of_local_var) {
        return NULL;
    }
    usergroupmembership_create_object_v1_response_all_of_local_var->m_payload = m_payload;

    return usergroupmembership_create_object_v1_response_all_of_local_var;
}


void usergroupmembership_create_object_v1_response_all_of_free(usergroupmembership_create_object_v1_response_all_of_t *usergroupmembership_create_object_v1_response_all_of) {
    if(NULL == usergroupmembership_create_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupmembership_create_object_v1_response_all_of->m_payload) {
        usergroupmembership_create_object_v1_response_m_payload_free(usergroupmembership_create_object_v1_response_all_of->m_payload);
        usergroupmembership_create_object_v1_response_all_of->m_payload = NULL;
    }
    free(usergroupmembership_create_object_v1_response_all_of);
}

cJSON *usergroupmembership_create_object_v1_response_all_of_convertToJSON(usergroupmembership_create_object_v1_response_all_of_t *usergroupmembership_create_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // usergroupmembership_create_object_v1_response_all_of->m_payload
    if (!usergroupmembership_create_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = usergroupmembership_create_object_v1_response_m_payload_convertToJSON(usergroupmembership_create_object_v1_response_all_of->m_payload);
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

usergroupmembership_create_object_v1_response_all_of_t *usergroupmembership_create_object_v1_response_all_of_parseFromJSON(cJSON *usergroupmembership_create_object_v1_response_all_ofJSON){

    usergroupmembership_create_object_v1_response_all_of_t *usergroupmembership_create_object_v1_response_all_of_local_var = NULL;

    // define the local variable for usergroupmembership_create_object_v1_response_all_of->m_payload
    usergroupmembership_create_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // usergroupmembership_create_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(usergroupmembership_create_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = usergroupmembership_create_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    usergroupmembership_create_object_v1_response_all_of_local_var = usergroupmembership_create_object_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return usergroupmembership_create_object_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        usergroupmembership_create_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
