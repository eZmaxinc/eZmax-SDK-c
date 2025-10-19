#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "buyercontract_list_element.h"



static buyercontract_list_element_t *buyercontract_list_element_create_internal(
    int pki_buyercontract_id,
    int fki_inscriptiontype_id,
    char *s_inscriptiontype_name_x,
    ezmax_api_definition__full_field_e_buyercontract_step__e e_buyercontract_step,
    char *d_buyercontract_minimumprice,
    char *d_buyercontract_maximumprice,
    ezmax_api_definition__full_field_e_buyercontract_type__e e_buyercontract_type,
    char *dt_buyercontract_date,
    char *dt_buyercontract_expirationdate,
    int b_buyercontract_isactive,
    char *s_buyercontract_brokers,
    char *s_buyercontract_buyers
    ) {
    buyercontract_list_element_t *buyercontract_list_element_local_var = malloc(sizeof(buyercontract_list_element_t));
    if (!buyercontract_list_element_local_var) {
        return NULL;
    }
    buyercontract_list_element_local_var->pki_buyercontract_id = pki_buyercontract_id;
    buyercontract_list_element_local_var->fki_inscriptiontype_id = fki_inscriptiontype_id;
    buyercontract_list_element_local_var->s_inscriptiontype_name_x = s_inscriptiontype_name_x;
    buyercontract_list_element_local_var->e_buyercontract_step = e_buyercontract_step;
    buyercontract_list_element_local_var->d_buyercontract_minimumprice = d_buyercontract_minimumprice;
    buyercontract_list_element_local_var->d_buyercontract_maximumprice = d_buyercontract_maximumprice;
    buyercontract_list_element_local_var->e_buyercontract_type = e_buyercontract_type;
    buyercontract_list_element_local_var->dt_buyercontract_date = dt_buyercontract_date;
    buyercontract_list_element_local_var->dt_buyercontract_expirationdate = dt_buyercontract_expirationdate;
    buyercontract_list_element_local_var->b_buyercontract_isactive = b_buyercontract_isactive;
    buyercontract_list_element_local_var->s_buyercontract_brokers = s_buyercontract_brokers;
    buyercontract_list_element_local_var->s_buyercontract_buyers = s_buyercontract_buyers;

    buyercontract_list_element_local_var->_library_owned = 1;
    return buyercontract_list_element_local_var;
}

__attribute__((deprecated)) buyercontract_list_element_t *buyercontract_list_element_create(
    int pki_buyercontract_id,
    int fki_inscriptiontype_id,
    char *s_inscriptiontype_name_x,
    ezmax_api_definition__full_field_e_buyercontract_step__e e_buyercontract_step,
    char *d_buyercontract_minimumprice,
    char *d_buyercontract_maximumprice,
    ezmax_api_definition__full_field_e_buyercontract_type__e e_buyercontract_type,
    char *dt_buyercontract_date,
    char *dt_buyercontract_expirationdate,
    int b_buyercontract_isactive,
    char *s_buyercontract_brokers,
    char *s_buyercontract_buyers
    ) {
    return buyercontract_list_element_create_internal (
        pki_buyercontract_id,
        fki_inscriptiontype_id,
        s_inscriptiontype_name_x,
        e_buyercontract_step,
        d_buyercontract_minimumprice,
        d_buyercontract_maximumprice,
        e_buyercontract_type,
        dt_buyercontract_date,
        dt_buyercontract_expirationdate,
        b_buyercontract_isactive,
        s_buyercontract_brokers,
        s_buyercontract_buyers
        );
}

void buyercontract_list_element_free(buyercontract_list_element_t *buyercontract_list_element) {
    if(NULL == buyercontract_list_element){
        return ;
    }
    if(buyercontract_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "buyercontract_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (buyercontract_list_element->s_inscriptiontype_name_x) {
        free(buyercontract_list_element->s_inscriptiontype_name_x);
        buyercontract_list_element->s_inscriptiontype_name_x = NULL;
    }
    if (buyercontract_list_element->d_buyercontract_minimumprice) {
        free(buyercontract_list_element->d_buyercontract_minimumprice);
        buyercontract_list_element->d_buyercontract_minimumprice = NULL;
    }
    if (buyercontract_list_element->d_buyercontract_maximumprice) {
        free(buyercontract_list_element->d_buyercontract_maximumprice);
        buyercontract_list_element->d_buyercontract_maximumprice = NULL;
    }
    if (buyercontract_list_element->dt_buyercontract_date) {
        free(buyercontract_list_element->dt_buyercontract_date);
        buyercontract_list_element->dt_buyercontract_date = NULL;
    }
    if (buyercontract_list_element->dt_buyercontract_expirationdate) {
        free(buyercontract_list_element->dt_buyercontract_expirationdate);
        buyercontract_list_element->dt_buyercontract_expirationdate = NULL;
    }
    if (buyercontract_list_element->s_buyercontract_brokers) {
        free(buyercontract_list_element->s_buyercontract_brokers);
        buyercontract_list_element->s_buyercontract_brokers = NULL;
    }
    if (buyercontract_list_element->s_buyercontract_buyers) {
        free(buyercontract_list_element->s_buyercontract_buyers);
        buyercontract_list_element->s_buyercontract_buyers = NULL;
    }
    free(buyercontract_list_element);
}

