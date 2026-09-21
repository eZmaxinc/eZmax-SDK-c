#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deposit_list_element.h"



static deposit_list_element_t *deposit_list_element_create_internal(
    int *pki_deposit_id,
    int *fki_bankaccount_id,
    int *fki_period_id,
    int *fki_user_id_created,
    char *s_deposit_number,
    char *dt_deposit_date,
    char *d_deposit_total,
    char *dt_created_date,
    int *b_deposit_draft,
    int *b_deposit_reconciled,
    int *fki_reconciliation_id,
    char *s_bankaccount_bankname,
    char *s_period_yyyymm,
    char *s_user_loginname
    ) {
    deposit_list_element_t *deposit_list_element_local_var = malloc(sizeof(deposit_list_element_t));
    if (!deposit_list_element_local_var) {
        return NULL;
    }
    memset(deposit_list_element_local_var, 0, sizeof(deposit_list_element_t));
    deposit_list_element_local_var->_library_owned = 1;
    deposit_list_element_local_var->pki_deposit_id = pki_deposit_id;
    deposit_list_element_local_var->fki_bankaccount_id = fki_bankaccount_id;
    deposit_list_element_local_var->fki_period_id = fki_period_id;
    deposit_list_element_local_var->fki_user_id_created = fki_user_id_created;
    deposit_list_element_local_var->s_deposit_number = s_deposit_number;
    deposit_list_element_local_var->dt_deposit_date = dt_deposit_date;
    deposit_list_element_local_var->d_deposit_total = d_deposit_total;
    deposit_list_element_local_var->dt_created_date = dt_created_date;
    deposit_list_element_local_var->b_deposit_draft = b_deposit_draft;
    deposit_list_element_local_var->b_deposit_reconciled = b_deposit_reconciled;
    deposit_list_element_local_var->fki_reconciliation_id = fki_reconciliation_id;
    deposit_list_element_local_var->s_bankaccount_bankname = s_bankaccount_bankname;
    deposit_list_element_local_var->s_period_yyyymm = s_period_yyyymm;
    deposit_list_element_local_var->s_user_loginname = s_user_loginname;
    return deposit_list_element_local_var;
}

__attribute__((deprecated)) deposit_list_element_t *deposit_list_element_create(
    int *pki_deposit_id,
    int *fki_bankaccount_id,
    int *fki_period_id,
    int *fki_user_id_created,
    char *s_deposit_number,
    char *dt_deposit_date,
    char *d_deposit_total,
    char *dt_created_date,
    int *b_deposit_draft,
    int *b_deposit_reconciled,
    int *fki_reconciliation_id,
    char *s_bankaccount_bankname,
    char *s_period_yyyymm,
    char *s_user_loginname
    ) {
    int *pki_deposit_id_copy = NULL;
    if (pki_deposit_id) {
        pki_deposit_id_copy = malloc(sizeof(int));
        if (pki_deposit_id_copy) *pki_deposit_id_copy = *pki_deposit_id;
    }
    int *fki_bankaccount_id_copy = NULL;
    if (fki_bankaccount_id) {
        fki_bankaccount_id_copy = malloc(sizeof(int));
        if (fki_bankaccount_id_copy) *fki_bankaccount_id_copy = *fki_bankaccount_id;
    }
    int *fki_period_id_copy = NULL;
    if (fki_period_id) {
        fki_period_id_copy = malloc(sizeof(int));
        if (fki_period_id_copy) *fki_period_id_copy = *fki_period_id;
    }
    int *fki_user_id_created_copy = NULL;
    if (fki_user_id_created) {
        fki_user_id_created_copy = malloc(sizeof(int));
        if (fki_user_id_created_copy) *fki_user_id_created_copy = *fki_user_id_created;
    }
    int *b_deposit_draft_copy = NULL;
    if (b_deposit_draft) {
        b_deposit_draft_copy = malloc(sizeof(int));
        if (b_deposit_draft_copy) *b_deposit_draft_copy = *b_deposit_draft;
    }
    int *b_deposit_reconciled_copy = NULL;
    if (b_deposit_reconciled) {
        b_deposit_reconciled_copy = malloc(sizeof(int));
        if (b_deposit_reconciled_copy) *b_deposit_reconciled_copy = *b_deposit_reconciled;
    }
    int *fki_reconciliation_id_copy = NULL;
    if (fki_reconciliation_id) {
        fki_reconciliation_id_copy = malloc(sizeof(int));
        if (fki_reconciliation_id_copy) *fki_reconciliation_id_copy = *fki_reconciliation_id;
    }
    deposit_list_element_t *result = deposit_list_element_create_internal (
        pki_deposit_id_copy,
        fki_bankaccount_id_copy,
        fki_period_id_copy,
        fki_user_id_created_copy,
        s_deposit_number,
        dt_deposit_date,
        d_deposit_total,
        dt_created_date,
        b_deposit_draft_copy,
        b_deposit_reconciled_copy,
        fki_reconciliation_id_copy,
        s_bankaccount_bankname,
        s_period_yyyymm,
        s_user_loginname
        );
    if (!result) {
        free(pki_deposit_id_copy);
        free(fki_bankaccount_id_copy);
        free(fki_period_id_copy);
        free(fki_user_id_created_copy);
        free(b_deposit_draft_copy);
        free(b_deposit_reconciled_copy);
        free(fki_reconciliation_id_copy);
    }
    return result;
}

