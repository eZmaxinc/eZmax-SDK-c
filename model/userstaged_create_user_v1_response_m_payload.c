#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "userstaged_create_user_v1_response_m_payload.h"



userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload_create(
    int pki_user_id
    ) {
    userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload_local_var = malloc(sizeof(userstaged_create_user_v1_response_m_payload_t));
    if (!userstaged_create_user_v1_response_m_payload_local_var) {
        return NULL;
    }
    userstaged_create_user_v1_response_m_payload_local_var->pki_user_id = pki_user_id;

    return userstaged_create_user_v1_response_m_payload_local_var;
}


void userstaged_create_user_v1_response_m_payload_free(userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload) {
    if(NULL == userstaged_create_user_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    free(userstaged_create_user_v1_response_m_payload);
}

cJSON *userstaged_create_user_v1_response_m_payload_convertToJSON(userstaged_create_user_v1_response_m_payload_t *userstaged_create_user_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // userstaged_create_user_v1_response_m_payload->pki_user_id
    if (!userstaged_create_user_v1_response_m_payload->pki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiUserID", userstaged_create_user_v1_response_m_payload->pki_user_id) == NULL) {
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

    // userstaged_create_user_v1_response_m_payload->pki_user_id
    cJSON *pki_user_id = cJSON_GetObjectItemCaseSensitive(userstaged_create_user_v1_response_m_payloadJSON, "pkiUserID");
    if (!pki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_user_id))
    {
    goto end; //Numeric
    }


    userstaged_create_user_v1_response_m_payload_local_var = userstaged_create_user_v1_response_m_payload_create (
        pki_user_id->valuedouble
        );

    return userstaged_create_user_v1_response_m_payload_local_var;
end:
    return NULL;

}
