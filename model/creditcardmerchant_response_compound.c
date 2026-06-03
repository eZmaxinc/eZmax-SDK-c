#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardmerchant_response_compound.h"



static creditcardmerchant_response_compound_t *creditcardmerchant_response_compound_create_internal(
    int *pki_creditcardmerchant_id,
    int *fki_bankaccount_id,
    int *fki_language_id,
    char *s_language_name_x,
    int *fki_currency_id,
    char *s_currency_description_x,
    char *s_bankaccount_bankname,
    int *b_creditcardmerchant_denyvisa,
    int *b_creditcardmerchant_denymastercard,
    int *b_creditcardmerchant_denyamex,
    int *b_creditcardmerchant_isactive,
    char *s_creditcardmerchant_description,
    char *s_creditcardmerchant_storeid
    ) {
    creditcardmerchant_response_compound_t *creditcardmerchant_response_compound_local_var = malloc(sizeof(creditcardmerchant_response_compound_t));
    if (!creditcardmerchant_response_compound_local_var) {
        return NULL;
    }
    memset(creditcardmerchant_response_compound_local_var, 0, sizeof(creditcardmerchant_response_compound_t));
    creditcardmerchant_response_compound_local_var->_library_owned = 1;
    creditcardmerchant_response_compound_local_var->pki_creditcardmerchant_id = pki_creditcardmerchant_id;
    creditcardmerchant_response_compound_local_var->fki_bankaccount_id = fki_bankaccount_id;
    creditcardmerchant_response_compound_local_var->fki_language_id = fki_language_id;
    creditcardmerchant_response_compound_local_var->s_language_name_x = s_language_name_x;
    creditcardmerchant_response_compound_local_var->fki_currency_id = fki_currency_id;
    creditcardmerchant_response_compound_local_var->s_currency_description_x = s_currency_description_x;
    creditcardmerchant_response_compound_local_var->s_bankaccount_bankname = s_bankaccount_bankname;
    creditcardmerchant_response_compound_local_var->b_creditcardmerchant_denyvisa = b_creditcardmerchant_denyvisa;
    creditcardmerchant_response_compound_local_var->b_creditcardmerchant_denymastercard = b_creditcardmerchant_denymastercard;
    creditcardmerchant_response_compound_local_var->b_creditcardmerchant_denyamex = b_creditcardmerchant_denyamex;
    creditcardmerchant_response_compound_local_var->b_creditcardmerchant_isactive = b_creditcardmerchant_isactive;
    creditcardmerchant_response_compound_local_var->s_creditcardmerchant_description = s_creditcardmerchant_description;
    creditcardmerchant_response_compound_local_var->s_creditcardmerchant_storeid = s_creditcardmerchant_storeid;
    return creditcardmerchant_response_compound_local_var;
}

