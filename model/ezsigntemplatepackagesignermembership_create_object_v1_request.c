#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesignermembership_create_object_v1_request.h"



ezsigntemplatepackagesignermembership_create_object_v1_request_t *ezsigntemplatepackagesignermembership_create_object_v1_request_create(
    list_t *a_obj_ezsigntemplatepackagesignermembership
    ) {
    ezsigntemplatepackagesignermembership_create_object_v1_request_t *ezsigntemplatepackagesignermembership_create_object_v1_request_local_var = malloc(sizeof(ezsigntemplatepackagesignermembership_create_object_v1_request_t));
    if (!ezsigntemplatepackagesignermembership_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesignermembership_create_object_v1_request_local_var->a_obj_ezsigntemplatepackagesignermembership = a_obj_ezsigntemplatepackagesignermembership;

    return ezsigntemplatepackagesignermembership_create_object_v1_request_local_var;
}


void ezsigntemplatepackagesignermembership_create_object_v1_request_free(ezsigntemplatepackagesignermembership_create_object_v1_request_t *ezsigntemplatepackagesignermembership_create_object_v1_request) {
    if(NULL == ezsigntemplatepackagesignermembership_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesignermembership_create_object_v1_request->a_obj_ezsigntemplatepackagesignermembership) {
        list_ForEach(listEntry, ezsigntemplatepackagesignermembership_create_object_v1_request->a_obj_ezsigntemplatepackagesignermembership) {
            ezsigntemplatepackagesignermembership_request_compound_free(listEntry->data);
        }
        list_freeList(ezsigntemplatepackagesignermembership_create_object_v1_request->a_obj_ezsigntemplatepackagesignermembership);
        ezsigntemplatepackagesignermembership_create_object_v1_request->a_obj_ezsigntemplatepackagesignermembership = NULL;
    }
    free(ezsigntemplatepackagesignermembership_create_object_v1_request);
}

cJSON *ezsigntemplatepackagesignermembership_create_object_v1_request_convertToJSON(ezsigntemplatepackagesignermembership_create_object_v1_request_t *ezsigntemplatepackagesignermembership_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesignermembership_create_object_v1_request->a_obj_ezsigntemplatepackagesignermembership
    if (!ezsigntemplatepackagesignermembership_create_object_v1_request->a_obj_ezsigntemplatepackagesignermembership) {
        goto fail;
    }
    cJSON *a_obj_ezsigntemplatepackagesignermembership = cJSON_AddArrayToObject(item, "a_objEzsigntemplatepackagesignermembership");
    if(a_obj_ezsigntemplatepackagesignermembership == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_ezsigntemplatepackagesignermembershipListEntry;
    if (ezsigntemplatepackagesignermembership_create_object_v1_request->a_obj_ezsigntemplatepackagesignermembership) {
    list_ForEach(a_obj_ezsigntemplatepackagesignermembershipListEntry, ezsigntemplatepackagesignermembership_create_object_v1_request->a_obj_ezsigntemplatepackagesignermembership) {
    cJSON *itemLocal = ezsigntemplatepackagesignermembership_request_compound_convertToJSON(a_obj_ezsigntemplatepackagesignermembershipListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_ezsigntemplatepackagesignermembership, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackagesignermembership_create_object_v1_request_t *ezsigntemplatepackagesignermembership_create_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepackagesignermembership_create_object_v1_requestJSON){

    ezsigntemplatepackagesignermembership_create_object_v1_request_t *ezsigntemplatepackagesignermembership_create_object_v1_request_local_var = NULL;

    // define the local list for ezsigntemplatepackagesignermembership_create_object_v1_request->a_obj_ezsigntemplatepackagesignermembership
    list_t *a_obj_ezsigntemplatepackagesignermembershipList = NULL;

    // ezsigntemplatepackagesignermembership_create_object_v1_request->a_obj_ezsigntemplatepackagesignermembership
    cJSON *a_obj_ezsigntemplatepackagesignermembership = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesignermembership_create_object_v1_requestJSON, "a_objEzsigntemplatepackagesignermembership");
    if (!a_obj_ezsigntemplatepackagesignermembership) {
        goto end;
    }

    
    cJSON *a_obj_ezsigntemplatepackagesignermembership_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_ezsigntemplatepackagesignermembership)){
        goto end; //nonprimitive container
    }

    a_obj_ezsigntemplatepackagesignermembershipList = list_createList();

    cJSON_ArrayForEach(a_obj_ezsigntemplatepackagesignermembership_local_nonprimitive,a_obj_ezsigntemplatepackagesignermembership )
    {
        if(!cJSON_IsObject(a_obj_ezsigntemplatepackagesignermembership_local_nonprimitive)){
            goto end;
        }
        ezsigntemplatepackagesignermembership_request_compound_t *a_obj_ezsigntemplatepackagesignermembershipItem = ezsigntemplatepackagesignermembership_request_compound_parseFromJSON(a_obj_ezsigntemplatepackagesignermembership_local_nonprimitive);

        list_addElement(a_obj_ezsigntemplatepackagesignermembershipList, a_obj_ezsigntemplatepackagesignermembershipItem);
    }


    ezsigntemplatepackagesignermembership_create_object_v1_request_local_var = ezsigntemplatepackagesignermembership_create_object_v1_request_create (
        a_obj_ezsigntemplatepackagesignermembershipList
        );

    return ezsigntemplatepackagesignermembership_create_object_v1_request_local_var;
end:
    if (a_obj_ezsigntemplatepackagesignermembershipList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_ezsigntemplatepackagesignermembershipList) {
            ezsigntemplatepackagesignermembership_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_ezsigntemplatepackagesignermembershipList);
        a_obj_ezsigntemplatepackagesignermembershipList = NULL;
    }
    return NULL;

}
