#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agenttype_autocomplete_element_response.h"



static agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response_create_internal(
    int *pki_agenttype_id,
    char *s_agenttype_name_x,
    int *b_agenttype_isactive
    ) {
    agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response_local_var = malloc(sizeof(agenttype_autocomplete_element_response_t));
    if (!agenttype_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(agenttype_autocomplete_element_response_local_var, 0, sizeof(agenttype_autocomplete_element_response_t));
    agenttype_autocomplete_element_response_local_var->_library_owned = 1;
    agenttype_autocomplete_element_response_local_var->pki_agenttype_id = pki_agenttype_id;
    agenttype_autocomplete_element_response_local_var->s_agenttype_name_x = s_agenttype_name_x;
    agenttype_autocomplete_element_response_local_var->b_agenttype_isactive = b_agenttype_isactive;
    return agenttype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response_create(
    int *pki_agenttype_id,
    char *s_agenttype_name_x,
    int *b_agenttype_isactive
    ) {
    int *pki_agenttype_id_copy = NULL;
    if (pki_agenttype_id) {
        pki_agenttype_id_copy = malloc(sizeof(int));
        if (pki_agenttype_id_copy) *pki_agenttype_id_copy = *pki_agenttype_id;
    }
    int *b_agenttype_isactive_copy = NULL;
    if (b_agenttype_isactive) {
        b_agenttype_isactive_copy = malloc(sizeof(int));
        if (b_agenttype_isactive_copy) *b_agenttype_isactive_copy = *b_agenttype_isactive;
    }
    agenttype_autocomplete_element_response_t *result = agenttype_autocomplete_element_response_create_internal (
        pki_agenttype_id_copy,
        s_agenttype_name_x,
        b_agenttype_isactive_copy
        );
    if (!result) {
        free(pki_agenttype_id_copy);
        free(b_agenttype_isactive_copy);
    }
    return result;
}

void agenttype_autocomplete_element_response_free(agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response) {
    if(NULL == agenttype_autocomplete_element_response){
        return ;
    }
    if(agenttype_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "agenttype_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (agenttype_autocomplete_element_response->pki_agenttype_id) {
        free(agenttype_autocomplete_element_response->pki_agenttype_id);
        agenttype_autocomplete_element_response->pki_agenttype_id = NULL;
    }
    if (agenttype_autocomplete_element_response->s_agenttype_name_x) {
        free(agenttype_autocomplete_element_response->s_agenttype_name_x);
        agenttype_autocomplete_element_response->s_agenttype_name_x = NULL;
    }
    if (agenttype_autocomplete_element_response->b_agenttype_isactive) {
        free(agenttype_autocomplete_element_response->b_agenttype_isactive);
        agenttype_autocomplete_element_response->b_agenttype_isactive = NULL;
    }
    free(agenttype_autocomplete_element_response);
}

cJSON *agenttype_autocomplete_element_response_convertToJSON(agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // agenttype_autocomplete_element_response->pki_agenttype_id
    if (!agenttype_autocomplete_element_response->pki_agenttype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAgenttypeID", *agenttype_autocomplete_element_response->pki_agenttype_id) == NULL) {
    goto fail; //Numeric
    }


    // agenttype_autocomplete_element_response->s_agenttype_name_x
    if (!agenttype_autocomplete_element_response->s_agenttype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sAgenttypeNameX", agenttype_autocomplete_element_response->s_agenttype_name_x) == NULL) {
    goto fail; //String
    }


    // agenttype_autocomplete_element_response->b_agenttype_isactive
    if (!agenttype_autocomplete_element_response->b_agenttype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bAgenttypeIsactive", *agenttype_autocomplete_element_response->b_agenttype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response_parseFromJSON(cJSON *agenttype_autocomplete_element_responseJSON){

    agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response_local_var = NULL;

    // define the local variable for agenttype_autocomplete_element_response->pki_agenttype_id
    int *pki_agenttype_id_local_var = NULL;

    char *s_agenttype_name_x_local_str = NULL;

    // define the local variable for agenttype_autocomplete_element_response->b_agenttype_isactive
    int *b_agenttype_isactive_local_var = NULL;

    // agenttype_autocomplete_element_response->pki_agenttype_id
    cJSON *pki_agenttype_id = cJSON_GetObjectItemCaseSensitive(agenttype_autocomplete_element_responseJSON, "pkiAgenttypeID");
    if (cJSON_IsNull(pki_agenttype_id)) {
        pki_agenttype_id = NULL;
    }
    if (!pki_agenttype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_agenttype_id))
    {
    goto end; //Numeric
    }
    pki_agenttype_id_local_var = malloc(sizeof(int));
    if(!pki_agenttype_id_local_var)
    {
        goto end;
    }
    *pki_agenttype_id_local_var = pki_agenttype_id->valuedouble;

    // agenttype_autocomplete_element_response->s_agenttype_name_x
    cJSON *s_agenttype_name_x = cJSON_GetObjectItemCaseSensitive(agenttype_autocomplete_element_responseJSON, "sAgenttypeNameX");
    if (cJSON_IsNull(s_agenttype_name_x)) {
        s_agenttype_name_x = NULL;
    }
    if (!s_agenttype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_agenttype_name_x))
    {
    goto end; //String
    }

    // agenttype_autocomplete_element_response->b_agenttype_isactive
    cJSON *b_agenttype_isactive = cJSON_GetObjectItemCaseSensitive(agenttype_autocomplete_element_responseJSON, "bAgenttypeIsactive");
    if (cJSON_IsNull(b_agenttype_isactive)) {
        b_agenttype_isactive = NULL;
    }
    if (!b_agenttype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_agenttype_isactive))
    {
    goto end; //Bool
    }
    b_agenttype_isactive_local_var = malloc(sizeof(int));
    if(!b_agenttype_isactive_local_var)
    {
        goto end;
    }
    *b_agenttype_isactive_local_var = b_agenttype_isactive->valueint;


    if (s_agenttype_name_x && !cJSON_IsNull(s_agenttype_name_x)) s_agenttype_name_x_local_str = strdup(s_agenttype_name_x->valuestring);

    agenttype_autocomplete_element_response_local_var = agenttype_autocomplete_element_response_create_internal (
        pki_agenttype_id_local_var,
        s_agenttype_name_x_local_str,
        b_agenttype_isactive_local_var
        );

    if (!agenttype_autocomplete_element_response_local_var) {
        goto end;
    }

    return agenttype_autocomplete_element_response_local_var;
end:
    if (pki_agenttype_id_local_var) {
        free(pki_agenttype_id_local_var);
        pki_agenttype_id_local_var = NULL;
    }
    if (s_agenttype_name_x_local_str) {
        free(s_agenttype_name_x_local_str);
        s_agenttype_name_x_local_str = NULL;
    }
    if (b_agenttype_isactive_local_var) {
        free(b_agenttype_isactive_local_var);
        b_agenttype_isactive_local_var = NULL;
    }
    return NULL;

}
