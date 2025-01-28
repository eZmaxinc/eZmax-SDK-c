#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "modulesection_response.h"



static modulesection_response_t *modulesection_response_create_internal(
    int pki_modulesection_id,
    int fki_module_id,
    char *s_modulesection_internalname,
    char *s_modulesection_name_x
    ) {
    modulesection_response_t *modulesection_response_local_var = malloc(sizeof(modulesection_response_t));
    if (!modulesection_response_local_var) {
        return NULL;
    }
    modulesection_response_local_var->pki_modulesection_id = pki_modulesection_id;
    modulesection_response_local_var->fki_module_id = fki_module_id;
    modulesection_response_local_var->s_modulesection_internalname = s_modulesection_internalname;
    modulesection_response_local_var->s_modulesection_name_x = s_modulesection_name_x;

    modulesection_response_local_var->_library_owned = 1;
    return modulesection_response_local_var;
}

__attribute__((deprecated)) modulesection_response_t *modulesection_response_create(
    int pki_modulesection_id,
    int fki_module_id,
    char *s_modulesection_internalname,
    char *s_modulesection_name_x
    ) {
    return modulesection_response_create_internal (
        pki_modulesection_id,
        fki_module_id,
        s_modulesection_internalname,
        s_modulesection_name_x
        );
}

void modulesection_response_free(modulesection_response_t *modulesection_response) {
    if(NULL == modulesection_response){
        return ;
    }
    if(modulesection_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "modulesection_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (modulesection_response->s_modulesection_internalname) {
        free(modulesection_response->s_modulesection_internalname);
        modulesection_response->s_modulesection_internalname = NULL;
    }
    if (modulesection_response->s_modulesection_name_x) {
        free(modulesection_response->s_modulesection_name_x);
        modulesection_response->s_modulesection_name_x = NULL;
    }
    free(modulesection_response);
}

cJSON *modulesection_response_convertToJSON(modulesection_response_t *modulesection_response) {
    cJSON *item = cJSON_CreateObject();

    // modulesection_response->pki_modulesection_id
    if (!modulesection_response->pki_modulesection_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiModulesectionID", modulesection_response->pki_modulesection_id) == NULL) {
    goto fail; //Numeric
    }


    // modulesection_response->fki_module_id
    if (!modulesection_response->fki_module_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "fkiModuleID", modulesection_response->fki_module_id) == NULL) {
    goto fail; //Numeric
    }


    // modulesection_response->s_modulesection_internalname
    if (!modulesection_response->s_modulesection_internalname) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sModulesectionInternalname", modulesection_response->s_modulesection_internalname) == NULL) {
    goto fail; //String
    }


    // modulesection_response->s_modulesection_name_x
    if (!modulesection_response->s_modulesection_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sModulesectionNameX", modulesection_response->s_modulesection_name_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

modulesection_response_t *modulesection_response_parseFromJSON(cJSON *modulesection_responseJSON){

    modulesection_response_t *modulesection_response_local_var = NULL;

    // modulesection_response->pki_modulesection_id
    cJSON *pki_modulesection_id = cJSON_GetObjectItemCaseSensitive(modulesection_responseJSON, "pkiModulesectionID");
    if (cJSON_IsNull(pki_modulesection_id)) {
        pki_modulesection_id = NULL;
    }
    if (!pki_modulesection_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_modulesection_id))
    {
    goto end; //Numeric
    }

    // modulesection_response->fki_module_id
    cJSON *fki_module_id = cJSON_GetObjectItemCaseSensitive(modulesection_responseJSON, "fkiModuleID");
    if (cJSON_IsNull(fki_module_id)) {
        fki_module_id = NULL;
    }
    if (!fki_module_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(fki_module_id))
    {
    goto end; //Numeric
    }

    // modulesection_response->s_modulesection_internalname
    cJSON *s_modulesection_internalname = cJSON_GetObjectItemCaseSensitive(modulesection_responseJSON, "sModulesectionInternalname");
    if (cJSON_IsNull(s_modulesection_internalname)) {
        s_modulesection_internalname = NULL;
    }
    if (!s_modulesection_internalname) {
        goto end;
    }

    
    if(!cJSON_IsString(s_modulesection_internalname))
    {
    goto end; //String
    }

    // modulesection_response->s_modulesection_name_x
    cJSON *s_modulesection_name_x = cJSON_GetObjectItemCaseSensitive(modulesection_responseJSON, "sModulesectionNameX");
    if (cJSON_IsNull(s_modulesection_name_x)) {
        s_modulesection_name_x = NULL;
    }
    if (!s_modulesection_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_modulesection_name_x))
    {
    goto end; //String
    }


    modulesection_response_local_var = modulesection_response_create_internal (
        pki_modulesection_id->valuedouble,
        fki_module_id->valuedouble,
        strdup(s_modulesection_internalname->valuestring),
        strdup(s_modulesection_name_x->valuestring)
        );

    return modulesection_response_local_var;
end:
    return NULL;

}
