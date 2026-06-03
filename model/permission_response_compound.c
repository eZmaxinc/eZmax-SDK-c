#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "permission_response_compound.h"



static permission_response_compound_t *permission_response_compound_create_internal(
    int *pki_permission_id,
    int *fki_user_id,
    int *fki_apikey_id,
    int *fki_usergroup_id,
    int *fki_company_id,
    int *fki_modulesection_id,
    char *s_company_name_x
    ) {
    permission_response_compound_t *permission_response_compound_local_var = malloc(sizeof(permission_response_compound_t));
    if (!permission_response_compound_local_var) {
        return NULL;
    }
    memset(permission_response_compound_local_var, 0, sizeof(permission_response_compound_t));
    permission_response_compound_local_var->_library_owned = 1;
    permission_response_compound_local_var->pki_permission_id = pki_permission_id;
    permission_response_compound_local_var->fki_user_id = fki_user_id;
    permission_response_compound_local_var->fki_apikey_id = fki_apikey_id;
    permission_response_compound_local_var->fki_usergroup_id = fki_usergroup_id;
    permission_response_compound_local_var->fki_company_id = fki_company_id;
    permission_response_compound_local_var->fki_modulesection_id = fki_modulesection_id;
    permission_response_compound_local_var->s_company_name_x = s_company_name_x;
    return permission_response_compound_local_var;
}

__attribute__((deprecated)) permission_response_compound_t *permission_response_compound_create(
    int *pki_permission_id,
    int *fki_user_id,
    int *fki_apikey_id,
    int *fki_usergroup_id,
    int *fki_company_id,
    int *fki_modulesection_id,
    char *s_company_name_x
    ) {
    int *pki_permission_id_copy = NULL;
    if (pki_permission_id) {
        pki_permission_id_copy = malloc(sizeof(int));
        if (pki_permission_id_copy) *pki_permission_id_copy = *pki_permission_id;
    }
    int *fki_user_id_copy = NULL;
    if (fki_user_id) {
        fki_user_id_copy = malloc(sizeof(int));
        if (fki_user_id_copy) *fki_user_id_copy = *fki_user_id;
    }
    int *fki_apikey_id_copy = NULL;
    if (fki_apikey_id) {
        fki_apikey_id_copy = malloc(sizeof(int));
        if (fki_apikey_id_copy) *fki_apikey_id_copy = *fki_apikey_id;
    }
    int *fki_usergroup_id_copy = NULL;
    if (fki_usergroup_id) {
        fki_usergroup_id_copy = malloc(sizeof(int));
        if (fki_usergroup_id_copy) *fki_usergroup_id_copy = *fki_usergroup_id;
    }
    int *fki_company_id_copy = NULL;
    if (fki_company_id) {
        fki_company_id_copy = malloc(sizeof(int));
        if (fki_company_id_copy) *fki_company_id_copy = *fki_company_id;
    }
    int *fki_modulesection_id_copy = NULL;
    if (fki_modulesection_id) {
        fki_modulesection_id_copy = malloc(sizeof(int));
        if (fki_modulesection_id_copy) *fki_modulesection_id_copy = *fki_modulesection_id;
    }
    permission_response_compound_t *result = permission_response_compound_create_internal (
        pki_permission_id_copy,
        fki_user_id_copy,
        fki_apikey_id_copy,
        fki_usergroup_id_copy,
        fki_company_id_copy,
        fki_modulesection_id_copy,
        s_company_name_x
        );
    if (!result) {
        free(pki_permission_id_copy);
        free(fki_user_id_copy);
        free(fki_apikey_id_copy);
        free(fki_usergroup_id_copy);
        free(fki_company_id_copy);
        free(fki_modulesection_id_copy);
    }
    return result;
}

