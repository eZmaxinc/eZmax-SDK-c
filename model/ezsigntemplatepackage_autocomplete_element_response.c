#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "ezsigntemplatepackage_autocomplete_element_response.h"



static ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response_create_internal(
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsigntemplatepackage_description,
    int *pki_ezsigntemplatepackage_id,
    int *b_ezsigntemplatepackage_isactive,
    int *b_disabled
    ) {
    ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response_local_var = malloc(sizeof(ezsigntemplatepackage_autocomplete_element_response_t));
    if (!ezsigntemplatepackage_autocomplete_element_response_local_var) {
        return NULL;
    }
    memset(ezsigntemplatepackage_autocomplete_element_response_local_var, 0, sizeof(ezsigntemplatepackage_autocomplete_element_response_t));
    ezsigntemplatepackage_autocomplete_element_response_local_var->_library_owned = 1;
    ezsigntemplatepackage_autocomplete_element_response_local_var->e_ezsignfoldertype_privacylevel = e_ezsignfoldertype_privacylevel;
    ezsigntemplatepackage_autocomplete_element_response_local_var->s_ezsigntemplatepackage_description = s_ezsigntemplatepackage_description;
    ezsigntemplatepackage_autocomplete_element_response_local_var->pki_ezsigntemplatepackage_id = pki_ezsigntemplatepackage_id;
    ezsigntemplatepackage_autocomplete_element_response_local_var->b_ezsigntemplatepackage_isactive = b_ezsigntemplatepackage_isactive;
    ezsigntemplatepackage_autocomplete_element_response_local_var->b_disabled = b_disabled;
    return ezsigntemplatepackage_autocomplete_element_response_local_var;
}

__attribute__((deprecated)) ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response_create(
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel,
    char *s_ezsigntemplatepackage_description,
    int *pki_ezsigntemplatepackage_id,
    int *b_ezsigntemplatepackage_isactive,
    int *b_disabled
    ) {
    int *pki_ezsigntemplatepackage_id_copy = NULL;
    if (pki_ezsigntemplatepackage_id) {
        pki_ezsigntemplatepackage_id_copy = malloc(sizeof(int));
        if (pki_ezsigntemplatepackage_id_copy) *pki_ezsigntemplatepackage_id_copy = *pki_ezsigntemplatepackage_id;
    }
    int *b_ezsigntemplatepackage_isactive_copy = NULL;
    if (b_ezsigntemplatepackage_isactive) {
        b_ezsigntemplatepackage_isactive_copy = malloc(sizeof(int));
        if (b_ezsigntemplatepackage_isactive_copy) *b_ezsigntemplatepackage_isactive_copy = *b_ezsigntemplatepackage_isactive;
    }
    int *b_disabled_copy = NULL;
    if (b_disabled) {
        b_disabled_copy = malloc(sizeof(int));
        if (b_disabled_copy) *b_disabled_copy = *b_disabled;
    }
    ezsigntemplatepackage_autocomplete_element_response_t *result = ezsigntemplatepackage_autocomplete_element_response_create_internal (
        e_ezsignfoldertype_privacylevel,
        s_ezsigntemplatepackage_description,
        pki_ezsigntemplatepackage_id_copy,
        b_ezsigntemplatepackage_isactive_copy,
        b_disabled_copy
        );
    if (!result) {
        free(pki_ezsigntemplatepackage_id_copy);
        free(b_ezsigntemplatepackage_isactive_copy);
        free(b_disabled_copy);
    }
    return result;
}

void ezsigntemplatepackage_autocomplete_element_response_free(ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response) {
    if(NULL == ezsigntemplatepackage_autocomplete_element_response){
        return ;
    }
    if(ezsigntemplatepackage_autocomplete_element_response->_library_owned != 1){
        fprintf(stderr, "WARNING: %s() does NOT free objects allocated by the user\n", "ezsigntemplatepackage_autocomplete_element_response_free");
        return ;
    }
    listEntry_t *listEntry;
    if (ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description) {
        free(ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description);
        ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description = NULL;
    }
    if (ezsigntemplatepackage_autocomplete_element_response->pki_ezsigntemplatepackage_id) {
        free(ezsigntemplatepackage_autocomplete_element_response->pki_ezsigntemplatepackage_id);
        ezsigntemplatepackage_autocomplete_element_response->pki_ezsigntemplatepackage_id = NULL;
    }
    if (ezsigntemplatepackage_autocomplete_element_response->b_ezsigntemplatepackage_isactive) {
        free(ezsigntemplatepackage_autocomplete_element_response->b_ezsigntemplatepackage_isactive);
        ezsigntemplatepackage_autocomplete_element_response->b_ezsigntemplatepackage_isactive = NULL;
    }
    if (ezsigntemplatepackage_autocomplete_element_response->b_disabled) {
        free(ezsigntemplatepackage_autocomplete_element_response->b_disabled);
        ezsigntemplatepackage_autocomplete_element_response->b_disabled = NULL;
    }
    free(ezsigntemplatepackage_autocomplete_element_response);
}