void deposit_list_element_free(deposit_list_element_t *deposit_list_element) {
    if(NULL == deposit_list_element){
        return ;
    }
    if(deposit_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "deposit_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (deposit_list_element->pki_deposit_id) {
        free(deposit_list_element->pki_deposit_id);
        deposit_list_element->pki_deposit_id = NULL;
    }
    if (deposit_list_element->fki_bankaccount_id) {
        free(deposit_list_element->fki_bankaccount_id);
        deposit_list_element->fki_bankaccount_id = NULL;
    }
    if (deposit_list_element->fki_period_id) {
        free(deposit_list_element->fki_period_id);
        deposit_list_element->fki_period_id = NULL;
    }
    if (deposit_list_element->fki_user_id_created) {
        free(deposit_list_element->fki_user_id_created);
        deposit_list_element->fki_user_id_created = NULL;
    }
    if (deposit_list_element->s_deposit_number) {
        free(deposit_list_element->s_deposit_number);
        deposit_list_element->s_deposit_number = NULL;
    }
    if (deposit_list_element->dt_deposit_date) {
        free(deposit_list_element->dt_deposit_date);
        deposit_list_element->dt_deposit_date = NULL;
    }
    if (deposit_list_element->d_deposit_total) {
        free(deposit_list_element->d_deposit_total);
        deposit_list_element->d_deposit_total = NULL;
    }
    if (deposit_list_element->dt_created_date) {
        free(deposit_list_element->dt_created_date);
        deposit_list_element->dt_created_date = NULL;
    }
    if (deposit_list_element->b_deposit_draft) {
        free(deposit_list_element->b_deposit_draft);
        deposit_list_element->b_deposit_draft = NULL;
    }
    if (deposit_list_element->b_deposit_reconciled) {
        free(deposit_list_element->b_deposit_reconciled);
        deposit_list_element->b_deposit_reconciled = NULL;
    }
    if (deposit_list_element->fki_reconciliation_id) {
        free(deposit_list_element->fki_reconciliation_id);
        deposit_list_element->fki_reconciliation_id = NULL;
    }
    if (deposit_list_element->s_bankaccount_bankname) {
        free(deposit_list_element->s_bankaccount_bankname);
        deposit_list_element->s_bankaccount_bankname = NULL;
    }
    if (deposit_list_element->s_period_yyyymm) {
        free(deposit_list_element->s_period_yyyymm);
        deposit_list_element->s_period_yyyymm = NULL;
    }
    if (deposit_list_element->s_user_loginname) {
        free(deposit_list_element->s_user_loginname);
        deposit_list_element->s_user_loginname = NULL;
    }
    free(deposit_list_element);
}

