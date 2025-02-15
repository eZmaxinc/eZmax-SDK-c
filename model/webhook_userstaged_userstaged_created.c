#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_userstaged_userstaged_created.h"



static webhook_userstaged_userstaged_created_t *webhook_userstaged_userstaged_created_create_internal(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    userstaged_response_compound_t *obj_userstaged
    ) {
    webhook_userstaged_userstaged_created_t *webhook_userstaged_userstaged_created_local_var = malloc(sizeof(webhook_userstaged_userstaged_created_t));
    if (!webhook_userstaged_userstaged_created_local_var) {
        return NULL;
    }
    webhook_userstaged_userstaged_created_local_var->obj_webhook = obj_webhook;
    webhook_userstaged_userstaged_created_local_var->a_obj_attempt = a_obj_attempt;
    webhook_userstaged_userstaged_created_local_var->obj_userstaged = obj_userstaged;

    webhook_userstaged_userstaged_created_local_var->_library_owned = 1;
    return webhook_userstaged_userstaged_created_local_var;
}

__attribute__((deprecated)) webhook_userstaged_userstaged_created_t *webhook_userstaged_userstaged_created_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    userstaged_response_compound_t *obj_userstaged
    ) {
    return webhook_userstaged_userstaged_created_create_internal (
        obj_webhook,
        a_obj_attempt,
        obj_userstaged
        );
}

void webhook_userstaged_userstaged_created_free(webhook_userstaged_userstaged_created_t *webhook_userstaged_userstaged_created) {
    if(NULL == webhook_userstaged_userstaged_created){
        return ;
    }
    if(webhook_userstaged_userstaged_created->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_userstaged_userstaged_created_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_userstaged_userstaged_created->obj_webhook) {
        custom_webhook_response_free(webhook_userstaged_userstaged_created->obj_webhook);
        webhook_userstaged_userstaged_created->obj_webhook = NULL;
    }
    if (webhook_userstaged_userstaged_created->a_obj_attempt) {
        list_ForEach(listEntry, webhook_userstaged_userstaged_created->a_obj_attempt) {
            attempt_response_compound_free(listEntry->data);
        }
        list_freeList(webhook_userstaged_userstaged_created->a_obj_attempt);
        webhook_userstaged_userstaged_created->a_obj_attempt = NULL;
    }
    if (webhook_userstaged_userstaged_created->obj_userstaged) {
        userstaged_response_compound_free(webhook_userstaged_userstaged_created->obj_userstaged);
        webhook_userstaged_userstaged_created->obj_userstaged = NULL;
    }
    free(webhook_userstaged_userstaged_created);
}

cJSON *webhook_userstaged_userstaged_created_convertToJSON(webhook_userstaged_userstaged_created_t *webhook_userstaged_userstaged_created) {
    cJSON *item = cJSON_CreateObject();

    // webhook_userstaged_userstaged_created->obj_webhook
    if (!webhook_userstaged_userstaged_created->obj_webhook) {
        goto fail;
    }
    cJSON *obj_webhook_local_JSON = custom_webhook_response_convertToJSON(webhook_userstaged_userstaged_created->obj_webhook);
    if(obj_webhook_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objWebhook", obj_webhook_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // webhook_userstaged_userstaged_created->a_obj_attempt
    if (!webhook_userstaged_userstaged_created->a_obj_attempt) {
        goto fail;
    }
    cJSON *a_obj_attempt = cJSON_AddArrayToObject(item, "a_objAttempt");
    if(a_obj_attempt == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attemptListEntry;
    if (webhook_userstaged_userstaged_created->a_obj_attempt) {
    list_ForEach(a_obj_attemptListEntry, webhook_userstaged_userstaged_created->a_obj_attempt) {
    cJSON *itemLocal = attempt_response_compound_convertToJSON(a_obj_attemptListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attempt, itemLocal);
    }
    }


    // webhook_userstaged_userstaged_created->obj_userstaged
    if (!webhook_userstaged_userstaged_created->obj_userstaged) {
        goto fail;
    }
    cJSON *obj_userstaged_local_JSON = userstaged_response_compound_convertToJSON(webhook_userstaged_userstaged_created->obj_userstaged);
    if(obj_userstaged_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUserstaged", obj_userstaged_local_JSON);
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

webhook_userstaged_userstaged_created_t *webhook_userstaged_userstaged_created_parseFromJSON(cJSON *webhook_userstaged_userstaged_createdJSON){

    webhook_userstaged_userstaged_created_t *webhook_userstaged_userstaged_created_local_var = NULL;

    // define the local variable for webhook_userstaged_userstaged_created->obj_webhook
    custom_webhook_response_t *obj_webhook_local_nonprim = NULL;

    // define the local list for webhook_userstaged_userstaged_created->a_obj_attempt
    list_t *a_obj_attemptList = NULL;

    // define the local variable for webhook_userstaged_userstaged_created->obj_userstaged
    userstaged_response_compound_t *obj_userstaged_local_nonprim = NULL;

    // webhook_userstaged_userstaged_created->obj_webhook
    cJSON *obj_webhook = cJSON_GetObjectItemCaseSensitive(webhook_userstaged_userstaged_createdJSON, "objWebhook");
    if (cJSON_IsNull(obj_webhook)) {
        obj_webhook = NULL;
    }
    if (!obj_webhook) {
        goto end;
    }

    
    obj_webhook_local_nonprim = custom_webhook_response_parseFromJSON(obj_webhook); //nonprimitive

    // webhook_userstaged_userstaged_created->a_obj_attempt
    cJSON *a_obj_attempt = cJSON_GetObjectItemCaseSensitive(webhook_userstaged_userstaged_createdJSON, "a_objAttempt");
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

    // webhook_userstaged_userstaged_created->obj_userstaged
    cJSON *obj_userstaged = cJSON_GetObjectItemCaseSensitive(webhook_userstaged_userstaged_createdJSON, "objUserstaged");
    if (cJSON_IsNull(obj_userstaged)) {
        obj_userstaged = NULL;
    }
    if (!obj_userstaged) {
        goto end;
    }

    
    obj_userstaged_local_nonprim = userstaged_response_compound_parseFromJSON(obj_userstaged); //nonprimitive


    webhook_userstaged_userstaged_created_local_var = webhook_userstaged_userstaged_created_create_internal (
        obj_webhook_local_nonprim,
        a_obj_attemptList,
        obj_userstaged_local_nonprim
        );

    return webhook_userstaged_userstaged_created_local_var;
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
    if (obj_userstaged_local_nonprim) {
        userstaged_response_compound_free(obj_userstaged_local_nonprim);
        obj_userstaged_local_nonprim = NULL;
    }
    return NULL;

}
