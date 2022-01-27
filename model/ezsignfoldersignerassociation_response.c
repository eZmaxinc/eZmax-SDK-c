#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_response.h"



ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_receivecopy
    ) {
    ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response_local_var = malloc(sizeof(ezsignfoldersignerassociation_response_t));
    if (!ezsignfoldersignerassociation_response_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_response_local_var->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    ezsignfoldersignerassociation_response_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsignfoldersignerassociation_response_local_var->b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;

    return ezsignfoldersignerassociation_response_local_var;
}


void ezsignfoldersignerassociation_response_free(ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response) {
    if(NULL == ezsignfoldersignerassociation_response){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignfoldersignerassociation_response);
}

cJSON *ezsignfoldersignerassociation_response_convertToJSON(ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_response->pki_ezsignfoldersignerassociation_id
    if (!ezsignfoldersignerassociation_response->pki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldersignerassociationID", ezsignfoldersignerassociation_response->pki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response->fki_ezsignfolder_id
    if (!ezsignfoldersignerassociation_response->fki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsignfoldersignerassociation_response->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy
    if (!ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationReceivecopy", ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response_parseFromJSON(cJSON *ezsignfoldersignerassociation_responseJSON){

    ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response_local_var = NULL;

    // ezsignfoldersignerassociation_response->pki_ezsignfoldersignerassociation_id
    cJSON *pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_responseJSON, "pkiEzsignfoldersignerassociationID");
    if (!pki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_response->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_responseJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy
    cJSON *b_ezsignfoldersignerassociation_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_responseJSON, "bEzsignfoldersignerassociationReceivecopy");
    if (!b_ezsignfoldersignerassociation_receivecopy) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_receivecopy))
    {
    goto end; //Bool
    }


    ezsignfoldersignerassociation_response_local_var = ezsignfoldersignerassociation_response_create (
        pki_ezsignfoldersignerassociation_id->valuedouble,
        fki_ezsignfolder_id->valuedouble,
        b_ezsignfoldersignerassociation_receivecopy->valueint
        );

    return ezsignfoldersignerassociation_response_local_var;
end:
    return NULL;

}
