#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buyercontract_response.h"



static buyercontract_response_t *buyercontract_response_create_internal(
    int *pki_buyercontract_id,
    int *fki_inscriptiontype_id,
    ezmax_api_definition__full_field_e_buyercontract_step__e e_buyercontract_step,
    char *d_buyercontract_minimumprice,
    char *d_buyercontract_maximumprice,
    ezmax_api_definition__full_field_e_buyercontract_type__e e_buyercontract_type,
    char *s_buyercontract_contract,
    char *dt_buyercontract_date,
    char *dt_buyercontract_expirationdate,
    char *d_buyercontract_remuneration,
    ezmax_api_definition__full_field_e_buyercontract_remunerationtype__e e_buyercontract_remunerationtype,
    int *b_buyercontract_litigation,
    int *b_buyercontract_isactive
    ) {
    buyercontract_response_t *buyercontract_response_local_var = malloc(sizeof(buyercontract_response_t));
    if (!buyercontract_response_local_var) {
        return NULL;
    }
    memset(buyercontract_response_local_var, 0, sizeof(buyercontract_response_t));
    buyercontract_response_local_var->_library_owned = 1;
    buyercontract_response_local_var->pki_buyercontract_id = pki_buyercontract_id;
    buyercontract_response_local_var->fki_inscriptiontype_id = fki_inscriptiontype_id;
    buyercontract_response_local_var->e_buyercontract_step = e_buyercontract_step;
    buyercontract_response_local_var->d_buyercontract_minimumprice = d_buyercontract_minimumprice;
    buyercontract_response_local_var->d_buyercontract_maximumprice = d_buyercontract_maximumprice;
    buyercontract_response_local_var->e_buyercontract_type = e_buyercontract_type;
    buyercontract_response_local_var->s_buyercontract_contract = s_buyercontract_contract;
    buyercontract_response_local_var->dt_buyercontract_date = dt_buyercontract_date;
    buyercontract_response_local_var->dt_buyercontract_expirationdate = dt_buyercontract_expirationdate;
    buyercontract_response_local_var->d_buyercontract_remuneration = d_buyercontract_remuneration;
    buyercontract_response_local_var->e_buyercontract_remunerationtype = e_buyercontract_remunerationtype;
    buyercontract_response_local_var->b_buyercontract_litigation = b_buyercontract_litigation;
    buyercontract_response_local_var->b_buyercontract_isactive = b_buyercontract_isactive;
    return buyercontract_response_local_var;
}

__attribute__((deprecated)) buyercontract_response_t *buyercontract_response_create(
    int *pki_buyercontract_id,
    int *fki_inscriptiontype_id,
    ezmax_api_definition__full_field_e_buyercontract_step__e e_buyercontract_step,
    char *d_buyercontract_minimumprice,
    char *d_buyercontract_maximumprice,
    ezmax_api_definition__full_field_e_buyercontract_type__e e_buyercontract_type,
    char *s_buyercontract_contract,
    char *dt_buyercontract_date,
    char *dt_buyercontract_expirationdate,
    char *d_buyercontract_remuneration,
    ezmax_api_definition__full_field_e_buyercontract_remunerationtype__e e_buyercontract_remunerationtype,
    int *b_buyercontract_litigation,
    int *b_buyercontract_isactive
    ) {
    int *pki_buyercontract_id_copy = NULL;
    if (pki_buyercontract_id) {
        pki_buyercontract_id_copy = malloc(sizeof(int));
        if (pki_buyercontract_id_copy) *pki_buyercontract_id_copy = *pki_buyercontract_id;
    }
    int *fki_inscriptiontype_id_copy = NULL;
    if (fki_inscriptiontype_id) {
        fki_inscriptiontype_id_copy = malloc(sizeof(int));
        if (fki_inscriptiontype_id_copy) *fki_inscriptiontype_id_copy = *fki_inscriptiontype_id;
    }
    int *b_buyercontract_litigation_copy = NULL;
    if (b_buyercontract_litigation) {
        b_buyercontract_litigation_copy = malloc(sizeof(int));
        if (b_buyercontract_litigation_copy) *b_buyercontract_litigation_copy = *b_buyercontract_litigation;
    }
    int *b_buyercontract_isactive_copy = NULL;
    if (b_buyercontract_isactive) {
        b_buyercontract_isactive_copy = malloc(sizeof(int));
        if (b_buyercontract_isactive_copy) *b_buyercontract_isactive_copy = *b_buyercontract_isactive;
    }
    buyercontract_response_t *result = buyercontract_response_create_internal (
        pki_buyercontract_id_copy,
        fki_inscriptiontype_id_copy,
        e_buyercontract_step,
        d_buyercontract_minimumprice,
        d_buyercontract_maximumprice,
        e_buyercontract_type,
        s_buyercontract_contract,
        dt_buyercontract_date,
        dt_buyercontract_expirationdate,
        d_buyercontract_remuneration,
        e_buyercontract_remunerationtype,
        b_buyercontract_litigation_copy,
        b_buyercontract_isactive_copy
        );
    if (!result) {
        free(pki_buyercontract_id_copy);
        free(fki_inscriptiontype_id_copy);
        free(b_buyercontract_litigation_copy);
        free(b_buyercontract_isactive_copy);
    }
    return result;
}

