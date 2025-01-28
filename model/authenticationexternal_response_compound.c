#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_response_compound.h"



static authenticationexternal_response_compound_t *authenticationexternal_response_compound_create_internal(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type,
    int b_authenticationexternal_connected,
    char *s_authenticationexternal_authorizationurl,
    common_audit_t *obj_audit
    ) {
    authenticationexternal_response_compound_t *authenticationexternal_response_compound_local_var = malloc(sizeof(authenticationexternal_response_compound_t));
    if (!authenticationexternal_response_compound_local_var) {
        return NULL;
    }
    authenticationexternal_response_compound_local_var->pki_authenticationexternal_id = pki_authenticationexternal_id;
    authenticationexternal_response_compound_local_var->s_authenticationexternal_description = s_authenticationexternal_description;
    authenticationexternal_response_compound_local_var->e_authenticationexternal_type = e_authenticationexternal_type;
    authenticationexternal_response_compound_local_var->b_authenticationexternal_connected = b_authenticationexternal_connected;
    authenticationexternal_response_compound_local_var->s_authenticationexternal_authorizationurl = s_authenticationexternal_authorizationurl;
    authenticationexternal_response_compound_local_var->obj_audit = obj_audit;

    authenticationexternal_response_compound_local_var->_library_owned = 1;
    return authenticationexternal_response_compound_local_var;
}

__attribute__((deprecated)) authenticationexternal_response_compound_t *authenticationexternal_response_compound_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type,
    int b_authenticationexternal_connected,
    char *s_authenticationexternal_authorizationurl,
    common_audit_t *obj_audit
    ) {
    return authenticationexternal_response_compound_create_internal (
        pki_authenticationexternal_id,
        s_authenticationexternal_description,
        e_authenticationexternal_type,
        b_authenticationexternal_connected,
        s_authenticationexternal_authorizationurl,
        obj_audit
        );
}

void authenticationexternal_response_compound_free(authenticationexternal_response_compound_t *authenticationexternal_response_compound) {
    if(NULL == authenticationexternal_response_compound){
        return ;
    }
    if(authenticationexternal_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "authenticationexternal_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_response_compound->s_authenticationexternal_description) {
        free(authenticationexternal_response_compound->s_authenticationexternal_description);
        authenticationexternal_response_compound->s_authenticationexternal_description = NULL;
    }
    if (authenticationexternal_response_compound->s_authenticationexternal_authorizationurl) {
        free(authenticationexternal_response_compound->s_authenticationexternal_authorizationurl);
        authenticationexternal_response_compound->s_authenticationexternal_authorizationurl = NULL;
    }
    if (authenticationexternal_response_compound->obj_audit) {
        common_audit_free(authenticationexternal_response_compound->obj_audit);
        authenticationexternal_response_compound->obj_audit = NULL;
    }
    free(authenticationexternal_response_compound);
}

