#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "adjustmentreminder_list_element.h"



static adjustmentreminder_list_element_t *adjustmentreminder_list_element_create_internal(
    int *pki_adjustmentreminder_id,
    int *fki_adjustment_id,
    int *fki_period_id,
    char *s_period_yyyymm,
    int *fki_user_id_created,
    char *s_user_loginname,
    ezmax_api_definition__full_field_e_adjustmentreminder_type__e e_adjustmentreminder_type,
    char *s_adjustment_number,
    char *s_adjustment_comment,
    char *d_adjustment_totaldebit,
    char *d_adjustment_totalcredit
    ) {
    adjustmentreminder_list_element_t *adjustmentreminder_list_element_local_var = malloc(sizeof(adjustmentreminder_list_element_t));
    if (!adjustmentreminder_list_element_local_var) {
        return NULL;
    }
    memset(adjustmentreminder_list_element_local_var, 0, sizeof(adjustmentreminder_list_element_t));
    adjustmentreminder_list_element_local_var->_library_owned = 1;
    adjustmentreminder_list_element_local_var->pki_adjustmentreminder_id = pki_adjustmentreminder_id;
    adjustmentreminder_list_element_local_var->fki_adjustment_id = fki_adjustment_id;
    adjustmentreminder_list_element_local_var->fki_period_id = fki_period_id;
    adjustmentreminder_list_element_local_var->s_period_yyyymm = s_period_yyyymm;
    adjustmentreminder_list_element_local_var->fki_user_id_created = fki_user_id_created;
    adjustmentreminder_list_element_local_var->s_user_loginname = s_user_loginname;
    adjustmentreminder_list_element_local_var->e_adjustmentreminder_type = e_adjustmentreminder_type;
    adjustmentreminder_list_element_local_var->s_adjustment_number = s_adjustment_number;
    adjustmentreminder_list_element_local_var->s_adjustment_comment = s_adjustment_comment;
    adjustmentreminder_list_element_local_var->d_adjustment_totaldebit = d_adjustment_totaldebit;
    adjustmentreminder_list_element_local_var->d_adjustment_totalcredit = d_adjustment_totalcredit;
    return adjustmentreminder_list_element_local_var;
}

