#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingcontract_response.h"



static ezmaxinvoicingcontract_response_t *ezmaxinvoicingcontract_response_create_internal(
    int pki_ezmaxinvoicingcontract_id,
    ezmax_api_definition__full_field_e_ezmaxinvoicingcontract_paymenttype__e e_ezmaxinvoicingcontract_paymenttype,
    int i_ezmaxinvoicingcontract_length,
    char *dt_ezmaxinvoicingcontract_start,
    char *dt_ezmaxinvoicingcontract_end,
    char *d_ezmaxinvoicingcontract_license,
    char *d_ezmaxinvoicingcontract121qa,
    int b_ezmaxinvoicingcontract_ezsignallagents,
    common_audit_t *obj_audit
    ) {
    ezmaxinvoicingcontract_response_t *ezmaxinvoicingcontract_response_local_var = malloc(sizeof(ezmaxinvoicingcontract_response_t));
    if (!ezmaxinvoicingcontract_response_local_var) {
        return NULL;
    }
    ezmaxinvoicingcontract_response_local_var->pki_ezmaxinvoicingcontract_id = pki_ezmaxinvoicingcontract_id;
    ezmaxinvoicingcontract_response_local_var->e_ezmaxinvoicingcontract_paymenttype = e_ezmaxinvoicingcontract_paymenttype;
    ezmaxinvoicingcontract_response_local_var->i_ezmaxinvoicingcontract_length = i_ezmaxinvoicingcontract_length;
    ezmaxinvoicingcontract_response_local_var->dt_ezmaxinvoicingcontract_start = dt_ezmaxinvoicingcontract_start;
    ezmaxinvoicingcontract_response_local_var->dt_ezmaxinvoicingcontract_end = dt_ezmaxinvoicingcontract_end;
    ezmaxinvoicingcontract_response_local_var->d_ezmaxinvoicingcontract_license = d_ezmaxinvoicingcontract_license;
    ezmaxinvoicingcontract_response_local_var->d_ezmaxinvoicingcontract121qa = d_ezmaxinvoicingcontract121qa;
    ezmaxinvoicingcontract_response_local_var->b_ezmaxinvoicingcontract_ezsignallagents = b_ezmaxinvoicingcontract_ezsignallagents;
    ezmaxinvoicingcontract_response_local_var->obj_audit = obj_audit;

    ezmaxinvoicingcontract_response_local_var->_library_owned = 1;
    return ezmaxinvoicingcontract_response_local_var;
}

__attribute__((deprecated)) ezmaxinvoicingcontract_response_t *ezmaxinvoicingcontract_response_create(
    int pki_ezmaxinvoicingcontract_id,
    ezmax_api_definition__full_field_e_ezmaxinvoicingcontract_paymenttype__e e_ezmaxinvoicingcontract_paymenttype,
    int i_ezmaxinvoicingcontract_length,
    char *dt_ezmaxinvoicingcontract_start,
    char *dt_ezmaxinvoicingcontract_end,
    char *d_ezmaxinvoicingcontract_license,
    char *d_ezmaxinvoicingcontract121qa,
    int b_ezmaxinvoicingcontract_ezsignallagents,
    common_audit_t *obj_audit
    ) {
    return ezmaxinvoicingcontract_response_create_internal (
        pki_ezmaxinvoicingcontract_id,
        e_ezmaxinvoicingcontract_paymenttype,
        i_ezmaxinvoicingcontract_length,
        dt_ezmaxinvoicingcontract_start,
        dt_ezmaxinvoicingcontract_end,
        d_ezmaxinvoicingcontract_license,
        d_ezmaxinvoicingcontract121qa,
        b_ezmaxinvoicingcontract_ezsignallagents,
        obj_audit
        );
}

void ezmaxinvoicingcontract_response_free(ezmaxinvoicingcontract_response_t *ezmaxinvoicingcontract_response) {
    if(NULL == ezmaxinvoicingcontract_response){
        return ;
    }
    if(ezmaxinvoicingcontract_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicingcontract_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_start) {
        free(ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_start);
        ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_start = NULL;
    }
    if (ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_end) {
        free(ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_end);
        ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_end = NULL;
    }
    if (ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract_license) {
        free(ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract_license);
        ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract_license = NULL;
    }
    if (ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract121qa) {
        free(ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract121qa);
        ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract121qa = NULL;
    }
    if (ezmaxinvoicingcontract_response->obj_audit) {
        common_audit_free(ezmaxinvoicingcontract_response->obj_audit);
        ezmaxinvoicingcontract_response->obj_audit = NULL;
    }
    free(ezmaxinvoicingcontract_response);
}

