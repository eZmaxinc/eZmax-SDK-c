#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingsummaryglobal_response.h"



ezmaxinvoicingsummaryglobal_response_t *ezmaxinvoicingsummaryglobal_response_create(
    int pki_ezmaxinvoicingsummaryglobal_id,
    int fki_ezmaxinvoicing_id,
    int fki_ezmaxproduct_id,
    char *s_ezmaxproduct_description_x,
    char *dt_ezmaxinvoicingsummaryglobal_start,
    char *dt_ezmaxinvoicingsummaryglobal_end,
    int i_ezmaxinvoicingsummaryglobal_days,
    char *d_ezmaxinvoicingsummaryglobal_countreal,
    char *d_ezmaxinvoicingsummaryglobal_countbilled,
    char *d_ezmaxinvoicingsummaryglobal_subtotal,
    char *d_ezmaxinvoicingsummaryglobal_rebateamount,
    char *d_ezmaxinvoicingsummaryglobal_rebatepercent,
    char *d_ezmaxinvoicingsummaryglobal_rebatetotal,
    char *d_ezmaxinvoicingsummaryglobal_total,
    char *d_ezmaxinvoicingsummaryglobal_representative,
    char *d_ezmaxinvoicingsummaryglobal_partner,
    char *d_ezmaxinvoicingsummaryglobal_net,
    int b_ezmaxinvoicingsummaryglobal_adjustment,
    char *t_ezmaxproduct_help_x
    ) {
    ezmaxinvoicingsummaryglobal_response_t *ezmaxinvoicingsummaryglobal_response_local_var = malloc(sizeof(ezmaxinvoicingsummaryglobal_response_t));
    if (!ezmaxinvoicingsummaryglobal_response_local_var) {
        return NULL;
    }
    ezmaxinvoicingsummaryglobal_response_local_var->pki_ezmaxinvoicingsummaryglobal_id = pki_ezmaxinvoicingsummaryglobal_id;
    ezmaxinvoicingsummaryglobal_response_local_var->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    ezmaxinvoicingsummaryglobal_response_local_var->fki_ezmaxproduct_id = fki_ezmaxproduct_id;
    ezmaxinvoicingsummaryglobal_response_local_var->s_ezmaxproduct_description_x = s_ezmaxproduct_description_x;
    ezmaxinvoicingsummaryglobal_response_local_var->dt_ezmaxinvoicingsummaryglobal_start = dt_ezmaxinvoicingsummaryglobal_start;
    ezmaxinvoicingsummaryglobal_response_local_var->dt_ezmaxinvoicingsummaryglobal_end = dt_ezmaxinvoicingsummaryglobal_end;
    ezmaxinvoicingsummaryglobal_response_local_var->i_ezmaxinvoicingsummaryglobal_days = i_ezmaxinvoicingsummaryglobal_days;
    ezmaxinvoicingsummaryglobal_response_local_var->d_ezmaxinvoicingsummaryglobal_countreal = d_ezmaxinvoicingsummaryglobal_countreal;
    ezmaxinvoicingsummaryglobal_response_local_var->d_ezmaxinvoicingsummaryglobal_countbilled = d_ezmaxinvoicingsummaryglobal_countbilled;
    ezmaxinvoicingsummaryglobal_response_local_var->d_ezmaxinvoicingsummaryglobal_subtotal = d_ezmaxinvoicingsummaryglobal_subtotal;
    ezmaxinvoicingsummaryglobal_response_local_var->d_ezmaxinvoicingsummaryglobal_rebateamount = d_ezmaxinvoicingsummaryglobal_rebateamount;
    ezmaxinvoicingsummaryglobal_response_local_var->d_ezmaxinvoicingsummaryglobal_rebatepercent = d_ezmaxinvoicingsummaryglobal_rebatepercent;
    ezmaxinvoicingsummaryglobal_response_local_var->d_ezmaxinvoicingsummaryglobal_rebatetotal = d_ezmaxinvoicingsummaryglobal_rebatetotal;
    ezmaxinvoicingsummaryglobal_response_local_var->d_ezmaxinvoicingsummaryglobal_total = d_ezmaxinvoicingsummaryglobal_total;
    ezmaxinvoicingsummaryglobal_response_local_var->d_ezmaxinvoicingsummaryglobal_representative = d_ezmaxinvoicingsummaryglobal_representative;
    ezmaxinvoicingsummaryglobal_response_local_var->d_ezmaxinvoicingsummaryglobal_partner = d_ezmaxinvoicingsummaryglobal_partner;
    ezmaxinvoicingsummaryglobal_response_local_var->d_ezmaxinvoicingsummaryglobal_net = d_ezmaxinvoicingsummaryglobal_net;
    ezmaxinvoicingsummaryglobal_response_local_var->b_ezmaxinvoicingsummaryglobal_adjustment = b_ezmaxinvoicingsummaryglobal_adjustment;
    ezmaxinvoicingsummaryglobal_response_local_var->t_ezmaxproduct_help_x = t_ezmaxproduct_help_x;

    return ezmaxinvoicingsummaryglobal_response_local_var;
}


