#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "currency_autocomplete_element_response.h"



static currency_autocomplete_element_response_t *currency_autocomplete_element_response_create_internal(
    int pki_currency_id,
    char *s_currency_description_x,
    int b_currency_isactive
    ) {
    currency_autocomplete_element_response_t *currency_autocomplete_element_response_local_var = malloc(sizeof(currency_autocomplete_element_response_t));
    if (!currency_autocomplete_element_response_local_var) {
        return NULL;
    }
    currency_autocomplete_element_response_local_var->pki_currency_id = pki_currency_id;
    currency_autocomplete_element_response_local_var->s_currency_description_x = s_currency_description_x;
    currency_autocomplete_element_response_local_var->b_currency_isactive = b_currency_isactive;

    currency_autocomplete_element_response_local_var->_library_owned = 1;
    return currency_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) currency_autocomplete_element_response_t *currency_autocomplete_element_response_create(
    int pki_currency_id,
    char *s_currency_description_x,
    int b_currency_isactive
    ) {
    return currency_autocomplete_element_response_create_internal (
        pki_currency_id,
        s_currency_description_x,
        b_currency_isactive
        );
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
    if (currency_autocomplete_element_response->s_currency_description_x) {
        free(currency_autocomplete_element_response->s_currency_description_x);
        currency_autocomplete_element_response->s_currency_description_x = NULL;
    }
    free(currency_autocomplete_element_response);
}

cJSON *currency_autocomplete_element_response_convertToJSON(currency_autocomplete_element_response_t *currency_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // currency_autocomplete_element_response->pki_currency_id
    if (!currency_autocomplete_element_response->pki_currency_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCurrencyID", currency_autocomplete_element_response->pki_currency_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bCurrencyIsactive", currency_autocomplete_element_response->b_currency_isactive) == NULL) {
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


    currency_autocomplete_element_response_local_var = currency_autocomplete_element_response_create_internal (
        pki_currency_id->valuedouble,
        strdup(s_currency_description_x->valuestring),
        b_currency_isactive->valueint
        );

    return currency_autocomplete_element_response_local_var;
end:
    return NULL;

}