__attribute__((deprecated)) creditcardmerchant_response_compound_t *creditcardmerchant_response_compound_create(
    int *pki_creditcardmerchant_id,
    int *fki_bankaccount_id,
    int *fki_language_id,
    char *s_language_name_x,
    int *fki_currency_id,
    char *s_currency_description_x,
    char *s_bankaccount_bankname,
    int *b_creditcardmerchant_denyvisa,
    int *b_creditcardmerchant_denymastercard,
    int *b_creditcardmerchant_denyamex,
    int *b_creditcardmerchant_isactive,
    char *s_creditcardmerchant_description,
    char *s_creditcardmerchant_storeid
    ) {
    int *pki_creditcardmerchant_id_copy = NULL;
    if (pki_creditcardmerchant_id) {
        pki_creditcardmerchant_id_copy = malloc(sizeof(int));
        if (pki_creditcardmerchant_id_copy) *pki_creditcardmerchant_id_copy = *pki_creditcardmerchant_id;
    }
    int *fki_bankaccount_id_copy = NULL;
    if (fki_bankaccount_id) {
        fki_bankaccount_id_copy = malloc(sizeof(int));
        if (fki_bankaccount_id_copy) *fki_bankaccount_id_copy = *fki_bankaccount_id;
    }
    int *fki_language_id_copy = NULL;
    if (fki_language_id) {
        fki_language_id_copy = malloc(sizeof(int));
        if (fki_language_id_copy) *fki_language_id_copy = *fki_language_id;
    }
    int *fki_currency_id_copy = NULL;
    if (fki_currency_id) {
        fki_currency_id_copy = malloc(sizeof(int));
        if (fki_currency_id_copy) *fki_currency_id_copy = *fki_currency_id;
    }
    int *b_creditcardmerchant_denyvisa_copy = NULL;
    if (b_creditcardmerchant_denyvisa) {
        b_creditcardmerchant_denyvisa_copy = malloc(sizeof(int));
        if (b_creditcardmerchant_denyvisa_copy) *b_creditcardmerchant_denyvisa_copy = *b_creditcardmerchant_denyvisa;
    }
    int *b_creditcardmerchant_denymastercard_copy = NULL;
    if (b_creditcardmerchant_denymastercard) {
        b_creditcardmerchant_denymastercard_copy = malloc(sizeof(int));
        if (b_creditcardmerchant_denymastercard_copy) *b_creditcardmerchant_denymastercard_copy = *b_creditcardmerchant_denymastercard;
    }
    int *b_creditcardmerchant_denyamex_copy = NULL;
    if (b_creditcardmerchant_denyamex) {
        b_creditcardmerchant_denyamex_copy = malloc(sizeof(int));
        if (b_creditcardmerchant_denyamex_copy) *b_creditcardmerchant_denyamex_copy = *b_creditcardmerchant_denyamex;
    }
    int *b_creditcardmerchant_isactive_copy = NULL;
    if (b_creditcardmerchant_isactive) {
        b_creditcardmerchant_isactive_copy = malloc(sizeof(int));
        if (b_creditcardmerchant_isactive_copy) *b_creditcardmerchant_isactive_copy = *b_creditcardmerchant_isactive;
    }
    creditcardmerchant_response_compound_t *result = creditcardmerchant_response_compound_create_internal (
        pki_creditcardmerchant_id_copy,
        fki_bankaccount_id_copy,
        fki_language_id_copy,
        s_language_name_x,
        fki_currency_id_copy,
        s_currency_description_x,
        s_bankaccount_bankname,
        b_creditcardmerchant_denyvisa_copy,
        b_creditcardmerchant_denymastercard_copy,
        b_creditcardmerchant_denyamex_copy,
        b_creditcardmerchant_isactive_copy,
        s_creditcardmerchant_description,
        s_creditcardmerchant_storeid
        );
    if (!result) {
        free(pki_creditcardmerchant_id_copy);
        free(fki_bankaccount_id_copy);
        free(fki_language_id_copy);
        free(fki_currency_id_copy);
        free(b_creditcardmerchant_denyvisa_copy);
        free(b_creditcardmerchant_denymastercard_copy);
        free(b_creditcardmerchant_denyamex_copy);
        free(b_creditcardmerchant_isactive_copy);
    }
    return result;
}

