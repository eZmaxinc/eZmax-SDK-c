#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_create_object_v1_request.h"



static ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request_create_internal(
    list_t *a_obj_ezsignsignergroup
    ) {
    ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request_local_var = malloc(sizeof(ezsignsignergroup_create_object_v1_request_t));
    if (!ezsignsignergroup_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignsignergroup_create_object_v1_request_local_var->a_obj_ezsignsignergroup = a_obj_ezsignsignergroup;

    ezsignsignergroup_create_object_v1_request_local_var->_library_owned = 1;
    return ezsignsignergroup_create_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request_create(
    list_t *a_obj_ezsignsignergroup
    ) {
    return ezsignsignergroup_create_object_v1_request_create_internal (
        a_obj_ezsignsignergroup
        );
}

void ezsignsignergroup_create_object_v1_request_free(ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request) {
    if(NULL == ezsignsignergroup_create_object_v1_request){
        return ;
    }
    if(ezsignsignergroup_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignergroup_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroup_create_object_v1_request->a_obj_ezsignsignergroup) {
        list_ForEach(listEntry, ezsignsignergroup_create_object_v1_request->a_obj_ezsignsignergroup) {
            ezsignsignergroup_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignsignergroup_create_object_v1_request->a_obj_ezsignsignergroup);
        ezsignsignergroup_create_object_v1_request->a_obj_ezsignsignergroup = NULL;
    }
    free(ezsignsignergroup_create_object_v1_request);
}

cJSON *ezsignsignergroup_create_object_v1_request_convertToJSON(ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_create_object_v1_request->a_obj_ezsignsignergroup
    if (!ezsignsignergroup_create_object_v1_request->a_obj_ezsignsignergroup) {
        goto fail;
    }
    cJSON *a_obj_ezsignsignergroup = cJSON_AddArrayToObject(item, "a_objEzsignsignergroup");
    if(a_obj_ezsignsignergroup == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignergroupListEntry;
    if (ezsignsignergroup_create_object_v1_request->a_obj_ezsignsignergroup) {
    list_ForEach(a_obj_ezsignsignergroupListEntry, ezsignsignergroup_create_object_v1_request->a_obj_ezsignsignergroup) {
    cJSON *itemLocal = ezsignsignergroup_request_compound_convertToJSON(a_obj_ezsignsignergroupListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignergroup, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request_parseFromJSON(cJSON *ezsignsignergroup_create_object_v1_requestJSON){

    ezsignsignergroup_create_object_v1_request_t *ezsignsignergroup_create_object_v1_request_local_var = NULL;

    // define the local list for ezsignsignergroup_create_object_v1_request->a_obj_ezsignsignergroup
    list_t *a_obj_ezsignsignergroupList = NULL;

    // ezsignsignergroup_create_object_v1_request->a_obj_ezsignsignergroup
    cJSON *a_obj_ezsignsignergroup = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_create_object_v1_requestJSON, "a_objEzsignsignergroup");
    if (cJSON_IsNull(a_obj_ezsignsignergroup)) {
        a_obj_ezsignsignergroup = NULL;
    }
    if (!a_obj_ezsignsignergroup) {
        goto end;
    }

    
    cJSON *a_obj_ezsignsignergroup_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsignergroup)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignergroupList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignergroup_local_nonprimitive,a_obj_ezsignsignergroup )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignergroup_local_nonprimitive)){
            goto end;
        }
        ezsignsignergroup_request_compound_t *a_obj_ezsignsignergroupItem = ezsignsignergroup_request_compound_parseFromJSON(a_obj_ezsignsignergroup_local_nonprimitive);

        list_addElement(a_obj_ezsignsignergroupList, a_obj_ezsignsignergroupItem);
    }


    ezsignsignergroup_create_object_v1_request_local_var = ezsignsignergroup_create_object_v1_request_create_internal (
        a_obj_ezsignsignergroupList
        );

    return ezsignsignergroup_create_object_v1_request_local_var;
end:
    if (a_obj_ezsignsignergroupList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignergroupList) {
            ezsignsignergroup_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignergroupList);
        a_obj_ezsignsignergroupList = NULL;
    }
    return NULL;

}
