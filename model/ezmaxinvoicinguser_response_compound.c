#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicinguser_response_compound.h"



static ezmaxinvoicinguser_response_compound_t *ezmaxinvoicinguser_response_compound_create_internal(
    int pki_ezmaxinvoicinguser_id,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_user_id,
    int i_ezmaxinvoicinguser_ezsigndocument,
    int b_ezmaxinvoicinguser_ezsignaccount,
    int b_ezmaxinvoicinguser_billableezsign,
    ezmax_api_definition__full_field_e_ezmaxinvoicinguser_variationezsign__e e_ezmaxinvoicinguser_variationezsign,
    custom_contact_name_response_t *obj_contact_name
    ) {
    ezmaxinvoicinguser_response_compound_t *ezmaxinvoicinguser_response_compound_local_var = malloc(sizeof(ezmaxinvoicinguser_response_compound_t));
    if (!ezmaxinvoicinguser_response_compound_local_var) {
        return NULL;
    }
    ezmaxinvoicinguser_response_compound_local_var->pki_ezmaxinvoicinguser_id = pki_ezmaxinvoicinguser_id;
    ezmaxinvoicinguser_response_compound_local_var->fki_ezmaxinvoicing_id = fki_ezmaxinvoicing_id;
    ezmaxinvoicinguser_response_compound_local_var->fki_billingentityinternal_id = fki_billingentityinternal_id;
    ezmaxinvoicinguser_response_compound_local_var->s_billingentityinternal_description_x = s_billingentityinternal_description_x;
    ezmaxinvoicinguser_response_compound_local_var->fki_user_id = fki_user_id;
    ezmaxinvoicinguser_response_compound_local_var->i_ezmaxinvoicinguser_ezsigndocument = i_ezmaxinvoicinguser_ezsigndocument;
    ezmaxinvoicinguser_response_compound_local_var->b_ezmaxinvoicinguser_ezsignaccount = b_ezmaxinvoicinguser_ezsignaccount;
    ezmaxinvoicinguser_response_compound_local_var->b_ezmaxinvoicinguser_billableezsign = b_ezmaxinvoicinguser_billableezsign;
    ezmaxinvoicinguser_response_compound_local_var->e_ezmaxinvoicinguser_variationezsign = e_ezmaxinvoicinguser_variationezsign;
    ezmaxinvoicinguser_response_compound_local_var->obj_contact_name = obj_contact_name;

    ezmaxinvoicinguser_response_compound_local_var->_library_owned = 1;
    return ezmaxinvoicinguser_response_compound_local_var;
}

__attribute__((deprecated)) ezmaxinvoicinguser_response_compound_t *ezmaxinvoicinguser_response_compound_create(
    int pki_ezmaxinvoicinguser_id,
    int fki_ezmaxinvoicing_id,
    int fki_billingentityinternal_id,
    char *s_billingentityinternal_description_x,
    int fki_user_id,
    int i_ezmaxinvoicinguser_ezsigndocument,
    int b_ezmaxinvoicinguser_ezsignaccount,
    int b_ezmaxinvoicinguser_billableezsign,
    ezmax_api_definition__full_field_e_ezmaxinvoicinguser_variationezsign__e e_ezmaxinvoicinguser_variationezsign,
    custom_contact_name_response_t *obj_contact_name
    ) {
    return ezmaxinvoicinguser_response_compound_create_internal (
        pki_ezmaxinvoicinguser_id,
        fki_ezmaxinvoicing_id,
        fki_billingentityinternal_id,
        s_billingentityinternal_description_x,
        fki_user_id,
        i_ezmaxinvoicinguser_ezsigndocument,
        b_ezmaxinvoicinguser_ezsignaccount,
        b_ezmaxinvoicinguser_billableezsign,
        e_ezmaxinvoicinguser_variationezsign,
        obj_contact_name
        );
}

void ezmaxinvoicinguser_response_compound_free(ezmaxinvoicinguser_response_compound_t *ezmaxinvoicinguser_response_compound) {
    if(NULL == ezmaxinvoicinguser_response_compound){
        return ;
    }
    if(ezmaxinvoicinguser_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxinvoicinguser_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicinguser_response_compound->s_billingentityinternal_description_x) {
        free(ezmaxinvoicinguser_response_compound->s_billingentityinternal_description_x);
        ezmaxinvoicinguser_response_compound->s_billingentityinternal_description_x = NULL;
    }
    if (ezmaxinvoicinguser_response_compound->obj_contact_name) {
        custom_contact_name_response_free(ezmaxinvoicinguser_response_compound->obj_contact_name);
        ezmaxinvoicinguser_response_compound->obj_contact_name = NULL;
    }
    free(ezmaxinvoicinguser_response_compound);
}

