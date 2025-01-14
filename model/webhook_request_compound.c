#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_request_compound.h"


char* webhook_request_compound_e_webhook_module_ToString(ezmax_api_definition__full_webhook_request_compound__e e_webhook_module) {
    char* e_webhook_moduleArray[] =  { "NULL", "Ezsign", "Management" };
    return e_webhook_moduleArray[e_webhook_module];
}

ezmax_api_definition__full_webhook_request_compound__e webhook_request_compound_e_webhook_module_FromString(char* e_webhook_module){
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
char* webhook_request_compound_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_webhook_request_compound__e e_webhook_ezsignevent) {
    char* e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "DocumentFormCompleted", "DocumentUnsent", "EzsignsignerAcceptclause", "EzsignsignerConnect", "FolderCompleted", "FolderDisposed", "FolderSent", "FolderUnsent", "SignatureSigned" };
    return e_webhook_ezsigneventArray[e_webhook_ezsignevent];
}

ezmax_api_definition__full_webhook_request_compound__e webhook_request_compound_e_webhook_ezsignevent_FromString(char* e_webhook_ezsignevent){
    int stringToReturn = 0;
    char *e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "DocumentFormCompleted", "DocumentUnsent", "EzsignsignerAcceptclause", "EzsignsignerConnect", "FolderCompleted", "FolderDisposed", "FolderSent", "FolderUnsent", "SignatureSigned" };
    size_t sizeofArray = sizeof(e_webhook_ezsigneventArray) / sizeof(e_webhook_ezsigneventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_webhook_ezsignevent, e_webhook_ezsigneventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* webhook_request_compound_e_webhook_managementevent_ToString(ezmax_api_definition__full_webhook_request_compound__e e_webhook_managementevent) {
    char* e_webhook_managementeventArray[] =  { "NULL", "UserCreated", "UserstagedCreated" };
    return e_webhook_managementeventArray[e_webhook_managementevent];
}

ezmax_api_definition__full_webhook_request_compound__e webhook_request_compound_e_webhook_managementevent_FromString(char* e_webhook_managementevent){
    int stringToReturn = 0;
    char *e_webhook_managementeventArray[] =  { "NULL", "UserCreated", "UserstagedCreated" };
    size_t sizeofArray = sizeof(e_webhook_managementeventArray) / sizeof(e_webhook_managementeventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_webhook_managementevent, e_webhook_managementeventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

webhook_request_compound_t *webhook_request_compound_create(
    int pki_webhook_id,
    int fki_authenticationexternal_id,
    int fki_ezsignfoldertype_id,
    char *s_webhook_description,
    field_e_webhook_module_t *e_webhook_module,
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent,
    field_e_webhook_managementevent_t *e_webhook_managementevent,
    char *s_webhook_url,
    char *s_webhook_emailfailed,
    int b_webhook_isactive,
    int b_webhook_issigned,
    int b_webhook_skipsslvalidation,
    list_t *a_obj_webhookheader
    ) {
    webhook_request_compound_t *webhook_request_compound_local_var = malloc(sizeof(webhook_request_compound_t));
    if (!webhook_request_compound_local_var) {
        return NULL;
    }
    webhook_request_compound_local_var->pki_webhook_id = pki_webhook_id;
    webhook_request_compound_local_var->fki_authenticationexternal_id = fki_authenticationexternal_id;
    webhook_request_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    webhook_request_compound_local_var->s_webhook_description = s_webhook_description;
    webhook_request_compound_local_var->e_webhook_module = e_webhook_module;
    webhook_request_compound_local_var->e_webhook_ezsignevent = e_webhook_ezsignevent;
    webhook_request_compound_local_var->e_webhook_managementevent = e_webhook_managementevent;
    webhook_request_compound_local_var->s_webhook_url = s_webhook_url;
    webhook_request_compound_local_var->s_webhook_emailfailed = s_webhook_emailfailed;
    webhook_request_compound_local_var->b_webhook_isactive = b_webhook_isactive;
    webhook_request_compound_local_var->b_webhook_issigned = b_webhook_issigned;
    webhook_request_compound_local_var->b_webhook_skipsslvalidation = b_webhook_skipsslvalidation;
    webhook_request_compound_local_var->a_obj_webhookheader = a_obj_webhookheader;

    return webhook_request_compound_local_var;
}


void webhook_request_compound_free(webhook_request_compound_t *webhook_request_compound) {
    if(NULL == webhook_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_request_compound->s_webhook_description) {
        free(webhook_request_compound->s_webhook_description);
        webhook_request_compound->s_webhook_description = NULL;
    }
    if (webhook_request_compound->e_webhook_module) {
        field_e_webhook_module_free(webhook_request_compound->e_webhook_module);
        webhook_request_compound->e_webhook_module = NULL;
    }
    if (webhook_request_compound->e_webhook_ezsignevent) {
        field_e_webhook_ezsignevent_free(webhook_request_compound->e_webhook_ezsignevent);
        webhook_request_compound->e_webhook_ezsignevent = NULL;
    }
    if (webhook_request_compound->e_webhook_managementevent) {
        field_e_webhook_managementevent_free(webhook_request_compound->e_webhook_managementevent);
        webhook_request_compound->e_webhook_managementevent = NULL;
    }
    if (webhook_request_compound->s_webhook_url) {
        free(webhook_request_compound->s_webhook_url);
        webhook_request_compound->s_webhook_url = NULL;
    }
    if (webhook_request_compound->s_webhook_emailfailed) {
        free(webhook_request_compound->s_webhook_emailfailed);
        webhook_request_compound->s_webhook_emailfailed = NULL;
    }
    if (webhook_request_compound->a_obj_webhookheader) {
        list_ForEach(listEntry, webhook_request_compound->a_obj_webhookheader) {
            webhookheader_request_compound_free(listEntry->data);
        }
        list_freeList(webhook_request_compound->a_obj_webhookheader);
        webhook_request_compound->a_obj_webhookheader = NULL;
    }
    free(webhook_request_compound);
}

cJSON *webhook_request_compound_convertToJSON(webhook_request_compound_t *webhook_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // webhook_request_compound->pki_webhook_id
    if(webhook_request_compound->pki_webhook_id) {
    if(cJSON_AddNumberToObject(item, "pkiWebhookID", webhook_request_compound->pki_webhook_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhook_request_compound->fki_authenticationexternal_id
    if(webhook_request_compound->fki_authenticationexternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiAuthenticationexternalID", webhook_request_compound->fki_authenticationexternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhook_request_compound->fki_ezsignfoldertype_id
    if(webhook_request_compound->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", webhook_request_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhook_request_compound->s_webhook_description
    if (!webhook_request_compound->s_webhook_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookDescription", webhook_request_compound->s_webhook_description) == NULL) {
    goto fail; //String
    }


    // webhook_request_compound->e_webhook_module
    if (ezmax_api_definition__full_webhook_request_compound__NULL == webhook_request_compound->e_webhook_module) {
        goto fail;
    }
    cJSON *e_webhook_module_local_JSON = field_e_webhook_module_convertToJSON(webhook_request_compound->e_webhook_module);
    if(e_webhook_module_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookModule", e_webhook_module_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // webhook_request_compound->e_webhook_ezsignevent
    if(webhook_request_compound->e_webhook_ezsignevent != ezmax_api_definition__full_webhook_request_compound__NULL) {
    cJSON *e_webhook_ezsignevent_local_JSON = field_e_webhook_ezsignevent_convertToJSON(webhook_request_compound->e_webhook_ezsignevent);
    if(e_webhook_ezsignevent_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookEzsignevent", e_webhook_ezsignevent_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // webhook_request_compound->e_webhook_managementevent
    if(webhook_request_compound->e_webhook_managementevent != ezmax_api_definition__full_webhook_request_compound__NULL) {
    cJSON *e_webhook_managementevent_local_JSON = field_e_webhook_managementevent_convertToJSON(webhook_request_compound->e_webhook_managementevent);
    if(e_webhook_managementevent_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookManagementevent", e_webhook_managementevent_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // webhook_request_compound->s_webhook_url
    if (!webhook_request_compound->s_webhook_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookUrl", webhook_request_compound->s_webhook_url) == NULL) {
    goto fail; //String
    }


    // webhook_request_compound->s_webhook_emailfailed
    if (!webhook_request_compound->s_webhook_emailfailed) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookEmailfailed", webhook_request_compound->s_webhook_emailfailed) == NULL) {
    goto fail; //String
    }


    // webhook_request_compound->b_webhook_isactive
    if (!webhook_request_compound->b_webhook_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookIsactive", webhook_request_compound->b_webhook_isactive) == NULL) {
    goto fail; //Bool
    }


    // webhook_request_compound->b_webhook_issigned
    if(webhook_request_compound->b_webhook_issigned) {
    if(cJSON_AddBoolToObject(item, "bWebhookIssigned", webhook_request_compound->b_webhook_issigned) == NULL) {
    goto fail; //Bool
    }
    }


    // webhook_request_compound->b_webhook_skipsslvalidation
    if (!webhook_request_compound->b_webhook_skipsslvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookSkipsslvalidation", webhook_request_compound->b_webhook_skipsslvalidation) == NULL) {
    goto fail; //Bool
    }


    // webhook_request_compound->a_obj_webhookheader
    if(webhook_request_compound->a_obj_webhookheader) {
    cJSON *a_obj_webhookheader = cJSON_AddArrayToObject(item, "a_objWebhookheader");
    if(a_obj_webhookheader == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_webhookheaderListEntry;
    if (webhook_request_compound->a_obj_webhookheader) {
    list_ForEach(a_obj_webhookheaderListEntry, webhook_request_compound->a_obj_webhookheader) {
    cJSON *itemLocal = webhookheader_request_compound_convertToJSON(a_obj_webhookheaderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_webhookheader, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

webhook_request_compound_t *webhook_request_compound_parseFromJSON(cJSON *webhook_request_compoundJSON){

    webhook_request_compound_t *webhook_request_compound_local_var = NULL;

    // define the local variable for webhook_request_compound->e_webhook_module
    field_e_webhook_module_t *e_webhook_module_local_nonprim = NULL;

    // define the local variable for webhook_request_compound->e_webhook_ezsignevent
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent_local_nonprim = NULL;

    // define the local variable for webhook_request_compound->e_webhook_managementevent
    field_e_webhook_managementevent_t *e_webhook_managementevent_local_nonprim = NULL;

    // define the local list for webhook_request_compound->a_obj_webhookheader
    list_t *a_obj_webhookheaderList = NULL;

    // webhook_request_compound->pki_webhook_id
    cJSON *pki_webhook_id = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "pkiWebhookID");
    if (pki_webhook_id) { 
    if(!cJSON_IsNumber(pki_webhook_id))
    {
    goto end; //Numeric
    }
    }

    // webhook_request_compound->fki_authenticationexternal_id
    cJSON *fki_authenticationexternal_id = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "fkiAuthenticationexternalID");
    if (fki_authenticationexternal_id) { 
    if(!cJSON_IsNumber(fki_authenticationexternal_id))
    {
    goto end; //Numeric
    }
    }

    // webhook_request_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "fkiEzsignfoldertypeID");
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // webhook_request_compound->s_webhook_description
    cJSON *s_webhook_description = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "sWebhookDescription");
    if (!s_webhook_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_description))
    {
    goto end; //String
    }

    // webhook_request_compound->e_webhook_module
    cJSON *e_webhook_module = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "eWebhookModule");
    if (!e_webhook_module) {
        goto end;
    }

    
    e_webhook_module_local_nonprim = field_e_webhook_module_parseFromJSON(e_webhook_module); //custom

    // webhook_request_compound->e_webhook_ezsignevent
    cJSON *e_webhook_ezsignevent = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "eWebhookEzsignevent");
    if (e_webhook_ezsignevent) { 
    e_webhook_ezsignevent_local_nonprim = field_e_webhook_ezsignevent_parseFromJSON(e_webhook_ezsignevent); //custom
    }

    // webhook_request_compound->e_webhook_managementevent
    cJSON *e_webhook_managementevent = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "eWebhookManagementevent");
    if (e_webhook_managementevent) { 
    e_webhook_managementevent_local_nonprim = field_e_webhook_managementevent_parseFromJSON(e_webhook_managementevent); //custom
    }

    // webhook_request_compound->s_webhook_url
    cJSON *s_webhook_url = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "sWebhookUrl");
    if (!s_webhook_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_url))
    {
    goto end; //String
    }

    // webhook_request_compound->s_webhook_emailfailed
    cJSON *s_webhook_emailfailed = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "sWebhookEmailfailed");
    if (!s_webhook_emailfailed) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_emailfailed))
    {
    goto end; //String
    }

    // webhook_request_compound->b_webhook_isactive
    cJSON *b_webhook_isactive = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "bWebhookIsactive");
    if (!b_webhook_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_isactive))
    {
    goto end; //Bool
    }

    // webhook_request_compound->b_webhook_issigned
    cJSON *b_webhook_issigned = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "bWebhookIssigned");
    if (b_webhook_issigned) { 
    if(!cJSON_IsBool(b_webhook_issigned))
    {
    goto end; //Bool
    }
    }

    // webhook_request_compound->b_webhook_skipsslvalidation
    cJSON *b_webhook_skipsslvalidation = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "bWebhookSkipsslvalidation");
    if (!b_webhook_skipsslvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_skipsslvalidation))
    {
    goto end; //Bool
    }

    // webhook_request_compound->a_obj_webhookheader
    cJSON *a_obj_webhookheader = cJSON_GetObjectItemCaseSensitive(webhook_request_compoundJSON, "a_objWebhookheader");
    if (a_obj_webhookheader) { 
    cJSON *a_obj_webhookheader_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_webhookheader)){
        goto end; //nonprimitive container
    }

    a_obj_webhookheaderList = list_createList();

    cJSON_ArrayForEach(a_obj_webhookheader_local_nonprimitive,a_obj_webhookheader )
    {
        if(!cJSON_IsObject(a_obj_webhookheader_local_nonprimitive)){
            goto end;
        }
        webhookheader_request_compound_t *a_obj_webhookheaderItem = webhookheader_request_compound_parseFromJSON(a_obj_webhookheader_local_nonprimitive);

        list_addElement(a_obj_webhookheaderList, a_obj_webhookheaderItem);
    }
    }


    webhook_request_compound_local_var = webhook_request_compound_create (
        pki_webhook_id ? pki_webhook_id->valuedouble : 0,
        fki_authenticationexternal_id ? fki_authenticationexternal_id->valuedouble : 0,
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        strdup(s_webhook_description->valuestring),
        e_webhook_module_local_nonprim,
        e_webhook_ezsignevent ? e_webhook_ezsignevent_local_nonprim : NULL,
        e_webhook_managementevent ? e_webhook_managementevent_local_nonprim : NULL,
        strdup(s_webhook_url->valuestring),
        strdup(s_webhook_emailfailed->valuestring),
        b_webhook_isactive->valueint,
        b_webhook_issigned ? b_webhook_issigned->valueint : 0,
        b_webhook_skipsslvalidation->valueint,
        a_obj_webhookheader ? a_obj_webhookheaderList : NULL
        );

    return webhook_request_compound_local_var;
end:
    if (e_webhook_module_local_nonprim) {
        field_e_webhook_module_free(e_webhook_module_local_nonprim);
        e_webhook_module_local_nonprim = NULL;
    }
    if (e_webhook_ezsignevent_local_nonprim) {
        field_e_webhook_ezsignevent_free(e_webhook_ezsignevent_local_nonprim);
        e_webhook_ezsignevent_local_nonprim = NULL;
    }
    if (e_webhook_managementevent_local_nonprim) {
        field_e_webhook_managementevent_free(e_webhook_managementevent_local_nonprim);
        e_webhook_managementevent_local_nonprim = NULL;
    }
    if (a_obj_webhookheaderList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_webhookheaderList) {
            webhookheader_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_webhookheaderList);
        a_obj_webhookheaderList = NULL;
    }
    return NULL;

}
