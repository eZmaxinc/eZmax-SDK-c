#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "systemconfigurationtype_autocomplete_element_response.h"



static systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response_create_internal(
    int pki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description_x,
    int b_systemconfigurationtype_isactive
    ) {
    systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response_local_var = malloc(sizeof(systemconfigurationtype_autocomplete_element_response_t));
    if (!systemconfigurationtype_autocomplete_element_response_local_var) {
        return NULL;
    }
    systemconfigurationtype_autocomplete_element_response_local_var->pki_systemconfigurationtype_id = pki_systemconfigurationtype_id;
    systemconfigurationtype_autocomplete_element_response_local_var->s_systemconfigurationtype_description_x = s_systemconfigurationtype_description_x;
    systemconfigurationtype_autocomplete_element_response_local_var->b_systemconfigurationtype_isactive = b_systemconfigurationtype_isactive;

    systemconfigurationtype_autocomplete_element_response_local_var->_library_owned = 1;
    return systemconfigurationtype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response_create(
    int pki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description_x,
    int b_systemconfigurationtype_isactive
    ) {
    return systemconfigurationtype_autocomplete_element_response_create_internal (
        pki_systemconfigurationtype_id,
        s_systemconfigurationtype_description_x,
        b_systemconfigurationtype_isactive
        );
}

void systemconfigurationtype_autocomplete_element_response_free(systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response) {
    if(NULL == systemconfigurationtype_autocomplete_element_response){
        return ;
    }
    if(systemconfigurationtype_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "systemconfigurationtype_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (systemconfigurationtype_autocomplete_element_response->s_systemconfigurationtype_description_x) {
        free(systemconfigurationtype_autocomplete_element_response->s_systemconfigurationtype_description_x);
        systemconfigurationtype_autocomplete_element_response->s_systemconfigurationtype_description_x = NULL;
    }
    free(systemconfigurationtype_autocomplete_element_response);
}

cJSON *systemconfigurationtype_autocomplete_element_response_convertToJSON(systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // systemconfigurationtype_autocomplete_element_response->pki_systemconfigurationtype_id
    if (!systemconfigurationtype_autocomplete_element_response->pki_systemconfigurationtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSystemconfigurationtypeID", systemconfigurationtype_autocomplete_element_response->pki_systemconfigurationtype_id) == NULL) {
    goto fail; //Numeric
    }


    // systemconfigurationtype_autocomplete_element_response->s_systemconfigurationtype_description_x
    if (!systemconfigurationtype_autocomplete_element_response->s_systemconfigurationtype_description_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sSystemconfigurationtypeDescriptionX", systemconfigurationtype_autocomplete_element_response->s_systemconfigurationtype_description_x) == NULL) {
    goto fail; //String
    }


    // systemconfigurationtype_autocomplete_element_response->b_systemconfigurationtype_isactive
    if (!systemconfigurationtype_autocomplete_element_response->b_systemconfigurationtype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationtypeIsactive", systemconfigurationtype_autocomplete_element_response->b_systemconfigurationtype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response_parseFromJSON(cJSON *systemconfigurationtype_autocomplete_element_responseJSON){

    systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response_local_var = NULL;

    // systemconfigurationtype_autocomplete_element_response->pki_systemconfigurationtype_id
    cJSON *pki_systemconfigurationtype_id = cJSON_GetObjectItemCaseSensitive(systemconfigurationtype_autocomplete_element_responseJSON, "pkiSystemconfigurationtypeID");
    if (cJSON_IsNull(pki_systemconfigurationtype_id)) {
        pki_systemconfigurationtype_id = NULL;
    }
    if (!pki_systemconfigurationtype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_systemconfigurationtype_id))
    {
    goto end; //Numeric
    }

    // systemconfigurationtype_autocomplete_element_response->s_systemconfigurationtype_description_x
    cJSON *s_systemconfigurationtype_description_x = cJSON_GetObjectItemCaseSensitive(systemconfigurationtype_autocomplete_element_responseJSON, "sSystemconfigurationtypeDescriptionX");
    if (cJSON_IsNull(s_systemconfigurationtype_description_x)) {
        s_systemconfigurationtype_description_x = NULL;
    }
    if (!s_systemconfigurationtype_description_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_systemconfigurationtype_description_x))
    {
    goto end; //String
    }

    // systemconfigurationtype_autocomplete_element_response->b_systemconfigurationtype_isactive
    cJSON *b_systemconfigurationtype_isactive = cJSON_GetObjectItemCaseSensitive(systemconfigurationtype_autocomplete_element_responseJSON, "bSystemconfigurationtypeIsactive");
    if (cJSON_IsNull(b_systemconfigurationtype_isactive)) {
        b_systemconfigurationtype_isactive = NULL;
    }
    if (!b_systemconfigurationtype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_systemconfigurationtype_isactive))
    {
    goto end; //Bool
    }


    systemconfigurationtype_autocomplete_element_response_local_var = systemconfigurationtype_autocomplete_element_response_create_internal (
        pki_systemconfigurationtype_id->valuedouble,
        strdup(s_systemconfigurationtype_description_x->valuestring),
        b_systemconfigurationtype_isactive->valueint
        );

    return systemconfigurationtype_autocomplete_element_response_local_var;
end:
    return NULL;

}
