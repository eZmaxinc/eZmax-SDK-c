#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "adjustment_list_element.h"



static adjustment_list_element_t *adjustment_list_element_create_internal(
    int *pki_adjustment_id,
    int *fki_period_id,
    char *s_period_yyyymm,
    int *fki_user_id_created,
    char *s_user_loginname,
    char *dt_adjustment_date,
    char *s_adjustment_number,
    char *s_adjustment_comment,
    char *d_adjustment_totaldebit,
    char *d_adjustment_totalcredit
    ) {
    adjustment_list_element_t *adjustment_list_element_local_var = malloc(sizeof(adjustment_list_element_t));
    if (!adjustment_list_element_local_var) {
        return NULL;
    }
    memset(adjustment_list_element_local_var, 0, sizeof(adjustment_list_element_t));
    adjustment_list_element_local_var->_library_owned = 1;
    adjustment_list_element_local_var->pki_adjustment_id = pki_adjustment_id;
    adjustment_list_element_local_var->fki_period_id = fki_period_id;
    adjustment_list_element_local_var->s_period_yyyymm = s_period_yyyymm;
    adjustment_list_element_local_var->fki_user_id_created = fki_user_id_created;
    adjustment_list_element_local_var->s_user_loginname = s_user_loginname;
    adjustment_list_element_local_var->dt_adjustment_date = dt_adjustment_date;
    adjustment_list_element_local_var->s_adjustment_number = s_adjustment_number;
    adjustment_list_element_local_var->s_adjustment_comment = s_adjustment_comment;
    adjustment_list_element_local_var->d_adjustment_totaldebit = d_adjustment_totaldebit;
    adjustment_list_element_local_var->d_adjustment_totalcredit = d_adjustment_totalcredit;
    return adjustment_list_element_local_var;
}

