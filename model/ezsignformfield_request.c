#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfield_request.h"


char* e_ezsignformfield_dependencyrequirementezsignformfield_request_ToString(ezmax_api_definition__full_ezsignformfield_request__e e_ezsignformfield_dependencyrequirement) {
    char* e_ezsignformfield_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
	return e_ezsignformfield_dependencyrequirementArray[e_ezsignformfield_dependencyrequirement];
}

ezmax_api_definition__full_ezsignformfield_request__e e_ezsignformfield_dependencyrequirementezsignformfield_request_FromString(char* e_ezsignformfield_dependencyrequirement){
    int stringToReturn = 0;
    char *e_ezsignformfield_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
    size_t sizeofArray = sizeof(e_ezsignformfield_dependencyrequirementArray) / sizeof(e_ezsignformfield_dependencyrequirementArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignformfield_dependencyrequirement, e_ezsignformfield_dependencyrequirementArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignformfield_request_t *ezsignformfield_request_create(
    int pki_ezsignformfield_id,
    int i_ezsignpage_pagenumber,
    char *s_ezsignformfield_label,
    char *s_ezsignformfield_value,
    int i_ezsignformfield_x,
    int i_ezsignformfield_y,
    int i_ezsignformfield_width,
    int i_ezsignformfield_height,
    int b_ezsignformfield_autocomplete,
    int b_ezsignformfield_selected,
    char *s_ezsignformfield_enteredvalue,
    field_e_ezsignformfield_dependencyrequirement_t *e_ezsignformfield_dependencyrequirement
    ) {
    ezsignformfield_request_t *ezsignformfield_request_local_var = malloc(sizeof(ezsignformfield_request_t));
    if (!ezsignformfield_request_local_var) {
        return NULL;
    }
    ezsignformfield_request_local_var->pki_ezsignformfield_id = pki_ezsignformfield_id;
    ezsignformfield_request_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignformfield_request_local_var->s_ezsignformfield_label = s_ezsignformfield_label;
    ezsignformfield_request_local_var->s_ezsignformfield_value = s_ezsignformfield_value;
    ezsignformfield_request_local_var->i_ezsignformfield_x = i_ezsignformfield_x;
    ezsignformfield_request_local_var->i_ezsignformfield_y = i_ezsignformfield_y;
    ezsignformfield_request_local_var->i_ezsignformfield_width = i_ezsignformfield_width;
    ezsignformfield_request_local_var->i_ezsignformfield_height = i_ezsignformfield_height;
    ezsignformfield_request_local_var->b_ezsignformfield_autocomplete = b_ezsignformfield_autocomplete;
    ezsignformfield_request_local_var->b_ezsignformfield_selected = b_ezsignformfield_selected;
    ezsignformfield_request_local_var->s_ezsignformfield_enteredvalue = s_ezsignformfield_enteredvalue;
    ezsignformfield_request_local_var->e_ezsignformfield_dependencyrequirement = e_ezsignformfield_dependencyrequirement;

    return ezsignformfield_request_local_var;
}


void ezsignformfield_request_free(ezsignformfield_request_t *ezsignformfield_request) {
    if(NULL == ezsignformfield_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfield_request->s_ezsignformfield_label) {
        free(ezsignformfield_request->s_ezsignformfield_label);
        ezsignformfield_request->s_ezsignformfield_label = NULL;
    }
    if (ezsignformfield_request->s_ezsignformfield_value) {
        free(ezsignformfield_request->s_ezsignformfield_value);
        ezsignformfield_request->s_ezsignformfield_value = NULL;
    }
    if (ezsignformfield_request->s_ezsignformfield_enteredvalue) {
        free(ezsignformfield_request->s_ezsignformfield_enteredvalue);
        ezsignformfield_request->s_ezsignformfield_enteredvalue = NULL;
    }
    if (ezsignformfield_request->e_ezsignformfield_dependencyrequirement) {
        field_e_ezsignformfield_dependencyrequirement_free(ezsignformfield_request->e_ezsignformfield_dependencyrequirement);
        ezsignformfield_request->e_ezsignformfield_dependencyrequirement = NULL;
    }
    free(ezsignformfield_request);
}

cJSON *ezsignformfield_request_convertToJSON(ezsignformfield_request_t *ezsignformfield_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfield_request->pki_ezsignformfield_id
    if(ezsignformfield_request->pki_ezsignformfield_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldID", ezsignformfield_request->pki_ezsignformfield_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignformfield_request->i_ezsignpage_pagenumber
    if (!ezsignformfield_request->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", ezsignformfield_request->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_request->s_ezsignformfield_label
    if (!ezsignformfield_request->s_ezsignformfield_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldLabel", ezsignformfield_request->s_ezsignformfield_label) == NULL) {
    goto fail; //String
    }


    // ezsignformfield_request->s_ezsignformfield_value
    if(ezsignformfield_request->s_ezsignformfield_value) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldValue", ezsignformfield_request->s_ezsignformfield_value) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfield_request->i_ezsignformfield_x
    if (!ezsignformfield_request->i_ezsignformfield_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldX", ezsignformfield_request->i_ezsignformfield_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_request->i_ezsignformfield_y
    if (!ezsignformfield_request->i_ezsignformfield_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldY", ezsignformfield_request->i_ezsignformfield_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_request->i_ezsignformfield_width
    if (!ezsignformfield_request->i_ezsignformfield_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldWidth", ezsignformfield_request->i_ezsignformfield_width) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_request->i_ezsignformfield_height
    if (!ezsignformfield_request->i_ezsignformfield_height) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldHeight", ezsignformfield_request->i_ezsignformfield_height) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_request->b_ezsignformfield_autocomplete
    if(ezsignformfield_request->b_ezsignformfield_autocomplete) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldAutocomplete", ezsignformfield_request->b_ezsignformfield_autocomplete) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignformfield_request->b_ezsignformfield_selected
    if(ezsignformfield_request->b_ezsignformfield_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldSelected", ezsignformfield_request->b_ezsignformfield_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignformfield_request->s_ezsignformfield_enteredvalue
    if(ezsignformfield_request->s_ezsignformfield_enteredvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldEnteredvalue", ezsignformfield_request->s_ezsignformfield_enteredvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfield_request->e_ezsignformfield_dependencyrequirement
    if(ezsignformfield_request->e_ezsignformfield_dependencyrequirement != ezmax_api_definition__full_ezsignformfield_request__NULL) {
    cJSON *e_ezsignformfield_dependencyrequirement_local_JSON = field_e_ezsignformfield_dependencyrequirement_convertToJSON(ezsignformfield_request->e_ezsignformfield_dependencyrequirement);
    if(e_ezsignformfield_dependencyrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldDependencyrequirement", e_ezsignformfield_dependencyrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignformfield_request_t *ezsignformfield_request_parseFromJSON(cJSON *ezsignformfield_requestJSON){

    ezsignformfield_request_t *ezsignformfield_request_local_var = NULL;

    // define the local variable for ezsignformfield_request->e_ezsignformfield_dependencyrequirement
    field_e_ezsignformfield_dependencyrequirement_t *e_ezsignformfield_dependencyrequirement_local_nonprim = NULL;

    // ezsignformfield_request->pki_ezsignformfield_id
    cJSON *pki_ezsignformfield_id = cJSON_GetObjectItemCaseSensitive(ezsignformfield_requestJSON, "pkiEzsignformfieldID");
    if (pki_ezsignformfield_id) { 
    if(!cJSON_IsNumber(pki_ezsignformfield_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignformfield_request->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignformfield_requestJSON, "iEzsignpagePagenumber");
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsignformfield_request->s_ezsignformfield_label
    cJSON *s_ezsignformfield_label = cJSON_GetObjectItemCaseSensitive(ezsignformfield_requestJSON, "sEzsignformfieldLabel");
    if (!s_ezsignformfield_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_label))
    {
    goto end; //String
    }

    // ezsignformfield_request->s_ezsignformfield_value
    cJSON *s_ezsignformfield_value = cJSON_GetObjectItemCaseSensitive(ezsignformfield_requestJSON, "sEzsignformfieldValue");
    if (s_ezsignformfield_value) { 
    if(!cJSON_IsString(s_ezsignformfield_value) && !cJSON_IsNull(s_ezsignformfield_value))
    {
    goto end; //String
    }
    }

    // ezsignformfield_request->i_ezsignformfield_x
    cJSON *i_ezsignformfield_x = cJSON_GetObjectItemCaseSensitive(ezsignformfield_requestJSON, "iEzsignformfieldX");
    if (!i_ezsignformfield_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_x))
    {
    goto end; //Numeric
    }

    // ezsignformfield_request->i_ezsignformfield_y
    cJSON *i_ezsignformfield_y = cJSON_GetObjectItemCaseSensitive(ezsignformfield_requestJSON, "iEzsignformfieldY");
    if (!i_ezsignformfield_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_y))
    {
    goto end; //Numeric
    }

    // ezsignformfield_request->i_ezsignformfield_width
    cJSON *i_ezsignformfield_width = cJSON_GetObjectItemCaseSensitive(ezsignformfield_requestJSON, "iEzsignformfieldWidth");
    if (!i_ezsignformfield_width) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_width))
    {
    goto end; //Numeric
    }

    // ezsignformfield_request->i_ezsignformfield_height
    cJSON *i_ezsignformfield_height = cJSON_GetObjectItemCaseSensitive(ezsignformfield_requestJSON, "iEzsignformfieldHeight");
    if (!i_ezsignformfield_height) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_height))
    {
    goto end; //Numeric
    }

    // ezsignformfield_request->b_ezsignformfield_autocomplete
    cJSON *b_ezsignformfield_autocomplete = cJSON_GetObjectItemCaseSensitive(ezsignformfield_requestJSON, "bEzsignformfieldAutocomplete");
    if (b_ezsignformfield_autocomplete) { 
    if(!cJSON_IsBool(b_ezsignformfield_autocomplete))
    {
    goto end; //Bool
    }
    }

    // ezsignformfield_request->b_ezsignformfield_selected
    cJSON *b_ezsignformfield_selected = cJSON_GetObjectItemCaseSensitive(ezsignformfield_requestJSON, "bEzsignformfieldSelected");
    if (b_ezsignformfield_selected) { 
    if(!cJSON_IsBool(b_ezsignformfield_selected))
    {
    goto end; //Bool
    }
    }

    // ezsignformfield_request->s_ezsignformfield_enteredvalue
    cJSON *s_ezsignformfield_enteredvalue = cJSON_GetObjectItemCaseSensitive(ezsignformfield_requestJSON, "sEzsignformfieldEnteredvalue");
    if (s_ezsignformfield_enteredvalue) { 
    if(!cJSON_IsString(s_ezsignformfield_enteredvalue) && !cJSON_IsNull(s_ezsignformfield_enteredvalue))
    {
    goto end; //String
    }
    }

    // ezsignformfield_request->e_ezsignformfield_dependencyrequirement
    cJSON *e_ezsignformfield_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(ezsignformfield_requestJSON, "eEzsignformfieldDependencyrequirement");
    if (e_ezsignformfield_dependencyrequirement) { 
    e_ezsignformfield_dependencyrequirement_local_nonprim = field_e_ezsignformfield_dependencyrequirement_parseFromJSON(e_ezsignformfield_dependencyrequirement); //custom
    }


    ezsignformfield_request_local_var = ezsignformfield_request_create (
        pki_ezsignformfield_id ? pki_ezsignformfield_id->valuedouble : 0,
        i_ezsignpage_pagenumber->valuedouble,
        strdup(s_ezsignformfield_label->valuestring),
        s_ezsignformfield_value && !cJSON_IsNull(s_ezsignformfield_value) ? strdup(s_ezsignformfield_value->valuestring) : NULL,
        i_ezsignformfield_x->valuedouble,
        i_ezsignformfield_y->valuedouble,
        i_ezsignformfield_width->valuedouble,
        i_ezsignformfield_height->valuedouble,
        b_ezsignformfield_autocomplete ? b_ezsignformfield_autocomplete->valueint : 0,
        b_ezsignformfield_selected ? b_ezsignformfield_selected->valueint : 0,
        s_ezsignformfield_enteredvalue && !cJSON_IsNull(s_ezsignformfield_enteredvalue) ? strdup(s_ezsignformfield_enteredvalue->valuestring) : NULL,
        e_ezsignformfield_dependencyrequirement ? e_ezsignformfield_dependencyrequirement_local_nonprim : NULL
        );

    return ezsignformfield_request_local_var;
end:
    if (e_ezsignformfield_dependencyrequirement_local_nonprim) {
        field_e_ezsignformfield_dependencyrequirement_free(e_ezsignformfield_dependencyrequirement_local_nonprim);
        e_ezsignformfield_dependencyrequirement_local_nonprim = NULL;
    }
    return NULL;

}
