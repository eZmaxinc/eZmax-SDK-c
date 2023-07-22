#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroup_edit_permissions_v1_response_all_of.h"



usergroup_edit_permissions_v1_response_all_of_t *usergroup_edit_permissions_v1_response_all_of_create(
    usergroup_edit_permissions_v1_response_m_payload_t *m_payload
    ) {
    usergroup_edit_permissions_v1_response_all_of_t *usergroup_edit_permissions_v1_response_all_of_local_var = malloc(sizeof(usergroup_edit_permissions_v1_response_all_of_t));
    if (!usergroup_edit_permissions_v1_response_all_of_local_var) {
        return NULL;
    }
    usergroup_edit_permissions_v1_response_all_of_local_var->m_payload = m_payload;

    return usergroup_edit_permissions_v1_response_all_of_local_var;
}


void usergroup_edit_permissions_v1_response_all_of_free(usergroup_edit_permissions_v1_response_all_of_t *usergroup_edit_permissions_v1_response_all_of) {
    if(NULL == usergroup_edit_permissions_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroup_edit_permissions_v1_response_all_of->m_payload) {
        usergroup_edit_permissions_v1_response_m_payload_free(usergroup_edit_permissions_v1_response_all_of->m_payload);
        usergroup_edit_permissions_v1_response_all_of->m_payload = NULL;
    }
    free(usergroup_edit_permissions_v1_response_all_of);
}

cJSON *usergroup_edit_permissions_v1_response_all_of_convertToJSON(usergroup_edit_permissions_v1_response_all_of_t *usergroup_edit_permissions_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // usergroup_edit_permissions_v1_response_all_of->m_payload
    if (!usergroup_edit_permissions_v1_response_all_of->m_payload) {
        goto fail;
    }
    cJSON *m_payload_local_JSON = usergroup_edit_permissions_v1_response_m_payload_convertToJSON(usergroup_edit_permissions_v1_response_all_of->m_payload);
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

usergroup_edit_permissions_v1_response_all_of_t *usergroup_edit_permissions_v1_response_all_of_parseFromJSON(cJSON *usergroup_edit_permissions_v1_response_all_ofJSON){

    usergroup_edit_permissions_v1_response_all_of_t *usergroup_edit_permissions_v1_response_all_of_local_var = NULL;

    // define the local variable for usergroup_edit_permissions_v1_response_all_of->m_payload
    usergroup_edit_permissions_v1_response_m_payload_t *m_payload_local_nonprim = NULL;

    // usergroup_edit_permissions_v1_response_all_of->m_payload
    cJSON *m_payload = cJSON_GetObjectItemCaseSensitive(usergroup_edit_permissions_v1_response_all_ofJSON, "mPayload");
    if (!m_payload) {
        goto end;
    }

    
    m_payload_local_nonprim = usergroup_edit_permissions_v1_response_m_payload_parseFromJSON(m_payload); //nonprimitive


    usergroup_edit_permissions_v1_response_all_of_local_var = usergroup_edit_permissions_v1_response_all_of_create (
        m_payload_local_nonprim
        );

    return usergroup_edit_permissions_v1_response_all_of_local_var;
end:
    if (m_payload_local_nonprim) {
        usergroup_edit_permissions_v1_response_m_payload_free(m_payload_local_nonprim);
        m_payload_local_nonprim = NULL;
    }
    return NULL;

}