void permission_response_compound_free(permission_response_compound_t *permission_response_compound) {
    if(NULL == permission_response_compound){
        return ;
    }
    if(permission_response_compound->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "permission_response_compound_free");
        return ;
    }
    listEntry_t *listEntry;
    if (permission_response_compound->pki_permission_id) {
        free(permission_response_compound->pki_permission_id);
        permission_response_compound->pki_permission_id = NULL;
    }
    if (permission_response_compound->fki_user_id) {
        free(permission_response_compound->fki_user_id);
        permission_response_compound->fki_user_id = NULL;
    }
    if (permission_response_compound->fki_apikey_id) {
        free(permission_response_compound->fki_apikey_id);
        permission_response_compound->fki_apikey_id = NULL;
    }
    if (permission_response_compound->fki_usergroup_id) {
        free(permission_response_compound->fki_usergroup_id);
        permission_response_compound->fki_usergroup_id = NULL;
    }
    if (permission_response_compound->fki_company_id) {
        free(permission_response_compound->fki_company_id);
        permission_response_compound->fki_company_id = NULL;
    }
    if (permission_response_compound->fki_modulesection_id) {
        free(permission_response_compound->fki_modulesection_id);
        permission_response_compound->fki_modulesection_id = NULL;
    }
    if (permission_response_compound->s_company_name_x) {
        free(permission_response_compound->s_company_name_x);
        permission_response_compound->s_company_name_x = NULL;
    }
    free(permission_response_compound);
}

