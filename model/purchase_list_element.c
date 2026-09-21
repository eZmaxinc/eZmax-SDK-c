#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "purchase_list_element.h"



static purchase_list_element_t *purchase_list_element_create_internal(
    int *pki_purchase_id,
    int *fki_franchiseoffice_id,
    int *fki_supplier_id,
    int *fki_period_id,
    char *s_purchase_billnumber,
    char *dt_purchase_date,
    char *dt_purchase_paydate,
    char *d_purchase_total,
    int *b_purchase_isfinanced,
    int *b_purchase_ispaid,
    char *s_franchiseagence_name,
    char *i_franchiseoffice_code,
    char *s_supplier_name
    ) {
    purchase_list_element_t *purchase_list_element_local_var = malloc(sizeof(purchase_list_element_t));
    if (!purchase_list_element_local_var) {
        return NULL;
    }
    memset(purchase_list_element_local_var, 0, sizeof(purchase_list_element_t));
    purchase_list_element_local_var->_library_owned = 1;
    purchase_list_element_local_var->pki_purchase_id = pki_purchase_id;
    purchase_list_element_local_var->fki_franchiseoffice_id = fki_franchiseoffice_id;
    purchase_list_element_local_var->fki_supplier_id = fki_supplier_id;
    purchase_list_element_local_var->fki_period_id = fki_period_id;
    purchase_list_element_local_var->s_purchase_billnumber = s_purchase_billnumber;
    purchase_list_element_local_var->dt_purchase_date = dt_purchase_date;
    purchase_list_element_local_var->dt_purchase_paydate = dt_purchase_paydate;
    purchase_list_element_local_var->d_purchase_total = d_purchase_total;
    purchase_list_element_local_var->b_purchase_isfinanced = b_purchase_isfinanced;
    purchase_list_element_local_var->b_purchase_ispaid = b_purchase_ispaid;
    purchase_list_element_local_var->s_franchiseagence_name = s_franchiseagence_name;
    purchase_list_element_local_var->i_franchiseoffice_code = i_franchiseoffice_code;
    purchase_list_element_local_var->s_supplier_name = s_supplier_name;
    return purchase_list_element_local_var;
}

__attribute__((deprecated)) purchase_list_element_t *purchase_list_element_create(
    int *pki_purchase_id,
    int *fki_franchiseoffice_id,
    int *fki_supplier_id,
    int *fki_period_id,
    char *s_purchase_billnumber,
    char *dt_purchase_date,
    char *dt_purchase_paydate,
    char *d_purchase_total,
    int *b_purchase_isfinanced,
    int *b_purchase_ispaid,
    char *s_franchiseagence_name,
    char *i_franchiseoffice_code,
    char *s_supplier_name
    ) {
    int *pki_purchase_id_copy = NULL;
    if (pki_purchase_id) {
        pki_purchase_id_copy = malloc(sizeof(int));
        if (pki_purchase_id_copy) *pki_purchase_id_copy = *pki_purchase_id;
    }
    int *fki_franchiseoffice_id_copy = NULL;
    if (fki_franchiseoffice_id) {
        fki_franchiseoffice_id_copy = malloc(sizeof(int));
        if (fki_franchiseoffice_id_copy) *fki_franchiseoffice_id_copy = *fki_franchiseoffice_id;
    }
    int *fki_supplier_id_copy = NULL;
    if (fki_supplier_id) {
        fki_supplier_id_copy = malloc(sizeof(int));
        if (fki_supplier_id_copy) *fki_supplier_id_copy = *fki_supplier_id;
    }
    int *fki_period_id_copy = NULL;
    if (fki_period_id) {
        fki_period_id_copy = malloc(sizeof(int));
        if (fki_period_id_copy) *fki_period_id_copy = *fki_period_id;
    }
    int *b_purchase_isfinanced_copy = NULL;
    if (b_purchase_isfinanced) {
        b_purchase_isfinanced_copy = malloc(sizeof(int));
        if (b_purchase_isfinanced_copy) *b_purchase_isfinanced_copy = *b_purchase_isfinanced;
    }
    int *b_purchase_ispaid_copy = NULL;
    if (b_purchase_ispaid) {
        b_purchase_ispaid_copy = malloc(sizeof(int));
        if (b_purchase_ispaid_copy) *b_purchase_ispaid_copy = *b_purchase_ispaid;
    }
    purchase_list_element_t *result = purchase_list_element_create_internal (
        pki_purchase_id_copy,
        fki_franchiseoffice_id_copy,
        fki_supplier_id_copy,
        fki_period_id_copy,
        s_purchase_billnumber,
        dt_purchase_date,
        dt_purchase_paydate,
        d_purchase_total,
        b_purchase_isfinanced_copy,
        b_purchase_ispaid_copy,
        s_franchiseagence_name,
        i_franchiseoffice_code,
        s_supplier_name
        );
    if (!result) {
        free(pki_purchase_id_copy);
        free(fki_franchiseoffice_id_copy);
        free(fki_supplier_id_copy);
        free(fki_period_id_copy);
        free(b_purchase_isfinanced_copy);
        free(b_purchase_ispaid_copy);
    }
    return result;
}

