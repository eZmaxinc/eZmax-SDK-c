#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_regenerate_apikey_v1_request.h"



webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request_create(
    int b_webhook_issigned
    ) {
    webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request_local_var = malloc(sizeof(webhook_regenerate_apikey_v1_request_t));
    if (!webhook_regenerate_apikey_v1_request_local_var) {
        return NULL;
    }
    webhook_regenerate_apikey_v1_request_local_var->b_webhook_issigned = b_webhook_issigned;

    return webhook_regenerate_apikey_v1_request_local_var;
}


void webhook_regenerate_apikey_v1_request_free(webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request) {
    if(NULL == webhook_regenerate_apikey_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    free(webhook_regenerate_apikey_v1_request);
}

cJSON *webhook_regenerate_apikey_v1_request_convertToJSON(webhook_regenerate_apikey_v1_request_t *webhook_regenerate_apikey_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // webhook_regenerate_apikey_v1_request->b_webhook_issigned
    if(webhook_regenerate_apikey_v1_request->b_webhook_issigned) {
    if(cJSON_AddBoolToObject(item, "bWebhookIssigned", webhook_regenerate_apikey_v1_request->b_webhook_issigned) == NULL) {
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

    // webhook_regenerate_apikey_v1_request->b_webhook_issigned
    cJSON *b_webhook_issigned = cJSON_GetObjectItemCaseSensitive(webhook_regenerate_apikey_v1_requestJSON, "bWebhookIssigned");
    if (b_webhook_issigned) { 
    if(!cJSON_IsBool(b_webhook_issigned))
    {
    goto end; //Bool
    }
    }


    webhook_regenerate_apikey_v1_request_local_var = webhook_regenerate_apikey_v1_request_create (
        b_webhook_issigned ? b_webhook_issigned->valueint : 0
        );

    return webhook_regenerate_apikey_v1_request_local_var;
end:
    return NULL;

}
