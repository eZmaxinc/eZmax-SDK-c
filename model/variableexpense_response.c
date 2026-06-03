#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_response.h"



static variableexpense_response_t *variableexpense_response_create_internal(
    int *pki_variableexpense_id,
    char *s_variableexpense_code,
    multilingual_variableexpense_description_t *obj_variableexpense_description,
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable,
    int *b_variableexpense_isactive
    ) {
    variableexpense_response_t *variableexpense_response_local_var = malloc(sizeof(variableexpense_response_t));
    if (!variableexpense_response_local_var) {
        return NULL;
    }
    memset(variableexpense_response_local_var, 0, sizeof(variableexpense_response_t));
    variableexpense_response_local_var->_library_owned = 1;
    variableexpense_response_local_var->pki_variableexpense_id = pki_variableexpense_id;
    variableexpense_response_local_var->s_variableexpense_code = s_variableexpense_code;
    variableexpense_response_local_var->obj_variableexpense_description = obj_variableexpense_description;
    variableexpense_response_local_var->e_variableexpense_taxable = e_variableexpense_taxable;
    variableexpense_response_local_var->b_variableexpense_isactive = b_variableexpense_isactive;
    return variableexpense_response_local_var;
}

__attribute__((deprecated)) variableexpense_response_t *variableexpense_response_create(
    int *pki_variableexpense_id,
    char *s_variableexpense_code,
    multilingual_variableexpense_description_t *obj_variableexpense_description,
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
    variableexpense_response_t *result = variableexpense_response_create_internal (
        pki_variableexpense_id_copy,
        s_variableexpense_code,
        obj_variableexpense_description,
        e_variableexpense_taxable,
        b_variableexpense_isactive_copy
        );
    if (!result) {
        free(pki_variableexpense_id_copy);
        free(b_variableexpense_isactive_copy);
    }
    return result;
}

void variableexpense_response_free(variableexpense_response_t *variableexpense_response) {
    if(NULL == variableexpense_response){
        return ;
    }
    if(variableexpense_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "variableexpense_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_response->pki_variableexpense_id) {
        free(variableexpense_response->pki_variableexpense_id);
        variableexpense_response->pki_variableexpense_id = NULL;
    }
    if (variableexpense_response->s_variableexpense_code) {
        free(variableexpense_response->s_variableexpense_code);
        variableexpense_response->s_variableexpense_code = NULL;
    }
    if (variableexpense_response->obj_variableexpense_description) {
        multilingual_variableexpense_description_free(variableexpense_response->obj_variableexpense_description);
        variableexpense_response->obj_variableexpense_description = NULL;
    }
    if (variableexpense_response->b_variableexpense_isactive) {
        free(variableexpense_response->b_variableexpense_isactive);
        variableexpense_response->b_variableexpense_isactive = NULL;
    }
    free(variableexpense_response);
}

