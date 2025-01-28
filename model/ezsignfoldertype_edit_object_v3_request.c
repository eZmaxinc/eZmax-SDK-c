#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_edit_object_v3_request.h"



static ezsignfoldertype_edit_object_v3_request_t *ezsignfoldertype_edit_object_v3_request_create_internal(
    ezsignfoldertype_request_compound_v3_t *obj_ezsignfoldertype
    ) {
    ezsignfoldertype_edit_object_v3_request_t *ezsignfoldertype_edit_object_v3_request_local_var = malloc(sizeof(ezsignfoldertype_edit_object_v3_request_t));
    if (!ezsignfoldertype_edit_object_v3_request_local_var) {
        return NULL;
    }
    ezsignfoldertype_edit_object_v3_request_local_var->obj_ezsignfoldertype = obj_ezsignfoldertype;

    ezsignfoldertype_edit_object_v3_request_local_var->_library_owned = 1;
    return ezsignfoldertype_edit_object_v3_request_local_var;
}

__attribute__((deprecated)) ezsignfoldertype_edit_object_v3_request_t *ezsignfoldertype_edit_object_v3_request_create(
    ezsignfoldertype_request_compound_v3_t *obj_ezsignfoldertype
    ) {
    return ezsignfoldertype_edit_object_v3_request_create_internal (
        obj_ezsignfoldertype
        );
}

void ezsignfoldertype_edit_object_v3_request_free(ezsignfoldertype_edit_object_v3_request_t *ezsignfoldertype_edit_object_v3_request) {
    if(NULL == ezsignfoldertype_edit_object_v3_request){
        return ;
    }
    if(ezsignfoldertype_edit_object_v3_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldertype_edit_object_v3_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_edit_object_v3_request->obj_ezsignfoldertype) {
        ezsignfoldertype_request_compound_v3_free(ezsignfoldertype_edit_object_v3_request->obj_ezsignfoldertype);
        ezsignfoldertype_edit_object_v3_request->obj_ezsignfoldertype = NULL;
    }
    free(ezsignfoldertype_edit_object_v3_request);
}

cJSON *ezsignfoldertype_edit_object_v3_request_convertToJSON(ezsignfoldertype_edit_object_v3_request_t *ezsignfoldertype_edit_object_v3_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_edit_object_v3_request->obj_ezsignfoldertype
    if (!ezsignfoldertype_edit_object_v3_request->obj_ezsignfoldertype) {
        goto fail;
    }
    cJSON *obj_ezsignfoldertype_local_JSON = ezsignfoldertype_request_compound_v3_convertToJSON(ezsignfoldertype_edit_object_v3_request->obj_ezsignfoldertype);
    if(obj_ezsignfoldertype_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldertype", obj_ezsignfoldertype_local_JSON);
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

ezsignfoldertype_edit_object_v3_request_t *ezsignfoldertype_edit_object_v3_request_parseFromJSON(cJSON *ezsignfoldertype_edit_object_v3_requestJSON){

    ezsignfoldertype_edit_object_v3_request_t *ezsignfoldertype_edit_object_v3_request_local_var = NULL;

    // define the local variable for ezsignfoldertype_edit_object_v3_request->obj_ezsignfoldertype
    ezsignfoldertype_request_compound_v3_t *obj_ezsignfoldertype_local_nonprim = NULL;

    // ezsignfoldertype_edit_object_v3_request->obj_ezsignfoldertype
    cJSON *obj_ezsignfoldertype = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_edit_object_v3_requestJSON, "objEzsignfoldertype");
    if (cJSON_IsNull(obj_ezsignfoldertype)) {
        obj_ezsignfoldertype = NULL;
    }
    if (!obj_ezsignfoldertype) {
        goto end;
    }

    
    obj_ezsignfoldertype_local_nonprim = ezsignfoldertype_request_compound_v3_parseFromJSON(obj_ezsignfoldertype); //nonprimitive


    ezsignfoldertype_edit_object_v3_request_local_var = ezsignfoldertype_edit_object_v3_request_create_internal (
        obj_ezsignfoldertype_local_nonprim
        );

    return ezsignfoldertype_edit_object_v3_request_local_var;
end:
    if (obj_ezsignfoldertype_local_nonprim) {
        ezsignfoldertype_request_compound_v3_free(obj_ezsignfoldertype_local_nonprim);
        obj_ezsignfoldertype_local_nonprim = NULL;
    }
    return NULL;

}
