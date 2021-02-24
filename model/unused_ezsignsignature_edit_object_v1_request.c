#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unused_ezsignsignature_edit_object_v1_request.h"



unused_ezsignsignature_edit_object_v1_request_t *unused_ezsignsignature_edit_object_v1_request_create(
    ezsignsignature_request_t *obj_ezsignsignature
    ) {
    unused_ezsignsignature_edit_object_v1_request_t *unused_ezsignsignature_edit_object_v1_request_local_var = malloc(sizeof(unused_ezsignsignature_edit_object_v1_request_t));
    if (!unused_ezsignsignature_edit_object_v1_request_local_var) {
        return NULL;
    }
    unused_ezsignsignature_edit_object_v1_request_local_var->obj_ezsignsignature = obj_ezsignsignature;

    return unused_ezsignsignature_edit_object_v1_request_local_var;
}


void unused_ezsignsignature_edit_object_v1_request_free(unused_ezsignsignature_edit_object_v1_request_t *unused_ezsignsignature_edit_object_v1_request) {
    if(NULL == unused_ezsignsignature_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (unused_ezsignsignature_edit_object_v1_request->obj_ezsignsignature) {
        ezsignsignature_request_free(unused_ezsignsignature_edit_object_v1_request->obj_ezsignsignature);
        unused_ezsignsignature_edit_object_v1_request->obj_ezsignsignature = NULL;
    }
    free(unused_ezsignsignature_edit_object_v1_request);
}

cJSON *unused_ezsignsignature_edit_object_v1_request_convertToJSON(unused_ezsignsignature_edit_object_v1_request_t *unused_ezsignsignature_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // unused_ezsignsignature_edit_object_v1_request->obj_ezsignsignature
    if(unused_ezsignsignature_edit_object_v1_request->obj_ezsignsignature) { 
    cJSON *obj_ezsignsignature_local_JSON = ezsignsignature_request_convertToJSON(unused_ezsignsignature_edit_object_v1_request->obj_ezsignsignature);
    if(obj_ezsignsignature_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignature", obj_ezsignsignature_local_JSON);
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

unused_ezsignsignature_edit_object_v1_request_t *unused_ezsignsignature_edit_object_v1_request_parseFromJSON(cJSON *unused_ezsignsignature_edit_object_v1_requestJSON){

    unused_ezsignsignature_edit_object_v1_request_t *unused_ezsignsignature_edit_object_v1_request_local_var = NULL;

    // unused_ezsignsignature_edit_object_v1_request->obj_ezsignsignature
    cJSON *obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(unused_ezsignsignature_edit_object_v1_requestJSON, "objEzsignsignature");
    ezsignsignature_request_t *obj_ezsignsignature_local_nonprim = NULL;
    if (obj_ezsignsignature) { 
    obj_ezsignsignature_local_nonprim = ezsignsignature_request_parseFromJSON(obj_ezsignsignature); //nonprimitive
    }


    unused_ezsignsignature_edit_object_v1_request_local_var = unused_ezsignsignature_edit_object_v1_request_create (
        obj_ezsignsignature ? obj_ezsignsignature_local_nonprim : NULL
        );

    return unused_ezsignsignature_edit_object_v1_request_local_var;
end:
    if (obj_ezsignsignature_local_nonprim) {
        ezsignsignature_request_free(obj_ezsignsignature_local_nonprim);
        obj_ezsignsignature_local_nonprim = NULL;
    }
    return NULL;

}