void purchase_list_element_free(purchase_list_element_t *purchase_list_element) {
    if(NULL == purchase_list_element){
        return ;
    }
    if(purchase_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "purchase_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (purchase_list_element->pki_purchase_id) {
        free(purchase_list_element->pki_purchase_id);
        purchase_list_element->pki_purchase_id = NULL;
    }
    if (purchase_list_element->fki_franchiseoffice_id) {
        free(purchase_list_element->fki_franchiseoffice_id);
        purchase_list_element->fki_franchiseoffice_id = NULL;
    }
    if (purchase_list_element->fki_supplier_id) {
        free(purchase_list_element->fki_supplier_id);
        purchase_list_element->fki_supplier_id = NULL;
    }
    if (purchase_list_element->fki_period_id) {
        free(purchase_list_element->fki_period_id);
        purchase_list_element->fki_period_id = NULL;
    }
    if (purchase_list_element->s_purchase_billnumber) {
        free(purchase_list_element->s_purchase_billnumber);
        purchase_list_element->s_purchase_billnumber = NULL;
    }
    if (purchase_list_element->dt_purchase_date) {
        free(purchase_list_element->dt_purchase_date);
        purchase_list_element->dt_purchase_date = NULL;
    }
    if (purchase_list_element->dt_purchase_paydate) {
        free(purchase_list_element->dt_purchase_paydate);
        purchase_list_element->dt_purchase_paydate = NULL;
    }
    if (purchase_list_element->d_purchase_total) {
        free(purchase_list_element->d_purchase_total);
        purchase_list_element->d_purchase_total = NULL;
    }
    if (purchase_list_element->b_purchase_isfinanced) {
        free(purchase_list_element->b_purchase_isfinanced);
        purchase_list_element->b_purchase_isfinanced = NULL;
    }
    if (purchase_list_element->b_purchase_ispaid) {
        free(purchase_list_element->b_purchase_ispaid);
        purchase_list_element->b_purchase_ispaid = NULL;
    }
    if (purchase_list_element->s_franchiseagence_name) {
        free(purchase_list_element->s_franchiseagence_name);
        purchase_list_element->s_franchiseagence_name = NULL;
    }
    if (purchase_list_element->i_franchiseoffice_code) {
        free(purchase_list_element->i_franchiseoffice_code);
        purchase_list_element->i_franchiseoffice_code = NULL;
    }
    if (purchase_list_element->s_supplier_name) {
        free(purchase_list_element->s_supplier_name);
        purchase_list_element->s_supplier_name = NULL;
    }
    free(purchase_list_element);
}

