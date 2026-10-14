#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "electronicfundstransfer_list_element.h"



static electronicfundstransfer_list_element_t *electronicfundstransfer_list_element_create_internal(
    int *pki_electronicfundstransfer_id,
    int *fki_paymentmethod_id,
    int *fki_user_id_created,
    char *s_paymentmethod_description_x,
    char *s_user_loginname_created,
    int *i_electronicfundstransfer_number,
    char *dt_electronicfundstransfer_date,
    int *i_electronicfundstransfer_transactioncount,
    char *d_electronicfundstransfer_amountvisible
    ) {
    electronicfundstransfer_list_element_t *electronicfundstransfer_list_element_local_var = malloc(sizeof(electronicfundstransfer_list_element_t));
    if (!electronicfundstransfer_list_element_local_var) {
        return NULL;
    }
    memset(electronicfundstransfer_list_element_local_var, 0, sizeof(electronicfundstransfer_list_element_t));
    electronicfundstransfer_list_element_local_var->_library_owned = 1;
    electronicfundstransfer_list_element_local_var->pki_electronicfundstransfer_id = pki_electronicfundstransfer_id;
    electronicfundstransfer_list_element_local_var->fki_paymentmethod_id = fki_paymentmethod_id;
    electronicfundstransfer_list_element_local_var->fki_user_id_created = fki_user_id_created;
    electronicfundstransfer_list_element_local_var->s_paymentmethod_description_x = s_paymentmethod_description_x;
    electronicfundstransfer_list_element_local_var->s_user_loginname_created = s_user_loginname_created;
    electronicfundstransfer_list_element_local_var->i_electronicfundstransfer_number = i_electronicfundstransfer_number;
    electronicfundstransfer_list_element_local_var->dt_electronicfundstransfer_date = dt_electronicfundstransfer_date;
    electronicfundstransfer_list_element_local_var->i_electronicfundstransfer_transactioncount = i_electronicfundstransfer_transactioncount;
    electronicfundstransfer_list_element_local_var->d_electronicfundstransfer_amountvisible = d_electronicfundstransfer_amountvisible;
    return electronicfundstransfer_list_element_local_var;
}

__attribute__((deprecated)) electronicfundstransfer_list_element_t *electronicfundstransfer_list_element_create(
    int *pki_electronicfundstransfer_id,
    int *fki_paymentmethod_id,
    int *fki_user_id_created,
    char *s_paymentmethod_description_x,
    char *s_user_loginname_created,
    int *i_electronicfundstransfer_number,
    char *dt_electronicfundstransfer_date,
    int *i_electronicfundstransfer_transactioncount,
    char *d_electronicfundstransfer_amountvisible
    ) {
    int *pki_electronicfundstransfer_id_copy = NULL;
    if (pki_electronicfundstransfer_id) {
        pki_electronicfundstransfer_id_copy = malloc(sizeof(int));
        if (pki_electronicfundstransfer_id_copy) *pki_electronicfundstransfer_id_copy = *pki_electronicfundstransfer_id;
    }
    int *fki_paymentmethod_id_copy = NULL;
    if (fki_paymentmethod_id) {
        fki_paymentmethod_id_copy = malloc(sizeof(int));
        if (fki_paymentmethod_id_copy) *fki_paymentmethod_id_copy = *fki_paymentmethod_id;
    }
    int *fki_user_id_created_copy = NULL;
    if (fki_user_id_created) {
        fki_user_id_created_copy = malloc(sizeof(int));
        if (fki_user_id_created_copy) *fki_user_id_created_copy = *fki_user_id_created;
    }
    int *i_electronicfundstransfer_number_copy = NULL;
    if (i_electronicfundstransfer_number) {
        i_electronicfundstransfer_number_copy = malloc(sizeof(int));
        if (i_electronicfundstransfer_number_copy) *i_electronicfundstransfer_number_copy = *i_electronicfundstransfer_number;
    }
    int *i_electronicfundstransfer_transactioncount_copy = NULL;
    if (i_electronicfundstransfer_transactioncount) {
        i_electronicfundstransfer_transactioncount_copy = malloc(sizeof(int));
        if (i_electronicfundstransfer_transactioncount_copy) *i_electronicfundstransfer_transactioncount_copy = *i_electronicfundstransfer_transactioncount;
    }
    electronicfundstransfer_list_element_t *result = electronicfundstransfer_list_element_create_internal (
        pki_electronicfundstransfer_id_copy,
        fki_paymentmethod_id_copy,
        fki_user_id_created_copy,
        s_paymentmethod_description_x,
        s_user_loginname_created,
        i_electronicfundstransfer_number_copy,
        dt_electronicfundstransfer_date,
        i_electronicfundstransfer_transactioncount_copy,
        d_electronicfundstransfer_amountvisible
        );
    if (!result) {
        free(pki_electronicfundstransfer_id_copy);
        free(fki_paymentmethod_id_copy);
        free(fki_user_id_created_copy);
        free(i_electronicfundstransfer_number_copy);
        free(i_electronicfundstransfer_transactioncount_copy);
    }
    return result;
}

