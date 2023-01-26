#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_autocomplete_element_response.h"



paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response_create(
    int pki_paymentterm_id,
    char *s_paymentterm_description_x,
    int b_paymentterm_isactive
    ) {
    paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response_local_var = malloc(sizeof(paymentterm_autocomplete_element_response_t));
    if (!paymentterm_autocomplete_element_response_local_var) {
        return NULL;
    }
    paymentterm_autocomplete_element_response_local_var->pki_paymentterm_id = pki_paymentterm_id;
    paymentterm_autocomplete_element_response_local_var->s_paymentterm_description_x = s_paymentterm_description_x;
    paymentterm_autocomplete_element_response_local_var->b_paymentterm_isactive = b_paymentterm_isactive;

    return paymentterm_autocomplete_element_response_local_var;
}


void paymentterm_autocomplete_element_response_free(paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response) {
    if(NULL == paymentterm_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_autocomplete_element_response->s_paymentterm_description_x) {
        free(paymentterm_autocomplete_element_response->s_paymentterm_description_x);
        paymentterm_autocomplete_element_response->s_paymentterm_description_x = NULL;
    }
    free(paymentterm_autocomplete_element_response);
}

cJSON *paymentterm_autocomplete_element_response_convertToJSON(paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_autocomplete_element_response->pki_paymentterm_id
    if (!paymentterm_autocomplete_element_response->pki_paymentterm_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPaymenttermID", paymentterm_autocomplete_element_response->pki_paymentterm_id) == NULL) {
    goto fail; //Numeric
    }


    // paymentterm_autocomplete_element_response->s_paymentterm_description_x
    if (!paymentterm_autocomplete_element_response->s_paymentterm_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPaymenttermDescriptionX", paymentterm_autocomplete_element_response->s_paymentterm_description_x) == NULL) {
    goto fail; //String
    }


    // paymentterm_autocomplete_element_response->b_paymentterm_isactive
    if (!paymentterm_autocomplete_element_response->b_paymentterm_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPaymenttermIsactive", paymentterm_autocomplete_element_response->b_paymentterm_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response_parseFromJSON(cJSON *paymentterm_autocomplete_element_responseJSON){

    paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response_local_var = NULL;

    // paymentterm_autocomplete_element_response->pki_paymentterm_id
    cJSON *pki_paymentterm_id = cJSON_GetObjectItemCaseSensitive(paymentterm_autocomplete_element_responseJSON, "pkiPaymenttermID");
    if (!pki_paymentterm_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_paymentterm_id))
    {
    goto end; //Numeric
    }

    // paymentterm_autocomplete_element_response->s_paymentterm_description_x
    cJSON *s_paymentterm_description_x = cJSON_GetObjectItemCaseSensitive(paymentterm_autocomplete_element_responseJSON, "sPaymenttermDescriptionX");
    if (!s_paymentterm_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_paymentterm_description_x))
    {
    goto end; //String
    }

    // paymentterm_autocomplete_element_response->b_paymentterm_isactive
    cJSON *b_paymentterm_isactive = cJSON_GetObjectItemCaseSensitive(paymentterm_autocomplete_element_responseJSON, "bPaymenttermIsactive");
    if (!b_paymentterm_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_paymentterm_isactive))
    {
    goto end; //Bool
    }


    paymentterm_autocomplete_element_response_local_var = paymentterm_autocomplete_element_response_create (
        pki_paymentterm_id->valuedouble,
        strdup(s_paymentterm_description_x->valuestring),
        b_paymentterm_isactive->valueint
        );

    return paymentterm_autocomplete_element_response_local_var;
end:
    return NULL;

}
