#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_response_compound_all_of.h"



ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of_create(
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup,
    ezsignfoldersignerassociation_response_compound_user_t *obj_user,
    usergroup_response_compound_t *obj_usergroup,
    ezsignsigner_response_compound_t *obj_ezsignsigner
    ) {
    ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of_local_var = malloc(sizeof(ezsignfoldersignerassociation_response_compound_all_of_t));
    if (!ezsignfoldersignerassociation_response_compound_all_of_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_response_compound_all_of_local_var->obj_ezsignsignergroup = obj_ezsignsignergroup;
    ezsignfoldersignerassociation_response_compound_all_of_local_var->obj_user = obj_user;
    ezsignfoldersignerassociation_response_compound_all_of_local_var->obj_usergroup = obj_usergroup;
    ezsignfoldersignerassociation_response_compound_all_of_local_var->obj_ezsignsigner = obj_ezsignsigner;

    return ezsignfoldersignerassociation_response_compound_all_of_local_var;
}


void ezsignfoldersignerassociation_response_compound_all_of_free(ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of) {
    if(NULL == ezsignfoldersignerassociation_response_compound_all_of){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsignergroup) {
        ezsignsignergroup_response_compound_free(ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsignergroup);
        ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsignergroup = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_all_of->obj_user) {
        ezsignfoldersignerassociation_response_compound_user_free(ezsignfoldersignerassociation_response_compound_all_of->obj_user);
        ezsignfoldersignerassociation_response_compound_all_of->obj_user = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_all_of->obj_usergroup) {
        usergroup_response_compound_free(ezsignfoldersignerassociation_response_compound_all_of->obj_usergroup);
        ezsignfoldersignerassociation_response_compound_all_of->obj_usergroup = NULL;
    }
    if (ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner) {
        ezsignsigner_response_compound_free(ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner);
        ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner = NULL;
    }
    free(ezsignfoldersignerassociation_response_compound_all_of);
}

cJSON *ezsignfoldersignerassociation_response_compound_all_of_convertToJSON(ezsignfoldersignerassociation_response_compound_all_of_t *ezsignfoldersignerassociation_response_compound_all_of) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsignergroup
    if(ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsignergroup) {
    cJSON *obj_ezsignsignergroup_local_JSON = ezsignsignergroup_response_compound_convertToJSON(ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsignergroup);
    if(obj_ezsignsignergroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignergroup", obj_ezsignsignergroup_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


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


    // ezsignfoldersignerassociation_response_compound_all_of->obj_usergroup
    if(ezsignfoldersignerassociation_response_compound_all_of->obj_usergroup) {
    cJSON *obj_usergroup_local_JSON = usergroup_response_compound_convertToJSON(ezsignfoldersignerassociation_response_compound_all_of->obj_usergroup);
    if(obj_usergroup_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objUsergroup", obj_usergroup_local_JSON);
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

    // define the local variable for ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsignergroup
    ezsignsignergroup_response_compound_t *obj_ezsignsignergroup_local_nonprim = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_all_of->obj_user
    ezsignfoldersignerassociation_response_compound_user_t *obj_user_local_nonprim = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_all_of->obj_usergroup
    usergroup_response_compound_t *obj_usergroup_local_nonprim = NULL;

    // define the local variable for ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner
    ezsignsigner_response_compound_t *obj_ezsignsigner_local_nonprim = NULL;

    // ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsignergroup
    cJSON *obj_ezsignsignergroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_all_ofJSON, "objEzsignsignergroup");
    if (obj_ezsignsignergroup) { 
    obj_ezsignsignergroup_local_nonprim = ezsignsignergroup_response_compound_parseFromJSON(obj_ezsignsignergroup); //nonprimitive
    }

    // ezsignfoldersignerassociation_response_compound_all_of->obj_user
    cJSON *obj_user = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_all_ofJSON, "objUser");
    if (obj_user) { 
    obj_user_local_nonprim = ezsignfoldersignerassociation_response_compound_user_parseFromJSON(obj_user); //nonprimitive
    }

    // ezsignfoldersignerassociation_response_compound_all_of->obj_usergroup
    cJSON *obj_usergroup = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_all_ofJSON, "objUsergroup");
    if (obj_usergroup) { 
    obj_usergroup_local_nonprim = usergroup_response_compound_parseFromJSON(obj_usergroup); //nonprimitive
    }

    // ezsignfoldersignerassociation_response_compound_all_of->obj_ezsignsigner
    cJSON *obj_ezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compound_all_ofJSON, "objEzsignsigner");
    if (obj_ezsignsigner) { 
    obj_ezsignsigner_local_nonprim = ezsignsigner_response_compound_parseFromJSON(obj_ezsignsigner); //nonprimitive
    }


    ezsignfoldersignerassociation_response_compound_all_of_local_var = ezsignfoldersignerassociation_response_compound_all_of_create (
        obj_ezsignsignergroup ? obj_ezsignsignergroup_local_nonprim : NULL,
        obj_user ? obj_user_local_nonprim : NULL,
        obj_usergroup ? obj_usergroup_local_nonprim : NULL,
        obj_ezsignsigner ? obj_ezsignsigner_local_nonprim : NULL
        );

    return ezsignfoldersignerassociation_response_compound_all_of_local_var;
end:
    if (obj_ezsignsignergroup_local_nonprim) {
        ezsignsignergroup_response_compound_free(obj_ezsignsignergroup_local_nonprim);
        obj_ezsignsignergroup_local_nonprim = NULL;
    }
    if (obj_user_local_nonprim) {
        ezsignfoldersignerassociation_response_compound_user_free(obj_user_local_nonprim);
        obj_user_local_nonprim = NULL;
    }
    if (obj_usergroup_local_nonprim) {
        usergroup_response_compound_free(obj_usergroup_local_nonprim);
        obj_usergroup_local_nonprim = NULL;
    }
    if (obj_ezsignsigner_local_nonprim) {
        ezsignsigner_response_compound_free(obj_ezsignsigner_local_nonprim);
        obj_ezsignsigner_local_nonprim = NULL;
    }
    return NULL;

}
