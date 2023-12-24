#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsigningreason_edit_object_v1_request.h"



ezsignsigningreason_edit_object_v1_request_t *ezsignsigningreason_edit_object_v1_request_create(
    ezsignsigningreason_request_compound_t *obj_ezsignsigningreason
    ) {
    ezsignsigningreason_edit_object_v1_request_t *ezsignsigningreason_edit_object_v1_request_local_var = malloc(sizeof(ezsignsigningreason_edit_object_v1_request_t));
    if (!ezsignsigningreason_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsignsigningreason_edit_object_v1_request_local_var->obj_ezsignsigningreason = obj_ezsignsigningreason;

    return ezsignsigningreason_edit_object_v1_request_local_var;
}


void ezsignsigningreason_edit_object_v1_request_free(ezsignsigningreason_edit_object_v1_request_t *ezsignsigningreason_edit_object_v1_request) {
    if(NULL == ezsignsigningreason_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsigningreason_edit_object_v1_request->obj_ezsignsigningreason) {
        ezsignsigningreason_request_compound_free(ezsignsigningreason_edit_object_v1_request->obj_ezsignsigningreason);
        ezsignsigningreason_edit_object_v1_request->obj_ezsignsigningreason = NULL;
    }
    free(ezsignsigningreason_edit_object_v1_request);
}

cJSON *ezsignsigningreason_edit_object_v1_request_convertToJSON(ezsignsigningreason_edit_object_v1_request_t *ezsignsigningreason_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsigningreason_edit_object_v1_request->obj_ezsignsigningreason
    if (!ezsignsigningreason_edit_object_v1_request->obj_ezsignsigningreason) {
        goto fail;
    }
    cJSON *obj_ezsignsigningreason_local_JSON = ezsignsigningreason_request_compound_convertToJSON(ezsignsigningreason_edit_object_v1_request->obj_ezsignsigningreason);
    if(obj_ezsignsigningreason_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsigningreason", obj_ezsignsigningreason_local_JSON);
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

ezsignsigningreason_edit_object_v1_request_t *ezsignsigningreason_edit_object_v1_request_parseFromJSON(cJSON *ezsignsigningreason_edit_object_v1_requestJSON){

    ezsignsigningreason_edit_object_v1_request_t *ezsignsigningreason_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsignsigningreason_edit_object_v1_request->obj_ezsignsigningreason
    ezsignsigningreason_request_compound_t *obj_ezsignsigningreason_local_nonprim = NULL;

    // ezsignsigningreason_edit_object_v1_request->obj_ezsignsigningreason
    cJSON *obj_ezsignsigningreason = cJSON_GetObjectItemCaseSensitive(ezsignsigningreason_edit_object_v1_requestJSON, "objEzsignsigningreason");
    if (!obj_ezsignsigningreason) {
        goto end;
    }

    
    obj_ezsignsigningreason_local_nonprim = ezsignsigningreason_request_compound_parseFromJSON(obj_ezsignsigningreason); //nonprimitive


    ezsignsigningreason_edit_object_v1_request_local_var = ezsignsigningreason_edit_object_v1_request_create (
        obj_ezsignsigningreason_local_nonprim
        );

    return ezsignsigningreason_edit_object_v1_request_local_var;
end:
    if (obj_ezsignsigningreason_local_nonprim) {
        ezsignsigningreason_request_compound_free(obj_ezsignsigningreason_local_nonprim);
        obj_ezsignsigningreason_local_nonprim = NULL;
    }
    return NULL;

}
