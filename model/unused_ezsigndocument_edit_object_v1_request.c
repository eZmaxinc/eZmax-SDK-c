#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unused_ezsigndocument_edit_object_v1_request.h"



unused_ezsigndocument_edit_object_v1_request_t *unused_ezsigndocument_edit_object_v1_request_create(
    ezsigndocument_request_t *obj_ezsigndocument
    ) {
    unused_ezsigndocument_edit_object_v1_request_t *unused_ezsigndocument_edit_object_v1_request_local_var = malloc(sizeof(unused_ezsigndocument_edit_object_v1_request_t));
    if (!unused_ezsigndocument_edit_object_v1_request_local_var) {
        return NULL;
    }
    unused_ezsigndocument_edit_object_v1_request_local_var->obj_ezsigndocument = obj_ezsigndocument;

    return unused_ezsigndocument_edit_object_v1_request_local_var;
}


void unused_ezsigndocument_edit_object_v1_request_free(unused_ezsigndocument_edit_object_v1_request_t *unused_ezsigndocument_edit_object_v1_request) {
    if(NULL == unused_ezsigndocument_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (unused_ezsigndocument_edit_object_v1_request->obj_ezsigndocument) {
        ezsigndocument_request_free(unused_ezsigndocument_edit_object_v1_request->obj_ezsigndocument);
        unused_ezsigndocument_edit_object_v1_request->obj_ezsigndocument = NULL;
    }
    free(unused_ezsigndocument_edit_object_v1_request);
}

cJSON *unused_ezsigndocument_edit_object_v1_request_convertToJSON(unused_ezsigndocument_edit_object_v1_request_t *unused_ezsigndocument_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // unused_ezsigndocument_edit_object_v1_request->obj_ezsigndocument
    if(unused_ezsigndocument_edit_object_v1_request->obj_ezsigndocument) { 
    cJSON *obj_ezsigndocument_local_JSON = ezsigndocument_request_convertToJSON(unused_ezsigndocument_edit_object_v1_request->obj_ezsigndocument);
    if(obj_ezsigndocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigndocument", obj_ezsigndocument_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

unused_ezsigndocument_edit_object_v1_request_t *unused_ezsigndocument_edit_object_v1_request_parseFromJSON(cJSON *unused_ezsigndocument_edit_object_v1_requestJSON){

    unused_ezsigndocument_edit_object_v1_request_t *unused_ezsigndocument_edit_object_v1_request_local_var = NULL;

    // define the local variable for unused_ezsigndocument_edit_object_v1_request->obj_ezsigndocument
    ezsigndocument_request_t *obj_ezsigndocument_local_nonprim = NULL;

    // unused_ezsigndocument_edit_object_v1_request->obj_ezsigndocument
    cJSON *obj_ezsigndocument = cJSON_GetObjectItemCaseSensitive(unused_ezsigndocument_edit_object_v1_requestJSON, "objEzsigndocument");
    if (obj_ezsigndocument) { 
    obj_ezsigndocument_local_nonprim = ezsigndocument_request_parseFromJSON(obj_ezsigndocument); //nonprimitive
    }


    unused_ezsigndocument_edit_object_v1_request_local_var = unused_ezsigndocument_edit_object_v1_request_create (
        obj_ezsigndocument ? obj_ezsigndocument_local_nonprim : NULL
        );

    return unused_ezsigndocument_edit_object_v1_request_local_var;
end:
    if (obj_ezsigndocument_local_nonprim) {
        ezsigndocument_request_free(obj_ezsigndocument_local_nonprim);
        obj_ezsigndocument_local_nonprim = NULL;
    }
    return NULL;

}
