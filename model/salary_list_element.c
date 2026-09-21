#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "salary_list_element.h"



static salary_list_element_t *salary_list_element_create_internal(
    int *pki_salary_id,
    int *fki_period_id,
    int *fki_salaryperiod_id,
    int *fki_u_ser_id_created,
    char *dt_salary_paymentdate,
    char *s_salaryperiod,
    char *s_period_yyyymm,
    int *i_salarypreparation_count,
    char *d_salarypreparation_total,
    char *dt_salaryperiod_start,
    char *dt_salaryperiod_end,
    char *s_user_loginname,
    char *dt_created_date,
    int *b_salarypreparation_ispaid,
    int *i_salaryperiodgroup_year
    ) {
    salary_list_element_t *salary_list_element_local_var = malloc(sizeof(salary_list_element_t));
    if (!salary_list_element_local_var) {
        return NULL;
    }
    memset(salary_list_element_local_var, 0, sizeof(salary_list_element_t));
    salary_list_element_local_var->_library_owned = 1;
    salary_list_element_local_var->pki_salary_id = pki_salary_id;
    salary_list_element_local_var->fki_period_id = fki_period_id;
    salary_list_element_local_var->fki_salaryperiod_id = fki_salaryperiod_id;
    salary_list_element_local_var->fki_u_ser_id_created = fki_u_ser_id_created;
    salary_list_element_local_var->dt_salary_paymentdate = dt_salary_paymentdate;
    salary_list_element_local_var->s_salaryperiod = s_salaryperiod;
    salary_list_element_local_var->s_period_yyyymm = s_period_yyyymm;
    salary_list_element_local_var->i_salarypreparation_count = i_salarypreparation_count;
    salary_list_element_local_var->d_salarypreparation_total = d_salarypreparation_total;
    salary_list_element_local_var->dt_salaryperiod_start = dt_salaryperiod_start;
    salary_list_element_local_var->dt_salaryperiod_end = dt_salaryperiod_end;
    salary_list_element_local_var->s_user_loginname = s_user_loginname;
    salary_list_element_local_var->dt_created_date = dt_created_date;
    salary_list_element_local_var->b_salarypreparation_ispaid = b_salarypreparation_ispaid;
    salary_list_element_local_var->i_salaryperiodgroup_year = i_salaryperiodgroup_year;
    return salary_list_element_local_var;
}

__attribute__((deprecated)) salary_list_element_t *salary_list_element_create(
    int *pki_salary_id,
    int *fki_period_id,
    int *fki_salaryperiod_id,
    int *fki_u_ser_id_created,
    char *dt_salary_paymentdate,
    char *s_salaryperiod,
    char *s_period_yyyymm,
    int *i_salarypreparation_count,
    char *d_salarypreparation_total,
    char *dt_salaryperiod_start,
    char *dt_salaryperiod_end,
    char *s_user_loginname,
    char *dt_created_date,
    int *b_salarypreparation_ispaid,
    int *i_salaryperiodgroup_year
    ) {
    int *pki_salary_id_copy = NULL;
    if (pki_salary_id) {
        pki_salary_id_copy = malloc(sizeof(int));
        if (pki_salary_id_copy) *pki_salary_id_copy = *pki_salary_id;
    }
    int *fki_period_id_copy = NULL;
    if (fki_period_id) {
        fki_period_id_copy = malloc(sizeof(int));
        if (fki_period_id_copy) *fki_period_id_copy = *fki_period_id;
    }
    int *fki_salaryperiod_id_copy = NULL;
    if (fki_salaryperiod_id) {
        fki_salaryperiod_id_copy = malloc(sizeof(int));
        if (fki_salaryperiod_id_copy) *fki_salaryperiod_id_copy = *fki_salaryperiod_id;
    }
    int *fki_u_ser_id_created_copy = NULL;
    if (fki_u_ser_id_created) {
        fki_u_ser_id_created_copy = malloc(sizeof(int));
        if (fki_u_ser_id_created_copy) *fki_u_ser_id_created_copy = *fki_u_ser_id_created;
    }
    int *i_salarypreparation_count_copy = NULL;
    if (i_salarypreparation_count) {
        i_salarypreparation_count_copy = malloc(sizeof(int));
        if (i_salarypreparation_count_copy) *i_salarypreparation_count_copy = *i_salarypreparation_count;
    }
    int *b_salarypreparation_ispaid_copy = NULL;
    if (b_salarypreparation_ispaid) {
        b_salarypreparation_ispaid_copy = malloc(sizeof(int));
        if (b_salarypreparation_ispaid_copy) *b_salarypreparation_ispaid_copy = *b_salarypreparation_ispaid;
    }
    int *i_salaryperiodgroup_year_copy = NULL;
    if (i_salaryperiodgroup_year) {
        i_salaryperiodgroup_year_copy = malloc(sizeof(int));
        if (i_salaryperiodgroup_year_copy) *i_salaryperiodgroup_year_copy = *i_salaryperiodgroup_year;
    }
    salary_list_element_t *result = salary_list_element_create_internal (
        pki_salary_id_copy,
        fki_period_id_copy,
        fki_salaryperiod_id_copy,
        fki_u_ser_id_created_copy,
        dt_salary_paymentdate,
        s_salaryperiod,
        s_period_yyyymm,
        i_salarypreparation_count_copy,
        d_salarypreparation_total,
        dt_salaryperiod_start,
        dt_salaryperiod_end,
        s_user_loginname,
        dt_created_date,
        b_salarypreparation_ispaid_copy,
        i_salaryperiodgroup_year_copy
        );
    if (!result) {
        free(pki_salary_id_copy);
        free(fki_period_id_copy);
        free(fki_salaryperiod_id_copy);
        free(fki_u_ser_id_created_copy);
        free(i_salarypreparation_count_copy);
        free(b_salarypreparation_ispaid_copy);
        free(i_salaryperiodgroup_year_copy);
    }
    return result;
}

