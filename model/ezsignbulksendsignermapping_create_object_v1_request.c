#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksendsignermapping_create_object_v1_request.h"



ezsignbulksendsignermapping_create_object_v1_request_t *ezsignbulksendsignermapping_create_object_v1_request_create(
    list_t *a_obj_ezsignbulksendsignermapping
    ) {
    ezsignbulksendsignermapping_create_object_v1_request_t *ezsignbulksendsignermapping_create_object_v1_request_local_var = malloc(sizeof(ezsignbulksendsignermapping_create_object_v1_request_t));
    if (!ezsignbulksendsignermapping_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignbulksendsignermapping_create_object_v1_request_local_var->a_obj_ezsignbulksendsignermapping = a_obj_ezsignbulksendsignermapping;

    return ezsignbulksendsignermapping_create_object_v1_request_local_var;
}


void ezsignbulksendsignermapping_create_object_v1_request_free(ezsignbulksendsignermapping_create_object_v1_request_t *ezsignbulksendsignermapping_create_object_v1_request) {
    if(NULL == ezsignbulksendsignermapping_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksendsignermapping_create_object_v1_request->a_obj_ezsignbulksendsignermapping) {
        list_ForEach(listEntry, ezsignbulksendsignermapping_create_object_v1_request->a_obj_ezsignbulksendsignermapping) {
            ezsignbulksendsignermapping_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignbulksendsignermapping_create_object_v1_request->a_obj_ezsignbulksendsignermapping);
        ezsignbulksendsignermapping_create_object_v1_request->a_obj_ezsignbulksendsignermapping = NULL;
    }
    free(ezsignbulksendsignermapping_create_object_v1_request);
}

cJSON *ezsignbulksendsignermapping_create_object_v1_request_convertToJSON(ezsignbulksendsignermapping_create_object_v1_request_t *ezsignbulksendsignermapping_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksendsignermapping_create_object_v1_request->a_obj_ezsignbulksendsignermapping
    if (!ezsignbulksendsignermapping_create_object_v1_request->a_obj_ezsignbulksendsignermapping) {
        goto fail;
    }
    cJSON *a_obj_ezsignbulksendsignermapping = cJSON_AddArrayToObject(item, "a_objEzsignbulksendsignermapping");
    if(a_obj_ezsignbulksendsignermapping == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignbulksendsignermappingListEntry;
    if (ezsignbulksendsignermapping_create_object_v1_request->a_obj_ezsignbulksendsignermapping) {
    list_ForEach(a_obj_ezsignbulksendsignermappingListEntry, ezsignbulksendsignermapping_create_object_v1_request->a_obj_ezsignbulksendsignermapping) {
    cJSON *itemLocal = ezsignbulksendsignermapping_request_compound_convertToJSON(a_obj_ezsignbulksendsignermappingListEntry->data);
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

ezsignbulksendsignermapping_create_object_v1_request_t *ezsignbulksendsignermapping_create_object_v1_request_parseFromJSON(cJSON *ezsignbulksendsignermapping_create_object_v1_requestJSON){

    ezsignbulksendsignermapping_create_object_v1_request_t *ezsignbulksendsignermapping_create_object_v1_request_local_var = NULL;

    // define the local list for ezsignbulksendsignermapping_create_object_v1_request->a_obj_ezsignbulksendsignermapping
    list_t *a_obj_ezsignbulksendsignermappingList = NULL;

    // ezsignbulksendsignermapping_create_object_v1_request->a_obj_ezsignbulksendsignermapping
    cJSON *a_obj_ezsignbulksendsignermapping = cJSON_GetObjectItemCaseSensitive(ezsignbulksendsignermapping_create_object_v1_requestJSON, "a_objEzsignbulksendsignermapping");
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
        ezsignbulksendsignermapping_request_compound_t *a_obj_ezsignbulksendsignermappingItem = ezsignbulksendsignermapping_request_compound_parseFromJSON(a_obj_ezsignbulksendsignermapping_local_nonprimitive);

        list_addElement(a_obj_ezsignbulksendsignermappingList, a_obj_ezsignbulksendsignermappingItem);
    }


    ezsignbulksendsignermapping_create_object_v1_request_local_var = ezsignbulksendsignermapping_create_object_v1_request_create (
        a_obj_ezsignbulksendsignermappingList
        );

    return ezsignbulksendsignermapping_create_object_v1_request_local_var;
end:
    if (a_obj_ezsignbulksendsignermappingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignbulksendsignermappingList) {
            ezsignbulksendsignermapping_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignbulksendsignermappingList);
        a_obj_ezsignbulksendsignermappingList = NULL;
    }
    return NULL;

}
