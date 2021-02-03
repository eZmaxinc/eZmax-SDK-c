#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_edit_object_v1_request.h"



ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request_create(
    ezsigndocument_request_t *obj_ezsigndocument
    ) {
    ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request_local_var = malloc(sizeof(ezsigndocument_edit_object_v1_request_t));
    if (!ezsigndocument_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_edit_object_v1_request_local_var->obj_ezsigndocument = obj_ezsigndocument;

    return ezsigndocument_edit_object_v1_request_local_var;
}


void ezsigndocument_edit_object_v1_request_free(ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request) {
    if(NULL == ezsigndocument_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_edit_object_v1_request->obj_ezsigndocument) {
        ezsigndocument_request_free(ezsigndocument_edit_object_v1_request->obj_ezsigndocument);
        ezsigndocument_edit_object_v1_request->obj_ezsigndocument = NULL;
    }
    free(ezsigndocument_edit_object_v1_request);
}

cJSON *ezsigndocument_edit_object_v1_request_convertToJSON(ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_edit_object_v1_request->obj_ezsigndocument
    if(ezsigndocument_edit_object_v1_request->obj_ezsigndocument) { 
    cJSON *obj_ezsigndocument_local_JSON = ezsigndocument_request_convertToJSON(ezsigndocument_edit_object_v1_request->obj_ezsigndocument);
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

ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request_parseFromJSON(cJSON *ezsigndocument_edit_object_v1_requestJSON){

    ezsigndocument_edit_object_v1_request_t *ezsigndocument_edit_object_v1_request_local_var = NULL;

    // ezsigndocument_edit_object_v1_request->obj_ezsigndocument
    cJSON *obj_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsigndocument_edit_object_v1_requestJSON, "objEzsigndocument");
    ezsigndocument_request_t *obj_ezsigndocument_local_nonprim = NULL;
    if (obj_ezsigndocument) { 
    obj_ezsigndocument_local_nonprim = ezsigndocument_request_parseFromJSON(obj_ezsigndocument); //nonprimitive
    }


    ezsigndocument_edit_object_v1_request_local_var = ezsigndocument_edit_object_v1_request_create (
        obj_ezsigndocument ? obj_ezsigndocument_local_nonprim : NULL
        );

    return ezsigndocument_edit_object_v1_request_local_var;
end:
    if (obj_ezsigndocument_local_nonprim) {
        ezsigndocument_request_free(obj_ezsigndocument_local_nonprim);
        obj_ezsigndocument_local_nonprim = NULL;
    }
    return NULL;

}
