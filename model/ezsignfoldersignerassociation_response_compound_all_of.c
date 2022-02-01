#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_response_compound_all_of.h"



ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of_create(
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    ezsignsigner_response_compound_t *obj_ezsignsigner
    ) {
    ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of_local_var = malloc(sizeof(ezsignfoldersignerassociation_response_compound_all_of_t));
    if (!ezsignfoldersignerassociation_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_response_compound_all_of_local_var->obj_user = obj_user;
    ezsignfoldersignerassociation_response_compound_all_of_local_var->obj_ezsignsigner = obj_ezsignsigner;

    return ezsignfoldersignerassociation_response_compound_all_of_local_var;
}


void ezsignfoldersignerassociation_response_compound_all_of_free(ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of) {
    if(NULL == ezsignfoldersignerassociation_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_response_compound_all_of->obj_user) {
        ezsignfoldersignerassociation_response_compound_user_free(ezsignfoldersignerassociation_response_compound_all_of->obj_user);
        ezsignfoldersignerassociation_response_compound_all_of->obj_user = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner) {
        ezsignsigner_response_compound_free(ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner);
        ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner = NULL;
    }
    free(ezsignfoldersignerassociation_response_compound_all_of);
}

cJSON *ezsignfoldersignerassociation_response_compound_all_of_convertToJSON(ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_response_compound_all_of->obj_user
    if(ezsignfoldersignerassociation_response_compound_all_of->obj_user) { 
    cJSON *obj_user_local_JSON = ezsignfoldersignerassociation_response_compound_user_convertToJSON(ezsignfoldersignerassociation_response_compound_all_of->obj_user);
    if(obj_user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUser", obj_user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner
    if(ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner) { 
    cJSON *obj_ezsignsigner_local_JSON = ezsignsigner_response_compound_convertToJSON(ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner);
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

ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of_parseFromJSON(cJSON *ezsignfoldersignerassociation_response_compound_all_ofJSON){

    ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_all_of->obj_user
    ezsignfoldersignerassociation_response_compound_user_t *obj_user_local_nonprim = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner
    ezsignsigner_response_compound_t *obj_ezsignsigner_local_nonprim = NULL;

    // ezsignfoldersignerassociation_response_compound_all_of->obj_user
    cJSON *obj_user = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_all_ofJSON, "objUser");
    if (obj_user) { 
    obj_user_local_nonprim = ezsignfoldersignerassociation_response_compound_user_parseFromJSON(obj_user); //nonprimitive
    }

    // ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner
    cJSON *obj_ezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_all_ofJSON, "objEzsignsigner");
    if (obj_ezsignsigner) { 
    obj_ezsignsigner_local_nonprim = ezsignsigner_response_compound_parseFromJSON(obj_ezsignsigner); //nonprimitive
    }


    ezsignfoldersignerassociation_response_compound_all_of_local_var = ezsignfoldersignerassociation_response_compound_all_of_create (
        obj_user ? obj_user_local_nonprim : NULL,
        obj_ezsignsigner ? obj_ezsignsigner_local_nonprim : NULL
        );

    return ezsignfoldersignerassociation_response_compound_all_of_local_var;
end:
    if (obj_user_local_nonprim) {
        ezsignfoldersignerassociation_response_compound_user_free(obj_user_local_nonprim);
        obj_user_local_nonprim = NULL;
    }
    if (obj_ezsignsigner_local_nonprim) {
        ezsignsigner_response_compound_free(obj_ezsignsigner_local_nonprim);
        obj_ezsignsigner_local_nonprim = NULL;
    }
    return NULL;

}
