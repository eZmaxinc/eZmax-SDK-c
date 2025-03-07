#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_response.h"



static paymentgateway_response_t *paymentgateway_response_create_internal(
    int pki_paymentgateway_id,
    int fki_creditcardmerchant_id,
    char *s_creditcardmerchant_description,
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor,
    multilingual_paymentgateway_description_t *obj_paymentgateway_description,
    creditcardmerchant_response_compound_t *obj_creditcardmerchant
    ) {
    paymentgateway_response_t *paymentgateway_response_local_var = malloc(sizeof(paymentgateway_response_t));
    if (!paymentgateway_response_local_var) {
        return NULL;
    }
    paymentgateway_response_local_var->pki_paymentgateway_id = pki_paymentgateway_id;
    paymentgateway_response_local_var->fki_creditcardmerchant_id = fki_creditcardmerchant_id;
    paymentgateway_response_local_var->s_creditcardmerchant_description = s_creditcardmerchant_description;
    paymentgateway_response_local_var->e_paymentgateway_processor = e_paymentgateway_processor;
    paymentgateway_response_local_var->obj_paymentgateway_description = obj_paymentgateway_description;
    paymentgateway_response_local_var->obj_creditcardmerchant = obj_creditcardmerchant;

    paymentgateway_response_local_var->_library_owned = 1;
    return paymentgateway_response_local_var;
}

__attribute__((deprecated)) paymentgateway_response_t *paymentgateway_response_create(
    int pki_paymentgateway_id,
    int fki_creditcardmerchant_id,
    char *s_creditcardmerchant_description,
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor,
    multilingual_paymentgateway_description_t *obj_paymentgateway_description,
    creditcardmerchant_response_compound_t *obj_creditcardmerchant
    ) {
    return paymentgateway_response_create_internal (
        pki_paymentgateway_id,
        fki_creditcardmerchant_id,
        s_creditcardmerchant_description,
        e_paymentgateway_processor,
        obj_paymentgateway_description,
        obj_creditcardmerchant
        );
}

void paymentgateway_response_free(paymentgateway_response_t *paymentgateway_response) {
    if(NULL == paymentgateway_response){
        return ;
    }
    if(paymentgateway_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentgateway_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentgateway_response->s_creditcardmerchant_description) {
        free(paymentgateway_response->s_creditcardmerchant_description);
        paymentgateway_response->s_creditcardmerchant_description = NULL;
    }
    if (paymentgateway_response->obj_paymentgateway_description) {
        multilingual_paymentgateway_description_free(paymentgateway_response->obj_paymentgateway_description);
        paymentgateway_response->obj_paymentgateway_description = NULL;
    }
    if (paymentgateway_response->obj_creditcardmerchant) {
        creditcardmerchant_response_compound_free(paymentgateway_response->obj_creditcardmerchant);
        paymentgateway_response->obj_creditcardmerchant = NULL;
    }
    free(paymentgateway_response);
}