cJSON *ezmaxinvoicingcontract_response_convertToJSON(ezmaxinvoicingcontract_response_t *ezmaxinvoicingcontract_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingcontract_response->pki_ezmaxinvoicingcontract_id
    if (!ezmaxinvoicingcontract_response->pki_ezmaxinvoicingcontract_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingcontractID", ezmaxinvoicingcontract_response->pki_ezmaxinvoicingcontract_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingcontract_response->e_ezmaxinvoicingcontract_paymenttype
    if (ezmax_api_definition__full_field_e_ezmaxinvoicingcontract_paymenttype__NULL == ezmaxinvoicingcontract_response->e_ezmaxinvoicingcontract_paymenttype) {
        goto fail;
    }
    cJSON *e_ezmaxinvoicingcontract_paymenttype_local_JSON = field_e_ezmaxinvoicingcontract_paymenttype_convertToJSON(ezmaxinvoicingcontract_response->e_ezmaxinvoicingcontract_paymenttype);
    if(e_ezmaxinvoicingcontract_paymenttype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzmaxinvoicingcontractPaymenttype", e_ezmaxinvoicingcontract_paymenttype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezmaxinvoicingcontract_response->i_ezmaxinvoicingcontract_length
    if (!ezmaxinvoicingcontract_response->i_ezmaxinvoicingcontract_length) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingcontractLength", ezmaxinvoicingcontract_response->i_ezmaxinvoicingcontract_length) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_start
    if (!ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_start) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzmaxinvoicingcontractStart", ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_start) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_end
    if (!ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_end) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzmaxinvoicingcontractEnd", ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_end) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract_license
    if (!ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract_license) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingcontractLicense", ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract_license) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract121qa
    if (!ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract121qa) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingcontract121qa", ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract121qa) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingcontract_response->b_ezmaxinvoicingcontract_ezsignallagents
    if (!ezmaxinvoicingcontract_response->b_ezmaxinvoicingcontract_ezsignallagents) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingcontractEzsignallagents", ezmaxinvoicingcontract_response->b_ezmaxinvoicingcontract_ezsignallagents) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicingcontract_response->obj_audit
    if (!ezmaxinvoicingcontract_response->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(ezmaxinvoicingcontract_response->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingcontract_response_t *ezmaxinvoicingcontract_response_parseFromJSON(cJSON *ezmaxinvoicingcontract_responseJSON){

    ezmaxinvoicingcontract_response_t *ezmaxinvoicingcontract_response_local_var = NULL;

    // define the local variable for ezmaxinvoicingcontract_response->e_ezmaxinvoicingcontract_paymenttype
    ezmax_api_definition__full_field_e_ezmaxinvoicingcontract_paymenttype__e e_ezmaxinvoicingcontract_paymenttype_local_nonprim = 0;

    // define the local variable for ezmaxinvoicingcontract_response->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // ezmaxinvoicingcontract_response->pki_ezmaxinvoicingcontract_id
    cJSON *pki_ezmaxinvoicingcontract_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcontract_responseJSON, "pkiEzmaxinvoicingcontractID");
    if (cJSON_IsNull(pki_ezmaxinvoicingcontract_id)) {
        pki_ezmaxinvoicingcontract_id = NULL;
    }
    if (!pki_ezmaxinvoicingcontract_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezmaxinvoicingcontract_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingcontract_response->e_ezmaxinvoicingcontract_paymenttype
    cJSON *e_ezmaxinvoicingcontract_paymenttype = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcontract_responseJSON, "eEzmaxinvoicingcontractPaymenttype");
    if (cJSON_IsNull(e_ezmaxinvoicingcontract_paymenttype)) {
        e_ezmaxinvoicingcontract_paymenttype = NULL;
    }
    if (!e_ezmaxinvoicingcontract_paymenttype) {
        goto end;
    }

    
    e_ezmaxinvoicingcontract_paymenttype_local_nonprim = field_e_ezmaxinvoicingcontract_paymenttype_parseFromJSON(e_ezmaxinvoicingcontract_paymenttype); //custom

    // ezmaxinvoicingcontract_response->i_ezmaxinvoicingcontract_length
    cJSON *i_ezmaxinvoicingcontract_length = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcontract_responseJSON, "iEzmaxinvoicingcontractLength");
    if (cJSON_IsNull(i_ezmaxinvoicingcontract_length)) {
        i_ezmaxinvoicingcontract_length = NULL;
    }
    if (!i_ezmaxinvoicingcontract_length) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingcontract_length))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_start
    cJSON *dt_ezmaxinvoicingcontract_start = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcontract_responseJSON, "dtEzmaxinvoicingcontractStart");
    if (cJSON_IsNull(dt_ezmaxinvoicingcontract_start)) {
        dt_ezmaxinvoicingcontract_start = NULL;
    }
    if (!dt_ezmaxinvoicingcontract_start) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezmaxinvoicingcontract_start))
    {
    goto end; //String
    }

    // ezmaxinvoicingcontract_response->dt_ezmaxinvoicingcontract_end
    cJSON *dt_ezmaxinvoicingcontract_end = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcontract_responseJSON, "dtEzmaxinvoicingcontractEnd");
    if (cJSON_IsNull(dt_ezmaxinvoicingcontract_end)) {
        dt_ezmaxinvoicingcontract_end = NULL;
    }
    if (!dt_ezmaxinvoicingcontract_end) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezmaxinvoicingcontract_end))
    {
    goto end; //String
    }

    // ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract_license
    cJSON *d_ezmaxinvoicingcontract_license = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcontract_responseJSON, "dEzmaxinvoicingcontractLicense");
    if (cJSON_IsNull(d_ezmaxinvoicingcontract_license)) {
        d_ezmaxinvoicingcontract_license = NULL;
    }
    if (!d_ezmaxinvoicingcontract_license) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingcontract_license))
    {
    goto end; //String
    }

    // ezmaxinvoicingcontract_response->d_ezmaxinvoicingcontract121qa
    cJSON *d_ezmaxinvoicingcontract121qa = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcontract_responseJSON, "dEzmaxinvoicingcontract121qa");
    if (cJSON_IsNull(d_ezmaxinvoicingcontract121qa)) {
        d_ezmaxinvoicingcontract121qa = NULL;
    }
    if (!d_ezmaxinvoicingcontract121qa) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingcontract121qa))
    {
    goto end; //String
    }

    // ezmaxinvoicingcontract_response->b_ezmaxinvoicingcontract_ezsignallagents
    cJSON *b_ezmaxinvoicingcontract_ezsignallagents = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcontract_responseJSON, "bEzmaxinvoicingcontractEzsignallagents");
    if (cJSON_IsNull(b_ezmaxinvoicingcontract_ezsignallagents)) {
        b_ezmaxinvoicingcontract_ezsignallagents = NULL;
    }
    if (!b_ezmaxinvoicingcontract_ezsignallagents) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicingcontract_ezsignallagents))
    {
    goto end; //Bool
    }

    // ezmaxinvoicingcontract_response->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingcontract_responseJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    ezmaxinvoicingcontract_response_local_var = ezmaxinvoicingcontract_response_create_internal (
        pki_ezmaxinvoicingcontract_id->valuedouble,
        e_ezmaxinvoicingcontract_paymenttype_local_nonprim,
        i_ezmaxinvoicingcontract_length->valuedouble,
        strdup(dt_ezmaxinvoicingcontract_start->valuestring),
        strdup(dt_ezmaxinvoicingcontract_end->valuestring),
        strdup(d_ezmaxinvoicingcontract_license->valuestring),
        strdup(d_ezmaxinvoicingcontract121qa->valuestring),
        b_ezmaxinvoicingcontract_ezsignallagents->valueint,
        obj_audit_local_nonprim
        );

    return ezmaxinvoicingcontract_response_local_var;
end:
    if (e_ezmaxinvoicingcontract_paymenttype_local_nonprim) {
        e_ezmaxinvoicingcontract_paymenttype_local_nonprim = 0;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
