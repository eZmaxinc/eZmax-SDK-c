#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module_response.h"



module_response_t *module_response_create(
    int pki_module_id,
    int fki_modulegroup_id,
    char *e_module_internalname,
    char *s_module_name_x,
    int b_module_registered,
    int b_module_registeredapi
    ) {
    module_response_t *module_response_local_var = malloc(sizeof(module_response_t));
    if (!module_response_local_var) {
        return NULL;
    }
    module_response_local_var->pki_module_id = pki_module_id;
    module_response_local_var->fki_modulegroup_id = fki_modulegroup_id;
    module_response_local_var->e_module_internalname = e_module_internalname;
    module_response_local_var->s_module_name_x = s_module_name_x;
    module_response_local_var->b_module_registered = b_module_registered;
    module_response_local_var->b_module_registeredapi = b_module_registeredapi;

    return module_response_local_var;
}


void module_response_free(module_response_t *module_response) {
    if(NULL == module_response){
        return ;
    }
    listEntry_t *listEntry;
    if (module_response->e_module_internalname) {
        free(module_response->e_module_internalname);
        module_response->e_module_internalname = NULL;
    }
    if (module_response->s_module_name_x) {
        free(module_response->s_module_name_x);
        module_response->s_module_name_x = NULL;
    }
    free(module_response);
}

cJSON *module_response_convertToJSON(module_response_t *module_response) {
    cJSON *item = cJSON_CreateObject();

    // module_response->pki_module_id
    if (!module_response->pki_module_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiModuleID", module_response->pki_module_id) == NULL) {
    goto fail; //Numeric
    }


    // module_response->fki_modulegroup_id
    if (!module_response->fki_modulegroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiModulegroupID", module_response->fki_modulegroup_id) == NULL) {
    goto fail; //Numeric
    }


    // module_response->e_module_internalname
    if (!module_response->e_module_internalname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "eModuleInternalname", module_response->e_module_internalname) == NULL) {
    goto fail; //String
    }


    // module_response->s_module_name_x
    if (!module_response->s_module_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sModuleNameX", module_response->s_module_name_x) == NULL) {
    goto fail; //String
    }


    // module_response->b_module_registered
    if (!module_response->b_module_registered) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bModuleRegistered", module_response->b_module_registered) == NULL) {
    goto fail; //Bool
    }


    // module_response->b_module_registeredapi
    if (!module_response->b_module_registeredapi) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bModuleRegisteredapi", module_response->b_module_registeredapi) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

module_response_t *module_response_parseFromJSON(cJSON *module_responseJSON){

    module_response_t *module_response_local_var = NULL;

    // module_response->pki_module_id
    cJSON *pki_module_id = cJSON_GetObjectItemCaseSensitive(module_responseJSON, "pkiModuleID");
    if (!pki_module_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_module_id))
    {
    goto end; //Numeric
    }

    // module_response->fki_modulegroup_id
    cJSON *fki_modulegroup_id = cJSON_GetObjectItemCaseSensitive(module_responseJSON, "fkiModulegroupID");
    if (!fki_modulegroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_modulegroup_id))
    {
    goto end; //Numeric
    }

    // module_response->e_module_internalname
    cJSON *e_module_internalname = cJSON_GetObjectItemCaseSensitive(module_responseJSON, "eModuleInternalname");
    if (!e_module_internalname) {
        goto end;
    }

    
    if(!cJSON_IsString(e_module_internalname))
    {
    goto end; //String
    }

    // module_response->s_module_name_x
    cJSON *s_module_name_x = cJSON_GetObjectItemCaseSensitive(module_responseJSON, "sModuleNameX");
    if (!s_module_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_module_name_x))
    {
    goto end; //String
    }

    // module_response->b_module_registered
    cJSON *b_module_registered = cJSON_GetObjectItemCaseSensitive(module_responseJSON, "bModuleRegistered");
    if (!b_module_registered) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_module_registered))
    {
    goto end; //Bool
    }

    // module_response->b_module_registeredapi
    cJSON *b_module_registeredapi = cJSON_GetObjectItemCaseSensitive(module_responseJSON, "bModuleRegisteredapi");
    if (!b_module_registeredapi) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_module_registeredapi))
    {
    goto end; //Bool
    }


    module_response_local_var = module_response_create (
        pki_module_id->valuedouble,
        fki_modulegroup_id->valuedouble,
        strdup(e_module_internalname->valuestring),
        strdup(s_module_name_x->valuestring),
        b_module_registered->valueint,
        b_module_registeredapi->valueint
        );

    return module_response_local_var;
end:
    return NULL;

}
