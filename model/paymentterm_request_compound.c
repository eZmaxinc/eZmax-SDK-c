#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_request_compound.h"



static paymentterm_request_compound_t *paymentterm_request_compound_create_internal(
    int pki_paymentterm_id,
    char *s_paymentterm_code,
    ezmax_api_definition__full_field_e_paymentterm_type__e e_paymentterm_type,
    int i_paymentterm_day,
    multilingual_paymentterm_description_t *obj_paymentterm_description,
    int b_paymentterm_isactive
    ) {
    paymentterm_request_compound_t *paymentterm_request_compound_local_var = malloc(sizeof(paymentterm_request_compound_t));
    if (!paymentterm_request_compound_local_var) {
        return NULL;
    }
    paymentterm_request_compound_local_var->pki_paymentterm_id = pki_paymentterm_id;
    paymentterm_request_compound_local_var->s_paymentterm_code = s_paymentterm_code;
    paymentterm_request_compound_local_var->e_paymentterm_type = e_paymentterm_type;
    paymentterm_request_compound_local_var->i_paymentterm_day = i_paymentterm_day;
    paymentterm_request_compound_local_var->obj_paymentterm_description = obj_paymentterm_description;
    paymentterm_request_compound_local_var->b_paymentterm_isactive = b_paymentterm_isactive;

    paymentterm_request_compound_local_var->_library_owned = 1;
    return paymentterm_request_compound_local_var;
}

__attribute__((deprecated)) paymentterm_request_compound_t *paymentterm_request_compound_create(
    int pki_paymentterm_id,
    char *s_paymentterm_code,
    ezmax_api_definition__full_field_e_paymentterm_type__e e_paymentterm_type,
    int i_paymentterm_day,
    multilingual_paymentterm_description_t *obj_paymentterm_description,
    int b_paymentterm_isactive
    ) {
    return paymentterm_request_compound_create_internal (
        pki_paymentterm_id,
        s_paymentterm_code,
        e_paymentterm_type,
        i_paymentterm_day,
        obj_paymentterm_description,
        b_paymentterm_isactive
        );
}

void paymentterm_request_compound_free(paymentterm_request_compound_t *paymentterm_request_compound) {
    if(NULL == paymentterm_request_compound){
        return ;
    }
    if(paymentterm_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentterm_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_request_compound->s_paymentterm_code) {
        free(paymentterm_request_compound->s_paymentterm_code);
        paymentterm_request_compound->s_paymentterm_code = NULL;
    }
    if (paymentterm_request_compound->obj_paymentterm_description) {
        multilingual_paymentterm_description_free(paymentterm_request_compound->obj_paymentterm_description);
        paymentterm_request_compound->obj_paymentterm_description = NULL;
    }
    free(paymentterm_request_compound);
}

