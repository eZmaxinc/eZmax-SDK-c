#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_response_compound_all_of.h"



ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of_create(
    list_t *a_obj_ezsignformfield,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsignformfieldgroupsigner
    ) {
    ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of_local_var = malloc(sizeof(ezsignformfieldgroup_response_compound_all_of_t));
    if (!ezsignformfieldgroup_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_response_compound_all_of_local_var->a_obj_ezsignformfield = a_obj_ezsignformfield;
    ezsignformfieldgroup_response_compound_all_of_local_var->a_obj_dropdown_element = a_obj_dropdown_element;
    ezsignformfieldgroup_response_compound_all_of_local_var->a_obj_ezsignformfieldgroupsigner = a_obj_ezsignformfieldgroupsigner;

    return ezsignformfieldgroup_response_compound_all_of_local_var;
}


void ezsignformfieldgroup_response_compound_all_of_free(ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of) {
    if(NULL == ezsignformfieldgroup_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield) {
        list_ForEach(listEntry, ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield) {
            ezsignformfield_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield);
        ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield = NULL;
    }
    if (ezsignformfieldgroup_response_compound_all_of->a_obj_dropdown_element) {
        list_ForEach(listEntry, ezsignformfieldgroup_response_compound_all_of->a_obj_dropdown_element) {
            custom_dropdown_element_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_response_compound_all_of->a_obj_dropdown_element);
        ezsignformfieldgroup_response_compound_all_of->a_obj_dropdown_element = NULL;
    }
    if (ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfieldgroupsigner) {
        list_ForEach(listEntry, ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfieldgroupsigner) {
            ezsignformfieldgroupsigner_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfieldgroupsigner);
        ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfieldgroupsigner = NULL;
    }
    free(ezsignformfieldgroup_response_compound_all_of);
}

cJSON *ezsignformfieldgroup_response_compound_all_of_convertToJSON(ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield
    if (!ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfield = cJSON_AddArrayToObject(item, "a_objEzsignformfield");
    if(a_obj_ezsignformfield == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldListEntry;
    if (ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield) {
    list_ForEach(a_obj_ezsignformfieldListEntry, ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield) {
    cJSON *itemLocal = ezsignformfield_response_compound_convertToJSON(a_obj_ezsignformfieldListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfield, itemLocal);
    }
    }


    // ezsignformfieldgroup_response_compound_all_of->a_obj_dropdown_element
    if(ezsignformfieldgroup_response_compound_all_of->a_obj_dropdown_element) {
    cJSON *a_obj_dropdown_element = cJSON_AddArrayToObject(item, "a_objDropdownElement");
    if(a_obj_dropdown_element == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_dropdown_elementListEntry;
    if (ezsignformfieldgroup_response_compound_all_of->a_obj_dropdown_element) {
    list_ForEach(a_obj_dropdown_elementListEntry, ezsignformfieldgroup_response_compound_all_of->a_obj_dropdown_element) {
    cJSON *itemLocal = custom_dropdown_element_response_compound_convertToJSON(a_obj_dropdown_elementListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_dropdown_element, itemLocal);
    }
    }
    }


    // ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfieldgroupsigner
    if (!ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfieldgroupsigner) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfieldgroupsigner = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroupsigner");
    if(a_obj_ezsignformfieldgroupsigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroupsignerListEntry;
    if (ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfieldgroupsigner) {
    list_ForEach(a_obj_ezsignformfieldgroupsignerListEntry, ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfieldgroupsigner) {
    cJSON *itemLocal = ezsignformfieldgroupsigner_response_compound_convertToJSON(a_obj_ezsignformfieldgroupsignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfieldgroupsigner, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of_parseFromJSON(cJSON *ezsignformfieldgroup_response_compound_all_ofJSON){

    ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of_local_var = NULL;

    // define the local list for ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield
    list_t *a_obj_ezsignformfieldList = NULL;

    // define the local list for ezsignformfieldgroup_response_compound_all_of->a_obj_dropdown_element
    list_t *a_obj_dropdown_elementList = NULL;

    // define the local list for ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfieldgroupsigner
    list_t *a_obj_ezsignformfieldgroupsignerList = NULL;

    // ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield
    cJSON *a_obj_ezsignformfield = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compound_all_ofJSON, "a_objEzsignformfield");
    if (!a_obj_ezsignformfield) {
        goto end;
    }

    
    cJSON *a_obj_ezsignformfield_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignformfield)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfield_local_nonprimitive,a_obj_ezsignformfield )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfield_local_nonprimitive)){
            goto end;
        }
        ezsignformfield_response_compound_t *a_obj_ezsignformfieldItem = ezsignformfield_response_compound_parseFromJSON(a_obj_ezsignformfield_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldList, a_obj_ezsignformfieldItem);
    }

    // ezsignformfieldgroup_response_compound_all_of->a_obj_dropdown_element
    cJSON *a_obj_dropdown_element = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compound_all_ofJSON, "a_objDropdownElement");
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

    // ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfieldgroupsigner
    cJSON *a_obj_ezsignformfieldgroupsigner = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compound_all_ofJSON, "a_objEzsignformfieldgroupsigner");
    if (!a_obj_ezsignformfieldgroupsigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsignformfieldgroupsigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignformfieldgroupsigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldgroupsignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfieldgroupsigner_local_nonprimitive,a_obj_ezsignformfieldgroupsigner )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfieldgroupsigner_local_nonprimitive)){
            goto end;
        }
        ezsignformfieldgroupsigner_response_compound_t *a_obj_ezsignformfieldgroupsignerItem = ezsignformfieldgroupsigner_response_compound_parseFromJSON(a_obj_ezsignformfieldgroupsigner_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroupsignerList, a_obj_ezsignformfieldgroupsignerItem);
    }


    ezsignformfieldgroup_response_compound_all_of_local_var = ezsignformfieldgroup_response_compound_all_of_create (
        a_obj_ezsignformfieldList,
        a_obj_dropdown_element ? a_obj_dropdown_elementList : NULL,
        a_obj_ezsignformfieldgroupsignerList
        );

    return ezsignformfieldgroup_response_compound_all_of_local_var;
end:
    if (a_obj_ezsignformfieldList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldList) {
            ezsignformfield_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldList);
        a_obj_ezsignformfieldList = NULL;
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
    if (a_obj_ezsignformfieldgroupsignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldgroupsignerList) {
            ezsignformfieldgroupsigner_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldgroupsignerList);
        a_obj_ezsignformfieldgroupsignerList = NULL;
    }
    return NULL;

}
