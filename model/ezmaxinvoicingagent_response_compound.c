#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingagent_response_compound.h"



static ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound_create_internal(
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
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e e_ezmaxinvoicingagent_variationezsign,
    custom_contact_name_response_t *obj_contact_name
    ) {
    ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound_local_var = malloc(sizeof(ezmaxinvoicingagent_response_compound_t));
    if (!ezmaxinvoicingagent_response_compound_local_var) {
        return NULL;
    }
    ezmaxinvoicingagent_response_compound_local_var->pki_ezmaxinvoicingagent_id = pki_ezmaxinvoicingagent_id;
    ezmaxinvoicingagent_response_compound_local_var->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    ezmaxinvoicingagent_response_compound_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezmaxinvoicingagent_response_compound_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    ezmaxinvoicingagent_response_compound_local_var->fki_agent_id = fki_agent_id;
    ezmaxinvoicingagent_response_compound_local_var->fki_broker_id = fki_broker_id;
    ezmaxinvoicingagent_response_compound_local_var->i_ezmaxinvoicingagent_session = i_ezmaxinvoicingagent_session;
    ezmaxinvoicingagent_response_compound_local_var->i_ezmaxinvoicingagent_cloned = i_ezmaxinvoicingagent_cloned;
    ezmaxinvoicingagent_response_compound_local_var->i_ezmaxinvoicingagent_invoice = i_ezmaxinvoicingagent_invoice;
    ezmaxinvoicingagent_response_compound_local_var->i_ezmaxinvoicingagent_inscription = i_ezmaxinvoicingagent_inscription;
    ezmaxinvoicingagent_response_compound_local_var->i_ezmaxinvoicingagent_inscriptionactive = i_ezmaxinvoicingagent_inscriptionactive;
    ezmaxinvoicingagent_response_compound_local_var->i_ezmaxinvoicingagent_sale = i_ezmaxinvoicingagent_sale;
    ezmaxinvoicingagent_response_compound_local_var->i_ezmaxinvoicingagent_otherincome = i_ezmaxinvoicingagent_otherincome;
    ezmaxinvoicingagent_response_compound_local_var->i_ezmaxinvoicingagent_commissioncalculation = i_ezmaxinvoicingagent_commissioncalculation;
    ezmaxinvoicingagent_response_compound_local_var->i_ezmaxinvoicingagent_ezsigndocument = i_ezmaxinvoicingagent_ezsigndocument;
    ezmaxinvoicingagent_response_compound_local_var->b_ezmaxinvoicingagent_ezsignaccount = b_ezmaxinvoicingagent_ezsignaccount;
    ezmaxinvoicingagent_response_compound_local_var->b_ezmaxinvoicingagent_billableezmax = b_ezmaxinvoicingagent_billableezmax;
    ezmaxinvoicingagent_response_compound_local_var->e_ezmaxinvoicingagent_variationezmax = e_ezmaxinvoicingagent_variationezmax;
    ezmaxinvoicingagent_response_compound_local_var->b_ezmaxinvoicingagent_billableezsign = b_ezmaxinvoicingagent_billableezsign;
    ezmaxinvoicingagent_response_compound_local_var->e_ezmaxinvoicingagent_variationezsign = e_ezmaxinvoicingagent_variationezsign;
    ezmaxinvoicingagent_response_compound_local_var->obj_contact_name = obj_contact_name;

    ezmaxinvoicingagent_response_compound_local_var->_library_owned = 1;
    return ezmaxinvoicingagent_response_compound_local_var;
}

__attribute__((deprecated)) ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound_create(
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
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e e_ezmaxinvoicingagent_variationezsign,
    custom_contact_name_response_t *obj_contact_name
    ) {
    return ezmaxinvoicingagent_response_compound_create_internal (
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
        e_ezmaxinvoicingagent_variationezsign,
        obj_contact_name
        );
}

