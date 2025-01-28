#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingsummaryinternaldetail_response_compound.h"



static ezmaxinvoicingsummaryinternaldetail_response_compound_t *ezmaxinvoicingsummaryinternaldetail_response_compound_create_internal(
    int pki_ezmaxinvoicingsummaryinternaldetail_id,
    int fki_ezmaxinvoicingsummaryinternal_id,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description,
    char *d_ezmaxinvoicingsummaryinternaldetail_countreal,
    char *d_ezmaxinvoicingsummaryinternaldetail_subtotal,
    char *d_ezmaxinvoicingsummaryinternaldetail_rebate,
    char *d_ezmaxinvoicingsummaryinternaldetail_total,
    int b_ezmaxinvoicingsummaryinternaldetail_adjustment,
    char *t_ezmaxproduct_help_x
    ) {
    ezmaxinvoicingsummaryinternaldetail_response_compound_t *ezmaxinvoicingsummaryinternaldetail_response_compound_local_var = malloc(sizeof(ezmaxinvoicingsummaryinternaldetail_response_compound_t));
    if (!ezmaxinvoicingsummaryinternaldetail_response_compound_local_var) {
        return NULL;
    }
    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->pki_ezmaxinvoicingsummaryinternaldetail_id = pki_ezmaxinvoicingsummaryinternaldetail_id;
    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->fki_ezmaxinvoicingsummaryinternal_id = fki_ezmaxinvoicingsummaryinternal_id;
    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->fki_billingentityexternal_id = fki_billingentityexternal_id;
    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->s_billingentityexternal_description = s_billingentityexternal_description;
    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->d_ezmaxinvoicingsummaryinternaldetail_countreal = d_ezmaxinvoicingsummaryinternaldetail_countreal;
    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->d_ezmaxinvoicingsummaryinternaldetail_subtotal = d_ezmaxinvoicingsummaryinternaldetail_subtotal;
    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->d_ezmaxinvoicingsummaryinternaldetail_rebate = d_ezmaxinvoicingsummaryinternaldetail_rebate;
    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->d_ezmaxinvoicingsummaryinternaldetail_total = d_ezmaxinvoicingsummaryinternaldetail_total;
    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->b_ezmaxinvoicingsummaryinternaldetail_adjustment = b_ezmaxinvoicingsummaryinternaldetail_adjustment;
    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->t_ezmaxproduct_help_x = t_ezmaxproduct_help_x;

    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var->_library_owned = 1;
    return ezmaxinvoicingsummaryinternaldetail_response_compound_local_var;
}

__attribute__((deprecated)) ezmaxinvoicingsummaryinternaldetail_response_compound_t *ezmaxinvoicingsummaryinternaldetail_response_compound_create(
    int pki_ezmaxinvoicingsummaryinternaldetail_id,
    int fki_ezmaxinvoicingsummaryinternal_id,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    int fki_billingentityexternal_id,
    char *s_billingentityexternal_description,
    char *d_ezmaxinvoicingsummaryinternaldetail_countreal,
    char *d_ezmaxinvoicingsummaryinternaldetail_subtotal,
    char *d_ezmaxinvoicingsummaryinternaldetail_rebate,
    char *d_ezmaxinvoicingsummaryinternaldetail_total,
    int b_ezmaxinvoicingsummaryinternaldetail_adjustment,
    char *t_ezmaxproduct_help_x
    ) {
    return ezmaxinvoicingsummaryinternaldetail_response_compound_create_internal (
        pki_ezmaxinvoicingsummaryinternaldetail_id,
        fki_ezmaxinvoicingsummaryinternal_id,
        fki_ezmaxproduct_id,
        s_ezmaxproduct_description_x,
        fki_billingentityexternal_id,
        s_billingentityexternal_description,
        d_ezmaxinvoicingsummaryinternaldetail_countreal,
        d_ezmaxinvoicingsummaryinternaldetail_subtotal,
        d_ezmaxinvoicingsummaryinternaldetail_rebate,
        d_ezmaxinvoicingsummaryinternaldetail_total,
        b_ezmaxinvoicingsummaryinternaldetail_adjustment,
        t_ezmaxproduct_help_x
        );
}

