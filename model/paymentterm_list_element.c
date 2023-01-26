#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_list_element.h"



paymentterm_list_element_t *paymentterm_list_element_create(
    int pki_paymentterm_id,
    char *s_paymentterm_code,
    char *s_paymentterm_description_x,
    int b_paymentterm_isactive
    ) {
    paymentterm_list_element_t *paymentterm_list_element_local_var = malloc(sizeof(paymentterm_list_element_t));
    if (!paymentterm_list_element_local_var) {
        return NULL;
    }
    paymentterm_list_element_local_var->pki_paymentterm_id = pki_paymentterm_id;
    paymentterm_list_element_local_var->s_paymentterm_code = s_paymentterm_code;
    paymentterm_list_element_local_var->s_paymentterm_description_x = s_paymentterm_description_x;
    paymentterm_list_element_local_var->b_paymentterm_isactive = b_paymentterm_isactive;

    return paymentterm_list_element_local_var;
}


void paymentterm_list_element_free(paymentterm_list_element_t *paymentterm_list_element) {
    if(NULL == paymentterm_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_list_element->s_paymentterm_code) {
        free(paymentterm_list_element->s_paymentterm_code);
        paymentterm_list_element->s_paymentterm_code = NULL;
    }
    if (paymentterm_list_element->s_paymentterm_description_x) {
        free(paymentterm_list_element->s_paymentterm_description_x);
        paymentterm_list_element->s_paymentterm_description_x = NULL;
    }
    free(paymentterm_list_element);
}

cJSON *paymentterm_list_element_convertToJSON(paymentterm_list_element_t *paymentterm_list_element) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_list_element->pki_paymentterm_id
    if (!paymentterm_list_element->pki_paymentterm_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPaymenttermID", paymentterm_list_element->pki_paymentterm_id) == NULL) {
    goto fail; //Numeric
    }


    // paymentterm_list_element->s_paymentterm_code
    if (!paymentterm_list_element->s_paymentterm_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPaymenttermCode", paymentterm_list_element->s_paymentterm_code) == NULL) {
    goto fail; //String
    }


    // paymentterm_list_element->s_paymentterm_description_x
    if (!paymentterm_list_element->s_paymentterm_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPaymenttermDescriptionX", paymentterm_list_element->s_paymentterm_description_x) == NULL) {
    goto fail; //String
    }


    // paymentterm_list_element->b_paymentterm_isactive
    if (!paymentterm_list_element->b_paymentterm_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPaymenttermIsactive", paymentterm_list_element->b_paymentterm_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentterm_list_element_t *paymentterm_list_element_parseFromJSON(cJSON *paymentterm_list_elementJSON){

    paymentterm_list_element_t *paymentterm_list_element_local_var = NULL;

    // paymentterm_list_element->pki_paymentterm_id
    cJSON *pki_paymentterm_id = cJSON_GetObjectItemCaseSensitive(paymentterm_list_elementJSON, "pkiPaymenttermID");
    if (!pki_paymentterm_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_paymentterm_id))
    {
    goto end; //Numeric
    }

    // paymentterm_list_element->s_paymentterm_code
    cJSON *s_paymentterm_code = cJSON_GetObjectItemCaseSensitive(paymentterm_list_elementJSON, "sPaymenttermCode");
    if (!s_paymentterm_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_paymentterm_code))
    {
    goto end; //String
    }

    // paymentterm_list_element->s_paymentterm_description_x
    cJSON *s_paymentterm_description_x = cJSON_GetObjectItemCaseSensitive(paymentterm_list_elementJSON, "sPaymenttermDescriptionX");
    if (!s_paymentterm_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_paymentterm_description_x))
    {
    goto end; //String
    }

    // paymentterm_list_element->b_paymentterm_isactive
    cJSON *b_paymentterm_isactive = cJSON_GetObjectItemCaseSensitive(paymentterm_list_elementJSON, "bPaymenttermIsactive");
    if (!b_paymentterm_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_paymentterm_isactive))
    {
    goto end; //Bool
    }


    paymentterm_list_element_local_var = paymentterm_list_element_create (
        pki_paymentterm_id->valuedouble,
        strdup(s_paymentterm_code->valuestring),
        strdup(s_paymentterm_description_x->valuestring),
        b_paymentterm_isactive->valueint
        );

    return paymentterm_list_element_local_var;
end:
    return NULL;

}
