#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bankaccount_list_element.h"



static bankaccount_list_element_t *bankaccount_list_element_create_internal(
    int *pki_bankaccount_id,
    char *s_bankaccount_bankname,
    char *s_bankaccount_transit,
    char *s_bankaccount_institution,
    char *s_bankaccount_account,
    char *s_bankaccount_number,
    ezmax_api_definition__full_field_e_bankaccount_type__e e_bankaccount_type,
    int *b_bankaccount_commissionprocessing,
    int *b_bankaccount_isactive,
    int *i_glaccount_code,
    char *s_glaccount_description_x
    ) {
    bankaccount_list_element_t *bankaccount_list_element_local_var = malloc(sizeof(bankaccount_list_element_t));
    if (!bankaccount_list_element_local_var) {
        return NULL;
    }
    memset(bankaccount_list_element_local_var, 0, sizeof(bankaccount_list_element_t));
    bankaccount_list_element_local_var->_library_owned = 1;
    bankaccount_list_element_local_var->pki_bankaccount_id = pki_bankaccount_id;
    bankaccount_list_element_local_var->s_bankaccount_bankname = s_bankaccount_bankname;
    bankaccount_list_element_local_var->s_bankaccount_transit = s_bankaccount_transit;
    bankaccount_list_element_local_var->s_bankaccount_institution = s_bankaccount_institution;
    bankaccount_list_element_local_var->s_bankaccount_account = s_bankaccount_account;
    bankaccount_list_element_local_var->s_bankaccount_number = s_bankaccount_number;
    bankaccount_list_element_local_var->e_bankaccount_type = e_bankaccount_type;
    bankaccount_list_element_local_var->b_bankaccount_commissionprocessing = b_bankaccount_commissionprocessing;
    bankaccount_list_element_local_var->b_bankaccount_isactive = b_bankaccount_isactive;
    bankaccount_list_element_local_var->i_glaccount_code = i_glaccount_code;
    bankaccount_list_element_local_var->s_glaccount_description_x = s_glaccount_description_x;
    return bankaccount_list_element_local_var;
}

__attribute__((deprecated)) bankaccount_list_element_t *bankaccount_list_element_create(
    int *pki_bankaccount_id,
    char *s_bankaccount_bankname,
    char *s_bankaccount_transit,
    char *s_bankaccount_institution,
    char *s_bankaccount_account,
    char *s_bankaccount_number,
    ezmax_api_definition__full_field_e_bankaccount_type__e e_bankaccount_type,
    int *b_bankaccount_commissionprocessing,
    int *b_bankaccount_isactive,
    int *i_glaccount_code,
    char *s_glaccount_description_x
    ) {
    int *pki_bankaccount_id_copy = NULL;
    if (pki_bankaccount_id) {
        pki_bankaccount_id_copy = malloc(sizeof(int));
        if (pki_bankaccount_id_copy) *pki_bankaccount_id_copy = *pki_bankaccount_id;
    }
    int *b_bankaccount_commissionprocessing_copy = NULL;
    if (b_bankaccount_commissionprocessing) {
        b_bankaccount_commissionprocessing_copy = malloc(sizeof(int));
        if (b_bankaccount_commissionprocessing_copy) *b_bankaccount_commissionprocessing_copy = *b_bankaccount_commissionprocessing;
    }
    int *b_bankaccount_isactive_copy = NULL;
    if (b_bankaccount_isactive) {
        b_bankaccount_isactive_copy = malloc(sizeof(int));
        if (b_bankaccount_isactive_copy) *b_bankaccount_isactive_copy = *b_bankaccount_isactive;
    }
    int *i_glaccount_code_copy = NULL;
    if (i_glaccount_code) {
        i_glaccount_code_copy = malloc(sizeof(int));
        if (i_glaccount_code_copy) *i_glaccount_code_copy = *i_glaccount_code;
    }
    bankaccount_list_element_t *result = bankaccount_list_element_create_internal (
        pki_bankaccount_id_copy,
        s_bankaccount_bankname,
        s_bankaccount_transit,
        s_bankaccount_institution,
        s_bankaccount_account,
        s_bankaccount_number,
        e_bankaccount_type,
        b_bankaccount_commissionprocessing_copy,
        b_bankaccount_isactive_copy,
        i_glaccount_code_copy,
        s_glaccount_description_x
        );
    if (!result) {
        free(pki_bankaccount_id_copy);
        free(b_bankaccount_commissionprocessing_copy);
        free(b_bankaccount_isactive_copy);
        free(i_glaccount_code_copy);
    }
    return result;
}

