#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "systemconfiguration_edit_object_v1_request.h"



static systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request_create_internal(
    systemconfiguration_request_compound_t *obj_systemconfiguration
    ) {
    systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request_local_var = malloc(sizeof(systemconfiguration_edit_object_v1_request_t));
    if (!systemconfiguration_edit_object_v1_request_local_var) {
        return NULL;
    }
    systemconfiguration_edit_object_v1_request_local_var->obj_systemconfiguration = obj_systemconfiguration;

    systemconfiguration_edit_object_v1_request_local_var->_library_owned = 1;
    return systemconfiguration_edit_object_v1_request_local_var;
}

__attribute__((deprecated)) systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request_create(
    systemconfiguration_request_compound_t *obj_systemconfiguration
    ) {
    return systemconfiguration_edit_object_v1_request_create_internal (
        obj_systemconfiguration
        );
}

void systemconfiguration_edit_object_v1_request_free(systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request) {
    if(NULL == systemconfiguration_edit_object_v1_request){
        return ;
    }
    if(systemconfiguration_edit_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "systemconfiguration_edit_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (systemconfiguration_edit_object_v1_request->obj_systemconfiguration) {
        systemconfiguration_request_compound_free(systemconfiguration_edit_object_v1_request->obj_systemconfiguration);
        systemconfiguration_edit_object_v1_request->obj_systemconfiguration = NULL;
    }
    free(systemconfiguration_edit_object_v1_request);
}

cJSON *systemconfiguration_edit_object_v1_request_convertToJSON(systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // systemconfiguration_edit_object_v1_request->obj_systemconfiguration
    if (!systemconfiguration_edit_object_v1_request->obj_systemconfiguration) {
        goto fail;
    }
    cJSON *obj_systemconfiguration_local_JSON = systemconfiguration_request_compound_convertToJSON(systemconfiguration_edit_object_v1_request->obj_systemconfiguration);
    if(obj_systemconfiguration_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objSystemconfiguration", obj_systemconfiguration_local_JSON);
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

systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request_parseFromJSON(cJSON *systemconfiguration_edit_object_v1_requestJSON){

    systemconfiguration_edit_object_v1_request_t *systemconfiguration_edit_object_v1_request_local_var = NULL;

    // define the local variable for systemconfiguration_edit_object_v1_request->obj_systemconfiguration
    systemconfiguration_request_compound_t *obj_systemconfiguration_local_nonprim = NULL;

    // systemconfiguration_edit_object_v1_request->obj_systemconfiguration
    cJSON *obj_systemconfiguration = cJSON_GetObjectItemCaseSensitive(systemconfiguration_edit_object_v1_requestJSON, "objSystemconfiguration");
    if (cJSON_IsNull(obj_systemconfiguration)) {
        obj_systemconfiguration = NULL;
    }
    if (!obj_systemconfiguration) {
        goto end;
    }

    
    obj_systemconfiguration_local_nonprim = systemconfiguration_request_compound_parseFromJSON(obj_systemconfiguration); //nonprimitive


    systemconfiguration_edit_object_v1_request_local_var = systemconfiguration_edit_object_v1_request_create_internal (
        obj_systemconfiguration_local_nonprim
        );

    return systemconfiguration_edit_object_v1_request_local_var;
end:
    if (obj_systemconfiguration_local_nonprim) {
        systemconfiguration_request_compound_free(obj_systemconfiguration_local_nonprim);
        obj_systemconfiguration_local_nonprim = NULL;
    }
    return NULL;

}
