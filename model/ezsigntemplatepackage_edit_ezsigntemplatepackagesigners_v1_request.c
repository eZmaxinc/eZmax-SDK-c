#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request.h"



static ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_t *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_create_internal(
    list_t *a_obj_ezsigntemplatepackagesigner
    ) {
    ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_t *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_local_var = malloc(sizeof(ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_t));
    if (!ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_local_var->a_obj_ezsigntemplatepackagesigner = a_obj_ezsigntemplatepackagesigner;

    ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_local_var->_library_owned = 1;
    return ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_t *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_create(
    list_t *a_obj_ezsigntemplatepackagesigner
    ) {
    return ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_create_internal (
        a_obj_ezsigntemplatepackagesigner
        );
}

void ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_free(ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_t *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request) {
    if(NULL == ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request){
        return ;
    }
    if(ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request->a_obj_ezsigntemplatepackagesigner) {
        list_ForEach(listEntry, ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request->a_obj_ezsigntemplatepackagesigner) {
            ezsigntemplatepackagesigner_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request->a_obj_ezsigntemplatepackagesigner);
        ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request->a_obj_ezsigntemplatepackagesigner = NULL;
    }
    free(ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request);
}

cJSON *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_convertToJSON(ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_t *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request->a_obj_ezsigntemplatepackagesigner
    if (!ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request->a_obj_ezsigntemplatepackagesigner) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagesigner = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagesigner");
    if(a_obj_ezsigntemplatepackagesigner == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagesignerListEntry;
    if (ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request->a_obj_ezsigntemplatepackagesigner) {
    list_ForEach(a_obj_ezsigntemplatepackagesignerListEntry, ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request->a_obj_ezsigntemplatepackagesigner) {
    cJSON *itemLocal = ezsigntemplatepackagesigner_request_compound_convertToJSON(a_obj_ezsigntemplatepackagesignerListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackagesigner, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_t *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_parseFromJSON(cJSON *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_requestJSON){

    ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_t *ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request->a_obj_ezsigntemplatepackagesigner
    list_t *a_obj_ezsigntemplatepackagesignerList = NULL;

    // ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request->a_obj_ezsigntemplatepackagesigner
    cJSON *a_obj_ezsigntemplatepackagesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_requestJSON, "a_objEzsigntemplatepackagesigner");
    if (cJSON_IsNull(a_obj_ezsigntemplatepackagesigner)) {
        a_obj_ezsigntemplatepackagesigner = NULL;
    }
    if (!a_obj_ezsigntemplatepackagesigner) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackagesigner_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackagesigner)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackagesignerList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackagesigner_local_nonprimitive,a_obj_ezsigntemplatepackagesigner )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackagesigner_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackagesigner_request_compound_t *a_obj_ezsigntemplatepackagesignerItem = ezsigntemplatepackagesigner_request_compound_parseFromJSON(a_obj_ezsigntemplatepackagesigner_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackagesignerList, a_obj_ezsigntemplatepackagesignerItem);
    }


    ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_local_var = ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_create_internal (
        a_obj_ezsigntemplatepackagesignerList
        );

    return ezsigntemplatepackage_edit_ezsigntemplatepackagesigners_v1_request_local_var;
end:
    if (a_obj_ezsigntemplatepackagesignerList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackagesignerList) {
            ezsigntemplatepackagesigner_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackagesignerList);
        a_obj_ezsigntemplatepackagesignerList = NULL;
    }
    return NULL;

}