void bankaccount_list_element_free(bankaccount_list_element_t *bankaccount_list_element) {
    if(NULL == bankaccount_list_element){
        return ;
    }
    if(bankaccount_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "bankaccount_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (bankaccount_list_element->pki_bankaccount_id) {
        free(bankaccount_list_element->pki_bankaccount_id);
        bankaccount_list_element->pki_bankaccount_id = NULL;
    }
    if (bankaccount_list_element->s_bankaccount_bankname) {
        free(bankaccount_list_element->s_bankaccount_bankname);
        bankaccount_list_element->s_bankaccount_bankname = NULL;
    }
    if (bankaccount_list_element->s_bankaccount_transit) {
        free(bankaccount_list_element->s_bankaccount_transit);
        bankaccount_list_element->s_bankaccount_transit = NULL;
    }
    if (bankaccount_list_element->s_bankaccount_institution) {
        free(bankaccount_list_element->s_bankaccount_institution);
        bankaccount_list_element->s_bankaccount_institution = NULL;
    }
    if (bankaccount_list_element->s_bankaccount_account) {
        free(bankaccount_list_element->s_bankaccount_account);
        bankaccount_list_element->s_bankaccount_account = NULL;
    }
    if (bankaccount_list_element->s_bankaccount_number) {
        free(bankaccount_list_element->s_bankaccount_number);
        bankaccount_list_element->s_bankaccount_number = NULL;
    }
    if (bankaccount_list_element->b_bankaccount_commissionprocessing) {
        free(bankaccount_list_element->b_bankaccount_commissionprocessing);
        bankaccount_list_element->b_bankaccount_commissionprocessing = NULL;
    }
    if (bankaccount_list_element->b_bankaccount_isactive) {
        free(bankaccount_list_element->b_bankaccount_isactive);
        bankaccount_list_element->b_bankaccount_isactive = NULL;
    }
    if (bankaccount_list_element->i_glaccount_code) {
        free(bankaccount_list_element->i_glaccount_code);
        bankaccount_list_element->i_glaccount_code = NULL;
    }
    if (bankaccount_list_element->s_glaccount_description_x) {
        free(bankaccount_list_element->s_glaccount_description_x);
        bankaccount_list_element->s_glaccount_description_x = NULL;
    }
    free(bankaccount_list_element);
}

