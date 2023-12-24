#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_list_element.h"


char* e_variableexpense_taxablevariableexpense_list_element_ToString(ezmax_api_definition__full_variableexpense_list_element__e e_variableexpense_taxable) {
    char* e_variableexpense_taxableArray[] =  { "NULL", "Yes", "No", "Included" };
    return e_variableexpense_taxableArray[e_variableexpense_taxable];
}

ezmax_api_definition__full_variableexpense_list_element__e e_variableexpense_taxablevariableexpense_list_element_FromString(char* e_variableexpense_taxable){
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

variableexpense_list_element_t *variableexpense_list_element_create(
    int pki_variableexpense_id,
    char *s_variableexpense_code,
    char *s_variableexpense_description_x,
    field_e_variableexpense_taxable_t *e_variableexpense_taxable,
    int b_variableexpense_isactive
    ) {
    variableexpense_list_element_t *variableexpense_list_element_local_var = malloc(sizeof(variableexpense_list_element_t));
    if (!variableexpense_list_element_local_var) {
        return NULL;
    }
    variableexpense_list_element_local_var->pki_variableexpense_id = pki_variableexpense_id;
    variableexpense_list_element_local_var->s_variableexpense_code = s_variableexpense_code;
    variableexpense_list_element_local_var->s_variableexpense_description_x = s_variableexpense_description_x;
    variableexpense_list_element_local_var->e_variableexpense_taxable = e_variableexpense_taxable;
    variableexpense_list_element_local_var->b_variableexpense_isactive = b_variableexpense_isactive;

    return variableexpense_list_element_local_var;
}


void variableexpense_list_element_free(variableexpense_list_element_t *variableexpense_list_element) {
    if(NULL == variableexpense_list_element){
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_list_element->s_variableexpense_code) {
        free(variableexpense_list_element->s_variableexpense_code);
        variableexpense_list_element->s_variableexpense_code = NULL;
    }
    if (variableexpense_list_element->s_variableexpense_description_x) {
        free(variableexpense_list_element->s_variableexpense_description_x);
        variableexpense_list_element->s_variableexpense_description_x = NULL;
    }
    if (variableexpense_list_element->e_variableexpense_taxable) {
        field_e_variableexpense_taxable_free(variableexpense_list_element->e_variableexpense_taxable);
        variableexpense_list_element->e_variableexpense_taxable = NULL;
    }
    free(variableexpense_list_element);
}

cJSON *variableexpense_list_element_convertToJSON(variableexpense_list_element_t *variableexpense_list_element) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_list_element->pki_variableexpense_id
    if (!variableexpense_list_element->pki_variableexpense_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiVariableexpenseID", variableexpense_list_element->pki_variableexpense_id) == NULL) {
    goto fail; //Numeric
    }


    // variableexpense_list_element->s_variableexpense_code
    if(variableexpense_list_element->s_variableexpense_code) {
    if(cJSON_AddStringToObject(item, "sVariableexpenseCode", variableexpense_list_element->s_variableexpense_code) == NULL) {
    goto fail; //String
    }
    }


    // variableexpense_list_element->s_variableexpense_description_x
    if(variableexpense_list_element->s_variableexpense_description_x) {
    if(cJSON_AddStringToObject(item, "sVariableexpenseDescriptionX", variableexpense_list_element->s_variableexpense_description_x) == NULL) {
    goto fail; //String
    }
    }


    // variableexpense_list_element->e_variableexpense_taxable
    if(variableexpense_list_element->e_variableexpense_taxable != ezmax_api_definition__full_variableexpense_list_element__NULL) {
    cJSON *e_variableexpense_taxable_local_JSON = field_e_variableexpense_taxable_convertToJSON(variableexpense_list_element->e_variableexpense_taxable);
    if(e_variableexpense_taxable_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eVariableexpenseTaxable", e_variableexpense_taxable_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // variableexpense_list_element->b_variableexpense_isactive
    if(variableexpense_list_element->b_variableexpense_isactive) {
    if(cJSON_AddBoolToObject(item, "bVariableexpenseIsactive", variableexpense_list_element->b_variableexpense_isactive) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

variableexpense_list_element_t *variableexpense_list_element_parseFromJSON(cJSON *variableexpense_list_elementJSON){

    variableexpense_list_element_t *variableexpense_list_element_local_var = NULL;

    // define the local variable for variableexpense_list_element->e_variableexpense_taxable
    field_e_variableexpense_taxable_t *e_variableexpense_taxable_local_nonprim = NULL;

    // variableexpense_list_element->pki_variableexpense_id
    cJSON *pki_variableexpense_id = cJSON_GetObjectItemCaseSensitive(variableexpense_list_elementJSON, "pkiVariableexpenseID");
    if (!pki_variableexpense_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_variableexpense_id))
    {
    goto end; //Numeric
    }

    // variableexpense_list_element->s_variableexpense_code
    cJSON *s_variableexpense_code = cJSON_GetObjectItemCaseSensitive(variableexpense_list_elementJSON, "sVariableexpenseCode");
    if (s_variableexpense_code) { 
    if(!cJSON_IsString(s_variableexpense_code) && !cJSON_IsNull(s_variableexpense_code))
    {
    goto end; //String
    }
    }

    // variableexpense_list_element->s_variableexpense_description_x
    cJSON *s_variableexpense_description_x = cJSON_GetObjectItemCaseSensitive(variableexpense_list_elementJSON, "sVariableexpenseDescriptionX");
    if (s_variableexpense_description_x) { 
    if(!cJSON_IsString(s_variableexpense_description_x) && !cJSON_IsNull(s_variableexpense_description_x))
    {
    goto end; //String
    }
    }

    // variableexpense_list_element->e_variableexpense_taxable
    cJSON *e_variableexpense_taxable = cJSON_GetObjectItemCaseSensitive(variableexpense_list_elementJSON, "eVariableexpenseTaxable");
    if (e_variableexpense_taxable) { 
    e_variableexpense_taxable_local_nonprim = field_e_variableexpense_taxable_parseFromJSON(e_variableexpense_taxable); //custom
    }

    // variableexpense_list_element->b_variableexpense_isactive
    cJSON *b_variableexpense_isactive = cJSON_GetObjectItemCaseSensitive(variableexpense_list_elementJSON, "bVariableexpenseIsactive");
    if (b_variableexpense_isactive) { 
    if(!cJSON_IsBool(b_variableexpense_isactive))
    {
    goto end; //Bool
    }
    }


    variableexpense_list_element_local_var = variableexpense_list_element_create (
        pki_variableexpense_id->valuedouble,
        s_variableexpense_code && !cJSON_IsNull(s_variableexpense_code) ? strdup(s_variableexpense_code->valuestring) : NULL,
        s_variableexpense_description_x && !cJSON_IsNull(s_variableexpense_description_x) ? strdup(s_variableexpense_description_x->valuestring) : NULL,
        e_variableexpense_taxable ? e_variableexpense_taxable_local_nonprim : NULL,
        b_variableexpense_isactive ? b_variableexpense_isactive->valueint : 0
        );

    return variableexpense_list_element_local_var;
end:
    if (e_variableexpense_taxable_local_nonprim) {
        field_e_variableexpense_taxable_free(e_variableexpense_taxable_local_nonprim);
        e_variableexpense_taxable_local_nonprim = NULL;
    }
    return NULL;

}
