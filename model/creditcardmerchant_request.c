#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardmerchant_request.h"



static creditcardmerchant_request_t *creditcardmerchant_request_create_internal(
    int pki_creditcardmerchant_id,
    int fki_bankaccount_id,
    int fki_language_id,
    int b_creditcardmerchant_denyvisa,
    int b_creditcardmerchant_denymastercard,
    int b_creditcardmerchant_denyamex,
    int b_creditcardmerchant_isactive,
    char *s_creditcardmerchant_apitoken,
    char *s_creditcardmerchant_description,
    char *s_creditcardmerchant_storeid
    ) {
    creditcardmerchant_request_t *creditcardmerchant_request_local_var = malloc(sizeof(creditcardmerchant_request_t));
    if (!creditcardmerchant_request_local_var) {
        return NULL;
    }
    creditcardmerchant_request_local_var->pki_creditcardmerchant_id = pki_creditcardmerchant_id;
    creditcardmerchant_request_local_var->fki_bankaccount_id = fki_bankaccount_id;
    creditcardmerchant_request_local_var->fki_language_id = fki_language_id;
    creditcardmerchant_request_local_var->b_creditcardmerchant_denyvisa = b_creditcardmerchant_denyvisa;
    creditcardmerchant_request_local_var->b_creditcardmerchant_denymastercard = b_creditcardmerchant_denymastercard;
    creditcardmerchant_request_local_var->b_creditcardmerchant_denyamex = b_creditcardmerchant_denyamex;
    creditcardmerchant_request_local_var->b_creditcardmerchant_isactive = b_creditcardmerchant_isactive;
    creditcardmerchant_request_local_var->s_creditcardmerchant_apitoken = s_creditcardmerchant_apitoken;
    creditcardmerchant_request_local_var->s_creditcardmerchant_description = s_creditcardmerchant_description;
    creditcardmerchant_request_local_var->s_creditcardmerchant_storeid = s_creditcardmerchant_storeid;

    creditcardmerchant_request_local_var->_library_owned = 1;
    return creditcardmerchant_request_local_var;
}

__attribute__((deprecated)) creditcardmerchant_request_t *creditcardmerchant_request_create(
    int pki_creditcardmerchant_id,
    int fki_bankaccount_id,
    int fki_language_id,
    int b_creditcardmerchant_denyvisa,
    int b_creditcardmerchant_denymastercard,
    int b_creditcardmerchant_denyamex,
    int b_creditcardmerchant_isactive,
    char *s_creditcardmerchant_apitoken,
    char *s_creditcardmerchant_description,
    char *s_creditcardmerchant_storeid
    ) {
    return creditcardmerchant_request_create_internal (
        pki_creditcardmerchant_id,
        fki_bankaccount_id,
        fki_language_id,
        b_creditcardmerchant_denyvisa,
        b_creditcardmerchant_denymastercard,
        b_creditcardmerchant_denyamex,
        b_creditcardmerchant_isactive,
        s_creditcardmerchant_apitoken,
        s_creditcardmerchant_description,
        s_creditcardmerchant_storeid
        );
}

void creditcardmerchant_request_free(creditcardmerchant_request_t *creditcardmerchant_request) {
    if(NULL == creditcardmerchant_request){
        return ;
    }
    if(creditcardmerchant_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardmerchant_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardmerchant_request->s_creditcardmerchant_apitoken) {
        free(creditcardmerchant_request->s_creditcardmerchant_apitoken);
        creditcardmerchant_request->s_creditcardmerchant_apitoken = NULL;
    }
    if (creditcardmerchant_request->s_creditcardmerchant_description) {
        free(creditcardmerchant_request->s_creditcardmerchant_description);
        creditcardmerchant_request->s_creditcardmerchant_description = NULL;
    }
    if (creditcardmerchant_request->s_creditcardmerchant_storeid) {
        free(creditcardmerchant_request->s_creditcardmerchant_storeid);
        creditcardmerchant_request->s_creditcardmerchant_storeid = NULL;
    }
    free(creditcardmerchant_request);
}