void ezmaxinvoicingsummaryinternaldetail_response_compound_free(ezmaxinvoicingsummaryinternaldetail_response_compound_t *ezmaxinvoicingsummaryinternaldetail_response_compound) {
    if(NULL == ezmaxinvoicingsummaryinternaldetail_response_compound){
        return ;
    }
    if(ezmaxinvoicingsummaryinternaldetail_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicingsummaryinternaldetail_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingsummaryinternaldetail_response_compound->s_ezmaxproduct_description_x) {
        free(ezmaxinvoicingsummaryinternaldetail_response_compound->s_ezmaxproduct_description_x);
        ezmaxinvoicingsummaryinternaldetail_response_compound->s_ezmaxproduct_description_x = NULL;
    }
    if (ezmaxinvoicingsummaryinternaldetail_response_compound->s_billingentityexternal_description) {
        free(ezmaxinvoicingsummaryinternaldetail_response_compound->s_billingentityexternal_description);
        ezmaxinvoicingsummaryinternaldetail_response_compound->s_billingentityexternal_description = NULL;
    }
    if (ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_countreal) {
        free(ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_countreal);
        ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_countreal = NULL;
    }
    if (ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_subtotal) {
        free(ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_subtotal);
        ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_subtotal = NULL;
    }
    if (ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_rebate) {
        free(ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_rebate);
        ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_rebate = NULL;
    }
    if (ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_total) {
        free(ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_total);
        ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_total = NULL;
    }
    if (ezmaxinvoicingsummaryinternaldetail_response_compound->t_ezmaxproduct_help_x) {
        free(ezmaxinvoicingsummaryinternaldetail_response_compound->t_ezmaxproduct_help_x);
        ezmaxinvoicingsummaryinternaldetail_response_compound->t_ezmaxproduct_help_x = NULL;
    }
    free(ezmaxinvoicingsummaryinternaldetail_response_compound);
}

