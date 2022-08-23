#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_create_object_v1_response_m_payload.h"



webhook_create_object_v1_response_m_payload_t *webhook_create_object_v1_response_m_payload_create(
    list_t *a_pki_webhook_id
    ) {
    webhook_create_object_v1_response_m_payload_t *webhook_create_object_v1_response_m_payload_local_var = malloc(sizeof(webhook_create_object_v1_response_m_payload_t));
    if (!webhook_create_object_v1_response_m_payload_local_var) {
        return NULL;
    }
    webhook_create_object_v1_response_m_payload_local_var->a_pki_webhook_id = a_pki_webhook_id;

    return webhook_create_object_v1_response_m_payload_local_var;
}


void webhook_create_object_v1_response_m_payload_free(webhook_create_object_v1_response_m_payload_t *webhook_create_object_v1_response_m_payload) {
    if(NULL == webhook_create_object_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_create_object_v1_response_m_payload->a_pki_webhook_id) {
        list_ForEach(listEntry, webhook_create_object_v1_response_m_payload->a_pki_webhook_id) {
            free(listEntry->data);
        }
        list_freeList(webhook_create_object_v1_response_m_payload->a_pki_webhook_id);
        webhook_create_object_v1_response_m_payload->a_pki_webhook_id = NULL;
    }
    free(webhook_create_object_v1_response_m_payload);
}

cJSON *webhook_create_object_v1_response_m_payload_convertToJSON(webhook_create_object_v1_response_m_payload_t *webhook_create_object_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // webhook_create_object_v1_response_m_payload->a_pki_webhook_id
    if (!webhook_create_object_v1_response_m_payload->a_pki_webhook_id) {
        goto fail;
    }
    cJSON *a_pki_webhook_id = cJSON_AddArrayToObject(item, "a_pkiWebhookID");
    if(a_pki_webhook_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_webhook_idListEntry;
    list_ForEach(a_pki_webhook_idListEntry, webhook_create_object_v1_response_m_payload->a_pki_webhook_id) {
    if(cJSON_AddNumberToObject(a_pki_webhook_id, "", *(double *)a_pki_webhook_idListEntry->data) == NULL)
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

webhook_create_object_v1_response_m_payload_t *webhook_create_object_v1_response_m_payload_parseFromJSON(cJSON *webhook_create_object_v1_response_m_payloadJSON){

    webhook_create_object_v1_response_m_payload_t *webhook_create_object_v1_response_m_payload_local_var = NULL;

    // define the local list for webhook_create_object_v1_response_m_payload->a_pki_webhook_id
    list_t *a_pki_webhook_idList = NULL;

    // webhook_create_object_v1_response_m_payload->a_pki_webhook_id
    cJSON *a_pki_webhook_id = cJSON_GetObjectItemCaseSensitive(webhook_create_object_v1_response_m_payloadJSON, "a_pkiWebhookID");
    if (!a_pki_webhook_id) {
        goto end;
    }

    
    cJSON *a_pki_webhook_id_local = NULL;
    if(!cJSON_IsArray(a_pki_webhook_id)) {
        goto end;//primitive container
    }
    a_pki_webhook_idList = list_createList();

    cJSON_ArrayForEach(a_pki_webhook_id_local, a_pki_webhook_id)
    {
        if(!cJSON_IsNumber(a_pki_webhook_id_local))
        {
            goto end;
        }
        double *a_pki_webhook_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_webhook_id_local_value)
        {
            goto end;
        }
        *a_pki_webhook_id_local_value = a_pki_webhook_id_local->valuedouble;
        list_addElement(a_pki_webhook_idList , a_pki_webhook_id_local_value);
    }


    webhook_create_object_v1_response_m_payload_local_var = webhook_create_object_v1_response_m_payload_create (
        a_pki_webhook_idList
        );

    return webhook_create_object_v1_response_m_payload_local_var;
end:
    if (a_pki_webhook_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_webhook_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_webhook_idList);
        a_pki_webhook_idList = NULL;
    }
    return NULL;

}
