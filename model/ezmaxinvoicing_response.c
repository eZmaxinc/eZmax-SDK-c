#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicing_response.h"



static ezmaxinvoicing_response_t *ezmaxinvoicing_response_create_internal(
    int pki_ezmaxinvoicing_id,
    int fki_ezmaxinvoicingcontract_id,
    int fki_ezmaxpricing_id,
    int fki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description_x,
    char *yyyymm_ezmaxinvoicing,
    int i_ezmaxinvoicing_days,
    ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e e_ezmaxinvoicing_paymenttype,
    char *d_ezmaxinvoicing_rebatepaymenttype,
    int i_ezmaxinvoicing_contractlength,
    char *d_ezmaxinvoicing_rebatecontractlength,
    int b_ezmaxinvoicing_rebate_ezsignallagents,
    common_audit_t *obj_audit
    ) {
    ezmaxinvoicing_response_t *ezmaxinvoicing_response_local_var = malloc(sizeof(ezmaxinvoicing_response_t));
    if (!ezmaxinvoicing_response_local_var) {
        return NULL;
    }
    ezmaxinvoicing_response_local_var->pki_ezmaxinvoicing_id = pki_ezmaxinvoicing_id;
    ezmaxinvoicing_response_local_var->fki_ezmaxinvoicingcontract_id = fki_ezmaxinvoicingcontract_id;
    ezmaxinvoicing_response_local_var->fki_ezmaxpricing_id = fki_ezmaxpricing_id;
    ezmaxinvoicing_response_local_var->fki_systemconfigurationtype_id = fki_systemconfigurationtype_id;
    ezmaxinvoicing_response_local_var->s_systemconfigurationtype_description_x = s_systemconfigurationtype_description_x;
    ezmaxinvoicing_response_local_var->yyyymm_ezmaxinvoicing = yyyymm_ezmaxinvoicing;
    ezmaxinvoicing_response_local_var->i_ezmaxinvoicing_days = i_ezmaxinvoicing_days;
    ezmaxinvoicing_response_local_var->e_ezmaxinvoicing_paymenttype = e_ezmaxinvoicing_paymenttype;
    ezmaxinvoicing_response_local_var->d_ezmaxinvoicing_rebatepaymenttype = d_ezmaxinvoicing_rebatepaymenttype;
    ezmaxinvoicing_response_local_var->i_ezmaxinvoicing_contractlength = i_ezmaxinvoicing_contractlength;
    ezmaxinvoicing_response_local_var->d_ezmaxinvoicing_rebatecontractlength = d_ezmaxinvoicing_rebatecontractlength;
    ezmaxinvoicing_response_local_var->b_ezmaxinvoicing_rebate_ezsignallagents = b_ezmaxinvoicing_rebate_ezsignallagents;
    ezmaxinvoicing_response_local_var->obj_audit = obj_audit;

    ezmaxinvoicing_response_local_var->_library_owned = 1;
    return ezmaxinvoicing_response_local_var;
}

__attribute__((deprecated)) ezmaxinvoicing_response_t *ezmaxinvoicing_response_create(
    int pki_ezmaxinvoicing_id,
    int fki_ezmaxinvoicingcontract_id,
    int fki_ezmaxpricing_id,
    int fki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description_x,
    char *yyyymm_ezmaxinvoicing,
    int i_ezmaxinvoicing_days,
    ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e e_ezmaxinvoicing_paymenttype,
    char *d_ezmaxinvoicing_rebatepaymenttype,
    int i_ezmaxinvoicing_contractlength,
    char *d_ezmaxinvoicing_rebatecontractlength,
    int b_ezmaxinvoicing_rebate_ezsignallagents,
    common_audit_t *obj_audit
    ) {
    return ezmaxinvoicing_response_create_internal (
        pki_ezmaxinvoicing_id,
        fki_ezmaxinvoicingcontract_id,
        fki_ezmaxpricing_id,
        fki_systemconfigurationtype_id,
        s_systemconfigurationtype_description_x,
        yyyymm_ezmaxinvoicing,
        i_ezmaxinvoicing_days,
        e_ezmaxinvoicing_paymenttype,
        d_ezmaxinvoicing_rebatepaymenttype,
        i_ezmaxinvoicing_contractlength,
        d_ezmaxinvoicing_rebatecontractlength,
        b_ezmaxinvoicing_rebate_ezsignallagents,
        obj_audit
        );
}

