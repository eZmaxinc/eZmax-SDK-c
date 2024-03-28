#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_response_compound.h"


char* webhook_response_compound_e_webhook_module_ToString(ezmax_api_definition__full_webhook_response_compound__e e_webhook_module) {
    char* e_webhook_moduleArray[] =  { "NULL", "Ezsign", "Management" };
    return e_webhook_moduleArray[e_webhook_module];
}

ezmax_api_definition__full_webhook_response_compound__e webhook_response_compound_e_webhook_module_FromString(char* e_webhook_module){
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
char* webhook_response_compound_e_webhook_ezsignevent_ToString(ezmax_api_definition__full_webhook_response_compound__e e_webhook_ezsignevent) {
    char* e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "DocumentFormCompleted", "DocumentUnsent", "EzsignsignerAcceptclause", "EzsignsignerConnect", "FolderCompleted", "FolderDisposed", "FolderSent", "FolderUnsent", "SignatureSigned" };
    return e_webhook_ezsigneventArray[e_webhook_ezsignevent];
}

ezmax_api_definition__full_webhook_response_compound__e webhook_response_compound_e_webhook_ezsignevent_FromString(char* e_webhook_ezsignevent){
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
char* webhook_response_compound_e_webhook_managementevent_ToString(ezmax_api_definition__full_webhook_response_compound__e e_webhook_managementevent) {
    char* e_webhook_managementeventArray[] =  { "NULL", "UserCreated", "UserstagedCreated" };
    return e_webhook_managementeventArray[e_webhook_managementevent];
}

ezmax_api_definition__full_webhook_response_compound__e webhook_response_compound_e_webhook_managementevent_FromString(char* e_webhook_managementevent){
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

webhook_response_compound_t *webhook_response_compound_create(
    int pki_webhook_id,
    char *s_webhook_description,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    field_e_webhook_module_t *e_webhook_module,
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent,
    field_e_webhook_managementevent_t *e_webhook_managementevent,
    char *s_webhook_url,
    char *s_webhook_emailfailed,
    char *s_webhook_apikey,
    char *s_webhook_secret,
    int b_webhook_isactive,
    int b_webhook_issigned,
    int b_webhook_skipsslvalidation,
    common_audit_t *obj_audit,
    char *s_webhook_event,
    list_t *a_obj_webhookheader
    ) {
    webhook_response_compound_t *webhook_response_compound_local_var = malloc(sizeof(webhook_response_compound_t));
    if (!webhook_response_compound_local_var) {
        return NULL;
    }
    webhook_response_compound_local_var->pki_webhook_id = pki_webhook_id;
    webhook_response_compound_local_var->s_webhook_description = s_webhook_description;
    webhook_response_compound_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    webhook_response_compound_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    webhook_response_compound_local_var->e_webhook_module = e_webhook_module;
    webhook_response_compound_local_var->e_webhook_ezsignevent = e_webhook_ezsignevent;
    webhook_response_compound_local_var->e_webhook_managementevent = e_webhook_managementevent;
    webhook_response_compound_local_var->s_webhook_url = s_webhook_url;
    webhook_response_compound_local_var->s_webhook_emailfailed = s_webhook_emailfailed;
    webhook_response_compound_local_var->s_webhook_apikey = s_webhook_apikey;
    webhook_response_compound_local_var->s_webhook_secret = s_webhook_secret;
    webhook_response_compound_local_var->b_webhook_isactive = b_webhook_isactive;
    webhook_response_compound_local_var->b_webhook_issigned = b_webhook_issigned;
    webhook_response_compound_local_var->b_webhook_skipsslvalidation = b_webhook_skipsslvalidation;
    webhook_response_compound_local_var->obj_audit = obj_audit;
    webhook_response_compound_local_var->s_webhook_event = s_webhook_event;
    webhook_response_compound_local_var->a_obj_webhookheader = a_obj_webhookheader;

    return webhook_response_compound_local_var;
}


void webhook_response_compound_free(webhook_response_compound_t *webhook_response_compound) {
    if(NULL == webhook_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_response_compound->s_webhook_description) {
        free(webhook_response_compound->s_webhook_description);
        webhook_response_compound->s_webhook_description = NULL;
    }
    if (webhook_response_compound->s_ezsignfoldertype_name_x) {
        free(webhook_response_compound->s_ezsignfoldertype_name_x);
        webhook_response_compound->s_ezsignfoldertype_name_x = NULL;
    }
    if (webhook_response_compound->e_webhook_module) {
        field_e_webhook_module_free(webhook_response_compound->e_webhook_module);
        webhook_response_compound->e_webhook_module = NULL;
    }
    if (webhook_response_compound->e_webhook_ezsignevent) {
        field_e_webhook_ezsignevent_free(webhook_response_compound->e_webhook_ezsignevent);
        webhook_response_compound->e_webhook_ezsignevent = NULL;
    }
    if (webhook_response_compound->e_webhook_managementevent) {
        field_e_webhook_managementevent_free(webhook_response_compound->e_webhook_managementevent);
        webhook_response_compound->e_webhook_managementevent = NULL;
    }
    if (webhook_response_compound->s_webhook_url) {
        free(webhook_response_compound->s_webhook_url);
        webhook_response_compound->s_webhook_url = NULL;
    }
    if (webhook_response_compound->s_webhook_emailfailed) {
        free(webhook_response_compound->s_webhook_emailfailed);
        webhook_response_compound->s_webhook_emailfailed = NULL;
    }
    if (webhook_response_compound->s_webhook_apikey) {
        free(webhook_response_compound->s_webhook_apikey);
        webhook_response_compound->s_webhook_apikey = NULL;
    }
    if (webhook_response_compound->s_webhook_secret) {
        free(webhook_response_compound->s_webhook_secret);
        webhook_response_compound->s_webhook_secret = NULL;
    }
    if (webhook_response_compound->obj_audit) {
        common_audit_free(webhook_response_compound->obj_audit);
        webhook_response_compound->obj_audit = NULL;
    }
    if (webhook_response_compound->s_webhook_event) {
        free(webhook_response_compound->s_webhook_event);
        webhook_response_compound->s_webhook_event = NULL;
    }
    if (webhook_response_compound->a_obj_webhookheader) {
        list_ForEach(listEntry, webhook_response_compound->a_obj_webhookheader) {
            webhookheader_response_compound_free(listEntry->data);
        }
        list_freeList(webhook_response_compound->a_obj_webhookheader);
        webhook_response_compound->a_obj_webhookheader = NULL;
    }
    free(webhook_response_compound);
}

cJSON *webhook_response_compound_convertToJSON(webhook_response_compound_t *webhook_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // webhook_response_compound->pki_webhook_id
    if (!webhook_response_compound->pki_webhook_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiWebhookID", webhook_response_compound->pki_webhook_id) == NULL) {
    goto fail; //Numeric
    }


    // webhook_response_compound->s_webhook_description
    if (!webhook_response_compound->s_webhook_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookDescription", webhook_response_compound->s_webhook_description) == NULL) {
    goto fail; //String
    }


    // webhook_response_compound->fki_ezsignfoldertype_id
    if(webhook_response_compound->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", webhook_response_compound->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhook_response_compound->s_ezsignfoldertype_name_x
    if(webhook_response_compound->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", webhook_response_compound->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // webhook_response_compound->e_webhook_module
    if (ezmax_api_definition__full_webhook_response_compound__NULL == webhook_response_compound->e_webhook_module) {
        goto fail;
    }
    cJSON *e_webhook_module_local_JSON = field_e_webhook_module_convertToJSON(webhook_response_compound->e_webhook_module);
    if(e_webhook_module_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookModule", e_webhook_module_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // webhook_response_compound->e_webhook_ezsignevent
    if(webhook_response_compound->e_webhook_ezsignevent != ezmax_api_definition__full_webhook_response_compound__NULL) {
    cJSON *e_webhook_ezsignevent_local_JSON = field_e_webhook_ezsignevent_convertToJSON(webhook_response_compound->e_webhook_ezsignevent);
    if(e_webhook_ezsignevent_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookEzsignevent", e_webhook_ezsignevent_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // webhook_response_compound->e_webhook_managementevent
    if(webhook_response_compound->e_webhook_managementevent != ezmax_api_definition__full_webhook_response_compound__NULL) {
    cJSON *e_webhook_managementevent_local_JSON = field_e_webhook_managementevent_convertToJSON(webhook_response_compound->e_webhook_managementevent);
    if(e_webhook_managementevent_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookManagementevent", e_webhook_managementevent_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // webhook_response_compound->s_webhook_url
    if (!webhook_response_compound->s_webhook_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookUrl", webhook_response_compound->s_webhook_url) == NULL) {
    goto fail; //String
    }


    // webhook_response_compound->s_webhook_emailfailed
    if (!webhook_response_compound->s_webhook_emailfailed) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookEmailfailed", webhook_response_compound->s_webhook_emailfailed) == NULL) {
    goto fail; //String
    }


    // webhook_response_compound->s_webhook_apikey
    if(webhook_response_compound->s_webhook_apikey) {
    if(cJSON_AddStringToObject(item, "sWebhookApikey", webhook_response_compound->s_webhook_apikey) == NULL) {
    goto fail; //String
    }
    }


    // webhook_response_compound->s_webhook_secret
    if(webhook_response_compound->s_webhook_secret) {
    if(cJSON_AddStringToObject(item, "sWebhookSecret", webhook_response_compound->s_webhook_secret) == NULL) {
    goto fail; //String
    }
    }


    // webhook_response_compound->b_webhook_isactive
    if (!webhook_response_compound->b_webhook_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookIsactive", webhook_response_compound->b_webhook_isactive) == NULL) {
    goto fail; //Bool
    }


    // webhook_response_compound->b_webhook_issigned
    if (!webhook_response_compound->b_webhook_issigned) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookIssigned", webhook_response_compound->b_webhook_issigned) == NULL) {
    goto fail; //Bool
    }


    // webhook_response_compound->b_webhook_skipsslvalidation
    if (!webhook_response_compound->b_webhook_skipsslvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookSkipsslvalidation", webhook_response_compound->b_webhook_skipsslvalidation) == NULL) {
    goto fail; //Bool
    }


    // webhook_response_compound->obj_audit
    if (!webhook_response_compound->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(webhook_response_compound->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // webhook_response_compound->s_webhook_event
    if(webhook_response_compound->s_webhook_event) {
    if(cJSON_AddStringToObject(item, "sWebhookEvent", webhook_response_compound->s_webhook_event) == NULL) {
    goto fail; //String
    }
    }


    // webhook_response_compound->a_obj_webhookheader
    if(webhook_response_compound->a_obj_webhookheader) {
    cJSON *a_obj_webhookheader = cJSON_AddArrayToObject(item, "a_objWebhookheader");
    if(a_obj_webhookheader == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_webhookheaderListEntry;
    if (webhook_response_compound->a_obj_webhookheader) {
    list_ForEach(a_obj_webhookheaderListEntry, webhook_response_compound->a_obj_webhookheader) {
    cJSON *itemLocal = webhookheader_response_compound_convertToJSON(a_obj_webhookheaderListEntry->data);
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

webhook_response_compound_t *webhook_response_compound_parseFromJSON(cJSON *webhook_response_compoundJSON){

    webhook_response_compound_t *webhook_response_compound_local_var = NULL;

    // define the local variable for webhook_response_compound->e_webhook_module
    field_e_webhook_module_t *e_webhook_module_local_nonprim = NULL;

    // define the local variable for webhook_response_compound->e_webhook_ezsignevent
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent_local_nonprim = NULL;

    // define the local variable for webhook_response_compound->e_webhook_managementevent
    field_e_webhook_managementevent_t *e_webhook_managementevent_local_nonprim = NULL;

    // define the local variable for webhook_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local list for webhook_response_compound->a_obj_webhookheader
    list_t *a_obj_webhookheaderList = NULL;

    // webhook_response_compound->pki_webhook_id
    cJSON *pki_webhook_id = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "pkiWebhookID");
    if (!pki_webhook_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_webhook_id))
    {
    goto end; //Numeric
    }

    // webhook_response_compound->s_webhook_description
    cJSON *s_webhook_description = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "sWebhookDescription");
    if (!s_webhook_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_description))
    {
    goto end; //String
    }

    // webhook_response_compound->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "fkiEzsignfoldertypeID");
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // webhook_response_compound->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "sEzsignfoldertypeNameX");
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // webhook_response_compound->e_webhook_module
    cJSON *e_webhook_module = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "eWebhookModule");
    if (!e_webhook_module) {
        goto end;
    }

    
    e_webhook_module_local_nonprim = field_e_webhook_module_parseFromJSON(e_webhook_module); //custom

    // webhook_response_compound->e_webhook_ezsignevent
    cJSON *e_webhook_ezsignevent = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "eWebhookEzsignevent");
    if (e_webhook_ezsignevent) { 
    e_webhook_ezsignevent_local_nonprim = field_e_webhook_ezsignevent_parseFromJSON(e_webhook_ezsignevent); //custom
    }

    // webhook_response_compound->e_webhook_managementevent
    cJSON *e_webhook_managementevent = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "eWebhookManagementevent");
    if (e_webhook_managementevent) { 
    e_webhook_managementevent_local_nonprim = field_e_webhook_managementevent_parseFromJSON(e_webhook_managementevent); //custom
    }

    // webhook_response_compound->s_webhook_url
    cJSON *s_webhook_url = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "sWebhookUrl");
    if (!s_webhook_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_url))
    {
    goto end; //String
    }

    // webhook_response_compound->s_webhook_emailfailed
    cJSON *s_webhook_emailfailed = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "sWebhookEmailfailed");
    if (!s_webhook_emailfailed) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_emailfailed))
    {
    goto end; //String
    }

    // webhook_response_compound->s_webhook_apikey
    cJSON *s_webhook_apikey = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "sWebhookApikey");
    if (s_webhook_apikey) { 
    if(!cJSON_IsString(s_webhook_apikey) && !cJSON_IsNull(s_webhook_apikey))
    {
    goto end; //String
    }
    }

    // webhook_response_compound->s_webhook_secret
    cJSON *s_webhook_secret = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "sWebhookSecret");
    if (s_webhook_secret) { 
    if(!cJSON_IsString(s_webhook_secret) && !cJSON_IsNull(s_webhook_secret))
    {
    goto end; //String
    }
    }

    // webhook_response_compound->b_webhook_isactive
    cJSON *b_webhook_isactive = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "bWebhookIsactive");
    if (!b_webhook_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_isactive))
    {
    goto end; //Bool
    }

    // webhook_response_compound->b_webhook_issigned
    cJSON *b_webhook_issigned = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "bWebhookIssigned");
    if (!b_webhook_issigned) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_issigned))
    {
    goto end; //Bool
    }

    // webhook_response_compound->b_webhook_skipsslvalidation
    cJSON *b_webhook_skipsslvalidation = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "bWebhookSkipsslvalidation");
    if (!b_webhook_skipsslvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_skipsslvalidation))
    {
    goto end; //Bool
    }

    // webhook_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive

    // webhook_response_compound->s_webhook_event
    cJSON *s_webhook_event = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "sWebhookEvent");
    if (s_webhook_event) { 
    if(!cJSON_IsString(s_webhook_event) && !cJSON_IsNull(s_webhook_event))
    {
    goto end; //String
    }
    }

    // webhook_response_compound->a_obj_webhookheader
    cJSON *a_obj_webhookheader = cJSON_GetObjectItemCaseSensitive(webhook_response_compoundJSON, "a_objWebhookheader");
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
        webhookheader_response_compound_t *a_obj_webhookheaderItem = webhookheader_response_compound_parseFromJSON(a_obj_webhookheader_local_nonprimitive);

        list_addElement(a_obj_webhookheaderList, a_obj_webhookheaderItem);
    }
    }


    webhook_response_compound_local_var = webhook_response_compound_create (
        pki_webhook_id->valuedouble,
        strdup(s_webhook_description->valuestring),
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x) ? strdup(s_ezsignfoldertype_name_x->valuestring) : NULL,
        e_webhook_module_local_nonprim,
        e_webhook_ezsignevent ? e_webhook_ezsignevent_local_nonprim : NULL,
        e_webhook_managementevent ? e_webhook_managementevent_local_nonprim : NULL,
        strdup(s_webhook_url->valuestring),
        strdup(s_webhook_emailfailed->valuestring),
        s_webhook_apikey && !cJSON_IsNull(s_webhook_apikey) ? strdup(s_webhook_apikey->valuestring) : NULL,
        s_webhook_secret && !cJSON_IsNull(s_webhook_secret) ? strdup(s_webhook_secret->valuestring) : NULL,
        b_webhook_isactive->valueint,
        b_webhook_issigned->valueint,
        b_webhook_skipsslvalidation->valueint,
        obj_audit_local_nonprim,
        s_webhook_event && !cJSON_IsNull(s_webhook_event) ? strdup(s_webhook_event->valuestring) : NULL,
        a_obj_webhookheader ? a_obj_webhookheaderList : NULL
        );

    return webhook_response_compound_local_var;
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
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    if (a_obj_webhookheaderList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_webhookheaderList) {
            webhookheader_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_webhookheaderList);
        a_obj_webhookheaderList = NULL;
    }
    return NULL;

}
