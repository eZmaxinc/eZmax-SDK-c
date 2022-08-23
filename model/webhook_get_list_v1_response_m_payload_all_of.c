#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_get_list_v1_response_m_payload_all_of.h"



webhook_get_list_v1_response_m_payload_all_of_t *webhook_get_list_v1_response_m_payload_all_of_create(
    list_t *a_obj_webhook
    ) {
    webhook_get_list_v1_response_m_payload_all_of_t *webhook_get_list_v1_response_m_payload_all_of_local_var = malloc(sizeof(webhook_get_list_v1_response_m_payload_all_of_t));
    if (!webhook_get_list_v1_response_m_payload_all_of_local_var) {
        return NULL;
    }
    webhook_get_list_v1_response_m_payload_all_of_local_var->a_obj_webhook = a_obj_webhook;

    return webhook_get_list_v1_response_m_payload_all_of_local_var;
}


void webhook_get_list_v1_response_m_payload_all_of_free(webhook_get_list_v1_response_m_payload_all_of_t *webhook_get_list_v1_response_m_payload_all_of) {
    if(NULL == webhook_get_list_v1_response_m_payload_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_get_list_v1_response_m_payload_all_of->a_obj_webhook) {
        list_ForEach(listEntry, webhook_get_list_v1_response_m_payload_all_of->a_obj_webhook) {
            webhook_list_element_free(listEntry->data);
        }
        list_freeList(webhook_get_list_v1_response_m_payload_all_of->a_obj_webhook);
        webhook_get_list_v1_response_m_payload_all_of->a_obj_webhook = NULL;
    }
    free(webhook_get_list_v1_response_m_payload_all_of);
}

cJSON *webhook_get_list_v1_response_m_payload_all_of_convertToJSON(webhook_get_list_v1_response_m_payload_all_of_t *webhook_get_list_v1_response_m_payload_all_of) {
    cJSON *item = cJSON_CreateObject();

    // webhook_get_list_v1_response_m_payload_all_of->a_obj_webhook
    if (!webhook_get_list_v1_response_m_payload_all_of->a_obj_webhook) {
        goto fail;
    }
    cJSON *a_obj_webhook = cJSON_AddArrayToObject(item, "a_objWebhook");
    if(a_obj_webhook == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_webhookListEntry;
    if (webhook_get_list_v1_response_m_payload_all_of->a_obj_webhook) {
    list_ForEach(a_obj_webhookListEntry, webhook_get_list_v1_response_m_payload_all_of->a_obj_webhook) {
    cJSON *itemLocal = webhook_list_element_convertToJSON(a_obj_webhookListEntry->data);
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

webhook_get_list_v1_response_m_payload_all_of_t *webhook_get_list_v1_response_m_payload_all_of_parseFromJSON(cJSON *webhook_get_list_v1_response_m_payload_all_ofJSON){

    webhook_get_list_v1_response_m_payload_all_of_t *webhook_get_list_v1_response_m_payload_all_of_local_var = NULL;

    // define the local list for webhook_get_list_v1_response_m_payload_all_of->a_obj_webhook
    list_t *a_obj_webhookList = NULL;

    // webhook_get_list_v1_response_m_payload_all_of->a_obj_webhook
    cJSON *a_obj_webhook = cJSON_GetObjectItemCaseSensitive(webhook_get_list_v1_response_m_payload_all_ofJSON, "a_objWebhook");
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
        webhook_list_element_t *a_obj_webhookItem = webhook_list_element_parseFromJSON(a_obj_webhook_local_nonprimitive);

        list_addElement(a_obj_webhookList, a_obj_webhookItem);
    }


    webhook_get_list_v1_response_m_payload_all_of_local_var = webhook_get_list_v1_response_m_payload_all_of_create (
        a_obj_webhookList
        );

    return webhook_get_list_v1_response_m_payload_all_of_local_var;
end:
    if (a_obj_webhookList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_webhookList) {
            webhook_list_element_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_webhookList);
        a_obj_webhookList = NULL;
    }
    return NULL;

}
