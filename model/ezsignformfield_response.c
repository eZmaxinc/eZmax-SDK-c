#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfield_response.h"



static ezsignformfield_response_t *ezsignformfield_response_create_internal(
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
    ezmax_api_definition__full_field_e_ezsignformfield_dependencyrequirement__e e_ezsignformfield_dependencyrequirement,
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignformfield_horizontalalignment,
    textstylestatic_response_compound_t *obj_textstylestatic
    ) {
    ezsignformfield_response_t *ezsignformfield_response_local_var = malloc(sizeof(ezsignformfield_response_t));
    if (!ezsignformfield_response_local_var) {
        return NULL;
    }
    ezsignformfield_response_local_var->pki_ezsignformfield_id = pki_ezsignformfield_id;
    ezsignformfield_response_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignformfield_response_local_var->s_ezsignformfield_label = s_ezsignformfield_label;
    ezsignformfield_response_local_var->s_ezsignformfield_value = s_ezsignformfield_value;
    ezsignformfield_response_local_var->i_ezsignformfield_x = i_ezsignformfield_x;
    ezsignformfield_response_local_var->i_ezsignformfield_y = i_ezsignformfield_y;
    ezsignformfield_response_local_var->i_ezsignformfield_width = i_ezsignformfield_width;
    ezsignformfield_response_local_var->i_ezsignformfield_height = i_ezsignformfield_height;
    ezsignformfield_response_local_var->b_ezsignformfield_autocomplete = b_ezsignformfield_autocomplete;
    ezsignformfield_response_local_var->b_ezsignformfield_selected = b_ezsignformfield_selected;
    ezsignformfield_response_local_var->s_ezsignformfield_enteredvalue = s_ezsignformfield_enteredvalue;
    ezsignformfield_response_local_var->e_ezsignformfield_dependencyrequirement = e_ezsignformfield_dependencyrequirement;
    ezsignformfield_response_local_var->e_ezsignformfield_horizontalalignment = e_ezsignformfield_horizontalalignment;
    ezsignformfield_response_local_var->obj_textstylestatic = obj_textstylestatic;

    ezsignformfield_response_local_var->_library_owned = 1;
    return ezsignformfield_response_local_var;
}

__attribute__((deprecated)) ezsignformfield_response_t *ezsignformfield_response_create(
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
    ezmax_api_definition__full_field_e_ezsignformfield_dependencyrequirement__e e_ezsignformfield_dependencyrequirement,
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignformfield_horizontalalignment,
    textstylestatic_response_compound_t *obj_textstylestatic
    ) {
    return ezsignformfield_response_create_internal (
        pki_ezsignformfield_id,
        i_ezsignpage_pagenumber,
        s_ezsignformfield_label,
        s_ezsignformfield_value,
        i_ezsignformfield_x,
        i_ezsignformfield_y,
        i_ezsignformfield_width,
        i_ezsignformfield_height,
        b_ezsignformfield_autocomplete,
        b_ezsignformfield_selected,
        s_ezsignformfield_enteredvalue,
        e_ezsignformfield_dependencyrequirement,
        e_ezsignformfield_horizontalalignment,
        obj_textstylestatic
        );
}

void ezsignformfield_response_free(ezsignformfield_response_t *ezsignformfield_response) {
    if(NULL == ezsignformfield_response){
        return ;
    }
    if(ezsignformfield_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignformfield_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfield_response->s_ezsignformfield_label) {
        free(ezsignformfield_response->s_ezsignformfield_label);
        ezsignformfield_response->s_ezsignformfield_label = NULL;
    }
    if (ezsignformfield_response->s_ezsignformfield_value) {
        free(ezsignformfield_response->s_ezsignformfield_value);
        ezsignformfield_response->s_ezsignformfield_value = NULL;
    }
    if (ezsignformfield_response->s_ezsignformfield_enteredvalue) {
        free(ezsignformfield_response->s_ezsignformfield_enteredvalue);
        ezsignformfield_response->s_ezsignformfield_enteredvalue = NULL;
    }
    if (ezsignformfield_response->obj_textstylestatic) {
        textstylestatic_response_compound_free(ezsignformfield_response->obj_textstylestatic);
        ezsignformfield_response->obj_textstylestatic = NULL;
    }
    free(ezsignformfield_response);
}

