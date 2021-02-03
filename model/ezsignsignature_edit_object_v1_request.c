#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_edit_object_v1_request.h"



ezsignsignature_edit_object_v1_request_t *ezsignsignature_edit_object_v1_request_create(
    ezsignsignature_request_t *obj_ezsignsignature
    ) {
    ezsignsignature_edit_object_v1_request_t *ezsignsignature_edit_object_v1_request_local_var = malloc(sizeof(ezsignsignature_edit_object_v1_request_t));
    if (!ezsignsignature_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsignsignature_edit_object_v1_request_local_var->obj_ezsignsignature = obj_ezsignsignature;

    return ezsignsignature_edit_object_v1_request_local_var;
}


void ezsignsignature_edit_object_v1_request_free(ezsignsignature_edit_object_v1_request_t *ezsignsignature_edit_object_v1_request) {
    if(NULL == ezsignsignature_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_edit_object_v1_request->obj_ezsignsignature) {
        ezsignsignature_request_free(ezsignsignature_edit_object_v1_request->obj_ezsignsignature);
        ezsignsignature_edit_object_v1_request->obj_ezsignsignature = NULL;
    }
    free(ezsignsignature_edit_object_v1_request);
}

cJSON *ezsignsignature_edit_object_v1_request_convertToJSON(ezsignsignature_edit_object_v1_request_t *ezsignsignature_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_edit_object_v1_request->obj_ezsignsignature
    if(ezsignsignature_edit_object_v1_request->obj_ezsignsignature) { 
    cJSON *obj_ezsignsignature_local_JSON = ezsignsignature_request_convertToJSON(ezsignsignature_edit_object_v1_request->obj_ezsignsignature);
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

ezsignsignature_edit_object_v1_request_t *ezsignsignature_edit_object_v1_request_parseFromJSON(cJSON *ezsignsignature_edit_object_v1_requestJSON){

    ezsignsignature_edit_object_v1_request_t *ezsignsignature_edit_object_v1_request_local_var = NULL;

    // ezsignsignature_edit_object_v1_request->obj_ezsignsignature
    cJSON *obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsignsignature_edit_object_v1_requestJSON, "objEzsignsignature");
    ezsignsignature_request_t *obj_ezsignsignature_local_nonprim = NULL;
    if (obj_ezsignsignature) { 
    obj_ezsignsignature_local_nonprim = ezsignsignature_request_parseFromJSON(obj_ezsignsignature); //nonprimitive
    }


    ezsignsignature_edit_object_v1_request_local_var = ezsignsignature_edit_object_v1_request_create (
        obj_ezsignsignature ? obj_ezsignsignature_local_nonprim : NULL
        );

    return ezsignsignature_edit_object_v1_request_local_var;
end:
    if (obj_ezsignsignature_local_nonprim) {
        ezsignsignature_request_free(obj_ezsignsignature_local_nonprim);
        obj_ezsignsignature_local_nonprim = NULL;
    }
    return NULL;

}