void buyercontract_response_free(buyercontract_response_t *buyercontract_response) {
    if(NULL == buyercontract_response){
        return ;
    }
    if(buyercontract_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "buyercontract_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (buyercontract_response->pki_buyercontract_id) {
        free(buyercontract_response->pki_buyercontract_id);
        buyercontract_response->pki_buyercontract_id = NULL;
    }
    if (buyercontract_response->fki_inscriptiontype_id) {
        free(buyercontract_response->fki_inscriptiontype_id);
        buyercontract_response->fki_inscriptiontype_id = NULL;
    }
    if (buyercontract_response->d_buyercontract_minimumprice) {
        free(buyercontract_response->d_buyercontract_minimumprice);
        buyercontract_response->d_buyercontract_minimumprice = NULL;
    }
    if (buyercontract_response->d_buyercontract_maximumprice) {
        free(buyercontract_response->d_buyercontract_maximumprice);
        buyercontract_response->d_buyercontract_maximumprice = NULL;
    }
    if (buyercontract_response->s_buyercontract_contract) {
        free(buyercontract_response->s_buyercontract_contract);
        buyercontract_response->s_buyercontract_contract = NULL;
    }
    if (buyercontract_response->dt_buyercontract_date) {
        free(buyercontract_response->dt_buyercontract_date);
        buyercontract_response->dt_buyercontract_date = NULL;
    }
    if (buyercontract_response->dt_buyercontract_expirationdate) {
        free(buyercontract_response->dt_buyercontract_expirationdate);
        buyercontract_response->dt_buyercontract_expirationdate = NULL;
    }
    if (buyercontract_response->d_buyercontract_remuneration) {
        free(buyercontract_response->d_buyercontract_remuneration);
        buyercontract_response->d_buyercontract_remuneration = NULL;
    }
    if (buyercontract_response->b_buyercontract_litigation) {
        free(buyercontract_response->b_buyercontract_litigation);
        buyercontract_response->b_buyercontract_litigation = NULL;
    }
    if (buyercontract_response->b_buyercontract_isactive) {
        free(buyercontract_response->b_buyercontract_isactive);
        buyercontract_response->b_buyercontract_isactive = NULL;
    }
    free(buyercontract_response);
}

