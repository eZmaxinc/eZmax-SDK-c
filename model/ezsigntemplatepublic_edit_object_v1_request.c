#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepublic_edit_object_v1_request.h"



static ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request_create_internal(
    ezsigntemplatepublic_request_compound_t *obj_ezsigntemplatepublic
    ) {
    ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request_local_var = malloc(sizeof(ezsigntemplatepublic_edit_object_v1_request_t));
    if (!ezsigntemplatepublic_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatepublic_edit_object_v1_request_local_var->obj_ezsigntemplatepublic = obj_ezsigntemplatepublic;

    ezsigntemplatepublic_edit_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplatepublic_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request_create(
    ezsigntemplatepublic_request_compound_t *obj_ezsigntemplatepublic
    ) {
    return ezsigntemplatepublic_edit_object_v1_request_create_internal (
        obj_ezsigntemplatepublic
        );
}

void ezsigntemplatepublic_edit_object_v1_request_free(ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request) {
    if(NULL == ezsigntemplatepublic_edit_object_v1_request){
        return ;
    }
    if(ezsigntemplatepublic_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepublic_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepublic_edit_object_v1_request->obj_ezsigntemplatepublic) {
        ezsigntemplatepublic_request_compound_free(ezsigntemplatepublic_edit_object_v1_request->obj_ezsigntemplatepublic);
        ezsigntemplatepublic_edit_object_v1_request->obj_ezsigntemplatepublic = NULL;
    }
    free(ezsigntemplatepublic_edit_object_v1_request);
}

cJSON *ezsigntemplatepublic_edit_object_v1_request_convertToJSON(ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepublic_edit_object_v1_request->obj_ezsigntemplatepublic
    if (!ezsigntemplatepublic_edit_object_v1_request->obj_ezsigntemplatepublic) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatepublic_local_JSON = ezsigntemplatepublic_request_compound_convertToJSON(ezsigntemplatepublic_edit_object_v1_request->obj_ezsigntemplatepublic);
    if(obj_ezsigntemplatepublic_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatepublic", obj_ezsigntemplatepublic_local_JSON);
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

ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepublic_edit_object_v1_requestJSON){

    ezsigntemplatepublic_edit_object_v1_request_t *ezsigntemplatepublic_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsigntemplatepublic_edit_object_v1_request->obj_ezsigntemplatepublic
    ezsigntemplatepublic_request_compound_t *obj_ezsigntemplatepublic_local_nonprim = NULL;

    // ezsigntemplatepublic_edit_object_v1_request->obj_ezsigntemplatepublic
    cJSON *obj_ezsigntemplatepublic = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepublic_edit_object_v1_requestJSON, "objEzsigntemplatepublic");
    if (cJSON_IsNull(obj_ezsigntemplatepublic)) {
        obj_ezsigntemplatepublic = NULL;
    }
    if (!obj_ezsigntemplatepublic) {
        goto end;
    }

    
    obj_ezsigntemplatepublic_local_nonprim = ezsigntemplatepublic_request_compound_parseFromJSON(obj_ezsigntemplatepublic); //nonprimitive


    ezsigntemplatepublic_edit_object_v1_request_local_var = ezsigntemplatepublic_edit_object_v1_request_create_internal (
        obj_ezsigntemplatepublic_local_nonprim
        );

    return ezsigntemplatepublic_edit_object_v1_request_local_var;
end:
    if (obj_ezsigntemplatepublic_local_nonprim) {
        ezsigntemplatepublic_request_compound_free(obj_ezsigntemplatepublic_local_nonprim);
        obj_ezsigntemplatepublic_local_nonprim = NULL;
    }
    return NULL;

}
