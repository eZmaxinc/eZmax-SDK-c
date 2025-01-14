#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request.h"



ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_create(
    list_t *a_obj_ezsigntemplatedocumentpagerecognition
    ) {
    ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_local_var = malloc(sizeof(ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_t));
    if (!ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_local_var->a_obj_ezsigntemplatedocumentpagerecognition = a_obj_ezsigntemplatedocumentpagerecognition;

    return ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_local_var;
}


void ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_free(ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request) {
    if(NULL == ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request->a_obj_ezsigntemplatedocumentpagerecognition) {
        list_ForEach(listEntry, ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request->a_obj_ezsigntemplatedocumentpagerecognition) {
            ezsigntemplatedocumentpagerecognition_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request->a_obj_ezsigntemplatedocumentpagerecognition);
        ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request->a_obj_ezsigntemplatedocumentpagerecognition = NULL;
    }
    free(ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request);
}

cJSON *ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_convertToJSON(ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request->a_obj_ezsigntemplatedocumentpagerecognition
    if (!ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request->a_obj_ezsigntemplatedocumentpagerecognition) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatedocumentpagerecognition = cJSON_AddArrayToObject(item, "a_objEzsigntemplatedocumentpagerecognition");
    if(a_obj_ezsigntemplatedocumentpagerecognition == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatedocumentpagerecognitionListEntry;
    if (ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request->a_obj_ezsigntemplatedocumentpagerecognition) {
    list_ForEach(a_obj_ezsigntemplatedocumentpagerecognitionListEntry, ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request->a_obj_ezsigntemplatedocumentpagerecognition) {
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

ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_parseFromJSON(cJSON *ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_requestJSON){

    ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request->a_obj_ezsigntemplatedocumentpagerecognition
    list_t *a_obj_ezsigntemplatedocumentpagerecognitionList = NULL;

    // ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request->a_obj_ezsigntemplatedocumentpagerecognition
    cJSON *a_obj_ezsigntemplatedocumentpagerecognition = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_requestJSON, "a_objEzsigntemplatedocumentpagerecognition");
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


    ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_local_var = ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_create (
        a_obj_ezsigntemplatedocumentpagerecognitionList
        );

    return ezsigntemplatedocument_edit_ezsigntemplatedocumentpagerecognitions_v1_request_local_var;
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
