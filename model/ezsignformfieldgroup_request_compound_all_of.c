#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_request_compound_all_of.h"



ezsignformfieldgroup_request_compound_all_of_t *ezsignformfieldgroup_request_compound_all_of_create(
    list_t *a_obj_ezsignformfieldgroupsigner,
    list_t *a_obj_dropdown_element,
    list_t *a_obj_ezsignformfield
    ) {
    ezsignformfieldgroup_request_compound_all_of_t *ezsignformfieldgroup_request_compound_all_of_local_var = malloc(sizeof(ezsignformfieldgroup_request_compound_all_of_t));
    if (!ezsignformfieldgroup_request_compound_all_of_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_request_compound_all_of_local_var->a_obj_ezsignformfieldgroupsigner = a_obj_ezsignformfieldgroupsigner;
    ezsignformfieldgroup_request_compound_all_of_local_var->a_obj_dropdown_element = a_obj_dropdown_element;
    ezsignformfieldgroup_request_compound_all_of_local_var->a_obj_ezsignformfield = a_obj_ezsignformfield;

    return ezsignformfieldgroup_request_compound_all_of_local_var;
}


void ezsignformfieldgroup_request_compound_all_of_free(ezsignformfieldgroup_request_compound_all_of_t *ezsignformfieldgroup_request_compound_all_of) {
    if(NULL == ezsignformfieldgroup_request_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfieldgroupsigner) {
        list_ForEach(listEntry, ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfieldgroupsigner) {
            ezsignformfieldgroupsigner_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfieldgroupsigner);
        ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfieldgroupsigner = NULL;
    }
    if (ezsignformfieldgroup_request_compound_all_of->a_obj_dropdown_element) {
        list_ForEach(listEntry, ezsignformfieldgroup_request_compound_all_of->a_obj_dropdown_element) {
            custom_dropdown_element_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_request_compound_all_of->a_obj_dropdown_element);
        ezsignformfieldgroup_request_compound_all_of->a_obj_dropdown_element = NULL;
    }
    if (ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfield) {
        list_ForEach(listEntry, ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfield) {
            ezsignformfield_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfield);
        ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfield = NULL;
    }
    free(ezsignformfieldgroup_request_compound_all_of);
}

cJSON *ezsignformfieldgroup_request_compound_all_of_convertToJSON(ezsignformfieldgroup_request_compound_all_of_t *ezsignformfieldgroup_request_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfieldgroupsigner
    if (!ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfieldgroupsigner) {
        goto fail;
    }
    
    cJSON *a_obj_ezsignformfieldgroupsigner = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroupsigner");
    if(a_obj_ezsignformfieldgroupsigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroupsignerListEntry;
    if (ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfieldgroupsigner) {
    list_ForEach(a_obj_ezsignformfieldgroupsignerListEntry, ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfieldgroupsigner) {
    cJSON *itemLocal = ezsignformfieldgroupsigner_request_compound_convertToJSON(a_obj_ezsignformfieldgroupsignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfieldgroupsigner, itemLocal);
    }
    }


    // ezsignformfieldgroup_request_compound_all_of->a_obj_dropdown_element
    if(ezsignformfieldgroup_request_compound_all_of->a_obj_dropdown_element) { 
    cJSON *a_obj_dropdown_element = cJSON_AddArrayToObject(item, "a_objDropdownElement");
    if(a_obj_dropdown_element == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_dropdown_elementListEntry;
    if (ezsignformfieldgroup_request_compound_all_of->a_obj_dropdown_element) {
    list_ForEach(a_obj_dropdown_elementListEntry, ezsignformfieldgroup_request_compound_all_of->a_obj_dropdown_element) {
    cJSON *itemLocal = custom_dropdown_element_request_compound_convertToJSON(a_obj_dropdown_elementListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_dropdown_element, itemLocal);
    }
    }
     } 


    // ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfield
    if (!ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfield) {
        goto fail;
    }
    
    cJSON *a_obj_ezsignformfield = cJSON_AddArrayToObject(item, "a_objEzsignformfield");
    if(a_obj_ezsignformfield == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldListEntry;
    if (ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfield) {
    list_ForEach(a_obj_ezsignformfieldListEntry, ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfield) {
    cJSON *itemLocal = ezsignformfield_request_compound_convertToJSON(a_obj_ezsignformfieldListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfield, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignformfieldgroup_request_compound_all_of_t *ezsignformfieldgroup_request_compound_all_of_parseFromJSON(cJSON *ezsignformfieldgroup_request_compound_all_ofJSON){

    ezsignformfieldgroup_request_compound_all_of_t *ezsignformfieldgroup_request_compound_all_of_local_var = NULL;

    // ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfieldgroupsigner
    cJSON *a_obj_ezsignformfieldgroupsigner = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_request_compound_all_ofJSON, "a_objEzsignformfieldgroupsigner");
    if (!a_obj_ezsignformfieldgroupsigner) {
        goto end;
    }

    list_t *a_obj_ezsignformfieldgroupsignerList;
    
    cJSON *a_obj_ezsignformfieldgroupsigner_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignformfieldgroupsigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldgroupsignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfieldgroupsigner_local_nonprimitive,a_obj_ezsignformfieldgroupsigner )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfieldgroupsigner_local_nonprimitive)){
            goto end;
        }
        ezsignformfieldgroupsigner_request_compound_t *a_obj_ezsignformfieldgroupsignerItem = ezsignformfieldgroupsigner_request_compound_parseFromJSON(a_obj_ezsignformfieldgroupsigner_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroupsignerList, a_obj_ezsignformfieldgroupsignerItem);
    }

    // ezsignformfieldgroup_request_compound_all_of->a_obj_dropdown_element
    cJSON *a_obj_dropdown_element = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_request_compound_all_ofJSON, "a_objDropdownElement");
    list_t *a_obj_dropdown_elementList;
    if (a_obj_dropdown_element) { 
    cJSON *a_obj_dropdown_element_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_dropdown_element)){
        goto end; //nonprimitive container
    }

    a_obj_dropdown_elementList = list_createList();

    cJSON_ArrayForEach(a_obj_dropdown_element_local_nonprimitive,a_obj_dropdown_element )
    {
        if(!cJSON_IsObject(a_obj_dropdown_element_local_nonprimitive)){
            goto end;
        }
        custom_dropdown_element_request_compound_t *a_obj_dropdown_elementItem = custom_dropdown_element_request_compound_parseFromJSON(a_obj_dropdown_element_local_nonprimitive);

        list_addElement(a_obj_dropdown_elementList, a_obj_dropdown_elementItem);
    }
    }

    // ezsignformfieldgroup_request_compound_all_of->a_obj_ezsignformfield
    cJSON *a_obj_ezsignformfield = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_request_compound_all_ofJSON, "a_objEzsignformfield");
    if (!a_obj_ezsignformfield) {
        goto end;
    }

    list_t *a_obj_ezsignformfieldList;
    
    cJSON *a_obj_ezsignformfield_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignformfield)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfield_local_nonprimitive,a_obj_ezsignformfield )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfield_local_nonprimitive)){
            goto end;
        }
        ezsignformfield_request_compound_t *a_obj_ezsignformfieldItem = ezsignformfield_request_compound_parseFromJSON(a_obj_ezsignformfield_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldList, a_obj_ezsignformfieldItem);
    }


    ezsignformfieldgroup_request_compound_all_of_local_var = ezsignformfieldgroup_request_compound_all_of_create (
        a_obj_ezsignformfieldgroupsignerList,
        a_obj_dropdown_element ? a_obj_dropdown_elementList : NULL,
        a_obj_ezsignformfieldList
        );

    return ezsignformfieldgroup_request_compound_all_of_local_var;
end:
    return NULL;

}