cJSON *buyercontract_response_convertToJSON(buyercontract_response_t *buyercontract_response) {
    cJSON *item = cJSON_CreateObject();

    // buyercontract_response->pki_buyercontract_id
    if (!buyercontract_response->pki_buyercontract_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBuyercontractID", *buyercontract_response->pki_buyercontract_id) == NULL) {
    goto fail; //Numeric
    }


    // buyercontract_response->fki_inscriptiontype_id
    if (!buyercontract_response->fki_inscriptiontype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiInscriptiontypeID", *buyercontract_response->fki_inscriptiontype_id) == NULL) {
    goto fail; //Numeric
    }


    // buyercontract_response->e_buyercontract_step
    if (ezmax_api_definition__full_field_e_buyercontract_step__NULL == buyercontract_response->e_buyercontract_step) {
        goto fail;
    }
    cJSON *e_buyercontract_step_local_JSON = field_e_buyercontract_step_convertToJSON(buyercontract_response->e_buyercontract_step);
    if(e_buyercontract_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eBuyercontractStep", e_buyercontract_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // buyercontract_response->d_buyercontract_minimumprice
    if (!buyercontract_response->d_buyercontract_minimumprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dBuyercontractMinimumprice", buyercontract_response->d_buyercontract_minimumprice) == NULL) {
    goto fail; //String
    }


    // buyercontract_response->d_buyercontract_maximumprice
    if (!buyercontract_response->d_buyercontract_maximumprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dBuyercontractMaximumprice", buyercontract_response->d_buyercontract_maximumprice) == NULL) {
    goto fail; //String
    }


    // buyercontract_response->e_buyercontract_type
    if (ezmax_api_definition__full_field_e_buyercontract_type__NULL == buyercontract_response->e_buyercontract_type) {
        goto fail;
    }
    cJSON *e_buyercontract_type_local_JSON = field_e_buyercontract_type_convertToJSON(buyercontract_response->e_buyercontract_type);
    if(e_buyercontract_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eBuyercontractType", e_buyercontract_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // buyercontract_response->s_buyercontract_contract
    if(buyercontract_response->s_buyercontract_contract) {
    if(cJSON_AddStringToObject(item, "sBuyercontractContract", buyercontract_response->s_buyercontract_contract) == NULL) {
    goto fail; //String
    }
    }


    // buyercontract_response->dt_buyercontract_date
    if (!buyercontract_response->dt_buyercontract_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtBuyercontractDate", buyercontract_response->dt_buyercontract_date) == NULL) {
    goto fail; //String
    }


    // buyercontract_response->dt_buyercontract_expirationdate
    if(buyercontract_response->dt_buyercontract_expirationdate) {
    if(cJSON_AddStringToObject(item, "dtBuyercontractExpirationdate", buyercontract_response->dt_buyercontract_expirationdate) == NULL) {
    goto fail; //String
    }
    }


    // buyercontract_response->d_buyercontract_remuneration
    if(buyercontract_response->d_buyercontract_remuneration) {
    if(cJSON_AddStringToObject(item, "dBuyercontractRemuneration", buyercontract_response->d_buyercontract_remuneration) == NULL) {
    goto fail; //String
    }
    }


    // buyercontract_response->e_buyercontract_remunerationtype
    if(buyercontract_response->e_buyercontract_remunerationtype != ezmax_api_definition__full_field_e_buyercontract_remunerationtype__NULL) {
    cJSON *e_buyercontract_remunerationtype_local_JSON = field_e_buyercontract_remunerationtype_convertToJSON(buyercontract_response->e_buyercontract_remunerationtype);
    if(e_buyercontract_remunerationtype_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eBuyercontractRemunerationtype", e_buyercontract_remunerationtype_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // buyercontract_response->b_buyercontract_litigation
    if(buyercontract_response->b_buyercontract_litigation) {
    if(cJSON_AddBoolToObject(item, "bBuyercontractLitigation", *buyercontract_response->b_buyercontract_litigation) == NULL) {
    goto fail; //Bool
    }
    }


    // buyercontract_response->b_buyercontract_isactive
    if (!buyercontract_response->b_buyercontract_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBuyercontractIsactive", *buyercontract_response->b_buyercontract_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

buyercontract_response_t *buyercontract_response_parseFromJSON(cJSON *buyercontract_responseJSON){

    buyercontract_response_t *buyercontract_response_local_var = NULL;

    // define the local variable for buyercontract_response->pki_buyercontract_id
    int *pki_buyercontract_id_local_var = NULL;

    // define the local variable for buyercontract_response->fki_inscriptiontype_id
    int *fki_inscriptiontype_id_local_var = NULL;

    // define the local variable for buyercontract_response->e_buyercontract_step
    ezmax_api_definition__full_field_e_buyercontract_step__e e_buyercontract_step_local_nonprim = 0;

    char *d_buyercontract_minimumprice_local_str = NULL;

    char *d_buyercontract_maximumprice_local_str = NULL;

    // define the local variable for buyercontract_response->e_buyercontract_type
    ezmax_api_definition__full_field_e_buyercontract_type__e e_buyercontract_type_local_nonprim = 0;

    char *s_buyercontract_contract_local_str = NULL;

    char *dt_buyercontract_date_local_str = NULL;

    char *dt_buyercontract_expirationdate_local_str = NULL;

    char *d_buyercontract_remuneration_local_str = NULL;

    // define the local variable for buyercontract_response->e_buyercontract_remunerationtype
    ezmax_api_definition__full_field_e_buyercontract_remunerationtype__e e_buyercontract_remunerationtype_local_nonprim = 0;

    // define the local variable for buyercontract_response->b_buyercontract_litigation
    int *b_buyercontract_litigation_local_var = NULL;

    // define the local variable for buyercontract_response->b_buyercontract_isactive
    int *b_buyercontract_isactive_local_var = NULL;

    // buyercontract_response->pki_buyercontract_id
    cJSON *pki_buyercontract_id = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "pkiBuyercontractID");
    if (cJSON_IsNull(pki_buyercontract_id)) {
        pki_buyercontract_id = NULL;
    }
    if (!pki_buyercontract_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_buyercontract_id))
    {
    goto end; //Numeric
    }
    pki_buyercontract_id_local_var = malloc(sizeof(int));
    if(!pki_buyercontract_id_local_var)
    {
        goto end;
    }
    *pki_buyercontract_id_local_var = pki_buyercontract_id->valuedouble;

    // buyercontract_response->fki_inscriptiontype_id
    cJSON *fki_inscriptiontype_id = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "fkiInscriptiontypeID");
    if (cJSON_IsNull(fki_inscriptiontype_id)) {
        fki_inscriptiontype_id = NULL;
    }
    if (!fki_inscriptiontype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_inscriptiontype_id))
    {
    goto end; //Numeric
    }
    fki_inscriptiontype_id_local_var = malloc(sizeof(int));
    if(!fki_inscriptiontype_id_local_var)
    {
        goto end;
    }
    *fki_inscriptiontype_id_local_var = fki_inscriptiontype_id->valuedouble;

    // buyercontract_response->e_buyercontract_step
    cJSON *e_buyercontract_step = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "eBuyercontractStep");
    if (cJSON_IsNull(e_buyercontract_step)) {
        e_buyercontract_step = NULL;
    }
    if (!e_buyercontract_step) {
        goto end;
    }

    
    e_buyercontract_step_local_nonprim = field_e_buyercontract_step_parseFromJSON(e_buyercontract_step); //custom

    // buyercontract_response->d_buyercontract_minimumprice
    cJSON *d_buyercontract_minimumprice = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "dBuyercontractMinimumprice");
    if (cJSON_IsNull(d_buyercontract_minimumprice)) {
        d_buyercontract_minimumprice = NULL;
    }
    if (!d_buyercontract_minimumprice) {
        goto end;
    }

    
    if(!cJSON_IsString(d_buyercontract_minimumprice))
    {
    goto end; //String
    }

    // buyercontract_response->d_buyercontract_maximumprice
    cJSON *d_buyercontract_maximumprice = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "dBuyercontractMaximumprice");
    if (cJSON_IsNull(d_buyercontract_maximumprice)) {
        d_buyercontract_maximumprice = NULL;
    }
    if (!d_buyercontract_maximumprice) {
        goto end;
    }

    
    if(!cJSON_IsString(d_buyercontract_maximumprice))
    {
    goto end; //String
    }

    // buyercontract_response->e_buyercontract_type
    cJSON *e_buyercontract_type = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "eBuyercontractType");
    if (cJSON_IsNull(e_buyercontract_type)) {
        e_buyercontract_type = NULL;
    }
    if (!e_buyercontract_type) {
        goto end;
    }

    
    e_buyercontract_type_local_nonprim = field_e_buyercontract_type_parseFromJSON(e_buyercontract_type); //custom

    // buyercontract_response->s_buyercontract_contract
    cJSON *s_buyercontract_contract = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "sBuyercontractContract");
    if (cJSON_IsNull(s_buyercontract_contract)) {
        s_buyercontract_contract = NULL;
    }
    if (s_buyercontract_contract) { 
    if(!cJSON_IsString(s_buyercontract_contract) && !cJSON_IsNull(s_buyercontract_contract))
    {
    goto end; //String
    }
    }

    // buyercontract_response->dt_buyercontract_date
    cJSON *dt_buyercontract_date = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "dtBuyercontractDate");
    if (cJSON_IsNull(dt_buyercontract_date)) {
        dt_buyercontract_date = NULL;
    }
    if (!dt_buyercontract_date) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_buyercontract_date))
    {
    goto end; //String
    }

    // buyercontract_response->dt_buyercontract_expirationdate
    cJSON *dt_buyercontract_expirationdate = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "dtBuyercontractExpirationdate");
    if (cJSON_IsNull(dt_buyercontract_expirationdate)) {
        dt_buyercontract_expirationdate = NULL;
    }
    if (dt_buyercontract_expirationdate) { 
    if(!cJSON_IsString(dt_buyercontract_expirationdate) && !cJSON_IsNull(dt_buyercontract_expirationdate))
    {
    goto end; //String
    }
    }

    // buyercontract_response->d_buyercontract_remuneration
    cJSON *d_buyercontract_remuneration = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "dBuyercontractRemuneration");
    if (cJSON_IsNull(d_buyercontract_remuneration)) {
        d_buyercontract_remuneration = NULL;
    }
    if (d_buyercontract_remuneration) { 
    if(!cJSON_IsString(d_buyercontract_remuneration) && !cJSON_IsNull(d_buyercontract_remuneration))
    {
    goto end; //String
    }
    }

    // buyercontract_response->e_buyercontract_remunerationtype
    cJSON *e_buyercontract_remunerationtype = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "eBuyercontractRemunerationtype");
    if (cJSON_IsNull(e_buyercontract_remunerationtype)) {
        e_buyercontract_remunerationtype = NULL;
    }
    if (e_buyercontract_remunerationtype) { 
    e_buyercontract_remunerationtype_local_nonprim = field_e_buyercontract_remunerationtype_parseFromJSON(e_buyercontract_remunerationtype); //custom
    }

    // buyercontract_response->b_buyercontract_litigation
    cJSON *b_buyercontract_litigation = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "bBuyercontractLitigation");
    if (cJSON_IsNull(b_buyercontract_litigation)) {
        b_buyercontract_litigation = NULL;
    }
    if (b_buyercontract_litigation) { 
    if(!cJSON_IsBool(b_buyercontract_litigation))
    {
    goto end; //Bool
    }
    b_buyercontract_litigation_local_var = malloc(sizeof(int));
    if(!b_buyercontract_litigation_local_var)
    {
        goto end;
    }
    *b_buyercontract_litigation_local_var = b_buyercontract_litigation->valueint;
    }

    // buyercontract_response->b_buyercontract_isactive
    cJSON *b_buyercontract_isactive = cJSON_GetObjectItemCaseSensitive(buyercontract_responseJSON, "bBuyercontractIsactive");
    if (cJSON_IsNull(b_buyercontract_isactive)) {
        b_buyercontract_isactive = NULL;
    }
    if (!b_buyercontract_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_buyercontract_isactive))
    {
    goto end; //Bool
    }
    b_buyercontract_isactive_local_var = malloc(sizeof(int));
    if(!b_buyercontract_isactive_local_var)
    {
        goto end;
    }
    *b_buyercontract_isactive_local_var = b_buyercontract_isactive->valueint;


    if (d_buyercontract_minimumprice && !cJSON_IsNull(d_buyercontract_minimumprice)) d_buyercontract_minimumprice_local_str = strdup(d_buyercontract_minimumprice->valuestring);
    if (d_buyercontract_maximumprice && !cJSON_IsNull(d_buyercontract_maximumprice)) d_buyercontract_maximumprice_local_str = strdup(d_buyercontract_maximumprice->valuestring);
    if (s_buyercontract_contract && !cJSON_IsNull(s_buyercontract_contract)) s_buyercontract_contract_local_str = strdup(s_buyercontract_contract->valuestring);
    if (dt_buyercontract_date && !cJSON_IsNull(dt_buyercontract_date)) dt_buyercontract_date_local_str = strdup(dt_buyercontract_date->valuestring);
    if (dt_buyercontract_expirationdate && !cJSON_IsNull(dt_buyercontract_expirationdate)) dt_buyercontract_expirationdate_local_str = strdup(dt_buyercontract_expirationdate->valuestring);
    if (d_buyercontract_remuneration && !cJSON_IsNull(d_buyercontract_remuneration)) d_buyercontract_remuneration_local_str = strdup(d_buyercontract_remuneration->valuestring);

    buyercontract_response_local_var = buyercontract_response_create_internal (
        pki_buyercontract_id_local_var,
        fki_inscriptiontype_id_local_var,
        e_buyercontract_step_local_nonprim,
        d_buyercontract_minimumprice_local_str,
        d_buyercontract_maximumprice_local_str,
        e_buyercontract_type_local_nonprim,
        s_buyercontract_contract_local_str,
        dt_buyercontract_date_local_str,
        dt_buyercontract_expirationdate_local_str,
        d_buyercontract_remuneration_local_str,
        e_buyercontract_remunerationtype ? e_buyercontract_remunerationtype_local_nonprim : 0,
        b_buyercontract_litigation_local_var,
        b_buyercontract_isactive_local_var
        );

    if (!buyercontract_response_local_var) {
        goto end;
    }

    return buyercontract_response_local_var;
