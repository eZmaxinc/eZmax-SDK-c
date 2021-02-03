#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_response.h"


char* e_webhook_modulewebhook_response_ToString(ezmax_api_definition_webhook_response_EWEBHOOKMODULE_e e_webhook_module) {
    char* e_webhook_moduleArray[] =  { "NULL", "Ezsign", "Management" };
	return e_webhook_moduleArray[e_webhook_module];
}

ezmax_api_definition_webhook_response_EWEBHOOKMODULE_e e_webhook_modulewebhook_response_FromString(char* e_webhook_module){
    int stringToReturn = 0;
    char *e_webhook_moduleArray[] =  { "NULL", "Ezsign", "Management" };
    size_t sizeofArray = sizeof(e_webhook_moduleArray) / sizeof(e_webhook_moduleArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_webhook_module, e_webhook_moduleArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_webhook_ezsigneventwebhook_response_ToString(ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_e e_webhook_ezsignevent) {
    char* e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "FolderCompleted" };
	return e_webhook_ezsigneventArray[e_webhook_ezsignevent];
}

ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_e e_webhook_ezsigneventwebhook_response_FromString(char* e_webhook_ezsignevent){
    int stringToReturn = 0;
    char *e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "FolderCompleted" };
    size_t sizeofArray = sizeof(e_webhook_ezsigneventArray) / sizeof(e_webhook_ezsigneventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_webhook_ezsignevent, e_webhook_ezsigneventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_webhook_managementeventwebhook_response_ToString(ezmax_api_definition_webhook_response_EWEBHOOKMANAGEMENTEVENT_e e_webhook_managementevent) {
    char* e_webhook_managementeventArray[] =  { "NULL", "UserCreated" };
	return e_webhook_managementeventArray[e_webhook_managementevent];
}

ezmax_api_definition_webhook_response_EWEBHOOKMANAGEMENTEVENT_e e_webhook_managementeventwebhook_response_FromString(char* e_webhook_managementevent){
    int stringToReturn = 0;
    char *e_webhook_managementeventArray[] =  { "NULL", "UserCreated" };
    size_t sizeofArray = sizeof(e_webhook_managementeventArray) / sizeof(e_webhook_managementeventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_webhook_managementevent, e_webhook_managementeventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

webhook_response_t *webhook_response_create(
    int pki_webhook_id,
    ezmax_api_definition_webhook_response_EWEBHOOKMODULE_e e_webhook_module,
    ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_e e_webhook_ezsignevent,
    char *pks_customer_code,
    char *s_webhook_url,
    char *s_webhook_emailfailed,
    ezmax_api_definition_webhook_response_EWEBHOOKMANAGEMENTEVENT_e e_webhook_managementevent
    ) {
    webhook_response_t *webhook_response_local_var = malloc(sizeof(webhook_response_t));
    if (!webhook_response_local_var) {
        return NULL;
    }
    webhook_response_local_var->pki_webhook_id = pki_webhook_id;
    webhook_response_local_var->e_webhook_module = e_webhook_module;
    webhook_response_local_var->e_webhook_ezsignevent = e_webhook_ezsignevent;
    webhook_response_local_var->pks_customer_code = pks_customer_code;
    webhook_response_local_var->s_webhook_url = s_webhook_url;
    webhook_response_local_var->s_webhook_emailfailed = s_webhook_emailfailed;
    webhook_response_local_var->e_webhook_managementevent = e_webhook_managementevent;

    return webhook_response_local_var;
}


void webhook_response_free(webhook_response_t *webhook_response) {
    if(NULL == webhook_response){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_response->pks_customer_code) {
        free(webhook_response->pks_customer_code);
        webhook_response->pks_customer_code = NULL;
    }
    if (webhook_response->s_webhook_url) {
        free(webhook_response->s_webhook_url);
        webhook_response->s_webhook_url = NULL;
    }
    if (webhook_response->s_webhook_emailfailed) {
        free(webhook_response->s_webhook_emailfailed);
        webhook_response->s_webhook_emailfailed = NULL;
    }
    free(webhook_response);
}

cJSON *webhook_response_convertToJSON(webhook_response_t *webhook_response) {
    cJSON *item = cJSON_CreateObject();

    // webhook_response->pki_webhook_id
    if (!webhook_response->pki_webhook_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiWebhookID", webhook_response->pki_webhook_id) == NULL) {
    goto fail; //Numeric
    }


    // webhook_response->e_webhook_module
    
    if(cJSON_AddStringToObject(item, "eWebhookModule", e_webhook_modulewebhook_response_ToString(webhook_response->e_webhook_module)) == NULL)
    {
    goto fail; //Enum
    }


    // webhook_response->e_webhook_ezsignevent
    
    if(cJSON_AddStringToObject(item, "eWebhookEzsignevent", e_webhook_ezsigneventwebhook_response_ToString(webhook_response->e_webhook_ezsignevent)) == NULL)
    {
    goto fail; //Enum
    }
    


    // webhook_response->pks_customer_code
    if (!webhook_response->pks_customer_code) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "pksCustomerCode", webhook_response->pks_customer_code) == NULL) {
    goto fail; //String
    }


    // webhook_response->s_webhook_url
    if (!webhook_response->s_webhook_url) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sWebhookUrl", webhook_response->s_webhook_url) == NULL) {
    goto fail; //String
    }


    // webhook_response->s_webhook_emailfailed
    if (!webhook_response->s_webhook_emailfailed) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sWebhookEmailfailed", webhook_response->s_webhook_emailfailed) == NULL) {
    goto fail; //String
    }


    // webhook_response->e_webhook_managementevent
    
    if(cJSON_AddStringToObject(item, "eWebhookManagementevent", e_webhook_managementeventwebhook_response_ToString(webhook_response->e_webhook_managementevent)) == NULL)
    {
    goto fail; //Enum
    }
    

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhook_response_t *webhook_response_parseFromJSON(cJSON *webhook_responseJSON){

    webhook_response_t *webhook_response_local_var = NULL;

    // webhook_response->pki_webhook_id
    cJSON *pki_webhook_id = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "pkiWebhookID");
    if (!pki_webhook_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_webhook_id))
    {
    goto end; //Numeric
    }

    // webhook_response->e_webhook_module
    cJSON *e_webhook_module = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "eWebhookModule");
    if (!e_webhook_module) {
        goto end;
    }

    ezmax_api_definition_webhook_response_EWEBHOOKMODULE_e e_webhook_moduleVariable;
    
    if(!cJSON_IsString(e_webhook_module))
    {
    goto end; //Enum
    }
    e_webhook_moduleVariable = e_webhook_modulewebhook_response_FromString(e_webhook_module->valuestring);

    // webhook_response->e_webhook_ezsignevent
    cJSON *e_webhook_ezsignevent = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "eWebhookEzsignevent");
    ezmax_api_definition_webhook_response_EWEBHOOKEZSIGNEVENT_e e_webhook_ezsigneventVariable;
    if (e_webhook_ezsignevent) { 
    if(!cJSON_IsString(e_webhook_ezsignevent))
    {
    goto end; //Enum
    }
    e_webhook_ezsigneventVariable = e_webhook_ezsigneventwebhook_response_FromString(e_webhook_ezsignevent->valuestring);
    }

    // webhook_response->pks_customer_code
    cJSON *pks_customer_code = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "pksCustomerCode");
    if (!pks_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_customer_code))
    {
    goto end; //String
    }

    // webhook_response->s_webhook_url
    cJSON *s_webhook_url = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "sWebhookUrl");
    if (!s_webhook_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_url))
    {
    goto end; //String
    }

    // webhook_response->s_webhook_emailfailed
    cJSON *s_webhook_emailfailed = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "sWebhookEmailfailed");
    if (!s_webhook_emailfailed) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_emailfailed))
    {
    goto end; //String
    }

    // webhook_response->e_webhook_managementevent
    cJSON *e_webhook_managementevent = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "eWebhookManagementevent");
    ezmax_api_definition_webhook_response_EWEBHOOKMANAGEMENTEVENT_e e_webhook_managementeventVariable;
    if (e_webhook_managementevent) { 
    if(!cJSON_IsString(e_webhook_managementevent))
    {
    goto end; //Enum
    }
    e_webhook_managementeventVariable = e_webhook_managementeventwebhook_response_FromString(e_webhook_managementevent->valuestring);
    }


    webhook_response_local_var = webhook_response_create (
        pki_webhook_id->valuedouble,
        e_webhook_moduleVariable,
        e_webhook_ezsignevent ? e_webhook_ezsigneventVariable : -1,
        strdup(pks_customer_code->valuestring),
        strdup(s_webhook_url->valuestring),
        strdup(s_webhook_emailfailed->valuestring),
        e_webhook_managementevent ? e_webhook_managementeventVariable : -1
        );

    return webhook_response_local_var;
end:
    return NULL;

}
