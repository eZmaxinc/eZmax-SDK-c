#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "permission_request.h"



permission_request_t *permission_request_create(
    int pki_permission_id,
    int fki_user_id,
    int fki_apikey_id,
    int fki_usergroup_id,
    int fki_company_id,
    int fki_modulesection_id
    ) {
    permission_request_t *permission_request_local_var = malloc(sizeof(permission_request_t));
    if (!permission_request_local_var) {
        return NULL;
    }
    permission_request_local_var->pki_permission_id = pki_permission_id;
    permission_request_local_var->fki_user_id = fki_user_id;
    permission_request_local_var->fki_apikey_id = fki_apikey_id;
    permission_request_local_var->fki_usergroup_id = fki_usergroup_id;
    permission_request_local_var->fki_company_id = fki_company_id;
    permission_request_local_var->fki_modulesection_id = fki_modulesection_id;

    return permission_request_local_var;
}


void permission_request_free(permission_request_t *permission_request) {
    if(NULL == permission_request){
        return ;
    }
    listEntry_t *listEntry;
    free(permission_request);
}

cJSON *permission_request_convertToJSON(permission_request_t *permission_request) {
    cJSON *item = cJSON_CreateObject();

    // permission_request->pki_permission_id
    if(permission_request->pki_permission_id) {
    if(cJSON_AddNumberToObject(item, "pkiPermissionID", permission_request->pki_permission_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_request->fki_user_id
    if(permission_request->fki_user_id) {
    if(cJSON_AddNumberToObject(item, "fkiUserID", permission_request->fki_user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_request->fki_apikey_id
    if(permission_request->fki_apikey_id) {
    if(cJSON_AddNumberToObject(item, "fkiApikeyID", permission_request->fki_apikey_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_request->fki_usergroup_id
    if(permission_request->fki_usergroup_id) {
    if(cJSON_AddNumberToObject(item, "fkiUsergroupID", permission_request->fki_usergroup_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_request->fki_company_id
    if(permission_request->fki_company_id) {
    if(cJSON_AddNumberToObject(item, "fkiCompanyID", permission_request->fki_company_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // permission_request->fki_modulesection_id
    if (!permission_request->fki_modulesection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiModulesectionID", permission_request->fki_modulesection_id) == NULL) {
    goto fail; //Numeric
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

permission_request_t *permission_request_parseFromJSON(cJSON *permission_requestJSON){

    permission_request_t *permission_request_local_var = NULL;

    // permission_request->pki_permission_id
    cJSON *pki_permission_id = cJSON_GetObjectItemCaseSensitive(permission_requestJSON, "pkiPermissionID");
    if (pki_permission_id) { 
    if(!cJSON_IsNumber(pki_permission_id))
    {
    goto end; //Numeric
    }
    }

    // permission_request->fki_user_id
    cJSON *fki_user_id = cJSON_GetObjectItemCaseSensitive(permission_requestJSON, "fkiUserID");
    if (fki_user_id) { 
    if(!cJSON_IsNumber(fki_user_id))
    {
    goto end; //Numeric
    }
    }

    // permission_request->fki_apikey_id
    cJSON *fki_apikey_id = cJSON_GetObjectItemCaseSensitive(permission_requestJSON, "fkiApikeyID");
    if (fki_apikey_id) { 
    if(!cJSON_IsNumber(fki_apikey_id))
    {
    goto end; //Numeric
    }
    }

    // permission_request->fki_usergroup_id
    cJSON *fki_usergroup_id = cJSON_GetObjectItemCaseSensitive(permission_requestJSON, "fkiUsergroupID");
    if (fki_usergroup_id) { 
    if(!cJSON_IsNumber(fki_usergroup_id))
    {
    goto end; //Numeric
    }
    }

    // permission_request->fki_company_id
    cJSON *fki_company_id = cJSON_GetObjectItemCaseSensitive(permission_requestJSON, "fkiCompanyID");
    if (fki_company_id) { 
    if(!cJSON_IsNumber(fki_company_id))
    {
    goto end; //Numeric
    }
    }

    // permission_request->fki_modulesection_id
    cJSON *fki_modulesection_id = cJSON_GetObjectItemCaseSensitive(permission_requestJSON, "fkiModulesectionID");
    if (!fki_modulesection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_modulesection_id))
    {
    goto end; //Numeric
    }


    permission_request_local_var = permission_request_create (
        pki_permission_id ? pki_permission_id->valuedouble : 0,
        fki_user_id ? fki_user_id->valuedouble : 0,
        fki_apikey_id ? fki_apikey_id->valuedouble : 0,
        fki_usergroup_id ? fki_usergroup_id->valuedouble : 0,
        fki_company_id ? fki_company_id->valuedouble : 0,
        fki_modulesection_id->valuedouble
        );

    return permission_request_local_var;
end:
    return NULL;

}
