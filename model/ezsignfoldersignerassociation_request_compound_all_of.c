#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_request_compound_all_of.h"



ezsignfoldersignerassociation_request_compound_all_of_t *ezsignfoldersignerassociation_request_compound_all_of_create(
    ezsignsigner_request_compound_t *obj_ezsignsigner
    ) {
    ezsignfoldersignerassociation_request_compound_all_of_t *ezsignfoldersignerassociation_request_compound_all_of_local_var = malloc(sizeof(ezsignfoldersignerassociation_request_compound_all_of_t));
    if (!ezsignfoldersignerassociation_request_compound_all_of_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_request_compound_all_of_local_var->obj_ezsignsigner = obj_ezsignsigner;

    return ezsignfoldersignerassociation_request_compound_all_of_local_var;
}


void ezsignfoldersignerassociation_request_compound_all_of_free(ezsignfoldersignerassociation_request_compound_all_of_t *ezsignfoldersignerassociation_request_compound_all_of) {
    if(NULL == ezsignfoldersignerassociation_request_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_request_compound_all_of->obj_ezsignsigner) {
        ezsignsigner_request_compound_free(ezsignfoldersignerassociation_request_compound_all_of->obj_ezsignsigner);
        ezsignfoldersignerassociation_request_compound_all_of->obj_ezsignsigner = NULL;
    }
    free(ezsignfoldersignerassociation_request_compound_all_of);
}

cJSON *ezsignfoldersignerassociation_request_compound_all_of_convertToJSON(ezsignfoldersignerassociation_request_compound_all_of_t *ezsignfoldersignerassociation_request_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_request_compound_all_of->obj_ezsignsigner
    if(ezsignfoldersignerassociation_request_compound_all_of->obj_ezsignsigner) {
    cJSON *obj_ezsignsigner_local_JSON = ezsignsigner_request_compound_convertToJSON(ezsignfoldersignerassociation_request_compound_all_of->obj_ezsignsigner);
    if(obj_ezsignsigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsigner", obj_ezsignsigner_local_JSON);
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

ezsignfoldersignerassociation_request_compound_all_of_t *ezsignfoldersignerassociation_request_compound_all_of_parseFromJSON(cJSON *ezsignfoldersignerassociation_request_compound_all_ofJSON){

    ezsignfoldersignerassociation_request_compound_all_of_t *ezsignfoldersignerassociation_request_compound_all_of_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_request_compound_all_of->obj_ezsignsigner
    ezsignsigner_request_compound_t *obj_ezsignsigner_local_nonprim = NULL;

    // ezsignfoldersignerassociation_request_compound_all_of->obj_ezsignsigner
    cJSON *obj_ezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compound_all_ofJSON, "objEzsignsigner");
    if (obj_ezsignsigner) { 
    obj_ezsignsigner_local_nonprim = ezsignsigner_request_compound_parseFromJSON(obj_ezsignsigner); //nonprimitive
    }


    ezsignfoldersignerassociation_request_compound_all_of_local_var = ezsignfoldersignerassociation_request_compound_all_of_create (
        obj_ezsignsigner ? obj_ezsignsigner_local_nonprim : NULL
        );

    return ezsignfoldersignerassociation_request_compound_all_of_local_var;
end:
    if (obj_ezsignsigner_local_nonprim) {
        ezsignsigner_request_compound_free(obj_ezsignsigner_local_nonprim);
        obj_ezsignsigner_local_nonprim = NULL;
    }
    return NULL;

}
