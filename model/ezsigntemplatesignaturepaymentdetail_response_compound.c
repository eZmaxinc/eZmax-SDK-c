#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignaturepaymentdetail_response_compound.h"



static ezsigntemplatesignaturepaymentdetail_response_compound_t *ezsigntemplatesignaturepaymentdetail_response_compound_create_internal(
    int *pki_ezsigntemplatesignaturepaymentdetail_id,
    int *fki_glaccountcontainer_id,
    char *t_ezsigntemplatesignaturepaymentdetail_description,
    char *d_ezsigntemplatesignaturepaymentdetail_amount,
    ezmax_api_definition__full_field_e_ezsigntemplatesignaturepaymentdetail_taxable__e e_ezsigntemplatesignaturepaymentdetail_taxable
    ) {
    ezsigntemplatesignaturepaymentdetail_response_compound_t *ezsigntemplatesignaturepaymentdetail_response_compound_local_var = malloc(sizeof(ezsigntemplatesignaturepaymentdetail_response_compound_t));
    if (!ezsigntemplatesignaturepaymentdetail_response_compound_local_var) {
        return NULL;
    }
    memset(ezsigntemplatesignaturepaymentdetail_response_compound_local_var, 0, sizeof(ezsigntemplatesignaturepaymentdetail_response_compound_t));
    ezsigntemplatesignaturepaymentdetail_response_compound_local_var->_library_owned = 1;
    ezsigntemplatesignaturepaymentdetail_response_compound_local_var->pki_ezsigntemplatesignaturepaymentdetail_id = pki_ezsigntemplatesignaturepaymentdetail_id;
    ezsigntemplatesignaturepaymentdetail_response_compound_local_var->fki_glaccountcontainer_id = fki_glaccountcontainer_id;
    ezsigntemplatesignaturepaymentdetail_response_compound_local_var->t_ezsigntemplatesignaturepaymentdetail_description = t_ezsigntemplatesignaturepaymentdetail_description;
    ezsigntemplatesignaturepaymentdetail_response_compound_local_var->d_ezsigntemplatesignaturepaymentdetail_amount = d_ezsigntemplatesignaturepaymentdetail_amount;
    ezsigntemplatesignaturepaymentdetail_response_compound_local_var->e_ezsigntemplatesignaturepaymentdetail_taxable = e_ezsigntemplatesignaturepaymentdetail_taxable;
    return ezsigntemplatesignaturepaymentdetail_response_compound_local_var;
}

__attribute__((deprecated)) ezsigntemplatesignaturepaymentdetail_response_compound_t *ezsigntemplatesignaturepaymentdetail_response_compound_create(
    int *pki_ezsigntemplatesignaturepaymentdetail_id,
    int *fki_glaccountcontainer_id,
    char *t_ezsigntemplatesignaturepaymentdetail_description,
    char *d_ezsigntemplatesignaturepaymentdetail_amount,
    ezmax_api_definition__full_field_e_ezsigntemplatesignaturepaymentdetail_taxable__e e_ezsigntemplatesignaturepaymentdetail_taxable
    ) {
    int *pki_ezsigntemplatesignaturepaymentdetail_id_copy = NULL;
    if (pki_ezsigntemplatesignaturepaymentdetail_id) {
        pki_ezsigntemplatesignaturepaymentdetail_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplatesignaturepaymentdetail_id_copy) *pki_ezsigntemplatesignaturepaymentdetail_id_copy = *pki_ezsigntemplatesignaturepaymentdetail_id;
    }
    int *fki_glaccountcontainer_id_copy = NULL;
    if (fki_glaccountcontainer_id) {
        fki_glaccountcontainer_id_copy = malloc(sizeof(int));
        if (fki_glaccountcontainer_id_copy) *fki_glaccountcontainer_id_copy = *fki_glaccountcontainer_id;
    }
    ezsigntemplatesignaturepaymentdetail_response_compound_t *result = ezsigntemplatesignaturepaymentdetail_response_compound_create_internal (
        pki_ezsigntemplatesignaturepaymentdetail_id_copy,
        fki_glaccountcontainer_id_copy,
        t_ezsigntemplatesignaturepaymentdetail_description,
        d_ezsigntemplatesignaturepaymentdetail_amount,
        e_ezsigntemplatesignaturepaymentdetail_taxable
        );
    if (!result) {
        free(pki_ezsigntemplatesignaturepaymentdetail_id_copy);
        free(fki_glaccountcontainer_id_copy);
    }
    return result;
}

