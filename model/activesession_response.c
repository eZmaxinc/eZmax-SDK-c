#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response.h"


char* e_activesession_sessiontypeactivesession_response_ToString(ezmax_api_definition_activesession_response__e e_activesession_sessiontype) {
    char* e_activesession_sessiontypeArray[] =  { "NULL", "Normal" };
	return e_activesession_sessiontypeArray[e_activesession_sessiontype];
}

ezmax_api_definition_activesession_response__e e_activesession_sessiontypeactivesession_response_FromString(char* e_activesession_sessiontype){
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
char* e_activesession_weekdaystartactivesession_response_ToString(ezmax_api_definition_activesession_response__e e_activesession_weekdaystart) {
    char* e_activesession_weekdaystartArray[] =  { "NULL", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	return e_activesession_weekdaystartArray[e_activesession_weekdaystart];
}

ezmax_api_definition_activesession_response__e e_activesession_weekdaystartactivesession_response_FromString(char* e_activesession_weekdaystart){
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

activesession_response_t *activesession_response_create(
    field_e_activesession_sessiontype_t *e_activesession_sessiontype,
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    char *pks_customer_code
    ) {
    activesession_response_t *activesession_response_local_var = malloc(sizeof(activesession_response_t));
    if (!activesession_response_local_var) {
        return NULL;
    }
    activesession_response_local_var->e_activesession_sessiontype = e_activesession_sessiontype;
    activesession_response_local_var->e_activesession_weekdaystart = e_activesession_weekdaystart;
    activesession_response_local_var->fki_language_id = fki_language_id;
    activesession_response_local_var->s_company_name_x = s_company_name_x;
    activesession_response_local_var->s_department_name_x = s_department_name_x;
    activesession_response_local_var->b_activesession_debug = b_activesession_debug;
    activesession_response_local_var->pks_customer_code = pks_customer_code;

    return activesession_response_local_var;
}


void activesession_response_free(activesession_response_t *activesession_response) {
    if(NULL == activesession_response){
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_response->e_activesession_sessiontype) {
        field_e_activesession_sessiontype_free(activesession_response->e_activesession_sessiontype);
        activesession_response->e_activesession_sessiontype = NULL;
    }
    if (activesession_response->e_activesession_weekdaystart) {
        field_e_activesession_weekdaystart_free(activesession_response->e_activesession_weekdaystart);
        activesession_response->e_activesession_weekdaystart = NULL;
    }
    if (activesession_response->s_company_name_x) {
        free(activesession_response->s_company_name_x);
        activesession_response->s_company_name_x = NULL;
    }
    if (activesession_response->s_department_name_x) {
        free(activesession_response->s_department_name_x);
        activesession_response->s_department_name_x = NULL;
    }
    if (activesession_response->pks_customer_code) {
        free(activesession_response->pks_customer_code);
        activesession_response->pks_customer_code = NULL;
    }
    free(activesession_response);
}

cJSON *activesession_response_convertToJSON(activesession_response_t *activesession_response) {
    cJSON *item = cJSON_CreateObject();

    // activesession_response->e_activesession_sessiontype
    
    cJSON *e_activesession_sessiontype_local_JSON = field_e_activesession_sessiontype_convertToJSON(activesession_response->e_activesession_sessiontype);
    if(e_activesession_sessiontype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionSessiontype", e_activesession_sessiontype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_response->e_activesession_weekdaystart
    
    cJSON *e_activesession_weekdaystart_local_JSON = field_e_activesession_weekdaystart_convertToJSON(activesession_response->e_activesession_weekdaystart);
    if(e_activesession_weekdaystart_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionWeekdaystart", e_activesession_weekdaystart_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_response->fki_language_id
    if (!activesession_response->fki_language_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", activesession_response->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_response->s_company_name_x
    if (!activesession_response->s_company_name_x) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sCompanyNameX", activesession_response->s_company_name_x) == NULL) {
    goto fail; //String
    }


    // activesession_response->s_department_name_x
    if (!activesession_response->s_department_name_x) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", activesession_response->s_department_name_x) == NULL) {
    goto fail; //String
    }


    // activesession_response->b_activesession_debug
    if (!activesession_response->b_activesession_debug) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "bActivesessionDebug", activesession_response->b_activesession_debug) == NULL) {
    goto fail; //Bool
    }


    // activesession_response->pks_customer_code
    if (!activesession_response->pks_customer_code) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "pksCustomerCode", activesession_response->pks_customer_code) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

activesession_response_t *activesession_response_parseFromJSON(cJSON *activesession_responseJSON){

    activesession_response_t *activesession_response_local_var = NULL;

    // define the local variable for activesession_response->e_activesession_sessiontype
    field_e_activesession_sessiontype_t *e_activesession_sessiontype_local_nonprim = NULL;

    // define the local variable for activesession_response->e_activesession_weekdaystart
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart_local_nonprim = NULL;

    // activesession_response->e_activesession_sessiontype
    cJSON *e_activesession_sessiontype = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "eActivesessionSessiontype");
    if (!e_activesession_sessiontype) {
        goto end;
    }

    
    e_activesession_sessiontype_local_nonprim = field_e_activesession_sessiontype_parseFromJSON(e_activesession_sessiontype); //custom

    // activesession_response->e_activesession_weekdaystart
    cJSON *e_activesession_weekdaystart = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "eActivesessionWeekdaystart");
    if (!e_activesession_weekdaystart) {
        goto end;
    }

    
    e_activesession_weekdaystart_local_nonprim = field_e_activesession_weekdaystart_parseFromJSON(e_activesession_weekdaystart); //custom

    // activesession_response->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "fkiLanguageID");
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }

    // activesession_response->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "sCompanyNameX");
    if (!s_company_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_company_name_x))
    {
    goto end; //String
    }

    // activesession_response->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "sDepartmentNameX");
    if (!s_department_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_department_name_x))
    {
    goto end; //String
    }

    // activesession_response->b_activesession_debug
    cJSON *b_activesession_debug = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "bActivesessionDebug");
    if (!b_activesession_debug) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_activesession_debug))
    {
    goto end; //Bool
    }

    // activesession_response->pks_customer_code
    cJSON *pks_customer_code = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "pksCustomerCode");
    if (!pks_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(pks_customer_code))
    {
    goto end; //String
    }


    activesession_response_local_var = activesession_response_create (
        e_activesession_sessiontype_local_nonprim,
        e_activesession_weekdaystart_local_nonprim,
        fki_language_id->valuedouble,
        strdup(s_company_name_x->valuestring),
        strdup(s_department_name_x->valuestring),
        b_activesession_debug->valueint,
        strdup(pks_customer_code->valuestring)
        );

    return activesession_response_local_var;
end:
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
