#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_edit_ezsignannotations_v1_request.h"



static ezsigndocument_edit_ezsignannotations_v1_request_t *ezsigndocument_edit_ezsignannotations_v1_request_create_internal(
    list_t *a_obj_ezsignannotation
    ) {
    ezsigndocument_edit_ezsignannotations_v1_request_t *ezsigndocument_edit_ezsignannotations_v1_request_local_var = malloc(sizeof(ezsigndocument_edit_ezsignannotations_v1_request_t));
    if (!ezsigndocument_edit_ezsignannotations_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_edit_ezsignannotations_v1_request_local_var->a_obj_ezsignannotation = a_obj_ezsignannotation;

    ezsigndocument_edit_ezsignannotations_v1_request_local_var->_library_owned = 1;
    return ezsigndocument_edit_ezsignannotations_v1_request_local_var;
}

__attribute__((deprecated)) ezsigndocument_edit_ezsignannotations_v1_request_t *ezsigndocument_edit_ezsignannotations_v1_request_create(
    list_t *a_obj_ezsignannotation
    ) {
    return ezsigndocument_edit_ezsignannotations_v1_request_create_internal (
        a_obj_ezsignannotation
        );
}

void ezsigndocument_edit_ezsignannotations_v1_request_free(ezsigndocument_edit_ezsignannotations_v1_request_t *ezsigndocument_edit_ezsignannotations_v1_request) {
    if(NULL == ezsigndocument_edit_ezsignannotations_v1_request){
        return ;
    }
    if(ezsigndocument_edit_ezsignannotations_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigndocument_edit_ezsignannotations_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_edit_ezsignannotations_v1_request->a_obj_ezsignannotation) {
        list_ForEach(listEntry, ezsigndocument_edit_ezsignannotations_v1_request->a_obj_ezsignannotation) {
            ezsignannotation_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigndocument_edit_ezsignannotations_v1_request->a_obj_ezsignannotation);
        ezsigndocument_edit_ezsignannotations_v1_request->a_obj_ezsignannotation = NULL;
    }
    free(ezsigndocument_edit_ezsignannotations_v1_request);
}

cJSON *ezsigndocument_edit_ezsignannotations_v1_request_convertToJSON(ezsigndocument_edit_ezsignannotations_v1_request_t *ezsigndocument_edit_ezsignannotations_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_edit_ezsignannotations_v1_request->a_obj_ezsignannotation
    if (!ezsigndocument_edit_ezsignannotations_v1_request->a_obj_ezsignannotation) {
        goto fail;
    }
    cJSON *a_obj_ezsignannotation = cJSON_AddArrayToObject(item, "a_objEzsignannotation");
    if(a_obj_ezsignannotation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignannotationListEntry;
    if (ezsigndocument_edit_ezsignannotations_v1_request->a_obj_ezsignannotation) {
    list_ForEach(a_obj_ezsignannotationListEntry, ezsigndocument_edit_ezsignannotations_v1_request->a_obj_ezsignannotation) {
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

ezsigndocument_edit_ezsignannotations_v1_request_t *ezsigndocument_edit_ezsignannotations_v1_request_parseFromJSON(cJSON *ezsigndocument_edit_ezsignannotations_v1_requestJSON){

    ezsigndocument_edit_ezsignannotations_v1_request_t *ezsigndocument_edit_ezsignannotations_v1_request_local_var = NULL;

    // define the local list for ezsigndocument_edit_ezsignannotations_v1_request->a_obj_ezsignannotation
    list_t *a_obj_ezsignannotationList = NULL;

    // ezsigndocument_edit_ezsignannotations_v1_request->a_obj_ezsignannotation
    cJSON *a_obj_ezsignannotation = cJSON_GetObjectItemCaseSensitive(ezsigndocument_edit_ezsignannotations_v1_requestJSON, "a_objEzsignannotation");
    if (cJSON_IsNull(a_obj_ezsignannotation)) {
        a_obj_ezsignannotation = NULL;
    }
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


    ezsigndocument_edit_ezsignannotations_v1_request_local_var = ezsigndocument_edit_ezsignannotations_v1_request_create_internal (
        a_obj_ezsignannotationList
        );

    return ezsigndocument_edit_ezsignannotations_v1_request_local_var;
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