void electronicfundstransfer_list_element_free(electronicfundstransfer_list_element_t *electronicfundstransfer_list_element) {
    if(NULL == electronicfundstransfer_list_element){
        return ;
    }
    if(electronicfundstransfer_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "electronicfundstransfer_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (electronicfundstransfer_list_element->pki_electronicfundstransfer_id) {
        free(electronicfundstransfer_list_element->pki_electronicfundstransfer_id);
        electronicfundstransfer_list_element->pki_electronicfundstransfer_id = NULL;
    }
    if (electronicfundstransfer_list_element->fki_paymentmethod_id) {
        free(electronicfundstransfer_list_element->fki_paymentmethod_id);
        electronicfundstransfer_list_element->fki_paymentmethod_id = NULL;
    }
    if (electronicfundstransfer_list_element->fki_user_id_created) {
        free(electronicfundstransfer_list_element->fki_user_id_created);
        electronicfundstransfer_list_element->fki_user_id_created = NULL;
    }
    if (electronicfundstransfer_list_element->s_paymentmethod_description_x) {
        free(electronicfundstransfer_list_element->s_paymentmethod_description_x);
        electronicfundstransfer_list_element->s_paymentmethod_description_x = NULL;
    }
    if (electronicfundstransfer_list_element->s_user_loginname_created) {
        free(electronicfundstransfer_list_element->s_user_loginname_created);
        electronicfundstransfer_list_element->s_user_loginname_created = NULL;
    }
    if (electronicfundstransfer_list_element->i_electronicfundstransfer_number) {
        free(electronicfundstransfer_list_element->i_electronicfundstransfer_number);
        electronicfundstransfer_list_element->i_electronicfundstransfer_number = NULL;
    }
    if (electronicfundstransfer_list_element->dt_electronicfundstransfer_date) {
        free(electronicfundstransfer_list_element->dt_electronicfundstransfer_date);
        electronicfundstransfer_list_element->dt_electronicfundstransfer_date = NULL;
    }
    if (electronicfundstransfer_list_element->i_electronicfundstransfer_transactioncount) {
        free(electronicfundstransfer_list_element->i_electronicfundstransfer_transactioncount);
        electronicfundstransfer_list_element->i_electronicfundstransfer_transactioncount = NULL;
    }
    if (electronicfundstransfer_list_element->d_electronicfundstransfer_amountvisible) {
        free(electronicfundstransfer_list_element->d_electronicfundstransfer_amountvisible);
        electronicfundstransfer_list_element->d_electronicfundstransfer_amountvisible = NULL;
    }
    free(electronicfundstransfer_list_element);
}