void ezmaxinvoicingsummaryglobal_response_free(ezmaxinvoicingsummaryglobal_response_t *ezmaxinvoicingsummaryglobal_response) {
    if(NULL == ezmaxinvoicingsummaryglobal_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingsummaryglobal_response->s_ezmaxproduct_description_x) {
        free(ezmaxinvoicingsummaryglobal_response->s_ezmaxproduct_description_x);
        ezmaxinvoicingsummaryglobal_response->s_ezmaxproduct_description_x = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_start) {
        free(ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_start);
        ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_start = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_end) {
        free(ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_end);
        ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_end = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countreal) {
        free(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countreal);
        ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countreal = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countbilled) {
        free(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countbilled);
        ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countbilled = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_subtotal) {
        free(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_subtotal);
        ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_subtotal = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebateamount) {
        free(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebateamount);
        ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebateamount = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatepercent) {
        free(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatepercent);
        ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatepercent = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatetotal) {
        free(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatetotal);
        ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatetotal = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_total) {
        free(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_total);
        ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_total = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_representative) {
        free(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_representative);
        ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_representative = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_partner) {
        free(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_partner);
        ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_partner = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_net) {
        free(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_net);
        ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_net = NULL;
    }
    if (ezmaxinvoicingsummaryglobal_response->t_ezmaxproduct_help_x) {
        free(ezmaxinvoicingsummaryglobal_response->t_ezmaxproduct_help_x);
        ezmaxinvoicingsummaryglobal_response->t_ezmaxproduct_help_x = NULL;
    }
    free(ezmaxinvoicingsummaryglobal_response);
}

