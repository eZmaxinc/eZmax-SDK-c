#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_response_compound_all_of.h"



ezsignbulksend_response_compound_all_of_t *ezsignbulksend_response_compound_all_of_create(
    list_t *a_obj_ezsignbulksenddocumentmapping,
    list_t *a_obj_ezsignbulksendsignermapping
    ) {
    ezsignbulksend_response_compound_all_of_t *ezsignbulksend_response_compound_all_of_local_var = malloc(sizeof(ezsignbulksend_response_compound_all_of_t));
    if (!ezsignbulksend_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsignbulksend_response_compound_all_of_local_var->a_obj_ezsignbulksenddocumentmapping = a_obj_ezsignbulksenddocumentmapping;
    ezsignbulksend_response_compound_all_of_local_var->a_obj_ezsignbulksendsignermapping = a_obj_ezsignbulksendsignermapping;

    return ezsignbulksend_response_compound_all_of_local_var;
}


void ezsignbulksend_response_compound_all_of_free(ezsignbulksend_response_compound_all_of_t *ezsignbulksend_response_compound_all_of) {
    if(NULL == ezsignbulksend_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksenddocumentmapping) {
        list_ForEach(listEntry, ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksenddocumentmapping) {
            ezsignbulksenddocumentmapping_response_compound_free(listEntry->data);
        }
        list_freeList(ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksenddocumentmapping);
        ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksenddocumentmapping = NULL;
    }
    if (ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksendsignermapping) {
        list_ForEach(listEntry, ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksendsignermapping) {
            ezsignbulksendsignermapping_response_free(listEntry->data);
        }
        list_freeList(ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksendsignermapping);
        ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksendsignermapping = NULL;
    }
    free(ezsignbulksend_response_compound_all_of);
}

cJSON *ezsignbulksend_response_compound_all_of_convertToJSON(ezsignbulksend_response_compound_all_of_t *ezsignbulksend_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksenddocumentmapping
    if (!ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksenddocumentmapping) {
        goto fail;
    }
    cJSON *a_obj_ezsignbulksenddocumentmapping = cJSON_AddArrayToObject(item, "a_objEzsignbulksenddocumentmapping");
    if(a_obj_ezsignbulksenddocumentmapping == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignbulksenddocumentmappingListEntry;
    if (ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksenddocumentmapping) {
    list_ForEach(a_obj_ezsignbulksenddocumentmappingListEntry, ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksenddocumentmapping) {
    cJSON *itemLocal = ezsignbulksenddocumentmapping_response_compound_convertToJSON(a_obj_ezsignbulksenddocumentmappingListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignbulksenddocumentmapping, itemLocal);
    }
    }


    // ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksendsignermapping
    if (!ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksendsignermapping) {
        goto fail;
    }
    cJSON *a_obj_ezsignbulksendsignermapping = cJSON_AddArrayToObject(item, "a_objEzsignbulksendsignermapping");
    if(a_obj_ezsignbulksendsignermapping == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignbulksendsignermappingListEntry;
    if (ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksendsignermapping) {
    list_ForEach(a_obj_ezsignbulksendsignermappingListEntry, ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksendsignermapping) {
    cJSON *itemLocal = ezsignbulksendsignermapping_response_convertToJSON(a_obj_ezsignbulksendsignermappingListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignbulksendsignermapping, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksend_response_compound_all_of_t *ezsignbulksend_response_compound_all_of_parseFromJSON(cJSON *ezsignbulksend_response_compound_all_ofJSON){

    ezsignbulksend_response_compound_all_of_t *ezsignbulksend_response_compound_all_of_local_var = NULL;

    // define the local list for ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksenddocumentmapping
    list_t *a_obj_ezsignbulksenddocumentmappingList = NULL;

    // define the local list for ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksendsignermapping
    list_t *a_obj_ezsignbulksendsignermappingList = NULL;

    // ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksenddocumentmapping
    cJSON *a_obj_ezsignbulksenddocumentmapping = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compound_all_ofJSON, "a_objEzsignbulksenddocumentmapping");
    if (!a_obj_ezsignbulksenddocumentmapping) {
        goto end;
    }

    
    cJSON *a_obj_ezsignbulksenddocumentmapping_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignbulksenddocumentmapping)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignbulksenddocumentmappingList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignbulksenddocumentmapping_local_nonprimitive,a_obj_ezsignbulksenddocumentmapping )
    {
        if(!cJSON_IsObject(a_obj_ezsignbulksenddocumentmapping_local_nonprimitive)){
            goto end;
        }
        ezsignbulksenddocumentmapping_response_compound_t *a_obj_ezsignbulksenddocumentmappingItem = ezsignbulksenddocumentmapping_response_compound_parseFromJSON(a_obj_ezsignbulksenddocumentmapping_local_nonprimitive);

        list_addElement(a_obj_ezsignbulksenddocumentmappingList, a_obj_ezsignbulksenddocumentmappingItem);
    }

    // ezsignbulksend_response_compound_all_of->a_obj_ezsignbulksendsignermapping
    cJSON *a_obj_ezsignbulksendsignermapping = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_response_compound_all_ofJSON, "a_objEzsignbulksendsignermapping");
    if (!a_obj_ezsignbulksendsignermapping) {
        goto end;
    }

    
    cJSON *a_obj_ezsignbulksendsignermapping_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignbulksendsignermapping)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignbulksendsignermappingList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignbulksendsignermapping_local_nonprimitive,a_obj_ezsignbulksendsignermapping )
    {
        if(!cJSON_IsObject(a_obj_ezsignbulksendsignermapping_local_nonprimitive)){
            goto end;
        }
        ezsignbulksendsignermapping_response_t *a_obj_ezsignbulksendsignermappingItem = ezsignbulksendsignermapping_response_parseFromJSON(a_obj_ezsignbulksendsignermapping_local_nonprimitive);

        list_addElement(a_obj_ezsignbulksendsignermappingList, a_obj_ezsignbulksendsignermappingItem);
    }


    ezsignbulksend_response_compound_all_of_local_var = ezsignbulksend_response_compound_all_of_create (
        a_obj_ezsignbulksenddocumentmappingList,
        a_obj_ezsignbulksendsignermappingList
        );

    return ezsignbulksend_response_compound_all_of_local_var;
end:
    if (a_obj_ezsignbulksenddocumentmappingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignbulksenddocumentmappingList) {
            ezsignbulksenddocumentmapping_response_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignbulksenddocumentmappingList);
        a_obj_ezsignbulksenddocumentmappingList = NULL;
    }
    if (a_obj_ezsignbulksendsignermappingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignbulksendsignermappingList) {
            ezsignbulksendsignermapping_response_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignbulksendsignermappingList);
        a_obj_ezsignbulksendsignermappingList = NULL;
    }
    return NULL;

}
