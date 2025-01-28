#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_create_object_v1_request.h"



static ezsigntemplatepackage_create_object_v1_request_t *ezsigntemplatepackage_create_object_v1_request_create_internal(
    list_t *a_obj_ezsigntemplatepackage
    ) {
    ezsigntemplatepackage_create_object_v1_request_t *ezsigntemplatepackage_create_object_v1_request_local_var = malloc(sizeof(ezsigntemplatepackage_create_object_v1_request_t));
    if (!ezsigntemplatepackage_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_create_object_v1_request_local_var->a_obj_ezsigntemplatepackage = a_obj_ezsigntemplatepackage;

    ezsigntemplatepackage_create_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplatepackage_create_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackage_create_object_v1_request_t *ezsigntemplatepackage_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatepackage
    ) {
    return ezsigntemplatepackage_create_object_v1_request_create_internal (
        a_obj_ezsigntemplatepackage
        );
}

void ezsigntemplatepackage_create_object_v1_request_free(ezsigntemplatepackage_create_object_v1_request_t *ezsigntemplatepackage_create_object_v1_request) {
    if(NULL == ezsigntemplatepackage_create_object_v1_request){
        return ;
    }
    if(ezsigntemplatepackage_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackage_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_create_object_v1_request->a_obj_ezsigntemplatepackage) {
        list_ForEach(listEntry, ezsigntemplatepackage_create_object_v1_request->a_obj_ezsigntemplatepackage) {
            ezsigntemplatepackage_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackage_create_object_v1_request->a_obj_ezsigntemplatepackage);
        ezsigntemplatepackage_create_object_v1_request->a_obj_ezsigntemplatepackage = NULL;
    }
    free(ezsigntemplatepackage_create_object_v1_request);
}

cJSON *ezsigntemplatepackage_create_object_v1_request_convertToJSON(ezsigntemplatepackage_create_object_v1_request_t *ezsigntemplatepackage_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_create_object_v1_request->a_obj_ezsigntemplatepackage
    if (!ezsigntemplatepackage_create_object_v1_request->a_obj_ezsigntemplatepackage) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackage = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackage");
    if(a_obj_ezsigntemplatepackage == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackageListEntry;
    if (ezsigntemplatepackage_create_object_v1_request->a_obj_ezsigntemplatepackage) {
    list_ForEach(a_obj_ezsigntemplatepackageListEntry, ezsigntemplatepackage_create_object_v1_request->a_obj_ezsigntemplatepackage) {
    cJSON *itemLocal = ezsigntemplatepackage_request_compound_convertToJSON(a_obj_ezsigntemplatepackageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackage, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_create_object_v1_request_t *ezsigntemplatepackage_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepackage_create_object_v1_requestJSON){

    ezsigntemplatepackage_create_object_v1_request_t *ezsigntemplatepackage_create_object_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatepackage_create_object_v1_request->a_obj_ezsigntemplatepackage
    list_t *a_obj_ezsigntemplatepackageList = NULL;

    // ezsigntemplatepackage_create_object_v1_request->a_obj_ezsigntemplatepackage
    cJSON *a_obj_ezsigntemplatepackage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_create_object_v1_requestJSON, "a_objEzsigntemplatepackage");
    if (cJSON_IsNull(a_obj_ezsigntemplatepackage)) {
        a_obj_ezsigntemplatepackage = NULL;
    }
    if (!a_obj_ezsigntemplatepackage) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackage_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackage)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackageList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackage_local_nonprimitive,a_obj_ezsigntemplatepackage )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackage_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackage_request_compound_t *a_obj_ezsigntemplatepackageItem = ezsigntemplatepackage_request_compound_parseFromJSON(a_obj_ezsigntemplatepackage_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackageList, a_obj_ezsigntemplatepackageItem);
    }


    ezsigntemplatepackage_create_object_v1_request_local_var = ezsigntemplatepackage_create_object_v1_request_create_internal (
        a_obj_ezsigntemplatepackageList
        );

    return ezsigntemplatepackage_create_object_v1_request_local_var;
end:
    if (a_obj_ezsigntemplatepackageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackageList) {
            ezsigntemplatepackage_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackageList);
        a_obj_ezsigntemplatepackageList = NULL;
    }
    return NULL;

}