void ezmaxinvoicing_response_free(ezmaxinvoicing_response_t *ezmaxinvoicing_response) {
    if(NULL == ezmaxinvoicing_response){
        return ;
    }
    if(ezmaxinvoicing_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicing_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicing_response->s_systemconfigurationtype_description_x) {
        free(ezmaxinvoicing_response->s_systemconfigurationtype_description_x);
        ezmaxinvoicing_response->s_systemconfigurationtype_description_x = NULL;
    }
    if (ezmaxinvoicing_response->yyyymm_ezmaxinvoicing) {
        free(ezmaxinvoicing_response->yyyymm_ezmaxinvoicing);
        ezmaxinvoicing_response->yyyymm_ezmaxinvoicing = NULL;
    }
    if (ezmaxinvoicing_response->d_ezmaxinvoicing_rebatepaymenttype) {
        free(ezmaxinvoicing_response->d_ezmaxinvoicing_rebatepaymenttype);
        ezmaxinvoicing_response->d_ezmaxinvoicing_rebatepaymenttype = NULL;
    }
    if (ezmaxinvoicing_response->d_ezmaxinvoicing_rebatecontractlength) {
        free(ezmaxinvoicing_response->d_ezmaxinvoicing_rebatecontractlength);
        ezmaxinvoicing_response->d_ezmaxinvoicing_rebatecontractlength = NULL;
    }
    if (ezmaxinvoicing_response->obj_audit) {
        common_audit_free(ezmaxinvoicing_response->obj_audit);
        ezmaxinvoicing_response->obj_audit = NULL;
    }
    free(ezmaxinvoicing_response);
}

