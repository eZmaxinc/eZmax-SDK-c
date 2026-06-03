#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldersignerassociation_response.h"



static ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response_create_internal(
    int *pki_ezsignfoldersignerassociation_id,
    int *fki_ezsignfolder_id,
    int *b_ezsignfoldersignerassociation_delayedsend,
    int *b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message,
    int *b_ezsignfoldersignerassociation_allowsigninginperson
    ) {
    ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response_local_var = malloc(sizeof(ezsignfoldersignerassociation_response_t));
    if (!ezsignfoldersignerassociation_response_local_var) {
        return NULL;
    }
    memset(ezsignfoldersignerassociation_response_local_var, 0, sizeof(ezsignfoldersignerassociation_response_t));
    ezsignfoldersignerassociation_response_local_var->_library_owned = 1;
    ezsignfoldersignerassociation_response_local_var->pki_ezsignfoldersignerassociation_id = pki_ezsignfoldersignerassociation_id;
    ezsignfoldersignerassociation_response_local_var->fki_ezsignfolder_id = fki_ezsignfolder_id;
    ezsignfoldersignerassociation_response_local_var->b_ezsignfoldersignerassociation_delayedsend = b_ezsignfoldersignerassociation_delayedsend;
    ezsignfoldersignerassociation_response_local_var->b_ezsignfoldersignerassociation_receivecopy = b_ezsignfoldersignerassociation_receivecopy;
    ezsignfoldersignerassociation_response_local_var->t_ezsignfoldersignerassociation_message = t_ezsignfoldersignerassociation_message;
    ezsignfoldersignerassociation_response_local_var->b_ezsignfoldersignerassociation_allowsigninginperson = b_ezsignfoldersignerassociation_allowsigninginperson;
    return ezsignfoldersignerassociation_response_local_var;
}

__attribute__((deprecated)) ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response_create(
    int *pki_ezsignfoldersignerassociation_id,
    int *fki_ezsignfolder_id,
    int *b_ezsignfoldersignerassociation_delayedsend,
    int *b_ezsignfoldersignerassociation_receivecopy,
    char *t_ezsignfoldersignerassociation_message,
    int *b_ezsignfoldersignerassociation_allowsigninginperson
    ) {
    int *pki_ezsignfoldersignerassociation_id_copy = NULL;
    if (pki_ezsignfoldersignerassociation_id) {
        pki_ezsignfoldersignerassociation_id_copy = malloc(sizeof(int));
        if (pki_ezsignfoldersignerassociation_id_copy) *pki_ezsignfoldersignerassociation_id_copy = *pki_ezsignfoldersignerassociation_id;
    }
    int *fki_ezsignfolder_id_copy = NULL;
    if (fki_ezsignfolder_id) {
        fki_ezsignfolder_id_copy = malloc(sizeof(int));
        if (fki_ezsignfolder_id_copy) *fki_ezsignfolder_id_copy = *fki_ezsignfolder_id;
    }
    int *b_ezsignfoldersignerassociation_delayedsend_copy = NULL;
    if (b_ezsignfoldersignerassociation_delayedsend) {
        b_ezsignfoldersignerassociation_delayedsend_copy = malloc(sizeof(int));
        if (b_ezsignfoldersignerassociation_delayedsend_copy) *b_ezsignfoldersignerassociation_delayedsend_copy = *b_ezsignfoldersignerassociation_delayedsend;
    }
    int *b_ezsignfoldersignerassociation_receivecopy_copy = NULL;
    if (b_ezsignfoldersignerassociation_receivecopy) {
        b_ezsignfoldersignerassociation_receivecopy_copy = malloc(sizeof(int));
        if (b_ezsignfoldersignerassociation_receivecopy_copy) *b_ezsignfoldersignerassociation_receivecopy_copy = *b_ezsignfoldersignerassociation_receivecopy;
    }
    int *b_ezsignfoldersignerassociation_allowsigninginperson_copy = NULL;
    if (b_ezsignfoldersignerassociation_allowsigninginperson) {
        b_ezsignfoldersignerassociation_allowsigninginperson_copy = malloc(sizeof(int));
        if (b_ezsignfoldersignerassociation_allowsigninginperson_copy) *b_ezsignfoldersignerassociation_allowsigninginperson_copy = *b_ezsignfoldersignerassociation_allowsigninginperson;
    }
    ezsignfoldersignerassociation_response_t *result = ezsignfoldersignerassociation_response_create_internal (
        pki_ezsignfoldersignerassociation_id_copy,
        fki_ezsignfolder_id_copy,
        b_ezsignfoldersignerassociation_delayedsend_copy,
        b_ezsignfoldersignerassociation_receivecopy_copy,
        t_ezsignfoldersignerassociation_message,
        b_ezsignfoldersignerassociation_allowsigninginperson_copy
        );
    if (!result) {
        free(pki_ezsignfoldersignerassociation_id_copy);
        free(fki_ezsignfolder_id_copy);
        free(b_ezsignfoldersignerassociation_delayedsend_copy);
        free(b_ezsignfoldersignerassociation_receivecopy_copy);
        free(b_ezsignfoldersignerassociation_allowsigninginperson_copy);
    }
    return result;
}

