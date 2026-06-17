#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_ezmaxpartnerproduct_unsubscribe.h"



static webhook_ezmaxpartnerproduct_unsubscribe_t *webhook_ezmaxpartnerproduct_unsubscribe_create_internal(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    custom_ezmaxpartnerproduct_subscribe_t *obj_ezmaxpartnerproduct
    ) {
    webhook_ezmaxpartnerproduct_unsubscribe_t *webhook_ezmaxpartnerproduct_unsubscribe_local_var = malloc(sizeof(webhook_ezmaxpartnerproduct_unsubscribe_t));
    if (!webhook_ezmaxpartnerproduct_unsubscribe_local_var) {
        return NULL;
    }
    memset(webhook_ezmaxpartnerproduct_unsubscribe_local_var, 0, sizeof(webhook_ezmaxpartnerproduct_unsubscribe_t));
    webhook_ezmaxpartnerproduct_unsubscribe_local_var->_library_owned = 1;
    webhook_ezmaxpartnerproduct_unsubscribe_local_var->obj_webhook = obj_webhook;
    webhook_ezmaxpartnerproduct_unsubscribe_local_var->a_obj_attempt = a_obj_attempt;
    webhook_ezmaxpartnerproduct_unsubscribe_local_var->obj_ezmaxpartnerproduct = obj_ezmaxpartnerproduct;
    return webhook_ezmaxpartnerproduct_unsubscribe_local_var;
}

__attribute__((deprecated)) webhook_ezmaxpartnerproduct_unsubscribe_t *webhook_ezmaxpartnerproduct_unsubscribe_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    custom_ezmaxpartnerproduct_subscribe_t *obj_ezmaxpartnerproduct
    ) {
    webhook_ezmaxpartnerproduct_unsubscribe_t *result = webhook_ezmaxpartnerproduct_unsubscribe_create_internal (
        obj_webhook,
        a_obj_attempt,
        obj_ezmaxpartnerproduct
        );
    if (!result) {
    }
    return result;
}

void webhook_ezmaxpartnerproduct_unsubscribe_free(webhook_ezmaxpartnerproduct_unsubscribe_t *webhook_ezmaxpartnerproduct_unsubscribe) {
    if(NULL == webhook_ezmaxpartnerproduct_unsubscribe){
        return ;
    }
    if(webhook_ezmaxpartnerproduct_unsubscribe->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_ezmaxpartnerproduct_unsubscribe_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_ezmaxpartnerproduct_unsubscribe->obj_webhook) {
        custom_webhook_response_free(webhook_ezmaxpartnerproduct_unsubscribe->obj_webhook);
        webhook_ezmaxpartnerproduct_unsubscribe->obj_webhook = NULL;
    }
    if (webhook_ezmaxpartnerproduct_unsubscribe->a_obj_attempt) {
        list_ForEach(listEntry, webhook_ezmaxpartnerproduct_unsubscribe->a_obj_attempt) {
            attempt_response_compound_free(listEntry->data);
        }
        list_freeList(webhook_ezmaxpartnerproduct_unsubscribe->a_obj_attempt);
        webhook_ezmaxpartnerproduct_unsubscribe->a_obj_attempt = NULL;
    }
    if (webhook_ezmaxpartnerproduct_unsubscribe->obj_ezmaxpartnerproduct) {
        custom_ezmaxpartnerproduct_subscribe_free(webhook_ezmaxpartnerproduct_unsubscribe->obj_ezmaxpartnerproduct);
        webhook_ezmaxpartnerproduct_unsubscribe->obj_ezmaxpartnerproduct = NULL;
    }
    free(webhook_ezmaxpartnerproduct_unsubscribe);
}

