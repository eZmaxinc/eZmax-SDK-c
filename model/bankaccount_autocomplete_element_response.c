#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bankaccount_autocomplete_element_response.h"



static bankaccount_autocomplete_element_response_t *bankaccount_autocomplete_element_response_create_internal(
    int pki_bankaccount_id,
    char *s_bankaccount_bankname,
    int b_bankaccount_isactive
    ) {
    bankaccount_autocomplete_element_response_t *bankaccount_autocomplete_element_response_local_var = malloc(sizeof(bankaccount_autocomplete_element_response_t));
    if (!bankaccount_autocomplete_element_response_local_var) {
        return NULL;
    }
    bankaccount_autocomplete_element_response_local_var->pki_bankaccount_id = pki_bankaccount_id;
    bankaccount_autocomplete_element_response_local_var->s_bankaccount_bankname = s_bankaccount_bankname;
    bankaccount_autocomplete_element_response_local_var->b_bankaccount_isactive = b_bankaccount_isactive;

    bankaccount_autocomplete_element_response_local_var->_library_owned = 1;
    return bankaccount_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) bankaccount_autocomplete_element_response_t *bankaccount_autocomplete_element_response_create(
    int pki_bankaccount_id,
    char *s_bankaccount_bankname,
    int b_bankaccount_isactive
    ) {
    return bankaccount_autocomplete_element_response_create_internal (
        pki_bankaccount_id,
        s_bankaccount_bankname,
        b_bankaccount_isactive
        );
}

void bankaccount_autocomplete_element_response_free(bankaccount_autocomplete_element_response_t *bankaccount_autocomplete_element_response) {
    if(NULL == bankaccount_autocomplete_element_response){
        return ;
    }
    if(bankaccount_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "bankaccount_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (bankaccount_autocomplete_element_response->s_bankaccount_bankname) {
        free(bankaccount_autocomplete_element_response->s_bankaccount_bankname);
        bankaccount_autocomplete_element_response->s_bankaccount_bankname = NULL;
    }
    free(bankaccount_autocomplete_element_response);
}

cJSON *bankaccount_autocomplete_element_response_convertToJSON(bankaccount_autocomplete_element_response_t *bankaccount_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // bankaccount_autocomplete_element_response->pki_bankaccount_id
    if (!bankaccount_autocomplete_element_response->pki_bankaccount_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBankaccountID", bankaccount_autocomplete_element_response->pki_bankaccount_id) == NULL) {
    goto fail; //Numeric
    }


    // bankaccount_autocomplete_element_response->s_bankaccount_bankname
    if (!bankaccount_autocomplete_element_response->s_bankaccount_bankname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBankaccountBankname", bankaccount_autocomplete_element_response->s_bankaccount_bankname) == NULL) {
    goto fail; //String
    }


    // bankaccount_autocomplete_element_response->b_bankaccount_isactive
    if (!bankaccount_autocomplete_element_response->b_bankaccount_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBankaccountIsactive", bankaccount_autocomplete_element_response->b_bankaccount_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

bankaccount_autocomplete_element_response_t *bankaccount_autocomplete_element_response_parseFromJSON(cJSON *bankaccount_autocomplete_element_responseJSON){

    bankaccount_autocomplete_element_response_t *bankaccount_autocomplete_element_response_local_var = NULL;

    // bankaccount_autocomplete_element_response->pki_bankaccount_id
    cJSON *pki_bankaccount_id = cJSON_GetObjectItemCaseSensitive(bankaccount_autocomplete_element_responseJSON, "pkiBankaccountID");
    if (cJSON_IsNull(pki_bankaccount_id)) {
        pki_bankaccount_id = NULL;
    }
    if (!pki_bankaccount_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_bankaccount_id))
    {
    goto end; //Numeric
    }

    // bankaccount_autocomplete_element_response->s_bankaccount_bankname
    cJSON *s_bankaccount_bankname = cJSON_GetObjectItemCaseSensitive(bankaccount_autocomplete_element_responseJSON, "sBankaccountBankname");
    if (cJSON_IsNull(s_bankaccount_bankname)) {
        s_bankaccount_bankname = NULL;
    }
    if (!s_bankaccount_bankname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_bankaccount_bankname))
    {
    goto end; //String
    }

    // bankaccount_autocomplete_element_response->b_bankaccount_isactive
    cJSON *b_bankaccount_isactive = cJSON_GetObjectItemCaseSensitive(bankaccount_autocomplete_element_responseJSON, "bBankaccountIsactive");
    if (cJSON_IsNull(b_bankaccount_isactive)) {
        b_bankaccount_isactive = NULL;
    }
    if (!b_bankaccount_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_bankaccount_isactive))
    {
    goto end; //Bool
    }


    bankaccount_autocomplete_element_response_local_var = bankaccount_autocomplete_element_response_create_internal (
        pki_bankaccount_id->valuedouble,
        strdup(s_bankaccount_bankname->valuestring),
        b_bankaccount_isactive->valueint
        );

    return bankaccount_autocomplete_element_response_local_var;
end:
    return NULL;

}
