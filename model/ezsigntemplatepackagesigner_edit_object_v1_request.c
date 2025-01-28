#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackagesigner_edit_object_v1_request.h"



static ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request_create_internal(
    ezsigntemplatepackagesigner_request_compound_t *obj_ezsigntemplatepackagesigner
    ) {
    ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request_local_var = malloc(sizeof(ezsigntemplatepackagesigner_edit_object_v1_request_t));
    if (!ezsigntemplatepackagesigner_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatepackagesigner_edit_object_v1_request_local_var->obj_ezsigntemplatepackagesigner = obj_ezsigntemplatepackagesigner;

    ezsigntemplatepackagesigner_edit_object_v1_request_local_var->_library_owned = 1;
    return ezsigntemplatepackagesigner_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request_create(
    ezsigntemplatepackagesigner_request_compound_t *obj_ezsigntemplatepackagesigner
    ) {
    return ezsigntemplatepackagesigner_edit_object_v1_request_create_internal (
        obj_ezsigntemplatepackagesigner
        );
}

void ezsigntemplatepackagesigner_edit_object_v1_request_free(ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request) {
    if(NULL == ezsigntemplatepackagesigner_edit_object_v1_request){
        return ;
    }
    if(ezsigntemplatepackagesigner_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackagesigner_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackagesigner_edit_object_v1_request->obj_ezsigntemplatepackagesigner) {
        ezsigntemplatepackagesigner_request_compound_free(ezsigntemplatepackagesigner_edit_object_v1_request->obj_ezsigntemplatepackagesigner);
        ezsigntemplatepackagesigner_edit_object_v1_request->obj_ezsigntemplatepackagesigner = NULL;
    }
    free(ezsigntemplatepackagesigner_edit_object_v1_request);
}

cJSON *ezsigntemplatepackagesigner_edit_object_v1_request_convertToJSON(ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackagesigner_edit_object_v1_request->obj_ezsigntemplatepackagesigner
    if (!ezsigntemplatepackagesigner_edit_object_v1_request->obj_ezsigntemplatepackagesigner) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatepackagesigner_local_JSON = ezsigntemplatepackagesigner_request_compound_convertToJSON(ezsigntemplatepackagesigner_edit_object_v1_request->obj_ezsigntemplatepackagesigner);
    if(obj_ezsigntemplatepackagesigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatepackagesigner", obj_ezsigntemplatepackagesigner_local_JSON);
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

ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepackagesigner_edit_object_v1_requestJSON){

    ezsigntemplatepackagesigner_edit_object_v1_request_t *ezsigntemplatepackagesigner_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsigntemplatepackagesigner_edit_object_v1_request->obj_ezsigntemplatepackagesigner
    ezsigntemplatepackagesigner_request_compound_t *obj_ezsigntemplatepackagesigner_local_nonprim = NULL;

    // ezsigntemplatepackagesigner_edit_object_v1_request->obj_ezsigntemplatepackagesigner
    cJSON *obj_ezsigntemplatepackagesigner = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackagesigner_edit_object_v1_requestJSON, "objEzsigntemplatepackagesigner");
    if (cJSON_IsNull(obj_ezsigntemplatepackagesigner)) {
        obj_ezsigntemplatepackagesigner = NULL;
    }
    if (!obj_ezsigntemplatepackagesigner) {
        goto end;
    }

    
    obj_ezsigntemplatepackagesigner_local_nonprim = ezsigntemplatepackagesigner_request_compound_parseFromJSON(obj_ezsigntemplatepackagesigner); //nonprimitive


    ezsigntemplatepackagesigner_edit_object_v1_request_local_var = ezsigntemplatepackagesigner_edit_object_v1_request_create_internal (
        obj_ezsigntemplatepackagesigner_local_nonprim
        );

    return ezsigntemplatepackagesigner_edit_object_v1_request_local_var;
end:
    if (obj_ezsigntemplatepackagesigner_local_nonprim) {
        ezsigntemplatepackagesigner_request_compound_free(obj_ezsigntemplatepackagesigner_local_nonprim);
        obj_ezsigntemplatepackagesigner_local_nonprim = NULL;
    }
    return NULL;

}
