#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_get_object_v2_response_m_payload.h"



webhook_get_object_v2_response_m_payload_t *webhook_get_object_v2_response_m_payload_create(
    webhook_response_compound_t *obj_webhook
    ) {
    webhook_get_object_v2_response_m_payload_t *webhook_get_object_v2_response_m_payload_local_var = malloc(sizeof(webhook_get_object_v2_response_m_payload_t));
    if (!webhook_get_object_v2_response_m_payload_local_var) {
        return NULL;
    }
    webhook_get_object_v2_response_m_payload_local_var->obj_webhook = obj_webhook;

    return webhook_get_object_v2_response_m_payload_local_var;
}


void webhook_get_object_v2_response_m_payload_free(webhook_get_object_v2_response_m_payload_t *webhook_get_object_v2_response_m_payload) {
    if(NULL == webhook_get_object_v2_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_get_object_v2_response_m_payload->obj_webhook) {
        webhook_response_compound_free(webhook_get_object_v2_response_m_payload->obj_webhook);
        webhook_get_object_v2_response_m_payload->obj_webhook = NULL;
    }
    free(webhook_get_object_v2_response_m_payload);
}

cJSON *webhook_get_object_v2_response_m_payload_convertToJSON(webhook_get_object_v2_response_m_payload_t *webhook_get_object_v2_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // webhook_get_object_v2_response_m_payload->obj_webhook
    if (!webhook_get_object_v2_response_m_payload->obj_webhook) {
        goto fail;
    }
    cJSON *obj_webhook_local_JSON = webhook_response_compound_convertToJSON(webhook_get_object_v2_response_m_payload->obj_webhook);
    if(obj_webhook_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objWebhook", obj_webhook_local_JSON);
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

webhook_get_object_v2_response_m_payload_t *webhook_get_object_v2_response_m_payload_parseFromJSON(cJSON *webhook_get_object_v2_response_m_payloadJSON){

    webhook_get_object_v2_response_m_payload_t *webhook_get_object_v2_response_m_payload_local_var = NULL;

    // define the local variable for webhook_get_object_v2_response_m_payload->obj_webhook
    webhook_response_compound_t *obj_webhook_local_nonprim = NULL;

    // webhook_get_object_v2_response_m_payload->obj_webhook
    cJSON *obj_webhook = cJSON_GetObjectItemCaseSensitive(webhook_get_object_v2_response_m_payloadJSON, "objWebhook");
    if (!obj_webhook) {
        goto end;
    }

    
    obj_webhook_local_nonprim = webhook_response_compound_parseFromJSON(obj_webhook); //nonprimitive


    webhook_get_object_v2_response_m_payload_local_var = webhook_get_object_v2_response_m_payload_create (
        obj_webhook_local_nonprim
        );

    return webhook_get_object_v2_response_m_payload_local_var;
end:
    if (obj_webhook_local_nonprim) {
        webhook_response_compound_free(obj_webhook_local_nonprim);
        obj_webhook_local_nonprim = NULL;
    }
    return NULL;

}