cJSON *ezsignformfield_response_convertToJSON(ezsignformfield_response_t *ezsignformfield_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfield_response->pki_ezsignformfield_id
    if (!ezsignformfield_response->pki_ezsignformfield_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldID", ezsignformfield_response->pki_ezsignformfield_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_response->i_ezsignpage_pagenumber
    if (!ezsignformfield_response->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", ezsignformfield_response->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_response->s_ezsignformfield_label
    if (!ezsignformfield_response->s_ezsignformfield_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldLabel", ezsignformfield_response->s_ezsignformfield_label) == NULL) {
    goto fail; //String
    }


    // ezsignformfield_response->s_ezsignformfield_value
    if(ezsignformfield_response->s_ezsignformfield_value) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldValue", ezsignformfield_response->s_ezsignformfield_value) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfield_response->i_ezsignformfield_x
    if (!ezsignformfield_response->i_ezsignformfield_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldX", ezsignformfield_response->i_ezsignformfield_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_response->i_ezsignformfield_y
    if (!ezsignformfield_response->i_ezsignformfield_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldY", ezsignformfield_response->i_ezsignformfield_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_response->i_ezsignformfield_width
    if (!ezsignformfield_response->i_ezsignformfield_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldWidth", ezsignformfield_response->i_ezsignformfield_width) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_response->i_ezsignformfield_height
    if (!ezsignformfield_response->i_ezsignformfield_height) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldHeight", ezsignformfield_response->i_ezsignformfield_height) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_response->b_ezsignformfield_autocomplete
    if(ezsignformfield_response->b_ezsignformfield_autocomplete) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldAutocomplete", ezsignformfield_response->b_ezsignformfield_autocomplete) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignformfield_response->b_ezsignformfield_selected
    if(ezsignformfield_response->b_ezsignformfield_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldSelected", ezsignformfield_response->b_ezsignformfield_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignformfield_response->s_ezsignformfield_enteredvalue
    if(ezsignformfield_response->s_ezsignformfield_enteredvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldEnteredvalue", ezsignformfield_response->s_ezsignformfield_enteredvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfield_response->e_ezsignformfield_dependencyrequirement
    if(ezsignformfield_response->e_ezsignformfield_dependencyrequirement != ezmax_api_definition__full_field_e_ezsignformfield_dependencyrequirement__NULL) {
    cJSON *e_ezsignformfield_dependencyrequirement_local_JSON = field_e_ezsignformfield_dependencyrequirement_convertToJSON(ezsignformfield_response->e_ezsignformfield_dependencyrequirement);
    if(e_ezsignformfield_dependencyrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldDependencyrequirement", e_ezsignformfield_dependencyrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignformfield_response->e_ezsignformfield_horizontalalignment
    if(ezsignformfield_response->e_ezsignformfield_horizontalalignment != ezmax_api_definition__full_enum_horizontalalignment__NULL) {
    cJSON *e_ezsignformfield_horizontalalignment_local_JSON = enum_horizontalalignment_convertToJSON(ezsignformfield_response->e_ezsignformfield_horizontalalignment);
    if(e_ezsignformfield_horizontalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldHorizontalalignment", e_ezsignformfield_horizontalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignformfield_response->obj_textstylestatic
    if(ezsignformfield_response->obj_textstylestatic) {
    cJSON *obj_textstylestatic_local_JSON = textstylestatic_response_compound_convertToJSON(ezsignformfield_response->obj_textstylestatic);
    if(obj_textstylestatic_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objTextstylestatic", obj_textstylestatic_local_JSON);
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

ezsignformfield_response_t *ezsignformfield_response_parseFromJSON(cJSON *ezsignformfield_responseJSON){

    ezsignformfield_response_t *ezsignformfield_response_local_var = NULL;

    // define the local variable for ezsignformfield_response->e_ezsignformfield_dependencyrequirement
    ezmax_api_definition__full_field_e_ezsignformfield_dependencyrequirement__e e_ezsignformfield_dependencyrequirement_local_nonprim = 0;

    // define the local variable for ezsignformfield_response->e_ezsignformfield_horizontalalignment
    ezmax_api_definition__full_enum_horizontalalignment__e e_ezsignformfield_horizontalalignment_local_nonprim = 0;

    // define the local variable for ezsignformfield_response->obj_textstylestatic
    textstylestatic_response_compound_t *obj_textstylestatic_local_nonprim = NULL;

    // ezsignformfield_response->pki_ezsignformfield_id
    cJSON *pki_ezsignformfield_id = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "pkiEzsignformfieldID");
    if (cJSON_IsNull(pki_ezsignformfield_id)) {
        pki_ezsignformfield_id = NULL;
    }
    if (!pki_ezsignformfield_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignformfield_id))
    {
    goto end; //Numeric
    }

    // ezsignformfield_response->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "iEzsignpagePagenumber");
    if (cJSON_IsNull(i_ezsignpage_pagenumber)) {
        i_ezsignpage_pagenumber = NULL;
    }
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsignformfield_response->s_ezsignformfield_label
    cJSON *s_ezsignformfield_label = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "sEzsignformfieldLabel");
    if (cJSON_IsNull(s_ezsignformfield_label)) {
        s_ezsignformfield_label = NULL;
    }
    if (!s_ezsignformfield_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_label))
    {
    goto end; //String
    }

    // ezsignformfield_response->s_ezsignformfield_value
    cJSON *s_ezsignformfield_value = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "sEzsignformfieldValue");
    if (cJSON_IsNull(s_ezsignformfield_value)) {
        s_ezsignformfield_value = NULL;
    }
    if (s_ezsignformfield_value) { 
    if(!cJSON_IsString(s_ezsignformfield_value) && !cJSON_IsNull(s_ezsignformfield_value))
    {
    goto end; //String
    }
    }

    // ezsignformfield_response->i_ezsignformfield_x
    cJSON *i_ezsignformfield_x = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "iEzsignformfieldX");
    if (cJSON_IsNull(i_ezsignformfield_x)) {
        i_ezsignformfield_x = NULL;
    }
    if (!i_ezsignformfield_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_x))
    {
    goto end; //Numeric
    }

    // ezsignformfield_response->i_ezsignformfield_y
    cJSON *i_ezsignformfield_y = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "iEzsignformfieldY");
    if (cJSON_IsNull(i_ezsignformfield_y)) {
        i_ezsignformfield_y = NULL;
    }
    if (!i_ezsignformfield_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_y))
    {
    goto end; //Numeric
    }

    // ezsignformfield_response->i_ezsignformfield_width
    cJSON *i_ezsignformfield_width = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "iEzsignformfieldWidth");
    if (cJSON_IsNull(i_ezsignformfield_width)) {
        i_ezsignformfield_width = NULL;
    }
    if (!i_ezsignformfield_width) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_width))
    {
    goto end; //Numeric
    }

    // ezsignformfield_response->i_ezsignformfield_height
    cJSON *i_ezsignformfield_height = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "iEzsignformfieldHeight");
    if (cJSON_IsNull(i_ezsignformfield_height)) {
        i_ezsignformfield_height = NULL;
    }
    if (!i_ezsignformfield_height) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_height))
    {
    goto end; //Numeric
    }

    // ezsignformfield_response->b_ezsignformfield_autocomplete
    cJSON *b_ezsignformfield_autocomplete = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "bEzsignformfieldAutocomplete");
    if (cJSON_IsNull(b_ezsignformfield_autocomplete)) {
        b_ezsignformfield_autocomplete = NULL;
    }
    if (b_ezsignformfield_autocomplete) { 
    if(!cJSON_IsBool(b_ezsignformfield_autocomplete))
    {
    goto end; //Bool
    }
    }

    // ezsignformfield_response->b_ezsignformfield_selected
    cJSON *b_ezsignformfield_selected = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "bEzsignformfieldSelected");
    if (cJSON_IsNull(b_ezsignformfield_selected)) {
        b_ezsignformfield_selected = NULL;
    }
    if (b_ezsignformfield_selected) { 
    if(!cJSON_IsBool(b_ezsignformfield_selected))
    {
    goto end; //Bool
    }
    }

    // ezsignformfield_response->s_ezsignformfield_enteredvalue
    cJSON *s_ezsignformfield_enteredvalue = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "sEzsignformfieldEnteredvalue");
    if (cJSON_IsNull(s_ezsignformfield_enteredvalue)) {
        s_ezsignformfield_enteredvalue = NULL;
    }
    if (s_ezsignformfield_enteredvalue) { 
    if(!cJSON_IsString(s_ezsignformfield_enteredvalue) && !cJSON_IsNull(s_ezsignformfield_enteredvalue))
    {
    goto end; //String
    }
    }

    // ezsignformfield_response->e_ezsignformfield_dependencyrequirement
    cJSON *e_ezsignformfield_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "eEzsignformfieldDependencyrequirement");
    if (cJSON_IsNull(e_ezsignformfield_dependencyrequirement)) {
        e_ezsignformfield_dependencyrequirement = NULL;
    }
    if (e_ezsignformfield_dependencyrequirement) { 
    e_ezsignformfield_dependencyrequirement_local_nonprim = field_e_ezsignformfield_dependencyrequirement_parseFromJSON(e_ezsignformfield_dependencyrequirement); //custom
    }

    // ezsignformfield_response->e_ezsignformfield_horizontalalignment
    cJSON *e_ezsignformfield_horizontalalignment = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "eEzsignformfieldHorizontalalignment");
    if (cJSON_IsNull(e_ezsignformfield_horizontalalignment)) {
        e_ezsignformfield_horizontalalignment = NULL;
    }
    if (e_ezsignformfield_horizontalalignment) { 
    e_ezsignformfield_horizontalalignment_local_nonprim = enum_horizontalalignment_parseFromJSON(e_ezsignformfield_horizontalalignment); //custom
    }

    // ezsignformfield_response->obj_textstylestatic
    cJSON *obj_textstylestatic = cJSON_GetObjectItemCaseSensitive(ezsignformfield_responseJSON, "objTextstylestatic");
    if (cJSON_IsNull(obj_textstylestatic)) {
        obj_textstylestatic = NULL;
    }
    if (obj_textstylestatic) { 
    obj_textstylestatic_local_nonprim = textstylestatic_response_compound_parseFromJSON(obj_textstylestatic); //nonprimitive
    }


    ezsignformfield_response_local_var = ezsignformfield_response_create_internal (
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
        s_ezsignformfield_enteredvalue && !cJSON_IsNull(s_ezsignformfield_enteredvalue) ? strdup(s_ezsignformfield_enteredvalue->valuestring) : NULL,
        e_ezsignformfield_dependencyrequirement ? e_ezsignformfield_dependencyrequirement_local_nonprim : 0,
        e_ezsignformfield_horizontalalignment ? e_ezsignformfield_horizontalalignment_local_nonprim : 0,
        obj_textstylestatic ? obj_textstylestatic_local_nonprim : NULL
        );

    return ezsignformfield_response_local_var;
end:
    if (e_ezsignformfield_dependencyrequirement_local_nonprim) {
        e_ezsignformfield_dependencyrequirement_local_nonprim = 0;
    }
    if (e_ezsignformfield_horizontalalignment_local_nonprim) {
        e_ezsignformfield_horizontalalignment_local_nonprim = 0;
    }
    if (obj_textstylestatic_local_nonprim) {
        textstylestatic_response_compound_free(obj_textstylestatic_local_nonprim);
        obj_textstylestatic_local_nonprim = NULL;
    }
    return NULL;

}