cJSON *purchase_list_element_convertToJSON(purchase_list_element_t *purchase_list_element) {
    cJSON *item = cJSON_CreateObject();

    // purchase_list_element->pki_purchase_id
    if (!purchase_list_element->pki_purchase_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPurchaseID", *purchase_list_element->pki_purchase_id) == NULL) {
    goto fail; //Numeric
    }


    // purchase_list_element->fki_franchiseoffice_id
    if(purchase_list_element->fki_franchiseoffice_id) {
    if(cJSON_AddNumberToObject(item, "fkiFranchiseofficeID", *purchase_list_element->fki_franchiseoffice_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // purchase_list_element->fki_supplier_id
    if(purchase_list_element->fki_supplier_id) {
    if(cJSON_AddNumberToObject(item, "fkiSupplierID", *purchase_list_element->fki_supplier_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // purchase_list_element->fki_period_id
    if (!purchase_list_element->fki_period_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPeriodID", *purchase_list_element->fki_period_id) == NULL) {
    goto fail; //Numeric
    }


    // purchase_list_element->s_purchase_billnumber
    if (!purchase_list_element->s_purchase_billnumber) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPurchaseBillnumber", purchase_list_element->s_purchase_billnumber) == NULL) {
    goto fail; //String
    }


    // purchase_list_element->dt_purchase_date
    if (!purchase_list_element->dt_purchase_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtPurchaseDate", purchase_list_element->dt_purchase_date) == NULL) {
    goto fail; //String
    }


    // purchase_list_element->dt_purchase_paydate
    if (!purchase_list_element->dt_purchase_paydate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtPurchasePaydate", purchase_list_element->dt_purchase_paydate) == NULL) {
    goto fail; //String
    }


    // purchase_list_element->d_purchase_total
    if (!purchase_list_element->d_purchase_total) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dPurchaseTotal", purchase_list_element->d_purchase_total) == NULL) {
    goto fail; //String
    }


    // purchase_list_element->b_purchase_isfinanced
    if (!purchase_list_element->b_purchase_isfinanced) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPurchaseIsfinanced", *purchase_list_element->b_purchase_isfinanced) == NULL) {
    goto fail; //Bool
    }


    // purchase_list_element->b_purchase_ispaid
    if (!purchase_list_element->b_purchase_ispaid) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPurchaseIspaid", *purchase_list_element->b_purchase_ispaid) == NULL) {
    goto fail; //Bool
    }


    // purchase_list_element->s_franchiseagence_name
    if(purchase_list_element->s_franchiseagence_name) {
    if(cJSON_AddStringToObject(item, "sFranchiseagenceName", purchase_list_element->s_franchiseagence_name) == NULL) {
    goto fail; //String
    }
    }


    // purchase_list_element->i_franchiseoffice_code
    if(purchase_list_element->i_franchiseoffice_code) {
    if(cJSON_AddStringToObject(item, "iFranchiseofficeCode", purchase_list_element->i_franchiseoffice_code) == NULL) {
    goto fail; //String
    }
    }


    // purchase_list_element->s_supplier_name
    if(purchase_list_element->s_supplier_name) {
    if(cJSON_AddStringToObject(item, "sSupplierName", purchase_list_element->s_supplier_name) == NULL) {
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

purchase_list_element_t *purchase_list_element_parseFromJSON(cJSON *purchase_list_elementJSON){

    purchase_list_element_t *purchase_list_element_local_var = NULL;

    // define the local variable for purchase_list_element->pki_purchase_id
    int *pki_purchase_id_local_var = NULL;

    // define the local variable for purchase_list_element->fki_franchiseoffice_id
    int *fki_franchiseoffice_id_local_var = NULL;

    // define the local variable for purchase_list_element->fki_supplier_id
    int *fki_supplier_id_local_var = NULL;

    // define the local variable for purchase_list_element->fki_period_id
    int *fki_period_id_local_var = NULL;

    char *s_purchase_billnumber_local_str = NULL;

    char *dt_purchase_date_local_str = NULL;

    char *dt_purchase_paydate_local_str = NULL;

    char *d_purchase_total_local_str = NULL;

    // define the local variable for purchase_list_element->b_purchase_isfinanced
    int *b_purchase_isfinanced_local_var = NULL;

    // define the local variable for purchase_list_element->b_purchase_ispaid
    int *b_purchase_ispaid_local_var = NULL;

    char *s_franchiseagence_name_local_str = NULL;

    char *i_franchiseoffice_code_local_str = NULL;

    char *s_supplier_name_local_str = NULL;

    // purchase_list_element->pki_purchase_id
    cJSON *pki_purchase_id = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "pkiPurchaseID");
    if (cJSON_IsNull(pki_purchase_id)) {
        pki_purchase_id = NULL;
    }
    if (!pki_purchase_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_purchase_id))
    {
    goto end; //Numeric
    }
    pki_purchase_id_local_var = malloc(sizeof(int));
    if(!pki_purchase_id_local_var)
    {
        goto end;
    }
    *pki_purchase_id_local_var = pki_purchase_id->valuedouble;

    // purchase_list_element->fki_franchiseoffice_id
    cJSON *fki_franchiseoffice_id = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "fkiFranchiseofficeID");
    if (cJSON_IsNull(fki_franchiseoffice_id)) {
        fki_franchiseoffice_id = NULL;
    }
    if (fki_franchiseoffice_id) { 
    if(!cJSON_IsNumber(fki_franchiseoffice_id))
    {
    goto end; //Numeric
    }
    fki_franchiseoffice_id_local_var = malloc(sizeof(int));
    if(!fki_franchiseoffice_id_local_var)
    {
        goto end;
    }
    *fki_franchiseoffice_id_local_var = fki_franchiseoffice_id->valuedouble;
    }

    // purchase_list_element->fki_supplier_id
    cJSON *fki_supplier_id = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "fkiSupplierID");
    if (cJSON_IsNull(fki_supplier_id)) {
        fki_supplier_id = NULL;
    }
    if (fki_supplier_id) { 
    if(!cJSON_IsNumber(fki_supplier_id))
    {
    goto end; //Numeric
    }
    fki_supplier_id_local_var = malloc(sizeof(int));
    if(!fki_supplier_id_local_var)
    {
        goto end;
    }
    *fki_supplier_id_local_var = fki_supplier_id->valuedouble;
    }

    // purchase_list_element->fki_period_id
    cJSON *fki_period_id = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "fkiPeriodID");
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

    // purchase_list_element->s_purchase_billnumber
    cJSON *s_purchase_billnumber = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "sPurchaseBillnumber");
    if (cJSON_IsNull(s_purchase_billnumber)) {
        s_purchase_billnumber = NULL;
    }
    if (!s_purchase_billnumber) {
        goto end;
    }

    
    if(!cJSON_IsString(s_purchase_billnumber))
    {
    goto end; //String
    }

    // purchase_list_element->dt_purchase_date
    cJSON *dt_purchase_date = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "dtPurchaseDate");
    if (cJSON_IsNull(dt_purchase_date)) {
        dt_purchase_date = NULL;
    }
    if (!dt_purchase_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_purchase_date))
    {
    goto end; //String
    }

    // purchase_list_element->dt_purchase_paydate
    cJSON *dt_purchase_paydate = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "dtPurchasePaydate");
    if (cJSON_IsNull(dt_purchase_paydate)) {
        dt_purchase_paydate = NULL;
    }
    if (!dt_purchase_paydate) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_purchase_paydate))
    {
    goto end; //String
    }

    // purchase_list_element->d_purchase_total
    cJSON *d_purchase_total = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "dPurchaseTotal");
    if (cJSON_IsNull(d_purchase_total)) {
        d_purchase_total = NULL;
    }
    if (!d_purchase_total) {
        goto end;
    }

    
    if(!cJSON_IsString(d_purchase_total))
    {
    goto end; //String
    }

    // purchase_list_element->b_purchase_isfinanced
    cJSON *b_purchase_isfinanced = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "bPurchaseIsfinanced");
    if (cJSON_IsNull(b_purchase_isfinanced)) {
        b_purchase_isfinanced = NULL;
    }
    if (!b_purchase_isfinanced) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_purchase_isfinanced))
    {
    goto end; //Bool
    }
    b_purchase_isfinanced_local_var = malloc(sizeof(int));
    if(!b_purchase_isfinanced_local_var)
    {
        goto end;
    }
    *b_purchase_isfinanced_local_var = b_purchase_isfinanced->valueint;

    // purchase_list_element->b_purchase_ispaid
    cJSON *b_purchase_ispaid = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "bPurchaseIspaid");
    if (cJSON_IsNull(b_purchase_ispaid)) {
        b_purchase_ispaid = NULL;
    }
    if (!b_purchase_ispaid) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_purchase_ispaid))
    {
    goto end; //Bool
    }
    b_purchase_ispaid_local_var = malloc(sizeof(int));
    if(!b_purchase_ispaid_local_var)
    {
        goto end;
    }
    *b_purchase_ispaid_local_var = b_purchase_ispaid->valueint;

    // purchase_list_element->s_franchiseagence_name
    cJSON *s_franchiseagence_name = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "sFranchiseagenceName");
    if (cJSON_IsNull(s_franchiseagence_name)) {
        s_franchiseagence_name = NULL;
    }
    if (s_franchiseagence_name) { 
    if(!cJSON_IsString(s_franchiseagence_name) && !cJSON_IsNull(s_franchiseagence_name))
    {
    goto end; //String
    }
    }

    // purchase_list_element->i_franchiseoffice_code
    cJSON *i_franchiseoffice_code = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "iFranchiseofficeCode");
    if (cJSON_IsNull(i_franchiseoffice_code)) {
        i_franchiseoffice_code = NULL;
    }
    if (i_franchiseoffice_code) { 
    if(!cJSON_IsString(i_franchiseoffice_code) && !cJSON_IsNull(i_franchiseoffice_code))
    {
    goto end; //String
    }
    }

    // purchase_list_element->s_supplier_name
    cJSON *s_supplier_name = cJSON_GetObjectItemCaseSensitive(purchase_list_elementJSON, "sSupplierName");
    if (cJSON_IsNull(s_supplier_name)) {
        s_supplier_name = NULL;
    }
    if (s_supplier_name) { 
    if(!cJSON_IsString(s_supplier_name) && !cJSON_IsNull(s_supplier_name))
    {
    goto end; //String
    }
    }


    if (s_purchase_billnumber && !cJSON_IsNull(s_purchase_billnumber)) s_purchase_billnumber_local_str = strdup(s_purchase_billnumber->valuestring);
    if (dt_purchase_date && !cJSON_IsNull(dt_purchase_date)) dt_purchase_date_local_str = strdup(dt_purchase_date->valuestring);
    if (dt_purchase_paydate && !cJSON_IsNull(dt_purchase_paydate)) dt_purchase_paydate_local_str = strdup(dt_purchase_paydate->valuestring);
    if (d_purchase_total && !cJSON_IsNull(d_purchase_total)) d_purchase_total_local_str = strdup(d_purchase_total->valuestring);
    if (s_franchiseagence_name && !cJSON_IsNull(s_franchiseagence_name)) s_franchiseagence_name_local_str = strdup(s_franchiseagence_name->valuestring);
    if (i_franchiseoffice_code && !cJSON_IsNull(i_franchiseoffice_code)) i_franchiseoffice_code_local_str = strdup(i_franchiseoffice_code->valuestring);
    if (s_supplier_name && !cJSON_IsNull(s_supplier_name)) s_supplier_name_local_str = strdup(s_supplier_name->valuestring);

    purchase_list_element_local_var = purchase_list_element_create_internal (
        pki_purchase_id_local_var,
        fki_franchiseoffice_id_local_var,
        fki_supplier_id_local_var,
        fki_period_id_local_var,
        s_purchase_billnumber_local_str,
        dt_purchase_date_local_str,
        dt_purchase_paydate_local_str,
        d_purchase_total_local_str,
        b_purchase_isfinanced_local_var,
        b_purchase_ispaid_local_var,
        s_franchiseagence_name_local_str,
        i_franchiseoffice_code_local_str,
        s_supplier_name_local_str
        );

    if (!purchase_list_element_local_var) {
        goto end;
    }

    return purchase_list_element_local_var;