void ezsignfoldersignerassociation_response_free(ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response) {
    if(NULL == ezsignfoldersignerassociation_response){
        return ;
    }
    if(ezsignfoldersignerassociation_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldersignerassociation_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldersignerassociation_response->pki_ezsignfoldersignerassociation_id) {
        free(ezsignfoldersignerassociation_response->pki_ezsignfoldersignerassociation_id);
        ezsignfoldersignerassociation_response->pki_ezsignfoldersignerassociation_id = NULL;
    }
    if (ezsignfoldersignerassociation_response->fki_ezsignfolder_id) {
        free(ezsignfoldersignerassociation_response->fki_ezsignfolder_id);
        ezsignfoldersignerassociation_response->fki_ezsignfolder_id = NULL;
    }
    if (ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_delayedsend) {
        free(ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_delayedsend);
        ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_delayedsend = NULL;
    }
    if (ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy) {
        free(ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy);
        ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy = NULL;
    }
    if (ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message) {
        free(ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message);
        ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message = NULL;
    }
    if (ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_allowsigninginperson) {
        free(ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_allowsigninginperson);
        ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_allowsigninginperson = NULL;
    }
    free(ezsignfoldersignerassociation_response);
}

cJSON *ezsignfoldersignerassociation_response_convertToJSON(ezsignfoldersignerassociation_response_t *ezsignfoldersignerassociation_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldersignerassociation_response->pki_ezsignfoldersignerassociation_id
    if (!ezsignfoldersignerassociation_response->pki_ezsignfoldersignerassociation_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldersignerassociationID", *ezsignfoldersignerassociation_response->pki_ezsignfoldersignerassociation_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response->fki_ezsignfolder_id
    if (!ezsignfoldersignerassociation_response->fki_ezsignfolder_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignfolderID", *ezsignfoldersignerassociation_response->fki_ezsignfolder_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_delayedsend
    if (!ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_delayedsend) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationDelayedsend", *ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_delayedsend) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy
    if (!ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationReceivecopy", *ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy) == NULL) {
    goto fail; //Bool
    }


    // ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message
    if (!ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "tEzsignfoldersignerassociationMessage", ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message) == NULL) {
    goto fail; //String
    }


    // ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_allowsigninginperson
    if (!ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_allowsigninginperson) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldersignerassociationAllowsigninginperson", *ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_allowsigninginperson) == NULL) {
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

    // define the local variable for ezsignfoldersignerassociation_response->pki_ezsignfoldersignerassociation_id
    int *pki_ezsignfoldersignerassociation_id_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_response->fki_ezsignfolder_id
    int *fki_ezsignfolder_id_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_delayedsend
    int *b_ezsignfoldersignerassociation_delayedsend_local_var = NULL;

    // define the local variable for ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy
    int *b_ezsignfoldersignerassociation_receivecopy_local_var = NULL;

    char *t_ezsignfoldersignerassociation_message_local_str = NULL;

    // define the local variable for ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_allowsigninginperson
    int *b_ezsignfoldersignerassociation_allowsigninginperson_local_var = NULL;

    // ezsignfoldersignerassociation_response->pki_ezsignfoldersignerassociation_id
    cJSON *pki_ezsignfoldersignerassociation_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_responseJSON, "pkiEzsignfoldersignerassociationID");
    if (cJSON_IsNull(pki_ezsignfoldersignerassociation_id)) {
        pki_ezsignfoldersignerassociation_id = NULL;
    }
    if (!pki_ezsignfoldersignerassociation_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldersignerassociation_id))
    {
    goto end; //Numeric
    }
    pki_ezsignfoldersignerassociation_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignfoldersignerassociation_id_local_var)
    {
        goto end;
    }
    *pki_ezsignfoldersignerassociation_id_local_var = pki_ezsignfoldersignerassociation_id->valuedouble;

    // ezsignfoldersignerassociation_response->fki_ezsignfolder_id
    cJSON *fki_ezsignfolder_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_responseJSON, "fkiEzsignfolderID");
    if (cJSON_IsNull(fki_ezsignfolder_id)) {
        fki_ezsignfolder_id = NULL;
    }
    if (!fki_ezsignfolder_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignfolder_id))
    {
    goto end; //Numeric
    }
    fki_ezsignfolder_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignfolder_id_local_var)
    {
        goto end;
    }
    *fki_ezsignfolder_id_local_var = fki_ezsignfolder_id->valuedouble;

    // ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_delayedsend
    cJSON *b_ezsignfoldersignerassociation_delayedsend = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_responseJSON, "bEzsignfoldersignerassociationDelayedsend");
    if (cJSON_IsNull(b_ezsignfoldersignerassociation_delayedsend)) {
        b_ezsignfoldersignerassociation_delayedsend = NULL;
    }
    if (!b_ezsignfoldersignerassociation_delayedsend) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_delayedsend))
    {
    goto end; //Bool
    }
    b_ezsignfoldersignerassociation_delayedsend_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldersignerassociation_delayedsend_local_var)
    {
        goto end;
    }
    *b_ezsignfoldersignerassociation_delayedsend_local_var = b_ezsignfoldersignerassociation_delayedsend->valueint;

    // ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_receivecopy
    cJSON *b_ezsignfoldersignerassociation_receivecopy = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_responseJSON, "bEzsignfoldersignerassociationReceivecopy");
    if (cJSON_IsNull(b_ezsignfoldersignerassociation_receivecopy)) {
        b_ezsignfoldersignerassociation_receivecopy = NULL;
    }
    if (!b_ezsignfoldersignerassociation_receivecopy) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_receivecopy))
    {
    goto end; //Bool
    }
    b_ezsignfoldersignerassociation_receivecopy_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldersignerassociation_receivecopy_local_var)
    {
        goto end;
    }
    *b_ezsignfoldersignerassociation_receivecopy_local_var = b_ezsignfoldersignerassociation_receivecopy->valueint;

    // ezsignfoldersignerassociation_response->t_ezsignfoldersignerassociation_message
    cJSON *t_ezsignfoldersignerassociation_message = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_responseJSON, "tEzsignfoldersignerassociationMessage");
    if (cJSON_IsNull(t_ezsignfoldersignerassociation_message)) {
        t_ezsignfoldersignerassociation_message = NULL;
    }
    if (!t_ezsignfoldersignerassociation_message) {
        goto end;
    }

    
    if(!cJSON_IsString(t_ezsignfoldersignerassociation_message))
    {
    goto end; //String
    }

    // ezsignfoldersignerassociation_response->b_ezsignfoldersignerassociation_allowsigninginperson
    cJSON *b_ezsignfoldersignerassociation_allowsigninginperson = cJSON_GetObjectItemCaseSensitive(ezsignfoldersignerassociation_responseJSON, "bEzsignfoldersignerassociationAllowsigninginperson");
    if (cJSON_IsNull(b_ezsignfoldersignerassociation_allowsigninginperson)) {
        b_ezsignfoldersignerassociation_allowsigninginperson = NULL;
    }
    if (!b_ezsignfoldersignerassociation_allowsigninginperson) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldersignerassociation_allowsigninginperson))
    {
    goto end; //Bool
    }
    b_ezsignfoldersignerassociation_allowsigninginperson_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldersignerassociation_allowsigninginperson_local_var)
    {
        goto end;
    }
    *b_ezsignfoldersignerassociation_allowsigninginperson_local_var = b_ezsignfoldersignerassociation_allowsigninginperson->valueint;


    if (t_ezsignfoldersignerassociation_message && !cJSON_IsNull(t_ezsignfoldersignerassociation_message)) t_ezsignfoldersignerassociation_message_local_str = strdup(t_ezsignfoldersignerassociation_message->valuestring);

    ezsignfoldersignerassociation_response_local_var = ezsignfoldersignerassociation_response_create_internal (
        pki_ezsignfoldersignerassociation_id_local_var,
        fki_ezsignfolder_id_local_var,
        b_ezsignfoldersignerassociation_delayedsend_local_var,
        b_ezsignfoldersignerassociation_receivecopy_local_var,
        t_ezsignfoldersignerassociation_message_local_str,
        b_ezsignfoldersignerassociation_allowsigninginperson_local_var
        );

    if (!ezsignfoldersignerassociation_response_local_var) {
        goto end;
    }

    return ezsignfoldersignerassociation_response_local_var;
