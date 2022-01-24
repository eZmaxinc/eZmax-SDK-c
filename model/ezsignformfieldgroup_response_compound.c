#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_response_compound.h"



ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound_create(
    char *s_ezsignformfieldgroup_label,
    list_t *a_obj_ezsignformfield
    ) {
    ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound_local_var = malloc(sizeof(ezsignformfieldgroup_response_compound_t));
    if (!ezsignformfieldgroup_response_compound_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_response_compound_local_var->s_ezsignformfieldgroup_label = s_ezsignformfieldgroup_label;
    ezsignformfieldgroup_response_compound_local_var->a_obj_ezsignformfield = a_obj_ezsignformfield;

    return ezsignformfieldgroup_response_compound_local_var;
}


void ezsignformfieldgroup_response_compound_free(ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound) {
    if(NULL == ezsignformfieldgroup_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label) {
        free(ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label);
        ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label = NULL;
    }
    if (ezsignformfieldgroup_response_compound->a_obj_ezsignformfield) {
        list_ForEach(listEntry, ezsignformfieldgroup_response_compound->a_obj_ezsignformfield) {
            ezsignformfield_response_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_response_compound->a_obj_ezsignformfield);
        ezsignformfieldgroup_response_compound->a_obj_ezsignformfield = NULL;
    }
    free(ezsignformfieldgroup_response_compound);
}

cJSON *ezsignformfieldgroup_response_compound_convertToJSON(ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label
    if (!ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label) {
        goto fail;
    }
    
    if(cJSON_AddStringToObject(item, "sEzsignformfieldgroupLabel", ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label) == NULL) {
    goto fail; //String
    }


    // ezsignformfieldgroup_response_compound->a_obj_ezsignformfield
    if (!ezsignformfieldgroup_response_compound->a_obj_ezsignformfield) {
        goto fail;
    }
    
    cJSON *a_obj_ezsignformfield = cJSON_AddArrayToObject(item, "a_objEzsignformfield");
    if(a_obj_ezsignformfield == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldListEntry;
    if (ezsignformfieldgroup_response_compound->a_obj_ezsignformfield) {
    list_ForEach(a_obj_ezsignformfieldListEntry, ezsignformfieldgroup_response_compound->a_obj_ezsignformfield) {
    cJSON *itemLocal = ezsignformfield_response_convertToJSON(a_obj_ezsignformfieldListEntry->data);
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

ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound_parseFromJSON(cJSON *ezsignformfieldgroup_response_compoundJSON){

    ezsignformfieldgroup_response_compound_t *ezsignformfieldgroup_response_compound_local_var = NULL;

    // ezsignformfieldgroup_response_compound->s_ezsignformfieldgroup_label
    cJSON *s_ezsignformfieldgroup_label = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "sEzsignformfieldgroupLabel");
    if (!s_ezsignformfieldgroup_label) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignformfieldgroup_label))
    {
    goto end; //String
    }

    // ezsignformfieldgroup_response_compound->a_obj_ezsignformfield
    cJSON *a_obj_ezsignformfield = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compoundJSON, "a_objEzsignformfield");
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
        ezsignformfield_response_t *a_obj_ezsignformfieldItem = ezsignformfield_response_parseFromJSON(a_obj_ezsignformfield_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldList, a_obj_ezsignformfieldItem);
    }


    ezsignformfieldgroup_response_compound_local_var = ezsignformfieldgroup_response_compound_create (
        strdup(s_ezsignformfieldgroup_label->valuestring),
        a_obj_ezsignformfieldList
        );

    return ezsignformfieldgroup_response_compound_local_var;
end:
    return NULL;

}
