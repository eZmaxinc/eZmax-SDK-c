#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignannotation_edit_object_v1_request.h"



ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request_create(
    ezsignannotation_request_compound_t *obj_ezsignannotation
    ) {
    ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request_local_var = malloc(sizeof(ezsignannotation_edit_object_v1_request_t));
    if (!ezsignannotation_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsignannotation_edit_object_v1_request_local_var->obj_ezsignannotation = obj_ezsignannotation;

    return ezsignannotation_edit_object_v1_request_local_var;
}


void ezsignannotation_edit_object_v1_request_free(ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request) {
    if(NULL == ezsignannotation_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignannotation_edit_object_v1_request->obj_ezsignannotation) {
        ezsignannotation_request_compound_free(ezsignannotation_edit_object_v1_request->obj_ezsignannotation);
        ezsignannotation_edit_object_v1_request->obj_ezsignannotation = NULL;
    }
    free(ezsignannotation_edit_object_v1_request);
}

cJSON *ezsignannotation_edit_object_v1_request_convertToJSON(ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignannotation_edit_object_v1_request->obj_ezsignannotation
    if (!ezsignannotation_edit_object_v1_request->obj_ezsignannotation) {
        goto fail;
    }
    cJSON *obj_ezsignannotation_local_JSON = ezsignannotation_request_compound_convertToJSON(ezsignannotation_edit_object_v1_request->obj_ezsignannotation);
    if(obj_ezsignannotation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignannotation", obj_ezsignannotation_local_JSON);
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

ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request_parseFromJSON(cJSON *ezsignannotation_edit_object_v1_requestJSON){

    ezsignannotation_edit_object_v1_request_t *ezsignannotation_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsignannotation_edit_object_v1_request->obj_ezsignannotation
    ezsignannotation_request_compound_t *obj_ezsignannotation_local_nonprim = NULL;

    // ezsignannotation_edit_object_v1_request->obj_ezsignannotation
    cJSON *obj_ezsignannotation = cJSON_GetObjectItemCaseSensitive(ezsignannotation_edit_object_v1_requestJSON, "objEzsignannotation");
    if (!obj_ezsignannotation) {
        goto end;
    }

    
    obj_ezsignannotation_local_nonprim = ezsignannotation_request_compound_parseFromJSON(obj_ezsignannotation); //nonprimitive


    ezsignannotation_edit_object_v1_request_local_var = ezsignannotation_edit_object_v1_request_create (
        obj_ezsignannotation_local_nonprim
        );

    return ezsignannotation_edit_object_v1_request_local_var;
end:
    if (obj_ezsignannotation_local_nonprim) {
        ezsignannotation_request_compound_free(obj_ezsignannotation_local_nonprim);
        obj_ezsignannotation_local_nonprim = NULL;
    }
    return NULL;

}
