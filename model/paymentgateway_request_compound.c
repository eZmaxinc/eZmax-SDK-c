#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_request_compound.h"



static paymentgateway_request_compound_t *paymentgateway_request_compound_create_internal(
    int *pki_paymentgateway_id,
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor,
    multilingual_paymentgateway_description_t *obj_paymentgateway_description,
    creditcardmerchant_request_compound_t *obj_creditcardmerchant
    ) {
    paymentgateway_request_compound_t *paymentgateway_request_compound_local_var = malloc(sizeof(paymentgateway_request_compound_t));
    if (!paymentgateway_request_compound_local_var) {
        return NULL;
    }
    memset(paymentgateway_request_compound_local_var, 0, sizeof(paymentgateway_request_compound_t));
    paymentgateway_request_compound_local_var->_library_owned = 1;
    paymentgateway_request_compound_local_var->pki_paymentgateway_id = pki_paymentgateway_id;
    paymentgateway_request_compound_local_var->e_paymentgateway_processor = e_paymentgateway_processor;
    paymentgateway_request_compound_local_var->obj_paymentgateway_description = obj_paymentgateway_description;
    paymentgateway_request_compound_local_var->obj_creditcardmerchant = obj_creditcardmerchant;
    return paymentgateway_request_compound_local_var;
}

__attribute__((deprecated)) paymentgateway_request_compound_t *paymentgateway_request_compound_create(
    int *pki_paymentgateway_id,
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor,
    multilingual_paymentgateway_description_t *obj_paymentgateway_description,
    creditcardmerchant_request_compound_t *obj_creditcardmerchant
    ) {
    int *pki_paymentgateway_id_copy = NULL;
    if (pki_paymentgateway_id) {
        pki_paymentgateway_id_copy = malloc(sizeof(int));
        if (pki_paymentgateway_id_copy) *pki_paymentgateway_id_copy = *pki_paymentgateway_id;
    }
    paymentgateway_request_compound_t *result = paymentgateway_request_compound_create_internal (
        pki_paymentgateway_id_copy,
        e_paymentgateway_processor,
        obj_paymentgateway_description,
        obj_creditcardmerchant
        );
    if (!result) {
        free(pki_paymentgateway_id_copy);
    }
    return result;
}

void paymentgateway_request_compound_free(paymentgateway_request_compound_t *paymentgateway_request_compound) {
    if(NULL == paymentgateway_request_compound){
        return ;
    }
    if(paymentgateway_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentgateway_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentgateway_request_compound->pki_paymentgateway_id) {
        free(paymentgateway_request_compound->pki_paymentgateway_id);
        paymentgateway_request_compound->pki_paymentgateway_id = NULL;
    }
    if (paymentgateway_request_compound->obj_paymentgateway_description) {
        multilingual_paymentgateway_description_free(paymentgateway_request_compound->obj_paymentgateway_description);
        paymentgateway_request_compound->obj_paymentgateway_description = NULL;
    }
    if (paymentgateway_request_compound->obj_creditcardmerchant) {
        creditcardmerchant_request_compound_free(paymentgateway_request_compound->obj_creditcardmerchant);
        paymentgateway_request_compound->obj_creditcardmerchant = NULL;
    }
    free(paymentgateway_request_compound);
}

