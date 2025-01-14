#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignuser_edit_object_v1_request.h"



ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request_create(
    ezsignuser_request_compound_t *obj_ezsignuser
    ) {
    ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request_local_var = malloc(sizeof(ezsignuser_edit_object_v1_request_t));
    if (!ezsignuser_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsignuser_edit_object_v1_request_local_var->obj_ezsignuser = obj_ezsignuser;

    return ezsignuser_edit_object_v1_request_local_var;
}


void ezsignuser_edit_object_v1_request_free(ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request) {
    if(NULL == ezsignuser_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignuser_edit_object_v1_request->obj_ezsignuser) {
        ezsignuser_request_compound_free(ezsignuser_edit_object_v1_request->obj_ezsignuser);
        ezsignuser_edit_object_v1_request->obj_ezsignuser = NULL;
    }
    free(ezsignuser_edit_object_v1_request);
}

cJSON *ezsignuser_edit_object_v1_request_convertToJSON(ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignuser_edit_object_v1_request->obj_ezsignuser
    if (!ezsignuser_edit_object_v1_request->obj_ezsignuser) {
        goto fail;
    }
    cJSON *obj_ezsignuser_local_JSON = ezsignuser_request_compound_convertToJSON(ezsignuser_edit_object_v1_request->obj_ezsignuser);
    if(obj_ezsignuser_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignuser", obj_ezsignuser_local_JSON);
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

ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request_parseFromJSON(cJSON *ezsignuser_edit_object_v1_requestJSON){

    ezsignuser_edit_object_v1_request_t *ezsignuser_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsignuser_edit_object_v1_request->obj_ezsignuser
    ezsignuser_request_compound_t *obj_ezsignuser_local_nonprim = NULL;

    // ezsignuser_edit_object_v1_request->obj_ezsignuser
    cJSON *obj_ezsignuser = cJSON_GetObjectItemCaseSensitive(ezsignuser_edit_object_v1_requestJSON, "objEzsignuser");
    if (!obj_ezsignuser) {
        goto end;
    }

    
    obj_ezsignuser_local_nonprim = ezsignuser_request_compound_parseFromJSON(obj_ezsignuser); //nonprimitive


    ezsignuser_edit_object_v1_request_local_var = ezsignuser_edit_object_v1_request_create (
        obj_ezsignuser_local_nonprim
        );

    return ezsignuser_edit_object_v1_request_local_var;
end:
    if (obj_ezsignuser_local_nonprim) {
        ezsignuser_request_compound_free(obj_ezsignuser_local_nonprim);
        obj_ezsignuser_local_nonprim = NULL;
    }
    return NULL;

}
