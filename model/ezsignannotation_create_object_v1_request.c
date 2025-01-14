#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignannotation_create_object_v1_request.h"



ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request_create(
    list_t *a_obj_ezsignannotation
    ) {
    ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request_local_var = malloc(sizeof(ezsignannotation_create_object_v1_request_t));
    if (!ezsignannotation_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignannotation_create_object_v1_request_local_var->a_obj_ezsignannotation = a_obj_ezsignannotation;

    return ezsignannotation_create_object_v1_request_local_var;
}


void ezsignannotation_create_object_v1_request_free(ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request) {
    if(NULL == ezsignannotation_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignannotation_create_object_v1_request->a_obj_ezsignannotation) {
        list_ForEach(listEntry, ezsignannotation_create_object_v1_request->a_obj_ezsignannotation) {
            ezsignannotation_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignannotation_create_object_v1_request->a_obj_ezsignannotation);
        ezsignannotation_create_object_v1_request->a_obj_ezsignannotation = NULL;
    }
    free(ezsignannotation_create_object_v1_request);
}

cJSON *ezsignannotation_create_object_v1_request_convertToJSON(ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignannotation_create_object_v1_request->a_obj_ezsignannotation
    if (!ezsignannotation_create_object_v1_request->a_obj_ezsignannotation) {
        goto fail;
    }
    cJSON *a_obj_ezsignannotation = cJSON_AddArrayToObject(item, "a_objEzsignannotation");
    if(a_obj_ezsignannotation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignannotationListEntry;
    if (ezsignannotation_create_object_v1_request->a_obj_ezsignannotation) {
    list_ForEach(a_obj_ezsignannotationListEntry, ezsignannotation_create_object_v1_request->a_obj_ezsignannotation) {
    cJSON *itemLocal = ezsignannotation_request_compound_convertToJSON(a_obj_ezsignannotationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignannotation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request_parseFromJSON(cJSON *ezsignannotation_create_object_v1_requestJSON){

    ezsignannotation_create_object_v1_request_t *ezsignannotation_create_object_v1_request_local_var = NULL;

    // define the local list for ezsignannotation_create_object_v1_request->a_obj_ezsignannotation
    list_t *a_obj_ezsignannotationList = NULL;

    // ezsignannotation_create_object_v1_request->a_obj_ezsignannotation
    cJSON *a_obj_ezsignannotation = cJSON_GetObjectItemCaseSensitive(ezsignannotation_create_object_v1_requestJSON, "a_objEzsignannotation");
    if (!a_obj_ezsignannotation) {
        goto end;
    }

    
    cJSON *a_obj_ezsignannotation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignannotation)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignannotationList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignannotation_local_nonprimitive,a_obj_ezsignannotation )
    {
        if(!cJSON_IsObject(a_obj_ezsignannotation_local_nonprimitive)){
            goto end;
        }
        ezsignannotation_request_compound_t *a_obj_ezsignannotationItem = ezsignannotation_request_compound_parseFromJSON(a_obj_ezsignannotation_local_nonprimitive);

        list_addElement(a_obj_ezsignannotationList, a_obj_ezsignannotationItem);
    }


    ezsignannotation_create_object_v1_request_local_var = ezsignannotation_create_object_v1_request_create (
        a_obj_ezsignannotationList
        );

    return ezsignannotation_create_object_v1_request_local_var;
end:
    if (a_obj_ezsignannotationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignannotationList) {
            ezsignannotation_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignannotationList);
        a_obj_ezsignannotationList = NULL;
    }
    return NULL;

}