end:
    if (pki_purchase_id_local_var) {
        free(pki_purchase_id_local_var);
        pki_purchase_id_local_var = NULL;
    }
    if (fki_franchiseoffice_id_local_var) {
        free(fki_franchiseoffice_id_local_var);
        fki_franchiseoffice_id_local_var = NULL;
    }
    if (fki_supplier_id_local_var) {
        free(fki_supplier_id_local_var);
        fki_supplier_id_local_var = NULL;
    }
    if (fki_period_id_local_var) {
        free(fki_period_id_local_var);
        fki_period_id_local_var = NULL;
    }
    if (s_purchase_billnumber_local_str) {
        free(s_purchase_billnumber_local_str);
        s_purchase_billnumber_local_str = NULL;
    }
    if (dt_purchase_date_local_str) {
        free(dt_purchase_date_local_str);
        dt_purchase_date_local_str = NULL;
    }
    if (dt_purchase_paydate_local_str) {
        free(dt_purchase_paydate_local_str);
        dt_purchase_paydate_local_str = NULL;
    }
    if (d_purchase_total_local_str) {
        free(d_purchase_total_local_str);
        d_purchase_total_local_str = NULL;
    }
    if (b_purchase_isfinanced_local_var) {
        free(b_purchase_isfinanced_local_var);
        b_purchase_isfinanced_local_var = NULL;
    }
    if (b_purchase_ispaid_local_var) {
        free(b_purchase_ispaid_local_var);
        b_purchase_ispaid_local_var = NULL;
    }
    if (s_franchiseagence_name_local_str) {
        free(s_franchiseagence_name_local_str);
        s_franchiseagence_name_local_str = NULL;
    }
    if (i_franchiseoffice_code_local_str) {
        free(i_franchiseoffice_code_local_str);
        i_franchiseoffice_code_local_str = NULL;
    }
    if (s_supplier_name_local_str) {
        free(s_supplier_name_local_str);
        s_supplier_name_local_str = NULL;
    }
    return NULL;

}
