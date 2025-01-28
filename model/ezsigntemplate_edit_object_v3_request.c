#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_edit_object_v3_request.h"



static ezsigntemplate_edit_object_v3_request_t *ezsigntemplate_edit_object_v3_request_create_internal(
    ezsigntemplate_request_compound_v3_t *obj_ezsigntemplate
    ) {
    ezsigntemplate_edit_object_v3_request_t *ezsigntemplate_edit_object_v3_request_local_var = malloc(sizeof(ezsigntemplate_edit_object_v3_request_t));
    if (!ezsigntemplate_edit_object_v3_request_local_var) {
        return NULL;
    }
    ezsigntemplate_edit_object_v3_request_local_var->obj_ezsigntemplate = obj_ezsigntemplate;

    ezsigntemplate_edit_object_v3_request_local_var->_library_owned = 1;
    return ezsigntemplate_edit_object_v3_request_local_var;
}

__attribute__((deprecated)) ezsigntemplate_edit_object_v3_request_t *ezsigntemplate_edit_object_v3_request_create(
    ezsigntemplate_request_compound_v3_t *obj_ezsigntemplate
    ) {
    return ezsigntemplate_edit_object_v3_request_create_internal (
        obj_ezsigntemplate
        );
}

void ezsigntemplate_edit_object_v3_request_free(ezsigntemplate_edit_object_v3_request_t *ezsigntemplate_edit_object_v3_request) {
    if(NULL == ezsigntemplate_edit_object_v3_request){
        return ;
    }
    if(ezsigntemplate_edit_object_v3_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplate_edit_object_v3_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_edit_object_v3_request->obj_ezsigntemplate) {
        ezsigntemplate_request_compound_v3_free(ezsigntemplate_edit_object_v3_request->obj_ezsigntemplate);
        ezsigntemplate_edit_object_v3_request->obj_ezsigntemplate = NULL;
    }
    free(ezsigntemplate_edit_object_v3_request);
}

cJSON *ezsigntemplate_edit_object_v3_request_convertToJSON(ezsigntemplate_edit_object_v3_request_t *ezsigntemplate_edit_object_v3_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_edit_object_v3_request->obj_ezsigntemplate
    if (!ezsigntemplate_edit_object_v3_request->obj_ezsigntemplate) {
        goto fail;
    }
    cJSON *obj_ezsigntemplate_local_JSON = ezsigntemplate_request_compound_v3_convertToJSON(ezsigntemplate_edit_object_v3_request->obj_ezsigntemplate);
    if(obj_ezsigntemplate_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplate", obj_ezsigntemplate_local_JSON);
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

ezsigntemplate_edit_object_v3_request_t *ezsigntemplate_edit_object_v3_request_parseFromJSON(cJSON *ezsigntemplate_edit_object_v3_requestJSON){

    ezsigntemplate_edit_object_v3_request_t *ezsigntemplate_edit_object_v3_request_local_var = NULL;

    // define the local variable for ezsigntemplate_edit_object_v3_request->obj_ezsigntemplate
    ezsigntemplate_request_compound_v3_t *obj_ezsigntemplate_local_nonprim = NULL;

    // ezsigntemplate_edit_object_v3_request->obj_ezsigntemplate
    cJSON *obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_edit_object_v3_requestJSON, "objEzsigntemplate");
    if (cJSON_IsNull(obj_ezsigntemplate)) {
        obj_ezsigntemplate = NULL;
    }
    if (!obj_ezsigntemplate) {
        goto end;
    }

    
    obj_ezsigntemplate_local_nonprim = ezsigntemplate_request_compound_v3_parseFromJSON(obj_ezsigntemplate); //nonprimitive


    ezsigntemplate_edit_object_v3_request_local_var = ezsigntemplate_edit_object_v3_request_create_internal (
        obj_ezsigntemplate_local_nonprim
        );

    return ezsigntemplate_edit_object_v3_request_local_var;
end:
    if (obj_ezsigntemplate_local_nonprim) {
        ezsigntemplate_request_compound_v3_free(obj_ezsigntemplate_local_nonprim);
        obj_ezsigntemplate_local_nonprim = NULL;
    }
    return NULL;

}
