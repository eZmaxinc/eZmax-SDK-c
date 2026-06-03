#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "creditcardmerchant_list_element.h"



static creditcardmerchant_list_element_t *creditcardmerchant_list_element_create_internal(
    int *pki_creditcardmerchant_id,
    int *fki_bankaccount_id,
    int *fki_language_id,
    int *b_creditcardmerchant_denyvisa,
    int *b_creditcardmerchant_denymastercard,
    int *b_creditcardmerchant_denyamex,
    int *b_creditcardmerchant_isactive,
    char *s_creditcardmerchant_description,
    char *s_creditcardmerchant_storeid
    ) {
    creditcardmerchant_list_element_t *creditcardmerchant_list_element_local_var = malloc(sizeof(creditcardmerchant_list_element_t));
    if (!creditcardmerchant_list_element_local_var) {
        return NULL;
    }
    memset(creditcardmerchant_list_element_local_var, 0, sizeof(creditcardmerchant_list_element_t));
    creditcardmerchant_list_element_local_var->_library_owned = 1;
    creditcardmerchant_list_element_local_var->pki_creditcardmerchant_id = pki_creditcardmerchant_id;
    creditcardmerchant_list_element_local_var->fki_bankaccount_id = fki_bankaccount_id;
    creditcardmerchant_list_element_local_var->fki_language_id = fki_language_id;
    creditcardmerchant_list_element_local_var->b_creditcardmerchant_denyvisa = b_creditcardmerchant_denyvisa;
    creditcardmerchant_list_element_local_var->b_creditcardmerchant_denymastercard = b_creditcardmerchant_denymastercard;
    creditcardmerchant_list_element_local_var->b_creditcardmerchant_denyamex = b_creditcardmerchant_denyamex;
    creditcardmerchant_list_element_local_var->b_creditcardmerchant_isactive = b_creditcardmerchant_isactive;
    creditcardmerchant_list_element_local_var->s_creditcardmerchant_description = s_creditcardmerchant_description;
    creditcardmerchant_list_element_local_var->s_creditcardmerchant_storeid = s_creditcardmerchant_storeid;
    return creditcardmerchant_list_element_local_var;
}

__attribute__((deprecated)) creditcardmerchant_list_element_t *creditcardmerchant_list_element_create(
    int *pki_creditcardmerchant_id,
    int *fki_bankaccount_id,
    int *fki_language_id,
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
    creditcardmerchant_list_element_t *result = creditcardmerchant_list_element_create_internal (
        pki_creditcardmerchant_id_copy,
        fki_bankaccount_id_copy,
        fki_language_id_copy,
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
        free(b_creditcardmerchant_denyvisa_copy);
        free(b_creditcardmerchant_denymastercard_copy);
        free(b_creditcardmerchant_denyamex_copy);
        free(b_creditcardmerchant_isactive_copy);
    }
    return result;
}

void creditcardmerchant_list_element_free(creditcardmerchant_list_element_t *creditcardmerchant_list_element) {
    if(NULL == creditcardmerchant_list_element){
        return ;
    }
    if(creditcardmerchant_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "creditcardmerchant_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (creditcardmerchant_list_element->pki_creditcardmerchant_id) {
        free(creditcardmerchant_list_element->pki_creditcardmerchant_id);
        creditcardmerchant_list_element->pki_creditcardmerchant_id = NULL;
    }
    if (creditcardmerchant_list_element->fki_bankaccount_id) {
        free(creditcardmerchant_list_element->fki_bankaccount_id);
        creditcardmerchant_list_element->fki_bankaccount_id = NULL;
    }
    if (creditcardmerchant_list_element->fki_language_id) {
        free(creditcardmerchant_list_element->fki_language_id);
        creditcardmerchant_list_element->fki_language_id = NULL;
    }
    if (creditcardmerchant_list_element->b_creditcardmerchant_denyvisa) {
        free(creditcardmerchant_list_element->b_creditcardmerchant_denyvisa);
        creditcardmerchant_list_element->b_creditcardmerchant_denyvisa = NULL;
    }
    if (creditcardmerchant_list_element->b_creditcardmerchant_denymastercard) {
        free(creditcardmerchant_list_element->b_creditcardmerchant_denymastercard);
        creditcardmerchant_list_element->b_creditcardmerchant_denymastercard = NULL;
    }
    if (creditcardmerchant_list_element->b_creditcardmerchant_denyamex) {
        free(creditcardmerchant_list_element->b_creditcardmerchant_denyamex);
        creditcardmerchant_list_element->b_creditcardmerchant_denyamex = NULL;
    }
    if (creditcardmerchant_list_element->b_creditcardmerchant_isactive) {
        free(creditcardmerchant_list_element->b_creditcardmerchant_isactive);
        creditcardmerchant_list_element->b_creditcardmerchant_isactive = NULL;
    }
    if (creditcardmerchant_list_element->s_creditcardmerchant_description) {
        free(creditcardmerchant_list_element->s_creditcardmerchant_description);
        creditcardmerchant_list_element->s_creditcardmerchant_description = NULL;
    }
    if (creditcardmerchant_list_element->s_creditcardmerchant_storeid) {
        free(creditcardmerchant_list_element->s_creditcardmerchant_storeid);
        creditcardmerchant_list_element->s_creditcardmerchant_storeid = NULL;
    }
    free(creditcardmerchant_list_element);
}

