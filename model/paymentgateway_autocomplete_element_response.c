#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentgateway_autocomplete_element_response.h"



static paymentgateway_autocomplete_element_response_t *paymentgateway_autocomplete_element_response_create_internal(
    int pki_paymentgateway_id,
    char *s_paymentgateway_description_x,
    int b_paymentgateway_isactive
    ) {
    paymentgateway_autocomplete_element_response_t *paymentgateway_autocomplete_element_response_local_var = malloc(sizeof(paymentgateway_autocomplete_element_response_t));
    if (!paymentgateway_autocomplete_element_response_local_var) {
        return NULL;
    }
    paymentgateway_autocomplete_element_response_local_var->pki_paymentgateway_id = pki_paymentgateway_id;
    paymentgateway_autocomplete_element_response_local_var->s_paymentgateway_description_x = s_paymentgateway_description_x;
    paymentgateway_autocomplete_element_response_local_var->b_paymentgateway_isactive = b_paymentgateway_isactive;

    paymentgateway_autocomplete_element_response_local_var->_library_owned = 1;
    return paymentgateway_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) paymentgateway_autocomplete_element_response_t *paymentgateway_autocomplete_element_response_create(
    int pki_paymentgateway_id,
    char *s_paymentgateway_description_x,
    int b_paymentgateway_isactive
    ) {
    return paymentgateway_autocomplete_element_response_create_internal (
        pki_paymentgateway_id,
        s_paymentgateway_description_x,
        b_paymentgateway_isactive
        );
}

void paymentgateway_autocomplete_element_response_free(paymentgateway_autocomplete_element_response_t *paymentgateway_autocomplete_element_response) {
    if(NULL == paymentgateway_autocomplete_element_response){
        return ;
    }
    if(paymentgateway_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentgateway_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentgateway_autocomplete_element_response->s_paymentgateway_description_x) {
        free(paymentgateway_autocomplete_element_response->s_paymentgateway_description_x);
        paymentgateway_autocomplete_element_response->s_paymentgateway_description_x = NULL;
    }
    free(paymentgateway_autocomplete_element_response);
}

cJSON *paymentgateway_autocomplete_element_response_convertToJSON(paymentgateway_autocomplete_element_response_t *paymentgateway_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // paymentgateway_autocomplete_element_response->pki_paymentgateway_id
    if (!paymentgateway_autocomplete_element_response->pki_paymentgateway_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPaymentgatewayID", paymentgateway_autocomplete_element_response->pki_paymentgateway_id) == NULL) {
    goto fail; //Numeric
    }


    // paymentgateway_autocomplete_element_response->s_paymentgateway_description_x
    if (!paymentgateway_autocomplete_element_response->s_paymentgateway_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPaymentgatewayDescriptionX", paymentgateway_autocomplete_element_response->s_paymentgateway_description_x) == NULL) {
    goto fail; //String
    }


    // paymentgateway_autocomplete_element_response->b_paymentgateway_isactive
    if (!paymentgateway_autocomplete_element_response->b_paymentgateway_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPaymentgatewayIsactive", paymentgateway_autocomplete_element_response->b_paymentgateway_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentgateway_autocomplete_element_response_t *paymentgateway_autocomplete_element_response_parseFromJSON(cJSON *paymentgateway_autocomplete_element_responseJSON){

    paymentgateway_autocomplete_element_response_t *paymentgateway_autocomplete_element_response_local_var = NULL;

    // paymentgateway_autocomplete_element_response->pki_paymentgateway_id
    cJSON *pki_paymentgateway_id = cJSON_GetObjectItemCaseSensitive(paymentgateway_autocomplete_element_responseJSON, "pkiPaymentgatewayID");
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

    // paymentgateway_autocomplete_element_response->s_paymentgateway_description_x
    cJSON *s_paymentgateway_description_x = cJSON_GetObjectItemCaseSensitive(paymentgateway_autocomplete_element_responseJSON, "sPaymentgatewayDescriptionX");
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

    // paymentgateway_autocomplete_element_response->b_paymentgateway_isactive
    cJSON *b_paymentgateway_isactive = cJSON_GetObjectItemCaseSensitive(paymentgateway_autocomplete_element_responseJSON, "bPaymentgatewayIsactive");
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


    paymentgateway_autocomplete_element_response_local_var = paymentgateway_autocomplete_element_response_create_internal (
        pki_paymentgateway_id->valuedouble,
        strdup(s_paymentgateway_description_x->valuestring),
        b_paymentgateway_isactive->valueint
        );

    return paymentgateway_autocomplete_element_response_local_var;
end:
    return NULL;

}
