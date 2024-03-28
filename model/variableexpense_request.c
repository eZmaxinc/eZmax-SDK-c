#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_request.h"


char* variableexpense_request_e_variableexpense_taxable_ToString(ezmax_api_definition__full_variableexpense_request__e e_variableexpense_taxable) {
    char* e_variableexpense_taxableArray[] =  { "NULL", "Yes", "No", "Included" };
    return e_variableexpense_taxableArray[e_variableexpense_taxable];
}

ezmax_api_definition__full_variableexpense_request__e variableexpense_request_e_variableexpense_taxable_FromString(char* e_variableexpense_taxable){
    int stringToReturn = 0;
    char *e_variableexpense_taxableArray[] =  { "NULL", "Yes", "No", "Included" };
    size_t sizeofArray = sizeof(e_variableexpense_taxableArray) / sizeof(e_variableexpense_taxableArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_variableexpense_taxable, e_variableexpense_taxableArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

variableexpense_request_t *variableexpense_request_create(
    int pki_variableexpense_id,
    char *s_variableexpense_code,
    multilingual_variableexpense_description_t *obj_variableexpense_description,
    field_e_variableexpense_taxable_t *e_variableexpense_taxable,
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

    return variableexpense_request_local_var;
}


void variableexpense_request_free(variableexpense_request_t *variableexpense_request) {
    if(NULL == variableexpense_request){
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
    if (variableexpense_request->e_variableexpense_taxable) {
        field_e_variableexpense_taxable_free(variableexpense_request->e_variableexpense_taxable);
        variableexpense_request->e_variableexpense_taxable = NULL;
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
    if (ezmax_api_definition__full_variableexpense_request__NULL == variableexpense_request->e_variableexpense_taxable) {
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
    field_e_variableexpense_taxable_t *e_variableexpense_taxable_local_nonprim = NULL;

    // variableexpense_request->pki_variableexpense_id
    cJSON *pki_variableexpense_id = cJSON_GetObjectItemCaseSensitive(variableexpense_requestJSON, "pkiVariableexpenseID");
    if (pki_variableexpense_id) { 
    if(!cJSON_IsNumber(pki_variableexpense_id))
    {
    goto end; //Numeric
    }
    }

    // variableexpense_request->s_variableexpense_code
    cJSON *s_variableexpense_code = cJSON_GetObjectItemCaseSensitive(variableexpense_requestJSON, "sVariableexpenseCode");
    if (!s_variableexpense_code) {
        goto end;
    }

    
    if(!cJSON_IsString(s_variableexpense_code))
    {
    goto end; //String
    }

    // variableexpense_request->obj_variableexpense_description
    cJSON *obj_variableexpense_description = cJSON_GetObjectItemCaseSensitive(variableexpense_requestJSON, "objVariableexpenseDescription");
    if (!obj_variableexpense_description) {
        goto end;
    }

    
    obj_variableexpense_description_local_nonprim = multilingual_variableexpense_description_parseFromJSON(obj_variableexpense_description); //nonprimitive

    // variableexpense_request->e_variableexpense_taxable
    cJSON *e_variableexpense_taxable = cJSON_GetObjectItemCaseSensitive(variableexpense_requestJSON, "eVariableexpenseTaxable");
    if (!e_variableexpense_taxable) {
        goto end;
    }

    
    e_variableexpense_taxable_local_nonprim = field_e_variableexpense_taxable_parseFromJSON(e_variableexpense_taxable); //custom

    // variableexpense_request->b_variableexpense_isactive
    cJSON *b_variableexpense_isactive = cJSON_GetObjectItemCaseSensitive(variableexpense_requestJSON, "bVariableexpenseIsactive");
    if (!b_variableexpense_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_variableexpense_isactive))
    {
    goto end; //Bool
    }


    variableexpense_request_local_var = variableexpense_request_create (
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
        field_e_variableexpense_taxable_free(e_variableexpense_taxable_local_nonprim);
        e_variableexpense_taxable_local_nonprim = NULL;
    }
    return NULL;

}
