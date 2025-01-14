#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supply_create_object_v1_request.h"



supply_create_object_v1_request_t *supply_create_object_v1_request_create(
    list_t *a_obj_supply
    ) {
    supply_create_object_v1_request_t *supply_create_object_v1_request_local_var = malloc(sizeof(supply_create_object_v1_request_t));
    if (!supply_create_object_v1_request_local_var) {
        return NULL;
    }
    supply_create_object_v1_request_local_var->a_obj_supply = a_obj_supply;

    return supply_create_object_v1_request_local_var;
}


void supply_create_object_v1_request_free(supply_create_object_v1_request_t *supply_create_object_v1_request) {
    if(NULL == supply_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (supply_create_object_v1_request->a_obj_supply) {
        list_ForEach(listEntry, supply_create_object_v1_request->a_obj_supply) {
            supply_request_compound_free(listEntry->data);
        }
        list_freeList(supply_create_object_v1_request->a_obj_supply);
        supply_create_object_v1_request->a_obj_supply = NULL;
    }
    free(supply_create_object_v1_request);
}

cJSON *supply_create_object_v1_request_convertToJSON(supply_create_object_v1_request_t *supply_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // supply_create_object_v1_request->a_obj_supply
    if (!supply_create_object_v1_request->a_obj_supply) {
        goto fail;
    }
    cJSON *a_obj_supply = cJSON_AddArrayToObject(item, "a_objSupply");
    if(a_obj_supply == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_supplyListEntry;
    if (supply_create_object_v1_request->a_obj_supply) {
    list_ForEach(a_obj_supplyListEntry, supply_create_object_v1_request->a_obj_supply) {
    cJSON *itemLocal = supply_request_compound_convertToJSON(a_obj_supplyListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_supply, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

supply_create_object_v1_request_t *supply_create_object_v1_request_parseFromJSON(cJSON *supply_create_object_v1_requestJSON){

    supply_create_object_v1_request_t *supply_create_object_v1_request_local_var = NULL;

    // define the local list for supply_create_object_v1_request->a_obj_supply
    list_t *a_obj_supplyList = NULL;

    // supply_create_object_v1_request->a_obj_supply
    cJSON *a_obj_supply = cJSON_GetObjectItemCaseSensitive(supply_create_object_v1_requestJSON, "a_objSupply");
    if (!a_obj_supply) {
        goto end;
    }

    
    cJSON *a_obj_supply_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_supply)){
        goto end; //nonprimitive container
    }

    a_obj_supplyList = list_createList();

    cJSON_ArrayForEach(a_obj_supply_local_nonprimitive,a_obj_supply )
    {
        if(!cJSON_IsObject(a_obj_supply_local_nonprimitive)){
            goto end;
        }
        supply_request_compound_t *a_obj_supplyItem = supply_request_compound_parseFromJSON(a_obj_supply_local_nonprimitive);

        list_addElement(a_obj_supplyList, a_obj_supplyItem);
    }


    supply_create_object_v1_request_local_var = supply_create_object_v1_request_create (
        a_obj_supplyList
        );

    return supply_create_object_v1_request_local_var;
end:
    if (a_obj_supplyList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_supplyList) {
            supply_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_supplyList);
        a_obj_supplyList = NULL;
    }
    return NULL;

}