cJSON *authenticationexternal_response_compound_convertToJSON(authenticationexternal_response_compound_t *authenticationexternal_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // authenticationexternal_response_compound->pki_authenticationexternal_id
    if (!authenticationexternal_response_compound->pki_authenticationexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAuthenticationexternalID", authenticationexternal_response_compound->pki_authenticationexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // authenticationexternal_response_compound->s_authenticationexternal_description
    if (!authenticationexternal_response_compound->s_authenticationexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAuthenticationexternalDescription", authenticationexternal_response_compound->s_authenticationexternal_description) == NULL) {
    goto fail; //String
    }


    // authenticationexternal_response_compound->e_authenticationexternal_type
    if (ezmax_api_definition__full_field_e_authenticationexternal_type__NULL == authenticationexternal_response_compound->e_authenticationexternal_type) {
        goto fail;
    }
    cJSON *e_authenticationexternal_type_local_JSON = field_e_authenticationexternal_type_convertToJSON(authenticationexternal_response_compound->e_authenticationexternal_type);
    if(e_authenticationexternal_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAuthenticationexternalType", e_authenticationexternal_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // authenticationexternal_response_compound->b_authenticationexternal_connected
    if(authenticationexternal_response_compound->b_authenticationexternal_connected) {
    if(cJSON_AddBoolToObject(item, "bAuthenticationexternalConnected", authenticationexternal_response_compound->b_authenticationexternal_connected) == NULL) {
    goto fail; //Bool
    }
    }


    // authenticationexternal_response_compound->s_authenticationexternal_authorizationurl
    if(authenticationexternal_response_compound->s_authenticationexternal_authorizationurl) {
    if(cJSON_AddStringToObject(item, "sAuthenticationexternalAuthorizationurl", authenticationexternal_response_compound->s_authenticationexternal_authorizationurl) == NULL) {
    goto fail; //String
    }
    }


    // authenticationexternal_response_compound->obj_audit
    if (!authenticationexternal_response_compound->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(authenticationexternal_response_compound->obj_audit);
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

authenticationexternal_response_compound_t *authenticationexternal_response_compound_parseFromJSON(cJSON *authenticationexternal_response_compoundJSON){

    authenticationexternal_response_compound_t *authenticationexternal_response_compound_local_var = NULL;

    // define the local variable for authenticationexternal_response_compound->e_authenticationexternal_type
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type_local_nonprim = 0;

    // define the local variable for authenticationexternal_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // authenticationexternal_response_compound->pki_authenticationexternal_id
    cJSON *pki_authenticationexternal_id = cJSON_GetObjectItemCaseSensitive(authenticationexternal_response_compoundJSON, "pkiAuthenticationexternalID");
    if (cJSON_IsNull(pki_authenticationexternal_id)) {
        pki_authenticationexternal_id = NULL;
    }
    if (!pki_authenticationexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_authenticationexternal_id))
    {
    goto end; //Numeric
    }

    // authenticationexternal_response_compound->s_authenticationexternal_description
    cJSON *s_authenticationexternal_description = cJSON_GetObjectItemCaseSensitive(authenticationexternal_response_compoundJSON, "sAuthenticationexternalDescription");
    if (cJSON_IsNull(s_authenticationexternal_description)) {
        s_authenticationexternal_description = NULL;
    }
    if (!s_authenticationexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_authenticationexternal_description))
    {
    goto end; //String
    }

    // authenticationexternal_response_compound->e_authenticationexternal_type
    cJSON *e_authenticationexternal_type = cJSON_GetObjectItemCaseSensitive(authenticationexternal_response_compoundJSON, "eAuthenticationexternalType");
    if (cJSON_IsNull(e_authenticationexternal_type)) {
        e_authenticationexternal_type = NULL;
    }
    if (!e_authenticationexternal_type) {
        goto end;
    }

    
    e_authenticationexternal_type_local_nonprim = field_e_authenticationexternal_type_parseFromJSON(e_authenticationexternal_type); //custom

    // authenticationexternal_response_compound->b_authenticationexternal_connected
    cJSON *b_authenticationexternal_connected = cJSON_GetObjectItemCaseSensitive(authenticationexternal_response_compoundJSON, "bAuthenticationexternalConnected");
    if (cJSON_IsNull(b_authenticationexternal_connected)) {
        b_authenticationexternal_connected = NULL;
    }
    if (b_authenticationexternal_connected) { 
    if(!cJSON_IsBool(b_authenticationexternal_connected))
    {
    goto end; //Bool
    }
    }

    // authenticationexternal_response_compound->s_authenticationexternal_authorizationurl
    cJSON *s_authenticationexternal_authorizationurl = cJSON_GetObjectItemCaseSensitive(authenticationexternal_response_compoundJSON, "sAuthenticationexternalAuthorizationurl");
    if (cJSON_IsNull(s_authenticationexternal_authorizationurl)) {
        s_authenticationexternal_authorizationurl = NULL;
    }
    if (s_authenticationexternal_authorizationurl) { 
    if(!cJSON_IsString(s_authenticationexternal_authorizationurl) && !cJSON_IsNull(s_authenticationexternal_authorizationurl))
    {
    goto end; //String
    }
    }

    // authenticationexternal_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(authenticationexternal_response_compoundJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    authenticationexternal_response_compound_local_var = authenticationexternal_response_compound_create_internal (
        pki_authenticationexternal_id->valuedouble,
        strdup(s_authenticationexternal_description->valuestring),
        e_authenticationexternal_type_local_nonprim,
        b_authenticationexternal_connected ? b_authenticationexternal_connected->valueint : 0,
        s_authenticationexternal_authorizationurl && !cJSON_IsNull(s_authenticationexternal_authorizationurl) ? strdup(s_authenticationexternal_authorizationurl->valuestring) : NULL,
        obj_audit_local_nonprim
        );

    return authenticationexternal_response_compound_local_var;
end:
    if (e_authenticationexternal_type_local_nonprim) {
        e_authenticationexternal_type_local_nonprim = 0;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