cJSON *buyercontract_list_element_convertToJSON(buyercontract_list_element_t *buyercontract_list_element) {
    cJSON *item = cJSON_CreateObject();

    // buyercontract_list_element->pki_buyercontract_id
    if (!buyercontract_list_element->pki_buyercontract_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiBuyercontractID", buyercontract_list_element->pki_buyercontract_id) == NULL) {
    goto fail; //Numeric
    }


    // buyercontract_list_element->fki_inscriptiontype_id
    if (!buyercontract_list_element->fki_inscriptiontype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiInscriptiontypeID", buyercontract_list_element->fki_inscriptiontype_id) == NULL) {
    goto fail; //Numeric
    }


    // buyercontract_list_element->s_inscriptiontype_name_x
    if (!buyercontract_list_element->s_inscriptiontype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sInscriptiontypeNameX", buyercontract_list_element->s_inscriptiontype_name_x) == NULL) {
    goto fail; //String
    }


    // buyercontract_list_element->e_buyercontract_step
    if (ezmax_api_definition__full_field_e_buyercontract_step__NULL == buyercontract_list_element->e_buyercontract_step) {
        goto fail;
    }
    cJSON *e_buyercontract_step_local_JSON = field_e_buyercontract_step_convertToJSON(buyercontract_list_element->e_buyercontract_step);
    if(e_buyercontract_step_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eBuyercontractStep", e_buyercontract_step_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // buyercontract_list_element->d_buyercontract_minimumprice
    if (!buyercontract_list_element->d_buyercontract_minimumprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dBuyercontractMinimumprice", buyercontract_list_element->d_buyercontract_minimumprice) == NULL) {
    goto fail; //String
    }


    // buyercontract_list_element->d_buyercontract_maximumprice
    if (!buyercontract_list_element->d_buyercontract_maximumprice) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dBuyercontractMaximumprice", buyercontract_list_element->d_buyercontract_maximumprice) == NULL) {
    goto fail; //String
    }


    // buyercontract_list_element->e_buyercontract_type
    if (ezmax_api_definition__full_field_e_buyercontract_type__NULL == buyercontract_list_element->e_buyercontract_type) {
        goto fail;
    }
    cJSON *e_buyercontract_type_local_JSON = field_e_buyercontract_type_convertToJSON(buyercontract_list_element->e_buyercontract_type);
    if(e_buyercontract_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eBuyercontractType", e_buyercontract_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // buyercontract_list_element->dt_buyercontract_date
    if (!buyercontract_list_element->dt_buyercontract_date) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtBuyercontractDate", buyercontract_list_element->dt_buyercontract_date) == NULL) {
    goto fail; //String
    }


    // buyercontract_list_element->dt_buyercontract_expirationdate
    if(buyercontract_list_element->dt_buyercontract_expirationdate) {
    if(cJSON_AddStringToObject(item, "dtBuyercontractExpirationdate", buyercontract_list_element->dt_buyercontract_expirationdate) == NULL) {
    goto fail; //String
    }
    }


    // buyercontract_list_element->b_buyercontract_isactive
    if (!buyercontract_list_element->b_buyercontract_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bBuyercontractIsactive", buyercontract_list_element->b_buyercontract_isactive) == NULL) {
    goto fail; //Bool
    }


    // buyercontract_list_element->s_buyercontract_brokers
    if (!buyercontract_list_element->s_buyercontract_brokers) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBuyercontractBrokers", buyercontract_list_element->s_buyercontract_brokers) == NULL) {
    goto fail; //String
    }


    // buyercontract_list_element->s_buyercontract_buyers
    if (!buyercontract_list_element->s_buyercontract_buyers) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBuyercontractBuyers", buyercontract_list_element->s_buyercontract_buyers) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

