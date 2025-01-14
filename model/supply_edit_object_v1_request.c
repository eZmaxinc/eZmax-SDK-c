#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "supply_edit_object_v1_request.h"



supply_edit_object_v1_request_t *supply_edit_object_v1_request_create(
    supply_request_compound_t *obj_supply
    ) {
    supply_edit_object_v1_request_t *supply_edit_object_v1_request_local_var = malloc(sizeof(supply_edit_object_v1_request_t));
    if (!supply_edit_object_v1_request_local_var) {
        return NULL;
    }
    supply_edit_object_v1_request_local_var->obj_supply = obj_supply;

    return supply_edit_object_v1_request_local_var;
}


void supply_edit_object_v1_request_free(supply_edit_object_v1_request_t *supply_edit_object_v1_request) {
    if(NULL == supply_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (supply_edit_object_v1_request->obj_supply) {
        supply_request_compound_free(supply_edit_object_v1_request->obj_supply);
        supply_edit_object_v1_request->obj_supply = NULL;
    }
    free(supply_edit_object_v1_request);
}

cJSON *supply_edit_object_v1_request_convertToJSON(supply_edit_object_v1_request_t *supply_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // supply_edit_object_v1_request->obj_supply
    if (!supply_edit_object_v1_request->obj_supply) {
        goto fail;
    }
    cJSON *obj_supply_local_JSON = supply_request_compound_convertToJSON(supply_edit_object_v1_request->obj_supply);
    if(obj_supply_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSupply", obj_supply_local_JSON);
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

supply_edit_object_v1_request_t *supply_edit_object_v1_request_parseFromJSON(cJSON *supply_edit_object_v1_requestJSON){

    supply_edit_object_v1_request_t *supply_edit_object_v1_request_local_var = NULL;

    // define the local variable for supply_edit_object_v1_request->obj_supply
    supply_request_compound_t *obj_supply_local_nonprim = NULL;

    // supply_edit_object_v1_request->obj_supply
    cJSON *obj_supply = cJSON_GetObjectItemCaseSensitive(supply_edit_object_v1_requestJSON, "objSupply");
    if (!obj_supply) {
        goto end;
    }

    
    obj_supply_local_nonprim = supply_request_compound_parseFromJSON(obj_supply); //nonprimitive


    supply_edit_object_v1_request_local_var = supply_edit_object_v1_request_create (
        obj_supply_local_nonprim
        );

    return supply_edit_object_v1_request_local_var;
end:
    if (obj_supply_local_nonprim) {
        supply_request_compound_free(obj_supply_local_nonprim);
        obj_supply_local_nonprim = NULL;
    }
    return NULL;

}
