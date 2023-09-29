#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfield_response_compound.h"



ezsignformfield_response_compound_t *ezsignformfield_response_compound_create(
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
    char *s_ezsignformfield_enteredvalue
    ) {
    ezsignformfield_response_compound_t *ezsignformfield_response_compound_local_var = malloc(sizeof(ezsignformfield_response_compound_t));
    if (!ezsignformfield_response_compound_local_var) {
        return NULL;
    }
    ezsignformfield_response_compound_local_var->pki_ezsignformfield_id = pki_ezsignformfield_id;
    ezsignformfield_response_compound_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignformfield_response_compound_local_var->s_ezsignformfield_label = s_ezsignformfield_label;
    ezsignformfield_response_compound_local_var->s_ezsignformfield_value = s_ezsignformfield_value;
    ezsignformfield_response_compound_local_var->i_ezsignformfield_x = i_ezsignformfield_x;
    ezsignformfield_response_compound_local_var->i_ezsignformfield_y = i_ezsignformfield_y;
    ezsignformfield_response_compound_local_var->i_ezsignformfield_width = i_ezsignformfield_width;
    ezsignformfield_response_compound_local_var->i_ezsignformfield_height = i_ezsignformfield_height;
    ezsignformfield_response_compound_local_var->b_ezsignformfield_autocomplete = b_ezsignformfield_autocomplete;
    ezsignformfield_response_compound_local_var->b_ezsignformfield_selected = b_ezsignformfield_selected;
    ezsignformfield_response_compound_local_var->s_ezsignformfield_enteredvalue = s_ezsignformfield_enteredvalue;

    return ezsignformfield_response_compound_local_var;
}


void ezsignformfield_response_compound_free(ezsignformfield_response_compound_t *ezsignformfield_response_compound) {
    if(NULL == ezsignformfield_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfield_response_compound->s_ezsignformfield_label) {
        free(ezsignformfield_response_compound->s_ezsignformfield_label);
        ezsignformfield_response_compound->s_ezsignformfield_label = NULL;
    }
    if (ezsignformfield_response_compound->s_ezsignformfield_value) {
        free(ezsignformfield_response_compound->s_ezsignformfield_value);
        ezsignformfield_response_compound->s_ezsignformfield_value = NULL;
    }
    if (ezsignformfield_response_compound->s_ezsignformfield_enteredvalue) {
        free(ezsignformfield_response_compound->s_ezsignformfield_enteredvalue);
        ezsignformfield_response_compound->s_ezsignformfield_enteredvalue = NULL;
    }
    free(ezsignformfield_response_compound);
}