cJSON *deposit_list_element_convertToJSON(deposit_list_element_t *deposit_list_element) {
    cJSON *item = cJSON_CreateObject();

    // deposit_list_element->pki_deposit_id
    if (!deposit_list_element->pki_deposit_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiDepositID", *deposit_list_element->pki_deposit_id) == NULL) {
    goto fail; //Numeric
    }


    // deposit_list_element->fki_bankaccount_id
    if (!deposit_list_element->fki_bankaccount_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBankaccountID", *deposit_list_element->fki_bankaccount_id) == NULL) {
    goto fail; //Numeric
    }


    // deposit_list_element->fki_period_id
    if (!deposit_list_element->fki_period_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPeriodID", *deposit_list_element->fki_period_id) == NULL) {
    goto fail; //Numeric
    }


    // deposit_list_element->fki_user_id_created
    if (!deposit_list_element->fki_user_id_created) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserIDCreated", *deposit_list_element->fki_user_id_created) == NULL) {
    goto fail; //Numeric
    }


    // deposit_list_element->s_deposit_number
    if (!deposit_list_element->s_deposit_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sDepositNumber", deposit_list_element->s_deposit_number) == NULL) {
    goto fail; //String
    }


    // deposit_list_element->dt_deposit_date
    if (!deposit_list_element->dt_deposit_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtDepositDate", deposit_list_element->dt_deposit_date) == NULL) {
    goto fail; //String
    }


    // deposit_list_element->d_deposit_total
    if (!deposit_list_element->d_deposit_total) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dDepositTotal", deposit_list_element->d_deposit_total) == NULL) {
    goto fail; //String
    }


    // deposit_list_element->dt_created_date
    if (!deposit_list_element->dt_created_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCreatedDate", deposit_list_element->dt_created_date) == NULL) {
    goto fail; //String
    }


    // deposit_list_element->b_deposit_draft
    if (!deposit_list_element->b_deposit_draft) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDepositDraft", *deposit_list_element->b_deposit_draft) == NULL) {
    goto fail; //Bool
    }


    // deposit_list_element->b_deposit_reconciled
    if (!deposit_list_element->b_deposit_reconciled) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDepositReconciled", *deposit_list_element->b_deposit_reconciled) == NULL) {
    goto fail; //Bool
    }


    // deposit_list_element->fki_reconciliation_id
    if(deposit_list_element->fki_reconciliation_id) {
    if(cJSON_AddNumberToObject(item, "fkiReconciliationID", *deposit_list_element->fki_reconciliation_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // deposit_list_element->s_bankaccount_bankname
    if (!deposit_list_element->s_bankaccount_bankname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBankaccountBankname", deposit_list_element->s_bankaccount_bankname) == NULL) {
    goto fail; //String
    }


    // deposit_list_element->s_period_yyyymm
    if (!deposit_list_element->s_period_yyyymm) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPeriodYYYYMM", deposit_list_element->s_period_yyyymm) == NULL) {
    goto fail; //String
    }


    // deposit_list_element->s_user_loginname
    if (!deposit_list_element->s_user_loginname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginname", deposit_list_element->s_user_loginname) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

deposit_list_element_t *deposit_list_element_parseFromJSON(cJSON *deposit_list_elementJSON){

    deposit_list_element_t *deposit_list_element_local_var = NULL;

    // define the local variable for deposit_list_element->pki_deposit_id
    int *pki_deposit_id_local_var = NULL;

    // define the local variable for deposit_list_element->fki_bankaccount_id
    int *fki_bankaccount_id_local_var = NULL;

    // define the local variable for deposit_list_element->fki_period_id
    int *fki_period_id_local_var = NULL;

    // define the local variable for deposit_list_element->fki_user_id_created
    int *fki_user_id_created_local_var = NULL;

    char *s_deposit_number_local_str = NULL;

    char *dt_deposit_date_local_str = NULL;

    char *d_deposit_total_local_str = NULL;

    char *dt_created_date_local_str = NULL;

    // define the local variable for deposit_list_element->b_deposit_draft
    int *b_deposit_draft_local_var = NULL;

    // define the local variable for deposit_list_element->b_deposit_reconciled
    int *b_deposit_reconciled_local_var = NULL;

    // define the local variable for deposit_list_element->fki_reconciliation_id
    int *fki_reconciliation_id_local_var = NULL;

    char *s_bankaccount_bankname_local_str = NULL;

    char *s_period_yyyymm_local_str = NULL;

    char *s_user_loginname_local_str = NULL;

    // deposit_list_element->pki_deposit_id
    cJSON *pki_deposit_id = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "pkiDepositID");
    if (cJSON_IsNull(pki_deposit_id)) {
        pki_deposit_id = NULL;
    }
    if (!pki_deposit_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_deposit_id))
    {
    goto end; //Numeric
    }
    pki_deposit_id_local_var = malloc(sizeof(int));
    if(!pki_deposit_id_local_var)
    {
        goto end;
    }
    *pki_deposit_id_local_var = pki_deposit_id->valuedouble;

    // deposit_list_element->fki_bankaccount_id
    cJSON *fki_bankaccount_id = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "fkiBankaccountID");
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

    // deposit_list_element->fki_period_id
    cJSON *fki_period_id = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "fkiPeriodID");
    if (cJSON_IsNull(fki_period_id)) {
        fki_period_id = NULL;
    }
    if (!fki_period_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_period_id))
    {
    goto end; //Numeric
    }
    fki_period_id_local_var = malloc(sizeof(int));
    if(!fki_period_id_local_var)
    {
        goto end;
    }
    *fki_period_id_local_var = fki_period_id->valuedouble;

    // deposit_list_element->fki_user_id_created
    cJSON *fki_user_id_created = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "fkiUserIDCreated");
    if (cJSON_IsNull(fki_user_id_created)) {
        fki_user_id_created = NULL;
    }
    if (!fki_user_id_created) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id_created))
    {
    goto end; //Numeric
    }
    fki_user_id_created_local_var = malloc(sizeof(int));
    if(!fki_user_id_created_local_var)
    {
        goto end;
    }
    *fki_user_id_created_local_var = fki_user_id_created->valuedouble;

    // deposit_list_element->s_deposit_number
    cJSON *s_deposit_number = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "sDepositNumber");
    if (cJSON_IsNull(s_deposit_number)) {
        s_deposit_number = NULL;
    }
    if (!s_deposit_number) {
        goto end;
    }

    
    if(!cJSON_IsString(s_deposit_number))
    {
    goto end; //String
    }

    // deposit_list_element->dt_deposit_date
    cJSON *dt_deposit_date = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "dtDepositDate");
    if (cJSON_IsNull(dt_deposit_date)) {
        dt_deposit_date = NULL;
    }
    if (!dt_deposit_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_deposit_date))
    {
    goto end; //String
    }

    // deposit_list_element->d_deposit_total
    cJSON *d_deposit_total = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "dDepositTotal");
    if (cJSON_IsNull(d_deposit_total)) {
        d_deposit_total = NULL;
    }
    if (!d_deposit_total) {
        goto end;
    }

    
    if(!cJSON_IsString(d_deposit_total))
    {
    goto end; //String
    }

    // deposit_list_element->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "dtCreatedDate");
    if (cJSON_IsNull(dt_created_date)) {
        dt_created_date = NULL;
    }
    if (!dt_created_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_created_date))
    {
    goto end; //String
    }

    // deposit_list_element->b_deposit_draft
    cJSON *b_deposit_draft = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "bDepositDraft");
    if (cJSON_IsNull(b_deposit_draft)) {
        b_deposit_draft = NULL;
    }
    if (!b_deposit_draft) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_deposit_draft))
    {
    goto end; //Bool
    }
    b_deposit_draft_local_var = malloc(sizeof(int));
    if(!b_deposit_draft_local_var)
    {
        goto end;
    }
    *b_deposit_draft_local_var = b_deposit_draft->valueint;

    // deposit_list_element->b_deposit_reconciled
    cJSON *b_deposit_reconciled = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "bDepositReconciled");
    if (cJSON_IsNull(b_deposit_reconciled)) {
        b_deposit_reconciled = NULL;
    }
    if (!b_deposit_reconciled) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_deposit_reconciled))
    {
    goto end; //Bool
    }
    b_deposit_reconciled_local_var = malloc(sizeof(int));
    if(!b_deposit_reconciled_local_var)
    {
        goto end;
    }
    *b_deposit_reconciled_local_var = b_deposit_reconciled->valueint;

    // deposit_list_element->fki_reconciliation_id
    cJSON *fki_reconciliation_id = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "fkiReconciliationID");
    if (cJSON_IsNull(fki_reconciliation_id)) {
        fki_reconciliation_id = NULL;
    }
    if (fki_reconciliation_id) { 
    if(!cJSON_IsNumber(fki_reconciliation_id))
    {
    goto end; //Numeric
    }
    fki_reconciliation_id_local_var = malloc(sizeof(int));
    if(!fki_reconciliation_id_local_var)
    {
        goto end;
    }
    *fki_reconciliation_id_local_var = fki_reconciliation_id->valuedouble;
    }

    // deposit_list_element->s_bankaccount_bankname
    cJSON *s_bankaccount_bankname = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "sBankaccountBankname");
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

    // deposit_list_element->s_period_yyyymm
    cJSON *s_period_yyyymm = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "sPeriodYYYYMM");
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

    // deposit_list_element->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(deposit_list_elementJSON, "sUserLoginname");
    if (cJSON_IsNull(s_user_loginname)) {
        s_user_loginname = NULL;
    }
    if (!s_user_loginname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_user_loginname))
    {
    goto end; //String
    }


    if (s_deposit_number && !cJSON_IsNull(s_deposit_number)) s_deposit_number_local_str = strdup(s_deposit_number->valuestring);
    if (dt_deposit_date && !cJSON_IsNull(dt_deposit_date)) dt_deposit_date_local_str = strdup(dt_deposit_date->valuestring);
    if (d_deposit_total && !cJSON_IsNull(d_deposit_total)) d_deposit_total_local_str = strdup(d_deposit_total->valuestring);
    if (dt_created_date && !cJSON_IsNull(dt_created_date)) dt_created_date_local_str = strdup(dt_created_date->valuestring);
    if (s_bankaccount_bankname && !cJSON_IsNull(s_bankaccount_bankname)) s_bankaccount_bankname_local_str = strdup(s_bankaccount_bankname->valuestring);
    if (s_period_yyyymm && !cJSON_IsNull(s_period_yyyymm)) s_period_yyyymm_local_str = strdup(s_period_yyyymm->valuestring);
    if (s_user_loginname && !cJSON_IsNull(s_user_loginname)) s_user_loginname_local_str = strdup(s_user_loginname->valuestring);

    deposit_list_element_local_var = deposit_list_element_create_internal (
        pki_deposit_id_local_var,
        fki_bankaccount_id_local_var,
        fki_period_id_local_var,
        fki_user_id_created_local_var,
        s_deposit_number_local_str,
        dt_deposit_date_local_str,
        d_deposit_total_local_str,
        dt_created_date_local_str,
        b_deposit_draft_local_var,
        b_deposit_reconciled_local_var,
        fki_reconciliation_id_local_var,
        s_bankaccount_bankname_local_str,
        s_period_yyyymm_local_str,
        s_user_loginname_local_str
        );

    if (!deposit_list_element_local_var) {
        goto end;
    }

    return deposit_list_element_local_var;
