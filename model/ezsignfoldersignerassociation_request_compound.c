#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_request_compound.h"



ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound_create(
    ezsignsigner_request_compound_t *obj_ezsignsigner,
    int fki_user_id,
    int fki_ezsignfolder_id
    ) {
    ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound_local_var = malloc(sizeof(ezsignfoldersignerassociation_request_compound_t));
    if (!ezsignfoldersignerassociation_request_compound_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_request_compound_local_var->obj_ezsignsigner = obj_ezsignsigner;
    ezsignfoldersignerassociation_request_compound_local_var->fki_user_id = fki_user_id;
    ezsignfoldersignerassociation_request_compound_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;

    return ezsignfoldersignerassociation_request_compound_local_var;
}


void ezsignfoldersignerassociation_request_compound_free(ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound) {
    if(NULL == ezsignfoldersignerassociation_request_compound){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_request_compound->obj_ezsignsigner) {
        ezsignsigner_request_compound_free(ezsignfoldersignerassociation_request_compound->obj_ezsignsigner);
        ezsignfoldersignerassociation_request_compound->obj_ezsignsigner = NULL;
    }
    free(ezsignfoldersignerassociation_request_compound);
}

cJSON *ezsignfoldersignerassociation_request_compound_convertToJSON(ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_request_compound->obj_ezsignsigner
    if(ezsignfoldersignerassociation_request_compound->obj_ezsignsigner) { 
    cJSON *obj_ezsignsigner_local_JSON = ezsignsigner_request_compound_convertToJSON(ezsignfoldersignerassociation_request_compound->obj_ezsignsigner);
    if(obj_ezsignsigner_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsigner", obj_ezsignsigner_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // ezsignfoldersignerassociation_request_compound->fki_user_id
    if(ezsignfoldersignerassociation_request_compound->fki_user_id) { 
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsignfoldersignerassociation_request_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
     } 


    // ezsignfoldersignerassociation_request_compound->fki_ezsignfolder_id
    if (!ezsignfoldersignerassociation_request_compound->fki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsignfoldersignerassociation_request_compound->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound_parseFromJSON(cJSON *ezsignfoldersignerassociation_request_compoundJSON){

    ezsignfoldersignerassociation_request_compound_t *ezsignfoldersignerassociation_request_compound_local_var = NULL;

    // ezsignfoldersignerassociation_request_compound->obj_ezsignsigner
    cJSON *obj_ezsignsigner = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compoundJSON, "objEzsignsigner");
    ezsignsigner_request_compound_t *obj_ezsignsigner_local_nonprim = NULL;
    if (obj_ezsignsigner) { 
    obj_ezsignsigner_local_nonprim = ezsignsigner_request_compound_parseFromJSON(obj_ezsignsigner); //nonprimitive
    }

    // ezsignfoldersignerassociation_request_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compoundJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldersignerassociation_request_compound->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_request_compoundJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }


    ezsignfoldersignerassociation_request_compound_local_var = ezsignfoldersignerassociation_request_compound_create (
        obj_ezsignsigner ? obj_ezsignsigner_local_nonprim : NULL,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_ezsignfolder_id->valuedouble
        );

    return ezsignfoldersignerassociation_request_compound_local_var;
end:
    if (obj_ezsignsigner_local_nonprim) {
        ezsignsigner_request_compound_free(obj_ezsignsigner_local_nonprim);
        obj_ezsignsigner_local_nonprim = NULL;
    }
    return NULL;

}
