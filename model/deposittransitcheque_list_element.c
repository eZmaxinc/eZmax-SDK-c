#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deposittransitcheque_list_element.h"



static deposittransitcheque_list_element_t *deposittransitcheque_list_element_create_internal(
    int *pki_deposittransitcheque_id,
    int *fki_bankaccount_id,
    int *fki_deposit_id,
    char *s_deposittransitcheque_number,
    char *dt_deposittransitcheque_date,
    char *d_deposittransitcheque_amount,
    char *s_bankaccount_bankname,
    char *s_period_yyyymm,
    char *s_customer_name
    ) {
    deposittransitcheque_list_element_t *deposittransitcheque_list_element_local_var = malloc(sizeof(deposittransitcheque_list_element_t));
    if (!deposittransitcheque_list_element_local_var) {
        return NULL;
    }
    memset(deposittransitcheque_list_element_local_var, 0, sizeof(deposittransitcheque_list_element_t));
    deposittransitcheque_list_element_local_var->_library_owned = 1;
    deposittransitcheque_list_element_local_var->pki_deposittransitcheque_id = pki_deposittransitcheque_id;
    deposittransitcheque_list_element_local_var->fki_bankaccount_id = fki_bankaccount_id;
    deposittransitcheque_list_element_local_var->fki_deposit_id = fki_deposit_id;
    deposittransitcheque_list_element_local_var->s_deposittransitcheque_number = s_deposittransitcheque_number;
    deposittransitcheque_list_element_local_var->dt_deposittransitcheque_date = dt_deposittransitcheque_date;
    deposittransitcheque_list_element_local_var->d_deposittransitcheque_amount = d_deposittransitcheque_amount;
    deposittransitcheque_list_element_local_var->s_bankaccount_bankname = s_bankaccount_bankname;
    deposittransitcheque_list_element_local_var->s_period_yyyymm = s_period_yyyymm;
    deposittransitcheque_list_element_local_var->s_customer_name = s_customer_name;
    return deposittransitcheque_list_element_local_var;
}

__attribute__((deprecated)) deposittransitcheque_list_element_t *deposittransitcheque_list_element_create(
    int *pki_deposittransitcheque_id,
    int *fki_bankaccount_id,
    int *fki_deposit_id,
    char *s_deposittransitcheque_number,
    char *dt_deposittransitcheque_date,
    char *d_deposittransitcheque_amount,
    char *s_bankaccount_bankname,
    char *s_period_yyyymm,
    char *s_customer_name
    ) {
    int *pki_deposittransitcheque_id_copy = NULL;
    if (pki_deposittransitcheque_id) {
        pki_deposittransitcheque_id_copy = malloc(sizeof(int));
        if (pki_deposittransitcheque_id_copy) *pki_deposittransitcheque_id_copy = *pki_deposittransitcheque_id;
    }
    int *fki_bankaccount_id_copy = NULL;
    if (fki_bankaccount_id) {
        fki_bankaccount_id_copy = malloc(sizeof(int));
        if (fki_bankaccount_id_copy) *fki_bankaccount_id_copy = *fki_bankaccount_id;
    }
    int *fki_deposit_id_copy = NULL;
    if (fki_deposit_id) {
        fki_deposit_id_copy = malloc(sizeof(int));
        if (fki_deposit_id_copy) *fki_deposit_id_copy = *fki_deposit_id;
    }
    deposittransitcheque_list_element_t *result = deposittransitcheque_list_element_create_internal (
        pki_deposittransitcheque_id_copy,
        fki_bankaccount_id_copy,
        fki_deposit_id_copy,
        s_deposittransitcheque_number,
        dt_deposittransitcheque_date,
        d_deposittransitcheque_amount,
        s_bankaccount_bankname,
        s_period_yyyymm,
        s_customer_name
        );
    if (!result) {
        free(pki_deposittransitcheque_id_copy);
        free(fki_bankaccount_id_copy);
        free(fki_deposit_id_copy);
    }
    return result;
}

