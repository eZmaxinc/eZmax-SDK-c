#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "global_ezmaxcustomer_get_configuration_v1_response.h"



global_ezmaxcustomer_get_configuration_v1_response_t *global_ezmaxcustomer_get_configuration_v1_response_create(
    char *s_infrastructureregion_code,
    char *s_infrastructureregion_code_web,
    char *s_infrastructureenvironmenttype_description,
    char *s_cognito_client_id_external,
    char *s_cognito_client_id_ezmaxpublic
    ) {
    global_ezmaxcustomer_get_configuration_v1_response_t *global_ezmaxcustomer_get_configuration_v1_response_local_var = malloc(sizeof(global_ezmaxcustomer_get_configuration_v1_response_t));
    if (!global_ezmaxcustomer_get_configuration_v1_response_local_var) {
        return NULL;
    }
    global_ezmaxcustomer_get_configuration_v1_response_local_var->s_infrastructureregion_code = s_infrastructureregion_code;
    global_ezmaxcustomer_get_configuration_v1_response_local_var->s_infrastructureregion_code_web = s_infrastructureregion_code_web;
    global_ezmaxcustomer_get_configuration_v1_response_local_var->s_infrastructureenvironmenttype_description = s_infrastructureenvironmenttype_description;
    global_ezmaxcustomer_get_configuration_v1_response_local_var->s_cognito_client_id_external = s_cognito_client_id_external;
    global_ezmaxcustomer_get_configuration_v1_response_local_var->s_cognito_client_id_ezmaxpublic = s_cognito_client_id_ezmaxpublic;

    return global_ezmaxcustomer_get_configuration_v1_response_local_var;
}


void global_ezmaxcustomer_get_configuration_v1_response_free(global_ezmaxcustomer_get_configuration_v1_response_t *global_ezmaxcustomer_get_configuration_v1_response) {
    if(NULL == global_ezmaxcustomer_get_configuration_v1_response){
        return ;
    }
    listEntry_t *listEntry;
    if (global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code) {
        free(global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code);
        global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code = NULL;
    }
    if (global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code_web) {
        free(global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code_web);
        global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code_web = NULL;
    }
    if (global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureenvironmenttype_description) {
        free(global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureenvironmenttype_description);
        global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureenvironmenttype_description = NULL;
    }
    if (global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_external) {
        free(global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_external);
        global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_external = NULL;
    }
    if (global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_ezmaxpublic) {
        free(global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_ezmaxpublic);
        global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_ezmaxpublic = NULL;
    }
    free(global_ezmaxcustomer_get_configuration_v1_response);
}

cJSON *global_ezmaxcustomer_get_configuration_v1_response_convertToJSON(global_ezmaxcustomer_get_configuration_v1_response_t *global_ezmaxcustomer_get_configuration_v1_response) {
    cJSON *item = cJSON_CreateObject();

    // global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code
    if (!global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInfrastructureregionCode", global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code) == NULL) {
    goto fail; //String
    }


    // global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code_web
    if (!global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code_web) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInfrastructureregionCodeWeb", global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code_web) == NULL) {
    goto fail; //String
    }


    // global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureenvironmenttype_description
    if (!global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureenvironmenttype_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInfrastructureenvironmenttypeDescription", global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureenvironmenttype_description) == NULL) {
    goto fail; //String
    }


    // global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_external
    if(global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_external) {
    if(cJSON_AddStringToObject(item, "sCognitoClientIDExternal", global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_external) == NULL) {
    goto fail; //String
    }
    }


    // global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_ezmaxpublic
    if (!global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_ezmaxpublic) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCognitoClientIDEzmaxpublic", global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_ezmaxpublic) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

global_ezmaxcustomer_get_configuration_v1_response_t *global_ezmaxcustomer_get_configuration_v1_response_parseFromJSON(cJSON *global_ezmaxcustomer_get_configuration_v1_responseJSON){

    global_ezmaxcustomer_get_configuration_v1_response_t *global_ezmaxcustomer_get_configuration_v1_response_local_var = NULL;

    // global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code
    cJSON *s_infrastructureregion_code = cJSON_GetObjectItemCaseSensitive(global_ezmaxcustomer_get_configuration_v1_responseJSON, "sInfrastructureregionCode");
    if (!s_infrastructureregion_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_infrastructureregion_code))
    {
    goto end; //String
    }

    // global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureregion_code_web
    cJSON *s_infrastructureregion_code_web = cJSON_GetObjectItemCaseSensitive(global_ezmaxcustomer_get_configuration_v1_responseJSON, "sInfrastructureregionCodeWeb");
    if (!s_infrastructureregion_code_web) {
        goto end;
    }

    
    if(!cJSON_IsString(s_infrastructureregion_code_web))
    {
    goto end; //String
    }

    // global_ezmaxcustomer_get_configuration_v1_response->s_infrastructureenvironmenttype_description
    cJSON *s_infrastructureenvironmenttype_description = cJSON_GetObjectItemCaseSensitive(global_ezmaxcustomer_get_configuration_v1_responseJSON, "sInfrastructureenvironmenttypeDescription");
    if (!s_infrastructureenvironmenttype_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_infrastructureenvironmenttype_description))
    {
    goto end; //String
    }

    // global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_external
    cJSON *s_cognito_client_id_external = cJSON_GetObjectItemCaseSensitive(global_ezmaxcustomer_get_configuration_v1_responseJSON, "sCognitoClientIDExternal");
    if (s_cognito_client_id_external) { 
    if(!cJSON_IsString(s_cognito_client_id_external) && !cJSON_IsNull(s_cognito_client_id_external))
    {
    goto end; //String
    }
    }

    // global_ezmaxcustomer_get_configuration_v1_response->s_cognito_client_id_ezmaxpublic
    cJSON *s_cognito_client_id_ezmaxpublic = cJSON_GetObjectItemCaseSensitive(global_ezmaxcustomer_get_configuration_v1_responseJSON, "sCognitoClientIDEzmaxpublic");
    if (!s_cognito_client_id_ezmaxpublic) {
        goto end;
    }

    
    if(!cJSON_IsString(s_cognito_client_id_ezmaxpublic))
    {
    goto end; //String
    }


    global_ezmaxcustomer_get_configuration_v1_response_local_var = global_ezmaxcustomer_get_configuration_v1_response_create (
        strdup(s_infrastructureregion_code->valuestring),
        strdup(s_infrastructureregion_code_web->valuestring),
        strdup(s_infrastructureenvironmenttype_description->valuestring),
        s_cognito_client_id_external && !cJSON_IsNull(s_cognito_client_id_external) ? strdup(s_cognito_client_id_external->valuestring) : NULL,
        strdup(s_cognito_client_id_ezmaxpublic->valuestring)
        );

    return global_ezmaxcustomer_get_configuration_v1_response_local_var;
end:
    return NULL;

}
