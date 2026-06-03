#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroupmembership_response.h"



static ezsignsignergroupmembership_response_t *ezsignsignergroupmembership_response_create_internal(
    int *pki_ezsignsignergroupmembership_id,
    int *fki_ezsignsignergroup_id,
    int *fki_ezsignsigner_id,
    int *fki_user_id,
    int *fki_usergroup_id
    ) {
    ezsignsignergroupmembership_response_t *ezsignsignergroupmembership_response_local_var = malloc(sizeof(ezsignsignergroupmembership_response_t));
    if (!ezsignsignergroupmembership_response_local_var) {
        return NULL;
    }
    memset(ezsignsignergroupmembership_response_local_var, 0, sizeof(ezsignsignergroupmembership_response_t));
    ezsignsignergroupmembership_response_local_var->_library_owned = 1;
    ezsignsignergroupmembership_response_local_var->pki_ezsignsignergroupmembership_id = pki_ezsignsignergroupmembership_id;
    ezsignsignergroupmembership_response_local_var->fki_ezsignsignergroup_id = fki_ezsignsignergroup_id;
    ezsignsignergroupmembership_response_local_var->fki_ezsignsigner_id = fki_ezsignsigner_id;
    ezsignsignergroupmembership_response_local_var->fki_user_id = fki_user_id;
    ezsignsignergroupmembership_response_local_var->fki_usergroup_id = fki_usergroup_id;
    return ezsignsignergroupmembership_response_local_var;
}

