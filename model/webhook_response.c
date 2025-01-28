#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "webhook_response.h"



static webhook_response_t *webhook_response_create_internal(
    int pki_webhook_id,
    int fki_authenticationexternal_id,
    char *s_webhook_description,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    ezmax_api_definition__full_field_e_webhook_module__e e_webhook_module,
    ezmax_api_definition__full_field_e_webhook_ezsignevent__e e_webhook_ezsignevent,
    ezmax_api_definition__full_field_e_webhook_managementevent__e e_webhook_managementevent,
    char *s_webhook_url,
    char *s_webhook_emailfailed,
    char *s_webhook_apikey,
    char *s_webhook_secret,
    int b_webhook_isactive,
    int b_webhook_issigned,
    int b_webhook_skipsslvalidation,
    char *s_authenticationexternal_description,
    common_audit_t *obj_audit
    ) {
    webhook_response_t *webhook_response_local_var = malloc(sizeof(webhook_response_t));
    if (!webhook_response_local_var) {
        return NULL;
    }
    webhook_response_local_var->pki_webhook_id = pki_webhook_id;
    webhook_response_local_var->fki_authenticationexternal_id = fki_authenticationexternal_id;
    webhook_response_local_var->s_webhook_description = s_webhook_description;
    webhook_response_local_var->fki_ezsignfoldertype_id = fki_ezsignfoldertype_id;
    webhook_response_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    webhook_response_local_var->e_webhook_module = e_webhook_module;
    webhook_response_local_var->e_webhook_ezsignevent = e_webhook_ezsignevent;
    webhook_response_local_var->e_webhook_managementevent = e_webhook_managementevent;
    webhook_response_local_var->s_webhook_url = s_webhook_url;
    webhook_response_local_var->s_webhook_emailfailed = s_webhook_emailfailed;
    webhook_response_local_var->s_webhook_apikey = s_webhook_apikey;
    webhook_response_local_var->s_webhook_secret = s_webhook_secret;
    webhook_response_local_var->b_webhook_isactive = b_webhook_isactive;
    webhook_response_local_var->b_webhook_issigned = b_webhook_issigned;
    webhook_response_local_var->b_webhook_skipsslvalidation = b_webhook_skipsslvalidation;
    webhook_response_local_var->s_authenticationexternal_description = s_authenticationexternal_description;
    webhook_response_local_var->obj_audit = obj_audit;

    webhook_response_local_var->_library_owned = 1;
    return webhook_response_local_var;
}

__attribute__((deprecated)) webhook_response_t *webhook_response_create(
    int pki_webhook_id,
    int fki_authenticationexternal_id,
    char *s_webhook_description,
    int fki_ezsignfoldertype_id,
    char *s_ezsignfoldertype_name_x,
    ezmax_api_definition__full_field_e_webhook_module__e e_webhook_module,
    ezmax_api_definition__full_field_e_webhook_ezsignevent__e e_webhook_ezsignevent,
    ezmax_api_definition__full_field_e_webhook_managementevent__e e_webhook_managementevent,
    char *s_webhook_url,
    char *s_webhook_emailfailed,
    char *s_webhook_apikey,
    char *s_webhook_secret,
    int b_webhook_isactive,
    int b_webhook_issigned,
    int b_webhook_skipsslvalidation,
    char *s_authenticationexternal_description,
    common_audit_t *obj_audit
    ) {
    return webhook_response_create_internal (
        pki_webhook_id,
        fki_authenticationexternal_id,
        s_webhook_description,
        fki_ezsignfoldertype_id,
        s_ezsignfoldertype_name_x,
        e_webhook_module,
        e_webhook_ezsignevent,
        e_webhook_managementevent,
        s_webhook_url,
        s_webhook_emailfailed,
        s_webhook_apikey,
        s_webhook_secret,
        b_webhook_isactive,
        b_webhook_issigned,
        b_webhook_skipsslvalidation,
        s_authenticationexternal_description,
        obj_audit
        );
}