void ezmaxinvoicingagent_response_compound_free(ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound) {
    if(NULL == ezmaxinvoicingagent_response_compound){
        return ;
    }
    if(ezmaxinvoicingagent_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicingagent_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingagent_response_compound->s_billingentityinternal_description_x) {
        free(ezmaxinvoicingagent_response_compound->s_billingentityinternal_description_x);
        ezmaxinvoicingagent_response_compound->s_billingentityinternal_description_x = NULL;
    }
    if (ezmaxinvoicingagent_response_compound->obj_contact_name) {
        custom_contact_name_response_free(ezmaxinvoicingagent_response_compound->obj_contact_name);
        ezmaxinvoicingagent_response_compound->obj_contact_name = NULL;
    }
    free(ezmaxinvoicingagent_response_compound);
}

cJSON *ezmaxinvoicingagent_response_compound_convertToJSON(ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingagent_response_compound->pki_ezmaxinvoicingagent_id
    if(ezmaxinvoicingagent_response_compound->pki_ezmaxinvoicingagent_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicingagentID", ezmaxinvoicingagent_response_compound->pki_ezmaxinvoicingagent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingagent_response_compound->fki_ezmaxinvoicing_id
    if(ezmaxinvoicingagent_response_compound->fki_ezmaxinvoicing_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingID", ezmaxinvoicingagent_response_compound->fki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingagent_response_compound->fki_billingentityinternal_id
    if (!ezmaxinvoicingagent_response_compound->fki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezmaxinvoicingagent_response_compound->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response_compound->s_billingentityinternal_description_x
    if (!ezmaxinvoicingagent_response_compound->s_billingentityinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", ezmaxinvoicingagent_response_compound->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicingagent_response_compound->fki_agent_id
    if(ezmaxinvoicingagent_response_compound->fki_agent_id) {
    if(cJSON_AddNumberToObject(item, "fkiAgentID", ezmaxinvoicingagent_response_compound->fki_agent_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingagent_response_compound->fki_broker_id
    if(ezmaxinvoicingagent_response_compound->fki_broker_id) {
    if(cJSON_AddNumberToObject(item, "fkiBrokerID", ezmaxinvoicingagent_response_compound->fki_broker_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_session
    if (!ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_session) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentSession", ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_session) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_cloned
    if (!ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_cloned) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentCloned", ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_cloned) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_invoice
    if (!ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_invoice) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentInvoice", ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_invoice) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_inscription
    if (!ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_inscription) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentInscription", ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_inscription) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_inscriptionactive
    if (!ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_inscriptionactive) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentInscriptionactive", ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_inscriptionactive) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_sale
    if (!ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_sale) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentSale", ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_sale) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_otherincome
    if (!ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_otherincome) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentOtherincome", ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_otherincome) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_commissioncalculation
    if (!ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_commissioncalculation) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentCommissioncalculation", ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_commissioncalculation) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_ezsigndocument
    if (!ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_ezsigndocument) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicingagentEzsigndocument", ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_ezsigndocument) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicingagent_response_compound->b_ezmaxinvoicingagent_ezsignaccount
    if (!ezmaxinvoicingagent_response_compound->b_ezmaxinvoicingagent_ezsignaccount) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingagentEzsignaccount", ezmaxinvoicingagent_response_compound->b_ezmaxinvoicingagent_ezsignaccount) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicingagent_response_compound->b_ezmaxinvoicingagent_billableezmax
    if (!ezmaxinvoicingagent_response_compound->b_ezmaxinvoicingagent_billableezmax) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingagentBillableezmax", ezmaxinvoicingagent_response_compound->b_ezmaxinvoicingagent_billableezmax) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicingagent_response_compound->e_ezmaxinvoicingagent_variationezmax
    if (ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezmax__NULL == ezmaxinvoicingagent_response_compound->e_ezmaxinvoicingagent_variationezmax) {
        goto fail;
    }
    cJSON *e_ezmaxinvoicingagent_variationezmax_local_JSON = field_e_ezmaxinvoicingagent_variationezmax_convertToJSON(ezmaxinvoicingagent_response_compound->e_ezmaxinvoicingagent_variationezmax);
    if(e_ezmaxinvoicingagent_variationezmax_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzmaxinvoicingagentVariationezmax", e_ezmaxinvoicingagent_variationezmax_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezmaxinvoicingagent_response_compound->b_ezmaxinvoicingagent_billableezsign
    if (!ezmaxinvoicingagent_response_compound->b_ezmaxinvoicingagent_billableezsign) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicingagentBillableezsign", ezmaxinvoicingagent_response_compound->b_ezmaxinvoicingagent_billableezsign) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicingagent_response_compound->e_ezmaxinvoicingagent_variationezsign
    if (ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__NULL == ezmaxinvoicingagent_response_compound->e_ezmaxinvoicingagent_variationezsign) {
        goto fail;
    }
    cJSON *e_ezmaxinvoicingagent_variationezsign_local_JSON = field_e_ezmaxinvoicingagent_variationezsign_convertToJSON(ezmaxinvoicingagent_response_compound->e_ezmaxinvoicingagent_variationezsign);
    if(e_ezmaxinvoicingagent_variationezsign_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzmaxinvoicingagentVariationezsign", e_ezmaxinvoicingagent_variationezsign_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezmaxinvoicingagent_response_compound->obj_contact_name
    if (!ezmaxinvoicingagent_response_compound->obj_contact_name) {
        goto fail;
    }
    cJSON *obj_contact_name_local_JSON = custom_contact_name_response_convertToJSON(ezmaxinvoicingagent_response_compound->obj_contact_name);
    if(obj_contact_name_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objContactName", obj_contact_name_local_JSON);
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

ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound_parseFromJSON(cJSON *ezmaxinvoicingagent_response_compoundJSON){

    ezmaxinvoicingagent_response_compound_t *ezmaxinvoicingagent_response_compound_local_var = NULL;

    // define the local variable for ezmaxinvoicingagent_response_compound->e_ezmaxinvoicingagent_variationezmax
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezmax__e e_ezmaxinvoicingagent_variationezmax_local_nonprim = 0;

    // define the local variable for ezmaxinvoicingagent_response_compound->e_ezmaxinvoicingagent_variationezsign
    ezmax_api_definition__full_field_e_ezmaxinvoicingagent_variationezsign__e e_ezmaxinvoicingagent_variationezsign_local_nonprim = 0;

    // define the local variable for ezmaxinvoicingagent_response_compound->obj_contact_name
    custom_contact_name_response_t *obj_contact_name_local_nonprim = NULL;

    // ezmaxinvoicingagent_response_compound->pki_ezmaxinvoicingagent_id
    cJSON *pki_ezmaxinvoicingagent_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "pkiEzmaxinvoicingagentID");
    if (cJSON_IsNull(pki_ezmaxinvoicingagent_id)) {
        pki_ezmaxinvoicingagent_id = NULL;
    }
    if (pki_ezmaxinvoicingagent_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicingagent_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingagent_response_compound->fki_ezmaxinvoicing_id
    cJSON *fki_ezmaxinvoicing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "fkiEzmaxinvoicingID");
    if (cJSON_IsNull(fki_ezmaxinvoicing_id)) {
        fki_ezmaxinvoicing_id = NULL;
    }
    if (fki_ezmaxinvoicing_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicing_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingagent_response_compound->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "fkiBillingentityinternalID");
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

    // ezmaxinvoicingagent_response_compound->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "sBillingentityinternalDescriptionX");
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

    // ezmaxinvoicingagent_response_compound->fki_agent_id
    cJSON *fki_agent_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "fkiAgentID");
    if (cJSON_IsNull(fki_agent_id)) {
        fki_agent_id = NULL;
    }
    if (fki_agent_id) { 
    if(!cJSON_IsNumber(fki_agent_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingagent_response_compound->fki_broker_id
    cJSON *fki_broker_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "fkiBrokerID");
    if (cJSON_IsNull(fki_broker_id)) {
        fki_broker_id = NULL;
    }
    if (fki_broker_id) { 
    if(!cJSON_IsNumber(fki_broker_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_session
    cJSON *i_ezmaxinvoicingagent_session = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "iEzmaxinvoicingagentSession");
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

    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_cloned
    cJSON *i_ezmaxinvoicingagent_cloned = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "iEzmaxinvoicingagentCloned");
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

    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_invoice
    cJSON *i_ezmaxinvoicingagent_invoice = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "iEzmaxinvoicingagentInvoice");
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

    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_inscription
    cJSON *i_ezmaxinvoicingagent_inscription = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "iEzmaxinvoicingagentInscription");
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

    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_inscriptionactive
    cJSON *i_ezmaxinvoicingagent_inscriptionactive = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "iEzmaxinvoicingagentInscriptionactive");
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

    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_sale
    cJSON *i_ezmaxinvoicingagent_sale = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "iEzmaxinvoicingagentSale");
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

    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_otherincome
    cJSON *i_ezmaxinvoicingagent_otherincome = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "iEzmaxinvoicingagentOtherincome");
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

    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_commissioncalculation
    cJSON *i_ezmaxinvoicingagent_commissioncalculation = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "iEzmaxinvoicingagentCommissioncalculation");
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

    // ezmaxinvoicingagent_response_compound->i_ezmaxinvoicingagent_ezsigndocument
    cJSON *i_ezmaxinvoicingagent_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "iEzmaxinvoicingagentEzsigndocument");
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

    // ezmaxinvoicingagent_response_compound->b_ezmaxinvoicingagent_ezsignaccount
    cJSON *b_ezmaxinvoicingagent_ezsignaccount = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "bEzmaxinvoicingagentEzsignaccount");
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

    // ezmaxinvoicingagent_response_compound->b_ezmaxinvoicingagent_billableezmax
    cJSON *b_ezmaxinvoicingagent_billableezmax = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "bEzmaxinvoicingagentBillableezmax");
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

    // ezmaxinvoicingagent_response_compound->e_ezmaxinvoicingagent_variationezmax
    cJSON *e_ezmaxinvoicingagent_variationezmax = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "eEzmaxinvoicingagentVariationezmax");
    if (cJSON_IsNull(e_ezmaxinvoicingagent_variationezmax)) {
        e_ezmaxinvoicingagent_variationezmax = NULL;
    }
    if (!e_ezmaxinvoicingagent_variationezmax) {
        goto end;
    }

    
    e_ezmaxinvoicingagent_variationezmax_local_nonprim = field_e_ezmaxinvoicingagent_variationezmax_parseFromJSON(e_ezmaxinvoicingagent_variationezmax); //custom

    // ezmaxinvoicingagent_response_compound->b_ezmaxinvoicingagent_billableezsign
    cJSON *b_ezmaxinvoicingagent_billableezsign = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "bEzmaxinvoicingagentBillableezsign");
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

    // ezmaxinvoicingagent_response_compound->e_ezmaxinvoicingagent_variationezsign
    cJSON *e_ezmaxinvoicingagent_variationezsign = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "eEzmaxinvoicingagentVariationezsign");
    if (cJSON_IsNull(e_ezmaxinvoicingagent_variationezsign)) {
        e_ezmaxinvoicingagent_variationezsign = NULL;
    }
    if (!e_ezmaxinvoicingagent_variationezsign) {
        goto end;
    }

    
    e_ezmaxinvoicingagent_variationezsign_local_nonprim = field_e_ezmaxinvoicingagent_variationezsign_parseFromJSON(e_ezmaxinvoicingagent_variationezsign); //custom

    // ezmaxinvoicingagent_response_compound->obj_contact_name
    cJSON *obj_contact_name = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingagent_response_compoundJSON, "objContactName");
    if (cJSON_IsNull(obj_contact_name)) {
        obj_contact_name = NULL;
    }
    if (!obj_contact_name) {
        goto end;
    }

    
    obj_contact_name_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_name); //nonprimitive


    ezmaxinvoicingagent_response_compound_local_var = ezmaxinvoicingagent_response_compound_create_internal (
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
        e_ezmaxinvoicingagent_variationezsign_local_nonprim,
        obj_contact_name_local_nonprim
        );

    return ezmaxinvoicingagent_response_compound_local_var;
end:
    if (e_ezmaxinvoicingagent_variationezmax_local_nonprim) {
        e_ezmaxinvoicingagent_variationezmax_local_nonprim = 0;
    }
    if (e_ezmaxinvoicingagent_variationezsign_local_nonprim) {
        e_ezmaxinvoicingagent_variationezsign_local_nonprim = 0;
    }
    if (obj_contact_name_local_nonprim) {
        custom_contact_name_response_free(obj_contact_name_local_nonprim);
        obj_contact_name_local_nonprim = NULL;
    }
    return NULL;

}
