#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_get_current_v1_response_m_payload.h"


char* e_activesession_sessiontypeactivesession_get_current_v1_response_m_payload_ToString(ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_e e_activesession_sessiontype) {
    char* e_activesession_sessiontypeArray[] =  { "NULL", "Normal" };
	return e_activesession_sessiontypeArray[e_activesession_sessiontype];
}

ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_e e_activesession_sessiontypeactivesession_get_current_v1_response_m_payload_FromString(char* e_activesession_sessiontype){
    int stringToReturn = 0;
    char *e_activesession_sessiontypeArray[] =  { "NULL", "Normal" };
    size_t sizeofArray = sizeof(e_activesession_sessiontypeArray) / sizeof(e_activesession_sessiontypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_activesession_sessiontype, e_activesession_sessiontypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_create(
    char *s_customer_code,
    ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_e e_activesession_sessiontype,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    list_t *a_registered_modules,
    list_t *a_permissions,
    int fki_user_id,
    int fki_apikey_id
    ) {
    activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_local_var = malloc(sizeof(activesession_get_current_v1_response_m_payload_t));
    if (!activesession_get_current_v1_response_m_payload_local_var) {
        return NULL;
    }
    activesession_get_current_v1_response_m_payload_local_var->s_customer_code = s_customer_code;
    activesession_get_current_v1_response_m_payload_local_var->e_activesession_sessiontype = e_activesession_sessiontype;
    activesession_get_current_v1_response_m_payload_local_var->fki_language_id = fki_language_id;
    activesession_get_current_v1_response_m_payload_local_var->s_company_name_x = s_company_name_x;
    activesession_get_current_v1_response_m_payload_local_var->s_department_name_x = s_department_name_x;
    activesession_get_current_v1_response_m_payload_local_var->a_registered_modules = a_registered_modules;
    activesession_get_current_v1_response_m_payload_local_var->a_permissions = a_permissions;
    activesession_get_current_v1_response_m_payload_local_var->fki_user_id = fki_user_id;
    activesession_get_current_v1_response_m_payload_local_var->fki_apikey_id = fki_apikey_id;

    return activesession_get_current_v1_response_m_payload_local_var;
}


void activesession_get_current_v1_response_m_payload_free(activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload) {
    if(NULL == activesession_get_current_v1_response_m_payload){
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_get_current_v1_response_m_payload->s_customer_code) {
        free(activesession_get_current_v1_response_m_payload->s_customer_code);
        activesession_get_current_v1_response_m_payload->s_customer_code = NULL;
    }
    if (activesession_get_current_v1_response_m_payload->s_company_name_x) {
        free(activesession_get_current_v1_response_m_payload->s_company_name_x);
        activesession_get_current_v1_response_m_payload->s_company_name_x = NULL;
    }
    if (activesession_get_current_v1_response_m_payload->s_department_name_x) {
        free(activesession_get_current_v1_response_m_payload->s_department_name_x);
        activesession_get_current_v1_response_m_payload->s_department_name_x = NULL;
    }
    if (activesession_get_current_v1_response_m_payload->a_registered_modules) {
        list_ForEach(listEntry, activesession_get_current_v1_response_m_payload->a_registered_modules) {
            free(listEntry->data);
        }
        list_freeList(activesession_get_current_v1_response_m_payload->a_registered_modules);
        activesession_get_current_v1_response_m_payload->a_registered_modules = NULL;
    }
    if (activesession_get_current_v1_response_m_payload->a_permissions) {
        list_ForEach(listEntry, activesession_get_current_v1_response_m_payload->a_permissions) {
            free(listEntry->data);
        }
        list_freeList(activesession_get_current_v1_response_m_payload->a_permissions);
        activesession_get_current_v1_response_m_payload->a_permissions = NULL;
    }
    free(activesession_get_current_v1_response_m_payload);
}

cJSON *activesession_get_current_v1_response_m_payload_convertToJSON(activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload) {
    cJSON *item = cJSON_CreateObject();

    // activesession_get_current_v1_response_m_payload->s_customer_code
    if (!activesession_get_current_v1_response_m_payload->s_customer_code) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sCustomerCode", activesession_get_current_v1_response_m_payload->s_customer_code) == NULL) {
    goto fail; //String
    }


    // activesession_get_current_v1_response_m_payload->e_activesession_sessiontype
    
    if(cJSON_AddStringToObject(item, "eActivesessionSessiontype", e_activesession_sessiontypeactivesession_get_current_v1_response_m_payload_ToString(activesession_get_current_v1_response_m_payload->e_activesession_sessiontype)) == NULL)
    {
    goto fail; //Enum
    }


    // activesession_get_current_v1_response_m_payload->fki_language_id
    if (!activesession_get_current_v1_response_m_payload->fki_language_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", activesession_get_current_v1_response_m_payload->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_get_current_v1_response_m_payload->s_company_name_x
    if (!activesession_get_current_v1_response_m_payload->s_company_name_x) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sCompanyNameX", activesession_get_current_v1_response_m_payload->s_company_name_x) == NULL) {
    goto fail; //String
    }


    // activesession_get_current_v1_response_m_payload->s_department_name_x
    if (!activesession_get_current_v1_response_m_payload->s_department_name_x) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", activesession_get_current_v1_response_m_payload->s_department_name_x) == NULL) {
    goto fail; //String
    }


    // activesession_get_current_v1_response_m_payload->a_registered_modules
    if (!activesession_get_current_v1_response_m_payload->a_registered_modules) {
        goto fail;
    }
    
    cJSON *a_registered_modules = cJSON_AddArrayToObject(item, "a_RegisteredModules");
    if(a_registered_modules == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_registered_modulesListEntry;
    list_ForEach(a_registered_modulesListEntry, activesession_get_current_v1_response_m_payload->a_registered_modules) {
    if(cJSON_AddStringToObject(a_registered_modules, "", (char*)a_registered_modulesListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // activesession_get_current_v1_response_m_payload->a_permissions
    if (!activesession_get_current_v1_response_m_payload->a_permissions) {
        goto fail;
    }
    
    cJSON *a_permissions = cJSON_AddArrayToObject(item, "a_Permissions");
    if(a_permissions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_permissionsListEntry;
    list_ForEach(a_permissionsListEntry, activesession_get_current_v1_response_m_payload->a_permissions) {
    if(cJSON_AddNumberToObject(a_permissions, "", *(double *)a_permissionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // activesession_get_current_v1_response_m_payload->fki_user_id
    if (!activesession_get_current_v1_response_m_payload->fki_user_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiUserID", activesession_get_current_v1_response_m_payload->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_get_current_v1_response_m_payload->fki_apikey_id
    if (!activesession_get_current_v1_response_m_payload->fki_apikey_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiApikeyID", activesession_get_current_v1_response_m_payload->fki_apikey_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_parseFromJSON(cJSON *activesession_get_current_v1_response_m_payloadJSON){

    activesession_get_current_v1_response_m_payload_t *activesession_get_current_v1_response_m_payload_local_var = NULL;

    // activesession_get_current_v1_response_m_payload->s_customer_code
    cJSON *s_customer_code = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "sCustomerCode");
    if (!s_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_customer_code))
    {
    goto end; //String
    }

    // activesession_get_current_v1_response_m_payload->e_activesession_sessiontype
    cJSON *e_activesession_sessiontype = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "eActivesessionSessiontype");
    if (!e_activesession_sessiontype) {
        goto end;
    }

    ezmax_api_definition_activesession_get_current_v1_response_m_payload_EACTIVESESSIONSESSIONTYPE_e e_activesession_sessiontypeVariable;
    
    if(!cJSON_IsString(e_activesession_sessiontype))
    {
    goto end; //Enum
    }
    e_activesession_sessiontypeVariable = e_activesession_sessiontypeactivesession_get_current_v1_response_m_payload_FromString(e_activesession_sessiontype->valuestring);

    // activesession_get_current_v1_response_m_payload->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // activesession_get_current_v1_response_m_payload->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "sCompanyNameX");
    if (!s_company_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_company_name_x))
    {
    goto end; //String
    }

    // activesession_get_current_v1_response_m_payload->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "sDepartmentNameX");
    if (!s_department_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_department_name_x))
    {
    goto end; //String
    }

    // activesession_get_current_v1_response_m_payload->a_registered_modules
    cJSON *a_registered_modules = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "a_RegisteredModules");
    if (!a_registered_modules) {
        goto end;
    }

    list_t *a_registered_modulesList;
    
    cJSON *a_registered_modules_local;
    if(!cJSON_IsArray(a_registered_modules)) {
        goto end;//primitive container
    }
    a_registered_modulesList = list_createList();

    cJSON_ArrayForEach(a_registered_modules_local, a_registered_modules)
    {
        if(!cJSON_IsString(a_registered_modules_local))
        {
            goto end;
        }
        list_addElement(a_registered_modulesList , strdup(a_registered_modules_local->valuestring));
    }

    // activesession_get_current_v1_response_m_payload->a_permissions
    cJSON *a_permissions = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "a_Permissions");
    if (!a_permissions) {
        goto end;
    }

    list_t *a_permissionsList;
    
    cJSON *a_permissions_local;
    if(!cJSON_IsArray(a_permissions)) {
        goto end;//primitive container
    }
    a_permissionsList = list_createList();

    cJSON_ArrayForEach(a_permissions_local, a_permissions)
    {
        if(!cJSON_IsNumber(a_permissions_local))
        {
            goto end;
        }
        double *a_permissions_local_value = (double *)calloc(1, sizeof(double));
        if(!a_permissions_local_value)
        {
            goto end;
        }
        *a_permissions_local_value = a_permissions_local->valuedouble;
        list_addElement(a_permissionsList , a_permissions_local_value);
    }

    // activesession_get_current_v1_response_m_payload->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // activesession_get_current_v1_response_m_payload->fki_apikey_id
    cJSON *fki_apikey_id = cJSON_GetObjectItemCaseSensitive(activesession_get_current_v1_response_m_payloadJSON, "fkiApikeyID");
    if (!fki_apikey_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_apikey_id))
    {
    goto end; //Numeric
    }


    activesession_get_current_v1_response_m_payload_local_var = activesession_get_current_v1_response_m_payload_create (
        strdup(s_customer_code->valuestring),
        e_activesession_sessiontypeVariable,
        fki_language_id->valuedouble,
        strdup(s_company_name_x->valuestring),
        strdup(s_department_name_x->valuestring),
        a_registered_modulesList,
        a_permissionsList,
        fki_user_id->valuedouble,
        fki_apikey_id->valuedouble
        );

    return activesession_get_current_v1_response_m_payload_local_var;
end:
    return NULL;

}
