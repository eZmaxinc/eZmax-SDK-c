#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subnet_create_object_v1_request.h"



static subnet_create_object_v1_request_t *subnet_create_object_v1_request_create_internal(
    list_t *a_obj_subnet
    ) {
    subnet_create_object_v1_request_t *subnet_create_object_v1_request_local_var = malloc(sizeof(subnet_create_object_v1_request_t));
    if (!subnet_create_object_v1_request_local_var) {
        return NULL;
    }
    subnet_create_object_v1_request_local_var->a_obj_subnet = a_obj_subnet;

    subnet_create_object_v1_request_local_var->_library_owned = 1;
    return subnet_create_object_v1_request_local_var;
}

__attribute__((deprecated)) subnet_create_object_v1_request_t *subnet_create_object_v1_request_create(
    list_t *a_obj_subnet
    ) {
    return subnet_create_object_v1_request_create_internal (
        a_obj_subnet
        );
}

void subnet_create_object_v1_request_free(subnet_create_object_v1_request_t *subnet_create_object_v1_request) {
    if(NULL == subnet_create_object_v1_request){
        return ;
    }
    if(subnet_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "subnet_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (subnet_create_object_v1_request->a_obj_subnet) {
        list_ForEach(listEntry, subnet_create_object_v1_request->a_obj_subnet) {
            subnet_request_compound_free(listEntry->data);
        }
        list_freeList(subnet_create_object_v1_request->a_obj_subnet);
        subnet_create_object_v1_request->a_obj_subnet = NULL;
    }
    free(subnet_create_object_v1_request);
}

cJSON *subnet_create_object_v1_request_convertToJSON(subnet_create_object_v1_request_t *subnet_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // subnet_create_object_v1_request->a_obj_subnet
    if (!subnet_create_object_v1_request->a_obj_subnet) {
        goto fail;
    }
    cJSON *a_obj_subnet = cJSON_AddArrayToObject(item, "a_objSubnet");
    if(a_obj_subnet == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *a_obj_subnetListEntry;
    if (subnet_create_object_v1_request->a_obj_subnet) {
    list_ForEach(a_obj_subnetListEntry, subnet_create_object_v1_request->a_obj_subnet) {
    cJSON *itemLocal = subnet_request_compound_convertToJSON(a_obj_subnetListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(a_obj_subnet, itemLocal);
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

subnet_create_object_v1_request_t *subnet_create_object_v1_request_parseFromJSON(cJSON *subnet_create_object_v1_requestJSON){

    subnet_create_object_v1_request_t *subnet_create_object_v1_request_local_var = NULL;

    // define the local list for subnet_create_object_v1_request->a_obj_subnet
    list_t *a_obj_subnetList = NULL;

    // subnet_create_object_v1_request->a_obj_subnet
    cJSON *a_obj_subnet = cJSON_GetObjectItemCaseSensitive(subnet_create_object_v1_requestJSON, "a_objSubnet");
    if (cJSON_IsNull(a_obj_subnet)) {
        a_obj_subnet = NULL;
    }
    if (!a_obj_subnet) {
        goto end;
    }

    
    cJSON *a_obj_subnet_local_nonprimitive = NULL;
    if(!cJSON_IsArray(a_obj_subnet)){
        goto end; //nonprimitive container
    }

    a_obj_subnetList = list_createList();

    cJSON_ArrayForEach(a_obj_subnet_local_nonprimitive,a_obj_subnet )
    {
        if(!cJSON_IsObject(a_obj_subnet_local_nonprimitive)){
            goto end;
        }
        subnet_request_compound_t *a_obj_subnetItem = subnet_request_compound_parseFromJSON(a_obj_subnet_local_nonprimitive);

        list_addElement(a_obj_subnetList, a_obj_subnetItem);
    }


    subnet_create_object_v1_request_local_var = subnet_create_object_v1_request_create_internal (
        a_obj_subnetList
        );

    return subnet_create_object_v1_request_local_var;
end:
    if (a_obj_subnetList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, a_obj_subnetList) {
            subnet_request_compound_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(a_obj_subnetList);
        a_obj_subnetList = NULL;
    }
    return NULL;

}
