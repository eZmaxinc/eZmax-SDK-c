#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_edit_object_v2_request.h"



static ezsignfoldersignerassociation_edit_object_v2_request_t *ezsignfoldersignerassociation_edit_object_v2_request_create_internal(
    ezsignfoldersignerassociation_request_compound_v2_t *obj_ezsignfoldersignerassociation
    ) {
    ezsignfoldersignerassociation_edit_object_v2_request_t *ezsignfoldersignerassociation_edit_object_v2_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_edit_object_v2_request_t));
    if (!ezsignfoldersignerassociation_edit_object_v2_request_local_var) {
        return NULL;
    }
    memset(ezsignfoldersignerassociation_edit_object_v2_request_local_var, 0, sizeof(ezsignfoldersignerassociation_edit_object_v2_request_t));
    ezsignfoldersignerassociation_edit_object_v2_request_local_var->_library_owned = 1;
    ezsignfoldersignerassociation_edit_object_v2_request_local_var->obj_ezsignfoldersignerassociation = obj_ezsignfoldersignerassociation;
    return ezsignfoldersignerassociation_edit_object_v2_request_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_edit_object_v2_request_t *ezsignfoldersignerassociation_edit_object_v2_request_create(
    ezsignfoldersignerassociation_request_compound_v2_t *obj_ezsignfoldersignerassociation
    ) {
    ezsignfoldersignerassociation_edit_object_v2_request_t *result = ezsignfoldersignerassociation_edit_object_v2_request_create_internal (
        obj_ezsignfoldersignerassociation
        );
    if (!result) {
    }
    return result;
}

void ezsignfoldersignerassociation_edit_object_v2_request_free(ezsignfoldersignerassociation_edit_object_v2_request_t *ezsignfoldersignerassociation_edit_object_v2_request) {
    if(NULL == ezsignfoldersignerassociation_edit_object_v2_request){
        return ;
    }
    if(ezsignfoldersignerassociation_edit_object_v2_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_edit_object_v2_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_edit_object_v2_request->obj_ezsignfoldersignerassociation) {
        ezsignfoldersignerassociation_request_compound_v2_free(ezsignfoldersignerassociation_edit_object_v2_request->obj_ezsignfoldersignerassociation);
        ezsignfoldersignerassociation_edit_object_v2_request->obj_ezsignfoldersignerassociation = NULL;
    }
    free(ezsignfoldersignerassociation_edit_object_v2_request);
}

cJSON *ezsignfoldersignerassociation_edit_object_v2_request_convertToJSON(ezsignfoldersignerassociation_edit_object_v2_request_t *ezsignfoldersignerassociation_edit_object_v2_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_edit_object_v2_request->obj_ezsignfoldersignerassociation
    if (!ezsignfoldersignerassociation_edit_object_v2_request->obj_ezsignfoldersignerassociation) {
        goto fail;
    }
    cJSON *obj_ezsignfoldersignerassociation_local_JSON = ezsignfoldersignerassociation_request_compound_v2_convertToJSON(ezsignfoldersignerassociation_edit_object_v2_request->obj_ezsignfoldersignerassociation);
    if(obj_ezsignfoldersignerassociation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldersignerassociation", obj_ezsignfoldersignerassociation_local_JSON);
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

ezsignfoldersignerassociation_edit_object_v2_request_t *ezsignfoldersignerassociation_edit_object_v2_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_edit_object_v2_requestJSON){

    ezsignfoldersignerassociation_edit_object_v2_request_t *ezsignfoldersignerassociation_edit_object_v2_request_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_edit_object_v2_request->obj_ezsignfoldersignerassociation
    ezsignfoldersignerassociation_request_compound_v2_t *obj_ezsignfoldersignerassociation_local_nonprim = NULL;

    // ezsignfoldersignerassociation_edit_object_v2_request->obj_ezsignfoldersignerassociation
    cJSON *obj_ezsignfoldersignerassociation = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_edit_object_v2_requestJSON, "objEzsignfoldersignerassociation");
    if (cJSON_IsNull(obj_ezsignfoldersignerassociation)) {
        obj_ezsignfoldersignerassociation = NULL;
    }
    if (!obj_ezsignfoldersignerassociation) {
        goto end;
    }

    
    obj_ezsignfoldersignerassociation_local_nonprim = ezsignfoldersignerassociation_request_compound_v2_parseFromJSON(obj_ezsignfoldersignerassociation); //nonprimitive



    ezsignfoldersignerassociation_edit_object_v2_request_local_var = ezsignfoldersignerassociation_edit_object_v2_request_create_internal (
        obj_ezsignfoldersignerassociation_local_nonprim
        );

    if (!ezsignfoldersignerassociation_edit_object_v2_request_local_var) {
        goto end;
    }

    return ezsignfoldersignerassociation_edit_object_v2_request_local_var;
end:
    if (obj_ezsignfoldersignerassociation_local_nonprim) {
        ezsignfoldersignerassociation_request_compound_v2_free(obj_ezsignfoldersignerassociation_local_nonprim);
        obj_ezsignfoldersignerassociation_local_nonprim = NULL;
    }
    return NULL;

}
