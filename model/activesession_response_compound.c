#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response_compound.h"


char* e_activesession_usertypeactivesession_response_compound_ToString(ezmax_api_definition__full_activesession_response_compound__e e_activesession_usertype) {
    char* e_activesession_usertypeArray[] =  { "NULL", "AgentBroker", "Assistant", "EzsignSigner", "EzsignUser", "Normal" };
	return e_activesession_usertypeArray[e_activesession_usertype];
}

ezmax_api_definition__full_activesession_response_compound__e e_activesession_usertypeactivesession_response_compound_FromString(char* e_activesession_usertype){
    int stringToReturn = 0;
    char *e_activesession_usertypeArray[] =  { "NULL", "AgentBroker", "Assistant", "EzsignSigner", "EzsignUser", "Normal" };
    size_t sizeofArray = sizeof(e_activesession_usertypeArray) / sizeof(e_activesession_usertypeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_activesession_usertype, e_activesession_usertypeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_activesession_weekdaystartactivesession_response_compound_ToString(ezmax_api_definition__full_activesession_response_compound__e e_activesession_weekdaystart) {
    char* e_activesession_weekdaystartArray[] =  { "NULL", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	return e_activesession_weekdaystartArray[e_activesession_weekdaystart];
}

ezmax_api_definition__full_activesession_response_compound__e e_activesession_weekdaystartactivesession_response_compound_FromString(char* e_activesession_weekdaystart){
    int stringToReturn = 0;
    char *e_activesession_weekdaystartArray[] =  { "NULL", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    size_t sizeofArray = sizeof(e_activesession_weekdaystartArray) / sizeof(e_activesession_weekdaystartArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_activesession_weekdaystart, e_activesession_weekdaystartArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

activesession_response_compound_t *activesession_response_compound_create(
    field_e_activesession_usertype_t *e_activesession_usertype,
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    int b_activesession_issuperadmin,
    char *pks_customer_code,
    int fki_systemconfigurationtype_id,
    list_t *a_pki_permission_id,
    activesession_response_compound_user_t *obj_user_real,
    activesession_response_compound_user_t *obj_user_cloned,
    activesession_response_compound_apikey_t *obj_apikey,
    list_t *a_e_module_internalname
    ) {
    activesession_response_compound_t *activesession_response_compound_local_var = malloc(sizeof(activesession_response_compound_t));
    if (!activesession_response_compound_local_var) {
        return NULL;
    }
    activesession_response_compound_local_var->e_activesession_usertype = e_activesession_usertype;
    activesession_response_compound_local_var->e_activesession_weekdaystart = e_activesession_weekdaystart;
    activesession_response_compound_local_var->fki_language_id = fki_language_id;
    activesession_response_compound_local_var->s_company_name_x = s_company_name_x;
    activesession_response_compound_local_var->s_department_name_x = s_department_name_x;
    activesession_response_compound_local_var->b_activesession_debug = b_activesession_debug;
    activesession_response_compound_local_var->b_activesession_issuperadmin = b_activesession_issuperadmin;
    activesession_response_compound_local_var->pks_customer_code = pks_customer_code;
    activesession_response_compound_local_var->fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    activesession_response_compound_local_var->a_pki_permission_id = a_pki_permission_id;
    activesession_response_compound_local_var->obj_user_real = obj_user_real;
    activesession_response_compound_local_var->obj_user_cloned = obj_user_cloned;
    activesession_response_compound_local_var->obj_apikey = obj_apikey;
    activesession_response_compound_local_var->a_e_module_internalname = a_e_module_internalname;

    return activesession_response_compound_local_var;
}


void activesession_response_compound_free(activesession_response_compound_t *activesession_response_compound) {
    if(NULL == activesession_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_response_compound->e_activesession_usertype) {
        field_e_activesession_usertype_free(activesession_response_compound->e_activesession_usertype);
        activesession_response_compound->e_activesession_usertype = NULL;
    }
    if (activesession_response_compound->e_activesession_weekdaystart) {
        field_e_activesession_weekdaystart_free(activesession_response_compound->e_activesession_weekdaystart);
        activesession_response_compound->e_activesession_weekdaystart = NULL;
    }
    if (activesession_response_compound->s_company_name_x) {
        free(activesession_response_compound->s_company_name_x);
        activesession_response_compound->s_company_name_x = NULL;
    }
    if (activesession_response_compound->s_department_name_x) {
        free(activesession_response_compound->s_department_name_x);
        activesession_response_compound->s_department_name_x = NULL;
    }
    if (activesession_response_compound->pks_customer_code) {
        free(activesession_response_compound->pks_customer_code);
        activesession_response_compound->pks_customer_code = NULL;
    }
    if (activesession_response_compound->a_pki_permission_id) {
        list_ForEach(listEntry, activesession_response_compound->a_pki_permission_id) {
            free(listEntry->data);
        }
        list_freeList(activesession_response_compound->a_pki_permission_id);
        activesession_response_compound->a_pki_permission_id = NULL;
    }
    if (activesession_response_compound->obj_user_real) {
        activesession_response_compound_user_free(activesession_response_compound->obj_user_real);
        activesession_response_compound->obj_user_real = NULL;
    }
    if (activesession_response_compound->obj_user_cloned) {
        activesession_response_compound_user_free(activesession_response_compound->obj_user_cloned);
        activesession_response_compound->obj_user_cloned = NULL;
    }
    if (activesession_response_compound->obj_apikey) {
        activesession_response_compound_apikey_free(activesession_response_compound->obj_apikey);
        activesession_response_compound->obj_apikey = NULL;
    }
    if (activesession_response_compound->a_e_module_internalname) {
        list_ForEach(listEntry, activesession_response_compound->a_e_module_internalname) {
            free(listEntry->data);
        }
        list_freeList(activesession_response_compound->a_e_module_internalname);
        activesession_response_compound->a_e_module_internalname = NULL;
    }
    free(activesession_response_compound);
}

cJSON *activesession_response_compound_convertToJSON(activesession_response_compound_t *activesession_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // activesession_response_compound->e_activesession_usertype
    if (ezmax_api_definition__full_activesession_response_compound__NULL == activesession_response_compound->e_activesession_usertype) {
        goto fail;
    }
    cJSON *e_activesession_usertype_local_JSON = field_e_activesession_usertype_convertToJSON(activesession_response_compound->e_activesession_usertype);
    if(e_activesession_usertype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionUsertype", e_activesession_usertype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_response_compound->e_activesession_weekdaystart
    if (ezmax_api_definition__full_activesession_response_compound__NULL == activesession_response_compound->e_activesession_weekdaystart) {
        goto fail;
    }
    cJSON *e_activesession_weekdaystart_local_JSON = field_e_activesession_weekdaystart_convertToJSON(activesession_response_compound->e_activesession_weekdaystart);
    if(e_activesession_weekdaystart_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionWeekdaystart", e_activesession_weekdaystart_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_response_compound->fki_language_id
    if (!activesession_response_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", activesession_response_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_response_compound->s_company_name_x
    if (!activesession_response_compound->s_company_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCompanyNameX", activesession_response_compound->s_company_name_x) == NULL) {
    goto fail; //String
    }


    // activesession_response_compound->s_department_name_x
    if (!activesession_response_compound->s_department_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", activesession_response_compound->s_department_name_x) == NULL) {
    goto fail; //String
    }


    // activesession_response_compound->b_activesession_debug
    if (!activesession_response_compound->b_activesession_debug) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bActivesessionDebug", activesession_response_compound->b_activesession_debug) == NULL) {
    goto fail; //Bool
    }


    // activesession_response_compound->b_activesession_issuperadmin
    if (!activesession_response_compound->b_activesession_issuperadmin) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bActivesessionIssuperadmin", activesession_response_compound->b_activesession_issuperadmin) == NULL) {
    goto fail; //Bool
    }


    // activesession_response_compound->pks_customer_code
    if (!activesession_response_compound->pks_customer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pksCustomerCode", activesession_response_compound->pks_customer_code) == NULL) {
    goto fail; //String
    }


    // activesession_response_compound->fki_systemconfigurationtype_id
    if(activesession_response_compound->fki_systemconfigurationtype_id) {
    if(cJSON_AddNumberToObject(item, "fkiSystemconfigurationtypeID", activesession_response_compound->fki_systemconfigurationtype_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // activesession_response_compound->a_pki_permission_id
    if (!activesession_response_compound->a_pki_permission_id) {
        goto fail;
    }
    cJSON *a_pki_permission_id = cJSON_AddArrayToObject(item, "a_pkiPermissionID");
    if(a_pki_permission_id == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_pki_permission_idListEntry;
    list_ForEach(a_pki_permission_idListEntry, activesession_response_compound->a_pki_permission_id) {
    if(cJSON_AddNumberToObject(a_pki_permission_id, "", *(double *)a_pki_permission_idListEntry->data) == NULL)
    {
        goto fail;
    }
    }


    // activesession_response_compound->obj_user_real
    if (!activesession_response_compound->obj_user_real) {
        goto fail;
    }
    cJSON *obj_user_real_local_JSON = activesession_response_compound_user_convertToJSON(activesession_response_compound->obj_user_real);
    if(obj_user_real_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUserReal", obj_user_real_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // activesession_response_compound->obj_user_cloned
    if(activesession_response_compound->obj_user_cloned) {
    cJSON *obj_user_cloned_local_JSON = activesession_response_compound_user_convertToJSON(activesession_response_compound->obj_user_cloned);
    if(obj_user_cloned_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUserCloned", obj_user_cloned_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // activesession_response_compound->obj_apikey
    if(activesession_response_compound->obj_apikey) {
    cJSON *obj_apikey_local_JSON = activesession_response_compound_apikey_convertToJSON(activesession_response_compound->obj_apikey);
    if(obj_apikey_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objApikey", obj_apikey_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // activesession_response_compound->a_e_module_internalname
    if (!activesession_response_compound->a_e_module_internalname) {
        goto fail;
    }
    cJSON *a_e_module_internalname = cJSON_AddArrayToObject(item, "a_eModuleInternalname");
    if(a_e_module_internalname == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *a_e_module_internalnameListEntry;
    list_ForEach(a_e_module_internalnameListEntry, activesession_response_compound->a_e_module_internalname) {
    if(cJSON_AddStringToObject(a_e_module_internalname, "", (char*)a_e_module_internalnameListEntry->data) == NULL)
    {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activesession_response_compound_t *activesession_response_compound_parseFromJSON(cJSON *activesession_response_compoundJSON){

    activesession_response_compound_t *activesession_response_compound_local_var = NULL;

    // define the local variable for activesession_response_compound->e_activesession_usertype
    field_e_activesession_usertype_t *e_activesession_usertype_local_nonprim = NULL;

    // define the local variable for activesession_response_compound->e_activesession_weekdaystart
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart_local_nonprim = NULL;

    // define the local list for activesession_response_compound->a_pki_permission_id
    list_t *a_pki_permission_idList = NULL;

    // define the local variable for activesession_response_compound->obj_user_real
    activesession_response_compound_user_t *obj_user_real_local_nonprim = NULL;

    // define the local variable for activesession_response_compound->obj_user_cloned
    activesession_response_compound_user_t *obj_user_cloned_local_nonprim = NULL;

    // define the local variable for activesession_response_compound->obj_apikey
    activesession_response_compound_apikey_t *obj_apikey_local_nonprim = NULL;

    // define the local list for activesession_response_compound->a_e_module_internalname
    list_t *a_e_module_internalnameList = NULL;

    // activesession_response_compound->e_activesession_usertype
    cJSON *e_activesession_usertype = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "eActivesessionUsertype");
    if (!e_activesession_usertype) {
        goto end;
    }

    
    e_activesession_usertype_local_nonprim = field_e_activesession_usertype_parseFromJSON(e_activesession_usertype); //custom

    // activesession_response_compound->e_activesession_weekdaystart
    cJSON *e_activesession_weekdaystart = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "eActivesessionWeekdaystart");
    if (!e_activesession_weekdaystart) {
        goto end;
    }

    
    e_activesession_weekdaystart_local_nonprim = field_e_activesession_weekdaystart_parseFromJSON(e_activesession_weekdaystart); //custom

    // activesession_response_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // activesession_response_compound->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "sCompanyNameX");
    if (!s_company_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_company_name_x))
    {
    goto end; //String
    }

    // activesession_response_compound->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "sDepartmentNameX");
    if (!s_department_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_department_name_x))
    {
    goto end; //String
    }

    // activesession_response_compound->b_activesession_debug
    cJSON *b_activesession_debug = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "bActivesessionDebug");
    if (!b_activesession_debug) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_activesession_debug))
    {
    goto end; //Bool
    }

    // activesession_response_compound->b_activesession_issuperadmin
    cJSON *b_activesession_issuperadmin = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "bActivesessionIssuperadmin");
    if (!b_activesession_issuperadmin) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_activesession_issuperadmin))
    {
    goto end; //Bool
    }

    // activesession_response_compound->pks_customer_code
    cJSON *pks_customer_code = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "pksCustomerCode");
    if (!pks_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_customer_code))
    {
    goto end; //String
    }

    // activesession_response_compound->fki_systemconfigurationtype_id
    cJSON *fki_systemconfigurationtype_id = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "fkiSystemconfigurationtypeID");
    if (fki_systemconfigurationtype_id) { 
    if(!cJSON_IsNumber(fki_systemconfigurationtype_id))
    {
    goto end; //Numeric
    }
    }

    // activesession_response_compound->a_pki_permission_id
    cJSON *a_pki_permission_id = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "a_pkiPermissionID");
    if (!a_pki_permission_id) {
        goto end;
    }

    
    cJSON *a_pki_permission_id_local = NULL;
    if(!cJSON_IsArray(a_pki_permission_id)) {
        goto end;//primitive container
    }
    a_pki_permission_idList = list_createList();

    cJSON_ArrayForEach(a_pki_permission_id_local, a_pki_permission_id)
    {
        if(!cJSON_IsNumber(a_pki_permission_id_local))
        {
            goto end;
        }
        double *a_pki_permission_id_local_value = (double *)calloc(1, sizeof(double));
        if(!a_pki_permission_id_local_value)
        {
            goto end;
        }
        *a_pki_permission_id_local_value = a_pki_permission_id_local->valuedouble;
        list_addElement(a_pki_permission_idList , a_pki_permission_id_local_value);
    }

    // activesession_response_compound->obj_user_real
    cJSON *obj_user_real = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "objUserReal");
    if (!obj_user_real) {
        goto end;
    }

    
    obj_user_real_local_nonprim = activesession_response_compound_user_parseFromJSON(obj_user_real); //nonprimitive

    // activesession_response_compound->obj_user_cloned
    cJSON *obj_user_cloned = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "objUserCloned");
    if (obj_user_cloned) { 
    obj_user_cloned_local_nonprim = activesession_response_compound_user_parseFromJSON(obj_user_cloned); //nonprimitive
    }

    // activesession_response_compound->obj_apikey
    cJSON *obj_apikey = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "objApikey");
    if (obj_apikey) { 
    obj_apikey_local_nonprim = activesession_response_compound_apikey_parseFromJSON(obj_apikey); //nonprimitive
    }

    // activesession_response_compound->a_e_module_internalname
    cJSON *a_e_module_internalname = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "a_eModuleInternalname");
    if (!a_e_module_internalname) {
        goto end;
    }

    
    cJSON *a_e_module_internalname_local = NULL;
    if(!cJSON_IsArray(a_e_module_internalname)) {
        goto end;//primitive container
    }
    a_e_module_internalnameList = list_createList();

    cJSON_ArrayForEach(a_e_module_internalname_local, a_e_module_internalname)
    {
        if(!cJSON_IsString(a_e_module_internalname_local))
        {
            goto end;
        }
        list_addElement(a_e_module_internalnameList , strdup(a_e_module_internalname_local->valuestring));
    }


    activesession_response_compound_local_var = activesession_response_compound_create (
        e_activesession_usertype_local_nonprim,
        e_activesession_weekdaystart_local_nonprim,
        fki_language_id->valuedouble,
        strdup(s_company_name_x->valuestring),
        strdup(s_department_name_x->valuestring),
        b_activesession_debug->valueint,
        b_activesession_issuperadmin->valueint,
        strdup(pks_customer_code->valuestring),
        fki_systemconfigurationtype_id ? fki_systemconfigurationtype_id->valuedouble : 0,
        a_pki_permission_idList,
        obj_user_real_local_nonprim,
        obj_user_cloned ? obj_user_cloned_local_nonprim : NULL,
        obj_apikey ? obj_apikey_local_nonprim : NULL,
        a_e_module_internalnameList
        );

    return activesession_response_compound_local_var;
end:
    if (e_activesession_usertype_local_nonprim) {
        field_e_activesession_usertype_free(e_activesession_usertype_local_nonprim);
        e_activesession_usertype_local_nonprim = NULL;
    }
    if (e_activesession_weekdaystart_local_nonprim) {
        field_e_activesession_weekdaystart_free(e_activesession_weekdaystart_local_nonprim);
        e_activesession_weekdaystart_local_nonprim = NULL;
    }
    if (a_pki_permission_idList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_pki_permission_idList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_pki_permission_idList);
        a_pki_permission_idList = NULL;
    }
    if (obj_user_real_local_nonprim) {
        activesession_response_compound_user_free(obj_user_real_local_nonprim);
        obj_user_real_local_nonprim = NULL;
    }
    if (obj_user_cloned_local_nonprim) {
        activesession_response_compound_user_free(obj_user_cloned_local_nonprim);
        obj_user_cloned_local_nonprim = NULL;
    }
    if (obj_apikey_local_nonprim) {
        activesession_response_compound_apikey_free(obj_apikey_local_nonprim);
        obj_apikey_local_nonprim = NULL;
    }
    if (a_e_module_internalnameList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_e_module_internalnameList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_e_module_internalnameList);
        a_e_module_internalnameList = NULL;
    }
    return NULL;

}
