#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "usergroupmembership_request_compound.h"



static usergroupmembership_request_compound_t *usergroupmembership_request_compound_create_internal(
    int *pki_usergroupmembership_id,
    int *fki_usergroup_id,
    int *fki_user_id,
    int *fki_usergroupexternal_id
    ) {
    usergroupmembership_request_compound_t *usergroupmembership_request_compound_local_var = malloc(sizeof(usergroupmembership_request_compound_t));
    if (!usergroupmembership_request_compound_local_var) {
        return NULL;
    }
    memset(usergroupmembership_request_compound_local_var, 0, sizeof(usergroupmembership_request_compound_t));
    usergroupmembership_request_compound_local_var->_library_owned = 1;
    usergroupmembership_request_compound_local_var->pki_usergroupmembership_id = pki_usergroupmembership_id;
    usergroupmembership_request_compound_local_var->fki_usergroup_id = fki_usergroup_id;
    usergroupmembership_request_compound_local_var->fki_user_id = fki_user_id;
    usergroupmembership_request_compound_local_var->fki_usergroupexternal_id = fki_usergroupexternal_id;
    return usergroupmembership_request_compound_local_var;
}

__attribute__((deprecated)) usergroupmembership_request_compound_t *usergroupmembership_request_compound_create(
    int *pki_usergroupmembership_id,
    int *fki_usergroup_id,
    int *fki_user_id,
    int *fki_usergroupexternal_id
    ) {
    int *pki_usergroupmembership_id_copy = NULL;
    if (pki_usergroupmembership_id) {
        pki_usergroupmembership_id_copy = malloc(sizeof(int));
        if (pki_usergroupmembership_id_copy) *pki_usergroupmembership_id_copy = *pki_usergroupmembership_id;
    }
    int *fki_usergroup_id_copy = NULL;
    if (fki_usergroup_id) {
        fki_usergroup_id_copy = malloc(sizeof(int));
        if (fki_usergroup_id_copy) *fki_usergroup_id_copy = *fki_usergroup_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *fki_usergroupexternal_id_copy = NULL;
    if (fki_usergroupexternal_id) {
        fki_usergroupexternal_id_copy = malloc(sizeof(int));
        if (fki_usergroupexternal_id_copy) *fki_usergroupexternal_id_copy = *fki_usergroupexternal_id;
    }
    usergroupmembership_request_compound_t *result = usergroupmembership_request_compound_create_internal (
        pki_usergroupmembership_id_copy,
        fki_usergroup_id_copy,
        fki_user_id_copy,
        fki_usergroupexternal_id_copy
        );
    if (!result) {
        free(pki_usergroupmembership_id_copy);
        free(fki_usergroup_id_copy);
        free(fki_user_id_copy);
        free(fki_usergroupexternal_id_copy);
    }
    return result;
}

void usergroupmembership_request_compound_free(usergroupmembership_request_compound_t *usergroupmembership_request_compound) {
    if(NULL == usergroupmembership_request_compound){
        return ;
    }
    if(usergroupmembership_request_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "usergroupmembership_request_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (usergroupmembership_request_compound->pki_usergroupmembership_id) {
        free(usergroupmembership_request_compound->pki_usergroupmembership_id);
        usergroupmembership_request_compound->pki_usergroupmembership_id = NULL;
    }
    if (usergroupmembership_request_compound->fki_usergroup_id) {
        free(usergroupmembership_request_compound->fki_usergroup_id);
        usergroupmembership_request_compound->fki_usergroup_id = NULL;
    }
    if (usergroupmembership_request_compound->fki_user_id) {
        free(usergroupmembership_request_compound->fki_user_id);
        usergroupmembership_request_compound->fki_user_id = NULL;
    }
    if (usergroupmembership_request_compound->fki_usergroupexternal_id) {
        free(usergroupmembership_request_compound->fki_usergroupexternal_id);
        usergroupmembership_request_compound->fki_usergroupexternal_id = NULL;
    }
    free(usergroupmembership_request_compound);
}

cJSON *usergroupmembership_request_compound_convertToJSON(usergroupmembership_request_compound_t *usergroupmembership_request_compound) {
    cJSON *item = cJSON_CreateObject();

    // usergroupmembership_request_compound->pki_usergroupmembership_id
    if(usergroupmembership_request_compound->pki_usergroupmembership_id) {
    if(cJSON_AddNumberToObject(item, "pkiUsergroupmembershipID", *usergroupmembership_request_compound->pki_usergroupmembership_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroupmembership_request_compound->fki_usergroup_id
    if (!usergroupmembership_request_compound->fki_usergroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", *usergroupmembership_request_compound->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }


    // usergroupmembership_request_compound->fki_user_id
    if(usergroupmembership_request_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *usergroupmembership_request_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // usergroupmembership_request_compound->fki_usergroupexternal_id
    if(usergroupmembership_request_compound->fki_usergroupexternal_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupexternalID", *usergroupmembership_request_compound->fki_usergroupexternal_id) == NULL) {
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

usergroupmembership_request_compound_t *usergroupmembership_request_compound_parseFromJSON(cJSON *usergroupmembership_request_compoundJSON){

    usergroupmembership_request_compound_t *usergroupmembership_request_compound_local_var = NULL;

    // define the local variable for usergroupmembership_request_compound->pki_usergroupmembership_id
    int *pki_usergroupmembership_id_local_var = NULL;

    // define the local variable for usergroupmembership_request_compound->fki_usergroup_id
    int *fki_usergroup_id_local_var = NULL;

    // define the local variable for usergroupmembership_request_compound->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for usergroupmembership_request_compound->fki_usergroupexternal_id
    int *fki_usergroupexternal_id_local_var = NULL;

    // usergroupmembership_request_compound->pki_usergroupmembership_id
    cJSON *pki_usergroupmembership_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_request_compoundJSON, "pkiUsergroupmembershipID");
    if (cJSON_IsNull(pki_usergroupmembership_id)) {
        pki_usergroupmembership_id = NULL;
    }
    if (pki_usergroupmembership_id) { 
    if(!cJSON_IsNumber(pki_usergroupmembership_id))
    {
    goto end; //Numeric
    }
    pki_usergroupmembership_id_local_var = malloc(sizeof(int));
    if(!pki_usergroupmembership_id_local_var)
    {
        goto end;
    }
    *pki_usergroupmembership_id_local_var = pki_usergroupmembership_id->valuedouble;
    }

    // usergroupmembership_request_compound->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_request_compoundJSON, "fkiUsergroupID");
    if (cJSON_IsNull(fki_usergroup_id)) {
        fki_usergroup_id = NULL;
    }
    if (!fki_usergroup_id) {
        goto end;
    }

    
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

    // usergroupmembership_request_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_request_compoundJSON, "fkiUserID");
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

    // usergroupmembership_request_compound->fki_usergroupexternal_id
    cJSON *fki_usergroupexternal_id = cJSON_GetObjectItemCaseSensitive(usergroupmembership_request_compoundJSON, "fkiUsergroupexternalID");
    if (cJSON_IsNull(fki_usergroupexternal_id)) {
        fki_usergroupexternal_id = NULL;
    }
    if (fki_usergroupexternal_id) { 
    if(!cJSON_IsNumber(fki_usergroupexternal_id))
    {
    goto end; //Numeric
    }
    fki_usergroupexternal_id_local_var = malloc(sizeof(int));
    if(!fki_usergroupexternal_id_local_var)
    {
        goto end;
    }
    *fki_usergroupexternal_id_local_var = fki_usergroupexternal_id->valuedouble;
    }



    usergroupmembership_request_compound_local_var = usergroupmembership_request_compound_create_internal (
        pki_usergroupmembership_id_local_var,
        fki_usergroup_id_local_var,
        fki_user_id_local_var,
        fki_usergroupexternal_id_local_var
        );

    if (!usergroupmembership_request_compound_local_var) {
        goto end;
    }

    return usergroupmembership_request_compound_local_var;
end:
    if (pki_usergroupmembership_id_local_var) {
        free(pki_usergroupmembership_id_local_var);
        pki_usergroupmembership_id_local_var = NULL;
    }
    if (fki_usergroup_id_local_var) {
        free(fki_usergroup_id_local_var);
        fki_usergroup_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_usergroupexternal_id_local_var) {
        free(fki_usergroupexternal_id_local_var);
        fki_usergroupexternal_id_local_var = NULL;
    }
    return NULL;

}
