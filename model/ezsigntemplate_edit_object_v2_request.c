#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplate_edit_object_v2_request.h"



ezsigntemplate_edit_object_v2_request_t *ezsigntemplate_edit_object_v2_request_create(
    ezsigntemplate_request_compound_v2_t *obj_ezsigntemplate
    ) {
    ezsigntemplate_edit_object_v2_request_t *ezsigntemplate_edit_object_v2_request_local_var = malloc(sizeof(ezsigntemplate_edit_object_v2_request_t));
    if (!ezsigntemplate_edit_object_v2_request_local_var) {
        return NULL;
    }
    ezsigntemplate_edit_object_v2_request_local_var->obj_ezsigntemplate = obj_ezsigntemplate;

    return ezsigntemplate_edit_object_v2_request_local_var;
}


void ezsigntemplate_edit_object_v2_request_free(ezsigntemplate_edit_object_v2_request_t *ezsigntemplate_edit_object_v2_request) {
    if(NULL == ezsigntemplate_edit_object_v2_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplate_edit_object_v2_request->obj_ezsigntemplate) {
        ezsigntemplate_request_compound_v2_free(ezsigntemplate_edit_object_v2_request->obj_ezsigntemplate);
        ezsigntemplate_edit_object_v2_request->obj_ezsigntemplate = NULL;
    }
    free(ezsigntemplate_edit_object_v2_request);
}

cJSON *ezsigntemplate_edit_object_v2_request_convertToJSON(ezsigntemplate_edit_object_v2_request_t *ezsigntemplate_edit_object_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplate_edit_object_v2_request->obj_ezsigntemplate
    if (!ezsigntemplate_edit_object_v2_request->obj_ezsigntemplate) {
        goto fail;
    }
    cJSON *obj_ezsigntemplate_local_JSON = ezsigntemplate_request_compound_v2_convertToJSON(ezsigntemplate_edit_object_v2_request->obj_ezsigntemplate);
    if(obj_ezsigntemplate_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplate", obj_ezsigntemplate_local_JSON);
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

ezsigntemplate_edit_object_v2_request_t *ezsigntemplate_edit_object_v2_request_parseFromJSON(cJSON *ezsigntemplate_edit_object_v2_requestJSON){

    ezsigntemplate_edit_object_v2_request_t *ezsigntemplate_edit_object_v2_request_local_var = NULL;

    // define the local variable for ezsigntemplate_edit_object_v2_request->obj_ezsigntemplate
    ezsigntemplate_request_compound_v2_t *obj_ezsigntemplate_local_nonprim = NULL;

    // ezsigntemplate_edit_object_v2_request->obj_ezsigntemplate
    cJSON *obj_ezsigntemplate = cJSON_GetObjectItemCaseSensitive(ezsigntemplate_edit_object_v2_requestJSON, "objEzsigntemplate");
    if (!obj_ezsigntemplate) {
        goto end;
    }

    
    obj_ezsigntemplate_local_nonprim = ezsigntemplate_request_compound_v2_parseFromJSON(obj_ezsigntemplate); //nonprimitive


    ezsigntemplate_edit_object_v2_request_local_var = ezsigntemplate_edit_object_v2_request_create (
        obj_ezsigntemplate_local_nonprim
        );

    return ezsigntemplate_edit_object_v2_request_local_var;
end:
    if (obj_ezsigntemplate_local_nonprim) {
        ezsigntemplate_request_compound_v2_free(obj_ezsigntemplate_local_nonprim);
        obj_ezsigntemplate_local_nonprim = NULL;
    }
    return NULL;

}
