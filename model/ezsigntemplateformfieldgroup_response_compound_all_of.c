#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroup_response_compound_all_of.h"



ezsigntemplateformfieldgroup_response_compound_all_of_t *ezsigntemplateformfieldgroup_response_compound_all_of_create(
    list_t *a_obj_ezsigntemplateformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsigntemplateformfield
    ) {
    ezsigntemplateformfieldgroup_response_compound_all_of_t *ezsigntemplateformfieldgroup_response_compound_all_of_local_var = malloc(sizeof(ezsigntemplateformfieldgroup_response_compound_all_of_t));
    if (!ezsigntemplateformfieldgroup_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroup_response_compound_all_of_local_var->a_obj_ezsigntemplateformfieldgroupsigner = a_obj_ezsigntemplateformfieldgroupsigner;
    ezsigntemplateformfieldgroup_response_compound_all_of_local_var->a_obj_dropdown_element = a_obj_dropdown_element;
    ezsigntemplateformfieldgroup_response_compound_all_of_local_var->a_obj_ezsigntemplateformfield = a_obj_ezsigntemplateformfield;

    return ezsigntemplateformfieldgroup_response_compound_all_of_local_var;
}


void ezsigntemplateformfieldgroup_response_compound_all_of_free(ezsigntemplateformfieldgroup_response_compound_all_of_t *ezsigntemplateformfieldgroup_response_compound_all_of) {
    if(NULL == ezsigntemplateformfieldgroup_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfieldgroupsigner) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfieldgroupsigner) {
            ezsigntemplateformfieldgroupsigner_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfieldgroupsigner);
        ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfieldgroupsigner = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_dropdown_element) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_dropdown_element) {
            custom_dropdown_element_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_dropdown_element);
        ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_dropdown_element = NULL;
    }
    if (ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfield) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfield) {
            ezsigntemplateformfield_response_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfield);
        ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfield = NULL;
    }
    free(ezsigntemplateformfieldgroup_response_compound_all_of);
}

