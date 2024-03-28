#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhookheader_request_compound.h"



webhookheader_request_compound_t *webhookheader_request_compound_create(
    int pki_webhookheader_id,
    char *s_webhookheader_name,
    char *s_webhookheader_value
    ) {
    webhookheader_request_compound_t *webhookheader_request_compound_local_var = malloc(sizeof(webhookheader_request_compound_t));
    if (!webhookheader_request_compound_local_var) {
        return NULL;
    }
    webhookheader_request_compound_local_var->pki_webhookheader_id = pki_webhookheader_id;
    webhookheader_request_compound_local_var->s_webhookheader_name = s_webhookheader_name;
    webhookheader_request_compound_local_var->s_webhookheader_value = s_webhookheader_value;

    return webhookheader_request_compound_local_var;
}


void webhookheader_request_compound_free(webhookheader_request_compound_t *webhookheader_request_compound) {
    if(NULL == webhookheader_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (webhookheader_request_compound->s_webhookheader_name) {
        free(webhookheader_request_compound->s_webhookheader_name);
        webhookheader_request_compound->s_webhookheader_name = NULL;
    }
    if (webhookheader_request_compound->s_webhookheader_value) {
        free(webhookheader_request_compound->s_webhookheader_value);
        webhookheader_request_compound->s_webhookheader_value = NULL;
    }
    free(webhookheader_request_compound);
}

cJSON *webhookheader_request_compound_convertToJSON(webhookheader_request_compound_t *webhookheader_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // webhookheader_request_compound->pki_webhookheader_id
    if(webhookheader_request_compound->pki_webhookheader_id) {
    if(cJSON_AddNumberToObject(item, "pkiWebhookheaderID", webhookheader_request_compound->pki_webhookheader_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhookheader_request_compound->s_webhookheader_name
    if (!webhookheader_request_compound->s_webhookheader_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookheaderName", webhookheader_request_compound->s_webhookheader_name) == NULL) {
    goto fail; //String
    }


    // webhookheader_request_compound->s_webhookheader_value
    if (!webhookheader_request_compound->s_webhookheader_value) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookheaderValue", webhookheader_request_compound->s_webhookheader_value) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhookheader_request_compound_t *webhookheader_request_compound_parseFromJSON(cJSON *webhookheader_request_compoundJSON){

    webhookheader_request_compound_t *webhookheader_request_compound_local_var = NULL;

    // webhookheader_request_compound->pki_webhookheader_id
    cJSON *pki_webhookheader_id = cJSON_GetObjectItemCaseSensitive(webhookheader_request_compoundJSON, "pkiWebhookheaderID");
    if (pki_webhookheader_id) { 
    if(!cJSON_IsNumber(pki_webhookheader_id))
    {
    goto end; //Numeric
    }
    }

    // webhookheader_request_compound->s_webhookheader_name
    cJSON *s_webhookheader_name = cJSON_GetObjectItemCaseSensitive(webhookheader_request_compoundJSON, "sWebhookheaderName");
    if (!s_webhookheader_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhookheader_name))
    {
    goto end; //String
    }

    // webhookheader_request_compound->s_webhookheader_value
    cJSON *s_webhookheader_value = cJSON_GetObjectItemCaseSensitive(webhookheader_request_compoundJSON, "sWebhookheaderValue");
    if (!s_webhookheader_value) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhookheader_value))
    {
    goto end; //String
    }


    webhookheader_request_compound_local_var = webhookheader_request_compound_create (
        pki_webhookheader_id ? pki_webhookheader_id->valuedouble : 0,
        strdup(s_webhookheader_name->valuestring),
        strdup(s_webhookheader_value->valuestring)
        );

    return webhookheader_request_compound_local_var;
end:
    return NULL;

}
