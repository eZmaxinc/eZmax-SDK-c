#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_create_object_v3_request.h"



static ezsignfoldertype_create_object_v3_request_t *ezsignfoldertype_create_object_v3_request_create_internal(
    list_t *a_obj_ezsignfoldertype
    ) {
    ezsignfoldertype_create_object_v3_request_t *ezsignfoldertype_create_object_v3_request_local_var = malloc(sizeof(ezsignfoldertype_create_object_v3_request_t));
    if (!ezsignfoldertype_create_object_v3_request_local_var) {
        return NULL;
    }
    ezsignfoldertype_create_object_v3_request_local_var->a_obj_ezsignfoldertype = a_obj_ezsignfoldertype;

    ezsignfoldertype_create_object_v3_request_local_var->_library_owned = 1;
    return ezsignfoldertype_create_object_v3_request_local_var;
}

__attribute__((deprecated)) ezsignfoldertype_create_object_v3_request_t *ezsignfoldertype_create_object_v3_request_create(
    list_t *a_obj_ezsignfoldertype
    ) {
    return ezsignfoldertype_create_object_v3_request_create_internal (
        a_obj_ezsignfoldertype
        );
}

void ezsignfoldertype_create_object_v3_request_free(ezsignfoldertype_create_object_v3_request_t *ezsignfoldertype_create_object_v3_request) {
    if(NULL == ezsignfoldertype_create_object_v3_request){
        return ;
    }
    if(ezsignfoldertype_create_object_v3_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldertype_create_object_v3_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_create_object_v3_request->a_obj_ezsignfoldertype) {
        list_ForEach(listEntry, ezsignfoldertype_create_object_v3_request->a_obj_ezsignfoldertype) {
            ezsignfoldertype_request_compound_v3_free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_create_object_v3_request->a_obj_ezsignfoldertype);
        ezsignfoldertype_create_object_v3_request->a_obj_ezsignfoldertype = NULL;
    }
    free(ezsignfoldertype_create_object_v3_request);
}

cJSON *ezsignfoldertype_create_object_v3_request_convertToJSON(ezsignfoldertype_create_object_v3_request_t *ezsignfoldertype_create_object_v3_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_create_object_v3_request->a_obj_ezsignfoldertype
    if (!ezsignfoldertype_create_object_v3_request->a_obj_ezsignfoldertype) {
        goto fail;
    }
    cJSON *a_obj_ezsignfoldertype = cJSON_AddArrayToObject(item, "a_objEzsignfoldertype");
    if(a_obj_ezsignfoldertype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldertypeListEntry;
    if (ezsignfoldertype_create_object_v3_request->a_obj_ezsignfoldertype) {
    list_ForEach(a_obj_ezsignfoldertypeListEntry, ezsignfoldertype_create_object_v3_request->a_obj_ezsignfoldertype) {
    cJSON *itemLocal = ezsignfoldertype_request_compound_v3_convertToJSON(a_obj_ezsignfoldertypeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignfoldertype, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldertype_create_object_v3_request_t *ezsignfoldertype_create_object_v3_request_parseFromJSON(cJSON *ezsignfoldertype_create_object_v3_requestJSON){

    ezsignfoldertype_create_object_v3_request_t *ezsignfoldertype_create_object_v3_request_local_var = NULL;

    // define the local list for ezsignfoldertype_create_object_v3_request->a_obj_ezsignfoldertype
    list_t *a_obj_ezsignfoldertypeList = NULL;

    // ezsignfoldertype_create_object_v3_request->a_obj_ezsignfoldertype
    cJSON *a_obj_ezsignfoldertype = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_create_object_v3_requestJSON, "a_objEzsignfoldertype");
    if (cJSON_IsNull(a_obj_ezsignfoldertype)) {
        a_obj_ezsignfoldertype = NULL;
    }
    if (!a_obj_ezsignfoldertype) {
        goto end;
    }

    
    cJSON *a_obj_ezsignfoldertype_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignfoldertype)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignfoldertypeList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignfoldertype_local_nonprimitive,a_obj_ezsignfoldertype )
    {
        if(!cJSON_IsObject(a_obj_ezsignfoldertype_local_nonprimitive)){
            goto end;
        }
        ezsignfoldertype_request_compound_v3_t *a_obj_ezsignfoldertypeItem = ezsignfoldertype_request_compound_v3_parseFromJSON(a_obj_ezsignfoldertype_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldertypeList, a_obj_ezsignfoldertypeItem);
    }


    ezsignfoldertype_create_object_v3_request_local_var = ezsignfoldertype_create_object_v3_request_create_internal (
        a_obj_ezsignfoldertypeList
        );

    return ezsignfoldertype_create_object_v3_request_local_var;
end:
    if (a_obj_ezsignfoldertypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfoldertypeList) {
            ezsignfoldertype_request_compound_v3_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfoldertypeList);
        a_obj_ezsignfoldertypeList = NULL;
    }
    return NULL;

}
