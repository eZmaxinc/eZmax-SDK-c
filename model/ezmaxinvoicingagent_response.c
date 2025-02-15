#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingagent_response.h"



static ezmaxinvoicingagent_response_t *ezmaxinvoicingagent_response_create_internal(
    int pki_ezmaxinvoicingagent_id,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_agent_id,
    int fki_broker_id,
    int i_ezmaxinvoicingagent_session,
    int i_ezmaxinvoicingagent_cloned,
    int i_ezmaxinvoicingagent_invoice,
    int i_ezmaxinvoicingagent_inscription,
    int i_ezmaxinvoicingagent_inscriptionactive,
    int i_ezmaxinvoicingagent_sale,
    int i_ezmaxinvoicingagent_otherincome,
    int i_ezmaxinvoicingagent_commissioncalculation,
    int i_ezmaxinvoicingagent_ezsigndocument,
    int b_ezmaxinvoicingagent_ezsignaccount,
    int b_ezmaxinvoicingagent_billableezmax,
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezmax__e e_ezmaxinvoicingagent_variationezmax,
    int b_ezmaxinvoicingagent_billableezsign,
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e e_ezmaxinvoicingagent_variationezsign
    ) {
    ezmaxinvoicingagent_response_t *ezmaxinvoicingagent_response_local_var = malloc(sizeof(ezmaxinvoicingagent_response_t));
    if (!ezmaxinvoicingagent_response_local_var) {
        return NULL;
    }
    ezmaxinvoicingagent_response_local_var->pki_ezmaxinvoicingagent_id = pki_ezmaxinvoicingagent_id;
    ezmaxinvoicingagent_response_local_var->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    ezmaxinvoicingagent_response_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezmaxinvoicingagent_response_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    ezmaxinvoicingagent_response_local_var->fki_agent_id = fki_agent_id;
    ezmaxinvoicingagent_response_local_var->fki_broker_id = fki_broker_id;
    ezmaxinvoicingagent_response_local_var->i_ezmaxinvoicingagent_session = i_ezmaxinvoicingagent_session;
    ezmaxinvoicingagent_response_local_var->i_ezmaxinvoicingagent_cloned = i_ezmaxinvoicingagent_cloned;
    ezmaxinvoicingagent_response_local_var->i_ezmaxinvoicingagent_invoice = i_ezmaxinvoicingagent_invoice;
    ezmaxinvoicingagent_response_local_var->i_ezmaxinvoicingagent_inscription = i_ezmaxinvoicingagent_inscription;
    ezmaxinvoicingagent_response_local_var->i_ezmaxinvoicingagent_inscriptionactive = i_ezmaxinvoicingagent_inscriptionactive;
    ezmaxinvoicingagent_response_local_var->i_ezmaxinvoicingagent_sale = i_ezmaxinvoicingagent_sale;
    ezmaxinvoicingagent_response_local_var->i_ezmaxinvoicingagent_otherincome = i_ezmaxinvoicingagent_otherincome;
    ezmaxinvoicingagent_response_local_var->i_ezmaxinvoicingagent_commissioncalculation = i_ezmaxinvoicingagent_commissioncalculation;
    ezmaxinvoicingagent_response_local_var->i_ezmaxinvoicingagent_ezsigndocument = i_ezmaxinvoicingagent_ezsigndocument;
    ezmaxinvoicingagent_response_local_var->b_ezmaxinvoicingagent_ezsignaccount = b_ezmaxinvoicingagent_ezsignaccount;
    ezmaxinvoicingagent_response_local_var->b_ezmaxinvoicingagent_billableezmax = b_ezmaxinvoicingagent_billableezmax;
    ezmaxinvoicingagent_response_local_var->e_ezmaxinvoicingagent_variationezmax = e_ezmaxinvoicingagent_variationezmax;
    ezmaxinvoicingagent_response_local_var->b_ezmaxinvoicingagent_billableezsign = b_ezmaxinvoicingagent_billableezsign;
    ezmaxinvoicingagent_response_local_var->e_ezmaxinvoicingagent_variationezsign = e_ezmaxinvoicingagent_variationezsign;

    ezmaxinvoicingagent_response_local_var->_library_owned = 1;
    return ezmaxinvoicingagent_response_local_var;
}

