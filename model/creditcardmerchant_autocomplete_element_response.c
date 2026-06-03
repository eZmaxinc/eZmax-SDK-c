#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardmerchant_autocomplete_element_response.h"



static creditcardmerchant_autocomplete_element_response_t *creditcardmerchant_autocomplete_element_response_create_internal(
    int *pki_creditcardmerchant_id,
    char *s_creditcardmerchant_description,
    int *b_creditcardmerchant_isactive
    ) {
    creditcardmerchant_autocomplete_element_response_t *creditcardmerchant_autocomplete_element_response_local_var = malloc(sizeof(creditcardmerchant_autocomplete_element_response_t));
    if (!creditcardmerchant_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(creditcardmerchant_autocomplete_element_response_local_var, 0, sizeof(creditcardmerchant_autocomplete_element_response_t));
    creditcardmerchant_autocomplete_element_response_local_var->_library_owned = 1;
    creditcardmerchant_autocomplete_element_response_local_var->pki_creditcardmerchant_id = pki_creditcardmerchant_id;
    creditcardmerchant_autocomplete_element_response_local_var->s_creditcardmerchant_description = s_creditcardmerchant_description;
    creditcardmerchant_autocomplete_element_response_local_var->b_creditcardmerchant_isactive = b_creditcardmerchant_isactive;
    return creditcardmerchant_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) creditcardmerchant_autocomplete_element_response_t *creditcardmerchant_autocomplete_element_response_create(
    int *pki_creditcardmerchant_id,
    char *s_creditcardmerchant_description,
    int *b_creditcardmerchant_isactive
    ) {
    int *pki_creditcardmerchant_id_copy = NULL;
    if (pki_creditcardmerchant_id) {
        pki_creditcardmerchant_id_copy = malloc(sizeof(int));
        if (pki_creditcardmerchant_id_copy) *pki_creditcardmerchant_id_copy = *pki_creditcardmerchant_id;
    }
    int *b_creditcardmerchant_isactive_copy = NULL;
    if (b_creditcardmerchant_isactive) {
        b_creditcardmerchant_isactive_copy = malloc(sizeof(int));
        if (b_creditcardmerchant_isactive_copy) *b_creditcardmerchant_isactive_copy = *b_creditcardmerchant_isactive;
    }
    creditcardmerchant_autocomplete_element_response_t *result = creditcardmerchant_autocomplete_element_response_create_internal (
        pki_creditcardmerchant_id_copy,
        s_creditcardmerchant_description,
        b_creditcardmerchant_isactive_copy
        );
    if (!result) {
        free(pki_creditcardmerchant_id_copy);
        free(b_creditcardmerchant_isactive_copy);
    }
    return result;
}

void creditcardmerchant_autocomplete_element_response_free(creditcardmerchant_autocomplete_element_response_t *creditcardmerchant_autocomplete_element_response) {
    if(NULL == creditcardmerchant_autocomplete_element_response){
        return ;
    }
    if(creditcardmerchant_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardmerchant_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardmerchant_autocomplete_element_response->pki_creditcardmerchant_id) {
        free(creditcardmerchant_autocomplete_element_response->pki_creditcardmerchant_id);
        creditcardmerchant_autocomplete_element_response->pki_creditcardmerchant_id = NULL;
    }
    if (creditcardmerchant_autocomplete_element_response->s_creditcardmerchant_description) {
        free(creditcardmerchant_autocomplete_element_response->s_creditcardmerchant_description);
        creditcardmerchant_autocomplete_element_response->s_creditcardmerchant_description = NULL;
    }
    if (creditcardmerchant_autocomplete_element_response->b_creditcardmerchant_isactive) {
        free(creditcardmerchant_autocomplete_element_response->b_creditcardmerchant_isactive);
        creditcardmerchant_autocomplete_element_response->b_creditcardmerchant_isactive = NULL;
    }
    free(creditcardmerchant_autocomplete_element_response);
}

cJSON *creditcardmerchant_autocomplete_element_response_convertToJSON(creditcardmerchant_autocomplete_element_response_t *creditcardmerchant_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // creditcardmerchant_autocomplete_element_response->pki_creditcardmerchant_id
    if (!creditcardmerchant_autocomplete_element_response->pki_creditcardmerchant_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCreditcardmerchantID", *creditcardmerchant_autocomplete_element_response->pki_creditcardmerchant_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardmerchant_autocomplete_element_response->s_creditcardmerchant_description
    if (!creditcardmerchant_autocomplete_element_response->s_creditcardmerchant_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardmerchantDescription", creditcardmerchant_autocomplete_element_response->s_creditcardmerchant_description) == NULL) {
    goto fail; //String
    }


    // creditcardmerchant_autocomplete_element_response->b_creditcardmerchant_isactive
    if (!creditcardmerchant_autocomplete_element_response->b_creditcardmerchant_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantIsactive", *creditcardmerchant_autocomplete_element_response->b_creditcardmerchant_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardmerchant_autocomplete_element_response_t *creditcardmerchant_autocomplete_element_response_parseFromJSON(cJSON *creditcardmerchant_autocomplete_element_responseJSON){

    creditcardmerchant_autocomplete_element_response_t *creditcardmerchant_autocomplete_element_response_local_var = NULL;

    // define the local variable for creditcardmerchant_autocomplete_element_response->pki_creditcardmerchant_id
    int *pki_creditcardmerchant_id_local_var = NULL;

    char *s_creditcardmerchant_description_local_str = NULL;

    // define the local variable for creditcardmerchant_autocomplete_element_response->b_creditcardmerchant_isactive
    int *b_creditcardmerchant_isactive_local_var = NULL;

    // creditcardmerchant_autocomplete_element_response->pki_creditcardmerchant_id
    cJSON *pki_creditcardmerchant_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_autocomplete_element_responseJSON, "pkiCreditcardmerchantID");
    if (cJSON_IsNull(pki_creditcardmerchant_id)) {
        pki_creditcardmerchant_id = NULL;
    }
    if (!pki_creditcardmerchant_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_creditcardmerchant_id))
    {
    goto end; //Numeric
    }
    pki_creditcardmerchant_id_local_var = malloc(sizeof(int));
    if(!pki_creditcardmerchant_id_local_var)
    {
        goto end;
    }
    *pki_creditcardmerchant_id_local_var = pki_creditcardmerchant_id->valuedouble;

    // creditcardmerchant_autocomplete_element_response->s_creditcardmerchant_description
    cJSON *s_creditcardmerchant_description = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_autocomplete_element_responseJSON, "sCreditcardmerchantDescription");
    if (cJSON_IsNull(s_creditcardmerchant_description)) {
        s_creditcardmerchant_description = NULL;
    }
    if (!s_creditcardmerchant_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardmerchant_description))
    {
    goto end; //String
    }

    // creditcardmerchant_autocomplete_element_response->b_creditcardmerchant_isactive
    cJSON *b_creditcardmerchant_isactive = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_autocomplete_element_responseJSON, "bCreditcardmerchantIsactive");
    if (cJSON_IsNull(b_creditcardmerchant_isactive)) {
        b_creditcardmerchant_isactive = NULL;
    }
    if (!b_creditcardmerchant_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardmerchant_isactive))
    {
    goto end; //Bool
    }
    b_creditcardmerchant_isactive_local_var = malloc(sizeof(int));
    if(!b_creditcardmerchant_isactive_local_var)
    {
        goto end;
    }
    *b_creditcardmerchant_isactive_local_var = b_creditcardmerchant_isactive->valueint;


    if (s_creditcardmerchant_description && !cJSON_IsNull(s_creditcardmerchant_description)) s_creditcardmerchant_description_local_str = strdup(s_creditcardmerchant_description->valuestring);

    creditcardmerchant_autocomplete_element_response_local_var = creditcardmerchant_autocomplete_element_response_create_internal (
        pki_creditcardmerchant_id_local_var,
        s_creditcardmerchant_description_local_str,
        b_creditcardmerchant_isactive_local_var
        );

    if (!creditcardmerchant_autocomplete_element_response_local_var) {
        goto end;
    }

    return creditcardmerchant_autocomplete_element_response_local_var;
end:
    if (pki_creditcardmerchant_id_local_var) {
        free(pki_creditcardmerchant_id_local_var);
        pki_creditcardmerchant_id_local_var = NULL;
    }
    if (s_creditcardmerchant_description_local_str) {
        free(s_creditcardmerchant_description_local_str);
        s_creditcardmerchant_description_local_str = NULL;
    }
    if (b_creditcardmerchant_isactive_local_var) {
        free(b_creditcardmerchant_isactive_local_var);
        b_creditcardmerchant_isactive_local_var = NULL;
    }
    return NULL;

}
