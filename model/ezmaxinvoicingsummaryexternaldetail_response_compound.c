#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingsummaryexternaldetail_response_compound.h"



ezmaxinvoicingsummaryexternaldetail_response_compound_t *ezmaxinvoicingsummaryexternaldetail_response_compound_create(
    int pki_ezmaxinvoicingsummaryexternaldetail_id,
    int fki_ezmaxinvoicingsummaryexternal_id,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    char *d_ezmaxinvoicingsummaryexternaldetail_countreal,
    char *d_ezmaxinvoicingsummaryexternaldetail_subtotal,
    char *d_ezmaxinvoicingsummaryexternaldetail_rebate,
    char *d_ezmaxinvoicingsummaryexternaldetail_total,
    int b_ezmaxinvoicingsummaryexternaldetail_adjustment
    ) {
    ezmaxinvoicingsummaryexternaldetail_response_compound_t *ezmaxinvoicingsummaryexternaldetail_response_compound_local_var = malloc(sizeof(ezmaxinvoicingsummaryexternaldetail_response_compound_t));
    if (!ezmaxinvoicingsummaryexternaldetail_response_compound_local_var) {
        return NULL;
    }
    ezmaxinvoicingsummaryexternaldetail_response_compound_local_var->pki_ezmaxinvoicingsummaryexternaldetail_id = pki_ezmaxinvoicingsummaryexternaldetail_id;
    ezmaxinvoicingsummaryexternaldetail_response_compound_local_var->fki_ezmaxinvoicingsummaryexternal_id = fki_ezmaxinvoicingsummaryexternal_id;
    ezmaxinvoicingsummaryexternaldetail_response_compound_local_var->fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    ezmaxinvoicingsummaryexternaldetail_response_compound_local_var->s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    ezmaxinvoicingsummaryexternaldetail_response_compound_local_var->d_ezmaxinvoicingsummaryexternaldetail_countreal = d_ezmaxinvoicingsummaryexternaldetail_countreal;
    ezmaxinvoicingsummaryexternaldetail_response_compound_local_var->d_ezmaxinvoicingsummaryexternaldetail_subtotal = d_ezmaxinvoicingsummaryexternaldetail_subtotal;
    ezmaxinvoicingsummaryexternaldetail_response_compound_local_var->d_ezmaxinvoicingsummaryexternaldetail_rebate = d_ezmaxinvoicingsummaryexternaldetail_rebate;
    ezmaxinvoicingsummaryexternaldetail_response_compound_local_var->d_ezmaxinvoicingsummaryexternaldetail_total = d_ezmaxinvoicingsummaryexternaldetail_total;
    ezmaxinvoicingsummaryexternaldetail_response_compound_local_var->b_ezmaxinvoicingsummaryexternaldetail_adjustment = b_ezmaxinvoicingsummaryexternaldetail_adjustment;

    return ezmaxinvoicingsummaryexternaldetail_response_compound_local_var;
}


void ezmaxinvoicingsummaryexternaldetail_response_compound_free(ezmaxinvoicingsummaryexternaldetail_response_compound_t *ezmaxinvoicingsummaryexternaldetail_response_compound) {
    if(NULL == ezmaxinvoicingsummaryexternaldetail_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingsummaryexternaldetail_response_compound->s_ezmaxproduct_description_x) {
        free(ezmaxinvoicingsummaryexternaldetail_response_compound->s_ezmaxproduct_description_x);
        ezmaxinvoicingsummaryexternaldetail_response_compound->s_ezmaxproduct_description_x = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_countreal) {
        free(ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_countreal);
        ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_countreal = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_subtotal) {
        free(ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_subtotal);
        ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_subtotal = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_rebate) {
        free(ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_rebate);
        ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_rebate = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_total) {
        free(ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_total);
        ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_total = NULL;
    }
    free(ezmaxinvoicingsummaryexternaldetail_response_compound);
}