cJSON *ezmaxinvoicing_response_convertToJSON(ezmaxinvoicing_response_t *ezmaxinvoicing_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicing_response->pki_ezmaxinvoicing_id
    if(ezmaxinvoicing_response->pki_ezmaxinvoicing_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingID", ezmaxinvoicing_response->pki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicing_response->fki_ezmaxinvoicingcontract_id
    if (!ezmaxinvoicing_response->fki_ezmaxinvoicingcontract_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingcontractID", ezmaxinvoicing_response->fki_ezmaxinvoicingcontract_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicing_response->fki_ezmaxpricing_id
    if (!ezmaxinvoicing_response->fki_ezmaxpricing_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxpricingID", ezmaxinvoicing_response->fki_ezmaxpricing_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicing_response->fki_systemconfigurationtype_id
    if (!ezmaxinvoicing_response->fki_systemconfigurationtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiSystemconfigurationtypeID", ezmaxinvoicing_response->fki_systemconfigurationtype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicing_response->s_systemconfigurationtype_description_x
    if (!ezmaxinvoicing_response->s_systemconfigurationtype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSystemconfigurationtypeDescriptionX", ezmaxinvoicing_response->s_systemconfigurationtype_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicing_response->yyyymm_ezmaxinvoicing
    if (!ezmaxinvoicing_response->yyyymm_ezmaxinvoicing) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "yyyymmEzmaxinvoicing", ezmaxinvoicing_response->yyyymm_ezmaxinvoicing) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicing_response->i_ezmaxinvoicing_days
    if (!ezmaxinvoicing_response->i_ezmaxinvoicing_days) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingDays", ezmaxinvoicing_response->i_ezmaxinvoicing_days) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicing_response->e_ezmaxinvoicing_paymenttype
    if (ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__NULL == ezmaxinvoicing_response->e_ezmaxinvoicing_paymenttype) {
        goto fail;
    }
    cJSON *e_ezmaxinvoicing_paymenttype_local_JSON = field_e_ezmaxinvoicing_paymenttype_convertToJSON(ezmaxinvoicing_response->e_ezmaxinvoicing_paymenttype);
    if(e_ezmaxinvoicing_paymenttype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzmaxinvoicingPaymenttype", e_ezmaxinvoicing_paymenttype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezmaxinvoicing_response->d_ezmaxinvoicing_rebatepaymenttype
    if (!ezmaxinvoicing_response->d_ezmaxinvoicing_rebatepaymenttype) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingRebatepaymenttype", ezmaxinvoicing_response->d_ezmaxinvoicing_rebatepaymenttype) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicing_response->i_ezmaxinvoicing_contractlength
    if (!ezmaxinvoicing_response->i_ezmaxinvoicing_contractlength) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingContractlength", ezmaxinvoicing_response->i_ezmaxinvoicing_contractlength) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicing_response->d_ezmaxinvoicing_rebatecontractlength
    if (!ezmaxinvoicing_response->d_ezmaxinvoicing_rebatecontractlength) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingRebatecontractlength", ezmaxinvoicing_response->d_ezmaxinvoicing_rebatecontractlength) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicing_response->b_ezmaxinvoicing_rebate_ezsignallagents
    if (!ezmaxinvoicing_response->b_ezmaxinvoicing_rebate_ezsignallagents) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingRebateEzsignallagents", ezmaxinvoicing_response->b_ezmaxinvoicing_rebate_ezsignallagents) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicing_response->obj_audit
    if(ezmaxinvoicing_response->obj_audit) {
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezmaxinvoicing_response->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicing_response_t *ezmaxinvoicing_response_parseFromJSON(cJSON *ezmaxinvoicing_responseJSON){

    ezmaxinvoicing_response_t *ezmaxinvoicing_response_local_var = NULL;

    // define the local variable for ezmaxinvoicing_response->e_ezmaxinvoicing_paymenttype
    ezmax_api_definition__full_field_e_ezmaxinvoicing_paymenttype__e e_ezmaxinvoicing_paymenttype_local_nonprim = 0;

    // define the local variable for ezmaxinvoicing_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // ezmaxinvoicing_response->pki_ezmaxinvoicing_id
    cJSON *pki_ezmaxinvoicing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "pkiEzmaxinvoicingID");
    if (cJSON_IsNull(pki_ezmaxinvoicing_id)) {
        pki_ezmaxinvoicing_id = NULL;
    }
    if (pki_ezmaxinvoicing_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicing_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicing_response->fki_ezmaxinvoicingcontract_id
    cJSON *fki_ezmaxinvoicingcontract_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "fkiEzmaxinvoicingcontractID");
    if (cJSON_IsNull(fki_ezmaxinvoicingcontract_id)) {
        fki_ezmaxinvoicingcontract_id = NULL;
    }
    if (!fki_ezmaxinvoicingcontract_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezmaxinvoicingcontract_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicing_response->fki_ezmaxpricing_id
    cJSON *fki_ezmaxpricing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "fkiEzmaxpricingID");
    if (cJSON_IsNull(fki_ezmaxpricing_id)) {
        fki_ezmaxpricing_id = NULL;
    }
    if (!fki_ezmaxpricing_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezmaxpricing_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicing_response->fki_systemconfigurationtype_id
    cJSON *fki_systemconfigurationtype_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "fkiSystemconfigurationtypeID");
    if (cJSON_IsNull(fki_systemconfigurationtype_id)) {
        fki_systemconfigurationtype_id = NULL;
    }
    if (!fki_systemconfigurationtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_systemconfigurationtype_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicing_response->s_systemconfigurationtype_description_x
    cJSON *s_systemconfigurationtype_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "sSystemconfigurationtypeDescriptionX");
    if (cJSON_IsNull(s_systemconfigurationtype_description_x)) {
        s_systemconfigurationtype_description_x = NULL;
    }
    if (!s_systemconfigurationtype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_systemconfigurationtype_description_x))
    {
    goto end; //String
    }

    // ezmaxinvoicing_response->yyyymm_ezmaxinvoicing
    cJSON *yyyymm_ezmaxinvoicing = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "yyyymmEzmaxinvoicing");
    if (cJSON_IsNull(yyyymm_ezmaxinvoicing)) {
        yyyymm_ezmaxinvoicing = NULL;
    }
    if (!yyyymm_ezmaxinvoicing) {
        goto end;
    }

    
    if(!cJSON_IsString(yyyymm_ezmaxinvoicing))
    {
    goto end; //String
    }

    // ezmaxinvoicing_response->i_ezmaxinvoicing_days
    cJSON *i_ezmaxinvoicing_days = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "iEzmaxinvoicingDays");
    if (cJSON_IsNull(i_ezmaxinvoicing_days)) {
        i_ezmaxinvoicing_days = NULL;
    }
    if (!i_ezmaxinvoicing_days) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicing_days))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicing_response->e_ezmaxinvoicing_paymenttype
    cJSON *e_ezmaxinvoicing_paymenttype = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "eEzmaxinvoicingPaymenttype");
    if (cJSON_IsNull(e_ezmaxinvoicing_paymenttype)) {
        e_ezmaxinvoicing_paymenttype = NULL;
    }
    if (!e_ezmaxinvoicing_paymenttype) {
        goto end;
    }

    
    e_ezmaxinvoicing_paymenttype_local_nonprim = field_e_ezmaxinvoicing_paymenttype_parseFromJSON(e_ezmaxinvoicing_paymenttype); //custom

    // ezmaxinvoicing_response->d_ezmaxinvoicing_rebatepaymenttype
    cJSON *d_ezmaxinvoicing_rebatepaymenttype = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "dEzmaxinvoicingRebatepaymenttype");
    if (cJSON_IsNull(d_ezmaxinvoicing_rebatepaymenttype)) {
        d_ezmaxinvoicing_rebatepaymenttype = NULL;
    }
    if (!d_ezmaxinvoicing_rebatepaymenttype) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicing_rebatepaymenttype))
    {
    goto end; //String
    }

    // ezmaxinvoicing_response->i_ezmaxinvoicing_contractlength
    cJSON *i_ezmaxinvoicing_contractlength = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "iEzmaxinvoicingContractlength");
    if (cJSON_IsNull(i_ezmaxinvoicing_contractlength)) {
        i_ezmaxinvoicing_contractlength = NULL;
    }
    if (!i_ezmaxinvoicing_contractlength) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicing_contractlength))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicing_response->d_ezmaxinvoicing_rebatecontractlength
    cJSON *d_ezmaxinvoicing_rebatecontractlength = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "dEzmaxinvoicingRebatecontractlength");
    if (cJSON_IsNull(d_ezmaxinvoicing_rebatecontractlength)) {
        d_ezmaxinvoicing_rebatecontractlength = NULL;
    }
    if (!d_ezmaxinvoicing_rebatecontractlength) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicing_rebatecontractlength))
    {
    goto end; //String
    }

    // ezmaxinvoicing_response->b_ezmaxinvoicing_rebate_ezsignallagents
    cJSON *b_ezmaxinvoicing_rebate_ezsignallagents = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "bEzmaxinvoicingRebateEzsignallagents");
    if (cJSON_IsNull(b_ezmaxinvoicing_rebate_ezsignallagents)) {
        b_ezmaxinvoicing_rebate_ezsignallagents = NULL;
    }
    if (!b_ezmaxinvoicing_rebate_ezsignallagents) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicing_rebate_ezsignallagents))
    {
    goto end; //Bool
    }

    // ezmaxinvoicing_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicing_responseJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (obj_audit) { 
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive
    }


    ezmaxinvoicing_response_local_var = ezmaxinvoicing_response_create_internal (
        pki_ezmaxinvoicing_id ? pki_ezmaxinvoicing_id->valuedouble : 0,
        fki_ezmaxinvoicingcontract_id->valuedouble,
        fki_ezmaxpricing_id->valuedouble,
        fki_systemconfigurationtype_id->valuedouble,
        strdup(s_systemconfigurationtype_description_x->valuestring),
        strdup(yyyymm_ezmaxinvoicing->valuestring),
        i_ezmaxinvoicing_days->valuedouble,
        e_ezmaxinvoicing_paymenttype_local_nonprim,
        strdup(d_ezmaxinvoicing_rebatepaymenttype->valuestring),
        i_ezmaxinvoicing_contractlength->valuedouble,
        strdup(d_ezmaxinvoicing_rebatecontractlength->valuestring),
        b_ezmaxinvoicing_rebate_ezsignallagents->valueint,
        obj_audit ? obj_audit_local_nonprim : NULL
        );

    return ezmaxinvoicing_response_local_var;
end:
    if (e_ezmaxinvoicing_paymenttype_local_nonprim) {
        e_ezmaxinvoicing_paymenttype_local_nonprim = 0;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
