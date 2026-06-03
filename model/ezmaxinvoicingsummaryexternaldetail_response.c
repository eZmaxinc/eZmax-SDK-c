#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingsummaryexternaldetail_response.h"



static ezmaxinvoicingsummaryexternaldetail_response_t *ezmaxinvoicingsummaryexternaldetail_response_create_internal(
    int *pki_ezmaxinvoicingsummaryexternaldetail_id,
    int *fki_ezmaxinvoicingsummaryexternal_id,
    int *fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    char *d_ezmaxinvoicingsummaryexternaldetail_countreal,
    char *d_ezmaxinvoicingsummaryexternaldetail_subtotal,
    char *d_ezmaxinvoicingsummaryexternaldetail_rebate,
    char *d_ezmaxinvoicingsummaryexternaldetail_total,
    int *b_ezmaxinvoicingsummaryexternaldetail_adjustment,
    char *t_ezmaxproduct_help_x
    ) {
    ezmaxinvoicingsummaryexternaldetail_response_t *ezmaxinvoicingsummaryexternaldetail_response_local_var = malloc(sizeof(ezmaxinvoicingsummaryexternaldetail_response_t));
    if (!ezmaxinvoicingsummaryexternaldetail_response_local_var) {
        return NULL;
    }
    memset(ezmaxinvoicingsummaryexternaldetail_response_local_var, 0, sizeof(ezmaxinvoicingsummaryexternaldetail_response_t));
    ezmaxinvoicingsummaryexternaldetail_response_local_var->_library_owned = 1;
    ezmaxinvoicingsummaryexternaldetail_response_local_var->pki_ezmaxinvoicingsummaryexternaldetail_id = pki_ezmaxinvoicingsummaryexternaldetail_id;
    ezmaxinvoicingsummaryexternaldetail_response_local_var->fki_ezmaxinvoicingsummaryexternal_id = fki_ezmaxinvoicingsummaryexternal_id;
    ezmaxinvoicingsummaryexternaldetail_response_local_var->fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    ezmaxinvoicingsummaryexternaldetail_response_local_var->s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    ezmaxinvoicingsummaryexternaldetail_response_local_var->d_ezmaxinvoicingsummaryexternaldetail_countreal = d_ezmaxinvoicingsummaryexternaldetail_countreal;
    ezmaxinvoicingsummaryexternaldetail_response_local_var->d_ezmaxinvoicingsummaryexternaldetail_subtotal = d_ezmaxinvoicingsummaryexternaldetail_subtotal;
    ezmaxinvoicingsummaryexternaldetail_response_local_var->d_ezmaxinvoicingsummaryexternaldetail_rebate = d_ezmaxinvoicingsummaryexternaldetail_rebate;
    ezmaxinvoicingsummaryexternaldetail_response_local_var->d_ezmaxinvoicingsummaryexternaldetail_total = d_ezmaxinvoicingsummaryexternaldetail_total;
    ezmaxinvoicingsummaryexternaldetail_response_local_var->b_ezmaxinvoicingsummaryexternaldetail_adjustment = b_ezmaxinvoicingsummaryexternaldetail_adjustment;
    ezmaxinvoicingsummaryexternaldetail_response_local_var->t_ezmaxproduct_help_x = t_ezmaxproduct_help_x;
    return ezmaxinvoicingsummaryexternaldetail_response_local_var;
}

