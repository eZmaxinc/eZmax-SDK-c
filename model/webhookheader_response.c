#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhookheader_response.h"



webhookheader_response_t *webhookheader_response_create(
    int pki_webhookheader_id,
    int fki_webhook_id,
    char *s_webhookheader_name,
    char *s_webhookheader_value
    ) {
    webhookheader_response_t *webhookheader_response_local_var = malloc(sizeof(webhookheader_response_t));
    if (!webhookheader_response_local_var) {
        return NULL;
    }
    webhookheader_response_local_var->pki_webhookheader_id = pki_webhookheader_id;
    webhookheader_response_local_var->fki_webhook_id = fki_webhook_id;
    webhookheader_response_local_var->s_webhookheader_name = s_webhookheader_name;
    webhookheader_response_local_var->s_webhookheader_value = s_webhookheader_value;

    return webhookheader_response_local_var;
}


void webhookheader_response_free(webhookheader_response_t *webhookheader_response) {
    if(NULL == webhookheader_response){
        return ;
    }
    listEntry_t *listEntry;
    if (webhookheader_response->s_webhookheader_name) {
        free(webhookheader_response->s_webhookheader_name);
        webhookheader_response->s_webhookheader_name = NULL;
    }
    if (webhookheader_response->s_webhookheader_value) {
        free(webhookheader_response->s_webhookheader_value);
        webhookheader_response->s_webhookheader_value = NULL;
    }
    free(webhookheader_response);
}

cJSON *webhookheader_response_convertToJSON(webhookheader_response_t *webhookheader_response) {
    cJSON *item = cJSON_CreateObject();

    // webhookheader_response->pki_webhookheader_id
    if (!webhookheader_response->pki_webhookheader_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiWebhookheaderID", webhookheader_response->pki_webhookheader_id) == NULL) {
    goto fail; //Numeric
    }


    // webhookheader_response->fki_webhook_id
    if (!webhookheader_response->fki_webhook_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiWebhookID", webhookheader_response->fki_webhook_id) == NULL) {
    goto fail; //Numeric
    }


    // webhookheader_response->s_webhookheader_name
    if (!webhookheader_response->s_webhookheader_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookheaderName", webhookheader_response->s_webhookheader_name) == NULL) {
    goto fail; //String
    }


    // webhookheader_response->s_webhookheader_value
    if (!webhookheader_response->s_webhookheader_value) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookheaderValue", webhookheader_response->s_webhookheader_value) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhookheader_response_t *webhookheader_response_parseFromJSON(cJSON *webhookheader_responseJSON){

    webhookheader_response_t *webhookheader_response_local_var = NULL;

    // webhookheader_response->pki_webhookheader_id
    cJSON *pki_webhookheader_id = cJSON_GetObjectItemCaseSensitive(webhookheader_responseJSON, "pkiWebhookheaderID");
    if (!pki_webhookheader_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_webhookheader_id))
    {
    goto end; //Numeric
    }

    // webhookheader_response->fki_webhook_id
    cJSON *fki_webhook_id = cJSON_GetObjectItemCaseSensitive(webhookheader_responseJSON, "fkiWebhookID");
    if (!fki_webhook_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_webhook_id))
    {
    goto end; //Numeric
    }

    // webhookheader_response->s_webhookheader_name
    cJSON *s_webhookheader_name = cJSON_GetObjectItemCaseSensitive(webhookheader_responseJSON, "sWebhookheaderName");
    if (!s_webhookheader_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhookheader_name))
    {
    goto end; //String
    }

    // webhookheader_response->s_webhookheader_value
    cJSON *s_webhookheader_value = cJSON_GetObjectItemCaseSensitive(webhookheader_responseJSON, "sWebhookheaderValue");
    if (!s_webhookheader_value) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhookheader_value))
    {
    goto end; //String
    }


    webhookheader_response_local_var = webhookheader_response_create (
        pki_webhookheader_id->valuedouble,
        fki_webhook_id->valuedouble,
        strdup(s_webhookheader_name->valuestring),
        strdup(s_webhookheader_value->valuestring)
        );

    return webhookheader_response_local_var;
end:
    return NULL;

}
