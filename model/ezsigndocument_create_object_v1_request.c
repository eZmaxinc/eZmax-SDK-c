#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigndocument_create_object_v1_request.h"



ezsigndocument_create_object_v1_request_t *ezsigndocument_create_object_v1_request_create(
    ezsigndocument_request_t *obj_ezsigndocument,
    ezsigndocument_request_compound_t *obj_ezsigndocument_compound
    ) {
    ezsigndocument_create_object_v1_request_t *ezsigndocument_create_object_v1_request_local_var = malloc(sizeof(ezsigndocument_create_object_v1_request_t));
    if (!ezsigndocument_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsigndocument_create_object_v1_request_local_var->obj_ezsigndocument = obj_ezsigndocument;
    ezsigndocument_create_object_v1_request_local_var->obj_ezsigndocument_compound = obj_ezsigndocument_compound;

    return ezsigndocument_create_object_v1_request_local_var;
}


void ezsigndocument_create_object_v1_request_free(ezsigndocument_create_object_v1_request_t *ezsigndocument_create_object_v1_request) {
    if(NULL == ezsigndocument_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigndocument_create_object_v1_request->obj_ezsigndocument) {
        ezsigndocument_request_free(ezsigndocument_create_object_v1_request->obj_ezsigndocument);
        ezsigndocument_create_object_v1_request->obj_ezsigndocument = NULL;
    }
    if (ezsigndocument_create_object_v1_request->obj_ezsigndocument_compound) {
        ezsigndocument_request_compound_free(ezsigndocument_create_object_v1_request->obj_ezsigndocument_compound);
        ezsigndocument_create_object_v1_request->obj_ezsigndocument_compound = NULL;
    }
    free(ezsigndocument_create_object_v1_request);
}

cJSON *ezsigndocument_create_object_v1_request_convertToJSON(ezsigndocument_create_object_v1_request_t *ezsigndocument_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigndocument_create_object_v1_request->obj_ezsigndocument
    if(ezsigndocument_create_object_v1_request->obj_ezsigndocument) {
    cJSON *obj_ezsigndocument_local_JSON = ezsigndocument_request_convertToJSON(ezsigndocument_create_object_v1_request->obj_ezsigndocument);
    if(obj_ezsigndocument_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigndocument", obj_ezsigndocument_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsigndocument_create_object_v1_request->obj_ezsigndocument_compound
    if(ezsigndocument_create_object_v1_request->obj_ezsigndocument_compound) {
    cJSON *obj_ezsigndocument_compound_local_JSON = ezsigndocument_request_compound_convertToJSON(ezsigndocument_create_object_v1_request->obj_ezsigndocument_compound);
    if(obj_ezsigndocument_compound_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigndocumentCompound", obj_ezsigndocument_compound_local_JSON);
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

ezsigndocument_create_object_v1_request_t *ezsigndocument_create_object_v1_request_parseFromJSON(cJSON *ezsigndocument_create_object_v1_requestJSON){

    ezsigndocument_create_object_v1_request_t *ezsigndocument_create_object_v1_request_local_var = NULL;

    // define the local variable for ezsigndocument_create_object_v1_request->obj_ezsigndocument
    ezsigndocument_request_t *obj_ezsigndocument_local_nonprim = NULL;

    // define the local variable for ezsigndocument_create_object_v1_request->obj_ezsigndocument_compound
    ezsigndocument_request_compound_t *obj_ezsigndocument_compound_local_nonprim = NULL;

    // ezsigndocument_create_object_v1_request->obj_ezsigndocument
    cJSON *obj_ezsigndocument = cJSON_GetObjectItemCaseSensitive(ezsigndocument_create_object_v1_requestJSON, "objEzsigndocument");
    if (obj_ezsigndocument) { 
    obj_ezsigndocument_local_nonprim = ezsigndocument_request_parseFromJSON(obj_ezsigndocument); //nonprimitive
    }

    // ezsigndocument_create_object_v1_request->obj_ezsigndocument_compound
    cJSON *obj_ezsigndocument_compound = cJSON_GetObjectItemCaseSensitive(ezsigndocument_create_object_v1_requestJSON, "objEzsigndocumentCompound");
    if (obj_ezsigndocument_compound) { 
    obj_ezsigndocument_compound_local_nonprim = ezsigndocument_request_compound_parseFromJSON(obj_ezsigndocument_compound); //nonprimitive
    }


    ezsigndocument_create_object_v1_request_local_var = ezsigndocument_create_object_v1_request_create (
        obj_ezsigndocument ? obj_ezsigndocument_local_nonprim : NULL,
        obj_ezsigndocument_compound ? obj_ezsigndocument_compound_local_nonprim : NULL
        );

    return ezsigndocument_create_object_v1_request_local_var;
end:
    if (obj_ezsigndocument_local_nonprim) {
        ezsigndocument_request_free(obj_ezsigndocument_local_nonprim);
        obj_ezsigndocument_local_nonprim = NULL;
    }
    if (obj_ezsigndocument_compound_local_nonprim) {
        ezsigndocument_request_compound_free(obj_ezsigndocument_compound_local_nonprim);
        obj_ezsigndocument_compound_local_nonprim = NULL;
    }
    return NULL;

}