void deposittransitcheque_list_element_free(deposittransitcheque_list_element_t *deposittransitcheque_list_element) {
    if(NULL == deposittransitcheque_list_element){
        return ;
    }
    if(deposittransitcheque_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "deposittransitcheque_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (deposittransitcheque_list_element->pki_deposittransitcheque_id) {
        free(deposittransitcheque_list_element->pki_deposittransitcheque_id);
        deposittransitcheque_list_element->pki_deposittransitcheque_id = NULL;
    }
    if (deposittransitcheque_list_element->fki_bankaccount_id) {
        free(deposittransitcheque_list_element->fki_bankaccount_id);
        deposittransitcheque_list_element->fki_bankaccount_id = NULL;
    }
    if (deposittransitcheque_list_element->fki_deposit_id) {
        free(deposittransitcheque_list_element->fki_deposit_id);
        deposittransitcheque_list_element->fki_deposit_id = NULL;
    }
    if (deposittransitcheque_list_element->s_deposittransitcheque_number) {
        free(deposittransitcheque_list_element->s_deposittransitcheque_number);
        deposittransitcheque_list_element->s_deposittransitcheque_number = NULL;
    }
    if (deposittransitcheque_list_element->dt_deposittransitcheque_date) {
        free(deposittransitcheque_list_element->dt_deposittransitcheque_date);
        deposittransitcheque_list_element->dt_deposittransitcheque_date = NULL;
    }
    if (deposittransitcheque_list_element->d_deposittransitcheque_amount) {
        free(deposittransitcheque_list_element->d_deposittransitcheque_amount);
        deposittransitcheque_list_element->d_deposittransitcheque_amount = NULL;
    }
    if (deposittransitcheque_list_element->s_bankaccount_bankname) {
        free(deposittransitcheque_list_element->s_bankaccount_bankname);
        deposittransitcheque_list_element->s_bankaccount_bankname = NULL;
    }
    if (deposittransitcheque_list_element->s_period_yyyymm) {
        free(deposittransitcheque_list_element->s_period_yyyymm);
        deposittransitcheque_list_element->s_period_yyyymm = NULL;
    }
    if (deposittransitcheque_list_element->s_customer_name) {
        free(deposittransitcheque_list_element->s_customer_name);
        deposittransitcheque_list_element->s_customer_name = NULL;
    }
    free(deposittransitcheque_list_element);
}