__attribute__((deprecated)) ezmaxinvoicingsummaryexternaldetail_response_t *ezmaxinvoicingsummaryexternaldetail_response_create(
    int *pki_ezmaxinvoicingsummaryexternaldetail_id,
    int *fki_ezmaxinvoicingsummaryexternal_id,
    int *fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    char *d_ezmaxinvoicingsummaryexternaldetail_countreal,
    char *d_ezmaxinvoicingsummaryexternaldetail_subtotal,
    char *d_ezmaxinvoicingsummaryexternaldetail_rebate,
    char *d_ezmaxinvoicingsummaryexternaldetail_total,
    int *b_ezmaxinvoicingsummaryexternaldetail_adjustment,
    char *t_ezmaxproduct_help_x
    ) {
    int *pki_ezmaxinvoicingsummaryexternaldetail_id_copy = NULL;
    if (pki_ezmaxinvoicingsummaryexternaldetail_id) {
        pki_ezmaxinvoicingsummaryexternaldetail_id_copy = malloc(sizeof(int));
        if (pki_ezmaxinvoicingsummaryexternaldetail_id_copy) *pki_ezmaxinvoicingsummaryexternaldetail_id_copy = *pki_ezmaxinvoicingsummaryexternaldetail_id;
    }
    int *fki_ezmaxinvoicingsummaryexternal_id_copy = NULL;
    if (fki_ezmaxinvoicingsummaryexternal_id) {
        fki_ezmaxinvoicingsummaryexternal_id_copy = malloc(sizeof(int));
        if (fki_ezmaxinvoicingsummaryexternal_id_copy) *fki_ezmaxinvoicingsummaryexternal_id_copy = *fki_ezmaxinvoicingsummaryexternal_id;
    }
    int *fki_ezmaxproduct_id_copy = NULL;
    if (fki_ezmaxproduct_id) {
        fki_ezmaxproduct_id_copy = malloc(sizeof(int));
        if (fki_ezmaxproduct_id_copy) *fki_ezmaxproduct_id_copy = *fki_ezmaxproduct_id;
    }
    int *b_ezmaxinvoicingsummaryexternaldetail_adjustment_copy = NULL;
    if (b_ezmaxinvoicingsummaryexternaldetail_adjustment) {
        b_ezmaxinvoicingsummaryexternaldetail_adjustment_copy = malloc(sizeof(int));
        if (b_ezmaxinvoicingsummaryexternaldetail_adjustment_copy) *b_ezmaxinvoicingsummaryexternaldetail_adjustment_copy = *b_ezmaxinvoicingsummaryexternaldetail_adjustment;
    }
    ezmaxinvoicingsummaryexternaldetail_response_t *result = ezmaxinvoicingsummaryexternaldetail_response_create_internal (
        pki_ezmaxinvoicingsummaryexternaldetail_id_copy,
        fki_ezmaxinvoicingsummaryexternal_id_copy,
        fki_ezmaxproduct_id_copy,
        s_ezmaxproduct_description_x,
        d_ezmaxinvoicingsummaryexternaldetail_countreal,
        d_ezmaxinvoicingsummaryexternaldetail_subtotal,
        d_ezmaxinvoicingsummaryexternaldetail_rebate,
        d_ezmaxinvoicingsummaryexternaldetail_total,
        b_ezmaxinvoicingsummaryexternaldetail_adjustment_copy,
        t_ezmaxproduct_help_x
        );
    if (!result) {
        free(pki_ezmaxinvoicingsummaryexternaldetail_id_copy);
        free(fki_ezmaxinvoicingsummaryexternal_id_copy);
        free(fki_ezmaxproduct_id_copy);
        free(b_ezmaxinvoicingsummaryexternaldetail_adjustment_copy);
    }
    return result;
}