cJSON *paymentgateway_response_convertToJSON(paymentgateway_response_t *paymentgateway_response) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_response->pki_paymentgateway_id
    if (!paymentgateway_response->pki_paymentgateway_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPaymentgatewayID", paymentgateway_response->pki_paymentgateway_id) == NULL) {
    goto fail; //Numeric
    }


    // paymentgateway_response->fki_creditcardmerchant_id
    if(paymentgateway_response->fki_creditcardmerchant_id) {
    if(cJSON_AddNumberToObject(item, "fkiCreditcardmerchantID", paymentgateway_response->fki_creditcardmerchant_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // paymentgateway_response->s_creditcardmerchant_description
    if(paymentgateway_response->s_creditcardmerchant_description) {
    if(cJSON_AddStringToObject(item, "sCreditcardmerchantDescription", paymentgateway_response->s_creditcardmerchant_description) == NULL) {
    goto fail; //String
    }
    }


    // paymentgateway_response->e_paymentgateway_processor
    if (ezmax_api_definition__full_field_e_paymentgateway_processor__NULL == paymentgateway_response->e_paymentgateway_processor) {
        goto fail;
    }
    cJSON *e_paymentgateway_processor_local_JSON = field_e_paymentgateway_processor_convertToJSON(paymentgateway_response->e_paymentgateway_processor);
    if(e_paymentgateway_processor_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "ePaymentgatewayProcessor", e_paymentgateway_processor_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // paymentgateway_response->obj_paymentgateway_description
    if (!paymentgateway_response->obj_paymentgateway_description) {
        goto fail;
    }
    cJSON *obj_paymentgateway_description_local_JSON = multilingual_paymentgateway_description_convertToJSON(paymentgateway_response->obj_paymentgateway_description);
    if(obj_paymentgateway_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPaymentgatewayDescription", obj_paymentgateway_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // paymentgateway_response->obj_creditcardmerchant
    if(paymentgateway_response->obj_creditcardmerchant) {
    cJSON *obj_creditcardmerchant_local_JSON = creditcardmerchant_response_compound_convertToJSON(paymentgateway_response->obj_creditcardmerchant);
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

paymentgateway_response_t *paymentgateway_response_parseFromJSON(cJSON *paymentgateway_responseJSON){

    paymentgateway_response_t *paymentgateway_response_local_var = NULL;

    // define the local variable for paymentgateway_response->e_paymentgateway_processor
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor_local_nonprim = 0;

    // define the local variable for paymentgateway_response->obj_paymentgateway_description
    multilingual_paymentgateway_description_t *obj_paymentgateway_description_local_nonprim = NULL;

    // define the local variable for paymentgateway_response->obj_creditcardmerchant
    creditcardmerchant_response_compound_t *obj_creditcardmerchant_local_nonprim = NULL;

    // paymentgateway_response->pki_paymentgateway_id
    cJSON *pki_paymentgateway_id = cJSON_GetObjectItemCaseSensitive(paymentgateway_responseJSON, "pkiPaymentgatewayID");
    if (cJSON_IsNull(pki_paymentgateway_id)) {
        pki_paymentgateway_id = NULL;
    }
    if (!pki_paymentgateway_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_paymentgateway_id))
    {
    goto end; //Numeric
    }

    // paymentgateway_response->fki_creditcardmerchant_id
    cJSON *fki_creditcardmerchant_id = cJSON_GetObjectItemCaseSensitive(paymentgateway_responseJSON, "fkiCreditcardmerchantID");
    if (cJSON_IsNull(fki_creditcardmerchant_id)) {
        fki_creditcardmerchant_id = NULL;
    }
    if (fki_creditcardmerchant_id) { 
    if(!cJSON_IsNumber(fki_creditcardmerchant_id))
    {
    goto end; //Numeric
    }
    }

    // paymentgateway_response->s_creditcardmerchant_description
    cJSON *s_creditcardmerchant_description = cJSON_GetObjectItemCaseSensitive(paymentgateway_responseJSON, "sCreditcardmerchantDescription");
    if (cJSON_IsNull(s_creditcardmerchant_description)) {
        s_creditcardmerchant_description = NULL;
    }
    if (s_creditcardmerchant_description) { 
    if(!cJSON_IsString(s_creditcardmerchant_description) && !cJSON_IsNull(s_creditcardmerchant_description))
    {
    goto end; //String
    }
    }

    // paymentgateway_response->e_paymentgateway_processor
    cJSON *e_paymentgateway_processor = cJSON_GetObjectItemCaseSensitive(paymentgateway_responseJSON, "ePaymentgatewayProcessor");
    if (cJSON_IsNull(e_paymentgateway_processor)) {
        e_paymentgateway_processor = NULL;
    }
    if (!e_paymentgateway_processor) {
        goto end;
    }

    
    e_paymentgateway_processor_local_nonprim = field_e_paymentgateway_processor_parseFromJSON(e_paymentgateway_processor); //custom

    // paymentgateway_response->obj_paymentgateway_description
    cJSON *obj_paymentgateway_description = cJSON_GetObjectItemCaseSensitive(paymentgateway_responseJSON, "objPaymentgatewayDescription");
    if (cJSON_IsNull(obj_paymentgateway_description)) {
        obj_paymentgateway_description = NULL;
    }
    if (!obj_paymentgateway_description) {
        goto end;
    }

    
    obj_paymentgateway_description_local_nonprim = multilingual_paymentgateway_description_parseFromJSON(obj_paymentgateway_description); //nonprimitive

    // paymentgateway_response->obj_creditcardmerchant
    cJSON *obj_creditcardmerchant = cJSON_GetObjectItemCaseSensitive(paymentgateway_responseJSON, "objCreditcardmerchant");
    if (cJSON_IsNull(obj_creditcardmerchant)) {
        obj_creditcardmerchant = NULL;
    }
    if (obj_creditcardmerchant) { 
    obj_creditcardmerchant_local_nonprim = creditcardmerchant_response_compound_parseFromJSON(obj_creditcardmerchant); //nonprimitive
    }


    paymentgateway_response_local_var = paymentgateway_response_create_internal (
        pki_paymentgateway_id->valuedouble,
        fki_creditcardmerchant_id ? fki_creditcardmerchant_id->valuedouble : 0,
        s_creditcardmerchant_description && !cJSON_IsNull(s_creditcardmerchant_description) ? strdup(s_creditcardmerchant_description->valuestring) : NULL,
        e_paymentgateway_processor_local_nonprim,
        obj_paymentgateway_description_local_nonprim,
        obj_creditcardmerchant ? obj_creditcardmerchant_local_nonprim : NULL
        );

    return paymentgateway_response_local_var;
end:
    if (e_paymentgateway_processor_local_nonprim) {
        e_paymentgateway_processor_local_nonprim = 0;
    }
    if (obj_paymentgateway_description_local_nonprim) {
        multilingual_paymentgateway_description_free(obj_paymentgateway_description_local_nonprim);
        obj_paymentgateway_description_local_nonprim = NULL;
    }
    if (obj_creditcardmerchant_local_nonprim) {
        creditcardmerchant_response_compound_free(obj_creditcardmerchant_local_nonprim);
        obj_creditcardmerchant_local_nonprim = NULL;
    }
    return NULL;

}
