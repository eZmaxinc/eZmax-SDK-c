#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "permission_response.h"



static permission_response_t *permission_response_create_internal(
    int pki_permission_id,
    int fki_user_id,
    int fki_apikey_id,
    int fki_usergroup_id,
    int fki_company_id,
    int fki_modulesection_id,
    char *s_company_name_x
    ) {
    permission_response_t *permission_response_local_var = malloc(sizeof(permission_response_t));
    if (!permission_response_local_var) {
        return NULL;
    }
    permission_response_local_var->pki_permission_id = pki_permission_id;
    permission_response_local_var->fki_user_id = fki_user_id;
    permission_response_local_var->fki_apikey_id = fki_apikey_id;
    permission_response_local_var->fki_usergroup_id = fki_usergroup_id;
    permission_response_local_var->fki_company_id = fki_company_id;
    permission_response_local_var->fki_modulesection_id = fki_modulesection_id;
    permission_response_local_var->s_company_name_x = s_company_name_x;

    permission_response_local_var->_library_owned = 1;
    return permission_response_local_var;
}

__attribute__((deprecated)) permission_response_t *permission_response_create(
    int pki_permission_id,
    int fki_user_id,
    int fki_apikey_id,
    int fki_usergroup_id,
    int fki_company_id,
    int fki_modulesection_id,
    char *s_company_name_x
    ) {
    return permission_response_create_internal (
        pki_permission_id,
        fki_user_id,
        fki_apikey_id,
        fki_usergroup_id,
        fki_company_id,
        fki_modulesection_id,
        s_company_name_x
        );
}

void permission_response_free(permission_response_t *permission_response) {
    if(NULL == permission_response){
        return ;
    }
    if(permission_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "permission_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (permission_response->s_company_name_x) {
        free(permission_response->s_company_name_x);
        permission_response->s_company_name_x = NULL;
    }
    free(permission_response);
}

cJSON *permission_response_convertToJSON(permission_response_t *permission_response) {
    cJSON *item = cJSON_CreateObject();

    // permission_response->pki_permission_id
    if (!permission_response->pki_permission_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiPermissionID", permission_response->pki_permission_id) == NULL) {
    goto fail; //Numeric
    }


    // permission_response->fki_user_id
    if(permission_response->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", permission_response->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_response->fki_apikey_id
    if(permission_response->fki_apikey_id) {
    if(cJSON_AddNumberToObject(item, "fkiApikeyID", permission_response->fki_apikey_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_response->fki_usergroup_id
    if(permission_response->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", permission_response->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_response->fki_company_id
    if(permission_response->fki_company_id) {
    if(cJSON_AddNumberToObject(item, "fkiCompanyID", permission_response->fki_company_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_response->fki_modulesection_id
    if (!permission_response->fki_modulesection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiModulesectionID", permission_response->fki_modulesection_id) == NULL) {
    goto fail; //Numeric
    }


    // permission_response->s_company_name_x
    if(permission_response->s_company_name_x) {
    if(cJSON_AddStringToObject(item, "sCompanyNameX", permission_response->s_company_name_x) == NULL) {
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

permission_response_t *permission_response_parseFromJSON(cJSON *permission_responseJSON){

    permission_response_t *permission_response_local_var = NULL;

    // permission_response->pki_permission_id
    cJSON *pki_permission_id = cJSON_GetObjectItemCaseSensitive(permission_responseJSON, "pkiPermissionID");
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

    // permission_response->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(permission_responseJSON, "fkiUserID");
    if (cJSON_IsNull(fki_user_id)) {
        fki_user_id = NULL;
    }
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // permission_response->fki_apikey_id
    cJSON *fki_apikey_id = cJSON_GetObjectItemCaseSensitive(permission_responseJSON, "fkiApikeyID");
    if (cJSON_IsNull(fki_apikey_id)) {
        fki_apikey_id = NULL;
    }
    if (fki_apikey_id) { 
    if(!cJSON_IsNumber(fki_apikey_id))
    {
    goto end; //Numeric
    }
    }

    // permission_response->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(permission_responseJSON, "fkiUsergroupID");
    if (cJSON_IsNull(fki_usergroup_id)) {
        fki_usergroup_id = NULL;
    }
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // permission_response->fki_company_id
    cJSON *fki_company_id = cJSON_GetObjectItemCaseSensitive(permission_responseJSON, "fkiCompanyID");
    if (cJSON_IsNull(fki_company_id)) {
        fki_company_id = NULL;
    }
    if (fki_company_id) { 
    if(!cJSON_IsNumber(fki_company_id))
    {
    goto end; //Numeric
    }
    }

    // permission_response->fki_modulesection_id
    cJSON *fki_modulesection_id = cJSON_GetObjectItemCaseSensitive(permission_responseJSON, "fkiModulesectionID");
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

    // permission_response->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(permission_responseJSON, "sCompanyNameX");
    if (cJSON_IsNull(s_company_name_x)) {
        s_company_name_x = NULL;
    }
    if (s_company_name_x) { 
    if(!cJSON_IsString(s_company_name_x) && !cJSON_IsNull(s_company_name_x))
    {
    goto end; //String
    }
    }


    permission_response_local_var = permission_response_create_internal (
        pki_permission_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_apikey_id ? fki_apikey_id->valuedouble : 0,
        fki_usergroup_id ? fki_usergroup_id->valuedouble : 0,
        fki_company_id ? fki_company_id->valuedouble : 0,
        fki_modulesection_id->valuedouble,
        s_company_name_x && !cJSON_IsNull(s_company_name_x) ? strdup(s_company_name_x->valuestring) : NULL
        );

    return permission_response_local_var;
end:
    return NULL;

}
