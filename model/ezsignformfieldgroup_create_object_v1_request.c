#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_create_object_v1_request.h"



static ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request_create_internal(
    list_t *a_obj_ezsignformfieldgroup
    ) {
    ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request_local_var = malloc(sizeof(ezsignformfieldgroup_create_object_v1_request_t));
    if (!ezsignformfieldgroup_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_create_object_v1_request_local_var->a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;

    ezsignformfieldgroup_create_object_v1_request_local_var->_library_owned = 1;
    return ezsignformfieldgroup_create_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request_create(
    list_t *a_obj_ezsignformfieldgroup
    ) {
    return ezsignformfieldgroup_create_object_v1_request_create_internal (
        a_obj_ezsignformfieldgroup
        );
}

void ezsignformfieldgroup_create_object_v1_request_free(ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request) {
    if(NULL == ezsignformfieldgroup_create_object_v1_request){
        return ;
    }
    if(ezsignformfieldgroup_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignformfieldgroup_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignformfieldgroup_create_object_v1_request->a_obj_ezsignformfieldgroup) {
        list_ForEach(listEntry, ezsignformfieldgroup_create_object_v1_request->a_obj_ezsignformfieldgroup) {
            ezsignformfieldgroup_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignformfieldgroup_create_object_v1_request->a_obj_ezsignformfieldgroup);
        ezsignformfieldgroup_create_object_v1_request->a_obj_ezsignformfieldgroup = NULL;
    }
    free(ezsignformfieldgroup_create_object_v1_request);
}

cJSON *ezsignformfieldgroup_create_object_v1_request_convertToJSON(ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignformfieldgroup_create_object_v1_request->a_obj_ezsignformfieldgroup
    if (!ezsignformfieldgroup_create_object_v1_request->a_obj_ezsignformfieldgroup) {
        goto fail;
    }
    cJSON *a_obj_ezsignformfieldgroup = cJSON_AddArrayToObject(item, "a_objEzsignformfieldgroup");
    if(a_obj_ezsignformfieldgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignformfieldgroupListEntry;
    if (ezsignformfieldgroup_create_object_v1_request->a_obj_ezsignformfieldgroup) {
    list_ForEach(a_obj_ezsignformfieldgroupListEntry, ezsignformfieldgroup_create_object_v1_request->a_obj_ezsignformfieldgroup) {
    cJSON *itemLocal = ezsignformfieldgroup_request_compound_convertToJSON(a_obj_ezsignformfieldgroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignformfieldgroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request_parseFromJSON(cJSON *ezsignformfieldgroup_create_object_v1_requestJSON){

    ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request_local_var = NULL;

    // define the local list for ezsignformfieldgroup_create_object_v1_request->a_obj_ezsignformfieldgroup
    list_t *a_obj_ezsignformfieldgroupList = NULL;

    // ezsignformfieldgroup_create_object_v1_request->a_obj_ezsignformfieldgroup
    cJSON *a_obj_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_create_object_v1_requestJSON, "a_objEzsignformfieldgroup");
    if (cJSON_IsNull(a_obj_ezsignformfieldgroup)) {
        a_obj_ezsignformfieldgroup = NULL;
    }
    if (!a_obj_ezsignformfieldgroup) {
        goto end;
    }

    
    cJSON *a_obj_ezsignformfieldgroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignformfieldgroup)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignformfieldgroupList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignformfieldgroup_local_nonprimitive,a_obj_ezsignformfieldgroup )
    {
        if(!cJSON_IsObject(a_obj_ezsignformfieldgroup_local_nonprimitive)){
            goto end;
        }
        ezsignformfieldgroup_request_compound_t *a_obj_ezsignformfieldgroupItem = ezsignformfieldgroup_request_compound_parseFromJSON(a_obj_ezsignformfieldgroup_local_nonprimitive);

        list_addElement(a_obj_ezsignformfieldgroupList, a_obj_ezsignformfieldgroupItem);
    }


    ezsignformfieldgroup_create_object_v1_request_local_var = ezsignformfieldgroup_create_object_v1_request_create_internal (
        a_obj_ezsignformfieldgroupList
        );

    return ezsignformfieldgroup_create_object_v1_request_local_var;
end:
    if (a_obj_ezsignformfieldgroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignformfieldgroupList) {
            ezsignformfieldgroup_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignformfieldgroupList);
        a_obj_ezsignformfieldgroupList = NULL;
    }
    return NULL;

}