void webhook_response_free(webhook_response_t *webhook_response) {
    if(NULL == webhook_response){
        return ;
    }
    if(webhook_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "webhook_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (webhook_response->s_webhook_description) {
        free(webhook_response->s_webhook_description);
        webhook_response->s_webhook_description = NULL;
    }
    if (webhook_response->s_ezsignfoldertype_name_x) {
        free(webhook_response->s_ezsignfoldertype_name_x);
        webhook_response->s_ezsignfoldertype_name_x = NULL;
    }
    if (webhook_response->s_webhook_url) {
        free(webhook_response->s_webhook_url);
        webhook_response->s_webhook_url = NULL;
    }
    if (webhook_response->s_webhook_emailfailed) {
        free(webhook_response->s_webhook_emailfailed);
        webhook_response->s_webhook_emailfailed = NULL;
    }
    if (webhook_response->s_webhook_apikey) {
        free(webhook_response->s_webhook_apikey);
        webhook_response->s_webhook_apikey = NULL;
    }
    if (webhook_response->s_webhook_secret) {
        free(webhook_response->s_webhook_secret);
        webhook_response->s_webhook_secret = NULL;
    }
    if (webhook_response->s_authenticationexternal_description) {
        free(webhook_response->s_authenticationexternal_description);
        webhook_response->s_authenticationexternal_description = NULL;
    }
    if (webhook_response->obj_audit) {
        common_audit_free(webhook_response->obj_audit);
        webhook_response->obj_audit = NULL;
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


    // webhook_response->fki_authenticationexternal_id
    if(webhook_response->fki_authenticationexternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiAuthenticationexternalID", webhook_response->fki_authenticationexternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhook_response->s_webhook_description
    if (!webhook_response->s_webhook_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sWebhookDescription", webhook_response->s_webhook_description) == NULL) {
    goto fail; //String
    }


    // webhook_response->fki_ezsignfoldertype_id
    if(webhook_response->fki_ezsignfoldertype_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignfoldertypeID", webhook_response->fki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // webhook_response->s_ezsignfoldertype_name_x
    if(webhook_response->s_ezsignfoldertype_name_x) {
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", webhook_response->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }
    }


    // webhook_response->e_webhook_module
    if (ezmax_api_definition__full_field_e_webhook_module__NULL == webhook_response->e_webhook_module) {
        goto fail;
    }
    cJSON *e_webhook_module_local_JSON = field_e_webhook_module_convertToJSON(webhook_response->e_webhook_module);
    if(e_webhook_module_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookModule", e_webhook_module_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // webhook_response->e_webhook_ezsignevent
    if(webhook_response->e_webhook_ezsignevent != ezmax_api_definition__full_field_e_webhook_ezsignevent__NULL) {
    cJSON *e_webhook_ezsignevent_local_JSON = field_e_webhook_ezsignevent_convertToJSON(webhook_response->e_webhook_ezsignevent);
    if(e_webhook_ezsignevent_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookEzsignevent", e_webhook_ezsignevent_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // webhook_response->e_webhook_managementevent
    if(webhook_response->e_webhook_managementevent != ezmax_api_definition__full_field_e_webhook_managementevent__NULL) {
    cJSON *e_webhook_managementevent_local_JSON = field_e_webhook_managementevent_convertToJSON(webhook_response->e_webhook_managementevent);
    if(e_webhook_managementevent_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eWebhookManagementevent", e_webhook_managementevent_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
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


    // webhook_response->s_webhook_apikey
    if(webhook_response->s_webhook_apikey) {
    if(cJSON_AddStringToObject(item, "sWebhookApikey", webhook_response->s_webhook_apikey) == NULL) {
    goto fail; //String
    }
    }


    // webhook_response->s_webhook_secret
    if(webhook_response->s_webhook_secret) {
    if(cJSON_AddStringToObject(item, "sWebhookSecret", webhook_response->s_webhook_secret) == NULL) {
    goto fail; //String
    }
    }


    // webhook_response->b_webhook_isactive
    if (!webhook_response->b_webhook_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookIsactive", webhook_response->b_webhook_isactive) == NULL) {
    goto fail; //Bool
    }


    // webhook_response->b_webhook_issigned
    if (!webhook_response->b_webhook_issigned) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookIssigned", webhook_response->b_webhook_issigned) == NULL) {
    goto fail; //Bool
    }


    // webhook_response->b_webhook_skipsslvalidation
    if (!webhook_response->b_webhook_skipsslvalidation) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bWebhookSkipsslvalidation", webhook_response->b_webhook_skipsslvalidation) == NULL) {
    goto fail; //Bool
    }


    // webhook_response->s_authenticationexternal_description
    if(webhook_response->s_authenticationexternal_description) {
    if(cJSON_AddStringToObject(item, "sAuthenticationexternalDescription", webhook_response->s_authenticationexternal_description) == NULL) {
    goto fail; //String
    }
    }


    // webhook_response->obj_audit
    if (!webhook_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(webhook_response->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
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

    // define the local variable for webhook_response->e_webhook_module
    ezmax_api_definition__full_field_e_webhook_module__e e_webhook_module_local_nonprim = 0;

    // define the local variable for webhook_response->e_webhook_ezsignevent
    ezmax_api_definition__full_field_e_webhook_ezsignevent__e e_webhook_ezsignevent_local_nonprim = 0;

    // define the local variable for webhook_response->e_webhook_managementevent
    ezmax_api_definition__full_field_e_webhook_managementevent__e e_webhook_managementevent_local_nonprim = 0;

    // define the local variable for webhook_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // webhook_response->pki_webhook_id
    cJSON *pki_webhook_id = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "pkiWebhookID");
    if (cJSON_IsNull(pki_webhook_id)) {
        pki_webhook_id = NULL;
    }
    if (!pki_webhook_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_webhook_id))
    {
    goto end; //Numeric
    }

    // webhook_response->fki_authenticationexternal_id
    cJSON *fki_authenticationexternal_id = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "fkiAuthenticationexternalID");
    if (cJSON_IsNull(fki_authenticationexternal_id)) {
        fki_authenticationexternal_id = NULL;
    }
    if (fki_authenticationexternal_id) { 
    if(!cJSON_IsNumber(fki_authenticationexternal_id))
    {
    goto end; //Numeric
    }
    }

    // webhook_response->s_webhook_description
    cJSON *s_webhook_description = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "sWebhookDescription");
    if (cJSON_IsNull(s_webhook_description)) {
        s_webhook_description = NULL;
    }
    if (!s_webhook_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_description))
    {
    goto end; //String
    }

    // webhook_response->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // webhook_response->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // webhook_response->e_webhook_module
    cJSON *e_webhook_module = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "eWebhookModule");
    if (cJSON_IsNull(e_webhook_module)) {
        e_webhook_module = NULL;
    }
    if (!e_webhook_module) {
        goto end;
    }

    
    e_webhook_module_local_nonprim = field_e_webhook_module_parseFromJSON(e_webhook_module); //custom

    // webhook_response->e_webhook_ezsignevent
    cJSON *e_webhook_ezsignevent = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "eWebhookEzsignevent");
    if (cJSON_IsNull(e_webhook_ezsignevent)) {
        e_webhook_ezsignevent = NULL;
    }
    if (e_webhook_ezsignevent) { 
    e_webhook_ezsignevent_local_nonprim = field_e_webhook_ezsignevent_parseFromJSON(e_webhook_ezsignevent); //custom
    }

    // webhook_response->e_webhook_managementevent
    cJSON *e_webhook_managementevent = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "eWebhookManagementevent");
    if (cJSON_IsNull(e_webhook_managementevent)) {
        e_webhook_managementevent = NULL;
    }
    if (e_webhook_managementevent) { 
    e_webhook_managementevent_local_nonprim = field_e_webhook_managementevent_parseFromJSON(e_webhook_managementevent); //custom
    }

    // webhook_response->s_webhook_url
    cJSON *s_webhook_url = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "sWebhookUrl");
    if (cJSON_IsNull(s_webhook_url)) {
        s_webhook_url = NULL;
    }
    if (!s_webhook_url) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_url))
    {
    goto end; //String
    }

    // webhook_response->s_webhook_emailfailed
    cJSON *s_webhook_emailfailed = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "sWebhookEmailfailed");
    if (cJSON_IsNull(s_webhook_emailfailed)) {
        s_webhook_emailfailed = NULL;
    }
    if (!s_webhook_emailfailed) {
        goto end;
    }

    
    if(!cJSON_IsString(s_webhook_emailfailed))
    {
    goto end; //String
    }

    // webhook_response->s_webhook_apikey
    cJSON *s_webhook_apikey = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "sWebhookApikey");
    if (cJSON_IsNull(s_webhook_apikey)) {
        s_webhook_apikey = NULL;
    }
    if (s_webhook_apikey) { 
    if(!cJSON_IsString(s_webhook_apikey) && !cJSON_IsNull(s_webhook_apikey))
    {
    goto end; //String
    }
    }

    // webhook_response->s_webhook_secret
    cJSON *s_webhook_secret = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "sWebhookSecret");
    if (cJSON_IsNull(s_webhook_secret)) {
        s_webhook_secret = NULL;
    }
    if (s_webhook_secret) { 
    if(!cJSON_IsString(s_webhook_secret) && !cJSON_IsNull(s_webhook_secret))
    {
    goto end; //String
    }
    }

    // webhook_response->b_webhook_isactive
    cJSON *b_webhook_isactive = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "bWebhookIsactive");
    if (cJSON_IsNull(b_webhook_isactive)) {
        b_webhook_isactive = NULL;
    }
    if (!b_webhook_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_isactive))
    {
    goto end; //Bool
    }

    // webhook_response->b_webhook_issigned
    cJSON *b_webhook_issigned = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "bWebhookIssigned");
    if (cJSON_IsNull(b_webhook_issigned)) {
        b_webhook_issigned = NULL;
    }
    if (!b_webhook_issigned) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_issigned))
    {
    goto end; //Bool
    }

    // webhook_response->b_webhook_skipsslvalidation
    cJSON *b_webhook_skipsslvalidation = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "bWebhookSkipsslvalidation");
    if (cJSON_IsNull(b_webhook_skipsslvalidation)) {
        b_webhook_skipsslvalidation = NULL;
    }
    if (!b_webhook_skipsslvalidation) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_skipsslvalidation))
    {
    goto end; //Bool
    }

    // webhook_response->s_authenticationexternal_description
    cJSON *s_authenticationexternal_description = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "sAuthenticationexternalDescription");
    if (cJSON_IsNull(s_authenticationexternal_description)) {
        s_authenticationexternal_description = NULL;
    }
    if (s_authenticationexternal_description) { 
    if(!cJSON_IsString(s_authenticationexternal_description) && !cJSON_IsNull(s_authenticationexternal_description))
    {
    goto end; //String
    }
    }

    // webhook_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(webhook_responseJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    webhook_response_local_var = webhook_response_create_internal (
        pki_webhook_id->valuedouble,
        fki_authenticationexternal_id ? fki_authenticationexternal_id->valuedouble : 0,
        strdup(s_webhook_description->valuestring),
        fki_ezsignfoldertype_id ? fki_ezsignfoldertype_id->valuedouble : 0,
        s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x) ? strdup(s_ezsignfoldertype_name_x->valuestring) : NULL,
        e_webhook_module_local_nonprim,
        e_webhook_ezsignevent ? e_webhook_ezsignevent_local_nonprim : 0,
        e_webhook_managementevent ? e_webhook_managementevent_local_nonprim : 0,
        strdup(s_webhook_url->valuestring),
        strdup(s_webhook_emailfailed->valuestring),
        s_webhook_apikey && !cJSON_IsNull(s_webhook_apikey) ? strdup(s_webhook_apikey->valuestring) : NULL,
        s_webhook_secret && !cJSON_IsNull(s_webhook_secret) ? strdup(s_webhook_secret->valuestring) : NULL,
        b_webhook_isactive->valueint,
        b_webhook_issigned->valueint,
        b_webhook_skipsslvalidation->valueint,
        s_authenticationexternal_description && !cJSON_IsNull(s_authenticationexternal_description) ? strdup(s_authenticationexternal_description->valuestring) : NULL,
        obj_audit_local_nonprim
        );

    return webhook_response_local_var;
end:
    if (e_webhook_module_local_nonprim) {
        e_webhook_module_local_nonprim = 0;
    }
    if (e_webhook_ezsignevent_local_nonprim) {
        e_webhook_ezsignevent_local_nonprim = 0;
    }
    if (e_webhook_managementevent_local_nonprim) {
        e_webhook_managementevent_local_nonprim = 0;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
