#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_autocomplete_element_response.h"



authenticationexternal_autocomplete_element_response_t *authenticationexternal_autocomplete_element_response_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    int b_authenticationexternal_isactive
    ) {
    authenticationexternal_autocomplete_element_response_t *authenticationexternal_autocomplete_element_response_local_var = malloc(sizeof(authenticationexternal_autocomplete_element_response_t));
    if (!authenticationexternal_autocomplete_element_response_local_var) {
        return NULL;
    }
    authenticationexternal_autocomplete_element_response_local_var->pki_authenticationexternal_id = pki_authenticationexternal_id;
    authenticationexternal_autocomplete_element_response_local_var->s_authenticationexternal_description = s_authenticationexternal_description;
    authenticationexternal_autocomplete_element_response_local_var->b_authenticationexternal_isactive = b_authenticationexternal_isactive;

    return authenticationexternal_autocomplete_element_response_local_var;
}


void authenticationexternal_autocomplete_element_response_free(authenticationexternal_autocomplete_element_response_t *authenticationexternal_autocomplete_element_response) {
    if(NULL == authenticationexternal_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_autocomplete_element_response->s_authenticationexternal_description) {
        free(authenticationexternal_autocomplete_element_response->s_authenticationexternal_description);
        authenticationexternal_autocomplete_element_response->s_authenticationexternal_description = NULL;
    }
    free(authenticationexternal_autocomplete_element_response);
}

cJSON *authenticationexternal_autocomplete_element_response_convertToJSON(authenticationexternal_autocomplete_element_response_t *authenticationexternal_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // authenticationexternal_autocomplete_element_response->pki_authenticationexternal_id
    if (!authenticationexternal_autocomplete_element_response->pki_authenticationexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAuthenticationexternalID", authenticationexternal_autocomplete_element_response->pki_authenticationexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // authenticationexternal_autocomplete_element_response->s_authenticationexternal_description
    if (!authenticationexternal_autocomplete_element_response->s_authenticationexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAuthenticationexternalDescription", authenticationexternal_autocomplete_element_response->s_authenticationexternal_description) == NULL) {
    goto fail; //String
    }


    // authenticationexternal_autocomplete_element_response->b_authenticationexternal_isactive
    if (!authenticationexternal_autocomplete_element_response->b_authenticationexternal_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAuthenticationexternalIsactive", authenticationexternal_autocomplete_element_response->b_authenticationexternal_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

authenticationexternal_autocomplete_element_response_t *authenticationexternal_autocomplete_element_response_parseFromJSON(cJSON *authenticationexternal_autocomplete_element_responseJSON){

    authenticationexternal_autocomplete_element_response_t *authenticationexternal_autocomplete_element_response_local_var = NULL;

    // authenticationexternal_autocomplete_element_response->pki_authenticationexternal_id
    cJSON *pki_authenticationexternal_id = cJSON_GetObjectItemCaseSensitive(authenticationexternal_autocomplete_element_responseJSON, "pkiAuthenticationexternalID");
    if (!pki_authenticationexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_authenticationexternal_id))
    {
    goto end; //Numeric
    }

    // authenticationexternal_autocomplete_element_response->s_authenticationexternal_description
    cJSON *s_authenticationexternal_description = cJSON_GetObjectItemCaseSensitive(authenticationexternal_autocomplete_element_responseJSON, "sAuthenticationexternalDescription");
    if (!s_authenticationexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_authenticationexternal_description))
    {
    goto end; //String
    }

    // authenticationexternal_autocomplete_element_response->b_authenticationexternal_isactive
    cJSON *b_authenticationexternal_isactive = cJSON_GetObjectItemCaseSensitive(authenticationexternal_autocomplete_element_responseJSON, "bAuthenticationexternalIsactive");
    if (!b_authenticationexternal_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_authenticationexternal_isactive))
    {
    goto end; //Bool
    }


    authenticationexternal_autocomplete_element_response_local_var = authenticationexternal_autocomplete_element_response_create (
        pki_authenticationexternal_id->valuedouble,
        strdup(s_authenticationexternal_description->valuestring),
        b_authenticationexternal_isactive->valueint
        );

    return authenticationexternal_autocomplete_element_response_local_var;
end:
    return NULL;

}
