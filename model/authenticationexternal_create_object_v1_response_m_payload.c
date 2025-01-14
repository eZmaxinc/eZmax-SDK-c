#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_create_object_v1_response_m_payload.h"



authenticationexternal_create_object_v1_response_m_payload_t *authenticationexternal_create_object_v1_response_m_payload_create(
    list_t *a_pki_authenticationexternal_id
    ) {
    authenticationexternal_create_object_v1_response_m_payload_t *authenticationexternal_create_object_v1_response_m_payload_local_var = malloc(sizeof(authenticationexternal_create_object_v1_response_m_payload_t));
    if (!authenticationexternal_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    authenticationexternal_create_object_v1_response_m_payload_local_var->a_pki_authenticationexternal_id = a_pki_authenticationexternal_id;

    return authenticationexternal_create_object_v1_response_m_payload_local_var;
}


void authenticationexternal_create_object_v1_response_m_payload_free(authenticationexternal_create_object_v1_response_m_payload_t *authenticationexternal_create_object_v1_response_m_payload) {
    if(NULL == authenticationexternal_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_create_object_v1_response_m_payload->a_pki_authenticationexternal_id) {
        list_ForEach(listEntry, authenticationexternal_create_object_v1_response_m_payload->a_pki_authenticationexternal_id) {
            free(listEntry->data);
        }
        list_freeList(authenticationexternal_create_object_v1_response_m_payload->a_pki_authenticationexternal_id);
        authenticationexternal_create_object_v1_response_m_payload->a_pki_authenticationexternal_id = NULL;
    }
    free(authenticationexternal_create_object_v1_response_m_payload);
}

cJSON *authenticationexternal_create_object_v1_response_m_payload_convertToJSON(authenticationexternal_create_object_v1_response_m_payload_t *authenticationexternal_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // authenticationexternal_create_object_v1_response_m_payload->a_pki_authenticationexternal_id
    if (!authenticationexternal_create_object_v1_response_m_payload->a_pki_authenticationexternal_id) {
        goto fail;
    }
    cJSON *a_pki_authenticationexternal_id = cJSON_AddArrayToObject(item, "a_pkiAuthenticationexternalID");
    if(a_pki_authenticationexternal_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_authenticationexternal_idListEntry;
    list_ForEach(a_pki_authenticationexternal_idListEntry, authenticationexternal_create_object_v1_response_m_payload->a_pki_authenticationexternal_id) {
    if(cJSON_AddNumberToObject(a_pki_authenticationexternal_id, "", *(double *)a_pki_authenticationexternal_idListEntry->data) == NULL)
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

authenticationexternal_create_object_v1_response_m_payload_t *authenticationexternal_create_object_v1_response_m_payload_parseFromJSON(cJSON *authenticationexternal_create_object_v1_response_m_payloadJSON){

    authenticationexternal_create_object_v1_response_m_payload_t *authenticationexternal_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for authenticationexternal_create_object_v1_response_m_payload->a_pki_authenticationexternal_id
    list_t *a_pki_authenticationexternal_idList = NULL;

    // authenticationexternal_create_object_v1_response_m_payload->a_pki_authenticationexternal_id
    cJSON *a_pki_authenticationexternal_id = cJSON_GetObjectItemCaseSensitive(authenticationexternal_create_object_v1_response_m_payloadJSON, "a_pkiAuthenticationexternalID");
    if (!a_pki_authenticationexternal_id) {
        goto end;
    }

    
    cJSON *a_pki_authenticationexternal_id_local = NULL;
    if(!cJSON_IsArray(a_pki_authenticationexternal_id)) {
        goto end;//primitive container
    }
    a_pki_authenticationexternal_idList = list_createList();

    cJSON_ArrayForEach(a_pki_authenticationexternal_id_local, a_pki_authenticationexternal_id)
    {
        if(!cJSON_IsNumber(a_pki_authenticationexternal_id_local))
        {
            goto end;
        }
        double *a_pki_authenticationexternal_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_authenticationexternal_id_local_value)
        {
            goto end;
        }
        *a_pki_authenticationexternal_id_local_value = a_pki_authenticationexternal_id_local->valuedouble;
        list_addElement(a_pki_authenticationexternal_idList , a_pki_authenticationexternal_id_local_value);
    }


    authenticationexternal_create_object_v1_response_m_payload_local_var = authenticationexternal_create_object_v1_response_m_payload_create (
        a_pki_authenticationexternal_idList
        );

    return authenticationexternal_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_authenticationexternal_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_authenticationexternal_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_authenticationexternal_idList);
        a_pki_authenticationexternal_idList = NULL;
    }
    return NULL;

}