void creditcardmerchant_response_compound_free(creditcardmerchant_response_compound_t *creditcardmerchant_response_compound) {
    if(NULL == creditcardmerchant_response_compound){
        return ;
    }
    if(creditcardmerchant_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardmerchant_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardmerchant_response_compound->pki_creditcardmerchant_id) {
        free(creditcardmerchant_response_compound->pki_creditcardmerchant_id);
        creditcardmerchant_response_compound->pki_creditcardmerchant_id = NULL;
    }
    if (creditcardmerchant_response_compound->fki_bankaccount_id) {
        free(creditcardmerchant_response_compound->fki_bankaccount_id);
        creditcardmerchant_response_compound->fki_bankaccount_id = NULL;
    }
    if (creditcardmerchant_response_compound->fki_language_id) {
        free(creditcardmerchant_response_compound->fki_language_id);
        creditcardmerchant_response_compound->fki_language_id = NULL;
    }
    if (creditcardmerchant_response_compound->s_language_name_x) {
        free(creditcardmerchant_response_compound->s_language_name_x);
        creditcardmerchant_response_compound->s_language_name_x = NULL;
    }
    if (creditcardmerchant_response_compound->fki_currency_id) {
        free(creditcardmerchant_response_compound->fki_currency_id);
        creditcardmerchant_response_compound->fki_currency_id = NULL;
    }
    if (creditcardmerchant_response_compound->s_currency_description_x) {
        free(creditcardmerchant_response_compound->s_currency_description_x);
        creditcardmerchant_response_compound->s_currency_description_x = NULL;
    }
    if (creditcardmerchant_response_compound->s_bankaccount_bankname) {
        free(creditcardmerchant_response_compound->s_bankaccount_bankname);
        creditcardmerchant_response_compound->s_bankaccount_bankname = NULL;
    }
    if (creditcardmerchant_response_compound->b_creditcardmerchant_denyvisa) {
        free(creditcardmerchant_response_compound->b_creditcardmerchant_denyvisa);
        creditcardmerchant_response_compound->b_creditcardmerchant_denyvisa = NULL;
    }
    if (creditcardmerchant_response_compound->b_creditcardmerchant_denymastercard) {
        free(creditcardmerchant_response_compound->b_creditcardmerchant_denymastercard);
        creditcardmerchant_response_compound->b_creditcardmerchant_denymastercard = NULL;
    }
    if (creditcardmerchant_response_compound->b_creditcardmerchant_denyamex) {
        free(creditcardmerchant_response_compound->b_creditcardmerchant_denyamex);
        creditcardmerchant_response_compound->b_creditcardmerchant_denyamex = NULL;
    }
    if (creditcardmerchant_response_compound->b_creditcardmerchant_isactive) {
        free(creditcardmerchant_response_compound->b_creditcardmerchant_isactive);
        creditcardmerchant_response_compound->b_creditcardmerchant_isactive = NULL;
    }
    if (creditcardmerchant_response_compound->s_creditcardmerchant_description) {
        free(creditcardmerchant_response_compound->s_creditcardmerchant_description);
        creditcardmerchant_response_compound->s_creditcardmerchant_description = NULL;
    }
    if (creditcardmerchant_response_compound->s_creditcardmerchant_storeid) {
        free(creditcardmerchant_response_compound->s_creditcardmerchant_storeid);
        creditcardmerchant_response_compound->s_creditcardmerchant_storeid = NULL;
    }
    free(creditcardmerchant_response_compound);
}

