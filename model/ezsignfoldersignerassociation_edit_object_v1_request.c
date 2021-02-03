#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_edit_object_v1_request.h"



ezsignfoldersignerassociation_edit_object_v1_request_t *ezsignfoldersignerassociation_edit_object_v1_request_create(
    ezsignfoldersignerassociation_request_t *obj_ezsignfoldersignerassociation
    ) {
    ezsignfoldersignerassociation_edit_object_v1_request_t *ezsignfoldersignerassociation_edit_object_v1_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_edit_object_v1_request_t));
    if (!ezsignfoldersignerassociation_edit_object_v1_request_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_edit_object_v1_request_local_var->obj_ezsignfoldersignerassociation = obj_ezsignfoldersignerassociation;

    return ezsignfoldersignerassociation_edit_object_v1_request_local_var;
}


void ezsignfoldersignerassociation_edit_object_v1_request_free(ezsignfoldersignerassociation_edit_object_v1_request_t *ezsignfoldersignerassociation_edit_object_v1_request) {
    if(NULL == ezsignfoldersignerassociation_edit_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation) {
        ezsignfoldersignerassociation_request_free(ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation);
        ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation = NULL;
    }
    free(ezsignfoldersignerassociation_edit_object_v1_request);
}

cJSON *ezsignfoldersignerassociation_edit_object_v1_request_convertToJSON(ezsignfoldersignerassociation_edit_object_v1_request_t *ezsignfoldersignerassociation_edit_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation
    if(ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation) { 
    cJSON *obj_ezsignfoldersignerassociation_local_JSON = ezsignfoldersignerassociation_request_convertToJSON(ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation);
    if(obj_ezsignfoldersignerassociation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldersignerassociation", obj_ezsignfoldersignerassociation_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldersignerassociation_edit_object_v1_request_t *ezsignfoldersignerassociation_edit_object_v1_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_edit_object_v1_requestJSON){

    ezsignfoldersignerassociation_edit_object_v1_request_t *ezsignfoldersignerassociation_edit_object_v1_request_local_var = NULL;

    // ezsignfoldersignerassociation_edit_object_v1_request->obj_ezsignfoldersignerassociation
    cJSON *obj_ezsignfoldersignerassociation = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_edit_object_v1_requestJSON, "objEzsignfoldersignerassociation");
    ezsignfoldersignerassociation_request_t *obj_ezsignfoldersignerassociation_local_nonprim = NULL;
    if (obj_ezsignfoldersignerassociation) { 
    obj_ezsignfoldersignerassociation_local_nonprim = ezsignfoldersignerassociation_request_parseFromJSON(obj_ezsignfoldersignerassociation); //nonprimitive
    }


    ezsignfoldersignerassociation_edit_object_v1_request_local_var = ezsignfoldersignerassociation_edit_object_v1_request_create (
        obj_ezsignfoldersignerassociation ? obj_ezsignfoldersignerassociation_local_nonprim : NULL
        );

    return ezsignfoldersignerassociation_edit_object_v1_request_local_var;
end:
    if (obj_ezsignfoldersignerassociation_local_nonprim) {
        ezsignfoldersignerassociation_request_free(obj_ezsignfoldersignerassociation_local_nonprim);
        obj_ezsignfoldersignerassociation_local_nonprim = NULL;
    }
    return NULL;

}
