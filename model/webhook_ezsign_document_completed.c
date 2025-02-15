#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_ezsign_document_completed.h"



static webhook_ezsign_document_completed_t *webhook_ezsign_document_completed_create_internal(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    ezsigndocument_response_t *obj_ezsigndocument
    ) {
    webhook_ezsign_document_completed_t *webhook_ezsign_document_completed_local_var = malloc(sizeof(webhook_ezsign_document_completed_t));
    if (!webhook_ezsign_document_completed_local_var) {
        return NULL;
    }
    webhook_ezsign_document_completed_local_var->obj_webhook = obj_webhook;
    webhook_ezsign_document_completed_local_var->a_obj_attempt = a_obj_attempt;
    webhook_ezsign_document_completed_local_var->obj_ezsigndocument = obj_ezsigndocument;

    webhook_ezsign_document_completed_local_var->_library_owned = 1;
    return webhook_ezsign_document_completed_local_var;
}

__attribute__((deprecated)) webhook_ezsign_document_completed_t *webhook_ezsign_document_completed_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    ezsigndocument_response_t *obj_ezsigndocument
    ) {
    return webhook_ezsign_document_completed_create_internal (
        obj_webhook,
        a_obj_attempt,
        obj_ezsigndocument
        );
}

void webhook_ezsign_document_completed_free(webhook_ezsign_document_completed_t *webhook_ezsign_document_completed) {
    if(NULL == webhook_ezsign_document_completed){
        return ;
    }
    if(webhook_ezsign_document_completed->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_ezsign_document_completed_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_ezsign_document_completed->obj_webhook) {
        custom_webhook_response_free(webhook_ezsign_document_completed->obj_webhook);
        webhook_ezsign_document_completed->obj_webhook = NULL;
    }
    if (webhook_ezsign_document_completed->a_obj_attempt) {
        list_ForEach(listEntry, webhook_ezsign_document_completed->a_obj_attempt) {
            attempt_response_compound_free(listEntry->data);
        }
        list_freeList(webhook_ezsign_document_completed->a_obj_attempt);
        webhook_ezsign_document_completed->a_obj_attempt = NULL;
    }
    if (webhook_ezsign_document_completed->obj_ezsigndocument) {
        ezsigndocument_response_free(webhook_ezsign_document_completed->obj_ezsigndocument);
        webhook_ezsign_document_completed->obj_ezsigndocument = NULL;
    }
    free(webhook_ezsign_document_completed);
}

cJSON *webhook_ezsign_document_completed_convertToJSON(webhook_ezsign_document_completed_t *webhook_ezsign_document_completed) {
    cJSON *item = cJSON_CreateObject();

    // webhook_ezsign_document_completed->obj_webhook
    if (!webhook_ezsign_document_completed->obj_webhook) {
        goto fail;
    }
    cJSON *obj_webhook_local_JSON = custom_webhook_response_convertToJSON(webhook_ezsign_document_completed->obj_webhook);
    if(obj_webhook_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objWebhook", obj_webhook_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // webhook_ezsign_document_completed->a_obj_attempt
    if (!webhook_ezsign_document_completed->a_obj_attempt) {
        goto fail;
    }
    cJSON *a_obj_attempt = cJSON_AddArrayToObject(item, "a_objAttempt");
    if(a_obj_attempt == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attemptListEntry;
    if (webhook_ezsign_document_completed->a_obj_attempt) {
    list_ForEach(a_obj_attemptListEntry, webhook_ezsign_document_completed->a_obj_attempt) {
    cJSON *itemLocal = attempt_response_compound_convertToJSON(a_obj_attemptListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attempt, itemLocal);
    }
    }


    // webhook_ezsign_document_completed->obj_ezsigndocument
    if (!webhook_ezsign_document_completed->obj_ezsigndocument) {
        goto fail;
    }
    cJSON *obj_ezsigndocument_local_JSON = ezsigndocument_response_convertToJSON(webhook_ezsign_document_completed->obj_ezsigndocument);
    if(obj_ezsigndocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigndocument", obj_ezsigndocument_local_JSON);
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

webhook_ezsign_document_completed_t *webhook_ezsign_document_completed_parseFromJSON(cJSON *webhook_ezsign_document_completedJSON){

    webhook_ezsign_document_completed_t *webhook_ezsign_document_completed_local_var = NULL;

    // define the local variable for webhook_ezsign_document_completed->obj_webhook
    custom_webhook_response_t *obj_webhook_local_nonprim = NULL;

    // define the local list for webhook_ezsign_document_completed->a_obj_attempt
    list_t *a_obj_attemptList = NULL;

    // define the local variable for webhook_ezsign_document_completed->obj_ezsigndocument
    ezsigndocument_response_t *obj_ezsigndocument_local_nonprim = NULL;

    // webhook_ezsign_document_completed->obj_webhook
    cJSON *obj_webhook = cJSON_GetObjectItemCaseSensitive(webhook_ezsign_document_completedJSON, "objWebhook");
    if (cJSON_IsNull(obj_webhook)) {
        obj_webhook = NULL;
    }
    if (!obj_webhook) {
        goto end;
    }

    
    obj_webhook_local_nonprim = custom_webhook_response_parseFromJSON(obj_webhook); //nonprimitive

    // webhook_ezsign_document_completed->a_obj_attempt
    cJSON *a_obj_attempt = cJSON_GetObjectItemCaseSensitive(webhook_ezsign_document_completedJSON, "a_objAttempt");
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

    // webhook_ezsign_document_completed->obj_ezsigndocument
    cJSON *obj_ezsigndocument = cJSON_GetObjectItemCaseSensitive(webhook_ezsign_document_completedJSON, "objEzsigndocument");
    if (cJSON_IsNull(obj_ezsigndocument)) {
        obj_ezsigndocument = NULL;
    }
    if (!obj_ezsigndocument) {
        goto end;
    }

    
    obj_ezsigndocument_local_nonprim = ezsigndocument_response_parseFromJSON(obj_ezsigndocument); //nonprimitive


    webhook_ezsign_document_completed_local_var = webhook_ezsign_document_completed_create_internal (
        obj_webhook_local_nonprim,
        a_obj_attemptList,
        obj_ezsigndocument_local_nonprim
        );

    return webhook_ezsign_document_completed_local_var;
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
    if (obj_ezsigndocument_local_nonprim) {
        ezsigndocument_response_free(obj_ezsigndocument_local_nonprim);
        obj_ezsigndocument_local_nonprim = NULL;
    }
    return NULL;

}
