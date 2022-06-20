#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_edit_object_v1_response_all_of.h"



ezsigntemplatedocument_edit_object_v1_response_all_of_t *ezsigntemplatedocument_edit_object_v1_response_all_of_create(
    list_t *a_obj_warning
    ) {
    ezsigntemplatedocument_edit_object_v1_response_all_of_t *ezsigntemplatedocument_edit_object_v1_response_all_of_local_var = malloc(sizeof(ezsigntemplatedocument_edit_object_v1_response_all_of_t));
    if (!ezsigntemplatedocument_edit_object_v1_response_all_of_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_edit_object_v1_response_all_of_local_var->a_obj_warning = a_obj_warning;

    return ezsigntemplatedocument_edit_object_v1_response_all_of_local_var;
}


void ezsigntemplatedocument_edit_object_v1_response_all_of_free(ezsigntemplatedocument_edit_object_v1_response_all_of_t *ezsigntemplatedocument_edit_object_v1_response_all_of) {
    if(NULL == ezsigntemplatedocument_edit_object_v1_response_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_edit_object_v1_response_all_of->a_obj_warning) {
        list_ForEach(listEntry, ezsigntemplatedocument_edit_object_v1_response_all_of->a_obj_warning) {
            common_response_warning_free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_edit_object_v1_response_all_of->a_obj_warning);
        ezsigntemplatedocument_edit_object_v1_response_all_of->a_obj_warning = NULL;
    }
    free(ezsigntemplatedocument_edit_object_v1_response_all_of);
}

cJSON *ezsigntemplatedocument_edit_object_v1_response_all_of_convertToJSON(ezsigntemplatedocument_edit_object_v1_response_all_of_t *ezsigntemplatedocument_edit_object_v1_response_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_edit_object_v1_response_all_of->a_obj_warning
    if(ezsigntemplatedocument_edit_object_v1_response_all_of->a_obj_warning) {
    cJSON *a_obj_warning = cJSON_AddArrayToObject(item, "a_objWarning");
    if(a_obj_warning == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_warningListEntry;
    if (ezsigntemplatedocument_edit_object_v1_response_all_of->a_obj_warning) {
    list_ForEach(a_obj_warningListEntry, ezsigntemplatedocument_edit_object_v1_response_all_of->a_obj_warning) {
    cJSON *itemLocal = common_response_warning_convertToJSON(a_obj_warningListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_warning, itemLocal);
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

ezsigntemplatedocument_edit_object_v1_response_all_of_t *ezsigntemplatedocument_edit_object_v1_response_all_of_parseFromJSON(cJSON *ezsigntemplatedocument_edit_object_v1_response_all_ofJSON){

    ezsigntemplatedocument_edit_object_v1_response_all_of_t *ezsigntemplatedocument_edit_object_v1_response_all_of_local_var = NULL;

    // define the local list for ezsigntemplatedocument_edit_object_v1_response_all_of->a_obj_warning
    list_t *a_obj_warningList = NULL;

    // ezsigntemplatedocument_edit_object_v1_response_all_of->a_obj_warning
    cJSON *a_obj_warning = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_edit_object_v1_response_all_ofJSON, "a_objWarning");
    if (a_obj_warning) { 
    cJSON *a_obj_warning_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_warning)){
        goto end; //nonprimitive container
    }

    a_obj_warningList = list_createList();

    cJSON_ArrayForEach(a_obj_warning_local_nonprimitive,a_obj_warning )
    {
        if(!cJSON_IsObject(a_obj_warning_local_nonprimitive)){
            goto end;
        }
        common_response_warning_t *a_obj_warningItem = common_response_warning_parseFromJSON(a_obj_warning_local_nonprimitive);

        list_addElement(a_obj_warningList, a_obj_warningItem);
    }
    }


    ezsigntemplatedocument_edit_object_v1_response_all_of_local_var = ezsigntemplatedocument_edit_object_v1_response_all_of_create (
        a_obj_warning ? a_obj_warningList : NULL
        );

    return ezsigntemplatedocument_edit_object_v1_response_all_of_local_var;
end:
    if (a_obj_warningList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_warningList) {
            common_response_warning_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_warningList);
        a_obj_warningList = NULL;
    }
    return NULL;

}
