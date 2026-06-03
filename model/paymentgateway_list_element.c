#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_list_element.h"



static paymentgateway_list_element_t *paymentgateway_list_element_create_internal(
    int *pki_paymentgateway_id,
    int *fki_creditcardmerchant_id,
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor,
    char *s_paymentgateway_description_x,
    int *b_paymentgateway_isactive
    ) {
    paymentgateway_list_element_t *paymentgateway_list_element_local_var = malloc(sizeof(paymentgateway_list_element_t));
    if (!paymentgateway_list_element_local_var) {
        return NULL;
    }
    memset(paymentgateway_list_element_local_var, 0, sizeof(paymentgateway_list_element_t));
    paymentgateway_list_element_local_var->_library_owned = 1;
    paymentgateway_list_element_local_var->pki_paymentgateway_id = pki_paymentgateway_id;
    paymentgateway_list_element_local_var->fki_creditcardmerchant_id = fki_creditcardmerchant_id;
    paymentgateway_list_element_local_var->e_paymentgateway_processor = e_paymentgateway_processor;
    paymentgateway_list_element_local_var->s_paymentgateway_description_x = s_paymentgateway_description_x;
    paymentgateway_list_element_local_var->b_paymentgateway_isactive = b_paymentgateway_isactive;
    return paymentgateway_list_element_local_var;
}

__attribute__((deprecated)) paymentgateway_list_element_t *paymentgateway_list_element_create(
    int *pki_paymentgateway_id,
    int *fki_creditcardmerchant_id,
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor,
    char *s_paymentgateway_description_x,
    int *b_paymentgateway_isactive
    ) {
    int *pki_paymentgateway_id_copy = NULL;
    if (pki_paymentgateway_id) {
        pki_paymentgateway_id_copy = malloc(sizeof(int));
        if (pki_paymentgateway_id_copy) *pki_paymentgateway_id_copy = *pki_paymentgateway_id;
    }
    int *fki_creditcardmerchant_id_copy = NULL;
    if (fki_creditcardmerchant_id) {
        fki_creditcardmerchant_id_copy = malloc(sizeof(int));
        if (fki_creditcardmerchant_id_copy) *fki_creditcardmerchant_id_copy = *fki_creditcardmerchant_id;
    }
    int *b_paymentgateway_isactive_copy = NULL;
    if (b_paymentgateway_isactive) {
        b_paymentgateway_isactive_copy = malloc(sizeof(int));
        if (b_paymentgateway_isactive_copy) *b_paymentgateway_isactive_copy = *b_paymentgateway_isactive;
    }
    paymentgateway_list_element_t *result = paymentgateway_list_element_create_internal (
        pki_paymentgateway_id_copy,
        fki_creditcardmerchant_id_copy,
        e_paymentgateway_processor,
        s_paymentgateway_description_x,
        b_paymentgateway_isactive_copy
        );
    if (!result) {
        free(pki_paymentgateway_id_copy);
        free(fki_creditcardmerchant_id_copy);
        free(b_paymentgateway_isactive_copy);
    }
    return result;
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
    if (paymentgateway_list_element->pki_paymentgateway_id) {
        free(paymentgateway_list_element->pki_paymentgateway_id);
        paymentgateway_list_element->pki_paymentgateway_id = NULL;
    }
    if (paymentgateway_list_element->fki_creditcardmerchant_id) {
        free(paymentgateway_list_element->fki_creditcardmerchant_id);
        paymentgateway_list_element->fki_creditcardmerchant_id = NULL;
    }
    if (paymentgateway_list_element->s_paymentgateway_description_x) {
        free(paymentgateway_list_element->s_paymentgateway_description_x);
        paymentgateway_list_element->s_paymentgateway_description_x = NULL;
    }
    if (paymentgateway_list_element->b_paymentgateway_isactive) {
        free(paymentgateway_list_element->b_paymentgateway_isactive);
        paymentgateway_list_element->b_paymentgateway_isactive = NULL;
    }
    free(paymentgateway_list_element);
}