__attribute__((deprecated)) adjustment_list_element_t *adjustment_list_element_create(
    int *pki_adjustment_id,
    int *fki_period_id,
    char *s_period_yyyymm,
    int *fki_user_id_created,
    char *s_user_loginname,
    char *dt_adjustment_date,
    char *s_adjustment_number,
    char *s_adjustment_comment,
    char *d_adjustment_totaldebit,
    char *d_adjustment_totalcredit
    ) {
    int *pki_adjustment_id_copy = NULL;
    if (pki_adjustment_id) {
        pki_adjustment_id_copy = malloc(sizeof(int));
        if (pki_adjustment_id_copy) *pki_adjustment_id_copy = *pki_adjustment_id;
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
    adjustment_list_element_t *result = adjustment_list_element_create_internal (
        pki_adjustment_id_copy,
        fki_period_id_copy,
        s_period_yyyymm,
        fki_user_id_created_copy,
        s_user_loginname,
        dt_adjustment_date,
        s_adjustment_number,
        s_adjustment_comment,
        d_adjustment_totaldebit,
        d_adjustment_totalcredit
        );
    if (!result) {
        free(pki_adjustment_id_copy);
        free(fki_period_id_copy);
        free(fki_user_id_created_copy);
    }
    return result;
}

void adjustment_list_element_free(adjustment_list_element_t *adjustment_list_element) {
    if(NULL == adjustment_list_element){
        return ;
    }
    if(adjustment_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "adjustment_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (adjustment_list_element->pki_adjustment_id) {
        free(adjustment_list_element->pki_adjustment_id);
        adjustment_list_element->pki_adjustment_id = NULL;
    }
    if (adjustment_list_element->fki_period_id) {
        free(adjustment_list_element->fki_period_id);
        adjustment_list_element->fki_period_id = NULL;
    }
    if (adjustment_list_element->s_period_yyyymm) {
        free(adjustment_list_element->s_period_yyyymm);
        adjustment_list_element->s_period_yyyymm = NULL;
    }
    if (adjustment_list_element->fki_user_id_created) {
        free(adjustment_list_element->fki_user_id_created);
        adjustment_list_element->fki_user_id_created = NULL;
    }
    if (adjustment_list_element->s_user_loginname) {
        free(adjustment_list_element->s_user_loginname);
        adjustment_list_element->s_user_loginname = NULL;
    }
    if (adjustment_list_element->dt_adjustment_date) {
        free(adjustment_list_element->dt_adjustment_date);
        adjustment_list_element->dt_adjustment_date = NULL;
    }
    if (adjustment_list_element->s_adjustment_number) {
        free(adjustment_list_element->s_adjustment_number);
        adjustment_list_element->s_adjustment_number = NULL;
    }
    if (adjustment_list_element->s_adjustment_comment) {
        free(adjustment_list_element->s_adjustment_comment);
        adjustment_list_element->s_adjustment_comment = NULL;
    }
    if (adjustment_list_element->d_adjustment_totaldebit) {
        free(adjustment_list_element->d_adjustment_totaldebit);
        adjustment_list_element->d_adjustment_totaldebit = NULL;
    }
    if (adjustment_list_element->d_adjustment_totalcredit) {
        free(adjustment_list_element->d_adjustment_totalcredit);
        adjustment_list_element->d_adjustment_totalcredit = NULL;
    }
    free(adjustment_list_element);
}

cJSON *adjustment_list_element_convertToJSON(adjustment_list_element_t *adjustment_list_element) {
    cJSON *item = cJSON_CreateObject();

    // adjustment_list_element->pki_adjustment_id
    if (!adjustment_list_element->pki_adjustment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAdjustmentID", *adjustment_list_element->pki_adjustment_id) == NULL) {
    goto fail; //Numeric
    }


    // adjustment_list_element->fki_period_id
    if (!adjustment_list_element->fki_period_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPeriodID", *adjustment_list_element->fki_period_id) == NULL) {
    goto fail; //Numeric
    }


    // adjustment_list_element->s_period_yyyymm
    if(adjustment_list_element->s_period_yyyymm) {
    if(cJSON_AddStringToObject(item, "sPeriodYYYYMM", adjustment_list_element->s_period_yyyymm) == NULL) {
    goto fail; //String
    }
    }


    // adjustment_list_element->fki_user_id_created
    if(adjustment_list_element->fki_user_id_created) {
    if(cJSON_AddNumberToObject(item, "fkiUserIDCreated", *adjustment_list_element->fki_user_id_created) == NULL) {
    goto fail; //Numeric
    }
    }


    // adjustment_list_element->s_user_loginname
    if(adjustment_list_element->s_user_loginname) {
    if(cJSON_AddStringToObject(item, "sUserLoginname", adjustment_list_element->s_user_loginname) == NULL) {
    goto fail; //String
    }
    }


    // adjustment_list_element->dt_adjustment_date
    if (!adjustment_list_element->dt_adjustment_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtAdjustmentDate", adjustment_list_element->dt_adjustment_date) == NULL) {
    goto fail; //String
    }


    // adjustment_list_element->s_adjustment_number
    if (!adjustment_list_element->s_adjustment_number) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAdjustmentNumber", adjustment_list_element->s_adjustment_number) == NULL) {
    goto fail; //String
    }


    // adjustment_list_element->s_adjustment_comment
    if (!adjustment_list_element->s_adjustment_comment) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAdjustmentComment", adjustment_list_element->s_adjustment_comment) == NULL) {
    goto fail; //String
    }


    // adjustment_list_element->d_adjustment_totaldebit
    if(adjustment_list_element->d_adjustment_totaldebit) {
    if(cJSON_AddStringToObject(item, "dAdjustmentTotaldebit", adjustment_list_element->d_adjustment_totaldebit) == NULL) {
    goto fail; //String
    }
    }


    // adjustment_list_element->d_adjustment_totalcredit
    if(adjustment_list_element->d_adjustment_totalcredit) {
    if(cJSON_AddStringToObject(item, "dAdjustmentTotalcredit", adjustment_list_element->d_adjustment_totalcredit) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

adjustment_list_element_t *adjustment_list_element_parseFromJSON(cJSON *adjustment_list_elementJSON){

    adjustment_list_element_t *adjustment_list_element_local_var = NULL;

    // define the local variable for adjustment_list_element->pki_adjustment_id
    int *pki_adjustment_id_local_var = NULL;

    // define the local variable for adjustment_list_element->fki_period_id
    int *fki_period_id_local_var = NULL;

    char *s_period_yyyymm_local_str = NULL;

    // define the local variable for adjustment_list_element->fki_user_id_created
    int *fki_user_id_created_local_var = NULL;

    char *s_user_loginname_local_str = NULL;

    char *dt_adjustment_date_local_str = NULL;

    char *s_adjustment_number_local_str = NULL;

    char *s_adjustment_comment_local_str = NULL;

    char *d_adjustment_totaldebit_local_str = NULL;

    char *d_adjustment_totalcredit_local_str = NULL;

    // adjustment_list_element->pki_adjustment_id
    cJSON *pki_adjustment_id = cJSON_GetObjectItemCaseSensitive(adjustment_list_elementJSON, "pkiAdjustmentID");
    if (cJSON_IsNull(pki_adjustment_id)) {
        pki_adjustment_id = NULL;
    }
    if (!pki_adjustment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_adjustment_id))
    {
    goto end; //Numeric
    }
    pki_adjustment_id_local_var = malloc(sizeof(int));
    if(!pki_adjustment_id_local_var)
    {
        goto end;
    }
    *pki_adjustment_id_local_var = pki_adjustment_id->valuedouble;

    // adjustment_list_element->fki_period_id
    cJSON *fki_period_id = cJSON_GetObjectItemCaseSensitive(adjustment_list_elementJSON, "fkiPeriodID");
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

    // adjustment_list_element->s_period_yyyymm
    cJSON *s_period_yyyymm = cJSON_GetObjectItemCaseSensitive(adjustment_list_elementJSON, "sPeriodYYYYMM");
    if (cJSON_IsNull(s_period_yyyymm)) {
        s_period_yyyymm = NULL;
    }
    if (s_period_yyyymm) { 
    if(!cJSON_IsString(s_period_yyyymm) && !cJSON_IsNull(s_period_yyyymm))
    {
    goto end; //String
    }
    }

    // adjustment_list_element->fki_user_id_created
    cJSON *fki_user_id_created = cJSON_GetObjectItemCaseSensitive(adjustment_list_elementJSON, "fkiUserIDCreated");
    if (cJSON_IsNull(fki_user_id_created)) {
        fki_user_id_created = NULL;
    }
    if (fki_user_id_created) { 
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
    }

    // adjustment_list_element->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(adjustment_list_elementJSON, "sUserLoginname");
    if (cJSON_IsNull(s_user_loginname)) {
        s_user_loginname = NULL;
    }
    if (s_user_loginname) { 
    if(!cJSON_IsString(s_user_loginname) && !cJSON_IsNull(s_user_loginname))
    {
    goto end; //String
    }
    }

    // adjustment_list_element->dt_adjustment_date
    cJSON *dt_adjustment_date = cJSON_GetObjectItemCaseSensitive(adjustment_list_elementJSON, "dtAdjustmentDate");
    if (cJSON_IsNull(dt_adjustment_date)) {
        dt_adjustment_date = NULL;
    }
    if (!dt_adjustment_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_adjustment_date))
    {
    goto end; //String
    }

    // adjustment_list_element->s_adjustment_number
    cJSON *s_adjustment_number = cJSON_GetObjectItemCaseSensitive(adjustment_list_elementJSON, "sAdjustmentNumber");
    if (cJSON_IsNull(s_adjustment_number)) {
        s_adjustment_number = NULL;
    }
    if (!s_adjustment_number) {
        goto end;
    }

    
    if(!cJSON_IsString(s_adjustment_number))
    {
    goto end; //String
    }

    // adjustment_list_element->s_adjustment_comment
    cJSON *s_adjustment_comment = cJSON_GetObjectItemCaseSensitive(adjustment_list_elementJSON, "sAdjustmentComment");
    if (cJSON_IsNull(s_adjustment_comment)) {
        s_adjustment_comment = NULL;
    }
    if (!s_adjustment_comment) {
        goto end;
    }

    
    if(!cJSON_IsString(s_adjustment_comment))
    {
    goto end; //String
    }

    // adjustment_list_element->d_adjustment_totaldebit
    cJSON *d_adjustment_totaldebit = cJSON_GetObjectItemCaseSensitive(adjustment_list_elementJSON, "dAdjustmentTotaldebit");
    if (cJSON_IsNull(d_adjustment_totaldebit)) {
        d_adjustment_totaldebit = NULL;
    }
    if (d_adjustment_totaldebit) { 
    if(!cJSON_IsString(d_adjustment_totaldebit) && !cJSON_IsNull(d_adjustment_totaldebit))
    {
    goto end; //String
    }
    }

    // adjustment_list_element->d_adjustment_totalcredit
    cJSON *d_adjustment_totalcredit = cJSON_GetObjectItemCaseSensitive(adjustment_list_elementJSON, "dAdjustmentTotalcredit");
    if (cJSON_IsNull(d_adjustment_totalcredit)) {
        d_adjustment_totalcredit = NULL;
    }
    if (d_adjustment_totalcredit) { 
    if(!cJSON_IsString(d_adjustment_totalcredit) && !cJSON_IsNull(d_adjustment_totalcredit))
    {
    goto end; //String
    }
    }


    if (s_period_yyyymm && !cJSON_IsNull(s_period_yyyymm)) s_period_yyyymm_local_str = strdup(s_period_yyyymm->valuestring);
    if (s_user_loginname && !cJSON_IsNull(s_user_loginname)) s_user_loginname_local_str = strdup(s_user_loginname->valuestring);
    if (dt_adjustment_date && !cJSON_IsNull(dt_adjustment_date)) dt_adjustment_date_local_str = strdup(dt_adjustment_date->valuestring);
    if (s_adjustment_number && !cJSON_IsNull(s_adjustment_number)) s_adjustment_number_local_str = strdup(s_adjustment_number->valuestring);
    if (s_adjustment_comment && !cJSON_IsNull(s_adjustment_comment)) s_adjustment_comment_local_str = strdup(s_adjustment_comment->valuestring);
    if (d_adjustment_totaldebit && !cJSON_IsNull(d_adjustment_totaldebit)) d_adjustment_totaldebit_local_str = strdup(d_adjustment_totaldebit->valuestring);
    if (d_adjustment_totalcredit && !cJSON_IsNull(d_adjustment_totalcredit)) d_adjustment_totalcredit_local_str = strdup(d_adjustment_totalcredit->valuestring);

    adjustment_list_element_local_var = adjustment_list_element_create_internal (
        pki_adjustment_id_local_var,
        fki_period_id_local_var,
        s_period_yyyymm_local_str,
        fki_user_id_created_local_var,
        s_user_loginname_local_str,
        dt_adjustment_date_local_str,
        s_adjustment_number_local_str,
        s_adjustment_comment_local_str,
        d_adjustment_totaldebit_local_str,
        d_adjustment_totalcredit_local_str
        );

    if (!adjustment_list_element_local_var) {
        goto end;
    }

    return adjustment_list_element_local_var;
end:
    if (pki_adjustment_id_local_var) {
        free(pki_adjustment_id_local_var);
        pki_adjustment_id_local_var = NULL;
    }
    if (fki_period_id_local_var) {
        free(fki_period_id_local_var);
        fki_period_id_local_var = NULL;
    }
    if (s_period_yyyymm_local_str) {
        free(s_period_yyyymm_local_str);
        s_period_yyyymm_local_str = NULL;
    }
    if (fki_user_id_created_local_var) {
        free(fki_user_id_created_local_var);
        fki_user_id_created_local_var = NULL;
    }
    if (s_user_loginname_local_str) {
        free(s_user_loginname_local_str);
        s_user_loginname_local_str = NULL;
    }
    if (dt_adjustment_date_local_str) {
        free(dt_adjustment_date_local_str);
        dt_adjustment_date_local_str = NULL;
    }
    if (s_adjustment_number_local_str) {
        free(s_adjustment_number_local_str);
        s_adjustment_number_local_str = NULL;
    }
    if (s_adjustment_comment_local_str) {
        free(s_adjustment_comment_local_str);
        s_adjustment_comment_local_str = NULL;
    }
    if (d_adjustment_totaldebit_local_str) {
        free(d_adjustment_totaldebit_local_str);
        d_adjustment_totaldebit_local_str = NULL;
    }
    if (d_adjustment_totalcredit_local_str) {
        free(d_adjustment_totalcredit_local_str);
        d_adjustment_totalcredit_local_str = NULL;
    }
    return NULL;

}
