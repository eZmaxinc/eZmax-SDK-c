#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_create_object_v1_request.h"



ezsignsigningreason_create_object_v1_request_t *ezsignsigningreason_create_object_v1_request_create(
    list_t *a_obj_ezsignsigningreason
    ) {
    ezsignsigningreason_create_object_v1_request_t *ezsignsigningreason_create_object_v1_request_local_var = malloc(sizeof(ezsignsigningreason_create_object_v1_request_t));
    if (!ezsignsigningreason_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignsigningreason_create_object_v1_request_local_var->a_obj_ezsignsigningreason = a_obj_ezsignsigningreason;

    return ezsignsigningreason_create_object_v1_request_local_var;
}


void ezsignsigningreason_create_object_v1_request_free(ezsignsigningreason_create_object_v1_request_t *ezsignsigningreason_create_object_v1_request) {
    if(NULL == ezsignsigningreason_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigningreason_create_object_v1_request->a_obj_ezsignsigningreason) {
        list_ForEach(listEntry, ezsignsigningreason_create_object_v1_request->a_obj_ezsignsigningreason) {
            ezsignsigningreason_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignsigningreason_create_object_v1_request->a_obj_ezsignsigningreason);
        ezsignsigningreason_create_object_v1_request->a_obj_ezsignsigningreason = NULL;
    }
    free(ezsignsigningreason_create_object_v1_request);
}

cJSON *ezsignsigningreason_create_object_v1_request_convertToJSON(ezsignsigningreason_create_object_v1_request_t *ezsignsigningreason_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigningreason_create_object_v1_request->a_obj_ezsignsigningreason
    if (!ezsignsigningreason_create_object_v1_request->a_obj_ezsignsigningreason) {
        goto fail;
    }
    cJSON *a_obj_ezsignsigningreason = cJSON_AddArrayToObject(item, "a_objEzsignsigningreason");
    if(a_obj_ezsignsigningreason == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsigningreasonListEntry;
    if (ezsignsigningreason_create_object_v1_request->a_obj_ezsignsigningreason) {
    list_ForEach(a_obj_ezsignsigningreasonListEntry, ezsignsigningreason_create_object_v1_request->a_obj_ezsignsigningreason) {
    cJSON *itemLocal = ezsignsigningreason_request_compound_convertToJSON(a_obj_ezsignsigningreasonListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsigningreason, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsigningreason_create_object_v1_request_t *ezsignsigningreason_create_object_v1_request_parseFromJSON(cJSON *ezsignsigningreason_create_object_v1_requestJSON){

    ezsignsigningreason_create_object_v1_request_t *ezsignsigningreason_create_object_v1_request_local_var = NULL;

    // define the local list for ezsignsigningreason_create_object_v1_request->a_obj_ezsignsigningreason
    list_t *a_obj_ezsignsigningreasonList = NULL;

    // ezsignsigningreason_create_object_v1_request->a_obj_ezsignsigningreason
    cJSON *a_obj_ezsignsigningreason = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_create_object_v1_requestJSON, "a_objEzsignsigningreason");
    if (!a_obj_ezsignsigningreason) {
        goto end;
    }

    
    cJSON *a_obj_ezsignsigningreason_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsigningreason)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsigningreasonList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsigningreason_local_nonprimitive,a_obj_ezsignsigningreason )
    {
        if(!cJSON_IsObject(a_obj_ezsignsigningreason_local_nonprimitive)){
            goto end;
        }
        ezsignsigningreason_request_compound_t *a_obj_ezsignsigningreasonItem = ezsignsigningreason_request_compound_parseFromJSON(a_obj_ezsignsigningreason_local_nonprimitive);

        list_addElement(a_obj_ezsignsigningreasonList, a_obj_ezsignsigningreasonItem);
    }


    ezsignsigningreason_create_object_v1_request_local_var = ezsignsigningreason_create_object_v1_request_create (
        a_obj_ezsignsigningreasonList
        );

    return ezsignsigningreason_create_object_v1_request_local_var;
end:
    if (a_obj_ezsignsigningreasonList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsigningreasonList) {
            ezsignsigningreason_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsigningreasonList);
        a_obj_ezsignsigningreasonList = NULL;
    }
    return NULL;

}
