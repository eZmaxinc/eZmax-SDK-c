#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "systemconfigurationtype_autocomplete_element_response.h"



static systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response_create_internal(
    int *pki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description_x,
    int *b_systemconfigurationtype_isactive
    ) {
    systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response_local_var = malloc(sizeof(systemconfigurationtype_autocomplete_element_response_t));
    if (!systemconfigurationtype_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(systemconfigurationtype_autocomplete_element_response_local_var, 0, sizeof(systemconfigurationtype_autocomplete_element_response_t));
    systemconfigurationtype_autocomplete_element_response_local_var->_library_owned = 1;
    systemconfigurationtype_autocomplete_element_response_local_var->pki_systemconfigurationtype_id = pki_systemconfigurationtype_id;
    systemconfigurationtype_autocomplete_element_response_local_var->s_systemconfigurationtype_description_x = s_systemconfigurationtype_description_x;
    systemconfigurationtype_autocomplete_element_response_local_var->b_systemconfigurationtype_isactive = b_systemconfigurationtype_isactive;
    return systemconfigurationtype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response_create(
    int *pki_systemconfigurationtype_id,
    char *s_systemconfigurationtype_description_x,
    int *b_systemconfigurationtype_isactive
    ) {
    int *pki_systemconfigurationtype_id_copy = NULL;
    if (pki_systemconfigurationtype_id) {
        pki_systemconfigurationtype_id_copy = malloc(sizeof(int));
        if (pki_systemconfigurationtype_id_copy) *pki_systemconfigurationtype_id_copy = *pki_systemconfigurationtype_id;
    }
    int *b_systemconfigurationtype_isactive_copy = NULL;
    if (b_systemconfigurationtype_isactive) {
        b_systemconfigurationtype_isactive_copy = malloc(sizeof(int));
        if (b_systemconfigurationtype_isactive_copy) *b_systemconfigurationtype_isactive_copy = *b_systemconfigurationtype_isactive;
    }
    systemconfigurationtype_autocomplete_element_response_t *result = systemconfigurationtype_autocomplete_element_response_create_internal (
        pki_systemconfigurationtype_id_copy,
        s_systemconfigurationtype_description_x,
        b_systemconfigurationtype_isactive_copy
        );
    if (!result) {
        free(pki_systemconfigurationtype_id_copy);
        free(b_systemconfigurationtype_isactive_copy);
    }
    return result;
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
    if (systemconfigurationtype_autocomplete_element_response->pki_systemconfigurationtype_id) {
        free(systemconfigurationtype_autocomplete_element_response->pki_systemconfigurationtype_id);
        systemconfigurationtype_autocomplete_element_response->pki_systemconfigurationtype_id = NULL;
    }
    if (systemconfigurationtype_autocomplete_element_response->s_systemconfigurationtype_description_x) {
        free(systemconfigurationtype_autocomplete_element_response->s_systemconfigurationtype_description_x);
        systemconfigurationtype_autocomplete_element_response->s_systemconfigurationtype_description_x = NULL;
    }
    if (systemconfigurationtype_autocomplete_element_response->b_systemconfigurationtype_isactive) {
        free(systemconfigurationtype_autocomplete_element_response->b_systemconfigurationtype_isactive);
        systemconfigurationtype_autocomplete_element_response->b_systemconfigurationtype_isactive = NULL;
    }
    free(systemconfigurationtype_autocomplete_element_response);
}

cJSON *systemconfigurationtype_autocomplete_element_response_convertToJSON(systemconfigurationtype_autocomplete_element_response_t *systemconfigurationtype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // systemconfigurationtype_autocomplete_element_response->pki_systemconfigurationtype_id
    if (!systemconfigurationtype_autocomplete_element_response->pki_systemconfigurationtype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiSystemconfigurationtypeID", *systemconfigurationtype_autocomplete_element_response->pki_systemconfigurationtype_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bSystemconfigurationtypeIsactive", *systemconfigurationtype_autocomplete_element_response->b_systemconfigurationtype_isactive) == NULL) {
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

    // define the local variable for systemconfigurationtype_autocomplete_element_response->pki_systemconfigurationtype_id
    int *pki_systemconfigurationtype_id_local_var = NULL;

    char *s_systemconfigurationtype_description_x_local_str = NULL;

    // define the local variable for systemconfigurationtype_autocomplete_element_response->b_systemconfigurationtype_isactive
    int *b_systemconfigurationtype_isactive_local_var = NULL;

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
    pki_systemconfigurationtype_id_local_var = malloc(sizeof(int));
    if(!pki_systemconfigurationtype_id_local_var)
    {
        goto end;
    }
    *pki_systemconfigurationtype_id_local_var = pki_systemconfigurationtype_id->valuedouble;

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
    b_systemconfigurationtype_isactive_local_var = malloc(sizeof(int));
    if(!b_systemconfigurationtype_isactive_local_var)
    {
        goto end;
    }
    *b_systemconfigurationtype_isactive_local_var = b_systemconfigurationtype_isactive->valueint;


    if (s_systemconfigurationtype_description_x && !cJSON_IsNull(s_systemconfigurationtype_description_x)) s_systemconfigurationtype_description_x_local_str = strdup(s_systemconfigurationtype_description_x->valuestring);

    systemconfigurationtype_autocomplete_element_response_local_var = systemconfigurationtype_autocomplete_element_response_create_internal (
        pki_systemconfigurationtype_id_local_var,
        s_systemconfigurationtype_description_x_local_str,
        b_systemconfigurationtype_isactive_local_var
        );

    if (!systemconfigurationtype_autocomplete_element_response_local_var) {
        goto end;
    }

    return systemconfigurationtype_autocomplete_element_response_local_var;
end:
    if (pki_systemconfigurationtype_id_local_var) {
        free(pki_systemconfigurationtype_id_local_var);
        pki_systemconfigurationtype_id_local_var = NULL;
    }
    if (s_systemconfigurationtype_description_x_local_str) {
        free(s_systemconfigurationtype_description_x_local_str);
        s_systemconfigurationtype_description_x_local_str = NULL;
    }
    if (b_systemconfigurationtype_isactive_local_var) {
        free(b_systemconfigurationtype_isactive_local_var);
        b_systemconfigurationtype_isactive_local_var = NULL;
    }
    return NULL;

}
