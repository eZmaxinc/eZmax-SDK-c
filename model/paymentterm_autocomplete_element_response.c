#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_autocomplete_element_response.h"



static paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response_create_internal(
    int *pki_paymentterm_id,
    char *s_paymentterm_description_x,
    int *b_paymentterm_isactive
    ) {
    paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response_local_var = malloc(sizeof(paymentterm_autocomplete_element_response_t));
    if (!paymentterm_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(paymentterm_autocomplete_element_response_local_var, 0, sizeof(paymentterm_autocomplete_element_response_t));
    paymentterm_autocomplete_element_response_local_var->_library_owned = 1;
    paymentterm_autocomplete_element_response_local_var->pki_paymentterm_id = pki_paymentterm_id;
    paymentterm_autocomplete_element_response_local_var->s_paymentterm_description_x = s_paymentterm_description_x;
    paymentterm_autocomplete_element_response_local_var->b_paymentterm_isactive = b_paymentterm_isactive;
    return paymentterm_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response_create(
    int *pki_paymentterm_id,
    char *s_paymentterm_description_x,
    int *b_paymentterm_isactive
    ) {
    int *pki_paymentterm_id_copy = NULL;
    if (pki_paymentterm_id) {
        pki_paymentterm_id_copy = malloc(sizeof(int));
        if (pki_paymentterm_id_copy) *pki_paymentterm_id_copy = *pki_paymentterm_id;
    }
    int *b_paymentterm_isactive_copy = NULL;
    if (b_paymentterm_isactive) {
        b_paymentterm_isactive_copy = malloc(sizeof(int));
        if (b_paymentterm_isactive_copy) *b_paymentterm_isactive_copy = *b_paymentterm_isactive;
    }
    paymentterm_autocomplete_element_response_t *result = paymentterm_autocomplete_element_response_create_internal (
        pki_paymentterm_id_copy,
        s_paymentterm_description_x,
        b_paymentterm_isactive_copy
        );
    if (!result) {
        free(pki_paymentterm_id_copy);
        free(b_paymentterm_isactive_copy);
    }
    return result;
}

void paymentterm_autocomplete_element_response_free(paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response) {
    if(NULL == paymentterm_autocomplete_element_response){
        return ;
    }
    if(paymentterm_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentterm_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_autocomplete_element_response->pki_paymentterm_id) {
        free(paymentterm_autocomplete_element_response->pki_paymentterm_id);
        paymentterm_autocomplete_element_response->pki_paymentterm_id = NULL;
    }
    if (paymentterm_autocomplete_element_response->s_paymentterm_description_x) {
        free(paymentterm_autocomplete_element_response->s_paymentterm_description_x);
        paymentterm_autocomplete_element_response->s_paymentterm_description_x = NULL;
    }
    if (paymentterm_autocomplete_element_response->b_paymentterm_isactive) {
        free(paymentterm_autocomplete_element_response->b_paymentterm_isactive);
        paymentterm_autocomplete_element_response->b_paymentterm_isactive = NULL;
    }
    free(paymentterm_autocomplete_element_response);
}

cJSON *paymentterm_autocomplete_element_response_convertToJSON(paymentterm_autocomplete_element_response_t *paymentterm_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_autocomplete_element_response->pki_paymentterm_id
    if (!paymentterm_autocomplete_element_response->pki_paymentterm_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPaymenttermID", *paymentterm_autocomplete_element_response->pki_paymentterm_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bPaymenttermIsactive", *paymentterm_autocomplete_element_response->b_paymentterm_isactive) == NULL) {
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

    // define the local variable for paymentterm_autocomplete_element_response->pki_paymentterm_id
    int *pki_paymentterm_id_local_var = NULL;

    char *s_paymentterm_description_x_local_str = NULL;

    // define the local variable for paymentterm_autocomplete_element_response->b_paymentterm_isactive
    int *b_paymentterm_isactive_local_var = NULL;

    // paymentterm_autocomplete_element_response->pki_paymentterm_id
    cJSON *pki_paymentterm_id = cJSON_GetObjectItemCaseSensitive(paymentterm_autocomplete_element_responseJSON, "pkiPaymenttermID");
    if (cJSON_IsNull(pki_paymentterm_id)) {
        pki_paymentterm_id = NULL;
    }
    if (!pki_paymentterm_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_paymentterm_id))
    {
    goto end; //Numeric
    }
    pki_paymentterm_id_local_var = malloc(sizeof(int));
    if(!pki_paymentterm_id_local_var)
    {
        goto end;
    }
    *pki_paymentterm_id_local_var = pki_paymentterm_id->valuedouble;

    // paymentterm_autocomplete_element_response->s_paymentterm_description_x
    cJSON *s_paymentterm_description_x = cJSON_GetObjectItemCaseSensitive(paymentterm_autocomplete_element_responseJSON, "sPaymenttermDescriptionX");
    if (cJSON_IsNull(s_paymentterm_description_x)) {
        s_paymentterm_description_x = NULL;
    }
    if (!s_paymentterm_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_paymentterm_description_x))
    {
    goto end; //String
    }

    // paymentterm_autocomplete_element_response->b_paymentterm_isactive
    cJSON *b_paymentterm_isactive = cJSON_GetObjectItemCaseSensitive(paymentterm_autocomplete_element_responseJSON, "bPaymenttermIsactive");
    if (cJSON_IsNull(b_paymentterm_isactive)) {
        b_paymentterm_isactive = NULL;
    }
    if (!b_paymentterm_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_paymentterm_isactive))
    {
    goto end; //Bool
    }
    b_paymentterm_isactive_local_var = malloc(sizeof(int));
    if(!b_paymentterm_isactive_local_var)
    {
        goto end;
    }
    *b_paymentterm_isactive_local_var = b_paymentterm_isactive->valueint;


    if (s_paymentterm_description_x && !cJSON_IsNull(s_paymentterm_description_x)) s_paymentterm_description_x_local_str = strdup(s_paymentterm_description_x->valuestring);

    paymentterm_autocomplete_element_response_local_var = paymentterm_autocomplete_element_response_create_internal (
        pki_paymentterm_id_local_var,
        s_paymentterm_description_x_local_str,
        b_paymentterm_isactive_local_var
        );

    if (!paymentterm_autocomplete_element_response_local_var) {
        goto end;
    }

    return paymentterm_autocomplete_element_response_local_var;
end:
    if (pki_paymentterm_id_local_var) {
        free(pki_paymentterm_id_local_var);
        pki_paymentterm_id_local_var = NULL;
    }
    if (s_paymentterm_description_x_local_str) {
        free(s_paymentterm_description_x_local_str);
        s_paymentterm_description_x_local_str = NULL;
    }
    if (b_paymentterm_isactive_local_var) {
        free(b_paymentterm_isactive_local_var);
        b_paymentterm_isactive_local_var = NULL;
    }
    return NULL;

}
