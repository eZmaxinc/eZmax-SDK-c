#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_list_element.h"


char* e_paymentterm_typepaymentterm_list_element_ToString(ezmax_api_definition__full_paymentterm_list_element__e e_paymentterm_type) {
    char* e_paymentterm_typeArray[] =  { "NULL", "Days", "Dayofthemonth" };
    return e_paymentterm_typeArray[e_paymentterm_type];
}

ezmax_api_definition__full_paymentterm_list_element__e e_paymentterm_typepaymentterm_list_element_FromString(char* e_paymentterm_type){
    int stringToReturn = 0;
    char *e_paymentterm_typeArray[] =  { "NULL", "Days", "Dayofthemonth" };
    size_t sizeofArray = sizeof(e_paymentterm_typeArray) / sizeof(e_paymentterm_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_paymentterm_type, e_paymentterm_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

paymentterm_list_element_t *paymentterm_list_element_create(
    int pki_paymentterm_id,
    char *s_paymentterm_code,
    field_e_paymentterm_type_t *e_paymentterm_type,
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
    if (paymentterm_list_element->e_paymentterm_type) {
        field_e_paymentterm_type_free(paymentterm_list_element->e_paymentterm_type);
        paymentterm_list_element->e_paymentterm_type = NULL;
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
    if (ezmax_api_definition__full_paymentterm_list_element__NULL == paymentterm_list_element->e_paymentterm_type) {
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
    field_e_paymentterm_type_t *e_paymentterm_type_local_nonprim = NULL;

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

    // paymentterm_list_element->e_paymentterm_type
    cJSON *e_paymentterm_type = cJSON_GetObjectItemCaseSensitive(paymentterm_list_elementJSON, "ePaymenttermType");
    if (!e_paymentterm_type) {
        goto end;
    }

    
    e_paymentterm_type_local_nonprim = field_e_paymentterm_type_parseFromJSON(e_paymentterm_type); //custom

    // paymentterm_list_element->i_paymentterm_day
    cJSON *i_paymentterm_day = cJSON_GetObjectItemCaseSensitive(paymentterm_list_elementJSON, "iPaymenttermDay");
    if (!i_paymentterm_day) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_paymentterm_day))
    {
    goto end; //Numeric
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
        e_paymentterm_type_local_nonprim,
        i_paymentterm_day->valuedouble,
        strdup(s_paymentterm_description_x->valuestring),
        b_paymentterm_isactive->valueint
        );

    return paymentterm_list_element_local_var;
end:
    if (e_paymentterm_type_local_nonprim) {
        field_e_paymentterm_type_free(e_paymentterm_type_local_nonprim);
        e_paymentterm_type_local_nonprim = NULL;
    }
    return NULL;

}