cJSON *paymentterm_request_compound_convertToJSON(paymentterm_request_compound_t *paymentterm_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_request_compound->pki_paymentterm_id
    if(paymentterm_request_compound->pki_paymentterm_id) {
    if(cJSON_AddNumberToObject(item, "pkiPaymenttermID", paymentterm_request_compound->pki_paymentterm_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // paymentterm_request_compound->s_paymentterm_code
    if (!paymentterm_request_compound->s_paymentterm_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPaymenttermCode", paymentterm_request_compound->s_paymentterm_code) == NULL) {
    goto fail; //String
    }


    // paymentterm_request_compound->e_paymentterm_type
    if (ezmax_api_definition__full_field_e_paymentterm_type__NULL == paymentterm_request_compound->e_paymentterm_type) {
        goto fail;
    }
    cJSON *e_paymentterm_type_local_JSON = field_e_paymentterm_type_convertToJSON(paymentterm_request_compound->e_paymentterm_type);
    if(e_paymentterm_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "ePaymenttermType", e_paymentterm_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // paymentterm_request_compound->i_paymentterm_day
    if (!paymentterm_request_compound->i_paymentterm_day) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iPaymenttermDay", paymentterm_request_compound->i_paymentterm_day) == NULL) {
    goto fail; //Numeric
    }


    // paymentterm_request_compound->obj_paymentterm_description
    if (!paymentterm_request_compound->obj_paymentterm_description) {
        goto fail;
    }
    cJSON *obj_paymentterm_description_local_JSON = multilingual_paymentterm_description_convertToJSON(paymentterm_request_compound->obj_paymentterm_description);
    if(obj_paymentterm_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPaymenttermDescription", obj_paymentterm_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // paymentterm_request_compound->b_paymentterm_isactive
    if (!paymentterm_request_compound->b_paymentterm_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPaymenttermIsactive", paymentterm_request_compound->b_paymentterm_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentterm_request_compound_t *paymentterm_request_compound_parseFromJSON(cJSON *paymentterm_request_compoundJSON){

    paymentterm_request_compound_t *paymentterm_request_compound_local_var = NULL;

    // define the local variable for paymentterm_request_compound->e_paymentterm_type
    ezmax_api_definition__full_field_e_paymentterm_type__e e_paymentterm_type_local_nonprim = 0;

    // define the local variable for paymentterm_request_compound->obj_paymentterm_description
    multilingual_paymentterm_description_t *obj_paymentterm_description_local_nonprim = NULL;

    // paymentterm_request_compound->pki_paymentterm_id
    cJSON *pki_paymentterm_id = cJSON_GetObjectItemCaseSensitive(paymentterm_request_compoundJSON, "pkiPaymenttermID");
    if (cJSON_IsNull(pki_paymentterm_id)) {
        pki_paymentterm_id = NULL;
    }
    if (pki_paymentterm_id) { 
    if(!cJSON_IsNumber(pki_paymentterm_id))
    {
    goto end; //Numeric
    }
    }

    // paymentterm_request_compound->s_paymentterm_code
    cJSON *s_paymentterm_code = cJSON_GetObjectItemCaseSensitive(paymentterm_request_compoundJSON, "sPaymenttermCode");
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

    // paymentterm_request_compound->e_paymentterm_type
    cJSON *e_paymentterm_type = cJSON_GetObjectItemCaseSensitive(paymentterm_request_compoundJSON, "ePaymenttermType");
    if (cJSON_IsNull(e_paymentterm_type)) {
        e_paymentterm_type = NULL;
    }
    if (!e_paymentterm_type) {
        goto end;
    }

    
    e_paymentterm_type_local_nonprim = field_e_paymentterm_type_parseFromJSON(e_paymentterm_type); //custom

    // paymentterm_request_compound->i_paymentterm_day
    cJSON *i_paymentterm_day = cJSON_GetObjectItemCaseSensitive(paymentterm_request_compoundJSON, "iPaymenttermDay");
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

    // paymentterm_request_compound->obj_paymentterm_description
    cJSON *obj_paymentterm_description = cJSON_GetObjectItemCaseSensitive(paymentterm_request_compoundJSON, "objPaymenttermDescription");
    if (cJSON_IsNull(obj_paymentterm_description)) {
        obj_paymentterm_description = NULL;
    }
    if (!obj_paymentterm_description) {
        goto end;
    }

    
    obj_paymentterm_description_local_nonprim = multilingual_paymentterm_description_parseFromJSON(obj_paymentterm_description); //nonprimitive

    // paymentterm_request_compound->b_paymentterm_isactive
    cJSON *b_paymentterm_isactive = cJSON_GetObjectItemCaseSensitive(paymentterm_request_compoundJSON, "bPaymenttermIsactive");
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


    paymentterm_request_compound_local_var = paymentterm_request_compound_create_internal (
        pki_paymentterm_id ? pki_paymentterm_id->valuedouble : 0,
        strdup(s_paymentterm_code->valuestring),
        e_paymentterm_type_local_nonprim,
        i_paymentterm_day->valuedouble,
        obj_paymentterm_description_local_nonprim,
        b_paymentterm_isactive->valueint
        );

    return paymentterm_request_compound_local_var;
end:
    if (e_paymentterm_type_local_nonprim) {
        e_paymentterm_type_local_nonprim = 0;
    }
    if (obj_paymentterm_description_local_nonprim) {
        multilingual_paymentterm_description_free(obj_paymentterm_description_local_nonprim);
        obj_paymentterm_description_local_nonprim = NULL;
    }
    return NULL;

}
