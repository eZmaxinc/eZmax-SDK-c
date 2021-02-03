#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignature_create_object_v1_request.h"



ezsignsignature_create_object_v1_request_t *ezsignsignature_create_object_v1_request_create(
    ezsignsignature_request_t *obj_ezsignsignature,
    ezsignsignature_request_compound_t *obj_ezsignsignature_compound
    ) {
    ezsignsignature_create_object_v1_request_t *ezsignsignature_create_object_v1_request_local_var = malloc(sizeof(ezsignsignature_create_object_v1_request_t));
    if (!ezsignsignature_create_object_v1_request_local_var) {
        return NULL;
    }
    ezsignsignature_create_object_v1_request_local_var->obj_ezsignsignature = obj_ezsignsignature;
    ezsignsignature_create_object_v1_request_local_var->obj_ezsignsignature_compound = obj_ezsignsignature_compound;

    return ezsignsignature_create_object_v1_request_local_var;
}


void ezsignsignature_create_object_v1_request_free(ezsignsignature_create_object_v1_request_t *ezsignsignature_create_object_v1_request) {
    if(NULL == ezsignsignature_create_object_v1_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignature_create_object_v1_request->obj_ezsignsignature) {
        ezsignsignature_request_free(ezsignsignature_create_object_v1_request->obj_ezsignsignature);
        ezsignsignature_create_object_v1_request->obj_ezsignsignature = NULL;
    }
    if (ezsignsignature_create_object_v1_request->obj_ezsignsignature_compound) {
        ezsignsignature_request_compound_free(ezsignsignature_create_object_v1_request->obj_ezsignsignature_compound);
        ezsignsignature_create_object_v1_request->obj_ezsignsignature_compound = NULL;
    }
    free(ezsignsignature_create_object_v1_request);
}

cJSON *ezsignsignature_create_object_v1_request_convertToJSON(ezsignsignature_create_object_v1_request_t *ezsignsignature_create_object_v1_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignature_create_object_v1_request->obj_ezsignsignature
    if(ezsignsignature_create_object_v1_request->obj_ezsignsignature) { 
    cJSON *obj_ezsignsignature_local_JSON = ezsignsignature_request_convertToJSON(ezsignsignature_create_object_v1_request->obj_ezsignsignature);
    if(obj_ezsignsignature_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignature", obj_ezsignsignature_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // ezsignsignature_create_object_v1_request->obj_ezsignsignature_compound
    if(ezsignsignature_create_object_v1_request->obj_ezsignsignature_compound) { 
    cJSON *obj_ezsignsignature_compound_local_JSON = ezsignsignature_request_compound_convertToJSON(ezsignsignature_create_object_v1_request->obj_ezsignsignature_compound);
    if(obj_ezsignsignature_compound_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignatureCompound", obj_ezsignsignature_compound_local_JSON);
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

ezsignsignature_create_object_v1_request_t *ezsignsignature_create_object_v1_request_parseFromJSON(cJSON *ezsignsignature_create_object_v1_requestJSON){

    ezsignsignature_create_object_v1_request_t *ezsignsignature_create_object_v1_request_local_var = NULL;

    // ezsignsignature_create_object_v1_request->obj_ezsignsignature
    cJSON *obj_ezsignsignature = cJSON_GetObjectItemCaseSensitive(ezsignsignature_create_object_v1_requestJSON, "objEzsignsignature");
    ezsignsignature_request_t *obj_ezsignsignature_local_nonprim = NULL;
    if (obj_ezsignsignature) { 
    obj_ezsignsignature_local_nonprim = ezsignsignature_request_parseFromJSON(obj_ezsignsignature); //nonprimitive
    }

    // ezsignsignature_create_object_v1_request->obj_ezsignsignature_compound
    cJSON *obj_ezsignsignature_compound = cJSON_GetObjectItemCaseSensitive(ezsignsignature_create_object_v1_requestJSON, "objEzsignsignatureCompound");
    ezsignsignature_request_compound_t *obj_ezsignsignature_compound_local_nonprim = NULL;
    if (obj_ezsignsignature_compound) { 
    obj_ezsignsignature_compound_local_nonprim = ezsignsignature_request_compound_parseFromJSON(obj_ezsignsignature_compound); //nonprimitive
    }


    ezsignsignature_create_object_v1_request_local_var = ezsignsignature_create_object_v1_request_create (
        obj_ezsignsignature ? obj_ezsignsignature_local_nonprim : NULL,
        obj_ezsignsignature_compound ? obj_ezsignsignature_compound_local_nonprim : NULL
        );

    return ezsignsignature_create_object_v1_request_local_var;
end:
    if (obj_ezsignsignature_local_nonprim) {
        ezsignsignature_request_free(obj_ezsignsignature_local_nonprim);
        obj_ezsignsignature_local_nonprim = NULL;
    }
    if (obj_ezsignsignature_compound_local_nonprim) {
        ezsignsignature_request_compound_free(obj_ezsignsignature_compound_local_nonprim);
        obj_ezsignsignature_compound_local_nonprim = NULL;
    }
    return NULL;

}
