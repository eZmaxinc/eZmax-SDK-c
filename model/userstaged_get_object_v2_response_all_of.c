#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_get_object_v2_response_all_of.h"



userstaged_get_object_v2_response_all_of_t *userstaged_get_object_v2_response_all_of_create(
    userstaged_get_object_v2_response_m_payload_t *m_payload
    ) {
    userstaged_get_object_v2_response_all_of_t *userstaged_get_object_v2_response_all_of_local_var = malloc(sizeof(userstaged_get_object_v2_response_all_of_t));
    if (!userstaged_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    userstaged_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return userstaged_get_object_v2_response_all_of_local_var;
}


void userstaged_get_object_v2_response_all_of_free(userstaged_get_object_v2_response_all_of_t *userstaged_get_object_v2_response_all_of) {
    if(NULL == userstaged_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (userstaged_get_object_v2_response_all_of->m_payload) {
        userstaged_get_object_v2_response_m_payload_free(userstaged_get_object_v2_response_all_of->m_payload);
        userstaged_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(userstaged_get_object_v2_response_all_of);
}

cJSON *userstaged_get_object_v2_response_all_of_convertToJSON(userstaged_get_object_v2_response_all_of_t *userstaged_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_get_object_v2_response_all_of->m_payload
    if (!userstaged_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = userstaged_get_object_v2_response_m_payload_convertToJSON(userstaged_get_object_v2_response_all_of->m_payload);
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

userstaged_get_object_v2_response_all_of_t *userstaged_get_object_v2_response_all_of_parseFromJSON(cJSON *userstaged_get_object_v2_response_all_ofJSON){

    userstaged_get_object_v2_response_all_of_t *userstaged_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for userstaged_get_object_v2_response_all_of->m_payload
    userstaged_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // userstaged_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(userstaged_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = userstaged_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    userstaged_get_object_v2_response_all_of_local_var = userstaged_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return userstaged_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        userstaged_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
