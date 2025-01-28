#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateformfieldgroup_create_object_v1_request.h"



static ezsigntemplateformfieldgroup_create_object_v1_request_t *ezsigntemplateformfieldgroup_create_object_v1_request_create_internal(
    list_t *a_obj_ezsigntemplateformfieldgroup
    ) {
    ezsigntemplateformfieldgroup_create_object_v1_request_t *ezsigntemplateformfieldgroup_create_object_v1_request_local_var = malloc(sizeof(ezsigntemplateformfieldgroup_create_object_v1_request_t));
    if (!ezsigntemplateformfieldgroup_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplateformfieldgroup_create_object_v1_request_local_var->a_obj_ezsigntemplateformfieldgroup = a_obj_ezsigntemplateformfieldgroup;

    ezsigntemplateformfieldgroup_create_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplateformfieldgroup_create_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplateformfieldgroup_create_object_v1_request_t *ezsigntemplateformfieldgroup_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplateformfieldgroup
    ) {
    return ezsigntemplateformfieldgroup_create_object_v1_request_create_internal (
        a_obj_ezsigntemplateformfieldgroup
        );
}

void ezsigntemplateformfieldgroup_create_object_v1_request_free(ezsigntemplateformfieldgroup_create_object_v1_request_t *ezsigntemplateformfieldgroup_create_object_v1_request) {
    if(NULL == ezsigntemplateformfieldgroup_create_object_v1_request){
        return ;
    }
    if(ezsigntemplateformfieldgroup_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateformfieldgroup_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateformfieldgroup_create_object_v1_request->a_obj_ezsigntemplateformfieldgroup) {
        list_ForEach(listEntry, ezsigntemplateformfieldgroup_create_object_v1_request->a_obj_ezsigntemplateformfieldgroup) {
            ezsigntemplateformfieldgroup_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplateformfieldgroup_create_object_v1_request->a_obj_ezsigntemplateformfieldgroup);
        ezsigntemplateformfieldgroup_create_object_v1_request->a_obj_ezsigntemplateformfieldgroup = NULL;
    }
    free(ezsigntemplateformfieldgroup_create_object_v1_request);
}

cJSON *ezsigntemplateformfieldgroup_create_object_v1_request_convertToJSON(ezsigntemplateformfieldgroup_create_object_v1_request_t *ezsigntemplateformfieldgroup_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateformfieldgroup_create_object_v1_request->a_obj_ezsigntemplateformfieldgroup
    if (!ezsigntemplateformfieldgroup_create_object_v1_request->a_obj_ezsigntemplateformfieldgroup) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplateformfieldgroup = cJSON_AddArrayToObject(item, "a_objEzsigntemplateformfieldgroup");
    if(a_obj_ezsigntemplateformfieldgroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplateformfieldgroupListEntry;
    if (ezsigntemplateformfieldgroup_create_object_v1_request->a_obj_ezsigntemplateformfieldgroup) {
    list_ForEach(a_obj_ezsigntemplateformfieldgroupListEntry, ezsigntemplateformfieldgroup_create_object_v1_request->a_obj_ezsigntemplateformfieldgroup) {
    cJSON *itemLocal = ezsigntemplateformfieldgroup_request_compound_convertToJSON(a_obj_ezsigntemplateformfieldgroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplateformfieldgroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplateformfieldgroup_create_object_v1_request_t *ezsigntemplateformfieldgroup_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplateformfieldgroup_create_object_v1_requestJSON){

    ezsigntemplateformfieldgroup_create_object_v1_request_t *ezsigntemplateformfieldgroup_create_object_v1_request_local_var = NULL;

    // define the local list for ezsigntemplateformfieldgroup_create_object_v1_request->a_obj_ezsigntemplateformfieldgroup
    list_t *a_obj_ezsigntemplateformfieldgroupList = NULL;

    // ezsigntemplateformfieldgroup_create_object_v1_request->a_obj_ezsigntemplateformfieldgroup
    cJSON *a_obj_ezsigntemplateformfieldgroup = cJSON_GetObjectItemCaseSensitive(ezsigntemplateformfieldgroup_create_object_v1_requestJSON, "a_objEzsigntemplateformfieldgroup");
    if (cJSON_IsNull(a_obj_ezsigntemplateformfieldgroup)) {
        a_obj_ezsigntemplateformfieldgroup = NULL;
    }
    if (!a_obj_ezsigntemplateformfieldgroup) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplateformfieldgroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplateformfieldgroup)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplateformfieldgroupList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplateformfieldgroup_local_nonprimitive,a_obj_ezsigntemplateformfieldgroup )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplateformfieldgroup_local_nonprimitive)){
            goto end;
        }
        ezsigntemplateformfieldgroup_request_compound_t *a_obj_ezsigntemplateformfieldgroupItem = ezsigntemplateformfieldgroup_request_compound_parseFromJSON(a_obj_ezsigntemplateformfieldgroup_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplateformfieldgroupList, a_obj_ezsigntemplateformfieldgroupItem);
    }


    ezsigntemplateformfieldgroup_create_object_v1_request_local_var = ezsigntemplateformfieldgroup_create_object_v1_request_create_internal (
        a_obj_ezsigntemplateformfieldgroupList
        );

    return ezsigntemplateformfieldgroup_create_object_v1_request_local_var;
end:
    if (a_obj_ezsigntemplateformfieldgroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplateformfieldgroupList) {
            ezsigntemplateformfieldgroup_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplateformfieldgroupList);
        a_obj_ezsigntemplateformfieldgroupList = NULL;
    }
    return NULL;

}
