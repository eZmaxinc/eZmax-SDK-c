#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_patch_object_v1_request.h"



ezsignfoldersignerassociation_patch_object_v1_request_t *ezsignfoldersignerassociation_patch_object_v1_request_create(
    ezsignfoldersignerassociation_request_patch_t *obj_ezsignfoldersignerassociation
    ) {
    ezsignfoldersignerassociation_patch_object_v1_request_t *ezsignfoldersignerassociation_patch_object_v1_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_patch_object_v1_request_t));
    if (!ezsignfoldersignerassociation_patch_object_v1_request_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_patch_object_v1_request_local_var->obj_ezsignfoldersignerassociation = obj_ezsignfoldersignerassociation;

    return ezsignfoldersignerassociation_patch_object_v1_request_local_var;
}


void ezsignfoldersignerassociation_patch_object_v1_request_free(ezsignfoldersignerassociation_patch_object_v1_request_t *ezsignfoldersignerassociation_patch_object_v1_request) {
    if(NULL == ezsignfoldersignerassociation_patch_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_patch_object_v1_request->obj_ezsignfoldersignerassociation) {
        ezsignfoldersignerassociation_request_patch_free(ezsignfoldersignerassociation_patch_object_v1_request->obj_ezsignfoldersignerassociation);
        ezsignfoldersignerassociation_patch_object_v1_request->obj_ezsignfoldersignerassociation = NULL;
    }
    free(ezsignfoldersignerassociation_patch_object_v1_request);
}

cJSON *ezsignfoldersignerassociation_patch_object_v1_request_convertToJSON(ezsignfoldersignerassociation_patch_object_v1_request_t *ezsignfoldersignerassociation_patch_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_patch_object_v1_request->obj_ezsignfoldersignerassociation
    if (!ezsignfoldersignerassociation_patch_object_v1_request->obj_ezsignfoldersignerassociation) {
        goto fail;
    }
    cJSON *obj_ezsignfoldersignerassociation_local_JSON = ezsignfoldersignerassociation_request_patch_convertToJSON(ezsignfoldersignerassociation_patch_object_v1_request->obj_ezsignfoldersignerassociation);
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

ezsignfoldersignerassociation_patch_object_v1_request_t *ezsignfoldersignerassociation_patch_object_v1_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_patch_object_v1_requestJSON){

    ezsignfoldersignerassociation_patch_object_v1_request_t *ezsignfoldersignerassociation_patch_object_v1_request_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_patch_object_v1_request->obj_ezsignfoldersignerassociation
    ezsignfoldersignerassociation_request_patch_t *obj_ezsignfoldersignerassociation_local_nonprim = NULL;

    // ezsignfoldersignerassociation_patch_object_v1_request->obj_ezsignfoldersignerassociation
    cJSON *obj_ezsignfoldersignerassociation = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_patch_object_v1_requestJSON, "objEzsignfoldersignerassociation");
    if (!obj_ezsignfoldersignerassociation) {
        goto end;
    }

    
    obj_ezsignfoldersignerassociation_local_nonprim = ezsignfoldersignerassociation_request_patch_parseFromJSON(obj_ezsignfoldersignerassociation); //nonprimitive


    ezsignfoldersignerassociation_patch_object_v1_request_local_var = ezsignfoldersignerassociation_patch_object_v1_request_create (
        obj_ezsignfoldersignerassociation_local_nonprim
        );

    return ezsignfoldersignerassociation_patch_object_v1_request_local_var;
end:
    if (obj_ezsignfoldersignerassociation_local_nonprim) {
        ezsignfoldersignerassociation_request_patch_free(obj_ezsignfoldersignerassociation_local_nonprim);
        obj_ezsignfoldersignerassociation_local_nonprim = NULL;
    }
    return NULL;

}
