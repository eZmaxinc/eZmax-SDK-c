#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignformfieldgroup_create_object_v1_request.h"



ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request_create(
    list_t *a_obj_ezsignformfieldgroup
    ) {
    ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request_local_var = malloc(sizeof(ezsignformfieldgroup_create_object_v1_request_t));
    if (!ezsignformfieldgroup_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignformfieldgroup_create_object_v1_request_local_var->a_obj_ezsignformfieldgroup = a_obj_ezsignformfieldgroup;

    return ezsignformfieldgroup_create_object_v1_request_local_var;
}


void ezsignformfieldgroup_create_object_v1_request_free(ezsignformfieldgroup_create_object_v1_request_t *ezsignformfieldgroup_create_object_v1_request) {
    if(NULL == ezsignformfieldgroup_create_object_v1_request){
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

    // ezsignformfieldgroup_create_object_v1_request->a_obj_ezsignformfieldgroup
    cJSON *a_obj_ezsignformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsignformfieldgroup_create_object_v1_requestJSON, "a_objEzsignformfieldgroup");
    if (!a_obj_ezsignformfieldgroup) {
        goto end;
    }

    list_t *a_obj_ezsignformfieldgroupList;
    
    cJSON *a_obj_ezsignformfieldgroup_local_nonprimitive;
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


    ezsignformfieldgroup_create_object_v1_request_local_var = ezsignformfieldgroup_create_object_v1_request_create (
        a_obj_ezsignformfieldgroupList
        );

    return ezsignformfieldgroup_create_object_v1_request_local_var;
end:
    return NULL;

}