void salary_list_element_free(salary_list_element_t *salary_list_element) {
    if(NULL == salary_list_element){
        return ;
    }
    if(salary_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "salary_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (salary_list_element->pki_salary_id) {
        free(salary_list_element->pki_salary_id);
        salary_list_element->pki_salary_id = NULL;
    }
    if (salary_list_element->fki_period_id) {
        free(salary_list_element->fki_period_id);
        salary_list_element->fki_period_id = NULL;
    }
    if (salary_list_element->fki_salaryperiod_id) {
        free(salary_list_element->fki_salaryperiod_id);
        salary_list_element->fki_salaryperiod_id = NULL;
    }
    if (salary_list_element->fki_u_ser_id_created) {
        free(salary_list_element->fki_u_ser_id_created);
        salary_list_element->fki_u_ser_id_created = NULL;
    }
    if (salary_list_element->dt_salary_paymentdate) {
        free(salary_list_element->dt_salary_paymentdate);
        salary_list_element->dt_salary_paymentdate = NULL;
    }
    if (salary_list_element->s_salaryperiod) {
        free(salary_list_element->s_salaryperiod);
        salary_list_element->s_salaryperiod = NULL;
    }
    if (salary_list_element->s_period_yyyymm) {
        free(salary_list_element->s_period_yyyymm);
        salary_list_element->s_period_yyyymm = NULL;
    }
    if (salary_list_element->i_salarypreparation_count) {
        free(salary_list_element->i_salarypreparation_count);
        salary_list_element->i_salarypreparation_count = NULL;
    }
    if (salary_list_element->d_salarypreparation_total) {
        free(salary_list_element->d_salarypreparation_total);
        salary_list_element->d_salarypreparation_total = NULL;
    }
    if (salary_list_element->dt_salaryperiod_start) {
        free(salary_list_element->dt_salaryperiod_start);
        salary_list_element->dt_salaryperiod_start = NULL;
    }
    if (salary_list_element->dt_salaryperiod_end) {
        free(salary_list_element->dt_salaryperiod_end);
        salary_list_element->dt_salaryperiod_end = NULL;
    }
    if (salary_list_element->s_user_loginname) {
        free(salary_list_element->s_user_loginname);
        salary_list_element->s_user_loginname = NULL;
    }
    if (salary_list_element->dt_created_date) {
        free(salary_list_element->dt_created_date);
        salary_list_element->dt_created_date = NULL;
    }
    if (salary_list_element->b_salarypreparation_ispaid) {
        free(salary_list_element->b_salarypreparation_ispaid);
        salary_list_element->b_salarypreparation_ispaid = NULL;
    }
    if (salary_list_element->i_salaryperiodgroup_year) {
        free(salary_list_element->i_salaryperiodgroup_year);
        salary_list_element->i_salaryperiodgroup_year = NULL;
    }
    free(salary_list_element);
}

