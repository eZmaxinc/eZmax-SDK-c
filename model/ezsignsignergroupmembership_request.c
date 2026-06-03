#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignsignergroupmembership_request.h"



static ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request_create_internal(
    int *pki_ezsignsignergroupmembership_id,
    int *fki_ezsignsignergroup_id,
    int *fki_ezsignsigner_id,
    int *fki_user_id,
    int *fki_usergroup_id
    ) {
    ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request_local_var = malloc(sizeof(ezsignsignergroupmembership_request_t));
    if (!ezsignsignergroupmembership_request_local_var) {
        return NULL;
    }
    memset(ezsignsignergroupmembership_request_local_var, 0, sizeof(ezsignsignergroupmembership_request_t));
    ezsignsignergroupmembership_request_local_var->_library_owned = 1;
    ezsignsignergroupmembership_request_local_var->pki_ezsignsignergroupmembership_id = pki_ezsignsignergroupmembership_id;
    ezsignsignergroupmembership_request_local_var->fki_ezsignsignergroup_id = fki_ezsignsignergroup_id;
    ezsignsignergroupmembership_request_local_var->fki_ezsignsigner_id = fki_ezsignsigner_id;
    ezsignsignergroupmembership_request_local_var->fki_user_id = fki_user_id;
    ezsignsignergroupmembership_request_local_var->fki_usergroup_id = fki_usergroup_id;
    return ezsignsignergroupmembership_request_local_var;
}

__attribute__((deprecated)) ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request_create(
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
    ezsignsignergroupmembership_request_t *result = ezsignsignergroupmembership_request_create_internal (
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

void ezsignsignergroupmembership_request_free(ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request) {
    if(NULL == ezsignsignergroupmembership_request){
        return ;
    }
    if(ezsignsignergroupmembership_request->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignsignergroupmembership_request_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignsignergroupmembership_request->pki_ezsignsignergroupmembership_id) {
        free(ezsignsignergroupmembership_request->pki_ezsignsignergroupmembership_id);
        ezsignsignergroupmembership_request->pki_ezsignsignergroupmembership_id = NULL;
    }
    if (ezsignsignergroupmembership_request->fki_ezsignsignergroup_id) {
        free(ezsignsignergroupmembership_request->fki_ezsignsignergroup_id);
        ezsignsignergroupmembership_request->fki_ezsignsignergroup_id = NULL;
    }
    if (ezsignsignergroupmembership_request->fki_ezsignsigner_id) {
        free(ezsignsignergroupmembership_request->fki_ezsignsigner_id);
        ezsignsignergroupmembership_request->fki_ezsignsigner_id = NULL;
    }
    if (ezsignsignergroupmembership_request->fki_user_id) {
        free(ezsignsignergroupmembership_request->fki_user_id);
        ezsignsignergroupmembership_request->fki_user_id = NULL;
    }
    if (ezsignsignergroupmembership_request->fki_usergroup_id) {
        free(ezsignsignergroupmembership_request->fki_usergroup_id);
        ezsignsignergroupmembership_request->fki_usergroup_id = NULL;
    }
    free(ezsignsignergroupmembership_request);
}

cJSON *ezsignsignergroupmembership_request_convertToJSON(ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request) {
    cJSON *item = cJSON_CreateObject();

    // ezsignsignergroupmembership_request->pki_ezsignsignergroupmembership_id
    if(ezsignsignergroupmembership_request->pki_ezsignsignergroupmembership_id) {
    if(cJSON_AddNumberToObject(item, "pkiEzsignsignergroupmembershipID", *ezsignsignergroupmembership_request->pki_ezsignsignergroupmembership_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignergroupmembership_request->fki_ezsignsignergroup_id
    if (!ezsignsignergroupmembership_request->fki_ezsignsignergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignergroupID", *ezsignsignergroupmembership_request->fki_ezsignsignergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignsignergroupmembership_request->fki_ezsignsigner_id
    if(ezsignsignergroupmembership_request->fki_ezsignsigner_id) {
    if(cJSON_AddNumberToObject(item, "fkiEzsignsignerID", *ezsignsignergroupmembership_request->fki_ezsignsigner_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignergroupmembership_request->fki_user_id
    if(ezsignsignergroupmembership_request->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *ezsignsignergroupmembership_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // ezsignsignergroupmembership_request->fki_usergroup_id
    if(ezsignsignergroupmembership_request->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", *ezsignsignergroupmembership_request->fki_usergroup_id) == NULL) {
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

ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request_parseFromJSON(cJSON *ezsignsignergroupmembership_requestJSON){

    ezsignsignergroupmembership_request_t *ezsignsignergroupmembership_request_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_request->pki_ezsignsignergroupmembership_id
    int *pki_ezsignsignergroupmembership_id_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_request->fki_ezsignsignergroup_id
    int *fki_ezsignsignergroup_id_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_request->fki_ezsignsigner_id
    int *fki_ezsignsigner_id_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_request->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for ezsignsignergroupmembership_request->fki_usergroup_id
    int *fki_usergroup_id_local_var = NULL;

    // ezsignsignergroupmembership_request->pki_ezsignsignergroupmembership_id
    cJSON *pki_ezsignsignergroupmembership_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_requestJSON, "pkiEzsignsignergroupmembershipID");
    if (cJSON_IsNull(pki_ezsignsignergroupmembership_id)) {
        pki_ezsignsignergroupmembership_id = NULL;
    }
    if (pki_ezsignsignergroupmembership_id) { 
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
    }

    // ezsignsignergroupmembership_request->fki_ezsignsignergroup_id
    cJSON *fki_ezsignsignergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_requestJSON, "fkiEzsignsignergroupID");
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

    // ezsignsignergroupmembership_request->fki_ezsignsigner_id
    cJSON *fki_ezsignsigner_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_requestJSON, "fkiEzsignsignerID");
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

    // ezsignsignergroupmembership_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_requestJSON, "fkiUserID");
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

    // ezsignsignergroupmembership_request->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(ezsignsignergroupmembership_requestJSON, "fkiUsergroupID");
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



    ezsignsignergroupmembership_request_local_var = ezsignsignergroupmembership_request_create_internal (
        pki_ezsignsignergroupmembership_id_local_var,
        fki_ezsignsignergroup_id_local_var,
        fki_ezsignsigner_id_local_var,
        fki_user_id_local_var,
        fki_usergroup_id_local_var
        );

    if (!ezsignsignergroupmembership_request_local_var) {
        goto end;
    }

    return ezsignsignergroupmembership_request_local_var;
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
