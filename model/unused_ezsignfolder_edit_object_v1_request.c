#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unused_ezsignfolder_edit_object_v1_request.h"



unused_ezsignfolder_edit_object_v1_request_t *unused_ezsignfolder_edit_object_v1_request_create(
    ezsignfolder_request_t *obj_ezsignfolder
    ) {
    unused_ezsignfolder_edit_object_v1_request_t *unused_ezsignfolder_edit_object_v1_request_local_var = malloc(sizeof(unused_ezsignfolder_edit_object_v1_request_t));
    if (!unused_ezsignfolder_edit_object_v1_request_local_var) {
        return NULL;
    }
    unused_ezsignfolder_edit_object_v1_request_local_var->obj_ezsignfolder = obj_ezsignfolder;

    return unused_ezsignfolder_edit_object_v1_request_local_var;
}


void unused_ezsignfolder_edit_object_v1_request_free(unused_ezsignfolder_edit_object_v1_request_t *unused_ezsignfolder_edit_object_v1_request) {
    if(NULL == unused_ezsignfolder_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (unused_ezsignfolder_edit_object_v1_request->obj_ezsignfolder) {
        ezsignfolder_request_free(unused_ezsignfolder_edit_object_v1_request->obj_ezsignfolder);
        unused_ezsignfolder_edit_object_v1_request->obj_ezsignfolder = NULL;
    }
    free(unused_ezsignfolder_edit_object_v1_request);
}

cJSON *unused_ezsignfolder_edit_object_v1_request_convertToJSON(unused_ezsignfolder_edit_object_v1_request_t *unused_ezsignfolder_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // unused_ezsignfolder_edit_object_v1_request->obj_ezsignfolder
    if(unused_ezsignfolder_edit_object_v1_request->obj_ezsignfolder) { 
    cJSON *obj_ezsignfolder_local_JSON = ezsignfolder_request_convertToJSON(unused_ezsignfolder_edit_object_v1_request->obj_ezsignfolder);
    if(obj_ezsignfolder_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfolder", obj_ezsignfolder_local_JSON);
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

unused_ezsignfolder_edit_object_v1_request_t *unused_ezsignfolder_edit_object_v1_request_parseFromJSON(cJSON *unused_ezsignfolder_edit_object_v1_requestJSON){

    unused_ezsignfolder_edit_object_v1_request_t *unused_ezsignfolder_edit_object_v1_request_local_var = NULL;

    // define the local variable for unused_ezsignfolder_edit_object_v1_request->obj_ezsignfolder
    ezsignfolder_request_t *obj_ezsignfolder_local_nonprim = NULL;

    // unused_ezsignfolder_edit_object_v1_request->obj_ezsignfolder
    cJSON *obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(unused_ezsignfolder_edit_object_v1_requestJSON, "objEzsignfolder");
    if (obj_ezsignfolder) { 
    obj_ezsignfolder_local_nonprim = ezsignfolder_request_parseFromJSON(obj_ezsignfolder); //nonprimitive
    }


    unused_ezsignfolder_edit_object_v1_request_local_var = unused_ezsignfolder_edit_object_v1_request_create (
        obj_ezsignfolder ? obj_ezsignfolder_local_nonprim : NULL
        );

    return unused_ezsignfolder_edit_object_v1_request_local_var;
end:
    if (obj_ezsignfolder_local_nonprim) {
        ezsignfolder_request_free(obj_ezsignfolder_local_nonprim);
        obj_ezsignfolder_local_nonprim = NULL;
    }
    return NULL;

}
