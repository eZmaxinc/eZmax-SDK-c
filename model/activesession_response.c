#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "activesession_response.h"


char* e_activesession_usertypeactivesession_response_ToString(ezmax_api_definition__full_activesession_response__e e_activesession_usertype) {
    char* e_activesession_usertypeArray[] =  { "NULL", "AgentBroker", "Assistant", "EzsignSigner", "EzsignUser", "Normal" };
    return e_activesession_usertypeArray[e_activesession_usertype];
}

ezmax_api_definition__full_activesession_response__e e_activesession_usertypeactivesession_response_FromString(char* e_activesession_usertype){
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
char* e_activesession_originactivesession_response_ToString(ezmax_api_definition__full_activesession_response__e e_activesession_origin) {
    char* e_activesession_originArray[] =  { "NULL", "BuiltIn", "External" };
    return e_activesession_originArray[e_activesession_origin];
}

ezmax_api_definition__full_activesession_response__e e_activesession_originactivesession_response_FromString(char* e_activesession_origin){
    int stringToReturn = 0;
    char *e_activesession_originArray[] =  { "NULL", "BuiltIn", "External" };
    size_t sizeofArray = sizeof(e_activesession_originArray) / sizeof(e_activesession_originArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_activesession_origin, e_activesession_originArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* e_activesession_weekdaystartactivesession_response_ToString(ezmax_api_definition__full_activesession_response__e e_activesession_weekdaystart) {
    char* e_activesession_weekdaystartArray[] =  { "NULL", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    return e_activesession_weekdaystartArray[e_activesession_weekdaystart];
}

ezmax_api_definition__full_activesession_response__e e_activesession_weekdaystartactivesession_response_FromString(char* e_activesession_weekdaystart){
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
    field_e_activesession_usertype_t *e_activesession_usertype,
    field_e_activesession_origin_t *e_activesession_origin,
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart,
    int fki_language_id,
    char *s_company_name_x,
    char *s_department_name_x,
    int b_activesession_debug,
    int b_activesession_issuperadmin,
    char *pks_customer_code,
    int fki_systemconfigurationtype_id,
    int fki_signature_id
    ) {
    activesession_response_t *activesession_response_local_var = malloc(sizeof(activesession_response_t));
    if (!activesession_response_local_var) {
        return NULL;
    }
    activesession_response_local_var->e_activesession_usertype = e_activesession_usertype;
    activesession_response_local_var->e_activesession_origin = e_activesession_origin;
    activesession_response_local_var->e_activesession_weekdaystart = e_activesession_weekdaystart;
    activesession_response_local_var->fki_language_id = fki_language_id;
    activesession_response_local_var->s_company_name_x = s_company_name_x;
    activesession_response_local_var->s_department_name_x = s_department_name_x;
    activesession_response_local_var->b_activesession_debug = b_activesession_debug;
    activesession_response_local_var->b_activesession_issuperadmin = b_activesession_issuperadmin;
    activesession_response_local_var->pks_customer_code = pks_customer_code;
    activesession_response_local_var->fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    activesession_response_local_var->fki_signature_id = fki_signature_id;

    return activesession_response_local_var;
}


void activesession_response_free(activesession_response_t *activesession_response) {
    if(NULL == activesession_response){
        return ;
    }
    listEntry_t *listEntry;
    if (activesession_response->e_activesession_usertype) {
        field_e_activesession_usertype_free(activesession_response->e_activesession_usertype);
        activesession_response->e_activesession_usertype = NULL;
    }
    if (activesession_response->e_activesession_origin) {
        field_e_activesession_origin_free(activesession_response->e_activesession_origin);
        activesession_response->e_activesession_origin = NULL;
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

    // activesession_response->e_activesession_usertype
    if (ezmax_api_definition__full_activesession_response__NULL == activesession_response->e_activesession_usertype) {
        goto fail;
    }
    cJSON *e_activesession_usertype_local_JSON = field_e_activesession_usertype_convertToJSON(activesession_response->e_activesession_usertype);
    if(e_activesession_usertype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionUsertype", e_activesession_usertype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_response->e_activesession_origin
    if (ezmax_api_definition__full_activesession_response__NULL == activesession_response->e_activesession_origin) {
        goto fail;
    }
    cJSON *e_activesession_origin_local_JSON = field_e_activesession_origin_convertToJSON(activesession_response->e_activesession_origin);
    if(e_activesession_origin_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eActivesessionOrigin", e_activesession_origin_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // activesession_response->e_activesession_weekdaystart
    if (ezmax_api_definition__full_activesession_response__NULL == activesession_response->e_activesession_weekdaystart) {
        goto fail;
    }
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


    // activesession_response->b_activesession_issuperadmin
    if (!activesession_response->b_activesession_issuperadmin) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bActivesessionIssuperadmin", activesession_response->b_activesession_issuperadmin) == NULL) {
    goto fail; //Bool
    }


    // activesession_response->pks_customer_code
    if (!activesession_response->pks_customer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "pksCustomerCode", activesession_response->pks_customer_code) == NULL) {
    goto fail; //String
    }


    // activesession_response->fki_systemconfigurationtype_id
    if (!activesession_response->fki_systemconfigurationtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiSystemconfigurationtypeID", activesession_response->fki_systemconfigurationtype_id) == NULL) {
    goto fail; //Numeric
    }


    // activesession_response->fki_signature_id
    if(activesession_response->fki_signature_id) {
    if(cJSON_AddNumberToObject(item, "fkiSignatureID", activesession_response->fki_signature_id) == NULL) {
    goto fail; //Numeric
    }
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

    // define the local variable for activesession_response->e_activesession_usertype
    field_e_activesession_usertype_t *e_activesession_usertype_local_nonprim = NULL;

    // define the local variable for activesession_response->e_activesession_origin
    field_e_activesession_origin_t *e_activesession_origin_local_nonprim = NULL;

    // define the local variable for activesession_response->e_activesession_weekdaystart
    field_e_activesession_weekdaystart_t *e_activesession_weekdaystart_local_nonprim = NULL;

    // activesession_response->e_activesession_usertype
    cJSON *e_activesession_usertype = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "eActivesessionUsertype");
    if (!e_activesession_usertype) {
        goto end;
    }

    
    e_activesession_usertype_local_nonprim = field_e_activesession_usertype_parseFromJSON(e_activesession_usertype); //custom

    // activesession_response->e_activesession_origin
    cJSON *e_activesession_origin = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "eActivesessionOrigin");
    if (!e_activesession_origin) {
        goto end;
    }

    
    e_activesession_origin_local_nonprim = field_e_activesession_origin_parseFromJSON(e_activesession_origin); //custom

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

    // activesession_response->b_activesession_issuperadmin
    cJSON *b_activesession_issuperadmin = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "bActivesessionIssuperadmin");
    if (!b_activesession_issuperadmin) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_activesession_issuperadmin))
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

    // activesession_response->fki_systemconfigurationtype_id
    cJSON *fki_systemconfigurationtype_id = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "fkiSystemconfigurationtypeID");
    if (!fki_systemconfigurationtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_systemconfigurationtype_id))
    {
    goto end; //Numeric
    }

    // activesession_response->fki_signature_id
    cJSON *fki_signature_id = cJSON_GetObjectItemCaseSensitive(activesession_responseJSON, "fkiSignatureID");
    if (fki_signature_id) { 
    if(!cJSON_IsNumber(fki_signature_id))
    {
    goto end; //Numeric
    }
    }


    activesession_response_local_var = activesession_response_create (
        e_activesession_usertype_local_nonprim,
        e_activesession_origin_local_nonprim,
        e_activesession_weekdaystart_local_nonprim,
        fki_language_id->valuedouble,
        strdup(s_company_name_x->valuestring),
        strdup(s_department_name_x->valuestring),
        b_activesession_debug->valueint,
        b_activesession_issuperadmin->valueint,
        strdup(pks_customer_code->valuestring),
        fki_systemconfigurationtype_id->valuedouble,
        fki_signature_id ? fki_signature_id->valuedouble : 0
        );

    return activesession_response_local_var;
end:
    if (e_activesession_usertype_local_nonprim) {
        field_e_activesession_usertype_free(e_activesession_usertype_local_nonprim);
        e_activesession_usertype_local_nonprim = NULL;
    }
    if (e_activesession_origin_local_nonprim) {
        field_e_activesession_origin_free(e_activesession_origin_local_nonprim);
        e_activesession_origin_local_nonprim = NULL;
    }
    if (e_activesession_weekdaystart_local_nonprim) {
        field_e_activesession_weekdaystart_free(e_activesession_weekdaystart_local_nonprim);
        e_activesession_weekdaystart_local_nonprim = NULL;
    }
    return NULL;

}
