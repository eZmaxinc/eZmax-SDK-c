#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_list_element.h"



static variableexpense_list_element_t *variableexpense_list_element_create_internal(
    int *pki_variableexpense_id,
    char *s_variableexpense_code,
    char *s_variableexpense_description_x,
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable,
    int *b_variableexpense_isactive
    ) {
    variableexpense_list_element_t *variableexpense_list_element_local_var = malloc(sizeof(variableexpense_list_element_t));
    if (!variableexpense_list_element_local_var) {
        return NULL;
    }
    memset(variableexpense_list_element_local_var, 0, sizeof(variableexpense_list_element_t));
    variableexpense_list_element_local_var->_library_owned = 1;
    variableexpense_list_element_local_var->pki_variableexpense_id = pki_variableexpense_id;
    variableexpense_list_element_local_var->s_variableexpense_code = s_variableexpense_code;
    variableexpense_list_element_local_var->s_variableexpense_description_x = s_variableexpense_description_x;
    variableexpense_list_element_local_var->e_variableexpense_taxable = e_variableexpense_taxable;
    variableexpense_list_element_local_var->b_variableexpense_isactive = b_variableexpense_isactive;
    return variableexpense_list_element_local_var;
}

__attribute__((deprecated)) variableexpense_list_element_t *variableexpense_list_element_create(
    int *pki_variableexpense_id,
    char *s_variableexpense_code,
    char *s_variableexpense_description_x,
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable,
    int *b_variableexpense_isactive
    ) {
    int *pki_variableexpense_id_copy = NULL;
    if (pki_variableexpense_id) {
        pki_variableexpense_id_copy = malloc(sizeof(int));
        if (pki_variableexpense_id_copy) *pki_variableexpense_id_copy = *pki_variableexpense_id;
    }
    int *b_variableexpense_isactive_copy = NULL;
    if (b_variableexpense_isactive) {
        b_variableexpense_isactive_copy = malloc(sizeof(int));
        if (b_variableexpense_isactive_copy) *b_variableexpense_isactive_copy = *b_variableexpense_isactive;
    }
    variableexpense_list_element_t *result = variableexpense_list_element_create_internal (
        pki_variableexpense_id_copy,
        s_variableexpense_code,
        s_variableexpense_description_x,
        e_variableexpense_taxable,
        b_variableexpense_isactive_copy
        );
    if (!result) {
        free(pki_variableexpense_id_copy);
        free(b_variableexpense_isactive_copy);
    }
    return result;
}

void variableexpense_list_element_free(variableexpense_list_element_t *variableexpense_list_element) {
    if(NULL == variableexpense_list_element){
        return ;
    }
    if(variableexpense_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "variableexpense_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_list_element->pki_variableexpense_id) {
        free(variableexpense_list_element->pki_variableexpense_id);
        variableexpense_list_element->pki_variableexpense_id = NULL;
    }
    if (variableexpense_list_element->s_variableexpense_code) {
        free(variableexpense_list_element->s_variableexpense_code);
        variableexpense_list_element->s_variableexpense_code = NULL;
    }
    if (variableexpense_list_element->s_variableexpense_description_x) {
        free(variableexpense_list_element->s_variableexpense_description_x);
        variableexpense_list_element->s_variableexpense_description_x = NULL;
    }
    if (variableexpense_list_element->b_variableexpense_isactive) {
        free(variableexpense_list_element->b_variableexpense_isactive);
        variableexpense_list_element->b_variableexpense_isactive = NULL;
    }
    free(variableexpense_list_element);
}