buyercontract_list_element_t *buyercontract_list_element_parseFromJSON(cJSON *buyercontract_list_elementJSON){

    buyercontract_list_element_t *buyercontract_list_element_local_var = NULL;

    // define the local variable for buyercontract_list_element->e_buyercontract_step
    ezmax_api_definition__full_field_e_buyercontract_step__e e_buyercontract_step_local_nonprim = 0;

    // define the local variable for buyercontract_list_element->e_buyercontract_type
    ezmax_api_definition__full_field_e_buyercontract_type__e e_buyercontract_type_local_nonprim = 0;

    // buyercontract_list_element->pki_buyercontract_id
    cJSON *pki_buyercontract_id = cJSON_GetObjectItemCaseSensitive(buyercontract_list_elementJSON, "pkiBuyercontractID");
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

    // buyercontract_list_element->fki_inscriptiontype_id
    cJSON *fki_inscriptiontype_id = cJSON_GetObjectItemCaseSensitive(buyercontract_list_elementJSON, "fkiInscriptiontypeID");
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

    // buyercontract_list_element->s_inscriptiontype_name_x
    cJSON *s_inscriptiontype_name_x = cJSON_GetObjectItemCaseSensitive(buyercontract_list_elementJSON, "sInscriptiontypeNameX");
    if (cJSON_IsNull(s_inscriptiontype_name_x)) {
        s_inscriptiontype_name_x = NULL;
    }
    if (!s_inscriptiontype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_inscriptiontype_name_x))
    {
    goto end; //String
    }

    // buyercontract_list_element->e_buyercontract_step
    cJSON *e_buyercontract_step = cJSON_GetObjectItemCaseSensitive(buyercontract_list_elementJSON, "eBuyercontractStep");
    if (cJSON_IsNull(e_buyercontract_step)) {
        e_buyercontract_step = NULL;
    }
    if (!e_buyercontract_step) {
        goto end;
    }

    
    e_buyercontract_step_local_nonprim = field_e_buyercontract_step_parseFromJSON(e_buyercontract_step); //custom

    // buyercontract_list_element->d_buyercontract_minimumprice
    cJSON *d_buyercontract_minimumprice = cJSON_GetObjectItemCaseSensitive(buyercontract_list_elementJSON, "dBuyercontractMinimumprice");
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

    // buyercontract_list_element->d_buyercontract_maximumprice
    cJSON *d_buyercontract_maximumprice = cJSON_GetObjectItemCaseSensitive(buyercontract_list_elementJSON, "dBuyercontractMaximumprice");
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

    // buyercontract_list_element->e_buyercontract_type
    cJSON *e_buyercontract_type = cJSON_GetObjectItemCaseSensitive(buyercontract_list_elementJSON, "eBuyercontractType");
    if (cJSON_IsNull(e_buyercontract_type)) {
        e_buyercontract_type = NULL;
    }
    if (!e_buyercontract_type) {
        goto end;
    }

    
    e_buyercontract_type_local_nonprim = field_e_buyercontract_type_parseFromJSON(e_buyercontract_type); //custom

    // buyercontract_list_element->dt_buyercontract_date
    cJSON *dt_buyercontract_date = cJSON_GetObjectItemCaseSensitive(buyercontract_list_elementJSON, "dtBuyercontractDate");
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

    // buyercontract_list_element->dt_buyercontract_expirationdate
    cJSON *dt_buyercontract_expirationdate = cJSON_GetObjectItemCaseSensitive(buyercontract_list_elementJSON, "dtBuyercontractExpirationdate");
    if (cJSON_IsNull(dt_buyercontract_expirationdate)) {
        dt_buyercontract_expirationdate = NULL;
    }
    if (dt_buyercontract_expirationdate) { 
    if(!cJSON_IsString(dt_buyercontract_expirationdate) && !cJSON_IsNull(dt_buyercontract_expirationdate))
    {
    goto end; //String
    }
    }

    // buyercontract_list_element->b_buyercontract_isactive
    cJSON *b_buyercontract_isactive = cJSON_GetObjectItemCaseSensitive(buyercontract_list_elementJSON, "bBuyercontractIsactive");
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

    // buyercontract_list_element->s_buyercontract_brokers
    cJSON *s_buyercontract_brokers = cJSON_GetObjectItemCaseSensitive(buyercontract_list_elementJSON, "sBuyercontractBrokers");
    if (cJSON_IsNull(s_buyercontract_brokers)) {
        s_buyercontract_brokers = NULL;
    }
    if (!s_buyercontract_brokers) {
        goto end;
    }

    
    if(!cJSON_IsString(s_buyercontract_brokers))
    {
    goto end; //String
    }

    // buyercontract_list_element->s_buyercontract_buyers
    cJSON *s_buyercontract_buyers = cJSON_GetObjectItemCaseSensitive(buyercontract_list_elementJSON, "sBuyercontractBuyers");
    if (cJSON_IsNull(s_buyercontract_buyers)) {
        s_buyercontract_buyers = NULL;
    }
    if (!s_buyercontract_buyers) {
        goto end;
    }

    
    if(!cJSON_IsString(s_buyercontract_buyers))
    {
    goto end; //String
    }


    buyercontract_list_element_local_var = buyercontract_list_element_create_internal (
        pki_buyercontract_id->valuedouble,
        fki_inscriptiontype_id->valuedouble,
        strdup(s_inscriptiontype_name_x->valuestring),
        e_buyercontract_step_local_nonprim,
        strdup(d_buyercontract_minimumprice->valuestring),
        strdup(d_buyercontract_maximumprice->valuestring),
        e_buyercontract_type_local_nonprim,
        strdup(dt_buyercontract_date->valuestring),
        dt_buyercontract_expirationdate && !cJSON_IsNull(dt_buyercontract_expirationdate) ? strdup(dt_buyercontract_expirationdate->valuestring) : NULL,
        b_buyercontract_isactive->valueint,
        strdup(s_buyercontract_brokers->valuestring),
        strdup(s_buyercontract_buyers->valuestring)
        );

    return buyercontract_list_element_local_var;
end:
    if (e_buyercontract_step_local_nonprim) {
        e_buyercontract_step_local_nonprim = 0;
    }
    if (e_buyercontract_type_local_nonprim) {
        e_buyercontract_type_local_nonprim = 0;
    }
    return NULL;

}
