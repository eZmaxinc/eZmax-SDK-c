#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_response_compound.h"



static paymentterm_response_compound_t *paymentterm_response_compound_create_internal(
    int *pki_paymentterm_id,
    char *s_paymentterm_code,
    ezmax_api_definition__full_field_e_paymentterm_type__e e_paymentterm_type,
    int *i_paymentterm_day,
    multilingual_paymentterm_description_t *obj_paymentterm_description,
    int *b_paymentterm_isactive,
    common_audit_t *obj_audit
    ) {
    paymentterm_response_compound_t *paymentterm_response_compound_local_var = malloc(sizeof(paymentterm_response_compound_t));
    if (!paymentterm_response_compound_local_var) {
        return NULL;
    }
    memset(paymentterm_response_compound_local_var, 0, sizeof(paymentterm_response_compound_t));
    paymentterm_response_compound_local_var->_library_owned = 1;
    paymentterm_response_compound_local_var->pki_paymentterm_id = pki_paymentterm_id;
    paymentterm_response_compound_local_var->s_paymentterm_code = s_paymentterm_code;
    paymentterm_response_compound_local_var->e_paymentterm_type = e_paymentterm_type;
    paymentterm_response_compound_local_var->i_paymentterm_day = i_paymentterm_day;
    paymentterm_response_compound_local_var->obj_paymentterm_description = obj_paymentterm_description;
    paymentterm_response_compound_local_var->b_paymentterm_isactive = b_paymentterm_isactive;
    paymentterm_response_compound_local_var->obj_audit = obj_audit;
    return paymentterm_response_compound_local_var;
}

__attribute__((deprecated)) paymentterm_response_compound_t *paymentterm_response_compound_create(
    int *pki_paymentterm_id,
    char *s_paymentterm_code,
    ezmax_api_definition__full_field_e_paymentterm_type__e e_paymentterm_type,
    int *i_paymentterm_day,
    multilingual_paymentterm_description_t *obj_paymentterm_description,
    int *b_paymentterm_isactive,
    common_audit_t *obj_audit
    ) {
    int *pki_paymentterm_id_copy = NULL;
    if (pki_paymentterm_id) {
        pki_paymentterm_id_copy = malloc(sizeof(int));
        if (pki_paymentterm_id_copy) *pki_paymentterm_id_copy = *pki_paymentterm_id;
    }
    int *i_paymentterm_day_copy = NULL;
    if (i_paymentterm_day) {
        i_paymentterm_day_copy = malloc(sizeof(int));
        if (i_paymentterm_day_copy) *i_paymentterm_day_copy = *i_paymentterm_day;
    }
    int *b_paymentterm_isactive_copy = NULL;
    if (b_paymentterm_isactive) {
        b_paymentterm_isactive_copy = malloc(sizeof(int));
        if (b_paymentterm_isactive_copy) *b_paymentterm_isactive_copy = *b_paymentterm_isactive;
    }
    paymentterm_response_compound_t *result = paymentterm_response_compound_create_internal (
        pki_paymentterm_id_copy,
        s_paymentterm_code,
        e_paymentterm_type,
        i_paymentterm_day_copy,
        obj_paymentterm_description,
        b_paymentterm_isactive_copy,
        obj_audit
        );
    if (!result) {
        free(pki_paymentterm_id_copy);
        free(i_paymentterm_day_copy);
        free(b_paymentterm_isactive_copy);
    }
    return result;
}

void paymentterm_response_compound_free(paymentterm_response_compound_t *paymentterm_response_compound) {
    if(NULL == paymentterm_response_compound){
        return ;
    }
    if(paymentterm_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "paymentterm_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_response_compound->pki_paymentterm_id) {
        free(paymentterm_response_compound->pki_paymentterm_id);
        paymentterm_response_compound->pki_paymentterm_id = NULL;
    }
    if (paymentterm_response_compound->s_paymentterm_code) {
        free(paymentterm_response_compound->s_paymentterm_code);
        paymentterm_response_compound->s_paymentterm_code = NULL;
    }
    if (paymentterm_response_compound->i_paymentterm_day) {
        free(paymentterm_response_compound->i_paymentterm_day);
        paymentterm_response_compound->i_paymentterm_day = NULL;
    }
    if (paymentterm_response_compound->obj_paymentterm_description) {
        multilingual_paymentterm_description_free(paymentterm_response_compound->obj_paymentterm_description);
        paymentterm_response_compound->obj_paymentterm_description = NULL;
    }
    if (paymentterm_response_compound->b_paymentterm_isactive) {
        free(paymentterm_response_compound->b_paymentterm_isactive);
        paymentterm_response_compound->b_paymentterm_isactive = NULL;
    }
    if (paymentterm_response_compound->obj_audit) {
        common_audit_free(paymentterm_response_compound->obj_audit);
        paymentterm_response_compound->obj_audit = NULL;
    }
    free(paymentterm_response_compound);
}

