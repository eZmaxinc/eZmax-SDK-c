#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_edit_object_v1_request.h"



ezsigntemplatepackage_edit_object_v1_request_t *ezsigntemplatepackage_edit_object_v1_request_create(
    ezsigntemplatepackage_request_compound_t *obj_ezsigntemplatepackage
    ) {
    ezsigntemplatepackage_edit_object_v1_request_t *ezsigntemplatepackage_edit_object_v1_request_local_var = malloc(sizeof(ezsigntemplatepackage_edit_object_v1_request_t));
    if (!ezsigntemplatepackage_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsigntemplatepackage_edit_object_v1_request_local_var->obj_ezsigntemplatepackage = obj_ezsigntemplatepackage;

    return ezsigntemplatepackage_edit_object_v1_request_local_var;
}


void ezsigntemplatepackage_edit_object_v1_request_free(ezsigntemplatepackage_edit_object_v1_request_t *ezsigntemplatepackage_edit_object_v1_request) {
    if(NULL == ezsigntemplatepackage_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_edit_object_v1_request->obj_ezsigntemplatepackage) {
        ezsigntemplatepackage_request_compound_free(ezsigntemplatepackage_edit_object_v1_request->obj_ezsigntemplatepackage);
        ezsigntemplatepackage_edit_object_v1_request->obj_ezsigntemplatepackage = NULL;
    }
    free(ezsigntemplatepackage_edit_object_v1_request);
}

cJSON *ezsigntemplatepackage_edit_object_v1_request_convertToJSON(ezsigntemplatepackage_edit_object_v1_request_t *ezsigntemplatepackage_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_edit_object_v1_request->obj_ezsigntemplatepackage
    if (!ezsigntemplatepackage_edit_object_v1_request->obj_ezsigntemplatepackage) {
        goto fail;
    }
    cJSON *obj_ezsigntemplatepackage_local_JSON = ezsigntemplatepackage_request_compound_convertToJSON(ezsigntemplatepackage_edit_object_v1_request->obj_ezsigntemplatepackage);
    if(obj_ezsigntemplatepackage_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsigntemplatepackage", obj_ezsigntemplatepackage_local_JSON);
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

ezsigntemplatepackage_edit_object_v1_request_t *ezsigntemplatepackage_edit_object_v1_request_parseFromJSON(cJSON *ezsigntemplatepackage_edit_object_v1_requestJSON){

    ezsigntemplatepackage_edit_object_v1_request_t *ezsigntemplatepackage_edit_object_v1_request_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_edit_object_v1_request->obj_ezsigntemplatepackage
    ezsigntemplatepackage_request_compound_t *obj_ezsigntemplatepackage_local_nonprim = NULL;

    // ezsigntemplatepackage_edit_object_v1_request->obj_ezsigntemplatepackage
    cJSON *obj_ezsigntemplatepackage = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_edit_object_v1_requestJSON, "objEzsigntemplatepackage");
    if (!obj_ezsigntemplatepackage) {
        goto end;
    }

    
    obj_ezsigntemplatepackage_local_nonprim = ezsigntemplatepackage_request_compound_parseFromJSON(obj_ezsigntemplatepackage); //nonprimitive


    ezsigntemplatepackage_edit_object_v1_request_local_var = ezsigntemplatepackage_edit_object_v1_request_create (
        obj_ezsigntemplatepackage_local_nonprim
        );

    return ezsigntemplatepackage_edit_object_v1_request_local_var;
end:
    if (obj_ezsigntemplatepackage_local_nonprim) {
        ezsigntemplatepackage_request_compound_free(obj_ezsigntemplatepackage_local_nonprim);
        obj_ezsigntemplatepackage_local_nonprim = NULL;
    }
    return NULL;

}
