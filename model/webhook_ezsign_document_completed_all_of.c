#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_ezsign_document_completed_all_of.h"



webhook_ezsign_document_completed_all_of_t *webhook_ezsign_document_completed_all_of_create(
    ezsigndocument_response_t *obj_ezsigndocument
    ) {
    webhook_ezsign_document_completed_all_of_t *webhook_ezsign_document_completed_all_of_local_var = malloc(sizeof(webhook_ezsign_document_completed_all_of_t));
    if (!webhook_ezsign_document_completed_all_of_local_var) {
        return NULL;
    }
    webhook_ezsign_document_completed_all_of_local_var->obj_ezsigndocument = obj_ezsigndocument;

    return webhook_ezsign_document_completed_all_of_local_var;
}


void webhook_ezsign_document_completed_all_of_free(webhook_ezsign_document_completed_all_of_t *webhook_ezsign_document_completed_all_of) {
    if(NULL == webhook_ezsign_document_completed_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_ezsign_document_completed_all_of->obj_ezsigndocument) {
        ezsigndocument_response_free(webhook_ezsign_document_completed_all_of->obj_ezsigndocument);
        webhook_ezsign_document_completed_all_of->obj_ezsigndocument = NULL;
    }
    free(webhook_ezsign_document_completed_all_of);
}

cJSON *webhook_ezsign_document_completed_all_of_convertToJSON(webhook_ezsign_document_completed_all_of_t *webhook_ezsign_document_completed_all_of) {
    cJSON *item = cJSON_CreateObject();

    // webhook_ezsign_document_completed_all_of->obj_ezsigndocument
    if (!webhook_ezsign_document_completed_all_of->obj_ezsigndocument) {
        goto fail;
    }
    
    cJSON *obj_ezsigndocument_local_JSON = ezsigndocument_response_convertToJSON(webhook_ezsign_document_completed_all_of->obj_ezsigndocument);
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

webhook_ezsign_document_completed_all_of_t *webhook_ezsign_document_completed_all_of_parseFromJSON(cJSON *webhook_ezsign_document_completed_all_ofJSON){

    webhook_ezsign_document_completed_all_of_t *webhook_ezsign_document_completed_all_of_local_var = NULL;

    // webhook_ezsign_document_completed_all_of->obj_ezsigndocument
    cJSON *obj_ezsigndocument = cJSON_GetObjectItemCaseSensitive(webhook_ezsign_document_completed_all_ofJSON, "objEzsigndocument");
    if (!obj_ezsigndocument) {
        goto end;
    }

    ezsigndocument_response_t *obj_ezsigndocument_local_nonprim = NULL;
    
    obj_ezsigndocument_local_nonprim = ezsigndocument_response_parseFromJSON(obj_ezsigndocument); //nonprimitive


    webhook_ezsign_document_completed_all_of_local_var = webhook_ezsign_document_completed_all_of_create (
        obj_ezsigndocument_local_nonprim
        );

    return webhook_ezsign_document_completed_all_of_local_var;
end:
    if (obj_ezsigndocument_local_nonprim) {
        ezsigndocument_response_free(obj_ezsigndocument_local_nonprim);
        obj_ezsigndocument_local_nonprim = NULL;
    }
    return NULL;

}