cJSON *ezmaxinvoicingsummaryglobal_response_convertToJSON(ezmaxinvoicingsummaryglobal_response_t *ezmaxinvoicingsummaryglobal_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingsummaryglobal_response->pki_ezmaxinvoicingsummaryglobal_id
    if(ezmaxinvoicingsummaryglobal_response->pki_ezmaxinvoicingsummaryglobal_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingsummaryglobalID", ezmaxinvoicingsummaryglobal_response->pki_ezmaxinvoicingsummaryglobal_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryglobal_response->fki_ezmaxinvoicing_id
    if(ezmaxinvoicingsummaryglobal_response->fki_ezmaxinvoicing_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingID", ezmaxinvoicingsummaryglobal_response->fki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingsummaryglobal_response->fki_ezmaxproduct_id
    if (!ezmaxinvoicingsummaryglobal_response->fki_ezmaxproduct_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzmaxproductID", ezmaxinvoicingsummaryglobal_response->fki_ezmaxproduct_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingsummaryglobal_response->s_ezmaxproduct_description_x
    if (!ezmaxinvoicingsummaryglobal_response->s_ezmaxproduct_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzmaxproductDescriptionX", ezmaxinvoicingsummaryglobal_response->s_ezmaxproduct_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_start
    if (!ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_start) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzmaxinvoicingsummaryglobalStart", ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_start) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_end
    if (!ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_end) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dtEzmaxinvoicingsummaryglobalEnd", ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_end) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response->i_ezmaxinvoicingsummaryglobal_days
    if (!ezmaxinvoicingsummaryglobal_response->i_ezmaxinvoicingsummaryglobal_days) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingsummaryglobalDays", ezmaxinvoicingsummaryglobal_response->i_ezmaxinvoicingsummaryglobal_days) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countreal
    if (!ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countreal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalCountreal", ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countreal) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countbilled
    if (!ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countbilled) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalCountbilled", ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countbilled) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_subtotal
    if (!ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_subtotal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalSubtotal", ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_subtotal) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebateamount
    if (!ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebateamount) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalRebateamount", ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebateamount) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatepercent
    if (!ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatepercent) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalRebatepercent", ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatepercent) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatetotal
    if (!ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatetotal) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalRebatetotal", ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatetotal) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_total
    if (!ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_total) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalTotal", ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_total) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_representative
    if(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_representative) {
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalRepresentative", ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_representative) == NULL) {
    goto fail; //String
    }
    }


    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_partner
    if(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_partner) {
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalPartner", ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_partner) == NULL) {
    goto fail; //String
    }
    }


    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_net
    if(ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_net) {
    if(cJSON_AddStringToObject(item, "dEzmaxinvoicingsummaryglobalNet", ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_net) == NULL) {
    goto fail; //String
    }
    }


    // ezmaxinvoicingsummaryglobal_response->b_ezmaxinvoicingsummaryglobal_adjustment
    if (!ezmaxinvoicingsummaryglobal_response->b_ezmaxinvoicingsummaryglobal_adjustment) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingsummaryglobalAdjustment", ezmaxinvoicingsummaryglobal_response->b_ezmaxinvoicingsummaryglobal_adjustment) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicingsummaryglobal_response->t_ezmaxproduct_help_x
    if (!ezmaxinvoicingsummaryglobal_response->t_ezmaxproduct_help_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzmaxproductHelpX", ezmaxinvoicingsummaryglobal_response->t_ezmaxproduct_help_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezmaxinvoicingsummaryglobal_response_t *ezmaxinvoicingsummaryglobal_response_parseFromJSON(cJSON *ezmaxinvoicingsummaryglobal_responseJSON){

    ezmaxinvoicingsummaryglobal_response_t *ezmaxinvoicingsummaryglobal_response_local_var = NULL;

    // ezmaxinvoicingsummaryglobal_response->pki_ezmaxinvoicingsummaryglobal_id
    cJSON *pki_ezmaxinvoicingsummaryglobal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "pkiEzmaxinvoicingsummaryglobalID");
    if (pki_ezmaxinvoicingsummaryglobal_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingsummaryglobal_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryglobal_response->fki_ezmaxinvoicing_id
    cJSON *fki_ezmaxinvoicing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "fkiEzmaxinvoicingID");
    if (fki_ezmaxinvoicing_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicing_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingsummaryglobal_response->fki_ezmaxproduct_id
    cJSON *fki_ezmaxproduct_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "fkiEzmaxproductID");
    if (!fki_ezmaxproduct_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezmaxproduct_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingsummaryglobal_response->s_ezmaxproduct_description_x
    cJSON *s_ezmaxproduct_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "sEzmaxproductDescriptionX");
    if (!s_ezmaxproduct_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezmaxproduct_description_x))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_start
    cJSON *dt_ezmaxinvoicingsummaryglobal_start = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "dtEzmaxinvoicingsummaryglobalStart");
    if (!dt_ezmaxinvoicingsummaryglobal_start) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezmaxinvoicingsummaryglobal_start))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response->dt_ezmaxinvoicingsummaryglobal_end
    cJSON *dt_ezmaxinvoicingsummaryglobal_end = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "dtEzmaxinvoicingsummaryglobalEnd");
    if (!dt_ezmaxinvoicingsummaryglobal_end) {
        goto end;
    }

    
    if(!cJSON_IsString(dt_ezmaxinvoicingsummaryglobal_end))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response->i_ezmaxinvoicingsummaryglobal_days
    cJSON *i_ezmaxinvoicingsummaryglobal_days = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "iEzmaxinvoicingsummaryglobalDays");
    if (!i_ezmaxinvoicingsummaryglobal_days) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingsummaryglobal_days))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countreal
    cJSON *d_ezmaxinvoicingsummaryglobal_countreal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "dEzmaxinvoicingsummaryglobalCountreal");
    if (!d_ezmaxinvoicingsummaryglobal_countreal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_countreal))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_countbilled
    cJSON *d_ezmaxinvoicingsummaryglobal_countbilled = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "dEzmaxinvoicingsummaryglobalCountbilled");
    if (!d_ezmaxinvoicingsummaryglobal_countbilled) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_countbilled))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_subtotal
    cJSON *d_ezmaxinvoicingsummaryglobal_subtotal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "dEzmaxinvoicingsummaryglobalSubtotal");
    if (!d_ezmaxinvoicingsummaryglobal_subtotal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_subtotal))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebateamount
    cJSON *d_ezmaxinvoicingsummaryglobal_rebateamount = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "dEzmaxinvoicingsummaryglobalRebateamount");
    if (!d_ezmaxinvoicingsummaryglobal_rebateamount) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_rebateamount))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatepercent
    cJSON *d_ezmaxinvoicingsummaryglobal_rebatepercent = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "dEzmaxinvoicingsummaryglobalRebatepercent");
    if (!d_ezmaxinvoicingsummaryglobal_rebatepercent) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_rebatepercent))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_rebatetotal
    cJSON *d_ezmaxinvoicingsummaryglobal_rebatetotal = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "dEzmaxinvoicingsummaryglobalRebatetotal");
    if (!d_ezmaxinvoicingsummaryglobal_rebatetotal) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_rebatetotal))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_total
    cJSON *d_ezmaxinvoicingsummaryglobal_total = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "dEzmaxinvoicingsummaryglobalTotal");
    if (!d_ezmaxinvoicingsummaryglobal_total) {
        goto end;
    }

    
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_total))
    {
    goto end; //String
    }

    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_representative
    cJSON *d_ezmaxinvoicingsummaryglobal_representative = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "dEzmaxinvoicingsummaryglobalRepresentative");
    if (d_ezmaxinvoicingsummaryglobal_representative) { 
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_representative))
    {
    goto end; //String
    }
    }

    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_partner
    cJSON *d_ezmaxinvoicingsummaryglobal_partner = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "dEzmaxinvoicingsummaryglobalPartner");
    if (d_ezmaxinvoicingsummaryglobal_partner) { 
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_partner))
    {
    goto end; //String
    }
    }

    // ezmaxinvoicingsummaryglobal_response->d_ezmaxinvoicingsummaryglobal_net
    cJSON *d_ezmaxinvoicingsummaryglobal_net = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "dEzmaxinvoicingsummaryglobalNet");
    if (d_ezmaxinvoicingsummaryglobal_net) { 
    if(!cJSON_IsString(d_ezmaxinvoicingsummaryglobal_net))
    {
    goto end; //String
    }
    }

    // ezmaxinvoicingsummaryglobal_response->b_ezmaxinvoicingsummaryglobal_adjustment
    cJSON *b_ezmaxinvoicingsummaryglobal_adjustment = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "bEzmaxinvoicingsummaryglobalAdjustment");
    if (!b_ezmaxinvoicingsummaryglobal_adjustment) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicingsummaryglobal_adjustment))
    {
    goto end; //Bool
    }

    // ezmaxinvoicingsummaryglobal_response->t_ezmaxproduct_help_x
    cJSON *t_ezmaxproduct_help_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_responseJSON, "tEzmaxproductHelpX");
    if (!t_ezmaxproduct_help_x) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezmaxproduct_help_x))
    {
    goto end; //String
    }


    ezmaxinvoicingsummaryglobal_response_local_var = ezmaxinvoicingsummaryglobal_response_create (
        pki_ezmaxinvoicingsummaryglobal_id ? pki_ezmaxinvoicingsummaryglobal_id->valuedouble : 0,
        fki_ezmaxinvoicing_id ? fki_ezmaxinvoicing_id->valuedouble : 0,
        fki_ezmaxproduct_id->valuedouble,
        strdup(s_ezmaxproduct_description_x->valuestring),
        strdup(dt_ezmaxinvoicingsummaryglobal_start->valuestring),
        strdup(dt_ezmaxinvoicingsummaryglobal_end->valuestring),
        i_ezmaxinvoicingsummaryglobal_days->valuedouble,
        strdup(d_ezmaxinvoicingsummaryglobal_countreal->valuestring),
        strdup(d_ezmaxinvoicingsummaryglobal_countbilled->valuestring),
        strdup(d_ezmaxinvoicingsummaryglobal_subtotal->valuestring),
        strdup(d_ezmaxinvoicingsummaryglobal_rebateamount->valuestring),
        strdup(d_ezmaxinvoicingsummaryglobal_rebatepercent->valuestring),
        strdup(d_ezmaxinvoicingsummaryglobal_rebatetotal->valuestring),
        strdup(d_ezmaxinvoicingsummaryglobal_total->valuestring),
        d_ezmaxinvoicingsummaryglobal_representative ? strdup(d_ezmaxinvoicingsummaryglobal_representative->valuestring) : NULL,
        d_ezmaxinvoicingsummaryglobal_partner ? strdup(d_ezmaxinvoicingsummaryglobal_partner->valuestring) : NULL,
        d_ezmaxinvoicingsummaryglobal_net ? strdup(d_ezmaxinvoicingsummaryglobal_net->valuestring) : NULL,
        b_ezmaxinvoicingsummaryglobal_adjustment->valueint,
        strdup(t_ezmaxproduct_help_x->valuestring)
        );

    return ezmaxinvoicingsummaryglobal_response_local_var;
end:
    return NULL;

}