cJSON *ezmaxinvoicinguser_response_compound_convertToJSON(ezmaxinvoicinguser_response_compound_t *ezmaxinvoicinguser_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicinguser_response_compound->pki_ezmaxinvoicinguser_id
    if(ezmaxinvoicinguser_response_compound->pki_ezmaxinvoicinguser_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzmaxinvoicinguserID", ezmaxinvoicinguser_response_compound->pki_ezmaxinvoicinguser_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicinguser_response_compound->fki_ezmaxinvoicing_id
    if(ezmaxinvoicinguser_response_compound->fki_ezmaxinvoicing_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzmaxinvoicingID", ezmaxinvoicinguser_response_compound->fki_ezmaxinvoicing_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezmaxinvoicinguser_response_compound->fki_billingentityinternal_id
    if (!ezmaxinvoicinguser_response_compound->fki_billingentityinternal_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiBillingentityinternalID", ezmaxinvoicinguser_response_compound->fki_billingentityinternal_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicinguser_response_compound->s_billingentityinternal_description_x
    if (!ezmaxinvoicinguser_response_compound->s_billingentityinternal_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sBillingentityinternalDescriptionX", ezmaxinvoicinguser_response_compound->s_billingentityinternal_description_x) == NULL) {
    goto fail; //String
    }


    // ezmaxinvoicinguser_response_compound->fki_user_id
    if (!ezmaxinvoicinguser_response_compound->fki_user_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezmaxinvoicinguser_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicinguser_response_compound->i_ezmaxinvoicinguser_ezsigndocument
    if (!ezmaxinvoicinguser_response_compound->i_ezmaxinvoicinguser_ezsigndocument) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzmaxinvoicinguserEzsigndocument", ezmaxinvoicinguser_response_compound->i_ezmaxinvoicinguser_ezsigndocument) == NULL) {
    goto fail; //Numeric
    }


    // ezmaxinvoicinguser_response_compound->b_ezmaxinvoicinguser_ezsignaccount
    if (!ezmaxinvoicinguser_response_compound->b_ezmaxinvoicinguser_ezsignaccount) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicinguserEzsignaccount", ezmaxinvoicinguser_response_compound->b_ezmaxinvoicinguser_ezsignaccount) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicinguser_response_compound->b_ezmaxinvoicinguser_billableezsign
    if (!ezmaxinvoicinguser_response_compound->b_ezmaxinvoicinguser_billableezsign) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzmaxinvoicinguserBillableezsign", ezmaxinvoicinguser_response_compound->b_ezmaxinvoicinguser_billableezsign) == NULL) {
    goto fail; //Bool
    }


    // ezmaxinvoicinguser_response_compound->e_ezmaxinvoicinguser_variationezsign
    if (ezmax_api_definition__full_field_e_ezmaxinvoicinguser_variationezsign__NULL == ezmaxinvoicinguser_response_compound->e_ezmaxinvoicinguser_variationezsign) {
        goto fail;
    }
    cJSON *e_ezmaxinvoicinguser_variationezsign_local_JSON = field_e_ezmaxinvoicinguser_variationezsign_convertToJSON(ezmaxinvoicinguser_response_compound->e_ezmaxinvoicinguser_variationezsign);
    if(e_ezmaxinvoicinguser_variationezsign_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzmaxinvoicinguserVariationezsign", e_ezmaxinvoicinguser_variationezsign_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezmaxinvoicinguser_response_compound->obj_contact_name
    if (!ezmaxinvoicinguser_response_compound->obj_contact_name) {
        goto fail;
    }
    cJSON *obj_contact_name_local_JSON = custom_contact_name_response_convertToJSON(ezmaxinvoicinguser_response_compound->obj_contact_name);
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

ezmaxinvoicinguser_response_compound_t *ezmaxinvoicinguser_response_compound_parseFromJSON(cJSON *ezmaxinvoicinguser_response_compoundJSON){

    ezmaxinvoicinguser_response_compound_t *ezmaxinvoicinguser_response_compound_local_var = NULL;

    // define the local variable for ezmaxinvoicinguser_response_compound->e_ezmaxinvoicinguser_variationezsign
    ezmax_api_definition__full_field_e_ezmaxinvoicinguser_variationezsign__e e_ezmaxinvoicinguser_variationezsign_local_nonprim = 0;

    // define the local variable for ezmaxinvoicinguser_response_compound->obj_contact_name
    custom_contact_name_response_t *obj_contact_name_local_nonprim = NULL;

    // ezmaxinvoicinguser_response_compound->pki_ezmaxinvoicinguser_id
    cJSON *pki_ezmaxinvoicinguser_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicinguser_response_compoundJSON, "pkiEzmaxinvoicinguserID");
    if (cJSON_IsNull(pki_ezmaxinvoicinguser_id)) {
        pki_ezmaxinvoicinguser_id = NULL;
    }
    if (pki_ezmaxinvoicinguser_id) { 
    if(!cJSON_IsNumber(pki_ezmaxinvoicinguser_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicinguser_response_compound->fki_ezmaxinvoicing_id
    cJSON *fki_ezmaxinvoicing_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicinguser_response_compoundJSON, "fkiEzmaxinvoicingID");
    if (cJSON_IsNull(fki_ezmaxinvoicing_id)) {
        fki_ezmaxinvoicing_id = NULL;
    }
    if (fki_ezmaxinvoicing_id) { 
    if(!cJSON_IsNumber(fki_ezmaxinvoicing_id))
    {
    goto end; //Numeric
    }
    }

    // ezmaxinvoicinguser_response_compound->fki_billingentityinternal_id
    cJSON *fki_billingentityinternal_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicinguser_response_compoundJSON, "fkiBillingentityinternalID");
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

    // ezmaxinvoicinguser_response_compound->s_billingentityinternal_description_x
    cJSON *s_billingentityinternal_description_x = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicinguser_response_compoundJSON, "sBillingentityinternalDescriptionX");
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

    // ezmaxinvoicinguser_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicinguser_response_compoundJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicinguser_response_compound->i_ezmaxinvoicinguser_ezsigndocument
    cJSON *i_ezmaxinvoicinguser_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicinguser_response_compoundJSON, "iEzmaxinvoicinguserEzsigndocument");
    if (cJSON_IsNull(i_ezmaxinvoicinguser_ezsigndocument)) {
        i_ezmaxinvoicinguser_ezsigndocument = NULL;
    }
    if (!i_ezmaxinvoicinguser_ezsigndocument) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezmaxinvoicinguser_ezsigndocument))
    {
    goto end; //Numeric
    }

    // ezmaxinvoicinguser_response_compound->b_ezmaxinvoicinguser_ezsignaccount
    cJSON *b_ezmaxinvoicinguser_ezsignaccount = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicinguser_response_compoundJSON, "bEzmaxinvoicinguserEzsignaccount");
    if (cJSON_IsNull(b_ezmaxinvoicinguser_ezsignaccount)) {
        b_ezmaxinvoicinguser_ezsignaccount = NULL;
    }
    if (!b_ezmaxinvoicinguser_ezsignaccount) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicinguser_ezsignaccount))
    {
    goto end; //Bool
    }

    // ezmaxinvoicinguser_response_compound->b_ezmaxinvoicinguser_billableezsign
    cJSON *b_ezmaxinvoicinguser_billableezsign = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicinguser_response_compoundJSON, "bEzmaxinvoicinguserBillableezsign");
    if (cJSON_IsNull(b_ezmaxinvoicinguser_billableezsign)) {
        b_ezmaxinvoicinguser_billableezsign = NULL;
    }
    if (!b_ezmaxinvoicinguser_billableezsign) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezmaxinvoicinguser_billableezsign))
    {
    goto end; //Bool
    }

    // ezmaxinvoicinguser_response_compound->e_ezmaxinvoicinguser_variationezsign
    cJSON *e_ezmaxinvoicinguser_variationezsign = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicinguser_response_compoundJSON, "eEzmaxinvoicinguserVariationezsign");
    if (cJSON_IsNull(e_ezmaxinvoicinguser_variationezsign)) {
        e_ezmaxinvoicinguser_variationezsign = NULL;
    }
    if (!e_ezmaxinvoicinguser_variationezsign) {
        goto end;
    }

    
    e_ezmaxinvoicinguser_variationezsign_local_nonprim = field_e_ezmaxinvoicinguser_variationezsign_parseFromJSON(e_ezmaxinvoicinguser_variationezsign); //custom

    // ezmaxinvoicinguser_response_compound->obj_contact_name
    cJSON *obj_contact_name = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicinguser_response_compoundJSON, "objContactName");
    if (cJSON_IsNull(obj_contact_name)) {
        obj_contact_name = NULL;
    }
    if (!obj_contact_name) {
        goto end;
    }

    
    obj_contact_name_local_nonprim = custom_contact_name_response_parseFromJSON(obj_contact_name); //nonprimitive


    ezmaxinvoicinguser_response_compound_local_var = ezmaxinvoicinguser_response_compound_create_internal (
        pki_ezmaxinvoicinguser_id ? pki_ezmaxinvoicinguser_id->valuedouble : 0,
        fki_ezmaxinvoicing_id ? fki_ezmaxinvoicing_id->valuedouble : 0,
        fki_billingentityinternal_id->valuedouble,
        strdup(s_billingentityinternal_description_x->valuestring),
        fki_user_id->valuedouble,
        i_ezmaxinvoicinguser_ezsigndocument->valuedouble,
        b_ezmaxinvoicinguser_ezsignaccount->valueint,
        b_ezmaxinvoicinguser_billableezsign->valueint,
        e_ezmaxinvoicinguser_variationezsign_local_nonprim,
        obj_contact_name_local_nonprim
        );

    return ezmaxinvoicinguser_response_compound_local_var;
end:
    if (e_ezmaxinvoicinguser_variationezsign_local_nonprim) {
        e_ezmaxinvoicinguser_variationezsign_local_nonprim = 0;
    }
    if (obj_contact_name_local_nonprim) {
        custom_contact_name_response_free(obj_contact_name_local_nonprim);
        obj_contact_name_local_nonprim = NULL;
    }
    return NULL;

}
