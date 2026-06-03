#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "currency_autocomplete_element_response.h"



static currency_autocomplete_element_response_t *currency_autocomplete_element_response_create_internal(
    int *pki_currency_id,
    char *s_currency_description_x,
    int *b_currency_isactive
    ) {
    currency_autocomplete_element_response_t *currency_autocomplete_element_response_local_var = malloc(sizeof(currency_autocomplete_element_response_t));
    if (!currency_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(currency_autocomplete_element_response_local_var, 0, sizeof(currency_autocomplete_element_response_t));
    currency_autocomplete_element_response_local_var->_library_owned = 1;
    currency_autocomplete_element_response_local_var->pki_currency_id = pki_currency_id;
    currency_autocomplete_element_response_local_var->s_currency_description_x = s_currency_description_x;
    currency_autocomplete_element_response_local_var->b_currency_isactive = b_currency_isactive;
    return currency_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) currency_autocomplete_element_response_t *currency_autocomplete_element_response_create(
    int *pki_currency_id,
    char *s_currency_description_x,
    int *b_currency_isactive
    ) {
    int *pki_currency_id_copy = NULL;
    if (pki_currency_id) {
        pki_currency_id_copy = malloc(sizeof(int));
        if (pki_currency_id_copy) *pki_currency_id_copy = *pki_currency_id;
    }
    int *b_currency_isactive_copy = NULL;
    if (b_currency_isactive) {
        b_currency_isactive_copy = malloc(sizeof(int));
        if (b_currency_isactive_copy) *b_currency_isactive_copy = *b_currency_isactive;
    }
    currency_autocomplete_element_response_t *result = currency_autocomplete_element_response_create_internal (
        pki_currency_id_copy,
        s_currency_description_x,
        b_currency_isactive_copy
        );
    if (!result) {
        free(pki_currency_id_copy);
        free(b_currency_isactive_copy);
    }
    return result;
}

void currency_autocomplete_element_response_free(currency_autocomplete_element_response_t *currency_autocomplete_element_response) {
    if(NULL == currency_autocomplete_element_response){
        return ;
    }
    if(currency_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "currency_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (currency_autocomplete_element_response->pki_currency_id) {
        free(currency_autocomplete_element_response->pki_currency_id);
        currency_autocomplete_element_response->pki_currency_id = NULL;
    }
    if (currency_autocomplete_element_response->s_currency_description_x) {
        free(currency_autocomplete_element_response->s_currency_description_x);
        currency_autocomplete_element_response->s_currency_description_x = NULL;
    }
    if (currency_autocomplete_element_response->b_currency_isactive) {
        free(currency_autocomplete_element_response->b_currency_isactive);
        currency_autocomplete_element_response->b_currency_isactive = NULL;
    }
    free(currency_autocomplete_element_response);
}

cJSON *currency_autocomplete_element_response_convertToJSON(currency_autocomplete_element_response_t *currency_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // currency_autocomplete_element_response->pki_currency_id
    if (!currency_autocomplete_element_response->pki_currency_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCurrencyID", *currency_autocomplete_element_response->pki_currency_id) == NULL) {
    goto fail; //Numeric
    }


    // currency_autocomplete_element_response->s_currency_description_x
    if (!currency_autocomplete_element_response->s_currency_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCurrencyDescriptionX", currency_autocomplete_element_response->s_currency_description_x) == NULL) {
    goto fail; //String
    }


    // currency_autocomplete_element_response->b_currency_isactive
    if (!currency_autocomplete_element_response->b_currency_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCurrencyIsactive", *currency_autocomplete_element_response->b_currency_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

currency_autocomplete_element_response_t *currency_autocomplete_element_response_parseFromJSON(cJSON *currency_autocomplete_element_responseJSON){

    currency_autocomplete_element_response_t *currency_autocomplete_element_response_local_var = NULL;

    // define the local variable for currency_autocomplete_element_response->pki_currency_id
    int *pki_currency_id_local_var = NULL;

    char *s_currency_description_x_local_str = NULL;

    // define the local variable for currency_autocomplete_element_response->b_currency_isactive
    int *b_currency_isactive_local_var = NULL;

    // currency_autocomplete_element_response->pki_currency_id
    cJSON *pki_currency_id = cJSON_GetObjectItemCaseSensitive(currency_autocomplete_element_responseJSON, "pkiCurrencyID");
    if (cJSON_IsNull(pki_currency_id)) {
        pki_currency_id = NULL;
    }
    if (!pki_currency_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_currency_id))
    {
    goto end; //Numeric
    }
    pki_currency_id_local_var = malloc(sizeof(int));
    if(!pki_currency_id_local_var)
    {
        goto end;
    }
    *pki_currency_id_local_var = pki_currency_id->valuedouble;

    // currency_autocomplete_element_response->s_currency_description_x
    cJSON *s_currency_description_x = cJSON_GetObjectItemCaseSensitive(currency_autocomplete_element_responseJSON, "sCurrencyDescriptionX");
    if (cJSON_IsNull(s_currency_description_x)) {
        s_currency_description_x = NULL;
    }
    if (!s_currency_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_currency_description_x))
    {
    goto end; //String
    }

    // currency_autocomplete_element_response->b_currency_isactive
    cJSON *b_currency_isactive = cJSON_GetObjectItemCaseSensitive(currency_autocomplete_element_responseJSON, "bCurrencyIsactive");
    if (cJSON_IsNull(b_currency_isactive)) {
        b_currency_isactive = NULL;
    }
    if (!b_currency_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_currency_isactive))
    {
    goto end; //Bool
    }
    b_currency_isactive_local_var = malloc(sizeof(int));
    if(!b_currency_isactive_local_var)
    {
        goto end;
    }
    *b_currency_isactive_local_var = b_currency_isactive->valueint;


    if (s_currency_description_x && !cJSON_IsNull(s_currency_description_x)) s_currency_description_x_local_str = strdup(s_currency_description_x->valuestring);

    currency_autocomplete_element_response_local_var = currency_autocomplete_element_response_create_internal (
        pki_currency_id_local_var,
        s_currency_description_x_local_str,
        b_currency_isactive_local_var
        );

    if (!currency_autocomplete_element_response_local_var) {
        goto end;
    }

    return currency_autocomplete_element_response_local_var;
end:
    if (pki_currency_id_local_var) {
        free(pki_currency_id_local_var);
        pki_currency_id_local_var = NULL;
    }
    if (s_currency_description_x_local_str) {
        free(s_currency_description_x_local_str);
        s_currency_description_x_local_str = NULL;
    }
    if (b_currency_isactive_local_var) {
        free(b_currency_isactive_local_var);
        b_currency_isactive_local_var = NULL;
    }
    return NULL;

}
