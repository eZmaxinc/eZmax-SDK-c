#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezmaxcustomer_patch_object_v1_request.h"



static ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request_create_internal(
    ezmaxcustomer_request_patch_t *obj_ezmaxcustomer
    ) {
    ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request_local_var = malloc(sizeof(ezmaxcustomer_patch_object_v1_request_t));
    if (!ezmaxcustomer_patch_object_v1_request_local_var) {
        return NULL;
    }
    memset(ezmaxcustomer_patch_object_v1_request_local_var, 0, sizeof(ezmaxcustomer_patch_object_v1_request_t));
    ezmaxcustomer_patch_object_v1_request_local_var->_library_owned = 1;
    ezmaxcustomer_patch_object_v1_request_local_var->obj_ezmaxcustomer = obj_ezmaxcustomer;
    return ezmaxcustomer_patch_object_v1_request_local_var;
}

__attribute__((deprecated)) ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request_create(
    ezmaxcustomer_request_patch_t *obj_ezmaxcustomer
    ) {
    ezmaxcustomer_patch_object_v1_request_t *result = ezmaxcustomer_patch_object_v1_request_create_internal (
        obj_ezmaxcustomer
        );
    if (!result) {
    }
    return result;
}

void ezmaxcustomer_patch_object_v1_request_free(ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request) {
    if(NULL == ezmaxcustomer_patch_object_v1_request){
        return ;
    }
    if(ezmaxcustomer_patch_object_v1_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezmaxcustomer_patch_object_v1_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezmaxcustomer_patch_object_v1_request->obj_ezmaxcustomer) {
        ezmaxcustomer_request_patch_free(ezmaxcustomer_patch_object_v1_request->obj_ezmaxcustomer);
        ezmaxcustomer_patch_object_v1_request->obj_ezmaxcustomer = NULL;
    }
    free(ezmaxcustomer_patch_object_v1_request);
}

cJSON *ezmaxcustomer_patch_object_v1_request_convertToJSON(ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezmaxcustomer_patch_object_v1_request->obj_ezmaxcustomer
    if (!ezmaxcustomer_patch_object_v1_request->obj_ezmaxcustomer) {
        goto fail;
    }
    cJSON *obj_ezmaxcustomer_local_JSON = ezmaxcustomer_request_patch_convertToJSON(ezmaxcustomer_patch_object_v1_request->obj_ezmaxcustomer);
    if(obj_ezmaxcustomer_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzmaxcustomer", obj_ezmaxcustomer_local_JSON);
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

ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request_parseFromJSON(cJSON *ezmaxcustomer_patch_object_v1_requestJSON){

    ezmaxcustomer_patch_object_v1_request_t *ezmaxcustomer_patch_object_v1_request_local_var = NULL;

    // define the local variable for ezmaxcustomer_patch_object_v1_request->obj_ezmaxcustomer
    ezmaxcustomer_request_patch_t *obj_ezmaxcustomer_local_nonprim = NULL;

    // ezmaxcustomer_patch_object_v1_request->obj_ezmaxcustomer
    cJSON *obj_ezmaxcustomer = cJSON_GetObjectItemCaseSensitive(ezmaxcustomer_patch_object_v1_requestJSON, "objEzmaxcustomer");
    if (cJSON_IsNull(obj_ezmaxcustomer)) {
        obj_ezmaxcustomer = NULL;
    }
    if (!obj_ezmaxcustomer) {
        goto end;
    }

    
    obj_ezmaxcustomer_local_nonprim = ezmaxcustomer_request_patch_parseFromJSON(obj_ezmaxcustomer); //nonprimitive



    ezmaxcustomer_patch_object_v1_request_local_var = ezmaxcustomer_patch_object_v1_request_create_internal (
        obj_ezmaxcustomer_local_nonprim
        );

    if (!ezmaxcustomer_patch_object_v1_request_local_var) {
        goto end;
    }

    return ezmaxcustomer_patch_object_v1_request_local_var;
end:
    if (obj_ezmaxcustomer_local_nonprim) {
        ezmaxcustomer_request_patch_free(obj_ezmaxcustomer_local_nonprim);
        obj_ezmaxcustomer_local_nonprim = NULL;
    }
    return NULL;

}
