#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_ezsign_folder_sent.h"



webhook_ezsign_folder_sent_t *webhook_ezsign_folder_sent_create(
    custom_webhook_response_t *obj_webhook,
    list_t *a_obj_attempt,
    ezsignfolder_response_t *obj_ezsignfolder
    ) {
    webhook_ezsign_folder_sent_t *webhook_ezsign_folder_sent_local_var = malloc(sizeof(webhook_ezsign_folder_sent_t));
    if (!webhook_ezsign_folder_sent_local_var) {
        return NULL;
    }
    webhook_ezsign_folder_sent_local_var->obj_webhook = obj_webhook;
    webhook_ezsign_folder_sent_local_var->a_obj_attempt = a_obj_attempt;
    webhook_ezsign_folder_sent_local_var->obj_ezsignfolder = obj_ezsignfolder;

    return webhook_ezsign_folder_sent_local_var;
}


void webhook_ezsign_folder_sent_free(webhook_ezsign_folder_sent_t *webhook_ezsign_folder_sent) {
    if(NULL == webhook_ezsign_folder_sent){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_ezsign_folder_sent->obj_webhook) {
        custom_webhook_response_free(webhook_ezsign_folder_sent->obj_webhook);
        webhook_ezsign_folder_sent->obj_webhook = NULL;
    }
    if (webhook_ezsign_folder_sent->a_obj_attempt) {
        list_ForEach(listEntry, webhook_ezsign_folder_sent->a_obj_attempt) {
            attempt_response_compound_free(listEntry->data);
        }
        list_freeList(webhook_ezsign_folder_sent->a_obj_attempt);
        webhook_ezsign_folder_sent->a_obj_attempt = NULL;
    }
    if (webhook_ezsign_folder_sent->obj_ezsignfolder) {
        ezsignfolder_response_free(webhook_ezsign_folder_sent->obj_ezsignfolder);
        webhook_ezsign_folder_sent->obj_ezsignfolder = NULL;
    }
    free(webhook_ezsign_folder_sent);
}

cJSON *webhook_ezsign_folder_sent_convertToJSON(webhook_ezsign_folder_sent_t *webhook_ezsign_folder_sent) {
    cJSON *item = cJSON_CreateObject();

    // webhook_ezsign_folder_sent->obj_webhook
    if (!webhook_ezsign_folder_sent->obj_webhook) {
        goto fail;
    }
    cJSON *obj_webhook_local_JSON = custom_webhook_response_convertToJSON(webhook_ezsign_folder_sent->obj_webhook);
    if(obj_webhook_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objWebhook", obj_webhook_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // webhook_ezsign_folder_sent->a_obj_attempt
    if (!webhook_ezsign_folder_sent->a_obj_attempt) {
        goto fail;
    }
    cJSON *a_obj_attempt = cJSON_AddArrayToObject(item, "a_objAttempt");
    if(a_obj_attempt == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_attemptListEntry;
    if (webhook_ezsign_folder_sent->a_obj_attempt) {
    list_ForEach(a_obj_attemptListEntry, webhook_ezsign_folder_sent->a_obj_attempt) {
    cJSON *itemLocal = attempt_response_compound_convertToJSON(a_obj_attemptListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_attempt, itemLocal);
    }
    }


    // webhook_ezsign_folder_sent->obj_ezsignfolder
    if (!webhook_ezsign_folder_sent->obj_ezsignfolder) {
        goto fail;
    }
    cJSON *obj_ezsignfolder_local_JSON = ezsignfolder_response_convertToJSON(webhook_ezsign_folder_sent->obj_ezsignfolder);
    if(obj_ezsignfolder_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfolder", obj_ezsignfolder_local_JSON);
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

webhook_ezsign_folder_sent_t *webhook_ezsign_folder_sent_parseFromJSON(cJSON *webhook_ezsign_folder_sentJSON){

    webhook_ezsign_folder_sent_t *webhook_ezsign_folder_sent_local_var = NULL;

    // define the local variable for webhook_ezsign_folder_sent->obj_webhook
    custom_webhook_response_t *obj_webhook_local_nonprim = NULL;

    // define the local list for webhook_ezsign_folder_sent->a_obj_attempt
    list_t *a_obj_attemptList = NULL;

    // define the local variable for webhook_ezsign_folder_sent->obj_ezsignfolder
    ezsignfolder_response_t *obj_ezsignfolder_local_nonprim = NULL;

    // webhook_ezsign_folder_sent->obj_webhook
    cJSON *obj_webhook = cJSON_GetObjectItemCaseSensitive(webhook_ezsign_folder_sentJSON, "objWebhook");
    if (!obj_webhook) {
        goto end;
    }

    
    obj_webhook_local_nonprim = custom_webhook_response_parseFromJSON(obj_webhook); //nonprimitive

    // webhook_ezsign_folder_sent->a_obj_attempt
    cJSON *a_obj_attempt = cJSON_GetObjectItemCaseSensitive(webhook_ezsign_folder_sentJSON, "a_objAttempt");
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

    // webhook_ezsign_folder_sent->obj_ezsignfolder
    cJSON *obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(webhook_ezsign_folder_sentJSON, "objEzsignfolder");
    if (!obj_ezsignfolder) {
        goto end;
    }

    
    obj_ezsignfolder_local_nonprim = ezsignfolder_response_parseFromJSON(obj_ezsignfolder); //nonprimitive


    webhook_ezsign_folder_sent_local_var = webhook_ezsign_folder_sent_create (
        obj_webhook_local_nonprim,
        a_obj_attemptList,
        obj_ezsignfolder_local_nonprim
        );

    return webhook_ezsign_folder_sent_local_var;
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
    if (obj_ezsignfolder_local_nonprim) {
        ezsignfolder_response_free(obj_ezsignfolder_local_nonprim);
        obj_ezsignfolder_local_nonprim = NULL;
    }
    return NULL;

}
