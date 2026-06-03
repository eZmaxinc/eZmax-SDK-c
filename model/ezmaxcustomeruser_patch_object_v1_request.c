#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxcustomeruser_patch_object_v1_request.h"



static ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request_create_internal(
    ezmaxcustomeruser_request_patch_t *obj_ezmaxcustomeruser
    ) {
    ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request_local_var = malloc(sizeof(ezmaxcustomeruser_patch_object_v1_request_t));
    if (!ezmaxcustomeruser_patch_object_v1_request_local_var) {
        return NULL;
    }
    memset(ezmaxcustomeruser_patch_object_v1_request_local_var, 0, sizeof(ezmaxcustomeruser_patch_object_v1_request_t));
    ezmaxcustomeruser_patch_object_v1_request_local_var->_library_owned = 1;
    ezmaxcustomeruser_patch_object_v1_request_local_var->obj_ezmaxcustomeruser = obj_ezmaxcustomeruser;
    return ezmaxcustomeruser_patch_object_v1_request_local_var;
}

__attribute__((deprecated)) ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request_create(
    ezmaxcustomeruser_request_patch_t *obj_ezmaxcustomeruser
    ) {
    ezmaxcustomeruser_patch_object_v1_request_t *result = ezmaxcustomeruser_patch_object_v1_request_create_internal (
        obj_ezmaxcustomeruser
        );
    if (!result) {
    }
    return result;
}

void ezmaxcustomeruser_patch_object_v1_request_free(ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request) {
    if(NULL == ezmaxcustomeruser_patch_object_v1_request){
        return ;
    }
    if(ezmaxcustomeruser_patch_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxcustomeruser_patch_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxcustomeruser_patch_object_v1_request->obj_ezmaxcustomeruser) {
        ezmaxcustomeruser_request_patch_free(ezmaxcustomeruser_patch_object_v1_request->obj_ezmaxcustomeruser);
        ezmaxcustomeruser_patch_object_v1_request->obj_ezmaxcustomeruser = NULL;
    }
    free(ezmaxcustomeruser_patch_object_v1_request);
}

cJSON *ezmaxcustomeruser_patch_object_v1_request_convertToJSON(ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxcustomeruser_patch_object_v1_request->obj_ezmaxcustomeruser
    if (!ezmaxcustomeruser_patch_object_v1_request->obj_ezmaxcustomeruser) {
        goto fail;
    }
    cJSON *obj_ezmaxcustomeruser_local_JSON = ezmaxcustomeruser_request_patch_convertToJSON(ezmaxcustomeruser_patch_object_v1_request->obj_ezmaxcustomeruser);
    if(obj_ezmaxcustomeruser_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxcustomeruser", obj_ezmaxcustomeruser_local_JSON);
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

ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request_parseFromJSON(cJSON *ezmaxcustomeruser_patch_object_v1_requestJSON){

    ezmaxcustomeruser_patch_object_v1_request_t *ezmaxcustomeruser_patch_object_v1_request_local_var = NULL;

    // define the local variable for ezmaxcustomeruser_patch_object_v1_request->obj_ezmaxcustomeruser
    ezmaxcustomeruser_request_patch_t *obj_ezmaxcustomeruser_local_nonprim = NULL;

    // ezmaxcustomeruser_patch_object_v1_request->obj_ezmaxcustomeruser
    cJSON *obj_ezmaxcustomeruser = cJSON_GetObjectItemCaseSensitive(ezmaxcustomeruser_patch_object_v1_requestJSON, "objEzmaxcustomeruser");
    if (cJSON_IsNull(obj_ezmaxcustomeruser)) {
        obj_ezmaxcustomeruser = NULL;
    }
    if (!obj_ezmaxcustomeruser) {
        goto end;
    }

    
    obj_ezmaxcustomeruser_local_nonprim = ezmaxcustomeruser_request_patch_parseFromJSON(obj_ezmaxcustomeruser); //nonprimitive



    ezmaxcustomeruser_patch_object_v1_request_local_var = ezmaxcustomeruser_patch_object_v1_request_create_internal (
        obj_ezmaxcustomeruser_local_nonprim
        );

    if (!ezmaxcustomeruser_patch_object_v1_request_local_var) {
        goto end;
    }

    return ezmaxcustomeruser_patch_object_v1_request_local_var;
end:
    if (obj_ezmaxcustomeruser_local_nonprim) {
        ezmaxcustomeruser_request_patch_free(obj_ezmaxcustomeruser_local_nonprim);
        obj_ezmaxcustomeruser_local_nonprim = NULL;
    }
    return NULL;

}