cJSON *creditcardmerchant_request_convertToJSON(creditcardmerchant_request_t *creditcardmerchant_request) {
    cJSON *item = cJSON_CreateObject();

    // creditcardmerchant_request->pki_creditcardmerchant_id
    if(creditcardmerchant_request->pki_creditcardmerchant_id) {
    if(cJSON_AddNumberToObject(item, "pkiCreditcardmerchantID", creditcardmerchant_request->pki_creditcardmerchant_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // creditcardmerchant_request->fki_bankaccount_id
    if (!creditcardmerchant_request->fki_bankaccount_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBankaccountID", creditcardmerchant_request->fki_bankaccount_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardmerchant_request->fki_language_id
    if(creditcardmerchant_request->fki_language_id) {
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", creditcardmerchant_request->fki_language_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // creditcardmerchant_request->b_creditcardmerchant_denyvisa
    if (!creditcardmerchant_request->b_creditcardmerchant_denyvisa) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenyvisa", creditcardmerchant_request->b_creditcardmerchant_denyvisa) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_request->b_creditcardmerchant_denymastercard
    if (!creditcardmerchant_request->b_creditcardmerchant_denymastercard) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenymastercard", creditcardmerchant_request->b_creditcardmerchant_denymastercard) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_request->b_creditcardmerchant_denyamex
    if (!creditcardmerchant_request->b_creditcardmerchant_denyamex) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenyamex", creditcardmerchant_request->b_creditcardmerchant_denyamex) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_request->b_creditcardmerchant_isactive
    if (!creditcardmerchant_request->b_creditcardmerchant_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantIsactive", creditcardmerchant_request->b_creditcardmerchant_isactive) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_request->s_creditcardmerchant_apitoken
    if(creditcardmerchant_request->s_creditcardmerchant_apitoken) {
    if(cJSON_AddStringToObject(item, "sCreditcardmerchantApitoken", creditcardmerchant_request->s_creditcardmerchant_apitoken) == NULL) {
    goto fail; //String
    }
    }


    // creditcardmerchant_request->s_creditcardmerchant_description
    if (!creditcardmerchant_request->s_creditcardmerchant_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardmerchantDescription", creditcardmerchant_request->s_creditcardmerchant_description) == NULL) {
    goto fail; //String
    }


    // creditcardmerchant_request->s_creditcardmerchant_storeid
    if (!creditcardmerchant_request->s_creditcardmerchant_storeid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardmerchantStoreid", creditcardmerchant_request->s_creditcardmerchant_storeid) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardmerchant_request_t *creditcardmerchant_request_parseFromJSON(cJSON *creditcardmerchant_requestJSON){

    creditcardmerchant_request_t *creditcardmerchant_request_local_var = NULL;

    // creditcardmerchant_request->pki_creditcardmerchant_id
    cJSON *pki_creditcardmerchant_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_requestJSON, "pkiCreditcardmerchantID");
    if (cJSON_IsNull(pki_creditcardmerchant_id)) {
        pki_creditcardmerchant_id = NULL;
    }
    if (pki_creditcardmerchant_id) { 
    if(!cJSON_IsNumber(pki_creditcardmerchant_id))
    {
    goto end; //Numeric
    }
    }

    // creditcardmerchant_request->fki_bankaccount_id
    cJSON *fki_bankaccount_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_requestJSON, "fkiBankaccountID");
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

    // creditcardmerchant_request->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_requestJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (fki_language_id) { 
    if(!cJSON_IsNumber(fki_language_id))
    {
    goto end; //Numeric
    }
    }

    // creditcardmerchant_request->b_creditcardmerchant_denyvisa
    cJSON *b_creditcardmerchant_denyvisa = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_requestJSON, "bCreditcardmerchantDenyvisa");
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

    // creditcardmerchant_request->b_creditcardmerchant_denymastercard
    cJSON *b_creditcardmerchant_denymastercard = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_requestJSON, "bCreditcardmerchantDenymastercard");
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

    // creditcardmerchant_request->b_creditcardmerchant_denyamex
    cJSON *b_creditcardmerchant_denyamex = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_requestJSON, "bCreditcardmerchantDenyamex");
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

    // creditcardmerchant_request->b_creditcardmerchant_isactive
    cJSON *b_creditcardmerchant_isactive = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_requestJSON, "bCreditcardmerchantIsactive");
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

    // creditcardmerchant_request->s_creditcardmerchant_apitoken
    cJSON *s_creditcardmerchant_apitoken = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_requestJSON, "sCreditcardmerchantApitoken");
    if (cJSON_IsNull(s_creditcardmerchant_apitoken)) {
        s_creditcardmerchant_apitoken = NULL;
    }
    if (s_creditcardmerchant_apitoken) { 
    if(!cJSON_IsString(s_creditcardmerchant_apitoken) && !cJSON_IsNull(s_creditcardmerchant_apitoken))
    {
    goto end; //String
    }
    }

    // creditcardmerchant_request->s_creditcardmerchant_description
    cJSON *s_creditcardmerchant_description = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_requestJSON, "sCreditcardmerchantDescription");
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

    // creditcardmerchant_request->s_creditcardmerchant_storeid
    cJSON *s_creditcardmerchant_storeid = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_requestJSON, "sCreditcardmerchantStoreid");
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


    creditcardmerchant_request_local_var = creditcardmerchant_request_create_internal (
        pki_creditcardmerchant_id ? pki_creditcardmerchant_id->valuedouble : 0,
        fki_bankaccount_id->valuedouble,
        fki_language_id ? fki_language_id->valuedouble : 0,
        b_creditcardmerchant_denyvisa->valueint,
        b_creditcardmerchant_denymastercard->valueint,
        b_creditcardmerchant_denyamex->valueint,
        b_creditcardmerchant_isactive->valueint,
        s_creditcardmerchant_apitoken && !cJSON_IsNull(s_creditcardmerchant_apitoken) ? strdup(s_creditcardmerchant_apitoken->valuestring) : NULL,
        strdup(s_creditcardmerchant_description->valuestring),
        strdup(s_creditcardmerchant_storeid->valuestring)
        );

    return creditcardmerchant_request_local_var;
end:
    return NULL;

}
