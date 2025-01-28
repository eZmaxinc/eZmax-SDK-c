#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_create_object_v2_request.h"



static ezsignfoldersignerassociation_create_object_v2_request_t *ezsignfoldersignerassociation_create_object_v2_request_create_internal(
    list_t *a_obj_ezsignfoldersignerassociation
    ) {
    ezsignfoldersignerassociation_create_object_v2_request_t *ezsignfoldersignerassociation_create_object_v2_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_create_object_v2_request_t));
    if (!ezsignfoldersignerassociation_create_object_v2_request_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_create_object_v2_request_local_var->a_obj_ezsignfoldersignerassociation = a_obj_ezsignfoldersignerassociation;

    ezsignfoldersignerassociation_create_object_v2_request_local_var->_library_owned = 1;
    return ezsignfoldersignerassociation_create_object_v2_request_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_create_object_v2_request_t *ezsignfoldersignerassociation_create_object_v2_request_create(
    list_t *a_obj_ezsignfoldersignerassociation
    ) {
    return ezsignfoldersignerassociation_create_object_v2_request_create_internal (
        a_obj_ezsignfoldersignerassociation
        );
}

void ezsignfoldersignerassociation_create_object_v2_request_free(ezsignfoldersignerassociation_create_object_v2_request_t *ezsignfoldersignerassociation_create_object_v2_request) {
    if(NULL == ezsignfoldersignerassociation_create_object_v2_request){
        return ;
    }
    if(ezsignfoldersignerassociation_create_object_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_create_object_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_create_object_v2_request->a_obj_ezsignfoldersignerassociation) {
        list_ForEach(listEntry, ezsignfoldersignerassociation_create_object_v2_request->a_obj_ezsignfoldersignerassociation) {
            ezsignfoldersignerassociation_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignfoldersignerassociation_create_object_v2_request->a_obj_ezsignfoldersignerassociation);
        ezsignfoldersignerassociation_create_object_v2_request->a_obj_ezsignfoldersignerassociation = NULL;
    }
    free(ezsignfoldersignerassociation_create_object_v2_request);
}

cJSON *ezsignfoldersignerassociation_create_object_v2_request_convertToJSON(ezsignfoldersignerassociation_create_object_v2_request_t *ezsignfoldersignerassociation_create_object_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_create_object_v2_request->a_obj_ezsignfoldersignerassociation
    if (!ezsignfoldersignerassociation_create_object_v2_request->a_obj_ezsignfoldersignerassociation) {
        goto fail;
    }
    cJSON *a_obj_ezsignfoldersignerassociation = cJSON_AddArrayToObject(item, "a_objEzsignfoldersignerassociation");
    if(a_obj_ezsignfoldersignerassociation == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldersignerassociationListEntry;
    if (ezsignfoldersignerassociation_create_object_v2_request->a_obj_ezsignfoldersignerassociation) {
    list_ForEach(a_obj_ezsignfoldersignerassociationListEntry, ezsignfoldersignerassociation_create_object_v2_request->a_obj_ezsignfoldersignerassociation) {
    cJSON *itemLocal = ezsignfoldersignerassociation_request_compound_convertToJSON(a_obj_ezsignfoldersignerassociationListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfoldersignerassociation, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldersignerassociation_create_object_v2_request_t *ezsignfoldersignerassociation_create_object_v2_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_object_v2_requestJSON){

    ezsignfoldersignerassociation_create_object_v2_request_t *ezsignfoldersignerassociation_create_object_v2_request_local_var = NULL;

    // define the local list for ezsignfoldersignerassociation_create_object_v2_request->a_obj_ezsignfoldersignerassociation
    list_t *a_obj_ezsignfoldersignerassociationList = NULL;

    // ezsignfoldersignerassociation_create_object_v2_request->a_obj_ezsignfoldersignerassociation
    cJSON *a_obj_ezsignfoldersignerassociation = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_object_v2_requestJSON, "a_objEzsignfoldersignerassociation");
    if (cJSON_IsNull(a_obj_ezsignfoldersignerassociation)) {
        a_obj_ezsignfoldersignerassociation = NULL;
    }
    if (!a_obj_ezsignfoldersignerassociation) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfoldersignerassociation_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfoldersignerassociation)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfoldersignerassociationList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfoldersignerassociation_local_nonprimitive,a_obj_ezsignfoldersignerassociation )
    {
        if(!cJSON_IsObject(a_obj_ezsignfoldersignerassociation_local_nonprimitive)){
            goto end;
        }
        ezsignfoldersignerassociation_request_compound_t *a_obj_ezsignfoldersignerassociationItem = ezsignfoldersignerassociation_request_compound_parseFromJSON(a_obj_ezsignfoldersignerassociation_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldersignerassociationList, a_obj_ezsignfoldersignerassociationItem);
    }


    ezsignfoldersignerassociation_create_object_v2_request_local_var = ezsignfoldersignerassociation_create_object_v2_request_create_internal (
        a_obj_ezsignfoldersignerassociationList
        );

    return ezsignfoldersignerassociation_create_object_v2_request_local_var;
end:
    if (a_obj_ezsignfoldersignerassociationList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfoldersignerassociationList) {
            ezsignfoldersignerassociation_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfoldersignerassociationList);
        a_obj_ezsignfoldersignerassociationList = NULL;
    }
    return NULL;

}
