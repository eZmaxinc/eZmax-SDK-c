#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesigner_create_object_v1_request.h"



static ezsigntemplatesigner_create_object_v1_request_t *ezsigntemplatesigner_create_object_v1_request_create_internal(
    list_t *a_obj_ezsigntemplatesigner
    ) {
    ezsigntemplatesigner_create_object_v1_request_t *ezsigntemplatesigner_create_object_v1_request_local_var = malloc(sizeof(ezsigntemplatesigner_create_object_v1_request_t));
    if (!ezsigntemplatesigner_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatesigner_create_object_v1_request_local_var->a_obj_ezsigntemplatesigner = a_obj_ezsigntemplatesigner;

    ezsigntemplatesigner_create_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplatesigner_create_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatesigner_create_object_v1_request_t *ezsigntemplatesigner_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatesigner
    ) {
    return ezsigntemplatesigner_create_object_v1_request_create_internal (
        a_obj_ezsigntemplatesigner
        );
}

void ezsigntemplatesigner_create_object_v1_request_free(ezsigntemplatesigner_create_object_v1_request_t *ezsigntemplatesigner_create_object_v1_request) {
    if(NULL == ezsigntemplatesigner_create_object_v1_request){
        return ;
    }
    if(ezsigntemplatesigner_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesigner_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesigner_create_object_v1_request->a_obj_ezsigntemplatesigner) {
        list_ForEach(listEntry, ezsigntemplatesigner_create_object_v1_request->a_obj_ezsigntemplatesigner) {
            ezsigntemplatesigner_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatesigner_create_object_v1_request->a_obj_ezsigntemplatesigner);
        ezsigntemplatesigner_create_object_v1_request->a_obj_ezsigntemplatesigner = NULL;
    }
    free(ezsigntemplatesigner_create_object_v1_request);
}

cJSON *ezsigntemplatesigner_create_object_v1_request_convertToJSON(ezsigntemplatesigner_create_object_v1_request_t *ezsigntemplatesigner_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesigner_create_object_v1_request->a_obj_ezsigntemplatesigner
    if (!ezsigntemplatesigner_create_object_v1_request->a_obj_ezsigntemplatesigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatesigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplatesigner");
    if(a_obj_ezsigntemplatesigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatesignerListEntry;
    if (ezsigntemplatesigner_create_object_v1_request->a_obj_ezsigntemplatesigner) {
    list_ForEach(a_obj_ezsigntemplatesignerListEntry, ezsigntemplatesigner_create_object_v1_request->a_obj_ezsigntemplatesigner) {
    cJSON *itemLocal = ezsigntemplatesigner_request_compound_convertToJSON(a_obj_ezsigntemplatesignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatesigner, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesigner_create_object_v1_request_t *ezsigntemplatesigner_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatesigner_create_object_v1_requestJSON){

    ezsigntemplatesigner_create_object_v1_request_t *ezsigntemplatesigner_create_object_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatesigner_create_object_v1_request->a_obj_ezsigntemplatesigner
    list_t *a_obj_ezsigntemplatesignerList = NULL;

    // ezsigntemplatesigner_create_object_v1_request->a_obj_ezsigntemplatesigner
    cJSON *a_obj_ezsigntemplatesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesigner_create_object_v1_requestJSON, "a_objEzsigntemplatesigner");
    if (cJSON_IsNull(a_obj_ezsigntemplatesigner)) {
        a_obj_ezsigntemplatesigner = NULL;
    }
    if (!a_obj_ezsigntemplatesigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatesigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatesigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatesignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatesigner_local_nonprimitive,a_obj_ezsigntemplatesigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatesigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatesigner_request_compound_t *a_obj_ezsigntemplatesignerItem = ezsigntemplatesigner_request_compound_parseFromJSON(a_obj_ezsigntemplatesigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatesignerList, a_obj_ezsigntemplatesignerItem);
    }


    ezsigntemplatesigner_create_object_v1_request_local_var = ezsigntemplatesigner_create_object_v1_request_create_internal (
        a_obj_ezsigntemplatesignerList
        );

    return ezsigntemplatesigner_create_object_v1_request_local_var;
end:
    if (a_obj_ezsigntemplatesignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatesignerList) {
            ezsigntemplatesigner_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatesignerList);
        a_obj_ezsigntemplatesignerList = NULL;
    }
    return NULL;

}
