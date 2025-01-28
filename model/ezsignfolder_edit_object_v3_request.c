#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfolder_edit_object_v3_request.h"



static ezsignfolder_edit_object_v3_request_t *ezsignfolder_edit_object_v3_request_create_internal(
    ezsignfolder_request_compound_v3_t *obj_ezsignfolder
    ) {
    ezsignfolder_edit_object_v3_request_t *ezsignfolder_edit_object_v3_request_local_var = malloc(sizeof(ezsignfolder_edit_object_v3_request_t));
    if (!ezsignfolder_edit_object_v3_request_local_var) {
        return NULL;
    }
    ezsignfolder_edit_object_v3_request_local_var->obj_ezsignfolder = obj_ezsignfolder;

    ezsignfolder_edit_object_v3_request_local_var->_library_owned = 1;
    return ezsignfolder_edit_object_v3_request_local_var;
}

__attribute__((deprecated)) ezsignfolder_edit_object_v3_request_t *ezsignfolder_edit_object_v3_request_create(
    ezsignfolder_request_compound_v3_t *obj_ezsignfolder
    ) {
    return ezsignfolder_edit_object_v3_request_create_internal (
        obj_ezsignfolder
        );
}

void ezsignfolder_edit_object_v3_request_free(ezsignfolder_edit_object_v3_request_t *ezsignfolder_edit_object_v3_request) {
    if(NULL == ezsignfolder_edit_object_v3_request){
        return ;
    }
    if(ezsignfolder_edit_object_v3_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfolder_edit_object_v3_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfolder_edit_object_v3_request->obj_ezsignfolder) {
        ezsignfolder_request_compound_v3_free(ezsignfolder_edit_object_v3_request->obj_ezsignfolder);
        ezsignfolder_edit_object_v3_request->obj_ezsignfolder = NULL;
    }
    free(ezsignfolder_edit_object_v3_request);
}

cJSON *ezsignfolder_edit_object_v3_request_convertToJSON(ezsignfolder_edit_object_v3_request_t *ezsignfolder_edit_object_v3_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfolder_edit_object_v3_request->obj_ezsignfolder
    if (!ezsignfolder_edit_object_v3_request->obj_ezsignfolder) {
        goto fail;
    }
    cJSON *obj_ezsignfolder_local_JSON = ezsignfolder_request_compound_v3_convertToJSON(ezsignfolder_edit_object_v3_request->obj_ezsignfolder);
    if(obj_ezsignfolder_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfolder", obj_ezsignfolder_local_JSON);
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

ezsignfolder_edit_object_v3_request_t *ezsignfolder_edit_object_v3_request_parseFromJSON(cJSON *ezsignfolder_edit_object_v3_requestJSON){

    ezsignfolder_edit_object_v3_request_t *ezsignfolder_edit_object_v3_request_local_var = NULL;

    // define the local variable for ezsignfolder_edit_object_v3_request->obj_ezsignfolder
    ezsignfolder_request_compound_v3_t *obj_ezsignfolder_local_nonprim = NULL;

    // ezsignfolder_edit_object_v3_request->obj_ezsignfolder
    cJSON *obj_ezsignfolder = cJSON_GetObjectItemCaseSensitive(ezsignfolder_edit_object_v3_requestJSON, "objEzsignfolder");
    if (cJSON_IsNull(obj_ezsignfolder)) {
        obj_ezsignfolder = NULL;
    }
    if (!obj_ezsignfolder) {
        goto end;
    }

    
    obj_ezsignfolder_local_nonprim = ezsignfolder_request_compound_v3_parseFromJSON(obj_ezsignfolder); //nonprimitive


    ezsignfolder_edit_object_v3_request_local_var = ezsignfolder_edit_object_v3_request_create_internal (
        obj_ezsignfolder_local_nonprim
        );

    return ezsignfolder_edit_object_v3_request_local_var;
end:
    if (obj_ezsignfolder_local_nonprim) {
        ezsignfolder_request_compound_v3_free(obj_ezsignfolder_local_nonprim);
        obj_ezsignfolder_local_nonprim = NULL;
    }
    return NULL;

}
