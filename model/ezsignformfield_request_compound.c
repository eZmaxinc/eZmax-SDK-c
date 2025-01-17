#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfield_request_compound.h"


char* ezsignformfield_request_compound_e_ezsignformfield_dependencyrequirement_ToString(ezmax_api_definition__full_ezsignformfield_request_compound__e e_ezsignformfield_dependencyrequirement) {
    char* e_ezsignformfield_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
    return e_ezsignformfield_dependencyrequirementArray[e_ezsignformfield_dependencyrequirement];
}

ezmax_api_definition__full_ezsignformfield_request_compound__e ezsignformfield_request_compound_e_ezsignformfield_dependencyrequirement_FromString(char* e_ezsignformfield_dependencyrequirement){
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
char* ezsignformfield_request_compound_e_ezsignformfield_horizontalalignment_ToString(ezmax_api_definition__full_ezsignformfield_request_compound__e e_ezsignformfield_horizontalalignment) {
    char* e_ezsignformfield_horizontalalignmentArray[] =  { "NULL", "Center", "Left", "Right" };
    return e_ezsignformfield_horizontalalignmentArray[e_ezsignformfield_horizontalalignment];
}

ezmax_api_definition__full_ezsignformfield_request_compound__e ezsignformfield_request_compound_e_ezsignformfield_horizontalalignment_FromString(char* e_ezsignformfield_horizontalalignment){
    int stringToReturn = 0;
    char *e_ezsignformfield_horizontalalignmentArray[] =  { "NULL", "Center", "Left", "Right" };
    size_t sizeofArray = sizeof(e_ezsignformfield_horizontalalignmentArray) / sizeof(e_ezsignformfield_horizontalalignmentArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsignformfield_horizontalalignment, e_ezsignformfield_horizontalalignmentArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsignformfield_request_compound_t *ezsignformfield_request_compound_create(
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
    field_e_ezsignformfield_dependencyrequirement_t *e_ezsignformfield_dependencyrequirement,
    enum_horizontalalignment_t *e_ezsignformfield_horizontalalignment,
    textstylestatic_request_compound_t *obj_textstylestatic,
    list_t *a_obj_ezsignelementdependency
    ) {
    ezsignformfield_request_compound_t *ezsignformfield_request_compound_local_var = malloc(sizeof(ezsignformfield_request_compound_t));
    if (!ezsignformfield_request_compound_local_var) {
        return NULL;
    }
    ezsignformfield_request_compound_local_var->pki_ezsignformfield_id = pki_ezsignformfield_id;
    ezsignformfield_request_compound_local_var->i_ezsignpage_pagenumber = i_ezsignpage_pagenumber;
    ezsignformfield_request_compound_local_var->s_ezsignformfield_label = s_ezsignformfield_label;
    ezsignformfield_request_compound_local_var->s_ezsignformfield_value = s_ezsignformfield_value;
    ezsignformfield_request_compound_local_var->i_ezsignformfield_x = i_ezsignformfield_x;
    ezsignformfield_request_compound_local_var->i_ezsignformfield_y = i_ezsignformfield_y;
    ezsignformfield_request_compound_local_var->i_ezsignformfield_width = i_ezsignformfield_width;
    ezsignformfield_request_compound_local_var->i_ezsignformfield_height = i_ezsignformfield_height;
    ezsignformfield_request_compound_local_var->b_ezsignformfield_autocomplete = b_ezsignformfield_autocomplete;
    ezsignformfield_request_compound_local_var->b_ezsignformfield_selected = b_ezsignformfield_selected;
    ezsignformfield_request_compound_local_var->s_ezsignformfield_enteredvalue = s_ezsignformfield_enteredvalue;
    ezsignformfield_request_compound_local_var->e_ezsignformfield_dependencyrequirement = e_ezsignformfield_dependencyrequirement;
    ezsignformfield_request_compound_local_var->e_ezsignformfield_horizontalalignment = e_ezsignformfield_horizontalalignment;
    ezsignformfield_request_compound_local_var->obj_textstylestatic = obj_textstylestatic;
    ezsignformfield_request_compound_local_var->a_obj_ezsignelementdependency = a_obj_ezsignelementdependency;

    return ezsignformfield_request_compound_local_var;
}


void ezsignformfield_request_compound_free(ezsignformfield_request_compound_t *ezsignformfield_request_compound) {
    if(NULL == ezsignformfield_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfield_request_compound->s_ezsignformfield_label) {
        free(ezsignformfield_request_compound->s_ezsignformfield_label);
        ezsignformfield_request_compound->s_ezsignformfield_label = NULL;
    }
    if (ezsignformfield_request_compound->s_ezsignformfield_value) {
        free(ezsignformfield_request_compound->s_ezsignformfield_value);
        ezsignformfield_request_compound->s_ezsignformfield_value = NULL;
    }
    if (ezsignformfield_request_compound->s_ezsignformfield_enteredvalue) {
        free(ezsignformfield_request_compound->s_ezsignformfield_enteredvalue);
        ezsignformfield_request_compound->s_ezsignformfield_enteredvalue = NULL;
    }
    if (ezsignformfield_request_compound->e_ezsignformfield_dependencyrequirement) {
        field_e_ezsignformfield_dependencyrequirement_free(ezsignformfield_request_compound->e_ezsignformfield_dependencyrequirement);
        ezsignformfield_request_compound->e_ezsignformfield_dependencyrequirement = NULL;
    }
    if (ezsignformfield_request_compound->e_ezsignformfield_horizontalalignment) {
        enum_horizontalalignment_free(ezsignformfield_request_compound->e_ezsignformfield_horizontalalignment);
        ezsignformfield_request_compound->e_ezsignformfield_horizontalalignment = NULL;
    }
    if (ezsignformfield_request_compound->obj_textstylestatic) {
        textstylestatic_request_compound_free(ezsignformfield_request_compound->obj_textstylestatic);
        ezsignformfield_request_compound->obj_textstylestatic = NULL;
    }
    if (ezsignformfield_request_compound->a_obj_ezsignelementdependency) {
        list_ForEach(listEntry, ezsignformfield_request_compound->a_obj_ezsignelementdependency) {
            ezsignelementdependency_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfield_request_compound->a_obj_ezsignelementdependency);
        ezsignformfield_request_compound->a_obj_ezsignelementdependency = NULL;
    }
    free(ezsignformfield_request_compound);
}

cJSON *ezsignformfield_request_compound_convertToJSON(ezsignformfield_request_compound_t *ezsignformfield_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfield_request_compound->pki_ezsignformfield_id
    if(ezsignformfield_request_compound->pki_ezsignformfield_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignformfieldID", ezsignformfield_request_compound->pki_ezsignformfield_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignformfield_request_compound->i_ezsignpage_pagenumber
    if (!ezsignformfield_request_compound->i_ezsignpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignpagePagenumber", ezsignformfield_request_compound->i_ezsignpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_request_compound->s_ezsignformfield_label
    if (!ezsignformfield_request_compound->s_ezsignformfield_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignformfieldLabel", ezsignformfield_request_compound->s_ezsignformfield_label) == NULL) {
    goto fail; //String
    }


    // ezsignformfield_request_compound->s_ezsignformfield_value
    if(ezsignformfield_request_compound->s_ezsignformfield_value) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldValue", ezsignformfield_request_compound->s_ezsignformfield_value) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfield_request_compound->i_ezsignformfield_x
    if (!ezsignformfield_request_compound->i_ezsignformfield_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldX", ezsignformfield_request_compound->i_ezsignformfield_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_request_compound->i_ezsignformfield_y
    if (!ezsignformfield_request_compound->i_ezsignformfield_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldY", ezsignformfield_request_compound->i_ezsignformfield_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_request_compound->i_ezsignformfield_width
    if (!ezsignformfield_request_compound->i_ezsignformfield_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldWidth", ezsignformfield_request_compound->i_ezsignformfield_width) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_request_compound->i_ezsignformfield_height
    if (!ezsignformfield_request_compound->i_ezsignformfield_height) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsignformfieldHeight", ezsignformfield_request_compound->i_ezsignformfield_height) == NULL) {
    goto fail; //Numeric
    }


    // ezsignformfield_request_compound->b_ezsignformfield_autocomplete
    if(ezsignformfield_request_compound->b_ezsignformfield_autocomplete) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldAutocomplete", ezsignformfield_request_compound->b_ezsignformfield_autocomplete) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignformfield_request_compound->b_ezsignformfield_selected
    if(ezsignformfield_request_compound->b_ezsignformfield_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsignformfieldSelected", ezsignformfield_request_compound->b_ezsignformfield_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsignformfield_request_compound->s_ezsignformfield_enteredvalue
    if(ezsignformfield_request_compound->s_ezsignformfield_enteredvalue) {
    if(cJSON_AddStringToObject(item, "sEzsignformfieldEnteredvalue", ezsignformfield_request_compound->s_ezsignformfield_enteredvalue) == NULL) {
    goto fail; //String
    }
    }


    // ezsignformfield_request_compound->e_ezsignformfield_dependencyrequirement
    if(ezsignformfield_request_compound->e_ezsignformfield_dependencyrequirement != ezmax_api_definition__full_ezsignformfield_request_compound__NULL) {
    cJSON *e_ezsignformfield_dependencyrequirement_local_JSON = field_e_ezsignformfield_dependencyrequirement_convertToJSON(ezsignformfield_request_compound->e_ezsignformfield_dependencyrequirement);
    if(e_ezsignformfield_dependencyrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldDependencyrequirement", e_ezsignformfield_dependencyrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignformfield_request_compound->e_ezsignformfield_horizontalalignment
    if(ezsignformfield_request_compound->e_ezsignformfield_horizontalalignment != ezmax_api_definition__full_ezsignformfield_request_compound__NULL) {
    cJSON *e_ezsignformfield_horizontalalignment_local_JSON = enum_horizontalalignment_convertToJSON(ezsignformfield_request_compound->e_ezsignformfield_horizontalalignment);
    if(e_ezsignformfield_horizontalalignment_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignformfieldHorizontalalignment", e_ezsignformfield_horizontalalignment_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsignformfield_request_compound->obj_textstylestatic
    if(ezsignformfield_request_compound->obj_textstylestatic) {
    cJSON *obj_textstylestatic_local_JSON = textstylestatic_request_compound_convertToJSON(ezsignformfield_request_compound->obj_textstylestatic);
    if(obj_textstylestatic_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objTextstylestatic", obj_textstylestatic_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignformfield_request_compound->a_obj_ezsignelementdependency
    if(ezsignformfield_request_compound->a_obj_ezsignelementdependency) {
    cJSON *a_obj_ezsignelementdependency = cJSON_AddArrayToObject(item, "a_objEzsignelementdependency");
    if(a_obj_ezsignelementdependency == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignelementdependencyListEntry;
    if (ezsignformfield_request_compound->a_obj_ezsignelementdependency) {
    list_ForEach(a_obj_ezsignelementdependencyListEntry, ezsignformfield_request_compound->a_obj_ezsignelementdependency) {
    cJSON *itemLocal = ezsignelementdependency_request_compound_convertToJSON(a_obj_ezsignelementdependencyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignelementdependency, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignformfield_request_compound_t *ezsignformfield_request_compound_parseFromJSON(cJSON *ezsignformfield_request_compoundJSON){

    ezsignformfield_request_compound_t *ezsignformfield_request_compound_local_var = NULL;

    // define the local variable for ezsignformfield_request_compound->e_ezsignformfield_dependencyrequirement
    field_e_ezsignformfield_dependencyrequirement_t *e_ezsignformfield_dependencyrequirement_local_nonprim = NULL;

    // define the local variable for ezsignformfield_request_compound->e_ezsignformfield_horizontalalignment
    enum_horizontalalignment_t *e_ezsignformfield_horizontalalignment_local_nonprim = NULL;

    // define the local variable for ezsignformfield_request_compound->obj_textstylestatic
    textstylestatic_request_compound_t *obj_textstylestatic_local_nonprim = NULL;

    // define the local list for ezsignformfield_request_compound->a_obj_ezsignelementdependency
    list_t *a_obj_ezsignelementdependencyList = NULL;

    // ezsignformfield_request_compound->pki_ezsignformfield_id
    cJSON *pki_ezsignformfield_id = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "pkiEzsignformfieldID");
    if (pki_ezsignformfield_id) { 
    if(!cJSON_IsNumber(pki_ezsignformfield_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignformfield_request_compound->i_ezsignpage_pagenumber
    cJSON *i_ezsignpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "iEzsignpagePagenumber");
    if (!i_ezsignpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsignformfield_request_compound->s_ezsignformfield_label
    cJSON *s_ezsignformfield_label = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "sEzsignformfieldLabel");
    if (!s_ezsignformfield_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfield_label))
    {
    goto end; //String
    }

    // ezsignformfield_request_compound->s_ezsignformfield_value
    cJSON *s_ezsignformfield_value = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "sEzsignformfieldValue");
    if (s_ezsignformfield_value) { 
    if(!cJSON_IsString(s_ezsignformfield_value) && !cJSON_IsNull(s_ezsignformfield_value))
    {
    goto end; //String
    }
    }

    // ezsignformfield_request_compound->i_ezsignformfield_x
    cJSON *i_ezsignformfield_x = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "iEzsignformfieldX");
    if (!i_ezsignformfield_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_x))
    {
    goto end; //Numeric
    }

    // ezsignformfield_request_compound->i_ezsignformfield_y
    cJSON *i_ezsignformfield_y = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "iEzsignformfieldY");
    if (!i_ezsignformfield_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_y))
    {
    goto end; //Numeric
    }

    // ezsignformfield_request_compound->i_ezsignformfield_width
    cJSON *i_ezsignformfield_width = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "iEzsignformfieldWidth");
    if (!i_ezsignformfield_width) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_width))
    {
    goto end; //Numeric
    }

    // ezsignformfield_request_compound->i_ezsignformfield_height
    cJSON *i_ezsignformfield_height = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "iEzsignformfieldHeight");
    if (!i_ezsignformfield_height) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsignformfield_height))
    {
    goto end; //Numeric
    }

    // ezsignformfield_request_compound->b_ezsignformfield_autocomplete
    cJSON *b_ezsignformfield_autocomplete = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "bEzsignformfieldAutocomplete");
    if (b_ezsignformfield_autocomplete) { 
    if(!cJSON_IsBool(b_ezsignformfield_autocomplete))
    {
    goto end; //Bool
    }
    }

    // ezsignformfield_request_compound->b_ezsignformfield_selected
    cJSON *b_ezsignformfield_selected = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "bEzsignformfieldSelected");
    if (b_ezsignformfield_selected) { 
    if(!cJSON_IsBool(b_ezsignformfield_selected))
    {
    goto end; //Bool
    }
    }

    // ezsignformfield_request_compound->s_ezsignformfield_enteredvalue
    cJSON *s_ezsignformfield_enteredvalue = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "sEzsignformfieldEnteredvalue");
    if (s_ezsignformfield_enteredvalue) { 
    if(!cJSON_IsString(s_ezsignformfield_enteredvalue) && !cJSON_IsNull(s_ezsignformfield_enteredvalue))
    {
    goto end; //String
    }
    }

    // ezsignformfield_request_compound->e_ezsignformfield_dependencyrequirement
    cJSON *e_ezsignformfield_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "eEzsignformfieldDependencyrequirement");
    if (e_ezsignformfield_dependencyrequirement) { 
    e_ezsignformfield_dependencyrequirement_local_nonprim = field_e_ezsignformfield_dependencyrequirement_parseFromJSON(e_ezsignformfield_dependencyrequirement); //custom
    }

    // ezsignformfield_request_compound->e_ezsignformfield_horizontalalignment
    cJSON *e_ezsignformfield_horizontalalignment = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "eEzsignformfieldHorizontalalignment");
    if (e_ezsignformfield_horizontalalignment) { 
    e_ezsignformfield_horizontalalignment_local_nonprim = enum_horizontalalignment_parseFromJSON(e_ezsignformfield_horizontalalignment); //custom
    }

    // ezsignformfield_request_compound->obj_textstylestatic
    cJSON *obj_textstylestatic = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "objTextstylestatic");
    if (obj_textstylestatic) { 
    obj_textstylestatic_local_nonprim = textstylestatic_request_compound_parseFromJSON(obj_textstylestatic); //nonprimitive
    }

    // ezsignformfield_request_compound->a_obj_ezsignelementdependency
    cJSON *a_obj_ezsignelementdependency = cJSON_GetObjectItemCaseSensitive(ezsignformfield_request_compoundJSON, "a_objEzsignelementdependency");
    if (a_obj_ezsignelementdependency) { 
    cJSON *a_obj_ezsignelementdependency_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignelementdependency)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignelementdependencyList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignelementdependency_local_nonprimitive,a_obj_ezsignelementdependency )
    {
        if(!cJSON_IsObject(a_obj_ezsignelementdependency_local_nonprimitive)){
            goto end;
        }
        ezsignelementdependency_request_compound_t *a_obj_ezsignelementdependencyItem = ezsignelementdependency_request_compound_parseFromJSON(a_obj_ezsignelementdependency_local_nonprimitive);

        list_addElement(a_obj_ezsignelementdependencyList, a_obj_ezsignelementdependencyItem);
    }
    }


    ezsignformfield_request_compound_local_var = ezsignformfield_request_compound_create (
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
        e_ezsignformfield_dependencyrequirement ? e_ezsignformfield_dependencyrequirement_local_nonprim : NULL,
        e_ezsignformfield_horizontalalignment ? e_ezsignformfield_horizontalalignment_local_nonprim : NULL,
        obj_textstylestatic ? obj_textstylestatic_local_nonprim : NULL,
        a_obj_ezsignelementdependency ? a_obj_ezsignelementdependencyList : NULL
        );

    return ezsignformfield_request_compound_local_var;
end:
    if (e_ezsignformfield_dependencyrequirement_local_nonprim) {
        field_e_ezsignformfield_dependencyrequirement_free(e_ezsignformfield_dependencyrequirement_local_nonprim);
        e_ezsignformfield_dependencyrequirement_local_nonprim = NULL;
    }
    if (e_ezsignformfield_horizontalalignment_local_nonprim) {
        enum_horizontalalignment_free(e_ezsignformfield_horizontalalignment_local_nonprim);
        e_ezsignformfield_horizontalalignment_local_nonprim = NULL;
    }
    if (obj_textstylestatic_local_nonprim) {
        textstylestatic_request_compound_free(obj_textstylestatic_local_nonprim);
        obj_textstylestatic_local_nonprim = NULL;
    }
    if (a_obj_ezsignelementdependencyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignelementdependencyList) {
            ezsignelementdependency_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignelementdependencyList);
        a_obj_ezsignelementdependencyList = NULL;
    }
    return NULL;

}