cJSON *paymentgateway_request_compound_convertToJSON(paymentgateway_request_compound_t *paymentgateway_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_request_compound->pki_paymentgateway_id
    if(paymentgateway_request_compound->pki_paymentgateway_id) {
    if(cJSON_AddNumberToObject(item, "pkiPaymentgatewayID", *paymentgateway_request_compound->pki_paymentgateway_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // paymentgateway_request_compound->e_paymentgateway_processor
    if (ezmax_api_definition__full_field_e_paymentgateway_processor__NULL == paymentgateway_request_compound->e_paymentgateway_processor) {
        goto fail;
    }
    cJSON *e_paymentgateway_processor_local_JSON = field_e_paymentgateway_processor_convertToJSON(paymentgateway_request_compound->e_paymentgateway_processor);
    if(e_paymentgateway_processor_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "ePaymentgatewayProcessor", e_paymentgateway_processor_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // paymentgateway_request_compound->obj_paymentgateway_description
    if (!paymentgateway_request_compound->obj_paymentgateway_description) {
        goto fail;
    }
    cJSON *obj_paymentgateway_description_local_JSON = multilingual_paymentgateway_description_convertToJSON(paymentgateway_request_compound->obj_paymentgateway_description);
    if(obj_paymentgateway_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPaymentgatewayDescription", obj_paymentgateway_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // paymentgateway_request_compound->obj_creditcardmerchant
    if(paymentgateway_request_compound->obj_creditcardmerchant) {
    cJSON *obj_creditcardmerchant_local_JSON = creditcardmerchant_request_compound_convertToJSON(paymentgateway_request_compound->obj_creditcardmerchant);
    if(obj_creditcardmerchant_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCreditcardmerchant", obj_creditcardmerchant_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentgateway_request_compound_t *paymentgateway_request_compound_parseFromJSON(cJSON *paymentgateway_request_compoundJSON){

    paymentgateway_request_compound_t *paymentgateway_request_compound_local_var = NULL;

    // define the local variable for paymentgateway_request_compound->pki_paymentgateway_id
    int *pki_paymentgateway_id_local_var = NULL;

    // define the local variable for paymentgateway_request_compound->e_paymentgateway_processor
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor_local_nonprim = 0;

    // define the local variable for paymentgateway_request_compound->obj_paymentgateway_description
    multilingual_paymentgateway_description_t *obj_paymentgateway_description_local_nonprim = NULL;

    // define the local variable for paymentgateway_request_compound->obj_creditcardmerchant
    creditcardmerchant_request_compound_t *obj_creditcardmerchant_local_nonprim = NULL;

    // paymentgateway_request_compound->pki_paymentgateway_id
    cJSON *pki_paymentgateway_id = cJSON_GetObjectItemCaseSensitive(paymentgateway_request_compoundJSON, "pkiPaymentgatewayID");
    if (cJSON_IsNull(pki_paymentgateway_id)) {
        pki_paymentgateway_id = NULL;
    }
    if (pki_paymentgateway_id) { 
    if(!cJSON_IsNumber(pki_paymentgateway_id))
    {
    goto end; //Numeric
    }
    pki_paymentgateway_id_local_var = malloc(sizeof(int));
    if(!pki_paymentgateway_id_local_var)
    {
        goto end;
    }
    *pki_paymentgateway_id_local_var = pki_paymentgateway_id->valuedouble;
    }

    // paymentgateway_request_compound->e_paymentgateway_processor
    cJSON *e_paymentgateway_processor = cJSON_GetObjectItemCaseSensitive(paymentgateway_request_compoundJSON, "ePaymentgatewayProcessor");
    if (cJSON_IsNull(e_paymentgateway_processor)) {
        e_paymentgateway_processor = NULL;
    }
    if (!e_paymentgateway_processor) {
        goto end;
    }

    
    e_paymentgateway_processor_local_nonprim = field_e_paymentgateway_processor_parseFromJSON(e_paymentgateway_processor); //custom

    // paymentgateway_request_compound->obj_paymentgateway_description
    cJSON *obj_paymentgateway_description = cJSON_GetObjectItemCaseSensitive(paymentgateway_request_compoundJSON, "objPaymentgatewayDescription");
    if (cJSON_IsNull(obj_paymentgateway_description)) {
        obj_paymentgateway_description = NULL;
    }
    if (!obj_paymentgateway_description) {
        goto end;
    }

    
    obj_paymentgateway_description_local_nonprim = multilingual_paymentgateway_description_parseFromJSON(obj_paymentgateway_description); //nonprimitive

    // paymentgateway_request_compound->obj_creditcardmerchant
    cJSON *obj_creditcardmerchant = cJSON_GetObjectItemCaseSensitive(paymentgateway_request_compoundJSON, "objCreditcardmerchant");
    if (cJSON_IsNull(obj_creditcardmerchant)) {
        obj_creditcardmerchant = NULL;
    }
    if (obj_creditcardmerchant) { 
    obj_creditcardmerchant_local_nonprim = creditcardmerchant_request_compound_parseFromJSON(obj_creditcardmerchant); //nonprimitive
    }



    paymentgateway_request_compound_local_var = paymentgateway_request_compound_create_internal (
        pki_paymentgateway_id_local_var,
        e_paymentgateway_processor_local_nonprim,
        obj_paymentgateway_description_local_nonprim,
        obj_creditcardmerchant ? obj_creditcardmerchant_local_nonprim : NULL
        );

    if (!paymentgateway_request_compound_local_var) {
        goto end;
    }

    return paymentgateway_request_compound_local_var;
end:
    if (pki_paymentgateway_id_local_var) {
        free(pki_paymentgateway_id_local_var);
        pki_paymentgateway_id_local_var = NULL;
    }
    if (e_paymentgateway_processor_local_nonprim) {
        e_paymentgateway_processor_local_nonprim = 0;
    }
    if (obj_paymentgateway_description_local_nonprim) {
        multilingual_paymentgateway_description_free(obj_paymentgateway_description_local_nonprim);
        obj_paymentgateway_description_local_nonprim = NULL;
    }
    if (obj_creditcardmerchant_local_nonprim) {
        creditcardmerchant_request_compound_free(obj_creditcardmerchant_local_nonprim);
        obj_creditcardmerchant_local_nonprim = NULL;
    }
    return NULL;

}
