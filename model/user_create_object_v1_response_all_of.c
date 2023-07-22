#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_create_object_v1_response_all_of.h"



user_create_object_v1_response_all_of_t *user_create_object_v1_response_all_of_create(
    user_create_object_v1_response_m_payload_t *m_payload
    ) {
    user_create_object_v1_response_all_of_t *user_create_object_v1_response_all_of_local_var = malloc(sizeof(user_create_object_v1_response_all_of_t));
    if (!user_create_object_v1_response_all_of_local_var) {
        return NULL;
    }
    user_create_object_v1_response_all_of_local_var->m_payload = m_payload;

    return user_create_object_v1_response_all_of_local_var;
}


void user_create_object_v1_response_all_of_free(user_create_object_v1_response_all_of_t *user_create_object_v1_response_all_of) {
    if(NULL == user_create_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (user_create_object_v1_response_all_of->m_payload) {
        user_create_object_v1_response_m_payload_free(user_create_object_v1_response_all_of->m_payload);
        user_create_object_v1_response_all_of->m_payload = NULL;
    }
    free(user_create_object_v1_response_all_of);
}

cJSON *user_create_object_v1_response_all_of_convertToJSON(user_create_object_v1_response_all_of_t *user_create_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // user_create_object_v1_response_all_of->m_payload
    if (!user_create_object_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = user_create_object_v1_response_m_payload_convertToJSON(user_create_object_v1_response_all_of->m_payload);
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

user_create_object_v1_response_all_of_t *user_create_object_v1_response_all_of_parseFromJSON(cJSON *user_create_object_v1_response_all_ofJSON){

    user_create_object_v1_response_all_of_t *user_create_object_v1_response_all_of_local_var = NULL;

    // define the local variable for user_create_object_v1_response_all_of->m_payload
    user_create_object_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // user_create_object_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(user_create_object_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = user_create_object_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    user_create_object_v1_response_all_of_local_var = user_create_object_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return user_create_object_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        user_create_object_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