__attribute__((deprecated)) adjustmentreminder_list_element_t *adjustmentreminder_list_element_create(
    int *pki_adjustmentreminder_id,
    int *fki_adjustment_id,
    int *fki_period_id,
    char *s_period_yyyymm,
    int *fki_user_id_created,
    char *s_user_loginname,
    ezmax_api_definition__full_field_e_adjustmentreminder_type__e e_adjustmentreminder_type,
    char *s_adjustment_number,
    char *s_adjustment_comment,
    char *d_adjustment_totaldebit,
    char *d_adjustment_totalcredit
    ) {
    int *pki_adjustmentreminder_id_copy = NULL;
    if (pki_adjustmentreminder_id) {
        pki_adjustmentreminder_id_copy = malloc(sizeof(int));
        if (pki_adjustmentreminder_id_copy) *pki_adjustmentreminder_id_copy = *pki_adjustmentreminder_id;
    }
    int *fki_adjustment_id_copy = NULL;
    if (fki_adjustment_id) {
        fki_adjustment_id_copy = malloc(sizeof(int));
        if (fki_adjustment_id_copy) *fki_adjustment_id_copy = *fki_adjustment_id;
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
    adjustmentreminder_list_element_t *result = adjustmentreminder_list_element_create_internal (
        pki_adjustmentreminder_id_copy,
        fki_adjustment_id_copy,
        fki_period_id_copy,
        s_period_yyyymm,
        fki_user_id_created_copy,
        s_user_loginname,
        e_adjustmentreminder_type,
        s_adjustment_number,
        s_adjustment_comment,
        d_adjustment_totaldebit,
        d_adjustment_totalcredit
        );
    if (!result) {
        free(pki_adjustmentreminder_id_copy);
        free(fki_adjustment_id_copy);
        free(fki_period_id_copy);
        free(fki_user_id_created_copy);
    }
    return result;
}

void adjustmentreminder_list_element_free(adjustmentreminder_list_element_t *adjustmentreminder_list_element) {
    if(NULL == adjustmentreminder_list_element){
        return ;
    }
    if(adjustmentreminder_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "adjustmentreminder_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (adjustmentreminder_list_element->pki_adjustmentreminder_id) {
        free(adjustmentreminder_list_element->pki_adjustmentreminder_id);
        adjustmentreminder_list_element->pki_adjustmentreminder_id = NULL;
    }
    if (adjustmentreminder_list_element->fki_adjustment_id) {
        free(adjustmentreminder_list_element->fki_adjustment_id);
        adjustmentreminder_list_element->fki_adjustment_id = NULL;
    }
    if (adjustmentreminder_list_element->fki_period_id) {
        free(adjustmentreminder_list_element->fki_period_id);
        adjustmentreminder_list_element->fki_period_id = NULL;
    }
    if (adjustmentreminder_list_element->s_period_yyyymm) {
        free(adjustmentreminder_list_element->s_period_yyyymm);
        adjustmentreminder_list_element->s_period_yyyymm = NULL;
    }
    if (adjustmentreminder_list_element->fki_user_id_created) {
        free(adjustmentreminder_list_element->fki_user_id_created);
        adjustmentreminder_list_element->fki_user_id_created = NULL;
    }
    if (adjustmentreminder_list_element->s_user_loginname) {
        free(adjustmentreminder_list_element->s_user_loginname);
        adjustmentreminder_list_element->s_user_loginname = NULL;
    }
    if (adjustmentreminder_list_element->s_adjustment_number) {
        free(adjustmentreminder_list_element->s_adjustment_number);
        adjustmentreminder_list_element->s_adjustment_number = NULL;
    }
    if (adjustmentreminder_list_element->s_adjustment_comment) {
        free(adjustmentreminder_list_element->s_adjustment_comment);
        adjustmentreminder_list_element->s_adjustment_comment = NULL;
    }
    if (adjustmentreminder_list_element->d_adjustment_totaldebit) {
        free(adjustmentreminder_list_element->d_adjustment_totaldebit);
        adjustmentreminder_list_element->d_adjustment_totaldebit = NULL;
    }
    if (adjustmentreminder_list_element->d_adjustment_totalcredit) {
        free(adjustmentreminder_list_element->d_adjustment_totalcredit);
        adjustmentreminder_list_element->d_adjustment_totalcredit = NULL;
    }
    free(adjustmentreminder_list_element);
}

cJSON *adjustmentreminder_list_element_convertToJSON(adjustmentreminder_list_element_t *adjustmentreminder_list_element) {
    cJSON *item = cJSON_CreateObject();

    // adjustmentreminder_list_element->pki_adjustmentreminder_id
    if (!adjustmentreminder_list_element->pki_adjustmentreminder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAdjustmentreminderID", *adjustmentreminder_list_element->pki_adjustmentreminder_id) == NULL) {
    goto fail; //Numeric
    }


    // adjustmentreminder_list_element->fki_adjustment_id
    if (!adjustmentreminder_list_element->fki_adjustment_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiAdjustmentID", *adjustmentreminder_list_element->fki_adjustment_id) == NULL) {
    goto fail; //Numeric
    }


    // adjustmentreminder_list_element->fki_period_id
    if (!adjustmentreminder_list_element->fki_period_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPeriodID", *adjustmentreminder_list_element->fki_period_id) == NULL) {
    goto fail; //Numeric
    }


    // adjustmentreminder_list_element->s_period_yyyymm
    if(adjustmentreminder_list_element->s_period_yyyymm) {
    if(cJSON_AddStringToObject(item, "sPeriodYYYYMM", adjustmentreminder_list_element->s_period_yyyymm) == NULL) {
    goto fail; //String
    }
    }


    // adjustmentreminder_list_element->fki_user_id_created
    if(adjustmentreminder_list_element->fki_user_id_created) {
    if(cJSON_AddNumberToObject(item, "fkiUserIDCreated", *adjustmentreminder_list_element->fki_user_id_created) == NULL) {
    goto fail; //Numeric
    }
    }


    // adjustmentreminder_list_element->s_user_loginname
    if(adjustmentreminder_list_element->s_user_loginname) {
    if(cJSON_AddStringToObject(item, "sUserLoginname", adjustmentreminder_list_element->s_user_loginname) == NULL) {
    goto fail; //String
    }
    }


    // adjustmentreminder_list_element->e_adjustmentreminder_type
    if (ezmax_api_definition__full_field_e_adjustmentreminder_type__NULL == adjustmentreminder_list_element->e_adjustmentreminder_type) {
        goto fail;
    }
    cJSON *e_adjustmentreminder_type_local_JSON = field_e_adjustmentreminder_type_convertToJSON(adjustmentreminder_list_element->e_adjustmentreminder_type);
    if(e_adjustmentreminder_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eAdjustmentreminderType", e_adjustmentreminder_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // adjustmentreminder_list_element->s_adjustment_number
    if(adjustmentreminder_list_element->s_adjustment_number) {
    if(cJSON_AddStringToObject(item, "sAdjustmentNumber", adjustmentreminder_list_element->s_adjustment_number) == NULL) {
    goto fail; //String
    }
    }


    // adjustmentreminder_list_element->s_adjustment_comment
    if(adjustmentreminder_list_element->s_adjustment_comment) {
    if(cJSON_AddStringToObject(item, "sAdjustmentComment", adjustmentreminder_list_element->s_adjustment_comment) == NULL) {
    goto fail; //String
    }
    }


    // adjustmentreminder_list_element->d_adjustment_totaldebit
    if(adjustmentreminder_list_element->d_adjustment_totaldebit) {
    if(cJSON_AddStringToObject(item, "dAdjustmentTotaldebit", adjustmentreminder_list_element->d_adjustment_totaldebit) == NULL) {
    goto fail; //String
    }
    }


    // adjustmentreminder_list_element->d_adjustment_totalcredit
    if(adjustmentreminder_list_element->d_adjustment_totalcredit) {
    if(cJSON_AddStringToObject(item, "dAdjustmentTotalcredit", adjustmentreminder_list_element->d_adjustment_totalcredit) == NULL) {
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

adjustmentreminder_list_element_t *adjustmentreminder_list_element_parseFromJSON(cJSON *adjustmentreminder_list_elementJSON){

    adjustmentreminder_list_element_t *adjustmentreminder_list_element_local_var = NULL;

    // define the local variable for adjustmentreminder_list_element->pki_adjustmentreminder_id
    int *pki_adjustmentreminder_id_local_var = NULL;

    // define the local variable for adjustmentreminder_list_element->fki_adjustment_id
    int *fki_adjustment_id_local_var = NULL;

    // define the local variable for adjustmentreminder_list_element->fki_period_id
    int *fki_period_id_local_var = NULL;

    char *s_period_yyyymm_local_str = NULL;

    // define the local variable for adjustmentreminder_list_element->fki_user_id_created
    int *fki_user_id_created_local_var = NULL;

    char *s_user_loginname_local_str = NULL;

    // define the local variable for adjustmentreminder_list_element->e_adjustmentreminder_type
    ezmax_api_definition__full_field_e_adjustmentreminder_type__e e_adjustmentreminder_type_local_nonprim = 0;

    char *s_adjustment_number_local_str = NULL;

    char *s_adjustment_comment_local_str = NULL;

    char *d_adjustment_totaldebit_local_str = NULL;

    char *d_adjustment_totalcredit_local_str = NULL;

    // adjustmentreminder_list_element->pki_adjustmentreminder_id
    cJSON *pki_adjustmentreminder_id = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_list_elementJSON, "pkiAdjustmentreminderID");
    if (cJSON_IsNull(pki_adjustmentreminder_id)) {
        pki_adjustmentreminder_id = NULL;
    }
    if (!pki_adjustmentreminder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_adjustmentreminder_id))
    {
    goto end; //Numeric
    }
    pki_adjustmentreminder_id_local_var = malloc(sizeof(int));
    if(!pki_adjustmentreminder_id_local_var)
    {
        goto end;
    }
    *pki_adjustmentreminder_id_local_var = pki_adjustmentreminder_id->valuedouble;

    // adjustmentreminder_list_element->fki_adjustment_id
    cJSON *fki_adjustment_id = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_list_elementJSON, "fkiAdjustmentID");
    if (cJSON_IsNull(fki_adjustment_id)) {
        fki_adjustment_id = NULL;
    }
    if (!fki_adjustment_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_adjustment_id))
    {
    goto end; //Numeric
    }
    fki_adjustment_id_local_var = malloc(sizeof(int));
    if(!fki_adjustment_id_local_var)
    {
        goto end;
    }
    *fki_adjustment_id_local_var = fki_adjustment_id->valuedouble;

    // adjustmentreminder_list_element->fki_period_id
    cJSON *fki_period_id = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_list_elementJSON, "fkiPeriodID");
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

    // adjustmentreminder_list_element->s_period_yyyymm
    cJSON *s_period_yyyymm = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_list_elementJSON, "sPeriodYYYYMM");
    if (cJSON_IsNull(s_period_yyyymm)) {
        s_period_yyyymm = NULL;
    }
    if (s_period_yyyymm) { 
    if(!cJSON_IsString(s_period_yyyymm) && !cJSON_IsNull(s_period_yyyymm))
    {
    goto end; //String
    }
    }

    // adjustmentreminder_list_element->fki_user_id_created
    cJSON *fki_user_id_created = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_list_elementJSON, "fkiUserIDCreated");
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

    // adjustmentreminder_list_element->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_list_elementJSON, "sUserLoginname");
    if (cJSON_IsNull(s_user_loginname)) {
        s_user_loginname = NULL;
    }
    if (s_user_loginname) { 
    if(!cJSON_IsString(s_user_loginname) && !cJSON_IsNull(s_user_loginname))
    {
    goto end; //String
    }
    }

    // adjustmentreminder_list_element->e_adjustmentreminder_type
    cJSON *e_adjustmentreminder_type = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_list_elementJSON, "eAdjustmentreminderType");
    if (cJSON_IsNull(e_adjustmentreminder_type)) {
        e_adjustmentreminder_type = NULL;
    }
    if (!e_adjustmentreminder_type) {
        goto end;
    }

    
    e_adjustmentreminder_type_local_nonprim = field_e_adjustmentreminder_type_parseFromJSON(e_adjustmentreminder_type); //custom

    // adjustmentreminder_list_element->s_adjustment_number
    cJSON *s_adjustment_number = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_list_elementJSON, "sAdjustmentNumber");
    if (cJSON_IsNull(s_adjustment_number)) {
        s_adjustment_number = NULL;
    }
    if (s_adjustment_number) { 
    if(!cJSON_IsString(s_adjustment_number) && !cJSON_IsNull(s_adjustment_number))
    {
    goto end; //String
    }
    }

    // adjustmentreminder_list_element->s_adjustment_comment
    cJSON *s_adjustment_comment = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_list_elementJSON, "sAdjustmentComment");
    if (cJSON_IsNull(s_adjustment_comment)) {
        s_adjustment_comment = NULL;
    }
    if (s_adjustment_comment) { 
    if(!cJSON_IsString(s_adjustment_comment) && !cJSON_IsNull(s_adjustment_comment))
    {
    goto end; //String
    }
    }

    // adjustmentreminder_list_element->d_adjustment_totaldebit
    cJSON *d_adjustment_totaldebit = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_list_elementJSON, "dAdjustmentTotaldebit");
    if (cJSON_IsNull(d_adjustment_totaldebit)) {
        d_adjustment_totaldebit = NULL;
    }
    if (d_adjustment_totaldebit) { 
    if(!cJSON_IsString(d_adjustment_totaldebit) && !cJSON_IsNull(d_adjustment_totaldebit))
    {
    goto end; //String
    }
    }

    // adjustmentreminder_list_element->d_adjustment_totalcredit
    cJSON *d_adjustment_totalcredit = cJSON_GetObjectItemCaseSensitive(adjustmentreminder_list_elementJSON, "dAdjustmentTotalcredit");
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
    if (s_adjustment_number && !cJSON_IsNull(s_adjustment_number)) s_adjustment_number_local_str = strdup(s_adjustment_number->valuestring);
    if (s_adjustment_comment && !cJSON_IsNull(s_adjustment_comment)) s_adjustment_comment_local_str = strdup(s_adjustment_comment->valuestring);
    if (d_adjustment_totaldebit && !cJSON_IsNull(d_adjustment_totaldebit)) d_adjustment_totaldebit_local_str = strdup(d_adjustment_totaldebit->valuestring);
    if (d_adjustment_totalcredit && !cJSON_IsNull(d_adjustment_totalcredit)) d_adjustment_totalcredit_local_str = strdup(d_adjustment_totalcredit->valuestring);

    adjustmentreminder_list_element_local_var = adjustmentreminder_list_element_create_internal (
        pki_adjustmentreminder_id_local_var,
        fki_adjustment_id_local_var,
        fki_period_id_local_var,
        s_period_yyyymm_local_str,
        fki_user_id_created_local_var,
        s_user_loginname_local_str,
        e_adjustmentreminder_type_local_nonprim,
        s_adjustment_number_local_str,
        s_adjustment_comment_local_str,
        d_adjustment_totaldebit_local_str,
        d_adjustment_totalcredit_local_str
        );

    if (!adjustmentreminder_list_element_local_var) {
        goto end;
    }

    return adjustmentreminder_list_element_local_var;
end:
    if (pki_adjustmentreminder_id_local_var) {
        free(pki_adjustmentreminder_id_local_var);
        pki_adjustmentreminder_id_local_var = NULL;
    }
    if (fki_adjustment_id_local_var) {
        free(fki_adjustment_id_local_var);
        fki_adjustment_id_local_var = NULL;
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
    if (e_adjustmentreminder_type_local_nonprim) {
        e_adjustmentreminder_type_local_nonprim = 0;
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
