#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfield_response_compound.h"


char* e_ezsigntemplateformfield_dependencyrequirementezsigntemplateformfield_response_compound_ToString(ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e e_ezsigntemplateformfield_dependencyrequirement) {
    char* e_ezsigntemplateformfield_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
	return e_ezsigntemplateformfield_dependencyrequirementArray[e_ezsigntemplateformfield_dependencyrequirement];
}

ezmax_api_definition__full_ezsigntemplateformfield_response_compound__e e_ezsigntemplateformfield_dependencyrequirementezsigntemplateformfield_response_compound_FromString(char* e_ezsigntemplateformfield_dependencyrequirement){
    int stringToReturn = 0;
    char *e_ezsigntemplateformfield_dependencyrequirementArray[] =  { "NULL", "AllOf", "AnyOf" };
    size_t sizeofArray = sizeof(e_ezsigntemplateformfield_dependencyrequirementArray) / sizeof(e_ezsigntemplateformfield_dependencyrequirementArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(e_ezsigntemplateformfield_dependencyrequirement, e_ezsigntemplateformfield_dependencyrequirementArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound_create(
    int pki_ezsigntemplateformfield_id,
    int i_ezsigntemplatedocumentpage_pagenumber,
    char *s_ezsigntemplateformfield_label,
    char *s_ezsigntemplateformfield_value,
    int i_ezsigntemplateformfield_x,
    int i_ezsigntemplateformfield_y,
    int i_ezsigntemplateformfield_width,
    int i_ezsigntemplateformfield_height,
    int b_ezsigntemplateformfield_autocomplete,
    int b_ezsigntemplateformfield_selected,
    field_e_ezsigntemplateformfield_dependencyrequirement_t *e_ezsigntemplateformfield_dependencyrequirement,
    list_t *a_obj_ezsigntemplateelementdependency
    ) {
    ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound_local_var = malloc(sizeof(ezsigntemplateformfield_response_compound_t));
    if (!ezsigntemplateformfield_response_compound_local_var) {
        return NULL;
    }
    ezsigntemplateformfield_response_compound_local_var->pki_ezsigntemplateformfield_id = pki_ezsigntemplateformfield_id;
    ezsigntemplateformfield_response_compound_local_var->i_ezsigntemplatedocumentpage_pagenumber = i_ezsigntemplatedocumentpage_pagenumber;
    ezsigntemplateformfield_response_compound_local_var->s_ezsigntemplateformfield_label = s_ezsigntemplateformfield_label;
    ezsigntemplateformfield_response_compound_local_var->s_ezsigntemplateformfield_value = s_ezsigntemplateformfield_value;
    ezsigntemplateformfield_response_compound_local_var->i_ezsigntemplateformfield_x = i_ezsigntemplateformfield_x;
    ezsigntemplateformfield_response_compound_local_var->i_ezsigntemplateformfield_y = i_ezsigntemplateformfield_y;
    ezsigntemplateformfield_response_compound_local_var->i_ezsigntemplateformfield_width = i_ezsigntemplateformfield_width;
    ezsigntemplateformfield_response_compound_local_var->i_ezsigntemplateformfield_height = i_ezsigntemplateformfield_height;
    ezsigntemplateformfield_response_compound_local_var->b_ezsigntemplateformfield_autocomplete = b_ezsigntemplateformfield_autocomplete;
    ezsigntemplateformfield_response_compound_local_var->b_ezsigntemplateformfield_selected = b_ezsigntemplateformfield_selected;
    ezsigntemplateformfield_response_compound_local_var->e_ezsigntemplateformfield_dependencyrequirement = e_ezsigntemplateformfield_dependencyrequirement;
    ezsigntemplateformfield_response_compound_local_var->a_obj_ezsigntemplateelementdependency = a_obj_ezsigntemplateelementdependency;

    return ezsigntemplateformfield_response_compound_local_var;
}


void ezsigntemplateformfield_response_compound_free(ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound) {
    if(NULL == ezsigntemplateformfield_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_label) {
        free(ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_label);
        ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_label = NULL;
    }
    if (ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_value) {
        free(ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_value);
        ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_value = NULL;
    }
    if (ezsigntemplateformfield_response_compound->e_ezsigntemplateformfield_dependencyrequirement) {
        field_e_ezsigntemplateformfield_dependencyrequirement_free(ezsigntemplateformfield_response_compound->e_ezsigntemplateformfield_dependencyrequirement);
        ezsigntemplateformfield_response_compound->e_ezsigntemplateformfield_dependencyrequirement = NULL;
    }
    if (ezsigntemplateformfield_response_compound->a_obj_ezsigntemplateelementdependency) {
        list_ForEach(listEntry, ezsigntemplateformfield_response_compound->a_obj_ezsigntemplateelementdependency) {
            ezsigntemplateelementdependency_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfield_response_compound->a_obj_ezsigntemplateelementdependency);
        ezsigntemplateformfield_response_compound->a_obj_ezsigntemplateelementdependency = NULL;
    }
    free(ezsigntemplateformfield_response_compound);
}

cJSON *ezsigntemplateformfield_response_compound_convertToJSON(ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfield_response_compound->pki_ezsigntemplateformfield_id
    if (!ezsigntemplateformfield_response_compound->pki_ezsigntemplateformfield_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplateformfieldID", ezsigntemplateformfield_response_compound->pki_ezsigntemplateformfield_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfield_response_compound->i_ezsigntemplatedocumentpage_pagenumber
    if (!ezsigntemplateformfield_response_compound->i_ezsigntemplatedocumentpage_pagenumber) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplatedocumentpagePagenumber", ezsigntemplateformfield_response_compound->i_ezsigntemplatedocumentpage_pagenumber) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_label
    if (!ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_label) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldLabel", ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_label) == NULL) {
    goto fail; //String
    }


    // ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_value
    if(ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_value) {
    if(cJSON_AddStringToObject(item, "sEzsigntemplateformfieldValue", ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_value) == NULL) {
    goto fail; //String
    }
    }


    // ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_x
    if (!ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_x) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldX", ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_x) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_y
    if (!ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_y) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldY", ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_y) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_width
    if (!ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_width) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldWidth", ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_width) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_height
    if (!ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_height) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "iEzsigntemplateformfieldHeight", ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_height) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplateformfield_response_compound->b_ezsigntemplateformfield_autocomplete
    if(ezsigntemplateformfield_response_compound->b_ezsigntemplateformfield_autocomplete) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldAutocomplete", ezsigntemplateformfield_response_compound->b_ezsigntemplateformfield_autocomplete) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplateformfield_response_compound->b_ezsigntemplateformfield_selected
    if(ezsigntemplateformfield_response_compound->b_ezsigntemplateformfield_selected) {
    if(cJSON_AddBoolToObject(item, "bEzsigntemplateformfieldSelected", ezsigntemplateformfield_response_compound->b_ezsigntemplateformfield_selected) == NULL) {
    goto fail; //Bool
    }
    }


    // ezsigntemplateformfield_response_compound->e_ezsigntemplateformfield_dependencyrequirement
    if(ezsigntemplateformfield_response_compound->e_ezsigntemplateformfield_dependencyrequirement != ezmax_api_definition__full_ezsigntemplateformfield_response_compound__NULL) {
    cJSON *e_ezsigntemplateformfield_dependencyrequirement_local_JSON = field_e_ezsigntemplateformfield_dependencyrequirement_convertToJSON(ezsigntemplateformfield_response_compound->e_ezsigntemplateformfield_dependencyrequirement);
    if(e_ezsigntemplateformfield_dependencyrequirement_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsigntemplateformfieldDependencyrequirement", e_ezsigntemplateformfield_dependencyrequirement_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }
    }


    // ezsigntemplateformfield_response_compound->a_obj_ezsigntemplateelementdependency
    if(ezsigntemplateformfield_response_compound->a_obj_ezsigntemplateelementdependency) {
    cJSON *a_obj_ezsigntemplateelementdependency = cJSON_AddArrayToObject(item, "a_objEzsigntemplateelementdependency");
    if(a_obj_ezsigntemplateelementdependency == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateelementdependencyListEntry;
    if (ezsigntemplateformfield_response_compound->a_obj_ezsigntemplateelementdependency) {
    list_ForEach(a_obj_ezsigntemplateelementdependencyListEntry, ezsigntemplateformfield_response_compound->a_obj_ezsigntemplateelementdependency) {
    cJSON *itemLocal = ezsigntemplateelementdependency_response_compound_convertToJSON(a_obj_ezsigntemplateelementdependencyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateelementdependency, itemLocal);
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

ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound_parseFromJSON(cJSON *ezsigntemplateformfield_response_compoundJSON){

    ezsigntemplateformfield_response_compound_t *ezsigntemplateformfield_response_compound_local_var = NULL;

    // define the local variable for ezsigntemplateformfield_response_compound->e_ezsigntemplateformfield_dependencyrequirement
    field_e_ezsigntemplateformfield_dependencyrequirement_t *e_ezsigntemplateformfield_dependencyrequirement_local_nonprim = NULL;

    // define the local list for ezsigntemplateformfield_response_compound->a_obj_ezsigntemplateelementdependency
    list_t *a_obj_ezsigntemplateelementdependencyList = NULL;

    // ezsigntemplateformfield_response_compound->pki_ezsigntemplateformfield_id
    cJSON *pki_ezsigntemplateformfield_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_response_compoundJSON, "pkiEzsigntemplateformfieldID");
    if (!pki_ezsigntemplateformfield_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplateformfield_id))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfield_response_compound->i_ezsigntemplatedocumentpage_pagenumber
    cJSON *i_ezsigntemplatedocumentpage_pagenumber = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_response_compoundJSON, "iEzsigntemplatedocumentpagePagenumber");
    if (!i_ezsigntemplatedocumentpage_pagenumber) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplatedocumentpage_pagenumber))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_label
    cJSON *s_ezsigntemplateformfield_label = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_response_compoundJSON, "sEzsigntemplateformfieldLabel");
    if (!s_ezsigntemplateformfield_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplateformfield_label))
    {
    goto end; //String
    }

    // ezsigntemplateformfield_response_compound->s_ezsigntemplateformfield_value
    cJSON *s_ezsigntemplateformfield_value = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_response_compoundJSON, "sEzsigntemplateformfieldValue");
    if (s_ezsigntemplateformfield_value) { 
    if(!cJSON_IsString(s_ezsigntemplateformfield_value) && !cJSON_IsNull(s_ezsigntemplateformfield_value))
    {
    goto end; //String
    }
    }

    // ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_x
    cJSON *i_ezsigntemplateformfield_x = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_response_compoundJSON, "iEzsigntemplateformfieldX");
    if (!i_ezsigntemplateformfield_x) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfield_x))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_y
    cJSON *i_ezsigntemplateformfield_y = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_response_compoundJSON, "iEzsigntemplateformfieldY");
    if (!i_ezsigntemplateformfield_y) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfield_y))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_width
    cJSON *i_ezsigntemplateformfield_width = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_response_compoundJSON, "iEzsigntemplateformfieldWidth");
    if (!i_ezsigntemplateformfield_width) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfield_width))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfield_response_compound->i_ezsigntemplateformfield_height
    cJSON *i_ezsigntemplateformfield_height = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_response_compoundJSON, "iEzsigntemplateformfieldHeight");
    if (!i_ezsigntemplateformfield_height) {
        goto end;
    }

    
    if(!cJSON_IsNumber(i_ezsigntemplateformfield_height))
    {
    goto end; //Numeric
    }

    // ezsigntemplateformfield_response_compound->b_ezsigntemplateformfield_autocomplete
    cJSON *b_ezsigntemplateformfield_autocomplete = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_response_compoundJSON, "bEzsigntemplateformfieldAutocomplete");
    if (b_ezsigntemplateformfield_autocomplete) { 
    if(!cJSON_IsBool(b_ezsigntemplateformfield_autocomplete))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplateformfield_response_compound->b_ezsigntemplateformfield_selected
    cJSON *b_ezsigntemplateformfield_selected = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_response_compoundJSON, "bEzsigntemplateformfieldSelected");
    if (b_ezsigntemplateformfield_selected) { 
    if(!cJSON_IsBool(b_ezsigntemplateformfield_selected))
    {
    goto end; //Bool
    }
    }

    // ezsigntemplateformfield_response_compound->e_ezsigntemplateformfield_dependencyrequirement
    cJSON *e_ezsigntemplateformfield_dependencyrequirement = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_response_compoundJSON, "eEzsigntemplateformfieldDependencyrequirement");
    if (e_ezsigntemplateformfield_dependencyrequirement) { 
    e_ezsigntemplateformfield_dependencyrequirement_local_nonprim = field_e_ezsigntemplateformfield_dependencyrequirement_parseFromJSON(e_ezsigntemplateformfield_dependencyrequirement); //custom
    }

    // ezsigntemplateformfield_response_compound->a_obj_ezsigntemplateelementdependency
    cJSON *a_obj_ezsigntemplateelementdependency = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfield_response_compoundJSON, "a_objEzsigntemplateelementdependency");
    if (a_obj_ezsigntemplateelementdependency) { 
    cJSON *a_obj_ezsigntemplateelementdependency_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateelementdependency)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateelementdependencyList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateelementdependency_local_nonprimitive,a_obj_ezsigntemplateelementdependency )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateelementdependency_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateelementdependency_response_compound_t *a_obj_ezsigntemplateelementdependencyItem = ezsigntemplateelementdependency_response_compound_parseFromJSON(a_obj_ezsigntemplateelementdependency_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateelementdependencyList, a_obj_ezsigntemplateelementdependencyItem);
    }
    }


    ezsigntemplateformfield_response_compound_local_var = ezsigntemplateformfield_response_compound_create (
        pki_ezsigntemplateformfield_id->valuedouble,
        i_ezsigntemplatedocumentpage_pagenumber->valuedouble,
        strdup(s_ezsigntemplateformfield_label->valuestring),
        s_ezsigntemplateformfield_value && !cJSON_IsNull(s_ezsigntemplateformfield_value) ? strdup(s_ezsigntemplateformfield_value->valuestring) : NULL,
        i_ezsigntemplateformfield_x->valuedouble,
        i_ezsigntemplateformfield_y->valuedouble,
        i_ezsigntemplateformfield_width->valuedouble,
        i_ezsigntemplateformfield_height->valuedouble,
        b_ezsigntemplateformfield_autocomplete ? b_ezsigntemplateformfield_autocomplete->valueint : 0,
        b_ezsigntemplateformfield_selected ? b_ezsigntemplateformfield_selected->valueint : 0,
        e_ezsigntemplateformfield_dependencyrequirement ? e_ezsigntemplateformfield_dependencyrequirement_local_nonprim : NULL,
        a_obj_ezsigntemplateelementdependency ? a_obj_ezsigntemplateelementdependencyList : NULL
        );

    return ezsigntemplateformfield_response_compound_local_var;
end:
    if (e_ezsigntemplateformfield_dependencyrequirement_local_nonprim) {
        field_e_ezsigntemplateformfield_dependencyrequirement_free(e_ezsigntemplateformfield_dependencyrequirement_local_nonprim);
        e_ezsigntemplateformfield_dependencyrequirement_local_nonprim = NULL;
    }
    if (a_obj_ezsigntemplateelementdependencyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateelementdependencyList) {
            ezsigntemplateelementdependency_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateelementdependencyList);
        a_obj_ezsigntemplateelementdependencyList = NULL;
    }
    return NULL;

}
