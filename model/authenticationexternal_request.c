#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_request.h"


char* authenticationexternal_request_e_authenticationexternal_type_ToString(ezmax_api_definition__full_authenticationexternal_request__e e_authenticationexternal_type) {
    char* e_authenticationexternal_typeArray[] =  { "NULL", "Salesforce", "SalesforceSandbox" };
    return e_authenticationexternal_typeArray[e_authenticationexternal_type];
}

ezmax_api_definition__full_authenticationexternal_request__e authenticationexternal_request_e_authenticationexternal_type_FromString(char* e_authenticationexternal_type){
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

authenticationexternal_request_t *authenticationexternal_request_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    field_e_authenticationexternal_type_t *e_authenticationexternal_type
    ) {
    authenticationexternal_request_t *authenticationexternal_request_local_var = malloc(sizeof(authenticationexternal_request_t));
    if (!authenticationexternal_request_local_var) {
        return NULL;
    }
    authenticationexternal_request_local_var->pki_authenticationexternal_id = pki_authenticationexternal_id;
    authenticationexternal_request_local_var->s_authenticationexternal_description = s_authenticationexternal_description;
    authenticationexternal_request_local_var->e_authenticationexternal_type = e_authenticationexternal_type;

    return authenticationexternal_request_local_var;
}


void authenticationexternal_request_free(authenticationexternal_request_t *authenticationexternal_request) {
    if(NULL == authenticationexternal_request){
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_request->s_authenticationexternal_description) {
        free(authenticationexternal_request->s_authenticationexternal_description);
        authenticationexternal_request->s_authenticationexternal_description = NULL;
    }
    if (authenticationexternal_request->e_authenticationexternal_type) {
        field_e_authenticationexternal_type_free(authenticationexternal_request->e_authenticationexternal_type);
        authenticationexternal_request->e_authenticationexternal_type = NULL;
    }
    free(authenticationexternal_request);
}

cJSON *authenticationexternal_request_convertToJSON(authenticationexternal_request_t *authenticationexternal_request) {
    cJSON *item = cJSON_CreateObject();

    // authenticationexternal_request->pki_authenticationexternal_id
    if(authenticationexternal_request->pki_authenticationexternal_id) {
    if(cJSON_AddNumberToObject(item, "pkiAuthenticationexternalID", authenticationexternal_request->pki_authenticationexternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // authenticationexternal_request->s_authenticationexternal_description
    if (!authenticationexternal_request->s_authenticationexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAuthenticationexternalDescription", authenticationexternal_request->s_authenticationexternal_description) == NULL) {
    goto fail; //String
    }


    // authenticationexternal_request->e_authenticationexternal_type
    if (ezmax_api_definition__full_authenticationexternal_request__NULL == authenticationexternal_request->e_authenticationexternal_type) {
        goto fail;
    }
    cJSON *e_authenticationexternal_type_local_JSON = field_e_authenticationexternal_type_convertToJSON(authenticationexternal_request->e_authenticationexternal_type);
    if(e_authenticationexternal_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAuthenticationexternalType", e_authenticationexternal_type_local_JSON);
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

authenticationexternal_request_t *authenticationexternal_request_parseFromJSON(cJSON *authenticationexternal_requestJSON){

    authenticationexternal_request_t *authenticationexternal_request_local_var = NULL;

    // define the local variable for authenticationexternal_request->e_authenticationexternal_type
    field_e_authenticationexternal_type_t *e_authenticationexternal_type_local_nonprim = NULL;

    // authenticationexternal_request->pki_authenticationexternal_id
    cJSON *pki_authenticationexternal_id = cJSON_GetObjectItemCaseSensitive(authenticationexternal_requestJSON, "pkiAuthenticationexternalID");
    if (pki_authenticationexternal_id) { 
    if(!cJSON_IsNumber(pki_authenticationexternal_id))
    {
    goto end; //Numeric
    }
    }

    // authenticationexternal_request->s_authenticationexternal_description
    cJSON *s_authenticationexternal_description = cJSON_GetObjectItemCaseSensitive(authenticationexternal_requestJSON, "sAuthenticationexternalDescription");
    if (!s_authenticationexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_authenticationexternal_description))
    {
    goto end; //String
    }

    // authenticationexternal_request->e_authenticationexternal_type
    cJSON *e_authenticationexternal_type = cJSON_GetObjectItemCaseSensitive(authenticationexternal_requestJSON, "eAuthenticationexternalType");
    if (!e_authenticationexternal_type) {
        goto end;
    }

    
    e_authenticationexternal_type_local_nonprim = field_e_authenticationexternal_type_parseFromJSON(e_authenticationexternal_type); //custom


    authenticationexternal_request_local_var = authenticationexternal_request_create (
        pki_authenticationexternal_id ? pki_authenticationexternal_id->valuedouble : 0,
        strdup(s_authenticationexternal_description->valuestring),
        e_authenticationexternal_type_local_nonprim
        );

    return authenticationexternal_request_local_var;
end:
    if (e_authenticationexternal_type_local_nonprim) {
        field_e_authenticationexternal_type_free(e_authenticationexternal_type_local_nonprim);
        e_authenticationexternal_type_local_nonprim = NULL;
    }
    return NULL;

}
