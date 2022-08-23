#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_create_object_v1_request.h"



ezsignfoldertype_create_object_v1_request_t *ezsignfoldertype_create_object_v1_request_create(
    list_t *a_obj_ezsignfoldertype
    ) {
    ezsignfoldertype_create_object_v1_request_t *ezsignfoldertype_create_object_v1_request_local_var = malloc(sizeof(ezsignfoldertype_create_object_v1_request_t));
    if (!ezsignfoldertype_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignfoldertype_create_object_v1_request_local_var->a_obj_ezsignfoldertype = a_obj_ezsignfoldertype;

    return ezsignfoldertype_create_object_v1_request_local_var;
}


void ezsignfoldertype_create_object_v1_request_free(ezsignfoldertype_create_object_v1_request_t *ezsignfoldertype_create_object_v1_request) {
    if(NULL == ezsignfoldertype_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_create_object_v1_request->a_obj_ezsignfoldertype) {
        list_ForEach(listEntry, ezsignfoldertype_create_object_v1_request->a_obj_ezsignfoldertype) {
            ezsignfoldertype_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignfoldertype_create_object_v1_request->a_obj_ezsignfoldertype);
        ezsignfoldertype_create_object_v1_request->a_obj_ezsignfoldertype = NULL;
    }
    free(ezsignfoldertype_create_object_v1_request);
}

cJSON *ezsignfoldertype_create_object_v1_request_convertToJSON(ezsignfoldertype_create_object_v1_request_t *ezsignfoldertype_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_create_object_v1_request->a_obj_ezsignfoldertype
    if (!ezsignfoldertype_create_object_v1_request->a_obj_ezsignfoldertype) {
        goto fail;
    }
    cJSON *a_obj_ezsignfoldertype = cJSON_AddArrayToObject(item, "a_objEzsignfoldertype");
    if(a_obj_ezsignfoldertype == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignfoldertypeListEntry;
    if (ezsignfoldertype_create_object_v1_request->a_obj_ezsignfoldertype) {
    list_ForEach(a_obj_ezsignfoldertypeListEntry, ezsignfoldertype_create_object_v1_request->a_obj_ezsignfoldertype) {
    cJSON *itemLocal = ezsignfoldertype_request_compound_convertToJSON(a_obj_ezsignfoldertypeListEntry->data);
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

ezsignfoldertype_create_object_v1_request_t *ezsignfoldertype_create_object_v1_request_parseFromJSON(cJSON *ezsignfoldertype_create_object_v1_requestJSON){

    ezsignfoldertype_create_object_v1_request_t *ezsignfoldertype_create_object_v1_request_local_var = NULL;

    // define the local list for ezsignfoldertype_create_object_v1_request->a_obj_ezsignfoldertype
    list_t *a_obj_ezsignfoldertypeList = NULL;

    // ezsignfoldertype_create_object_v1_request->a_obj_ezsignfoldertype
    cJSON *a_obj_ezsignfoldertype = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_create_object_v1_requestJSON, "a_objEzsignfoldertype");
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
        ezsignfoldertype_request_compound_t *a_obj_ezsignfoldertypeItem = ezsignfoldertype_request_compound_parseFromJSON(a_obj_ezsignfoldertype_local_nonprimitive);

        list_addElement(a_obj_ezsignfoldertypeList, a_obj_ezsignfoldertypeItem);
    }


    ezsignfoldertype_create_object_v1_request_local_var = ezsignfoldertype_create_object_v1_request_create (
        a_obj_ezsignfoldertypeList
        );

    return ezsignfoldertype_create_object_v1_request_local_var;
end:
    if (a_obj_ezsignfoldertypeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignfoldertypeList) {
            ezsignfoldertype_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignfoldertypeList);
        a_obj_ezsignfoldertypeList = NULL;
    }
    return NULL;

}
