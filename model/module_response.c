#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module_response.h"



static module_response_t *module_response_create_internal(
    int *pki_module_id,
    int *fki_modulegroup_id,
    char *e_module_internalname,
    char *s_module_name_x,
    int *b_module_registered,
    int *b_module_registeredapi
    ) {
    module_response_t *module_response_local_var = malloc(sizeof(module_response_t));
    if (!module_response_local_var) {
        return NULL;
    }
    memset(module_response_local_var, 0, sizeof(module_response_t));
    module_response_local_var->_library_owned = 1;
    module_response_local_var->pki_module_id = pki_module_id;
    module_response_local_var->fki_modulegroup_id = fki_modulegroup_id;
    module_response_local_var->e_module_internalname = e_module_internalname;
    module_response_local_var->s_module_name_x = s_module_name_x;
    module_response_local_var->b_module_registered = b_module_registered;
    module_response_local_var->b_module_registeredapi = b_module_registeredapi;
    return module_response_local_var;
}

__attribute__((deprecated)) module_response_t *module_response_create(
    int *pki_module_id,
    int *fki_modulegroup_id,
    char *e_module_internalname,
    char *s_module_name_x,
    int *b_module_registered,
    int *b_module_registeredapi
    ) {
    int *pki_module_id_copy = NULL;
    if (pki_module_id) {
        pki_module_id_copy = malloc(sizeof(int));
        if (pki_module_id_copy) *pki_module_id_copy = *pki_module_id;
    }
    int *fki_modulegroup_id_copy = NULL;
    if (fki_modulegroup_id) {
        fki_modulegroup_id_copy = malloc(sizeof(int));
        if (fki_modulegroup_id_copy) *fki_modulegroup_id_copy = *fki_modulegroup_id;
    }
    int *b_module_registered_copy = NULL;
    if (b_module_registered) {
        b_module_registered_copy = malloc(sizeof(int));
        if (b_module_registered_copy) *b_module_registered_copy = *b_module_registered;
    }
    int *b_module_registeredapi_copy = NULL;
    if (b_module_registeredapi) {
        b_module_registeredapi_copy = malloc(sizeof(int));
        if (b_module_registeredapi_copy) *b_module_registeredapi_copy = *b_module_registeredapi;
    }
    module_response_t *result = module_response_create_internal (
        pki_module_id_copy,
        fki_modulegroup_id_copy,
        e_module_internalname,
        s_module_name_x,
        b_module_registered_copy,
        b_module_registeredapi_copy
        );
    if (!result) {
        free(pki_module_id_copy);
        free(fki_modulegroup_id_copy);
        free(b_module_registered_copy);
        free(b_module_registeredapi_copy);
    }
    return result;
}

void module_response_free(module_response_t *module_response) {
    if(NULL == module_response){
        return ;
    }
    if(module_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "module_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (module_response->pki_module_id) {
        free(module_response->pki_module_id);
        module_response->pki_module_id = NULL;
    }
    if (module_response->fki_modulegroup_id) {
        free(module_response->fki_modulegroup_id);
        module_response->fki_modulegroup_id = NULL;
    }
    if (module_response->e_module_internalname) {
        free(module_response->e_module_internalname);
        module_response->e_module_internalname = NULL;
    }
    if (module_response->s_module_name_x) {
        free(module_response->s_module_name_x);
        module_response->s_module_name_x = NULL;
    }
    if (module_response->b_module_registered) {
        free(module_response->b_module_registered);
        module_response->b_module_registered = NULL;
    }
    if (module_response->b_module_registeredapi) {
        free(module_response->b_module_registeredapi);
        module_response->b_module_registeredapi = NULL;
    }
    free(module_response);
}

