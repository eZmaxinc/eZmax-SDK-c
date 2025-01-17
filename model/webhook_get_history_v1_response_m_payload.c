#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_get_history_v1_response_m_payload.h"



webhook_get_history_v1_response_m_payload_t *webhook_get_history_v1_response_m_payload_create(
    list_t *a_obj_webhooklog
    ) {
    webhook_get_history_v1_response_m_payload_t *webhook_get_history_v1_response_m_payload_local_var = malloc(sizeof(webhook_get_history_v1_response_m_payload_t));
    if (!webhook_get_history_v1_response_m_payload_local_var) {
        return NULL;
    }
    webhook_get_history_v1_response_m_payload_local_var->a_obj_webhooklog = a_obj_webhooklog;

    return webhook_get_history_v1_response_m_payload_local_var;
}


void webhook_get_history_v1_response_m_payload_free(webhook_get_history_v1_response_m_payload_t *webhook_get_history_v1_response_m_payload) {
    if(NULL == webhook_get_history_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_get_history_v1_response_m_payload->a_obj_webhooklog) {
        list_ForEach(listEntry, webhook_get_history_v1_response_m_payload->a_obj_webhooklog) {
            custom_webhooklog_response_free(listEntry->data);
        }
        list_freeList(webhook_get_history_v1_response_m_payload->a_obj_webhooklog);
        webhook_get_history_v1_response_m_payload->a_obj_webhooklog = NULL;
    }
    free(webhook_get_history_v1_response_m_payload);
}

cJSON *webhook_get_history_v1_response_m_payload_convertToJSON(webhook_get_history_v1_response_m_payload_t *webhook_get_history_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // webhook_get_history_v1_response_m_payload->a_obj_webhooklog
    if (!webhook_get_history_v1_response_m_payload->a_obj_webhooklog) {
        goto fail;
    }
    cJSON *a_obj_webhooklog = cJSON_AddArrayToObject(item, "a_objWebhooklog");
    if(a_obj_webhooklog == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_webhooklogListEntry;
    if (webhook_get_history_v1_response_m_payload->a_obj_webhooklog) {
    list_ForEach(a_obj_webhooklogListEntry, webhook_get_history_v1_response_m_payload->a_obj_webhooklog) {
    cJSON *itemLocal = custom_webhooklog_response_convertToJSON(a_obj_webhooklogListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_webhooklog, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhook_get_history_v1_response_m_payload_t *webhook_get_history_v1_response_m_payload_parseFromJSON(cJSON *webhook_get_history_v1_response_m_payloadJSON){

    webhook_get_history_v1_response_m_payload_t *webhook_get_history_v1_response_m_payload_local_var = NULL;

    // define the local list for webhook_get_history_v1_response_m_payload->a_obj_webhooklog
    list_t *a_obj_webhooklogList = NULL;

    // webhook_get_history_v1_response_m_payload->a_obj_webhooklog
    cJSON *a_obj_webhooklog = cJSON_GetObjectItemCaseSensitive(webhook_get_history_v1_response_m_payloadJSON, "a_objWebhooklog");
    if (!a_obj_webhooklog) {
        goto end;
    }

    
    cJSON *a_obj_webhooklog_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_webhooklog)){
        goto end; //nonprimitive container
    }

    a_obj_webhooklogList = list_createList();

    cJSON_ArrayForEach(a_obj_webhooklog_local_nonprimitive,a_obj_webhooklog )
    {
        if(!cJSON_IsObject(a_obj_webhooklog_local_nonprimitive)){
            goto end;
        }
        custom_webhooklog_response_t *a_obj_webhooklogItem = custom_webhooklog_response_parseFromJSON(a_obj_webhooklog_local_nonprimitive);

        list_addElement(a_obj_webhooklogList, a_obj_webhooklogItem);
    }


    webhook_get_history_v1_response_m_payload_local_var = webhook_get_history_v1_response_m_payload_create (
        a_obj_webhooklogList
        );

    return webhook_get_history_v1_response_m_payload_local_var;
end:
    if (a_obj_webhooklogList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_webhooklogList) {
            custom_webhooklog_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_webhooklogList);
        a_obj_webhooklogList = NULL;
    }
    return NULL;

}
