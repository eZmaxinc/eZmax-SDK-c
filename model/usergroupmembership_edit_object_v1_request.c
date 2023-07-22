#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_edit_object_v1_request.h"



usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request_create(
    usergroupmembership_request_compound_t *obj_usergroupmembership
    ) {
    usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request_local_var = malloc(sizeof(usergroupmembership_edit_object_v1_request_t));
    if (!usergroupmembership_edit_object_v1_request_local_var) {
        return NULL;
    }
    usergroupmembership_edit_object_v1_request_local_var->obj_usergroupmembership = obj_usergroupmembership;

    return usergroupmembership_edit_object_v1_request_local_var;
}


void usergroupmembership_edit_object_v1_request_free(usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request) {
    if(NULL == usergroupmembership_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupmembership_edit_object_v1_request->obj_usergroupmembership) {
        usergroupmembership_request_compound_free(usergroupmembership_edit_object_v1_request->obj_usergroupmembership);
        usergroupmembership_edit_object_v1_request->obj_usergroupmembership = NULL;
    }
    free(usergroupmembership_edit_object_v1_request);
}

cJSON *usergroupmembership_edit_object_v1_request_convertToJSON(usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // usergroupmembership_edit_object_v1_request->obj_usergroupmembership
    if (!usergroupmembership_edit_object_v1_request->obj_usergroupmembership) {
        goto fail;
    }
    cJSON *obj_usergroupmembership_local_JSON = usergroupmembership_request_compound_convertToJSON(usergroupmembership_edit_object_v1_request->obj_usergroupmembership);
    if(obj_usergroupmembership_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUsergroupmembership", obj_usergroupmembership_local_JSON);
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

usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request_parseFromJSON(cJSON *usergroupmembership_edit_object_v1_requestJSON){

    usergroupmembership_edit_object_v1_request_t *usergroupmembership_edit_object_v1_request_local_var = NULL;

    // define the local variable for usergroupmembership_edit_object_v1_request->obj_usergroupmembership
    usergroupmembership_request_compound_t *obj_usergroupmembership_local_nonprim = NULL;

    // usergroupmembership_edit_object_v1_request->obj_usergroupmembership
    cJSON *obj_usergroupmembership = cJSON_GetObjectItemCaseSensitive(usergroupmembership_edit_object_v1_requestJSON, "objUsergroupmembership");
    if (!obj_usergroupmembership) {
        goto end;
    }

    
    obj_usergroupmembership_local_nonprim = usergroupmembership_request_compound_parseFromJSON(obj_usergroupmembership); //nonprimitive


    usergroupmembership_edit_object_v1_request_local_var = usergroupmembership_edit_object_v1_request_create (
        obj_usergroupmembership_local_nonprim
        );

    return usergroupmembership_edit_object_v1_request_local_var;
end:
    if (obj_usergroupmembership_local_nonprim) {
        usergroupmembership_request_compound_free(obj_usergroupmembership_local_nonprim);
        obj_usergroupmembership_local_nonprim = NULL;
    }
    return NULL;

}
