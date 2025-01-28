#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatesignature_create_object_v2_request.h"



static ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request_create_internal(
    list_t *a_obj_ezsigntemplatesignature
    ) {
    ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request_local_var = malloc(sizeof(ezsigntemplatesignature_create_object_v2_request_t));
    if (!ezsigntemplatesignature_create_object_v2_request_local_var) {
        return NULL;
    }
    ezsigntemplatesignature_create_object_v2_request_local_var->a_obj_ezsigntemplatesignature = a_obj_ezsigntemplatesignature;

    ezsigntemplatesignature_create_object_v2_request_local_var->_library_owned = 1;
    return ezsigntemplatesignature_create_object_v2_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request_create(
    list_t *a_obj_ezsigntemplatesignature
    ) {
    return ezsigntemplatesignature_create_object_v2_request_create_internal (
        a_obj_ezsigntemplatesignature
        );
}

void ezsigntemplatesignature_create_object_v2_request_free(ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request) {
    if(NULL == ezsigntemplatesignature_create_object_v2_request){
        return ;
    }
    if(ezsigntemplatesignature_create_object_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatesignature_create_object_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatesignature_create_object_v2_request->a_obj_ezsigntemplatesignature) {
        list_ForEach(listEntry, ezsigntemplatesignature_create_object_v2_request->a_obj_ezsigntemplatesignature) {
            ezsigntemplatesignature_request_compound_v2_free(listEntry->data);
        }
        list_freeList(ezsigntemplatesignature_create_object_v2_request->a_obj_ezsigntemplatesignature);
        ezsigntemplatesignature_create_object_v2_request->a_obj_ezsigntemplatesignature = NULL;
    }
    free(ezsigntemplatesignature_create_object_v2_request);
}

cJSON *ezsigntemplatesignature_create_object_v2_request_convertToJSON(ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatesignature_create_object_v2_request->a_obj_ezsigntemplatesignature
    if (!ezsigntemplatesignature_create_object_v2_request->a_obj_ezsigntemplatesignature) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatesignature = cJSON_AddArrayToObject(item, "a_objEzsigntemplatesignature");
    if(a_obj_ezsigntemplatesignature == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatesignatureListEntry;
    if (ezsigntemplatesignature_create_object_v2_request->a_obj_ezsigntemplatesignature) {
    list_ForEach(a_obj_ezsigntemplatesignatureListEntry, ezsigntemplatesignature_create_object_v2_request->a_obj_ezsigntemplatesignature) {
    cJSON *itemLocal = ezsigntemplatesignature_request_compound_v2_convertToJSON(a_obj_ezsigntemplatesignatureListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatesignature, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request_parseFromJSON(cJSON *ezsigntemplatesignature_create_object_v2_requestJSON){

    ezsigntemplatesignature_create_object_v2_request_t *ezsigntemplatesignature_create_object_v2_request_local_var = NULL;

    // define the local list for ezsigntemplatesignature_create_object_v2_request->a_obj_ezsigntemplatesignature
    list_t *a_obj_ezsigntemplatesignatureList = NULL;

    // ezsigntemplatesignature_create_object_v2_request->a_obj_ezsigntemplatesignature
    cJSON *a_obj_ezsigntemplatesignature = cJSON_GetObjectItemCaseSensitive(ezsigntemplatesignature_create_object_v2_requestJSON, "a_objEzsigntemplatesignature");
    if (cJSON_IsNull(a_obj_ezsigntemplatesignature)) {
        a_obj_ezsigntemplatesignature = NULL;
    }
    if (!a_obj_ezsigntemplatesignature) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatesignature_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatesignature)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatesignatureList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatesignature_local_nonprimitive,a_obj_ezsigntemplatesignature )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatesignature_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatesignature_request_compound_v2_t *a_obj_ezsigntemplatesignatureItem = ezsigntemplatesignature_request_compound_v2_parseFromJSON(a_obj_ezsigntemplatesignature_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatesignatureList, a_obj_ezsigntemplatesignatureItem);
    }


    ezsigntemplatesignature_create_object_v2_request_local_var = ezsigntemplatesignature_create_object_v2_request_create_internal (
        a_obj_ezsigntemplatesignatureList
        );

    return ezsigntemplatesignature_create_object_v2_request_local_var;
end:
    if (a_obj_ezsigntemplatesignatureList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatesignatureList) {
            ezsigntemplatesignature_request_compound_v2_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatesignatureList);
        a_obj_ezsigntemplatesignatureList = NULL;
    }
    return NULL;

}