cJSON *ezsigntemplatepackage_autocomplete_element_response_convertToJSON(ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response) {
    cJSON *item = cJSON_CreateObject();

    // ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    if (ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__NULL == ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel) {
        goto fail;
    }
    cJSON *e_ezsignfoldertype_privacylevel_local_JSON = field_e_ezsignfoldertype_privacylevel_convertToJSON(ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel);
    if(e_ezsignfoldertype_privacylevel_local_JSON == NULL) {
        goto fail; // custom
    }
    cJSON_AddItemToObject(item, "eEzsignfoldertypePrivacylevel", e_ezsignfoldertype_privacylevel_local_JSON);
    if(item->child == NULL) {
        goto fail;
    }


    // ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description
    if (!ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "sEzsigntemplatepackageDescription", ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description) == NULL) {
    goto fail; //String
    }


    // ezsigntemplatepackage_autocomplete_element_response->pki_ezsigntemplatepackage_id
    if (!ezsigntemplatepackage_autocomplete_element_response->pki_ezsigntemplatepackage_id) {
        goto fail;
    }
    if(cJSON_AddNumberToObject(item, "pkiEzsigntemplatepackageID", *ezsigntemplatepackage_autocomplete_element_response->pki_ezsigntemplatepackage_id) == NULL) {
    goto fail; //Numeric
    }


    // ezsigntemplatepackage_autocomplete_element_response->b_ezsigntemplatepackage_isactive
    if (!ezsigntemplatepackage_autocomplete_element_response->b_ezsigntemplatepackage_isactive) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bEzsigntemplatepackageIsactive", *ezsigntemplatepackage_autocomplete_element_response->b_ezsigntemplatepackage_isactive) == NULL) {
    goto fail; //Bool
    }


    // ezsigntemplatepackage_autocomplete_element_response->b_disabled
    if (!ezsigntemplatepackage_autocomplete_element_response->b_disabled) {
        goto fail;
    }
    if(cJSON_AddBoolToObject(item, "bDisabled", *ezsigntemplatepackage_autocomplete_element_response->b_disabled) == NULL) {
    goto fail; //Bool
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response_parseFromJSON(cJSON *ezsigntemplatepackage_autocomplete_element_responseJSON){

    ezsigntemplatepackage_autocomplete_element_response_t *ezsigntemplatepackage_autocomplete_element_response_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    ezmax_api_definition__full_field_e_ezsignfoldertype_privacylevel__e e_ezsignfoldertype_privacylevel_local_nonprim = 0;

    char *s_ezsigntemplatepackage_description_local_str = NULL;

    // define the local variable for ezsigntemplatepackage_autocomplete_element_response->pki_ezsigntemplatepackage_id
    int *pki_ezsigntemplatepackage_id_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_autocomplete_element_response->b_ezsigntemplatepackage_isactive
    int *b_ezsigntemplatepackage_isactive_local_var = NULL;

    // define the local variable for ezsigntemplatepackage_autocomplete_element_response->b_disabled
    int *b_disabled_local_var = NULL;

    // ezsigntemplatepackage_autocomplete_element_response->e_ezsignfoldertype_privacylevel
    cJSON *e_ezsignfoldertype_privacylevel = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_autocomplete_element_responseJSON, "eEzsignfoldertypePrivacylevel");
    if (cJSON_IsNull(e_ezsignfoldertype_privacylevel)) {
        e_ezsignfoldertype_privacylevel = NULL;
    }
    if (!e_ezsignfoldertype_privacylevel) {
        goto end;
    }

    
    e_ezsignfoldertype_privacylevel_local_nonprim = field_e_ezsignfoldertype_privacylevel_parseFromJSON(e_ezsignfoldertype_privacylevel); //custom

    // ezsigntemplatepackage_autocomplete_element_response->s_ezsigntemplatepackage_description
    cJSON *s_ezsigntemplatepackage_description = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_autocomplete_element_responseJSON, "sEzsigntemplatepackageDescription");
    if (cJSON_IsNull(s_ezsigntemplatepackage_description)) {
        s_ezsigntemplatepackage_description = NULL;
    }
    if (!s_ezsigntemplatepackage_description) {
        goto end;
    }

    
    if(!cJSON_IsString(s_ezsigntemplatepackage_description))
    {
    goto end; //String
    }

    // ezsigntemplatepackage_autocomplete_element_response->pki_ezsigntemplatepackage_id
    cJSON *pki_ezsigntemplatepackage_id = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_autocomplete_element_responseJSON, "pkiEzsigntemplatepackageID");
    if (cJSON_IsNull(pki_ezsigntemplatepackage_id)) {
        pki_ezsigntemplatepackage_id = NULL;
    }
    if (!pki_ezsigntemplatepackage_id) {
        goto end;
    }

    
    if(!cJSON_IsNumber(pki_ezsigntemplatepackage_id))
    {
    goto end; //Numeric
    }
    pki_ezsigntemplatepackage_id_local_var = malloc(sizeof(int));
    if(!pki_ezsigntemplatepackage_id_local_var)
    {
        goto end;
    }
    *pki_ezsigntemplatepackage_id_local_var = pki_ezsigntemplatepackage_id->valuedouble;

    // ezsigntemplatepackage_autocomplete_element_response->b_ezsigntemplatepackage_isactive
    cJSON *b_ezsigntemplatepackage_isactive = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_autocomplete_element_responseJSON, "bEzsigntemplatepackageIsactive");
    if (cJSON_IsNull(b_ezsigntemplatepackage_isactive)) {
        b_ezsigntemplatepackage_isactive = NULL;
    }
    if (!b_ezsigntemplatepackage_isactive) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_ezsigntemplatepackage_isactive))
    {
    goto end; //Bool
    }
    b_ezsigntemplatepackage_isactive_local_var = malloc(sizeof(int));
    if(!b_ezsigntemplatepackage_isactive_local_var)
    {
        goto end;
    }
    *b_ezsigntemplatepackage_isactive_local_var = b_ezsigntemplatepackage_isactive->valueint;

    // ezsigntemplatepackage_autocomplete_element_response->b_disabled
    cJSON *b_disabled = cJSON_GetObjectItemCaseSensitive(ezsigntemplatepackage_autocomplete_element_responseJSON, "bDisabled");
    if (cJSON_IsNull(b_disabled)) {
        b_disabled = NULL;
    }
    if (!b_disabled) {
        goto end;
    }

    
    if(!cJSON_IsBool(b_disabled))
    {
    goto end; //Bool
    }
    b_disabled_local_var = malloc(sizeof(int));
    if(!b_disabled_local_var)
    {
        goto end;
    }
    *b_disabled_local_var = b_disabled->valueint;


    if (s_ezsigntemplatepackage_description && !cJSON_IsNull(s_ezsigntemplatepackage_description)) s_ezsigntemplatepackage_description_local_str = strdup(s_ezsigntemplatepackage_description->valuestring);

    ezsigntemplatepackage_autocomplete_element_response_local_var = ezsigntemplatepackage_autocomplete_element_response_create_internal (
        e_ezsignfoldertype_privacylevel_local_nonprim,
        s_ezsigntemplatepackage_description_local_str,
        pki_ezsigntemplatepackage_id_local_var,
        b_ezsigntemplatepackage_isactive_local_var,
        b_disabled_local_var
        );

    if (!ezsigntemplatepackage_autocomplete_element_response_local_var) {
        goto end;
    }

    return ezsigntemplatepackage_autocomplete_element_response_local_var;
end:
    if (e_ezsignfoldertype_privacylevel_local_nonprim) {
        e_ezsignfoldertype_privacylevel_local_nonprim = 0;
    }
    if (s_ezsigntemplatepackage_description_local_str) {
        free(s_ezsigntemplatepackage_description_local_str);
        s_ezsigntemplatepackage_description_local_str = NULL;
    }
    if (pki_ezsigntemplatepackage_id_local_var) {
        free(pki_ezsigntemplatepackage_id_local_var);
        pki_ezsigntemplatepackage_id_local_var = NULL;
    }
    if (b_ezsigntemplatepackage_isactive_local_var) {
        free(b_ezsigntemplatepackage_isactive_local_var);
        b_ezsigntemplatepackage_isactive_local_var = NULL;
    }
    if (b_disabled_local_var) {
        free(b_disabled_local_var);
        b_disabled_local_var = NULL;
    }
    return NULL;

}