cJSON *electronicfundstransfer_list_element_convertToJSON(electronicfundstransfer_list_element_t *electronicfundstransfer_list_element) {
    cJSON *item = cJSON_CreateObject();

    // electronicfundstransfer_list_element->pki_electronicfundstransfer_id
    if (!electronicfundstransfer_list_element->pki_electronicfundstransfer_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiElectronicfundstransferID", *electronicfundstransfer_list_element->pki_electronicfundstransfer_id) == NULL) {
    goto fail; //Numeric
    }


    // electronicfundstransfer_list_element->fki_paymentmethod_id
    if (!electronicfundstransfer_list_element->fki_paymentmethod_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPaymentmethodID", *electronicfundstransfer_list_element->fki_paymentmethod_id) == NULL) {
    goto fail; //Numeric
    }


    // electronicfundstransfer_list_element->fki_user_id_created
    if(electronicfundstransfer_list_element->fki_user_id_created) {
    if(cJSON_AddNumberToObject(item, "fkiUserIDCreated", *electronicfundstransfer_list_element->fki_user_id_created) == NULL) {
    goto fail; //Numeric
    }
    }


    // electronicfundstransfer_list_element->s_paymentmethod_description_x
    if(electronicfundstransfer_list_element->s_paymentmethod_description_x) {
    if(cJSON_AddStringToObject(item, "sPaymentmethodDescriptionX", electronicfundstransfer_list_element->s_paymentmethod_description_x) == NULL) {
    goto fail; //String
    }
    }


    // electronicfundstransfer_list_element->s_user_loginname_created
    if(electronicfundstransfer_list_element->s_user_loginname_created) {
    if(cJSON_AddStringToObject(item, "sUserLoginnameCreated", electronicfundstransfer_list_element->s_user_loginname_created) == NULL) {
    goto fail; //String
    }
    }


    // electronicfundstransfer_list_element->i_electronicfundstransfer_number
    if (!electronicfundstransfer_list_element->i_electronicfundstransfer_number) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iElectronicfundstransferNumber", *electronicfundstransfer_list_element->i_electronicfundstransfer_number) == NULL) {
    goto fail; //Numeric
    }


    // electronicfundstransfer_list_element->dt_electronicfundstransfer_date
    if (!electronicfundstransfer_list_element->dt_electronicfundstransfer_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtElectronicfundstransferDate", electronicfundstransfer_list_element->dt_electronicfundstransfer_date) == NULL) {
    goto fail; //String
    }


    // electronicfundstransfer_list_element->i_electronicfundstransfer_transactioncount
    if(electronicfundstransfer_list_element->i_electronicfundstransfer_transactioncount) {
    if(cJSON_AddNumberToObject(item, "iElectronicfundstransferTransactioncount", *electronicfundstransfer_list_element->i_electronicfundstransfer_transactioncount) == NULL) {
    goto fail; //Numeric
    }
    }


    // electronicfundstransfer_list_element->d_electronicfundstransfer_amountvisible
    if(electronicfundstransfer_list_element->d_electronicfundstransfer_amountvisible) {
    if(cJSON_AddStringToObject(item, "dElectronicfundstransferAmountvisible", electronicfundstransfer_list_element->d_electronicfundstransfer_amountvisible) == NULL) {
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

electronicfundstransfer_list_element_t *electronicfundstransfer_list_element_parseFromJSON(cJSON *electronicfundstransfer_list_elementJSON){

    electronicfundstransfer_list_element_t *electronicfundstransfer_list_element_local_var = NULL;

    // define the local variable for electronicfundstransfer_list_element->pki_electronicfundstransfer_id
    int *pki_electronicfundstransfer_id_local_var = NULL;

    // define the local variable for electronicfundstransfer_list_element->fki_paymentmethod_id
    int *fki_paymentmethod_id_local_var = NULL;

    // define the local variable for electronicfundstransfer_list_element->fki_user_id_created
    int *fki_user_id_created_local_var = NULL;

    char *s_paymentmethod_description_x_local_str = NULL;

    char *s_user_loginname_created_local_str = NULL;

    // define the local variable for electronicfundstransfer_list_element->i_electronicfundstransfer_number
    int *i_electronicfundstransfer_number_local_var = NULL;

    char *dt_electronicfundstransfer_date_local_str = NULL;

    // define the local variable for electronicfundstransfer_list_element->i_electronicfundstransfer_transactioncount
    int *i_electronicfundstransfer_transactioncount_local_var = NULL;

    char *d_electronicfundstransfer_amountvisible_local_str = NULL;

    // electronicfundstransfer_list_element->pki_electronicfundstransfer_id
    cJSON *pki_electronicfundstransfer_id = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_list_elementJSON, "pkiElectronicfundstransferID");
    if (cJSON_IsNull(pki_electronicfundstransfer_id)) {
        pki_electronicfundstransfer_id = NULL;
    }
    if (!pki_electronicfundstransfer_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_electronicfundstransfer_id))
    {
    goto end; //Numeric
    }
    pki_electronicfundstransfer_id_local_var = malloc(sizeof(int));
    if(!pki_electronicfundstransfer_id_local_var)
    {
        goto end;
    }
    *pki_electronicfundstransfer_id_local_var = pki_electronicfundstransfer_id->valuedouble;

    // electronicfundstransfer_list_element->fki_paymentmethod_id
    cJSON *fki_paymentmethod_id = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_list_elementJSON, "fkiPaymentmethodID");
    if (cJSON_IsNull(fki_paymentmethod_id)) {
        fki_paymentmethod_id = NULL;
    }
    if (!fki_paymentmethod_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_paymentmethod_id))
    {
    goto end; //Numeric
    }
    fki_paymentmethod_id_local_var = malloc(sizeof(int));
    if(!fki_paymentmethod_id_local_var)
    {
        goto end;
    }
    *fki_paymentmethod_id_local_var = fki_paymentmethod_id->valuedouble;

    // electronicfundstransfer_list_element->fki_user_id_created
    cJSON *fki_user_id_created = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_list_elementJSON, "fkiUserIDCreated");
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

    // electronicfundstransfer_list_element->s_paymentmethod_description_x
    cJSON *s_paymentmethod_description_x = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_list_elementJSON, "sPaymentmethodDescriptionX");
    if (cJSON_IsNull(s_paymentmethod_description_x)) {
        s_paymentmethod_description_x = NULL;
    }
    if (s_paymentmethod_description_x) { 
    if(!cJSON_IsString(s_paymentmethod_description_x) && !cJSON_IsNull(s_paymentmethod_description_x))
    {
    goto end; //String
    }
    }

    // electronicfundstransfer_list_element->s_user_loginname_created
    cJSON *s_user_loginname_created = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_list_elementJSON, "sUserLoginnameCreated");
    if (cJSON_IsNull(s_user_loginname_created)) {
        s_user_loginname_created = NULL;
    }
    if (s_user_loginname_created) { 
    if(!cJSON_IsString(s_user_loginname_created) && !cJSON_IsNull(s_user_loginname_created))
    {
    goto end; //String
    }
    }

    // electronicfundstransfer_list_element->i_electronicfundstransfer_number
    cJSON *i_electronicfundstransfer_number = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_list_elementJSON, "iElectronicfundstransferNumber");
    if (cJSON_IsNull(i_electronicfundstransfer_number)) {
        i_electronicfundstransfer_number = NULL;
    }
    if (!i_electronicfundstransfer_number) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_electronicfundstransfer_number))
    {
    goto end; //Numeric
    }
    i_electronicfundstransfer_number_local_var = malloc(sizeof(int));
    if(!i_electronicfundstransfer_number_local_var)
    {
        goto end;
    }
    *i_electronicfundstransfer_number_local_var = i_electronicfundstransfer_number->valuedouble;

    // electronicfundstransfer_list_element->dt_electronicfundstransfer_date
    cJSON *dt_electronicfundstransfer_date = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_list_elementJSON, "dtElectronicfundstransferDate");
    if (cJSON_IsNull(dt_electronicfundstransfer_date)) {
        dt_electronicfundstransfer_date = NULL;
    }
    if (!dt_electronicfundstransfer_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_electronicfundstransfer_date))
    {
    goto end; //String
    }

    // electronicfundstransfer_list_element->i_electronicfundstransfer_transactioncount
    cJSON *i_electronicfundstransfer_transactioncount = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_list_elementJSON, "iElectronicfundstransferTransactioncount");
    if (cJSON_IsNull(i_electronicfundstransfer_transactioncount)) {
        i_electronicfundstransfer_transactioncount = NULL;
    }
    if (i_electronicfundstransfer_transactioncount) { 
    if(!cJSON_IsNumber(i_electronicfundstransfer_transactioncount))
    {
    goto end; //Numeric
    }
    i_electronicfundstransfer_transactioncount_local_var = malloc(sizeof(int));
    if(!i_electronicfundstransfer_transactioncount_local_var)
    {
        goto end;
    }
    *i_electronicfundstransfer_transactioncount_local_var = i_electronicfundstransfer_transactioncount->valuedouble;
    }

    // electronicfundstransfer_list_element->d_electronicfundstransfer_amountvisible
    cJSON *d_electronicfundstransfer_amountvisible = cJSON_GetObjectItemCaseSensitive(electronicfundstransfer_list_elementJSON, "dElectronicfundstransferAmountvisible");
    if (cJSON_IsNull(d_electronicfundstransfer_amountvisible)) {
        d_electronicfundstransfer_amountvisible = NULL;
    }
    if (d_electronicfundstransfer_amountvisible) { 
    if(!cJSON_IsString(d_electronicfundstransfer_amountvisible) && !cJSON_IsNull(d_electronicfundstransfer_amountvisible))
    {
    goto end; //String
    }
    }


    if (s_paymentmethod_description_x && !cJSON_IsNull(s_paymentmethod_description_x)) s_paymentmethod_description_x_local_str = strdup(s_paymentmethod_description_x->valuestring);
    if (s_user_loginname_created && !cJSON_IsNull(s_user_loginname_created)) s_user_loginname_created_local_str = strdup(s_user_loginname_created->valuestring);
    if (dt_electronicfundstransfer_date && !cJSON_IsNull(dt_electronicfundstransfer_date)) dt_electronicfundstransfer_date_local_str = strdup(dt_electronicfundstransfer_date->valuestring);
    if (d_electronicfundstransfer_amountvisible && !cJSON_IsNull(d_electronicfundstransfer_amountvisible)) d_electronicfundstransfer_amountvisible_local_str = strdup(d_electronicfundstransfer_amountvisible->valuestring);

    electronicfundstransfer_list_element_local_var = electronicfundstransfer_list_element_create_internal (
        pki_electronicfundstransfer_id_local_var,
        fki_paymentmethod_id_local_var,
        fki_user_id_created_local_var,
        s_paymentmethod_description_x_local_str,
        s_user_loginname_created_local_str,
        i_electronicfundstransfer_number_local_var,
        dt_electronicfundstransfer_date_local_str,
        i_electronicfundstransfer_transactioncount_local_var,
        d_electronicfundstransfer_amountvisible_local_str
        );

    if (!electronicfundstransfer_list_element_local_var) {
        goto end;
    }

    return electronicfundstransfer_list_element_local_var;
