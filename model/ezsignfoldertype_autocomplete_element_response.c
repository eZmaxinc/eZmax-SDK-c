#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsignfoldertype_autocomplete_element_response.h"



static ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response_create_internal(
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    int *pki_ezsignfoldertype_id,
    int *b_ezsignfoldertype_isactive
    ) {
    ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response_local_var = malloc(sizeof(ezsignfoldertype_autocomplete_element_response_t));
    if (!ezsignfoldertype_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(ezsignfoldertype_autocomplete_element_response_local_var, 0, sizeof(ezsignfoldertype_autocomplete_element_response_t));
    ezsignfoldertype_autocomplete_element_response_local_var->_library_owned = 1;
    ezsignfoldertype_autocomplete_element_response_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsignfoldertype_autocomplete_element_response_local_var->s_ezsignfoldertype_name_x = s_ezsignfoldertype_name_x;
    ezsignfoldertype_autocomplete_element_response_local_var->pki_ezsignfoldertype_id = pki_ezsignfoldertype_id;
    ezsignfoldertype_autocomplete_element_response_local_var->b_ezsignfoldertype_isactive = b_ezsignfoldertype_isactive;
    return ezsignfoldertype_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response_create(
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsignfoldertype_name_x,
    int *pki_ezsignfoldertype_id,
    int *b_ezsignfoldertype_isactive
    ) {
    int *pki_ezsignfoldertype_id_copy = NULL;
    if (pki_ezsignfoldertype_id) {
        pki_ezsignfoldertype_id_copy = malloc(sizeof(int));
        if (pki_ezsignfoldertype_id_copy) *pki_ezsignfoldertype_id_copy = *pki_ezsignfoldertype_id;
    }
    int *b_ezsignfoldertype_isactive_copy = NULL;
    if (b_ezsignfoldertype_isactive) {
        b_ezsignfoldertype_isactive_copy = malloc(sizeof(int));
        if (b_ezsignfoldertype_isactive_copy) *b_ezsignfoldertype_isactive_copy = *b_ezsignfoldertype_isactive;
    }
    ezsignfoldertype_autocomplete_element_response_t *result = ezsignfoldertype_autocomplete_element_response_create_internal (
        e_ezsignfoldertype_privacylevel,
        s_ezsignfoldertype_name_x,
        pki_ezsignfoldertype_id_copy,
        b_ezsignfoldertype_isactive_copy
        );
    if (!result) {
        free(pki_ezsignfoldertype_id_copy);
        free(b_ezsignfoldertype_isactive_copy);
    }
    return result;
}

void ezsignfoldertype_autocomplete_element_response_free(ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response) {
    if(NULL == ezsignfoldertype_autocomplete_element_response){
        return ;
    }
    if(ezsignfoldertype_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsignfoldertype_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsignfoldertype_autocomplete_element_response->s_ezsignfoldertype_name_x) {
        free(ezsignfoldertype_autocomplete_element_response->s_ezsignfoldertype_name_x);
        ezsignfoldertype_autocomplete_element_response->s_ezsignfoldertype_name_x = NULL;
    }
    if (ezsignfoldertype_autocomplete_element_response->pki_ezsignfoldertype_id) {
        free(ezsignfoldertype_autocomplete_element_response->pki_ezsignfoldertype_id);
        ezsignfoldertype_autocomplete_element_response->pki_ezsignfoldertype_id = NULL;
    }
    if (ezsignfoldertype_autocomplete_element_response->b_ezsignfoldertype_isactive) {
        free(ezsignfoldertype_autocomplete_element_response->b_ezsignfoldertype_isactive);
        ezsignfoldertype_autocomplete_element_response->b_ezsignfoldertype_isactive = NULL;
    }
    free(ezsignfoldertype_autocomplete_element_response);
}

cJSON *ezsignfoldertype_autocomplete_element_response_convertToJSON(ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsignfoldertype_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__NULL == ezsignfoldertype_autocomplete_element_response->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsignfoldertype_autocomplete_element_response->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsignfoldertype_autocomplete_element_response->s_ezsignfoldertype_name_x
    if (!ezsignfoldertype_autocomplete_element_response->s_ezsignfoldertype_name_x) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsignfoldertypeNameX", ezsignfoldertype_autocomplete_element_response->s_ezsignfoldertype_name_x) == NULL) {
    goto fail; //String
    }


    // ezsignfoldertype_autocomplete_element_response->pki_ezsignfoldertype_id
    if (!ezsignfoldertype_autocomplete_element_response->pki_ezsignfoldertype_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsignfoldertypeID", *ezsignfoldertype_autocomplete_element_response->pki_ezsignfoldertype_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsignfoldertype_autocomplete_element_response->b_ezsignfoldertype_isactive
    if (!ezsignfoldertype_autocomplete_element_response->b_ezsignfoldertype_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsignfoldertypeIsactive", *ezsignfoldertype_autocomplete_element_response->b_ezsignfoldertype_isactive) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response_parseFromJSON(cJSON *ezsignfoldertype_autocomplete_element_responseJSON){

    ezsignfoldertype_autocomplete_element_response_t *ezsignfoldertype_autocomplete_element_response_local_var = NULL;

    // define the local variable for ezsignfoldertype_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel_local_nonprim = 0;

    char *s_ezsignfoldertype_name_x_local_str = NULL;

    // define the local variable for ezsignfoldertype_autocomplete_element_response->pki_ezsignfoldertype_id
    int *pki_ezsignfoldertype_id_local_var = NULL;

    // define the local variable for ezsignfoldertype_autocomplete_element_response->b_ezsignfoldertype_isactive
    int *b_ezsignfoldertype_isactive_local_var = NULL;

    // ezsignfoldertype_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_autocomplete_element_responseJSON, "eEzsignfoldertypePrivacylevel");
    if (cJSON_IsNull(e_ezsignfoldertype_privacylevel)) {
        e_ezsignfoldertype_privacylevel = NULL;
    }
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsignfoldertype_autocomplete_element_response->s_ezsignfoldertype_name_x
    cJSON *s_ezsignfoldertype_name_x = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_autocomplete_element_responseJSON, "sEzsignfoldertypeNameX");
    if (cJSON_IsNull(s_ezsignfoldertype_name_x)) {
        s_ezsignfoldertype_name_x = NULL;
    }
    if (!s_ezsignfoldertype_name_x) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsignfoldertype_name_x))
    {
    goto end; //String
    }

    // ezsignfoldertype_autocomplete_element_response->pki_ezsignfoldertype_id
    cJSON *pki_ezsignfoldertype_id = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_autocomplete_element_responseJSON, "pkiEzsignfoldertypeID");
    if (cJSON_IsNull(pki_ezsignfoldertype_id)) {
        pki_ezsignfoldertype_id = NULL;
    }
    if (!pki_ezsignfoldertype_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsignfoldertype_id))
    {
    goto end; //Numeric
    }
    pki_ezsignfoldertype_id_local_var = malloc(sizeof(int));
    if(!pki_ezsignfoldertype_id_local_var)
    {
        goto end;
    }
    *pki_ezsignfoldertype_id_local_var = pki_ezsignfoldertype_id->valuedouble;

    // ezsignfoldertype_autocomplete_element_response->b_ezsignfoldertype_isactive
    cJSON *b_ezsignfoldertype_isactive = cJSON_GetObjectItemCaseSensitive(ezsignfoldertype_autocomplete_element_responseJSON, "bEzsignfoldertypeIsactive");
    if (cJSON_IsNull(b_ezsignfoldertype_isactive)) {
        b_ezsignfoldertype_isactive = NULL;
    }
    if (!b_ezsignfoldertype_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsignfoldertype_isactive))
    {
    goto end; //Bool
    }
    b_ezsignfoldertype_isactive_local_var = malloc(sizeof(int));
    if(!b_ezsignfoldertype_isactive_local_var)
    {
        goto end;
    }
    *b_ezsignfoldertype_isactive_local_var = b_ezsignfoldertype_isactive->valueint;


    if (s_ezsignfoldertype_name_x && !cJSON_IsNull(s_ezsignfoldertype_name_x)) s_ezsignfoldertype_name_x_local_str = strdup(s_ezsignfoldertype_name_x->valuestring);

    ezsignfoldertype_autocomplete_element_response_local_var = ezsignfoldertype_autocomplete_element_response_create_internal (
        e_ezsignfoldertype_privacylevel_local_nonprim,
        s_ezsignfoldertype_name_x_local_str,
        pki_ezsignfoldertype_id_local_var,
        b_ezsignfoldertype_isactive_local_var
        );

    if (!ezsignfoldertype_autocomplete_element_response_local_var) {
        goto end;
    }

    return ezsignfoldertype_autocomplete_element_response_local_var;
end:
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        e_ezsignfoldertype_privacylevel_local_nonprim = 0;
    }
    if (s_ezsignfoldertype_name_x_local_str) {
        free(s_ezsignfoldertype_name_x_local_str);
        s_ezsignfoldertype_name_x_local_str = NULL;
    }
    if (pki_ezsignfoldertype_id_local_var) {
        free(pki_ezsignfoldertype_id_local_var);
        pki_ezsignfoldertype_id_local_var = NULL;
    }
    if (b_ezsignfoldertype_isactive_local_var) {
        free(b_ezsignfoldertype_isactive_local_var);
        b_ezsignfoldertype_isactive_local_var = NULL;
    }
    return NULL;

}