cJSON *creditcardmerchant_response_compound_convertToJSON(creditcardmerchant_response_compound_t *creditcardmerchant_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // creditcardmerchant_response_compound->pki_creditcardmerchant_id
    if (!creditcardmerchant_response_compound->pki_creditcardmerchant_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCreditcardmerchantID", *creditcardmerchant_response_compound->pki_creditcardmerchant_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardmerchant_response_compound->fki_bankaccount_id
    if(creditcardmerchant_response_compound->fki_bankaccount_id) {
    if(cJSON_AddNumberToObject(item, "fkiBankaccountID", *creditcardmerchant_response_compound->fki_bankaccount_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // creditcardmerchant_response_compound->fki_language_id
    if (!creditcardmerchant_response_compound->fki_language_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", *creditcardmerchant_response_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardmerchant_response_compound->s_language_name_x
    if (!creditcardmerchant_response_compound->s_language_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sLanguageNameX", creditcardmerchant_response_compound->s_language_name_x) == NULL) {
    goto fail; //String
    }


    // creditcardmerchant_response_compound->fki_currency_id
    if (!creditcardmerchant_response_compound->fki_currency_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCurrencyID", *creditcardmerchant_response_compound->fki_currency_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardmerchant_response_compound->s_currency_description_x
    if (!creditcardmerchant_response_compound->s_currency_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCurrencyDescriptionX", creditcardmerchant_response_compound->s_currency_description_x) == NULL) {
    goto fail; //String
    }


    // creditcardmerchant_response_compound->s_bankaccount_bankname
    if(creditcardmerchant_response_compound->s_bankaccount_bankname) {
    if(cJSON_AddStringToObject(item, "sBankaccountBankname", creditcardmerchant_response_compound->s_bankaccount_bankname) == NULL) {
    goto fail; //String
    }
    }


    // creditcardmerchant_response_compound->b_creditcardmerchant_denyvisa
    if (!creditcardmerchant_response_compound->b_creditcardmerchant_denyvisa) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenyvisa", *creditcardmerchant_response_compound->b_creditcardmerchant_denyvisa) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_response_compound->b_creditcardmerchant_denymastercard
    if (!creditcardmerchant_response_compound->b_creditcardmerchant_denymastercard) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenymastercard", *creditcardmerchant_response_compound->b_creditcardmerchant_denymastercard) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_response_compound->b_creditcardmerchant_denyamex
    if (!creditcardmerchant_response_compound->b_creditcardmerchant_denyamex) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenyamex", *creditcardmerchant_response_compound->b_creditcardmerchant_denyamex) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_response_compound->b_creditcardmerchant_isactive
    if (!creditcardmerchant_response_compound->b_creditcardmerchant_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantIsactive", *creditcardmerchant_response_compound->b_creditcardmerchant_isactive) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_response_compound->s_creditcardmerchant_description
    if (!creditcardmerchant_response_compound->s_creditcardmerchant_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardmerchantDescription", creditcardmerchant_response_compound->s_creditcardmerchant_description) == NULL) {
    goto fail; //String
    }


    // creditcardmerchant_response_compound->s_creditcardmerchant_storeid
    if (!creditcardmerchant_response_compound->s_creditcardmerchant_storeid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardmerchantStoreid", creditcardmerchant_response_compound->s_creditcardmerchant_storeid) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardmerchant_response_compound_t *creditcardmerchant_response_compound_parseFromJSON(cJSON *creditcardmerchant_response_compoundJSON){

    creditcardmerchant_response_compound_t *creditcardmerchant_response_compound_local_var = NULL;

    // define the local variable for creditcardmerchant_response_compound->pki_creditcardmerchant_id
    int *pki_creditcardmerchant_id_local_var = NULL;

    // define the local variable for creditcardmerchant_response_compound->fki_bankaccount_id
    int *fki_bankaccount_id_local_var = NULL;

    // define the local variable for creditcardmerchant_response_compound->fki_language_id
    int *fki_language_id_local_var = NULL;

    char *s_language_name_x_local_str = NULL;

    // define the local variable for creditcardmerchant_response_compound->fki_currency_id
    int *fki_currency_id_local_var = NULL;

    char *s_currency_description_x_local_str = NULL;

    char *s_bankaccount_bankname_local_str = NULL;

    // define the local variable for creditcardmerchant_response_compound->b_creditcardmerchant_denyvisa
    int *b_creditcardmerchant_denyvisa_local_var = NULL;

    // define the local variable for creditcardmerchant_response_compound->b_creditcardmerchant_denymastercard
    int *b_creditcardmerchant_denymastercard_local_var = NULL;

    // define the local variable for creditcardmerchant_response_compound->b_creditcardmerchant_denyamex
    int *b_creditcardmerchant_denyamex_local_var = NULL;

    // define the local variable for creditcardmerchant_response_compound->b_creditcardmerchant_isactive
    int *b_creditcardmerchant_isactive_local_var = NULL;

    char *s_creditcardmerchant_description_local_str = NULL;

    char *s_creditcardmerchant_storeid_local_str = NULL;

    // creditcardmerchant_response_compound->pki_creditcardmerchant_id
    cJSON *pki_creditcardmerchant_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "pkiCreditcardmerchantID");
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

    // creditcardmerchant_response_compound->fki_bankaccount_id
    cJSON *fki_bankaccount_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "fkiBankaccountID");
    if (cJSON_IsNull(fki_bankaccount_id)) {
        fki_bankaccount_id = NULL;
    }
    if (fki_bankaccount_id) { 
    if(!cJSON_IsNumber(fki_bankaccount_id))
    {
    goto end; //Numeric
    }
    fki_bankaccount_id_local_var = malloc(sizeof(int));
    if(!fki_bankaccount_id_local_var)
    {
        goto end;
    }
    *fki_bankaccount_id_local_var = fki_bankaccount_id->valuedouble;
    }

    // creditcardmerchant_response_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (!fki_language_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }
    fki_language_id_local_var = malloc(sizeof(int));
    if(!fki_language_id_local_var)
    {
        goto end;
    }
    *fki_language_id_local_var = fki_language_id->valuedouble;

    // creditcardmerchant_response_compound->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "sLanguageNameX");
    if (cJSON_IsNull(s_language_name_x)) {
        s_language_name_x = NULL;
    }
    if (!s_language_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_language_name_x))
    {
    goto end; //String
    }

    // creditcardmerchant_response_compound->fki_currency_id
    cJSON *fki_currency_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "fkiCurrencyID");
    if (cJSON_IsNull(fki_currency_id)) {
        fki_currency_id = NULL;
    }
    if (!fki_currency_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_currency_id))
    {
    goto end; //Numeric
    }
    fki_currency_id_local_var = malloc(sizeof(int));
    if(!fki_currency_id_local_var)
    {
        goto end;
    }
    *fki_currency_id_local_var = fki_currency_id->valuedouble;

    // creditcardmerchant_response_compound->s_currency_description_x
    cJSON *s_currency_description_x = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "sCurrencyDescriptionX");
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

    // creditcardmerchant_response_compound->s_bankaccount_bankname
    cJSON *s_bankaccount_bankname = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "sBankaccountBankname");
    if (cJSON_IsNull(s_bankaccount_bankname)) {
        s_bankaccount_bankname = NULL;
    }
    if (s_bankaccount_bankname) { 
    if(!cJSON_IsString(s_bankaccount_bankname) && !cJSON_IsNull(s_bankaccount_bankname))
    {
    goto end; //String
    }
    }

    // creditcardmerchant_response_compound->b_creditcardmerchant_denyvisa
    cJSON *b_creditcardmerchant_denyvisa = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "bCreditcardmerchantDenyvisa");
    if (cJSON_IsNull(b_creditcardmerchant_denyvisa)) {
        b_creditcardmerchant_denyvisa = NULL;
    }
    if (!b_creditcardmerchant_denyvisa) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardmerchant_denyvisa))
    {
    goto end; //Bool
    }
    b_creditcardmerchant_denyvisa_local_var = malloc(sizeof(int));
    if(!b_creditcardmerchant_denyvisa_local_var)
    {
        goto end;
    }
    *b_creditcardmerchant_denyvisa_local_var = b_creditcardmerchant_denyvisa->valueint;

    // creditcardmerchant_response_compound->b_creditcardmerchant_denymastercard
    cJSON *b_creditcardmerchant_denymastercard = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "bCreditcardmerchantDenymastercard");
    if (cJSON_IsNull(b_creditcardmerchant_denymastercard)) {
        b_creditcardmerchant_denymastercard = NULL;
    }
    if (!b_creditcardmerchant_denymastercard) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardmerchant_denymastercard))
    {
    goto end; //Bool
    }
    b_creditcardmerchant_denymastercard_local_var = malloc(sizeof(int));
    if(!b_creditcardmerchant_denymastercard_local_var)
    {
        goto end;
    }
    *b_creditcardmerchant_denymastercard_local_var = b_creditcardmerchant_denymastercard->valueint;

    // creditcardmerchant_response_compound->b_creditcardmerchant_denyamex
    cJSON *b_creditcardmerchant_denyamex = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "bCreditcardmerchantDenyamex");
    if (cJSON_IsNull(b_creditcardmerchant_denyamex)) {
        b_creditcardmerchant_denyamex = NULL;
    }
    if (!b_creditcardmerchant_denyamex) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_creditcardmerchant_denyamex))
    {
    goto end; //Bool
    }
    b_creditcardmerchant_denyamex_local_var = malloc(sizeof(int));
    if(!b_creditcardmerchant_denyamex_local_var)
    {
        goto end;
    }
    *b_creditcardmerchant_denyamex_local_var = b_creditcardmerchant_denyamex->valueint;

    // creditcardmerchant_response_compound->b_creditcardmerchant_isactive
    cJSON *b_creditcardmerchant_isactive = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "bCreditcardmerchantIsactive");
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

    // creditcardmerchant_response_compound->s_creditcardmerchant_description
    cJSON *s_creditcardmerchant_description = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "sCreditcardmerchantDescription");
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

    // creditcardmerchant_response_compound->s_creditcardmerchant_storeid
    cJSON *s_creditcardmerchant_storeid = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "sCreditcardmerchantStoreid");
    if (cJSON_IsNull(s_creditcardmerchant_storeid)) {
        s_creditcardmerchant_storeid = NULL;
    }
    if (!s_creditcardmerchant_storeid) {
        goto end;
    }

    
    if(!cJSON_IsString(s_creditcardmerchant_storeid))
    {
    goto end; //String
    }


    if (s_language_name_x && !cJSON_IsNull(s_language_name_x)) s_language_name_x_local_str = strdup(s_language_name_x->valuestring);
    if (s_currency_description_x && !cJSON_IsNull(s_currency_description_x)) s_currency_description_x_local_str = strdup(s_currency_description_x->valuestring);
    if (s_bankaccount_bankname && !cJSON_IsNull(s_bankaccount_bankname)) s_bankaccount_bankname_local_str = strdup(s_bankaccount_bankname->valuestring);
    if (s_creditcardmerchant_description && !cJSON_IsNull(s_creditcardmerchant_description)) s_creditcardmerchant_description_local_str = strdup(s_creditcardmerchant_description->valuestring);
    if (s_creditcardmerchant_storeid && !cJSON_IsNull(s_creditcardmerchant_storeid)) s_creditcardmerchant_storeid_local_str = strdup(s_creditcardmerchant_storeid->valuestring);

    creditcardmerchant_response_compound_local_var = creditcardmerchant_response_compound_create_internal (
        pki_creditcardmerchant_id_local_var,
        fki_bankaccount_id_local_var,
        fki_language_id_local_var,
        s_language_name_x_local_str,
        fki_currency_id_local_var,
        s_currency_description_x_local_str,
        s_bankaccount_bankname_local_str,
        b_creditcardmerchant_denyvisa_local_var,
        b_creditcardmerchant_denymastercard_local_var,
        b_creditcardmerchant_denyamex_local_var,
        b_creditcardmerchant_isactive_local_var,
        s_creditcardmerchant_description_local_str,
        s_creditcardmerchant_storeid_local_str
        );

    if (!creditcardmerchant_response_compound_local_var) {
        goto end;
    }

    return creditcardmerchant_response_compound_local_var;
