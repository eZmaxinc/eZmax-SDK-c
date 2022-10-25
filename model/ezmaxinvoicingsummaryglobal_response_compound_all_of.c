#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxinvoicingsummaryglobal_response_compound_all_of.h"



ezmaxinvoicingsummaryglobal_response_compound_all_of_t *ezmaxinvoicingsummaryglobal_response_compound_all_of_create(
    list_t *a_obj_ezmaxinvoicingcommission
    ) {
    ezmaxinvoicingsummaryglobal_response_compound_all_of_t *ezmaxinvoicingsummaryglobal_response_compound_all_of_local_var = malloc(sizeof(ezmaxinvoicingsummaryglobal_response_compound_all_of_t));
    if (!ezmaxinvoicingsummaryglobal_response_compound_all_of_local_var) {
        return NULL;
    }
    ezmaxinvoicingsummaryglobal_response_compound_all_of_local_var->a_obj_ezmaxinvoicingcommission = a_obj_ezmaxinvoicingcommission;

    return ezmaxinvoicingsummaryglobal_response_compound_all_of_local_var;
}


void ezmaxinvoicingsummaryglobal_response_compound_all_of_free(ezmaxinvoicingsummaryglobal_response_compound_all_of_t *ezmaxinvoicingsummaryglobal_response_compound_all_of) {
    if(NULL == ezmaxinvoicingsummaryglobal_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxinvoicingsummaryglobal_response_compound_all_of->a_obj_ezmaxinvoicingcommission) {
        list_ForEach(listEntry, ezmaxinvoicingsummaryglobal_response_compound_all_of->a_obj_ezmaxinvoicingcommission) {
            ezmaxinvoicingcommission_response_compound_free(listEntry->data);
        }
        list_freeList(ezmaxinvoicingsummaryglobal_response_compound_all_of->a_obj_ezmaxinvoicingcommission);
        ezmaxinvoicingsummaryglobal_response_compound_all_of->a_obj_ezmaxinvoicingcommission = NULL;
    }
    free(ezmaxinvoicingsummaryglobal_response_compound_all_of);
}

cJSON *ezmaxinvoicingsummaryglobal_response_compound_all_of_convertToJSON(ezmaxinvoicingsummaryglobal_response_compound_all_of_t *ezmaxinvoicingsummaryglobal_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxinvoicingsummaryglobal_response_compound_all_of->a_obj_ezmaxinvoicingcommission
    if(ezmaxinvoicingsummaryglobal_response_compound_all_of->a_obj_ezmaxinvoicingcommission) {
    cJSON *a_obj_ezmaxinvoicingcommission = cJSON_AddArrayToObject(item, "a_objEzmaxinvoicingcommission");
    if(a_obj_ezmaxinvoicingcommission == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezmaxinvoicingcommissionListEntry;
    if (ezmaxinvoicingsummaryglobal_response_compound_all_of->a_obj_ezmaxinvoicingcommission) {
    list_ForEach(a_obj_ezmaxinvoicingcommissionListEntry, ezmaxinvoicingsummaryglobal_response_compound_all_of->a_obj_ezmaxinvoicingcommission) {
    cJSON *itemLocal = ezmaxinvoicingcommission_response_compound_convertToJSON(a_obj_ezmaxinvoicingcommissionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezmaxinvoicingcommission, itemLocal);
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

ezmaxinvoicingsummaryglobal_response_compound_all_of_t *ezmaxinvoicingsummaryglobal_response_compound_all_of_parseFromJSON(cJSON *ezmaxinvoicingsummaryglobal_response_compound_all_ofJSON){

    ezmaxinvoicingsummaryglobal_response_compound_all_of_t *ezmaxinvoicingsummaryglobal_response_compound_all_of_local_var = NULL;

    // define the local list for ezmaxinvoicingsummaryglobal_response_compound_all_of->a_obj_ezmaxinvoicingcommission
    list_t *a_obj_ezmaxinvoicingcommissionList = NULL;

    // ezmaxinvoicingsummaryglobal_response_compound_all_of->a_obj_ezmaxinvoicingcommission
    cJSON *a_obj_ezmaxinvoicingcommission = cJSON_GetObjectItemCaseSensitive(ezmaxinvoicingsummaryglobal_response_compound_all_ofJSON, "a_objEzmaxinvoicingcommission");
    if (a_obj_ezmaxinvoicingcommission) { 
    cJSON *a_obj_ezmaxinvoicingcommission_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezmaxinvoicingcommission)){
        goto end; //nonprimitive container
    }

    a_obj_ezmaxinvoicingcommissionList = list_createList();

    cJSON_ArrayForEach(a_obj_ezmaxinvoicingcommission_local_nonprimitive,a_obj_ezmaxinvoicingcommission )
    {
        if(!cJSON_IsObject(a_obj_ezmaxinvoicingcommission_local_nonprimitive)){
            goto end;
        }
        ezmaxinvoicingcommission_response_compound_t *a_obj_ezmaxinvoicingcommissionItem = ezmaxinvoicingcommission_response_compound_parseFromJSON(a_obj_ezmaxinvoicingcommission_local_nonprimitive);

        list_addElement(a_obj_ezmaxinvoicingcommissionList, a_obj_ezmaxinvoicingcommissionItem);
    }
    }


    ezmaxinvoicingsummaryglobal_response_compound_all_of_local_var = ezmaxinvoicingsummaryglobal_response_compound_all_of_create (
        a_obj_ezmaxinvoicingcommission ? a_obj_ezmaxinvoicingcommissionList : NULL
        );

    return ezmaxinvoicingsummaryglobal_response_compound_all_of_local_var;
end:
    if (a_obj_ezmaxinvoicingcommissionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezmaxinvoicingcommissionList) {
            ezmaxinvoicingcommission_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezmaxinvoicingcommissionList);
        a_obj_ezmaxinvoicingcommissionList = NULL;
    }
    return NULL;

}
