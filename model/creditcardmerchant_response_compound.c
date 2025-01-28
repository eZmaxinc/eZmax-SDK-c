#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardmerchant_response_compound.h"



static creditcardmerchant_response_compound_t *creditcardmerchant_response_compound_create_internal(
    int pki_creditcardmerchant_id,
    int fki_bankaccount_id,
    char *s_bankaccount_bankname,
    int fki_language_id,
    char *s_language_name_x,
    int b_creditcardmerchant_denyvisa,
    int b_creditcardmerchant_denymastercard,
    int b_creditcardmerchant_denyamex,
    int b_creditcardmerchant_isactive,
    char *s_creditcardmerchant_description,
    char *s_creditcardmerchant_storeid
    ) {
    creditcardmerchant_response_compound_t *creditcardmerchant_response_compound_local_var = malloc(sizeof(creditcardmerchant_response_compound_t));
    if (!creditcardmerchant_response_compound_local_var) {
        return NULL;
    }
    creditcardmerchant_response_compound_local_var->pki_creditcardmerchant_id = pki_creditcardmerchant_id;
    creditcardmerchant_response_compound_local_var->fki_bankaccount_id = fki_bankaccount_id;
    creditcardmerchant_response_compound_local_var->s_bankaccount_bankname = s_bankaccount_bankname;
    creditcardmerchant_response_compound_local_var->fki_language_id = fki_language_id;
    creditcardmerchant_response_compound_local_var->s_language_name_x = s_language_name_x;
    creditcardmerchant_response_compound_local_var->b_creditcardmerchant_denyvisa = b_creditcardmerchant_denyvisa;
    creditcardmerchant_response_compound_local_var->b_creditcardmerchant_denymastercard = b_creditcardmerchant_denymastercard;
    creditcardmerchant_response_compound_local_var->b_creditcardmerchant_denyamex = b_creditcardmerchant_denyamex;
    creditcardmerchant_response_compound_local_var->b_creditcardmerchant_isactive = b_creditcardmerchant_isactive;
    creditcardmerchant_response_compound_local_var->s_creditcardmerchant_description = s_creditcardmerchant_description;
    creditcardmerchant_response_compound_local_var->s_creditcardmerchant_storeid = s_creditcardmerchant_storeid;

    creditcardmerchant_response_compound_local_var->_library_owned = 1;
    return creditcardmerchant_response_compound_local_var;
}

