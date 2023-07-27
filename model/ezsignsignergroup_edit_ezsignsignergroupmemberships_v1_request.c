#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request.h"



ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_create(
    list_t *a_obj_ezsignsignergroupmembership
    ) {
    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_local_var = malloc(sizeof(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t));
    if (!ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_local_var) {
        return NULL;
    }
    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_local_var->a_obj_ezsignsignergroupmembership = a_obj_ezsignsignergroupmembership;

    return ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_local_var;
}


void ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_free(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request) {
    if(NULL == ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request->a_obj_ezsignsignergroupmembership) {
        list_ForEach(listEntry, ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request->a_obj_ezsignsignergroupmembership) {
            ezsignsignergroupmembership_request_compound_free(listEntry->data);
        }
        list_freeList(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request->a_obj_ezsignsignergroupmembership);
        ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request->a_obj_ezsignsignergroupmembership = NULL;
    }
    free(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request);
}

cJSON *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_convertToJSON(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request->a_obj_ezsignsignergroupmembership
    if (!ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request->a_obj_ezsignsignergroupmembership) {
        goto fail;
    }
    cJSON *a_obj_ezsignsignergroupmembership = cJSON_AddArrayToObject(item, "a_objEzsignsignergroupmembership");
    if(a_obj_ezsignsignergroupmembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsignsignergroupmembershipListEntry;
    if (ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request->a_obj_ezsignsignergroupmembership) {
    list_ForEach(a_obj_ezsignsignergroupmembershipListEntry, ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request->a_obj_ezsignsignergroupmembership) {
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

ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_parseFromJSON(cJSON *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_requestJSON){

    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_t *ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_local_var = NULL;

    // define the local list for ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request->a_obj_ezsignsignergroupmembership
    list_t *a_obj_ezsignsignergroupmembershipList = NULL;

    // ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request->a_obj_ezsignsignergroupmembership
    cJSON *a_obj_ezsignsignergroupmembership = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_requestJSON, "a_objEzsignsignergroupmembership");
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


    ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_local_var = ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_create (
        a_obj_ezsignsignergroupmembershipList
        );

    return ezsignsignergroup_edit_ezsignsignergroupmemberships_v1_request_local_var;
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
