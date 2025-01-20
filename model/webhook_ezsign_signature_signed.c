#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_ezsign_signature_signed.h"



webhook_ezsign_signature_signed_t *webhook_ezsign_signature_signed_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    ezsignsignature_response_t *obj_ezsignsignature
    ) {
    webhook_ezsign_signature_signed_t *webhook_ezsign_signature_signed_local_var = malloc(sizeof(webhook_ezsign_signature_signed_t));
    if (!webhook_ezsign_signature_signed_local_var) {
        return NULL;
    }
    webhook_ezsign_signature_signed_local_var->obj_webhook = obj_webhook;
    webhook_ezsign_signature_signed_local_var->a_obj_attempt = a_obj_attempt;
    webhook_ezsign_signature_signed_local_var->obj_ezsignsignature = obj_ezsignsignature;

    return webhook_ezsign_signature_signed_local_var;
}


void webhook_ezsign_signature_signed_free(webhook_ezsign_signature_signed_t *webhook_ezsign_signature_signed) {
    if(NULL == webhook_ezsign_signature_signed){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_ezsign_signature_signed->obj_webhook) {
        custom_webhook_response_free(webhook_ezsign_signature_signed->obj_webhook);
        webhook_ezsign_signature_signed->obj_webhook = NULL;
    }
    if (webhook_ezsign_signature_signed->a_obj_attempt) {
        list_ForEach(listEntry, webhook_ezsign_signature_signed->a_obj_attempt) {
            attempt_response_free(listEntry->data);
        }
        list_freeList(webhook_ezsign_signature_signed->a_obj_attempt);
        webhook_ezsign_signature_signed->a_obj_attempt = NULL;
    }
    if (webhook_ezsign_signature_signed->obj_ezsignsignature) {
        ezsignsignature_response_free(webhook_ezsign_signature_signed->obj_ezsignsignature);
        webhook_ezsign_signature_signed->obj_ezsignsignature = NULL;
    }
    free(webhook_ezsign_signature_signed);
}

cJSON *webhook_ezsign_signature_signed_convertToJSON(webhook_ezsign_signature_signed_t *webhook_ezsign_signature_signed) {
    cJSON *item = cJSON_CreateObject();

    // webhook_ezsign_signature_signed->obj_webhook
    if (!webhook_ezsign_signature_signed->obj_webhook) {
        goto fail;
    }
    cJSON *obj_webhook_local_JSON = custom_webhook_response_convertToJSON(webhook_ezsign_signature_signed->obj_webhook);
    if(obj_webhook_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objWebhook", obj_webhook_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // webhook_ezsign_signature_signed->a_obj_attempt
    if (!webhook_ezsign_signature_signed->a_obj_attempt) {
        goto fail;
    }
    cJSON *a_obj_attempt = cJSON_AddArrayToObject(item, "a_objAttempt");
    if(a_obj_attempt == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attemptListEntry;
    if (webhook_ezsign_signature_signed->a_obj_attempt) {
    list_ForEach(a_obj_attemptListEntry, webhook_ezsign_signature_signed->a_obj_attempt) {
    cJSON *itemLocal = attempt_response_convertToJSON(a_obj_attemptListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attempt, itemLocal);
    }
    }


    // webhook_ezsign_signature_signed->obj_ezsignsignature
    if (!webhook_ezsign_signature_signed->obj_ezsignsignature) {
        goto fail;
    }
    cJSON *obj_ezsignsignature_local_JSON = ezsignsignature_response_convertToJSON(webhook_ezsign_signature_signed->obj_ezsignsignature);
    if(obj_ezsignsignature_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignature", obj_ezsignsignature_local_JSON);
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

webhook_ezsign_signature_signed_t *webhook_ezsign_signature_signed_parseFromJSON(cJSON *webhook_ezsign_signature_signedJSON){

    webhook_ezsign_signature_signed_t *webhook_ezsign_signature_signed_local_var = NULL;

    // define the local variable for webhook_ezsign_signature_signed->obj_webhook
    custom_webhook_response_t *obj_webhook_local_nonprim = NULL;

    // define the local list for webhook_ezsign_signature_signed->a_obj_attempt
    list_t *a_obj_attemptList = NULL;

    // define the local variable for webhook_ezsign_signature_signed->obj_ezsignsignature
    ezsignsignature_response_t *obj_ezsignsignature_local_nonprim = NULL;

    // webhook_ezsign_signature_signed->obj_webhook
    cJSON *obj_webhook = cJSON_GetObjectItemCaseSensitive(webhook_ezsign_signature_signedJSON, "objWebhook");
    if (!obj_webhook) {
        goto end;
    }

    
    obj_webhook_local_nonprim = custom_webhook_response_parseFromJSON(obj_webhook); //nonprimitive

    // webhook_ezsign_signature_signed->a_obj_attempt
    cJSON *a_obj_attempt = cJSON_GetObjectItemCaseSensitive(webhook_ezsign_signature_signedJSON, "a_objAttempt");
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
        attempt_response_t *a_obj_attemptItem = attempt_response_parseFromJSON(a_obj_attempt_local_nonprimitive);

        list_addElement(a_obj_attemptList, a_obj_attemptItem);
    }

    // webhook_ezsign_signature_signed->obj_ezsignsignature
    cJSON *obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(webhook_ezsign_signature_signedJSON, "objEzsignsignature");
    if (!obj_ezsignsignature) {
        goto end;
    }

    
    obj_ezsignsignature_local_nonprim = ezsignsignature_response_parseFromJSON(obj_ezsignsignature); //nonprimitive


    webhook_ezsign_signature_signed_local_var = webhook_ezsign_signature_signed_create (
        obj_webhook_local_nonprim,
        a_obj_attemptList,
        obj_ezsignsignature_local_nonprim
        );

    return webhook_ezsign_signature_signed_local_var;
end:
    if (obj_webhook_local_nonprim) {
        custom_webhook_response_free(obj_webhook_local_nonprim);
        obj_webhook_local_nonprim = NULL;
    }
    if (a_obj_attemptList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_attemptList) {
            attempt_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_attemptList);
        a_obj_attemptList = NULL;
    }
    if (obj_ezsignsignature_local_nonprim) {
        ezsignsignature_response_free(obj_ezsignsignature_local_nonprim);
        obj_ezsignsignature_local_nonprim = NULL;
    }
    return NULL;

}
