#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_autocomplete_element_response.h"



variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response_create(
    char *s_variableexpense_description_x,
    int pki_variableexpense_id,
    int b_variableexpense_isactive
    ) {
    variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response_local_var = malloc(sizeof(variableexpense_autocomplete_element_response_t));
    if (!variableexpense_autocomplete_element_response_local_var) {
        return NULL;
    }
    variableexpense_autocomplete_element_response_local_var->s_variableexpense_description_x = s_variableexpense_description_x;
    variableexpense_autocomplete_element_response_local_var->pki_variableexpense_id = pki_variableexpense_id;
    variableexpense_autocomplete_element_response_local_var->b_variableexpense_isactive = b_variableexpense_isactive;

    return variableexpense_autocomplete_element_response_local_var;
}


void variableexpense_autocomplete_element_response_free(variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response) {
    if(NULL == variableexpense_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_autocomplete_element_response->s_variableexpense_description_x) {
        free(variableexpense_autocomplete_element_response->s_variableexpense_description_x);
        variableexpense_autocomplete_element_response->s_variableexpense_description_x = NULL;
    }
    free(variableexpense_autocomplete_element_response);
}

cJSON *variableexpense_autocomplete_element_response_convertToJSON(variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_autocomplete_element_response->s_variableexpense_description_x
    if (!variableexpense_autocomplete_element_response->s_variableexpense_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sVariableexpenseDescriptionX", variableexpense_autocomplete_element_response->s_variableexpense_description_x) == NULL) {
    goto fail; //String
    }


    // variableexpense_autocomplete_element_response->pki_variableexpense_id
    if (!variableexpense_autocomplete_element_response->pki_variableexpense_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiVariableexpenseID", variableexpense_autocomplete_element_response->pki_variableexpense_id) == NULL) {
    goto fail; //Numeric
    }


    // variableexpense_autocomplete_element_response->b_variableexpense_isactive
    if (!variableexpense_autocomplete_element_response->b_variableexpense_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bVariableexpenseIsactive", variableexpense_autocomplete_element_response->b_variableexpense_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response_parseFromJSON(cJSON *variableexpense_autocomplete_element_responseJSON){

    variableexpense_autocomplete_element_response_t *variableexpense_autocomplete_element_response_local_var = NULL;

    // variableexpense_autocomplete_element_response->s_variableexpense_description_x
    cJSON *s_variableexpense_description_x = cJSON_GetObjectItemCaseSensitive(variableexpense_autocomplete_element_responseJSON, "sVariableexpenseDescriptionX");
    if (!s_variableexpense_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_variableexpense_description_x))
    {
    goto end; //String
    }

    // variableexpense_autocomplete_element_response->pki_variableexpense_id
    cJSON *pki_variableexpense_id = cJSON_GetObjectItemCaseSensitive(variableexpense_autocomplete_element_responseJSON, "pkiVariableexpenseID");
    if (!pki_variableexpense_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_variableexpense_id))
    {
    goto end; //Numeric
    }

    // variableexpense_autocomplete_element_response->b_variableexpense_isactive
    cJSON *b_variableexpense_isactive = cJSON_GetObjectItemCaseSensitive(variableexpense_autocomplete_element_responseJSON, "bVariableexpenseIsactive");
    if (!b_variableexpense_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_variableexpense_isactive))
    {
    goto end; //Bool
    }


    variableexpense_autocomplete_element_response_local_var = variableexpense_autocomplete_element_response_create (
        strdup(s_variableexpense_description_x->valuestring),
        pki_variableexpense_id->valuedouble,
        b_variableexpense_isactive->valueint
        );

    return variableexpense_autocomplete_element_response_local_var;
end:
    return NULL;

}
