#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_create_object_v1_request.h"



ezsignfoldersignerassociation_create_object_v1_request_t *ezsignfoldersignerassociation_create_object_v1_request_create(
    ezsignfoldersignerassociation_request_t *obj_ezsignfoldersignerassociation,
    ezsignfoldersignerassociation_request_compound_t *obj_ezsignfoldersignerassociation_compound
    ) {
    ezsignfoldersignerassociation_create_object_v1_request_t *ezsignfoldersignerassociation_create_object_v1_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_create_object_v1_request_t));
    if (!ezsignfoldersignerassociation_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_create_object_v1_request_local_var->obj_ezsignfoldersignerassociation = obj_ezsignfoldersignerassociation;
    ezsignfoldersignerassociation_create_object_v1_request_local_var->obj_ezsignfoldersignerassociation_compound = obj_ezsignfoldersignerassociation_compound;

    return ezsignfoldersignerassociation_create_object_v1_request_local_var;
}


void ezsignfoldersignerassociation_create_object_v1_request_free(ezsignfoldersignerassociation_create_object_v1_request_t *ezsignfoldersignerassociation_create_object_v1_request) {
    if(NULL == ezsignfoldersignerassociation_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation) {
        ezsignfoldersignerassociation_request_free(ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation);
        ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation = NULL;
    }
    if (ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation_compound) {
        ezsignfoldersignerassociation_request_compound_free(ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation_compound);
        ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation_compound = NULL;
    }
    free(ezsignfoldersignerassociation_create_object_v1_request);
}

cJSON *ezsignfoldersignerassociation_create_object_v1_request_convertToJSON(ezsignfoldersignerassociation_create_object_v1_request_t *ezsignfoldersignerassociation_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation
    if(ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation) { 
    cJSON *obj_ezsignfoldersignerassociation_local_JSON = ezsignfoldersignerassociation_request_convertToJSON(ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation);
    if(obj_ezsignfoldersignerassociation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldersignerassociation", obj_ezsignfoldersignerassociation_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation_compound
    if(ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation_compound) { 
    cJSON *obj_ezsignfoldersignerassociation_compound_local_JSON = ezsignfoldersignerassociation_request_compound_convertToJSON(ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation_compound);
    if(obj_ezsignfoldersignerassociation_compound_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignfoldersignerassociationCompound", obj_ezsignfoldersignerassociation_compound_local_JSON);
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

ezsignfoldersignerassociation_create_object_v1_request_t *ezsignfoldersignerassociation_create_object_v1_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_create_object_v1_requestJSON){

    ezsignfoldersignerassociation_create_object_v1_request_t *ezsignfoldersignerassociation_create_object_v1_request_local_var = NULL;

    // ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation
    cJSON *obj_ezsignfoldersignerassociation = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_object_v1_requestJSON, "objEzsignfoldersignerassociation");
    ezsignfoldersignerassociation_request_t *obj_ezsignfoldersignerassociation_local_nonprim = NULL;
    if (obj_ezsignfoldersignerassociation) { 
    obj_ezsignfoldersignerassociation_local_nonprim = ezsignfoldersignerassociation_request_parseFromJSON(obj_ezsignfoldersignerassociation); //nonprimitive
    }

    // ezsignfoldersignerassociation_create_object_v1_request->obj_ezsignfoldersignerassociation_compound
    cJSON *obj_ezsignfoldersignerassociation_compound = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_create_object_v1_requestJSON, "objEzsignfoldersignerassociationCompound");
    ezsignfoldersignerassociation_request_compound_t *obj_ezsignfoldersignerassociation_compound_local_nonprim = NULL;
    if (obj_ezsignfoldersignerassociation_compound) { 
    obj_ezsignfoldersignerassociation_compound_local_nonprim = ezsignfoldersignerassociation_request_compound_parseFromJSON(obj_ezsignfoldersignerassociation_compound); //nonprimitive
    }


    ezsignfoldersignerassociation_create_object_v1_request_local_var = ezsignfoldersignerassociation_create_object_v1_request_create (
        obj_ezsignfoldersignerassociation ? obj_ezsignfoldersignerassociation_local_nonprim : NULL,
        obj_ezsignfoldersignerassociation_compound ? obj_ezsignfoldersignerassociation_compound_local_nonprim : NULL
        );

    return ezsignfoldersignerassociation_create_object_v1_request_local_var;
end:
    if (obj_ezsignfoldersignerassociation_local_nonprim) {
        ezsignfoldersignerassociation_request_free(obj_ezsignfoldersignerassociation_local_nonprim);
        obj_ezsignfoldersignerassociation_local_nonprim = NULL;
    }
    if (obj_ezsignfoldersignerassociation_compound_local_nonprim) {
        ezsignfoldersignerassociation_request_compound_free(obj_ezsignfoldersignerassociation_compound_local_nonprim);
        obj_ezsignfoldersignerassociation_compound_local_nonprim = NULL;
    }
    return NULL;

}