cJSON *creditcardmerchant_list_element_convertToJSON(creditcardmerchant_list_element_t *creditcardmerchant_list_element) {
    cJSON *item = cJSON_CreateObject();

    // creditcardmerchant_list_element->pki_creditcardmerchant_id
    if (!creditcardmerchant_list_element->pki_creditcardmerchant_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiCreditcardmerchantID", *creditcardmerchant_list_element->pki_creditcardmerchant_id) == NULL) {
    goto fail; //Numeric
    }


    // creditcardmerchant_list_element->fki_bankaccount_id
    if(creditcardmerchant_list_element->fki_bankaccount_id) {
    if(cJSON_AddNumberToObject(item, "fkiBankaccountID", *creditcardmerchant_list_element->fki_bankaccount_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // creditcardmerchant_list_element->fki_language_id
    if(creditcardmerchant_list_element->fki_language_id) {
    if(cJSON_AddNumberToObject(item, "fkiLanguageID", *creditcardmerchant_list_element->fki_language_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // creditcardmerchant_list_element->b_creditcardmerchant_denyvisa
    if (!creditcardmerchant_list_element->b_creditcardmerchant_denyvisa) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenyvisa", *creditcardmerchant_list_element->b_creditcardmerchant_denyvisa) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_list_element->b_creditcardmerchant_denymastercard
    if (!creditcardmerchant_list_element->b_creditcardmerchant_denymastercard) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenymastercard", *creditcardmerchant_list_element->b_creditcardmerchant_denymastercard) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_list_element->b_creditcardmerchant_denyamex
    if (!creditcardmerchant_list_element->b_creditcardmerchant_denyamex) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantDenyamex", *creditcardmerchant_list_element->b_creditcardmerchant_denyamex) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_list_element->b_creditcardmerchant_isactive
    if (!creditcardmerchant_list_element->b_creditcardmerchant_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bCreditcardmerchantIsactive", *creditcardmerchant_list_element->b_creditcardmerchant_isactive) == NULL) {
    goto fail; //Bool
    }


    // creditcardmerchant_list_element->s_creditcardmerchant_description
    if (!creditcardmerchant_list_element->s_creditcardmerchant_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardmerchantDescription", creditcardmerchant_list_element->s_creditcardmerchant_description) == NULL) {
    goto fail; //String
    }


    // creditcardmerchant_list_element->s_creditcardmerchant_storeid
    if (!creditcardmerchant_list_element->s_creditcardmerchant_storeid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCreditcardmerchantStoreid", creditcardmerchant_list_element->s_creditcardmerchant_storeid) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

creditcardmerchant_list_element_t *creditcardmerchant_list_element_parseFromJSON(cJSON *creditcardmerchant_list_elementJSON){

    creditcardmerchant_list_element_t *creditcardmerchant_list_element_local_var = NULL;

    // define the local variable for creditcardmerchant_list_element->pki_creditcardmerchant_id
    int *pki_creditcardmerchant_id_local_var = NULL;

    // define the local variable for creditcardmerchant_list_element->fki_bankaccount_id
    int *fki_bankaccount_id_local_var = NULL;

    // define the local variable for creditcardmerchant_list_element->fki_language_id
    int *fki_language_id_local_var = NULL;

    // define the local variable for creditcardmerchant_list_element->b_creditcardmerchant_denyvisa
    int *b_creditcardmerchant_denyvisa_local_var = NULL;

    // define the local variable for creditcardmerchant_list_element->b_creditcardmerchant_denymastercard
    int *b_creditcardmerchant_denymastercard_local_var = NULL;

    // define the local variable for creditcardmerchant_list_element->b_creditcardmerchant_denyamex
    int *b_creditcardmerchant_denyamex_local_var = NULL;

    // define the local variable for creditcardmerchant_list_element->b_creditcardmerchant_isactive
    int *b_creditcardmerchant_isactive_local_var = NULL;

    char *s_creditcardmerchant_description_local_str = NULL;

    char *s_creditcardmerchant_storeid_local_str = NULL;

    // creditcardmerchant_list_element->pki_creditcardmerchant_id
    cJSON *pki_creditcardmerchant_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_list_elementJSON, "pkiCreditcardmerchantID");
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

    // creditcardmerchant_list_element->fki_bankaccount_id
    cJSON *fki_bankaccount_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_list_elementJSON, "fkiBankaccountID");
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

    // creditcardmerchant_list_element->fki_language_id
    cJSON *fki_language_id = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_list_elementJSON, "fkiLanguageID");
    if (cJSON_IsNull(fki_language_id)) {
        fki_language_id = NULL;
    }
    if (fki_language_id) { 
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
    }

    // creditcardmerchant_list_element->b_creditcardmerchant_denyvisa
    cJSON *b_creditcardmerchant_denyvisa = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_list_elementJSON, "bCreditcardmerchantDenyvisa");
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

    // creditcardmerchant_list_element->b_creditcardmerchant_denymastercard
    cJSON *b_creditcardmerchant_denymastercard = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_list_elementJSON, "bCreditcardmerchantDenymastercard");
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

    // creditcardmerchant_list_element->b_creditcardmerchant_denyamex
    cJSON *b_creditcardmerchant_denyamex = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_list_elementJSON, "bCreditcardmerchantDenyamex");
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

    // creditcardmerchant_list_element->b_creditcardmerchant_isactive
    cJSON *b_creditcardmerchant_isactive = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_list_elementJSON, "bCreditcardmerchantIsactive");
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

    // creditcardmerchant_list_element->s_creditcardmerchant_description
    cJSON *s_creditcardmerchant_description = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_list_elementJSON, "sCreditcardmerchantDescription");
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

    // creditcardmerchant_list_element->s_creditcardmerchant_storeid
    cJSON *s_creditcardmerchant_storeid = cJSON_GetObjectItemCaseSensitive(creditcardmerchant_list_elementJSON, "sCreditcardmerchantStoreid");
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


    if (s_creditcardmerchant_description && !cJSON_IsNull(s_creditcardmerchant_description)) s_creditcardmerchant_description_local_str = strdup(s_creditcardmerchant_description->valuestring);
    if (s_creditcardmerchant_storeid && !cJSON_IsNull(s_creditcardmerchant_storeid)) s_creditcardmerchant_storeid_local_str = strdup(s_creditcardmerchant_storeid->valuestring);

    creditcardmerchant_list_element_local_var = creditcardmerchant_list_element_create_internal (
        pki_creditcardmerchant_id_local_var,
        fki_bankaccount_id_local_var,
        fki_language_id_local_var,
        b_creditcardmerchant_denyvisa_local_var,
        b_creditcardmerchant_denymastercard_local_var,
        b_creditcardmerchant_denyamex_local_var,
        b_creditcardmerchant_isactive_local_var,
        s_creditcardmerchant_description_local_str,
        s_creditcardmerchant_storeid_local_str
        );

    if (!creditcardmerchant_list_element_local_var) {
        goto end;
    }

    return creditcardmerchant_list_element_local_var;
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
