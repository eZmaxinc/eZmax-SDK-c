#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_request_compound.h"



static authenticationexternal_request_compound_t *authenticationexternal_request_compound_create_internal(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type
    ) {
    authenticationexternal_request_compound_t *authenticationexternal_request_compound_local_var = malloc(sizeof(authenticationexternal_request_compound_t));
    if (!authenticationexternal_request_compound_local_var) {
        return NULL;
    }
    authenticationexternal_request_compound_local_var->pki_authenticationexternal_id = pki_authenticationexternal_id;
    authenticationexternal_request_compound_local_var->s_authenticationexternal_description = s_authenticationexternal_description;
    authenticationexternal_request_compound_local_var->e_authenticationexternal_type = e_authenticationexternal_type;

    authenticationexternal_request_compound_local_var->_library_owned = 1;
    return authenticationexternal_request_compound_local_var;
}

__attribute__((deprecated)) authenticationexternal_request_compound_t *authenticationexternal_request_compound_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type
    ) {
    return authenticationexternal_request_compound_create_internal (
        pki_authenticationexternal_id,
        s_authenticationexternal_description,
        e_authenticationexternal_type
        );
}

void authenticationexternal_request_compound_free(authenticationexternal_request_compound_t *authenticationexternal_request_compound) {
    if(NULL == authenticationexternal_request_compound){
        return ;
    }
    if(authenticationexternal_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "authenticationexternal_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_request_compound->s_authenticationexternal_description) {
        free(authenticationexternal_request_compound->s_authenticationexternal_description);
        authenticationexternal_request_compound->s_authenticationexternal_description = NULL;
    }
    free(authenticationexternal_request_compound);
}

cJSON *authenticationexternal_request_compound_convertToJSON(authenticationexternal_request_compound_t *authenticationexternal_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // authenticationexternal_request_compound->pki_authenticationexternal_id
    if(authenticationexternal_request_compound->pki_authenticationexternal_id) {
    if(cJSON_AddNumberToObject(item, "pkiAuthenticationexternalID", authenticationexternal_request_compound->pki_authenticationexternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // authenticationexternal_request_compound->s_authenticationexternal_description
    if (!authenticationexternal_request_compound->s_authenticationexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAuthenticationexternalDescription", authenticationexternal_request_compound->s_authenticationexternal_description) == NULL) {
    goto fail; //String
    }


    // authenticationexternal_request_compound->e_authenticationexternal_type
    if (ezmax_api_definition__full_field_e_authenticationexternal_type__NULL == authenticationexternal_request_compound->e_authenticationexternal_type) {
        goto fail;
    }
    cJSON *e_authenticationexternal_type_local_JSON = field_e_authenticationexternal_type_convertToJSON(authenticationexternal_request_compound->e_authenticationexternal_type);
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

authenticationexternal_request_compound_t *authenticationexternal_request_compound_parseFromJSON(cJSON *authenticationexternal_request_compoundJSON){

    authenticationexternal_request_compound_t *authenticationexternal_request_compound_local_var = NULL;

    // define the local variable for authenticationexternal_request_compound->e_authenticationexternal_type
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type_local_nonprim = 0;

    // authenticationexternal_request_compound->pki_authenticationexternal_id
    cJSON *pki_authenticationexternal_id = cJSON_GetObjectItemCaseSensitive(authenticationexternal_request_compoundJSON, "pkiAuthenticationexternalID");
    if (cJSON_IsNull(pki_authenticationexternal_id)) {
        pki_authenticationexternal_id = NULL;
    }
    if (pki_authenticationexternal_id) { 
    if(!cJSON_IsNumber(pki_authenticationexternal_id))
    {
    goto end; //Numeric
    }
    }

    // authenticationexternal_request_compound->s_authenticationexternal_description
    cJSON *s_authenticationexternal_description = cJSON_GetObjectItemCaseSensitive(authenticationexternal_request_compoundJSON, "sAuthenticationexternalDescription");
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

    // authenticationexternal_request_compound->e_authenticationexternal_type
    cJSON *e_authenticationexternal_type = cJSON_GetObjectItemCaseSensitive(authenticationexternal_request_compoundJSON, "eAuthenticationexternalType");
    if (cJSON_IsNull(e_authenticationexternal_type)) {
        e_authenticationexternal_type = NULL;
    }
    if (!e_authenticationexternal_type) {
        goto end;
    }

    
    e_authenticationexternal_type_local_nonprim = field_e_authenticationexternal_type_parseFromJSON(e_authenticationexternal_type); //custom


    authenticationexternal_request_compound_local_var = authenticationexternal_request_compound_create_internal (
        pki_authenticationexternal_id ? pki_authenticationexternal_id->valuedouble : 0,
        strdup(s_authenticationexternal_description->valuestring),
        e_authenticationexternal_type_local_nonprim
        );

    return authenticationexternal_request_compound_local_var;
end:
    if (e_authenticationexternal_type_local_nonprim) {
        e_authenticationexternal_type_local_nonprim = 0;
    }
    return NULL;

}