cJSON *module_response_convertToJSON(module_response_t *module_response) {
    cJSON *item = cJSON_CreateObject();

    // module_response->pki_module_id
    if (!module_response->pki_module_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiModuleID", *module_response->pki_module_id) == NULL) {
    goto fail; //Numeric
    }


    // module_response->fki_modulegroup_id
    if (!module_response->fki_modulegroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiModulegroupID", *module_response->fki_modulegroup_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bModuleRegistered", *module_response->b_module_registered) == NULL) {
    goto fail; //Bool
    }


    // module_response->b_module_registeredapi
    if (!module_response->b_module_registeredapi) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bModuleRegisteredapi", *module_response->b_module_registeredapi) == NULL) {
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

    // define the local variable for module_response->pki_module_id
    int *pki_module_id_local_var = NULL;

    // define the local variable for module_response->fki_modulegroup_id
    int *fki_modulegroup_id_local_var = NULL;

    char *e_module_internalname_local_str = NULL;

    char *s_module_name_x_local_str = NULL;

    // define the local variable for module_response->b_module_registered
    int *b_module_registered_local_var = NULL;

    // define the local variable for module_response->b_module_registeredapi
    int *b_module_registeredapi_local_var = NULL;

    // module_response->pki_module_id
    cJSON *pki_module_id = cJSON_GetObjectItemCaseSensitive(module_responseJSON, "pkiModuleID");
    if (cJSON_IsNull(pki_module_id)) {
        pki_module_id = NULL;
    }
    if (!pki_module_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_module_id))
    {
    goto end; //Numeric
    }
    pki_module_id_local_var = malloc(sizeof(int));
    if(!pki_module_id_local_var)
    {
        goto end;
    }
    *pki_module_id_local_var = pki_module_id->valuedouble;

    // module_response->fki_modulegroup_id
    cJSON *fki_modulegroup_id = cJSON_GetObjectItemCaseSensitive(module_responseJSON, "fkiModulegroupID");
    if (cJSON_IsNull(fki_modulegroup_id)) {
        fki_modulegroup_id = NULL;
    }
    if (!fki_modulegroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_modulegroup_id))
    {
    goto end; //Numeric
    }
    fki_modulegroup_id_local_var = malloc(sizeof(int));
    if(!fki_modulegroup_id_local_var)
    {
        goto end;
    }
    *fki_modulegroup_id_local_var = fki_modulegroup_id->valuedouble;

    // module_response->e_module_internalname
    cJSON *e_module_internalname = cJSON_GetObjectItemCaseSensitive(module_responseJSON, "eModuleInternalname");
    if (cJSON_IsNull(e_module_internalname)) {
        e_module_internalname = NULL;
    }
    if (!e_module_internalname) {
        goto end;
    }

    
    if(!cJSON_IsString(e_module_internalname))
    {
    goto end; //String
    }

    // module_response->s_module_name_x
    cJSON *s_module_name_x = cJSON_GetObjectItemCaseSensitive(module_responseJSON, "sModuleNameX");
    if (cJSON_IsNull(s_module_name_x)) {
        s_module_name_x = NULL;
    }
    if (!s_module_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_module_name_x))
    {
    goto end; //String
    }

    // module_response->b_module_registered
    cJSON *b_module_registered = cJSON_GetObjectItemCaseSensitive(module_responseJSON, "bModuleRegistered");
    if (cJSON_IsNull(b_module_registered)) {
        b_module_registered = NULL;
    }
    if (!b_module_registered) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_module_registered))
    {
    goto end; //Bool
    }
    b_module_registered_local_var = malloc(sizeof(int));
    if(!b_module_registered_local_var)
    {
        goto end;
    }
    *b_module_registered_local_var = b_module_registered->valueint;

    // module_response->b_module_registeredapi
    cJSON *b_module_registeredapi = cJSON_GetObjectItemCaseSensitive(module_responseJSON, "bModuleRegisteredapi");
    if (cJSON_IsNull(b_module_registeredapi)) {
        b_module_registeredapi = NULL;
    }
    if (!b_module_registeredapi) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_module_registeredapi))
    {
    goto end; //Bool
    }
    b_module_registeredapi_local_var = malloc(sizeof(int));
    if(!b_module_registeredapi_local_var)
    {
        goto end;
    }
    *b_module_registeredapi_local_var = b_module_registeredapi->valueint;


    if (e_module_internalname && !cJSON_IsNull(e_module_internalname)) e_module_internalname_local_str = strdup(e_module_internalname->valuestring);
    if (s_module_name_x && !cJSON_IsNull(s_module_name_x)) s_module_name_x_local_str = strdup(s_module_name_x->valuestring);

    module_response_local_var = module_response_create_internal (
        pki_module_id_local_var,
        fki_modulegroup_id_local_var,
        e_module_internalname_local_str,
        s_module_name_x_local_str,
        b_module_registered_local_var,
        b_module_registeredapi_local_var
        );

    if (!module_response_local_var) {
        goto end;
    }

    return module_response_local_var;
end:
    if (pki_module_id_local_var) {
        free(pki_module_id_local_var);
        pki_module_id_local_var = NULL;
    }
    if (fki_modulegroup_id_local_var) {
        free(fki_modulegroup_id_local_var);
        fki_modulegroup_id_local_var = NULL;
    }
    if (e_module_internalname_local_str) {
        free(e_module_internalname_local_str);
        e_module_internalname_local_str = NULL;
    }
    if (s_module_name_x_local_str) {
        free(s_module_name_x_local_str);
        s_module_name_x_local_str = NULL;
    }
    if (b_module_registered_local_var) {
        free(b_module_registered_local_var);
        b_module_registered_local_var = NULL;
    }
    if (b_module_registeredapi_local_var) {
        free(b_module_registeredapi_local_var);
        b_module_registeredapi_local_var = NULL;
    }
    return NULL;

}
