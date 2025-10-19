#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "agenttype_autocomplete_element_response.h"



static agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response_create_internal(
    int pki_agenttype_id,
    char *s_agenttype_name_x,
    int b_agenttype_isactive
    ) {
    agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response_local_var = malloc(sizeof(agenttype_autocomplete_element_response_t));
    if (!agenttype_autocomplete_element_response_local_var) {
        return NULL;
    }
    agenttype_autocomplete_element_response_local_var->pki_agenttype_id = pki_agenttype_id;
    agenttype_autocomplete_element_response_local_var->s_agenttype_name_x = s_agenttype_name_x;
    agenttype_autocomplete_element_response_local_var->b_agenttype_isactive = b_agenttype_isactive;

    agenttype_autocomplete_element_response_local_var->_library_owned = 1;
    return agenttype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response_create(
    int pki_agenttype_id,
    char *s_agenttype_name_x,
    int b_agenttype_isactive
    ) {
    return agenttype_autocomplete_element_response_create_internal (
        pki_agenttype_id,
        s_agenttype_name_x,
        b_agenttype_isactive
        );
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
    if (agenttype_autocomplete_element_response->s_agenttype_name_x) {
        free(agenttype_autocomplete_element_response->s_agenttype_name_x);
        agenttype_autocomplete_element_response->s_agenttype_name_x = NULL;
    }
    free(agenttype_autocomplete_element_response);
}

cJSON *agenttype_autocomplete_element_response_convertToJSON(agenttype_autocomplete_element_response_t *agenttype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // agenttype_autocomplete_element_response->pki_agenttype_id
    if (!agenttype_autocomplete_element_response->pki_agenttype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiAgenttypeID", agenttype_autocomplete_element_response->pki_agenttype_id) == NULL) {
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
    if(cJSON_AddBoolToObject(item, "bAgenttypeIsactive", agenttype_autocomplete_element_response->b_agenttype_isactive) == NULL) {
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


    agenttype_autocomplete_element_response_local_var = agenttype_autocomplete_element_response_create_internal (
        pki_agenttype_id->valuedouble,
        strdup(s_agenttype_name_x->valuestring),
        b_agenttype_isactive->valueint
        );

    return agenttype_autocomplete_element_response_local_var;
end:
    return NULL;

}
