#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_response.h"



ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response_create(
    int pki_ezsignfoldersignerassociation_id,
    int fki_ezsignfolder_id,
    int b_ezsignfoldersignerassociation_delayedsend,
    int b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message
    ) {
    ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response_local_var = malloc(sizeof(ezsignfoldersignerassociation_response_t));
    if (!ezsignfoldersignerassociation_response_local_var) {
        return NULL;
    }
    ezsignfoldersignerassociation_response_local_var->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    ezsignfoldersignerassociation_response_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsignfoldersignerassociation_response_local_var->b_ezsignfoldersignerassociation_delayedsend = b_ezsignfoldersignerassociation_delayedsend;
    ezsignfoldersignerassociation_response_local_var->b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    ezsignfoldersignerassociation_response_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;

    return ezsignfoldersignerassociation_response_local_var;
}


void ezsignfoldersignerassociation_response_free(ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response) {
    if(NULL == ezsignfoldersignerassociation_response){
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message) {
        free(ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message);
        ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message = NULL;
    }
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


    // ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_delayedsend
    if (!ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_delayedsend) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationDelayedsend", ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_delayedsend) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy
    if (!ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationReceivecopy", ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message
    if (!ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignfoldersignerassociationMessage", ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message) == NULL) {
    goto fail; //String
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

    // ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_delayedsend
    cJSON *b_ezsignfoldersignerassociation_delayedsend = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_responseJSON, "bEzsignfoldersignerassociationDelayedsend");
    if (!b_ezsignfoldersignerassociation_delayedsend) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_delayedsend))
    {
    goto end; //Bool
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

    // ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message
    cJSON *t_ezsignfoldersignerassociation_message = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_responseJSON, "tEzsignfoldersignerassociationMessage");
    if (!t_ezsignfoldersignerassociation_message) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignfoldersignerassociation_message))
    {
    goto end; //String
    }


    ezsignfoldersignerassociation_response_local_var = ezsignfoldersignerassociation_response_create (
        pki_ezsignfoldersignerassociation_id->valuedouble,
        fki_ezsignfolder_id->valuedouble,
        b_ezsignfoldersignerassociation_delayedsend->valueint,
        b_ezsignfoldersignerassociation_receivecopy->valueint,
        strdup(t_ezsignfoldersignerassociation_message->valuestring)
        );

    return ezsignfoldersignerassociation_response_local_var;
end:
    return NULL;

}
