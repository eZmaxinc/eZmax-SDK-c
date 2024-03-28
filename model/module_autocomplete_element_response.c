#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "module_autocomplete_element_response.h"



module_autocomplete_element_response_t *module_autocomplete_element_response_create(
    int pki_module_id,
    char *s_module_name_x,
    int b_module_isactive
    ) {
    module_autocomplete_element_response_t *module_autocomplete_element_response_local_var = malloc(sizeof(module_autocomplete_element_response_t));
    if (!module_autocomplete_element_response_local_var) {
        return NULL;
    }
    module_autocomplete_element_response_local_var->pki_module_id = pki_module_id;
    module_autocomplete_element_response_local_var->s_module_name_x = s_module_name_x;
    module_autocomplete_element_response_local_var->b_module_isactive = b_module_isactive;

    return module_autocomplete_element_response_local_var;
}


void module_autocomplete_element_response_free(module_autocomplete_element_response_t *module_autocomplete_element_response) {
    if(NULL == module_autocomplete_element_response){
        return ;
    }
    listEntry_t *listEntry;
    if (module_autocomplete_element_response->s_module_name_x) {
        free(module_autocomplete_element_response->s_module_name_x);
        module_autocomplete_element_response->s_module_name_x = NULL;
    }
    free(module_autocomplete_element_response);
}

cJSON *module_autocomplete_element_response_convertToJSON(module_autocomplete_element_response_t *module_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // module_autocomplete_element_response->pki_module_id
    if (!module_autocomplete_element_response->pki_module_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiModuleID", module_autocomplete_element_response->pki_module_id) == NULL) {
    goto fail; //Numeric
    }


    // module_autocomplete_element_response->s_module_name_x
    if (!module_autocomplete_element_response->s_module_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sModuleNameX", module_autocomplete_element_response->s_module_name_x) == NULL) {
    goto fail; //String
    }


    // module_autocomplete_element_response->b_module_isactive
    if (!module_autocomplete_element_response->b_module_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bModuleIsactive", module_autocomplete_element_response->b_module_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

module_autocomplete_element_response_t *module_autocomplete_element_response_parseFromJSON(cJSON *module_autocomplete_element_responseJSON){

    module_autocomplete_element_response_t *module_autocomplete_element_response_local_var = NULL;

    // module_autocomplete_element_response->pki_module_id
    cJSON *pki_module_id = cJSON_GetObjectItemCaseSensitive(module_autocomplete_element_responseJSON, "pkiModuleID");
    if (!pki_module_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_module_id))
    {
    goto end; //Numeric
    }

    // module_autocomplete_element_response->s_module_name_x
    cJSON *s_module_name_x = cJSON_GetObjectItemCaseSensitive(module_autocomplete_element_responseJSON, "sModuleNameX");
    if (!s_module_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_module_name_x))
    {
    goto end; //String
    }

    // module_autocomplete_element_response->b_module_isactive
    cJSON *b_module_isactive = cJSON_GetObjectItemCaseSensitive(module_autocomplete_element_responseJSON, "bModuleIsactive");
    if (!b_module_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_module_isactive))
    {
    goto end; //Bool
    }


    module_autocomplete_element_response_local_var = module_autocomplete_element_response_create (
        pki_module_id->valuedouble,
        strdup(s_module_name_x->valuestring),
        b_module_isactive->valueint
        );

    return module_autocomplete_element_response_local_var;
end:
    return NULL;

}
