#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignaturepaymentdetail_request_compound.h"



static ezsignsignaturepaymentdetail_request_compound_t *ezsignsignaturepaymentdetail_request_compound_create_internal(
    int pki_ezsignsignaturepaymentdetail_id,
    int fki_glaccountcontainer_id,
    char *t_ezsignsignaturepaymentdetail_description,
    char *d_ezsignsignaturepaymentdetail_amount,
    ezmax_api_definition__full_field_e_ezsignsignaturepaymentdetail_taxable__e e_ezsignsignaturepaymentdetail_taxable
    ) {
    ezsignsignaturepaymentdetail_request_compound_t *ezsignsignaturepaymentdetail_request_compound_local_var = malloc(sizeof(ezsignsignaturepaymentdetail_request_compound_t));
    if (!ezsignsignaturepaymentdetail_request_compound_local_var) {
        return NULL;
    }
    ezsignsignaturepaymentdetail_request_compound_local_var->pki_ezsignsignaturepaymentdetail_id = pki_ezsignsignaturepaymentdetail_id;
    ezsignsignaturepaymentdetail_request_compound_local_var->fki_glaccountcontainer_id = fki_glaccountcontainer_id;
    ezsignsignaturepaymentdetail_request_compound_local_var->t_ezsignsignaturepaymentdetail_description = t_ezsignsignaturepaymentdetail_description;
    ezsignsignaturepaymentdetail_request_compound_local_var->d_ezsignsignaturepaymentdetail_amount = d_ezsignsignaturepaymentdetail_amount;
    ezsignsignaturepaymentdetail_request_compound_local_var->e_ezsignsignaturepaymentdetail_taxable = e_ezsignsignaturepaymentdetail_taxable;

    ezsignsignaturepaymentdetail_request_compound_local_var->_library_owned = 1;
    return ezsignsignaturepaymentdetail_request_compound_local_var;
}

__attribute__((deprecated)) ezsignsignaturepaymentdetail_request_compound_t *ezsignsignaturepaymentdetail_request_compound_create(
    int pki_ezsignsignaturepaymentdetail_id,
    int fki_glaccountcontainer_id,
    char *t_ezsignsignaturepaymentdetail_description,
    char *d_ezsignsignaturepaymentdetail_amount,
    ezmax_api_definition__full_field_e_ezsignsignaturepaymentdetail_taxable__e e_ezsignsignaturepaymentdetail_taxable
    ) {
    return ezsignsignaturepaymentdetail_request_compound_create_internal (
        pki_ezsignsignaturepaymentdetail_id,
        fki_glaccountcontainer_id,
        t_ezsignsignaturepaymentdetail_description,
        d_ezsignsignaturepaymentdetail_amount,
        e_ezsignsignaturepaymentdetail_taxable
        );
}

void ezsignsignaturepaymentdetail_request_compound_free(ezsignsignaturepaymentdetail_request_compound_t *ezsignsignaturepaymentdetail_request_compound) {
    if(NULL == ezsignsignaturepaymentdetail_request_compound){
        return ;
    }
    if(ezsignsignaturepaymentdetail_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignaturepaymentdetail_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignaturepaymentdetail_request_compound->t_ezsignsignaturepaymentdetail_description) {
        free(ezsignsignaturepaymentdetail_request_compound->t_ezsignsignaturepaymentdetail_description);
        ezsignsignaturepaymentdetail_request_compound->t_ezsignsignaturepaymentdetail_description = NULL;
    }
    if (ezsignsignaturepaymentdetail_request_compound->d_ezsignsignaturepaymentdetail_amount) {
        free(ezsignsignaturepaymentdetail_request_compound->d_ezsignsignaturepaymentdetail_amount);
        ezsignsignaturepaymentdetail_request_compound->d_ezsignsignaturepaymentdetail_amount = NULL;
    }
    free(ezsignsignaturepaymentdetail_request_compound);
}

