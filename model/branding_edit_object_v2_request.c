#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "branding_edit_object_v2_request.h"



static branding_edit_object_v2_request_t *branding_edit_object_v2_request_create_internal(
    branding_request_compound_v2_t *obj_branding
    ) {
    branding_edit_object_v2_request_t *branding_edit_object_v2_request_local_var = malloc(sizeof(branding_edit_object_v2_request_t));
    if (!branding_edit_object_v2_request_local_var) {
        return NULL;
    }
    branding_edit_object_v2_request_local_var->obj_branding = obj_branding;

    branding_edit_object_v2_request_local_var->_library_owned = 1;
    return branding_edit_object_v2_request_local_var;
}

__attribute__((deprecated)) branding_edit_object_v2_request_t *branding_edit_object_v2_request_create(
    branding_request_compound_v2_t *obj_branding
    ) {
    return branding_edit_object_v2_request_create_internal (
        obj_branding
        );
}

void branding_edit_object_v2_request_free(branding_edit_object_v2_request_t *branding_edit_object_v2_request) {
    if(NULL == branding_edit_object_v2_request){
        return ;
    }
    if(branding_edit_object_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "branding_edit_object_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (branding_edit_object_v2_request->obj_branding) {
        branding_request_compound_v2_free(branding_edit_object_v2_request->obj_branding);
        branding_edit_object_v2_request->obj_branding = NULL;
    }
    free(branding_edit_object_v2_request);
}

cJSON *branding_edit_object_v2_request_convertToJSON(branding_edit_object_v2_request_t *branding_edit_object_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // branding_edit_object_v2_request->obj_branding
    if (!branding_edit_object_v2_request->obj_branding) {
        goto fail;
    }
    cJSON *obj_branding_local_JSON = branding_request_compound_v2_convertToJSON(branding_edit_object_v2_request->obj_branding);
    if(obj_branding_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objBranding", obj_branding_local_JSON);
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

branding_edit_object_v2_request_t *branding_edit_object_v2_request_parseFromJSON(cJSON *branding_edit_object_v2_requestJSON){

    branding_edit_object_v2_request_t *branding_edit_object_v2_request_local_var = NULL;

    // define the local variable for branding_edit_object_v2_request->obj_branding
    branding_request_compound_v2_t *obj_branding_local_nonprim = NULL;

    // branding_edit_object_v2_request->obj_branding
    cJSON *obj_branding = cJSON_GetObjectItemCaseSensitive(branding_edit_object_v2_requestJSON, "objBranding");
    if (cJSON_IsNull(obj_branding)) {
        obj_branding = NULL;
    }
    if (!obj_branding) {
        goto end;
    }

    
    obj_branding_local_nonprim = branding_request_compound_v2_parseFromJSON(obj_branding); //nonprimitive


    branding_edit_object_v2_request_local_var = branding_edit_object_v2_request_create_internal (
        obj_branding_local_nonprim
        );

    return branding_edit_object_v2_request_local_var;
end:
    if (obj_branding_local_nonprim) {
        branding_request_compound_v2_free(obj_branding_local_nonprim);
        obj_branding_local_nonprim = NULL;
    }
    return NULL;

}