cJSON *permission_response_compound_convertToJSON(permission_response_compound_t *permission_response_compound) {
    cJSON *item = cJSON_CreateObject();

    // permission_response_compound->pki_permission_id
    if (!permission_response_compound->pki_permission_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPermissionID", *permission_response_compound->pki_permission_id) == NULL) {
    goto fail; //Numeric
    }


    // permission_response_compound->fki_user_id
    if(permission_response_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", *permission_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_response_compound->fki_apikey_id
    if(permission_response_compound->fki_apikey_id) {
    if(cJSON_AddNumberToObject(item, "fkiApikeyID", *permission_response_compound->fki_apikey_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_response_compound->fki_usergroup_id
    if(permission_response_compound->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", *permission_response_compound->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_response_compound->fki_company_id
    if(permission_response_compound->fki_company_id) {
    if(cJSON_AddNumberToObject(item, "fkiCompanyID", *permission_response_compound->fki_company_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_response_compound->fki_modulesection_id
    if (!permission_response_compound->fki_modulesection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiModulesectionID", *permission_response_compound->fki_modulesection_id) == NULL) {
    goto fail; //Numeric
    }


    // permission_response_compound->s_company_name_x
    if(permission_response_compound->s_company_name_x) {
    if(cJSON_AddStringToObject(item, "sCompanyNameX", permission_response_compound->s_company_name_x) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

permission_response_compound_t *permission_response_compound_parseFromJSON(cJSON *permission_response_compoundJSON){

    permission_response_compound_t *permission_response_compound_local_var = NULL;

    // define the local variable for permission_response_compound->pki_permission_id
    int *pki_permission_id_local_var = NULL;

    // define the local variable for permission_response_compound->fki_user_id
    int *fki_user_id_local_var = NULL;

    // define the local variable for permission_response_compound->fki_apikey_id
    int *fki_apikey_id_local_var = NULL;

    // define the local variable for permission_response_compound->fki_usergroup_id
    int *fki_usergroup_id_local_var = NULL;

    // define the local variable for permission_response_compound->fki_company_id
    int *fki_company_id_local_var = NULL;

    // define the local variable for permission_response_compound->fki_modulesection_id
    int *fki_modulesection_id_local_var = NULL;

    char *s_company_name_x_local_str = NULL;

    // permission_response_compound->pki_permission_id
    cJSON *pki_permission_id = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "pkiPermissionID");
    if (cJSON_IsNull(pki_permission_id)) {
        pki_permission_id = NULL;
    }
    if (!pki_permission_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_permission_id))
    {
    goto end; //Numeric
    }
    pki_permission_id_local_var = malloc(sizeof(int));
    if(!pki_permission_id_local_var)
    {
        goto end;
    }
    *pki_permission_id_local_var = pki_permission_id->valuedouble;

    // permission_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "fkiUserID");
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

    // permission_response_compound->fki_apikey_id
    cJSON *fki_apikey_id = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "fkiApikeyID");
    if (cJSON_IsNull(fki_apikey_id)) {
        fki_apikey_id = NULL;
    }
    if (fki_apikey_id) { 
    if(!cJSON_IsNumber(fki_apikey_id))
    {
    goto end; //Numeric
    }
    fki_apikey_id_local_var = malloc(sizeof(int));
    if(!fki_apikey_id_local_var)
    {
        goto end;
    }
    *fki_apikey_id_local_var = fki_apikey_id->valuedouble;
    }

    // permission_response_compound->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "fkiUsergroupID");
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

    // permission_response_compound->fki_company_id
    cJSON *fki_company_id = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "fkiCompanyID");
    if (cJSON_IsNull(fki_company_id)) {
        fki_company_id = NULL;
    }
    if (fki_company_id) { 
    if(!cJSON_IsNumber(fki_company_id))
    {
    goto end; //Numeric
    }
    fki_company_id_local_var = malloc(sizeof(int));
    if(!fki_company_id_local_var)
    {
        goto end;
    }
    *fki_company_id_local_var = fki_company_id->valuedouble;
    }

    // permission_response_compound->fki_modulesection_id
    cJSON *fki_modulesection_id = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "fkiModulesectionID");
    if (cJSON_IsNull(fki_modulesection_id)) {
        fki_modulesection_id = NULL;
    }
    if (!fki_modulesection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_modulesection_id))
    {
    goto end; //Numeric
    }
    fki_modulesection_id_local_var = malloc(sizeof(int));
    if(!fki_modulesection_id_local_var)
    {
        goto end;
    }
    *fki_modulesection_id_local_var = fki_modulesection_id->valuedouble;

    // permission_response_compound->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "sCompanyNameX");
    if (cJSON_IsNull(s_company_name_x)) {
        s_company_name_x = NULL;
    }
    if (s_company_name_x) { 
    if(!cJSON_IsString(s_company_name_x) && !cJSON_IsNull(s_company_name_x))
    {
    goto end; //String
    }
    }


    if (s_company_name_x && !cJSON_IsNull(s_company_name_x)) s_company_name_x_local_str = strdup(s_company_name_x->valuestring);

    permission_response_compound_local_var = permission_response_compound_create_internal (
        pki_permission_id_local_var,
        fki_user_id_local_var,
        fki_apikey_id_local_var,
        fki_usergroup_id_local_var,
        fki_company_id_local_var,
        fki_modulesection_id_local_var,
        s_company_name_x_local_str
        );

    if (!permission_response_compound_local_var) {
        goto end;
    }

    return permission_response_compound_local_var;
end:
    if (pki_permission_id_local_var) {
        free(pki_permission_id_local_var);
        pki_permission_id_local_var = NULL;
    }
    if (fki_user_id_local_var) {
        free(fki_user_id_local_var);
        fki_user_id_local_var = NULL;
    }
    if (fki_apikey_id_local_var) {
        free(fki_apikey_id_local_var);
        fki_apikey_id_local_var = NULL;
    }
    if (fki_usergroup_id_local_var) {
        free(fki_usergroup_id_local_var);
        fki_usergroup_id_local_var = NULL;
    }
    if (fki_company_id_local_var) {
        free(fki_company_id_local_var);
        fki_company_id_local_var = NULL;
    }
    if (fki_modulesection_id_local_var) {
        free(fki_modulesection_id_local_var);
        fki_modulesection_id_local_var = NULL;
    }
    if (s_company_name_x_local_str) {
        free(s_company_name_x_local_str);
        s_company_name_x_local_str = NULL;
    }
    return NULL;

}
