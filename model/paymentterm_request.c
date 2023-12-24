#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "paymentterm_request.h"


char* e_paymentterm_typepaymentterm_request_ToString(ezmax_api_definition__full_paymentterm_request__e e_paymentterm_type) {
    char* e_paymentterm_typeArray[] =  { "NULL", "Days", "Dayofthemonth" };
    return e_paymentterm_typeArray[e_paymentterm_type];
}

ezmax_api_definition__full_paymentterm_request__e e_paymentterm_typepaymentterm_request_FromString(char* e_paymentterm_type){
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

paymentterm_request_t *paymentterm_request_create(
    int pki_paymentterm_id,
    char *s_paymentterm_code,
    field_e_paymentterm_type_t *e_paymentterm_type,
    int i_paymentterm_day,
    multilingual_paymentterm_description_t *obj_paymentterm_description,
    int b_paymentterm_isactive
    ) {
    paymentterm_request_t *paymentterm_request_local_var = malloc(sizeof(paymentterm_request_t));
    if (!paymentterm_request_local_var) {
        return NULL;
    }
    paymentterm_request_local_var->pki_paymentterm_id = pki_paymentterm_id;
    paymentterm_request_local_var->s_paymentterm_code = s_paymentterm_code;
    paymentterm_request_local_var->e_paymentterm_type = e_paymentterm_type;
    paymentterm_request_local_var->i_paymentterm_day = i_paymentterm_day;
    paymentterm_request_local_var->obj_paymentterm_description = obj_paymentterm_description;
    paymentterm_request_local_var->b_paymentterm_isactive = b_paymentterm_isactive;

    return paymentterm_request_local_var;
}


void paymentterm_request_free(paymentterm_request_t *paymentterm_request) {
    if(NULL == paymentterm_request){
        return ;
    }
    listEntry_t *listEntry;
    if (paymentterm_request->s_paymentterm_code) {
        free(paymentterm_request->s_paymentterm_code);
        paymentterm_request->s_paymentterm_code = NULL;
    }
    if (paymentterm_request->e_paymentterm_type) {
        field_e_paymentterm_type_free(paymentterm_request->e_paymentterm_type);
        paymentterm_request->e_paymentterm_type = NULL;
    }
    if (paymentterm_request->obj_paymentterm_description) {
        multilingual_paymentterm_description_free(paymentterm_request->obj_paymentterm_description);
        paymentterm_request->obj_paymentterm_description = NULL;
    }
    free(paymentterm_request);
}

cJSON *paymentterm_request_convertToJSON(paymentterm_request_t *paymentterm_request) {
    cJSON *item = cJSON_CreateObject();

    // paymentterm_request->pki_paymentterm_id
    if(paymentterm_request->pki_paymentterm_id) {
    if(cJSON_AddNumberToObject(item, "pkiPaymenttermID", paymentterm_request->pki_paymentterm_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // paymentterm_request->s_paymentterm_code
    if (!paymentterm_request->s_paymentterm_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sPaymenttermCode", paymentterm_request->s_paymentterm_code) == NULL) {
    goto fail; //String
    }


    // paymentterm_request->e_paymentterm_type
    if (ezmax_api_definition__full_paymentterm_request__NULL == paymentterm_request->e_paymentterm_type) {
        goto fail;
    }
    cJSON *e_paymentterm_type_local_JSON = field_e_paymentterm_type_convertToJSON(paymentterm_request->e_paymentterm_type);
    if(e_paymentterm_type_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "ePaymenttermType", e_paymentterm_type_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // paymentterm_request->i_paymentterm_day
    if (!paymentterm_request->i_paymentterm_day) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iPaymenttermDay", paymentterm_request->i_paymentterm_day) == NULL) {
    goto fail; //Numeric
    }


    // paymentterm_request->obj_paymentterm_description
    if (!paymentterm_request->obj_paymentterm_description) {
        goto fail;
    }
    cJSON *obj_paymentterm_description_local_JSON = multilingual_paymentterm_description_convertToJSON(paymentterm_request->obj_paymentterm_description);
    if(obj_paymentterm_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objPaymenttermDescription", obj_paymentterm_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // paymentterm_request->b_paymentterm_isactive
    if (!paymentterm_request->b_paymentterm_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bPaymenttermIsactive", paymentterm_request->b_paymentterm_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

paymentterm_request_t *paymentterm_request_parseFromJSON(cJSON *paymentterm_requestJSON){

    paymentterm_request_t *paymentterm_request_local_var = NULL;

    // define the local variable for paymentterm_request->e_paymentterm_type
    field_e_paymentterm_type_t *e_paymentterm_type_local_nonprim = NULL;

    // define the local variable for paymentterm_request->obj_paymentterm_description
    multilingual_paymentterm_description_t *obj_paymentterm_description_local_nonprim = NULL;

    // paymentterm_request->pki_paymentterm_id
    cJSON *pki_paymentterm_id = cJSON_GetObjectItemCaseSensitive(paymentterm_requestJSON, "pkiPaymenttermID");
    if (pki_paymentterm_id) { 
    if(!cJSON_IsNumber(pki_paymentterm_id))
    {
    goto end; //Numeric
    }
    }

    // paymentterm_request->s_paymentterm_code
    cJSON *s_paymentterm_code = cJSON_GetObjectItemCaseSensitive(paymentterm_requestJSON, "sPaymenttermCode");
    if (!s_paymentterm_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_paymentterm_code))
    {
    goto end; //String
    }

    // paymentterm_request->e_paymentterm_type
    cJSON *e_paymentterm_type = cJSON_GetObjectItemCaseSensitive(paymentterm_requestJSON, "ePaymenttermType");
    if (!e_paymentterm_type) {
        goto end;
    }

    
    e_paymentterm_type_local_nonprim = field_e_paymentterm_type_parseFromJSON(e_paymentterm_type); //custom

    // paymentterm_request->i_paymentterm_day
    cJSON *i_paymentterm_day = cJSON_GetObjectItemCaseSensitive(paymentterm_requestJSON, "iPaymenttermDay");
    if (!i_paymentterm_day) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_paymentterm_day))
    {
    goto end; //Numeric
    }

    // paymentterm_request->obj_paymentterm_description
    cJSON *obj_paymentterm_description = cJSON_GetObjectItemCaseSensitive(paymentterm_requestJSON, "objPaymenttermDescription");
    if (!obj_paymentterm_description) {
        goto end;
    }

    
    obj_paymentterm_description_local_nonprim = multilingual_paymentterm_description_parseFromJSON(obj_paymentterm_description); //nonprimitive

    // paymentterm_request->b_paymentterm_isactive
    cJSON *b_paymentterm_isactive = cJSON_GetObjectItemCaseSensitive(paymentterm_requestJSON, "bPaymenttermIsactive");
    if (!b_paymentterm_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_paymentterm_isactive))
    {
    goto end; //Bool
    }


    paymentterm_request_local_var = paymentterm_request_create (
        pki_paymentterm_id ? pki_paymentterm_id->valuedouble : 0,
        strdup(s_paymentterm_code->valuestring),
        e_paymentterm_type_local_nonprim,
        i_paymentterm_day->valuedouble,
        obj_paymentterm_description_local_nonprim,
        b_paymentterm_isactive->valueint
        );

    return paymentterm_request_local_var;
end:
    if (e_paymentterm_type_local_nonprim) {
        field_e_paymentterm_type_free(e_paymentterm_type_local_nonprim);
        e_paymentterm_type_local_nonprim = NULL;
    }
    if (obj_paymentterm_description_local_nonprim) {
        multilingual_paymentterm_description_free(obj_paymentterm_description_local_nonprim);
        obj_paymentterm_description_local_nonprim = NULL;
    }
    return NULL;

}
