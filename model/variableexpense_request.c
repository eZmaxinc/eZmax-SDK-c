#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_request.h"



static variableexpense_request_t *variableexpense_request_create_internal(
    int pki_variableexpense_id,
    char *s_variableexpense_code,
    multilingual_variableexpense_description_t *obj_variableexpense_description,
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable,
    int b_variableexpense_isactive
    ) {
    variableexpense_request_t *variableexpense_request_local_var = malloc(sizeof(variableexpense_request_t));
    if (!variableexpense_request_local_var) {
        return NULL;
    }
    variableexpense_request_local_var->pki_variableexpense_id = pki_variableexpense_id;
    variableexpense_request_local_var->s_variableexpense_code = s_variableexpense_code;
    variableexpense_request_local_var->obj_variableexpense_description = obj_variableexpense_description;
    variableexpense_request_local_var->e_variableexpense_taxable = e_variableexpense_taxable;
    variableexpense_request_local_var->b_variableexpense_isactive = b_variableexpense_isactive;

    variableexpense_request_local_var->_library_owned = 1;
    return variableexpense_request_local_var;
}

__attribute__((deprecated)) variableexpense_request_t *variableexpense_request_create(
    int pki_variableexpense_id,
    char *s_variableexpense_code,
    multilingual_variableexpense_description_t *obj_variableexpense_description,
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable,
    int b_variableexpense_isactive
    ) {
    return variableexpense_request_create_internal (
        pki_variableexpense_id,
        s_variableexpense_code,
        obj_variableexpense_description,
        e_variableexpense_taxable,
        b_variableexpense_isactive
        );
}

void variableexpense_request_free(variableexpense_request_t *variableexpense_request) {
    if(NULL == variableexpense_request){
        return ;
    }
    if(variableexpense_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "variableexpense_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_request->s_variableexpense_code) {
        free(variableexpense_request->s_variableexpense_code);
        variableexpense_request->s_variableexpense_code = NULL;
    }
    if (variableexpense_request->obj_variableexpense_description) {
        multilingual_variableexpense_description_free(variableexpense_request->obj_variableexpense_description);
        variableexpense_request->obj_variableexpense_description = NULL;
    }
    free(variableexpense_request);
}

cJSON *variableexpense_request_convertToJSON(variableexpense_request_t *variableexpense_request) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_request->pki_variableexpense_id
    if(variableexpense_request->pki_variableexpense_id) {
    if(cJSON_AddNumberToObject(item, "pkiVariableexpenseID", variableexpense_request->pki_variableexpense_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // variableexpense_request->s_variableexpense_code
    if (!variableexpense_request->s_variableexpense_code) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sVariableexpenseCode", variableexpense_request->s_variableexpense_code) == NULL) {
    goto fail; //String
    }


    // variableexpense_request->obj_variableexpense_description
    if (!variableexpense_request->obj_variableexpense_description) {
        goto fail;
    }
    cJSON *obj_variableexpense_description_local_JSON = multilingual_variableexpense_description_convertToJSON(variableexpense_request->obj_variableexpense_description);
    if(obj_variableexpense_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objVariableexpenseDescription", obj_variableexpense_description_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }


    // variableexpense_request->e_variableexpense_taxable
    if (ezmax_api_definition__full_field_e_variableexpense_taxable__NULL == variableexpense_request->e_variableexpense_taxable) {
        goto fail;
    }
    cJSON *e_variableexpense_taxable_local_JSON = field_e_variableexpense_taxable_convertToJSON(variableexpense_request->e_variableexpense_taxable);
    if(e_variableexpense_taxable_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eVariableexpenseTaxable", e_variableexpense_taxable_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // variableexpense_request->b_variableexpense_isactive
    if (!variableexpense_request->b_variableexpense_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bVariableexpenseIsactive", variableexpense_request->b_variableexpense_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

variableexpense_request_t *variableexpense_request_parseFromJSON(cJSON *variableexpense_requestJSON){

    variableexpense_request_t *variableexpense_request_local_var = NULL;

    // define the local variable for variableexpense_request->obj_variableexpense_description
    multilingual_variableexpense_description_t *obj_variableexpense_description_local_nonprim = NULL;

    // define the local variable for variableexpense_request->e_variableexpense_taxable
    ezmax_api_definition__full_field_e_variableexpense_taxable__e e_variableexpense_taxable_local_nonprim = 0;

    // variableexpense_request->pki_variableexpense_id
    cJSON *pki_variableexpense_id = cJSON_GetObjectItemCaseSensitive(variableexpense_requestJSON, "pkiVariableexpenseID");
    if (cJSON_IsNull(pki_variableexpense_id)) {
        pki_variableexpense_id = NULL;
    }
    if (pki_variableexpense_id) { 
    if(!cJSON_IsNumber(pki_variableexpense_id))
    {
    goto end; //Numeric
    }
    }

    // variableexpense_request->s_variableexpense_code
    cJSON *s_variableexpense_code = cJSON_GetObjectItemCaseSensitive(variableexpense_requestJSON, "sVariableexpenseCode");
    if (cJSON_IsNull(s_variableexpense_code)) {
        s_variableexpense_code = NULL;
    }
    if (!s_variableexpense_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_variableexpense_code))
    {
    goto end; //String
    }

    // variableexpense_request->obj_variableexpense_description
    cJSON *obj_variableexpense_description = cJSON_GetObjectItemCaseSensitive(variableexpense_requestJSON, "objVariableexpenseDescription");
    if (cJSON_IsNull(obj_variableexpense_description)) {
        obj_variableexpense_description = NULL;
    }
    if (!obj_variableexpense_description) {
        goto end;
    }

    
    obj_variableexpense_description_local_nonprim = multilingual_variableexpense_description_parseFromJSON(obj_variableexpense_description); //nonprimitive

    // variableexpense_request->e_variableexpense_taxable
    cJSON *e_variableexpense_taxable = cJSON_GetObjectItemCaseSensitive(variableexpense_requestJSON, "eVariableexpenseTaxable");
    if (cJSON_IsNull(e_variableexpense_taxable)) {
        e_variableexpense_taxable = NULL;
    }
    if (!e_variableexpense_taxable) {
        goto end;
    }

    
    e_variableexpense_taxable_local_nonprim = field_e_variableexpense_taxable_parseFromJSON(e_variableexpense_taxable); //custom

    // variableexpense_request->b_variableexpense_isactive
    cJSON *b_variableexpense_isactive = cJSON_GetObjectItemCaseSensitive(variableexpense_requestJSON, "bVariableexpenseIsactive");
    if (cJSON_IsNull(b_variableexpense_isactive)) {
        b_variableexpense_isactive = NULL;
    }
    if (!b_variableexpense_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_variableexpense_isactive))
    {
    goto end; //Bool
    }


    variableexpense_request_local_var = variableexpense_request_create_internal (
        pki_variableexpense_id ? pki_variableexpense_id->valuedouble : 0,
        strdup(s_variableexpense_code->valuestring),
        obj_variableexpense_description_local_nonprim,
        e_variableexpense_taxable_local_nonprim,
        b_variableexpense_isactive->valueint
        );

    return variableexpense_request_local_var;
end:
    if (obj_variableexpense_description_local_nonprim) {
        multilingual_variableexpense_description_free(obj_variableexpense_description_local_nonprim);
        obj_variableexpense_description_local_nonprim = NULL;
    }
    if (e_variableexpense_taxable_local_nonprim) {
        e_variableexpense_taxable_local_nonprim = 0;
    }
    return NULL;

}