void ezmaxinvoicingsummaryexternaldetail_response_free(ezmaxinvoicingsummaryexternaldetail_response_t *ezmaxinvoicingsummaryexternaldetail_response) {
    if(NULL == ezmaxinvoicingsummaryexternaldetail_response){
        return ;
    }
    if(ezmaxinvoicingsummaryexternaldetail_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicingsummaryexternaldetail_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingsummaryexternaldetail_response->pki_ezmaxinvoicingsummaryexternaldetail_id) {
        free(ezmaxinvoicingsummaryexternaldetail_response->pki_ezmaxinvoicingsummaryexternaldetail_id);
        ezmaxinvoicingsummaryexternaldetail_response->pki_ezmaxinvoicingsummaryexternaldetail_id = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxinvoicingsummaryexternal_id) {
        free(ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxinvoicingsummaryexternal_id);
        ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxinvoicingsummaryexternal_id = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxproduct_id) {
        free(ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxproduct_id);
        ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxproduct_id = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response->s_ezmaxproduct_description_x) {
        free(ezmaxinvoicingsummaryexternaldetail_response->s_ezmaxproduct_description_x);
        ezmaxinvoicingsummaryexternaldetail_response->s_ezmaxproduct_description_x = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_countreal) {
        free(ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_countreal);
        ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_countreal = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_subtotal) {
        free(ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_subtotal);
        ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_subtotal = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_rebate) {
        free(ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_rebate);
        ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_rebate = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_total) {
        free(ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_total);
        ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_total = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response->b_ezmaxinvoicingsummaryexternaldetail_adjustment) {
        free(ezmaxinvoicingsummaryexternaldetail_response->b_ezmaxinvoicingsummaryexternaldetail_adjustment);
        ezmaxinvoicingsummaryexternaldetail_response->b_ezmaxinvoicingsummaryexternaldetail_adjustment = NULL;
    }
    if (ezmaxinvoicingsummaryexternaldetail_response->t_ezmaxproduct_help_x) {
        free(ezmaxinvoicingsummaryexternaldetail_response->t_ezmaxproduct_help_x);
        ezmaxinvoicingsummaryexternaldetail_response->t_ezmaxproduct_help_x = NULL;
    }
    free(ezmaxinvoicingsummaryexternaldetail_response);
}

