#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "subnet_edit_object_v1_request.h"



subnet_edit_object_v1_request_t *subnet_edit_object_v1_request_create(
    subnet_request_compound_t *obj_subnet
    ) {
    subnet_edit_object_v1_request_t *subnet_edit_object_v1_request_local_var = malloc(sizeof(subnet_edit_object_v1_request_t));
    if (!subnet_edit_object_v1_request_local_var) {
        return NULL;
    }
    subnet_edit_object_v1_request_local_var->obj_subnet = obj_subnet;

    return subnet_edit_object_v1_request_local_var;
}


void subnet_edit_object_v1_request_free(subnet_edit_object_v1_request_t *subnet_edit_object_v1_request) {
    if(NULL == subnet_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (subnet_edit_object_v1_request->obj_subnet) {
        subnet_request_compound_free(subnet_edit_object_v1_request->obj_subnet);
        subnet_edit_object_v1_request->obj_subnet = NULL;
    }
    free(subnet_edit_object_v1_request);
}

cJSON *subnet_edit_object_v1_request_convertToJSON(subnet_edit_object_v1_request_t *subnet_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // subnet_edit_object_v1_request->obj_subnet
    if (!subnet_edit_object_v1_request->obj_subnet) {
        goto fail;
    }
    cJSON *obj_subnet_local_JSON = subnet_request_compound_convertToJSON(subnet_edit_object_v1_request->obj_subnet);
    if(obj_subnet_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSubnet", obj_subnet_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

subnet_edit_object_v1_request_t *subnet_edit_object_v1_request_parseFromJSON(cJSON *subnet_edit_object_v1_requestJSON){

    subnet_edit_object_v1_request_t *subnet_edit_object_v1_request_local_var = NULL;

    // define the local variable for subnet_edit_object_v1_request->obj_subnet
    subnet_request_compound_t *obj_subnet_local_nonprim = NULL;

    // subnet_edit_object_v1_request->obj_subnet
    cJSON *obj_subnet = cJSON_GetObjectItemCaseSensitive(subnet_edit_object_v1_requestJSON, "objSubnet");
    if (!obj_subnet) {
        goto end;
    }

    
    obj_subnet_local_nonprim = subnet_request_compound_parseFromJSON(obj_subnet); //nonprimitive


    subnet_edit_object_v1_request_local_var = subnet_edit_object_v1_request_create (
        obj_subnet_local_nonprim
        );

    return subnet_edit_object_v1_request_local_var;
end:
    if (obj_subnet_local_nonprim) {
        subnet_request_compound_free(obj_subnet_local_nonprim);
        obj_subnet_local_nonprim = NULL;
    }
    return NULL;

}
