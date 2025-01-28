#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "modulegroup_response.h"



static modulegroup_response_t *modulegroup_response_create_internal(
    int pki_modulegroup_id,
    char *s_modulegroup_name_x
    ) {
    modulegroup_response_t *modulegroup_response_local_var = malloc(sizeof(modulegroup_response_t));
    if (!modulegroup_response_local_var) {
        return NULL;
    }
    modulegroup_response_local_var->pki_modulegroup_id = pki_modulegroup_id;
    modulegroup_response_local_var->s_modulegroup_name_x = s_modulegroup_name_x;

    modulegroup_response_local_var->_library_owned = 1;
    return modulegroup_response_local_var;
}

__attribute__((deprecated)) modulegroup_response_t *modulegroup_response_create(
    int pki_modulegroup_id,
    char *s_modulegroup_name_x
    ) {
    return modulegroup_response_create_internal (
        pki_modulegroup_id,
        s_modulegroup_name_x
        );
}

void modulegroup_response_free(modulegroup_response_t *modulegroup_response) {
    if(NULL == modulegroup_response){
        return ;
    }
    if(modulegroup_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "modulegroup_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (modulegroup_response->s_modulegroup_name_x) {
        free(modulegroup_response->s_modulegroup_name_x);
        modulegroup_response->s_modulegroup_name_x = NULL;
    }
    free(modulegroup_response);
}

cJSON *modulegroup_response_convertToJSON(modulegroup_response_t *modulegroup_response) {
    cJSON *item = cJSON_CreateObject();

    // modulegroup_response->pki_modulegroup_id
    if (!modulegroup_response->pki_modulegroup_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiModulegroupID", modulegroup_response->pki_modulegroup_id) == NULL) {
    goto fail; //Numeric
    }


    // modulegroup_response->s_modulegroup_name_x
    if (!modulegroup_response->s_modulegroup_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sModulegroupNameX", modulegroup_response->s_modulegroup_name_x) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

modulegroup_response_t *modulegroup_response_parseFromJSON(cJSON *modulegroup_responseJSON){

    modulegroup_response_t *modulegroup_response_local_var = NULL;

    // modulegroup_response->pki_modulegroup_id
    cJSON *pki_modulegroup_id = cJSON_GetObjectItemCaseSensitive(modulegroup_responseJSON, "pkiModulegroupID");
    if (cJSON_IsNull(pki_modulegroup_id)) {
        pki_modulegroup_id = NULL;
    }
    if (!pki_modulegroup_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_modulegroup_id))
    {
    goto end; //Numeric
    }

    // modulegroup_response->s_modulegroup_name_x
    cJSON *s_modulegroup_name_x = cJSON_GetObjectItemCaseSensitive(modulegroup_responseJSON, "sModulegroupNameX");
    if (cJSON_IsNull(s_modulegroup_name_x)) {
        s_modulegroup_name_x = NULL;
    }
    if (!s_modulegroup_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_modulegroup_name_x))
    {
    goto end; //String
    }


    modulegroup_response_local_var = modulegroup_response_create_internal (
        pki_modulegroup_id->valuedouble,
        strdup(s_modulegroup_name_x->valuestring)
        );

    return modulegroup_response_local_var;
end:
    return NULL;

}