cJSON *ezmaxinvoicingsummaryinternaldetail_response_compound_convertToJSON(ezmaxinvoicingsummaryinternaldetail_response_compound_t *ezmaxinvoicingsummaryinternaldetail_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingsummaryinternaldetail_response_compound->pki_ezmaxinvoicingsummaryinternaldetail_id
    if(ezmaxinvoicingsummaryinternaldetail_response_compound->pki_ezmaxinvoicingsummaryinternaldetail_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingsummaryinternaldetailID", ezmaxinvoicingsummaryinternaldetail_response_compound->pki_ezmaxinvoicingsummaryinternaldetail_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryinternaldetail_response_compound->fki_ezmaxinvoicingsummaryinternal_id
    if(ezmaxinvoicingsummaryinternaldetail_response_compound->fki_ezmaxinvoicingsummaryinternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingsummaryinternalID", ezmaxinvoicingsummaryinternaldetail_response_compound->fki_ezmaxinvoicingsummaryinternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryinternaldetail_response_compound->fki_ezmaxproduct_id
    if (!ezmaxinvoicingsummaryinternaldetail_response_compound->fki_ezmaxproduct_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxproductID", ezmaxinvoicingsummaryinternaldetail_response_compound->fki_ezmaxproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingsummaryinternaldetail_response_compound->s_ezmaxproduct_description_x
    if (!ezmaxinvoicingsummaryinternaldetail_response_compound->s_ezmaxproduct_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxproductDescriptionX", ezmaxinvoicingsummaryinternaldetail_response_compound->s_ezmaxproduct_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryinternaldetail_response_compound->fki_billingentityexternal_id
    if (!ezmaxinvoicingsummaryinternaldetail_response_compound->fki_billingentityexternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityexternalID", ezmaxinvoicingsummaryinternaldetail_response_compound->fki_billingentityexternal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingsummaryinternaldetail_response_compound->s_billingentityexternal_description
    if (!ezmaxinvoicingsummaryinternaldetail_response_compound->s_billingentityexternal_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityexternalDescription", ezmaxinvoicingsummaryinternaldetail_response_compound->s_billingentityexternal_description) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_countreal
    if (!ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_countreal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryinternaldetailCountreal", ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_countreal) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_subtotal
    if (!ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_subtotal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryinternaldetailSubtotal", ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_subtotal) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_rebate
    if (!ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_rebate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryinternaldetailRebate", ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_rebate) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_total
    if (!ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_total) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryinternaldetailTotal", ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_total) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryinternaldetail_response_compound->b_ezmaxinvoicingsummaryinternaldetail_adjustment
    if (!ezmaxinvoicingsummaryinternaldetail_response_compound->b_ezmaxinvoicingsummaryinternaldetail_adjustment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingsummaryinternaldetailAdjustment", ezmaxinvoicingsummaryinternaldetail_response_compound->b_ezmaxinvoicingsummaryinternaldetail_adjustment) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicingsummaryinternaldetail_response_compound->t_ezmaxproduct_help_x
    if (!ezmaxinvoicingsummaryinternaldetail_response_compound->t_ezmaxproduct_help_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzmaxproductHelpX", ezmaxinvoicingsummaryinternaldetail_response_compound->t_ezmaxproduct_help_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingsummaryinternaldetail_response_compound_t *ezmaxinvoicingsummaryinternaldetail_response_compound_parseFromJSON(cJSON *ezmaxinvoicingsummaryinternaldetail_response_compoundJSON){

    ezmaxinvoicingsummaryinternaldetail_response_compound_t *ezmaxinvoicingsummaryinternaldetail_response_compound_local_var = NULL;

    // ezmaxinvoicingsummaryinternaldetail_response_compound->pki_ezmaxinvoicingsummaryinternaldetail_id
    cJSON *pki_ezmaxinvoicingsummaryinternaldetail_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternaldetail_response_compoundJSON, "pkiEzmaxinvoicingsummaryinternaldetailID");
    if (cJSON_IsNull(pki_ezmaxinvoicingsummaryinternaldetail_id)) {
        pki_ezmaxinvoicingsummaryinternaldetail_id = NULL;
    }
    if (pki_ezmaxinvoicingsummaryinternaldetail_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingsummaryinternaldetail_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryinternaldetail_response_compound->fki_ezmaxinvoicingsummaryinternal_id
    cJSON *fki_ezmaxinvoicingsummaryinternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternaldetail_response_compoundJSON, "fkiEzmaxinvoicingsummaryinternalID");
    if (cJSON_IsNull(fki_ezmaxinvoicingsummaryinternal_id)) {
        fki_ezmaxinvoicingsummaryinternal_id = NULL;
    }
    if (fki_ezmaxinvoicingsummaryinternal_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicingsummaryinternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryinternaldetail_response_compound->fki_ezmaxproduct_id
    cJSON *fki_ezmaxproduct_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternaldetail_response_compoundJSON, "fkiEzmaxproductID");
    if (cJSON_IsNull(fki_ezmaxproduct_id)) {
        fki_ezmaxproduct_id = NULL;
    }
    if (!fki_ezmaxproduct_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezmaxproduct_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingsummaryinternaldetail_response_compound->s_ezmaxproduct_description_x
    cJSON *s_ezmaxproduct_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternaldetail_response_compoundJSON, "sEzmaxproductDescriptionX");
    if (cJSON_IsNull(s_ezmaxproduct_description_x)) {
        s_ezmaxproduct_description_x = NULL;
    }
    if (!s_ezmaxproduct_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxproduct_description_x))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryinternaldetail_response_compound->fki_billingentityexternal_id
    cJSON *fki_billingentityexternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternaldetail_response_compoundJSON, "fkiBillingentityexternalID");
    if (cJSON_IsNull(fki_billingentityexternal_id)) {
        fki_billingentityexternal_id = NULL;
    }
    if (!fki_billingentityexternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityexternal_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingsummaryinternaldetail_response_compound->s_billingentityexternal_description
    cJSON *s_billingentityexternal_description = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternaldetail_response_compoundJSON, "sBillingentityexternalDescription");
    if (cJSON_IsNull(s_billingentityexternal_description)) {
        s_billingentityexternal_description = NULL;
    }
    if (!s_billingentityexternal_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityexternal_description))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_countreal
    cJSON *d_ezmaxinvoicingsummaryinternaldetail_countreal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternaldetail_response_compoundJSON, "dEzmaxinvoicingsummaryinternaldetailCountreal");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryinternaldetail_countreal)) {
        d_ezmaxinvoicingsummaryinternaldetail_countreal = NULL;
    }
    if (!d_ezmaxinvoicingsummaryinternaldetail_countreal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryinternaldetail_countreal))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_subtotal
    cJSON *d_ezmaxinvoicingsummaryinternaldetail_subtotal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternaldetail_response_compoundJSON, "dEzmaxinvoicingsummaryinternaldetailSubtotal");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryinternaldetail_subtotal)) {
        d_ezmaxinvoicingsummaryinternaldetail_subtotal = NULL;
    }
    if (!d_ezmaxinvoicingsummaryinternaldetail_subtotal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryinternaldetail_subtotal))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_rebate
    cJSON *d_ezmaxinvoicingsummaryinternaldetail_rebate = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternaldetail_response_compoundJSON, "dEzmaxinvoicingsummaryinternaldetailRebate");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryinternaldetail_rebate)) {
        d_ezmaxinvoicingsummaryinternaldetail_rebate = NULL;
    }
    if (!d_ezmaxinvoicingsummaryinternaldetail_rebate) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryinternaldetail_rebate))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryinternaldetail_response_compound->d_ezmaxinvoicingsummaryinternaldetail_total
    cJSON *d_ezmaxinvoicingsummaryinternaldetail_total = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternaldetail_response_compoundJSON, "dEzmaxinvoicingsummaryinternaldetailTotal");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryinternaldetail_total)) {
        d_ezmaxinvoicingsummaryinternaldetail_total = NULL;
    }
    if (!d_ezmaxinvoicingsummaryinternaldetail_total) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryinternaldetail_total))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryinternaldetail_response_compound->b_ezmaxinvoicingsummaryinternaldetail_adjustment
    cJSON *b_ezmaxinvoicingsummaryinternaldetail_adjustment = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternaldetail_response_compoundJSON, "bEzmaxinvoicingsummaryinternaldetailAdjustment");
    if (cJSON_IsNull(b_ezmaxinvoicingsummaryinternaldetail_adjustment)) {
        b_ezmaxinvoicingsummaryinternaldetail_adjustment = NULL;
    }
    if (!b_ezmaxinvoicingsummaryinternaldetail_adjustment) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicingsummaryinternaldetail_adjustment))
    {
    goto end; //Bool
    }

    // ezmaxinvoicingsummaryinternaldetail_response_compound->t_ezmaxproduct_help_x
    cJSON *t_ezmaxproduct_help_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryinternaldetail_response_compoundJSON, "tEzmaxproductHelpX");
    if (cJSON_IsNull(t_ezmaxproduct_help_x)) {
        t_ezmaxproduct_help_x = NULL;
    }
    if (!t_ezmaxproduct_help_x) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezmaxproduct_help_x))
    {
    goto end; //String
    }


    ezmaxinvoicingsummaryinternaldetail_response_compound_local_var = ezmaxinvoicingsummaryinternaldetail_response_compound_create_internal (
        pki_ezmaxinvoicingsummaryinternaldetail_id ? pki_ezmaxinvoicingsummaryinternaldetail_id->valuedouble : 0,
        fki_ezmaxinvoicingsummaryinternal_id ? fki_ezmaxinvoicingsummaryinternal_id->valuedouble : 0,
        fki_ezmaxproduct_id->valuedouble,
        strdup(s_ezmaxproduct_description_x->valuestring),
        fki_billingentityexternal_id->valuedouble,
        strdup(s_billingentityexternal_description->valuestring),
        strdup(d_ezmaxinvoicingsummaryinternaldetail_countreal->valuestring),
        strdup(d_ezmaxinvoicingsummaryinternaldetail_subtotal->valuestring),
        strdup(d_ezmaxinvoicingsummaryinternaldetail_rebate->valuestring),
        strdup(d_ezmaxinvoicingsummaryinternaldetail_total->valuestring),
        b_ezmaxinvoicingsummaryinternaldetail_adjustment->valueint,
        strdup(t_ezmaxproduct_help_x->valuestring)
        );

    return ezmaxinvoicingsummaryinternaldetail_response_compound_local_var;
end:
    return NULL;

}
