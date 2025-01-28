#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_list_element.h"



static paymentterm_list_element_t *paymentterm_list_element_create_internal(
    int pki_paymentterm_id,
    char *s_paymentterm_code,
    ezmax_api_definition__full_field_e_paymentterm_type__e e_paymentterm_type,
    int i_paymentterm_day,
    char *s_paymentterm_description_x,
    int b_paymentterm_isactive
    ) {
    paymentterm_list_element_t *paymentterm_list_element_local_var = malloc(sizeof(paymentterm_list_element_t));
    if (!paymentterm_list_element_local_var) {
        return NULL;
    }
    paymentterm_list_element_local_var->pki_paymentterm_id = pki_paymentterm_id;
    paymentterm_list_element_local_var->s_paymentterm_code = s_paymentterm_code;
    paymentterm_list_element_local_var->e_paymentterm_type = e_paymentterm_type;
    paymentterm_list_element_local_var->i_paymentterm_day = i_paymentterm_day;
    paymentterm_list_element_local_var->s_paymentterm_description_x = s_paymentterm_description_x;
    paymentterm_list_element_local_var->b_paymentterm_isactive = b_paymentterm_isactive;

    paymentterm_list_element_local_var->_library_owned = 1;
    return paymentterm_list_element_local_var;
}

__attribute__((deprecated)) paymentterm_list_element_t *paymentterm_list_element_create(
    int pki_paymentterm_id,
    char *s_paymentterm_code,
    ezmax_api_definition__full_field_e_paymentterm_type__e e_paymentterm_type,
    int i_paymentterm_day,
    char *s_paymentterm_description_x,
    int b_paymentterm_isactive
    ) {
    return paymentterm_list_element_create_internal (
        pki_paymentterm_id,
        s_paymentterm_code,
        e_paymentterm_type,
        i_paymentterm_day,
        s_paymentterm_description_x,
        b_paymentterm_isactive
        );
}

void paymentterm_list_element_free(paymentterm_list_element_t *paymentterm_list_element) {
    if(NULL == paymentterm_list_element){
        return ;
    }
    if(paymentterm_list_element->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentterm_list_element_free");
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


    // paymentterm_list_element->e_paymentterm_type
    if (ezmax_api_definition__full_field_e_paymentterm_type__NULL == paymentterm_list_element->e_paymentterm_type) {
        goto fail;
    }
    cJSON *e_paymentterm_type_local_JSON = field_e_paymentterm_type_convertToJSON(paymentterm_list_element->e_paymentterm_type);
    if(e_paymentterm_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "ePaymenttermType", e_paymentterm_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // paymentterm_list_element->i_paymentterm_day
    if (!paymentterm_list_element->i_paymentterm_day) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iPaymenttermDay", paymentterm_list_element->i_paymentterm_day) == NULL) {
    goto fail; //Numeric
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

    // define the local variable for paymentterm_list_element->e_paymentterm_type
    ezmax_api_definition__full_field_e_paymentterm_type__e e_paymentterm_type_local_nonprim = 0;

    // paymentterm_list_element->pki_paymentterm_id
    cJSON *pki_paymentterm_id = cJSON_GetObjectItemCaseSensitive(paymentterm_list_elementJSON, "pkiPaymenttermID");
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

    // paymentterm_list_element->s_paymentterm_code
    cJSON *s_paymentterm_code = cJSON_GetObjectItemCaseSensitive(paymentterm_list_elementJSON, "sPaymenttermCode");
    if (cJSON_IsNull(s_paymentterm_code)) {
        s_paymentterm_code = NULL;
    }
    if (!s_paymentterm_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_paymentterm_code))
    {
    goto end; //String
    }

    // paymentterm_list_element->e_paymentterm_type
    cJSON *e_paymentterm_type = cJSON_GetObjectItemCaseSensitive(paymentterm_list_elementJSON, "ePaymenttermType");
    if (cJSON_IsNull(e_paymentterm_type)) {
        e_paymentterm_type = NULL;
    }
    if (!e_paymentterm_type) {
        goto end;
    }

    
    e_paymentterm_type_local_nonprim = field_e_paymentterm_type_parseFromJSON(e_paymentterm_type); //custom

    // paymentterm_list_element->i_paymentterm_day
    cJSON *i_paymentterm_day = cJSON_GetObjectItemCaseSensitive(paymentterm_list_elementJSON, "iPaymenttermDay");
    if (cJSON_IsNull(i_paymentterm_day)) {
        i_paymentterm_day = NULL;
    }
    if (!i_paymentterm_day) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_paymentterm_day))
    {
    goto end; //Numeric
    }

    // paymentterm_list_element->s_paymentterm_description_x
    cJSON *s_paymentterm_description_x = cJSON_GetObjectItemCaseSensitive(paymentterm_list_elementJSON, "sPaymenttermDescriptionX");
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

    // paymentterm_list_element->b_paymentterm_isactive
    cJSON *b_paymentterm_isactive = cJSON_GetObjectItemCaseSensitive(paymentterm_list_elementJSON, "bPaymenttermIsactive");
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


    paymentterm_list_element_local_var = paymentterm_list_element_create_internal (
        pki_paymentterm_id->valuedouble,
        strdup(s_paymentterm_code->valuestring),
        e_paymentterm_type_local_nonprim,
        i_paymentterm_day->valuedouble,
        strdup(s_paymentterm_description_x->valuestring),
        b_paymentterm_isactive->valueint
        );

    return paymentterm_list_element_local_var;
end:
    if (e_paymentterm_type_local_nonprim) {
        e_paymentterm_type_local_nonprim = 0;
    }
    return NULL;

}
