#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_response_compound_all_of.h"



ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of_create(
    list_t *a_obj_ezsignformfield
    ) {
    ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of_local_var = malloc(sizeof(ezsignformfieldgroup_response_compound_all_of_t));
    if (!ezsignformfieldgroup_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_response_compound_all_of_local_var->a_obj_ezsignformfield = a_obj_ezsignformfield;

    return ezsignformfieldgroup_response_compound_all_of_local_var;
}


void ezsignformfieldgroup_response_compound_all_of_free(ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of) {
    if(NULL == ezsignformfieldgroup_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield) {
        list_ForEach(listEntry, ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield) {
            ezsignformfield_response_free(listEntry->data);
        }
        list_free(ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield);
        ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield = NULL;
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

ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of_parseFromJSON(cJSON *ezsignformfieldgroup_response_compound_all_ofJSON){

    ezsignformfieldgroup_response_compound_all_of_t *ezsignformfieldgroup_response_compound_all_of_local_var = NULL;

    // ezsignformfieldgroup_response_compound_all_of->a_obj_ezsignformfield
    cJSON *a_obj_ezsignformfield = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_response_compound_all_ofJSON, "a_objEzsignformfield");
    if (!a_obj_ezsignformfield) {
        goto end;
    }

    list_t *a_obj_ezsignformfieldList;
    
    cJSON *a_obj_ezsignformfield_local_nonprimitive;
    if(!cJSON_IsArray(a_obj_ezsignformfield)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldList = list_create();

    cJSON_ArrayForEach(a_obj_ezsignformfield_local_nonprimitive,a_obj_ezsignformfield )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfield_local_nonprimitive)){
            goto end;
        }
        ezsignformfield_response_t *a_obj_ezsignformfieldItem = ezsignformfield_response_parseFromJSON(a_obj_ezsignformfield_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldList, a_obj_ezsignformfieldItem);
    }


    ezsignformfieldgroup_response_compound_all_of_local_var = ezsignformfieldgroup_response_compound_all_of_create (
        a_obj_ezsignformfieldList
        );

    return ezsignformfieldgroup_response_compound_all_of_local_var;
end:
    return NULL;

}
