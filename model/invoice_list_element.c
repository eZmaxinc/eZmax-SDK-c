#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "invoice_list_element.h"



static invoice_list_element_t *invoice_list_element_create_internal(
    int *pki_invoice_id,
    int *fki_agent_id,
    int *fki_broker_id,
    int *fki_customer_id,
    int *fki_period_id,
    char *s_period_yyyymm,
    int *b_invoice_ispaid,
    char *d_invoice_total,
    char *d_invoice_paid,
    char *d_invoice_balance,
    char *dt_invoice_date,
    ezmax_api_definition__full_field_e_invoice_type__e e_invoice_type,
    char *s_invoice_number,
    char *s_invoice_recipient
    ) {
    invoice_list_element_t *invoice_list_element_local_var = malloc(sizeof(invoice_list_element_t));
    if (!invoice_list_element_local_var) {
        return NULL;
    }
    memset(invoice_list_element_local_var, 0, sizeof(invoice_list_element_t));
    invoice_list_element_local_var->_library_owned = 1;
    invoice_list_element_local_var->pki_invoice_id = pki_invoice_id;
    invoice_list_element_local_var->fki_agent_id = fki_agent_id;
    invoice_list_element_local_var->fki_broker_id = fki_broker_id;
    invoice_list_element_local_var->fki_customer_id = fki_customer_id;
    invoice_list_element_local_var->fki_period_id = fki_period_id;
    invoice_list_element_local_var->s_period_yyyymm = s_period_yyyymm;
    invoice_list_element_local_var->b_invoice_ispaid = b_invoice_ispaid;
    invoice_list_element_local_var->d_invoice_total = d_invoice_total;
    invoice_list_element_local_var->d_invoice_paid = d_invoice_paid;
    invoice_list_element_local_var->d_invoice_balance = d_invoice_balance;
    invoice_list_element_local_var->dt_invoice_date = dt_invoice_date;
    invoice_list_element_local_var->e_invoice_type = e_invoice_type;
    invoice_list_element_local_var->s_invoice_number = s_invoice_number;
    invoice_list_element_local_var->s_invoice_recipient = s_invoice_recipient;
    return invoice_list_element_local_var;
}

__attribute__((deprecated)) invoice_list_element_t *invoice_list_element_create(
    int *pki_invoice_id,
    int *fki_agent_id,
    int *fki_broker_id,
    int *fki_customer_id,
    int *fki_period_id,
    char *s_period_yyyymm,
    int *b_invoice_ispaid,
    char *d_invoice_total,
    char *d_invoice_paid,
    char *d_invoice_balance,
    char *dt_invoice_date,
    ezmax_api_definition__full_field_e_invoice_type__e e_invoice_type,
    char *s_invoice_number,
    char *s_invoice_recipient
    ) {
    int *pki_invoice_id_copy = NULL;
    if (pki_invoice_id) {
        pki_invoice_id_copy = malloc(sizeof(int));
        if (pki_invoice_id_copy) *pki_invoice_id_copy = *pki_invoice_id;
    }
    int *fki_agent_id_copy = NULL;
    if (fki_agent_id) {
        fki_agent_id_copy = malloc(sizeof(int));
        if (fki_agent_id_copy) *fki_agent_id_copy = *fki_agent_id;
    }
    int *fki_broker_id_copy = NULL;
    if (fki_broker_id) {
        fki_broker_id_copy = malloc(sizeof(int));
        if (fki_broker_id_copy) *fki_broker_id_copy = *fki_broker_id;
    }
    int *fki_customer_id_copy = NULL;
    if (fki_customer_id) {
        fki_customer_id_copy = malloc(sizeof(int));
        if (fki_customer_id_copy) *fki_customer_id_copy = *fki_customer_id;
    }
    int *fki_period_id_copy = NULL;
    if (fki_period_id) {
        fki_period_id_copy = malloc(sizeof(int));
        if (fki_period_id_copy) *fki_period_id_copy = *fki_period_id;
    }
    int *b_invoice_ispaid_copy = NULL;
    if (b_invoice_ispaid) {
        b_invoice_ispaid_copy = malloc(sizeof(int));
        if (b_invoice_ispaid_copy) *b_invoice_ispaid_copy = *b_invoice_ispaid;
    }
    invoice_list_element_t *result = invoice_list_element_create_internal (
        pki_invoice_id_copy,
        fki_agent_id_copy,
        fki_broker_id_copy,
        fki_customer_id_copy,
        fki_period_id_copy,
        s_period_yyyymm,
        b_invoice_ispaid_copy,
        d_invoice_total,
        d_invoice_paid,
        d_invoice_balance,
        dt_invoice_date,
        e_invoice_type,
        s_invoice_number,
        s_invoice_recipient
        );
    if (!result) {
        free(pki_invoice_id_copy);
        free(fki_agent_id_copy);
        free(fki_broker_id_copy);
        free(fki_customer_id_copy);
        free(fki_period_id_copy);
        free(b_invoice_ispaid_copy);
    }
    return result;
}

