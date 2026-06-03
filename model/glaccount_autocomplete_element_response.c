#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "glaccount_autocomplete_element_response.h"



static glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response_create_internal(
    int *pki_glaccount_id,
    int *i_glaccount_code,
    char *s_glaccount_description_x,
    int *b_glaccount_isactive
    ) {
    glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response_local_var = malloc(sizeof(glaccount_autocomplete_element_response_t));
    if (!glaccount_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(glaccount_autocomplete_element_response_local_var, 0, sizeof(glaccount_autocomplete_element_response_t));
    glaccount_autocomplete_element_response_local_var->_library_owned = 1;
    glaccount_autocomplete_element_response_local_var->pki_glaccount_id = pki_glaccount_id;
    glaccount_autocomplete_element_response_local_var->i_glaccount_code = i_glaccount_code;
    glaccount_autocomplete_element_response_local_var->s_glaccount_description_x = s_glaccount_description_x;
    glaccount_autocomplete_element_response_local_var->b_glaccount_isactive = b_glaccount_isactive;
    return glaccount_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response_create(
    int *pki_glaccount_id,
    int *i_glaccount_code,
    char *s_glaccount_description_x,
    int *b_glaccount_isactive
    ) {
    int *pki_glaccount_id_copy = NULL;
    if (pki_glaccount_id) {
        pki_glaccount_id_copy = malloc(sizeof(int));
        if (pki_glaccount_id_copy) *pki_glaccount_id_copy = *pki_glaccount_id;
    }
    int *i_glaccount_code_copy = NULL;
    if (i_glaccount_code) {
        i_glaccount_code_copy = malloc(sizeof(int));
        if (i_glaccount_code_copy) *i_glaccount_code_copy = *i_glaccount_code;
    }
    int *b_glaccount_isactive_copy = NULL;
    if (b_glaccount_isactive) {
        b_glaccount_isactive_copy = malloc(sizeof(int));
        if (b_glaccount_isactive_copy) *b_glaccount_isactive_copy = *b_glaccount_isactive;
    }
    glaccount_autocomplete_element_response_t *result = glaccount_autocomplete_element_response_create_internal (
        pki_glaccount_id_copy,
        i_glaccount_code_copy,
        s_glaccount_description_x,
        b_glaccount_isactive_copy
        );
    if (!result) {
        free(pki_glaccount_id_copy);
        free(i_glaccount_code_copy);
        free(b_glaccount_isactive_copy);
    }
    return result;
}

void glaccount_autocomplete_element_response_free(glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response) {
    if(NULL == glaccount_autocomplete_element_response){
        return ;
    }
    if(glaccount_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "glaccount_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (glaccount_autocomplete_element_response->pki_glaccount_id) {
        free(glaccount_autocomplete_element_response->pki_glaccount_id);
        glaccount_autocomplete_element_response->pki_glaccount_id = NULL;
    }
    if (glaccount_autocomplete_element_response->i_glaccount_code) {
        free(glaccount_autocomplete_element_response->i_glaccount_code);
        glaccount_autocomplete_element_response->i_glaccount_code = NULL;
    }
    if (glaccount_autocomplete_element_response->s_glaccount_description_x) {
        free(glaccount_autocomplete_element_response->s_glaccount_description_x);
        glaccount_autocomplete_element_response->s_glaccount_description_x = NULL;
    }
    if (glaccount_autocomplete_element_response->b_glaccount_isactive) {
        free(glaccount_autocomplete_element_response->b_glaccount_isactive);
        glaccount_autocomplete_element_response->b_glaccount_isactive = NULL;
    }
    free(glaccount_autocomplete_element_response);
}

cJSON *glaccount_autocomplete_element_response_convertToJSON(glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // glaccount_autocomplete_element_response->pki_glaccount_id
    if (!glaccount_autocomplete_element_response->pki_glaccount_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiGlaccountID", *glaccount_autocomplete_element_response->pki_glaccount_id) == NULL) {
    goto fail; //Numeric
    }


    // glaccount_autocomplete_element_response->i_glaccount_code
    if (!glaccount_autocomplete_element_response->i_glaccount_code) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iGlaccountCode", *glaccount_autocomplete_element_response->i_glaccount_code) == NULL) {
    goto fail; //Numeric
    }


    // glaccount_autocomplete_element_response->s_glaccount_description_x
    if (!glaccount_autocomplete_element_response->s_glaccount_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sGlaccountDescriptionX", glaccount_autocomplete_element_response->s_glaccount_description_x) == NULL) {
    goto fail; //String
    }


    // glaccount_autocomplete_element_response->b_glaccount_isactive
    if (!glaccount_autocomplete_element_response->b_glaccount_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bGlaccountIsactive", *glaccount_autocomplete_element_response->b_glaccount_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response_parseFromJSON(cJSON *glaccount_autocomplete_element_responseJSON){

    glaccount_autocomplete_element_response_t *glaccount_autocomplete_element_response_local_var = NULL;

    // define the local variable for glaccount_autocomplete_element_response->pki_glaccount_id
    int *pki_glaccount_id_local_var = NULL;

    // define the local variable for glaccount_autocomplete_element_response->i_glaccount_code
    int *i_glaccount_code_local_var = NULL;

    char *s_glaccount_description_x_local_str = NULL;

    // define the local variable for glaccount_autocomplete_element_response->b_glaccount_isactive
    int *b_glaccount_isactive_local_var = NULL;

    // glaccount_autocomplete_element_response->pki_glaccount_id
    cJSON *pki_glaccount_id = cJSON_GetObjectItemCaseSensitive(glaccount_autocomplete_element_responseJSON, "pkiGlaccountID");
    if (cJSON_IsNull(pki_glaccount_id)) {
        pki_glaccount_id = NULL;
    }
    if (!pki_glaccount_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_glaccount_id))
    {
    goto end; //Numeric
    }
    pki_glaccount_id_local_var = malloc(sizeof(int));
    if(!pki_glaccount_id_local_var)
    {
        goto end;
    }
    *pki_glaccount_id_local_var = pki_glaccount_id->valuedouble;

    // glaccount_autocomplete_element_response->i_glaccount_code
    cJSON *i_glaccount_code = cJSON_GetObjectItemCaseSensitive(glaccount_autocomplete_element_responseJSON, "iGlaccountCode");
    if (cJSON_IsNull(i_glaccount_code)) {
        i_glaccount_code = NULL;
    }
    if (!i_glaccount_code) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_glaccount_code))
    {
    goto end; //Numeric
    }
    i_glaccount_code_local_var = malloc(sizeof(int));
    if(!i_glaccount_code_local_var)
    {
        goto end;
    }
    *i_glaccount_code_local_var = i_glaccount_code->valuedouble;

    // glaccount_autocomplete_element_response->s_glaccount_description_x
    cJSON *s_glaccount_description_x = cJSON_GetObjectItemCaseSensitive(glaccount_autocomplete_element_responseJSON, "sGlaccountDescriptionX");
    if (cJSON_IsNull(s_glaccount_description_x)) {
        s_glaccount_description_x = NULL;
    }
    if (!s_glaccount_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_glaccount_description_x))
    {
    goto end; //String
    }

    // glaccount_autocomplete_element_response->b_glaccount_isactive
    cJSON *b_glaccount_isactive = cJSON_GetObjectItemCaseSensitive(glaccount_autocomplete_element_responseJSON, "bGlaccountIsactive");
    if (cJSON_IsNull(b_glaccount_isactive)) {
        b_glaccount_isactive = NULL;
    }
    if (!b_glaccount_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_glaccount_isactive))
    {
    goto end; //Bool
    }
    b_glaccount_isactive_local_var = malloc(sizeof(int));
    if(!b_glaccount_isactive_local_var)
    {
        goto end;
    }
    *b_glaccount_isactive_local_var = b_glaccount_isactive->valueint;


    if (s_glaccount_description_x && !cJSON_IsNull(s_glaccount_description_x)) s_glaccount_description_x_local_str = strdup(s_glaccount_description_x->valuestring);

    glaccount_autocomplete_element_response_local_var = glaccount_autocomplete_element_response_create_internal (
        pki_glaccount_id_local_var,
        i_glaccount_code_local_var,
        s_glaccount_description_x_local_str,
        b_glaccount_isactive_local_var
        );

    if (!glaccount_autocomplete_element_response_local_var) {
        goto end;
    }

    return glaccount_autocomplete_element_response_local_var;
end:
    if (pki_glaccount_id_local_var) {
        free(pki_glaccount_id_local_var);
        pki_glaccount_id_local_var = NULL;
    }
    if (i_glaccount_code_local_var) {
        free(i_glaccount_code_local_var);
        i_glaccount_code_local_var = NULL;
    }
    if (s_glaccount_description_x_local_str) {
        free(s_glaccount_description_x_local_str);
        s_glaccount_description_x_local_str = NULL;
    }
    if (b_glaccount_isactive_local_var) {
        free(b_glaccount_isactive_local_var);
        b_glaccount_isactive_local_var = NULL;
    }
    return NULL;

}