cJSON *salary_list_element_convertToJSON(salary_list_element_t *salary_list_element) {
    cJSON *item = cJSON_CreateObject();

    // salary_list_element->pki_salary_id
    if (!salary_list_element->pki_salary_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSalaryID", *salary_list_element->pki_salary_id) == NULL) {
    goto fail; //Numeric
    }


    // salary_list_element->fki_period_id
    if (!salary_list_element->fki_period_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPeriodID", *salary_list_element->fki_period_id) == NULL) {
    goto fail; //Numeric
    }


    // salary_list_element->fki_salaryperiod_id
    if (!salary_list_element->fki_salaryperiod_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiSalaryperiodID", *salary_list_element->fki_salaryperiod_id) == NULL) {
    goto fail; //Numeric
    }


    // salary_list_element->fki_u_ser_id_created
    if(salary_list_element->fki_u_ser_id_created) {
    if(cJSON_AddNumberToObject(item, "fkiUSerIDCreated", *salary_list_element->fki_u_ser_id_created) == NULL) {
    goto fail; //Numeric
    }
    }


    // salary_list_element->dt_salary_paymentdate
    if (!salary_list_element->dt_salary_paymentdate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtSalaryPaymentdate", salary_list_element->dt_salary_paymentdate) == NULL) {
    goto fail; //String
    }


    // salary_list_element->s_salaryperiod
    if(salary_list_element->s_salaryperiod) {
    if(cJSON_AddStringToObject(item, "sSalaryperiod", salary_list_element->s_salaryperiod) == NULL) {
    goto fail; //String
    }
    }


    // salary_list_element->s_period_yyyymm
    if(salary_list_element->s_period_yyyymm) {
    if(cJSON_AddStringToObject(item, "sPeriodYYYYMM", salary_list_element->s_period_yyyymm) == NULL) {
    goto fail; //String
    }
    }


    // salary_list_element->i_salarypreparation_count
    if(salary_list_element->i_salarypreparation_count) {
    if(cJSON_AddNumberToObject(item, "iSalarypreparationCount", *salary_list_element->i_salarypreparation_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // salary_list_element->d_salarypreparation_total
    if(salary_list_element->d_salarypreparation_total) {
    if(cJSON_AddStringToObject(item, "dSalarypreparationTotal", salary_list_element->d_salarypreparation_total) == NULL) {
    goto fail; //String
    }
    }


    // salary_list_element->dt_salaryperiod_start
    if(salary_list_element->dt_salaryperiod_start) {
    if(cJSON_AddStringToObject(item, "dtSalaryperiodStart", salary_list_element->dt_salaryperiod_start) == NULL) {
    goto fail; //String
    }
    }


    // salary_list_element->dt_salaryperiod_end
    if(salary_list_element->dt_salaryperiod_end) {
    if(cJSON_AddStringToObject(item, "dtSalaryperiodEnd", salary_list_element->dt_salaryperiod_end) == NULL) {
    goto fail; //String
    }
    }


    // salary_list_element->s_user_loginname
    if(salary_list_element->s_user_loginname) {
    if(cJSON_AddStringToObject(item, "sUserLoginname", salary_list_element->s_user_loginname) == NULL) {
    goto fail; //String
    }
    }


    // salary_list_element->dt_created_date
    if(salary_list_element->dt_created_date) {
    if(cJSON_AddStringToObject(item, "dtCreatedDate", salary_list_element->dt_created_date) == NULL) {
    goto fail; //String
    }
    }


    // salary_list_element->b_salarypreparation_ispaid
    if(salary_list_element->b_salarypreparation_ispaid) {
    if(cJSON_AddBoolToObject(item, "bSalarypreparationIspaid", *salary_list_element->b_salarypreparation_ispaid) == NULL) {
    goto fail; //Bool
    }
    }


    // salary_list_element->i_salaryperiodgroup_year
    if(salary_list_element->i_salaryperiodgroup_year) {
    if(cJSON_AddNumberToObject(item, "iSalaryperiodgroupYear", *salary_list_element->i_salaryperiodgroup_year) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

salary_list_element_t *salary_list_element_parseFromJSON(cJSON *salary_list_elementJSON){

    salary_list_element_t *salary_list_element_local_var = NULL;

    // define the local variable for salary_list_element->pki_salary_id
    int *pki_salary_id_local_var = NULL;

    // define the local variable for salary_list_element->fki_period_id
    int *fki_period_id_local_var = NULL;

    // define the local variable for salary_list_element->fki_salaryperiod_id
    int *fki_salaryperiod_id_local_var = NULL;

    // define the local variable for salary_list_element->fki_u_ser_id_created
    int *fki_u_ser_id_created_local_var = NULL;

    char *dt_salary_paymentdate_local_str = NULL;

    char *s_salaryperiod_local_str = NULL;

    char *s_period_yyyymm_local_str = NULL;

    // define the local variable for salary_list_element->i_salarypreparation_count
    int *i_salarypreparation_count_local_var = NULL;

    char *d_salarypreparation_total_local_str = NULL;

    char *dt_salaryperiod_start_local_str = NULL;

    char *dt_salaryperiod_end_local_str = NULL;

    char *s_user_loginname_local_str = NULL;

    char *dt_created_date_local_str = NULL;

    // define the local variable for salary_list_element->b_salarypreparation_ispaid
    int *b_salarypreparation_ispaid_local_var = NULL;

    // define the local variable for salary_list_element->i_salaryperiodgroup_year
    int *i_salaryperiodgroup_year_local_var = NULL;

    // salary_list_element->pki_salary_id
    cJSON *pki_salary_id = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "pkiSalaryID");
    if (cJSON_IsNull(pki_salary_id)) {
        pki_salary_id = NULL;
    }
    if (!pki_salary_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_salary_id))
    {
    goto end; //Numeric
    }
    pki_salary_id_local_var = malloc(sizeof(int));
    if(!pki_salary_id_local_var)
    {
        goto end;
    }
    *pki_salary_id_local_var = pki_salary_id->valuedouble;

    // salary_list_element->fki_period_id
    cJSON *fki_period_id = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "fkiPeriodID");
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

    // salary_list_element->fki_salaryperiod_id
    cJSON *fki_salaryperiod_id = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "fkiSalaryperiodID");
    if (cJSON_IsNull(fki_salaryperiod_id)) {
        fki_salaryperiod_id = NULL;
    }
    if (!fki_salaryperiod_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_salaryperiod_id))
    {
    goto end; //Numeric
    }
    fki_salaryperiod_id_local_var = malloc(sizeof(int));
    if(!fki_salaryperiod_id_local_var)
    {
        goto end;
    }
    *fki_salaryperiod_id_local_var = fki_salaryperiod_id->valuedouble;

    // salary_list_element->fki_u_ser_id_created
    cJSON *fki_u_ser_id_created = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "fkiUSerIDCreated");
    if (cJSON_IsNull(fki_u_ser_id_created)) {
        fki_u_ser_id_created = NULL;
    }
    if (fki_u_ser_id_created) { 
    if(!cJSON_IsNumber(fki_u_ser_id_created))
    {
    goto end; //Numeric
    }
    fki_u_ser_id_created_local_var = malloc(sizeof(int));
    if(!fki_u_ser_id_created_local_var)
    {
        goto end;
    }
    *fki_u_ser_id_created_local_var = fki_u_ser_id_created->valuedouble;
    }

    // salary_list_element->dt_salary_paymentdate
    cJSON *dt_salary_paymentdate = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "dtSalaryPaymentdate");
    if (cJSON_IsNull(dt_salary_paymentdate)) {
        dt_salary_paymentdate = NULL;
    }
    if (!dt_salary_paymentdate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_salary_paymentdate))
    {
    goto end; //String
    }

    // salary_list_element->s_salaryperiod
    cJSON *s_salaryperiod = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "sSalaryperiod");
    if (cJSON_IsNull(s_salaryperiod)) {
        s_salaryperiod = NULL;
    }
    if (s_salaryperiod) { 
    if(!cJSON_IsString(s_salaryperiod) && !cJSON_IsNull(s_salaryperiod))
    {
    goto end; //String
    }
    }

    // salary_list_element->s_period_yyyymm
    cJSON *s_period_yyyymm = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "sPeriodYYYYMM");
    if (cJSON_IsNull(s_period_yyyymm)) {
        s_period_yyyymm = NULL;
    }
    if (s_period_yyyymm) { 
    if(!cJSON_IsString(s_period_yyyymm) && !cJSON_IsNull(s_period_yyyymm))
    {
    goto end; //String
    }
    }

    // salary_list_element->i_salarypreparation_count
    cJSON *i_salarypreparation_count = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "iSalarypreparationCount");
    if (cJSON_IsNull(i_salarypreparation_count)) {
        i_salarypreparation_count = NULL;
    }
    if (i_salarypreparation_count) { 
    if(!cJSON_IsNumber(i_salarypreparation_count))
    {
    goto end; //Numeric
    }
    i_salarypreparation_count_local_var = malloc(sizeof(int));
    if(!i_salarypreparation_count_local_var)
    {
        goto end;
    }
    *i_salarypreparation_count_local_var = i_salarypreparation_count->valuedouble;
    }

    // salary_list_element->d_salarypreparation_total
    cJSON *d_salarypreparation_total = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "dSalarypreparationTotal");
    if (cJSON_IsNull(d_salarypreparation_total)) {
        d_salarypreparation_total = NULL;
    }
    if (d_salarypreparation_total) { 
    if(!cJSON_IsString(d_salarypreparation_total) && !cJSON_IsNull(d_salarypreparation_total))
    {
    goto end; //String
    }
    }

    // salary_list_element->dt_salaryperiod_start
    cJSON *dt_salaryperiod_start = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "dtSalaryperiodStart");
    if (cJSON_IsNull(dt_salaryperiod_start)) {
        dt_salaryperiod_start = NULL;
    }
    if (dt_salaryperiod_start) { 
    if(!cJSON_IsString(dt_salaryperiod_start) && !cJSON_IsNull(dt_salaryperiod_start))
    {
    goto end; //String
    }
    }

    // salary_list_element->dt_salaryperiod_end
    cJSON *dt_salaryperiod_end = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "dtSalaryperiodEnd");
    if (cJSON_IsNull(dt_salaryperiod_end)) {
        dt_salaryperiod_end = NULL;
    }
    if (dt_salaryperiod_end) { 
    if(!cJSON_IsString(dt_salaryperiod_end) && !cJSON_IsNull(dt_salaryperiod_end))
    {
    goto end; //String
    }
    }

    // salary_list_element->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "sUserLoginname");
    if (cJSON_IsNull(s_user_loginname)) {
        s_user_loginname = NULL;
    }
    if (s_user_loginname) { 
    if(!cJSON_IsString(s_user_loginname) && !cJSON_IsNull(s_user_loginname))
    {
    goto end; //String
    }
    }

    // salary_list_element->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "dtCreatedDate");
    if (cJSON_IsNull(dt_created_date)) {
        dt_created_date = NULL;
    }
    if (dt_created_date) { 
    if(!cJSON_IsString(dt_created_date) && !cJSON_IsNull(dt_created_date))
    {
    goto end; //String
    }
    }

    // salary_list_element->b_salarypreparation_ispaid
    cJSON *b_salarypreparation_ispaid = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "bSalarypreparationIspaid");
    if (cJSON_IsNull(b_salarypreparation_ispaid)) {
        b_salarypreparation_ispaid = NULL;
    }
    if (b_salarypreparation_ispaid) { 
    if(!cJSON_IsBool(b_salarypreparation_ispaid))
    {
    goto end; //Bool
    }
    b_salarypreparation_ispaid_local_var = malloc(sizeof(int));
    if(!b_salarypreparation_ispaid_local_var)
    {
        goto end;
    }
    *b_salarypreparation_ispaid_local_var = b_salarypreparation_ispaid->valueint;
    }

    // salary_list_element->i_salaryperiodgroup_year
    cJSON *i_salaryperiodgroup_year = cJSON_GetObjectItemCaseSensitive(salary_list_elementJSON, "iSalaryperiodgroupYear");
    if (cJSON_IsNull(i_salaryperiodgroup_year)) {
        i_salaryperiodgroup_year = NULL;
    }
    if (i_salaryperiodgroup_year) { 
    if(!cJSON_IsNumber(i_salaryperiodgroup_year))
    {
    goto end; //Numeric
    }
    i_salaryperiodgroup_year_local_var = malloc(sizeof(int));
    if(!i_salaryperiodgroup_year_local_var)
    {
        goto end;
    }
    *i_salaryperiodgroup_year_local_var = i_salaryperiodgroup_year->valuedouble;
    }


    if (dt_salary_paymentdate && !cJSON_IsNull(dt_salary_paymentdate)) dt_salary_paymentdate_local_str = strdup(dt_salary_paymentdate->valuestring);
    if (s_salaryperiod && !cJSON_IsNull(s_salaryperiod)) s_salaryperiod_local_str = strdup(s_salaryperiod->valuestring);
    if (s_period_yyyymm && !cJSON_IsNull(s_period_yyyymm)) s_period_yyyymm_local_str = strdup(s_period_yyyymm->valuestring);
    if (d_salarypreparation_total && !cJSON_IsNull(d_salarypreparation_total)) d_salarypreparation_total_local_str = strdup(d_salarypreparation_total->valuestring);
    if (dt_salaryperiod_start && !cJSON_IsNull(dt_salaryperiod_start)) dt_salaryperiod_start_local_str = strdup(dt_salaryperiod_start->valuestring);
    if (dt_salaryperiod_end && !cJSON_IsNull(dt_salaryperiod_end)) dt_salaryperiod_end_local_str = strdup(dt_salaryperiod_end->valuestring);
    if (s_user_loginname && !cJSON_IsNull(s_user_loginname)) s_user_loginname_local_str = strdup(s_user_loginname->valuestring);
    if (dt_created_date && !cJSON_IsNull(dt_created_date)) dt_created_date_local_str = strdup(dt_created_date->valuestring);

    salary_list_element_local_var = salary_list_element_create_internal (
        pki_salary_id_local_var,
        fki_period_id_local_var,
        fki_salaryperiod_id_local_var,
        fki_u_ser_id_created_local_var,
        dt_salary_paymentdate_local_str,
        s_salaryperiod_local_str,
        s_period_yyyymm_local_str,
        i_salarypreparation_count_local_var,
        d_salarypreparation_total_local_str,
        dt_salaryperiod_start_local_str,
        dt_salaryperiod_end_local_str,
        s_user_loginname_local_str,
        dt_created_date_local_str,
        b_salarypreparation_ispaid_local_var,
        i_salaryperiodgroup_year_local_var
        );

    if (!salary_list_element_local_var) {
        goto end;
    }

    return salary_list_element_local_var;
