#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroupmembership_create_object_v1_request.h"



static ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request_create_internal(
    list_t *a_obj_ezsignsignergroupmembership
    ) {
    ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request_local_var = malloc(sizeof(ezsignsignergroupmembership_create_object_v1_request_t));
    if (!ezsignsignergroupmembership_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignsignergroupmembership_create_object_v1_request_local_var->a_obj_ezsignsignergroupmembership = a_obj_ezsignsignergroupmembership;

    ezsignsignergroupmembership_create_object_v1_request_local_var->_library_owned = 1;
    return ezsignsignergroupmembership_create_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request_create(
    list_t *a_obj_ezsignsignergroupmembership
    ) {
    return ezsignsignergroupmembership_create_object_v1_request_create_internal (
        a_obj_ezsignsignergroupmembership
        );
}

void ezsignsignergroupmembership_create_object_v1_request_free(ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request) {
    if(NULL == ezsignsignergroupmembership_create_object_v1_request){
        return ;
    }
    if(ezsignsignergroupmembership_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignergroupmembership_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroupmembership_create_object_v1_request->a_obj_ezsignsignergroupmembership) {
        list_ForEach(listEntry, ezsignsignergroupmembership_create_object_v1_request->a_obj_ezsignsignergroupmembership) {
            ezsignsignergroupmembership_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignsignergroupmembership_create_object_v1_request->a_obj_ezsignsignergroupmembership);
        ezsignsignergroupmembership_create_object_v1_request->a_obj_ezsignsignergroupmembership = NULL;
    }
    free(ezsignsignergroupmembership_create_object_v1_request);
}

cJSON *ezsignsignergroupmembership_create_object_v1_request_convertToJSON(ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroupmembership_create_object_v1_request->a_obj_ezsignsignergroupmembership
    if (!ezsignsignergroupmembership_create_object_v1_request->a_obj_ezsignsignergroupmembership) {
        goto fail;
    }
    cJSON *a_obj_ezsignsignergroupmembership = cJSON_AddArrayToObject(item, "a_objEzsignsignergroupmembership");
    if(a_obj_ezsignsignergroupmembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignergroupmembershipListEntry;
    if (ezsignsignergroupmembership_create_object_v1_request->a_obj_ezsignsignergroupmembership) {
    list_ForEach(a_obj_ezsignsignergroupmembershipListEntry, ezsignsignergroupmembership_create_object_v1_request->a_obj_ezsignsignergroupmembership) {
    cJSON *itemLocal = ezsignsignergroupmembership_request_compound_convertToJSON(a_obj_ezsignsignergroupmembershipListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsignsignergroupmembership, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request_parseFromJSON(cJSON *ezsignsignergroupmembership_create_object_v1_requestJSON){

    ezsignsignergroupmembership_create_object_v1_request_t *ezsignsignergroupmembership_create_object_v1_request_local_var = NULL;

    // define the local list for ezsignsignergroupmembership_create_object_v1_request->a_obj_ezsignsignergroupmembership
    list_t *a_obj_ezsignsignergroupmembershipList = NULL;

    // ezsignsignergroupmembership_create_object_v1_request->a_obj_ezsignsignergroupmembership
    cJSON *a_obj_ezsignsignergroupmembership = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_create_object_v1_requestJSON, "a_objEzsignsignergroupmembership");
    if (cJSON_IsNull(a_obj_ezsignsignergroupmembership)) {
        a_obj_ezsignsignergroupmembership = NULL;
    }
    if (!a_obj_ezsignsignergroupmembership) {
        goto end;
    }

    
    cJSON *a_obj_ezsignsignergroupmembership_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsignsignergroupmembership)){
        goto end; //nonprimitive container
    }

    a_obj_ezsignsignergroupmembershipList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsignsignergroupmembership_local_nonprimitive,a_obj_ezsignsignergroupmembership )
    {
        if(!cJSON_IsObject(a_obj_ezsignsignergroupmembership_local_nonprimitive)){
            goto end;
        }
        ezsignsignergroupmembership_request_compound_t *a_obj_ezsignsignergroupmembershipItem = ezsignsignergroupmembership_request_compound_parseFromJSON(a_obj_ezsignsignergroupmembership_local_nonprimitive);

        list_addElement(a_obj_ezsignsignergroupmembershipList, a_obj_ezsignsignergroupmembershipItem);
    }


    ezsignsignergroupmembership_create_object_v1_request_local_var = ezsignsignergroupmembership_create_object_v1_request_create_internal (
        a_obj_ezsignsignergroupmembershipList
        );

    return ezsignsignergroupmembership_create_object_v1_request_local_var;
end:
    if (a_obj_ezsignsignergroupmembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsignsignergroupmembershipList) {
            ezsignsignergroupmembership_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsignsignergroupmembershipList);
        a_obj_ezsignsignergroupmembershipList = NULL;
    }
    return NULL;

}