end:
    if (pki_ezsignfoldersignerassociation_id_local_var) {
        free(pki_ezsignfoldersignerassociation_id_local_var);
        pki_ezsignfoldersignerassociation_id_local_var = NULL;
    }
    if (fki_ezsignfolder_id_local_var) {
        free(fki_ezsignfolder_id_local_var);
        fki_ezsignfolder_id_local_var = NULL;
    }
    if (b_ezsignfoldersignerassociation_delayedsend_local_var) {
        free(b_ezsignfoldersignerassociation_delayedsend_local_var);
        b_ezsignfoldersignerassociation_delayedsend_local_var = NULL;
    }
    if (b_ezsignfoldersignerassociation_receivecopy_local_var) {
        free(b_ezsignfoldersignerassociation_receivecopy_local_var);
        b_ezsignfoldersignerassociation_receivecopy_local_var = NULL;
    }
    if (t_ezsignfoldersignerassociation_message_local_str) {
        free(t_ezsignfoldersignerassociation_message_local_str);
        t_ezsignfoldersignerassociation_message_local_str = NULL;
    }
    if (b_ezsignfoldersignerassociation_allowsigninginperson_local_var) {
        free(b_ezsignfoldersignerassociation_allowsigninginperson_local_var);
        b_ezsignfoldersignerassociation_allowsigninginperson_local_var = NULL;
    }
    return NULL;

}
