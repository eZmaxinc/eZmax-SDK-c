#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatedocumentpagerecognition_edit_object_v1_request.h"



static ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t *ezsigntemplatedocumentpagerecognition_edit_object_v1_request_create_internal(
    ezsigntemplatedocumentpagerecognition_request_compound_t *obj_ezsigntemplatedocumentpagerecognition
    ) {
    ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t *ezsigntemplatedocumentpagerecognition_edit_object_v1_request_local_var = malloc(sizeof(ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t));
    if (!ezsigntemplatedocumentpagerecognition_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatedocumentpagerecognition_edit_object_v1_request_local_var->obj_ezsigntemplatedocumentpagerecognition = obj_ezsigntemplatedocumentpagerecognition;

    ezsigntemplatedocumentpagerecognition_edit_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplatedocumentpagerecognition_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t *ezsigntemplatedocumentpagerecognition_edit_object_v1_request_create(
    ezsigntemplatedocumentpagerecognition_request_compound_t *obj_ezsigntemplatedocumentpagerecognition
    ) {
    return ezsigntemplatedocumentpagerecognition_edit_object_v1_request_create_internal (
        obj_ezsigntemplatedocumentpagerecognition
        );
}

void ezsigntemplatedocumentpagerecognition_edit_object_v1_request_free(ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t *ezsigntemplatedocumentpagerecognition_edit_object_v1_request) {
    if(NULL == ezsigntemplatedocumentpagerecognition_edit_object_v1_request){
        return ;
    }
    if(ezsigntemplatedocumentpagerecognition_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatedocumentpagerecognition_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatedocumentpagerecognition_edit_object_v1_request->obj_ezsigntemplatedocumentpagerecognition) {
        ezsigntemplatedocumentpagerecognition_request_compound_free(ezsigntemplatedocumentpagerecognition_edit_object_v1_request->obj_ezsigntemplatedocumentpagerecognition);
        ezsigntemplatedocumentpagerecognition_edit_object_v1_request->obj_ezsigntemplatedocumentpagerecognition = NULL;
    }
    free(ezsigntemplatedocumentpagerecognition_edit_object_v1_request);
}

cJSON *ezsigntemplatedocumentpagerecognition_edit_object_v1_request_convertToJSON(ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t *ezsigntemplatedocumentpagerecognition_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatedocumentpagerecognition_edit_object_v1_request->obj_ezsigntemplatedocumentpagerecognition
    if (!ezsigntemplatedocumentpagerecognition_edit_object_v1_request->obj_ezsigntemplatedocumentpagerecognition) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatedocumentpagerecognition_local_JSON = ezsigntemplatedocumentpagerecognition_request_compound_convertToJSON(ezsigntemplatedocumentpagerecognition_edit_object_v1_request->obj_ezsigntemplatedocumentpagerecognition);
    if(obj_ezsigntemplatedocumentpagerecognition_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatedocumentpagerecognition", obj_ezsigntemplatedocumentpagerecognition_local_JSON);
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

ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t *ezsigntemplatedocumentpagerecognition_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplatedocumentpagerecognition_edit_object_v1_requestJSON){

    ezsigntemplatedocumentpagerecognition_edit_object_v1_request_t *ezsigntemplatedocumentpagerecognition_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsigntemplatedocumentpagerecognition_edit_object_v1_request->obj_ezsigntemplatedocumentpagerecognition
    ezsigntemplatedocumentpagerecognition_request_compound_t *obj_ezsigntemplatedocumentpagerecognition_local_nonprim = NULL;

    // ezsigntemplatedocumentpagerecognition_edit_object_v1_request->obj_ezsigntemplatedocumentpagerecognition
    cJSON *obj_ezsigntemplatedocumentpagerecognition = cJSON_GetObjectItemCaseSensitive(ezsigntemplatedocumentpagerecognition_edit_object_v1_requestJSON, "objEzsigntemplatedocumentpagerecognition");
    if (cJSON_IsNull(obj_ezsigntemplatedocumentpagerecognition)) {
        obj_ezsigntemplatedocumentpagerecognition = NULL;
    }
    if (!obj_ezsigntemplatedocumentpagerecognition) {
        goto end;
    }

    
    obj_ezsigntemplatedocumentpagerecognition_local_nonprim = ezsigntemplatedocumentpagerecognition_request_compound_parseFromJSON(obj_ezsigntemplatedocumentpagerecognition); //nonprimitive


    ezsigntemplatedocumentpagerecognition_edit_object_v1_request_local_var = ezsigntemplatedocumentpagerecognition_edit_object_v1_request_create_internal (
        obj_ezsigntemplatedocumentpagerecognition_local_nonprim
        );

    return ezsigntemplatedocumentpagerecognition_edit_object_v1_request_local_var;
end:
    if (obj_ezsigntemplatedocumentpagerecognition_local_nonprim) {
        ezsigntemplatedocumentpagerecognition_request_compound_free(obj_ezsigntemplatedocumentpagerecognition_local_nonprim);
        obj_ezsigntemplatedocumentpagerecognition_local_nonprim = NULL;
    }
    return NULL;

}
