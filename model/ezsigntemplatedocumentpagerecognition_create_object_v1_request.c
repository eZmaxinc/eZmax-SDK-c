#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocumentpagerecognition_create_object_v1_request.h"



static ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request_create_internal(
    list_t *a_obj_ezsigntemplatedocumentpagerecognition
    ) {
    ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request_local_var = malloc(sizeof(ezsigntemplatedocumentpagerecognition_create_object_v1_request_t));
    if (!ezsigntemplatedocumentpagerecognition_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatedocumentpagerecognition_create_object_v1_request_local_var->a_obj_ezsigntemplatedocumentpagerecognition = a_obj_ezsigntemplatedocumentpagerecognition;

    ezsigntemplatedocumentpagerecognition_create_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplatedocumentpagerecognition_create_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatedocumentpagerecognition
    ) {
    return ezsigntemplatedocumentpagerecognition_create_object_v1_request_create_internal (
        a_obj_ezsigntemplatedocumentpagerecognition
        );
}

void ezsigntemplatedocumentpagerecognition_create_object_v1_request_free(ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request) {
    if(NULL == ezsigntemplatedocumentpagerecognition_create_object_v1_request){
        return ;
    }
    if(ezsigntemplatedocumentpagerecognition_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocumentpagerecognition_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocumentpagerecognition_create_object_v1_request->a_obj_ezsigntemplatedocumentpagerecognition) {
        list_ForEach(listEntry, ezsigntemplatedocumentpagerecognition_create_object_v1_request->a_obj_ezsigntemplatedocumentpagerecognition) {
            ezsigntemplatedocumentpagerecognition_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocumentpagerecognition_create_object_v1_request->a_obj_ezsigntemplatedocumentpagerecognition);
        ezsigntemplatedocumentpagerecognition_create_object_v1_request->a_obj_ezsigntemplatedocumentpagerecognition = NULL;
    }
    free(ezsigntemplatedocumentpagerecognition_create_object_v1_request);
}

cJSON *ezsigntemplatedocumentpagerecognition_create_object_v1_request_convertToJSON(ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocumentpagerecognition_create_object_v1_request->a_obj_ezsigntemplatedocumentpagerecognition
    if (!ezsigntemplatedocumentpagerecognition_create_object_v1_request->a_obj_ezsigntemplatedocumentpagerecognition) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatedocumentpagerecognition = cJSON_AddArrayToObject(item, "a_objEzsigntemplatedocumentpagerecognition");
    if(a_obj_ezsigntemplatedocumentpagerecognition == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatedocumentpagerecognitionListEntry;
    if (ezsigntemplatedocumentpagerecognition_create_object_v1_request->a_obj_ezsigntemplatedocumentpagerecognition) {
    list_ForEach(a_obj_ezsigntemplatedocumentpagerecognitionListEntry, ezsigntemplatedocumentpagerecognition_create_object_v1_request->a_obj_ezsigntemplatedocumentpagerecognition) {
    cJSON *itemLocal = ezsigntemplatedocumentpagerecognition_request_compound_convertToJSON(a_obj_ezsigntemplatedocumentpagerecognitionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatedocumentpagerecognition, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_create_object_v1_requestJSON){

    ezsigntemplatedocumentpagerecognition_create_object_v1_request_t *ezsigntemplatedocumentpagerecognition_create_object_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatedocumentpagerecognition_create_object_v1_request->a_obj_ezsigntemplatedocumentpagerecognition
    list_t *a_obj_ezsigntemplatedocumentpagerecognitionList = NULL;

    // ezsigntemplatedocumentpagerecognition_create_object_v1_request->a_obj_ezsigntemplatedocumentpagerecognition
    cJSON *a_obj_ezsigntemplatedocumentpagerecognition = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_create_object_v1_requestJSON, "a_objEzsigntemplatedocumentpagerecognition");
    if (cJSON_IsNull(a_obj_ezsigntemplatedocumentpagerecognition)) {
        a_obj_ezsigntemplatedocumentpagerecognition = NULL;
    }
    if (!a_obj_ezsigntemplatedocumentpagerecognition) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatedocumentpagerecognition_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatedocumentpagerecognition)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatedocumentpagerecognitionList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatedocumentpagerecognition_local_nonprimitive,a_obj_ezsigntemplatedocumentpagerecognition )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatedocumentpagerecognition_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatedocumentpagerecognition_request_compound_t *a_obj_ezsigntemplatedocumentpagerecognitionItem = ezsigntemplatedocumentpagerecognition_request_compound_parseFromJSON(a_obj_ezsigntemplatedocumentpagerecognition_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatedocumentpagerecognitionList, a_obj_ezsigntemplatedocumentpagerecognitionItem);
    }


    ezsigntemplatedocumentpagerecognition_create_object_v1_request_local_var = ezsigntemplatedocumentpagerecognition_create_object_v1_request_create_internal (
        a_obj_ezsigntemplatedocumentpagerecognitionList
        );

    return ezsigntemplatedocumentpagerecognition_create_object_v1_request_local_var;
end:
    if (a_obj_ezsigntemplatedocumentpagerecognitionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatedocumentpagerecognitionList) {
            ezsigntemplatedocumentpagerecognition_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatedocumentpagerecognitionList);
        a_obj_ezsigntemplatedocumentpagerecognitionList = NULL;
    }
    return NULL;

}