cJSON *deposittransitcheque_list_element_convertToJSON(deposittransitcheque_list_element_t *deposittransitcheque_list_element) {
    cJSON *item = cJSON_CreateObject();

    // deposittransitcheque_list_element->pki_deposittransitcheque_id
    if (!deposittransitcheque_list_element->pki_deposittransitcheque_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDeposittransitchequeID", *deposittransitcheque_list_element->pki_deposittransitcheque_id) == NULL) {
    goto fail; //Numeric
    }


    // deposittransitcheque_list_element->fki_bankaccount_id
    if (!deposittransitcheque_list_element->fki_bankaccount_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBankaccountID", *deposittransitcheque_list_element->fki_bankaccount_id) == NULL) {
    goto fail; //Numeric
    }


    // deposittransitcheque_list_element->fki_deposit_id
    if(deposittransitcheque_list_element->fki_deposit_id) {
    if(cJSON_AddNumberToObject(item, "fkiDepositID", *deposittransitcheque_list_element->fki_deposit_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // deposittransitcheque_list_element->s_deposittransitcheque_number
    if (!deposittransitcheque_list_element->s_deposittransitcheque_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDeposittransitchequeNumber", deposittransitcheque_list_element->s_deposittransitcheque_number) == NULL) {
    goto fail; //String
    }


    // deposittransitcheque_list_element->dt_deposittransitcheque_date
    if (!deposittransitcheque_list_element->dt_deposittransitcheque_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtDeposittransitchequeDate", deposittransitcheque_list_element->dt_deposittransitcheque_date) == NULL) {
    goto fail; //String
    }


    // deposittransitcheque_list_element->d_deposittransitcheque_amount
    if (!deposittransitcheque_list_element->d_deposittransitcheque_amount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dDeposittransitchequeAmount", deposittransitcheque_list_element->d_deposittransitcheque_amount) == NULL) {
    goto fail; //String
    }


    // deposittransitcheque_list_element->s_bankaccount_bankname
    if (!deposittransitcheque_list_element->s_bankaccount_bankname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBankaccountBankname", deposittransitcheque_list_element->s_bankaccount_bankname) == NULL) {
    goto fail; //String
    }


    // deposittransitcheque_list_element->s_period_yyyymm
    if (!deposittransitcheque_list_element->s_period_yyyymm) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPeriodYYYYMM", deposittransitcheque_list_element->s_period_yyyymm) == NULL) {
    goto fail; //String
    }


    // deposittransitcheque_list_element->s_customer_name
    if (!deposittransitcheque_list_element->s_customer_name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sCustomerName", deposittransitcheque_list_element->s_customer_name) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

deposittransitcheque_list_element_t *deposittransitcheque_list_element_parseFromJSON(cJSON *deposittransitcheque_list_elementJSON){

    deposittransitcheque_list_element_t *deposittransitcheque_list_element_local_var = NULL;

    // define the local variable for deposittransitcheque_list_element->pki_deposittransitcheque_id
    int *pki_deposittransitcheque_id_local_var = NULL;

    // define the local variable for deposittransitcheque_list_element->fki_bankaccount_id
    int *fki_bankaccount_id_local_var = NULL;

    // define the local variable for deposittransitcheque_list_element->fki_deposit_id
    int *fki_deposit_id_local_var = NULL;

    char *s_deposittransitcheque_number_local_str = NULL;

    char *dt_deposittransitcheque_date_local_str = NULL;

    char *d_deposittransitcheque_amount_local_str = NULL;

    char *s_bankaccount_bankname_local_str = NULL;

    char *s_period_yyyymm_local_str = NULL;

    char *s_customer_name_local_str = NULL;

    // deposittransitcheque_list_element->pki_deposittransitcheque_id
    cJSON *pki_deposittransitcheque_id = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_list_elementJSON, "pkiDeposittransitchequeID");
    if (cJSON_IsNull(pki_deposittransitcheque_id)) {
        pki_deposittransitcheque_id = NULL;
    }
    if (!pki_deposittransitcheque_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_deposittransitcheque_id))
    {
    goto end; //Numeric
    }
    pki_deposittransitcheque_id_local_var = malloc(sizeof(int));
    if(!pki_deposittransitcheque_id_local_var)
    {
        goto end;
    }
    *pki_deposittransitcheque_id_local_var = pki_deposittransitcheque_id->valuedouble;

    // deposittransitcheque_list_element->fki_bankaccount_id
    cJSON *fki_bankaccount_id = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_list_elementJSON, "fkiBankaccountID");
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
    fki_bankaccount_id_local_var = malloc(sizeof(int));
    if(!fki_bankaccount_id_local_var)
    {
        goto end;
    }
    *fki_bankaccount_id_local_var = fki_bankaccount_id->valuedouble;

    // deposittransitcheque_list_element->fki_deposit_id
    cJSON *fki_deposit_id = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_list_elementJSON, "fkiDepositID");
    if (cJSON_IsNull(fki_deposit_id)) {
        fki_deposit_id = NULL;
    }
    if (fki_deposit_id) { 
    if(!cJSON_IsNumber(fki_deposit_id))
    {
    goto end; //Numeric
    }
    fki_deposit_id_local_var = malloc(sizeof(int));
    if(!fki_deposit_id_local_var)
    {
        goto end;
    }
    *fki_deposit_id_local_var = fki_deposit_id->valuedouble;
    }

    // deposittransitcheque_list_element->s_deposittransitcheque_number
    cJSON *s_deposittransitcheque_number = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_list_elementJSON, "sDeposittransitchequeNumber");
    if (cJSON_IsNull(s_deposittransitcheque_number)) {
        s_deposittransitcheque_number = NULL;
    }
    if (!s_deposittransitcheque_number) {
        goto end;
    }

    
    if(!cJSON_IsString(s_deposittransitcheque_number))
    {
    goto end; //String
    }

    // deposittransitcheque_list_element->dt_deposittransitcheque_date
    cJSON *dt_deposittransitcheque_date = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_list_elementJSON, "dtDeposittransitchequeDate");
    if (cJSON_IsNull(dt_deposittransitcheque_date)) {
        dt_deposittransitcheque_date = NULL;
    }
    if (!dt_deposittransitcheque_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_deposittransitcheque_date))
    {
    goto end; //String
    }

    // deposittransitcheque_list_element->d_deposittransitcheque_amount
    cJSON *d_deposittransitcheque_amount = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_list_elementJSON, "dDeposittransitchequeAmount");
    if (cJSON_IsNull(d_deposittransitcheque_amount)) {
        d_deposittransitcheque_amount = NULL;
    }
    if (!d_deposittransitcheque_amount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_deposittransitcheque_amount))
    {
    goto end; //String
    }

    // deposittransitcheque_list_element->s_bankaccount_bankname
    cJSON *s_bankaccount_bankname = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_list_elementJSON, "sBankaccountBankname");
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

    // deposittransitcheque_list_element->s_period_yyyymm
    cJSON *s_period_yyyymm = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_list_elementJSON, "sPeriodYYYYMM");
    if (cJSON_IsNull(s_period_yyyymm)) {
        s_period_yyyymm = NULL;
    }
    if (!s_period_yyyymm) {
        goto end;
    }

    
    if(!cJSON_IsString(s_period_yyyymm))
    {
    goto end; //String
    }

    // deposittransitcheque_list_element->s_customer_name
    cJSON *s_customer_name = cJSON_GetObjectItemCaseSensitive(deposittransitcheque_list_elementJSON, "sCustomerName");
    if (cJSON_IsNull(s_customer_name)) {
        s_customer_name = NULL;
    }
    if (!s_customer_name) {
        goto end;
    }

    
    if(!cJSON_IsString(s_customer_name))
    {
    goto end; //String
    }


    if (s_deposittransitcheque_number && !cJSON_IsNull(s_deposittransitcheque_number)) s_deposittransitcheque_number_local_str = strdup(s_deposittransitcheque_number->valuestring);
    if (dt_deposittransitcheque_date && !cJSON_IsNull(dt_deposittransitcheque_date)) dt_deposittransitcheque_date_local_str = strdup(dt_deposittransitcheque_date->valuestring);
    if (d_deposittransitcheque_amount && !cJSON_IsNull(d_deposittransitcheque_amount)) d_deposittransitcheque_amount_local_str = strdup(d_deposittransitcheque_amount->valuestring);
    if (s_bankaccount_bankname && !cJSON_IsNull(s_bankaccount_bankname)) s_bankaccount_bankname_local_str = strdup(s_bankaccount_bankname->valuestring);
    if (s_period_yyyymm && !cJSON_IsNull(s_period_yyyymm)) s_period_yyyymm_local_str = strdup(s_period_yyyymm->valuestring);
    if (s_customer_name && !cJSON_IsNull(s_customer_name)) s_customer_name_local_str = strdup(s_customer_name->valuestring);

    deposittransitcheque_list_element_local_var = deposittransitcheque_list_element_create_internal (
        pki_deposittransitcheque_id_local_var,
        fki_bankaccount_id_local_var,
        fki_deposit_id_local_var,
        s_deposittransitcheque_number_local_str,
        dt_deposittransitcheque_date_local_str,
        d_deposittransitcheque_amount_local_str,
        s_bankaccount_bankname_local_str,
        s_period_yyyymm_local_str,
        s_customer_name_local_str
        );

    if (!deposittransitcheque_list_element_local_var) {
        goto end;
    }

    return deposittransitcheque_list_element_local_var;
