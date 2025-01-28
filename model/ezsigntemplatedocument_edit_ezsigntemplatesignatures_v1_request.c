#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request.h"



static ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_create_internal(
    list_t *a_obj_ezsigntemplatesignature
    ) {
    ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_local_var = malloc(sizeof(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t));
    if (!ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_local_var->a_obj_ezsigntemplatesignature = a_obj_ezsigntemplatesignature;

    ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_local_var->_library_owned = 1;
    return ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_create(
    list_t *a_obj_ezsigntemplatesignature
    ) {
    return ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_create_internal (
        a_obj_ezsigntemplatesignature
        );
}

void ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_free(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request) {
    if(NULL == ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request){
        return ;
    }
    if(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request->a_obj_ezsigntemplatesignature) {
        list_ForEach(listEntry, ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request->a_obj_ezsigntemplatesignature) {
            ezsigntemplatesignature_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request->a_obj_ezsigntemplatesignature);
        ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request->a_obj_ezsigntemplatesignature = NULL;
    }
    free(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request);
}

cJSON *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_convertToJSON(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request->a_obj_ezsigntemplatesignature
    if (!ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request->a_obj_ezsigntemplatesignature) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatesignature = cJSON_AddArrayToObject(item, "a_objEzsigntemplatesignature");
    if(a_obj_ezsigntemplatesignature == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatesignatureListEntry;
    if (ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request->a_obj_ezsigntemplatesignature) {
    list_ForEach(a_obj_ezsigntemplatesignatureListEntry, ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request->a_obj_ezsigntemplatesignature) {
    cJSON *itemLocal = ezsigntemplatesignature_request_compound_convertToJSON(a_obj_ezsigntemplatesignatureListEntry->data);
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

ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_parseFromJSON(cJSON *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_requestJSON){

    ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_t *ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request->a_obj_ezsigntemplatesignature
    list_t *a_obj_ezsigntemplatesignatureList = NULL;

    // ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request->a_obj_ezsigntemplatesignature
    cJSON *a_obj_ezsigntemplatesignature = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_requestJSON, "a_objEzsigntemplatesignature");
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
        ezsigntemplatesignature_request_compound_t *a_obj_ezsigntemplatesignatureItem = ezsigntemplatesignature_request_compound_parseFromJSON(a_obj_ezsigntemplatesignature_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatesignatureList, a_obj_ezsigntemplatesignatureItem);
    }


    ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_local_var = ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_create_internal (
        a_obj_ezsigntemplatesignatureList
        );

    return ezsigntemplatedocument_edit_ezsigntemplatesignatures_v1_request_local_var;
end:
    if (a_obj_ezsigntemplatesignatureList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatesignatureList) {
            ezsigntemplatesignature_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatesignatureList);
        a_obj_ezsigntemplatesignatureList = NULL;
    }
    return NULL;

}