cJSON *variableexpense_response_convertToJSON(variableexpense_response_t *variableexpense_response) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_response->pki_variableexpense_id
    if (!variableexpense_response->pki_variableexpense_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiVariableexpenseID", *variableexpense_response->pki_variableexpense_id) == NULL) {
    goto fail; //Numeric
    }


    // variableexpense_response->s_variableexpense_code
    if(variableexpense_response->s_variableexpense_code) {
    if(cJSON_AddStringToObject(item, "sVariableexpenseCode", variableexpense_response->s_variableexpense_code) == NULL) {
    goto fail; //String
    }
    }


    // variableexpense_response->obj_variableexpense_description
    if (!variableexpense_response->obj_variableexpense_description) {
        goto fail;
    }
    cJSON *obj_variableexpense_description_local_JSON = multilingual_variableexpense_description_convertToJSON(variableexpense_response->obj_variableexpense_description);
    if(obj_variableexpense_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objVariableexpenseDescription", obj_variableexpense_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // variableexpense_response->e_variableexpense_taxable
    if(variableexpense_response->e_variableexpense_taxable != ezmax_api_definition__full_field_e_variableexpense_taxable__NULL) {
    cJSON *e_variableexpense_taxable_local_JSON = field_e_variableexpense_taxable_convertToJSON(variableexpense_response->e_variableexpense_taxable);
    if(e_variableexpense_taxable_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eVariableexpenseTaxable", e_variableexpense_taxable_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // variableexpense_response->b_variableexpense_isactive
    if(variableexpense_response->b_variableexpense_isactive) {
    if(cJSON_AddBoolToObject(item, "bVariableexpenseIsactive", *variableexpense_response->b_variableexpense_isactive) == NULL) {
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

variableexpense_response_t *variableexpense_response_parseFromJSON(cJSON *variableexpense_responseJSON){

    variableexpense_response_t *variableexpense_response_local_var = NULL;

    // define the local variable for variableexpense_response->pki_variableexpense_id
    int *pki_variableexpense_id_local_var = NULL;

    char *s_variableexpense_code_local_str = NULL;

    // define the local variable for variableexpense_response->obj_variableexpense_description
    multilingual_variableexpense_description_t *obj_variableexpense_description_local_nonprim = NULL;

    // define the local variable for variableexpense_response->e_variableexpense_taxable
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable_local_nonprim = 0;

    // define the local variable for variableexpense_response->b_variableexpense_isactive
    int *b_variableexpense_isactive_local_var = NULL;

    // variableexpense_response->pki_variableexpense_id
    cJSON *pki_variableexpense_id = cJSON_GetObjectItemCaseSensitive(variableexpense_responseJSON, "pkiVariableexpenseID");
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

    // variableexpense_response->s_variableexpense_code
    cJSON *s_variableexpense_code = cJSON_GetObjectItemCaseSensitive(variableexpense_responseJSON, "sVariableexpenseCode");
    if (cJSON_IsNull(s_variableexpense_code)) {
        s_variableexpense_code = NULL;
    }
    if (s_variableexpense_code) { 
    if(!cJSON_IsString(s_variableexpense_code) && !cJSON_IsNull(s_variableexpense_code))
    {
    goto end; //String
    }
    }

    // variableexpense_response->obj_variableexpense_description
    cJSON *obj_variableexpense_description = cJSON_GetObjectItemCaseSensitive(variableexpense_responseJSON, "objVariableexpenseDescription");
    if (cJSON_IsNull(obj_variableexpense_description)) {
        obj_variableexpense_description = NULL;
    }
    if (!obj_variableexpense_description) {
        goto end;
    }

    
    obj_variableexpense_description_local_nonprim = multilingual_variableexpense_description_parseFromJSON(obj_variableexpense_description); //nonprimitive

    // variableexpense_response->e_variableexpense_taxable
    cJSON *e_variableexpense_taxable = cJSON_GetObjectItemCaseSensitive(variableexpense_responseJSON, "eVariableexpenseTaxable");
    if (cJSON_IsNull(e_variableexpense_taxable)) {
        e_variableexpense_taxable = NULL;
    }
    if (e_variableexpense_taxable) { 
    e_variableexpense_taxable_local_nonprim = field_e_variableexpense_taxable_parseFromJSON(e_variableexpense_taxable); //custom
    }

    // variableexpense_response->b_variableexpense_isactive
    cJSON *b_variableexpense_isactive = cJSON_GetObjectItemCaseSensitive(variableexpense_responseJSON, "bVariableexpenseIsactive");
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

    variableexpense_response_local_var = variableexpense_response_create_internal (
        pki_variableexpense_id_local_var,
        s_variableexpense_code_local_str,
        obj_variableexpense_description_local_nonprim,
        e_variableexpense_taxable ? e_variableexpense_taxable_local_nonprim : 0,
        b_variableexpense_isactive_local_var
        );

    if (!variableexpense_response_local_var) {
        goto end;
    }

    return variableexpense_response_local_var;
end:
    if (pki_variableexpense_id_local_var) {
        free(pki_variableexpense_id_local_var);
        pki_variableexpense_id_local_var = NULL;
    }
    if (s_variableexpense_code_local_str) {
        free(s_variableexpense_code_local_str);
        s_variableexpense_code_local_str = NULL;
    }
    if (obj_variableexpense_description_local_nonprim) {
        multilingual_variableexpense_description_free(obj_variableexpense_description_local_nonprim);
        obj_variableexpense_description_local_nonprim = NULL;
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
