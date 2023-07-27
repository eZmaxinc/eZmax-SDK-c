#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cors_edit_object_v1_request.h"



cors_edit_object_v1_request_t *cors_edit_object_v1_request_create(
    cors_request_compound_t *obj_cors
    ) {
    cors_edit_object_v1_request_t *cors_edit_object_v1_request_local_var = malloc(sizeof(cors_edit_object_v1_request_t));
    if (!cors_edit_object_v1_request_local_var) {
        return NULL;
    }
    cors_edit_object_v1_request_local_var->obj_cors = obj_cors;

    return cors_edit_object_v1_request_local_var;
}


void cors_edit_object_v1_request_free(cors_edit_object_v1_request_t *cors_edit_object_v1_request) {
    if(NULL == cors_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (cors_edit_object_v1_request->obj_cors) {
        cors_request_compound_free(cors_edit_object_v1_request->obj_cors);
        cors_edit_object_v1_request->obj_cors = NULL;
    }
    free(cors_edit_object_v1_request);
}

cJSON *cors_edit_object_v1_request_convertToJSON(cors_edit_object_v1_request_t *cors_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // cors_edit_object_v1_request->obj_cors
    if (!cors_edit_object_v1_request->obj_cors) {
        goto fail;
    }
    cJSON *obj_cors_local_JSON = cors_request_compound_convertToJSON(cors_edit_object_v1_request->obj_cors);
    if(obj_cors_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objCors", obj_cors_local_JSON);
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

cors_edit_object_v1_request_t *cors_edit_object_v1_request_parseFromJSON(cJSON *cors_edit_object_v1_requestJSON){

    cors_edit_object_v1_request_t *cors_edit_object_v1_request_local_var = NULL;

    // define the local variable for cors_edit_object_v1_request->obj_cors
    cors_request_compound_t *obj_cors_local_nonprim = NULL;

    // cors_edit_object_v1_request->obj_cors
    cJSON *obj_cors = cJSON_GetObjectItemCaseSensitive(cors_edit_object_v1_requestJSON, "objCors");
    if (!obj_cors) {
        goto end;
    }

    
    obj_cors_local_nonprim = cors_request_compound_parseFromJSON(obj_cors); //nonprimitive


    cors_edit_object_v1_request_local_var = cors_edit_object_v1_request_create (
        obj_cors_local_nonprim
        );

    return cors_edit_object_v1_request_local_var;
end:
    if (obj_cors_local_nonprim) {
        cors_request_compound_free(obj_cors_local_nonprim);
        obj_cors_local_nonprim = NULL;
    }
    return NULL;

}