__attribute__((deprecated)) creditcardmerchant_response_compound_t *creditcardmerchant_response_compound_create(
    int pki_creditcardmerchant_id,
    int fki_bankaccount_id,
    char *s_bankaccount_bankname,
    int fki_language_id,
    char *s_language_name_x,
    int b_creditcardmerchant_denyvisa,
    int b_creditcardmerchant_denymastercard,
    int b_creditcardmerchant_denyamex,
    int b_creditcardmerchant_isactive,
    char *s_creditcardmerchant_description,
    char *s_creditcardmerchant_storeid
    ) {
    return creditcardmerchant_response_compound_create_internal (
        pki_creditcardmerchant_id,
        fki_bankaccount_id,
        s_bankaccount_bankname,
        fki_language_id,
        s_language_name_x,
        b_creditcardmerchant_denyvisa,
        b_creditcardmerchant_denymastercard,
        b_creditcardmerchant_denyamex,
        b_creditcardmerchant_isactive,
        s_creditcardmerchant_description,
        s_creditcardmerchant_storeid
        );
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
    if (creditcardmerchant_response_compound->s_bankaccount_bankname) {
        free(creditcardmerchant_response_compound->s_bankaccount_bankname);
        creditcardmerchant_response_compound->s_bankaccount_bankname = NULL;
    }
    if (creditcardmerchant_response_compound->s_language_name_x) {
        free(creditcardmerchant_response_compound->s_language_name_x);
        creditcardmerchant_response_compound->s_language_name_x = NULL;
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
    if(cJSON_AddNumberToObject(item, "pkiCreditcardmerchantID", creditcardmerchant_response_compound->pki_creditcardmerchant_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardmerchant_response_compound->fki_bankaccount_id
    if (!creditcardmerchant_response_compound->fki_bankaccount_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBankaccountID", creditcardmerchant_response_compound->fki_bankaccount_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardmerchant_response_compound->s_bankaccount_bankname
    if(creditcardmerchant_response_compound->s_bankaccount_bankname) {
    if(cJSON_AddStringToObject(item, "sBankaccountBankname", creditcardmerchant_response_compound->s_bankaccount_bankname) == NULL) {
    goto fail; //String
    }
    }


    // creditcardmerchant_response_compound->fki_language_id
    if(creditcardmerchant_response_compound->fki_language_id) {
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", creditcardmerchant_response_compound->fki_language_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // creditcardmerchant_response_compound->s_language_name_x
    if(creditcardmerchant_response_compound->s_language_name_x) {
    if(cJSON_AddStringToObject(item, "sLanguageNameX", creditcardmerchant_response_compound->s_language_name_x) == NULL) {
    goto fail; //String
    }
    }


    // creditcardmerchant_response_compound->b_creditcardmerchant_denyvisa
    if (!creditcardmerchant_response_compound->b_creditcardmerchant_denyvisa) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenyvisa", creditcardmerchant_response_compound->b_creditcardmerchant_denyvisa) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_response_compound->b_creditcardmerchant_denymastercard
    if (!creditcardmerchant_response_compound->b_creditcardmerchant_denymastercard) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenymastercard", creditcardmerchant_response_compound->b_creditcardmerchant_denymastercard) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_response_compound->b_creditcardmerchant_denyamex
    if (!creditcardmerchant_response_compound->b_creditcardmerchant_denyamex) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenyamex", creditcardmerchant_response_compound->b_creditcardmerchant_denyamex) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_response_compound->b_creditcardmerchant_isactive
    if (!creditcardmerchant_response_compound->b_creditcardmerchant_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantIsactive", creditcardmerchant_response_compound->b_creditcardmerchant_isactive) == NULL) {
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

    // creditcardmerchant_response_compound->fki_bankaccount_id
    cJSON *fki_bankaccount_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "fkiBankaccountID");
    if (cJSON_IsNull(fki_bankaccount_id)) {
        fki_bankaccount_id = NULL;
    }
    if (!fki_bankaccount_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_bankaccount_id))
    {
    goto end; //Numeric
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

    // creditcardmerchant_response_compound->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (fki_language_id) { 
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }
    }

    // creditcardmerchant_response_compound->s_language_name_x
    cJSON *s_language_name_x = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_response_compoundJSON, "sLanguageNameX");
    if (cJSON_IsNull(s_language_name_x)) {
        s_language_name_x = NULL;
    }
    if (s_language_name_x) { 
    if(!cJSON_IsString(s_language_name_x) && !cJSON_IsNull(s_language_name_x))
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


    creditcardmerchant_response_compound_local_var = creditcardmerchant_response_compound_create_internal (
        pki_creditcardmerchant_id->valuedouble,
        fki_bankaccount_id->valuedouble,
        s_bankaccount_bankname && !cJSON_IsNull(s_bankaccount_bankname) ? strdup(s_bankaccount_bankname->valuestring) : NULL,
        fki_language_id ? fki_language_id->valuedouble : 0,
        s_language_name_x && !cJSON_IsNull(s_language_name_x) ? strdup(s_language_name_x->valuestring) : NULL,
        b_creditcardmerchant_denyvisa->valueint,
        b_creditcardmerchant_denymastercard->valueint,
        b_creditcardmerchant_denyamex->valueint,
        b_creditcardmerchant_isactive->valueint,
        strdup(s_creditcardmerchant_description->valuestring),
        strdup(s_creditcardmerchant_storeid->valuestring)
        );

    return creditcardmerchant_response_compound_local_var;
end:
    return NULL;

}