void ezsigntemplatesignaturepaymentdetail_response_compound_free(ezsigntemplatesignaturepaymentdetail_response_compound_t *ezsigntemplatesignaturepaymentdetail_response_compound) {
    if(NULL == ezsigntemplatesignaturepaymentdetail_response_compound){
        return ;
    }
    if(ezsigntemplatesignaturepaymentdetail_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesignaturepaymentdetail_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignaturepaymentdetail_response_compound->pki_ezsigntemplatesignaturepaymentdetail_id) {
        free(ezsigntemplatesignaturepaymentdetail_response_compound->pki_ezsigntemplatesignaturepaymentdetail_id);
        ezsigntemplatesignaturepaymentdetail_response_compound->pki_ezsigntemplatesignaturepaymentdetail_id = NULL;
    }
    if (ezsigntemplatesignaturepaymentdetail_response_compound->fki_glaccountcontainer_id) {
        free(ezsigntemplatesignaturepaymentdetail_response_compound->fki_glaccountcontainer_id);
        ezsigntemplatesignaturepaymentdetail_response_compound->fki_glaccountcontainer_id = NULL;
    }
    if (ezsigntemplatesignaturepaymentdetail_response_compound->t_ezsigntemplatesignaturepaymentdetail_description) {
        free(ezsigntemplatesignaturepaymentdetail_response_compound->t_ezsigntemplatesignaturepaymentdetail_description);
        ezsigntemplatesignaturepaymentdetail_response_compound->t_ezsigntemplatesignaturepaymentdetail_description = NULL;
    }
    if (ezsigntemplatesignaturepaymentdetail_response_compound->d_ezsigntemplatesignaturepaymentdetail_amount) {
        free(ezsigntemplatesignaturepaymentdetail_response_compound->d_ezsigntemplatesignaturepaymentdetail_amount);
        ezsigntemplatesignaturepaymentdetail_response_compound->d_ezsigntemplatesignaturepaymentdetail_amount = NULL;
    }
    free(ezsigntemplatesignaturepaymentdetail_response_compound);
}

