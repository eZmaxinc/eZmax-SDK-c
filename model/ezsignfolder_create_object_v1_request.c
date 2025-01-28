#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_create_object_v1_request.h"



static ezsignfolder_create_object_v1_request_t *ezsignfolder_create_object_v1_request_create_internal(
    ezsignfolder_request_t *obj_ezsignfolder,
    ezsignfolder_request_compound_t *obj_ezsignfolder_compound
    ) {
    ezsignfolder_create_object_v1_request_t *ezsignfolder_create_object_v1_request_local_var = malloc(sizeof(ezsignfolder_create_object_v1_request_t));
    if (!ezsignfolder_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignfolder_create_object_v1_request_local_var->obj_ezsignfolder = obj_ezsignfolder;
    ezsignfolder_create_object_v1_request_local_var->obj_ezsignfolder_compound = obj_ezsignfolder_compound;

    ezsignfolder_create_object_v1_request_local_var->_library_owned = 1;
    return ezsignfolder_create_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsignfolder_create_object_v1_request_t *ezsignfolder_create_object_v1_request_create(
    ezsignfolder_request_t *obj_ezsignfolder,
    ezsignfolder_request_compound_t *obj_ezsignfolder_compound
    ) {
    return ezsignfolder_create_object_v1_request_create_internal (
        obj_ezsignfolder,
        obj_ezsignfolder_compound
        );
}

void ezsignfolder_create_object_v1_request_free(ezsignfolder_create_object_v1_request_t *ezsignfolder_create_object_v1_request) {
    if(NULL == ezsignfolder_create_object_v1_request){
        return ;
    }
    if(ezsignfolder_create_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_create_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_create_object_v1_request->obj_ezsignfolder) {
        ezsignfolder_request_free(ezsignfolder_create_object_v1_request->obj_ezsignfolder);
        ezsignfolder_create_object_v1_request->obj_ezsignfolder = NULL;
    }
    if (ezsignfolder_create_object_v1_request->obj_ezsignfolder_compound) {
        ezsignfolder_request_compound_free(ezsignfolder_create_object_v1_request->obj_ezsignfolder_compound);
        ezsignfolder_create_object_v1_request->obj_ezsignfolder_compound = NULL;
    }
    free(ezsignfolder_create_object_v1_request);
}

cJSON *ezsignfolder_create_object_v1_request_convertToJSON(ezsignfolder_create_object_v1_request_t *ezsignfolder_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_create_object_v1_request->obj_ezsignfolder
    if(ezsignfolder_create_object_v1_request->obj_ezsignfolder) {
    cJSON *obj_ezsignfolder_local_JSON = ezsignfolder_request_convertToJSON(ezsignfolder_create_object_v1_request->obj_ezsignfolder);
    if(obj_ezsignfolder_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfolder", obj_ezsignfolder_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // ezsignfolder_create_object_v1_request->obj_ezsignfolder_compound
    if(ezsignfolder_create_object_v1_request->obj_ezsignfolder_compound) {
    cJSON *obj_ezsignfolder_compound_local_JSON = ezsignfolder_request_compound_convertToJSON(ezsignfolder_create_object_v1_request->obj_ezsignfolder_compound);
    if(obj_ezsignfolder_compound_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfolderCompound", obj_ezsignfolder_compound_local_JSON);
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

ezsignfolder_create_object_v1_request_t *ezsignfolder_create_object_v1_request_parseFromJSON(cJSON *ezsignfolder_create_object_v1_requestJSON){

    ezsignfolder_create_object_v1_request_t *ezsignfolder_create_object_v1_request_local_var = NULL;

    // define the local variable for ezsignfolder_create_object_v1_request->obj_ezsignfolder
    ezsignfolder_request_t *obj_ezsignfolder_local_nonprim = NULL;

    // define the local variable for ezsignfolder_create_object_v1_request->obj_ezsignfolder_compound
    ezsignfolder_request_compound_t *obj_ezsignfolder_compound_local_nonprim = NULL;

    // ezsignfolder_create_object_v1_request->obj_ezsignfolder
    cJSON *obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignfolder_create_object_v1_requestJSON, "objEzsignfolder");
    if (cJSON_IsNull(obj_ezsignfolder)) {
        obj_ezsignfolder = NULL;
    }
    if (obj_ezsignfolder) { 
    obj_ezsignfolder_local_nonprim = ezsignfolder_request_parseFromJSON(obj_ezsignfolder); //nonprimitive
    }

    // ezsignfolder_create_object_v1_request->obj_ezsignfolder_compound
    cJSON *obj_ezsignfolder_compound = cJSON_GetObjectItemCaseSensitive(ezsignfolder_create_object_v1_requestJSON, "objEzsignfolderCompound");
    if (cJSON_IsNull(obj_ezsignfolder_compound)) {
        obj_ezsignfolder_compound = NULL;
    }
    if (obj_ezsignfolder_compound) { 
    obj_ezsignfolder_compound_local_nonprim = ezsignfolder_request_compound_parseFromJSON(obj_ezsignfolder_compound); //nonprimitive
    }


    ezsignfolder_create_object_v1_request_local_var = ezsignfolder_create_object_v1_request_create_internal (
        obj_ezsignfolder ? obj_ezsignfolder_local_nonprim : NULL,
        obj_ezsignfolder_compound ? obj_ezsignfolder_compound_local_nonprim : NULL
        );

    return ezsignfolder_create_object_v1_request_local_var;
end:
    if (obj_ezsignfolder_local_nonprim) {
        ezsignfolder_request_free(obj_ezsignfolder_local_nonprim);
        obj_ezsignfolder_local_nonprim = NULL;
    }
    if (obj_ezsignfolder_compound_local_nonprim) {
        ezsignfolder_request_compound_free(obj_ezsignfolder_compound_local_nonprim);
        obj_ezsignfolder_compound_local_nonprim = NULL;
    }
    return NULL;

}
