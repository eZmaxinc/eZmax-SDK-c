#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndiscussion_create_object_v1_request.h"



static ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request_create_internal(
    list_t *a_obj_ezsigndiscussion
    ) {
    ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request_local_var = malloc(sizeof(ezsigndiscussion_create_object_v1_request_t));
    if (!ezsigndiscussion_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsigndiscussion_create_object_v1_request_local_var->a_obj_ezsigndiscussion = a_obj_ezsigndiscussion;

    ezsigndiscussion_create_object_v1_request_local_var->_library_owned = 1;
    return ezsigndiscussion_create_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request_create(
    list_t *a_obj_ezsigndiscussion
    ) {
    return ezsigndiscussion_create_object_v1_request_create_internal (
        a_obj_ezsigndiscussion
        );
}

void ezsigndiscussion_create_object_v1_request_free(ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request) {
    if(NULL == ezsigndiscussion_create_object_v1_request){
        return ;
    }
    if(ezsigndiscussion_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndiscussion_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndiscussion_create_object_v1_request->a_obj_ezsigndiscussion) {
        list_ForEach(listEntry, ezsigndiscussion_create_object_v1_request->a_obj_ezsigndiscussion) {
            ezsigndiscussion_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigndiscussion_create_object_v1_request->a_obj_ezsigndiscussion);
        ezsigndiscussion_create_object_v1_request->a_obj_ezsigndiscussion = NULL;
    }
    free(ezsigndiscussion_create_object_v1_request);
}

cJSON *ezsigndiscussion_create_object_v1_request_convertToJSON(ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndiscussion_create_object_v1_request->a_obj_ezsigndiscussion
    if (!ezsigndiscussion_create_object_v1_request->a_obj_ezsigndiscussion) {
        goto fail;
    }
    cJSON *a_obj_ezsigndiscussion = cJSON_AddArrayToObject(item, "a_objEzsigndiscussion");
    if(a_obj_ezsigndiscussion == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigndiscussionListEntry;
    if (ezsigndiscussion_create_object_v1_request->a_obj_ezsigndiscussion) {
    list_ForEach(a_obj_ezsigndiscussionListEntry, ezsigndiscussion_create_object_v1_request->a_obj_ezsigndiscussion) {
    cJSON *itemLocal = ezsigndiscussion_request_compound_convertToJSON(a_obj_ezsigndiscussionListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigndiscussion, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request_parseFromJSON(cJSON *ezsigndiscussion_create_object_v1_requestJSON){

    ezsigndiscussion_create_object_v1_request_t *ezsigndiscussion_create_object_v1_request_local_var = NULL;

    // define the local list for ezsigndiscussion_create_object_v1_request->a_obj_ezsigndiscussion
    list_t *a_obj_ezsigndiscussionList = NULL;

    // ezsigndiscussion_create_object_v1_request->a_obj_ezsigndiscussion
    cJSON *a_obj_ezsigndiscussion = cJSON_GetObjectItemCaseSensitive(ezsigndiscussion_create_object_v1_requestJSON, "a_objEzsigndiscussion");
    if (cJSON_IsNull(a_obj_ezsigndiscussion)) {
        a_obj_ezsigndiscussion = NULL;
    }
    if (!a_obj_ezsigndiscussion) {
        goto end;
    }

    
    cJSON *a_obj_ezsigndiscussion_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigndiscussion)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigndiscussionList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigndiscussion_local_nonprimitive,a_obj_ezsigndiscussion )
    {
        if(!cJSON_IsObject(a_obj_ezsigndiscussion_local_nonprimitive)){
            goto end;
        }
        ezsigndiscussion_request_compound_t *a_obj_ezsigndiscussionItem = ezsigndiscussion_request_compound_parseFromJSON(a_obj_ezsigndiscussion_local_nonprimitive);

        list_addElement(a_obj_ezsigndiscussionList, a_obj_ezsigndiscussionItem);
    }


    ezsigndiscussion_create_object_v1_request_local_var = ezsigndiscussion_create_object_v1_request_create_internal (
        a_obj_ezsigndiscussionList
        );

    return ezsigndiscussion_create_object_v1_request_local_var;
end:
    if (a_obj_ezsigndiscussionList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigndiscussionList) {
            ezsigndiscussion_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigndiscussionList);
        a_obj_ezsigndiscussionList = NULL;
    }
    return NULL;

}
