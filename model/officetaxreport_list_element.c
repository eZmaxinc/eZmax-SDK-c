#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "officetaxreport_list_element.h"



static officetaxreport_list_element_t *officetaxreport_list_element_create_internal(
    int *pki_officetaxreport_id,
    int *fki_period_id,
    char *s_period_yyyymm,
    char *dt_created_date,
    char *s_user_loginname
    ) {
    officetaxreport_list_element_t *officetaxreport_list_element_local_var = malloc(sizeof(officetaxreport_list_element_t));
    if (!officetaxreport_list_element_local_var) {
        return NULL;
    }
    memset(officetaxreport_list_element_local_var, 0, sizeof(officetaxreport_list_element_t));
    officetaxreport_list_element_local_var->_library_owned = 1;
    officetaxreport_list_element_local_var->pki_officetaxreport_id = pki_officetaxreport_id;
    officetaxreport_list_element_local_var->fki_period_id = fki_period_id;
    officetaxreport_list_element_local_var->s_period_yyyymm = s_period_yyyymm;
    officetaxreport_list_element_local_var->dt_created_date = dt_created_date;
    officetaxreport_list_element_local_var->s_user_loginname = s_user_loginname;
    return officetaxreport_list_element_local_var;
}

__attribute__((deprecated)) officetaxreport_list_element_t *officetaxreport_list_element_create(
    int *pki_officetaxreport_id,
    int *fki_period_id,
    char *s_period_yyyymm,
    char *dt_created_date,
    char *s_user_loginname
    ) {
    int *pki_officetaxreport_id_copy = NULL;
    if (pki_officetaxreport_id) {
        pki_officetaxreport_id_copy = malloc(sizeof(int));
        if (pki_officetaxreport_id_copy) *pki_officetaxreport_id_copy = *pki_officetaxreport_id;
    }
    int *fki_period_id_copy = NULL;
    if (fki_period_id) {
        fki_period_id_copy = malloc(sizeof(int));
        if (fki_period_id_copy) *fki_period_id_copy = *fki_period_id;
    }
    officetaxreport_list_element_t *result = officetaxreport_list_element_create_internal (
        pki_officetaxreport_id_copy,
        fki_period_id_copy,
        s_period_yyyymm,
        dt_created_date,
        s_user_loginname
        );
    if (!result) {
        free(pki_officetaxreport_id_copy);
        free(fki_period_id_copy);
    }
    return result;
}

void officetaxreport_list_element_free(officetaxreport_list_element_t *officetaxreport_list_element) {
    if(NULL == officetaxreport_list_element){
        return ;
    }
    if(officetaxreport_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "officetaxreport_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (officetaxreport_list_element->pki_officetaxreport_id) {
        free(officetaxreport_list_element->pki_officetaxreport_id);
        officetaxreport_list_element->pki_officetaxreport_id = NULL;
    }
    if (officetaxreport_list_element->fki_period_id) {
        free(officetaxreport_list_element->fki_period_id);
        officetaxreport_list_element->fki_period_id = NULL;
    }
    if (officetaxreport_list_element->s_period_yyyymm) {
        free(officetaxreport_list_element->s_period_yyyymm);
        officetaxreport_list_element->s_period_yyyymm = NULL;
    }
    if (officetaxreport_list_element->dt_created_date) {
        free(officetaxreport_list_element->dt_created_date);
        officetaxreport_list_element->dt_created_date = NULL;
    }
    if (officetaxreport_list_element->s_user_loginname) {
        free(officetaxreport_list_element->s_user_loginname);
        officetaxreport_list_element->s_user_loginname = NULL;
    }
    free(officetaxreport_list_element);
}

