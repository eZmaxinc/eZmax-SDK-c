#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_list_element.h"



static authenticationexternal_list_element_t *authenticationexternal_list_element_create_internal(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type,
    int b_authenticationexternal_connected
    ) {
    authenticationexternal_list_element_t *authenticationexternal_list_element_local_var = malloc(sizeof(authenticationexternal_list_element_t));
    if (!authenticationexternal_list_element_local_var) {
        return NULL;
    }
    authenticationexternal_list_element_local_var->pki_authenticationexternal_id = pki_authenticationexternal_id;
    authenticationexternal_list_element_local_var->s_authenticationexternal_description = s_authenticationexternal_description;
    authenticationexternal_list_element_local_var->e_authenticationexternal_type = e_authenticationexternal_type;
    authenticationexternal_list_element_local_var->b_authenticationexternal_connected = b_authenticationexternal_connected;

    authenticationexternal_list_element_local_var->_library_owned = 1;
    return authenticationexternal_list_element_local_var;
}

__attribute__((deprecated)) authenticationexternal_list_element_t *authenticationexternal_list_element_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type,
    int b_authenticationexternal_connected
    ) {
    return authenticationexternal_list_element_create_internal (
        pki_authenticationexternal_id,
        s_authenticationexternal_description,
        e_authenticationexternal_type,
        b_authenticationexternal_connected
        );
}

void authenticationexternal_list_element_free(authenticationexternal_list_element_t *authenticationexternal_list_element) {
    if(NULL == authenticationexternal_list_element){
        return ;
    }
    if(authenticationexternal_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "authenticationexternal_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_list_element->s_authenticationexternal_description) {
        free(authenticationexternal_list_element->s_authenticationexternal_description);
        authenticationexternal_list_element->s_authenticationexternal_description = NULL;
    }
    free(authenticationexternal_list_element);
}

cJSON *authenticationexternal_list_element_convertToJSON(authenticationexternal_list_element_t *authenticationexternal_list_element) {
    cJSON *item = cJSON_CreateObject();

    // authenticationexternal_list_element->pki_authenticationexternal_id
    if (!authenticationexternal_list_element->pki_authenticationexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAuthenticationexternalID", authenticationexternal_list_element->pki_authenticationexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // authenticationexternal_list_element->s_authenticationexternal_description
    if (!authenticationexternal_list_element->s_authenticationexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAuthenticationexternalDescription", authenticationexternal_list_element->s_authenticationexternal_description) == NULL) {
    goto fail; //String
    }


    // authenticationexternal_list_element->e_authenticationexternal_type
    if (ezmax_api_definition__full_field_e_authenticationexternal_type__NULL == authenticationexternal_list_element->e_authenticationexternal_type) {
        goto fail;
    }
    cJSON *e_authenticationexternal_type_local_JSON = field_e_authenticationexternal_type_convertToJSON(authenticationexternal_list_element->e_authenticationexternal_type);
    if(e_authenticationexternal_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAuthenticationexternalType", e_authenticationexternal_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // authenticationexternal_list_element->b_authenticationexternal_connected
    if (!authenticationexternal_list_element->b_authenticationexternal_connected) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAuthenticationexternalConnected", authenticationexternal_list_element->b_authenticationexternal_connected) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

authenticationexternal_list_element_t *authenticationexternal_list_element_parseFromJSON(cJSON *authenticationexternal_list_elementJSON){

    authenticationexternal_list_element_t *authenticationexternal_list_element_local_var = NULL;

    // define the local variable for authenticationexternal_list_element->e_authenticationexternal_type
    ezmax_api_definition__full_field_e_authenticationexternal_type__e e_authenticationexternal_type_local_nonprim = 0;

    // authenticationexternal_list_element->pki_authenticationexternal_id
    cJSON *pki_authenticationexternal_id = cJSON_GetObjectItemCaseSensitive(authenticationexternal_list_elementJSON, "pkiAuthenticationexternalID");
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

    // authenticationexternal_list_element->s_authenticationexternal_description
    cJSON *s_authenticationexternal_description = cJSON_GetObjectItemCaseSensitive(authenticationexternal_list_elementJSON, "sAuthenticationexternalDescription");
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

    // authenticationexternal_list_element->e_authenticationexternal_type
    cJSON *e_authenticationexternal_type = cJSON_GetObjectItemCaseSensitive(authenticationexternal_list_elementJSON, "eAuthenticationexternalType");
    if (cJSON_IsNull(e_authenticationexternal_type)) {
        e_authenticationexternal_type = NULL;
    }
    if (!e_authenticationexternal_type) {
        goto end;
    }

    
    e_authenticationexternal_type_local_nonprim = field_e_authenticationexternal_type_parseFromJSON(e_authenticationexternal_type); //custom

    // authenticationexternal_list_element->b_authenticationexternal_connected
    cJSON *b_authenticationexternal_connected = cJSON_GetObjectItemCaseSensitive(authenticationexternal_list_elementJSON, "bAuthenticationexternalConnected");
    if (cJSON_IsNull(b_authenticationexternal_connected)) {
        b_authenticationexternal_connected = NULL;
    }
    if (!b_authenticationexternal_connected) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_authenticationexternal_connected))
    {
    goto end; //Bool
    }


    authenticationexternal_list_element_local_var = authenticationexternal_list_element_create_internal (
        pki_authenticationexternal_id->valuedouble,
        strdup(s_authenticationexternal_description->valuestring),
        e_authenticationexternal_type_local_nonprim,
        b_authenticationexternal_connected->valueint
        );

    return authenticationexternal_list_element_local_var;
end:
    if (e_authenticationexternal_type_local_nonprim) {
        e_authenticationexternal_type_local_nonprim = 0;
    }
    return NULL;

}
