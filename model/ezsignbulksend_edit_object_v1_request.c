#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignbulksend_edit_object_v1_request.h"



static ezsignbulksend_edit_object_v1_request_t *ezsignbulksend_edit_object_v1_request_create_internal(
    ezsignbulksend_request_compound_t *obj_ezsignbulksend
    ) {
    ezsignbulksend_edit_object_v1_request_t *ezsignbulksend_edit_object_v1_request_local_var = malloc(sizeof(ezsignbulksend_edit_object_v1_request_t));
    if (!ezsignbulksend_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsignbulksend_edit_object_v1_request_local_var->obj_ezsignbulksend = obj_ezsignbulksend;

    ezsignbulksend_edit_object_v1_request_local_var->_library_owned = 1;
    return ezsignbulksend_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsignbulksend_edit_object_v1_request_t *ezsignbulksend_edit_object_v1_request_create(
    ezsignbulksend_request_compound_t *obj_ezsignbulksend
    ) {
    return ezsignbulksend_edit_object_v1_request_create_internal (
        obj_ezsignbulksend
        );
}

void ezsignbulksend_edit_object_v1_request_free(ezsignbulksend_edit_object_v1_request_t *ezsignbulksend_edit_object_v1_request) {
    if(NULL == ezsignbulksend_edit_object_v1_request){
        return ;
    }
    if(ezsignbulksend_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignbulksend_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignbulksend_edit_object_v1_request->obj_ezsignbulksend) {
        ezsignbulksend_request_compound_free(ezsignbulksend_edit_object_v1_request->obj_ezsignbulksend);
        ezsignbulksend_edit_object_v1_request->obj_ezsignbulksend = NULL;
    }
    free(ezsignbulksend_edit_object_v1_request);
}

cJSON *ezsignbulksend_edit_object_v1_request_convertToJSON(ezsignbulksend_edit_object_v1_request_t *ezsignbulksend_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignbulksend_edit_object_v1_request->obj_ezsignbulksend
    if (!ezsignbulksend_edit_object_v1_request->obj_ezsignbulksend) {
        goto fail;
    }
    cJSON *obj_ezsignbulksend_local_JSON = ezsignbulksend_request_compound_convertToJSON(ezsignbulksend_edit_object_v1_request->obj_ezsignbulksend);
    if(obj_ezsignbulksend_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignbulksend", obj_ezsignbulksend_local_JSON);
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

ezsignbulksend_edit_object_v1_request_t *ezsignbulksend_edit_object_v1_request_parseFromJSON(cJSON *ezsignbulksend_edit_object_v1_requestJSON){

    ezsignbulksend_edit_object_v1_request_t *ezsignbulksend_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsignbulksend_edit_object_v1_request->obj_ezsignbulksend
    ezsignbulksend_request_compound_t *obj_ezsignbulksend_local_nonprim = NULL;

    // ezsignbulksend_edit_object_v1_request->obj_ezsignbulksend
    cJSON *obj_ezsignbulksend = cJSON_GetObjectItemCaseSensitive(ezsignbulksend_edit_object_v1_requestJSON, "objEzsignbulksend");
    if (cJSON_IsNull(obj_ezsignbulksend)) {
        obj_ezsignbulksend = NULL;
    }
    if (!obj_ezsignbulksend) {
        goto end;
    }

    
    obj_ezsignbulksend_local_nonprim = ezsignbulksend_request_compound_parseFromJSON(obj_ezsignbulksend); //nonprimitive


    ezsignbulksend_edit_object_v1_request_local_var = ezsignbulksend_edit_object_v1_request_create_internal (
        obj_ezsignbulksend_local_nonprim
        );

    return ezsignbulksend_edit_object_v1_request_local_var;
end:
    if (obj_ezsignbulksend_local_nonprim) {
        ezsignbulksend_request_compound_free(obj_ezsignbulksend_local_nonprim);
        obj_ezsignbulksend_local_nonprim = NULL;
    }
    return NULL;

}