cJSON *paymentgateway_list_element_convertToJSON(paymentgateway_list_element_t *paymentgateway_list_element) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_list_element->pki_paymentgateway_id
    if (!paymentgateway_list_element->pki_paymentgateway_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPaymentgatewayID", *paymentgateway_list_element->pki_paymentgateway_id) == NULL) {
    goto fail; //Numeric
    }


    // paymentgateway_list_element->fki_creditcardmerchant_id
    if (!paymentgateway_list_element->fki_creditcardmerchant_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiCreditcardmerchantID", *paymentgateway_list_element->fki_creditcardmerchant_id) == NULL) {
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


    // paymentgateway_list_element->b_paymentgateway_isactive
    if (!paymentgateway_list_element->b_paymentgateway_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPaymentgatewayIsactive", *paymentgateway_list_element->b_paymentgateway_isactive) == NULL) {
    goto fail; //Bool
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

    // define the local variable for paymentgateway_list_element->pki_paymentgateway_id
    int *pki_paymentgateway_id_local_var = NULL;

    // define the local variable for paymentgateway_list_element->fki_creditcardmerchant_id
    int *fki_creditcardmerchant_id_local_var = NULL;

    // define the local variable for paymentgateway_list_element->e_paymentgateway_processor
    ezmax_api_definition__full_field_e_paymentgateway_processor__e e_paymentgateway_processor_local_nonprim = 0;

    char *s_paymentgateway_description_x_local_str = NULL;

    // define the local variable for paymentgateway_list_element->b_paymentgateway_isactive
    int *b_paymentgateway_isactive_local_var = NULL;

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
    pki_paymentgateway_id_local_var = malloc(sizeof(int));
    if(!pki_paymentgateway_id_local_var)
    {
        goto end;
    }
    *pki_paymentgateway_id_local_var = pki_paymentgateway_id->valuedouble;

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
    fki_creditcardmerchant_id_local_var = malloc(sizeof(int));
    if(!fki_creditcardmerchant_id_local_var)
    {
        goto end;
    }
    *fki_creditcardmerchant_id_local_var = fki_creditcardmerchant_id->valuedouble;

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

    // paymentgateway_list_element->b_paymentgateway_isactive
    cJSON *b_paymentgateway_isactive = cJSON_GetObjectItemCaseSensitive(paymentgateway_list_elementJSON, "bPaymentgatewayIsactive");
    if (cJSON_IsNull(b_paymentgateway_isactive)) {
        b_paymentgateway_isactive = NULL;
    }
    if (!b_paymentgateway_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_paymentgateway_isactive))
    {
    goto end; //Bool
    }
    b_paymentgateway_isactive_local_var = malloc(sizeof(int));
    if(!b_paymentgateway_isactive_local_var)
    {
        goto end;
    }
    *b_paymentgateway_isactive_local_var = b_paymentgateway_isactive->valueint;


    if (s_paymentgateway_description_x && !cJSON_IsNull(s_paymentgateway_description_x)) s_paymentgateway_description_x_local_str = strdup(s_paymentgateway_description_x->valuestring);

    paymentgateway_list_element_local_var = paymentgateway_list_element_create_internal (
        pki_paymentgateway_id_local_var,
        fki_creditcardmerchant_id_local_var,
        e_paymentgateway_processor_local_nonprim,
        s_paymentgateway_description_x_local_str,
        b_paymentgateway_isactive_local_var
        );

    if (!paymentgateway_list_element_local_var) {
        goto end;
    }

    return paymentgateway_list_element_local_var;
end:
    if (pki_paymentgateway_id_local_var) {
        free(pki_paymentgateway_id_local_var);
        pki_paymentgateway_id_local_var = NULL;
    }
    if (fki_creditcardmerchant_id_local_var) {
        free(fki_creditcardmerchant_id_local_var);
        fki_creditcardmerchant_id_local_var = NULL;
    }
    if (e_paymentgateway_processor_local_nonprim) {
        e_paymentgateway_processor_local_nonprim = 0;
    }
    if (s_paymentgateway_description_x_local_str) {
        free(s_paymentgateway_description_x_local_str);
        s_paymentgateway_description_x_local_str = NULL;
    }
    if (b_paymentgateway_isactive_local_var) {
        free(b_paymentgateway_isactive_local_var);
        b_paymentgateway_isactive_local_var = NULL;
    }
    return NULL;

}