void invoice_list_element_free(invoice_list_element_t *invoice_list_element) {
    if(NULL == invoice_list_element){
        return ;
    }
    if(invoice_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "invoice_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (invoice_list_element->pki_invoice_id) {
        free(invoice_list_element->pki_invoice_id);
        invoice_list_element->pki_invoice_id = NULL;
    }
    if (invoice_list_element->fki_agent_id) {
        free(invoice_list_element->fki_agent_id);
        invoice_list_element->fki_agent_id = NULL;
    }
    if (invoice_list_element->fki_broker_id) {
        free(invoice_list_element->fki_broker_id);
        invoice_list_element->fki_broker_id = NULL;
    }
    if (invoice_list_element->fki_customer_id) {
        free(invoice_list_element->fki_customer_id);
        invoice_list_element->fki_customer_id = NULL;
    }
    if (invoice_list_element->fki_period_id) {
        free(invoice_list_element->fki_period_id);
        invoice_list_element->fki_period_id = NULL;
    }
    if (invoice_list_element->s_period_yyyymm) {
        free(invoice_list_element->s_period_yyyymm);
        invoice_list_element->s_period_yyyymm = NULL;
    }
    if (invoice_list_element->b_invoice_ispaid) {
        free(invoice_list_element->b_invoice_ispaid);
        invoice_list_element->b_invoice_ispaid = NULL;
    }
    if (invoice_list_element->d_invoice_total) {
        free(invoice_list_element->d_invoice_total);
        invoice_list_element->d_invoice_total = NULL;
    }
    if (invoice_list_element->d_invoice_paid) {
        free(invoice_list_element->d_invoice_paid);
        invoice_list_element->d_invoice_paid = NULL;
    }
    if (invoice_list_element->d_invoice_balance) {
        free(invoice_list_element->d_invoice_balance);
        invoice_list_element->d_invoice_balance = NULL;
    }
    if (invoice_list_element->dt_invoice_date) {
        free(invoice_list_element->dt_invoice_date);
        invoice_list_element->dt_invoice_date = NULL;
    }
    if (invoice_list_element->s_invoice_number) {
        free(invoice_list_element->s_invoice_number);
        invoice_list_element->s_invoice_number = NULL;
    }
    if (invoice_list_element->s_invoice_recipient) {
        free(invoice_list_element->s_invoice_recipient);
        invoice_list_element->s_invoice_recipient = NULL;
    }
    free(invoice_list_element);
}

