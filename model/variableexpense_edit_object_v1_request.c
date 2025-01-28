#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "variableexpense_edit_object_v1_request.h"



static variableexpense_edit_object_v1_request_t *variableexpense_edit_object_v1_request_create_internal(
    variableexpense_request_compound_t *obj_variableexpense
    ) {
    variableexpense_edit_object_v1_request_t *variableexpense_edit_object_v1_request_local_var = malloc(sizeof(variableexpense_edit_object_v1_request_t));
    if (!variableexpense_edit_object_v1_request_local_var) {
        return NULL;
    }
    variableexpense_edit_object_v1_request_local_var->obj_variableexpense = obj_variableexpense;

    variableexpense_edit_object_v1_request_local_var->_library_owned = 1;
    return variableexpense_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) variableexpense_edit_object_v1_request_t *variableexpense_edit_object_v1_request_create(
    variableexpense_request_compound_t *obj_variableexpense
    ) {
    return variableexpense_edit_object_v1_request_create_internal (
        obj_variableexpense
        );
}

void variableexpense_edit_object_v1_request_free(variableexpense_edit_object_v1_request_t *variableexpense_edit_object_v1_request) {
    if(NULL == variableexpense_edit_object_v1_request){
        return ;
    }
    if(variableexpense_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "variableexpense_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (variableexpense_edit_object_v1_request->obj_variableexpense) {
        variableexpense_request_compound_free(variableexpense_edit_object_v1_request->obj_variableexpense);
        variableexpense_edit_object_v1_request->obj_variableexpense = NULL;
    }
    free(variableexpense_edit_object_v1_request);
}

cJSON *variableexpense_edit_object_v1_request_convertToJSON(variableexpense_edit_object_v1_request_t *variableexpense_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // variableexpense_edit_object_v1_request->obj_variableexpense
    if (!variableexpense_edit_object_v1_request->obj_variableexpense) {
        goto fail;
    }
    cJSON *obj_variableexpense_local_JSON = variableexpense_request_compound_convertToJSON(variableexpense_edit_object_v1_request->obj_variableexpense);
    if(obj_variableexpense_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objVariableexpense", obj_variableexpense_local_JSON);
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

variableexpense_edit_object_v1_request_t *variableexpense_edit_object_v1_request_parseFromJSON(cJSON *variableexpense_edit_object_v1_requestJSON){

    variableexpense_edit_object_v1_request_t *variableexpense_edit_object_v1_request_local_var = NULL;

    // define the local variable for variableexpense_edit_object_v1_request->obj_variableexpense
    variableexpense_request_compound_t *obj_variableexpense_local_nonprim = NULL;

    // variableexpense_edit_object_v1_request->obj_variableexpense
    cJSON *obj_variableexpense = cJSON_GetObjectItemCaseSensitive(variableexpense_edit_object_v1_requestJSON, "objVariableexpense");
    if (cJSON_IsNull(obj_variableexpense)) {
        obj_variableexpense = NULL;
    }
    if (!obj_variableexpense) {
        goto end;
    }

    
    obj_variableexpense_local_nonprim = variableexpense_request_compound_parseFromJSON(obj_variableexpense); //nonprimitive


    variableexpense_edit_object_v1_request_local_var = variableexpense_edit_object_v1_request_create_internal (
        obj_variableexpense_local_nonprim
        );

    return variableexpense_edit_object_v1_request_local_var;
end:
    if (obj_variableexpense_local_nonprim) {
        variableexpense_request_compound_free(obj_variableexpense_local_nonprim);
        obj_variableexpense_local_nonprim = NULL;
    }
    return NULL;

}
