#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response_compound.h"


char* e_activesession_sessiontypeactivesession_response_compound_ToString(ezmax_api_definition_activesession_response_compound__e e_activesession_sessiontype) {
    char* e_activesession_sessiontypeArray[] =  { "NULL", "Normal" };
	return e_activesession_sessiontypeArray[e_activesession_sessiontype];
}

ezmax_api_definition_activesession_response_compound__e e_activesession_sessiontypeactivesession_response_compound_FromString(char* e_activesession_sessiontype){
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
char* e_activesession_weekdaystartactivesession_response_compound_ToString(ezmax_api_definition_activesession_response_compound__e e_activesession_weekdaystart) {
    char* e_activesession_weekdaystartArray[] =  { "NULL", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	return e_activesession_weekdaystartArray[e_activesession_weekdaystart];
}

ezmax_api_definition_activesession_response_compound__e e_activesession_weekdaystartactivesession_response_compound_FromString(char* e_activesession_weekdaystart){
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
    list_t *a_pki_permission_id,
    activesession_response_compound_user_t *obj_user_real,
    activesession_response_compound_user_t *obj_user_cloned,
    activesession_response_compound_apikey_t *obj_apikey,
    list_t *a_e_module_internalname,
    field_e_activesession_sessiontype_t *e_activesession_sessiontype,
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    char *pks_customer_code
    ) {
    activesession_response_compound_t *activesession_response_compound_local_var = malloc(sizeof(activesession_response_compound_t));
    if (!activesession_response_compound_local_var) {
        return NULL;
    }
    activesession_response_compound_local_var->a_pki_permission_id = a_pki_permission_id;
    activesession_response_compound_local_var->obj_user_real = obj_user_real;
    activesession_response_compound_local_var->obj_user_cloned = obj_user_cloned;
    activesession_response_compound_local_var->obj_apikey = obj_apikey;
    activesession_response_compound_local_var->a_e_module_internalname = a_e_module_internalname;
    activesession_response_compound_local_var->e_activesession_sessiontype = e_activesession_sessiontype;
    activesession_response_compound_local_var->e_activesession_weekdaystart = e_activesession_weekdaystart;
    activesession_response_compound_local_var->fki_language_id = fki_language_id;
    activesession_response_compound_local_var->s_company_name_x = s_company_name_x;
    activesession_response_compound_local_var->s_department_name_x = s_department_name_x;
    activesession_response_compound_local_var->b_activesession_debug = b_activesession_debug;
    activesession_response_compound_local_var->pks_customer_code = pks_customer_code;

    return activesession_response_compound_local_var;
}


void activesession_response_compound_free(activesession_response_compound_t *activesession_response_compound) {
    if(NULL == activesession_response_compound){
        return ;
    }
    listEntry_t *listEntry;
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
    if (activesession_response_compound->e_activesession_sessiontype) {
        field_e_activesession_sessiontype_free(activesession_response_compound->e_activesession_sessiontype);
        activesession_response_compound->e_activesession_sessiontype = NULL;
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
    free(activesession_response_compound);
}

cJSON *activesession_response_compound_convertToJSON(activesession_response_compound_t *activesession_response_compound) {
    cJSON *item = cJSON_CreateObject();

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


    // activesession_response_compound->e_activesession_sessiontype
    
    cJSON *e_activesession_sessiontype_local_JSON = field_e_activesession_sessiontype_convertToJSON(activesession_response_compound->e_activesession_sessiontype);
    if(e_activesession_sessiontype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionSessiontype", e_activesession_sessiontype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_response_compound->e_activesession_weekdaystart
    
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


    // activesession_response_compound->pks_customer_code
    if (!activesession_response_compound->pks_customer_code) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "pksCustomerCode", activesession_response_compound->pks_customer_code) == NULL) {
    goto fail; //String
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

    // define the local variable for activesession_response_compound->obj_user_real
    activesession_response_compound_user_t *obj_user_real_local_nonprim = NULL;

    // define the local variable for activesession_response_compound->obj_user_cloned
    activesession_response_compound_user_t *obj_user_cloned_local_nonprim = NULL;

    // define the local variable for activesession_response_compound->obj_apikey
    activesession_response_compound_apikey_t *obj_apikey_local_nonprim = NULL;

    // define the local variable for activesession_response_compound->e_activesession_sessiontype
    field_e_activesession_sessiontype_t *e_activesession_sessiontype_local_nonprim = NULL;

    // define the local variable for activesession_response_compound->e_activesession_weekdaystart
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart_local_nonprim = NULL;

    // activesession_response_compound->a_pki_permission_id
    cJSON *a_pki_permission_id = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "a_pkiPermissionID");
    if (!a_pki_permission_id) {
        goto end;
    }

    list_t *a_pki_permission_idList;
    
    cJSON *a_pki_permission_id_local;
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

    list_t *a_e_module_internalnameList;
    
    cJSON *a_e_module_internalname_local;
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

    // activesession_response_compound->e_activesession_sessiontype
    cJSON *e_activesession_sessiontype = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "eActivesessionSessiontype");
    if (!e_activesession_sessiontype) {
        goto end;
    }

    
    e_activesession_sessiontype_local_nonprim = field_e_activesession_sessiontype_parseFromJSON(e_activesession_sessiontype); //custom

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

    // activesession_response_compound->pks_customer_code
    cJSON *pks_customer_code = cJSON_GetObjectItemCaseSensitive(activesession_response_compoundJSON, "pksCustomerCode");
    if (!pks_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_customer_code))
    {
    goto end; //String
    }


    activesession_response_compound_local_var = activesession_response_compound_create (
        a_pki_permission_idList,
        obj_user_real_local_nonprim,
        obj_user_cloned ? obj_user_cloned_local_nonprim : NULL,
        obj_apikey ? obj_apikey_local_nonprim : NULL,
        a_e_module_internalnameList,
        e_activesession_sessiontype_local_nonprim,
        e_activesession_weekdaystart_local_nonprim,
        fki_language_id->valuedouble,
        strdup(s_company_name_x->valuestring),
        strdup(s_department_name_x->valuestring),
        b_activesession_debug->valueint,
        strdup(pks_customer_code->valuestring)
        );

    return activesession_response_compound_local_var;
end:
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
    if (e_activesession_sessiontype_local_nonprim) {
        field_e_activesession_sessiontype_free(e_activesession_sessiontype_local_nonprim);
        e_activesession_sessiontype_local_nonprim = NULL;
    }
    if (e_activesession_weekdaystart_local_nonprim) {
        field_e_activesession_weekdaystart_free(e_activesession_weekdaystart_local_nonprim);
        e_activesession_weekdaystart_local_nonprim = NULL;
    }
    return NULL;

}
