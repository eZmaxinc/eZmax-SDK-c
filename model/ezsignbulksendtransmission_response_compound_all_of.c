#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendtransmission_response_compound_all_of.h"



ezsignbulksendtransmission_response_compound_all_of_t *ezsignbulksendtransmission_response_compound_all_of_create(
    list_t *a_obj_ezsignfoldertransmission
    ) {
    ezsignbulksendtransmission_response_compound_all_of_t *ezsignbulksendtransmission_response_compound_all_of_local_var = malloc(sizeof(ezsignbulksendtransmission_response_compound_all_of_t));
    if (!ezsignbulksendtransmission_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsignbulksendtransmission_response_compound_all_of_local_var->a_obj_ezsignfoldertransmission = a_obj_ezsignfoldertransmission;

    return ezsignbulksendtransmission_response_compound_all_of_local_var;
}


void ezsignbulksendtransmission_response_compound_all_of_free(ezsignbulksendtransmission_response_compound_all_of_t *ezsignbulksendtransmission_response_compound_all_of) {
    if(NULL == ezsignbulksendtransmission_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendtransmission_response_compound_all_of->a_obj_ezsignfoldertransmission) {
        list_ForEach(listEntry, ezsignbulksendtransmission_response_compound_all_of->a_obj_ezsignfoldertransmission) {
            custom_ezsignfoldertransmission_response_free(listEntry->data);
        }
        list_freeList(ezsignbulksendtransmission_response_compound_all_of->a_obj_ezsignfoldertransmission);
        ezsignbulksendtransmission_response_compound_all_of->a_obj_ezsignfoldertransmission = NULL;
    }
    free(ezsignbulksendtransmission_response_compound_all_of);
}

cJSON *ezsignbulksendtransmission_response_compound_all_of_convertToJSON(ezsignbulksendtransmission_response_compound_all_of_t *ezsignbulksendtransmission_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendtransmission_response_compound_all_of->a_obj_ezsignfoldertransmission
    if (!ezsignbulksendtransmission_response_compound_all_of->a_obj_ezsignfoldertransmission) {
        goto fail;
    }
    cJSON *a_obj_ezsignfoldertransmission = cJSON_AddArrayToObject(item, "a_objEzsignfoldertransmission");
    if(a_obj_ezsignfoldertransmission == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldertransmissionListEntry;
    if (ezsignbulksendtransmission_response_compound_all_of->a_obj_ezsignfoldertransmission) {
    list_ForEach(a_obj_ezsignfoldertransmissionListEntry, ezsignbulksendtransmission_response_compound_all_of->a_obj_ezsignfoldertransmission) {
    cJSON *itemLocal = custom_ezsignfoldertransmission_response_convertToJSON(a_obj_ezsignfoldertransmissionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfoldertransmission, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksendtransmission_response_compound_all_of_t *ezsignbulksendtransmission_response_compound_all_of_parseFromJSON(cJSON *ezsignbulksendtransmission_response_compound_all_ofJSON){

    ezsignbulksendtransmission_response_compound_all_of_t *ezsignbulksendtransmission_response_compound_all_of_local_var = NULL;

    // define the local list for ezsignbulksendtransmission_response_compound_all_of->a_obj_ezsignfoldertransmission
    list_t *a_obj_ezsignfoldertransmissionList = NULL;

    // ezsignbulksendtransmission_response_compound_all_of->a_obj_ezsignfoldertransmission
    cJSON *a_obj_ezsignfoldertransmission = cJSON_GetObjectItemCaseSensitive(ezsignbulksendtransmission_response_compound_all_ofJSON, "a_objEzsignfoldertransmission");
    if (!a_obj_ezsignfoldertransmission) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfoldertransmission_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfoldertransmission)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfoldertransmissionList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfoldertransmission_local_nonprimitive,a_obj_ezsignfoldertransmission )
    {
        if(!cJSON_IsObject(a_obj_ezsignfoldertransmission_local_nonprimitive)){
            goto end;
        }
        custom_ezsignfoldertransmission_response_t *a_obj_ezsignfoldertransmissionItem = custom_ezsignfoldertransmission_response_parseFromJSON(a_obj_ezsignfoldertransmission_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldertransmissionList, a_obj_ezsignfoldertransmissionItem);
    }


    ezsignbulksendtransmission_response_compound_all_of_local_var = ezsignbulksendtransmission_response_compound_all_of_create (
        a_obj_ezsignfoldertransmissionList
        );

    return ezsignbulksendtransmission_response_compound_all_of_local_var;
end:
    if (a_obj_ezsignfoldertransmissionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfoldertransmissionList) {
            custom_ezsignfoldertransmission_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfoldertransmissionList);
        a_obj_ezsignfoldertransmissionList = NULL;
    }
    return NULL;

}
