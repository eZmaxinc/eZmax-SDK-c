#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "authenticationexternal_list_element.h"


char* authenticationexternal_list_element_e_authenticationexternal_type_ToString(ezmax_api_definition__full_authenticationexternal_list_element__e e_authenticationexternal_type) {
    char* e_authenticationexternal_typeArray[] =  { "NULL", "Salesforce", "SalesforceSandbox" };
    return e_authenticationexternal_typeArray[e_authenticationexternal_type];
}

ezmax_api_definition__full_authenticationexternal_list_element__e authenticationexternal_list_element_e_authenticationexternal_type_FromString(char* e_authenticationexternal_type){
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

authenticationexternal_list_element_t *authenticationexternal_list_element_create(
    int pki_authenticationexternal_id,
    char *s_authenticationexternal_description,
    field_e_authenticationexternal_type_t *e_authenticationexternal_type,
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

    return authenticationexternal_list_element_local_var;
}


void authenticationexternal_list_element_free(authenticationexternal_list_element_t *authenticationexternal_list_element) {
    if(NULL == authenticationexternal_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (authenticationexternal_list_element->s_authenticationexternal_description) {
        free(authenticationexternal_list_element->s_authenticationexternal_description);
        authenticationexternal_list_element->s_authenticationexternal_description = NULL;
    }
    if (authenticationexternal_list_element->e_authenticationexternal_type) {
        field_e_authenticationexternal_type_free(authenticationexternal_list_element->e_authenticationexternal_type);
        authenticationexternal_list_element->e_authenticationexternal_type = NULL;
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
    if (ezmax_api_definition__full_authenticationexternal_list_element__NULL == authenticationexternal_list_element->e_authenticationexternal_type) {
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
    field_e_authenticationexternal_type_t *e_authenticationexternal_type_local_nonprim = NULL;

    // authenticationexternal_list_element->pki_authenticationexternal_id
    cJSON *pki_authenticationexternal_id = cJSON_GetObjectItemCaseSensitive(authenticationexternal_list_elementJSON, "pkiAuthenticationexternalID");
    if (!pki_authenticationexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_authenticationexternal_id))
    {
    goto end; //Numeric
    }

    // authenticationexternal_list_element->s_authenticationexternal_description
    cJSON *s_authenticationexternal_description = cJSON_GetObjectItemCaseSensitive(authenticationexternal_list_elementJSON, "sAuthenticationexternalDescription");
    if (!s_authenticationexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_authenticationexternal_description))
    {
    goto end; //String
    }

    // authenticationexternal_list_element->e_authenticationexternal_type
    cJSON *e_authenticationexternal_type = cJSON_GetObjectItemCaseSensitive(authenticationexternal_list_elementJSON, "eAuthenticationexternalType");
    if (!e_authenticationexternal_type) {
        goto end;
    }

    
    e_authenticationexternal_type_local_nonprim = field_e_authenticationexternal_type_parseFromJSON(e_authenticationexternal_type); //custom

    // authenticationexternal_list_element->b_authenticationexternal_connected
    cJSON *b_authenticationexternal_connected = cJSON_GetObjectItemCaseSensitive(authenticationexternal_list_elementJSON, "bAuthenticationexternalConnected");
    if (!b_authenticationexternal_connected) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_authenticationexternal_connected))
    {
    goto end; //Bool
    }


    authenticationexternal_list_element_local_var = authenticationexternal_list_element_create (
        pki_authenticationexternal_id->valuedouble,
        strdup(s_authenticationexternal_description->valuestring),
        e_authenticationexternal_type_local_nonprim,
        b_authenticationexternal_connected->valueint
        );

    return authenticationexternal_list_element_local_var;
end:
    if (e_authenticationexternal_type_local_nonprim) {
        field_e_authenticationexternal_type_free(e_authenticationexternal_type_local_nonprim);
        e_authenticationexternal_type_local_nonprim = NULL;
    }
    return NULL;

}