cJSON *variableexpense_list_element_convertToJSON(variableexpense_list_element_t *variableexpense_list_element) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_list_element->pki_variableexpense_id
    if (!variableexpense_list_element->pki_variableexpense_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiVariableexpenseID", *variableexpense_list_element->pki_variableexpense_id) == NULL) {
    goto fail; //Numeric
    }


    // variableexpense_list_element->s_variableexpense_code
    if(variableexpense_list_element->s_variableexpense_code) {
    if(cJSON_AddStringToObject(item, "sVariableexpenseCode", variableexpense_list_element->s_variableexpense_code) == NULL) {
    goto fail; //String
    }
    }


    // variableexpense_list_element->s_variableexpense_description_x
    if(variableexpense_list_element->s_variableexpense_description_x) {
    if(cJSON_AddStringToObject(item, "sVariableexpenseDescriptionX", variableexpense_list_element->s_variableexpense_description_x) == NULL) {
    goto fail; //String
    }
    }


    // variableexpense_list_element->e_variableexpense_taxable
    if(variableexpense_list_element->e_variableexpense_taxable != ezmax_api_definition__full_field_e_variableexpense_taxable__NULL) {
    cJSON *e_variableexpense_taxable_local_JSON = field_e_variableexpense_taxable_convertToJSON(variableexpense_list_element->e_variableexpense_taxable);
    if(e_variableexpense_taxable_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eVariableexpenseTaxable", e_variableexpense_taxable_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // variableexpense_list_element->b_variableexpense_isactive
    if(variableexpense_list_element->b_variableexpense_isactive) {
    if(cJSON_AddBoolToObject(item, "bVariableexpenseIsactive", *variableexpense_list_element->b_variableexpense_isactive) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

variableexpense_list_element_t *variableexpense_list_element_parseFromJSON(cJSON *variableexpense_list_elementJSON){

    variableexpense_list_element_t *variableexpense_list_element_local_var = NULL;

    // define the local variable for variableexpense_list_element->pki_variableexpense_id
    int *pki_variableexpense_id_local_var = NULL;

    char *s_variableexpense_code_local_str = NULL;

    char *s_variableexpense_description_x_local_str = NULL;

    // define the local variable for variableexpense_list_element->e_variableexpense_taxable
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable_local_nonprim = 0;

    // define the local variable for variableexpense_list_element->b_variableexpense_isactive
    int *b_variableexpense_isactive_local_var = NULL;

    // variableexpense_list_element->pki_variableexpense_id
    cJSON *pki_variableexpense_id = cJSON_GetObjectItemCaseSensitive(variableexpense_list_elementJSON, "pkiVariableexpenseID");
    if (cJSON_IsNull(pki_variableexpense_id)) {
        pki_variableexpense_id = NULL;
    }
    if (!pki_variableexpense_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_variableexpense_id))
    {
    goto end; //Numeric
    }
    pki_variableexpense_id_local_var = malloc(sizeof(int));
    if(!pki_variableexpense_id_local_var)
    {
        goto end;
    }
    *pki_variableexpense_id_local_var = pki_variableexpense_id->valuedouble;

    // variableexpense_list_element->s_variableexpense_code
    cJSON *s_variableexpense_code = cJSON_GetObjectItemCaseSensitive(variableexpense_list_elementJSON, "sVariableexpenseCode");
    if (cJSON_IsNull(s_variableexpense_code)) {
        s_variableexpense_code = NULL;
    }
    if (s_variableexpense_code) { 
    if(!cJSON_IsString(s_variableexpense_code) && !cJSON_IsNull(s_variableexpense_code))
    {
    goto end; //String
    }
    }

    // variableexpense_list_element->s_variableexpense_description_x
    cJSON *s_variableexpense_description_x = cJSON_GetObjectItemCaseSensitive(variableexpense_list_elementJSON, "sVariableexpenseDescriptionX");
    if (cJSON_IsNull(s_variableexpense_description_x)) {
        s_variableexpense_description_x = NULL;
    }
    if (s_variableexpense_description_x) { 
    if(!cJSON_IsString(s_variableexpense_description_x) && !cJSON_IsNull(s_variableexpense_description_x))
    {
    goto end; //String
    }
    }

    // variableexpense_list_element->e_variableexpense_taxable
    cJSON *e_variableexpense_taxable = cJSON_GetObjectItemCaseSensitive(variableexpense_list_elementJSON, "eVariableexpenseTaxable");
    if (cJSON_IsNull(e_variableexpense_taxable)) {
        e_variableexpense_taxable = NULL;
    }
    if (e_variableexpense_taxable) { 
    e_variableexpense_taxable_local_nonprim = field_e_variableexpense_taxable_parseFromJSON(e_variableexpense_taxable); //custom
    }

    // variableexpense_list_element->b_variableexpense_isactive
    cJSON *b_variableexpense_isactive = cJSON_GetObjectItemCaseSensitive(variableexpense_list_elementJSON, "bVariableexpenseIsactive");
    if (cJSON_IsNull(b_variableexpense_isactive)) {
        b_variableexpense_isactive = NULL;
    }
    if (b_variableexpense_isactive) { 
    if(!cJSON_IsBool(b_variableexpense_isactive))
    {
    goto end; //Bool
    }
    b_variableexpense_isactive_local_var = malloc(sizeof(int));
    if(!b_variableexpense_isactive_local_var)
    {
        goto end;
    }
    *b_variableexpense_isactive_local_var = b_variableexpense_isactive->valueint;
    }


    if (s_variableexpense_code && !cJSON_IsNull(s_variableexpense_code)) s_variableexpense_code_local_str = strdup(s_variableexpense_code->valuestring);
    if (s_variableexpense_description_x && !cJSON_IsNull(s_variableexpense_description_x)) s_variableexpense_description_x_local_str = strdup(s_variableexpense_description_x->valuestring);

    variableexpense_list_element_local_var = variableexpense_list_element_create_internal (
        pki_variableexpense_id_local_var,
        s_variableexpense_code_local_str,
        s_variableexpense_description_x_local_str,
        e_variableexpense_taxable ? e_variableexpense_taxable_local_nonprim : 0,
        b_variableexpense_isactive_local_var
        );

    if (!variableexpense_list_element_local_var) {
        goto end;
    }

    return variableexpense_list_element_local_var;
end:
    if (pki_variableexpense_id_local_var) {
        free(pki_variableexpense_id_local_var);
        pki_variableexpense_id_local_var = NULL;
    }
    if (s_variableexpense_code_local_str) {
        free(s_variableexpense_code_local_str);
        s_variableexpense_code_local_str = NULL;
    }
    if (s_variableexpense_description_x_local_str) {
        free(s_variableexpense_description_x_local_str);
        s_variableexpense_description_x_local_str = NULL;
    }
    if (e_variableexpense_taxable_local_nonprim) {
        e_variableexpense_taxable_local_nonprim = 0;
    }
    if (b_variableexpense_isactive_local_var) {
        free(b_variableexpense_isactive_local_var);
        b_variableexpense_isactive_local_var = NULL;
    }
    return NULL;

}