cJSON *officetaxreport_list_element_convertToJSON(officetaxreport_list_element_t *officetaxreport_list_element) {
    cJSON *item = cJSON_CreateObject();

    // officetaxreport_list_element->pki_officetaxreport_id
    if (!officetaxreport_list_element->pki_officetaxreport_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiOfficetaxreportID", *officetaxreport_list_element->pki_officetaxreport_id) == NULL) {
    goto fail; //Numeric
    }


    // officetaxreport_list_element->fki_period_id
    if (!officetaxreport_list_element->fki_period_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPeriodID", *officetaxreport_list_element->fki_period_id) == NULL) {
    goto fail; //Numeric
    }


    // officetaxreport_list_element->s_period_yyyymm
    if (!officetaxreport_list_element->s_period_yyyymm) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPeriodYYYYMM", officetaxreport_list_element->s_period_yyyymm) == NULL) {
    goto fail; //String
    }


    // officetaxreport_list_element->dt_created_date
    if (!officetaxreport_list_element->dt_created_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtCreatedDate", officetaxreport_list_element->dt_created_date) == NULL) {
    goto fail; //String
    }


    // officetaxreport_list_element->s_user_loginname
    if (!officetaxreport_list_element->s_user_loginname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sUserLoginname", officetaxreport_list_element->s_user_loginname) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

officetaxreport_list_element_t *officetaxreport_list_element_parseFromJSON(cJSON *officetaxreport_list_elementJSON){

    officetaxreport_list_element_t *officetaxreport_list_element_local_var = NULL;

    // define the local variable for officetaxreport_list_element->pki_officetaxreport_id
    int *pki_officetaxreport_id_local_var = NULL;

    // define the local variable for officetaxreport_list_element->fki_period_id
    int *fki_period_id_local_var = NULL;

    char *s_period_yyyymm_local_str = NULL;

    char *dt_created_date_local_str = NULL;

    char *s_user_loginname_local_str = NULL;

    // officetaxreport_list_element->pki_officetaxreport_id
    cJSON *pki_officetaxreport_id = cJSON_GetObjectItemCaseSensitive(officetaxreport_list_elementJSON, "pkiOfficetaxreportID");
    if (cJSON_IsNull(pki_officetaxreport_id)) {
        pki_officetaxreport_id = NULL;
    }
    if (!pki_officetaxreport_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_officetaxreport_id))
    {
    goto end; //Numeric
    }
    pki_officetaxreport_id_local_var = malloc(sizeof(int));
    if(!pki_officetaxreport_id_local_var)
    {
        goto end;
    }
    *pki_officetaxreport_id_local_var = pki_officetaxreport_id->valuedouble;

    // officetaxreport_list_element->fki_period_id
    cJSON *fki_period_id = cJSON_GetObjectItemCaseSensitive(officetaxreport_list_elementJSON, "fkiPeriodID");
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

    // officetaxreport_list_element->s_period_yyyymm
    cJSON *s_period_yyyymm = cJSON_GetObjectItemCaseSensitive(officetaxreport_list_elementJSON, "sPeriodYYYYMM");
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

    // officetaxreport_list_element->dt_created_date
    cJSON *dt_created_date = cJSON_GetObjectItemCaseSensitive(officetaxreport_list_elementJSON, "dtCreatedDate");
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

    // officetaxreport_list_element->s_user_loginname
    cJSON *s_user_loginname = cJSON_GetObjectItemCaseSensitive(officetaxreport_list_elementJSON, "sUserLoginname");
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


    if (s_period_yyyymm && !cJSON_IsNull(s_period_yyyymm)) s_period_yyyymm_local_str = strdup(s_period_yyyymm->valuestring);
    if (dt_created_date && !cJSON_IsNull(dt_created_date)) dt_created_date_local_str = strdup(dt_created_date->valuestring);
    if (s_user_loginname && !cJSON_IsNull(s_user_loginname)) s_user_loginname_local_str = strdup(s_user_loginname->valuestring);

    officetaxreport_list_element_local_var = officetaxreport_list_element_create_internal (
        pki_officetaxreport_id_local_var,
        fki_period_id_local_var,
        s_period_yyyymm_local_str,
        dt_created_date_local_str,
        s_user_loginname_local_str
        );

    if (!officetaxreport_list_element_local_var) {
        goto end;
    }

    return officetaxreport_list_element_local_var;
end:
    if (pki_officetaxreport_id_local_var) {
        free(pki_officetaxreport_id_local_var);
        pki_officetaxreport_id_local_var = NULL;
    }
    if (fki_period_id_local_var) {
        free(fki_period_id_local_var);
        fki_period_id_local_var = NULL;
    }
    if (s_period_yyyymm_local_str) {
        free(s_period_yyyymm_local_str);
        s_period_yyyymm_local_str = NULL;
    }
    if (dt_created_date_local_str) {
        free(dt_created_date_local_str);
        dt_created_date_local_str = NULL;
    }
    if (s_user_loginname_local_str) {
        free(s_user_loginname_local_str);
        s_user_loginname_local_str = NULL;
    }
    return NULL;

}