end:
    if (pki_salary_id_local_var) {
        free(pki_salary_id_local_var);
        pki_salary_id_local_var = NULL;
    }
    if (fki_period_id_local_var) {
        free(fki_period_id_local_var);
        fki_period_id_local_var = NULL;
    }
    if (fki_salaryperiod_id_local_var) {
        free(fki_salaryperiod_id_local_var);
        fki_salaryperiod_id_local_var = NULL;
    }
    if (fki_u_ser_id_created_local_var) {
        free(fki_u_ser_id_created_local_var);
        fki_u_ser_id_created_local_var = NULL;
    }
    if (dt_salary_paymentdate_local_str) {
        free(dt_salary_paymentdate_local_str);
        dt_salary_paymentdate_local_str = NULL;
    }
    if (s_salaryperiod_local_str) {
        free(s_salaryperiod_local_str);
        s_salaryperiod_local_str = NULL;
    }
    if (s_period_yyyymm_local_str) {
        free(s_period_yyyymm_local_str);
        s_period_yyyymm_local_str = NULL;
    }
    if (i_salarypreparation_count_local_var) {
        free(i_salarypreparation_count_local_var);
        i_salarypreparation_count_local_var = NULL;
    }
    if (d_salarypreparation_total_local_str) {
        free(d_salarypreparation_total_local_str);
        d_salarypreparation_total_local_str = NULL;
    }
    if (dt_salaryperiod_start_local_str) {
        free(dt_salaryperiod_start_local_str);
        dt_salaryperiod_start_local_str = NULL;
    }
    if (dt_salaryperiod_end_local_str) {
        free(dt_salaryperiod_end_local_str);
        dt_salaryperiod_end_local_str = NULL;
    }
    if (s_user_loginname_local_str) {
        free(s_user_loginname_local_str);
        s_user_loginname_local_str = NULL;
    }
    if (dt_created_date_local_str) {
        free(dt_created_date_local_str);
        dt_created_date_local_str = NULL;
    }
    if (b_salarypreparation_ispaid_local_var) {
        free(b_salarypreparation_ispaid_local_var);
        b_salarypreparation_ispaid_local_var = NULL;
    }
    if (i_salaryperiodgroup_year_local_var) {
        free(i_salaryperiodgroup_year_local_var);
        i_salaryperiodgroup_year_local_var = NULL;
    }
    return NULL;

}
