#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_create_object_v1_request.h"



static ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request_create_internal(
    list_t *a_obj_ezsigntemplatepublic
    ) {
    ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request_local_var = malloc(sizeof(ezsigntemplatepublic_create_object_v1_request_t));
    if (!ezsigntemplatepublic_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_create_object_v1_request_local_var->a_obj_ezsigntemplatepublic = a_obj_ezsigntemplatepublic;

    ezsigntemplatepublic_create_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplatepublic_create_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatepublic
    ) {
    return ezsigntemplatepublic_create_object_v1_request_create_internal (
        a_obj_ezsigntemplatepublic
        );
}

void ezsigntemplatepublic_create_object_v1_request_free(ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request) {
    if(NULL == ezsigntemplatepublic_create_object_v1_request){
        return ;
    }
    if(ezsigntemplatepublic_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepublic_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_create_object_v1_request->a_obj_ezsigntemplatepublic) {
        list_ForEach(listEntry, ezsigntemplatepublic_create_object_v1_request->a_obj_ezsigntemplatepublic) {
            ezsigntemplatepublic_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepublic_create_object_v1_request->a_obj_ezsigntemplatepublic);
        ezsigntemplatepublic_create_object_v1_request->a_obj_ezsigntemplatepublic = NULL;
    }
    free(ezsigntemplatepublic_create_object_v1_request);
}

cJSON *ezsigntemplatepublic_create_object_v1_request_convertToJSON(ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_create_object_v1_request->a_obj_ezsigntemplatepublic
    if (!ezsigntemplatepublic_create_object_v1_request->a_obj_ezsigntemplatepublic) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepublic = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepublic");
    if(a_obj_ezsigntemplatepublic == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepublicListEntry;
    if (ezsigntemplatepublic_create_object_v1_request->a_obj_ezsigntemplatepublic) {
    list_ForEach(a_obj_ezsigntemplatepublicListEntry, ezsigntemplatepublic_create_object_v1_request->a_obj_ezsigntemplatepublic) {
    cJSON *itemLocal = ezsigntemplatepublic_request_compound_convertToJSON(a_obj_ezsigntemplatepublicListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepublic, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepublic_create_object_v1_requestJSON){

    ezsigntemplatepublic_create_object_v1_request_t *ezsigntemplatepublic_create_object_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatepublic_create_object_v1_request->a_obj_ezsigntemplatepublic
    list_t *a_obj_ezsigntemplatepublicList = NULL;

    // ezsigntemplatepublic_create_object_v1_request->a_obj_ezsigntemplatepublic
    cJSON *a_obj_ezsigntemplatepublic = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_create_object_v1_requestJSON, "a_objEzsigntemplatepublic");
    if (cJSON_IsNull(a_obj_ezsigntemplatepublic)) {
        a_obj_ezsigntemplatepublic = NULL;
    }
    if (!a_obj_ezsigntemplatepublic) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepublic_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepublic)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepublicList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepublic_local_nonprimitive,a_obj_ezsigntemplatepublic )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepublic_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepublic_request_compound_t *a_obj_ezsigntemplatepublicItem = ezsigntemplatepublic_request_compound_parseFromJSON(a_obj_ezsigntemplatepublic_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepublicList, a_obj_ezsigntemplatepublicItem);
    }


    ezsigntemplatepublic_create_object_v1_request_local_var = ezsigntemplatepublic_create_object_v1_request_create_internal (
        a_obj_ezsigntemplatepublicList
        );

    return ezsigntemplatepublic_create_object_v1_request_local_var;
end:
    if (a_obj_ezsigntemplatepublicList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepublicList) {
            ezsigntemplatepublic_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepublicList);
        a_obj_ezsigntemplatepublicList = NULL;
    }
    return NULL;

}
