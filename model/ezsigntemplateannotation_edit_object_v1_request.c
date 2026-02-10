#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplateannotation_edit_object_v1_request.h"



static ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request_create_internal(
    ezsigntemplateannotation_request_compound_t *obj_ezsigntemplateannotation
    ) {
    ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request_local_var = malloc(sizeof(ezsigntemplateannotation_edit_object_v1_request_t));
    if (!ezsigntemplateannotation_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplateannotation_edit_object_v1_request_local_var->obj_ezsigntemplateannotation = obj_ezsigntemplateannotation;

    ezsigntemplateannotation_edit_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplateannotation_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request_create(
    ezsigntemplateannotation_request_compound_t *obj_ezsigntemplateannotation
    ) {
    return ezsigntemplateannotation_edit_object_v1_request_create_internal (
        obj_ezsigntemplateannotation
        );
}

void ezsigntemplateannotation_edit_object_v1_request_free(ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request) {
    if(NULL == ezsigntemplateannotation_edit_object_v1_request){
        return ;
    }
    if(ezsigntemplateannotation_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplateannotation_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplateannotation_edit_object_v1_request->obj_ezsigntemplateannotation) {
        ezsigntemplateannotation_request_compound_free(ezsigntemplateannotation_edit_object_v1_request->obj_ezsigntemplateannotation);
        ezsigntemplateannotation_edit_object_v1_request->obj_ezsigntemplateannotation = NULL;
    }
    free(ezsigntemplateannotation_edit_object_v1_request);
}

cJSON *ezsigntemplateannotation_edit_object_v1_request_convertToJSON(ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplateannotation_edit_object_v1_request->obj_ezsigntemplateannotation
    if (!ezsigntemplateannotation_edit_object_v1_request->obj_ezsigntemplateannotation) {
        goto fail;
    }
    cJSON *obj_ezsigntemplateannotation_local_JSON = ezsigntemplateannotation_request_compound_convertToJSON(ezsigntemplateannotation_edit_object_v1_request->obj_ezsigntemplateannotation);
    if(obj_ezsigntemplateannotation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplateannotation", obj_ezsigntemplateannotation_local_JSON);
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

ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplateannotation_edit_object_v1_requestJSON){

    ezsigntemplateannotation_edit_object_v1_request_t *ezsigntemplateannotation_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsigntemplateannotation_edit_object_v1_request->obj_ezsigntemplateannotation
    ezsigntemplateannotation_request_compound_t *obj_ezsigntemplateannotation_local_nonprim = NULL;

    // ezsigntemplateannotation_edit_object_v1_request->obj_ezsigntemplateannotation
    cJSON *obj_ezsigntemplateannotation = cJSON_GetObjectItemCaseSensitive(ezsigntemplateannotation_edit_object_v1_requestJSON, "objEzsigntemplateannotation");
    if (cJSON_IsNull(obj_ezsigntemplateannotation)) {
        obj_ezsigntemplateannotation = NULL;
    }
    if (!obj_ezsigntemplateannotation) {
        goto end;
    }

    
    obj_ezsigntemplateannotation_local_nonprim = ezsigntemplateannotation_request_compound_parseFromJSON(obj_ezsigntemplateannotation); //nonprimitive


    ezsigntemplateannotation_edit_object_v1_request_local_var = ezsigntemplateannotation_edit_object_v1_request_create_internal (
        obj_ezsigntemplateannotation_local_nonprim
        );

    return ezsigntemplateannotation_edit_object_v1_request_local_var;
end:
    if (obj_ezsigntemplateannotation_local_nonprim) {
        ezsigntemplateannotation_request_compound_free(obj_ezsigntemplateannotation_local_nonprim);
        obj_ezsigntemplateannotation_local_nonprim = NULL;
    }
    return NULL;

}
