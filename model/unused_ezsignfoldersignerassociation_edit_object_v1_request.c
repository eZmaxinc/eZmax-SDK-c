#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "unused_ezsignfoldersignerassociation_edit_object_v1_request.h"



unused_ezsignfoldersignerassociation_edit_object_v1_request_t *unused_ezsignfoldersignerassociation_edit_object_v1_request_create(
    ezsignfoldersignerassociation_request_t *obj_ezsignfoldersignerassociation
    ) {
    unused_ezsignfoldersignerassociation_edit_object_v1_request_t *unused_ezsignfoldersignerassociation_edit_object_v1_request_local_var = malloc(sizeof(unused_ezsignfoldersignerassociation_edit_object_v1_request_t));
    if (!unused_ezsignfoldersignerassociation_edit_object_v1_request_local_var) {
        return NULL;
    }
    unused_ezsignfoldersignerassociation_edit_object_v1_request_local_var->obj_ezsignfoldersignerassociation = obj_ezsignfoldersignerassociation;

    return unused_ezsignfoldersignerassociation_edit_object_v1_request_local_var;
}


void unused_ezsignfoldersignerassociation_edit_object_v1_request_free(unused_ezsignfoldersignerassociation_edit_object_v1_request_t *unused_ezsignfoldersignerassociation_edit_object_v1_request) {
    if(NULL == unused_ezsignfoldersignerassociation_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (unused_ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation) {
        ezsignfoldersignerassociation_request_free(unused_ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation);
        unused_ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation = NULL;
    }
    free(unused_ezsignfoldersignerassociation_edit_object_v1_request);
}

cJSON *unused_ezsignfoldersignerassociation_edit_object_v1_request_convertToJSON(unused_ezsignfoldersignerassociation_edit_object_v1_request_t *unused_ezsignfoldersignerassociation_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // unused_ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation
    if(unused_ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation) { 
    cJSON *obj_ezsignfoldersignerassociation_local_JSON = ezsignfoldersignerassociation_request_convertToJSON(unused_ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation);
    if(obj_ezsignfoldersignerassociation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldersignerassociation", obj_ezsignfoldersignerassociation_local_JSON);
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

unused_ezsignfoldersignerassociation_edit_object_v1_request_t *unused_ezsignfoldersignerassociation_edit_object_v1_request_parseFromJSON(cJSON *unused_ezsignfoldersignerassociation_edit_object_v1_requestJSON){

    unused_ezsignfoldersignerassociation_edit_object_v1_request_t *unused_ezsignfoldersignerassociation_edit_object_v1_request_local_var = NULL;

    // unused_ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation
    cJSON *obj_ezsignfoldersignerassociation = cJSON_GetObjectItemCaseSensitive(unused_ezsignfoldersignerassociation_edit_object_v1_requestJSON, "objEzsignfoldersignerassociation");
    ezsignfoldersignerassociation_request_t *obj_ezsignfoldersignerassociation_local_nonprim = NULL;
    if (obj_ezsignfoldersignerassociation) { 
    obj_ezsignfoldersignerassociation_local_nonprim = ezsignfoldersignerassociation_request_parseFromJSON(obj_ezsignfoldersignerassociation); //nonprimitive
    }


    unused_ezsignfoldersignerassociation_edit_object_v1_request_local_var = unused_ezsignfoldersignerassociation_edit_object_v1_request_create (
        obj_ezsignfoldersignerassociation ? obj_ezsignfoldersignerassociation_local_nonprim : NULL
        );

    return unused_ezsignfoldersignerassociation_edit_object_v1_request_local_var;
end:
    if (obj_ezsignfoldersignerassociation_local_nonprim) {
        ezsignfoldersignerassociation_request_free(obj_ezsignfoldersignerassociation_local_nonprim);
        obj_ezsignfoldersignerassociation_local_nonprim = NULL;
    }
    return NULL;

}
