#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_webhook_response.h"


char* e_webhook_modulecustom_webhook_response_ToString(ezmax_api_definition__full_custom_webhook_response__e e_webhook_module) {
    char* e_webhook_moduleArray[] =  { "NULL", "Ezsign", "Management" };
    return e_webhook_moduleArray[e_webhook_module];
}

ezmax_api_definition__full_custom_webhook_response__e e_webhook_modulecustom_webhook_response_FromString(char* e_webhook_module){
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
char* e_webhook_ezsigneventcustom_webhook_response_ToString(ezmax_api_definition__full_custom_webhook_response__e e_webhook_ezsignevent) {
    char* e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "EzsignsignerAcceptclause", "EzsignsignerConnect", "FolderCompleted" };
    return e_webhook_ezsigneventArray[e_webhook_ezsignevent];
}

ezmax_api_definition__full_custom_webhook_response__e e_webhook_ezsigneventcustom_webhook_response_FromString(char* e_webhook_ezsignevent){
    int stringToReturn = 0;
    char *e_webhook_ezsigneventArray[] =  { "NULL", "DocumentCompleted", "EzsignsignerAcceptclause", "EzsignsignerConnect", "FolderCompleted" };
    size_t sizeofArray = sizeof(e_webhook_ezsigneventArray) / sizeof(e_webhook_ezsigneventArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_webhook_ezsignevent, e_webhook_ezsigneventArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_webhook_managementeventcustom_webhook_response_ToString(ezmax_api_definition__full_custom_webhook_response__e e_webhook_managementevent) {
    char* e_webhook_managementeventArray[] =  { "NULL", "UserCreated", "UserstagedCreated" };
    return e_webhook_managementeventArray[e_webhook_managementevent];
}

ezmax_api_definition__full_custom_webhook_response__e e_webhook_managementeventcustom_webhook_response_FromString(char* e_webhook_managementevent){
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

custom_webhook_response_t *custom_webhook_response_create(
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
    char *pks_customer_code,
    int b_webhook_test
    ) {
    custom_webhook_response_t *custom_webhook_response_local_var = malloc(sizeof(custom_webhook_response_t));
    if (!custom_webhook_response_local_var) {
        return NULL;
    }
    custom_webhook_response_local_var->pki_webhook_id = pki_webhook_id;
    custom_webhook_response_local_var->s_webhook_description = s_webhook_description;
    custom_webhook_response_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    custom_webhook_response_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    custom_webhook_response_local_var->e_webhook_module = e_webhook_module;
    custom_webhook_response_local_var->e_webhook_ezsignevent = e_webhook_ezsignevent;
    custom_webhook_response_local_var->e_webhook_managementevent = e_webhook_managementevent;
    custom_webhook_response_local_var->s_webhook_url = s_webhook_url;
    custom_webhook_response_local_var->s_webhook_emailfailed = s_webhook_emailfailed;
    custom_webhook_response_local_var->s_webhook_apikey = s_webhook_apikey;
    custom_webhook_response_local_var->s_webhook_secret = s_webhook_secret;
    custom_webhook_response_local_var->b_webhook_isactive = b_webhook_isactive;
    custom_webhook_response_local_var->b_webhook_issigned = b_webhook_issigned;
    custom_webhook_response_local_var->b_webhook_skipsslvalidation = b_webhook_skipsslvalidation;
    custom_webhook_response_local_var->obj_audit = obj_audit;
    custom_webhook_response_local_var->pks_customer_code = pks_customer_code;
    custom_webhook_response_local_var->b_webhook_test = b_webhook_test;

    return custom_webhook_response_local_var;
}


void custom_webhook_response_free(custom_webhook_response_t *custom_webhook_response) {
    if(NULL == custom_webhook_response){
        return ;
    }
    listEntry_t *listEntry;
    if (custom_webhook_response->s_webhook_description) {
        free(custom_webhook_response->s_webhook_description);
        custom_webhook_response->s_webhook_description = NULL;
    }
    if (custom_webhook_response->s_ezsignfoldertype_name_x) {
        free(custom_webhook_response->s_ezsignfoldertype_name_x);
        custom_webhook_response->s_ezsignfoldertype_name_x = NULL;
    }
    if (custom_webhook_response->e_webhook_module) {
        field_e_webhook_module_free(custom_webhook_response->e_webhook_module);
        custom_webhook_response->e_webhook_module = NULL;
    }
    if (custom_webhook_response->e_webhook_ezsignevent) {
        field_e_webhook_ezsignevent_free(custom_webhook_response->e_webhook_ezsignevent);
        custom_webhook_response->e_webhook_ezsignevent = NULL;
    }
    if (custom_webhook_response->e_webhook_managementevent) {
        field_e_webhook_managementevent_free(custom_webhook_response->e_webhook_managementevent);
        custom_webhook_response->e_webhook_managementevent = NULL;
    }
    if (custom_webhook_response->s_webhook_url) {
        free(custom_webhook_response->s_webhook_url);
        custom_webhook_response->s_webhook_url = NULL;
    }
    if (custom_webhook_response->s_webhook_emailfailed) {
        free(custom_webhook_response->s_webhook_emailfailed);
        custom_webhook_response->s_webhook_emailfailed = NULL;
    }
    if (custom_webhook_response->s_webhook_apikey) {
        free(custom_webhook_response->s_webhook_apikey);
        custom_webhook_response->s_webhook_apikey = NULL;
    }
    if (custom_webhook_response->s_webhook_secret) {
        free(custom_webhook_response->s_webhook_secret);
        custom_webhook_response->s_webhook_secret = NULL;
    }
    if (custom_webhook_response->obj_audit) {
        common_audit_free(custom_webhook_response->obj_audit);
        custom_webhook_response->obj_audit = NULL;
    }
    if (custom_webhook_response->pks_customer_code) {
        free(custom_webhook_response->pks_customer_code);
        custom_webhook_response->pks_customer_code = NULL;
    }
    free(custom_webhook_response);
}

cJSON *custom_webhook_response_convertToJSON(custom_webhook_response_t *custom_webhook_response) {
    cJSON *item = cJSON_CreateObject();

    // custom_webhook_response->pki_webhook_id
    if (!custom_webhook_response->pki_webhook_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiWebhookID", custom_webhook_response->pki_webhook_id) == NULL) {
    goto fail; //Numeric
    }


    // custom_webhook_response->s_webhook_description
    if (!custom_webhook_response->s_webhook_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookDescription", custom_webhook_response->s_webhook_description) == NULL) {
    goto fail; //String
    }


    // custom_webhook_response->fki_ezsignfoldertype_id
    if(custom_webhook_response->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", custom_webhook_response->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // custom_webhook_response->s_ezsignfoldertype_name_x
    if(custom_webhook_response->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", custom_webhook_response->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // custom_webhook_response->e_webhook_module
    if (ezmax_api_definition__full_custom_webhook_response__NULL == custom_webhook_response->e_webhook_module) {
        goto fail;
    }
    cJSON *e_webhook_module_local_JSON = field_e_webhook_module_convertToJSON(custom_webhook_response->e_webhook_module);
    if(e_webhook_module_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookModule", e_webhook_module_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // custom_webhook_response->e_webhook_ezsignevent
    if(custom_webhook_response->e_webhook_ezsignevent != ezmax_api_definition__full_custom_webhook_response__NULL) {
    cJSON *e_webhook_ezsignevent_local_JSON = field_e_webhook_ezsignevent_convertToJSON(custom_webhook_response->e_webhook_ezsignevent);
    if(e_webhook_ezsignevent_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookEzsignevent", e_webhook_ezsignevent_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // custom_webhook_response->e_webhook_managementevent
    if(custom_webhook_response->e_webhook_managementevent != ezmax_api_definition__full_custom_webhook_response__NULL) {
    cJSON *e_webhook_managementevent_local_JSON = field_e_webhook_managementevent_convertToJSON(custom_webhook_response->e_webhook_managementevent);
    if(e_webhook_managementevent_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookManagementevent", e_webhook_managementevent_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // custom_webhook_response->s_webhook_url
    if (!custom_webhook_response->s_webhook_url) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookUrl", custom_webhook_response->s_webhook_url) == NULL) {
    goto fail; //String
    }


    // custom_webhook_response->s_webhook_emailfailed
    if (!custom_webhook_response->s_webhook_emailfailed) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookEmailfailed", custom_webhook_response->s_webhook_emailfailed) == NULL) {
    goto fail; //String
    }


    // custom_webhook_response->s_webhook_apikey
    if(custom_webhook_response->s_webhook_apikey) {
    if(cJSON_AddStringToObject(item, "sWebhookApikey", custom_webhook_response->s_webhook_apikey) == NULL) {
    goto fail; //String
    }
    }


    // custom_webhook_response->s_webhook_secret
    if(custom_webhook_response->s_webhook_secret) {
    if(cJSON_AddStringToObject(item, "sWebhookSecret", custom_webhook_response->s_webhook_secret) == NULL) {
    goto fail; //String
    }
    }


    // custom_webhook_response->b_webhook_isactive
    if (!custom_webhook_response->b_webhook_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookIsactive", custom_webhook_response->b_webhook_isactive) == NULL) {
    goto fail; //Bool
    }


    // custom_webhook_response->b_webhook_issigned
    if (!custom_webhook_response->b_webhook_issigned) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookIssigned", custom_webhook_response->b_webhook_issigned) == NULL) {
    goto fail; //Bool
    }


    // custom_webhook_response->b_webhook_skipsslvalidation
    if (!custom_webhook_response->b_webhook_skipsslvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookSkipsslvalidation", custom_webhook_response->b_webhook_skipsslvalidation) == NULL) {
    goto fail; //Bool
    }


    // custom_webhook_response->obj_audit
    if (!custom_webhook_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(custom_webhook_response->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // custom_webhook_response->pks_customer_code
    if (!custom_webhook_response->pks_customer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pksCustomerCode", custom_webhook_response->pks_customer_code) == NULL) {
    goto fail; //String
    }


    // custom_webhook_response->b_webhook_test
    if (!custom_webhook_response->b_webhook_test) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookTest", custom_webhook_response->b_webhook_test) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

custom_webhook_response_t *custom_webhook_response_parseFromJSON(cJSON *custom_webhook_responseJSON){

    custom_webhook_response_t *custom_webhook_response_local_var = NULL;

    // define the local variable for custom_webhook_response->e_webhook_module
    field_e_webhook_module_t *e_webhook_module_local_nonprim = NULL;

    // define the local variable for custom_webhook_response->e_webhook_ezsignevent
    field_e_webhook_ezsignevent_t *e_webhook_ezsignevent_local_nonprim = NULL;

    // define the local variable for custom_webhook_response->e_webhook_managementevent
    field_e_webhook_managementevent_t *e_webhook_managementevent_local_nonprim = NULL;

    // define the local variable for custom_webhook_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // custom_webhook_response->pki_webhook_id
    cJSON *pki_webhook_id = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "pkiWebhookID");
    if (!pki_webhook_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_webhook_id))
    {
    goto end; //Numeric
    }

    // custom_webhook_response->s_webhook_description
    cJSON *s_webhook_description = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sWebhookDescription");
    if (!s_webhook_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_description))
    {
    goto end; //String
    }

    // custom_webhook_response->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "fkiEzsignfoldertypeID");
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // custom_webhook_response->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sEzsignfoldertypeNameX");
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // custom_webhook_response->e_webhook_module
    cJSON *e_webhook_module = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "eWebhookModule");
    if (!e_webhook_module) {
        goto end;
    }

    
    e_webhook_module_local_nonprim = field_e_webhook_module_parseFromJSON(e_webhook_module); //custom

    // custom_webhook_response->e_webhook_ezsignevent
    cJSON *e_webhook_ezsignevent = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "eWebhookEzsignevent");
    if (e_webhook_ezsignevent) { 
    e_webhook_ezsignevent_local_nonprim = field_e_webhook_ezsignevent_parseFromJSON(e_webhook_ezsignevent); //custom
    }

    // custom_webhook_response->e_webhook_managementevent
    cJSON *e_webhook_managementevent = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "eWebhookManagementevent");
    if (e_webhook_managementevent) { 
    e_webhook_managementevent_local_nonprim = field_e_webhook_managementevent_parseFromJSON(e_webhook_managementevent); //custom
    }

    // custom_webhook_response->s_webhook_url
    cJSON *s_webhook_url = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sWebhookUrl");
    if (!s_webhook_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_url))
    {
    goto end; //String
    }

    // custom_webhook_response->s_webhook_emailfailed
    cJSON *s_webhook_emailfailed = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sWebhookEmailfailed");
    if (!s_webhook_emailfailed) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_emailfailed))
    {
    goto end; //String
    }

    // custom_webhook_response->s_webhook_apikey
    cJSON *s_webhook_apikey = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sWebhookApikey");
    if (s_webhook_apikey) { 
    if(!cJSON_IsString(s_webhook_apikey) && !cJSON_IsNull(s_webhook_apikey))
    {
    goto end; //String
    }
    }

    // custom_webhook_response->s_webhook_secret
    cJSON *s_webhook_secret = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sWebhookSecret");
    if (s_webhook_secret) { 
    if(!cJSON_IsString(s_webhook_secret) && !cJSON_IsNull(s_webhook_secret))
    {
    goto end; //String
    }
    }

    // custom_webhook_response->b_webhook_isactive
    cJSON *b_webhook_isactive = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "bWebhookIsactive");
    if (!b_webhook_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_isactive))
    {
    goto end; //Bool
    }

    // custom_webhook_response->b_webhook_issigned
    cJSON *b_webhook_issigned = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "bWebhookIssigned");
    if (!b_webhook_issigned) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_issigned))
    {
    goto end; //Bool
    }

    // custom_webhook_response->b_webhook_skipsslvalidation
    cJSON *b_webhook_skipsslvalidation = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "bWebhookSkipsslvalidation");
    if (!b_webhook_skipsslvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_skipsslvalidation))
    {
    goto end; //Bool
    }

    // custom_webhook_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive

    // custom_webhook_response->pks_customer_code
    cJSON *pks_customer_code = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "pksCustomerCode");
    if (!pks_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_customer_code))
    {
    goto end; //String
    }

    // custom_webhook_response->b_webhook_test
    cJSON *b_webhook_test = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "bWebhookTest");
    if (!b_webhook_test) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_test))
    {
    goto end; //Bool
    }


    custom_webhook_response_local_var = custom_webhook_response_create (
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
        strdup(pks_customer_code->valuestring),
        b_webhook_test->valueint
        );

    return custom_webhook_response_local_var;
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
    return NULL;

}