cJSON *ezsigntemplateformfieldgroup_response_compound_all_of_convertToJSON(ezsigntemplateformfieldgroup_response_compound_all_of_t *ezsigntemplateformfieldgroup_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfieldgroupsigner
    if (!ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfieldgroupsigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateformfieldgroupsigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplateformfieldgroupsigner");
    if(a_obj_ezsigntemplateformfieldgroupsigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateformfieldgroupsignerListEntry;
    if (ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfieldgroupsigner) {
    list_ForEach(a_obj_ezsigntemplateformfieldgroupsignerListEntry, ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfieldgroupsigner) {
    cJSON *itemLocal = ezsigntemplateformfieldgroupsigner_response_compound_convertToJSON(a_obj_ezsigntemplateformfieldgroupsignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateformfieldgroupsigner, itemLocal);
    }
    }


    // ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_dropdown_element
    if(ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_dropdown_element) {
    cJSON *a_obj_dropdown_element = cJSON_AddArrayToObject(item, "a_objDropdownElement");
    if(a_obj_dropdown_element == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_dropdown_elementListEntry;
    if (ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_dropdown_element) {
    list_ForEach(a_obj_dropdown_elementListEntry, ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_dropdown_element) {
    cJSON *itemLocal = custom_dropdown_element_response_compound_convertToJSON(a_obj_dropdown_elementListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_dropdown_element, itemLocal);
    }
    }
    }


    // ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfield
    if (!ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfield) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateformfield = cJSON_AddArrayToObject(item, "a_objEzsigntemplateformfield");
    if(a_obj_ezsigntemplateformfield == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateformfieldListEntry;
    if (ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfield) {
    list_ForEach(a_obj_ezsigntemplateformfieldListEntry, ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfield) {
    cJSON *itemLocal = ezsigntemplateformfield_response_compound_convertToJSON(a_obj_ezsigntemplateformfieldListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateformfield, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateformfieldgroup_response_compound_all_of_t *ezsigntemplateformfieldgroup_response_compound_all_of_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_response_compound_all_ofJSON){

    ezsigntemplateformfieldgroup_response_compound_all_of_t *ezsigntemplateformfieldgroup_response_compound_all_of_local_var = NULL;

    // define the local list for ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfieldgroupsigner
    list_t *a_obj_ezsigntemplateformfieldgroupsignerList = NULL;

    // define the local list for ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_dropdown_element
    list_t *a_obj_dropdown_elementList = NULL;

    // define the local list for ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfield
    list_t *a_obj_ezsigntemplateformfieldList = NULL;

    // ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfieldgroupsigner
    cJSON *a_obj_ezsigntemplateformfieldgroupsigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compound_all_ofJSON, "a_objEzsigntemplateformfieldgroupsigner");
    if (!a_obj_ezsigntemplateformfieldgroupsigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateformfieldgroupsigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateformfieldgroupsignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive,a_obj_ezsigntemplateformfieldgroupsigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateformfieldgroupsigner_response_compound_t *a_obj_ezsigntemplateformfieldgroupsignerItem = ezsigntemplateformfieldgroupsigner_response_compound_parseFromJSON(a_obj_ezsigntemplateformfieldgroupsigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateformfieldgroupsignerList, a_obj_ezsigntemplateformfieldgroupsignerItem);
    }

    // ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_dropdown_element
    cJSON *a_obj_dropdown_element = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compound_all_ofJSON, "a_objDropdownElement");
    if (a_obj_dropdown_element) { 
    cJSON *a_obj_dropdown_element_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_dropdown_element)){
        goto end; //nonprimitive container
    }

    a_obj_dropdown_elementList = list_createList();

    cJSON_ArrayForEach(a_obj_dropdown_element_local_nonprimitive,a_obj_dropdown_element )
    {
        if(!cJSON_IsObject(a_obj_dropdown_element_local_nonprimitive)){
            goto end;
        }
        custom_dropdown_element_response_compound_t *a_obj_dropdown_elementItem = custom_dropdown_element_response_compound_parseFromJSON(a_obj_dropdown_element_local_nonprimitive);

        list_addElement(a_obj_dropdown_elementList, a_obj_dropdown_elementItem);
    }
    }

    // ezsigntemplateformfieldgroup_response_compound_all_of->a_obj_ezsigntemplateformfield
    cJSON *a_obj_ezsigntemplateformfield = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_response_compound_all_ofJSON, "a_objEzsigntemplateformfield");
    if (!a_obj_ezsigntemplateformfield) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateformfield_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateformfield)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateformfieldList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateformfield_local_nonprimitive,a_obj_ezsigntemplateformfield )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateformfield_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateformfield_response_compound_t *a_obj_ezsigntemplateformfieldItem = ezsigntemplateformfield_response_compound_parseFromJSON(a_obj_ezsigntemplateformfield_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateformfieldList, a_obj_ezsigntemplateformfieldItem);
    }


    ezsigntemplateformfieldgroup_response_compound_all_of_local_var = ezsigntemplateformfieldgroup_response_compound_all_of_create (
        a_obj_ezsigntemplateformfieldgroupsignerList,
        a_obj_dropdown_element ? a_obj_dropdown_elementList : NULL,
        a_obj_ezsigntemplateformfieldList
        );

    return ezsigntemplateformfieldgroup_response_compound_all_of_local_var;
end:
    if (a_obj_ezsigntemplateformfieldgroupsignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateformfieldgroupsignerList) {
            ezsigntemplateformfieldgroupsigner_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateformfieldgroupsignerList);
        a_obj_ezsigntemplateformfieldgroupsignerList = NULL;
    }
    if (a_obj_dropdown_elementList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_dropdown_elementList) {
            custom_dropdown_element_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_dropdown_elementList);
        a_obj_dropdown_elementList = NULL;
    }
    if (a_obj_ezsigntemplateformfieldList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateformfieldList) {
            ezsigntemplateformfield_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateformfieldList);
        a_obj_ezsigntemplateformfieldList = NULL;
    }
    return NULL;

}