cJSON *bankaccount_list_element_convertToJSON(bankaccount_list_element_t *bankaccount_list_element) {
    cJSON *item = cJSON_CreateObject();

    // bankaccount_list_element->pki_bankaccount_id
    if (!bankaccount_list_element->pki_bankaccount_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBankaccountID", *bankaccount_list_element->pki_bankaccount_id) == NULL) {
    goto fail; //Numeric
    }


    // bankaccount_list_element->s_bankaccount_bankname
    if (!bankaccount_list_element->s_bankaccount_bankname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBankaccountBankname", bankaccount_list_element->s_bankaccount_bankname) == NULL) {
    goto fail; //String
    }


    // bankaccount_list_element->s_bankaccount_transit
    if (!bankaccount_list_element->s_bankaccount_transit) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBankaccountTransit", bankaccount_list_element->s_bankaccount_transit) == NULL) {
    goto fail; //String
    }


    // bankaccount_list_element->s_bankaccount_institution
    if (!bankaccount_list_element->s_bankaccount_institution) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBankaccountInstitution", bankaccount_list_element->s_bankaccount_institution) == NULL) {
    goto fail; //String
    }


    // bankaccount_list_element->s_bankaccount_account
    if (!bankaccount_list_element->s_bankaccount_account) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBankaccountAccount", bankaccount_list_element->s_bankaccount_account) == NULL) {
    goto fail; //String
    }


    // bankaccount_list_element->s_bankaccount_number
    if (!bankaccount_list_element->s_bankaccount_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBankaccountNumber", bankaccount_list_element->s_bankaccount_number) == NULL) {
    goto fail; //String
    }


    // bankaccount_list_element->e_bankaccount_type
    if(bankaccount_list_element->e_bankaccount_type != ezmax_api_definition__full_field_e_bankaccount_type__NULL) {
    cJSON *e_bankaccount_type_local_JSON = field_e_bankaccount_type_convertToJSON(bankaccount_list_element->e_bankaccount_type);
    if(e_bankaccount_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eBankaccountType", e_bankaccount_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // bankaccount_list_element->b_bankaccount_commissionprocessing
    if(bankaccount_list_element->b_bankaccount_commissionprocessing) {
    if(cJSON_AddBoolToObject(item, "bBankaccountCommissionprocessing", *bankaccount_list_element->b_bankaccount_commissionprocessing) == NULL) {
    goto fail; //Bool
    }
    }


    // bankaccount_list_element->b_bankaccount_isactive
    if (!bankaccount_list_element->b_bankaccount_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBankaccountIsactive", *bankaccount_list_element->b_bankaccount_isactive) == NULL) {
    goto fail; //Bool
    }


    // bankaccount_list_element->i_glaccount_code
    if (!bankaccount_list_element->i_glaccount_code) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iGlaccountCode", *bankaccount_list_element->i_glaccount_code) == NULL) {
    goto fail; //Numeric
    }


    // bankaccount_list_element->s_glaccount_description_x
    if (!bankaccount_list_element->s_glaccount_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sGlaccountDescriptionX", bankaccount_list_element->s_glaccount_description_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

bankaccount_list_element_t *bankaccount_list_element_parseFromJSON(cJSON *bankaccount_list_elementJSON){

    bankaccount_list_element_t *bankaccount_list_element_local_var = NULL;

    // define the local variable for bankaccount_list_element->pki_bankaccount_id
    int *pki_bankaccount_id_local_var = NULL;

    char *s_bankaccount_bankname_local_str = NULL;

    char *s_bankaccount_transit_local_str = NULL;

    char *s_bankaccount_institution_local_str = NULL;

    char *s_bankaccount_account_local_str = NULL;

    char *s_bankaccount_number_local_str = NULL;

    // define the local variable for bankaccount_list_element->e_bankaccount_type
    ezmax_api_definition__full_field_e_bankaccount_type__e e_bankaccount_type_local_nonprim = 0;

    // define the local variable for bankaccount_list_element->b_bankaccount_commissionprocessing
    int *b_bankaccount_commissionprocessing_local_var = NULL;

    // define the local variable for bankaccount_list_element->b_bankaccount_isactive
    int *b_bankaccount_isactive_local_var = NULL;

    // define the local variable for bankaccount_list_element->i_glaccount_code
    int *i_glaccount_code_local_var = NULL;

    char *s_glaccount_description_x_local_str = NULL;

    // bankaccount_list_element->pki_bankaccount_id
    cJSON *pki_bankaccount_id = cJSON_GetObjectItemCaseSensitive(bankaccount_list_elementJSON, "pkiBankaccountID");
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
    pki_bankaccount_id_local_var = malloc(sizeof(int));
    if(!pki_bankaccount_id_local_var)
    {
        goto end;
    }
    *pki_bankaccount_id_local_var = pki_bankaccount_id->valuedouble;

    // bankaccount_list_element->s_bankaccount_bankname
    cJSON *s_bankaccount_bankname = cJSON_GetObjectItemCaseSensitive(bankaccount_list_elementJSON, "sBankaccountBankname");
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

    // bankaccount_list_element->s_bankaccount_transit
    cJSON *s_bankaccount_transit = cJSON_GetObjectItemCaseSensitive(bankaccount_list_elementJSON, "sBankaccountTransit");
    if (cJSON_IsNull(s_bankaccount_transit)) {
        s_bankaccount_transit = NULL;
    }
    if (!s_bankaccount_transit) {
        goto end;
    }

    
    if(!cJSON_IsString(s_bankaccount_transit))
    {
    goto end; //String
    }

    // bankaccount_list_element->s_bankaccount_institution
    cJSON *s_bankaccount_institution = cJSON_GetObjectItemCaseSensitive(bankaccount_list_elementJSON, "sBankaccountInstitution");
    if (cJSON_IsNull(s_bankaccount_institution)) {
        s_bankaccount_institution = NULL;
    }
    if (!s_bankaccount_institution) {
        goto end;
    }

    
    if(!cJSON_IsString(s_bankaccount_institution))
    {
    goto end; //String
    }

    // bankaccount_list_element->s_bankaccount_account
    cJSON *s_bankaccount_account = cJSON_GetObjectItemCaseSensitive(bankaccount_list_elementJSON, "sBankaccountAccount");
    if (cJSON_IsNull(s_bankaccount_account)) {
        s_bankaccount_account = NULL;
    }
    if (!s_bankaccount_account) {
        goto end;
    }

    
    if(!cJSON_IsString(s_bankaccount_account))
    {
    goto end; //String
    }

    // bankaccount_list_element->s_bankaccount_number
    cJSON *s_bankaccount_number = cJSON_GetObjectItemCaseSensitive(bankaccount_list_elementJSON, "sBankaccountNumber");
    if (cJSON_IsNull(s_bankaccount_number)) {
        s_bankaccount_number = NULL;
    }
    if (!s_bankaccount_number) {
        goto end;
    }

    
    if(!cJSON_IsString(s_bankaccount_number))
    {
    goto end; //String
    }

    // bankaccount_list_element->e_bankaccount_type
    cJSON *e_bankaccount_type = cJSON_GetObjectItemCaseSensitive(bankaccount_list_elementJSON, "eBankaccountType");
    if (cJSON_IsNull(e_bankaccount_type)) {
        e_bankaccount_type = NULL;
    }
    if (e_bankaccount_type) { 
    e_bankaccount_type_local_nonprim = field_e_bankaccount_type_parseFromJSON(e_bankaccount_type); //custom
    }

    // bankaccount_list_element->b_bankaccount_commissionprocessing
    cJSON *b_bankaccount_commissionprocessing = cJSON_GetObjectItemCaseSensitive(bankaccount_list_elementJSON, "bBankaccountCommissionprocessing");
    if (cJSON_IsNull(b_bankaccount_commissionprocessing)) {
        b_bankaccount_commissionprocessing = NULL;
    }
    if (b_bankaccount_commissionprocessing) { 
    if(!cJSON_IsBool(b_bankaccount_commissionprocessing))
    {
    goto end; //Bool
    }
    b_bankaccount_commissionprocessing_local_var = malloc(sizeof(int));
    if(!b_bankaccount_commissionprocessing_local_var)
    {
        goto end;
    }
    *b_bankaccount_commissionprocessing_local_var = b_bankaccount_commissionprocessing->valueint;
    }

    // bankaccount_list_element->b_bankaccount_isactive
    cJSON *b_bankaccount_isactive = cJSON_GetObjectItemCaseSensitive(bankaccount_list_elementJSON, "bBankaccountIsactive");
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
    b_bankaccount_isactive_local_var = malloc(sizeof(int));
    if(!b_bankaccount_isactive_local_var)
    {
        goto end;
    }
    *b_bankaccount_isactive_local_var = b_bankaccount_isactive->valueint;

    // bankaccount_list_element->i_glaccount_code
    cJSON *i_glaccount_code = cJSON_GetObjectItemCaseSensitive(bankaccount_list_elementJSON, "iGlaccountCode");
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

    // bankaccount_list_element->s_glaccount_description_x
    cJSON *s_glaccount_description_x = cJSON_GetObjectItemCaseSensitive(bankaccount_list_elementJSON, "sGlaccountDescriptionX");
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


    if (s_bankaccount_bankname && !cJSON_IsNull(s_bankaccount_bankname)) s_bankaccount_bankname_local_str = strdup(s_bankaccount_bankname->valuestring);
    if (s_bankaccount_transit && !cJSON_IsNull(s_bankaccount_transit)) s_bankaccount_transit_local_str = strdup(s_bankaccount_transit->valuestring);
    if (s_bankaccount_institution && !cJSON_IsNull(s_bankaccount_institution)) s_bankaccount_institution_local_str = strdup(s_bankaccount_institution->valuestring);
    if (s_bankaccount_account && !cJSON_IsNull(s_bankaccount_account)) s_bankaccount_account_local_str = strdup(s_bankaccount_account->valuestring);
    if (s_bankaccount_number && !cJSON_IsNull(s_bankaccount_number)) s_bankaccount_number_local_str = strdup(s_bankaccount_number->valuestring);
    if (s_glaccount_description_x && !cJSON_IsNull(s_glaccount_description_x)) s_glaccount_description_x_local_str = strdup(s_glaccount_description_x->valuestring);

    bankaccount_list_element_local_var = bankaccount_list_element_create_internal (
        pki_bankaccount_id_local_var,
        s_bankaccount_bankname_local_str,
        s_bankaccount_transit_local_str,
        s_bankaccount_institution_local_str,
        s_bankaccount_account_local_str,
        s_bankaccount_number_local_str,
        e_bankaccount_type ? e_bankaccount_type_local_nonprim : 0,
        b_bankaccount_commissionprocessing_local_var,
        b_bankaccount_isactive_local_var,
        i_glaccount_code_local_var,
        s_glaccount_description_x_local_str
        );

    if (!bankaccount_list_element_local_var) {
        goto end;
    }

    return bankaccount_list_element_local_var;
end:
    if (pki_bankaccount_id_local_var) {
        free(pki_bankaccount_id_local_var);
        pki_bankaccount_id_local_var = NULL;
    }
    if (s_bankaccount_bankname_local_str) {
        free(s_bankaccount_bankname_local_str);
        s_bankaccount_bankname_local_str = NULL;
    }
    if (s_bankaccount_transit_local_str) {
        free(s_bankaccount_transit_local_str);
        s_bankaccount_transit_local_str = NULL;
    }
    if (s_bankaccount_institution_local_str) {
        free(s_bankaccount_institution_local_str);
        s_bankaccount_institution_local_str = NULL;
    }
    if (s_bankaccount_account_local_str) {
        free(s_bankaccount_account_local_str);
        s_bankaccount_account_local_str = NULL;
    }
    if (s_bankaccount_number_local_str) {
        free(s_bankaccount_number_local_str);
        s_bankaccount_number_local_str = NULL;
    }
    if (e_bankaccount_type_local_nonprim) {
        e_bankaccount_type_local_nonprim = 0;
    }
    if (b_bankaccount_commissionprocessing_local_var) {
        free(b_bankaccount_commissionprocessing_local_var);
        b_bankaccount_commissionprocessing_local_var = NULL;
    }
    if (b_bankaccount_isactive_local_var) {
        free(b_bankaccount_isactive_local_var);
        b_bankaccount_isactive_local_var = NULL;
    }
    if (i_glaccount_code_local_var) {
        free(i_glaccount_code_local_var);
        i_glaccount_code_local_var = NULL;
    }
    if (s_glaccount_description_x_local_str) {
        free(s_glaccount_description_x_local_str);
        s_glaccount_description_x_local_str = NULL;
    }
    return NULL;

}