cJSON *ezsignformfield_response_compound_convertToJSON(ezsignformfield_response_compound_t *ezsignformfield_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfield_response_compound->pki_ezsignformfield_id
    if (!ezsignformfield_response_compound->pki_ezsignformfield_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldID", ezsignformfield_response_compound->pki_ezsignformfield_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_response_compound->i_ezsignpage_pagenumber
    if (!ezsignformfield_response_compound->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", ezsignformfield_response_compound->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_response_compound->s_ezsignformfield_label
    if (!ezsignformfield_response_compound->s_ezsignformfield_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldLabel", ezsignformfield_response_compound->s_ezsignformfield_label) == NULL) {
    goto fail; //String
    }


    // ezsignformfield_response_compound->s_ezsignformfield_value
    if(ezsignformfield_response_compound->s_ezsignformfield_value) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldValue", ezsignformfield_response_compound->s_ezsignformfield_value) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfield_response_compound->i_ezsignformfield_x
    if (!ezsignformfield_response_compound->i_ezsignformfield_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldX", ezsignformfield_response_compound->i_ezsignformfield_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_response_compound->i_ezsignformfield_y
    if (!ezsignformfield_response_compound->i_ezsignformfield_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldY", ezsignformfield_response_compound->i_ezsignformfield_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_response_compound->i_ezsignformfield_width
    if (!ezsignformfield_response_compound->i_ezsignformfield_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldWidth", ezsignformfield_response_compound->i_ezsignformfield_width) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_response_compound->i_ezsignformfield_height
    if (!ezsignformfield_response_compound->i_ezsignformfield_height) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldHeight", ezsignformfield_response_compound->i_ezsignformfield_height) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_response_compound->b_ezsignformfield_autocomplete
    if(ezsignformfield_response_compound->b_ezsignformfield_autocomplete) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldAutocomplete", ezsignformfield_response_compound->b_ezsignformfield_autocomplete) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignformfield_response_compound->b_ezsignformfield_selected
    if(ezsignformfield_response_compound->b_ezsignformfield_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldSelected", ezsignformfield_response_compound->b_ezsignformfield_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignformfield_response_compound->s_ezsignformfield_enteredvalue
    if(ezsignformfield_response_compound->s_ezsignformfield_enteredvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldEnteredvalue", ezsignformfield_response_compound->s_ezsignformfield_enteredvalue) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignformfield_response_compound_t *ezsignformfield_response_compound_parseFromJSON(cJSON *ezsignformfield_response_compoundJSON){

    ezsignformfield_response_compound_t *ezsignformfield_response_compound_local_var = NULL;

    // ezsignformfield_response_compound->pki_ezsignformfield_id
    cJSON *pki_ezsignformfield_id = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "pkiEzsignformfieldID");
    if (!pki_ezsignformfield_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignformfield_id))
    {
    goto end; //Numeric
    }

    // ezsignformfield_response_compound->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "iEzsignpagePagenumber");
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsignformfield_response_compound->s_ezsignformfield_label
    cJSON *s_ezsignformfield_label = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "sEzsignformfieldLabel");
    if (!s_ezsignformfield_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_label))
    {
    goto end; //String
    }

    // ezsignformfield_response_compound->s_ezsignformfield_value
    cJSON *s_ezsignformfield_value = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "sEzsignformfieldValue");
    if (s_ezsignformfield_value) { 
    if(!cJSON_IsString(s_ezsignformfield_value) && !cJSON_IsNull(s_ezsignformfield_value))
    {
    goto end; //String
    }
    }

    // ezsignformfield_response_compound->i_ezsignformfield_x
    cJSON *i_ezsignformfield_x = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "iEzsignformfieldX");
    if (!i_ezsignformfield_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_x))
    {
    goto end; //Numeric
    }

    // ezsignformfield_response_compound->i_ezsignformfield_y
    cJSON *i_ezsignformfield_y = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "iEzsignformfieldY");
    if (!i_ezsignformfield_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_y))
    {
    goto end; //Numeric
    }

    // ezsignformfield_response_compound->i_ezsignformfield_width
    cJSON *i_ezsignformfield_width = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "iEzsignformfieldWidth");
    if (!i_ezsignformfield_width) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_width))
    {
    goto end; //Numeric
    }

    // ezsignformfield_response_compound->i_ezsignformfield_height
    cJSON *i_ezsignformfield_height = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "iEzsignformfieldHeight");
    if (!i_ezsignformfield_height) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_height))
    {
    goto end; //Numeric
    }

    // ezsignformfield_response_compound->b_ezsignformfield_autocomplete
    cJSON *b_ezsignformfield_autocomplete = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "bEzsignformfieldAutocomplete");
    if (b_ezsignformfield_autocomplete) { 
    if(!cJSON_IsBool(b_ezsignformfield_autocomplete))
    {
    goto end; //Bool
    }
    }

    // ezsignformfield_response_compound->b_ezsignformfield_selected
    cJSON *b_ezsignformfield_selected = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "bEzsignformfieldSelected");
    if (b_ezsignformfield_selected) { 
    if(!cJSON_IsBool(b_ezsignformfield_selected))
    {
    goto end; //Bool
    }
    }

    // ezsignformfield_response_compound->s_ezsignformfield_enteredvalue
    cJSON *s_ezsignformfield_enteredvalue = cJSON_GetObjectItemCaseSensitive(ezsignformfield_response_compoundJSON, "sEzsignformfieldEnteredvalue");
    if (s_ezsignformfield_enteredvalue) { 
    if(!cJSON_IsString(s_ezsignformfield_enteredvalue) && !cJSON_IsNull(s_ezsignformfield_enteredvalue))
    {
    goto end; //String
    }
    }


    ezsignformfield_response_compound_local_var = ezsignformfield_response_compound_create (
        pki_ezsignformfield_id->valuedouble,
        i_ezsignpage_pagenumber->valuedouble,
        strdup(s_ezsignformfield_label->valuestring),
        s_ezsignformfield_value && !cJSON_IsNull(s_ezsignformfield_value) ? strdup(s_ezsignformfield_value->valuestring) : NULL,
        i_ezsignformfield_x->valuedouble,
        i_ezsignformfield_y->valuedouble,
        i_ezsignformfield_width->valuedouble,
        i_ezsignformfield_height->valuedouble,
        b_ezsignformfield_autocomplete ? b_ezsignformfield_autocomplete->valueint : 0,
        b_ezsignformfield_selected ? b_ezsignformfield_selected->valueint : 0,
        s_ezsignformfield_enteredvalue && !cJSON_IsNull(s_ezsignformfield_enteredvalue) ? strdup(s_ezsignformfield_enteredvalue->valuestring) : NULL
        );

    return ezsignformfield_response_compound_local_var;
end:
    return NULL;

}