cJSON *webhook_ezmaxpartnerproduct_unsubscribe_convertToJSON(webhook_ezmaxpartnerproduct_unsubscribe_t *webhook_ezmaxpartnerproduct_unsubscribe) {
    cJSON *item = cJSON_CreateObject();

    // webhook_ezmaxpartnerproduct_unsubscribe->obj_webhook
    if (!webhook_ezmaxpartnerproduct_unsubscribe->obj_webhook) {
        goto fail;
    }
    cJSON *obj_webhook_local_JSON = custom_webhook_response_convertToJSON(webhook_ezmaxpartnerproduct_unsubscribe->obj_webhook);
    if(obj_webhook_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objWebhook", obj_webhook_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // webhook_ezmaxpartnerproduct_unsubscribe->a_obj_attempt
    if (!webhook_ezmaxpartnerproduct_unsubscribe->a_obj_attempt) {
        goto fail;
    }
    cJSON *a_obj_attempt = cJSON_AddArrayToObject(item, "a_objAttempt");
    if(a_obj_attempt == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attemptListEntry;
    if (webhook_ezmaxpartnerproduct_unsubscribe->a_obj_attempt) {
    list_ForEach(a_obj_attemptListEntry, webhook_ezmaxpartnerproduct_unsubscribe->a_obj_attempt) {
    cJSON *itemLocal = attempt_response_compound_convertToJSON(a_obj_attemptListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attempt, itemLocal);
    }
    }


    // webhook_ezmaxpartnerproduct_unsubscribe->obj_ezmaxpartnerproduct
    if (!webhook_ezmaxpartnerproduct_unsubscribe->obj_ezmaxpartnerproduct) {
        goto fail;
    }
    cJSON *obj_ezmaxpartnerproduct_local_JSON = custom_ezmaxpartnerproduct_subscribe_convertToJSON(webhook_ezmaxpartnerproduct_unsubscribe->obj_ezmaxpartnerproduct);
    if(obj_ezmaxpartnerproduct_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxpartnerproduct", obj_ezmaxpartnerproduct_local_JSON);
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

webhook_ezmaxpartnerproduct_unsubscribe_t *webhook_ezmaxpartnerproduct_unsubscribe_parseFromJSON(cJSON *webhook_ezmaxpartnerproduct_unsubscribeJSON){

    webhook_ezmaxpartnerproduct_unsubscribe_t *webhook_ezmaxpartnerproduct_unsubscribe_local_var = NULL;

    // define the local variable for webhook_ezmaxpartnerproduct_unsubscribe->obj_webhook
    custom_webhook_response_t *obj_webhook_local_nonprim = NULL;

    // define the local list for webhook_ezmaxpartnerproduct_unsubscribe->a_obj_attempt
    list_t *a_obj_attemptList = NULL;

    // define the local variable for webhook_ezmaxpartnerproduct_unsubscribe->obj_ezmaxpartnerproduct
    custom_ezmaxpartnerproduct_subscribe_t *obj_ezmaxpartnerproduct_local_nonprim = NULL;

    // webhook_ezmaxpartnerproduct_unsubscribe->obj_webhook
    cJSON *obj_webhook = cJSON_GetObjectItemCaseSensitive(webhook_ezmaxpartnerproduct_unsubscribeJSON, "objWebhook");
    if (cJSON_IsNull(obj_webhook)) {
        obj_webhook = NULL;
    }
    if (!obj_webhook) {
        goto end;
    }

    
    obj_webhook_local_nonprim = custom_webhook_response_parseFromJSON(obj_webhook); //nonprimitive

    // webhook_ezmaxpartnerproduct_unsubscribe->a_obj_attempt
    cJSON *a_obj_attempt = cJSON_GetObjectItemCaseSensitive(webhook_ezmaxpartnerproduct_unsubscribeJSON, "a_objAttempt");
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

    // webhook_ezmaxpartnerproduct_unsubscribe->obj_ezmaxpartnerproduct
    cJSON *obj_ezmaxpartnerproduct = cJSON_GetObjectItemCaseSensitive(webhook_ezmaxpartnerproduct_unsubscribeJSON, "objEzmaxpartnerproduct");
    if (cJSON_IsNull(obj_ezmaxpartnerproduct)) {
        obj_ezmaxpartnerproduct = NULL;
    }
    if (!obj_ezmaxpartnerproduct) {
        goto end;
    }

    
    obj_ezmaxpartnerproduct_local_nonprim = custom_ezmaxpartnerproduct_subscribe_parseFromJSON(obj_ezmaxpartnerproduct); //nonprimitive



    webhook_ezmaxpartnerproduct_unsubscribe_local_var = webhook_ezmaxpartnerproduct_unsubscribe_create_internal (
        obj_webhook_local_nonprim,
        a_obj_attemptList,
        obj_ezmaxpartnerproduct_local_nonprim
        );

    if (!webhook_ezmaxpartnerproduct_unsubscribe_local_var) {
        goto end;
    }

    return webhook_ezmaxpartnerproduct_unsubscribe_local_var;
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
    if (obj_ezmaxpartnerproduct_local_nonprim) {
        custom_ezmaxpartnerproduct_subscribe_free(obj_ezmaxpartnerproduct_local_nonprim);
        obj_ezmaxpartnerproduct_local_nonprim = NULL;
    }
    return NULL;

}
