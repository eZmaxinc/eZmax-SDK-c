#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "custom_webhook_response.h"


char* custom_webhook_response_e_webhook_emittype_ToString(ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_e e_webhook_emittype) {
    char* e_webhook_emittypeArray[] =  { "NULL", "Automatic", "Manual", "Test" };
    return e_webhook_emittypeArray[e_webhook_emittype];
}

ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_e custom_webhook_response_e_webhook_emittype_FromString(char* e_webhook_emittype){
    int stringToReturn = 0;
    char *e_webhook_emittypeArray[] =  { "NULL", "Automatic", "Manual", "Test" };
    size_t sizeofArray = sizeof(e_webhook_emittypeArray) / sizeof(e_webhook_emittypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_webhook_emittype, e_webhook_emittypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

static custom_webhook_response_t *custom_webhook_response_create_internal(
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
    common_audit_t *obj_audit,
    char *s_webhook_event,
    list_t *a_obj_webhookheader,
    char *pks_customer_code,
    int b_webhook_test,
    ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_e e_webhook_emittype
    ) {
    custom_webhook_response_t *custom_webhook_response_local_var = malloc(sizeof(custom_webhook_response_t));
    if (!custom_webhook_response_local_var) {
        return NULL;
    }
    custom_webhook_response_local_var->pki_webhook_id = pki_webhook_id;
    custom_webhook_response_local_var->fki_authenticationexternal_id = fki_authenticationexternal_id;
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
    custom_webhook_response_local_var->s_authenticationexternal_description = s_authenticationexternal_description;
    custom_webhook_response_local_var->obj_audit = obj_audit;
    custom_webhook_response_local_var->s_webhook_event = s_webhook_event;
    custom_webhook_response_local_var->a_obj_webhookheader = a_obj_webhookheader;
    custom_webhook_response_local_var->pks_customer_code = pks_customer_code;
    custom_webhook_response_local_var->b_webhook_test = b_webhook_test;
    custom_webhook_response_local_var->e_webhook_emittype = e_webhook_emittype;

    custom_webhook_response_local_var->_library_owned = 1;
    return custom_webhook_response_local_var;
}

__attribute__((deprecated)) custom_webhook_response_t *custom_webhook_response_create(
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
    common_audit_t *obj_audit,
    char *s_webhook_event,
    list_t *a_obj_webhookheader,
    char *pks_customer_code,
    int b_webhook_test,
    ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_e e_webhook_emittype
    ) {
    return custom_webhook_response_create_internal (
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
        obj_audit,
        s_webhook_event,
        a_obj_webhookheader,
        pks_customer_code,
        b_webhook_test,
        e_webhook_emittype
        );
}

void custom_webhook_response_free(custom_webhook_response_t *custom_webhook_response) {
    if(NULL == custom_webhook_response){
        return ;
    }
    if(custom_webhook_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "custom_webhook_response_free");
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
    if (custom_webhook_response->s_authenticationexternal_description) {
        free(custom_webhook_response->s_authenticationexternal_description);
        custom_webhook_response->s_authenticationexternal_description = NULL;
    }
    if (custom_webhook_response->obj_audit) {
        common_audit_free(custom_webhook_response->obj_audit);
        custom_webhook_response->obj_audit = NULL;
    }
    if (custom_webhook_response->s_webhook_event) {
        free(custom_webhook_response->s_webhook_event);
        custom_webhook_response->s_webhook_event = NULL;
    }
    if (custom_webhook_response->a_obj_webhookheader) {
        list_ForEach(listEntry, custom_webhook_response->a_obj_webhookheader) {
            webhookheader_response_compound_free(listEntry->data);
        }
        list_freeList(custom_webhook_response->a_obj_webhookheader);
        custom_webhook_response->a_obj_webhookheader = NULL;
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


    // custom_webhook_response->fki_authenticationexternal_id
    if(custom_webhook_response->fki_authenticationexternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiAuthenticationexternalID", custom_webhook_response->fki_authenticationexternal_id) == NULL) {
    goto fail; //Numeric
    }
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
    if (ezmax_api_definition__full_field_e_webhook_module__NULL == custom_webhook_response->e_webhook_module) {
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
    if(custom_webhook_response->e_webhook_ezsignevent != ezmax_api_definition__full_field_e_webhook_ezsignevent__NULL) {
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
    if(custom_webhook_response->e_webhook_managementevent != ezmax_api_definition__full_field_e_webhook_managementevent__NULL) {
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


    // custom_webhook_response->s_authenticationexternal_description
    if(custom_webhook_response->s_authenticationexternal_description) {
    if(cJSON_AddStringToObject(item, "sAuthenticationexternalDescription", custom_webhook_response->s_authenticationexternal_description) == NULL) {
    goto fail; //String
    }
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


    // custom_webhook_response->s_webhook_event
    if(custom_webhook_response->s_webhook_event) {
    if(cJSON_AddStringToObject(item, "sWebhookEvent", custom_webhook_response->s_webhook_event) == NULL) {
    goto fail; //String
    }
    }


    // custom_webhook_response->a_obj_webhookheader
    if(custom_webhook_response->a_obj_webhookheader) {
    cJSON *a_obj_webhookheader = cJSON_AddArrayToObject(item, "a_objWebhookheader");
    if(a_obj_webhookheader == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_webhookheaderListEntry;
    if (custom_webhook_response->a_obj_webhookheader) {
    list_ForEach(a_obj_webhookheaderListEntry, custom_webhook_response->a_obj_webhookheader) {
    cJSON *itemLocal = webhookheader_response_compound_convertToJSON(a_obj_webhookheaderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_webhookheader, itemLocal);
    }
    }
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


    // custom_webhook_response->e_webhook_emittype
    if(custom_webhook_response->e_webhook_emittype != ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_NULL) {
    if(cJSON_AddStringToObject(item, "eWebhookEmittype", custom_webhook_response_e_webhook_emittype_ToString(custom_webhook_response->e_webhook_emittype)) == NULL)
    {
    goto fail; //Enum
    }
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
    ezmax_api_definition__full_field_e_webhook_module__e e_webhook_module_local_nonprim = 0;

    // define the local variable for custom_webhook_response->e_webhook_ezsignevent
    ezmax_api_definition__full_field_e_webhook_ezsignevent__e e_webhook_ezsignevent_local_nonprim = 0;

    // define the local variable for custom_webhook_response->e_webhook_managementevent
    ezmax_api_definition__full_field_e_webhook_managementevent__e e_webhook_managementevent_local_nonprim = 0;

    // define the local variable for custom_webhook_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // define the local list for custom_webhook_response->a_obj_webhookheader
    list_t *a_obj_webhookheaderList = NULL;

    // custom_webhook_response->pki_webhook_id
    cJSON *pki_webhook_id = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "pkiWebhookID");
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

    // custom_webhook_response->fki_authenticationexternal_id
    cJSON *fki_authenticationexternal_id = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "fkiAuthenticationexternalID");
    if (cJSON_IsNull(fki_authenticationexternal_id)) {
        fki_authenticationexternal_id = NULL;
    }
    if (fki_authenticationexternal_id) { 
    if(!cJSON_IsNumber(fki_authenticationexternal_id))
    {
    goto end; //Numeric
    }
    }

    // custom_webhook_response->s_webhook_description
    cJSON *s_webhook_description = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sWebhookDescription");
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

    // custom_webhook_response->fki_ezsignfoldertype_id
    cJSON *fki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "fkiEzsignfoldertypeID");
    if (cJSON_IsNull(fki_ezsignfoldertype_id)) {
        fki_ezsignfoldertype_id = NULL;
    }
    if (fki_ezsignfoldertype_id) { 
    if(!cJSON_IsNumber(fki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    }

    // custom_webhook_response->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (s_ezsignfoldertype_name_x) { 
    if(!cJSON_IsString(s_ezsignfoldertype_name_x) && !cJSON_IsNull(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }
    }

    // custom_webhook_response->e_webhook_module
    cJSON *e_webhook_module = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "eWebhookModule");
    if (cJSON_IsNull(e_webhook_module)) {
        e_webhook_module = NULL;
    }
    if (!e_webhook_module) {
        goto end;
    }

    
    e_webhook_module_local_nonprim = field_e_webhook_module_parseFromJSON(e_webhook_module); //custom

    // custom_webhook_response->e_webhook_ezsignevent
    cJSON *e_webhook_ezsignevent = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "eWebhookEzsignevent");
    if (cJSON_IsNull(e_webhook_ezsignevent)) {
        e_webhook_ezsignevent = NULL;
    }
    if (e_webhook_ezsignevent) { 
    e_webhook_ezsignevent_local_nonprim = field_e_webhook_ezsignevent_parseFromJSON(e_webhook_ezsignevent); //custom
    }

    // custom_webhook_response->e_webhook_managementevent
    cJSON *e_webhook_managementevent = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "eWebhookManagementevent");
    if (cJSON_IsNull(e_webhook_managementevent)) {
        e_webhook_managementevent = NULL;
    }
    if (e_webhook_managementevent) { 
    e_webhook_managementevent_local_nonprim = field_e_webhook_managementevent_parseFromJSON(e_webhook_managementevent); //custom
    }

    // custom_webhook_response->s_webhook_url
    cJSON *s_webhook_url = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sWebhookUrl");
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

    // custom_webhook_response->s_webhook_emailfailed
    cJSON *s_webhook_emailfailed = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sWebhookEmailfailed");
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

    // custom_webhook_response->s_webhook_apikey
    cJSON *s_webhook_apikey = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sWebhookApikey");
    if (cJSON_IsNull(s_webhook_apikey)) {
        s_webhook_apikey = NULL;
    }
    if (s_webhook_apikey) { 
    if(!cJSON_IsString(s_webhook_apikey) && !cJSON_IsNull(s_webhook_apikey))
    {
    goto end; //String
    }
    }

    // custom_webhook_response->s_webhook_secret
    cJSON *s_webhook_secret = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sWebhookSecret");
    if (cJSON_IsNull(s_webhook_secret)) {
        s_webhook_secret = NULL;
    }
    if (s_webhook_secret) { 
    if(!cJSON_IsString(s_webhook_secret) && !cJSON_IsNull(s_webhook_secret))
    {
    goto end; //String
    }
    }

    // custom_webhook_response->b_webhook_isactive
    cJSON *b_webhook_isactive = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "bWebhookIsactive");
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

    // custom_webhook_response->b_webhook_issigned
    cJSON *b_webhook_issigned = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "bWebhookIssigned");
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

    // custom_webhook_response->b_webhook_skipsslvalidation
    cJSON *b_webhook_skipsslvalidation = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "bWebhookSkipsslvalidation");
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

    // custom_webhook_response->s_authenticationexternal_description
    cJSON *s_authenticationexternal_description = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sAuthenticationexternalDescription");
    if (cJSON_IsNull(s_authenticationexternal_description)) {
        s_authenticationexternal_description = NULL;
    }
    if (s_authenticationexternal_description) { 
    if(!cJSON_IsString(s_authenticationexternal_description) && !cJSON_IsNull(s_authenticationexternal_description))
    {
    goto end; //String
    }
    }

    // custom_webhook_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive

    // custom_webhook_response->s_webhook_event
    cJSON *s_webhook_event = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "sWebhookEvent");
    if (cJSON_IsNull(s_webhook_event)) {
        s_webhook_event = NULL;
    }
    if (s_webhook_event) { 
    if(!cJSON_IsString(s_webhook_event) && !cJSON_IsNull(s_webhook_event))
    {
    goto end; //String
    }
    }

    // custom_webhook_response->a_obj_webhookheader
    cJSON *a_obj_webhookheader = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "a_objWebhookheader");
    if (cJSON_IsNull(a_obj_webhookheader)) {
        a_obj_webhookheader = NULL;
    }
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

    // custom_webhook_response->pks_customer_code
    cJSON *pks_customer_code = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "pksCustomerCode");
    if (cJSON_IsNull(pks_customer_code)) {
        pks_customer_code = NULL;
    }
    if (!pks_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_customer_code))
    {
    goto end; //String
    }

    // custom_webhook_response->b_webhook_test
    cJSON *b_webhook_test = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "bWebhookTest");
    if (cJSON_IsNull(b_webhook_test)) {
        b_webhook_test = NULL;
    }
    if (!b_webhook_test) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_webhook_test))
    {
    goto end; //Bool
    }

    // custom_webhook_response->e_webhook_emittype
    cJSON *e_webhook_emittype = cJSON_GetObjectItemCaseSensitive(custom_webhook_responseJSON, "eWebhookEmittype");
    if (cJSON_IsNull(e_webhook_emittype)) {
        e_webhook_emittype = NULL;
    }
    ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_e e_webhook_emittypeVariable;
    if (e_webhook_emittype) { 
    if(!cJSON_IsString(e_webhook_emittype))
    {
    goto end; //Enum
    }
    e_webhook_emittypeVariable = custom_webhook_response_e_webhook_emittype_FromString(e_webhook_emittype->valuestring);
    }


    custom_webhook_response_local_var = custom_webhook_response_create_internal (
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
        obj_audit_local_nonprim,
        s_webhook_event && !cJSON_IsNull(s_webhook_event) ? strdup(s_webhook_event->valuestring) : NULL,
        a_obj_webhookheader ? a_obj_webhookheaderList : NULL,
        strdup(pks_customer_code->valuestring),
        b_webhook_test->valueint,
        e_webhook_emittype ? e_webhook_emittypeVariable : ezmax_api_definition__full_custom_webhook_response_EWEBHOOKEMITTYPE_NULL
        );

    return custom_webhook_response_local_var;
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
