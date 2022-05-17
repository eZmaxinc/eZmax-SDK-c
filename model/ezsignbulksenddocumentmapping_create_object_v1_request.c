#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksenddocumentmapping_create_object_v1_request.h"



ezsignbulksenddocumentmapping_create_object_v1_request_t *ezsignbulksenddocumentmapping_create_object_v1_request_create(
    list_t *a_obj_ezsignbulksenddocumentmapping
    ) {
    ezsignbulksenddocumentmapping_create_object_v1_request_t *ezsignbulksenddocumentmapping_create_object_v1_request_local_var = malloc(sizeof(ezsignbulksenddocumentmapping_create_object_v1_request_t));
    if (!ezsignbulksenddocumentmapping_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignbulksenddocumentmapping_create_object_v1_request_local_var->a_obj_ezsignbulksenddocumentmapping = a_obj_ezsignbulksenddocumentmapping;

    return ezsignbulksenddocumentmapping_create_object_v1_request_local_var;
}


void ezsignbulksenddocumentmapping_create_object_v1_request_free(ezsignbulksenddocumentmapping_create_object_v1_request_t *ezsignbulksenddocumentmapping_create_object_v1_request) {
    if(NULL == ezsignbulksenddocumentmapping_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksenddocumentmapping_create_object_v1_request->a_obj_ezsignbulksenddocumentmapping) {
        list_ForEach(listEntry, ezsignbulksenddocumentmapping_create_object_v1_request->a_obj_ezsignbulksenddocumentmapping) {
            ezsignbulksenddocumentmapping_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignbulksenddocumentmapping_create_object_v1_request->a_obj_ezsignbulksenddocumentmapping);
        ezsignbulksenddocumentmapping_create_object_v1_request->a_obj_ezsignbulksenddocumentmapping = NULL;
    }
    free(ezsignbulksenddocumentmapping_create_object_v1_request);
}

cJSON *ezsignbulksenddocumentmapping_create_object_v1_request_convertToJSON(ezsignbulksenddocumentmapping_create_object_v1_request_t *ezsignbulksenddocumentmapping_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksenddocumentmapping_create_object_v1_request->a_obj_ezsignbulksenddocumentmapping
    if (!ezsignbulksenddocumentmapping_create_object_v1_request->a_obj_ezsignbulksenddocumentmapping) {
        goto fail;
    }
    cJSON *a_obj_ezsignbulksenddocumentmapping = cJSON_AddArrayToObject(item, "a_objEzsignbulksenddocumentmapping");
    if(a_obj_ezsignbulksenddocumentmapping == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignbulksenddocumentmappingListEntry;
    if (ezsignbulksenddocumentmapping_create_object_v1_request->a_obj_ezsignbulksenddocumentmapping) {
    list_ForEach(a_obj_ezsignbulksenddocumentmappingListEntry, ezsignbulksenddocumentmapping_create_object_v1_request->a_obj_ezsignbulksenddocumentmapping) {
    cJSON *itemLocal = ezsignbulksenddocumentmapping_request_compound_convertToJSON(a_obj_ezsignbulksenddocumentmappingListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignbulksenddocumentmapping, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignbulksenddocumentmapping_create_object_v1_request_t *ezsignbulksenddocumentmapping_create_object_v1_request_parseFromJSON(cJSON *ezsignbulksenddocumentmapping_create_object_v1_requestJSON){

    ezsignbulksenddocumentmapping_create_object_v1_request_t *ezsignbulksenddocumentmapping_create_object_v1_request_local_var = NULL;

    // define the local list for ezsignbulksenddocumentmapping_create_object_v1_request->a_obj_ezsignbulksenddocumentmapping
    list_t *a_obj_ezsignbulksenddocumentmappingList = NULL;

    // ezsignbulksenddocumentmapping_create_object_v1_request->a_obj_ezsignbulksenddocumentmapping
    cJSON *a_obj_ezsignbulksenddocumentmapping = cJSON_GetObjectItemCaseSensitive(ezsignbulksenddocumentmapping_create_object_v1_requestJSON, "a_objEzsignbulksenddocumentmapping");
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
        ezsignbulksenddocumentmapping_request_compound_t *a_obj_ezsignbulksenddocumentmappingItem = ezsignbulksenddocumentmapping_request_compound_parseFromJSON(a_obj_ezsignbulksenddocumentmapping_local_nonprimitive);

        list_addElement(a_obj_ezsignbulksenddocumentmappingList, a_obj_ezsignbulksenddocumentmappingItem);
    }


    ezsignbulksenddocumentmapping_create_object_v1_request_local_var = ezsignbulksenddocumentmapping_create_object_v1_request_create (
        a_obj_ezsignbulksenddocumentmappingList
        );

    return ezsignbulksenddocumentmapping_create_object_v1_request_local_var;
end:
    if (a_obj_ezsignbulksenddocumentmappingList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignbulksenddocumentmappingList) {
            ezsignbulksenddocumentmapping_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignbulksenddocumentmappingList);
        a_obj_ezsignbulksenddocumentmappingList = NULL;
    }
    return NULL;

}
