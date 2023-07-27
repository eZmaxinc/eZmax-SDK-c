#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroup_request.h"



ezsignsignergroup_request_t *ezsignsignergroup_request_create(
    int pki_ezsignsignergroup_id,
    int fki_ezsignfolder_id,
    multilingual_ezsignsignergroup_description_t *obj_ezsignsignergroup_description
    ) {
    ezsignsignergroup_request_t *ezsignsignergroup_request_local_var = malloc(sizeof(ezsignsignergroup_request_t));
    if (!ezsignsignergroup_request_local_var) {
        return NULL;
    }
    ezsignsignergroup_request_local_var->pki_ezsignsignergroup_id = pki_ezsignsignergroup_id;
    ezsignsignergroup_request_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsignsignergroup_request_local_var->obj_ezsignsignergroup_description = obj_ezsignsignergroup_description;

    return ezsignsignergroup_request_local_var;
}


void ezsignsignergroup_request_free(ezsignsignergroup_request_t *ezsignsignergroup_request) {
    if(NULL == ezsignsignergroup_request){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroup_request->obj_ezsignsignergroup_description) {
        multilingual_ezsignsignergroup_description_free(ezsignsignergroup_request->obj_ezsignsignergroup_description);
        ezsignsignergroup_request->obj_ezsignsignergroup_description = NULL;
    }
    free(ezsignsignergroup_request);
}

cJSON *ezsignsignergroup_request_convertToJSON(ezsignsignergroup_request_t *ezsignsignergroup_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroup_request->pki_ezsignsignergroup_id
    if(ezsignsignergroup_request->pki_ezsignsignergroup_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignergroupID", ezsignsignergroup_request->pki_ezsignsignergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignergroup_request->fki_ezsignfolder_id
    if (!ezsignsignergroup_request->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsignsignergroup_request->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignergroup_request->obj_ezsignsignergroup_description
    if (!ezsignsignergroup_request->obj_ezsignsignergroup_description) {
        goto fail;
    }
    cJSON *obj_ezsignsignergroup_description_local_JSON = multilingual_ezsignsignergroup_description_convertToJSON(ezsignsignergroup_request->obj_ezsignsignergroup_description);
    if(obj_ezsignsignergroup_description_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "objEzsignsignergroupDescription", obj_ezsignsignergroup_description_local_JSON);
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

ezsignsignergroup_request_t *ezsignsignergroup_request_parseFromJSON(cJSON *ezsignsignergroup_requestJSON){

    ezsignsignergroup_request_t *ezsignsignergroup_request_local_var = NULL;

    // define the local variable for ezsignsignergroup_request->obj_ezsignsignergroup_description
    multilingual_ezsignsignergroup_description_t *obj_ezsignsignergroup_description_local_nonprim = NULL;

    // ezsignsignergroup_request->pki_ezsignsignergroup_id
    cJSON *pki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_requestJSON, "pkiEzsignsignergroupID");
    if (pki_ezsignsignergroup_id) { 
    if(!cJSON_IsNumber(pki_ezsignsignergroup_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignsignergroup_request->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_requestJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignsignergroup_request->obj_ezsignsignergroup_description
    cJSON *obj_ezsignsignergroup_description = cJSON_GetObjectItemCaseSensitive(ezsignsignergroup_requestJSON, "objEzsignsignergroupDescription");
    if (!obj_ezsignsignergroup_description) {
        goto end;
    }

    
    obj_ezsignsignergroup_description_local_nonprim = multilingual_ezsignsignergroup_description_parseFromJSON(obj_ezsignsignergroup_description); //nonprimitive


    ezsignsignergroup_request_local_var = ezsignsignergroup_request_create (
        pki_ezsignsignergroup_id ? pki_ezsignsignergroup_id->valuedouble : 0,
        fki_ezsignfolder_id->valuedouble,
        obj_ezsignsignergroup_description_local_nonprim
        );

    return ezsignsignergroup_request_local_var;
end:
    if (obj_ezsignsignergroup_description_local_nonprim) {
        multilingual_ezsignsignergroup_description_free(obj_ezsignsignergroup_description_local_nonprim);
        obj_ezsignsignergroup_description_local_nonprim = NULL;
    }
    return NULL;

}
