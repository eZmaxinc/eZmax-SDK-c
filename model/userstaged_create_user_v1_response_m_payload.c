#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_create_user_v1_response_m_payload.h"



static userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload_create_internal(
    int *pki_user_id
    ) {
    userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload_local_var = malloc(sizeof(userstaged_create_user_v1_response_m_payload_t));
    if (!userstaged_create_user_v1_response_m_payload_local_var) {
        return NULL;
    }
    memset(userstaged_create_user_v1_response_m_payload_local_var, 0, sizeof(userstaged_create_user_v1_response_m_payload_t));
    userstaged_create_user_v1_response_m_payload_local_var->_library_owned = 1;
    userstaged_create_user_v1_response_m_payload_local_var->pki_user_id = pki_user_id;
    return userstaged_create_user_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload_create(
    int *pki_user_id
    ) {
    int *pki_user_id_copy = NULL;
    if (pki_user_id) {
        pki_user_id_copy = malloc(sizeof(int));
        if (pki_user_id_copy) *pki_user_id_copy = *pki_user_id;
    }
    userstaged_create_user_v1_response_m_payload_t *result = userstaged_create_user_v1_response_m_payload_create_internal (
        pki_user_id_copy
        );
    if (!result) {
        free(pki_user_id_copy);
    }
    return result;
}

void userstaged_create_user_v1_response_m_payload_free(userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload) {
    if(NULL == userstaged_create_user_v1_response_m_payload){
        return ;
    }
    if(userstaged_create_user_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "userstaged_create_user_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (userstaged_create_user_v1_response_m_payload->pki_user_id) {
        free(userstaged_create_user_v1_response_m_payload->pki_user_id);
        userstaged_create_user_v1_response_m_payload->pki_user_id = NULL;
    }
    free(userstaged_create_user_v1_response_m_payload);
}

cJSON *userstaged_create_user_v1_response_m_payload_convertToJSON(userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_create_user_v1_response_m_payload->pki_user_id
    if (!userstaged_create_user_v1_response_m_payload->pki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserID", *userstaged_create_user_v1_response_m_payload->pki_user_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload_parseFromJSON(cJSON *userstaged_create_user_v1_response_m_payloadJSON){

    userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload_local_var = NULL;

    // define the local variable for userstaged_create_user_v1_response_m_payload->pki_user_id
    int *pki_user_id_local_var = NULL;

    // userstaged_create_user_v1_response_m_payload->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(userstaged_create_user_v1_response_m_payloadJSON, "pkiUserID");
    if (cJSON_IsNull(pki_user_id)) {
        pki_user_id = NULL;
    }
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }
    pki_user_id_local_var = malloc(sizeof(int));
    if(!pki_user_id_local_var)
    {
        goto end;
    }
    *pki_user_id_local_var = pki_user_id->valuedouble;



    userstaged_create_user_v1_response_m_payload_local_var = userstaged_create_user_v1_response_m_payload_create_internal (
        pki_user_id_local_var
        );

    if (!userstaged_create_user_v1_response_m_payload_local_var) {
        goto end;
    }

    return userstaged_create_user_v1_response_m_payload_local_var;
end:
    if (pki_user_id_local_var) {
        free(pki_user_id_local_var);
        pki_user_id_local_var = NULL;
    }
    return NULL;

}
