#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateannotation_create_object_v1_request.h"



static ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request_create_internal(
    list_t *a_obj_ezsigntemplateannotation
    ) {
    ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request_local_var = malloc(sizeof(ezsigntemplateannotation_create_object_v1_request_t));
    if (!ezsigntemplateannotation_create_object_v1_request_local_var) {
        return NULL;
    }
    memset(ezsigntemplateannotation_create_object_v1_request_local_var, 0, sizeof(ezsigntemplateannotation_create_object_v1_request_t));
    ezsigntemplateannotation_create_object_v1_request_local_var->_library_owned = 1;
    ezsigntemplateannotation_create_object_v1_request_local_var->a_obj_ezsigntemplateannotation = a_obj_ezsigntemplateannotation;
    return ezsigntemplateannotation_create_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplateannotation
    ) {
    ezsigntemplateannotation_create_object_v1_request_t *result = ezsigntemplateannotation_create_object_v1_request_create_internal (
        a_obj_ezsigntemplateannotation
        );
    if (!result) {
    }
    return result;
}

void ezsigntemplateannotation_create_object_v1_request_free(ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request) {
    if(NULL == ezsigntemplateannotation_create_object_v1_request){
        return ;
    }
    if(ezsigntemplateannotation_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateannotation_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateannotation_create_object_v1_request->a_obj_ezsigntemplateannotation) {
        list_ForEach(listEntry, ezsigntemplateannotation_create_object_v1_request->a_obj_ezsigntemplateannotation) {
            ezsigntemplateannotation_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateannotation_create_object_v1_request->a_obj_ezsigntemplateannotation);
        ezsigntemplateannotation_create_object_v1_request->a_obj_ezsigntemplateannotation = NULL;
    }
    free(ezsigntemplateannotation_create_object_v1_request);
}

cJSON *ezsigntemplateannotation_create_object_v1_request_convertToJSON(ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateannotation_create_object_v1_request->a_obj_ezsigntemplateannotation
    if (!ezsigntemplateannotation_create_object_v1_request->a_obj_ezsigntemplateannotation) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateannotation = cJSON_AddArrayToObject(item, "a_objEzsigntemplateannotation");
    if(a_obj_ezsigntemplateannotation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateannotationListEntry;
    if (ezsigntemplateannotation_create_object_v1_request->a_obj_ezsigntemplateannotation) {
    list_ForEach(a_obj_ezsigntemplateannotationListEntry, ezsigntemplateannotation_create_object_v1_request->a_obj_ezsigntemplateannotation) {
    cJSON *itemLocal = ezsigntemplateannotation_request_compound_convertToJSON(a_obj_ezsigntemplateannotationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateannotation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplateannotation_create_object_v1_requestJSON){

    ezsigntemplateannotation_create_object_v1_request_t *ezsigntemplateannotation_create_object_v1_request_local_var = NULL;

    // define the local list for ezsigntemplateannotation_create_object_v1_request->a_obj_ezsigntemplateannotation
    list_t *a_obj_ezsigntemplateannotationList = NULL;

    // ezsigntemplateannotation_create_object_v1_request->a_obj_ezsigntemplateannotation
    cJSON *a_obj_ezsigntemplateannotation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_create_object_v1_requestJSON, "a_objEzsigntemplateannotation");
    if (cJSON_IsNull(a_obj_ezsigntemplateannotation)) {
        a_obj_ezsigntemplateannotation = NULL;
    }
    if (!a_obj_ezsigntemplateannotation) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateannotation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateannotation)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateannotationList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateannotation_local_nonprimitive,a_obj_ezsigntemplateannotation )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateannotation_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateannotation_request_compound_t *a_obj_ezsigntemplateannotationItem = ezsigntemplateannotation_request_compound_parseFromJSON(a_obj_ezsigntemplateannotation_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateannotationList, a_obj_ezsigntemplateannotationItem);
    }



    ezsigntemplateannotation_create_object_v1_request_local_var = ezsigntemplateannotation_create_object_v1_request_create_internal (
        a_obj_ezsigntemplateannotationList
        );

    if (!ezsigntemplateannotation_create_object_v1_request_local_var) {
        goto end;
    }

    return ezsigntemplateannotation_create_object_v1_request_local_var;
end:
    if (a_obj_ezsigntemplateannotationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateannotationList) {
            ezsigntemplateannotation_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateannotationList);
        a_obj_ezsigntemplateannotationList = NULL;
    }
    return NULL;

}