cJSON *ezsigntemplatesignaturepaymentdetail_response_compound_convertToJSON(ezsigntemplatesignaturepaymentdetail_response_compound_t *ezsigntemplatesignaturepaymentdetail_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignaturepaymentdetail_response_compound->pki_ezsigntemplatesignaturepaymentdetail_id
    if (!ezsigntemplatesignaturepaymentdetail_response_compound->pki_ezsigntemplatesignaturepaymentdetail_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatesignaturepaymentdetailID", *ezsigntemplatesignaturepaymentdetail_response_compound->pki_ezsigntemplatesignaturepaymentdetail_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatesignaturepaymentdetail_response_compound->fki_glaccountcontainer_id
    if(ezsigntemplatesignaturepaymentdetail_response_compound->fki_glaccountcontainer_id) {
    if(cJSON_AddNumberToObject(item, "fkiGlaccountcontainerID", *ezsigntemplatesignaturepaymentdetail_response_compound->fki_glaccountcontainer_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsigntemplatesignaturepaymentdetail_response_compound->t_ezsigntemplatesignaturepaymentdetail_description
    if (!ezsigntemplatesignaturepaymentdetail_response_compound->t_ezsigntemplatesignaturepaymentdetail_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsigntemplatesignaturepaymentdetailDescription", ezsigntemplatesignaturepaymentdetail_response_compound->t_ezsigntemplatesignaturepaymentdetail_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatesignaturepaymentdetail_response_compound->d_ezsigntemplatesignaturepaymentdetail_amount
    if (!ezsigntemplatesignaturepaymentdetail_response_compound->d_ezsigntemplatesignaturepaymentdetail_amount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzsigntemplatesignaturepaymentdetailAmount", ezsigntemplatesignaturepaymentdetail_response_compound->d_ezsigntemplatesignaturepaymentdetail_amount) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatesignaturepaymentdetail_response_compound->e_ezsigntemplatesignaturepaymentdetail_taxable
    if (ezmax_api_definition__full_field_e_ezsigntemplatesignaturepaymentdetail_taxable__NULL == ezsigntemplatesignaturepaymentdetail_response_compound->e_ezsigntemplatesignaturepaymentdetail_taxable) {
        goto fail;
    }
    cJSON *e_ezsigntemplatesignaturepaymentdetail_taxable_local_JSON = field_e_ezsigntemplatesignaturepaymentdetail_taxable_convertToJSON(ezsigntemplatesignaturepaymentdetail_response_compound->e_ezsigntemplatesignaturepaymentdetail_taxable);
    if(e_ezsigntemplatesignaturepaymentdetail_taxable_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplatesignaturepaymentdetailTaxable", e_ezsigntemplatesignaturepaymentdetail_taxable_local_JSON);
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

ezsigntemplatesignaturepaymentdetail_response_compound_t *ezsigntemplatesignaturepaymentdetail_response_compound_parseFromJSON(cJSON *ezsigntemplatesignaturepaymentdetail_response_compoundJSON){

    ezsigntemplatesignaturepaymentdetail_response_compound_t *ezsigntemplatesignaturepaymentdetail_response_compound_local_var = NULL;

    // define the local variable for ezsigntemplatesignaturepaymentdetail_response_compound->pki_ezsigntemplatesignaturepaymentdetail_id
    int *pki_ezsigntemplatesignaturepaymentdetail_id_local_var = NULL;

    // define the local variable for ezsigntemplatesignaturepaymentdetail_response_compound->fki_glaccountcontainer_id
    int *fki_glaccountcontainer_id_local_var = NULL;

    char *t_ezsigntemplatesignaturepaymentdetail_description_local_str = NULL;

    char *d_ezsigntemplatesignaturepaymentdetail_amount_local_str = NULL;

    // define the local variable for ezsigntemplatesignaturepaymentdetail_response_compound->e_ezsigntemplatesignaturepaymentdetail_taxable
    ezmax_api_definition__full_field_e_ezsigntemplatesignaturepaymentdetail_taxable__e e_ezsigntemplatesignaturepaymentdetail_taxable_local_nonprim = 0;

    // ezsigntemplatesignaturepaymentdetail_response_compound->pki_ezsigntemplatesignaturepaymentdetail_id
    cJSON *pki_ezsigntemplatesignaturepaymentdetail_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturepaymentdetail_response_compoundJSON, "pkiEzsigntemplatesignaturepaymentdetailID");
    if (cJSON_IsNull(pki_ezsigntemplatesignaturepaymentdetail_id)) {
        pki_ezsigntemplatesignaturepaymentdetail_id = NULL;
    }
    if (!pki_ezsigntemplatesignaturepaymentdetail_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatesignaturepaymentdetail_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplatesignaturepaymentdetail_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplatesignaturepaymentdetail_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplatesignaturepaymentdetail_id_local_var = pki_ezsigntemplatesignaturepaymentdetail_id->valuedouble;

    // ezsigntemplatesignaturepaymentdetail_response_compound->fki_glaccountcontainer_id
    cJSON *fki_glaccountcontainer_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturepaymentdetail_response_compoundJSON, "fkiGlaccountcontainerID");
    if (cJSON_IsNull(fki_glaccountcontainer_id)) {
        fki_glaccountcontainer_id = NULL;
    }
    if (fki_glaccountcontainer_id) { 
    if(!cJSON_IsNumber(fki_glaccountcontainer_id))
    {
    goto end; //Numeric
    }
    fki_glaccountcontainer_id_local_var = malloc(sizeof(int));
    if(!fki_glaccountcontainer_id_local_var)
    {
        goto end;
    }
    *fki_glaccountcontainer_id_local_var = fki_glaccountcontainer_id->valuedouble;
    }

    // ezsigntemplatesignaturepaymentdetail_response_compound->t_ezsigntemplatesignaturepaymentdetail_description
    cJSON *t_ezsigntemplatesignaturepaymentdetail_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturepaymentdetail_response_compoundJSON, "tEzsigntemplatesignaturepaymentdetailDescription");
    if (cJSON_IsNull(t_ezsigntemplatesignaturepaymentdetail_description)) {
        t_ezsigntemplatesignaturepaymentdetail_description = NULL;
    }
    if (!t_ezsigntemplatesignaturepaymentdetail_description) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsigntemplatesignaturepaymentdetail_description))
    {
    goto end; //String
    }

    // ezsigntemplatesignaturepaymentdetail_response_compound->d_ezsigntemplatesignaturepaymentdetail_amount
    cJSON *d_ezsigntemplatesignaturepaymentdetail_amount = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturepaymentdetail_response_compoundJSON, "dEzsigntemplatesignaturepaymentdetailAmount");
    if (cJSON_IsNull(d_ezsigntemplatesignaturepaymentdetail_amount)) {
        d_ezsigntemplatesignaturepaymentdetail_amount = NULL;
    }
    if (!d_ezsigntemplatesignaturepaymentdetail_amount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezsigntemplatesignaturepaymentdetail_amount))
    {
    goto end; //String
    }

    // ezsigntemplatesignaturepaymentdetail_response_compound->e_ezsigntemplatesignaturepaymentdetail_taxable
    cJSON *e_ezsigntemplatesignaturepaymentdetail_taxable = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignaturepaymentdetail_response_compoundJSON, "eEzsigntemplatesignaturepaymentdetailTaxable");
    if (cJSON_IsNull(e_ezsigntemplatesignaturepaymentdetail_taxable)) {
        e_ezsigntemplatesignaturepaymentdetail_taxable = NULL;
    }
    if (!e_ezsigntemplatesignaturepaymentdetail_taxable) {
        goto end;
    }

    
    e_ezsigntemplatesignaturepaymentdetail_taxable_local_nonprim = field_e_ezsigntemplatesignaturepaymentdetail_taxable_parseFromJSON(e_ezsigntemplatesignaturepaymentdetail_taxable); //custom


    if (t_ezsigntemplatesignaturepaymentdetail_description && !cJSON_IsNull(t_ezsigntemplatesignaturepaymentdetail_description)) t_ezsigntemplatesignaturepaymentdetail_description_local_str = strdup(t_ezsigntemplatesignaturepaymentdetail_description->valuestring);
    if (d_ezsigntemplatesignaturepaymentdetail_amount && !cJSON_IsNull(d_ezsigntemplatesignaturepaymentdetail_amount)) d_ezsigntemplatesignaturepaymentdetail_amount_local_str = strdup(d_ezsigntemplatesignaturepaymentdetail_amount->valuestring);

    ezsigntemplatesignaturepaymentdetail_response_compound_local_var = ezsigntemplatesignaturepaymentdetail_response_compound_create_internal (
        pki_ezsigntemplatesignaturepaymentdetail_id_local_var,
        fki_glaccountcontainer_id_local_var,
        t_ezsigntemplatesignaturepaymentdetail_description_local_str,
        d_ezsigntemplatesignaturepaymentdetail_amount_local_str,
        e_ezsigntemplatesignaturepaymentdetail_taxable_local_nonprim
        );

    if (!ezsigntemplatesignaturepaymentdetail_response_compound_local_var) {
        goto end;
    }

    return ezsigntemplatesignaturepaymentdetail_response_compound_local_var;
end:
    if (pki_ezsigntemplatesignaturepaymentdetail_id_local_var) {
        free(pki_ezsigntemplatesignaturepaymentdetail_id_local_var);
        pki_ezsigntemplatesignaturepaymentdetail_id_local_var = NULL;
    }
    if (fki_glaccountcontainer_id_local_var) {
        free(fki_glaccountcontainer_id_local_var);
        fki_glaccountcontainer_id_local_var = NULL;
    }
    if (t_ezsigntemplatesignaturepaymentdetail_description_local_str) {
        free(t_ezsigntemplatesignaturepaymentdetail_description_local_str);
        t_ezsigntemplatesignaturepaymentdetail_description_local_str = NULL;
    }
    if (d_ezsigntemplatesignaturepaymentdetail_amount_local_str) {
        free(d_ezsigntemplatesignaturepaymentdetail_amount_local_str);
        d_ezsigntemplatesignaturepaymentdetail_amount_local_str = NULL;
    }
    if (e_ezsigntemplatesignaturepaymentdetail_taxable_local_nonprim) {
        e_ezsigntemplatesignaturepaymentdetail_taxable_local_nonprim = 0;
    }
    return NULL;

}
