#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "permission_response_compound.h"



permission_response_compound_t *permission_response_compound_create(
    int pki_permission_id,
    int fki_user_id,
    int fki_apikey_id,
    int fki_usergroup_id,
    int fki_company_id,
    int fki_modulesection_id,
    char *s_company_name_x
    ) {
    permission_response_compound_t *permission_response_compound_local_var = malloc(sizeof(permission_response_compound_t));
    if (!permission_response_compound_local_var) {
        return NULL;
    }
    permission_response_compound_local_var->pki_permission_id = pki_permission_id;
    permission_response_compound_local_var->fki_user_id = fki_user_id;
    permission_response_compound_local_var->fki_apikey_id = fki_apikey_id;
    permission_response_compound_local_var->fki_usergroup_id = fki_usergroup_id;
    permission_response_compound_local_var->fki_company_id = fki_company_id;
    permission_response_compound_local_var->fki_modulesection_id = fki_modulesection_id;
    permission_response_compound_local_var->s_company_name_x = s_company_name_x;

    return permission_response_compound_local_var;
}


void permission_response_compound_free(permission_response_compound_t *permission_response_compound) {
    if(NULL == permission_response_compound){
        return ;
    }
    listEntry_t *listEntry;
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
    if(cJSON_AddNumberToObject(item, "pkiPermissionID", permission_response_compound->pki_permission_id) == NULL) {
    goto fail; //Numeric
    }


    // permission_response_compound->fki_user_id
    if(permission_response_compound->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", permission_response_compound->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_response_compound->fki_apikey_id
    if(permission_response_compound->fki_apikey_id) {
    if(cJSON_AddNumberToObject(item, "fkiApikeyID", permission_response_compound->fki_apikey_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_response_compound->fki_usergroup_id
    if(permission_response_compound->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", permission_response_compound->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_response_compound->fki_company_id
    if(permission_response_compound->fki_company_id) {
    if(cJSON_AddNumberToObject(item, "fkiCompanyID", permission_response_compound->fki_company_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_response_compound->fki_modulesection_id
    if (!permission_response_compound->fki_modulesection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiModulesectionID", permission_response_compound->fki_modulesection_id) == NULL) {
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

    // permission_response_compound->pki_permission_id
    cJSON *pki_permission_id = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "pkiPermissionID");
    if (!pki_permission_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_permission_id))
    {
    goto end; //Numeric
    }

    // permission_response_compound->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // permission_response_compound->fki_apikey_id
    cJSON *fki_apikey_id = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "fkiApikeyID");
    if (fki_apikey_id) { 
    if(!cJSON_IsNumber(fki_apikey_id))
    {
    goto end; //Numeric
    }
    }

    // permission_response_compound->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "fkiUsergroupID");
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // permission_response_compound->fki_company_id
    cJSON *fki_company_id = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "fkiCompanyID");
    if (fki_company_id) { 
    if(!cJSON_IsNumber(fki_company_id))
    {
    goto end; //Numeric
    }
    }

    // permission_response_compound->fki_modulesection_id
    cJSON *fki_modulesection_id = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "fkiModulesectionID");
    if (!fki_modulesection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_modulesection_id))
    {
    goto end; //Numeric
    }

    // permission_response_compound->s_company_name_x
    cJSON *s_company_name_x = cJSON_GetObjectItemCaseSensitive(permission_response_compoundJSON, "sCompanyNameX");
    if (s_company_name_x) { 
    if(!cJSON_IsString(s_company_name_x) && !cJSON_IsNull(s_company_name_x))
    {
    goto end; //String
    }
    }


    permission_response_compound_local_var = permission_response_compound_create (
        pki_permission_id->valuedouble,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_apikey_id ? fki_apikey_id->valuedouble : 0,
        fki_usergroup_id ? fki_usergroup_id->valuedouble : 0,
        fki_company_id ? fki_company_id->valuedouble : 0,
        fki_modulesection_id->valuedouble,
        s_company_name_x && !cJSON_IsNull(s_company_name_x) ? strdup(s_company_name_x->valuestring) : NULL
        );

    return permission_response_compound_local_var;
end:
    return NULL;

}
