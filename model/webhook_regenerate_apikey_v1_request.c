#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_regenerate_apikey_v1_request.h"



static webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request_create_internal(
    int *b_webhook_issigned
    ) {
    webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request_local_var = malloc(sizeof(webhook_regenerate_apikey_v1_request_t));
    if (!webhook_regenerate_apikey_v1_request_local_var) {
        return NULL;
    }
    memset(webhook_regenerate_apikey_v1_request_local_var, 0, sizeof(webhook_regenerate_apikey_v1_request_t));
    webhook_regenerate_apikey_v1_request_local_var->_library_owned = 1;
    webhook_regenerate_apikey_v1_request_local_var->b_webhook_issigned = b_webhook_issigned;
    return webhook_regenerate_apikey_v1_request_local_var;
}

__attribute__((deprecated)) webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request_create(
    int *b_webhook_issigned
    ) {
    int *b_webhook_issigned_copy = NULL;
    if (b_webhook_issigned) {
        b_webhook_issigned_copy = malloc(sizeof(int));
        if (b_webhook_issigned_copy) *b_webhook_issigned_copy = *b_webhook_issigned;
    }
    webhook_regenerate_apikey_v1_request_t *result = webhook_regenerate_apikey_v1_request_create_internal (
        b_webhook_issigned_copy
        );
    if (!result) {
        free(b_webhook_issigned_copy);
    }
    return result;
}

void webhook_regenerate_apikey_v1_request_free(webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request) {
    if(NULL == webhook_regenerate_apikey_v1_request){
        return ;
    }
    if(webhook_regenerate_apikey_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_regenerate_apikey_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_regenerate_apikey_v1_request->b_webhook_issigned) {
        free(webhook_regenerate_apikey_v1_request->b_webhook_issigned);
        webhook_regenerate_apikey_v1_request->b_webhook_issigned = NULL;
    }
    free(webhook_regenerate_apikey_v1_request);
}

cJSON *webhook_regenerate_apikey_v1_request_convertToJSON(webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // webhook_regenerate_apikey_v1_request->b_webhook_issigned
    if(webhook_regenerate_apikey_v1_request->b_webhook_issigned) {
    if(cJSON_AddBoolToObject(item, "bWebhookIssigned", *webhook_regenerate_apikey_v1_request->b_webhook_issigned) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request_parseFromJSON(cJSON *webhook_regenerate_apikey_v1_requestJSON){

    webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request_local_var = NULL;

    // define the local variable for webhook_regenerate_apikey_v1_request->b_webhook_issigned
    int *b_webhook_issigned_local_var = NULL;

    // webhook_regenerate_apikey_v1_request->b_webhook_issigned
    cJSON *b_webhook_issigned = cJSON_GetObjectItemCaseSensitive(webhook_regenerate_apikey_v1_requestJSON, "bWebhookIssigned");
    if (cJSON_IsNull(b_webhook_issigned)) {
        b_webhook_issigned = NULL;
    }
    if (b_webhook_issigned) { 
    if(!cJSON_IsBool(b_webhook_issigned))
    {
    goto end; //Bool
    }
    b_webhook_issigned_local_var = malloc(sizeof(int));
    if(!b_webhook_issigned_local_var)
    {
        goto end;
    }
    *b_webhook_issigned_local_var = b_webhook_issigned->valueint;
    }



    webhook_regenerate_apikey_v1_request_local_var = webhook_regenerate_apikey_v1_request_create_internal (
        b_webhook_issigned_local_var
        );

    if (!webhook_regenerate_apikey_v1_request_local_var) {
        goto end;
    }

    return webhook_regenerate_apikey_v1_request_local_var;
end:
    if (b_webhook_issigned_local_var) {
        free(b_webhook_issigned_local_var);
        b_webhook_issigned_local_var = NULL;
    }
    return NULL;

}
