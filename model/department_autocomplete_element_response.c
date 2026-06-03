#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "department_autocomplete_element_response.h"



static department_autocomplete_element_response_t *department_autocomplete_element_response_create_internal(
    char *s_company_name_x,
    char *s_department_name_x,
    int *pki_department_id,
    int *b_department_isactive
    ) {
    department_autocomplete_element_response_t *department_autocomplete_element_response_local_var = malloc(sizeof(department_autocomplete_element_response_t));
    if (!department_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(department_autocomplete_element_response_local_var, 0, sizeof(department_autocomplete_element_response_t));
    department_autocomplete_element_response_local_var->_library_owned = 1;
    department_autocomplete_element_response_local_var->s_company_name_x = s_company_name_x;
    department_autocomplete_element_response_local_var->s_department_name_x = s_department_name_x;
    department_autocomplete_element_response_local_var->pki_department_id = pki_department_id;
    department_autocomplete_element_response_local_var->b_department_isactive = b_department_isactive;
    return department_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) department_autocomplete_element_response_t *department_autocomplete_element_response_create(
    char *s_company_name_x,
    char *s_department_name_x,
    int *pki_department_id,
    int *b_department_isactive
    ) {
    int *pki_department_id_copy = NULL;
    if (pki_department_id) {
        pki_department_id_copy = malloc(sizeof(int));
        if (pki_department_id_copy) *pki_department_id_copy = *pki_department_id;
    }
    int *b_department_isactive_copy = NULL;
    if (b_department_isactive) {
        b_department_isactive_copy = malloc(sizeof(int));
        if (b_department_isactive_copy) *b_department_isactive_copy = *b_department_isactive;
    }
    department_autocomplete_element_response_t *result = department_autocomplete_element_response_create_internal (
        s_company_name_x,
        s_department_name_x,
        pki_department_id_copy,
        b_department_isactive_copy
        );
    if (!result) {
        free(pki_department_id_copy);
        free(b_department_isactive_copy);
    }
    return result;
}

void department_autocomplete_element_response_free(department_autocomplete_element_response_t *department_autocomplete_element_response) {
    if(NULL == department_autocomplete_element_response){
        return ;
    }
    if(department_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "department_autocomplete_element_response_free");
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
    if (department_autocomplete_element_response->pki_department_id) {
        free(department_autocomplete_element_response->pki_department_id);
        department_autocomplete_element_response->pki_department_id = NULL;
    }
    if (department_autocomplete_element_response->b_department_isactive) {
        free(department_autocomplete_element_response->b_department_isactive);
        department_autocomplete_element_response->b_department_isactive = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiDepartmentID", *department_autocomplete_element_response->pki_department_id) == NULL) {
    goto fail; //Numeric
    }


    // department_autocomplete_element_response->b_department_isactive
    if (!department_autocomplete_element_response->b_department_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDepartmentIsactive", *department_autocomplete_element_response->b_department_isactive) == NULL) {
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

    char *s_company_name_x_local_str = NULL;

    char *s_department_name_x_local_str = NULL;

    // define the local variable for department_autocomplete_element_response->pki_department_id
    int *pki_department_id_local_var = NULL;

    // define the local variable for department_autocomplete_element_response->b_department_isactive
    int *b_department_isactive_local_var = NULL;

    // department_autocomplete_element_response->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(department_autocomplete_element_responseJSON, "sCompanyNameX");
    if (cJSON_IsNull(s_company_name_x)) {
        s_company_name_x = NULL;
    }
    if (!s_company_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_company_name_x))
    {
    goto end; //String
    }

    // department_autocomplete_element_response->s_department_name_x
    cJSON *s_department_name_x = cJSON_GetObjectItemCaseSensitive(department_autocomplete_element_responseJSON, "sDepartmentNameX");
    if (cJSON_IsNull(s_department_name_x)) {
        s_department_name_x = NULL;
    }
    if (!s_department_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_department_name_x))
    {
    goto end; //String
    }

    // department_autocomplete_element_response->pki_department_id
    cJSON *pki_department_id = cJSON_GetObjectItemCaseSensitive(department_autocomplete_element_responseJSON, "pkiDepartmentID");
    if (cJSON_IsNull(pki_department_id)) {
        pki_department_id = NULL;
    }
    if (!pki_department_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_department_id))
    {
    goto end; //Numeric
    }
    pki_department_id_local_var = malloc(sizeof(int));
    if(!pki_department_id_local_var)
    {
        goto end;
    }
    *pki_department_id_local_var = pki_department_id->valuedouble;

    // department_autocomplete_element_response->b_department_isactive
    cJSON *b_department_isactive = cJSON_GetObjectItemCaseSensitive(department_autocomplete_element_responseJSON, "bDepartmentIsactive");
    if (cJSON_IsNull(b_department_isactive)) {
        b_department_isactive = NULL;
    }
    if (!b_department_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_department_isactive))
    {
    goto end; //Bool
    }
    b_department_isactive_local_var = malloc(sizeof(int));
    if(!b_department_isactive_local_var)
    {
        goto end;
    }
    *b_department_isactive_local_var = b_department_isactive->valueint;


    if (s_company_name_x && !cJSON_IsNull(s_company_name_x)) s_company_name_x_local_str = strdup(s_company_name_x->valuestring);
    if (s_department_name_x && !cJSON_IsNull(s_department_name_x)) s_department_name_x_local_str = strdup(s_department_name_x->valuestring);

    department_autocomplete_element_response_local_var = department_autocomplete_element_response_create_internal (
        s_company_name_x_local_str,
        s_department_name_x_local_str,
        pki_department_id_local_var,
        b_department_isactive_local_var
        );

    if (!department_autocomplete_element_response_local_var) {
        goto end;
    }

    return department_autocomplete_element_response_local_var;
end:
    if (s_company_name_x_local_str) {
        free(s_company_name_x_local_str);
        s_company_name_x_local_str = NULL;
    }
    if (s_department_name_x_local_str) {
        free(s_department_name_x_local_str);
        s_department_name_x_local_str = NULL;
    }
    if (pki_department_id_local_var) {
        free(pki_department_id_local_var);
        pki_department_id_local_var = NULL;
    }
    if (b_department_isactive_local_var) {
        free(b_department_isactive_local_var);
        b_department_isactive_local_var = NULL;
    }
    return NULL;

}
