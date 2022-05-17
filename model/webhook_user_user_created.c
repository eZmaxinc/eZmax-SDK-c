#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_user_user_created.h"



webhook_user_user_created_t *webhook_user_user_created_create(
    user_response_compound_t *obj_user,
    webhook_response_t *obj_webhook,
    list_t *a_obj_attempt
    ) {
    webhook_user_user_created_t *webhook_user_user_created_local_var = malloc(sizeof(webhook_user_user_created_t));
    if (!webhook_user_user_created_local_var) {
        return NULL;
    }
    webhook_user_user_created_local_var->obj_user = obj_user;
    webhook_user_user_created_local_var->obj_webhook = obj_webhook;
    webhook_user_user_created_local_var->a_obj_attempt = a_obj_attempt;

    return webhook_user_user_created_local_var;
}


void webhook_user_user_created_free(webhook_user_user_created_t *webhook_user_user_created) {
    if(NULL == webhook_user_user_created){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_user_user_created->obj_user) {
        user_response_compound_free(webhook_user_user_created->obj_user);
        webhook_user_user_created->obj_user = NULL;
    }
    if (webhook_user_user_created->obj_webhook) {
        webhook_response_free(webhook_user_user_created->obj_webhook);
        webhook_user_user_created->obj_webhook = NULL;
    }
    if (webhook_user_user_created->a_obj_attempt) {
        list_ForEach(listEntry, webhook_user_user_created->a_obj_attempt) {
            attempt_response_compound_free(listEntry->data);
        }
        list_freeList(webhook_user_user_created->a_obj_attempt);
        webhook_user_user_created->a_obj_attempt = NULL;
    }
    free(webhook_user_user_created);
}

cJSON *webhook_user_user_created_convertToJSON(webhook_user_user_created_t *webhook_user_user_created) {
    cJSON *item = cJSON_CreateObject();

    // webhook_user_user_created->obj_user
    if (!webhook_user_user_created->obj_user) {
        goto fail;
    }
    cJSON *obj_user_local_JSON = user_response_compound_convertToJSON(webhook_user_user_created->obj_user);
    if(obj_user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUser", obj_user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // webhook_user_user_created->obj_webhook
    if (!webhook_user_user_created->obj_webhook) {
        goto fail;
    }
    cJSON *obj_webhook_local_JSON = webhook_response_convertToJSON(webhook_user_user_created->obj_webhook);
    if(obj_webhook_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objWebhook", obj_webhook_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // webhook_user_user_created->a_obj_attempt
    if (!webhook_user_user_created->a_obj_attempt) {
        goto fail;
    }
    cJSON *a_obj_attempt = cJSON_AddArrayToObject(item, "a_objAttempt");
    if(a_obj_attempt == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attemptListEntry;
    if (webhook_user_user_created->a_obj_attempt) {
    list_ForEach(a_obj_attemptListEntry, webhook_user_user_created->a_obj_attempt) {
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

webhook_user_user_created_t *webhook_user_user_created_parseFromJSON(cJSON *webhook_user_user_createdJSON){

    webhook_user_user_created_t *webhook_user_user_created_local_var = NULL;

    // define the local variable for webhook_user_user_created->obj_user
    user_response_compound_t *obj_user_local_nonprim = NULL;

    // define the local variable for webhook_user_user_created->obj_webhook
    webhook_response_t *obj_webhook_local_nonprim = NULL;

    // define the local list for webhook_user_user_created->a_obj_attempt
    list_t *a_obj_attemptList = NULL;

    // webhook_user_user_created->obj_user
    cJSON *obj_user = cJSON_GetObjectItemCaseSensitive(webhook_user_user_createdJSON, "objUser");
    if (!obj_user) {
        goto end;
    }

    
    obj_user_local_nonprim = user_response_compound_parseFromJSON(obj_user); //nonprimitive

    // webhook_user_user_created->obj_webhook
    cJSON *obj_webhook = cJSON_GetObjectItemCaseSensitive(webhook_user_user_createdJSON, "objWebhook");
    if (!obj_webhook) {
        goto end;
    }

    
    obj_webhook_local_nonprim = webhook_response_parseFromJSON(obj_webhook); //nonprimitive

    // webhook_user_user_created->a_obj_attempt
    cJSON *a_obj_attempt = cJSON_GetObjectItemCaseSensitive(webhook_user_user_createdJSON, "a_objAttempt");
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


    webhook_user_user_created_local_var = webhook_user_user_created_create (
        obj_user_local_nonprim,
        obj_webhook_local_nonprim,
        a_obj_attemptList
        );

    return webhook_user_user_created_local_var;
end:
    if (obj_user_local_nonprim) {
        user_response_compound_free(obj_user_local_nonprim);
        obj_user_local_nonprim = NULL;
    }
    if (obj_webhook_local_nonprim) {
        webhook_response_free(obj_webhook_local_nonprim);
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
