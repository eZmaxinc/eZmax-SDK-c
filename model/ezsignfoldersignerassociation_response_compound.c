#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_response_compound.h"



ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id,
    int fki_ezsignsigner_id,
    int fki_user_id,
    int b_ezsignfoldersignerassociation_receivecopy
    ) {
    ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound_local_var = malloc(sizeof(ezsignfoldersignerassociation_response_compound_t));
    if (!ezsignfoldersignerassociation_response_compound_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_response_compound_local_var->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    ezsignfoldersignerassociation_response_compound_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsignfoldersignerassociation_response_compound_local_var->fki_ezsignsigner_id = fki_ezsignsigner_id;
    ezsignfoldersignerassociation_response_compound_local_var->fki_user_id = fki_user_id;
    ezsignfoldersignerassociation_response_compound_local_var->b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;

    return ezsignfoldersignerassociation_response_compound_local_var;
}


void ezsignfoldersignerassociation_response_compound_free(ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound) {
    if(NULL == ezsignfoldersignerassociation_response_compound){
        return ;
    }
    listEntry_t *listEntry;
    free(ezsignfoldersignerassociation_response_compound);
}

cJSON *ezsignfoldersignerassociation_response_compound_convertToJSON(ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_response_compound->pki_ezsignfoldersignerassociation_id
    if (!ezsignfoldersignerassociation_response_compound->pki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldersignerassociationID", ezsignfoldersignerassociation_response_compound->pki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response_compound->fki_ezsignfolder_id
    if (!ezsignfoldersignerassociation_response_compound->fki_ezsignfolder_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", ezsignfoldersignerassociation_response_compound->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response_compound->fki_ezsignsigner_id
    if (!ezsignfoldersignerassociation_response_compound->fki_ezsignsigner_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignerID", ezsignfoldersignerassociation_response_compound->fki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response_compound->fki_user_id
    if (!ezsignfoldersignerassociation_response_compound->fki_user_id) {
        goto fail;
    }
    
    if(cJSON_AddNumberToObject(item, "fkiUserID", ezsignfoldersignerassociation_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_receivecopy
    if (!ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_receivecopy) {
        goto fail;
    }
    
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationReceivecopy", ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_receivecopy) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound_parseFromJSON(cJSON *ezsignfoldersignerassociation_response_compoundJSON){

    ezsignfoldersignerassociation_response_compound_t *ezsignfoldersignerassociation_response_compound_local_var = NULL;

    // ezsignfoldersignerassociation_response_compound->pki_ezsignfoldersignerassociation_id
    cJSON *pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "pkiEzsignfoldersignerassociationID");
    if (!pki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_response_compound->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "fkiEzsignfolderID");
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_response_compound->fki_ezsignsigner_id
    cJSON *fki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "fkiEzsignsignerID");
    if (!fki_ezsignsigner_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignsigner_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "fkiUserID");
    if (!fki_user_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }

    // ezsignfoldersignerassociation_response_compound->b_ezsignfoldersignerassociation_receivecopy
    cJSON *b_ezsignfoldersignerassociation_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_response_compoundJSON, "bEzsignfoldersignerassociationReceivecopy");
    if (!b_ezsignfoldersignerassociation_receivecopy) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_receivecopy))
    {
    goto end; //Bool
    }


    ezsignfoldersignerassociation_response_compound_local_var = ezsignfoldersignerassociation_response_compound_create (
        pki_ezsignfoldersignerassociation_id->valuedouble,
        fki_ezsignfolder_id->valuedouble,
        fki_ezsignsigner_id->valuedouble,
        fki_user_id->valuedouble,
        b_ezsignfoldersignerassociation_receivecopy->valueint
        );

    return ezsignfoldersignerassociation_response_compound_local_var;
end:
    return NULL;

}