end:
    if (pki_deposit_id_local_var) {
        free(pki_deposit_id_local_var);
        pki_deposit_id_local_var = NULL;
    }
    if (fki_bankaccount_id_local_var) {
        free(fki_bankaccount_id_local_var);
        fki_bankaccount_id_local_var = NULL;
    }
    if (fki_period_id_local_var) {
        free(fki_period_id_local_var);
        fki_period_id_local_var = NULL;
    }
    if (fki_user_id_created_local_var) {
        free(fki_user_id_created_local_var);
        fki_user_id_created_local_var = NULL;
    }
    if (s_deposit_number_local_str) {
        free(s_deposit_number_local_str);
        s_deposit_number_local_str = NULL;
    }
    if (dt_deposit_date_local_str) {
        free(dt_deposit_date_local_str);
        dt_deposit_date_local_str = NULL;
    }
    if (d_deposit_total_local_str) {
        free(d_deposit_total_local_str);
        d_deposit_total_local_str = NULL;
    }
    if (dt_created_date_local_str) {
        free(dt_created_date_local_str);
        dt_created_date_local_str = NULL;
    }
    if (b_deposit_draft_local_var) {
        free(b_deposit_draft_local_var);
        b_deposit_draft_local_var = NULL;
    }
    if (b_deposit_reconciled_local_var) {
        free(b_deposit_reconciled_local_var);
        b_deposit_reconciled_local_var = NULL;
    }
    if (fki_reconciliation_id_local_var) {
        free(fki_reconciliation_id_local_var);
        fki_reconciliation_id_local_var = NULL;
    }
    if (s_bankaccount_bankname_local_str) {
        free(s_bankaccount_bankname_local_str);
        s_bankaccount_bankname_local_str = NULL;
    }
    if (s_period_yyyymm_local_str) {
        free(s_period_yyyymm_local_str);
        s_period_yyyymm_local_str = NULL;
    }
    if (s_user_loginname_local_str) {
        free(s_user_loginname_local_str);
        s_user_loginname_local_str = NULL;
    }
    return NULL;

}
