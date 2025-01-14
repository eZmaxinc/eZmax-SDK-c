#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_response.h"


char* authenticationexternal_response_e_authenticationexternal_type_ToString(ezmax_api_definition__full_authenticationexternal_response__e e_authenticationexternal_type) {
    char* e_authenticationexternal_typeArray[] =  { "NULL", "Salesforce", "SalesforceSandbox" };
    return e_authenticationexternal_typeArray[e_authenticationexternal_type];
}

ezmax_api_definition__full_authenticationexternal_response__e authenticationexternal_response_e_authenticationexternal_type_FromString(char* e_authenticationexternal_type){
    int stringToReturn = 0;
    char *e_authenticationexternal_typeArray[] =  { "NULL", "Salesforce", "SalesforceSandbox" };
    size_t sizeofArray = sizeof(e_authenticationexternal_typeArray) / sizeof(e_authenticationexternal_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_authenticationexternal_type, e_authenticationexternal_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

authenticationexternal_response_t *authenticationexternal_response_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    field_e_authenticationexternal_type_t *e_authenticationexternal_type,
    int b_authenticationexternal_connected,
    char *s_authenticationexternal_authorizationurl,
    common_audit_t *obj_audit
    ) {
    authenticationexternal_response_t *authenticationexternal_response_local_var = malloc(sizeof(authenticationexternal_response_t));
    if (!authenticationexternal_response_local_var) {
        return NULL;
    }
    authenticationexternal_response_local_var->pki_authenticationexternal_id = pki_authenticationexternal_id;
    authenticationexternal_response_local_var->s_authenticationexternal_description = s_authenticationexternal_description;
    authenticationexternal_response_local_var->e_authenticationexternal_type = e_authenticationexternal_type;
    authenticationexternal_response_local_var->b_authenticationexternal_connected = b_authenticationexternal_connected;
    authenticationexternal_response_local_var->s_authenticationexternal_authorizationurl = s_authenticationexternal_authorizationurl;
    authenticationexternal_response_local_var->obj_audit = obj_audit;

    return authenticationexternal_response_local_var;
}


void authenticationexternal_response_free(authenticationexternal_response_t *authenticationexternal_response) {
    if(NULL == authenticationexternal_response){
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_response->s_authenticationexternal_description) {
        free(authenticationexternal_response->s_authenticationexternal_description);
        authenticationexternal_response->s_authenticationexternal_description = NULL;
    }
    if (authenticationexternal_response->e_authenticationexternal_type) {
        field_e_authenticationexternal_type_free(authenticationexternal_response->e_authenticationexternal_type);
        authenticationexternal_response->e_authenticationexternal_type = NULL;
    }
    if (authenticationexternal_response->s_authenticationexternal_authorizationurl) {
        free(authenticationexternal_response->s_authenticationexternal_authorizationurl);
        authenticationexternal_response->s_authenticationexternal_authorizationurl = NULL;
    }
    if (authenticationexternal_response->obj_audit) {
        common_audit_free(authenticationexternal_response->obj_audit);
        authenticationexternal_response->obj_audit = NULL;
    }
    free(authenticationexternal_response);
}

cJSON *authenticationexternal_response_convertToJSON(authenticationexternal_response_t *authenticationexternal_response) {
    cJSON *item = cJSON_CreateObject();

    // authenticationexternal_response->pki_authenticationexternal_id
    if (!authenticationexternal_response->pki_authenticationexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAuthenticationexternalID", authenticationexternal_response->pki_authenticationexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // authenticationexternal_response->s_authenticationexternal_description
    if (!authenticationexternal_response->s_authenticationexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAuthenticationexternalDescription", authenticationexternal_response->s_authenticationexternal_description) == NULL) {
    goto fail; //String
    }


    // authenticationexternal_response->e_authenticationexternal_type
    if (ezmax_api_definition__full_authenticationexternal_response__NULL == authenticationexternal_response->e_authenticationexternal_type) {
        goto fail;
    }
    cJSON *e_authenticationexternal_type_local_JSON = field_e_authenticationexternal_type_convertToJSON(authenticationexternal_response->e_authenticationexternal_type);
    if(e_authenticationexternal_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAuthenticationexternalType", e_authenticationexternal_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // authenticationexternal_response->b_authenticationexternal_connected
    if(authenticationexternal_response->b_authenticationexternal_connected) {
    if(cJSON_AddBoolToObject(item, "bAuthenticationexternalConnected", authenticationexternal_response->b_authenticationexternal_connected) == NULL) {
    goto fail; //Bool
    }
    }


    // authenticationexternal_response->s_authenticationexternal_authorizationurl
    if(authenticationexternal_response->s_authenticationexternal_authorizationurl) {
    if(cJSON_AddStringToObject(item, "sAuthenticationexternalAuthorizationurl", authenticationexternal_response->s_authenticationexternal_authorizationurl) == NULL) {
    goto fail; //String
    }
    }


    // authenticationexternal_response->obj_audit
    if (!authenticationexternal_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(authenticationexternal_response->obj_audit);
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

authenticationexternal_response_t *authenticationexternal_response_parseFromJSON(cJSON *authenticationexternal_responseJSON){

    authenticationexternal_response_t *authenticationexternal_response_local_var = NULL;

    // define the local variable for authenticationexternal_response->e_authenticationexternal_type
    field_e_authenticationexternal_type_t *e_authenticationexternal_type_local_nonprim = NULL;

    // define the local variable for authenticationexternal_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // authenticationexternal_response->pki_authenticationexternal_id
    cJSON *pki_authenticationexternal_id = cJSON_GetObjectItemCaseSensitive(authenticationexternal_responseJSON, "pkiAuthenticationexternalID");
    if (!pki_authenticationexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_authenticationexternal_id))
    {
    goto end; //Numeric
    }

    // authenticationexternal_response->s_authenticationexternal_description
    cJSON *s_authenticationexternal_description = cJSON_GetObjectItemCaseSensitive(authenticationexternal_responseJSON, "sAuthenticationexternalDescription");
    if (!s_authenticationexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_authenticationexternal_description))
    {
    goto end; //String
    }

    // authenticationexternal_response->e_authenticationexternal_type
    cJSON *e_authenticationexternal_type = cJSON_GetObjectItemCaseSensitive(authenticationexternal_responseJSON, "eAuthenticationexternalType");
    if (!e_authenticationexternal_type) {
        goto end;
    }

    
    e_authenticationexternal_type_local_nonprim = field_e_authenticationexternal_type_parseFromJSON(e_authenticationexternal_type); //custom

    // authenticationexternal_response->b_authenticationexternal_connected
    cJSON *b_authenticationexternal_connected = cJSON_GetObjectItemCaseSensitive(authenticationexternal_responseJSON, "bAuthenticationexternalConnected");
    if (b_authenticationexternal_connected) { 
    if(!cJSON_IsBool(b_authenticationexternal_connected))
    {
    goto end; //Bool
    }
    }

    // authenticationexternal_response->s_authenticationexternal_authorizationurl
    cJSON *s_authenticationexternal_authorizationurl = cJSON_GetObjectItemCaseSensitive(authenticationexternal_responseJSON, "sAuthenticationexternalAuthorizationurl");
    if (s_authenticationexternal_authorizationurl) { 
    if(!cJSON_IsString(s_authenticationexternal_authorizationurl) && !cJSON_IsNull(s_authenticationexternal_authorizationurl))
    {
    goto end; //String
    }
    }

    // authenticationexternal_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(authenticationexternal_responseJSON, "objAudit");
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    authenticationexternal_response_local_var = authenticationexternal_response_create (
        pki_authenticationexternal_id->valuedouble,
        strdup(s_authenticationexternal_description->valuestring),
        e_authenticationexternal_type_local_nonprim,
        b_authenticationexternal_connected ? b_authenticationexternal_connected->valueint : 0,
        s_authenticationexternal_authorizationurl && !cJSON_IsNull(s_authenticationexternal_authorizationurl) ? strdup(s_authenticationexternal_authorizationurl->valuestring) : NULL,
        obj_audit_local_nonprim
        );

    return authenticationexternal_response_local_var;
end:
    if (e_authenticationexternal_type_local_nonprim) {
        field_e_authenticationexternal_type_free(e_authenticationexternal_type_local_nonprim);
        e_authenticationexternal_type_local_nonprim = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
