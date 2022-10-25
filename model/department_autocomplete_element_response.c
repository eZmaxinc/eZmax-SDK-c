#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "department_autocomplete_element_response.h"



department_autocomplete_element_response_t *department_autocomplete_element_response_create(
    char *s_company_name_x,
    char *s_department_name_x,
    int pki_department_id,
    int b_department_isactive
    ) {
    department_autocomplete_element_response_t *department_autocomplete_element_response_local_var = malloc(sizeof(department_autocomplete_element_response_t));
    if (!department_autocomplete_element_response_local_var) {
        return NULL;
    }
    department_autocomplete_element_response_local_var->s_company_name_x = s_company_name_x;
    department_autocomplete_element_response_local_var->s_department_name_x = s_department_name_x;
    department_autocomplete_element_response_local_var->pki_department_id = pki_department_id;
    department_autocomplete_element_response_local_var->b_department_isactive = b_department_isactive;

    return department_autocomplete_element_response_local_var;
}


void department_autocomplete_element_response_free(department_autocomplete_element_response_t *department_autocomplete_element_response) {
    if(NULL == department_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (department_autocomplete_element_response->s_company_name_x) {
        free(department_autocomplete_element_response->s_company_name_x);
        department_autocomplete_element_response->s_company_name_x = NULL;
    }
    if (department_autocomplete_element_response->s_department_name_x) {
        free(department_autocomplete_element_response->s_department_name_x);
        department_autocomplete_element_response->s_department_name_x = NULL;
    }
    free(department_autocomplete_element_response);
}

cJSON *department_autocomplete_element_response_convertToJSON(department_autocomplete_element_response_t *department_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // department_autocomplete_element_response->s_company_name_x
    if (!department_autocomplete_element_response->s_company_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCompanyNameX", department_autocomplete_element_response->s_company_name_x) == NULL) {
    goto fail; //String
    }


    // department_autocomplete_element_response->s_department_name_x
    if (!department_autocomplete_element_response->s_department_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDepartmentNameX", department_autocomplete_element_response->s_department_name_x) == NULL) {
    goto fail; //String
    }


    // department_autocomplete_element_response->pki_department_id
    if (!department_autocomplete_element_response->pki_department_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDepartmentID", department_autocomplete_element_response->pki_department_id) == NULL) {
    goto fail; //Numeric
    }


    // department_autocomplete_element_response->b_department_isactive
    if (!department_autocomplete_element_response->b_department_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDepartmentIsactive", department_autocomplete_element_response->b_department_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

department_autocomplete_element_response_t *department_autocomplete_element_response_parseFromJSON(cJSON *department_autocomplete_element_responseJSON){

    department_autocomplete_element_response_t *department_autocomplete_element_response_local_var = NULL;

    // department_autocomplete_element_response->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(department_autocomplete_element_responseJSON, "sCompanyNameX");
    if (!s_company_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_company_name_x))
    {
    goto end; //String
    }

    // department_autocomplete_element_response->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(department_autocomplete_element_responseJSON, "sDepartmentNameX");
    if (!s_department_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_department_name_x))
    {
    goto end; //String
    }

    // department_autocomplete_element_response->pki_department_id
    cJSON *pki_department_id = cJSON_GetObjectItemCaseSensitive(department_autocomplete_element_responseJSON, "pkiDepartmentID");
    if (!pki_department_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_department_id))
    {
    goto end; //Numeric
    }

    // department_autocomplete_element_response->b_department_isactive
    cJSON *b_department_isactive = cJSON_GetObjectItemCaseSensitive(department_autocomplete_element_responseJSON, "bDepartmentIsactive");
    if (!b_department_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_department_isactive))
    {
    goto end; //Bool
    }


    department_autocomplete_element_response_local_var = department_autocomplete_element_response_create (
        strdup(s_company_name_x->valuestring),
        strdup(s_department_name_x->valuestring),
        pki_department_id->valuedouble,
        b_department_isactive->valueint
        );

    return department_autocomplete_element_response_local_var;
end:
    return NULL;

}
