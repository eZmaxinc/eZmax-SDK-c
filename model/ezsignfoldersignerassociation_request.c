#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_request.h"



ezsignfoldersignerassociation_request_t *ezsignfoldersignerassociation_request_create(
    int fki_user_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_receivecopy
    ) {
    ezsignfoldersignerassociation_request_t *ezsignfoldersignerassociation_request_local_var = malloc(sizeof(ezsignfoldersignerassociation_request_t));
    if (!ezsignfoldersignerassociation_request_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_request_local_var->fki_user_id = fki_user_id;
    ezsignfoldersignerassociation_request_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsignfoldersignerassociation_request_local_var->b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;

    return ezsignfoldersignerassociation_request_local_var;
}


void ezsignfoldersignerassociation_request_free(ezsignfoldersignerassociation_request_t *ezsignfoldersignerassociation_request) {
    if(NULL == ezsignfoldersignerassociation_request){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignfoldersignerassociation_request);
}

cJSON *ezsignfoldersignerassociation_request_convertToJSON(ezsignfoldersignerassociation_request_t *ezsignfoldersignerassociation_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_request->fki_user_id
    if(ezsignfoldersignerassociation_request->fki_user_id) { 
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsignfoldersignerassociation_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
     } 


    // ezsignfoldersignerassociation_request->fki_ezsignfolder_id
    if (!ezsignfoldersignerassociation_request->fki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsignfoldersignerassociation_request->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_request->b_ezsignfoldersignerassociation_receivecopy
    if(ezsignfoldersignerassociation_request->b_ezsignfoldersignerassociation_receivecopy) { 
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationReceivecopy", ezsignfoldersignerassociation_request->b_ezsignfoldersignerassociation_receivecopy) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldersignerassociation_request_t *ezsignfoldersignerassociation_request_parseFromJSON(cJSON *ezsignfoldersignerassociation_requestJSON){

    ezsignfoldersignerassociation_request_t *ezsignfoldersignerassociation_request_local_var = NULL;

    // ezsignfoldersignerassociation_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_requestJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // ezsignfoldersignerassociation_request->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_requestJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_request->b_ezsignfoldersignerassociation_receivecopy
    cJSON *b_ezsignfoldersignerassociation_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_requestJSON, "bEzsignfoldersignerassociationReceivecopy");
    if (b_ezsignfoldersignerassociation_receivecopy) { 
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_receivecopy))
    {
    goto end; //Bool
    }
    }


    ezsignfoldersignerassociation_request_local_var = ezsignfoldersignerassociation_request_create (
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_ezsignfolder_id->valuedouble,
        b_ezsignfoldersignerassociation_receivecopy ? b_ezsignfoldersignerassociation_receivecopy->valueint : 0
        );

    return ezsignfoldersignerassociation_request_local_var;
end:
    return NULL;

}
