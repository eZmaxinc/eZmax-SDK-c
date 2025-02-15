#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "user_create_ezsignuser_v1_response_m_payload.h"



static user_create_ezsignuser_v1_response_m_payload_t *user_create_ezsignuser_v1_response_m_payload_create_internal(
    list_t *a_s_email_address_success,
    list_t *a_s_email_address_failure
    ) {
    user_create_ezsignuser_v1_response_m_payload_t *user_create_ezsignuser_v1_response_m_payload_local_var = malloc(sizeof(user_create_ezsignuser_v1_response_m_payload_t));
    if (!user_create_ezsignuser_v1_response_m_payload_local_var) {
        return NULL;
    }
    user_create_ezsignuser_v1_response_m_payload_local_var->a_s_email_address_success = a_s_email_address_success;
    user_create_ezsignuser_v1_response_m_payload_local_var->a_s_email_address_failure = a_s_email_address_failure;

    user_create_ezsignuser_v1_response_m_payload_local_var->_library_owned = 1;
    return user_create_ezsignuser_v1_response_m_payload_local_var;
}

__attribute__((deprecated)) user_create_ezsignuser_v1_response_m_payload_t *user_create_ezsignuser_v1_response_m_payload_create(
    list_t *a_s_email_address_success,
    list_t *a_s_email_address_failure
    ) {
    return user_create_ezsignuser_v1_response_m_payload_create_internal (
        a_s_email_address_success,
        a_s_email_address_failure
        );
}

void user_create_ezsignuser_v1_response_m_payload_free(user_create_ezsignuser_v1_response_m_payload_t *user_create_ezsignuser_v1_response_m_payload) {
    if(NULL == user_create_ezsignuser_v1_response_m_payload){
        return ;
    }
    if(user_create_ezsignuser_v1_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "user_create_ezsignuser_v1_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (user_create_ezsignuser_v1_response_m_payload->a_s_email_address_success) {
        list_ForEach(listEntry, user_create_ezsignuser_v1_response_m_payload->a_s_email_address_success) {
            free(listEntry->data);
        }
        list_freeList(user_create_ezsignuser_v1_response_m_payload->a_s_email_address_success);
        user_create_ezsignuser_v1_response_m_payload->a_s_email_address_success = NULL;
    }
    if (user_create_ezsignuser_v1_response_m_payload->a_s_email_address_failure) {
        list_ForEach(listEntry, user_create_ezsignuser_v1_response_m_payload->a_s_email_address_failure) {
            free(listEntry->data);
        }
        list_freeList(user_create_ezsignuser_v1_response_m_payload->a_s_email_address_failure);
        user_create_ezsignuser_v1_response_m_payload->a_s_email_address_failure = NULL;
    }
    free(user_create_ezsignuser_v1_response_m_payload);
}

cJSON *user_create_ezsignuser_v1_response_m_payload_convertToJSON(user_create_ezsignuser_v1_response_m_payload_t *user_create_ezsignuser_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // user_create_ezsignuser_v1_response_m_payload->a_s_email_address_success
    if (!user_create_ezsignuser_v1_response_m_payload->a_s_email_address_success) {
        goto fail;
    }
    cJSON *a_s_email_address_success = cJSON_AddArrayToObject(item, "a_sEmailAddressSuccess");
    if(a_s_email_address_success == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_email_address_successListEntry;
    list_ForEach(a_s_email_address_successListEntry, user_create_ezsignuser_v1_response_m_payload->a_s_email_address_success) {
    if(cJSON_AddStringToObject(a_s_email_address_success, "", a_s_email_address_successListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // user_create_ezsignuser_v1_response_m_payload->a_s_email_address_failure
    if (!user_create_ezsignuser_v1_response_m_payload->a_s_email_address_failure) {
        goto fail;
    }
    cJSON *a_s_email_address_failure = cJSON_AddArrayToObject(item, "a_sEmailAddressFailure");
    if(a_s_email_address_failure == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_s_email_address_failureListEntry;
    list_ForEach(a_s_email_address_failureListEntry, user_create_ezsignuser_v1_response_m_payload->a_s_email_address_failure) {
    if(cJSON_AddStringToObject(a_s_email_address_failure, "", a_s_email_address_failureListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

user_create_ezsignuser_v1_response_m_payload_t *user_create_ezsignuser_v1_response_m_payload_parseFromJSON(cJSON *user_create_ezsignuser_v1_response_m_payloadJSON){

    user_create_ezsignuser_v1_response_m_payload_t *user_create_ezsignuser_v1_response_m_payload_local_var = NULL;

    // define the local list for user_create_ezsignuser_v1_response_m_payload->a_s_email_address_success
    list_t *a_s_email_address_successList = NULL;

    // define the local list for user_create_ezsignuser_v1_response_m_payload->a_s_email_address_failure
    list_t *a_s_email_address_failureList = NULL;

    // user_create_ezsignuser_v1_response_m_payload->a_s_email_address_success
    cJSON *a_s_email_address_success = cJSON_GetObjectItemCaseSensitive(user_create_ezsignuser_v1_response_m_payloadJSON, "a_sEmailAddressSuccess");
    if (cJSON_IsNull(a_s_email_address_success)) {
        a_s_email_address_success = NULL;
    }
    if (!a_s_email_address_success) {
        goto end;
    }

    
    cJSON *a_s_email_address_success_local = NULL;
    if(!cJSON_IsArray(a_s_email_address_success)) {
        goto end;//primitive container
    }
    a_s_email_address_successList = list_createList();

    cJSON_ArrayForEach(a_s_email_address_success_local, a_s_email_address_success)
    {
        if(!cJSON_IsString(a_s_email_address_success_local))
        {
            goto end;
        }
        list_addElement(a_s_email_address_successList , strdup(a_s_email_address_success_local->valuestring));
    }

    // user_create_ezsignuser_v1_response_m_payload->a_s_email_address_failure
    cJSON *a_s_email_address_failure = cJSON_GetObjectItemCaseSensitive(user_create_ezsignuser_v1_response_m_payloadJSON, "a_sEmailAddressFailure");
    if (cJSON_IsNull(a_s_email_address_failure)) {
        a_s_email_address_failure = NULL;
    }
    if (!a_s_email_address_failure) {
        goto end;
    }

    
    cJSON *a_s_email_address_failure_local = NULL;
    if(!cJSON_IsArray(a_s_email_address_failure)) {
        goto end;//primitive container
    }
    a_s_email_address_failureList = list_createList();

    cJSON_ArrayForEach(a_s_email_address_failure_local, a_s_email_address_failure)
    {
        if(!cJSON_IsString(a_s_email_address_failure_local))
        {
            goto end;
        }
        list_addElement(a_s_email_address_failureList , strdup(a_s_email_address_failure_local->valuestring));
    }


    user_create_ezsignuser_v1_response_m_payload_local_var = user_create_ezsignuser_v1_response_m_payload_create_internal (
        a_s_email_address_successList,
        a_s_email_address_failureList
        );

    return user_create_ezsignuser_v1_response_m_payload_local_var;
end:
    if (a_s_email_address_successList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_email_address_successList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_email_address_successList);
        a_s_email_address_successList = NULL;
    }
    if (a_s_email_address_failureList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_s_email_address_failureList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_s_email_address_failureList);
        a_s_email_address_failureList = NULL;
    }
    return NULL;

}