cJSON *invoice_list_element_convertToJSON(invoice_list_element_t *invoice_list_element) {
    cJSON *item = cJSON_CreateObject();

    // invoice_list_element->pki_invoice_id
    if (!invoice_list_element->pki_invoice_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiInvoiceID", *invoice_list_element->pki_invoice_id) == NULL) {
    goto fail; //Numeric
    }


    // invoice_list_element->fki_agent_id
    if(invoice_list_element->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", *invoice_list_element->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_list_element->fki_broker_id
    if(invoice_list_element->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", *invoice_list_element->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_list_element->fki_customer_id
    if(invoice_list_element->fki_customer_id) {
    if(cJSON_AddNumberToObject(item, "fkiCustomerID", *invoice_list_element->fki_customer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // invoice_list_element->fki_period_id
    if (!invoice_list_element->fki_period_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiPeriodID", *invoice_list_element->fki_period_id) == NULL) {
    goto fail; //Numeric
    }


    // invoice_list_element->s_period_yyyymm
    if(invoice_list_element->s_period_yyyymm) {
    if(cJSON_AddStringToObject(item, "sPeriodYYYYMM", invoice_list_element->s_period_yyyymm) == NULL) {
    goto fail; //String
    }
    }


    // invoice_list_element->b_invoice_ispaid
    if (!invoice_list_element->b_invoice_ispaid) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bInvoiceIspaid", *invoice_list_element->b_invoice_ispaid) == NULL) {
    goto fail; //Bool
    }


    // invoice_list_element->d_invoice_total
    if (!invoice_list_element->d_invoice_total) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInvoiceTotal", invoice_list_element->d_invoice_total) == NULL) {
    goto fail; //String
    }


    // invoice_list_element->d_invoice_paid
    if (!invoice_list_element->d_invoice_paid) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dInvoicePaid", invoice_list_element->d_invoice_paid) == NULL) {
    goto fail; //String
    }


    // invoice_list_element->d_invoice_balance
    if(invoice_list_element->d_invoice_balance) {
    if(cJSON_AddStringToObject(item, "dInvoiceBalance", invoice_list_element->d_invoice_balance) == NULL) {
    goto fail; //String
    }
    }


    // invoice_list_element->dt_invoice_date
    if (!invoice_list_element->dt_invoice_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtInvoiceDate", invoice_list_element->dt_invoice_date) == NULL) {
    goto fail; //String
    }


    // invoice_list_element->e_invoice_type
    if (ezmax_api_definition__full_field_e_invoice_type__NULL == invoice_list_element->e_invoice_type) {
        goto fail;
    }
    cJSON *e_invoice_type_local_JSON = field_e_invoice_type_convertToJSON(invoice_list_element->e_invoice_type);
    if(e_invoice_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eInvoiceType", e_invoice_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // invoice_list_element->s_invoice_number
    if(invoice_list_element->s_invoice_number) {
    if(cJSON_AddStringToObject(item, "sInvoiceNumber", invoice_list_element->s_invoice_number) == NULL) {
    goto fail; //String
    }
    }


    // invoice_list_element->s_invoice_recipient
    if(invoice_list_element->s_invoice_recipient) {
    if(cJSON_AddStringToObject(item, "sInvoiceRecipient", invoice_list_element->s_invoice_recipient) == NULL) {
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

invoice_list_element_t *invoice_list_element_parseFromJSON(cJSON *invoice_list_elementJSON){

    invoice_list_element_t *invoice_list_element_local_var = NULL;

    // define the local variable for invoice_list_element->pki_invoice_id
    int *pki_invoice_id_local_var = NULL;

    // define the local variable for invoice_list_element->fki_agent_id
    int *fki_agent_id_local_var = NULL;

    // define the local variable for invoice_list_element->fki_broker_id
    int *fki_broker_id_local_var = NULL;

    // define the local variable for invoice_list_element->fki_customer_id
    int *fki_customer_id_local_var = NULL;

    // define the local variable for invoice_list_element->fki_period_id
    int *fki_period_id_local_var = NULL;

    char *s_period_yyyymm_local_str = NULL;

    // define the local variable for invoice_list_element->b_invoice_ispaid
    int *b_invoice_ispaid_local_var = NULL;

    char *d_invoice_total_local_str = NULL;

    char *d_invoice_paid_local_str = NULL;

    char *d_invoice_balance_local_str = NULL;

    char *dt_invoice_date_local_str = NULL;

    // define the local variable for invoice_list_element->e_invoice_type
    ezmax_api_definition__full_field_e_invoice_type__e e_invoice_type_local_nonprim = 0;

    char *s_invoice_number_local_str = NULL;

    char *s_invoice_recipient_local_str = NULL;

    // invoice_list_element->pki_invoice_id
    cJSON *pki_invoice_id = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "pkiInvoiceID");
    if (cJSON_IsNull(pki_invoice_id)) {
        pki_invoice_id = NULL;
    }
    if (!pki_invoice_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_invoice_id))
    {
    goto end; //Numeric
    }
    pki_invoice_id_local_var = malloc(sizeof(int));
    if(!pki_invoice_id_local_var)
    {
        goto end;
    }
    *pki_invoice_id_local_var = pki_invoice_id->valuedouble;

    // invoice_list_element->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "fkiAgentID");
    if (cJSON_IsNull(fki_agent_id)) {
        fki_agent_id = NULL;
    }
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    fki_agent_id_local_var = malloc(sizeof(int));
    if(!fki_agent_id_local_var)
    {
        goto end;
    }
    *fki_agent_id_local_var = fki_agent_id->valuedouble;
    }

    // invoice_list_element->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "fkiBrokerID");
    if (cJSON_IsNull(fki_broker_id)) {
        fki_broker_id = NULL;
    }
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    fki_broker_id_local_var = malloc(sizeof(int));
    if(!fki_broker_id_local_var)
    {
        goto end;
    }
    *fki_broker_id_local_var = fki_broker_id->valuedouble;
    }

    // invoice_list_element->fki_customer_id
    cJSON *fki_customer_id = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "fkiCustomerID");
    if (cJSON_IsNull(fki_customer_id)) {
        fki_customer_id = NULL;
    }
    if (fki_customer_id) { 
    if(!cJSON_IsNumber(fki_customer_id))
    {
    goto end; //Numeric
    }
    fki_customer_id_local_var = malloc(sizeof(int));
    if(!fki_customer_id_local_var)
    {
        goto end;
    }
    *fki_customer_id_local_var = fki_customer_id->valuedouble;
    }

    // invoice_list_element->fki_period_id
    cJSON *fki_period_id = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "fkiPeriodID");
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

    // invoice_list_element->s_period_yyyymm
    cJSON *s_period_yyyymm = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "sPeriodYYYYMM");
    if (cJSON_IsNull(s_period_yyyymm)) {
        s_period_yyyymm = NULL;
    }
    if (s_period_yyyymm) { 
    if(!cJSON_IsString(s_period_yyyymm) && !cJSON_IsNull(s_period_yyyymm))
    {
    goto end; //String
    }
    }

    // invoice_list_element->b_invoice_ispaid
    cJSON *b_invoice_ispaid = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "bInvoiceIspaid");
    if (cJSON_IsNull(b_invoice_ispaid)) {
        b_invoice_ispaid = NULL;
    }
    if (!b_invoice_ispaid) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_invoice_ispaid))
    {
    goto end; //Bool
    }
    b_invoice_ispaid_local_var = malloc(sizeof(int));
    if(!b_invoice_ispaid_local_var)
    {
        goto end;
    }
    *b_invoice_ispaid_local_var = b_invoice_ispaid->valueint;

    // invoice_list_element->d_invoice_total
    cJSON *d_invoice_total = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "dInvoiceTotal");
    if (cJSON_IsNull(d_invoice_total)) {
        d_invoice_total = NULL;
    }
    if (!d_invoice_total) {
        goto end;
    }

    
    if(!cJSON_IsString(d_invoice_total))
    {
    goto end; //String
    }

    // invoice_list_element->d_invoice_paid
    cJSON *d_invoice_paid = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "dInvoicePaid");
    if (cJSON_IsNull(d_invoice_paid)) {
        d_invoice_paid = NULL;
    }
    if (!d_invoice_paid) {
        goto end;
    }

    
    if(!cJSON_IsString(d_invoice_paid))
    {
    goto end; //String
    }

    // invoice_list_element->d_invoice_balance
    cJSON *d_invoice_balance = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "dInvoiceBalance");
    if (cJSON_IsNull(d_invoice_balance)) {
        d_invoice_balance = NULL;
    }
    if (d_invoice_balance) { 
    if(!cJSON_IsString(d_invoice_balance) && !cJSON_IsNull(d_invoice_balance))
    {
    goto end; //String
    }
    }

    // invoice_list_element->dt_invoice_date
    cJSON *dt_invoice_date = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "dtInvoiceDate");
    if (cJSON_IsNull(dt_invoice_date)) {
        dt_invoice_date = NULL;
    }
    if (!dt_invoice_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_invoice_date))
    {
    goto end; //String
    }

    // invoice_list_element->e_invoice_type
    cJSON *e_invoice_type = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "eInvoiceType");
    if (cJSON_IsNull(e_invoice_type)) {
        e_invoice_type = NULL;
    }
    if (!e_invoice_type) {
        goto end;
    }

    
    e_invoice_type_local_nonprim = field_e_invoice_type_parseFromJSON(e_invoice_type); //custom

    // invoice_list_element->s_invoice_number
    cJSON *s_invoice_number = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "sInvoiceNumber");
    if (cJSON_IsNull(s_invoice_number)) {
        s_invoice_number = NULL;
    }
    if (s_invoice_number) { 
    if(!cJSON_IsString(s_invoice_number) && !cJSON_IsNull(s_invoice_number))
    {
    goto end; //String
    }
    }

    // invoice_list_element->s_invoice_recipient
    cJSON *s_invoice_recipient = cJSON_GetObjectItemCaseSensitive(invoice_list_elementJSON, "sInvoiceRecipient");
    if (cJSON_IsNull(s_invoice_recipient)) {
        s_invoice_recipient = NULL;
    }
    if (s_invoice_recipient) { 
    if(!cJSON_IsString(s_invoice_recipient) && !cJSON_IsNull(s_invoice_recipient))
    {
    goto end; //String
    }
    }


    if (s_period_yyyymm && !cJSON_IsNull(s_period_yyyymm)) s_period_yyyymm_local_str = strdup(s_period_yyyymm->valuestring);
    if (d_invoice_total && !cJSON_IsNull(d_invoice_total)) d_invoice_total_local_str = strdup(d_invoice_total->valuestring);
    if (d_invoice_paid && !cJSON_IsNull(d_invoice_paid)) d_invoice_paid_local_str = strdup(d_invoice_paid->valuestring);
    if (d_invoice_balance && !cJSON_IsNull(d_invoice_balance)) d_invoice_balance_local_str = strdup(d_invoice_balance->valuestring);
    if (dt_invoice_date && !cJSON_IsNull(dt_invoice_date)) dt_invoice_date_local_str = strdup(dt_invoice_date->valuestring);
    if (s_invoice_number && !cJSON_IsNull(s_invoice_number)) s_invoice_number_local_str = strdup(s_invoice_number->valuestring);
    if (s_invoice_recipient && !cJSON_IsNull(s_invoice_recipient)) s_invoice_recipient_local_str = strdup(s_invoice_recipient->valuestring);

    invoice_list_element_local_var = invoice_list_element_create_internal (
        pki_invoice_id_local_var,
        fki_agent_id_local_var,
        fki_broker_id_local_var,
        fki_customer_id_local_var,
        fki_period_id_local_var,
        s_period_yyyymm_local_str,
        b_invoice_ispaid_local_var,
        d_invoice_total_local_str,
        d_invoice_paid_local_str,
        d_invoice_balance_local_str,
        dt_invoice_date_local_str,
        e_invoice_type_local_nonprim,
        s_invoice_number_local_str,
        s_invoice_recipient_local_str
        );

    if (!invoice_list_element_local_var) {
        goto end;
    }

    return invoice_list_element_local_var;