__attribute__((deprecated)) ezmaxinvoicingagent_response_t *ezmaxinvoicingagent_response_create(
    int pki_ezmaxinvoicingagent_id,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_agent_id,
    int fki_broker_id,
    int i_ezmaxinvoicingagent_session,
    int i_ezmaxinvoicingagent_cloned,
    int i_ezmaxinvoicingagent_invoice,
    int i_ezmaxinvoicingagent_inscription,
    int i_ezmaxinvoicingagent_inscriptionactive,
    int i_ezmaxinvoicingagent_sale,
    int i_ezmaxinvoicingagent_otherincome,
    int i_ezmaxinvoicingagent_commissioncalculation,
    int i_ezmaxinvoicingagent_ezsigndocument,
    int b_ezmaxinvoicingagent_ezsignaccount,
    int b_ezmaxinvoicingagent_billableezmax,
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezmax__e e_ezmaxinvoicingagent_variationezmax,
    int b_ezmaxinvoicingagent_billableezsign,
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e e_ezmaxinvoicingagent_variationezsign
    ) {
    return ezmaxinvoicingagent_response_create_internal (
        pki_ezmaxinvoicingagent_id,
        fki_ezmaxinvoicing_id,
        fki_billingentityinternal_id,
        s_billingentityinternal_description_x,
        fki_agent_id,
        fki_broker_id,
        i_ezmaxinvoicingagent_session,
        i_ezmaxinvoicingagent_cloned,
        i_ezmaxinvoicingagent_invoice,
        i_ezmaxinvoicingagent_inscription,
        i_ezmaxinvoicingagent_inscriptionactive,
        i_ezmaxinvoicingagent_sale,
        i_ezmaxinvoicingagent_otherincome,
        i_ezmaxinvoicingagent_commissioncalculation,
        i_ezmaxinvoicingagent_ezsigndocument,
        b_ezmaxinvoicingagent_ezsignaccount,
        b_ezmaxinvoicingagent_billableezmax,
        e_ezmaxinvoicingagent_variationezmax,
        b_ezmaxinvoicingagent_billableezsign,
        e_ezmaxinvoicingagent_variationezsign
        );
}

void ezmaxinvoicingagent_response_free(ezmaxinvoicingagent_response_t *ezmaxinvoicingagent_response) {
    if(NULL == ezmaxinvoicingagent_response){
        return ;
    }
    if(ezmaxinvoicingagent_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicingagent_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingagent_response->s_billingentityinternal_description_x) {
        free(ezmaxinvoicingagent_response->s_billingentityinternal_description_x);
        ezmaxinvoicingagent_response->s_billingentityinternal_description_x = NULL;
    }
    free(ezmaxinvoicingagent_response);
}