end:
    if (pki_creditcardmerchant_id_local_var) {
        free(pki_creditcardmerchant_id_local_var);
        pki_creditcardmerchant_id_local_var = NULL;
    }
    if (fki_bankaccount_id_local_var) {
        free(fki_bankaccount_id_local_var);
        fki_bankaccount_id_local_var = NULL;
    }
    if (fki_language_id_local_var) {
        free(fki_language_id_local_var);
        fki_language_id_local_var = NULL;
    }
    if (s_language_name_x_local_str) {
        free(s_language_name_x_local_str);
        s_language_name_x_local_str = NULL;
    }
    if (fki_currency_id_local_var) {
        free(fki_currency_id_local_var);
        fki_currency_id_local_var = NULL;
    }
    if (s_currency_description_x_local_str) {
        free(s_currency_description_x_local_str);
        s_currency_description_x_local_str = NULL;
    }
    if (s_bankaccount_bankname_local_str) {
        free(s_bankaccount_bankname_local_str);
        s_bankaccount_bankname_local_str = NULL;
    }
    if (b_creditcardmerchant_denyvisa_local_var) {
        free(b_creditcardmerchant_denyvisa_local_var);
        b_creditcardmerchant_denyvisa_local_var = NULL;
    }
    if (b_creditcardmerchant_denymastercard_local_var) {
        free(b_creditcardmerchant_denymastercard_local_var);
        b_creditcardmerchant_denymastercard_local_var = NULL;
    }
    if (b_creditcardmerchant_denyamex_local_var) {
        free(b_creditcardmerchant_denyamex_local_var);
        b_creditcardmerchant_denyamex_local_var = NULL;
    }
    if (b_creditcardmerchant_isactive_local_var) {
        free(b_creditcardmerchant_isactive_local_var);
        b_creditcardmerchant_isactive_local_var = NULL;
    }
    if (s_creditcardmerchant_description_local_str) {
        free(s_creditcardmerchant_description_local_str);
        s_creditcardmerchant_description_local_str = NULL;
    }
    if (s_creditcardmerchant_storeid_local_str) {
        free(s_creditcardmerchant_storeid_local_str);
        s_creditcardmerchant_storeid_local_str = NULL;
    }
    return NULL;

}
