#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_request.h"



static authenticationexternal_request_t *authenticationexternal_request_create_internal(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type
    ) {
    authenticationexternal_request_t *authenticationexternal_request_local_var = malloc(sizeof(authenticationexternal_request_t));
    if (!authenticationexternal_request_local_var) {
        return NULL;
    }
    authenticationexternal_request_local_var->pki_authenticationexternal_id = pki_authenticationexternal_id;
    authenticationexternal_request_local_var->s_authenticationexternal_description = s_authenticationexternal_description;
    authenticationexternal_request_local_var->e_authenticationexternal_type = e_authenticationexternal_type;

    authenticationexternal_request_local_var->_library_owned = 1;
    return authenticationexternal_request_local_var;
}

__attribute__((deprecated)) authenticationexternal_request_t *authenticationexternal_request_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type
    ) {
    return authenticationexternal_request_create_internal (
        pki_authenticationexternal_id,
        s_authenticationexternal_description,
        e_authenticationexternal_type
        );
}

void authenticationexternal_request_free(authenticationexternal_request_t *authenticationexternal_request) {
    if(NULL == authenticationexternal_request){
        return ;
    }
    if(authenticationexternal_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "authenticationexternal_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_request->s_authenticationexternal_description) {
        free(authenticationexternal_request->s_authenticationexternal_description);
        authenticationexternal_request->s_authenticationexternal_description = NULL;
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
    if (ezmax_api_definition__full_field_e_authenticationexternal_type__NULL == authenticationexternal_request->e_authenticationexternal_type) {
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
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type_local_nonprim = 0;

    // authenticationexternal_request->pki_authenticationexternal_id
    cJSON *pki_authenticationexternal_id = cJSON_GetObjectItemCaseSensitive(authenticationexternal_requestJSON, "pkiAuthenticationexternalID");
    if (cJSON_IsNull(pki_authenticationexternal_id)) {
        pki_authenticationexternal_id = NULL;
    }
    if (pki_authenticationexternal_id) { 
    if(!cJSON_IsNumber(pki_authenticationexternal_id))
    {
    goto end; //Numeric
    }
    }

    // authenticationexternal_request->s_authenticationexternal_description
    cJSON *s_authenticationexternal_description = cJSON_GetObjectItemCaseSensitive(authenticationexternal_requestJSON, "sAuthenticationexternalDescription");
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

    // authenticationexternal_request->e_authenticationexternal_type
    cJSON *e_authenticationexternal_type = cJSON_GetObjectItemCaseSensitive(authenticationexternal_requestJSON, "eAuthenticationexternalType");
    if (cJSON_IsNull(e_authenticationexternal_type)) {
        e_authenticationexternal_type = NULL;
    }
    if (!e_authenticationexternal_type) {
        goto end;
    }

    
    e_authenticationexternal_type_local_nonprim = field_e_authenticationexternal_type_parseFromJSON(e_authenticationexternal_type); //custom


    authenticationexternal_request_local_var = authenticationexternal_request_create_internal (
        pki_authenticationexternal_id ? pki_authenticationexternal_id->valuedouble : 0,
        strdup(s_authenticationexternal_description->valuestring),
        e_authenticationexternal_type_local_nonprim
        );

    return authenticationexternal_request_local_var;
end:
    if (e_authenticationexternal_type_local_nonprim) {
        e_authenticationexternal_type_local_nonprim = 0;
    }
    return NULL;

}
