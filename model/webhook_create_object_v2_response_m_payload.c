#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_create_object_v2_response_m_payload.h"



static webhook_create_object_v2_response_m_payload_t *webhook_create_object_v2_response_m_payload_create_internal(
    list_t *a_obj_webhook
    ) {
    webhook_create_object_v2_response_m_payload_t *webhook_create_object_v2_response_m_payload_local_var = malloc(sizeof(webhook_create_object_v2_response_m_payload_t));
    if (!webhook_create_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    webhook_create_object_v2_response_m_payload_local_var->a_obj_webhook = a_obj_webhook;

    webhook_create_object_v2_response_m_payload_local_var->_library_owned = 1;
    return webhook_create_object_v2_response_m_payload_local_var;
}

__attribute__((deprecated)) webhook_create_object_v2_response_m_payload_t *webhook_create_object_v2_response_m_payload_create(
    list_t *a_obj_webhook
    ) {
    return webhook_create_object_v2_response_m_payload_create_internal (
        a_obj_webhook
        );
}

void webhook_create_object_v2_response_m_payload_free(webhook_create_object_v2_response_m_payload_t *webhook_create_object_v2_response_m_payload) {
    if(NULL == webhook_create_object_v2_response_m_payload){
        return ;
    }
    if(webhook_create_object_v2_response_m_payload->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_create_object_v2_response_m_payload_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_create_object_v2_response_m_payload->a_obj_webhook) {
        list_ForEach(listEntry, webhook_create_object_v2_response_m_payload->a_obj_webhook) {
            webhook_response_compound_free(listEntry->data);
        }
        list_freeList(webhook_create_object_v2_response_m_payload->a_obj_webhook);
        webhook_create_object_v2_response_m_payload->a_obj_webhook = NULL;
    }
    free(webhook_create_object_v2_response_m_payload);
}

cJSON *webhook_create_object_v2_response_m_payload_convertToJSON(webhook_create_object_v2_response_m_payload_t *webhook_create_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // webhook_create_object_v2_response_m_payload->a_obj_webhook
    if (!webhook_create_object_v2_response_m_payload->a_obj_webhook) {
        goto fail;
    }
    cJSON *a_obj_webhook = cJSON_AddArrayToObject(item, "a_objWebhook");
    if(a_obj_webhook == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_webhookListEntry;
    if (webhook_create_object_v2_response_m_payload->a_obj_webhook) {
    list_ForEach(a_obj_webhookListEntry, webhook_create_object_v2_response_m_payload->a_obj_webhook) {
    cJSON *itemLocal = webhook_response_compound_convertToJSON(a_obj_webhookListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_webhook, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhook_create_object_v2_response_m_payload_t *webhook_create_object_v2_response_m_payload_parseFromJSON(cJSON *webhook_create_object_v2_response_m_payloadJSON){

    webhook_create_object_v2_response_m_payload_t *webhook_create_object_v2_response_m_payload_local_var = NULL;

    // define the local list for webhook_create_object_v2_response_m_payload->a_obj_webhook
    list_t *a_obj_webhookList = NULL;

    // webhook_create_object_v2_response_m_payload->a_obj_webhook
    cJSON *a_obj_webhook = cJSON_GetObjectItemCaseSensitive(webhook_create_object_v2_response_m_payloadJSON, "a_objWebhook");
    if (cJSON_IsNull(a_obj_webhook)) {
        a_obj_webhook = NULL;
    }
    if (!a_obj_webhook) {
        goto end;
    }

    
    cJSON *a_obj_webhook_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_webhook)){
        goto end; //nonprimitive container
    }

    a_obj_webhookList = list_createList();

    cJSON_ArrayForEach(a_obj_webhook_local_nonprimitive,a_obj_webhook )
    {
        if(!cJSON_IsObject(a_obj_webhook_local_nonprimitive)){
            goto end;
        }
        webhook_response_compound_t *a_obj_webhookItem = webhook_response_compound_parseFromJSON(a_obj_webhook_local_nonprimitive);

        list_addElement(a_obj_webhookList, a_obj_webhookItem);
    }


    webhook_create_object_v2_response_m_payload_local_var = webhook_create_object_v2_response_m_payload_create_internal (
        a_obj_webhookList
        );

    return webhook_create_object_v2_response_m_payload_local_var;
end:
    if (a_obj_webhookList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_webhookList) {
            webhook_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_webhookList);
        a_obj_webhookList = NULL;
    }
    return NULL;

}
