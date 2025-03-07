#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_list_element.h"



static paymentgateway_list_element_t *paymentgateway_list_element_create_internal(
    int pki_paymentgateway_id,
    int fki_creditcardmerchant_id,
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor,
    char *s_paymentgateway_description_x
    ) {
    paymentgateway_list_element_t *paymentgateway_list_element_local_var = malloc(sizeof(paymentgateway_list_element_t));
    if (!paymentgateway_list_element_local_var) {
        return NULL;
    }
    paymentgateway_list_element_local_var->pki_paymentgateway_id = pki_paymentgateway_id;
    paymentgateway_list_element_local_var->fki_creditcardmerchant_id = fki_creditcardmerchant_id;
    paymentgateway_list_element_local_var->e_paymentgateway_processor = e_paymentgateway_processor;
    paymentgateway_list_element_local_var->s_paymentgateway_description_x = s_paymentgateway_description_x;

    paymentgateway_list_element_local_var->_library_owned = 1;
    return paymentgateway_list_element_local_var;
}

__attribute__((deprecated)) paymentgateway_list_element_t *paymentgateway_list_element_create(
    int pki_paymentgateway_id,
    int fki_creditcardmerchant_id,
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor,
    char *s_paymentgateway_description_x
    ) {
    return paymentgateway_list_element_create_internal (
        pki_paymentgateway_id,
        fki_creditcardmerchant_id,
        e_paymentgateway_processor,
        s_paymentgateway_description_x
        );
}

void paymentgateway_list_element_free(paymentgateway_list_element_t *paymentgateway_list_element) {
    if(NULL == paymentgateway_list_element){
        return ;
    }
    if(paymentgateway_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentgateway_list_element_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentgateway_list_element->s_paymentgateway_description_x) {
        free(paymentgateway_list_element->s_paymentgateway_description_x);
        paymentgateway_list_element->s_paymentgateway_description_x = NULL;
    }
    free(paymentgateway_list_element);
}

cJSON *paymentgateway_list_element_convertToJSON(paymentgateway_list_element_t *paymentgateway_list_element) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_list_element->pki_paymentgateway_id
    if (!paymentgateway_list_element->pki_paymentgateway_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPaymentgatewayID", paymentgateway_list_element->pki_paymentgateway_id) == NULL) {
    goto fail; //Numeric
    }


    // paymentgateway_list_element->fki_creditcardmerchant_id
    if (!paymentgateway_list_element->fki_creditcardmerchant_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCreditcardmerchantID", paymentgateway_list_element->fki_creditcardmerchant_id) == NULL) {
    goto fail; //Numeric
    }


    // paymentgateway_list_element->e_paymentgateway_processor
    if (ezmax_api_definition__full_field_e_paymentgateway_processor__NULL == paymentgateway_list_element->e_paymentgateway_processor) {
        goto fail;
    }
    cJSON *e_paymentgateway_processor_local_JSON = field_e_paymentgateway_processor_convertToJSON(paymentgateway_list_element->e_paymentgateway_processor);
    if(e_paymentgateway_processor_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "ePaymentgatewayProcessor", e_paymentgateway_processor_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // paymentgateway_list_element->s_paymentgateway_description_x
    if (!paymentgateway_list_element->s_paymentgateway_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPaymentgatewayDescriptionX", paymentgateway_list_element->s_paymentgateway_description_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentgateway_list_element_t *paymentgateway_list_element_parseFromJSON(cJSON *paymentgateway_list_elementJSON){

    paymentgateway_list_element_t *paymentgateway_list_element_local_var = NULL;

    // define the local variable for paymentgateway_list_element->e_paymentgateway_processor
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor_local_nonprim = 0;

    // paymentgateway_list_element->pki_paymentgateway_id
    cJSON *pki_paymentgateway_id = cJSON_GetObjectItemCaseSensitive(paymentgateway_list_elementJSON, "pkiPaymentgatewayID");
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

    // paymentgateway_list_element->fki_creditcardmerchant_id
    cJSON *fki_creditcardmerchant_id = cJSON_GetObjectItemCaseSensitive(paymentgateway_list_elementJSON, "fkiCreditcardmerchantID");
    if (cJSON_IsNull(fki_creditcardmerchant_id)) {
        fki_creditcardmerchant_id = NULL;
    }
    if (!fki_creditcardmerchant_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_creditcardmerchant_id))
    {
    goto end; //Numeric
    }

    // paymentgateway_list_element->e_paymentgateway_processor
    cJSON *e_paymentgateway_processor = cJSON_GetObjectItemCaseSensitive(paymentgateway_list_elementJSON, "ePaymentgatewayProcessor");
    if (cJSON_IsNull(e_paymentgateway_processor)) {
        e_paymentgateway_processor = NULL;
    }
    if (!e_paymentgateway_processor) {
        goto end;
    }

    
    e_paymentgateway_processor_local_nonprim = field_e_paymentgateway_processor_parseFromJSON(e_paymentgateway_processor); //custom

    // paymentgateway_list_element->s_paymentgateway_description_x
    cJSON *s_paymentgateway_description_x = cJSON_GetObjectItemCaseSensitive(paymentgateway_list_elementJSON, "sPaymentgatewayDescriptionX");
    if (cJSON_IsNull(s_paymentgateway_description_x)) {
        s_paymentgateway_description_x = NULL;
    }
    if (!s_paymentgateway_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_paymentgateway_description_x))
    {
    goto end; //String
    }


    paymentgateway_list_element_local_var = paymentgateway_list_element_create_internal (
        pki_paymentgateway_id->valuedouble,
        fki_creditcardmerchant_id->valuedouble,
        e_paymentgateway_processor_local_nonprim,
        strdup(s_paymentgateway_description_x->valuestring)
        );

    return paymentgateway_list_element_local_var;
end:
    if (e_paymentgateway_processor_local_nonprim) {
        e_paymentgateway_processor_local_nonprim = 0;
    }
    return NULL;

}
