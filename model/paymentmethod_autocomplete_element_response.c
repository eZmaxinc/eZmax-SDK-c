#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentmethod_autocomplete_element_response.h"



static paymentmethod_autocomplete_element_response_t *paymentmethod_autocomplete_element_response_create_internal(
    int pki_paymentmethod_id,
    char *s_paymentmethod_description_x,
    int b_paymentmethod_isactive
    ) {
    paymentmethod_autocomplete_element_response_t *paymentmethod_autocomplete_element_response_local_var = malloc(sizeof(paymentmethod_autocomplete_element_response_t));
    if (!paymentmethod_autocomplete_element_response_local_var) {
        return NULL;
    }
    paymentmethod_autocomplete_element_response_local_var->pki_paymentmethod_id = pki_paymentmethod_id;
    paymentmethod_autocomplete_element_response_local_var->s_paymentmethod_description_x = s_paymentmethod_description_x;
    paymentmethod_autocomplete_element_response_local_var->b_paymentmethod_isactive = b_paymentmethod_isactive;

    paymentmethod_autocomplete_element_response_local_var->_library_owned = 1;
    return paymentmethod_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) paymentmethod_autocomplete_element_response_t *paymentmethod_autocomplete_element_response_create(
    int pki_paymentmethod_id,
    char *s_paymentmethod_description_x,
    int b_paymentmethod_isactive
    ) {
    return paymentmethod_autocomplete_element_response_create_internal (
        pki_paymentmethod_id,
        s_paymentmethod_description_x,
        b_paymentmethod_isactive
        );
}

void paymentmethod_autocomplete_element_response_free(paymentmethod_autocomplete_element_response_t *paymentmethod_autocomplete_element_response) {
    if(NULL == paymentmethod_autocomplete_element_response){
        return ;
    }
    if(paymentmethod_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentmethod_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentmethod_autocomplete_element_response->s_paymentmethod_description_x) {
        free(paymentmethod_autocomplete_element_response->s_paymentmethod_description_x);
        paymentmethod_autocomplete_element_response->s_paymentmethod_description_x = NULL;
    }
    free(paymentmethod_autocomplete_element_response);
}

cJSON *paymentmethod_autocomplete_element_response_convertToJSON(paymentmethod_autocomplete_element_response_t *paymentmethod_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // paymentmethod_autocomplete_element_response->pki_paymentmethod_id
    if (!paymentmethod_autocomplete_element_response->pki_paymentmethod_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPaymentmethodID", paymentmethod_autocomplete_element_response->pki_paymentmethod_id) == NULL) {
    goto fail; //Numeric
    }


    // paymentmethod_autocomplete_element_response->s_paymentmethod_description_x
    if (!paymentmethod_autocomplete_element_response->s_paymentmethod_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPaymentmethodDescriptionX", paymentmethod_autocomplete_element_response->s_paymentmethod_description_x) == NULL) {
    goto fail; //String
    }


    // paymentmethod_autocomplete_element_response->b_paymentmethod_isactive
    if (!paymentmethod_autocomplete_element_response->b_paymentmethod_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPaymentmethodIsactive", paymentmethod_autocomplete_element_response->b_paymentmethod_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentmethod_autocomplete_element_response_t *paymentmethod_autocomplete_element_response_parseFromJSON(cJSON *paymentmethod_autocomplete_element_responseJSON){

    paymentmethod_autocomplete_element_response_t *paymentmethod_autocomplete_element_response_local_var = NULL;

    // paymentmethod_autocomplete_element_response->pki_paymentmethod_id
    cJSON *pki_paymentmethod_id = cJSON_GetObjectItemCaseSensitive(paymentmethod_autocomplete_element_responseJSON, "pkiPaymentmethodID");
    if (cJSON_IsNull(pki_paymentmethod_id)) {
        pki_paymentmethod_id = NULL;
    }
    if (!pki_paymentmethod_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_paymentmethod_id))
    {
    goto end; //Numeric
    }

    // paymentmethod_autocomplete_element_response->s_paymentmethod_description_x
    cJSON *s_paymentmethod_description_x = cJSON_GetObjectItemCaseSensitive(paymentmethod_autocomplete_element_responseJSON, "sPaymentmethodDescriptionX");
    if (cJSON_IsNull(s_paymentmethod_description_x)) {
        s_paymentmethod_description_x = NULL;
    }
    if (!s_paymentmethod_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_paymentmethod_description_x))
    {
    goto end; //String
    }

    // paymentmethod_autocomplete_element_response->b_paymentmethod_isactive
    cJSON *b_paymentmethod_isactive = cJSON_GetObjectItemCaseSensitive(paymentmethod_autocomplete_element_responseJSON, "bPaymentmethodIsactive");
    if (cJSON_IsNull(b_paymentmethod_isactive)) {
        b_paymentmethod_isactive = NULL;
    }
    if (!b_paymentmethod_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_paymentmethod_isactive))
    {
    goto end; //Bool
    }


    paymentmethod_autocomplete_element_response_local_var = paymentmethod_autocomplete_element_response_create_internal (
        pki_paymentmethod_id->valuedouble,
        strdup(s_paymentmethod_description_x->valuestring),
        b_paymentmethod_isactive->valueint
        );

    return paymentmethod_autocomplete_element_response_local_var;
end:
    return NULL;

}