cJSON *ezmaxinvoicingagent_response_convertToJSON(ezmaxinvoicingagent_response_t *ezmaxinvoicingagent_response) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingagent_response->pki_ezmaxinvoicingagent_id
    if(ezmaxinvoicingagent_response->pki_ezmaxinvoicingagent_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingagentID", ezmaxinvoicingagent_response->pki_ezmaxinvoicingagent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingagent_response->fki_ezmaxinvoicing_id
    if(ezmaxinvoicingagent_response->fki_ezmaxinvoicing_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingID", ezmaxinvoicingagent_response->fki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingagent_response->fki_billingentityinternal_id
    if (!ezmaxinvoicingagent_response->fki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezmaxinvoicingagent_response->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response->s_billingentityinternal_description_x
    if (!ezmaxinvoicingagent_response->s_billingentityinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", ezmaxinvoicingagent_response->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingagent_response->fki_agent_id
    if(ezmaxinvoicingagent_response->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", ezmaxinvoicingagent_response->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingagent_response->fki_broker_id
    if(ezmaxinvoicingagent_response->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", ezmaxinvoicingagent_response->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_session
    if (!ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_session) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentSession", ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_session) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_cloned
    if (!ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_cloned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentCloned", ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_cloned) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_invoice
    if (!ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_invoice) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentInvoice", ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_invoice) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_inscription
    if (!ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_inscription) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentInscription", ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_inscription) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_inscriptionactive
    if (!ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_inscriptionactive) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentInscriptionactive", ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_inscriptionactive) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_sale
    if (!ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_sale) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentSale", ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_sale) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_otherincome
    if (!ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_otherincome) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentOtherincome", ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_otherincome) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_commissioncalculation
    if (!ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_commissioncalculation) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentCommissioncalculation", ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_commissioncalculation) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_ezsigndocument
    if (!ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_ezsigndocument) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentEzsigndocument", ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_ezsigndocument) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response->b_ezmaxinvoicingagent_ezsignaccount
    if (!ezmaxinvoicingagent_response->b_ezmaxinvoicingagent_ezsignaccount) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingagentEzsignaccount", ezmaxinvoicingagent_response->b_ezmaxinvoicingagent_ezsignaccount) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicingagent_response->b_ezmaxinvoicingagent_billableezmax
    if (!ezmaxinvoicingagent_response->b_ezmaxinvoicingagent_billableezmax) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingagentBillableezmax", ezmaxinvoicingagent_response->b_ezmaxinvoicingagent_billableezmax) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicingagent_response->e_ezmaxinvoicingagent_variationezmax
    if (ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezmax__NULL == ezmaxinvoicingagent_response->e_ezmaxinvoicingagent_variationezmax) {
        goto fail;
    }
    cJSON *e_ezmaxinvoicingagent_variationezmax_local_JSON = field_e_ezmaxinvoicingagent_variationezmax_convertToJSON(ezmaxinvoicingagent_response->e_ezmaxinvoicingagent_variationezmax);
    if(e_ezmaxinvoicingagent_variationezmax_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzmaxinvoicingagentVariationezmax", e_ezmaxinvoicingagent_variationezmax_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezmaxinvoicingagent_response->b_ezmaxinvoicingagent_billableezsign
    if (!ezmaxinvoicingagent_response->b_ezmaxinvoicingagent_billableezsign) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingagentBillableezsign", ezmaxinvoicingagent_response->b_ezmaxinvoicingagent_billableezsign) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicingagent_response->e_ezmaxinvoicingagent_variationezsign
    if (ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__NULL == ezmaxinvoicingagent_response->e_ezmaxinvoicingagent_variationezsign) {
        goto fail;
    }
    cJSON *e_ezmaxinvoicingagent_variationezsign_local_JSON = field_e_ezmaxinvoicingagent_variationezsign_convertToJSON(ezmaxinvoicingagent_response->e_ezmaxinvoicingagent_variationezsign);
    if(e_ezmaxinvoicingagent_variationezsign_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzmaxinvoicingagentVariationezsign", e_ezmaxinvoicingagent_variationezsign_local_JSON);
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

ezmaxinvoicingagent_response_t *ezmaxinvoicingagent_response_parseFromJSON(cJSON *ezmaxinvoicingagent_responseJSON){

    ezmaxinvoicingagent_response_t *ezmaxinvoicingagent_response_local_var = NULL;

    // define the local variable for ezmaxinvoicingagent_response->e_ezmaxinvoicingagent_variationezmax
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezmax__e e_ezmaxinvoicingagent_variationezmax_local_nonprim = 0;

    // define the local variable for ezmaxinvoicingagent_response->e_ezmaxinvoicingagent_variationezsign
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e e_ezmaxinvoicingagent_variationezsign_local_nonprim = 0;

    // ezmaxinvoicingagent_response->pki_ezmaxinvoicingagent_id
    cJSON *pki_ezmaxinvoicingagent_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "pkiEzmaxinvoicingagentID");
    if (cJSON_IsNull(pki_ezmaxinvoicingagent_id)) {
        pki_ezmaxinvoicingagent_id = NULL;
    }
    if (pki_ezmaxinvoicingagent_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingagent_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingagent_response->fki_ezmaxinvoicing_id
    cJSON *fki_ezmaxinvoicing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "fkiEzmaxinvoicingID");
    if (cJSON_IsNull(fki_ezmaxinvoicing_id)) {
        fki_ezmaxinvoicing_id = NULL;
    }
    if (fki_ezmaxinvoicing_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicing_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingagent_response->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "fkiBillingentityinternalID");
    if (cJSON_IsNull(fki_billingentityinternal_id)) {
        fki_billingentityinternal_id = NULL;
    }
    if (!fki_billingentityinternal_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_billingentityinternal_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingagent_response->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "sBillingentityinternalDescriptionX");
    if (cJSON_IsNull(s_billingentityinternal_description_x)) {
        s_billingentityinternal_description_x = NULL;
    }
    if (!s_billingentityinternal_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_billingentityinternal_description_x))
    {
    goto end; //String
    }

    // ezmaxinvoicingagent_response->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "fkiAgentID");
    if (cJSON_IsNull(fki_agent_id)) {
        fki_agent_id = NULL;
    }
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingagent_response->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "fkiBrokerID");
    if (cJSON_IsNull(fki_broker_id)) {
        fki_broker_id = NULL;
    }
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_session
    cJSON *i_ezmaxinvoicingagent_session = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "iEzmaxinvoicingagentSession");
    if (cJSON_IsNull(i_ezmaxinvoicingagent_session)) {
        i_ezmaxinvoicingagent_session = NULL;
    }
    if (!i_ezmaxinvoicingagent_session) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingagent_session))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_cloned
    cJSON *i_ezmaxinvoicingagent_cloned = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "iEzmaxinvoicingagentCloned");
    if (cJSON_IsNull(i_ezmaxinvoicingagent_cloned)) {
        i_ezmaxinvoicingagent_cloned = NULL;
    }
    if (!i_ezmaxinvoicingagent_cloned) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingagent_cloned))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_invoice
    cJSON *i_ezmaxinvoicingagent_invoice = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "iEzmaxinvoicingagentInvoice");
    if (cJSON_IsNull(i_ezmaxinvoicingagent_invoice)) {
        i_ezmaxinvoicingagent_invoice = NULL;
    }
    if (!i_ezmaxinvoicingagent_invoice) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingagent_invoice))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_inscription
    cJSON *i_ezmaxinvoicingagent_inscription = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "iEzmaxinvoicingagentInscription");
    if (cJSON_IsNull(i_ezmaxinvoicingagent_inscription)) {
        i_ezmaxinvoicingagent_inscription = NULL;
    }
    if (!i_ezmaxinvoicingagent_inscription) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingagent_inscription))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_inscriptionactive
    cJSON *i_ezmaxinvoicingagent_inscriptionactive = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "iEzmaxinvoicingagentInscriptionactive");
    if (cJSON_IsNull(i_ezmaxinvoicingagent_inscriptionactive)) {
        i_ezmaxinvoicingagent_inscriptionactive = NULL;
    }
    if (!i_ezmaxinvoicingagent_inscriptionactive) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingagent_inscriptionactive))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_sale
    cJSON *i_ezmaxinvoicingagent_sale = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "iEzmaxinvoicingagentSale");
    if (cJSON_IsNull(i_ezmaxinvoicingagent_sale)) {
        i_ezmaxinvoicingagent_sale = NULL;
    }
    if (!i_ezmaxinvoicingagent_sale) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingagent_sale))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_otherincome
    cJSON *i_ezmaxinvoicingagent_otherincome = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "iEzmaxinvoicingagentOtherincome");
    if (cJSON_IsNull(i_ezmaxinvoicingagent_otherincome)) {
        i_ezmaxinvoicingagent_otherincome = NULL;
    }
    if (!i_ezmaxinvoicingagent_otherincome) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingagent_otherincome))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_commissioncalculation
    cJSON *i_ezmaxinvoicingagent_commissioncalculation = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "iEzmaxinvoicingagentCommissioncalculation");
    if (cJSON_IsNull(i_ezmaxinvoicingagent_commissioncalculation)) {
        i_ezmaxinvoicingagent_commissioncalculation = NULL;
    }
    if (!i_ezmaxinvoicingagent_commissioncalculation) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingagent_commissioncalculation))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingagent_response->i_ezmaxinvoicingagent_ezsigndocument
    cJSON *i_ezmaxinvoicingagent_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "iEzmaxinvoicingagentEzsigndocument");
    if (cJSON_IsNull(i_ezmaxinvoicingagent_ezsigndocument)) {
        i_ezmaxinvoicingagent_ezsigndocument = NULL;
    }
    if (!i_ezmaxinvoicingagent_ezsigndocument) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicingagent_ezsigndocument))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicingagent_response->b_ezmaxinvoicingagent_ezsignaccount
    cJSON *b_ezmaxinvoicingagent_ezsignaccount = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "bEzmaxinvoicingagentEzsignaccount");
    if (cJSON_IsNull(b_ezmaxinvoicingagent_ezsignaccount)) {
        b_ezmaxinvoicingagent_ezsignaccount = NULL;
    }
    if (!b_ezmaxinvoicingagent_ezsignaccount) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicingagent_ezsignaccount))
    {
    goto end; //Bool
    }

    // ezmaxinvoicingagent_response->b_ezmaxinvoicingagent_billableezmax
    cJSON *b_ezmaxinvoicingagent_billableezmax = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "bEzmaxinvoicingagentBillableezmax");
    if (cJSON_IsNull(b_ezmaxinvoicingagent_billableezmax)) {
        b_ezmaxinvoicingagent_billableezmax = NULL;
    }
    if (!b_ezmaxinvoicingagent_billableezmax) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicingagent_billableezmax))
    {
    goto end; //Bool
    }

    // ezmaxinvoicingagent_response->e_ezmaxinvoicingagent_variationezmax
    cJSON *e_ezmaxinvoicingagent_variationezmax = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "eEzmaxinvoicingagentVariationezmax");
    if (cJSON_IsNull(e_ezmaxinvoicingagent_variationezmax)) {
        e_ezmaxinvoicingagent_variationezmax = NULL;
    }
    if (!e_ezmaxinvoicingagent_variationezmax) {
        goto end;
    }

    
    e_ezmaxinvoicingagent_variationezmax_local_nonprim = field_e_ezmaxinvoicingagent_variationezmax_parseFromJSON(e_ezmaxinvoicingagent_variationezmax); //custom

    // ezmaxinvoicingagent_response->b_ezmaxinvoicingagent_billableezsign
    cJSON *b_ezmaxinvoicingagent_billableezsign = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "bEzmaxinvoicingagentBillableezsign");
    if (cJSON_IsNull(b_ezmaxinvoicingagent_billableezsign)) {
        b_ezmaxinvoicingagent_billableezsign = NULL;
    }
    if (!b_ezmaxinvoicingagent_billableezsign) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicingagent_billableezsign))
    {
    goto end; //Bool
    }

    // ezmaxinvoicingagent_response->e_ezmaxinvoicingagent_variationezsign
    cJSON *e_ezmaxinvoicingagent_variationezsign = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_responseJSON, "eEzmaxinvoicingagentVariationezsign");
    if (cJSON_IsNull(e_ezmaxinvoicingagent_variationezsign)) {
        e_ezmaxinvoicingagent_variationezsign = NULL;
    }
    if (!e_ezmaxinvoicingagent_variationezsign) {
        goto end;
    }

    
    e_ezmaxinvoicingagent_variationezsign_local_nonprim = field_e_ezmaxinvoicingagent_variationezsign_parseFromJSON(e_ezmaxinvoicingagent_variationezsign); //custom


    ezmaxinvoicingagent_response_local_var = ezmaxinvoicingagent_response_create_internal (
        pki_ezmaxinvoicingagent_id ? pki_ezmaxinvoicingagent_id->valuedouble : 0,
        fki_ezmaxinvoicing_id ? fki_ezmaxinvoicing_id->valuedouble : 0,
        fki_billingentityinternal_id->valuedouble,
        strdup(s_billingentityinternal_description_x->valuestring),
        fki_agent_id ? fki_agent_id->valuedouble : 0,
        fki_broker_id ? fki_broker_id->valuedouble : 0,
        i_ezmaxinvoicingagent_session->valuedouble,
        i_ezmaxinvoicingagent_cloned->valuedouble,
        i_ezmaxinvoicingagent_invoice->valuedouble,
        i_ezmaxinvoicingagent_inscription->valuedouble,
        i_ezmaxinvoicingagent_inscriptionactive->valuedouble,
        i_ezmaxinvoicingagent_sale->valuedouble,
        i_ezmaxinvoicingagent_otherincome->valuedouble,
        i_ezmaxinvoicingagent_commissioncalculation->valuedouble,
        i_ezmaxinvoicingagent_ezsigndocument->valuedouble,
        b_ezmaxinvoicingagent_ezsignaccount->valueint,
        b_ezmaxinvoicingagent_billableezmax->valueint,
        e_ezmaxinvoicingagent_variationezmax_local_nonprim,
        b_ezmaxinvoicingagent_billableezsign->valueint,
        e_ezmaxinvoicingagent_variationezsign_local_nonprim
        );

    return ezmaxinvoicingagent_response_local_var;
end:
    if (e_ezmaxinvoicingagent_variationezmax_local_nonprim) {
        e_ezmaxinvoicingagent_variationezmax_local_nonprim = 0;
    }
    if (e_ezmaxinvoicingagent_variationezsign_local_nonprim) {
        e_ezmaxinvoicingagent_variationezsign_local_nonprim = 0;
    }
    return NULL;

}