end:
    if (pki_buyercontract_id_local_var) {
        free(pki_buyercontract_id_local_var);
        pki_buyercontract_id_local_var = NULL;
    }
    if (fki_inscriptiontype_id_local_var) {
        free(fki_inscriptiontype_id_local_var);
        fki_inscriptiontype_id_local_var = NULL;
    }
    if (e_buyercontract_step_local_nonprim) {
        e_buyercontract_step_local_nonprim = 0;
    }
    if (d_buyercontract_minimumprice_local_str) {
        free(d_buyercontract_minimumprice_local_str);
        d_buyercontract_minimumprice_local_str = NULL;
    }
    if (d_buyercontract_maximumprice_local_str) {
        free(d_buyercontract_maximumprice_local_str);
        d_buyercontract_maximumprice_local_str = NULL;
    }
    if (e_buyercontract_type_local_nonprim) {
        e_buyercontract_type_local_nonprim = 0;
    }
    if (s_buyercontract_contract_local_str) {
        free(s_buyercontract_contract_local_str);
        s_buyercontract_contract_local_str = NULL;
    }
    if (dt_buyercontract_date_local_str) {
        free(dt_buyercontract_date_local_str);
        dt_buyercontract_date_local_str = NULL;
    }
    if (dt_buyercontract_expirationdate_local_str) {
        free(dt_buyercontract_expirationdate_local_str);
        dt_buyercontract_expirationdate_local_str = NULL;
    }
    if (d_buyercontract_remuneration_local_str) {
        free(d_buyercontract_remuneration_local_str);
        d_buyercontract_remuneration_local_str = NULL;
    }
    if (e_buyercontract_remunerationtype_local_nonprim) {
        e_buyercontract_remunerationtype_local_nonprim = 0;
    }
    if (b_buyercontract_litigation_local_var) {
        free(b_buyercontract_litigation_local_var);
        b_buyercontract_litigation_local_var = NULL;
    }
    if (b_buyercontract_isactive_local_var) {
        free(b_buyercontract_isactive_local_var);
        b_buyercontract_isactive_local_var = NULL;
    }
    return NULL;

}