end:
    if (pki_electronicfundstransfer_id_local_var) {
        free(pki_electronicfundstransfer_id_local_var);
        pki_electronicfundstransfer_id_local_var = NULL;
    }
    if (fki_paymentmethod_id_local_var) {
        free(fki_paymentmethod_id_local_var);
        fki_paymentmethod_id_local_var = NULL;
    }
    if (fki_user_id_created_local_var) {
        free(fki_user_id_created_local_var);
        fki_user_id_created_local_var = NULL;
    }
    if (s_paymentmethod_description_x_local_str) {
        free(s_paymentmethod_description_x_local_str);
        s_paymentmethod_description_x_local_str = NULL;
    }
    if (s_user_loginname_created_local_str) {
        free(s_user_loginname_created_local_str);
        s_user_loginname_created_local_str = NULL;
    }
    if (i_electronicfundstransfer_number_local_var) {
        free(i_electronicfundstransfer_number_local_var);
        i_electronicfundstransfer_number_local_var = NULL;
    }
    if (dt_electronicfundstransfer_date_local_str) {
        free(dt_electronicfundstransfer_date_local_str);
        dt_electronicfundstransfer_date_local_str = NULL;
    }
    if (i_electronicfundstransfer_transactioncount_local_var) {
        free(i_electronicfundstransfer_transactioncount_local_var);
        i_electronicfundstransfer_transactioncount_local_var = NULL;
    }
    if (d_electronicfundstransfer_amountvisible_local_str) {
        free(d_electronicfundstransfer_amountvisible_local_str);
        d_electronicfundstransfer_amountvisible_local_str = NULL;
    }
    return NULL;

}
