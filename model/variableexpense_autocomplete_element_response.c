#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_autocomplete_element_response.h"



static variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response_create_internal(
    char *s_variableexpense_description_x,
    int *pki_variableexpense_id,
    int *b_variableexpense_isactive
    ) {
    variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response_local_var = malloc(sizeof(variableexpense_autocomplete_element_response_t));
    if (!variableexpense_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(variableexpense_autocomplete_element_response_local_var, 0, sizeof(variableexpense_autocomplete_element_response_t));
    variableexpense_autocomplete_element_response_local_var->_library_owned = 1;
    variableexpense_autocomplete_element_response_local_var->s_variableexpense_description_x = s_variableexpense_description_x;
    variableexpense_autocomplete_element_response_local_var->pki_variableexpense_id = pki_variableexpense_id;
    variableexpense_autocomplete_element_response_local_var->b_variableexpense_isactive = b_variableexpense_isactive;
    return variableexpense_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response_create(
    char *s_variableexpense_description_x,
    int *pki_variableexpense_id,
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
    variableexpense_autocomplete_element_response_t *result = variableexpense_autocomplete_element_response_create_internal (
        s_variableexpense_description_x,
        pki_variableexpense_id_copy,
        b_variableexpense_isactive_copy
        );
    if (!result) {
        free(pki_variableexpense_id_copy);
        free(b_variableexpense_isactive_copy);
    }
    return result;
}

void variableexpense_autocomplete_element_response_free(variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response) {
    if(NULL == variableexpense_autocomplete_element_response){
        return ;
    }
    if(variableexpense_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "variableexpense_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_autocomplete_element_response->s_variableexpense_description_x) {
        free(variableexpense_autocomplete_element_response->s_variableexpense_description_x);
        variableexpense_autocomplete_element_response->s_variableexpense_description_x = NULL;
    }
    if (variableexpense_autocomplete_element_response->pki_variableexpense_id) {
        free(variableexpense_autocomplete_element_response->pki_variableexpense_id);
        variableexpense_autocomplete_element_response->pki_variableexpense_id = NULL;
    }
    if (variableexpense_autocomplete_element_response->b_variableexpense_isactive) {
        free(variableexpense_autocomplete_element_response->b_variableexpense_isactive);
        variableexpense_autocomplete_element_response->b_variableexpense_isactive = NULL;
    }
    free(variableexpense_autocomplete_element_response);
}

cJSON *variableexpense_autocomplete_element_response_convertToJSON(variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_autocomplete_element_response->s_variableexpense_description_x
    if (!variableexpense_autocomplete_element_response->s_variableexpense_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sVariableexpenseDescriptionX", variableexpense_autocomplete_element_response->s_variableexpense_description_x) == NULL) {
    goto fail; //String
    }


    // variableexpense_autocomplete_element_response->pki_variableexpense_id
    if (!variableexpense_autocomplete_element_response->pki_variableexpense_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiVariableexpenseID", *variableexpense_autocomplete_element_response->pki_variableexpense_id) == NULL) {
    goto fail; //Numeric
    }


    // variableexpense_autocomplete_element_response->b_variableexpense_isactive
    if (!variableexpense_autocomplete_element_response->b_variableexpense_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bVariableexpenseIsactive", *variableexpense_autocomplete_element_response->b_variableexpense_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response_parseFromJSON(cJSON *variableexpense_autocomplete_element_responseJSON){

    variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response_local_var = NULL;

    char *s_variableexpense_description_x_local_str = NULL;

    // define the local variable for variableexpense_autocomplete_element_response->pki_variableexpense_id
    int *pki_variableexpense_id_local_var = NULL;

    // define the local variable for variableexpense_autocomplete_element_response->b_variableexpense_isactive
    int *b_variableexpense_isactive_local_var = NULL;

    // variableexpense_autocomplete_element_response->s_variableexpense_description_x
    cJSON *s_variableexpense_description_x = cJSON_GetObjectItemCaseSensitive(variableexpense_autocomplete_element_responseJSON, "sVariableexpenseDescriptionX");
    if (cJSON_IsNull(s_variableexpense_description_x)) {
        s_variableexpense_description_x = NULL;
    }
    if (!s_variableexpense_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_variableexpense_description_x))
    {
    goto end; //String
    }

    // variableexpense_autocomplete_element_response->pki_variableexpense_id
    cJSON *pki_variableexpense_id = cJSON_GetObjectItemCaseSensitive(variableexpense_autocomplete_element_responseJSON, "pkiVariableexpenseID");
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

    // variableexpense_autocomplete_element_response->b_variableexpense_isactive
    cJSON *b_variableexpense_isactive = cJSON_GetObjectItemCaseSensitive(variableexpense_autocomplete_element_responseJSON, "bVariableexpenseIsactive");
    if (cJSON_IsNull(b_variableexpense_isactive)) {
        b_variableexpense_isactive = NULL;
    }
    if (!b_variableexpense_isactive) {
        goto end;
    }

    
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


    if (s_variableexpense_description_x && !cJSON_IsNull(s_variableexpense_description_x)) s_variableexpense_description_x_local_str = strdup(s_variableexpense_description_x->valuestring);

    variableexpense_autocomplete_element_response_local_var = variableexpense_autocomplete_element_response_create_internal (
        s_variableexpense_description_x_local_str,
        pki_variableexpense_id_local_var,
        b_variableexpense_isactive_local_var
        );

    if (!variableexpense_autocomplete_element_response_local_var) {
        goto end;
    }

    return variableexpense_autocomplete_element_response_local_var;
end:
    if (s_variableexpense_description_x_local_str) {
        free(s_variableexpense_description_x_local_str);
        s_variableexpense_description_x_local_str = NULL;
    }
    if (pki_variableexpense_id_local_var) {
        free(pki_variableexpense_id_local_var);
        pki_variableexpense_id_local_var = NULL;
    }
    if (b_variableexpense_isactive_local_var) {
        free(b_variableexpense_isactive_local_var);
        b_variableexpense_isactive_local_var = NULL;
    }
    return NULL;

}
