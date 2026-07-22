#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_realestate_inscription_created.h"



static webhook_realestate_inscription_created_t *webhook_realestate_inscription_created_create_internal(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    inscription_response_t *obj_inscription
    ) {
    webhook_realestate_inscription_created_t *webhook_realestate_inscription_created_local_var = malloc(sizeof(webhook_realestate_inscription_created_t));
    if (!webhook_realestate_inscription_created_local_var) {
        return NULL;
    }
    memset(webhook_realestate_inscription_created_local_var, 0, sizeof(webhook_realestate_inscription_created_t));
    webhook_realestate_inscription_created_local_var->_library_owned = 1;
    webhook_realestate_inscription_created_local_var->obj_webhook = obj_webhook;
    webhook_realestate_inscription_created_local_var->a_obj_attempt = a_obj_attempt;
    webhook_realestate_inscription_created_local_var->obj_inscription = obj_inscription;
    return webhook_realestate_inscription_created_local_var;
}

__attribute__((deprecated)) webhook_realestate_inscription_created_t *webhook_realestate_inscription_created_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    inscription_response_t *obj_inscription
    ) {
    webhook_realestate_inscription_created_t *result = webhook_realestate_inscription_created_create_internal (
        obj_webhook,
        a_obj_attempt,
        obj_inscription
        );
    if (!result) {
    }
    return result;
}

void webhook_realestate_inscription_created_free(webhook_realestate_inscription_created_t *webhook_realestate_inscription_created) {
    if(NULL == webhook_realestate_inscription_created){
        return ;
    }
    if(webhook_realestate_inscription_created->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_realestate_inscription_created_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_realestate_inscription_created->obj_webhook) {
        custom_webhook_response_free(webhook_realestate_inscription_created->obj_webhook);
        webhook_realestate_inscription_created->obj_webhook = NULL;
    }
    if (webhook_realestate_inscription_created->a_obj_attempt) {
        list_ForEach(listEntry, webhook_realestate_inscription_created->a_obj_attempt) {
            attempt_response_compound_free(listEntry->data);
        }
        list_freeList(webhook_realestate_inscription_created->a_obj_attempt);
        webhook_realestate_inscription_created->a_obj_attempt = NULL;
    }
    if (webhook_realestate_inscription_created->obj_inscription) {
        inscription_response_free(webhook_realestate_inscription_created->obj_inscription);
        webhook_realestate_inscription_created->obj_inscription = NULL;
    }
    free(webhook_realestate_inscription_created);
}

cJSON *webhook_realestate_inscription_created_convertToJSON(webhook_realestate_inscription_created_t *webhook_realestate_inscription_created) {
    cJSON *item = cJSON_CreateObject();

    // webhook_realestate_inscription_created->obj_webhook
    if (!webhook_realestate_inscription_created->obj_webhook) {
        goto fail;
    }
    cJSON *obj_webhook_local_JSON = custom_webhook_response_convertToJSON(webhook_realestate_inscription_created->obj_webhook);
    if(obj_webhook_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objWebhook", obj_webhook_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // webhook_realestate_inscription_created->a_obj_attempt
    if (!webhook_realestate_inscription_created->a_obj_attempt) {
        goto fail;
    }
    cJSON *a_obj_attempt = cJSON_AddArrayToObject(item, "a_objAttempt");
    if(a_obj_attempt == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attemptListEntry;
    if (webhook_realestate_inscription_created->a_obj_attempt) {
    list_ForEach(a_obj_attemptListEntry, webhook_realestate_inscription_created->a_obj_attempt) {
    cJSON *itemLocal = attempt_response_compound_convertToJSON(a_obj_attemptListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attempt, itemLocal);
    }
    }


    // webhook_realestate_inscription_created->obj_inscription
    if (!webhook_realestate_inscription_created->obj_inscription) {
        goto fail;
    }
    cJSON *obj_inscription_local_JSON = inscription_response_convertToJSON(webhook_realestate_inscription_created->obj_inscription);
    if(obj_inscription_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objInscription", obj_inscription_local_JSON);
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

webhook_realestate_inscription_created_t *webhook_realestate_inscription_created_parseFromJSON(cJSON *webhook_realestate_inscription_createdJSON){

    webhook_realestate_inscription_created_t *webhook_realestate_inscription_created_local_var = NULL;

    // define the local variable for webhook_realestate_inscription_created->obj_webhook
    custom_webhook_response_t *obj_webhook_local_nonprim = NULL;

    // define the local list for webhook_realestate_inscription_created->a_obj_attempt
    list_t *a_obj_attemptList = NULL;

    // define the local variable for webhook_realestate_inscription_created->obj_inscription
    inscription_response_t *obj_inscription_local_nonprim = NULL;

    // webhook_realestate_inscription_created->obj_webhook
    cJSON *obj_webhook = cJSON_GetObjectItemCaseSensitive(webhook_realestate_inscription_createdJSON, "objWebhook");
    if (cJSON_IsNull(obj_webhook)) {
        obj_webhook = NULL;
    }
    if (!obj_webhook) {
        goto end;
    }

    
    obj_webhook_local_nonprim = custom_webhook_response_parseFromJSON(obj_webhook); //nonprimitive

    // webhook_realestate_inscription_created->a_obj_attempt
    cJSON *a_obj_attempt = cJSON_GetObjectItemCaseSensitive(webhook_realestate_inscription_createdJSON, "a_objAttempt");
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

    // webhook_realestate_inscription_created->obj_inscription
    cJSON *obj_inscription = cJSON_GetObjectItemCaseSensitive(webhook_realestate_inscription_createdJSON, "objInscription");
    if (cJSON_IsNull(obj_inscription)) {
        obj_inscription = NULL;
    }
    if (!obj_inscription) {
        goto end;
    }

    
    obj_inscription_local_nonprim = inscription_response_parseFromJSON(obj_inscription); //nonprimitive



    webhook_realestate_inscription_created_local_var = webhook_realestate_inscription_created_create_internal (
        obj_webhook_local_nonprim,
        a_obj_attemptList,
        obj_inscription_local_nonprim
        );

    if (!webhook_realestate_inscription_created_local_var) {
        goto end;
    }

    return webhook_realestate_inscription_created_local_var;
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
    if (obj_inscription_local_nonprim) {
        inscription_response_free(obj_inscription_local_nonprim);
        obj_inscription_local_nonprim = NULL;
    }
    return NULL;

}