cJSON *ezmaxinvoicingsummaryexternaldetail_response_convertToJSON(ezmaxinvoicingsummaryexternaldetail_response_t *ezmaxinvoicingsummaryexternaldetail_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingsummaryexternaldetail_response->pki_ezmaxinvoicingsummaryexternaldetail_id
    if(ezmaxinvoicingsummaryexternaldetail_response->pki_ezmaxinvoicingsummaryexternaldetail_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingsummaryexternaldetailID", *ezmaxinvoicingsummaryexternaldetail_response->pki_ezmaxinvoicingsummaryexternaldetail_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxinvoicingsummaryexternal_id
    if(ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxinvoicingsummaryexternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingsummaryexternalID", *ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxinvoicingsummaryexternal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxproduct_id
    if (!ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxproduct_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxproductID", *ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingsummaryexternaldetail_response->s_ezmaxproduct_description_x
    if (!ezmaxinvoicingsummaryexternaldetail_response->s_ezmaxproduct_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxproductDescriptionX", ezmaxinvoicingsummaryexternaldetail_response->s_ezmaxproduct_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_countreal
    if (!ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_countreal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryexternaldetailCountreal", ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_countreal) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_subtotal
    if (!ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_subtotal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryexternaldetailSubtotal", ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_subtotal) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_rebate
    if (!ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_rebate) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryexternaldetailRebate", ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_rebate) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_total
    if (!ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_total) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryexternaldetailTotal", ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_total) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryexternaldetail_response->b_ezmaxinvoicingsummaryexternaldetail_adjustment
    if (!ezmaxinvoicingsummaryexternaldetail_response->b_ezmaxinvoicingsummaryexternaldetail_adjustment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingsummaryexternaldetailAdjustment", *ezmaxinvoicingsummaryexternaldetail_response->b_ezmaxinvoicingsummaryexternaldetail_adjustment) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicingsummaryexternaldetail_response->t_ezmaxproduct_help_x
    if (!ezmaxinvoicingsummaryexternaldetail_response->t_ezmaxproduct_help_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzmaxproductHelpX", ezmaxinvoicingsummaryexternaldetail_response->t_ezmaxproduct_help_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingsummaryexternaldetail_response_t *ezmaxinvoicingsummaryexternaldetail_response_parseFromJSON(cJSON *ezmaxinvoicingsummaryexternaldetail_responseJSON){

    ezmaxinvoicingsummaryexternaldetail_response_t *ezmaxinvoicingsummaryexternaldetail_response_local_var = NULL;

    // define the local variable for ezmaxinvoicingsummaryexternaldetail_response->pki_ezmaxinvoicingsummaryexternaldetail_id
    int *pki_ezmaxinvoicingsummaryexternaldetail_id_local_var = NULL;

    // define the local variable for ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxinvoicingsummaryexternal_id
    int *fki_ezmaxinvoicingsummaryexternal_id_local_var = NULL;

    // define the local variable for ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxproduct_id
    int *fki_ezmaxproduct_id_local_var = NULL;

    char *s_ezmaxproduct_description_x_local_str = NULL;

    char *d_ezmaxinvoicingsummaryexternaldetail_countreal_local_str = NULL;

    char *d_ezmaxinvoicingsummaryexternaldetail_subtotal_local_str = NULL;

    char *d_ezmaxinvoicingsummaryexternaldetail_rebate_local_str = NULL;

    char *d_ezmaxinvoicingsummaryexternaldetail_total_local_str = NULL;

    // define the local variable for ezmaxinvoicingsummaryexternaldetail_response->b_ezmaxinvoicingsummaryexternaldetail_adjustment
    int *b_ezmaxinvoicingsummaryexternaldetail_adjustment_local_var = NULL;

    char *t_ezmaxproduct_help_x_local_str = NULL;

    // ezmaxinvoicingsummaryexternaldetail_response->pki_ezmaxinvoicingsummaryexternaldetail_id
    cJSON *pki_ezmaxinvoicingsummaryexternaldetail_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_responseJSON, "pkiEzmaxinvoicingsummaryexternaldetailID");
    if (cJSON_IsNull(pki_ezmaxinvoicingsummaryexternaldetail_id)) {
        pki_ezmaxinvoicingsummaryexternaldetail_id = NULL;
    }
    if (pki_ezmaxinvoicingsummaryexternaldetail_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingsummaryexternaldetail_id))
    {
    goto end; //Numeric
    }
    pki_ezmaxinvoicingsummaryexternaldetail_id_local_var = malloc(sizeof(int));
    if(!pki_ezmaxinvoicingsummaryexternaldetail_id_local_var)
    {
        goto end;
    }
    *pki_ezmaxinvoicingsummaryexternaldetail_id_local_var = pki_ezmaxinvoicingsummaryexternaldetail_id->valuedouble;
    }

    // ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxinvoicingsummaryexternal_id
    cJSON *fki_ezmaxinvoicingsummaryexternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_responseJSON, "fkiEzmaxinvoicingsummaryexternalID");
    if (cJSON_IsNull(fki_ezmaxinvoicingsummaryexternal_id)) {
        fki_ezmaxinvoicingsummaryexternal_id = NULL;
    }
    if (fki_ezmaxinvoicingsummaryexternal_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicingsummaryexternal_id))
    {
    goto end; //Numeric
    }
    fki_ezmaxinvoicingsummaryexternal_id_local_var = malloc(sizeof(int));
    if(!fki_ezmaxinvoicingsummaryexternal_id_local_var)
    {
        goto end;
    }
    *fki_ezmaxinvoicingsummaryexternal_id_local_var = fki_ezmaxinvoicingsummaryexternal_id->valuedouble;
    }

    // ezmaxinvoicingsummaryexternaldetail_response->fki_ezmaxproduct_id
    cJSON *fki_ezmaxproduct_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_responseJSON, "fkiEzmaxproductID");
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
    fki_ezmaxproduct_id_local_var = malloc(sizeof(int));
    if(!fki_ezmaxproduct_id_local_var)
    {
        goto end;
    }
    *fki_ezmaxproduct_id_local_var = fki_ezmaxproduct_id->valuedouble;

    // ezmaxinvoicingsummaryexternaldetail_response->s_ezmaxproduct_description_x
    cJSON *s_ezmaxproduct_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_responseJSON, "sEzmaxproductDescriptionX");
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

    // ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_countreal
    cJSON *d_ezmaxinvoicingsummaryexternaldetail_countreal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_responseJSON, "dEzmaxinvoicingsummaryexternaldetailCountreal");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryexternaldetail_countreal)) {
        d_ezmaxinvoicingsummaryexternaldetail_countreal = NULL;
    }
    if (!d_ezmaxinvoicingsummaryexternaldetail_countreal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryexternaldetail_countreal))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_subtotal
    cJSON *d_ezmaxinvoicingsummaryexternaldetail_subtotal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_responseJSON, "dEzmaxinvoicingsummaryexternaldetailSubtotal");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryexternaldetail_subtotal)) {
        d_ezmaxinvoicingsummaryexternaldetail_subtotal = NULL;
    }
    if (!d_ezmaxinvoicingsummaryexternaldetail_subtotal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryexternaldetail_subtotal))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_rebate
    cJSON *d_ezmaxinvoicingsummaryexternaldetail_rebate = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_responseJSON, "dEzmaxinvoicingsummaryexternaldetailRebate");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryexternaldetail_rebate)) {
        d_ezmaxinvoicingsummaryexternaldetail_rebate = NULL;
    }
    if (!d_ezmaxinvoicingsummaryexternaldetail_rebate) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryexternaldetail_rebate))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryexternaldetail_response->d_ezmaxinvoicingsummaryexternaldetail_total
    cJSON *d_ezmaxinvoicingsummaryexternaldetail_total = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_responseJSON, "dEzmaxinvoicingsummaryexternaldetailTotal");
    if (cJSON_IsNull(d_ezmaxinvoicingsummaryexternaldetail_total)) {
        d_ezmaxinvoicingsummaryexternaldetail_total = NULL;
    }
    if (!d_ezmaxinvoicingsummaryexternaldetail_total) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryexternaldetail_total))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryexternaldetail_response->b_ezmaxinvoicingsummaryexternaldetail_adjustment
    cJSON *b_ezmaxinvoicingsummaryexternaldetail_adjustment = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_responseJSON, "bEzmaxinvoicingsummaryexternaldetailAdjustment");
    if (cJSON_IsNull(b_ezmaxinvoicingsummaryexternaldetail_adjustment)) {
        b_ezmaxinvoicingsummaryexternaldetail_adjustment = NULL;
    }
    if (!b_ezmaxinvoicingsummaryexternaldetail_adjustment) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicingsummaryexternaldetail_adjustment))
    {
    goto end; //Bool
    }
    b_ezmaxinvoicingsummaryexternaldetail_adjustment_local_var = malloc(sizeof(int));
    if(!b_ezmaxinvoicingsummaryexternaldetail_adjustment_local_var)
    {
        goto end;
    }
    *b_ezmaxinvoicingsummaryexternaldetail_adjustment_local_var = b_ezmaxinvoicingsummaryexternaldetail_adjustment->valueint;

    // ezmaxinvoicingsummaryexternaldetail_response->t_ezmaxproduct_help_x
    cJSON *t_ezmaxproduct_help_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryexternaldetail_responseJSON, "tEzmaxproductHelpX");
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


    if (s_ezmaxproduct_description_x && !cJSON_IsNull(s_ezmaxproduct_description_x)) s_ezmaxproduct_description_x_local_str = strdup(s_ezmaxproduct_description_x->valuestring);
    if (d_ezmaxinvoicingsummaryexternaldetail_countreal && !cJSON_IsNull(d_ezmaxinvoicingsummaryexternaldetail_countreal)) d_ezmaxinvoicingsummaryexternaldetail_countreal_local_str = strdup(d_ezmaxinvoicingsummaryexternaldetail_countreal->valuestring);
    if (d_ezmaxinvoicingsummaryexternaldetail_subtotal && !cJSON_IsNull(d_ezmaxinvoicingsummaryexternaldetail_subtotal)) d_ezmaxinvoicingsummaryexternaldetail_subtotal_local_str = strdup(d_ezmaxinvoicingsummaryexternaldetail_subtotal->valuestring);
    if (d_ezmaxinvoicingsummaryexternaldetail_rebate && !cJSON_IsNull(d_ezmaxinvoicingsummaryexternaldetail_rebate)) d_ezmaxinvoicingsummaryexternaldetail_rebate_local_str = strdup(d_ezmaxinvoicingsummaryexternaldetail_rebate->valuestring);
    if (d_ezmaxinvoicingsummaryexternaldetail_total && !cJSON_IsNull(d_ezmaxinvoicingsummaryexternaldetail_total)) d_ezmaxinvoicingsummaryexternaldetail_total_local_str = strdup(d_ezmaxinvoicingsummaryexternaldetail_total->valuestring);
    if (t_ezmaxproduct_help_x && !cJSON_IsNull(t_ezmaxproduct_help_x)) t_ezmaxproduct_help_x_local_str = strdup(t_ezmaxproduct_help_x->valuestring);

    ezmaxinvoicingsummaryexternaldetail_response_local_var = ezmaxinvoicingsummaryexternaldetail_response_create_internal (
        pki_ezmaxinvoicingsummaryexternaldetail_id_local_var,
        fki_ezmaxinvoicingsummaryexternal_id_local_var,
        fki_ezmaxproduct_id_local_var,
        s_ezmaxproduct_description_x_local_str,
        d_ezmaxinvoicingsummaryexternaldetail_countreal_local_str,
        d_ezmaxinvoicingsummaryexternaldetail_subtotal_local_str,
        d_ezmaxinvoicingsummaryexternaldetail_rebate_local_str,
        d_ezmaxinvoicingsummaryexternaldetail_total_local_str,
        b_ezmaxinvoicingsummaryexternaldetail_adjustment_local_var,
        t_ezmaxproduct_help_x_local_str
        );

    if (!ezmaxinvoicingsummaryexternaldetail_response_local_var) {
        goto end;
    }

    return ezmaxinvoicingsummaryexternaldetail_response_local_var;
