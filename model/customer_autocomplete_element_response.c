#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "customer_autocomplete_element_response.h"



static customer_autocomplete_element_response_t *customer_autocomplete_element_response_create_internal(
    int *pki_customer_id,
    int *fki_department_id,
    char *s_customer_name,
    char *s_customer_code,
    int *b_customer_isactive
    ) {
    customer_autocomplete_element_response_t *customer_autocomplete_element_response_local_var = malloc(sizeof(customer_autocomplete_element_response_t));
    if (!customer_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(customer_autocomplete_element_response_local_var, 0, sizeof(customer_autocomplete_element_response_t));
    customer_autocomplete_element_response_local_var->_library_owned = 1;
    customer_autocomplete_element_response_local_var->pki_customer_id = pki_customer_id;
    customer_autocomplete_element_response_local_var->fki_department_id = fki_department_id;
    customer_autocomplete_element_response_local_var->s_customer_name = s_customer_name;
    customer_autocomplete_element_response_local_var->s_customer_code = s_customer_code;
    customer_autocomplete_element_response_local_var->b_customer_isactive = b_customer_isactive;
    return customer_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) customer_autocomplete_element_response_t *customer_autocomplete_element_response_create(
    int *pki_customer_id,
    int *fki_department_id,
    char *s_customer_name,
    char *s_customer_code,
    int *b_customer_isactive
    ) {
    int *pki_customer_id_copy = NULL;
    if (pki_customer_id) {
        pki_customer_id_copy = malloc(sizeof(int));
        if (pki_customer_id_copy) *pki_customer_id_copy = *pki_customer_id;
    }
    int *fki_department_id_copy = NULL;
    if (fki_department_id) {
        fki_department_id_copy = malloc(sizeof(int));
        if (fki_department_id_copy) *fki_department_id_copy = *fki_department_id;
    }
    int *b_customer_isactive_copy = NULL;
    if (b_customer_isactive) {
        b_customer_isactive_copy = malloc(sizeof(int));
        if (b_customer_isactive_copy) *b_customer_isactive_copy = *b_customer_isactive;
    }
    customer_autocomplete_element_response_t *result = customer_autocomplete_element_response_create_internal (
        pki_customer_id_copy,
        fki_department_id_copy,
        s_customer_name,
        s_customer_code,
        b_customer_isactive_copy
        );
    if (!result) {
        free(pki_customer_id_copy);
        free(fki_department_id_copy);
        free(b_customer_isactive_copy);
    }
    return result;
}

void customer_autocomplete_element_response_free(customer_autocomplete_element_response_t *customer_autocomplete_element_response) {
    if(NULL == customer_autocomplete_element_response){
        return ;
    }
    if(customer_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "customer_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (customer_autocomplete_element_response->pki_customer_id) {
        free(customer_autocomplete_element_response->pki_customer_id);
        customer_autocomplete_element_response->pki_customer_id = NULL;
    }
    if (customer_autocomplete_element_response->fki_department_id) {
        free(customer_autocomplete_element_response->fki_department_id);
        customer_autocomplete_element_response->fki_department_id = NULL;
    }
    if (customer_autocomplete_element_response->s_customer_name) {
        free(customer_autocomplete_element_response->s_customer_name);
        customer_autocomplete_element_response->s_customer_name = NULL;
    }
    if (customer_autocomplete_element_response->s_customer_code) {
        free(customer_autocomplete_element_response->s_customer_code);
        customer_autocomplete_element_response->s_customer_code = NULL;
    }
    if (customer_autocomplete_element_response->b_customer_isactive) {
        free(customer_autocomplete_element_response->b_customer_isactive);
        customer_autocomplete_element_response->b_customer_isactive = NULL;
    }
    free(customer_autocomplete_element_response);
}

cJSON *customer_autocomplete_element_response_convertToJSON(customer_autocomplete_element_response_t *customer_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // customer_autocomplete_element_response->pki_customer_id
    if (!customer_autocomplete_element_response->pki_customer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCustomerID", *customer_autocomplete_element_response->pki_customer_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_autocomplete_element_response->fki_department_id
    if (!customer_autocomplete_element_response->fki_department_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiDepartmentID", *customer_autocomplete_element_response->fki_department_id) == NULL) {
    goto fail; //Numeric
    }


    // customer_autocomplete_element_response->s_customer_name
    if (!customer_autocomplete_element_response->s_customer_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCustomerName", customer_autocomplete_element_response->s_customer_name) == NULL) {
    goto fail; //String
    }


    // customer_autocomplete_element_response->s_customer_code
    if (!customer_autocomplete_element_response->s_customer_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCustomerCode", customer_autocomplete_element_response->s_customer_code) == NULL) {
    goto fail; //String
    }


    // customer_autocomplete_element_response->b_customer_isactive
    if (!customer_autocomplete_element_response->b_customer_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCustomerIsactive", *customer_autocomplete_element_response->b_customer_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

customer_autocomplete_element_response_t *customer_autocomplete_element_response_parseFromJSON(cJSON *customer_autocomplete_element_responseJSON){

    customer_autocomplete_element_response_t *customer_autocomplete_element_response_local_var = NULL;

    // define the local variable for customer_autocomplete_element_response->pki_customer_id
    int *pki_customer_id_local_var = NULL;

    // define the local variable for customer_autocomplete_element_response->fki_department_id
    int *fki_department_id_local_var = NULL;

    char *s_customer_name_local_str = NULL;

    char *s_customer_code_local_str = NULL;

    // define the local variable for customer_autocomplete_element_response->b_customer_isactive
    int *b_customer_isactive_local_var = NULL;

    // customer_autocomplete_element_response->pki_customer_id
    cJSON *pki_customer_id = cJSON_GetObjectItemCaseSensitive(customer_autocomplete_element_responseJSON, "pkiCustomerID");
    if (cJSON_IsNull(pki_customer_id)) {
        pki_customer_id = NULL;
    }
    if (!pki_customer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_customer_id))
    {
    goto end; //Numeric
    }
    pki_customer_id_local_var = malloc(sizeof(int));
    if(!pki_customer_id_local_var)
    {
        goto end;
    }
    *pki_customer_id_local_var = pki_customer_id->valuedouble;

    // customer_autocomplete_element_response->fki_department_id
    cJSON *fki_department_id = cJSON_GetObjectItemCaseSensitive(customer_autocomplete_element_responseJSON, "fkiDepartmentID");
    if (cJSON_IsNull(fki_department_id)) {
        fki_department_id = NULL;
    }
    if (!fki_department_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_department_id))
    {
    goto end; //Numeric
    }
    fki_department_id_local_var = malloc(sizeof(int));
    if(!fki_department_id_local_var)
    {
        goto end;
    }
    *fki_department_id_local_var = fki_department_id->valuedouble;

    // customer_autocomplete_element_response->s_customer_name
    cJSON *s_customer_name = cJSON_GetObjectItemCaseSensitive(customer_autocomplete_element_responseJSON, "sCustomerName");
    if (cJSON_IsNull(s_customer_name)) {
        s_customer_name = NULL;
    }
    if (!s_customer_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_customer_name))
    {
    goto end; //String
    }

    // customer_autocomplete_element_response->s_customer_code
    cJSON *s_customer_code = cJSON_GetObjectItemCaseSensitive(customer_autocomplete_element_responseJSON, "sCustomerCode");
    if (cJSON_IsNull(s_customer_code)) {
        s_customer_code = NULL;
    }
    if (!s_customer_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_customer_code))
    {
    goto end; //String
    }

    // customer_autocomplete_element_response->b_customer_isactive
    cJSON *b_customer_isactive = cJSON_GetObjectItemCaseSensitive(customer_autocomplete_element_responseJSON, "bCustomerIsactive");
    if (cJSON_IsNull(b_customer_isactive)) {
        b_customer_isactive = NULL;
    }
    if (!b_customer_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_customer_isactive))
    {
    goto end; //Bool
    }
    b_customer_isactive_local_var = malloc(sizeof(int));
    if(!b_customer_isactive_local_var)
    {
        goto end;
    }
    *b_customer_isactive_local_var = b_customer_isactive->valueint;


    if (s_customer_name && !cJSON_IsNull(s_customer_name)) s_customer_name_local_str = strdup(s_customer_name->valuestring);
    if (s_customer_code && !cJSON_IsNull(s_customer_code)) s_customer_code_local_str = strdup(s_customer_code->valuestring);

    customer_autocomplete_element_response_local_var = customer_autocomplete_element_response_create_internal (
        pki_customer_id_local_var,
        fki_department_id_local_var,
        s_customer_name_local_str,
        s_customer_code_local_str,
        b_customer_isactive_local_var
        );

    if (!customer_autocomplete_element_response_local_var) {
        goto end;
    }

    return customer_autocomplete_element_response_local_var;
end:
    if (pki_customer_id_local_var) {
        free(pki_customer_id_local_var);
        pki_customer_id_local_var = NULL;
    }
    if (fki_department_id_local_var) {
        free(fki_department_id_local_var);
        fki_department_id_local_var = NULL;
    }
    if (s_customer_name_local_str) {
        free(s_customer_name_local_str);
        s_customer_name_local_str = NULL;
    }
    if (s_customer_code_local_str) {
        free(s_customer_code_local_str);
        s_customer_code_local_str = NULL;
    }
    if (b_customer_isactive_local_var) {
        free(b_customer_isactive_local_var);
        b_customer_isactive_local_var = NULL;
    }
    return NULL;

}
