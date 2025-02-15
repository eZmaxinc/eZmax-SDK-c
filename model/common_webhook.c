#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "common_webhook.h"



static common_webhook_t *common_webhook_create_internal(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt
    ) {
    common_webhook_t *common_webhook_local_var = malloc(sizeof(common_webhook_t));
    if (!common_webhook_local_var) {
        return NULL;
    }
    common_webhook_local_var->obj_webhook = obj_webhook;
    common_webhook_local_var->a_obj_attempt = a_obj_attempt;

    common_webhook_local_var->_library_owned = 1;
    return common_webhook_local_var;
}

__attribute__((deprecated)) common_webhook_t *common_webhook_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt
    ) {
    return common_webhook_create_internal (
        obj_webhook,
        a_obj_attempt
        );
}

void common_webhook_free(common_webhook_t *common_webhook) {
    if(NULL == common_webhook){
        return ;
    }
    if(common_webhook->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "common_webhook_free");
        return ;
    }
    listEntry_t *listEntry;
    if (common_webhook->obj_webhook) {
        custom_webhook_response_free(common_webhook->obj_webhook);
        common_webhook->obj_webhook = NULL;
    }
    if (common_webhook->a_obj_attempt) {
        list_ForEach(listEntry, common_webhook->a_obj_attempt) {
            attempt_response_compound_free(listEntry->data);
        }
        list_freeList(common_webhook->a_obj_attempt);
        common_webhook->a_obj_attempt = NULL;
    }
    free(common_webhook);
}

cJSON *common_webhook_convertToJSON(common_webhook_t *common_webhook) {
    cJSON *item = cJSON_CreateObject();

    // common_webhook->obj_webhook
    if (!common_webhook->obj_webhook) {
        goto fail;
    }
    cJSON *obj_webhook_local_JSON = custom_webhook_response_convertToJSON(common_webhook->obj_webhook);
    if(obj_webhook_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objWebhook", obj_webhook_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // common_webhook->a_obj_attempt
    if (!common_webhook->a_obj_attempt) {
        goto fail;
    }
    cJSON *a_obj_attempt = cJSON_AddArrayToObject(item, "a_objAttempt");
    if(a_obj_attempt == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attemptListEntry;
    if (common_webhook->a_obj_attempt) {
    list_ForEach(a_obj_attemptListEntry, common_webhook->a_obj_attempt) {
    cJSON *itemLocal = attempt_response_compound_convertToJSON(a_obj_attemptListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attempt, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

common_webhook_t *common_webhook_parseFromJSON(cJSON *common_webhookJSON){

    common_webhook_t *common_webhook_local_var = NULL;

    // define the local variable for common_webhook->obj_webhook
    custom_webhook_response_t *obj_webhook_local_nonprim = NULL;

    // define the local list for common_webhook->a_obj_attempt
    list_t *a_obj_attemptList = NULL;

    // common_webhook->obj_webhook
    cJSON *obj_webhook = cJSON_GetObjectItemCaseSensitive(common_webhookJSON, "objWebhook");
    if (cJSON_IsNull(obj_webhook)) {
        obj_webhook = NULL;
    }
    if (!obj_webhook) {
        goto end;
    }

    
    obj_webhook_local_nonprim = custom_webhook_response_parseFromJSON(obj_webhook); //nonprimitive

    // common_webhook->a_obj_attempt
    cJSON *a_obj_attempt = cJSON_GetObjectItemCaseSensitive(common_webhookJSON, "a_objAttempt");
    if (cJSON_IsNull(a_obj_attempt)) {
        a_obj_attempt = NULL;
    }
    if (!a_obj_attempt) {
        goto end;
    }

    
    cJSON *a_obj_attempt_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_attempt)){
        goto end; //nonprimitive container
    }

    a_obj_attemptList = list_createList();

    cJSON_ArrayForEach(a_obj_attempt_local_nonprimitive,a_obj_attempt )
    {
        if(!cJSON_IsObject(a_obj_attempt_local_nonprimitive)){
            goto end;
        }
        attempt_response_compound_t *a_obj_attemptItem = attempt_response_compound_parseFromJSON(a_obj_attempt_local_nonprimitive);

        list_addElement(a_obj_attemptList, a_obj_attemptItem);
    }


    common_webhook_local_var = common_webhook_create_internal (
        obj_webhook_local_nonprim,
        a_obj_attemptList
        );

    return common_webhook_local_var;
end:
    if (obj_webhook_local_nonprim) {
        custom_webhook_response_free(obj_webhook_local_nonprim);
        obj_webhook_local_nonprim = NULL;
    }
    if (a_obj_attemptList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attemptList) {
            attempt_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attemptList);
        a_obj_attemptList = NULL;
    }
    return NULL;

}