end:
    if (pki_deposittransitcheque_id_local_var) {
        free(pki_deposittransitcheque_id_local_var);
        pki_deposittransitcheque_id_local_var = NULL;
    }
    if (fki_bankaccount_id_local_var) {
        free(fki_bankaccount_id_local_var);
        fki_bankaccount_id_local_var = NULL;
    }
    if (fki_deposit_id_local_var) {
        free(fki_deposit_id_local_var);
        fki_deposit_id_local_var = NULL;
    }
    if (s_deposittransitcheque_number_local_str) {
        free(s_deposittransitcheque_number_local_str);
        s_deposittransitcheque_number_local_str = NULL;
    }
    if (dt_deposittransitcheque_date_local_str) {
        free(dt_deposittransitcheque_date_local_str);
        dt_deposittransitcheque_date_local_str = NULL;
    }
    if (d_deposittransitcheque_amount_local_str) {
        free(d_deposittransitcheque_amount_local_str);
        d_deposittransitcheque_amount_local_str = NULL;
    }
    if (s_bankaccount_bankname_local_str) {
        free(s_bankaccount_bankname_local_str);
        s_bankaccount_bankname_local_str = NULL;
    }
    if (s_period_yyyymm_local_str) {
        free(s_period_yyyymm_local_str);
        s_period_yyyymm_local_str = NULL;
    }
    if (s_customer_name_local_str) {
        free(s_customer_name_local_str);
        s_customer_name_local_str = NULL;
    }
    return NULL;

}
