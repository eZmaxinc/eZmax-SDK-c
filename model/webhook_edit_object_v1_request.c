#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_edit_object_v1_request.h"



static webhook_edit_object_v1_request_t *webhook_edit_object_v1_request_create_internal(
    webhook_request_compound_t *obj_webhook
    ) {
    webhook_edit_object_v1_request_t *webhook_edit_object_v1_request_local_var = malloc(sizeof(webhook_edit_object_v1_request_t));
    if (!webhook_edit_object_v1_request_local_var) {
        return NULL;
    }
    webhook_edit_object_v1_request_local_var->obj_webhook = obj_webhook;

    webhook_edit_object_v1_request_local_var->_library_owned = 1;
    return webhook_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) webhook_edit_object_v1_request_t *webhook_edit_object_v1_request_create(
    webhook_request_compound_t *obj_webhook
    ) {
    return webhook_edit_object_v1_request_create_internal (
        obj_webhook
        );
}

void webhook_edit_object_v1_request_free(webhook_edit_object_v1_request_t *webhook_edit_object_v1_request) {
    if(NULL == webhook_edit_object_v1_request){
        return ;
    }
    if(webhook_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_edit_object_v1_request->obj_webhook) {
        webhook_request_compound_free(webhook_edit_object_v1_request->obj_webhook);
        webhook_edit_object_v1_request->obj_webhook = NULL;
    }
    free(webhook_edit_object_v1_request);
}

cJSON *webhook_edit_object_v1_request_convertToJSON(webhook_edit_object_v1_request_t *webhook_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // webhook_edit_object_v1_request->obj_webhook
    if (!webhook_edit_object_v1_request->obj_webhook) {
        goto fail;
    }
    cJSON *obj_webhook_local_JSON = webhook_request_compound_convertToJSON(webhook_edit_object_v1_request->obj_webhook);
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

webhook_edit_object_v1_request_t *webhook_edit_object_v1_request_parseFromJSON(cJSON *webhook_edit_object_v1_requestJSON){

    webhook_edit_object_v1_request_t *webhook_edit_object_v1_request_local_var = NULL;

    // define the local variable for webhook_edit_object_v1_request->obj_webhook
    webhook_request_compound_t *obj_webhook_local_nonprim = NULL;

    // webhook_edit_object_v1_request->obj_webhook
    cJSON *obj_webhook = cJSON_GetObjectItemCaseSensitive(webhook_edit_object_v1_requestJSON, "objWebhook");
    if (cJSON_IsNull(obj_webhook)) {
        obj_webhook = NULL;
    }
    if (!obj_webhook) {
        goto end;
    }

    
    obj_webhook_local_nonprim = webhook_request_compound_parseFromJSON(obj_webhook); //nonprimitive


    webhook_edit_object_v1_request_local_var = webhook_edit_object_v1_request_create_internal (
        obj_webhook_local_nonprim
        );

    return webhook_edit_object_v1_request_local_var;
end:
    if (obj_webhook_local_nonprim) {
        webhook_request_compound_free(obj_webhook_local_nonprim);
        obj_webhook_local_nonprim = NULL;
    }
    return NULL;

}