__attribute__((deprecated)) ezsignsignergroupmembership_response_t *ezsignsignergroupmembership_response_create(
    int *pki_ezsignsignergroupmembership_id,
    int *fki_ezsignsignergroup_id,
    int *fki_ezsignsigner_id,
    int *fki_user_id,
    int *fki_usergroup_id
    ) {
    int *pki_ezsignsignergroupmembership_id_copy = NULL;
    if (pki_ezsignsignergroupmembership_id) {
        pki_ezsignsignergroupmembership_id_copy = malloc(sizeof(int));
        if (pki_ezsignsignergroupmembership_id_copy) *pki_ezsignsignergroupmembership_id_copy = *pki_ezsignsignergroupmembership_id;
    }
    int *fki_ezsignsignergroup_id_copy = NULL;
    if (fki_ezsignsignergroup_id) {
        fki_ezsignsignergroup_id_copy = malloc(sizeof(int));
        if (fki_ezsignsignergroup_id_copy) *fki_ezsignsignergroup_id_copy = *fki_ezsignsignergroup_id;
    }
    int *fki_ezsignsigner_id_copy = NULL;
    if (fki_ezsignsigner_id) {
        fki_ezsignsigner_id_copy = malloc(sizeof(int));
        if (fki_ezsignsigner_id_copy) *fki_ezsignsigner_id_copy = *fki_ezsignsigner_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *fki_usergroup_id_copy = NULL;
    if (fki_usergroup_id) {
        fki_usergroup_id_copy = malloc(sizeof(int));
        if (fki_usergroup_id_copy) *fki_usergroup_id_copy = *fki_usergroup_id;
    }
    ezsignsignergroupmembership_response_t *result = ezsignsignergroupmembership_response_create_internal (
        pki_ezsignsignergroupmembership_id_copy,
        fki_ezsignsignergroup_id_copy,
        fki_ezsignsigner_id_copy,
        fki_user_id_copy,
        fki_usergroup_id_copy
        );
    if (!result) {
        free(pki_ezsignsignergroupmembership_id_copy);
        free(fki_ezsignsignergroup_id_copy);
        free(fki_ezsignsigner_id_copy);
        free(fki_user_id_copy);
        free(fki_usergroup_id_copy);
    }
    return result;
}

void ezsignsignergroupmembership_response_free(ezsignsignergroupmembership_response_t *ezsignsignergroupmembership_response) {
    if(NULL == ezsignsignergroupmembership_response){
        return ;
    }
    if(ezsignsignergroupmembership_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignergroupmembership_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroupmembership_response->pki_ezsignsignergroupmembership_id) {
        free(ezsignsignergroupmembership_response->pki_ezsignsignergroupmembership_id);
        ezsignsignergroupmembership_response->pki_ezsignsignergroupmembership_id = NULL;
    }
    if (ezsignsignergroupmembership_response->fki_ezsignsignergroup_id) {
        free(ezsignsignergroupmembership_response->fki_ezsignsignergroup_id);
        ezsignsignergroupmembership_response->fki_ezsignsignergroup_id = NULL;
    }
    if (ezsignsignergroupmembership_response->fki_ezsignsigner_id) {
        free(ezsignsignergroupmembership_response->fki_ezsignsigner_id);
        ezsignsignergroupmembership_response->fki_ezsignsigner_id = NULL;
    }
    if (ezsignsignergroupmembership_response->fki_user_id) {
        free(ezsignsignergroupmembership_response->fki_user_id);
        ezsignsignergroupmembership_response->fki_user_id = NULL;
    }
    if (ezsignsignergroupmembership_response->fki_usergroup_id) {
        free(ezsignsignergroupmembership_response->fki_usergroup_id);
        ezsignsignergroupmembership_response->fki_usergroup_id = NULL;
    }
    free(ezsignsignergroupmembership_response);
}

cJSON *ezsignsignergroupmembership_response_convertToJSON(ezsignsignergroupmembership_response_t *ezsignsignergroupmembership_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroupmembership_response->pki_ezsignsignergroupmembership_id
    if (!ezsignsignergroupmembership_response->pki_ezsignsignergroupmembership_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignergroupmembershipID", *ezsignsignergroupmembership_response->pki_ezsignsignergroupmembership_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignergroupmembership_response->fki_ezsignsignergroup_id
    if (!ezsignsignergroupmembership_response->fki_ezsignsignergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignergroupID", *ezsignsignergroupmembership_response->fki_ezsignsignergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignergroupmembership_response->fki_ezsignsigner_id
    if(ezsignsignergroupmembership_response->fki_ezsignsigner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignerID", *ezsignsignergroupmembership_response->fki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignergroupmembership_response->fki_user_id
    if(ezsignsignergroupmembership_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *ezsignsignergroupmembership_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignergroupmembership_response->fki_usergroup_id
    if(ezsignsignergroupmembership_response->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", *ezsignsignergroupmembership_response->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignsignergroupmembership_response_t *ezsignsignergroupmembership_response_parseFromJSON(cJSON *ezsignsignergroupmembership_responseJSON){

    ezsignsignergroupmembership_response_t *ezsignsignergroupmembership_response_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_response->pki_ezsignsignergroupmembership_id
    int *pki_ezsignsignergroupmembership_id_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_response->fki_ezsignsignergroup_id
    int *fki_ezsignsignergroup_id_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_response->fki_ezsignsigner_id
    int *fki_ezsignsigner_id_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_response->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_response->fki_usergroup_id
    int *fki_usergroup_id_local_var = NULL;

    // ezsignsignergroupmembership_response->pki_ezsignsignergroupmembership_id
    cJSON *pki_ezsignsignergroupmembership_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_responseJSON, "pkiEzsignsignergroupmembershipID");
    if (cJSON_IsNull(pki_ezsignsignergroupmembership_id)) {
        pki_ezsignsignergroupmembership_id = NULL;
    }
    if (!pki_ezsignsignergroupmembership_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignsignergroupmembership_id))
    {
    goto end; //Numeric
    }
    pki_ezsignsignergroupmembership_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignsignergroupmembership_id_local_var)
    {
        goto end;
    }
    *pki_ezsignsignergroupmembership_id_local_var = pki_ezsignsignergroupmembership_id->valuedouble;

    // ezsignsignergroupmembership_response->fki_ezsignsignergroup_id
    cJSON *fki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_responseJSON, "fkiEzsignsignergroupID");
    if (cJSON_IsNull(fki_ezsignsignergroup_id)) {
        fki_ezsignsignergroup_id = NULL;
    }
    if (!fki_ezsignsignergroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_ezsignsignergroup_id))
    {
    goto end; //Numeric
    }
    fki_ezsignsignergroup_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignsignergroup_id_local_var)
    {
        goto end;
    }
    *fki_ezsignsignergroup_id_local_var = fki_ezsignsignergroup_id->valuedouble;

    // ezsignsignergroupmembership_response->fki_ezsignsigner_id
    cJSON *fki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_responseJSON, "fkiEzsignsignerID");
    if (cJSON_IsNull(fki_ezsignsigner_id)) {
        fki_ezsignsigner_id = NULL;
    }
    if (fki_ezsignsigner_id) { 
    if(!cJSON_IsNumber(fki_ezsignsigner_id))
    {
    goto end; //Numeric
    }
    fki_ezsignsigner_id_local_var = malloc(sizeof(int));
    if(!fki_ezsignsigner_id_local_var)
    {
        goto end;
    }
    *fki_ezsignsigner_id_local_var = fki_ezsignsigner_id->valuedouble;
    }

    // ezsignsignergroupmembership_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_responseJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    fki_user_id_local_var = malloc(sizeof(int));
    if(!fki_user_id_local_var)
    {
        goto end;
    }
    *fki_user_id_local_var = fki_user_id->valuedouble;
    }

    // ezsignsignergroupmembership_response->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_responseJSON, "fkiUsergroupID");
    if (cJSON_IsNull(fki_usergroup_id)) {
        fki_usergroup_id = NULL;
    }
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    fki_usergroup_id_local_var = malloc(sizeof(int));
    if(!fki_usergroup_id_local_var)
    {
        goto end;
    }
    *fki_usergroup_id_local_var = fki_usergroup_id->valuedouble;
    }



    ezsignsignergroupmembership_response_local_var = ezsignsignergroupmembership_response_create_internal (
        pki_ezsignsignergroupmembership_id_local_var,
        fki_ezsignsignergroup_id_local_var,
        fki_ezsignsigner_id_local_var,
        fki_user_id_local_var,
        fki_usergroup_id_local_var
        );

    if (!ezsignsignergroupmembership_response_local_var) {
        goto end;
    }

    return ezsignsignergroupmembership_response_local_var;
end:
    if (pki_ezsignsignergroupmembership_id_local_var) {
        free(pki_ezsignsignergroupmembership_id_local_var);
        pki_ezsignsignergroupmembership_id_local_var = NULL;
    }
    if (fki_ezsignsignergroup_id_local_var) {
        free(fki_ezsignsignergroup_id_local_var);
        fki_ezsignsignergroup_id_local_var = NULL;
    }
    if (fki_ezsignsigner_id_local_var) {
        free(fki_ezsignsigner_id_local_var);
        fki_ezsignsigner_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_usergroup_id_local_var) {
        free(fki_usergroup_id_local_var);
        fki_usergroup_id_local_var = NULL;
    }
    return NULL;

}
