#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhookheader_response_compound.h"



static webhookheader_response_compound_t *webhookheader_response_compound_create_internal(
    int pki_webhookheader_id,
    int fki_webhook_id,
    char *s_webhookheader_name,
    char *s_webhookheader_value
    ) {
    webhookheader_response_compound_t *webhookheader_response_compound_local_var = malloc(sizeof(webhookheader_response_compound_t));
    if (!webhookheader_response_compound_local_var) {
        return NULL;
    }
    webhookheader_response_compound_local_var->pki_webhookheader_id = pki_webhookheader_id;
    webhookheader_response_compound_local_var->fki_webhook_id = fki_webhook_id;
    webhookheader_response_compound_local_var->s_webhookheader_name = s_webhookheader_name;
    webhookheader_response_compound_local_var->s_webhookheader_value = s_webhookheader_value;

    webhookheader_response_compound_local_var->_library_owned = 1;
    return webhookheader_response_compound_local_var;
}

__attribute__((deprecated)) webhookheader_response_compound_t *webhookheader_response_compound_create(
    int pki_webhookheader_id,
    int fki_webhook_id,
    char *s_webhookheader_name,
    char *s_webhookheader_value
    ) {
    return webhookheader_response_compound_create_internal (
        pki_webhookheader_id,
        fki_webhook_id,
        s_webhookheader_name,
        s_webhookheader_value
        );
}

void webhookheader_response_compound_free(webhookheader_response_compound_t *webhookheader_response_compound) {
    if(NULL == webhookheader_response_compound){
        return ;
    }
    if(webhookheader_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhookheader_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhookheader_response_compound->s_webhookheader_name) {
        free(webhookheader_response_compound->s_webhookheader_name);
        webhookheader_response_compound->s_webhookheader_name = NULL;
    }
    if (webhookheader_response_compound->s_webhookheader_value) {
        free(webhookheader_response_compound->s_webhookheader_value);
        webhookheader_response_compound->s_webhookheader_value = NULL;
    }
    free(webhookheader_response_compound);
}

cJSON *webhookheader_response_compound_convertToJSON(webhookheader_response_compound_t *webhookheader_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // webhookheader_response_compound->pki_webhookheader_id
    if (!webhookheader_response_compound->pki_webhookheader_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiWebhookheaderID", webhookheader_response_compound->pki_webhookheader_id) == NULL) {
    goto fail; //Numeric
    }


    // webhookheader_response_compound->fki_webhook_id
    if (!webhookheader_response_compound->fki_webhook_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiWebhookID", webhookheader_response_compound->fki_webhook_id) == NULL) {
    goto fail; //Numeric
    }


    // webhookheader_response_compound->s_webhookheader_name
    if (!webhookheader_response_compound->s_webhookheader_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookheaderName", webhookheader_response_compound->s_webhookheader_name) == NULL) {
    goto fail; //String
    }


    // webhookheader_response_compound->s_webhookheader_value
    if (!webhookheader_response_compound->s_webhookheader_value) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookheaderValue", webhookheader_response_compound->s_webhookheader_value) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhookheader_response_compound_t *webhookheader_response_compound_parseFromJSON(cJSON *webhookheader_response_compoundJSON){

    webhookheader_response_compound_t *webhookheader_response_compound_local_var = NULL;

    // webhookheader_response_compound->pki_webhookheader_id
    cJSON *pki_webhookheader_id = cJSON_GetObjectItemCaseSensitive(webhookheader_response_compoundJSON, "pkiWebhookheaderID");
    if (cJSON_IsNull(pki_webhookheader_id)) {
        pki_webhookheader_id = NULL;
    }
    if (!pki_webhookheader_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_webhookheader_id))
    {
    goto end; //Numeric
    }

    // webhookheader_response_compound->fki_webhook_id
    cJSON *fki_webhook_id = cJSON_GetObjectItemCaseSensitive(webhookheader_response_compoundJSON, "fkiWebhookID");
    if (cJSON_IsNull(fki_webhook_id)) {
        fki_webhook_id = NULL;
    }
    if (!fki_webhook_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_webhook_id))
    {
    goto end; //Numeric
    }

    // webhookheader_response_compound->s_webhookheader_name
    cJSON *s_webhookheader_name = cJSON_GetObjectItemCaseSensitive(webhookheader_response_compoundJSON, "sWebhookheaderName");
    if (cJSON_IsNull(s_webhookheader_name)) {
        s_webhookheader_name = NULL;
    }
    if (!s_webhookheader_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhookheader_name))
    {
    goto end; //String
    }

    // webhookheader_response_compound->s_webhookheader_value
    cJSON *s_webhookheader_value = cJSON_GetObjectItemCaseSensitive(webhookheader_response_compoundJSON, "sWebhookheaderValue");
    if (cJSON_IsNull(s_webhookheader_value)) {
        s_webhookheader_value = NULL;
    }
    if (!s_webhookheader_value) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhookheader_value))
    {
    goto end; //String
    }


    webhookheader_response_compound_local_var = webhookheader_response_compound_create_internal (
        pki_webhookheader_id->valuedouble,
        fki_webhook_id->valuedouble,
        strdup(s_webhookheader_name->valuestring),
        strdup(s_webhookheader_value->valuestring)
        );

    return webhookheader_response_compound_local_var;
end:
    return NULL;

}