cJSON *ezsignsignaturepaymentdetail_request_compound_convertToJSON(ezsignsignaturepaymentdetail_request_compound_t *ezsignsignaturepaymentdetail_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignaturepaymentdetail_request_compound->pki_ezsignsignaturepaymentdetail_id
    if(ezsignsignaturepaymentdetail_request_compound->pki_ezsignsignaturepaymentdetail_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignaturepaymentdetailID", ezsignsignaturepaymentdetail_request_compound->pki_ezsignsignaturepaymentdetail_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturepaymentdetail_request_compound->fki_glaccountcontainer_id
    if(ezsignsignaturepaymentdetail_request_compound->fki_glaccountcontainer_id) {
    if(cJSON_AddNumberToObject(item, "fkiGlaccountcontainerID", ezsignsignaturepaymentdetail_request_compound->fki_glaccountcontainer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignaturepaymentdetail_request_compound->t_ezsignsignaturepaymentdetail_description
    if (!ezsignsignaturepaymentdetail_request_compound->t_ezsignsignaturepaymentdetail_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignsignaturepaymentdetailDescription", ezsignsignaturepaymentdetail_request_compound->t_ezsignsignaturepaymentdetail_description) == NULL) {
    goto fail; //String
    }


    // ezsignsignaturepaymentdetail_request_compound->d_ezsignsignaturepaymentdetail_amount
    if (!ezsignsignaturepaymentdetail_request_compound->d_ezsignsignaturepaymentdetail_amount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzsignsignaturepaymentdetailAmount", ezsignsignaturepaymentdetail_request_compound->d_ezsignsignaturepaymentdetail_amount) == NULL) {
    goto fail; //String
    }


    // ezsignsignaturepaymentdetail_request_compound->e_ezsignsignaturepaymentdetail_taxable
    if (ezmax_api_definition__full_field_e_ezsignsignaturepaymentdetail_taxable__NULL == ezsignsignaturepaymentdetail_request_compound->e_ezsignsignaturepaymentdetail_taxable) {
        goto fail;
    }
    cJSON *e_ezsignsignaturepaymentdetail_taxable_local_JSON = field_e_ezsignsignaturepaymentdetail_taxable_convertToJSON(ezsignsignaturepaymentdetail_request_compound->e_ezsignsignaturepaymentdetail_taxable);
    if(e_ezsignsignaturepaymentdetail_taxable_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignsignaturepaymentdetailTaxable", e_ezsignsignaturepaymentdetail_taxable_local_JSON);
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

ezsignsignaturepaymentdetail_request_compound_t *ezsignsignaturepaymentdetail_request_compound_parseFromJSON(cJSON *ezsignsignaturepaymentdetail_request_compoundJSON){

    ezsignsignaturepaymentdetail_request_compound_t *ezsignsignaturepaymentdetail_request_compound_local_var = NULL;

    // define the local variable for ezsignsignaturepaymentdetail_request_compound->e_ezsignsignaturepaymentdetail_taxable
    ezmax_api_definition__full_field_e_ezsignsignaturepaymentdetail_taxable__e e_ezsignsignaturepaymentdetail_taxable_local_nonprim = 0;

    // ezsignsignaturepaymentdetail_request_compound->pki_ezsignsignaturepaymentdetail_id
    cJSON *pki_ezsignsignaturepaymentdetail_id = cJSON_GetObjectItemCaseSensitive(ezsignsignaturepaymentdetail_request_compoundJSON, "pkiEzsignsignaturepaymentdetailID");
    if (cJSON_IsNull(pki_ezsignsignaturepaymentdetail_id)) {
        pki_ezsignsignaturepaymentdetail_id = NULL;
    }
    if (pki_ezsignsignaturepaymentdetail_id) { 
    if(!cJSON_IsNumber(pki_ezsignsignaturepaymentdetail_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignaturepaymentdetail_request_compound->fki_glaccountcontainer_id
    cJSON *fki_glaccountcontainer_id = cJSON_GetObjectItemCaseSensitive(ezsignsignaturepaymentdetail_request_compoundJSON, "fkiGlaccountcontainerID");
    if (cJSON_IsNull(fki_glaccountcontainer_id)) {
        fki_glaccountcontainer_id = NULL;
    }
    if (fki_glaccountcontainer_id) { 
    if(!cJSON_IsNumber(fki_glaccountcontainer_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignaturepaymentdetail_request_compound->t_ezsignsignaturepaymentdetail_description
    cJSON *t_ezsignsignaturepaymentdetail_description = cJSON_GetObjectItemCaseSensitive(ezsignsignaturepaymentdetail_request_compoundJSON, "tEzsignsignaturepaymentdetailDescription");
    if (cJSON_IsNull(t_ezsignsignaturepaymentdetail_description)) {
        t_ezsignsignaturepaymentdetail_description = NULL;
    }
    if (!t_ezsignsignaturepaymentdetail_description) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignsignaturepaymentdetail_description))
    {
    goto end; //String
    }

    // ezsignsignaturepaymentdetail_request_compound->d_ezsignsignaturepaymentdetail_amount
    cJSON *d_ezsignsignaturepaymentdetail_amount = cJSON_GetObjectItemCaseSensitive(ezsignsignaturepaymentdetail_request_compoundJSON, "dEzsignsignaturepaymentdetailAmount");
    if (cJSON_IsNull(d_ezsignsignaturepaymentdetail_amount)) {
        d_ezsignsignaturepaymentdetail_amount = NULL;
    }
    if (!d_ezsignsignaturepaymentdetail_amount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezsignsignaturepaymentdetail_amount))
    {
    goto end; //String
    }

    // ezsignsignaturepaymentdetail_request_compound->e_ezsignsignaturepaymentdetail_taxable
    cJSON *e_ezsignsignaturepaymentdetail_taxable = cJSON_GetObjectItemCaseSensitive(ezsignsignaturepaymentdetail_request_compoundJSON, "eEzsignsignaturepaymentdetailTaxable");
    if (cJSON_IsNull(e_ezsignsignaturepaymentdetail_taxable)) {
        e_ezsignsignaturepaymentdetail_taxable = NULL;
    }
    if (!e_ezsignsignaturepaymentdetail_taxable) {
        goto end;
    }

    
    e_ezsignsignaturepaymentdetail_taxable_local_nonprim = field_e_ezsignsignaturepaymentdetail_taxable_parseFromJSON(e_ezsignsignaturepaymentdetail_taxable); //custom


    ezsignsignaturepaymentdetail_request_compound_local_var = ezsignsignaturepaymentdetail_request_compound_create_internal (
        pki_ezsignsignaturepaymentdetail_id ? pki_ezsignsignaturepaymentdetail_id->valuedouble : 0,
        fki_glaccountcontainer_id ? fki_glaccountcontainer_id->valuedouble : 0,
        strdup(t_ezsignsignaturepaymentdetail_description->valuestring),
        strdup(d_ezsignsignaturepaymentdetail_amount->valuestring),
        e_ezsignsignaturepaymentdetail_taxable_local_nonprim
        );

    return ezsignsignaturepaymentdetail_request_compound_local_var;
end:
    if (e_ezsignsignaturepaymentdetail_taxable_local_nonprim) {
        e_ezsignsignaturepaymentdetail_taxable_local_nonprim = 0;
    }
    return NULL;

}
