#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_webhook_response_all_of.h"



custom_webhook_response_all_of_t *custom_webhook_response_all_of_create(
    char *pks_customer_code,
    int b_webhook_test
    ) {
    custom_webhook_response_all_of_t *custom_webhook_response_all_of_local_var = malloc(sizeof(custom_webhook_response_all_of_t));
    if (!custom_webhook_response_all_of_local_var) {
        return NULL;
    }
    custom_webhook_response_all_of_local_var->pks_customer_code = pks_customer_code;
    custom_webhook_response_all_of_local_var->b_webhook_test = b_webhook_test;

    return custom_webhook_response_all_of_local_var;
}


void custom_webhook_response_all_of_free(custom_webhook_response_all_of_t *custom_webhook_response_all_of) {
    if(NULL == custom_webhook_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_webhook_response_all_of->pks_customer_code) {
        free(custom_webhook_response_all_of->pks_customer_code);
        custom_webhook_response_all_of->pks_customer_code = NULL;
    }
    free(custom_webhook_response_all_of);
}

cJSON *custom_webhook_response_all_of_convertToJSON(custom_webhook_response_all_of_t *custom_webhook_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // custom_webhook_response_all_of->pks_customer_code
    if (!custom_webhook_response_all_of->pks_customer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pksCustomerCode", custom_webhook_response_all_of->pks_customer_code) == NULL) {
    goto fail; //String
    }


    // custom_webhook_response_all_of->b_webhook_test
    if (!custom_webhook_response_all_of->b_webhook_test) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookTest", custom_webhook_response_all_of->b_webhook_test) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_webhook_response_all_of_t *custom_webhook_response_all_of_parseFromJSON(cJSON *custom_webhook_response_all_ofJSON){

    custom_webhook_response_all_of_t *custom_webhook_response_all_of_local_var = NULL;

    // custom_webhook_response_all_of->pks_customer_code
    cJSON *pks_customer_code = cJSON_GetObjectItemCaseSensitive(custom_webhook_response_all_ofJSON, "pksCustomerCode");
    if (!pks_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_customer_code))
    {
    goto end; //String
    }

    // custom_webhook_response_all_of->b_webhook_test
    cJSON *b_webhook_test = cJSON_GetObjectItemCaseSensitive(custom_webhook_response_all_ofJSON, "bWebhookTest");
    if (!b_webhook_test) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_test))
    {
    goto end; //Bool
    }


    custom_webhook_response_all_of_local_var = custom_webhook_response_all_of_create (
        strdup(pks_customer_code->valuestring),
        b_webhook_test->valueint
        );

    return custom_webhook_response_all_of_local_var;
end:
    return NULL;

}