end:
    if (pki_ezmaxinvoicingsummaryexternaldetail_id_local_var) {
        free(pki_ezmaxinvoicingsummaryexternaldetail_id_local_var);
        pki_ezmaxinvoicingsummaryexternaldetail_id_local_var = NULL;
    }
    if (fki_ezmaxinvoicingsummaryexternal_id_local_var) {
        free(fki_ezmaxinvoicingsummaryexternal_id_local_var);
        fki_ezmaxinvoicingsummaryexternal_id_local_var = NULL;
    }
    if (fki_ezmaxproduct_id_local_var) {
        free(fki_ezmaxproduct_id_local_var);
        fki_ezmaxproduct_id_local_var = NULL;
    }
    if (s_ezmaxproduct_description_x_local_str) {
        free(s_ezmaxproduct_description_x_local_str);
        s_ezmaxproduct_description_x_local_str = NULL;
    }
    if (d_ezmaxinvoicingsummaryexternaldetail_countreal_local_str) {
        free(d_ezmaxinvoicingsummaryexternaldetail_countreal_local_str);
        d_ezmaxinvoicingsummaryexternaldetail_countreal_local_str = NULL;
    }
    if (d_ezmaxinvoicingsummaryexternaldetail_subtotal_local_str) {
        free(d_ezmaxinvoicingsummaryexternaldetail_subtotal_local_str);
        d_ezmaxinvoicingsummaryexternaldetail_subtotal_local_str = NULL;
    }
    if (d_ezmaxinvoicingsummaryexternaldetail_rebate_local_str) {
        free(d_ezmaxinvoicingsummaryexternaldetail_rebate_local_str);
        d_ezmaxinvoicingsummaryexternaldetail_rebate_local_str = NULL;
    }
    if (d_ezmaxinvoicingsummaryexternaldetail_total_local_str) {
        free(d_ezmaxinvoicingsummaryexternaldetail_total_local_str);
        d_ezmaxinvoicingsummaryexternaldetail_total_local_str = NULL;
    }
    if (b_ezmaxinvoicingsummaryexternaldetail_adjustment_local_var) {
        free(b_ezmaxinvoicingsummaryexternaldetail_adjustment_local_var);
        b_ezmaxinvoicingsummaryexternaldetail_adjustment_local_var = NULL;
    }
    if (t_ezmaxproduct_help_x_local_str) {
        free(t_ezmaxproduct_help_x_local_str);
        t_ezmaxproduct_help_x_local_str = NULL;
    }
    return NULL;

}