cJSON *ezmaxinvoicingsummaryexternaldetail_response_compound_convertToJSON(ezmaxinvoicingsummaryexternaldetail_response_compound_t *ezmaxinvoicingsummaryexternaldetail_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingsummaryexternaldetail_response_compound->pki_ezmaxinvoicingsummaryexternaldetail_id
    if(ezmaxinvoicingsummaryexternaldetail_response_compound->pki_ezmaxinvoicingsummaryexternaldetail_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingsummaryexternaldetailID", ezmaxinvoicingsummaryexternaldetail_response_compound->pki_ezmaxinvoicingsummaryexternaldetail_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryexternaldetail_response_compound->fki_ezmaxinvoicingsummaryexternal_id
    if(ezmaxinvoicingsummaryexternaldetail_response_compound->fki_ezmaxinvoicingsummaryexternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingsummaryexternalID", ezmaxinvoicingsummaryexternaldetail_response_compound->fki_ezmaxinvoicingsummaryexternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryexternaldetail_response_compound->fki_ezmaxproduct_id
    if (!ezmaxinvoicingsummaryexternaldetail_response_compound->fki_ezmaxproduct_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxproductID", ezmaxinvoicingsummaryexternaldetail_response_compound->fki_ezmaxproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingsummaryexternaldetail_response_compound->s_ezmaxproduct_description_x
    if (!ezmaxinvoicingsummaryexternaldetail_response_compound->s_ezmaxproduct_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxproductDescriptionX", ezmaxinvoicingsummaryexternaldetail_response_compound->s_ezmaxproduct_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_countreal
    if (!ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_countreal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryexternaldetailCountreal", ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_countreal) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_subtotal
    if (!ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_subtotal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryexternaldetailSubtotal", ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_subtotal) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_rebate
    if (!ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_rebate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryexternaldetailRebate", ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_rebate) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_total
    if (!ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_total) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryexternaldetailTotal", ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_total) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternaldetail_response_compound->b_ezmaxinvoicingsummaryexternaldetail_adjustment
    if (!ezmaxinvoicingsummaryexternaldetail_response_compound->b_ezmaxinvoicingsummaryexternaldetail_adjustment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingsummaryexternaldetailAdjustment", ezmaxinvoicingsummaryexternaldetail_response_compound->b_ezmaxinvoicingsummaryexternaldetail_adjustment) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingsummaryexternaldetail_response_compound_t *ezmaxinvoicingsummaryexternaldetail_response_compound_parseFromJSON(cJSON *ezmaxinvoicingsummaryexternaldetail_response_compoundJSON){

    ezmaxinvoicingsummaryexternaldetail_response_compound_t *ezmaxinvoicingsummaryexternaldetail_response_compound_local_var = NULL;

    // ezmaxinvoicingsummaryexternaldetail_response_compound->pki_ezmaxinvoicingsummaryexternaldetail_id
    cJSON *pki_ezmaxinvoicingsummaryexternaldetail_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_response_compoundJSON, "pkiEzmaxinvoicingsummaryexternaldetailID");
    if (pki_ezmaxinvoicingsummaryexternaldetail_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingsummaryexternaldetail_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryexternaldetail_response_compound->fki_ezmaxinvoicingsummaryexternal_id
    cJSON *fki_ezmaxinvoicingsummaryexternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_response_compoundJSON, "fkiEzmaxinvoicingsummaryexternalID");
    if (fki_ezmaxinvoicingsummaryexternal_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicingsummaryexternal_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryexternaldetail_response_compound->fki_ezmaxproduct_id
    cJSON *fki_ezmaxproduct_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_response_compoundJSON, "fkiEzmaxproductID");
    if (!fki_ezmaxproduct_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezmaxproduct_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingsummaryexternaldetail_response_compound->s_ezmaxproduct_description_x
    cJSON *s_ezmaxproduct_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_response_compoundJSON, "sEzmaxproductDescriptionX");
    if (!s_ezmaxproduct_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxproduct_description_x))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_countreal
    cJSON *d_ezmaxinvoicingsummaryexternaldetail_countreal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_response_compoundJSON, "dEzmaxinvoicingsummaryexternaldetailCountreal");
    if (!d_ezmaxinvoicingsummaryexternaldetail_countreal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryexternaldetail_countreal))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_subtotal
    cJSON *d_ezmaxinvoicingsummaryexternaldetail_subtotal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_response_compoundJSON, "dEzmaxinvoicingsummaryexternaldetailSubtotal");
    if (!d_ezmaxinvoicingsummaryexternaldetail_subtotal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryexternaldetail_subtotal))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_rebate
    cJSON *d_ezmaxinvoicingsummaryexternaldetail_rebate = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_response_compoundJSON, "dEzmaxinvoicingsummaryexternaldetailRebate");
    if (!d_ezmaxinvoicingsummaryexternaldetail_rebate) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryexternaldetail_rebate))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryexternaldetail_response_compound->d_ezmaxinvoicingsummaryexternaldetail_total
    cJSON *d_ezmaxinvoicingsummaryexternaldetail_total = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_response_compoundJSON, "dEzmaxinvoicingsummaryexternaldetailTotal");
    if (!d_ezmaxinvoicingsummaryexternaldetail_total) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryexternaldetail_total))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryexternaldetail_response_compound->b_ezmaxinvoicingsummaryexternaldetail_adjustment
    cJSON *b_ezmaxinvoicingsummaryexternaldetail_adjustment = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_response_compoundJSON, "bEzmaxinvoicingsummaryexternaldetailAdjustment");
    if (!b_ezmaxinvoicingsummaryexternaldetail_adjustment) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicingsummaryexternaldetail_adjustment))
    {
    goto end; //Bool
    }


    ezmaxinvoicingsummaryexternaldetail_response_compound_local_var = ezmaxinvoicingsummaryexternaldetail_response_compound_create (
        pki_ezmaxinvoicingsummaryexternaldetail_id ? pki_ezmaxinvoicingsummaryexternaldetail_id->valuedouble : 0,
        fki_ezmaxinvoicingsummaryexternal_id ? fki_ezmaxinvoicingsummaryexternal_id->valuedouble : 0,
        fki_ezmaxproduct_id->valuedouble,
        strdup(s_ezmaxproduct_description_x->valuestring),
        strdup(d_ezmaxinvoicingsummaryexternaldetail_countreal->valuestring),
        strdup(d_ezmaxinvoicingsummaryexternaldetail_subtotal->valuestring),
        strdup(d_ezmaxinvoicingsummaryexternaldetail_rebate->valuestring),
        strdup(d_ezmaxinvoicingsummaryexternaldetail_total->valuestring),
        b_ezmaxinvoicingsummaryexternaldetail_adjustment->valueint
        );

    return ezmaxinvoicingsummaryexternaldetail_response_compound_local_var;
end:
    return NULL;

}