cJSON *paymentterm_response_compound_convertToJSON(paymentterm_response_compound_t *paymentterm_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_response_compound->pki_paymentterm_id
    if (!paymentterm_response_compound->pki_paymentterm_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPaymenttermID", *paymentterm_response_compound->pki_paymentterm_id) == NULL) {
    goto fail; //Numeric
    }


    // paymentterm_response_compound->s_paymentterm_code
    if (!paymentterm_response_compound->s_paymentterm_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPaymenttermCode", paymentterm_response_compound->s_paymentterm_code) == NULL) {
    goto fail; //String
    }


    // paymentterm_response_compound->e_paymentterm_type
    if (ezmax_api_definition__full_field_e_paymentterm_type__NULL == paymentterm_response_compound->e_paymentterm_type) {
        goto fail;
    }
    cJSON *e_paymentterm_type_local_JSON = field_e_paymentterm_type_convertToJSON(paymentterm_response_compound->e_paymentterm_type);
    if(e_paymentterm_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "ePaymenttermType", e_paymentterm_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // paymentterm_response_compound->i_paymentterm_day
    if (!paymentterm_response_compound->i_paymentterm_day) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iPaymenttermDay", *paymentterm_response_compound->i_paymentterm_day) == NULL) {
    goto fail; //Numeric
    }


    // paymentterm_response_compound->obj_paymentterm_description
    if (!paymentterm_response_compound->obj_paymentterm_description) {
        goto fail;
    }
    cJSON *obj_paymentterm_description_local_JSON = multilingual_paymentterm_description_convertToJSON(paymentterm_response_compound->obj_paymentterm_description);
    if(obj_paymentterm_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPaymenttermDescription", obj_paymentterm_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // paymentterm_response_compound->b_paymentterm_isactive
    if (!paymentterm_response_compound->b_paymentterm_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPaymenttermIsactive", *paymentterm_response_compound->b_paymentterm_isactive) == NULL) {
    goto fail; //Bool
    }


    // paymentterm_response_compound->obj_audit
    if (!paymentterm_response_compound->obj_audit) {
        goto fail;
    }
    cJSON *obj_audit_local_JSON = common_audit_convertToJSON(paymentterm_response_compound->obj_audit);
    if(obj_audit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objAudit", obj_audit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentterm_response_compound_t *paymentterm_response_compound_parseFromJSON(cJSON *paymentterm_response_compoundJSON){

    paymentterm_response_compound_t *paymentterm_response_compound_local_var = NULL;

    // define the local variable for paymentterm_response_compound->pki_paymentterm_id
    int *pki_paymentterm_id_local_var = NULL;

    char *s_paymentterm_code_local_str = NULL;

    // define the local variable for paymentterm_response_compound->e_paymentterm_type
    ezmax_api_definition__full_field_e_paymentterm_type__e e_paymentterm_type_local_nonprim = 0;

    // define the local variable for paymentterm_response_compound->i_paymentterm_day
    int *i_paymentterm_day_local_var = NULL;

    // define the local variable for paymentterm_response_compound->obj_paymentterm_description
    multilingual_paymentterm_description_t *obj_paymentterm_description_local_nonprim = NULL;

    // define the local variable for paymentterm_response_compound->b_paymentterm_isactive
    int *b_paymentterm_isactive_local_var = NULL;

    // define the local variable for paymentterm_response_compound->obj_audit
    common_audit_t *obj_audit_local_nonprim = NULL;

    // paymentterm_response_compound->pki_paymentterm_id
    cJSON *pki_paymentterm_id = cJSON_GetObjectItemCaseSensitive(paymentterm_response_compoundJSON, "pkiPaymenttermID");
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

    // paymentterm_response_compound->s_paymentterm_code
    cJSON *s_paymentterm_code = cJSON_GetObjectItemCaseSensitive(paymentterm_response_compoundJSON, "sPaymenttermCode");
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

    // paymentterm_response_compound->e_paymentterm_type
    cJSON *e_paymentterm_type = cJSON_GetObjectItemCaseSensitive(paymentterm_response_compoundJSON, "ePaymenttermType");
    if (cJSON_IsNull(e_paymentterm_type)) {
        e_paymentterm_type = NULL;
    }
    if (!e_paymentterm_type) {
        goto end;
    }

    
    e_paymentterm_type_local_nonprim = field_e_paymentterm_type_parseFromJSON(e_paymentterm_type); //custom

    // paymentterm_response_compound->i_paymentterm_day
    cJSON *i_paymentterm_day = cJSON_GetObjectItemCaseSensitive(paymentterm_response_compoundJSON, "iPaymenttermDay");
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
    i_paymentterm_day_local_var = malloc(sizeof(int));
    if(!i_paymentterm_day_local_var)
    {
        goto end;
    }
    *i_paymentterm_day_local_var = i_paymentterm_day->valuedouble;

    // paymentterm_response_compound->obj_paymentterm_description
    cJSON *obj_paymentterm_description = cJSON_GetObjectItemCaseSensitive(paymentterm_response_compoundJSON, "objPaymenttermDescription");
    if (cJSON_IsNull(obj_paymentterm_description)) {
        obj_paymentterm_description = NULL;
    }
    if (!obj_paymentterm_description) {
        goto end;
    }

    
    obj_paymentterm_description_local_nonprim = multilingual_paymentterm_description_parseFromJSON(obj_paymentterm_description); //nonprimitive

    // paymentterm_response_compound->b_paymentterm_isactive
    cJSON *b_paymentterm_isactive = cJSON_GetObjectItemCaseSensitive(paymentterm_response_compoundJSON, "bPaymenttermIsactive");
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

    // paymentterm_response_compound->obj_audit
    cJSON *obj_audit = cJSON_GetObjectItemCaseSensitive(paymentterm_response_compoundJSON, "objAudit");
    if (cJSON_IsNull(obj_audit)) {
        obj_audit = NULL;
    }
    if (!obj_audit) {
        goto end;
    }

    
    obj_audit_local_nonprim = common_audit_parseFromJSON(obj_audit); //nonprimitive


    if (s_paymentterm_code && !cJSON_IsNull(s_paymentterm_code)) s_paymentterm_code_local_str = strdup(s_paymentterm_code->valuestring);

    paymentterm_response_compound_local_var = paymentterm_response_compound_create_internal (
        pki_paymentterm_id_local_var,
        s_paymentterm_code_local_str,
        e_paymentterm_type_local_nonprim,
        i_paymentterm_day_local_var,
        obj_paymentterm_description_local_nonprim,
        b_paymentterm_isactive_local_var,
        obj_audit_local_nonprim
        );

    if (!paymentterm_response_compound_local_var) {
        goto end;
    }

    return paymentterm_response_compound_local_var;
end:
    if (pki_paymentterm_id_local_var) {
        free(pki_paymentterm_id_local_var);
        pki_paymentterm_id_local_var = NULL;
    }
    if (s_paymentterm_code_local_str) {
        free(s_paymentterm_code_local_str);
        s_paymentterm_code_local_str = NULL;
    }
    if (e_paymentterm_type_local_nonprim) {
        e_paymentterm_type_local_nonprim = 0;
    }
    if (i_paymentterm_day_local_var) {
        free(i_paymentterm_day_local_var);
        i_paymentterm_day_local_var = NULL;
    }
    if (obj_paymentterm_description_local_nonprim) {
        multilingual_paymentterm_description_free(obj_paymentterm_description_local_nonprim);
        obj_paymentterm_description_local_nonprim = NULL;
    }
    if (b_paymentterm_isactive_local_var) {
        free(b_paymentterm_isactive_local_var);
        b_paymentterm_isactive_local_var = NULL;
    }
    if (obj_audit_local_nonprim) {
        common_audit_free(obj_audit_local_nonprim);
        obj_audit_local_nonprim = NULL;
    }
    return NULL;

}
