#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "permission_get_object_v2_response_all_of.h"



permission_get_object_v2_response_all_of_t *permission_get_object_v2_response_all_of_create(
    permission_get_object_v2_response_m_payload_t *m_payload
    ) {
    permission_get_object_v2_response_all_of_t *permission_get_object_v2_response_all_of_local_var = malloc(sizeof(permission_get_object_v2_response_all_of_t));
    if (!permission_get_object_v2_response_all_of_local_var) {
        return NULL;
    }
    permission_get_object_v2_response_all_of_local_var->m_payload = m_payload;

    return permission_get_object_v2_response_all_of_local_var;
}


void permission_get_object_v2_response_all_of_free(permission_get_object_v2_response_all_of_t *permission_get_object_v2_response_all_of) {
    if(NULL == permission_get_object_v2_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (permission_get_object_v2_response_all_of->m_payload) {
        permission_get_object_v2_response_m_payload_free(permission_get_object_v2_response_all_of->m_payload);
        permission_get_object_v2_response_all_of->m_payload = NULL;
    }
    free(permission_get_object_v2_response_all_of);
}

cJSON *permission_get_object_v2_response_all_of_convertToJSON(permission_get_object_v2_response_all_of_t *permission_get_object_v2_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // permission_get_object_v2_response_all_of->m_payload
    if (!permission_get_object_v2_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = permission_get_object_v2_response_m_payload_convertToJSON(permission_get_object_v2_response_all_of->m_payload);
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

permission_get_object_v2_response_all_of_t *permission_get_object_v2_response_all_of_parseFromJSON(cJSON *permission_get_object_v2_response_all_ofJSON){

    permission_get_object_v2_response_all_of_t *permission_get_object_v2_response_all_of_local_var = NULL;

    // define the local variable for permission_get_object_v2_response_all_of->m_payload
    permission_get_object_v2_response_m_payload_t *m_payload_local_nonprim = NULL;

    // permission_get_object_v2_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(permission_get_object_v2_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = permission_get_object_v2_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    permission_get_object_v2_response_all_of_local_var = permission_get_object_v2_response_all_of_create (
        m_payload_local_nonprim
        );

    return permission_get_object_v2_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        permission_get_object_v2_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
