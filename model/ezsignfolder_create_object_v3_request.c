#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_create_object_v3_request.h"



static ezsignfolder_create_object_v3_request_t *ezsignfolder_create_object_v3_request_create_internal(
    list_t *a_obj_ezsignfolder
    ) {
    ezsignfolder_create_object_v3_request_t *ezsignfolder_create_object_v3_request_local_var = malloc(sizeof(ezsignfolder_create_object_v3_request_t));
    if (!ezsignfolder_create_object_v3_request_local_var) {
        return NULL;
    }
    ezsignfolder_create_object_v3_request_local_var->a_obj_ezsignfolder = a_obj_ezsignfolder;

    ezsignfolder_create_object_v3_request_local_var->_library_owned = 1;
    return ezsignfolder_create_object_v3_request_local_var;
}

__attribute__((deprecated)) ezsignfolder_create_object_v3_request_t *ezsignfolder_create_object_v3_request_create(
    list_t *a_obj_ezsignfolder
    ) {
    return ezsignfolder_create_object_v3_request_create_internal (
        a_obj_ezsignfolder
        );
}

void ezsignfolder_create_object_v3_request_free(ezsignfolder_create_object_v3_request_t *ezsignfolder_create_object_v3_request) {
    if(NULL == ezsignfolder_create_object_v3_request){
        return ;
    }
    if(ezsignfolder_create_object_v3_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_create_object_v3_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_create_object_v3_request->a_obj_ezsignfolder) {
        list_ForEach(listEntry, ezsignfolder_create_object_v3_request->a_obj_ezsignfolder) {
            ezsignfolder_request_compound_v3_free(listEntry->data);
        }
        list_freeList(ezsignfolder_create_object_v3_request->a_obj_ezsignfolder);
        ezsignfolder_create_object_v3_request->a_obj_ezsignfolder = NULL;
    }
    free(ezsignfolder_create_object_v3_request);
}

cJSON *ezsignfolder_create_object_v3_request_convertToJSON(ezsignfolder_create_object_v3_request_t *ezsignfolder_create_object_v3_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_create_object_v3_request->a_obj_ezsignfolder
    if (!ezsignfolder_create_object_v3_request->a_obj_ezsignfolder) {
        goto fail;
    }
    cJSON *a_obj_ezsignfolder = cJSON_AddArrayToObject(item, "a_objEzsignfolder");
    if(a_obj_ezsignfolder == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfolderListEntry;
    if (ezsignfolder_create_object_v3_request->a_obj_ezsignfolder) {
    list_ForEach(a_obj_ezsignfolderListEntry, ezsignfolder_create_object_v3_request->a_obj_ezsignfolder) {
    cJSON *itemLocal = ezsignfolder_request_compound_v3_convertToJSON(a_obj_ezsignfolderListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfolder, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfolder_create_object_v3_request_t *ezsignfolder_create_object_v3_request_parseFromJSON(cJSON *ezsignfolder_create_object_v3_requestJSON){

    ezsignfolder_create_object_v3_request_t *ezsignfolder_create_object_v3_request_local_var = NULL;

    // define the local list for ezsignfolder_create_object_v3_request->a_obj_ezsignfolder
    list_t *a_obj_ezsignfolderList = NULL;

    // ezsignfolder_create_object_v3_request->a_obj_ezsignfolder
    cJSON *a_obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignfolder_create_object_v3_requestJSON, "a_objEzsignfolder");
    if (cJSON_IsNull(a_obj_ezsignfolder)) {
        a_obj_ezsignfolder = NULL;
    }
    if (!a_obj_ezsignfolder) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfolder_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfolder)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfolderList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfolder_local_nonprimitive,a_obj_ezsignfolder )
    {
        if(!cJSON_IsObject(a_obj_ezsignfolder_local_nonprimitive)){
            goto end;
        }
        ezsignfolder_request_compound_v3_t *a_obj_ezsignfolderItem = ezsignfolder_request_compound_v3_parseFromJSON(a_obj_ezsignfolder_local_nonprimitive);

        list_addElement(a_obj_ezsignfolderList, a_obj_ezsignfolderItem);
    }


    ezsignfolder_create_object_v3_request_local_var = ezsignfolder_create_object_v3_request_create_internal (
        a_obj_ezsignfolderList
        );

    return ezsignfolder_create_object_v3_request_local_var;
end:
    if (a_obj_ezsignfolderList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfolderList) {
            ezsignfolder_request_compound_v3_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfolderList);
        a_obj_ezsignfolderList = NULL;
    }
    return NULL;

}