end:
    if (pki_invoice_id_local_var) {
        free(pki_invoice_id_local_var);
        pki_invoice_id_local_var = NULL;
    }
    if (fki_agent_id_local_var) {
        free(fki_agent_id_local_var);
        fki_agent_id_local_var = NULL;
    }
    if (fki_broker_id_local_var) {
        free(fki_broker_id_local_var);
        fki_broker_id_local_var = NULL;
    }
    if (fki_customer_id_local_var) {
        free(fki_customer_id_local_var);
        fki_customer_id_local_var = NULL;
    }
    if (fki_period_id_local_var) {
        free(fki_period_id_local_var);
        fki_period_id_local_var = NULL;
    }
    if (s_period_yyyymm_local_str) {
        free(s_period_yyyymm_local_str);
        s_period_yyyymm_local_str = NULL;
    }
    if (b_invoice_ispaid_local_var) {
        free(b_invoice_ispaid_local_var);
        b_invoice_ispaid_local_var = NULL;
    }
    if (d_invoice_total_local_str) {
        free(d_invoice_total_local_str);
        d_invoice_total_local_str = NULL;
    }
    if (d_invoice_paid_local_str) {
        free(d_invoice_paid_local_str);
        d_invoice_paid_local_str = NULL;
    }
    if (d_invoice_balance_local_str) {
        free(d_invoice_balance_local_str);
        d_invoice_balance_local_str = NULL;
    }
    if (dt_invoice_date_local_str) {
        free(dt_invoice_date_local_str);
        dt_invoice_date_local_str = NULL;
    }
    if (e_invoice_type_local_nonprim) {
        e_invoice_type_local_nonprim = 0;
    }
    if (s_invoice_number_local_str) {
        free(s_invoice_number_local_str);
        s_invoice_number_local_str = NULL;
    }
    if (s_invoice_recipient_local_str) {
        free(s_invoice_recipient_local_str);
        s_invoice_recipient_local_str = NULL;
    }
    return NULL;

}
